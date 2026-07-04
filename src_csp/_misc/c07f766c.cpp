#include "c07f766c.hpp"

int __stdcall C07F766C::_vt08(int a1, int a2, void *a3, int a4)
{
    uint8_t *v4; // esi
    void **v6; // [esp+0h] [ebp-8h] BYREF
    uint8_t *v7; // [esp+4h] [ebp-4h]
    if ( a2 < 0 || a4 <= 0 )
    SetEvent(hEvent);
    return 0;
    else
    sub_76ABA0(&v6, a3);
    if ( v7 && ComStreamClass::initStream(v7) )
    if ( ComStreamClass::closeStream(v7) )
    Debug::Log();
    ComStreamClass::getStreamSize((int *)&v6);
    SetEvent(dword_B736B0);
    else
    Debug::Log();
    v4 = v7;
    dword_B7646C = *((uint32_t *)v4 + 10) + time(0);
    ComStreamClass::seekToPosition((int *)&v6);
    SetEvent(dword_B736B0);
    else
    Debug::Log();
    SetEvent(dword_B736B0);
    v6 = &rc_ptr<WDTState>::`vftable';
    ComPtr::Release(&v6);
    return 0;
}

int __stdcall C07F766C::_vt05(int a1, int a2)
{
    Debug::Log();
    if ( !a2 )
    sub_6C6D00();
    sub_6C6DE0();
    return 0;
}

int __stdcall C07F766C::_vt09(int a1, int a2, float a3, int a4, int a5, int a6)
{
    float v6; // esi
    float v7; // ebp
    int v8; // esi
    int v9; // edi
    uint32_t *v10; // edi
    int v11; // ebx
    double v12; // st7
    int v13; // esi
    char **v14; // eax
    char **v15; // ebx
    int v16; // edx
    char *v17; // eax
    if ( a2 )
    Debug::Log();
    return 0;
    else
    v6 = a3;
    v7 = a3;
    String::Assign((char **)&a2, &g_INI_DefaultBuffer);
    if ( v6 != 0.0 )
    do
    String::Assign_Bool((void **)&a2, (const char *)(LODWORD(v7) + 28));
    String::ToLower((const char **)&a2);
    String::GetOrEmpty((char **)&a2);
    Debug::Log();
    if ( dword_B76644 )
    a3 = (double)(unsigned int)(dword_B76644 - 1) / (double)dword_B76648;
    v8 = dword_B76658(&a2) & ((1 << dword_B7664C) - 1);
    v9 = *((uint32_t *)dword_B76640 + v8);
    if ( v9 )
    if ( String::Compare(*((const char ***)dword_B76640 + v8), (const char **)&a2) )
    v10 = (uint32_t *)*((uint32_t *)dword_B76640 + v8);
    v11 = v10[18];
    if ( v10 )
    DeleteAndZero(*((void ***)dword_B76640 + v8));
    __3_YAXPAX_Z(v10);
    v12 = a3;
    *((uint32_t *)dword_B76640 + v8) = v11;
    --dword_B76644;
    if ( v12 > dbl_B76660 )
    goto LABEL_17;
    else
    v13 = *(uint32_t *)(v9 + 72);
    if ( v13 )
    while ( !String::Compare((const char **)v13, (const char **)&a2) )
    v9 = v13;
    v13 = *(uint32_t *)(v13 + 72);
    if ( !v13 )
    goto LABEL_15;
    *(uint32_t *)(v9 + 72) = *(uint32_t *)(v13 + 72);
    --dword_B76644;
    ComStreamClass::writeData((void **)v13, 1);
    LABEL_15:
    if ( a3 > dbl_B76660 )
    goto LABEL_17;
    ComStreamClass::flushStream(&dword_B76640);
    LABEL_17:
    v14 = (char **)__2_YAPAXI_Z(0x4Cu);
    v15 = v14;
    if ( v14 )
    unknown_libname_73(v14);
    else
    v15 = 0;
    String::Reassign(v15, (const char **)&a2);
    qmemcpy(v15 + 1, (const void *)LODWORD(v7), 0x44u);
    v15[18] = 0;
    v16 = dword_B76658(&a2) & ((1 << dword_B7664C) - 1);
    v17 = (char *)*((uint32_t *)dword_B76640 + v16);
    *((uint32_t *)dword_B76640 + v16) = v15;
    if ( v17 )
    v15[18] = v17;
    if ( (double)(unsigned int)++dword_B76644 / (double)dword_B76648 >= dbl_B76668 )
    ComStreamClass::readData(&dword_B76640);
    v7 = *(float *)(LODWORD(v7) + 24);
    while ( v7 != 0.0 );
    DeleteAndZero((void **)&a2);
    return 0;
}

int __stdcall C07F766C::_vt03(int a1, int a2, unsigned int a3, int a4, int a5)
{
    if ( g_NetworkLobby_Init && *(uint32_t *)dword_B77780 )
    if ( !a2 && a3 < 0x3E8 )
    ++*(uint32_t *)dword_B77CE0;
    return 0;
    return 0;
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    if ( g_WOL_ProcessIdle )
    DisplayRankingsWOL(0);
    return 0;
    Debug::Log();
    if ( ++dword_B736F4 < g_WOL_LoginPool )
    return 0;
    if ( g_WOL_IdleHandler == 4 || g_WOL_IdleHandler == 5 )
    UpdateWOLLobbyPings();
    ProcessPingRequestsWOL();
    return 0;
}

int __stdcall C07F766C::_vt00(char *a1, uint32_t *a2, char **a3)
{
    _UNKNOWN **v3; // esi
    int result; // eax
    uint32_t *v5; // eax
    BOOL v6; // ebp
    int (__stdcall *v7)(char *, uint32_t *, char **, void *); // eax
    void *v8; // eax
    char *v9; // esi
    v3 = &off_7F7650;
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    (*(void (__stdcall **)(char *))(*(uint32_t *)a1 + 4))(a1);
    *a3 = a1;
    return 0;
    while ( 1 )
    v5 = *v3;
    v6 = *v3 == 0;
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] )
    break;
    LABEL_17:
    v8 = v3[5];
    v3 += 3;
    if ( !v8 )
    return -2147467262;
    v7 = (int (__stdcall *)(char *, uint32_t *, char **, void *))v3[2];
    if ( v7 != (int (__stdcall *)(char *, uint32_t *, char **, void *))1 )
    result = v7(a1, a2, a3, v3[1]);
    if ( !result || !v6 && result < 0 )
    return result;
    goto LABEL_17;
    v9 = (char *)v3[1] + (uint32_t)a1;
    (*(void (__stdcall **)(char *))(*(uint32_t *)v9 + 4))(v9);
    *a3 = v9;
    return 0;
}

