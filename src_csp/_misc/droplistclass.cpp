#include "droplistclass.hpp"

int  DropListClass::_vt08(int this)
{
    if ( *(uint8_t *)(this + 72) )
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 176) + 36))(this + 176);
    *(uint8_t *)(this + 72) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 176) + 32))(this + 176);
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 80) + 32))(this + 80);
    return Hash::Reset((uint32_t *)this);
}

int  DropListClass::_vt03(uint32_t *this, int a2)
{
    (*(void (__thiscall **)(uint32_t *, int))(*(this + 20) + 12))(this + 20, a2);
    return LinkedList::InsertAfter(this, a2);
}

int  DropListClass::_vt04(uint32_t *this, int a2)
{
    (*(void (__thiscall **)(uint32_t *, int))(*(this + 20) + 16))(this + 20, a2);
    return LinkedList::Append(this, a2);
}

uint32_t * DropListClass::_vt05(uint32_t *this, int a2)
{
    (*(void (__thiscall **)(uint32_t *, int))(*(this + 20) + 20))(this + 20, a2);
    return LinkedList::Attach(this, a2);
}

int  DropListClass::_vt09(int this)
{
    if ( *(uint8_t *)(this + 72) )
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 176) + 36))(this + 176);
    *(uint8_t *)(this + 72) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 80) + 36))(this + 80);
    return LinkClass::Destroy((uint32_t *)this);
}

int  DropListClass::_vt39(void *this, wchar_t *Source)
{
    wcsncpy(*((wchar_t **)this + 13), Source, *((uint32_t *)this + 14));
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 72))(this);
    return (*(int (__thiscall **)(int, wchar_t *))(*((uint32_t *)this + 44) + 136))((int)this + 176, Source);
}

int  DropListClass::_vt40(uint32_t *this)
{
    return (*(int (__thiscall **)(uint32_t *))(*(this + 44) + 156))(this + 44);
}

int  DropListClass::_vt41(uint32_t *this)
{
    return (*(int (__thiscall **)(uint32_t *))(*(this + 44) + 152))(this + 44);
}

char  DropListClass::_vt21(int this)
{
    char result; // al
    result = *(uint8_t *)(this + 72);
    if ( result )
    result = (*(int (__thiscall **)(int))(*(uint32_t *)(this + 176) + 36))(this + 176);
    *(uint8_t *)(this + 72) = 0;
    return result;
}

int  DropListClass::_vt25(uint32_t *this, int a2, int a3)
{
    Rect_Point::Set(this, a2, a3);
    (*(void (__thiscall **)(uint32_t *, int, int))(*(this + 44) + 100))(this + 44, a2, a3 + *(__int16 *)(*(this + 42) + 4));
    return (*(int (__thiscall **)(uint32_t *, int, int))(*(this + 20) + 100))(this + 20, a2 + *(this + 5), a3);
}

void  DropListClass::_vt42(uint32_t *this, wchar_t *String1)
{
    int v3; // edi
    const wchar_t *v4; // eax
    if ( String1 )
    v3 = 0;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 176))(this) > 0 )
    while ( 1 )
    v4 = (const wchar_t *)(*(int (__thiscall **)(uint32_t *, int))(*(this + 44) + 160))(this + 44, v3);
    if ( !_wcsicmp(String1, v4) )
    break;
    if ( ++v3 >= (*(int (__thiscall **)(uint32_t *))(*this + 176))(this) )
    return;
    (*(void (__thiscall **)(uint32_t *, int))(*this + 172))(this, v3);
}

int  DropListClass::_vt35(uint32_t *this)
{
    return *(this + 13);
}

int  DropListClass::_vt44(uint32_t *this)
{
    return (*(int (__thiscall **)(uint32_t *))(*(this + 44) + 148))(this + 44);
}

int  DropListClass::_vt45(uint32_t *this, int a2)
{
    return (*(int (__thiscall **)(uint32_t *, int))(*(this + 44) + 160))(this + 44, a2);
}

uint32_t * DropListClass::_vt00(uint32_t *Block, char a2)
{
    *Block = &DropListClass::`vftable';
    ListClass::Destruct(Block + 44);
    ShapeButtonClass::Destructor((int)(Block + 20));
    DropListClass::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  DropListClass::_vt34(int *this, wchar_t *String, int a3)
{
    size_t v4; // eax
    int v5; // edx
    *(this + 13) = (int)String;
    *(this + 14) = a3 - 1;
    v4 = wcslen(String);
    v5 = *this;
    *(this + 15) = v4;
    return (*(int (__thiscall **)(int *))(v5 + 72))(this);
}

int  DropListClass::_vt27(uint32_t *this, int a2)
{
    if ( !Control::DispatchClick(this, a2) )
    return 0;
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)WWMouseClass_Instance + 32))(
    WWMouseClass_Instance,
    *(this + 3),
    *(this + 4),
    *(this + 5),
    *(this + 6));
    (*(void (__thiscall **)(uint32_t *))(*this + 144))(this);
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 148))(this, *(this + 13));
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 36))(WWMouseClass_Instance);
    return 1;
}

int  DropListClass::_vt31(uint32_t *this, unsigned int a2, int *a3, int a4)
{
    unsigned int v6; // ebx
    int v7; // edx
    int v8; // eax
    int v9; // ebp
    char v10; // al
    if ( *(this + 17) )
    return 0;
    v6 = a2;
    if ( (a2 & 1) != 0 )
    v6 = a2 & 0xFFFFFFFE;
    (*(void (__thiscall **)(uint32_t *))(*this + 80))(this);
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    if ( (v6 & 0x100) == 0 || !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 88))(this) )
    return CellClass::Draw((int)this, v6, a3, 0);
    if ( *a3 == 27 )
    (*(void (__thiscall **)(uint32_t *))(*this + 84))(this);
    return CellClass::Draw((int)this, 0, a3, 0);
    v7 = (unsigned __int8)Keyboard::MapKey((int)g_BinkMoviePlayer, *a3);
    v8 = *a3;
    if ( (*a3 & 0x1000) != 0 && v7 >= 48 && v7 <= 57 )
    BYTE1(v8) &= ~0x10u;
    *a3 = v8;
    if ( (v6 & 0x44) != 0 || !(*(unsigned __int8 (__thiscall **)(uint32_t *, int))(*this + 152))(this, v7) )
    return CellClass::Draw((int)this, v6, a3, 0);
    else if ( (*a3 & 0x1000) == 0 && v7 >= 32 || v8 == 13 || v8 == 8 )
    if ( (v6 & 0x44) != 0 )
    return CellClass::Draw((int)this, v6, a3, 0);
    v9 = *this;
    v10 = Keyboard::MapKey((int)g_BinkMoviePlayer, v8);
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(v9 + 152))(this, v10) )
    return CellClass::Draw((int)this, v6, a3, 0);
    BYTE1(v6) &= ~1u;
    *a3 = 0;
    return CellClass::Draw((int)this, v6, a3, 0);
}

int  DropListClass::_vt36(int *this)
{
    int v1; // edx
    int v2; // eax
    int v3; // ecx
    int v5[4]; // [esp+0h] [ebp-10h] BYREF
    v1 = *(this + 4);
    v5[0] = *(this + 3);
    v2 = *(this + 5);
    v3 = *(this + 6);
    v5[1] = v1;
    v5[3] = v3;
    v5[2] = v2;
    return DrawBuildingTilesSHP(v5, 4, 1);
}

uint32_t * DropListClass::_vt37(uint32_t *this, wchar_t *String)
{
    char v3; // al
    int v4; // edx
    int v5; // ecx
    int v6; // edx
    int v7; // eax
    uint32_t *result; // eax
    int v9; // ebp
    uint32_t *v10; // ebp
    int v11; // edx
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // [esp-14h] [ebp-44h]
    int v16; // [esp-10h] [ebp-40h]
    int v17; // [esp-Ch] [ebp-3Ch]
    int v18; // [esp-8h] [ebp-38h]
    int v19; // [esp-4h] [ebp-34h]
    int v20; // [esp+Ch] [ebp-24h]
    int v21; // [esp+10h] [ebp-20h] BYREF
    int v22; // [esp+14h] [ebp-1Ch] BYREF
    uint32_t v23[2]; // [esp+18h] [ebp-18h] BYREF
    uint8_t v24[4]; // [esp+20h] [ebp-10h] BYREF
    uint8_t v25[12]; // [esp+24h] [ebp-Ch] BYREF
    v3 = (*(int (__thiscall **)(uint32_t *))(*this + 88))(this);
    v4 = *(this + 4);
    v22 = *(this + 3) + 1;
    v5 = *(this + 5) - 2;
    v23[0] = v4 + 1;
    v6 = *(this + 11);
    v21 = v3 != 0 ? 0x2000 : 0;
    v19 = v5;
    v18 = v21 | v6;
    v16 = *((uint32_t *)BuildingTypeClass_AnimTable + *(this + 16));
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2);
    FillRectangle(v23, (int)String, DSurface_Hidden_2, v7, (int)v25, (int)&v22, v16, 0, v18, v19);
    TextRenderer::GetInstance();
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*this + 88))(this);
    if ( (uint8_t)result )
    result = (uint32_t *)wcslen(String);
    if ( (unsigned int)result < *(this + 14) )
    v9 = Text::MeasureWidth((int)String, 0);
    v10 = (uint32_t *)(Text::MeasureWidth((int)asc_82076C, 0) + v9);
    result = (uint32_t *)(*(this + 5) - 2);
    if ( (int)v10 < (int)result )
    v11 = Text::MeasureWidth((int)String, 0) + *(this + 3) + 1;
    v12 = *(this + 4);
    v13 = *(this + 11);
    v21 = v11;
    v22 = v12 + 1;
    v17 = v20 | v13;
    v15 = *((uint32_t *)BuildingTypeClass_AnimTable + *(this + 16));
    v14 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v24);
    return FillRectangle(v23, (int)asc_82076C, DSurface_Hidden_2, v14, (int)&v21, v15, 0, v17, -1, 0);
    return result;
}

char  DropListClass::_vt38(uint32_t *this, int C)
{
    int v3; // edi
    uint32_t *Instance; // ebx
    int v5; // ebp
    int v6; // edx
    int v7; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // eax
    v3 = C;
    Instance = (uint32_t *)TextRenderer::GetInstance();
    if ( C )
    if ( C == 8 )
    v9 = *(this + 15);
    if ( v9 )
    v10 = *(this + 13);
    v11 = v9 - 1;
    *(this + 15) = v11;
    *(_WORD *)(v10 + 2 * v11) = 0;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    return 1;
    if ( C == 13 )
    (*(void (__thiscall **)(uint32_t *))(*this + 84))(this);
    return 0;
    v5 = Text::MeasureWidth(*(this + 13), 0);
    if ( FontClass::GetPixelData(Instance, C) + v5 < *(this + 5) - 2 && *(this + 15) < *(this + 14) )
    if ( isgraph(C) )
    if ( C != 32 )
    LABEL_11:
    if ( (*(uint8_t *)(this + 12) & 8) != 0 && isalpha(C) )
    v3 = toupper(C);
    if ( (*(uint8_t *)(this + 12) & 2) != 0 && isdigit(v3)
    || (*(uint8_t *)(this + 12) & 1) != 0 && isalpha(v3)
    || (*(uint8_t *)(this + 12) & 4) != 0 && !isalnum(v3)
    || v3 == 32 )
    *(_WORD *)(*(this + 13) + 2 * *(this + 15)) = v3;
    v6 = *(this + 13);
    v7 = *(this + 15) + 1;
    *(this + 15) = v7;
    *(_WORD *)(v6 + 2 * v7) = 0;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    return 1;
    return 1;
    else if ( C != 32 )
    return 1;
    if ( *(this + 15) )
    goto LABEL_11;
    return 1;
}

