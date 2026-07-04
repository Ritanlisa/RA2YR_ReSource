#include "graphicmenuimageitem.hpp"

int  GraphicMenuImageItem::_vt04(int this, char a2)
{
    int v3; // ecx
    BOOL v4; // eax
    int v5; // ecx
    BOOL v6; // eax
    int v7; // ecx
    int result; // eax
    int v9; // ecx
    v3 = *(uint32_t *)(this + 36);
    if ( v3 )
    v4 = *(uint8_t *)(this + 9) && !a2;
    (*(void (__thiscall **)(int, BOOL))(*(uint32_t *)v3 + 4))(v3, v4);
    v5 = *(uint32_t *)(this + 40);
    if ( v5 )
    v6 = *(uint8_t *)(this + 9) && a2;
    (*(void (__thiscall **)(int, BOOL))(*(uint32_t *)v5 + 4))(v5, v6);
    v7 = *(uint32_t *)(this + 44);
    if ( v7 )
    (*(void (__thiscall **)(int, bool))(*(uint32_t *)v7 + 4))(v7, *(uint8_t *)(this + 9) == 0);
    Team::ReleaseAll(*(int **)(this + 16), this + 20);
    result = DSurface::Flip2();
    if ( a2 )
    v9 = *(uint32_t *)(this + 48);
    if ( v9 )
    return nullsub_24(v9);
    return result;
}

int  GraphicMenuImageItem::_vt05(int this, char a2)
{
    int v3; // ecx
    BOOL v4; // eax
    int v5; // ecx
    BOOL v6; // eax
    int v7; // ecx
    v3 = *(uint32_t *)(this + 36);
    if ( v3 )
    v4 = a2 && !*(uint8_t *)(this + 8);
    (*(void (__thiscall **)(int, BOOL))(*(uint32_t *)v3 + 4))(v3, v4);
    v5 = *(uint32_t *)(this + 40);
    if ( v5 )
    v6 = a2 && *(uint8_t *)(this + 8);
    (*(void (__thiscall **)(int, BOOL))(*(uint32_t *)v5 + 4))(v5, v6);
    v7 = *(uint32_t *)(this + 44);
    if ( v7 )
    (*(void (__thiscall **)(int, bool))(*(uint32_t *)v7 + 4))(v7, a2 == 0);
    Team::ReleaseAll(*(int **)(this + 16), this + 20);
    return DSurface::Flip2();
}

uint32_t * GraphicMenuImageItem::_vt03(char **this, uint32_t *a2)
{
    char **v3; // esi
    uint32_t *v4; // eax
    char v5; // bl
    uint32_t *result; // eax
    uint32_t v7[22]; // [esp+Ch] [ebp-6Ch] BYREF
    uint8_t v8[12]; // [esp+64h] [ebp-14h] BYREF
    int v9; // [esp+70h] [ebp-8h]
    NullGuard::Call(this, (int)a2);
    v3 = this + 13;
    v4 = CCFileClass::Construct2(v7, v3);
    v5 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*v4 + 20))(v4, 0);
    v7[0] = &CCFileClass::`vftable';
    v9 = 0;
    Vector::Clear((int)v8);
    v7[0] = &off_7E1668;
    result = (uint32_t *)BufferIOFileClass::Dtor(v7);
    if ( v5 )
    result = __2_YAPAXI_Z(0x30u);
    if ( result )
    result = MSVQAnim::ConstructMSVQAnimHidden(result, v3, (int *)DSurface_Alternate, (int)(a2 + 6), 1);
    if ( result )
    return (uint32_t *)MSEngine::ProcessEvents(a2, (char)result, 300000);
    return result;
}

void * GraphicMenuImageItem::_vt00(void *Block, char a2)
{
    void **v3; // edi
    v3 = (void **)*((uint32_t *)Block + 12);
    *(uint32_t *)Block = &GraphicMenuImageItem::`vftable';
    if ( v3 )
    j_DeleteAndZero(v3);
    __3_YAXPAX_Z(v3);
    DeleteAndZero((void **)Block + 13);
    GraphicMenuItem::Destructor((void ***)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

