#include "checklistclass.hpp"

int  CheckListClass::_vt34(uint32_t *this, int a2)
{
    uint8_t *v3; // eax
    v3 = __2_YAPAXI_Z(8u);
    if ( !v3 )
    return ListClass::AddItem(this, 0);
    *(uint32_t *)v3 = a2;
    v3[4] = 0;
    return ListClass::AddItem(this, (int)v3);
}

int  CheckListClass::_vt39(uint32_t *this)
{
    int v1; // eax
    v1 = ColorListClass::SetColor(this);
    if ( v1 )
    return *(uint32_t *)v1;
    else
    return 0;
}

int  CheckListClass::_vt40(uint32_t *this, int a2)
{
    int Clamped; // eax
    Clamped = Array::GetClamped(this, a2);
    if ( Clamped )
    return *(uint32_t *)Clamped;
    else
    return 0;
}

void  CheckListClass::_vt43(unsigned int *this, wchar_t *String2)
{
    int v3; // ebx
    const wchar_t **Clamped; // eax
    const wchar_t **v5; // edi
    v3 = 0;
    if ( (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) > 0 )
    while ( 1 )
    Clamped = (const wchar_t **)Array::GetClamped(this, v3);
    v5 = Clamped;
    if ( Clamped )
    if ( !_wcsicmp(*Clamped, String2) )
    break;
    if ( ++v3 >= (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) )
    return;
    ListClass::RemoveItem(this, v3);
    __3_YAXPAX_Z(v5);
}

int  CheckListClass::_vt45(uint32_t *this, wchar_t *String2)
{
    int v3; // edi
    int result; // eax
    const wchar_t **Clamped; // eax
    v3 = 0;
    result = (*(int (__thiscall **)(uint32_t *))(*this + 148))(this);
    if ( result > 0 )
    while ( 1 )
    Clamped = (const wchar_t **)Array::GetClamped(this, v3);
    if ( Clamped )
    if ( !_wcsicmp(*Clamped, String2) )
    break;
    ++v3;
    result = (*(int (__thiscall **)(uint32_t *))(*this + 148))(this);
    if ( v3 >= result )
    return result;
    return (*(int (__thiscall **)(uint32_t *, int))(*this + 184))(this, v3);
    return result;
}

int  CheckListClass::_vt31(int this, int a2, uint32_t *a3, int a4)
{
    int v6; // edi
    int Clamped; // eax
    char v8; // al
    char v9; // bl
    int v10; // eax
    if ( *(uint8_t *)(this + 372) )
    return 0;
    v6 = CellClass::DrawWithFlags((uint32_t *)this, a2, a3, 0);
    if ( (a2 & 1) != 0 )
    Clamped = Array::GetClamped((uint32_t *)this, *(uint32_t *)(this + 364));
    if ( Clamped )
    v8 = *(uint8_t *)(Clamped + 4);
    else
    v8 = 0;
    v9 = v8 == 0;
    v10 = Array::GetClamped((uint32_t *)this, *(uint32_t *)(this + 364));
    if ( v10 )
    if ( *(uint8_t *)(v10 + 4) != v9 )
    *(uint8_t *)(v10 + 4) = v9;
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 72))(this);
    return v6;
}

int  CheckListClass::_vt37(uint32_t *this)
{
    return *(this + 17);
}

char  CheckListClass::_vt42(unsigned int *this, signed int a2)
{
    return ListClass::RemoveItem(this, a2);
}

int  CheckListClass::_vt46(int *this, unsigned int a2)
{
    return ColorListClass::Clear(this, a2);
}

unsigned int * CheckListClass::_vt00(unsigned int *Block, char a2)
{
    void *Clamped; // edi
    *Block = (unsigned int)&CheckListClass::`vftable';
    while ( *(Block + 17) )
    Clamped = (void *)Array::GetClamped(Block, 0);
    ListClass::RemoveItem(Block, 0);
    __3_YAXPAX_Z(Clamped);
    ListClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  CheckListClass::sub_556EB0(int this)
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

unsigned int  CheckListClass::sub_556EE0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  CheckListClass::sub_557090(void *this, int a2, uint32_t *a3)
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

int  CheckListClass::sub_557140(int *this, uint32_t *a2)
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

uint32_t * CheckListClass::sub_5571C0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<LineTrail *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  CheckListClass::_vt25(uint32_t *this, int a2, int a3)
{
    int v3; // eax
    int v4; // esi
    int v5; // edi
    int v6; // edx
    int v7; // ebp
    int result; // eax
    v3 = *(this + 5);
    v4 = *(this + 27);
    v5 = *(this + 51);
    *(this + 25) = a2 + v3 - v4;
    *(this + 26) = a3;
    *(this + 49) = a2 + v3 - v5;
    v6 = *(this + 6) - *(this + 52);
    *(this + 50) = v6 + a3;
    v7 = v4;
    if ( v4 <= v5 )
    v7 = v5;
    *(this + 73) = a2 + v3 - v7;
    result = *(this + 28);
    *(this + 74) = result + a3;
    *(this + 76) = v6 - result;
    if ( v4 <= v5 )
    *(this + 75) = v5;
    else
    *(this + 75) = v4;
    return result;
}

char  CheckListClass::_vt36(uint8_t *this, int a2)
{
    int v3; // eax
    char *v4; // esi
    LOBYTE(v3) = *(this + 84);
    if ( (uint8_t)v3 )
    v4 = this + 280;
    v3 = (*(int (__thiscall **)(uint8_t *, int))(*((uint32_t *)this + 70) + 176))(this + 280, a2);
    if ( v3 )
    *((uint32_t *)this + 92) = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v4 + 144))(this + 280);
    LOBYTE(v3) = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 72))(this);
    return v3;
}

char  CheckListClass::_vt49(uint8_t *this, int a2)
{
    int v3; // eax
    char *v4; // esi
    LOBYTE(v3) = *(this + 84);
    if ( (uint8_t)v3 )
    v4 = this + 280;
    v3 = (*(int (__thiscall **)(uint8_t *, int))(*((uint32_t *)this + 70) + 176))(this + 280, a2);
    if ( v3 )
    *((uint32_t *)this + 92) = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v4 + 144))(this + 280);
    LOBYTE(v3) = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 72))(this);
    return v3;
}

int  CheckListClass::_vt38(uint32_t *this)
{
    return *(this + 91);
}

char  CheckListClass::vt_19_(uint32_t *this, char a2, int a3, uint32_t *a4)
{
    char result; // al
    int v6; // edi
    int v7; // eax
    result = a2;
    if ( (a2 & 4) != 0 )
    if ( a4 == this + 22 )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 196))(this, 1);
    result = (uint8_t)this - 72;
    if ( a4 == this + 46 )
    result = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 196))(this, 0);
    if ( a4 == this + 70 )
    v6 = *this;
    v7 = (*(int (__thiscall **)(uint32_t *))(*(this + 70) + 144))(this + 70);
    return (*(int (__thiscall **)(uint32_t *, int))(v6 + 192))(this, v7);
    return result;
}

int  CheckListClass::_vt48(uint32_t *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    v3 = (*(this + 17) - *(this + 20)) & ((*(this + 17) - *(this + 20) < 0) - 1);
    v4 = a2;
    if ( a2 >= 0 )
    if ( a2 > v3 )
    v4 = v3;
    else
    v4 = 0;
    if ( v4 == *(this + 92) )
    return 0;
    *(this + 92) = v4;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    if ( *((uint8_t *)this + 84) )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*(this + 70) + 140))(this + 70, *(this + 92));
    return 1;
}

int  CheckListClass::_vt44(uint8_t *this)
{
    int v2; // edx
    if ( !*(this + 84) )
    return 0;
    v2 = *((uint32_t *)this + 70);
    *((uint32_t *)this + 5) += *((uint32_t *)this + 75);
    *(this + 84) = 0;
    (*(void (__thiscall **)(uint8_t *))(v2 + 36))(this + 280);
    (*(void (__thiscall **)(uint8_t *))(*((uint32_t *)this + 22) + 36))(this + 88);
    (*(void (__thiscall **)(uint8_t *))(*((uint32_t *)this + 46) + 36))(this + 184);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 72))(this);
    return 1;
}

int  CheckListClass::_vt47(uint32_t *this, int a2)
{
    *(this + 12) = a2;
    return a2;
}

int  CheckListClass::_vt03(int this, int a2)
{
    if ( *(uint8_t *)(this + 84) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 280) + 12))(this + 280, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 184) + 12))(this + 184, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 88) + 12))(this + 88, a2);
    return LinkedList::InsertAfter((uint32_t *)this, a2);
}

uint32_t * CheckListClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 84) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 280) + 20))(this + 280, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 184) + 20))(this + 184, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 88) + 20))(this + 88, a2);
    return LinkedList::Attach((uint32_t *)this, a2);
}

int  CheckListClass::_vt04(int this, int a2)
{
    LinkedList::Append((uint32_t *)this, a2);
    if ( *(uint8_t *)(this + 84) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 88) + 16))(this + 88, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 184) + 16))(this + 184, a2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)(this + 280) + 16))(this + 280, a2);
    return (*(int (__thiscall **)(int))(*(uint32_t *)this + 24))(this);
}

int  CheckListClass::_vt09(int this)
{
    if ( *(uint8_t *)(this + 84) )
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 280) + 36))(this + 280);
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 184) + 36))(this + 184);
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 88) + 36))(this + 88);
    return LinkClass::Destroy((uint32_t *)this);
}

int  CheckListClass::_vt41(uint32_t *this, int a2)
{
    int v2; // esi
    v2 = *(this + 91);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 184))(this, v2 + a2);
    return v2;
}

void  CheckListClass::_vt18(int this)
{
    if ( *(uint8_t *)(this + 84) )
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 88) + 72))(this + 88);
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 184) + 72))(this + 184);
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 280) + 72))(this + 280);
    VectorClass_ptr_ConvertClass::MarkDirty((uint8_t *)this);
}

uint32_t * CheckListClass::sub_558130(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<unsigned short const *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  CheckListClass::sub_5581E0(int this)
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

unsigned int  CheckListClass::sub_558210(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  CheckListClass::sub_5583C0(void *this, int a2, uint32_t *a3)
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

int  CheckListClass::sub_558470(int *this, uint32_t *a2)
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

