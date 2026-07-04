#include "inputmanager.hpp"

uint32_t * InputManager::FindBestHitElement(uint32_t *this, int a2, int a3)
{
    uint32_t *result; // eax
    int v4; // eax
    int v5; // edi
    int v6; // edx
    int v7; // esi
    uint32_t *v8; // [esp+0h] [ebp-14h]
    int v9; // [esp+Ch] [ebp-8h]
    int v10; // [esp+10h] [ebp-4h]
    v9 = 1024;
    result = 0;
    v10 = 768;
    v8 = 0;
    if ( this )
    do
    if ( !*((uint8_t *)this + 30) )
    v4 = *(this + 3);
    v5 = *(this + 4);
    v6 = *(this + 5);
    v7 = *(this + 6);
    if ( a2 >= v4 && a2 < v6 + v4 && a3 >= v5 && a3 < v5 + v7 && v6 * v7 <= v9 * v10 )
    v9 = *(this + 5);
    v10 = *(this + 6);
    v8 = this;
    this = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*this + 4))(this);
    while ( this );
    return v8;
    return result;
}

// 0x0054F2F0
char  InputManager::EnqueueInputEvent(uint32_t *this, unsigned __int16 a2, __int16 a3, __int16 a4, char a5)
{
    __int64 v7; // rax
    int v8; // ecx
    int v9; // eax
    int v10; // ecx
    int v11; // eax
    if ( g_GameActive )
    return 1;
    v7 = *(this + 198) - *(this + 197);
    if ( (int)(256 - ((HIDWORD(v7) ^ v7) - HIDWORD(v7))) < 3
    || (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 )
    return 0;
    EventClass::Enqueue(this, a2, a5);
    v8 = *(this + 198);
    v9 = (v8 + 1) % 256;
    if ( v9 != *(this + 197) )
    *((_WORD *)this + v8 + 138) = a3;
    *(this + 198) = v9;
    v10 = *(this + 198);
    v11 = (v10 + 1) % 256;
    if ( v11 != *(this + 197) )
    *((_WORD *)this + v10 + 138) = a4;
    *(this + 198) = v11;
    return 1;
}

