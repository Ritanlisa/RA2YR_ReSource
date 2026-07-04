#include "sliderclass.hpp"

int  SliderClass::_vt38(uint32_t *this)
{
    return *(this + 19);
}

uint32_t * SliderClass::_vt00(uint32_t *Block, char a2)
{
    SliderClass::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  SliderClass::Destructor(uint32_t *this)
{
    void (__thiscall ***v2)(uint32_t, int); // ecx
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v2 = (void (__thiscall ***)(uint32_t, int))*(this + 15);
    *this = &SliderClass::`vftable';
    if ( v2 )
    (**v2)(v2, 1);
    *(this + 15) = 0;
    v3 = (void (__thiscall ***)(uint32_t, int))*(this + 16);
    if ( v3 )
    (**v3)(v3, 1);
    *(this + 16) = 0;
    return GadgetClass::Dtor(this);
}

int  SliderClass::_vt34(int this, int a2)
{
    int v3; // ebx
    double v4; // st7
    int v5; // edi
    int v6; // eax
    if ( !GaugeClass::SetValue((uint32_t *)this, a2) )
    return 0;
    if ( *(uint8_t *)(this + 46) )
    v3 = *(uint32_t *)(this + 20);
    else
    v3 = *(uint32_t *)(this + 24);
    v4 = (double)*(int *)(this + 48);
    v5 = Math::RoundToInt(v4);
    if ( v5 <= 4 )
    v5 = 4;
    *(uint32_t *)(this + 76) = v5;
    v6 = Math::RoundToInt(v4);
    if ( v6 >= v3 - v5 )
    v6 = v3 - v5;
    *(uint32_t *)(this + 80) = v6;
    return 1;
}

int  SliderClass::_vt35(int this, int a2)
{
    int v3; // ecx
    int v4; // edi
    int v5; // ebx
    double v6; // st7
    int v7; // edi
    int v8; // eax
    v3 = a2;
    v4 = *(uint32_t *)(this + 72);
    if ( a2 >= *(uint32_t *)(this + 48) - v4 )
    v3 = *(uint32_t *)(this + 48) - v4;
    if ( !GaugeClass::GetValue((int *)this, v3) )
    return 0;
    if ( *(uint8_t *)(this + 46) )
    v5 = *(uint32_t *)(this + 20);
    else
    v5 = *(uint32_t *)(this + 24);
    v6 = (double)*(int *)(this + 48);
    v7 = Math::RoundToInt(v6);
    if ( v7 <= 4 )
    v7 = 4;
    *(uint32_t *)(this + 76) = v7;
    v8 = Math::RoundToInt(v6);
    if ( v8 >= v5 - v7 )
    v8 = v5 - v7;
    *(uint32_t *)(this + 80) = v8;
    return 1;
}

int  SliderClass::_vt31(int this, unsigned int a2, uint32_t *a3, int a4)
{
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // ecx
    uint32_t *v9; // edi
    if ( (a2 & 1) == 0 )
    return CellClass::DrawDispatch((int *)this, a2, a3, 0);
    if ( *(uint8_t *)(this + 46) )
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 44))(WWMouseClass_Instance);
    v6 = *(uint32_t *)(this + 12);
    else
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 48))(WWMouseClass_Instance);
    v6 = *(uint32_t *)(this + 16);
    v7 = *(uint32_t *)(this + 80);
    v8 = v6 + 1;
    if ( v5 >= v7 + v8 )
    if ( v5 <= v8 + v7 + *(uint32_t *)(this + 76) )
    v9 = a3;
    CellClass::DrawDispatch((int *)this, a2, a3, 0);
    else
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 172))(this, 0);
    v9 = a3;
    CellClass::DrawDispatch((int *)this, 0, a3, 0);
    else
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 172))(this, 1);
    v9 = a3;
    CellClass::DrawDispatch((int *)this, 0, a3, 0);
    *v9 = 0;
    return 1;
}

int  SliderClass::_vt43(int *this, int a2)
{
    int v2; // eax
    v2 = *this;
    if ( a2 )
    return (*(int (__stdcall **)(int))(v2 + 140))(*(this + 13) - *(this + 18));
    else
    return (*(int (__stdcall **)(int))(v2 + 140))(*(this + 13) + *(this + 18));
}

int  SliderClass::_vt44(int *this, int a2)
{
    int v2; // edx
    int v3; // eax
    v2 = *(this + 13);
    v3 = *this;
    if ( a2 )
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 - 1);
    else
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 + 1);
}

int  SliderClass::_vt39(int this)
{
    int v1; // edx
    int v2; // eax
    int v3; // ecx
    int v5; // eax
    int v6; // edx
    int v7; // eax
    int v8; // [esp+0h] [ebp-10h] BYREF
    int v9; // [esp+4h] [ebp-Ch]
    int v10; // [esp+8h] [ebp-8h]
    int v11; // [esp+Ch] [ebp-4h]
    if ( *(uint8_t *)(this + 46) )
    v1 = *(uint32_t *)(this + 16);
    v8 = *(uint32_t *)(this + 12) + *(uint32_t *)(this + 80);
    v2 = *(uint32_t *)(this + 76);
    v3 = *(uint32_t *)(this + 24);
    v9 = v1;
    v11 = v3;
    v10 = v2;
    else
    v5 = *(uint32_t *)(this + 80);
    v8 = *(uint32_t *)(this + 12);
    v6 = *(uint32_t *)(this + 20);
    v9 = *(uint32_t *)(this + 16) + v5;
    v7 = *(uint32_t *)(this + 76);
    v10 = v6;
    v11 = v7;
    return DrawBuildingTilesSHP(&v8, 1, 1);
}

int  SliderClass::_vt27(int this, int a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v7[4]; // [esp+8h] [ebp-10h] BYREF
    if ( !*(uint8_t *)(this + 68) || !Control::DispatchClick((uint32_t *)this, a2) )
    return BuildingPlacement::HandleClick(this, a2);
    v3 = *(uint32_t *)(this + 16);
    v4 = *(uint32_t *)(this + 20);
    v7[0] = *(uint32_t *)(this + 12);
    v5 = *(uint32_t *)(this + 24);
    v7[1] = v3;
    v7[2] = v4;
    v7[3] = v5;
    DrawBuildingTilesSHP(v7, 0, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 156))(this);
    return 1;
}

char  SliderClass::_vt19(uint32_t *this, char a2, int a3, int a4)
{
    int v4; // eax
    LOBYTE(v4) = a2;
    if ( (a2 & 4) != 0 )
    if ( a4 == *(this + 15) )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 176))(this, 0);
    v4 = *(this + 16);
    if ( a4 == v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t *, int))(*this + 176))(this, 1);
    return v4;
}

