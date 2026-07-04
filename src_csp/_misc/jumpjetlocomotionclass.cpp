#include "jumpjetlocomotionclass.hpp"

int __stdcall JumpjetLocomotionClass::sub_4AF610(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 20;
    if ( a1[20] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::sub_4AF8E0(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 80) )
    return -2147467259;
    *(uint32_t *)(a1 + 80) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_4AF930(int a1, uint32_t *a2)
{
    int v3; // eax
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 + 80);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(uint32_t *)(a1 + 80) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_4AF970(int a1)
{
    return !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20)
    && *(uint32_t *)(a1 + 80)
    && *(uint8_t *)(a1 + 77)
    && !*(uint8_t *)(*(uint32_t *)(a1 - 12) + 1709);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4AFB40(uint32_t *a1, int a2)
{
    int v3; // [esp+8h] [ebp-Ch]
    a1[7] = a2;
    a1[6] = a2;
    a1[8] = CurrentFrame;
    a1[9] = v3;
    a1[10] = 0;
    a1[11] = 0;
    return a1 + 8;
}

bool __stdcall JumpjetLocomotionClass::sub_4AFB80(int a1)
{
    if ( *(uint32_t *)(a1 + 48) != g_DDraw_ClipRect || *(_QWORD *)(a1 + 52) != qword_8A0794 )
    return 1;
    return (*(uint32_t *)(a1 + 60) != g_DDraw_ClipRect || *(_QWORD *)(a1 + 64) != qword_8A0794)
    && (*(uint32_t *)(a1 + 60) != *(uint32_t *)(*(uint32_t *)(a1 + 8) + 156)
    || *(uint32_t *)(a1 + 64) != *(uint32_t *)(*(uint32_t *)(a1 + 8) + 160));
}

bool __stdcall JumpjetLocomotionClass::sub_4AFC20(int a1)
{
    if ( TimerClass::Active(*(uint32_t *)(a1 + 8) + 904) )
    return 1;
    return (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)a1 + 16))(a1)
    && (*(uint32_t *)(a1 + 60) != g_DDraw_ClipRect || *(_QWORD *)(a1 + 64) != qword_8A0794)
    && (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 1336))(*(uint32_t *)(a1 + 8)) > 0;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4AFC90(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    v2 = a1[13];
    v3 = a1[14];
    *a2 = a1[12];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4AFCC0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // esi
    if ( a1[15] == g_DDraw_ClipRect && *((_QWORD *)a1 + 8) == qword_8A0794 )
    v4 = a1[2];
    v5 = v4 + 156;
    v6 = *(uint32_t *)(v4 + 156);
    v7 = *(uint32_t *)(v4 + 160);
    v8 = *(uint32_t *)(v5 + 8);
    *a2 = v6;
    a2[1] = v7;
    a2[2] = v8;
    return a2;
    else
    v2 = a1[16];
    v3 = a1[17];
    *a2 = a1[15];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4AFD40(int a1, uint32_t *a2, unsigned int a3, unsigned int a4)
{
    uint32_t *result; // eax
    unsigned int v5; // ecx
    unsigned int v6; // edx
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 892))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 896))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 468))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 472))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = a2;
    v5 = a3;
    v6 = a4;
    *(uint32_t *)(a1 + 48) = a2;
    *(uint32_t *)(a1 + 52) = v5;
    *(uint32_t *)(a1 + 56) = v6;
    if ( result != (uint32_t *)g_DDraw_ClipRect || __PAIR64__(v6, v5) != qword_8A0794 )
    a2 = result;
    a3 = v5;
    a4 = v6;
    result = Coord::To_Cell(&MapClass_Instance, &a2);
    if ( (result[80] & 0x100) != 0 )
    result = (uint32_t *)(dword_8A07C4 + *(uint32_t *)(a1 + 56));
    *(uint32_t *)(a1 + 56) = result;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_4AFE00(int a1)
{
    int v1; // eax
    int v2; // esi
    double v3; // st7
    int result; // eax
    if ( *(uint32_t *)(a1 + 60) != g_DDraw_ClipRect || *(_QWORD *)(a1 + 64) != qword_8A0794 )
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 3220) )
    v1 = *(uint32_t *)(a1 + 8);
    if ( !*(uint8_t *)(v1 + 1744) )
    v2 = *(uint32_t *)(v1 + 1736);
    if ( v2 )
    do
    if ( !*(uint32_t *)(v2 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(v2 + 1652) + 72))(*(uint32_t *)(v2 + 1652));
    v2 = *(uint32_t *)(v2 + 1736);
    while ( v2 && v2 != *(uint32_t *)(v2 + 1736) );
    if ( *(double *)(a1 + 76) >= 0.300000011920929 )
    v3 = 0.300000011920929;
    else
    v3 = *(double *)(a1 + 76);
    *(double *)(a1 + 76) = v3;
    *(uint32_t *)(a1 + 48) = g_DDraw_ClipRect;
    result = qword_8A0794;
    *(_QWORD *)(a1 + 52) = qword_8A0794;
    return result;
}

float *__stdcall JumpjetLocomotionClass::sub_4B0410(uint32_t *a1, float *a2, uint32_t *a3)
{
    int v3; // edi
    double v4; // st7
    int v5; // edx
    int v6; // eax
    int v7; // edx
    float v9[12]; // [esp+Ch] [ebp-30h] BYREF
    v3 = a1[11];
    if ( v3 )
    v5 = a1[8];
    v6 = a1[10];
    if ( v5 != -1 )
    if ( (int)CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)CurrentFrame - v5;
    v4 = (double)(v3 - v6) / (double)(int)a1[11];
    else
    v4 = 1.0;
    if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
    if ( a3 )
    *a3 = -1;
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_4B04D0(int *a1)
{
    int v1; // edi
    int v2; // eax
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)a1[2] + 444))(a1[2]);
    return (*(int (__stdcall **)(int *, uint32_t))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284));
}

char __stdcall JumpjetLocomotionClass::sub_4B0C40(int a1, int a2, unsigned int a3, __int64 a4)
{
    int v4; // eax
    int v5; // esi
    unsigned int *v6; // edi
    int v7; // ecx
    __int64 v8; // kr00_8
    uint32_t *v9; // eax
    int v11; // [esp-4h] [ebp-20h]
    unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
    __int64 v13; // [esp+14h] [ebp-8h]
    *(uint32_t *)(a1 + 84) = a2;
    *(uint32_t *)(a1 + 88) = 0;
    v4 = g_DDraw_ClipRect;
    if ( a3 != g_DDraw_ClipRect || a4 != qword_8A0794 )
    v5 = a1 - 4;
    v13 = a4;
    v6 = (unsigned int *)(a1 - 4 + 64);
    v12 = a3;
    if ( *v6 != g_DDraw_ClipRect || __PAIR64__(*(uint32_t *)(a1 - 4 + 72), *(uint32_t *)(a1 + 64)) != qword_8A0794 )
    *v6 = g_DDraw_ClipRect;
    *(uint32_t *)(a1 + 64) = qword_8A0794;
    v7 = HIDWORD(qword_8A0794);
    *(uint8_t *)(v5 + 99) = 0;
    *(uint32_t *)(a1 - 4 + 72) = v7;
    v4 = g_DDraw_ClipRect;
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_8A0794, v4)
    || (LOBYTE(v4) = BYTE4(qword_8A0794), HIDWORD(a4) != HIDWORD(qword_8A0794)) )
    v8 = v13;
    *(uint8_t *)(v5 + 99) = 1;
    *v6 = a3;
    *(_QWORD *)(a1 + 64) = v8;
    v11 = *(uint32_t *)(v5 + 12);
    v9 = Coord::To_Cell(&MapClass_Instance, &v12);
    if ( !CrateClass::ProcessPickup(v9, v11) || *(uint8_t *)(*(uint32_t *)(v5 + 12) + 129) )
    LOBYTE(v4) = *(uint8_t *)(*(uint32_t *)(v5 + 12) + 144);
    if ( (uint8_t)v4 )
    LOBYTE(v4) = g_DDraw_ClipRect;
    *v6 = g_DDraw_ClipRect;
    *(_QWORD *)(a1 + 64) = qword_8A0794;
    *(uint8_t *)(v5 + 99) = 0;
    else
    JumpjetLocomotion::MoveTo(a1 - 4, &v12, 1);
    LOBYTE(v4) = a1 + 48;
    *(uint32_t *)(a1 + 48) = a3;
    *(_QWORD *)(a1 + 52) = a4;
    *(uint32_t *)(a1 + 76) = 0;
    *(uint32_t *)(a1 + 80) = 1072693248;
    return v4;
}

char __stdcall JumpjetLocomotionClass::sub_4B0EF0(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_4B4820(int a1)
{
    return 2;
}

int __stdcall JumpjetLocomotionClass::sub_4B4870(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_4B4880(int a1)
{
    return JumpjetLocomotionClass::CheckState(a1);
}

char __stdcall JumpjetLocomotionClass::sub_4B48D0(int a1, int a2)
{
    char result; // al
    result = a1 + 60;
    if ( *(uint32_t *)(a1 + 60) != g_DDraw_ClipRect || *(_QWORD *)(a1 + 64) != qword_8A0794 )
    return JumpjetLocomotion::MoveTo(a1 - 4, (uint32_t *)(a1 + 60), a2);
    return result;
}

bool __stdcall JumpjetLocomotionClass::sub_4B4920(int a1, int a2, int a3, int a4)
{
    int v4; // esi
    int *v5; // eax
    int v6; // ecx
    unsigned int v7; // edx
    unsigned int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int *v13; // eax
    int v14; // edx
    int *v15; // eax
    int v16; // ebx
    int v17; // ebp
    uint32_t *v18; // eax
    int v20[2]; // [esp+Ch] [ebp-20h] BYREF
    uint32_t v21[2]; // [esp+14h] [ebp-18h] BYREF
    int v22; // [esp+1Ch] [ebp-10h]
    int v23; // [esp+20h] [ebp-Ch]
    int v24; // [esp+24h] [ebp-8h]
    unsigned int v25; // [esp+28h] [ebp-4h]
    v4 = a1;
    v5 = (int *)(*(int (__stdcall **)(int, uint32_t *))(*(uint32_t *)a1 + 24))(a1, v21);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v23 = v6;
    v24 = v7;
    v25 = v8;
    if ( v6 == g_DDraw_ClipRect && __PAIR64__(v8, v7) == qword_8A0794 )
    return 0;
    if ( !*(uint8_t *)(v4 + 92) )
    v9 = *(uint32_t *)(v4 + 84);
    if ( v9 != -1 )
    v10 = byte_7E7B28[12 * v9];
    if ( v10 )
    v11 = 4 * v10;
    v12 = dword_7E7A34[v11];
    if ( v12 > -1 )
    v13 = (int *)(dword_7E7A28[v11] + 12 * v12);
    a1 = v13[2];
    if ( *(uint32_t *)(v4 + 88) < v12 )
    v14 = v13[1];
    v20[0] = *v13;
    v20[1] = v14;
    v15 = JumpjetLocomotion::TransformCoords((uint32_t *)(v4 - 4), v21, v20, &a1);
    v16 = *v15;
    v17 = v15[1];
    v18 = (uint32_t *)(*(uint32_t *)(v4 + 8) + 156);
    v21[0] = *v18;
    v21[1] = v18[1];
    v22 = v18[2];
    if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256)
    && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
    && (int)abs32(v22 - a4) <= dword_8A07D0 )
    return 1;
    return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256)
    && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
    && (int)abs32(v25 - a4) <= dword_8A07D0;
}

char __stdcall JumpjetLocomotionClass::sub_4B4B00(unsigned int a1)
{
    unsigned int v1; // edi
    int v2; // eax
    int v3; // ecx
    int v4; // esi
    __int16 v5; // bx
    int v6; // edx
    __int16 v7; // dx
    char v8; // al
    v1 = a1;
    v2 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 1504);
    if ( v2 < -1 || v2 > 8 )
    return 0;
    v3 = 12 * *(uint32_t *)(a1 + 84) + 8289064;
    v4 = *(uint8_t *)(a1 + 92) ? (char)algn_7E7B29[12 * *(uint32_t *)(a1 + 84)] : byte_7E7B28[12 * *(uint32_t *)(a1 + 84)];
    if ( v2 == 8 )
    return 0;
    if ( v2 == -1 )
    return 0;
    LOBYTE(v5) = 0;
    HIBYTE(v5) = algn_7E7B29[12 * *(uint32_t *)(a1 + 84) + 3];
    LOWORD(a1) = v5;
    if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 )
    return 0;
    v6 = *(uint32_t *)(v1 + 88);
    if ( dword_7E7A2C[4 * v4] == v6
    && v6
    && (LOBYTE(v7) = 0,
    HIBYTE(v7) = *(uint8_t *)(v3 + 4),
    LOWORD(a1) = v7,
    (v8 = byte_7E7B28[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7E7A30[4 * v8] )
    return 1;
    else
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_4B4BE0(int a1)
{
    *(uint8_t *)(a1 + 97) = 0;
    return a1;
}

int __stdcall JumpjetLocomotionClass::sub_4B4BF0(int a1)
{
    *(uint8_t *)(a1 + 97) = 1;
    return a1;
}

int __stdcall JumpjetLocomotionClass::sub_4B4C00(int a1)
{
    return *(uint32_t *)(a1 + 84);
}

int __stdcall JumpjetLocomotionClass::sub_4B4C10(int a1)
{
    return *(uint32_t *)(a1 + 88);
}

int __stdcall JumpjetLocomotionClass::sub_4B4C20(int a1)
{
    return *(uint32_t *)(a1 + 72);
}

int __stdcall JumpjetLocomotionClass::sub_4B4D90(int a1, const void *a2, int *a3)
{
    return DriveLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

char __stdcall JumpjetLocomotionClass::sub_4B5B30(int a1)
{
    return 1;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4B5B40(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    v2 = a1[8];
    v3 = a1[9];
    *a2 = a1[7];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

void **__stdcall JumpjetLocomotionClass::sub_4B6040(uint32_t *a1, double VeteranCombat_low, int a3)
{
    int v3; // edi
    void **result; // eax
    int *v5; // esi
    int v6; // ecx
    int v7; // edx
    double v8; // st7
    double v9; // st7
    char v10; // al
    int v11; // ecx
    int v12; // ecx
    __int64 VeteranSpeed; // [esp-Ch] [ebp-28h]
    uint32_t *v14; // [esp-8h] [ebp-24h]
    __int64 v15; // [esp-8h] [ebp-24h]
    double v16; // [esp+8h] [ebp-14h]
    int v17[3]; // [esp+10h] [ebp-Ch] BYREF
    v3 = (int)a1;
    result = (void **)a1[7];
    v5 = a1 + 7;
    if ( result == (void **)dword_8A0820 )
    result = (void **)dword_8A0824;
    if ( a1[8] == dword_8A0824 )
    result = (void **)dword_8A0828;
    if ( a1[9] == dword_8A0828 )
    v6 = HIDWORD(VeteranCombat_low);
    v7 = a3;
    v14 = a1 + 7;
    *v5 = LODWORD(VeteranCombat_low);
    v5[1] = v6;
    v5[2] = v7;
    *(uint32_t *)(v3 + 36) = Cell::GetGroundHeight(v14);
    v17[0] = *v5;
    v17[1] = v5[1];
    v17[2] = LODWORD(RulesClass_Instance->VeteranCombat) + v5[2];
    VeteranSpeed = RulesClass_Instance->VeteranSpeed;
    VeteranCombat_low = (double)SLODWORD(RulesClass_Instance->VeteranCombat);
    v8 = Math::Sin(*(double *)&VeteranSpeed);
    v17[0] = Math::RoundToInt(VeteranCombat_low / v8 + (double)v17[0]);
    if ( !IsCoordVisibleMap(&MapClass_Instance, v17) )
    *(uint8_t *)(v3 + 24) = 1;
    v15 = RulesClass_Instance->VeteranSpeed;
    v16 = (double)*v5;
    VeteranCombat_low = (double)SLODWORD(RulesClass_Instance->VeteranCombat);
    v9 = Math::Sin(*(double *)&v15);
    v17[0] = Math::RoundToInt(v16 - VeteranCombat_low / v9);
    (*(void (__thiscall **)(uint32_t, int *))(**(uint32_t **)(v3 + 8) + 436))(*(uint32_t *)(v3 + 8), v17);
    v10 = (*(int (__thiscall **)(uint32_t, int *, int))(**(uint32_t **)(v3 + 8) + 216))(*(uint32_t *)(v3 + 8), v17, 128);
    v11 = *(uint32_t *)(v3 + 8);
    if ( v10 )
    (*(void (__thiscall **)(int, int *))(*(uint32_t *)v11 + 436))(v11, v17);
    v12 = *(uint32_t *)(v3 + 8);
    LOWORD(a1) = 0x8000;
    FacingClass::Set_SyncLog((char *)(v12 + 904), &a1);
    result = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( result )
    return AnimClass::ctor(
    result,
    (void *)RulesClass_Instance->PrerequisiteProc[2],
    v17,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    return (void **)(*(int (__thiscall **)(int, int *, int))(*(uint32_t *)v11 + 216))(v11, v17, 128);
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_4B63B0(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 20) )
    return -2147467259;
    *(uint32_t *)(a1 + 20) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_4B6400(int a1, uint32_t *a2)
{
    int v3; // eax
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 + 20);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(uint32_t *)(a1 + 20) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_4B6440(int a1)
{
    return !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20) && *(uint32_t *)(a1 + 20);
}

int __stdcall JumpjetLocomotionClass::sub_4B64D0(int a1)
{
    return 3;
}

int __stdcall JumpjetLocomotionClass::sub_4B64E0(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 5;
    if ( a1[5] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::sub_4B6610(int a1)
{
    return (*(int (__stdcall **)(int))(*(uint32_t *)a1 + 16))(a1);
}

char __stdcall JumpjetLocomotionClass::_vt41(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::_vt47(int a1)
{
    return -1;
}

int __stdcall JumpjetLocomotionClass::_vt48(int a1)
{
    return -1;
}

int __stdcall JumpjetLocomotionClass::_vt49(int a1)
{
    return -1;
}

int __stdcall JumpjetLocomotionClass::sub_4B6740(int a1, const void *a2, int *a3)
{
    return DropPodLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

int __stdcall JumpjetLocomotionClass::sub_4B6770(int a1, const void *a2, int *a3)
{
    return DropPodLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

int __stdcall JumpjetLocomotionClass::sub_4CCA20(int a1, uint32_t *a2)
{
    int v2; // esi
    v2 = StreamClass::ResetPosition(a1, (int)a2);
    if ( !v2 )
    if ( a2 && (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) == 2 && *(uint8_t *)(a2[433] + 3597) )
    *(uint8_t *)(a1 + 20) = 1;
    return 0;
    *(uint8_t *)(a1 + 20) = 0;
    return v2;
}

bool __stdcall JumpjetLocomotionClass::sub_4CCAC0(int a1)
{
    return *(double *)(a1 + 68) != 0.0;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4CCAE0(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // edx
    int v4; // esi
    uint32_t *v5; // edi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[7];
    v4 = a1[8];
    v5 = a2;
    *a2 = a1[6];
    else
    result = a2;
    v3 = dword_8B3C7C;
    v4 = dword_8B3C80;
    v5 = a2;
    *a2 = dword_8B3C78;
    v5[1] = v3;
    v5[2] = v4;
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_4CCB40(int a1)
{
    int v1; // eax
    int *v2; // ecx
    char result; // al
    int v4; // ecx
    if ( !*(uint8_t *)(a1 + 77) && !*(uint8_t *)(a1 + 76) && *(double *)(a1 + 60) >= 1.0 && !*(uint32_t *)(a1 + 52) )
    v1 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8));
    *(uint32_t *)(a1 + 52) = (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 188))(v1);
    v2 = *(int **)(a1 + 8);
    if ( v2[27] > 0
    && !*(uint8_t *)(a1 + 77)
    && !*(uint8_t *)(a1 + 76)
    && (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 512))(v2) )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 492))(*(uint32_t *)(a1 + 8));
    JumpjetLocomotionClass::ProcessRotation(a1 - 4);
    DamageArea::ApplyScatter(a1 - 4);
    result = (*(int (__stdcall **)(int))(*(uint32_t *)a1 + 96))(a1);
    if ( result )
    v4 = *(uint32_t *)(a1 + 8);
    if ( *(uint8_t *)(v4 + 144) )
    if ( *(int *)(v4 + 108) > 0
    && (*(uint32_t *)(a1 + 24) != dword_8B3C78
    || *(uint32_t *)(a1 + 28) != dword_8B3C7C
    || *(uint32_t *)(a1 + 32) != dword_8B3C80)
    && !*(uint8_t *)(a1 + 77)
    && !*(uint8_t *)(a1 + 76)
    && (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 456))(v4) > 0 )
    LandFootClassAtPosition(
    a1 - 4,
    *(uint32_t *)(a1 + 32),
    1,
    *(float *)(a1 + 24),
    *(uint32_t *)(a1 + 28),
    *(uint32_t *)(a1 + 32));
    if ( *(int *)(*(uint32_t *)(a1 + 8) + 108) > 0 )
    FootClass::ProcessDeployMission(a1 - 4);
    JumpjetLocomotionClass::IsMapCoordVisible((uint32_t *)(a1 - 4));
    return (*(int (__stdcall **)(int))(*(uint32_t *)a1 + 16))(a1);
    else
    return 0;
    return result;
}

float *__stdcall JumpjetLocomotionClass::sub_4CF610(int a1, float *a2, signed int a3)
{
    int *v3; // edi
    int v4; // esi
    int v5; // ecx
    int v6; // eax
    int v7; // eax
    double v8; // st7
    int v9; // eax
    float *result; // eax
    float v11; // [esp+0h] [ebp-3Ch]
    float v12; // [esp+0h] [ebp-3Ch]
    float v13; // [esp+0h] [ebp-3Ch]
    float v14; // [esp+0h] [ebp-3Ch]
    float v15[12]; // [esp+Ch] [ebp-30h] BYREF
    Matrix3x4::Identity(v15);
    v3 = (int *)a3;
    v4 = a1;
    if ( a3 )
    *v3 |= 8
    * (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(a1 + 8) + 928), &a3) >> 10) + 1) >> 1) & 0x1F);
    a3 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(v4 + 8) + 928), &a1) >> 10) + 1) >> 1) & 0x1F)
    - 8;
    v11 = (double)a3 * -0.1963495408493621;
    Matrix2D::Rotate(v15, v11);
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 456))(*(uint32_t *)(v4 + 8)) > 0 )
    v5 = *(uint32_t *)(v4 + 8);
    if ( *(uint8_t *)(v5 + 1061) )
    Matrix3x3::RotateX(v15, *(float *)(v5 + 808));
    if ( *(double *)(v4 + 68) <= *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8))
    + 936) )
    Matrix3D::RotateZ(v15, *(float *)(*(uint32_t *)(v4 + 8) + 812));
    else
    v12 = *(float *)(*(uint32_t *)(v4 + 8) + 812)
    + *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 944);
    Matrix3D::RotateZ(v15, v12);
    if ( v3 )
    *v3 = -1;
    else if ( *(double *)(v4 + 68) > *(double *)((*(int (__thiscall **)(int))(*(uint32_t *)v5 + 132))(v5) + 936) )
    if ( *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 944) != 0.0 )
    if ( v3 )
    v6 = *v3;
    LOBYTE(v6) = *v3 | 4;
    *v3 = v6;
    v13 = *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 944);
    Matrix3D::RotateZ(v15, v13);
    if ( *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 928) != 0.0 )
    if ( JumpjetLocomotionClass::StubReturnZero_5((__int16 *)(*(uint32_t *)(v4 + 8) + 928)) )
    if ( v3 )
    v7 = *v3;
    LOBYTE(v7) = *v3 | 1;
    *v3 = v7;
    v8 = *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 928);
    else
    if ( !JumpjetLocomotionClass::StubReturnZero_6((__int16 *)(*(uint32_t *)(v4 + 8) + 928)) )
    goto LABEL_25;
    if ( v3 )
    v9 = *v3;
    LOBYTE(v9) = *v3 | 2;
    *v3 = v9;
    v8 = -*(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v4 + 8) + 132))(*(uint32_t *)(v4 + 8)) + 928);
    v14 = v8;
    Matrix3x3::RotateX(v15, v14);
    LABEL_25:
    result = a2;
    qmemcpy(a2, v15, 0x30u);
    return result;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4CF830(int a1, uint32_t *a2)
{
    int v2; // edi
    int v3; // ebp
    int v4; // ecx
    int (__stdcall ***v5)(uint32_t, void *, int *); // eax
    int v6; // esi
    int v7; // ebx
    int v8; // esi
    double v9; // st7
    uint32_t *v10; // esi
    int v11; // eax
    bool v12; // zf
    int v14; // [esp+18h] [ebp-4h] BYREF
    v2 = a1;
    v3 = 0;
    v4 = 0;
    v5 = *(int (__stdcall ****)(uint32_t, void *, int *))(a1 + 8);
    a1 = 0;
    if ( v5 )
    v6 = (**v5)(v5, &unk_822410, &v14);
    if ( v6 >= 0 )
    v7 = v14;
    Release3COM(&a1);
    v4 = v7;
    a1 = v7;
    else
    Release3COM(&a1);
    v4 = 0;
    a1 = 0;
    if ( v6 < 0 && v6 != -2147467262 )
    WinAPI::Wrapper(v6);
    v8 = 0;
    if ( v4 )
    v8 = (*(int (__stdcall **)(int))(*(uint32_t *)v4 + 12))(v4);
    if ( !*(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v2 + 8) + 132))(*(uint32_t *)(v2 + 8)) + 3221)
    && !*(uint8_t *)(v2 + 77)
    && !*(uint8_t *)(v2 + 76)
    && (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v2 + 8) + 456))(*(uint32_t *)(v2 + 8)) > v8 )
    v14 = (int)CurrentFrame % 20;
    v9 = Math::SinCos((double)((int)CurrentFrame % 20) * 0.3141592653589793);
    v3 = Math::RoundToInt(v9 * 1.5 + 0.5);
    v10 = a2;
    *a2 = 0;
    v11 = a1;
    v12 = a1 == 0;
    v10[1] = v3;
    if ( !v12 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v11 + 8))(v11);
    return v10;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_4CF940(int a1, uint32_t *a2)
{
    *a2 = 0;
    a2[1] = 0;
    return a2;
}

float *__stdcall JumpjetLocomotionClass::sub_4CFB00(int a1, float *a2, uint32_t *a3)
{
    uint32_t *v3; // eax
    int v4; // ebp
    float v6; // [esp+0h] [ebp-88h]
    int v7; // [esp+18h] [ebp-70h] BYREF
    uint32_t v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
    float v9[12]; // [esp+28h] [ebp-60h] BYREF
    char v10[48]; // [esp+58h] [ebp-30h] BYREF
    v3 = (uint32_t *)(*(uint32_t *)(a1 + 8) + 156);
    v8[0] = *v3;
    v8[1] = v3[1];
    v8[2] = v3[2];
    v4 = *((unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, v8) + 284);
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 3221) )
    v4 = 0;
    qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9));
    v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1)
    & 0x1F)
    - 8)
    * -0.1963495408493621;
    Matrix2D::Rotate(v9, v6);
    if ( a3 && *a3 != -1 )
    *a3 = 32 * (v4 + (*a3 << 6));
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F;
    qmemcpy(a2, v9, 0x30u);
    return a2;
}

char __stdcall JumpjetLocomotionClass::sub_4CFC10(int a1, int a2)
{
    return FacingClass::Set_SyncLog((char *)(*(uint32_t *)(a1 + 8) + 928), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_4CFCF0(int a1)
{
    return (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 456))(*(uint32_t *)(a1 + 8)) > 0 ? 4 : 2;
}

int __stdcall JumpjetLocomotionClass::sub_4CFD20(uint8_t *a1)
{
    if ( (*(unsigned __int8 (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 16))(a1) )
    a1[79] = 1;
    *((uint32_t *)a1 + 20) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 20, 30);
    if ( Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) < 50 )
    *((uint32_t *)a1 + 20) = -*((uint32_t *)a1 + 20);
    (*(void (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 72))(a1);
    *((uint32_t *)a1 + 21) = 0;
    return StreamClass::ClearDirty(a1);
}

char __stdcall JumpjetLocomotionClass::sub_4CFD90(int a1)
{
    return StreamClass::GetDirty(a1);
}

bool __stdcall JumpjetLocomotionClass::sub_4CFDA0(int a1)
{
    return *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 3367) == 0;
}

int __stdcall JumpjetLocomotionClass::sub_4CFE50(uint8_t *a1)
{
    if ( a1[77] )
    return 1;
    if ( a1[76] )
    return 0;
    return 3 - ((*(unsigned __int8 (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 16))(a1) != 0);
}

int __stdcall JumpjetLocomotionClass::_vt0(int a1, const void *a2, uint32_t *a3)
{
    return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

float *__stdcall JumpjetLocomotionClass::sub_5142A0(int a1, float *a2, uint32_t *a3)
{
    int v3; // ecx
    float *v4; // esi
    float v6[12]; // [esp+8h] [ebp-30h] BYREF
    v3 = *(uint32_t *)(a1 + 8);
    if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 )
    if ( a3 )
    *a3 = -1;
    v4 = Audio3D::ComputeRotation(a1, v6, a3);
    qmemcpy(a2, v4, 0x30u);
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_514CB0(uint32_t *a1, uint32_t *a2)
{
    int v2; // ecx
    int v3; // edx
    int v4; // edx
    int v5; // eax
    if ( a1[5] == g_ScoreDisplayState1
    && (v2 = g_ScoreDisplayState2, a1[6] == g_ScoreDisplayState2)
    && (v3 = g_ScoreDisplayState3, a1[7] == g_ScoreDisplayState3) )
    *a2 = g_ScoreDisplayState1;
    a2[1] = v2;
    a2[2] = v3;
    return a2;
    else
    v4 = a1[6];
    v5 = a1[7];
    *a2 = a1[5];
    a2[1] = v4;
    a2[2] = v5;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_514D10(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // esi
    if ( a1[8] == g_ScoreDisplayState1 && a1[9] == g_ScoreDisplayState2 && a1[10] == g_ScoreDisplayState3 )
    v5 = a1[2];
    v6 = v5 + 156;
    v7 = *(uint32_t *)(v5 + 156);
    v8 = *(uint32_t *)(v5 + 160);
    v9 = *(uint32_t *)(v6 + 8);
    *a2 = v7;
    a2[1] = v8;
    a2[2] = v9;
    return a2;
    else
    v2 = a1[9];
    v3 = a1[10];
    *a2 = a1[8];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_514D90(int a1, int a2, int a3, int a4)
{
    int v4; // ecx
    int v5; // ebx
    int v6; // esi
    int v7; // ebp
    uint32_t *v8; // edi
    int v9; // eax
    uint32_t *result; // eax
    int v11; // edi
    int *v12; // esi
    int v13; // edi
    int v14; // esi
    int v15; // edi
    int v16; // ebx
    _WORD *v17; // eax
    bool v18; // bl
    int v19; // ecx
    uint32_t v20[3]; // [esp+10h] [ebp-Ch] BYREF
    v4 = a4;
    v5 = a2;
    v6 = a1;
    v7 = a3;
    v8 = (uint32_t *)(a1 + 20);
    v9 = a1 + 20;
    *(uint32_t *)(a1 + 20) = a2;
    *(uint32_t *)(v9 + 4) = v7;
    *(uint32_t *)(v9 + 8) = v4;
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v6 + 8) + 896))(*(uint32_t *)(v6 + 8));
    if ( !(uint8_t)result )
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v6 + 96))(v6)
    && (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v6 + 100))(v6)
    && HouseClass::IonSensitivesShouldBeOffline() )
    (*(void (__stdcall **)(int))(*(uint32_t *)v6 + 92))(v6);
    *(uint32_t *)(v6 + 28) = Cell::GetGroundHeight(v8);
    v11 = a4;
    v20[0] = v5;
    v20[1] = v7;
    v20[2] = a4;
    result = Coord::To_Cell(&MapClass_Instance, v20);
    if ( (result[80] & 0x100) != 0 )
    result = (uint32_t *)(dword_A8F1B4 + *(uint32_t *)(v6 + 28));
    *(uint32_t *)(v6 + 28) = result;
    if ( v5 != g_ScoreDisplayState1 || v7 != g_ScoreDisplayState2 || v11 != g_ScoreDisplayState3 )
    result = (uint32_t *)(*(int (__stdcall **)(int))(*(uint32_t *)v6 + 96))(v6);
    if ( (uint8_t)result )
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v6 + 128))(v6) )
    result = (uint32_t *)g_ScoreDisplayState1;
    if ( *(uint32_t *)(v6 + 32) == g_ScoreDisplayState1
    && *(uint32_t *)(v6 + 36) == g_ScoreDisplayState2
    && *(uint32_t *)(v6 + 40) == g_ScoreDisplayState3 )
    v13 = *(uint32_t *)(v6 + 32);
    v14 = v6 - 4;
    v18 = 1;
    if ( v13 != g_ScoreDisplayState1
    || *(uint32_t *)(v14 + 40) != g_ScoreDisplayState2
    || *(uint32_t *)(v14 + 44) != g_ScoreDisplayState3 )
    v15 = *(uint32_t *)(v14 + 36) / 256;
    v16 = *(uint32_t *)(v14 + 40) / 256;
    v17 = (_WORD *)(*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(v14 + 12) + 440))(
    *(uint32_t *)(v14 + 12),
    &a1);
    if ( *v17 != (_WORD)v15 || v17[1] != (_WORD)v16 )
    v18 = 0;
    v19 = *(uint32_t *)(v14 + 12);
    *(uint32_t *)(v14 + 72) = 0;
    *(uint32_t *)(v14 + 76) = 1072693248;
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v19 + 1348))(v19, 0, 1072693248);
    result = (uint32_t *)MovementAI::StepFootClass((int *)v14, 0);
    if ( v18 )
    return (uint32_t *)MovementAI::MainFootClass((int *)v14, 1);
    else
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(v6 + 8) + 1348))(
    *(uint32_t *)(v6 + 8),
    0,
    1072693248);
    v12 = (int *)(v6 - 4);
    MovementAI::StepFootClass(v12, 0);
    return (uint32_t *)MovementAI::MainFootClass(v12, 1);
    return result;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_516320(uint32_t *a1)
{
    uint32_t *result; // eax
    result = a1;
    if ( a1[5] != a1[8] || a1[6] != a1[9] || a1[7] != a1[10] )
    a1[5] = g_ScoreDisplayState1;
    a1[6] = g_ScoreDisplayState2;
    a1[7] = g_ScoreDisplayState3;
    result = (uint32_t *)a1[2];
    result[376] = -1;
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_516370(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_516BF0(uint8_t *a1)
{
    int v1; // eax
    if ( (*(unsigned __int8 (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 96))(a1) )
    v1 = *(uint32_t *)(*((uint32_t *)a1 + 2) + 172);
    if ( v1 )
    if ( v1 != 7 )
    a1[100] = 1;
    *((uint32_t *)a1 + 26) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 20, 30);
    if ( Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) < 50 )
    *((uint32_t *)a1 + 26) = -*((uint32_t *)a1 + 26);
    if ( (*(unsigned __int8 (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 16))(a1) )
    (*(void (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 72))(a1);
    return StreamClass::ClearDirty(a1);
}

bool __stdcall JumpjetLocomotionClass::sub_516C70(int a1)
{
    return StreamClass::GetDirty(a1)
    || (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 456))(*(uint32_t *)(a1 + 8)) > 0;
}

char __stdcall JumpjetLocomotionClass::sub_516CA0(int a1)
{
    int Member; // eax
    uint32_t *v3; // ecx
    uint32_t *v4; // eax
    uint32_t *v5; // eax
    uint32_t *v6; // edx
    int v7; // eax
    int v8; // ecx
    __int16 v9; // ax
    __int16 v10; // cx
    __int16 v11; // [esp+4h] [ebp-18h]
    uint32_t v12[2]; // [esp+10h] [ebp-Ch] BYREF
    int v13; // [esp+18h] [ebp-4h]
    if ( Team::AllMembersValid(*(int **)(a1 + 8)) )
    Member = Team::GetMember(*(uint32_t **)(a1 + 8), 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)Member + 44))(Member) == 6 )
    if ( *(uint8_t *)(*(uint32_t *)(Team::GetMember(*(uint32_t **)(a1 + 8), 0) + 1312) + 5821) )
    return 0;
    v3 = (uint32_t *)(*(uint32_t *)(a1 + 8) + 156);
    v12[0] = *v3;
    v12[1] = v3[1];
    v13 = v3[2];
    v4 = Coord::To_Cell(&MapClass_Instance, v12);
    v5 = Cell::IsBridge(v4);
    if ( v5 && *(uint8_t *)(v5[328] + 5821) )
    v6 = v5 + 39;
    v7 = v5[39];
    v8 = v6[1];
    v13 = v6[2];
    LOWORD(v12[0]) = v7 / 256;
    HIWORD(v12[0]) = v8 / 256;
    v11 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 156) / 256;
    v9 = v11 - LOWORD(v12[0]);
    v10 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 160) / 256 - HIWORD(v12[0]);
    if ( v11 == LOWORD(v12[0]) )
    if ( v10 == 1 )
    return 0;
    else if ( v9 == 2 )
    if ( v10 == 1 )
    return 0;
    else if ( v9 == 3 && v10 == 1 )
    return 0;
    return 1;
}

char __stdcall JumpjetLocomotionClass::sub_516E10(unsigned int a1, unsigned int a2)
{
    unsigned int v2; // esi
    _WORD *v3; // eax
    int *v4; // edi
    unsigned int v5; // ecx
    __int16 v6; // dx
    int v7; // ebx
    void *v8; // eax
    int v9; // ecx
    int GroundHeight; // eax
    int *v11; // ecx
    uint8_t v13[4]; // [esp+20h] [ebp-10h] BYREF
    int v14; // [esp+24h] [ebp-Ch]
    int v15; // [esp+28h] [ebp-8h]
    v2 = a1;
    if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(*(uint32_t *)a1 + 96))(a1) )
    return 0;
    if ( *(uint8_t *)(v2 + 108) )
    return 0;
    v3 = (_WORD *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(v2 + 8) + 440))(*(uint32_t *)(v2 + 8), v13);
    v4 = *(int **)(v2 + 8);
    v5 = (((a2 >> 12) + 1) >> 1) & 7;
    v6 = LOWORD(Direction_X_Offsets[v5]) + *v3;
    LOWORD(v5) = HIWORD(Direction_X_Offsets[v5]);
    LOWORD(a2) = v6;
    HIWORD(a2) = v3[1] + v5;
    a1 = a2;
    v7 = *v4;
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a1);
    if ( (*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v7 + 428))(v4, v8, -1, -1, 0, 1) )
    return 0;
    *(uint8_t *)(v2 + 108) = 1;
    if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(*(uint32_t *)v2 + 16))(v2) )
    *(uint32_t *)(*(uint32_t *)(v2 + 8) + 1504) = -1;
    if ( *(uint32_t *)(v2 + 32) != g_ScoreDisplayState1
    || *(uint32_t *)(v2 + 36) != g_ScoreDisplayState2
    || *(uint32_t *)(v2 + 40) != g_ScoreDisplayState3 )
    (*(void (__thiscall **)(uint32_t, unsigned int))(**(uint32_t **)(v2 + 8) + 244))(*(uint32_t *)(v2 + 8), v2 + 32);
    v9 = SHIWORD(a1) << 8;
    *(uint32_t *)(v2 + 32) = ((__int16)a1 << 8) + 128;
    *(uint32_t *)(v2 + 36) = v9 + 128;
    *(uint32_t *)(v2 + 40) = 0;
    GroundHeight = Cell::GetGroundHeight((uint32_t *)(v2 + 32));
    *(uint32_t *)(v2 + 40) = GroundHeight;
    v11 = (int *)(*(uint32_t *)(v2 + 8) + 156);
    v14 = *v11;
    v15 = v11[1];
    if ( v11[2] >= GroundHeight + 2 * dword_A8F1C0 + dword_A8F1C0 )
    *(uint32_t *)(v2 + 40) = dword_A8F1B4 + GroundHeight;
    (*(void (__thiscall **)(uint32_t, unsigned int))(**(uint32_t **)(v2 + 8) + 240))(*(uint32_t *)(v2 + 8), v2 + 32);
    return 1;
    else
    (*(void (__stdcall **)(unsigned int, int, int, uint32_t))(*(uint32_t *)v2 + 68))(
    v2,
    ((__int16)a1 << 8) + 128,
    (SHIWORD(a1) << 8) + 128,
    0);
    return 1;
}

char __stdcall JumpjetLocomotionClass::sub_516FC0(int a1, int a2)
{
    if ( !(*(unsigned __int8 (__stdcall **)(int, int))(*(uint32_t *)a1 + 104))(a1, a2) )
    return 0;
    *(uint8_t *)(a1 + 100) = 1;
    *(uint32_t *)(a1 + 104) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 20, 30);
    if ( Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) < 50 )
    *(uint32_t *)(a1 + 104) = -*(uint32_t *)(a1 + 104);
    return 1;
}

int __stdcall JumpjetLocomotionClass::sub_517100(int a1)
{
    return 2;
}

int __stdcall JumpjetLocomotionClass::sub_5171C0(uint32_t *a1, int a2)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // ecx
    uint32_t v5[3]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v6[12]; // [esp+14h] [ebp-Ch] BYREF
    result = a2;
    if ( !a2 )
    v3 = (uint32_t *)(*(int (__stdcall **)(uint32_t *, uint8_t *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = a1[2];
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v4 + 244))(v4, v5);
    return result;
}

bool __stdcall JumpjetLocomotionClass::sub_517210(int a1, int a2, int a3, int a4)
{
    int *v4; // eax
    int v5; // ebp
    int v6; // kr04_4
    int v7; // eax
    uint8_t v9[12]; // [esp+10h] [ebp-Ch] BYREF
    v4 = (int *)(*(int (__stdcall **)(int, uint8_t *))(*(uint32_t *)a1 + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256)
    && (_WORD)v7 == (unsigned __int16)(a3 / 256)
    && (int)abs32(v5 - a4) <= dword_A8F1C0;
}

int __stdcall JumpjetLocomotionClass::sub_54AD30(int a1, int a2)
{
    int v2; // ebx
    int v3; // ebp
    int v4; // eax
    _WORD v6[12]; // [esp+10h] [ebp-18h] BYREF
    v2 = a2;
    v3 = a1;
    *(uint32_t *)(v3 + 24) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 3440);
    *(uint32_t *)(v3 + 28) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3444);
    *(uint32_t *)(v3 + 32) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3448);
    *(uint32_t *)(v3 + 36) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3452);
    v4 = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3456);
    if ( v4 <= 2 * dword_ABC5E8 )
    v4 = 2 * dword_ABC5E8;
    *(uint32_t *)(v3 + 40) = v4;
    *(uint32_t *)(v3 + 44) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3460);
    *(uint32_t *)(v3 + 48) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3464);
    *(uint32_t *)(v3 + 52) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3472);
    *(uint8_t *)(v3 + 56) = *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v2 + 132))(v2) + 3468);
    FrameSnapshot::InitMax(v6, *(uint32_t *)(v3 + 24));
    qmemcpy((void *)(v3 + 80), v6, 0x18u);
    LOWORD(a1) = 0x4000;
    FacingClass::Update((char *)(v3 + 80), &a1);
    LOWORD(a1) = 0x4000;
    FacingClass::Set_SyncLog((char *)(v3 + 80), &a1);
    return StreamClass::ResetPosition(v3, v2);
}

char __stdcall JumpjetLocomotionClass::sub_54AE50(int a1)
{
    return *(uint8_t *)(a1 + 72);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_54AE60(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // edx
    int v4; // esi
    uint32_t *v5; // edi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[16];
    v4 = a1[17];
    v5 = a2;
    *a2 = a1[15];
    else
    result = a2;
    v3 = dword_ABC5AC;
    v4 = dword_ABC5B0;
    v5 = a2;
    *a2 = dword_ABC5A8;
    v5[1] = v3;
    v5[2] = v4;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_54B4D0(int a1)
{
    int result; // eax
    int v2; // edi
    uint32_t *v3; // ebp
    uint32_t *v4; // esi
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    int *v9; // ecx
    int v10; // [esp-2Ch] [ebp-50h]
    int v11; // [esp+Ch] [ebp-18h] BYREF
    int v12; // [esp+10h] [ebp-14h] BYREF
    int v13; // [esp+14h] [ebp-10h] BYREF
    int v14; // [esp+18h] [ebp-Ch] BYREF
    int v15; // [esp+1Ch] [ebp-8h]
    int GroundHeight; // [esp+20h] [ebp-4h]
    result = IKnowWhatImDoing;
    if ( !IKnowWhatImDoing )
    v2 = a1;
    result = *(unsigned __int8 *)(a1 + 72);
    if ( (uint8_t)result )
    v3 = (uint32_t *)(a1 + 60);
    if ( (*(uint32_t *)(a1 + 60) != dword_ABC5A8
    || *(uint32_t *)(a1 + 64) != dword_ABC5AC
    || *(uint32_t *)(a1 + 68) != dword_ABC5B0)
    && *(uint32_t *)(a1 + 76)
    && *(uint8_t *)(a1 + 140) )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(a1 + 8) + 244))(*(uint32_t *)(a1 + 8), a1 + 60);
    *(uint8_t *)(v2 + 140) = 0;
    v4 = *(uint32_t **)(v2 + 8);
    v5 = v4[39];
    v6 = v4[40];
    GroundHeight = v4[41];
    LOWORD(a1) = v5 / 256;
    HIWORD(a1) = v6 / 256;
    v12 = a1;
    a1 = 0;
    v10 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4) + 1460);
    v7 = (*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4);
    v8 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v13,
    &v13,
    (__int16 *)&v12,
    *(uint32_t *)(v7 + 1660),
    -1,
    v10,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (__int16 *)&a1,
    0,
    0);
    v11 = v8;
    if ( v8 == dword_ABC588 )
    v9 = *(int **)(v2 + 8);
    result = (int)(v9 + 27);
    if ( v9[27] > 0 )
    (*(void (__stdcall **)(int *, uint32_t, int, uint32_t, int, int, uint32_t))(*v9 + 364))(
    v9 + 27,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    result = dword_ABC5A8;
    *v3 = dword_ABC5A8;
    *(uint32_t *)(v2 + 64) = dword_ABC5AC;
    *(uint32_t *)(v2 + 68) = dword_ABC5B0;
    else
    v14 = ((__int16)v8 << 8) + 128;
    v15 = (SHIWORD(v8) << 8) + 128;
    GroundHeight = 0;
    GroundHeight = Cell::GetGroundHeight(&v14);
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v11) + 80) & 0x100) != 0 )
    GroundHeight += dword_ABC5DC;
    return (*(int (__stdcall **)(int, int, int, int))(*(uint32_t *)v2 + 68))(v2, v14, v15, GroundHeight);
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_54B6E0(int a1, int a2)
{
    return FacingClass::Set_SyncLog((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1839125434;
    a2[1] = 298972959;
    a2[2] = 1610653612;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_54B8D0(int a1)
{
    int v1; // edi
    int v2; // eax
    uint32_t *v3; // eax
    uint32_t v5[3]; // [esp+8h] [ebp-Ch] BYREF
    v1 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 456))(*(uint32_t *)(a1 + 8));
    v2 = *(uint32_t *)(a1 + 8);
    if ( !*(uint8_t *)(v2 + 140) )
    v3 = (uint32_t *)(v2 + 156);
    v5[0] = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v5) + 80) & 0x100) != 0
    && v1 >= dword_ABC5DC
    && !*(uint8_t *)(*(uint32_t *)(a1 + 8) + 141) )
    v1 -= dword_ABC5DC;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 84))(*(uint32_t *)(a1 + 8)) )
    return 2;
    if ( v1 )
    return (v1 >= *(uint32_t *)(a1 + 40)) + 3;
    return 2;
}

bool __stdcall JumpjetLocomotionClass::sub_54D0D0(int a1)
{
    int v1; // eax
    v1 = *(uint32_t *)(a1 + 76);
    return v1 && v1 != 2;
}

int  JumpjetLocomotionClass::GetFloorZSetContext(int this)
{
    int *v2; // eax
    uint32_t *v3; // eax
    int v4; // edi
    unsigned int v5; // ecx
    int v6; // eax
    int v7; // ecx
    uint32_t *v8; // eax
    int v9; // esi
    int v11; // [esp+8h] [ebp-10h] BYREF
    int v12; // [esp+Ch] [ebp-Ch] BYREF
    int v13; // [esp+10h] [ebp-8h]
    int v14; // [esp+14h] [ebp-4h]
    v2 = (int *)(*(uint32_t *)(this + 12) + 156);
    v12 = *v2;
    v13 = v2[1];
    v14 = v2[2];
    v3 = Coord::To_Cell(&MapClass_Instance, &v12);
    v4 = JumpjetLocomotionClass::FindClosestOccupiableCell(v3);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v12) + 80) & 0x100) != 0 )
    v4 += dword_ABC5DC;
    if ( *(double *)(this + 112) <= 0.0 )
    return v4;
    v5 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 84), &v11) >> 12) + 1) >> 1) & 7;
    v6 = v12 + dword_89F6D8[2 * v5];
    v7 = dword_89F6DC[2 * v5];
    v12 = v6;
    v13 += v7;
    v8 = Coord::To_Cell(&MapClass_Instance, &v12);
    v9 = JumpjetLocomotionClass::FindClosestOccupiableCell(v8);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v12) + 80) & 0x100) != 0 )
    v4 += dword_ABC5DC;
    if ( v9 <= v4 )
    return (v9 + v4) / 2;
    else
    return v9;
}

char __stdcall JumpjetLocomotionClass::sub_54D930(int a1, int a2)
{
    int v2; // eax
    uint32_t *v3; // eax
    int v4; // edx
    uint32_t v6[3]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v7[12]; // [esp+14h] [ebp-Ch] BYREF
    LOBYTE(v2) = a2;
    if ( !a2 )
    v3 = (uint32_t *)(*(int (__stdcall **)(int, uint8_t *))(*(uint32_t *)a1 + 24))(a1, v7);
    v6[0] = *v3;
    v4 = v3[1];
    v6[1] = v4;
    v2 = v3[2];
    v6[2] = v2;
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 )
    if ( !*(uint32_t *)(a1 + 76) || (LOBYTE(v2) = *(uint8_t *)(a1 + 140), (uint8_t)v2) )
    LOBYTE(v2) = (*(int (__thiscall **)(uint32_t, uint32_t *))(**(uint32_t **)(a1 + 8) + 244))(*(uint32_t *)(a1 + 8), v6);
    *(uint8_t *)(a1 + 140) = 0;
    return v2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_54D9B0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // esi
    int v5; // edx
    int v6; // eax
    if ( a1[19] )
    v5 = a1[16];
    v6 = a1[17];
    *a2 = a1[15];
    a2[1] = v5;
    a2[2] = v6;
    return a2;
    else
    v2 = *(uint32_t *)(a1[2] + 160);
    v3 = *(uint32_t *)(a1[2] + 164);
    *a2 = *(uint32_t *)(a1[2] + 156);
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_54DA00(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 124) )
    return -2147467259;
    *(uint32_t *)(a1 + 124) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_54DA50(int a1, uint32_t *a2)
{
    int v3; // eax
    uint32_t *v4; // ecx
    int v5; // eax
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 - 12);
    if ( v3 )
    if ( *(uint8_t *)(v3 + 1709) || *(uint8_t *)(v3 + 1710) )
    *(uint8_t *)(v3 + 1709) = 0;
    *(uint8_t *)(*(uint32_t *)(a1 - 12) + 1710) = 0;
    v4 = *(uint32_t **)(a1 - 12);
    if ( !*(uint8_t *)(v4[135] + 492) && *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4) + 1516) )
    (*(void (__thiscall **)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 - 12) + 488))(*(uint32_t *)(a1 - 12), 10, 0);
    *(uint32_t *)(*(uint32_t *)(a1 - 12) + 1064) = 0;
    *(uint32_t *)(*(uint32_t *)(a1 - 12) + 1068) = 0;
    v5 = *(uint32_t *)(a1 + 124);
    if ( !v5 )
    return 1;
    *a2 = v5;
    *(uint32_t *)(a1 + 124) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_54DB00(int a1)
{
    int v1; // esi
    bool result; // al
    result = 0;
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20) )
    if ( *(uint32_t *)(a1 + 124) )
    if ( !*(uint8_t *)(a1 + 121) )
    v1 = *(uint32_t *)(a1 - 12);
    if ( !*(uint8_t *)(v1 + 1709) || *(uint8_t *)(v1 + 1710) )
    return 1;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_54DB50(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 31;
    if ( a1[31] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
    int result; // eax
    int v4; // eax
    result = LocomotionClass::QueryInterface(a1, a2, a3);
    if ( result == -2147467262 )
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) )
    if ( a1 )
    v4 = a1 + 24;
    else
    v4 = 0;
    *a3 = v4;
    if ( *a3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
    else
    return -2147467262;
    return result;
}

float *__stdcall JumpjetLocomotionClass::sub_54DCC0(signed int a1, float *a2, uint32_t *a3)
{
    int v3; // ecx
    double v4; // st7
    int v5; // edi
    int v6; // eax
    int v7; // ecx
    float *Transform; // eax
    float *v9; // eax
    float *v10; // esi
    float *v12; // esi
    float v13; // [esp+4h] [ebp-144h]
    float v14; // [esp+4h] [ebp-144h]
    float v15; // [esp+4h] [ebp-144h]
    float v16; // [esp+14h] [ebp-134h]
    int v17; // [esp+14h] [ebp-134h]
    float v18; // [esp+18h] [ebp-130h]
    int v19; // [esp+18h] [ebp-130h]
    float v20; // [esp+1Ch] [ebp-12Ch]
    int v21; // [esp+1Ch] [ebp-12Ch]
    float v22; // [esp+20h] [ebp-128h]
    int v23; // [esp+20h] [ebp-128h]
    float v24; // [esp+24h] [ebp-124h]
    int v25; // [esp+24h] [ebp-124h]
    float v26[12]; // [esp+28h] [ebp-120h] BYREF
    float v27[12]; // [esp+58h] [ebp-F0h] BYREF
    float v28[12]; // [esp+88h] [ebp-C0h] BYREF
    float v29[12]; // [esp+B8h] [ebp-90h] BYREF
    float v30[12]; // [esp+E8h] [ebp-60h] BYREF
    float v31[12]; // [esp+118h] [ebp-30h] BYREF
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 3362)
    && ((v3 = *(uint32_t *)(a1 + 8), fabs(*(float *)(v3 + 808)) >= 0.005) || fabs(*(float *)(v3 + 812)) >= 0.005) )
    if ( a3 )
    *a3 = -1;
    Matrix3x4::Identity(v27);
    Matrix3x4::Identity(v26);
    v18 = *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 864);
    v16 = *(double *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 872);
    v22 = Math::ArcTan2(*(float *)(*(uint32_t *)(a1 + 8) + 812));
    v20 = Math::SinCos(*(float *)(*(uint32_t *)(a1 + 8) + 812));
    v24 = Math::ArcTan2(*(float *)(*(uint32_t *)(a1 + 8) + 808));
    v4 = Math::SinCos(*(float *)(*(uint32_t *)(a1 + 8) + 808));
    v21 = Math::RoundToInt(fabs(v4) * v18 + fabs(v20) * v16);
    v23 = Math::RoundToInt(v22 * v16);
    v5 = Math::RoundToInt(v16 - (double)v23);
    v17 = v5;
    v25 = Math::RoundToInt(v24 * v18);
    v6 = Math::RoundToInt(v18 - (double)v25);
    v7 = *(uint32_t *)(a1 + 8);
    v19 = v6;
    if ( *(float *)(v7 + 812) < 0.0 )
    v17 = -v5;
    if ( *(float *)(v7 + 808) > 0.0 )
    v19 = -v6;
    v13 = (float)v21;
    Matrix3x3::ApplyCol1(v27, v13);
    v14 = (float)v17;
    Matrix3x4::Translate(v26, v14);
    v15 = (float)v19;
    Matrix3x3::ApplyCol0(v26, v15);
    Matrix3x3::RotateX(v26, *(float *)(*(uint32_t *)(a1 + 8) + 808));
    Matrix3D::RotateZ(v26, *(float *)(*(uint32_t *)(a1 + 8) + 812));
    Transform = Turret::GetTransform(a1, v30, a3);
    Transform::Copy(v28, Transform);
    v9 = MultiplyMatrix3x4(v31, v27, v28);
    v10 = MultiplyMatrix3x4(v29, v9, v26);
    qmemcpy(a2, v10, 0x30u);
    return a2;
    else
    v12 = Turret::GetTransform(a1, v29, a3);
    qmemcpy(a2, v12, 0x30u);
    return a2;
}

int JumpjetLocomotionClass::_vt09()
{
    return 152;
}

uint32_t * JumpjetLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    *Block = &JumpjetLocomotionClass::`vftable';
    *(Block + 1) = &JumpjetLocomotionClass::`vftable';
    *(Block + 6) = &JumpjetLocomotionClass::`vftable';
    v3 = *(Block + 37);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v3 + 8))(v3);
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall JumpjetLocomotionClass::sub_54DFF0(int a1, const void *a2, int *a3)
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

int __stdcall JumpjetLocomotionClass::sub_54E020(int a1, const void *a2, int *a3)
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

char __stdcall JumpjetLocomotionClass::_vt25(int a1)
{
    return 0;
}

char __stdcall JumpjetLocomotionClass::_vt26(int a1, int a2)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::_vt14(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::_vt13(int a1, int a2)
{
    return 0;
}

char __stdcall JumpjetLocomotionClass::_vt8(int a1)
{
    return 1;
}

int __stdcall JumpjetLocomotionClass::_vt7(int a1, int a2)
{
    return 0;
}

char __stdcall JumpjetLocomotionClass::sub_55AC60(int a1)
{
    return 1;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_55AC70(int a1, uint32_t *a2)
{
    int v3; // edx
    int v4; // esi
    v3 = dword_ABCC7C;
    v4 = dword_ABCC80;
    *a2 = dword_ABCC78;
    a2[1] = v3;
    a2[2] = v4;
    return a2;
}

char __stdcall JumpjetLocomotionClass::sub_55ACD0(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::_vt34(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::_vt35(int a1)
{
    return 0;
}

char __stdcall JumpjetLocomotionClass::sub_5AFF70(int a1)
{
    return *(uint8_t *)(a1 + 44);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_5AFF80(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // edx
    int v4; // esi
    uint32_t *v5; // edi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[6];
    v4 = a1[7];
    v5 = a2;
    *a2 = a1[5];
    else
    result = a2;
    v3 = dword_ABEE14;
    v4 = dword_ABEE18;
    v5 = a2;
    *a2 = g_MatrixTransformState;
    v5[1] = v3;
    v5[2] = v4;
    return result;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_5AFFE0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // esi
    if ( a1[8] == g_MatrixTransformState && a1[9] == dword_ABEE14 && a1[10] == dword_ABEE18 )
    v5 = a1[2];
    v6 = v5 + 156;
    v7 = *(uint32_t *)(v5 + 156);
    v8 = *(uint32_t *)(v5 + 160);
    v9 = *(uint32_t *)(v6 + 8);
    *a2 = v7;
    a2[1] = v8;
    a2[2] = v9;
    return a2;
    else
    v2 = a1[9];
    v3 = a1[10];
    *a2 = a1[8];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_5B0060(int a1)
{
    BuildingClass::ProcessMission(a1 - 4, 1);
    return (*(int (__stdcall **)(int))(*(uint32_t *)a1 + 16))(a1);
}

int __stdcall JumpjetLocomotionClass::sub_5B0080(int a1, int a2, int a3, int a4)
{
    int result; // eax
    int v5; // ecx
    int v6; // edx
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 892))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 896))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 468))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 472))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    v5 = a3;
    v6 = a4;
    *(uint32_t *)(a1 + 20) = a2;
    *(uint32_t *)(a1 + 24) = v5;
    *(uint32_t *)(a1 + 28) = v6;
    result = (int)Coord::To_Cell(&MapClass_Instance, &a2);
    if ( (*(uint32_t *)(result + 320) & 0x100) != 0 )
    result = Coord::ScaleToScreenY((void *)0x3C);
    *(uint32_t *)(a1 + 28) += result;
    *(uint8_t *)(a1 + 44) = 1;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_5B0120(int a1)
{
    int result; // eax
    result = a1;
    *(uint32_t *)(a1 + 20) = g_MatrixTransformState;
    *(uint32_t *)(a1 + 24) = dword_ABEE14;
    *(uint32_t *)(a1 + 28) = dword_ABEE18;
    if ( *(uint32_t *)(a1 + 32) == g_MatrixTransformState
    && *(uint32_t *)(a1 + 36) == dword_ABEE14
    && *(uint32_t *)(a1 + 40) == dword_ABEE18 )
    *(uint8_t *)(a1 + 44) = 0;
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_5B0170(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_5B01A0(uint32_t *a1, int a2, int a3, int a4)
{
    a1[8] = a2;
    a1[9] = a3;
    a1[10] = a4;
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_5B19D0(int a1)
{
    return 2;
}

bool __stdcall JumpjetLocomotionClass::sub_5B19E0(uint32_t *a1)
{
    if ( TimerClass::Active(a1[2] + 904) )
    return 1;
    return (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1)
    && (a1[8] != g_MatrixTransformState || a1[9] != dword_ABEE14 || a1[10] != dword_ABEE18)
    && (*(int (__thiscall **)(uint32_t))(*(uint32_t *)a1[2] + 1336))(a1[2]) > 0;
}

int __stdcall JumpjetLocomotionClass::sub_5B1A50(uint32_t *a1, int a2)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // ecx
    uint32_t v5[3]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v6[12]; // [esp+14h] [ebp-Ch] BYREF
    result = a2;
    if ( !a2 )
    v3 = (uint32_t *)(*(int (__stdcall **)(uint32_t *, uint8_t *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = a1[2];
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v4 + 244))(v4, v5);
    return result;
}

bool __stdcall JumpjetLocomotionClass::sub_5B1AA0(int a1, int a2, int a3, int a4)
{
    int *v4; // eax
    int v5; // ebp
    int v6; // kr04_4
    int v7; // eax
    uint8_t v9[12]; // [esp+10h] [ebp-Ch] BYREF
    v4 = (int *)(*(int (__stdcall **)(int, uint8_t *))(*(uint32_t *)a1 + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256)
    && (_WORD)v7 == (unsigned __int16)(a3 / 256)
    && (int)abs32(v5 - a4) <= dword_ABEE50;
}

bool __stdcall JumpjetLocomotionClass::sub_661F90(int a1)
{
    int v1; // eax
    v1 = *(uint32_t *)(a1 + 60);
    return v1 >= 3 && v1 <= 5;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_661FB0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    v2 = a1[6];
    v3 = a1[7];
    *a2 = a1[5];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_6632E0(int a1, int a2, int a3, int a4)
{
    int result; // eax
    int v5; // edx
    char *p_TiberiumExplosionDamage; // edx
    bool v7; // zf
    int v8; // esi
    int v9; // [esp+Ch] [ebp-Ch]
    result = a1;
    v5 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 1732);
    if ( v5 == LODWORD(RulesClass_Instance->MissileROTVar) )
    p_TiberiumExplosionDamage = (char *)&RulesClass_Instance->TiberiumExplosionDamage;
    else
    v7 = v5 == RulesClass_Instance->ExplosiveVoxelDebris[0];
    p_TiberiumExplosionDamage = (char *)&RulesClass_Instance->HoverBob;
    if ( !v7 )
    p_TiberiumExplosionDamage = (char *)&RulesClass_Instance->MissileROTVar + 4;
    if ( *(uint32_t *)(a1 + 20) == dword_B04E38
    && *(uint32_t *)(a1 + 24) == dword_B04E3C
    && *(uint32_t *)(a1 + 28) == dword_B04E40 )
    if ( *(uint32_t *)p_TiberiumExplosionDamage )
    *(uint32_t *)(a1 + 60) = 1;
    v8 = *(uint32_t *)p_TiberiumExplosionDamage;
    else
    *(uint32_t *)(a1 + 60) = 2;
    v8 = *((uint32_t *)p_TiberiumExplosionDamage + 1);
    *(uint32_t *)(a1 + 32) = CurrentFrame;
    *(uint32_t *)(a1 + 36) = v9;
    *(uint32_t *)(a1 + 40) = v8;
    *(uint32_t *)(a1 + 44) = v8;
    *(float *)(a1 + 80) = *((float *)p_TiberiumExplosionDamage + 2) * 1.570796326794897;
    *(uint32_t *)(a1 + 20) = a2;
    *(uint32_t *)(a1 + 24) = a3;
    *(uint32_t *)(a1 + 28) = a4;
    return a2;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_663460(int a1)
{
    return 3;
}

float *__stdcall JumpjetLocomotionClass::sub_663470(signed int a1, float *a2, int *a3)
{
    signed int v3; // esi
    int *v4; // edi
    int v5; // ecx
    float *p_TiberiumExplosionDamage; // eax
    int v7; // eax
    int v8; // eax
    float *result; // eax
    float v10; // [esp+0h] [ebp-40h]
    float v11; // [esp+0h] [ebp-40h]
    int v12; // [esp+Ch] [ebp-34h] BYREF
    float v13[12]; // [esp+10h] [ebp-30h] BYREF
    Matrix3x4::Identity(v13);
    v3 = a1;
    a1 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(a1 + 8) + 904), &v12) >> 10) + 1) >> 1) & 0x1F)
    - 8;
    v10 = (double)a1 * -0.1963495408493621;
    Matrix2D::Rotate(v13, v10);
    v4 = a3;
    if ( *(float *)(v3 + 80) == 0.0 )
    LABEL_13:
    if ( v4 )
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1)
    & 0x1F;
    goto LABEL_15;
    v11 = -*(float *)(v3 + 80);
    Matrix3D::RotateZ(v13, v11);
    v5 = *(uint32_t *)(*(uint32_t *)(v3 + 8) + 1732);
    if ( v5 == LODWORD(RulesClass_Instance->MissileROTVar) )
    p_TiberiumExplosionDamage = (float *)&RulesClass_Instance->TiberiumExplosionDamage;
    else if ( v5 == RulesClass_Instance->ExplosiveVoxelDebris[0] )
    p_TiberiumExplosionDamage = (float *)&RulesClass_Instance->HoverBob;
    else
    p_TiberiumExplosionDamage = (float *)&RulesClass_Instance->MissileROTVar + 1;
    *(float *)&a1 = p_TiberiumExplosionDamage[3] * 1.570796326794897;
    if ( v4 )
    if ( p_TiberiumExplosionDamage[2] * 1.570796326794897 == *(float *)(v3 + 80) )
    v7 = *v4;
    LOBYTE(v7) = *v4 | 0x20;
    *v4 = v7;
    else if ( *(float *)(v3 + 80) == *(float *)&a1 )
    v8 = *v4;
    LOBYTE(v8) = *v4 | 0x40;
    *v4 = v8;
    else
    *v4 = -1;
    goto LABEL_13;
    LABEL_15:
    result = a2;
    qmemcpy(a2, v13, 0x30u);
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_69ED20(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 20;
    if ( a1[20] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::sub_69EFF0(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 80) )
    return -2147467259;
    *(uint32_t *)(a1 + 80) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_69F040(int a1, uint32_t *a2)
{
    int v3; // eax
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 + 80);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(uint32_t *)(a1 + 80) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_69F080(int a1)
{
    return !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20)
    && *(uint32_t *)(a1 + 80)
    && *(uint8_t *)(a1 + 77)
    && !*(uint8_t *)(*(uint32_t *)(a1 - 12) + 1709);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_69F250(uint32_t *a1, int a2)
{
    int v3; // [esp+8h] [ebp-Ch]
    a1[7] = a2;
    a1[6] = a2;
    a1[8] = CurrentFrame;
    a1[9] = v3;
    a1[10] = 0;
    a1[11] = 0;
    return a1 + 8;
}

bool __stdcall JumpjetLocomotionClass::sub_69F290(int a1)
{
    if ( *(uint32_t *)(a1 + 48) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 52) != qword_B077FC )
    return 1;
    return (*(uint32_t *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC)
    && (*(uint32_t *)(a1 + 60) != *(uint32_t *)(*(uint32_t *)(a1 + 8) + 156)
    || *(uint32_t *)(a1 + 64) != *(uint32_t *)(*(uint32_t *)(a1 + 8) + 160));
}

bool __stdcall JumpjetLocomotionClass::sub_69F330(int a1)
{
    if ( TimerClass::Active(*(uint32_t *)(a1 + 8) + 904) )
    return 1;
    return (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)a1 + 16))(a1)
    && (*(uint32_t *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC)
    && (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 1336))(*(uint32_t *)(a1 + 8)) > 0;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_69F3A0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    v2 = a1[13];
    v3 = a1[14];
    *a2 = a1[12];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_69F3D0(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // esi
    if ( a1[15] == g_OverlayTypeConfig && *((_QWORD *)a1 + 8) == qword_B077FC )
    v4 = a1[2];
    v5 = v4 + 156;
    v6 = *(uint32_t *)(v4 + 156);
    v7 = *(uint32_t *)(v4 + 160);
    v8 = *(uint32_t *)(v5 + 8);
    *a2 = v6;
    a2[1] = v7;
    a2[2] = v8;
    return a2;
    else
    v2 = a1[16];
    v3 = a1[17];
    *a2 = a1[15];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_69F450(int a1, uint32_t *a2, unsigned int a3, unsigned int a4)
{
    uint32_t *result; // eax
    unsigned int v5; // ecx
    unsigned int v6; // edx
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 892))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 896))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 468))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 472))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = a2;
    v5 = a3;
    v6 = a4;
    *(uint32_t *)(a1 + 48) = a2;
    *(uint32_t *)(a1 + 52) = v5;
    *(uint32_t *)(a1 + 56) = v6;
    if ( result != (uint32_t *)g_OverlayTypeConfig || __PAIR64__(v6, v5) != qword_B077FC )
    a2 = result;
    a3 = v5;
    a4 = v6;
    result = Coord::To_Cell(&MapClass_Instance, &a2);
    if ( (result[80] & 0x100) != 0 )
    result = (uint32_t *)(dword_B0782C + *(uint32_t *)(a1 + 56));
    *(uint32_t *)(a1 + 56) = result;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_69F510(int a1)
{
    int v1; // eax
    int v2; // esi
    double v3; // st7
    int result; // eax
    if ( *(uint32_t *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC )
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 132))(*(uint32_t *)(a1 + 8)) + 3220) )
    v1 = *(uint32_t *)(a1 + 8);
    if ( !*(uint8_t *)(v1 + 1744) )
    v2 = *(uint32_t *)(v1 + 1736);
    if ( v2 )
    do
    if ( !*(uint32_t *)(v2 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(v2 + 1652) + 72))(*(uint32_t *)(v2 + 1652));
    v2 = *(uint32_t *)(v2 + 1736);
    while ( v2 && v2 != *(uint32_t *)(v2 + 1736) );
    if ( *(double *)(a1 + 76) >= 0.300000011920929 )
    v3 = 0.300000011920929;
    else
    v3 = *(double *)(a1 + 76);
    *(double *)(a1 + 76) = v3;
    *(uint32_t *)(a1 + 48) = g_OverlayTypeConfig;
    result = qword_B077FC;
    *(_QWORD *)(a1 + 52) = qword_B077FC;
    return result;
}

float *__stdcall JumpjetLocomotionClass::sub_69FB20(uint32_t *a1, float *a2, uint32_t *a3)
{
    int v3; // edi
    double v4; // st7
    int v5; // edx
    int v6; // eax
    int v7; // edx
    float v9[12]; // [esp+Ch] [ebp-30h] BYREF
    v3 = a1[11];
    if ( v3 )
    v5 = a1[8];
    v6 = a1[10];
    if ( v5 != -1 )
    if ( (int)CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)CurrentFrame - v5;
    v4 = (double)(v3 - v6) / (double)(int)a1[11];
    else
    v4 = 1.0;
    if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
    if ( a3 )
    *a3 = -1;
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_69FBE0(int *a1)
{
    int v1; // edi
    int v2; // eax
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)a1[2] + 444))(a1[2]);
    return (*(int (__stdcall **)(int *, uint32_t))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284));
}

char __stdcall JumpjetLocomotionClass::sub_6A0310(int a1, int a2, unsigned int a3, __int64 a4)
{
    int v4; // eax
    int v5; // esi
    unsigned int *v6; // edi
    int v7; // ecx
    __int64 v8; // kr00_8
    uint32_t *v9; // eax
    int v11; // [esp-4h] [ebp-20h]
    unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
    __int64 v13; // [esp+14h] [ebp-8h]
    *(uint32_t *)(a1 + 84) = a2;
    *(uint32_t *)(a1 + 88) = 0;
    v4 = g_OverlayTypeConfig;
    if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC )
    v5 = a1 - 4;
    v13 = a4;
    v6 = (unsigned int *)(a1 - 4 + 64);
    v12 = a3;
    if ( *v6 != g_OverlayTypeConfig || __PAIR64__(*(uint32_t *)(a1 - 4 + 72), *(uint32_t *)(a1 + 64)) != qword_B077FC )
    *v6 = g_OverlayTypeConfig;
    *(uint32_t *)(a1 + 64) = qword_B077FC;
    v7 = HIDWORD(qword_B077FC);
    *(uint8_t *)(v5 + 99) = 0;
    *(uint32_t *)(a1 - 4 + 72) = v7;
    v4 = g_OverlayTypeConfig;
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_B077FC, v4)
    || (LOBYTE(v4) = BYTE4(qword_B077FC), HIDWORD(a4) != HIDWORD(qword_B077FC)) )
    v8 = v13;
    *(uint8_t *)(v5 + 99) = 1;
    *v6 = a3;
    *(_QWORD *)(a1 + 64) = v8;
    v11 = *(uint32_t *)(v5 + 12);
    v9 = Coord::To_Cell(&MapClass_Instance, &v12);
    if ( !CrateClass::ProcessPickup(v9, v11) || *(uint8_t *)(*(uint32_t *)(v5 + 12) + 129) )
    LOBYTE(v4) = *(uint8_t *)(*(uint32_t *)(v5 + 12) + 144);
    if ( (uint8_t)v4 )
    LOBYTE(v4) = g_OverlayTypeConfig;
    *v6 = g_OverlayTypeConfig;
    *(_QWORD *)(a1 + 64) = qword_B077FC;
    *(uint8_t *)(v5 + 99) = 0;
    else
    WalkLocomotion::MoveTo(a1 - 4, &v12, 1);
    LOBYTE(v4) = a1 + 48;
    *(uint32_t *)(a1 + 48) = a3;
    *(_QWORD *)(a1 + 52) = a4;
    *(uint32_t *)(a1 + 76) = 0;
    *(uint32_t *)(a1 + 80) = 1072693248;
    return v4;
}

char __stdcall JumpjetLocomotionClass::sub_6A05C0(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_6A3E50(int a1)
{
    return 2;
}

int __stdcall JumpjetLocomotionClass::sub_6A3EA0(int a1)
{
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_6A3EB0(int a1)
{
    return JumpjetLocomotionClass::CheckState(a1);
}

char __stdcall JumpjetLocomotionClass::sub_6A3F00(int a1, int a2)
{
    char result; // al
    result = a1 + 60;
    if ( *(uint32_t *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC )
    return WalkLocomotion::MoveTo(a1 - 4, (uint32_t *)(a1 + 60), a2);
    return result;
}

bool __stdcall JumpjetLocomotionClass::sub_6A3F50(int a1, int a2, int a3, int a4)
{
    int v4; // esi
    int *v5; // eax
    int v6; // ecx
    unsigned int v7; // edx
    unsigned int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int *v13; // eax
    int v14; // edx
    int *v15; // eax
    int v16; // ebx
    int v17; // ebp
    uint32_t *v18; // eax
    int v20[2]; // [esp+Ch] [ebp-20h] BYREF
    uint32_t v21[2]; // [esp+14h] [ebp-18h] BYREF
    int v22; // [esp+1Ch] [ebp-10h]
    int v23; // [esp+20h] [ebp-Ch]
    int v24; // [esp+24h] [ebp-8h]
    unsigned int v25; // [esp+28h] [ebp-4h]
    v4 = a1;
    v5 = (int *)(*(int (__stdcall **)(int, uint32_t *))(*(uint32_t *)a1 + 24))(a1, v21);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v23 = v6;
    v24 = v7;
    v25 = v8;
    if ( v6 == g_OverlayTypeConfig && __PAIR64__(v8, v7) == qword_B077FC )
    return 0;
    if ( !*(uint8_t *)(v4 + 92) )
    v9 = *(uint32_t *)(v4 + 84);
    if ( v9 != -1 )
    v10 = byte_7F2A40[12 * v9];
    if ( v10 )
    v11 = 4 * v10;
    v12 = dword_7F296C[v11];
    if ( v12 > -1 )
    v13 = (int *)(dword_7F2960[v11] + 12 * v12);
    a1 = v13[2];
    if ( *(uint32_t *)(v4 + 88) < v12 )
    v14 = v13[1];
    v20[0] = *v13;
    v20[1] = v14;
    v15 = WalkLocomotion::TransformCoords((uint32_t *)(v4 - 4), v21, v20, &a1);
    v16 = *v15;
    v17 = v15[1];
    v18 = (uint32_t *)(*(uint32_t *)(v4 + 8) + 156);
    v21[0] = *v18;
    v21[1] = v18[1];
    v22 = v18[2];
    if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256)
    && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
    && (int)abs32(v22 - a4) <= dword_B07838 )
    return 1;
    return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256)
    && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
    && (int)abs32(v25 - a4) <= dword_B07838;
}

char __stdcall JumpjetLocomotionClass::sub_6A4130(unsigned int a1)
{
    unsigned int v1; // edi
    int v2; // eax
    int v3; // ecx
    int v4; // esi
    __int16 v5; // bx
    int v6; // edx
    __int16 v7; // dx
    char v8; // al
    v1 = a1;
    v2 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 1504);
    if ( v2 < -1 || v2 > 8 )
    return 0;
    v3 = 12 * *(uint32_t *)(a1 + 84) + 8333888;
    v4 = *(uint8_t *)(a1 + 92) ? (char)algn_7F2A41[12 * *(uint32_t *)(a1 + 84)] : byte_7F2A40[12 * *(uint32_t *)(a1 + 84)];
    if ( v2 == 8 )
    return 0;
    if ( v2 == -1 )
    return 0;
    LOBYTE(v5) = 0;
    HIBYTE(v5) = algn_7F2A41[12 * *(uint32_t *)(a1 + 84) + 3];
    LOWORD(a1) = v5;
    if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 )
    return 0;
    v6 = *(uint32_t *)(v1 + 88);
    if ( dword_7F2964[4 * v4] == v6
    && v6
    && (LOBYTE(v7) = 0,
    HIBYTE(v7) = *(uint8_t *)(v3 + 4),
    LOWORD(a1) = v7,
    (v8 = byte_7F2A40[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
    return 1;
    else
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_6A4210(int a1)
{
    *(uint8_t *)(a1 + 97) = 0;
    return a1;
}

int __stdcall JumpjetLocomotionClass::sub_6A4220(int a1)
{
    *(uint8_t *)(a1 + 97) = 1;
    return a1;
}

int __stdcall JumpjetLocomotionClass::sub_6A4230(int a1)
{
    return *(uint32_t *)(a1 + 84);
}

int __stdcall JumpjetLocomotionClass::sub_6A4240(int a1)
{
    return *(uint32_t *)(a1 + 88);
}

int __stdcall JumpjetLocomotionClass::sub_6A4250(int a1)
{
    return *(uint32_t *)(a1 + 72);
}

int __stdcall JumpjetLocomotionClass::sub_6A4300(int a1, const void *a2, int *a3)
{
    return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

bool __stdcall JumpjetLocomotionClass::sub_718080(int a1)
{
    return *(uint8_t *)(a1 + 48) == 1;
}

bool  JumpjetLocomotionClass::sub_718090(uint32_t *this)
{
    return (*(unsigned __int8 (__stdcall **)(uint32_t *))(*(this + 1) + 16))(this + 1) == 0;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_7180A0(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // esi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[6];
    v4 = a1[7];
    v5 = a1[8];
    else
    v3 = *(uint32_t *)(a1[2] + 156);
    v4 = *(uint32_t *)(a1[2] + 160);
    v5 = *(uint32_t *)(a1[2] + 164);
    result = a2;
    *a2 = v3;
    a2[1] = v4;
    a2[2] = v5;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_718230(int a1)
{
    *(uint32_t *)(a1 + 24) = dword_B0EBF8;
    *(uint32_t *)(a1 + 28) = dword_B0EBFC;
    *(uint32_t *)(a1 + 32) = dword_B0EC00;
    *(uint8_t *)(a1 + 48) = 0;
    *(uint8_t *)(a1 + 50) = 0;
    return a1;
}

char __stdcall JumpjetLocomotionClass::sub_7192C0(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_719BF0(uint32_t *a1)
{
    int v1; // edx
    int result; // eax
    uint32_t *v3; // ecx
    v1 = a1[15];
    result = a1[17];
    if ( v1 == -1 )
    LABEL_4:
    if ( result )
    return result;
    goto LABEL_5;
    if ( (int)CurrentFrame - v1 < result )
    result -= (int)CurrentFrame - v1;
    goto LABEL_4;
    LABEL_5:
    *(uint8_t *)(a1[3] + 625) = 0;
    v3 = (uint32_t *)a1[3];
    if ( !v3[173] )
    Mission::GetMissionDelay(v3);
    if ( !JumpjetLocomotionClass::StubReturnZero_16((uint32_t *)a1[3]) )
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(*(uint32_t *)a1[3] + 1156))(a1[3], 0, 1);
    result = a1[14];
    if ( result > 0 )
    a1[14] = ++result;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_719C60(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291207;
    a2[1] = 298948665;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_719E20(int a1)
{
    return 2;
}

int __stdcall JumpjetLocomotionClass::sub_719E30(int a1, const void *a2, int *a3)
{
    int result; // eax
    int v4; // eax
    result = LocomotionClass::QueryInterface(a1, a2, a3);
    if ( result == -2147467262 )
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) )
    if ( a1 )
    v4 = a1 + 24;
    else
    v4 = 0;
    *a3 = v4;
    if ( *a3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
    else
    return -2147467262;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_719E90(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 48) )
    return -2147467259;
    *(uint32_t *)(a1 + 48) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_719EE0(int a1, uint32_t *a2)
{
    int v3; // ecx
    int v4; // ecx
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 - 12);
    if ( v3 )
    *(uint32_t *)(v3 + 1064) = 0;
    *(uint32_t *)(*(uint32_t *)(a1 - 12) + 1068) = 0;
    v4 = *(uint32_t *)(a1 + 48);
    if ( !v4 )
    return 1;
    *a2 = v4;
    *(uint32_t *)(a1 + 48) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_719F30(int a1)
{
    int v1; // eax
    bool result; // al
    result = 0;
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20) )
    if ( *(uint32_t *)(a1 + 48) )
    if ( !*(uint8_t *)(a1 + 29) )
    v1 = *(uint32_t *)(a1 - 12);
    if ( !*(uint8_t *)(v1 + 636) && !*(uint32_t *)(a1 + 32) && !*(uint8_t *)(v1 + 1709) )
    return 1;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_719F80(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 12;
    if ( a1[12] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::sub_71A090(uint32_t *a1, int a2)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // ecx
    uint32_t v5[3]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v6[12]; // [esp+14h] [ebp-Ch] BYREF
    result = a2;
    if ( !a2 )
    v3 = (uint32_t *)(*(int (__stdcall **)(uint32_t *, uint8_t *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = a1[2];
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v4 + 244))(v4, v5);
    return result;
}

int JumpjetLocomotionClass::sub_71A120()
{
    return 76;
}

uint32_t * JumpjetLocomotionClass::sub_71A130(uint32_t *Block, char a2)
{
    int v3; // eax
    v3 = *(Block + 18);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v3 + 8))(v3);
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall JumpjetLocomotionClass::sub_71A160(int a1, const void *a2, int *a3)
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}

int __stdcall JumpjetLocomotionClass::sub_71A190(int a1, const void *a2, int *a3)
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}

bool __stdcall JumpjetLocomotionClass::sub_728A50(int a1)
{
    return *(uint32_t *)(a1 + 20) != 0;
}

char __stdcall JumpjetLocomotionClass::sub_728A60(uint32_t *a1)
{
    char result; // al
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    return 0;
    result = 1;
    if ( a1[5] == 1 )
    return 0;
    return result;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_728A90(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // esi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[6];
    v4 = a1[7];
    v5 = a1[8];
    else
    v3 = *(uint32_t *)(a1[2] + 156);
    v4 = *(uint32_t *)(a1[2] + 160);
    v5 = *(uint32_t *)(a1[2] + 164);
    result = a2;
    *a2 = v3;
    a2[1] = v4;
    a2[2] = v5;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_728AF0(int a1, int a2, int a3, int a4)
{
    int result; // eax
    int v5; // ecx
    int v6; // ebx
    int v7; // ebp
    int v8; // edi
    int v9; // eax
    uint32_t *v10; // eax
    int v11; // eax
    uint32_t v12[3]; // [esp+4h] [ebp-Ch] BYREF
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 892))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 896))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 468))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 472))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)result )
    v5 = *(uint32_t *)(a1 + 8);
    v6 = a3;
    v7 = a4;
    v8 = a2;
    v12[1] = a3;
    v12[0] = a2;
    v12[2] = a4;
    v9 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 136))(v5);
    v10 = (uint32_t *)(*(int (__thiscall **)(int, int *, uint32_t *))(*(uint32_t *)v9 + 108))(v9, &a2, v12);
    *(uint32_t *)(a1 + 24) = *v10;
    *(uint32_t *)(a1 + 28) = v10[1];
    *(uint32_t *)(a1 + 32) = v10[2];
    if ( (v8 != dword_B0F910 || v6 != dword_B0F914 || v7 != dword_B0F918)
    && (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 456))(*(uint32_t *)(a1 + 8)) < 0 )
    v11 = *(uint32_t *)(a1 + 20);
    if ( v11 != 3 && v11 != 5 && v11 != 1 && v11 != 6 && v11 != 2 )
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 8) + 292))(*(uint32_t *)(a1 + 8), 0);
    *(uint32_t *)(a1 + 20) = 4;
    result = *(uint32_t *)(a1 + 20);
    if ( !result )
    *(uint32_t *)(a1 + 20) = 1;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_7291D0(int a1, char a2)
{
    if ( *(uint32_t *)(a1 + 20) == 4 )
    return (a2 != 0) + 4;
    else
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_729E50(int a1)
{
    uint32_t *v2; // eax
    int v3; // ebx
    int v4; // edi
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int result; // eax
    double v9; // [esp+Ch] [ebp-28h]
    int v10; // [esp+14h] [ebp-20h] BYREF
    int v11; // [esp+18h] [ebp-1Ch] BYREF
    int v12; // [esp+1Ch] [ebp-18h]
    int v13; // [esp+20h] [ebp-14h] BYREF
    int v14; // [esp+24h] [ebp-10h]
    uint32_t v15[2]; // [esp+28h] [ebp-Ch] BYREF
    int GroundHeight; // [esp+30h] [ebp-4h]
    int v17; // [esp+38h] [ebp+4h]
    v2 = (uint32_t *)(*(uint32_t *)(a1 + 8) + 156);
    v15[0] = *v2;
    v15[1] = v2[1];
    GroundHeight = v2[2];
    Coord::To_Screen(TacticalClass_Instance, v15, &v11);
    GroundHeight = Cell::GetGroundHeight(v15);
    Coord::To_Screen(TacticalClass_Instance, v15, &v13);
    v3 = *(uint32_t *)(a1 + 48);
    v10 = v3;
    v4 = v12 - v14;
    v17 = v12 - v14;
    if ( v3 )
    v5 = *(uint32_t *)(a1 + 36);
    v6 = *(uint32_t *)(a1 + 44);
    if ( v5 != -1 )
    if ( (int)CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)CurrentFrame - v5;
    v9 = (double)(v3 - v6) / (double)v10;
    else
    v9 = 1.0;
    v7 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(a1 + 8) + 904), &v10) >> 7) + 1) >> 1);
    switch ( *(uint32_t *)(a1 + 20) )
    case 2:
    if ( v9 > 0.4 && !*(uint8_t *)(a1 + 52) )
    *(uint8_t *)(a1 + 52) = 1;
    if ( v7 <= 70 || v7 >= 140 )
    result = Math::RoundToInt((double)dword_844A9C * v9 + (double)v17);
    else
    result = dword_844A9C + v4;
    break;
    case 3:
    result = dword_844A9C + v4;
    break;
    case 4:
    result = dword_844A9C + v4;
    break;
    case 5:
    result = v4 + dword_844A98;
    break;
    case 6:
    result = Math::RoundToInt((1.0 - v9) * (double)dword_844A98 + (double)v17);
    break;
    default:
    result = JumpjetLocomotionClass::StubReturnFalse(a1);
    break;
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_72A020(int a1)
{
    int v1; // eax
    v1 = *(uint32_t *)(a1 + 20);
    if ( v1 == 3 || v1 == 2 || v1 == 7 || v1 == 6 || v1 == 5 )
    return 2;
    else
    return JumpjetLocomotionClass::CheckState(a1);
}

bool __stdcall JumpjetLocomotionClass::sub_72A060(int a1)
{
    unsigned int v1; // eax
    v1 = *(uint32_t *)(a1 + 20);
    return v1 < 2 || v1 == 7 || v1 == 2 || v1 == 6;
}

int  JumpjetLocomotionClass::sub_72A090(void *this, int a2, void *a3)
{
    void *v3; // eax
    void *v5; // [esp+0h] [ebp-4h] BYREF
    v5 = this;
    if ( ArmageddonMode )
    return 0;
    v5 = a3;
    v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v5);
    if ( Cell::IsBuildableAdvanced((int)v3) )
    return 0;
    else
    return 7;
}

char __stdcall JumpjetLocomotionClass::sub_72A0E0(int a1, int a2)
{
    return FacingClass::Update((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_72A1A0(int a1)
{
    return *(uint32_t *)(a1 + 20) != 4 ? 2 : 0;
}

int __stdcall JumpjetLocomotionClass::sub_72A1C0(int a1)
{
    int result; // eax
    result = JumpjetLocomotionClass::MissionStub11(a1);
    if ( !result )
    if ( *(uint32_t *)(a1 + 20) )
    return 7;
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_75AB30(int a1)
{
    return *(uint8_t *)(a1 + 48);
}

bool __stdcall JumpjetLocomotionClass::sub_75AB40(uint32_t *a1)
{
    return (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1)
    && *(double *)(a1[2] + 1400) > 0.0
    && (a1[9] != g_AsyncMovieState || a1[10] != g_MovieFrameState1 || a1[11] != g_MovieFrameState2);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_75ABA0(uint32_t *a1, uint32_t *a2)
{
    uint32_t *result; // eax
    int v3; // edx
    int v4; // esi
    uint32_t *v5; // edi
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 16))(a1) )
    result = a2;
    v3 = a1[7];
    v4 = a1[8];
    v5 = a2;
    *a2 = a1[6];
    else
    result = a2;
    v3 = g_MovieFrameState1;
    v4 = g_MovieFrameState2;
    v5 = a2;
    *a2 = g_AsyncMovieState;
    v5[1] = v3;
    v5[2] = v4;
    return result;
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_75AC00(uint32_t *a1, uint32_t *a2)
{
    int v2; // edx
    int v3; // eax
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // esi
    if ( a1[9] == g_AsyncMovieState && a1[10] == g_MovieFrameState1 && a1[11] == g_MovieFrameState2 )
    v5 = a1[2];
    v6 = v5 + 156;
    v7 = *(uint32_t *)(v5 + 156);
    v8 = *(uint32_t *)(v5 + 160);
    v9 = *(uint32_t *)(v6 + 8);
    *a2 = v7;
    a2[1] = v8;
    a2[2] = v9;
    return a2;
    else
    v2 = a1[10];
    v3 = a1[11];
    *a2 = a1[9];
    a2[1] = v2;
    a2[2] = v3;
    return a2;
}

int __stdcall JumpjetLocomotionClass::sub_75AC80(uint8_t *a1)
{
    a1[49] = 1;
    VoxelAnim::Draw((int)(a1 - 4), (uint32_t *)1);
    a1[49] = 0;
    return (*(int (__stdcall **)(uint8_t *))(*(uint32_t *)a1 + 16))(a1);
}

char __stdcall JumpjetLocomotionClass::sub_75ACB0(int a1, int a2, int a3, int a4)
{
    int v4; // eax
    int v5; // ecx
    int v6; // edx
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 892))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 468))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 472))(*(uint32_t *)(a1 + 8));
    if ( !(uint8_t)v4 )
    v4 = a2;
    v5 = a3;
    v6 = a4;
    *(uint32_t *)(a1 + 24) = a2;
    *(uint32_t *)(a1 + 28) = v5;
    *(uint32_t *)(a1 + 32) = v6;
    if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 )
    if ( *(uint32_t *)(a1 + 36) == g_AsyncMovieState
    && *(uint32_t *)(a1 + 40) == g_MovieFrameState1
    && *(uint32_t *)(a1 + 44) == g_MovieFrameState2 )
    LOBYTE(v4) = *(uint8_t *)(a1 + 48);
    *(uint8_t *)(a1 + 48) = 0;
    if ( (uint8_t)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 1356))(*(uint32_t *)(a1 + 8));
    else
    a3 = v5;
    a2 = v4;
    a4 = v6;
    v4 = (int)Coord::To_Cell(&MapClass_Instance, &a2);
    if ( (*(uint32_t *)(v4 + 320) & 0x100) != 0 )
    v4 = Coord::ScaleToScreenY((void *)0x3C);
    *(uint32_t *)(a1 + 32) += v4;
    *(uint8_t *)(a1 + 48) = 1;
    return v4;
}

int __stdcall JumpjetLocomotionClass::sub_75ADA0(int a1)
{
    int result; // eax
    result = a1;
    *(uint32_t *)(a1 + 24) = g_AsyncMovieState;
    *(uint32_t *)(a1 + 28) = g_MovieFrameState1;
    *(uint32_t *)(a1 + 32) = g_MovieFrameState2;
    if ( *(uint32_t *)(a1 + 36) == g_AsyncMovieState
    && *(uint32_t *)(a1 + 40) == g_MovieFrameState1
    && *(uint32_t *)(a1 + 44) == g_MovieFrameState2 )
    *(uint8_t *)(a1 + 48) = 0;
    *(uint8_t *)(a1 + 50) = 0;
    return (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 1356))(*(uint32_t *)(a1 + 8));
    return result;
}

char __stdcall JumpjetLocomotionClass::sub_75AE00(int a1, int a2)
{
    return FacingClass::Set_SyncLog((char *)(*(uint32_t *)(a1 + 8) + 904), &a2);
}

int __stdcall JumpjetLocomotionClass::sub_75AE30(int a1, int a2, int a3, int a4)
{
    char v4; // bl
    int result; // eax
    uint32_t v6[3]; // [esp+Ch] [ebp-Ch] BYREF
    v6[0] = a2;
    v4 = *(uint8_t *)(a1 + 48);
    v6[1] = a3;
    v6[2] = a4;
    Voxel::DrawHelper((uint32_t *)(a1 - 4), v6);
    result = g_AsyncMovieState;
    if ( *(uint32_t *)(a1 + 36) == g_AsyncMovieState
    && *(uint32_t *)(a1 + 40) == g_MovieFrameState1
    && *(uint32_t *)(a1 + 44) == g_MovieFrameState2
    && *(uint32_t *)(a1 + 24) == g_AsyncMovieState
    && *(uint32_t *)(a1 + 28) == g_MovieFrameState1
    && *(uint32_t *)(a1 + 32) == g_MovieFrameState2 )
    *(uint8_t *)(a1 + 48) = 0;
    if ( v4 )
    return (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 1356))(*(uint32_t *)(a1 + 8));
    return result;
}

int __stdcall JumpjetLocomotionClass::sub_75C7E0(int a1)
{
    return 2;
}

int __stdcall JumpjetLocomotionClass::sub_75C850(int a1, int a2)
{
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 32) )
    return -2147467259;
    *(uint32_t *)(a1 + 32) = a2;
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    return 0;
}

int __stdcall JumpjetLocomotionClass::sub_75C8A0(int a1, uint32_t *a2)
{
    int v3; // eax
    if ( !a2 )
    return -2147467261;
    v3 = *(uint32_t *)(a1 + 32);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(uint32_t *)(a1 + 32) = 0;
    return 0;
}

bool __stdcall JumpjetLocomotionClass::sub_75C8E0(int a1)
{
    return !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(a1 - 20) + 16))(a1 - 20)
    && *(uint32_t *)(a1 + 32)
    && !*(uint8_t *)(a1 + 29)
    && !*(uint8_t *)(*(uint32_t *)(a1 - 12) + 1709);
}

int __stdcall JumpjetLocomotionClass::sub_75C920(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v2; // ebp
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // esi
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 8;
    if ( a1[8] )
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*a1 + 12))(a1, v2);
    if ( a1 )
    (*(void (__stdcall **)(uint32_t *))(*a1 + 8))(a1);
    return v6;
    else
    a2 = 0;
    if ( a1 == (uint32_t *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(uint32_t *, void *, uint32_t **))*(a1 - 6))(a1 - 6, &unk_818858, &a1);
    if ( v7 >= 0 )
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    else
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(uint32_t *, uint32_t *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(uint32_t *))(*a2 + 8))(a2);
    return v6;
}

int __stdcall JumpjetLocomotionClass::sub_75CA30(uint32_t *a1, int a2)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // ecx
    uint32_t v5[3]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v6[12]; // [esp+14h] [ebp-Ch] BYREF
    result = a2;
    if ( !a2 )
    v3 = (uint32_t *)(*(int (__stdcall **)(uint32_t *, uint8_t *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = a1[2];
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v4 + 244))(v4, v5);
    return result;
}

bool __stdcall JumpjetLocomotionClass::sub_75CA80(int a1, int a2, int a3, int a4)
{
    int *v4; // eax
    int v5; // ebp
    int v6; // kr04_4
    int v7; // eax
    uint8_t v9[12]; // [esp+10h] [ebp-Ch] BYREF
    v4 = (int *)(*(int (__stdcall **)(int, uint8_t *))(*(uint32_t *)a1 + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256)
    && (_WORD)v7 == (unsigned __int16)(a3 / 256)
    && (int)abs32(v5 - a4) <= dword_B45C28;
}

char __stdcall JumpjetLocomotionClass::sub_75CB20(int a1)
{
    return *(uint8_t *)(a1 + 50);
}

uint32_t *__stdcall JumpjetLocomotionClass::sub_75CB30(uint32_t *a1)
{
    a1[6] = g_AsyncMovieState;
    a1[7] = g_MovieFrameState1;
    a1[8] = g_MovieFrameState2;
    a1[9] = g_AsyncMovieState;
    a1[10] = g_MovieFrameState1;
    a1[11] = g_MovieFrameState2;
    return a1 + 9;
}

int __stdcall JumpjetLocomotionClass::sub_75CBC0(int a1)
{
    *(uint8_t *)(a1 + 50) = 0;
    return a1;
}

int __stdcall JumpjetLocomotionClass::sub_75CC30(int a1, const void *a2, int *a3)
{
    return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

int __stdcall JumpjetLocomotionClass::sub_75CC60(int a1, const void *a2, int *a3)
{
    return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

