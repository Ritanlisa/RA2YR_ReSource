#include "capturemanagerclass.hpp"

bool  CaptureManagerClass::CanCapture(int this, uint32_t *a2)
{
    int v3; // edi
    int v4; // ebp
    int v5; // eax
    int v6; // esi
    bool result; // al
    result = 0;
    if ( a2 )
    v3 = *(uint32_t *)(this + 72);
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 60))(a2);
    if ( v4 != (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 60))(v3)
    && !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 3381)
    && (!a2[185] || (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) != 1)
    && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
    && !a2[179]
    && !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*a2 + 352))(a2) )
    if ( *(uint8_t *)(this + 64) || (v5 = *(uint32_t *)(this + 60), *(uint32_t *)(this + 52) < v5) || v5 == 1 )
    v6 = a2[43];
    if ( v6 != 19 && v6 != 18 )
    return 1;
    return result;
}

char __userpurge CaptureManagerClass::CaptureUnit@<al>(int a1@<ecx>, int a2@<ebp>, int a3)
{
    char result; // al
    uint32_t *v5; // esi
    int i; // edi
    int v7; // eax
    int v8; // ebp
    int v9; // edi
    int v10; // eax
    uint32_t *v11; // eax
    uint32_t *v12; // ebp
    wchar_t *v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    uint32_t *v18; // ebp
    int v19; // ecx
    int v20; // eax
    int v21; // ebx
    int v22; // edi
    int *v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // eax
    void **v27; // eax
    void **v28; // eax
    int v29; // [esp+4h] [ebp-28h]
    uint32_t *v30; // [esp+8h] [ebp-24h]
    int v31; // [esp+14h] [ebp-18h] BYREF
    int v32; // [esp+18h] [ebp-14h]
    int v33; // [esp+1Ch] [ebp-10h]
    int v34[3]; // [esp+20h] [ebp-Ch] BYREF
    if ( !a3 )
    return 0;
    v5 = (*(uint8_t *)(a3 + 20) & 1) != 0 ? (uint32_t *)a3 : 0;
    result = CaptureManagerClass::CanCapture(a1, v5);
    if ( result )
    if ( *(uint32_t *)(a1 + 60) == 1 )
    for ( i = *(uint32_t *)(a1 + 52) - 1; i >= 0; --i )
    CaptureManagerClass::FreeUnit((uint32_t *)a1, a1, a2, **(uint32_t ***)(*(uint32_t *)(a1 + 40) + 4 * i), v29, v30);
    v7 = (*(int (__thiscall **)(uint32_t *))(*v5 + 60))(v5);
    v8 = *v5;
    v9 = v7;
    v10 = (*(int (__thiscall **)(uint32_t, int))(**(uint32_t **)(a1 + 72) + 60))(*(uint32_t *)(a1 + 72), 1);
    result = (*(int (__thiscall **)(uint32_t *, int))(v8 + 980))(v5, v10);
    if ( result )
    v11 = __2_YAPAXI_Z(0x14u);
    v12 = 0;
    if ( v11 )
    v13 = CurrentFrame;
    v11[4] = 0;
    v11[2] = v13;
    v12 = v11;
    v12[1] = v9;
    *v12 = v5;
    v14 = *(uint32_t *)(a1 + 44);
    if ( *(uint32_t *)(a1 + 52) < v14
    || (*(uint8_t *)(a1 + 49) || !v14)
    && (v15 = *(uint32_t *)(a1 + 56), v15 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(a1 + 36) + 8))(a1 + 36, v14 + v15, 0) )
    v16 = *(uint32_t *)(a1 + 52);
    v17 = *(uint32_t *)(a1 + 40);
    *(uint32_t *)(a1 + 52) = v16 + 1;
    *(uint32_t *)(v17 + 4 * v16) = v12;
    v18 = v12 + 2;
    v5[176] = *(uint32_t *)(a1 + 72);
    v19 = RulesClass_Instance->PrerequisiteFactory[1];
    *v18 = CurrentFrame;
    v18[1] = v32;
    v18[2] = v19;
    if ( !v5
    || (*(int (__thiscall **)(uint32_t *))(*v5 + 44))(v5) != 1
    || !*(uint8_t *)(*((*(int (__thiscall **)(uint32_t *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (uint32_t *)1732) + 3603)
    || v5[43] != 16 )
    v20 = v5[43];
    if ( v20 != 19 && v20 != 18 )
    (*(void (__thiscall **)(uint32_t *))(*v5 + 976))(v5);
    CaptureManagerClass::DecideUnitFate((uint32_t *)a1, (int)v5);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a3 + 44))(a3) == 6 )
    v21 = a3;
    v22 = dword_89E178 * *(uint32_t *)(*(uint32_t *)(a3 + 1312) + 3828);
    else
    v21 = 0;
    v22 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v5 + 132))(v5) + 1548);
    v23 = (int *)(*(int (__thiscall **)(uint32_t *, int *))(*v5 + 72))(v5, v34);
    v24 = *v23;
    v25 = v23[1];
    v26 = v22 + v23[2];
    v31 = v24;
    v32 = v25;
    v33 = v26;
    v27 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v27 )
    v28 = AnimClass::ctor(
    v27,
    (void *)RulesClass_Instance->PrerequisiteBarracks[1],
    &v31,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v28 = 0;
    v5[178] = v28;
    if ( v28 )
    BuildingClass::AimTurret(v28, v5);
    if ( v21 )
    *(uint32_t *)(v5[178] + 256) = -1024;
    return 1;
    return result;
}

// 0x00472160
char CaptureManagerClass::DrawLinks(int a1, ...)
{
    int v1; // ecx
    int v2; // edi
    int v3; // eax
    int v4; // ebp
    char v5; // bl
    int *v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ebp
    int v11; // esi
    int v12; // eax
    uint32_t *v13; // ecx
    int *v14; // eax
    int v16; // [esp+0h] [ebp-30h]
    int v17; // [esp+4h] [ebp-2Ch]
    void *v18; // [esp+8h] [ebp-28h]
    int v19; // [esp+Ch] [ebp-24h]
    int v20; // [esp+10h] [ebp-20h]
    int v21; // [esp+28h] [ebp-8h]
    void *retaddr; // [esp+30h] [ebp+0h]
    va_list va; // [esp+38h] [ebp+8h] BYREF
    va_start(va, a1);
    v2 = v1;
    v3 = *(uint32_t *)(v1 + 72);
    HIBYTE(v20) = *(uint8_t *)(v3 + 131) != 0;
    v4 = *(uint32_t *)(v1 + 52) - 1;
    if ( v4 >= 0 )
    while ( 1 )
    v5 = 0;
    v6 = *(int **)(*(uint32_t *)(v2 + 40) + 4 * v4);
    v7 = *v6;
    v8 = v6[4];
    v9 = v6[2];
    if ( v9 == -1 )
    goto LABEL_5;
    if ( (int)CurrentFrame - v9 < v8 )
    break;
    LABEL_7:
    if ( *(uint8_t *)(v7 + 131) )
    v5 = 1;
    v3 = *(uint32_t *)(v2 + 72);
    if ( v3 )
    if ( v7 )
    LOBYTE(v3) = HIBYTE(v20);
    if ( HIBYTE(v20) || v5 )
    v10 = *(uint32_t *)(v7 + 156);
    v11 = *(uint32_t *)(v7 + 164);
    v12 = (*(int (__thiscall **)(int, int, int, void *, int, int))(*(uint32_t *)v7 + 132))(
    v7,
    v16,
    v17,
    v18,
    v19,
    v20);
    v13 = *(uint32_t **)(v2 + 72);
    HIBYTE(v20) = HIBYTE(v13);
    LOWORD(v20) = *(_WORD *)(v13[135] + 22265);
    BYTE2(v20) = *(uint8_t *)(v13[135] + 22267);
    v17 = v10;
    v4 = v21;
    v18 = retaddr;
    v19 = *(uint32_t *)(v12 + 988) + v11;
    v16 = 0;
    v14 = (int *)(*(int (__thiscall **)(uint32_t *))(*v13 + 176))(v13);
    LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0);
    if ( --v4 < 0 )
    return v3;
    v8 -= (int)CurrentFrame - v9;
    LABEL_5:
    if ( v8 > 0 )
    v5 = 1;
    goto LABEL_7;
    return v3;
}

// 0x004722A0
bool  CaptureManagerClass::CannotControlAnyMore(int this)
{
    return !*(uint8_t *)(this + 64) && *(uint32_t *)(this + 52) >= *(uint32_t *)(this + 60);
}

// 0x004722F0
int  CaptureManagerClass::GetOriginalOwner(uint32_t *this, int a2)
{
    int v2; // eax
    int v3; // edx
    uint32_t **i; // ecx
    v2 = *(this + 13) - 1;
    if ( v2 < 0 )
    return 0;
    v3 = *(this + 10);
    for ( i = (uint32_t **)(v3 + 4 * v2); **i != a2; --i )
    if ( --v2 < 0 )
    return 0;
    return *(uint32_t *)(*(uint32_t *)(v3 + 4 * v2) + 4);
}

// 0x00472640
char  CaptureManagerClass::NeedsToDrawLinks(uint32_t *this)
{
    int v1; // eax
    int v3; // eax
    int v4; // esi
    int i; // edi
    int v6; // eax
    int v7; // edx
    int v8; // ecx
    v1 = *(this + 18);
    if ( *(uint8_t *)(v1 + 131) )
    return 1;
    v3 = *(uint32_t *)(v1 + 284);
    if ( v3 && *(uint8_t *)(v3 + 131) )
    return 1;
    v4 = *(this + 13) - 1;
    if ( v4 >= 0 )
    for ( i = *(this + 10) + 4 * v4; ; i -= 4 )
    v6 = *(uint32_t *)i;
    if ( *(uint8_t *)(**(uint32_t **)i + 131) )
    return 1;
    v7 = *(uint32_t *)(v6 + 8);
    v8 = *(uint32_t *)(v6 + 16);
    if ( v7 == -1 )
    goto LABEL_12;
    if ( (int)CurrentFrame - v7 < v8 )
    break;
    LABEL_13:
    if ( --v4 < 0 )
    return 0;
    v8 -= (int)CurrentFrame - v7;
    LABEL_12:
    if ( v8 > 0 )
    return 1;
    goto LABEL_13;
    return 0;
}

// 0x004726C0
char  CaptureManagerClass::IsOverloading(int this, bool *a2)
{
    if ( !*(uint8_t *)(this + 64) || *(uint32_t *)(this + 52) <= *(uint32_t *)(this + 60) )
    return 0;
    *a2 = *(uint32_t *)(this + 68) > 0;
    return 1;
}

int  CaptureManagerClass::_vt13(int this, int a2)
{
    int result; // eax
    int v4; // esi
    int v5; // eax
    result = AbstractClass::ProcessPower((void*378 *)this);
    v4 = *(uint32_t *)(this + 72);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    return Power::TimerProcess(v5);
    return result;
}

// 0x00472720
int __stdcall CaptureManagerClass::LoadFromStream(int a1, int *a2)
{
    int *v2; // ebx
    int v3; // ebp
    int result; // eax
    uint32_t *v5; // edi
    int v6; // edx
    int v7; // eax
    uint32_t *v8; // eax
    wchar_t *v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // eax
    int v14; // edx
    int v15; // esi
    int v16; // [esp+34h] [ebp-18h] BYREF
    int v17; // [esp+38h] [ebp-14h]
    int v18; // [esp+3Ch] [ebp-10h]
    int v19; // [esp+44h] [ebp-8h]
    v2 = a2;
    v3 = a1;
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    v5 = 0;
    if ( result >= 0 )
    if ( v3 )
    AbstractClass::InitVtables((uint32_t *)v3, (int)&a2);
    CaptureManagerClass::Constructor_473140(0, 0);
    *(uint32_t *)(v3 + 36) = &DynamicVectorClass<ControlNode *>::`vftable';
    *(uint32_t *)(v3 + 56) = 10;
    *(uint32_t *)(v3 + 52) = 0;
    *(uint32_t *)v3 = &CaptureManagerClass::`vftable';
    *(uint32_t *)(v3 + 4) = &CaptureManagerClass::`vftable';
    *(uint32_t *)(v3 + 8) = &CaptureManagerClass::`vftable';
    *(uint32_t *)(v3 + 12) = &CaptureManagerClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 72));
    v6 = *v2;
    a1 = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 12))(v2, &a1, 4, 0);
    v18 = result;
    if ( result >= 0 )
    v7 = a1;
    v17 = 0;
    if ( a1 <= 0 )
    LABEL_19:
    v15 = 0;
    if ( v7 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(*(uint32_t *)(v3 + 40) + 4 * v15) + 4));
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    *(int **)(*(uint32_t *)(v3 + 40) + 4 * v15++));
    while ( v15 < a1 );
    return v18;
    else
    while ( 1 )
    v8 = __2_YAPAXI_Z(0x14u);
    if ( v8 )
    v9 = CurrentFrame;
    v8[4] = 0;
    v8[2] = v9;
    v5 = v8;
    v10 = *v2;
    a2 = 0;
    v16 = 0;
    result = (*(int (__stdcall **)(int *, int **, int, uint32_t))(v10 + 12))(v2, &a2, 4, 0);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*v2 + 12))(v2, &v16, 4, 0);
    v18 = result;
    if ( result < 0 )
    break;
    v5[1] = a2;
    *v5 = v16;
    v5[2] = CurrentFrame;
    v5[3] = v19;
    v5[4] = 0;
    v11 = *(uint32_t *)(v3 + 44);
    if ( *(uint32_t *)(v3 + 52) < v11
    || (*(uint8_t *)(v3 + 49) || !v11)
    && (v12 = *(uint32_t *)(v3 + 56), v12 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v3 + 36) + 8))(v3 + 36, v11 + v12, 0) )
    v13 = *(uint32_t *)(v3 + 52);
    v14 = *(uint32_t *)(v3 + 40);
    *(uint32_t *)(v3 + 52) = v13 + 1;
    *(uint32_t *)(v14 + 4 * v13) = v5;
    v7 = a1;
    if ( ++v17 >= a1 )
    goto LABEL_19;
    v5 = 0;
    return result;
}

int __stdcall CaptureManagerClass::_vt06(int *a1, int *a2, int a3)
{
    int Prefix; // edi
    int v5; // edx
    int result; // eax
    int v7; // ebp
    int v8; // edi
    int v9; // [esp+30h] [ebp+8h]
    Prefix = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    v9 = Prefix;
    if ( Prefix < 0 )
    return Prefix;
    v5 = *a2;
    a3 = a1[13];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v5 + 16))(a2, &a3, 4, 0);
    if ( result < 0 )
    return result;
    v7 = 0;
    if ( a3 <= 0 )
    return Prefix;
    while ( 1 )
    v8 = *(uint32_t *)(a1[10] + 4 * v7);
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, v8 + 4, 4, 0);
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, v8, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v7 >= a3 )
    return v9;
    return result;
}

int __stdcall CaptureManagerClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 108652930;
    a2[1] = 299085213;
    a2[2] = 268441278;
    a2[3] = 1822515787;
    return 0;
}

int CaptureManagerClass::_vt12()
{
    return 80;
}

int CaptureManagerClass::_vt11()
{
    return 66;
}

uint32_t * CaptureManagerClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    uint32_t *v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &CaptureManagerClass::`vftable';
    *(Block + 1) = &CaptureManagerClass::`vftable';
    *(Block + 2) = &CaptureManagerClass::`vftable';
    *(Block + 3) = &CaptureManagerClass::`vftable';
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6);
    if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 )
    do
    ++v3;
    *((uint32_t *)dword_89E0F4 + v3 - 1) = *((uint32_t *)dword_89E0F4 + v3);
    while ( v3 < dword_89E100 );
    v4 = (void *)*(Block + 10);
    *(Block + 9) = &VectorClass<ControlNode *>::`vftable';
    if ( v4 && *((uint8_t *)Block + 49) )
    __3_YAXPAX_Z(v4);
    *(Block + 10) = 0;
    *((uint8_t *)Block + 49) = 0;
    *(Block + 11) = 0;
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  CaptureManagerClass::vt_03_(int this)
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

unsigned int  CaptureManagerClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  CaptureManagerClass::vt_06_(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

char  CaptureManagerClass::_vt01(int *this, int a2)
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

char  CaptureManagerClass::sub_472B80(void *this, int a2, uint32_t *a3)
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

void  CaptureManagerClass::sub_472C30(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  CaptureManagerClass::sub_472C60(int this, uint32_t *a2)
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

unsigned int  CaptureManagerClass::sub_472CA0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  CaptureManagerClass::_vt02(void *this, int a2, uint32_t *a3)
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

int  CaptureManagerClass::_vt04(int *this, uint32_t *a2)
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

uint32_t * CaptureManagerClass::sub_473000(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ControlNode *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * CaptureManagerClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ControlNode *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

