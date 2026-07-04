#include "ccfileclass.hpp"

// 0x00401980
int  CCFileClass::Destru_vt08(void *this, int a2, int a3)
{
    (*(void (__thiscall **)(void *, int))(*(uint32_t *)this + 8))(this, a2);
    return (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 28))(this, a3);
}

uint32_t * CCFileClass::Destru_vt00(uint32_t *Block, char a2)
{
    *Block = &CCFileClass::`vftable';
    *(Block + 25) = 0;
    Vector::Clear((int)(Block + 22));
    *Block = &off_7E1668;
    BufferIOFileClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x00473AB0
char  CCFileClass::Destru_vt16(uint8_t *this, int a2, int a3, int a4)
{
    char result; // al
    result = *(this + 4);
    if ( !result )
    return CD::`vftable'(dword_81C1D0);
    return result;
}

// 0x00473CD0
bool  CCFileClass::Destru_vt06(int this)
{
    return *(uint32_t *)(this + 88) || BufferIOFileClass::Read(this);
}

// 0x00473E50
int  CCFileClass::Destru_vt14(HANDLE *this)
{
    int DosTimestamp; // ebx
    const char *v3; // eax
    char *v4; // esi
    int v5; // esi
    int v7; // [esp+Ch] [ebp-70h] BYREF
    uint32_t v8[22]; // [esp+10h] [ebp-6Ch] BYREF
    uint32_t v9[3]; // [esp+68h] [ebp-14h] BYREF
    int v10; // [esp+74h] [ebp-8h]
    int v11; // [esp+78h] [ebp-4h]
    v7 = 0;
    DosTimestamp = FileClass::GetDosTimestamp(this);
    if ( DosTimestamp )
    return DosTimestamp;
    v3 = (const char *)(*((int (__thiscall **)(HANDLE *))*this + 1))(this);
    if ( !LookupFileInfoCache(v3, 0, &v7, 0, 0) )
    return DosTimestamp;
    v4 = *(char **)(v7 + 12);
    BufferIOFile::Init(v8);
    Buffer::Init(v9, 0, 0);
    v10 = 0;
    v8[0] = &CCFileClass::`vftable';
    v11 = 0;
    FileClass::OpenWithCDSearch(v8, v4);
    v5 = (*(int (__thiscall **)(uint32_t *))(v8[0] + 56))(v8);
    v8[0] = &CCFileClass::`vftable';
    v10 = 0;
    Vector::Clear((int)v9);
    v8[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v8);
    return v5;
}

// 0x00473F00
char  CCFileClass::Destru_vt15(HANDLE *this, int wFatTime)
{
    char v3; // bl
    const char *v4; // eax
    char *v5; // esi
    int v7; // [esp+10h] [ebp-70h] BYREF
    uint32_t v8[22]; // [esp+14h] [ebp-6Ch] BYREF
    uint32_t v9[3]; // [esp+6Ch] [ebp-14h] BYREF
    int v10; // [esp+78h] [ebp-8h]
    int v11; // [esp+7Ch] [ebp-4h]
    v7 = 0;
    v3 = FileClass::SetTime(this, wFatTime);
    if ( !v3 )
    v4 = (const char *)(*((int (__thiscall **)(HANDLE *))*this + 1))(this);
    if ( LookupFileInfoCache(v4, 0, &v7, 0, 0) )
    v5 = *(char **)(v7 + 12);
    BufferIOFile::Init(v8);
    Buffer::Init(v9, 0, 0);
    v10 = 0;
    v8[0] = &CCFileClass::`vftable';
    v11 = 0;
    FileClass::OpenWithCDSearch(v8, v5);
    v3 = (*(int (__thiscall **)(uint32_t *, int))(v8[0] + 60))(v8, wFatTime);
    v8[0] = &CCFileClass::`vftable';
    v10 = 0;
    Vector::Clear((int)v9);
    v8[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v8);
    return v3;
}

