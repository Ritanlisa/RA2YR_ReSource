#include "networkgamesetup.hpp"

void  NetworkGameSetup::SendGameSetupPacket(HWND *this, wchar_t *Source)
{
    char *v3; // eax
    unsigned int v4; // edi
    HWND DlgItem; // esi
    int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
    wchar_t *Format; // [esp+10h] [ebp-300h]
    uint32_t v8[62]; // [esp+14h] [ebp-2FCh] BYREF
    __int16 v9; // [esp+10Ch] [ebp-204h]
    wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF
    if ( Source )
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    v8[0] = 104;
    strcpy((char *)&v8[1], g_GameSetupBuffer);
    LOBYTE(v8[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source);
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v3 = CharToWideString(g_GameSetupBuffer);
    v4 = g_TauntCommandState;
    Format = (wchar_t *)v3;
    DlgItem = GetDlgItem(*this, 1343);
    if ( DlgItem )
    if ( v4 >= 8 )
    v6 = Math::InitDegToRad;
    else
    v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source);
    DrawDialogText((LPARAM)v6, Buffer, DlgItem);
}

