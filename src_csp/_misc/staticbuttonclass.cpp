#include "staticbuttonclass.hpp"

int  StaticButtonClass::_vt27(int this, int a2)
{
    if ( !GadgetClass::ClearState((uint8_t *)this, a2) )
    return 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 136))(this);
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 140))(this, *(uint32_t *)(this + 48));
    return 1;
}

void  StaticButtonClass::_vt33(void **this, wchar_t *String, char a3)
{
    size_t v4; // eax
    wchar_t *v5; // eax
    int Instance; // edi
    uint32_t *v7; // eax
    uint32_t v8[3]; // [esp+8h] [ebp-Ch] BYREF
    if ( *(this + 12) )
    __3_YAXPAX_Z(*(this + 12));
    *(this + 12) = 0;
    if ( String )
    v4 = wcslen(String);
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2);
    *(this + 12) = v5;
    if ( v5 )
    wcscpy(v5, String);
    (*((void (__thiscall **)(void **))*this + 18))(this);
    if ( a3 )
    if ( *(this + 12) )
    (*((void (__thiscall **)(void **))*this + 34))(this);
    Instance = TextRenderer::GetInstance();
    *(this + 5) = (void *)Text::MeasureWidth((int)*(this + 12), 0);
    *(this + 6) = *(void **)(Instance + 28);
    v7 = Buffer::Init(v8, 0, 0);
    StaticButtonClass::ReleaseBuffer((int)(this + 9), v7);
    Vector::Clear((int)v8);
}

char  StaticButtonClass::_vt34(int *this)
{
    int *v2; // edi
    int v3; // eax
    int v4; // eax
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    int v12; // [esp+8h] [ebp-10h] BYREF
    int v13; // [esp+Ch] [ebp-Ch]
    int v14; // [esp+10h] [ebp-8h]
    int v15; // [esp+14h] [ebp-4h]
    v2 = this + 9;
    if ( *(this + 9) )
    goto LABEL_9;
    v3 = *(this + 5);
    if ( v3 > 0 )
    v3 = *(this + 6);
    if ( v3 > 0 )
    if ( this != (int *)-36 )
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 112))(DSurface_Hidden_2);
    LOBYTE(v3) = (unsigned __int8)INIClass::loadFile(v2, *(this + 5) * *(this + 6) * v4);
    if ( !*v2 )
    return v3;
    v5 = *(this + 4);
    v6 = *(this + 5);
    v12 = *(this + 3);
    v7 = *(this + 6);
    v13 = v5;
    v15 = v7;
    v14 = v6;
    LOBYTE(v3) = Helper::ProcessData((void **)DSurface_Hidden_2, (int)&v12, v2);
    if ( *v2 )
    LABEL_9:
    v8 = *(this + 5);
    v9 = *(this + 4);
    v12 = *(this + 3);
    v10 = *(this + 6);
    v14 = v8;
    v15 = v10;
    v13 = v9;
    LOBYTE(v3) = sub_437290((int *)DSurface_Hidden_2, (int)&v12, v2);
    return v3;
}

int * StaticButtonClass::_vt35(uint32_t *this, size_t a2)
{
    int *result; // eax
    int v4; // ecx
    int v5; // edi
    int Type; // eax
    int v7; // edx
    uint32_t *v8; // eax
    int v9; // [esp-10h] [ebp-34h]
    int v10; // [esp-8h] [ebp-2Ch]
    uint32_t v11[2]; // [esp+4h] [ebp-20h] BYREF
    int v12; // [esp+Ch] [ebp-18h] BYREF
    uint8_t v13[16]; // [esp+14h] [ebp-10h] BYREF
    result = (int *)*(this + 12);
    if ( result )
    v4 = *(this + 13);
    v5 = *(this + 3);
    if ( (v4 & 0x100) != 0 )
    v5 += *(this + 5) / 2;
    if ( (v4 & 0x200) != 0 )
    v5 = v5 + *(this + 5) - 1;
    Type = BuildingAnim::GetType();
    v7 = *(this + 4);
    v11[0] = v5;
    v11[1] = v7;
    v10 = *(this + 13);
    v9 = *((uint32_t *)BuildingTypeClass_AnimTable + Type);
    v8 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v13);
    return TextRenderer::DrawText(&v12, a2, DSurface_Hidden_2, v8, (int)v11, v9, 0, v10);
    return result;
}

uint32_t * StaticButtonClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 12);
    *Block = &StaticButtonClass::`vftable';
    if ( v3 )
    __3_YAXPAX_Z(v3);
    Vector::Clear((int)(Block + 9));
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

