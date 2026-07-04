#include "wwmouseclass.hpp"

int  WWMouseClass::_vt10(uint32_t *this)
{
    return *(this + 3);
}

void  WWMouseClass::_vt01(unsigned int *this, unsigned int *a2, unsigned int a3, unsigned int a4)
{
    unsigned int v4; // ebx
    DWORD (__stdcall *v6)(HANDLE, DWORD); // edi
    int v7; // ecx
    int v8; // ebp
    int v9; // edx
    unsigned int v10; // edi
    unsigned int v11; // ebx
    int v12; // edx
    void (__stdcall *v13)(HANDLE); // ebp
    unsigned int v14; // eax
    unsigned int *v15; // eax
    unsigned int v16; // ecx
    unsigned int v17; // eax
    int v18; // ecx
    int v19; // [esp-18h] [ebp-40h]
    unsigned int v20; // [esp+8h] [ebp-20h] BYREF
    unsigned int v21; // [esp+Ch] [ebp-1Ch]
    unsigned int v22; // [esp+10h] [ebp-18h]
    unsigned int v23; // [esp+14h] [ebp-14h]
    int v24; // [esp+18h] [ebp-10h] BYREF
    int v25; // [esp+1Ch] [ebp-Ch]
    unsigned int v26; // [esp+20h] [ebp-8h]
    unsigned int v27; // [esp+24h] [ebp-4h]
    v4 = a3;
    if ( a3 )
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 28))(this) )
    v6 = WaitForSingleObject;
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 8))(this) )
    v13 = (void (__stdcall *)(HANDLE))ReleaseMutex;
    else
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( (int)*(this + 20) > 0 && (int)*(this + 21) > 0 )
    v7 = *(this + 9);
    if ( v7 )
    v8 = *(this + 17);
    if ( v8 )
    v9 = *(this + 19);
    v10 = *(this + 20);
    v11 = *(this + 21);
    v24 = *(this + 11) + *(this + 18);
    v12 = *(this + 12) + v9;
    v20 = 0;
    v21 = 0;
    v26 = v10;
    v27 = v11;
    v25 = v12;
    v22 = v10;
    v23 = v11;
    (*(void (__thiscall **)(int, int *, int, unsigned int *, uint32_t, int))(*(uint32_t *)v7 + 8))(
    v7,
    &v24,
    v8,
    &v20,
    0,
    1);
    v4 = a3;
    v6 = WaitForSingleObject;
    v13 = (void (__stdcall *)(HANDLE))ReleaseMutex;
    ReleaseMutex(hMutex);
    *(this + 1) = v4;
    *(this + 2) = a4;
    *(this + 15) = *a2;
    v14 = *this;
    *(this + 16) = a2[1];
    if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(v14 + 8))(this) )
    if ( v6(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( BSurface::CreateTripleBuffer((int)this) )
    if ( *(this + 9) )
    v15 = WWMouseClass::initCursorState(this, &v24);
    *(this + 18) = *v15;
    *(this + 19) = v15[1];
    *(this + 20) = v15[2];
    *(this + 21) = v15[3];
    v20 = *v15;
    v16 = *(this + 11) + v20;
    v21 = v15[1];
    v22 = v15[2];
    v17 = v15[3];
    v20 = v16;
    v18 = *(this + 17);
    v21 += *(this + 12);
    v19 = *(this + 9);
    v23 = v17;
    v24 = 0;
    v25 = 0;
    v26 = v22;
    v27 = v17;
    (*(void (__thiscall **)(int, int *, int, unsigned int *, uint32_t, int))(*(uint32_t *)v18 + 8))(
    v18,
    &v24,
    v19,
    &v20,
    0,
    1);
    Mouse::DrawCursor(this, (int *)*(this + 9), 0, 0);
    v13(hMutex);
    v13(hMutex);
    else
    *(this + 1) = a3;
    *(this + 2) = a4;
    *(this + 15) = *a2;
    *(this + 16) = a2[1];
}

int  WWMouseClass::DrawCursorBuffered(int *this, int *a2, char a3)
{
    int result; // eax
    int *v6; // ebx
    int *v7; // esi
    int v8; // esi
    int v9; // ecx
    int v10; // edx
    int v11; // edx
    int v12; // eax
    int v13; // ebx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // esi
    int v18; // edx
    int v19; // ecx
    int v20; // [esp+14h] [ebp-20h] BYREF
    int v21; // [esp+18h] [ebp-1Ch]
    int v22; // [esp+1Ch] [ebp-18h]
    int v23; // [esp+20h] [ebp-14h]
    int v24; // [esp+24h] [ebp-10h] BYREF
    int v25; // [esp+28h] [ebp-Ch]
    int v26; // [esp+2Ch] [ebp-8h]
    int v27; // [esp+30h] [ebp-4h]
    int v28; // [esp+38h] [ebp+4h]
    result = (*(int (__thiscall **)(int *))(*this + 8))(this);
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(int *))(*this + 28))(this);
    if ( (uint8_t)result )
    result = 0;
    if ( a2 )
    if ( a2 != (int *)*(this + 9) )
    if ( a3 )
    if ( byte_A8EB7C )
    result = -g_Map_VisibleRectOffset;
    v6 = (int *)*(this + 27);
    v28 = result;
    v7 = this + 28;
    else
    if ( !byte_A8EB7C )
    v8 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - g_CreditsScreenBounds;
    if ( -(*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Sidebar + 124))(DSurface_Sidebar) <= v8 )
    result = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - g_CreditsScreenBounds;
    else
    result = -(*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Sidebar + 124))(DSurface_Sidebar);
    v6 = (int *)*(this + 22);
    v28 = result;
    v7 = this + 23;
    if ( v6 && (result = *(this + 17)) != 0 )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    *v7 = *(this + 18);
    v7[1] = *(this + 19);
    v7[2] = *(this + 20);
    v7[3] = *(this + 21);
    v9 = v7[2];
    v10 = v7[3];
    *v7 += v28;
    v20 = 0;
    v21 = 0;
    v23 = v10;
    v11 = *v6;
    v22 = v9;
    (*(void (__thiscall **)(int *, int *, int *, int *, uint32_t, int))(v11 + 8))(v6, &v20, a2, v7, 0, 1);
    if ( a3
    && (v12 = *v7, *v7 < 0)
    && (v13 = -v12, -v12 < (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 17) + 124))(*(this + 17))) )
    v14 = v7[1];
    v15 = *(this + 17);
    v20 = 0;
    v21 = v14;
    v16 = v7[2];
    v17 = v7[3];
    v25 = 0;
    v22 = v16;
    v23 = v17;
    v24 = v13;
    v26 = v16;
    v27 = v17;
    (*(void (__thiscall **)(int, int *, int *, int *, uint32_t, int))(*(uint32_t *)v15 + 8))(
    v15,
    &v24,
    a2,
    &v20,
    0,
    1);
    else
    v18 = v7[3];
    v26 = v7[2];
    v19 = *(this + 17);
    v24 = 0;
    v25 = 0;
    v27 = v18;
    (*(void (__thiscall **)(int, int *, int *, int *, uint32_t, int))(*(uint32_t *)v19 + 8))(
    v19,
    &v24,
    a2,
    v7,
    0,
    1);
    Mouse::DrawCursor(this, a2, v28, 0);
    return ReleaseMutex(hMutex);
    else
    v7[2] = 0;
    return result;
}

// 0x007B92D0
void  WWMouseClass::updateCursor(WWMouseClass *this)
{
    uint32_t savedCursorY; // edi
    uint32_t v3; // eax
    WWMouseClass *v4; // esi
    int v5; // edx
    uint32_t v6[2]; // [esp+Ch] [ebp-20h] BYREF
    int32_t imageFrameIndex; // [esp+14h] [ebp-18h]
    uint32_t refCount; // [esp+18h] [ebp-14h]
    uint32_t v9[4]; // [esp+1Ch] [ebp-10h] BYREF
    int *v10; // [esp+30h] [ebp+4h]
    char v11; // [esp+34h] [ebp+8h]
    if ( !(*((unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable + 2))(this) )
    if ( (*((unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable + 7))(this) )
    if ( v10 )
    if ( v10 != this->surface )
    savedCursorY = this->savedCursorY;
    if ( savedCursorY )
    v3 = *((uint32_t *)this + 27);
    if ( v3 )
    if ( v11 )
    v4 = (WWMouseClass *)((char *)this + 112);
    savedCursorY = v3;
    else
    v4 = this + 1;
    v6[0] = v4->vtable;
    v6[1] = v4->image;
    imageFrameIndex = v4->imageFrameIndex;
    refCount = v4->refCount;
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    v5 = *v10;
    v9[2] = imageFrameIndex;
    v9[3] = refCount;
    v9[0] = 0;
    v9[1] = 0;
    (*(void (__thiscall **)(int *, uint32_t *, uint32_t, uint32_t *, uint32_t, int))(v5 + 8))(
    v10,
    v6,
    savedCursorY,
    v9,
    0,
    1);
    ReleaseMutex(hMutex);
}

int  WWMouseClass::_vt04(int this)
{
    int result; // eax
    int v3; // eax
    int *FoundationSize; // eax
    int v5; // edi
    int v6; // edx
    int v7; // edi
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // edi
    int v12; // ebp
    int *v13; // eax
    int v14; // ebp
    uint32_t *v15; // eax
    int v16; // [esp-1Ch] [ebp-50h]
    int v17; // [esp+4h] [ebp-30h] BYREF
    int v18; // [esp+8h] [ebp-2Ch]
    int v19; // [esp+Ch] [ebp-28h]
    int v20; // [esp+10h] [ebp-24h]
    uint32_t v21[4]; // [esp+14h] [ebp-20h] BYREF
    uint32_t v22[4]; // [esp+24h] [ebp-10h] BYREF
    result = *(uint32_t *)(this + 12);
    if ( result )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    v3 = *(uint32_t *)(this + 12) + 1;
    *(uint32_t *)(this + 12) = v3;
    if ( !v3 )
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 28))(this) )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( BSurface::CreateTripleBuffer(this) && *(uint32_t *)(this + 36) )
    Rect::Set(&v17, 0, 0, 0, 0);
    if ( *(uint32_t *)(this + 4) )
    sub_7BA2C0();
    FoundationSize = Building::GetFoundationSize(v22, *(uint32_t *)(this + 8));
    v17 = *FoundationSize;
    v18 = FoundationSize[1];
    v19 = FoundationSize[2];
    v5 = *(uint32_t *)(this + 60);
    v20 = FoundationSize[3];
    v6 = *(uint32_t *)(this + 20) - v5;
    v7 = *(uint32_t *)(this + 64);
    v17 += v6;
    v18 += *(uint32_t *)(this + 24) - v7;
    ReleaseMutex(hMutex);
    v8 = v17;
    v9 = v18;
    v10 = v19;
    v11 = v20;
    v21[0] = v17;
    *(uint32_t *)(this + 72) = v17;
    v21[2] = v10;
    v21[3] = v11;
    *(uint32_t *)(this + 76) = v9;
    *(uint32_t *)(this + 80) = v10;
    *(uint32_t *)(this + 84) = v11;
    v12 = v8 + *(uint32_t *)(this + 44);
    v13 = *(int **)(this + 68);
    v21[0] = v12;
    v21[1] = *(uint32_t *)(this + 48) + v9;
    v14 = *v13;
    v16 = *(uint32_t *)(this + 36);
    v15 = Rect::Set(v22, 0, 0, v10, v11);
    (*(void (__thiscall **)(uint32_t, uint32_t *, int, uint32_t *, uint32_t, int))(v14 + 8))(
    *(uint32_t *)(this + 68),
    v15,
    v16,
    v21,
    0,
    1);
    Mouse::DrawCursor((uint32_t *)this, *(int **)(this + 36), 0, 0);
    ReleaseMutex(hMutex);
    else
    while ( ShowCursor(1) < 0 )
    ;
    if ( *(int *)(this + 12) > 0 )
    *(uint32_t *)(this + 12) = 0;
    return ReleaseMutex(hMutex);
    return result;
}

// 0x007B9930
void  WWMouseClass::hideCursor(WWMouseClass *this)
{
    void *surface; // ecx
    uint32_t savedCursorX; // ebp
    int32_t dirtyRect_top; // edx
    int32_t dirtyRect_right; // edi
    int32_t dirtyRect_bottom; // ebx
    int v7; // edx
    uint32_t v8[4]; // [esp+8h] [ebp-20h] BYREF
    uint32_t v9[4]; // [esp+18h] [ebp-10h] BYREF
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( !this->refCount )
    if ( (*((unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable + 7))(this) )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( this->dirtyRect_right > 0 && this->dirtyRect_bottom > 0 )
    surface = this->surface;
    if ( surface )
    savedCursorX = this->savedCursorX;
    if ( savedCursorX )
    dirtyRect_top = this->dirtyRect_top;
    dirtyRect_right = this->dirtyRect_right;
    dirtyRect_bottom = this->dirtyRect_bottom;
    v9[0] = this->cursorRect_left + this->dirtyRect_left;
    v7 = this->cursorRect_top + dirtyRect_top;
    v8[0] = 0;
    v8[1] = 0;
    v9[2] = dirtyRect_right;
    v9[3] = dirtyRect_bottom;
    v9[1] = v7;
    v8[2] = dirtyRect_right;
    v8[3] = dirtyRect_bottom;
    (*(void (__thiscall **)(void *, uint32_t *, uint32_t, uint32_t *, uint32_t, int))(*(uint32_t *)surface + 8))(
    surface,
    v9,
    savedCursorX,
    v8,
    0,
    1);
    ReleaseMutex(hMutex);
    else
    while ( ShowCursor(0) >= 0 )
    ;
    --this->refCount;
    ReleaseMutex(hMutex);
}

void  WWMouseClass::captureMouse(WWMouseClass *this)
{
    unsigned __int8 (__thiscall **vtable)(WWMouseClass *); // edx
    int32_t *FoundationSize; // eax
    int32_t hotspotOffset_x; // edi
    uint32_t v5; // edx
    int32_t hotspotOffset_y; // edi
    int32_t v7; // eax
    int32_t v8; // ecx
    int32_t v9; // edx
    int32_t v10; // edi
    int v11; // ebp
    int *savedCursorX; // eax
    int v13; // ebp
    uint32_t *v14; // eax
    void *surface; // [esp-1Ch] [ebp-50h]
    int32_t v16; // [esp+4h] [ebp-30h] BYREF
    int32_t v17; // [esp+8h] [ebp-2Ch]
    int32_t v18; // [esp+Ch] [ebp-28h]
    int32_t v19; // [esp+10h] [ebp-24h]
    uint32_t v20[4]; // [esp+14h] [ebp-20h] BYREF
    uint32_t v21[4]; // [esp+24h] [ebp-10h] BYREF
    if ( this && !(*((unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable + 7))(this) )
    Debug::Log();
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    vtable = (unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable;
    this->surfaceState = 1;
    if ( !vtable[2](this) )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( BSurface::CreateTripleBuffer((int)this) && this->surface )
    Rect::Set(&v16, 0, 0, 0, 0);
    if ( this->image )
    sub_7BA2C0();
    FoundationSize = Building::GetFoundationSize(v21, this->imageFrameIndex);
    v16 = *FoundationSize;
    v17 = FoundationSize[1];
    v18 = FoundationSize[2];
    hotspotOffset_x = this->hotspotOffset_x;
    v19 = FoundationSize[3];
    v5 = this->frameCounter - hotspotOffset_x;
    hotspotOffset_y = this->hotspotOffset_y;
    v16 += v5;
    v17 += this->lastFrameTime - hotspotOffset_y;
    ReleaseMutex(hMutex);
    v7 = v16;
    v8 = v17;
    v9 = v18;
    v10 = v19;
    v20[0] = v16;
    this->dirtyRect_left = v16;
    v20[2] = v9;
    v20[3] = v10;
    this->dirtyRect_top = v8;
    this->dirtyRect_right = v9;
    this->dirtyRect_bottom = v10;
    v11 = v7 + this->cursorRect_left;
    savedCursorX = (int *)this->savedCursorX;
    v20[0] = v11;
    v20[1] = this->cursorRect_top + v8;
    v13 = *savedCursorX;
    surface = this->surface;
    v14 = Rect::Set(v21, 0, 0, v9, v10);
    (*(void (__thiscall **)(uint32_t, uint32_t *, void *, uint32_t *, uint32_t, int))(v13 + 8))(
    this->savedCursorX,
    v14,
    surface,
    v20,
    0,
    1);
    Mouse::DrawCursor(this, (int *)this->surface, 0, 0);
    ReleaseMutex(hMutex);
    ShowCursor(0);
    ReleaseMutex(hMutex);
}

// 0x007B9C30
void  WWMouseClass::releaseMouse(WWMouseClass *this)
{
    unsigned __int8 (__thiscall **vtable)(WWMouseClass *); // edx
    void *surface; // ecx
    uint32_t savedCursorX; // ebx
    int32_t dirtyRect_top; // edx
    int32_t dirtyRect_right; // edi
    int32_t dirtyRect_bottom; // ebp
    int v8; // edx
    uint32_t v9[4]; // [esp+4h] [ebp-20h] BYREF
    uint32_t v10[4]; // [esp+14h] [ebp-10h] BYREF
    if ( this && (*((unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable + 7))(this) )
    Debug::Log();
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    vtable = (unsigned __int8 (__thiscall **)(WWMouseClass *))this->vtable;
    this->surfaceState = 0;
    if ( !vtable[2](this) )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( this->dirtyRect_right > 0 && this->dirtyRect_bottom > 0 )
    surface = this->surface;
    if ( surface )
    savedCursorX = this->savedCursorX;
    if ( savedCursorX )
    dirtyRect_top = this->dirtyRect_top;
    dirtyRect_right = this->dirtyRect_right;
    dirtyRect_bottom = this->dirtyRect_bottom;
    v10[0] = this->cursorRect_left + this->dirtyRect_left;
    v8 = this->cursorRect_top + dirtyRect_top;
    v9[0] = 0;
    v9[1] = 0;
    v10[2] = dirtyRect_right;
    v10[3] = dirtyRect_bottom;
    v10[1] = v8;
    v9[2] = dirtyRect_right;
    v9[3] = dirtyRect_bottom;
    (*(void (__thiscall **)(void *, uint32_t *, uint32_t, uint32_t *, uint32_t, int))(*(uint32_t *)surface + 8))(
    surface,
    v10,
    savedCursorX,
    v9,
    0,
    1);
    ReleaseMutex(hMutex);
    while ( ShowCursor(1) < 0 )
    ;
    ReleaseMutex(hMutex);
}

int  WWMouseClass::_vt08(void *this, int a2, int a3, int a4, int a5)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
}

int  WWMouseClass::_vt09(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 16))(this);
}

// 0x007B9D90
void  WWMouseClass::processFrame(WWMouseClass *this)
{
    int32_t cursorRect_right; // esi
    int32_t cursorRect_bottom; // ecx
    int32_t *v3; // [esp+Ch] [ebp+4h]
    int32_t *v4; // [esp+10h] [ebp+8h]
    *v3 -= this->cursorRect_left;
    *v4 -= this->cursorRect_top;
    if ( *v3 < 0 )
    *v3 = 0;
    if ( *v4 < 0 && !byte_B78160 )
    *v4 = 0;
    cursorRect_right = this->cursorRect_right;
    if ( *v3 >= cursorRect_right )
    *v3 = cursorRect_right - 1;
    cursorRect_bottom = this->cursorRect_bottom;
    if ( *v4 >= cursorRect_bottom )
    *v4 = cursorRect_bottom - 1;
}

int  WWMouseClass::UpdateCursorMovement(LONG *this)
{
    int result; // eax
    LONG v3; // edx
    LONG v4; // eax
    LONG v5; // ecx
    LONG v6; // eax
    LONG v7; // edi
    LONG v8; // ebp
    char v9; // bl
    LONG v10; // eax
    LONG y; // [esp+10h] [ebp-10h] BYREF
    LONG x; // [esp+14h] [ebp-Ch] BYREF
    struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF
    result = *(this + 9);
    if ( result )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( sub_53E720() )
    v3 = *(this + 8);
    x = *(this + 7);
    y = v3;
    else
    GetCursorPos(&Point);
    v4 = *this;
    x = Point.x;
    y = Point.y;
    (*(void (__thiscall **)(LONG *, LONG *, LONG *))(v4 + 68))(this, &x, &y);
    v5 = y;
    *(this + 7) = x;
    *(this + 8) = v5;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t, uint32_t, uint32_t))(*(uint32_t *)*(this + 9) + 104))(*(this + 9), 0, 0)
    || byte_B78170 )
    v7 = y;
    v8 = x;
    v9 = byte_B78170;
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( v8 != *(this + 5) || v7 != *(this + 6) || v9 )
    if ( (*(unsigned __int8 (__thiscall **)(LONG *))(*this + 28))(this)
    && !(*(unsigned __int8 (__thiscall **)(LONG *))(*this + 8))(this)
    && g_DDraw_Active )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    WWMouseClass::initSurface(this);
    ReleaseMutex(hMutex);
    v10 = *this;
    *(this + 5) = v8;
    *(this + 6) = v7;
    if ( (*(unsigned __int8 (__thiscall **)(LONG *))(v10 + 28))(this)
    && !(*(unsigned __int8 (__thiscall **)(LONG *))(*this + 8))(this)
    && g_DDraw_Active )
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    WWMouseClass::updateCursorRect(this);
    Mouse::DrawCursor(this, (int *)*(this + 9), 0, 0);
    ReleaseMutex(hMutex);
    ReleaseMutex(hMutex);
    byte_B78170 = 0;
    return ReleaseMutex(hMutex);
    else
    v6 = y;
    *(this + 5) = x;
    *(this + 6) = v6;
    byte_B78170 = 1;
    return ReleaseMutex(hMutex);
    return result;
}

// 0x007BA320
void  WWMouseClass::drawCursor(WWMouseClass *this)
{
    ;
}

char  WWMouseClass::_vt07(uint8_t *this)
{
    return *(this + 16);
}

int  WWMouseClass::_vt11(uint32_t *this)
{
    return *(this + 7);
}

int  WWMouseClass::_vt12(uint32_t *this)
{
    return *(this + 8);
}

uint32_t * WWMouseClass::_vt13(uint32_t *this, uint32_t *a2)
{
    int v3; // edx
    int v4; // ecx
    v3 = *(this + 7);
    v4 = *(this + 8);
    *a2 = v3;
    a2[1] = v4;
    return a2;
}

int  WWMouseClass::_vt14(uint32_t *this, int a2, int a3)
{
    *(this + 7) = a2;
    *(this + 8) = a3;
    return a2;
}

uint32_t * WWMouseClass::_vt00(uint32_t *Block, char a2)
{
    WWMouseClass::loadCursorImages(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

