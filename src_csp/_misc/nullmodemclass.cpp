#include "nullmodemclass.hpp"

int  NullModemClass::_vt04(uint32_t *this)
{
    return *(this + 15);
}

int  NullModemClass::_vt13(uint32_t *this, int a2, int a3, int a4, int a5)
{
    int v5; // edx
    int result; // eax
    *(this + 24) = a3;
    *(this + 25) = a4;
    v5 = *(this + 14);
    *(this + 23) = a2;
    *(uint32_t *)(v5 + 40) = a2;
    *(uint32_t *)(*(this + 14) + 44) = *(this + 24);
    result = *(this + 14);
    *(uint32_t *)(result + 48) = *(this + 25);
    return result;
}

int  NullModemClass::_vt11(int *this, int a2)
{
    int result; // eax
    result = *(this + 14);
    if ( result )
    return Rect::SetRedraw(*(uint32_t **)(result + 4), 1);
    return result;
}

int  NullModemClass::_vt15(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int result; // eax
    result = *(this + 14);
    if ( result )
    return EventClass::SetData(*(uint32_t **)(result + 4), a3, a4, a5, a6, a7);
    return result;
}

int __stdcall NullModemClass::_vt05(int a1)
{
    return 0;
}

int __stdcall NullModemClass::_vt06(int a1)
{
    return 0;
}

int  NullModemClass::_vt14(void *this, int a2, int a3, int a4)
{
    return (*(int (__thiscall **)(void *, int, int, int, int))(*(uint32_t *)this + 52))(this, a2, a3, a4, 1);
}

int  NullModemClass::_vt02(int this, int a2, int a3, int a4, int a5)
{
    int result; // eax
    if ( !*(uint32_t *)(this + 60) )
    return 0;
    result = (*(int (__thiscall **)(uint32_t, int, int, int, uint32_t))(**(uint32_t **)(this + 56) + 8))(
    *(uint32_t *)(this + 56),
    a2,
    a3,
    a4,
    0);
    if ( !result )
    ++*(uint32_t *)(this + 104);
    return result;
}

int  NullModemClass::_vt03(int this, int a2, int a3, int a4)
{
    if ( *(uint32_t *)(this + 60) )
    return (*(int (__thiscall **)(uint32_t, int, int))(**(uint32_t **)(this + 56) + 16))(*(uint32_t *)(this + 56), a2, a3);
    else
    return 0;
}

int  NullModemClass::_vt07(uint32_t *this)
{
    int v1; // eax
    v1 = *(this + 14);
    if ( v1 )
    return *(uint32_t *)(*(uint32_t *)(v1 + 4) + 40);
    else
    return 0;
}

int  NullModemClass::_vt08(uint32_t *this)
{
    int v1; // eax
    v1 = *(this + 14);
    if ( v1 )
    return *(uint32_t *)(*(uint32_t *)(v1 + 4) + 56);
    else
    return 0;
}

int  NullModemClass::_vt09(uint32_t *this, int a2)
{
    int v2; // eax
    v2 = *(this + 14);
    if ( v2 )
    return *(uint32_t *)(*(uint32_t *)(v2 + 4) + 40);
    else
    return 0;
}

int  NullModemClass::_vt10(uint32_t *this, int a2)
{
    int v2; // eax
    v2 = *(this + 14);
    if ( v2 )
    return *(uint32_t *)(*(uint32_t *)(v2 + 4) + 56);
    else
    return 0;
}

uint32_t * NullModemClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // edi
    v3 = (void *)*(Block + 13);
    *Block = &NullModemClass::`vftable';
    if ( v3 )
    FileFind::Close();
    __3_YAXPAX_Z(v3);
    ObjectClass::FreeResources((int)Block);
    if ( *(Block + 16) != -1 )
    if ( !g_ClipboardBuffer )
    goto LABEL_10;
    SerialPort::Close((HANDLE *)g_ClipboardBuffer);
    if ( g_ClipboardBuffer )
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1);
    g_ClipboardBuffer = 0;
    *(Block + 16) = -1;
    ObjectClass::FreeResources((int)Block);
    if ( g_ClipboardBuffer )
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1);
    g_ClipboardBuffer = 0;
    LABEL_10:
    *Block = &ConnManClass::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

