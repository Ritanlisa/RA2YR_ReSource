#include "bridgeclass.hpp"

char  BridgeClass::RepairProcess(int *this)
{
    char *Member; // ebp
    int v3; // eax
    int *v4; // eax
    uint32_t *v5; // eax
    _WORD *v6; // ebx
    uint32_t *v7; // eax
    char *ClosestObject; // eax
    char *v9; // edi
    int v10; // ebx
    int v11; // eax
    _WORD *v12; // edi
    int v13; // ebx
    uint32_t *v14; // eax
    int *v15; // edi
    int *v16; // eax
    double v17; // st7
    int v18; // eax
    int *v19; // eax
    int v20; // edi
    int v21; // ebx
    int v22; // ecx
    int v23; // eax
    uint32_t *v24; // eax
    int v25; // edx
    int v26; // ecx
    uint8_t *v27; // eax
    int v28; // edx
    int v29; // ecx
    int v30; // edx
    int v31; // ecx
    uint32_t *v32; // esi
    char v34; // [esp+33h] [ebp-75h]
    int v35; // [esp+34h] [ebp-74h]
    int v36; // [esp+34h] [ebp-74h]
    int v37; // [esp+38h] [ebp-70h]
    _WORD *v38; // [esp+3Ch] [ebp-6Ch]
    int v39; // [esp+3Ch] [ebp-6Ch]
    int v40; // [esp+3Ch] [ebp-6Ch]
    int v41; // [esp+40h] [ebp-68h] BYREF
    int v42; // [esp+44h] [ebp-64h] BYREF
    int v43; // [esp+48h] [ebp-60h] BYREF
    __int16 v44; // [esp+4Ch] [ebp-5Ch] BYREF
    int v45; // [esp+50h] [ebp-58h] BYREF
    int v46; // [esp+54h] [ebp-54h] BYREF
    int v47; // [esp+58h] [ebp-50h] BYREF
    uint32_t v48[2]; // [esp+5Ch] [ebp-4Ch] BYREF
    uint32_t v49[2]; // [esp+64h] [ebp-44h] BYREF
    uint32_t v50[3]; // [esp+6Ch] [ebp-3Ch] BYREF
    uint8_t v51[8]; // [esp+78h] [ebp-30h] BYREF
    int v52; // [esp+80h] [ebp-28h]
    uint8_t v53[12]; // [esp+84h] [ebp-24h] BYREF
    uint8_t v54[12]; // [esp+90h] [ebp-18h] BYREF
    uint8_t v55[12]; // [esp+9Ch] [ebp-Ch] BYREF
    Member = (char *)*(this + 185);
    if ( (Member || (Member = (char *)Team::GetMember(this, 0)) != 0)
    && (*(int (__thiscall **)(char *))(*(uint32_t *)Member + 44))(Member) == 1 )
    v4 = (int *)*(this + 454);
    switch ( (unsigned int)v4 )
    case 0u:
    v5 = (uint32_t *)(*(int (__thiscall **)(char *))(*(uint32_t *)Member + 444))(Member);
    v4 = Cell::IsBridge(v5);
    if ( v4 == this )
    if ( !*((uint32_t *)Member + 413) )
    WinAPI::Wrapper(-2147467261);
    LOBYTE(v4) = (*(int (__stdcall **)(uint32_t))(**((uint32_t **)Member + 413) + 16))(*((uint32_t *)Member + 413));
    if ( !(uint8_t)v4 )
    v6 = (_WORD *)(*(int (__thiscall **)(int *, uint32_t))(*this + 264))(this, 0);
    v38 = v6;
    v35 = *(uint32_t *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v45);
    while ( 1 )
    LOWORD(v4) = *v6;
    if ( *v6 == 0x7FFF && v6[1] == 0x7FFF )
    break;
    LOWORD(v37) = v35 + (_WORD)v4;
    HIWORD(v37) = HIWORD(v35) + v6[1];
    v41 = v37;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v41);
    v48[0] = 128;
    v48[1] = 128;
    ClosestObject = (char *)Object::FindClosestObjectCell(v7, v48, 0, (int)this);
    v9 = ClosestObject;
    if ( ClosestObject && ClosestObject != Member )
    v10 = *(uint32_t *)ClosestObject;
    v11 = (*(int (__thiscall **)(int *, uint8_t *, int, uint32_t))(*this + 72))(this, v53, 1, 0);
    (*(void (__thiscall **)(char *, int))(v10 + 372))(v9, v11);
    v6 = v38;
    v6 += 2;
    v38 = v6;
    goto LABEL_25;
    break;
    case 1u:
    v34 = 0;
    v12 = (_WORD *)(*(int (__thiscall **)(int *, uint32_t))(*this + 264))(this, 0);
    v13 = *(uint32_t *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v46);
    while ( *v12 != 0x7FFF || v12[1] != 0x7FFF )
    LOWORD(v39) = v13 + *v12;
    HIWORD(v39) = HIWORD(v13) + v12[1];
    v42 = v39;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v42);
    v49[0] = 128;
    v49[1] = 128;
    v4 = (int *)Object::FindClosestObjectCell(v14, v49, 0, (int)this);
    if ( v4 )
    if ( v4 != (int *)Member )
    v34 = 1;
    if ( (v4[5] & 4) != 0 && !v4[361] )
    LABEL_25:
    *(this + 454) = 1;
    return (char)v4;
    v12 += 2;
    LOBYTE(v4) = v34;
    if ( !v34 )
    v15 = (int *)(*(int (__thiscall **)(char *, uint8_t *))(*(uint32_t *)Member + 72))(Member, v54);
    v16 = (int *)(*(int (__thiscall **)(int *, uint8_t *))(*this + 72))(this, v51);
    v40 = *v15;
    v17 = Math::CalcAngle((double)v16[1] - (double)v15[1], (double)*v15 - (double)*v16);
    LOWORD(v40) = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427) + 0x7FFF;
    v43 = v40;
    LOBYTE(v4) = FacingClass::Update(Member + 904, &v43);
    *(this + 454) = 2;
    break;
    case 2u:
    LOBYTE(v4) = TimerClass::Active((int)(Member + 904));
    if ( !(uint8_t)v4 )
    v18 = ((unsigned __int16)(*ProgressTimer::GetValue((_WORD *)Member + 452, &v47) >> 7) + 1) & 0x1FE;
    if ( v18 == 64 )
    v36 = 67;
    else if ( v18 == 448 )
    v36 = 70;
    else
    v36 = 68;
    if ( v18 != 192 )
    v36 = 69;
    v19 = (int *)(*(int (__thiscall **)(int *, uint8_t *))(*this + 72))(this, v55);
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = *((uint32_t *)Member + 413);
    v52 = v22;
    if ( !v23 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int, int))(**((uint32_t **)Member + 413) + 112))(
    *((uint32_t *)Member + 413),
    v36,
    v20,
    v21,
    v52);
    LOBYTE(v4) = (*(int (__thiscall **)(char *, uint32_t, int))(*(uint32_t *)Member + 1348))(Member, 0, 1072693248);
    *(this + 454) = 3;
    break;
    case 3u:
    v24 = (uint32_t *)(*(int (__thiscall **)(char *))(*(uint32_t *)Member + 444))(Member);
    v4 = Cell::IsBridge(v24);
    if ( v4 == this )
    if ( !*((uint32_t *)Member + 413) )
    WinAPI::Wrapper(-2147467261);
    LOBYTE(v4) = (*(int (__stdcall **)(uint32_t))(**((uint32_t **)Member + 413) + 16))(*((uint32_t *)Member + 413));
    if ( !(uint8_t)v4 )
    v44 = 0x8000;
    LOBYTE(v4) = FacingClass::Update(Member + 904, &v44);
    *(this + 454) = 4;
    break;
    case 4u:
    LOBYTE(v4) = TimerClass::Active((int)(Member + 904));
    if ( !(uint8_t)v4 )
    if ( BuildingClass::GetHealthRatio(this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v26 = 0;
    v27 = (uint8_t *)(*(this + 328) + 4596);
    else
    v26 = 1;
    v27 = (uint8_t *)(*(this + 328) + 4612);
    if ( v27 && *v27 )
    BuildingClass::PlayAnim(this, v25, v27, 10, v26, 0, 0);
    if ( BuildingClass::GetHealthRatio(this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v29 = 0;
    v4 = (int *)(*(this + 328) + 4664);
    else
    v29 = 1;
    v4 = (int *)(*(this + 328) + 4680);
    if ( v4 && *(uint8_t *)v4 )
    LOBYTE(v4) = BuildingClass::PlayAnim(this, v28, v4, 11, v29, 0, 0);
    *(this + 454) = 5;
    break;
    case 5u:
    *(this + 185) = (int)Member;
    v30 = *(uint32_t *)Member;
    *((uint32_t *)Member + 185) = this;
    *((uint32_t *)Member + 133) = -1;
    (*(void (__thiscall **)(char *))(v30 + 336))(Member);
    v31 = *(this + 185);
    *(this + 454) = 6;
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)v31 + 488))(v31, 5, 1);
    LOBYTE(v4) = (uint8_t)RulesClass_Instance;
    if ( RulesClass_Instance->ActivateSound != -1 )
    v32 = this + 39;
    v50[0] = *v32;
    v50[1] = v32[1];
    v50[2] = v32[2];
    LOBYTE(v4) = StartAudioControllerAt(RulesClass_Instance->ActivateSound, (int)v50, 0);
    break;
    default:
    return (char)v4;
    else
    v3 = *this;
    *(this + 454) = 0;
    LOBYTE(v4) = (*(int (__thiscall **)(int *, int, uint32_t))(v3 + 488))(this, 5, 0);
    return (char)v4;
}

