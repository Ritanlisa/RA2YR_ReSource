#include "loadoptions.hpp"

char __stdcall LoadOptions::_vt01(LPCCH lpMultiByteStr)
{
    int v1; // esi
    wchar_t *StringCSF; // eax
    HWND MessageBox; // edi
    char Saved; // bl
    v1 = (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 40))(WWMouseClass_Instance);
    StringCSF = GetStringCSF(aTxtLoading, 0, g_Str_File_LoadDlg_CPP, 1052);
    MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 12))(WWMouseClass_Instance);
    if ( MessageBox )
    Dialog::Show(MessageBox);
    g_BounceClassInit = 0;
    g_FramePresent_State = 0;
    WTFMode::Shutdown(GameMode_Current);
    Saved = Game::LoadSaved(lpMultiByteStr);
    while ( (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 40))(WWMouseClass_Instance) < v1 )
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 16))(WWMouseClass_Instance);
    while ( (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 40))(WWMouseClass_Instance) > v1 )
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 12))(WWMouseClass_Instance);
    if ( MessageBox )
    Dialog::Destroy(MessageBox);
    return Saved;
}

char __stdcall LoadOptions::_vt02(LPCCH lpMultiByteStr, wchar_t *Source)
{
    wchar_t *StringCSF; // eax
    HWND MessageBox; // esi
    char v4; // bl
    StringCSF = GetStringCSF(aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107);
    MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 12))(WWMouseClass_Instance);
    if ( MessageBox )
    Dialog::Show(MessageBox);
    v4 = SaveScenarioClassGame_AdjustMPSaveFileName(lpMultiByteStr, Source, 0);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 16))(WWMouseClass_Instance);
    if ( MessageBox )
    Dialog::Destroy(MessageBox);
    return v4;
}

bool __stdcall LoadOptions::_vt03(LPCSTR lpFileName)
{
    return DeleteFileA(lpFileName);
}

char __stdcall LoadOptions::_vt04(wchar_t *Destination, int a2)
{
    const CHAR *v2; // edi
    char v3; // bl
    const wchar_t *v4; // eax
    const wchar_t *v5; // eax
    char *v6; // eax
    uint32_t v8[253]; // [esp+Ch] [ebp-3F4h] BYREF
    if ( !Destination && !a2 )
    return 0;
    v2 = (const CHAR *)(a2 + 44);
    if ( !_strcmpi((const void *)(a2 + 44), MultiByteStr) )
    return 0;
    GameState::Reset(v8);
    v3 = sub_67FD20(v2, (int)v8);
    if ( !v3 )
    return 0;
    if ( ReadPointerFromECX3(v8) == dword_83D560 )
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v5);
    *((uint8_t *)Destination + 437) = 0;
    else
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v4);
    *((uint8_t *)Destination + 437) = 1;
    *((uint8_t *)Destination + 436) = v3;
    *((uint32_t *)Destination + 72) = LoadOptions::GetFlag99(v8);
    *((uint32_t *)Destination + 106) = LoadOptions::GetFlag98(v8);
    *((uint32_t *)Destination + 110) = LoadOptions::GetFlag252(v8);
    strcpy((char *)Destination + 256, v2);
    v6 = LoadOptions::GetData((char *)v8);
    wcscpy(Destination + 148, (const wchar_t *)v6);
    if ( !strlen((const char *)Destination + 256) )
    strcpy((char *)Destination + 256, (const char *)(a2 + 304));
    *((uint32_t *)Destination + 108) = *(uint32_t *)(a2 + 24);
    *((uint32_t *)Destination + 107) = *(uint32_t *)(a2 + 20);
    return 1;
}

char * LoadOptions::_vt00(char *Block, char a2)
{
    int v3; // esi
    void *v4; // eax
    v3 = 0;
    for ( *(uint32_t *)Block = &LoadOptionsClass::`vftable'; v3 < *((uint32_t *)Block + 12); ++v3 )
    __3_YAXPAX_Z(*(void **)(*((uint32_t *)Block + 9) + 4 * v3));
    (*(void (__thiscall **)(char *))(*((uint32_t *)Block + 8) + 12))(Block + 32);
    v4 = (void *)*((uint32_t *)Block + 9);
    *((uint32_t *)Block + 8) = &VectorClass<FileEntryClass *>::`vftable';
    if ( v4 && *(Block + 45) )
    __3_YAXPAX_Z(v4);
    *((uint32_t *)Block + 9) = 0;
    *(Block + 45) = 0;
    *((uint32_t *)Block + 10) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x0055A150
void  LoadOptions::vt03(int this)
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

// 0x0055A180
unsigned int  LoadOptions::vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

// 0x0055A1A0
int  LoadOptions::vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

// 0x0055A1B0
char  LoadOptions::vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  LoadOptions::sub_55A1F0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  LoadOptions::sub_55A2A0(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  LoadOptions::sub_55A2D0(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  LoadOptions::sub_55A310(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

// 0x0055A330
char  LoadOptions::vt02(void *this, int a2, uint32_t *a3)
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

// 0x0055A3E0
int  LoadOptions::vt04(int *this, uint32_t *a2)
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

uint32_t * LoadOptions::sub_55A410(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<FileEntryClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * LoadOptions::vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<FileEntryClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

