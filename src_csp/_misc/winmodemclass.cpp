#include "winmodemclass.hpp"

int  WinModemClass::_vt01(int this, const char *a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
    HANDLE FileA; // ebp
    DWORD v9; // edx
    DWORD cbInQue; // eax
    DWORD cbOutQue; // ecx
    bool v12; // zf
    DWORD Errors; // [esp+10h] [ebp-14Ch] BYREF
    struct _COMSTAT Stat; // [esp+14h] [ebp-148h] BYREF
    struct _DCB DCB; // [esp+20h] [ebp-13Ch] BYREF
    struct _COMMTIMEOUTS CommTimeouts; // [esp+3Ch] [ebp-120h] BYREF
    CHAR FileName[268]; // [esp+50h] [ebp-10Ch] BYREF
    strcpy(FileName, "\\\\.\\");
    memset(&FileName[5], 0, 261);
    strcat(FileName, a2);
    if ( *(uint32_t *)(this + 92) != -1 )
    Debug::Log();
    CloseHandle(*(HANDLE *)(this + 92));
    *(uint32_t *)(this + 92) = -1;
    Debug::Log();
    FileA = CreateFileA(FileName, 0xC0000000, 0, 0, 3u, 0x40000000u, 0);
    if ( FileA == (HANDLE)-1 )
    Debug::Log();
    return -1;
    else
    Debug::Log();
    *(uint32_t *)(this + 92) = FileA;
    SetupComm(FileA, 0x2000u, 0x2000u);
    PurgeComm(*(HANDLE *)(this + 92), 0xFu);
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = 0;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 56) = CreateEventA(0, 1, 1, 0);
    *(uint32_t *)(this + 60) = 0;
    *(uint32_t *)(this + 64) = 0;
    *(uint32_t *)(this + 68) = 0;
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)(this + 76) = CreateEventA(0, 1, 1, 0);
    if ( GetCommState(FileA, &DCB)
    && (DCB.Parity = a4,
    DCB.BaudRate = a3,
    DCB.ByteSize = a5,
    DCB.StopBits = a6 - 1,
    *((uint32_t *)&DCB + 2) = *((uint32_t *)&DCB + 2) & 0xFFFF88C0 | 0x2015,
    SetCommState(FileA, &DCB)) )
    qmemcpy((void *)(this + 8300), &DCB, 0x1Cu);
    else
    Debug::Log();
    CommTimeouts.ReadIntervalTimeout = 1000;
    CommTimeouts.ReadTotalTimeoutMultiplier = 0;
    CommTimeouts.ReadTotalTimeoutConstant = 3000;
    CommTimeouts.WriteTotalTimeoutMultiplier = 500;
    CommTimeouts.WriteTotalTimeoutConstant = 1000;
    if ( !SetCommTimeouts(FileA, &CommTimeouts) )
    Debug::Log();
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 16))(this, 1);
    if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) )
    v9 = Errors;
    cbInQue = Stat.cbInQue;
    cbOutQue = Stat.cbOutQue;
    v12 = Errors == 0;
    *(uint32_t *)(this + 28) = Stat.cbInQue;
    *(uint32_t *)(this + 32) = cbOutQue;
    if ( !v12 )
    WinModemClass::LogCommErrors((uint32_t *)this, v9, *(uint8_t *)&Stat, cbInQue, cbOutQue);
    return (int)FileA;
}

int  WinModemClass::_vt02(uint32_t *this, int a2)
{
    *(this + 24) = a2;
    return a2;
}

int __fastcall WinModemClass::_vt03(DWORD a1)
{
    int v1; // esi
    void *v3; // [esp-Ch] [ebp-10h]
    DWORD ModemStat; // [esp+0h] [ebp-4h] BYREF
    ModemStat = a1;
    v1 = 0;
    v3 = *(void **)(a1 + 92);
    ModemStat = 0;
    GetCommModemStatus(v3, &ModemStat);
    if ( (ModemStat & 0x10) != 0 )
    v1 = 16;
    if ( (ModemStat & 0x20) != 0 )
    v1 |= 0x20u;
    if ( (ModemStat & 0x40) != 0 )
    v1 |= 0x40u;
    if ( (ModemStat & 0x80u) != 0 )
    return v1 | 0x80;
    return v1;
}

void  WinModemClass::_vt04(HANDLE *this, char a2)
{
    if ( a2 )
    if ( EscapeCommFunction(*(this + 23), 5u) )
    return;
    else if ( EscapeCommFunction(*(this + 23), 6u) )
    return;
    GetLastError();
    Debug::Log();
}

int  WinModemClass::_vt05(void *this, int a2, char *Str, int a4, int a5)
{
    void *v5; // esi
    int v6; // ebx
    int v7; // edi
    int (*v8)(void); // eax
    int result; // eax
    int Bytes; // eax
    int v11; // esi
    int v12; // eax
    int v13; // esi
    int v14; // eax
    char *v15; // esi
    char *v16; // eax
    int v17; // eax
    DWORD v19; // [esp+14h] [ebp-30h]
    DWORD Ticks; // [esp+20h] [ebp-24h]
    int v21; // [esp+28h] [ebp-1Ch]
    v5 = this;
    v6 = 0;
    Timer::GetTicks();
    Timer::GetTicks();
    memset(Str, 0, a4);
    v7 = a5;
    Ticks = Timer::GetTicks();
    v21 = a5;
    LABEL_2:
    v19 = Timer::GetTicks();
    while ( 1 )
    v8 = (int (*)(void))*((uint32_t *)v5 + 26);
    if ( v8 )
    result = v8();
    if ( result )
    return result;
    if ( !g_DDraw_Active )
    return 0;
    Bytes = WinModemClass::ReadBytes((void (**)(void))v5, &Str[v6], a4 - v6 < 0 ? 0 : a4 - v6);
    if ( Bytes )
    v6 += Bytes;
    Ticks = Timer::GetTicks();
    v21 = v7;
    v11 = a2;
    if ( v19 != -1 )
    v12 = Timer::GetTicks() - v19;
    if ( v12 >= a2 )
    goto LABEL_20;
    v11 = a2 - v12;
    if ( !v11 || v6 >= a4 )
    goto LABEL_20;
    if ( strchr(Str, 13) )
    if ( v7 == -1 )
    goto LABEL_20;
    v13 = v21;
    if ( Ticks != -1 )
    v14 = Timer::GetTicks() - Ticks;
    if ( v14 >= v21 )
    goto LABEL_20;
    v13 = v21 - v14;
    if ( !v13 )
    LABEL_20:
    Str[a4 - 1] = 0;
    v15 = strstr(Str, word_832678);
    if ( v15 )
    if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) )
    v15 = strchr(Str, 13);
    if ( v15 )
    goto LABEL_38;
    if ( *Str == 13 || *Str == 10 )
    v15 = strchr(Str, 13);
    v16 = strchr(Str, 10);
    if ( !v15 || v16 && v16 < v15 )
    v15 = strchr(Str, 10);
    if ( v15 )
    LABEL_38:
    while ( *v15 == 13 || *v15 == 10 )
    ++v15;
    if ( v15 != Str )
    memcpy(Str, v15, a4 - (v15 - Str));
    v6 -= v15 - Str;
    v7 = a5;
    if ( v15 )
    v5 = this;
    goto LABEL_2;
    if ( strrchr(Str, 13) )
    *strrchr(Str, 13) = 0;
    result = a2;
    if ( v19 != -1 )
    v17 = Timer::GetTicks() - v19;
    if ( v17 < a2 )
    return a2 - v17;
    return 0;
    return result;
    v5 = this;
}

int  WinModemClass::_vt08(uint32_t *this, int a2)
{
    *(this + 25) = a2;
    return a2;
}

int  WinModemClass::_vt09(uint32_t *this, int a2)
{
    *(this + 26) = a2;
    return a2;
}

void * WinModemClass::_vt00(void *Block, char a2)
{
    int v3; // eax
    v3 = *((uint32_t *)Block + 23);
    *(uint32_t *)Block = &WinModemClass::`vftable';
    if ( v3 != -1 )
    Debug::Log();
    CloseHandle(*((HANDLE *)Block + 23));
    *((uint32_t *)Block + 23) = -1;
    if ( *((uint32_t *)Block + 9) )
    __3_YAXPAX_Z(*((void **)Block + 9));
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

