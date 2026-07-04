#include "modemgame.hpp"

void  ModemGame::ReceiveMapPreview(HWND *this)
{
    int v1; // esi
    int v2; // eax
    int FileSize; // esi
    char *v4; // edi
    signed int v5; // ebx
    char *v6; // esi
    void *v7; // ebx
    void *v8; // eax
    void *v9; // eax
    DWORD Ticks; // [esp+Ch] [ebp-280h]
    int v12[3]; // [esp+1Ch] [ebp-270h] BYREF
    uint32_t v13[5]; // [esp+28h] [ebp-264h] BYREF
    int v14[9]; // [esp+44h] [ebp-248h] BYREF
    int v15[10]; // [esp+68h] [ebp-224h] BYREF
    uint32_t v16[62]; // [esp+90h] [ebp-1FCh] BYREF
    __int16 v17; // [esp+188h] [ebp-104h]
    char v18[256]; // [esp+18Ch] [ebp-100h] BYREF
    Timer::GetTicks();
    Debug::Log();
    memset(v16, 0, sizeof(v16));
    v17 = 0;
    v16[0] = 118;
    Debug::Log();
    Stream::WriteBlock((int)&g_EventManager, (int)v16, 250, 1);
    Ticks = Timer::GetTicks();
    while ( Count::GetCountQueue(&g_EventManager) > 0 )
    v1 = 600;
    if ( Ticks != -1 )
    v2 = Timer::GetTicks() - Ticks;
    if ( v2 >= 600 )
    break;
    v1 = 600 - v2;
    if ( !v1 )
    break;
    Event::Dispatch();
    Debug::Log();
    Debug::Log();
    if ( RequestNetworkFile(v18, 1, 0) )
    Debug::Log();
    RawFileClass::Construct(v14, (int)v18);
    FileSize = CCFileClass::GetFileSize(v14);
    v4 = (char *)__2_YAPAXI_Z(FileSize);
    FileClass::Read(v14, v4, FileSize);
    v5 = *(uint32_t *)v4;
    Debug::Log();
    v12[1] = 0;
    v12[2] = 0;
    Buffer::Init(v13, (int)(v4 + 4), FileSize);
    v13[3] = 0;
    v12[0] = (int)&BufferStraw::`vftable';
    LZOStraw::Constructor(v15, 1, 0x2000);
    Delegate::Set(v15, (int)v12);
    v6 = (char *)__2_YAPAXI_Z(2 * v5);
    LCW::Decompress((int)v15, v6, v5);
    Debug::Log();
    if ( g_UIControlState )
    v7 = g_UIControlState;
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v7);
    v8 = __2_YAPAXI_Z(4u);
    if ( v8 )
    v9 = (void *)unknown_libname_27(v8);
    else
    v9 = 0;
    g_UIControlState = v9;
    ModemGame::RenderPaletteImage(v6);
    InvalidateRect(*this, 0, 0);
    Debug::Log();
    __3_YAXPAX_Z(v6);
    __3_YAXPAX_Z(v4);
    LZOStraw::Destructor(v15);
    Vector::Clear((int)v13);
    Straw::Dtor(v12);
    RawFileClass::Dtor(v14);
    else
    Debug::Log();
}

