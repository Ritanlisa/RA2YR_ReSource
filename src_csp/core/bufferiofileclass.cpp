#include "bufferiofileclass.hpp"

// 0x00431B20
uint8_t * BufferIOFileClass::Constructor(uint8_t *this)
{
    *(this + 4) = 0;
    *((uint32_t *)this + 2) = 1;
    *((uint32_t *)this + 3) = 0;
    *((uint32_t *)this + 4) = -1;
    *((uint32_t *)this + 5) = -1;
    *((uint32_t *)this + 6) = 0;
    *((_WORD *)this + 14) = 0;
    *((_WORD *)this + 15) = 0;
    *(this + 32) = 0;
    *(this + 36) = 0;
    *(this + 37) = 0;
    *(this + 38) = 0;
    *(this + 39) = 0;
    *(this + 40) = 0;
    *(this + 41) = 0;
    *((uint32_t *)this + 11) = 0;
    *((uint32_t *)this + 12) = 0;
    *((uint32_t *)this + 13) = 0;
    *((uint32_t *)this + 14) = 0;
    *((uint32_t *)this + 15) = 0;
    *((uint32_t *)this + 16) = -1;
    *((uint32_t *)this + 17) = -1;
    *((uint32_t *)this + 18) = 0;
    *((uint32_t *)this + 19) = 0;
    *((uint32_t *)this + 20) = 0;
    *(uint32_t *)this = &BufferIOFileClass::`vftable';
    return this;
}

bool  BufferIOFileClass::_vt06(int this)
{
    return *(uint8_t *)(this + 37) && *(uint8_t *)(this + 41) || *(uint32_t *)(this + 20) != -1;
}

int  BufferIOFileClass::_vt11(int *this)
{
    if ( *((uint8_t *)this + 37) && *((uint8_t *)this + 41) )
    return *(this + 18);
    else
    return CCFileClass::GetFileSize(this);
}

uint32_t * BufferIOFileClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 12);
    *Block = &BufferIOFileClass::`vftable';
    if ( v3 )
    if ( *((uint8_t *)Block + 36) )
    __3_YAXPAX_Z(v3);
    *((uint8_t *)Block + 36) = 0;
    *(Block + 12) = 0;
    *(Block + 13) = 0;
    *((uint8_t *)Block + 37) = 0;
    *((uint8_t *)Block + 39) = 0;
    *((uint8_t *)Block + 40) = 0;
    *((uint8_t *)Block + 41) = 0;
    RawFileClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void *** BufferIOFileClass::sub_434A40(void ***Block, char a2)
{
    void *v3; // eax
    void **v4; // esi
    v3 = *(Block + 2);
    *Block = &BitFont::`vftable';
    if ( v3 )
    free(v3);
    v4 = *(Block + 1);
    if ( v4 )
    if ( v4[6] )
    __3_YAXPAX_Z(v4[6]);
    if ( v4[7] )
    __3_YAXPAX_Z(v4[7]);
    __3_YAXPAX_Z(v4);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * BufferIOFileClass::sub_435560(uint32_t *Block, char a2)
{
    int v3; // esi
    *Block = &BitText::`vftable';
    v3 = g_FogOfWarState;
    if ( g_FogOfWarState )
    (**(void (__thiscall ***)(int, int))g_FogOfWarState)(g_FogOfWarState, 1);
    if ( v3 == g_FogOfWarState )
    g_FogOfWarState = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

