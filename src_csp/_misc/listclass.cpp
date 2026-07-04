#include "listclass.hpp"

// 0x00557800
int  ListClass::Destru_vt43(int *this, int a2)
{
    int result; // eax
    int v4; // edi
    int v5; // eax
    result = a2;
    if ( a2 )
    v4 = *this;
    v5 = (*(int (__thiscall **)(int *, int *))(*(this + 13) + 16))(this + 13, &a2);
    return (*(int (__thiscall **)(int *, int))(v4 + 168))(this, v5);
    return result;
}

// 0x00557D20
uint32_t * ListClass::Destru_vt50(int *this, int a2, int a3, int a4, int a5, int a6)
{
    int v7; // ebx
    int Type; // ebp
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // edx
    int v13; // ecx
    int *v14; // edi
    int v15; // eax
    int v17; // [esp-14h] [ebp-4Ch]
    int v18; // [esp-4h] [ebp-3Ch]
    uint32_t v19[2]; // [esp+10h] [ebp-28h] BYREF
    uint32_t v20[4]; // [esp+18h] [ebp-20h] BYREF
    uint8_t v21[16]; // [esp+28h] [ebp-10h] BYREF
    v7 = *(this + 11);
    Type = BuildingAnim::GetType();
    if ( a6 )
    BYTE1(v7) |= 0x20u;
    v9 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + Type) + 796);
    v10 = *(uint32_t *)(FileSystem_THEATER_PAL + 372);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v11 = *(unsigned __int8 *)(v10 + v9);
    else
    v11 = *(unsigned __int16 *)(v10 + 2 * v9);
    v20[0] = a3;
    v20[3] = *(this + 19);
    v20[1] = a4;
    v20[2] = a5;
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v20, v11);
    else if ( (v7 & 0x4000) == 0 )
    BYTE1(v7) |= 0x10u;
    v12 = *(this + 14);
    v19[0] = a3;
    v13 = *(this + 12);
    v19[1] = a4;
    v14 = (int *)(v12 + 4 * a2);
    v18 = v13;
    v17 = *((uint32_t *)BuildingTypeClass_AnimTable + Type);
    v15 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v21);
    return FillRectangle(v20, *v14, DSurface_Hidden_2, v15, (int)v19, v17, 0, v7, a5, v18);
}

uint8_t * ListClass::Destru_vt00(uint8_t *Block, char a2)
{
    char v3; // al
    int v4; // edx
    void *v5; // eax
    v3 = *(Block + 84);
    *(uint32_t *)Block = &ListClass::`vftable';
    if ( v3 )
    v4 = *((uint32_t *)Block + 70);
    *((uint32_t *)Block + 5) += *((uint32_t *)Block + 75);
    *(Block + 84) = 0;
    (*(void (__thiscall **)(uint8_t *))(v4 + 36))(Block + 280);
    (*(void (__thiscall **)(uint8_t *))(*((uint32_t *)Block + 22) + 36))(Block + 88);
    (*(void (__thiscall **)(uint8_t *))(*((uint32_t *)Block + 46) + 36))(Block + 184);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)Block + 72))(Block);
    SliderClass::Destructor((uint32_t *)Block + 70);
    ShapeButtonClass::Destructor((int)(Block + 184));
    ShapeButtonClass::Destructor((int)(Block + 88));
    v5 = (void *)*((uint32_t *)Block + 14);
    *((uint32_t *)Block + 13) = &VectorClass<unsigned short const *>::`vftable';
    if ( v5 && *(Block + 65) )
    __3_YAXPAX_Z(v5);
    *((uint32_t *)Block + 14) = 0;
    *(Block + 65) = 0;
    *((uint32_t *)Block + 15) = 0;
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

