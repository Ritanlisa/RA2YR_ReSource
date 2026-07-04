#include "displayclass.hpp"

int  DisplayClass::_vt05(int *this)
{
    int *Viewport; // eax
    int v3; // edx
    int v4; // eax
    uint32_t v6[4]; // [esp+4h] [ebp-20h] BYREF
    int v7[4]; // [esp+14h] [ebp-10h] BYREF
    MapClass::Destru_vt05(this);
    dword_8A03FC = SearchMIXFile(aPlaceShp, 0);
    dword_8A072C = SearchMIXFile(aShadowShp, 0);
    Viewport = Display::GetViewport(v7);
    v6[0] = *Viewport;
    v6[1] = Viewport[1];
    v6[2] = Viewport[2];
    v3 = Viewport[3];
    v4 = *this;
    v6[3] = v3;
    return (*(int (__thiscall **)(int *, uint32_t *))(v4 + 168))(this, v6);
}

int  DisplayClass::_vt07(int this)
{
    int *v2; // esi
    int result; // eax
    MapClass::Destru_vt07(this);
    *(uint32_t *)(this + 4516) = 0;
    *(uint32_t *)(this + 4520) = 0;
    *(uint32_t *)(this + 4524) = -1;
    *(uint32_t *)(this + 4476) = 0;
    *(uint32_t *)(this + 4536) = -1;
    *(uint8_t *)(this + 4528) = 0;
    *(uint8_t *)(this + 4559) = 0;
    *(uint8_t *)(this + 4560) = 0;
    *(uint8_t *)(this + 4529) = 0;
    *(uint8_t *)(this + 4530) = 0;
    v2 = dword_8A0360;
    do
    result = (*(int (__thiscall **)(int *))(*v2 + 12))(v2);
    v2 += 6;
    while ( (int)v2 < (int)&dbl_8A03D8 );
    return result;
}

char  DisplayClass::_vt08(void *this)
{
    char result; // al
    VectorCursor_uint_DynamicVectorClass_uint____13_::Get();
    result = ArmageddonMode;
    if ( !ArmageddonMode )
    Hash::Reset(dword_8A06F8);
    return (*(int (__thiscall **)(void *, int *))(*(uint32_t *)this + 48))(this, dword_8A06F8);
    return result;
}

void  DisplayClass::_vt10(int *this, int a2, int a3)
{
    VectorCursor_uint_DynamicVectorClass_uint____13_::Count(this, a2, a3);
}

char  DisplayClass::UpdateCellPassability(uint32_t *this, __int16 *a2, int a3)
{
    __int16 *v3; // esi
    uint32_t *v5; // ebp
    int v6; // eax
    int v7; // eax
    char AdjacentPassableMask; // al
    int v9; // eax
    char v10; // al
    int v11; // eax
    int v12; // edx
    __int16 v13; // cx
    uint32_t *v14; // edi
    int v15; // eax
    int v16; // eax
    int j; // ebp
    int v18; // edx
    __int16 v19; // cx
    uint8_t *v20; // esi
    char v21; // al
    int v22; // eax
    int v23; // eax
    int k; // edi
    int v25; // edx
    __int16 v26; // cx
    uint8_t *v27; // esi
    char v28; // al
    char v30; // [esp+Eh] [ebp-22h]
    bool v31; // [esp+Fh] [ebp-21h]
    int v32; // [esp+10h] [ebp-20h] BYREF
    int i; // [esp+14h] [ebp-1Ch]
    int v34; // [esp+18h] [ebp-18h]
    int v35; // [esp+1Ch] [ebp-14h]
    int v36; // [esp+20h] [ebp-10h] BYREF
    int v37; // [esp+24h] [ebp-Ch]
    uint32_t *v38; // [esp+28h] [ebp-8h]
    int v39; // [esp+2Ch] [ebp-4h]
    v3 = a2;
    v5 = CellCoord::To_CellObj(this, a2);
    v38 = v5;
    v6 = v5[80];
    v31 = (v6 & 2) == 0;
    if ( (v6 & 2) == 0 || (v30 = 0, (v5[75] & 8) == 0) )
    v30 = 1;
    LOBYTE(v6) = v6 & 0xBD | 2;
    LOBYTE(v39) = v30;
    v5[80] = v6;
    v7 = v5[75];
    LOBYTE(v7) = v7 | 8;
    v5[75] = v7;
    AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0);
    if ( AdjacentPassableMask != *((uint8_t *)v5 + 288) )
    v30 = 1;
    *((uint8_t *)v5 + 288) = AdjacentPassableMask;
    if ( *((uint8_t *)v5 + 288) == 0xFF )
    v9 = v5[75];
    LOBYTE(v9) = v9 | 0x10;
    v5[75] = v9;
    v10 = Cell::GetAdjacentPassableMask(a2, 1);
    if ( v10 != *((uint8_t *)v5 + 289) )
    v30 = 1;
    *((uint8_t *)v5 + 289) = v10;
    if ( *((uint8_t *)v5 + 289) == 0xFF )
    v11 = v5[80];
    LOBYTE(v11) = v11 | 1;
    v5[80] = v11;
    if ( v30 )
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v5);
    for ( i = 0; i < 8; ++i )
    v12 = i & 7;
    v13 = *v3 + LOWORD(Direction_X_Offsets[v12]);
    LOWORD(v12) = v3[1] + HIWORD(Direction_X_Offsets[v12]);
    LOWORD(v34) = v13;
    HIWORD(v34) = v12;
    v32 = v34;
    v14 = CellCoord::To_CellObj(this, (__int16 *)&v32);
    if ( v32 != *(uint32_t *)v3 && (v14[75] & 0x10) == 0 )
    v15 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 0);
    if ( v15 == -1 )
    v16 = v14[75];
    if ( (v16 & 8) == 0 )
    goto LABEL_19;
    LOBYTE(v16) = v16 | 0x10;
    v14[75] = v16;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v14);
    for ( j = 0; j < 8; ++j )
    v18 = j & 7;
    v19 = v32 + LOWORD(Direction_X_Offsets[v18]);
    LOWORD(v18) = HIWORD(v32) + HIWORD(Direction_X_Offsets[v18]);
    LOWORD(v35) = v19;
    HIWORD(v35) = v18;
    v36 = v35;
    v20 = CellCoord::To_CellObj(this, (__int16 *)&v36);
    v21 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 0);
    if ( v21 != v20[288] )
    v20[288] = v21;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v20);
    v5 = v38;
    v3 = a2;
    else
    if ( v15 != -2 && (v14[75] & 8) == 0 )
    LABEL_19:
    (*(void (__thiscall **)(uint32_t *, int *, int))(*this + 144))(this, &v32, a3);
    goto LABEL_30;
    if ( v15 >= 0 && v15 != *((char *)v14 + 288) )
    *((uint8_t *)v14 + 288) = v15;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v14);
    LABEL_30:
    if ( v32 != *(uint32_t *)v3 && (v14[80] & 1) == 0 )
    v22 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 1);
    if ( v22 == -1 )
    v23 = v14[80];
    if ( (v23 & 2) == 0 )
    goto LABEL_34;
    LOBYTE(v23) = v23 | 1;
    v14[80] = v23;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v14);
    for ( k = 0; k < 8; ++k )
    v25 = k & 7;
    v26 = v32 + LOWORD(Direction_X_Offsets[v25]);
    LOWORD(v25) = HIWORD(v32) + HIWORD(Direction_X_Offsets[v25]);
    LOWORD(v37) = v26;
    HIWORD(v37) = v25;
    v36 = v37;
    v27 = CellCoord::To_CellObj(this, (__int16 *)&v36);
    v28 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 1);
    if ( v28 != v27[289] )
    v27[289] = v28;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v27);
    v5 = v38;
    v3 = a2;
    else
    if ( v22 != -2 && (v14[80] & 2) == 0 )
    LABEL_34:
    (*(void (__thiscall **)(uint32_t *, int *, int))(*this + 144))(this, &v32, a3);
    continue;
    if ( v22 >= 0 && v22 != *((char *)v14 + 289) )
    *((uint8_t *)v14 + 289) = v22;
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v14);
    if ( v30 )
    CellClass::SpiralFindClosest((int)v5, a3, v39);
    if ( (v5[80] & 2) != 0 && v31 && (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0 )
    CellClass::UpdateZone(v5);
    return v30;
}

char  DisplayClass::vt_entry_94(uint32_t *this, __int16 *a2, int a3, char a4)
{
    int *v5; // esi
    int v6; // eax
    bool v7; // bl
    char AdjacentPassableMask; // al
    int v9; // eax
    char v10; // cl
    char result; // al
    char v12; // [esp+Ch] [ebp-4h]
    char v13; // [esp+14h] [ebp+4h]
    v5 = (int *)CellCoord::To_CellObj(this, a2);
    v6 = v5[80];
    v7 = (v6 & 2) == 0;
    if ( (v6 & 2) == 0 || (v13 = 0, (v5[75] & 8) == 0) )
    v13 = 1;
    LOBYTE(v6) = v6 & 0xBD | 2;
    v12 = v13;
    v5[80] = v6;
    if ( a4 )
    DisplayClass::AdvanceFrameCounter(v5);
    else
    DisplayClass::UpdateDisplayTimer(v5);
    AdjacentPassableMask = Cell::GetAdjacentPassableMask(a2, 0);
    if ( AdjacentPassableMask != *((uint8_t *)v5 + 288) )
    v13 = 1;
    *((uint8_t *)v5 + 288) = AdjacentPassableMask;
    if ( *((uint8_t *)v5 + 288) == 0xFF )
    v9 = v5[75];
    LOBYTE(v9) = v9 | 0x10;
    v5[75] = v9;
    v10 = Cell::GetAdjacentPassableMask(a2, 1);
    if ( v10 == *((uint8_t *)v5 + 289) )
    result = v13;
    else
    result = 1;
    *((uint8_t *)v5 + 289) = v10;
    v13 = 1;
    if ( *((uint8_t *)v5 + 289) == 0xFF )
    v5[80] |= 1u;
    if ( result )
    Tactical::AddCellToDrawList((int)TacticalClass_Instance, (int)v5);
    CellClass::SpiralFindClosest((int)v5, a3, v12);
    result = v13;
    if ( (v5[80] & 2) != 0 && v7 && (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0 )
    CellClass::UpdateZone(v5);
    return v13;
    return result;
}

int  DisplayClass::sub_4AAC10(uint8_t *this, char a2, int a3, int a4)
{
    int v5; // eax
    int *v6; // eax
    __int16 v8; // [esp+6h] [ebp-2Ah] BYREF
    int v9; // [esp+8h] [ebp-28h] BYREF
    int v10; // [esp+Ch] [ebp-24h] BYREF
    uint32_t v11[3]; // [esp+10h] [ebp-20h] BYREF
    int v12; // [esp+1Ch] [ebp-14h] BYREF
    int v13; // [esp+20h] [ebp-10h]
    int v14[3]; // [esp+24h] [ebp-Ch] BYREF
    v10 = 0;
    v12 = 0;
    v13 = 0;
    if ( (a2 & 0x55) != 0 )
    v5 = *((uint32_t *)g_BinkMoviePlayer + 1);
    v12 = *(uint32_t *)g_BinkMoviePlayer;
    v13 = v5;
    else
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 44))(WWMouseClass_Instance);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 48))(WWMouseClass_Instance);
    v6 = (int *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)WWMouseClass_Instance + 52))(
    WWMouseClass_Instance,
    v11);
    v12 = *v6;
    v13 = v6[1];
    TacticalClass::TransformPixel((int)TacticalClass_Instance, v11, &v12);
    v12 -= DSurface_ViewBounds;
    v13 -= Map_VisibleRect;
    Tactical::MouseOver(&v12, (__int16 *)&v9, v14, &v10, (bool *)&v8 + 1, (bool *)&a2);
    if ( v9 != dword_88095C )
    Tactical::MouseMove((int)&MapClass_Instance, v11, &v9);
    return COMObject::ActivateThunk(this, 0, a3, 0);
}

int __stdcall DisplayClass::_vt30(uint32_t *a1)
{
    int *v1; // esi
    int result; // eax
    v1 = dword_8A0360;
    do
    result = LayerClass::Load(v1, a1);
    v1 += 6;
    while ( (int)v1 < (int)&dbl_8A03D8 );
    return result;
}

int __stdcall DisplayClass::_vt31(uint32_t *a1)
{
    int *v1; // esi
    int result; // eax
    v1 = dword_8A0360;
    do
    result = LayerClass::Save(v1, a1);
    if ( result < 0 )
    break;
    v1 += 6;
    while ( (int)v1 < (int)&dbl_8A03D8 );
    return result;
}

uint32_t * DisplayClass::sub_4AEBB0(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char * DisplayClass::_vt04(char *Block, char a2)
{
    MapClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int * DisplayClass::sub_4AEC30(int *Block, char a2)
{
    Vector::Clear((int)(Block + 3));
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

bool  DisplayClass::sub_5519B0(int this, int a2, char a3)
{
    int v5; // ecx
    int v6; // eax
    int v7; // eax
    int v8; // edx
    if ( a3 )
    return DisplayClass::InsertPriorityText((uint32_t *)this, a2) != 0;
    v5 = *(uint32_t *)(this + 8);
    if ( *(uint32_t *)(this + 16) >= v5 )
    if ( !*(uint8_t *)(this + 13) && v5 )
    return 0;
    v6 = *(uint32_t *)(this + 20);
    if ( v6 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 8))(this, v5 + v6, 0) )
    return 0;
    v7 = *(uint32_t *)(this + 16);
    v8 = *(uint32_t *)(this + 4);
    *(uint32_t *)(this + 16) = v7 + 1;
    *(uint32_t *)(v8 + 4 * v7) = a2;
    return 1;
}

int  DisplayClass::sub_7BA4D0(uint32_t *this, void *a2, signed int Size)
{
    int result; // eax
    int v5; // edx
    int v6; // eax
    signed int v7; // edi
    signed int v8; // eax
    result = 0;
    v5 = *(this + 3);
    if ( v5 && a2 && Size > 0 )
    v6 = *(this + 4);
    v7 = Size;
    if ( v6 )
    v8 = v6 - *(this + 6);
    v7 = Size;
    if ( Size >= v8 )
    v7 = v8;
    if ( v7 > 0 )
    memcpy(a2, (const void *)(v5 + *(this + 6)), v7);
    *(this + 6) += v7;
    return v7;
    return result;
}

