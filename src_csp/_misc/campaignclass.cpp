#include "campaignclass.hpp"

char  CampaignClass::_vt25(int this, unsigned __int8 ***a2)
{
    int Int_Overwrite; // eax
    int v4; // ecx
    char Destination[1024]; // [esp+8h] [ebp-400h] BYREF
    INIClass::ResetSection(a2);
    if ( !AbstractTypeClass::LoadFromINI(this, a2) )
    return 0;
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aCd,
    *(uint32_t *)(this + 152));
    v4 = *(uint32_t *)(this + 668);
    *(uint32_t *)(this + 152) = Int_Overwrite;
    *(uint32_t *)(this + 668) = INIClass::GetBool(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aFinalmovie, v4);
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Scenario,
    (char *)(this + 156),
    (char *)(this + 156),
    512);
    _strupr((char *)(this + 156));
    if ( INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aDebugonly, 0) )
    INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Description,
    0,
    Destination,
    1024);
    strcat(Destination, aForDebugTestin);
    BulkCharToWide((_WORD *)(this + 672), (unsigned __int8 *)Destination, -1);
    else
    INIClass::GetStringEx(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Description,
    (wchar_t *)(this + 672),
    0x80u);
    return 1;
}

int __stdcall CampaignClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -2439096;
    a2[1] = 298980631;
    a2[2] = 1610642817;
    a2[3] = -1252326136;
    return 0;
}

int  CampaignClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 152));
    Checksum::AddString((unsigned int *)a2, (unsigned __int8 *)(this + 156));
    return Power::TimerProcess(*(uint32_t *)(this + 668));
}

int __stdcall CampaignClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = &CampaignClass::`vftable';
    a1[1] = &CampaignClass::`vftable';
    a1[2] = &CampaignClass::`vftable';
    a1[3] = &CampaignClass::`vftable';
    return 0;
    return result;
}

int __stdcall CampaignClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int CampaignClass::_vt12()
{
    return 928;
}

int CampaignClass::_vt11()
{
    return 10;
}

void ** CampaignClass::DTOR(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &CampaignClass::`vftable';
    *(Block + 1) = &CampaignClass::`vftable';
    *(Block + 2) = &CampaignClass::`vftable';
    *(Block + 3) = &CampaignClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83CF8 + 16))(&dword_A83CF8, &v5);
    if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState )
    do
    ++v3;
    *((uint32_t *)g_CampaignTypeArray + v3 - 1) = *((uint32_t *)g_CampaignTypeArray + v3);
    while ( v3 < g_UnitTypeInitState );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  CampaignClass::LoadMovieDisplay(int this, int a2)
{
    int v2; // ebp
    bool v4; // zf
    int v6; // edi
    bool v7; // bl
    int v8; // edi
    int v9; // eax
    int v10; // eax
    int v11; // ebx
    DWORD Ticks; // eax
    int v13; // [esp+14h] [ebp-8h]
    v2 = a2;
    v4 = a2 == 0;
    *(uint32_t *)(this + 172) = 0;
    *(uint32_t *)(this + 176) = 0;
    *(uint32_t *)(this + 180) = 0;
    if ( v4
    || (v6 = *((uint32_t *)dword_8B4124 + *(uint32_t *)(*((uint32_t *)g_SuperWeaponTypeCount + *(uint32_t *)(v2 + 7284)) + 188))) == 0 )
    Debug::Log();
    return 0;
    else
    Debug::Log();
    String::Assign((char **)&a2, (const char *)(v6 + 36));
    v7 = SessionClass::LoadMapSelection((uint32_t *)(this + 80), (char **)&a2) == 0;
    DeleteAndZero((void **)&a2);
    if ( v7 )
    SessionClass::Destruct((uint32_t *)(this + 80));
    Debug::Log();
    return 0;
    else
    String::Assign((char **)&a2, (const char *)(v2 + 4700));
    v8 = CampaignClass::DeleteAndZero(&a2);
    DeleteAndZero((void **)&a2);
    if ( v8
    && (!__2_YAPAXI_Z(0x20u) ? (v9 = 0) : (v9 = CampaignClass::Constructor_1(1)), (*(uint32_t *)(this + 180) = v9) != 0) )
    *(uint32_t *)(this + 72) = ((*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 124))(DSurface_Hidden) - 640)
    / 2;
    v10 = ((*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden + 128))(DSurface_Hidden) - 400) / 2;
    *(uint32_t *)(this + 76) = v10;
    *(uint32_t *)(this + 184) = *(uint32_t *)(this + 104);
    *(uint32_t *)(this + 188) = *(uint32_t *)(this + 108);
    *(uint32_t *)(this + 192) = *(uint32_t *)(this + 112);
    *(uint32_t *)(this + 196) = *(uint32_t *)(this + 116);
    *(uint32_t *)(this + 184) += *(uint32_t *)(this + 72);
    v11 = 0;
    *(uint32_t *)(this + 188) += v10;
    do
    WideString::AssignFromPtr((wchar_t **)&a2, (const wchar_t **)(v8 + 16));
    WrapWideStringText((const wchar_t **)&a2, *(int **)(this + 180), *(uint32_t *)(this + 192));
    v8 = CampaignClass::Check(++v11);
    DeleteAndZero::Alt((void **)&a2);
    while ( v8 );
    String::Assign_Alt((void **)(this + 200), 0);
    Ticks = Timer::GetTicks();
    *(uint32_t *)(this + 216) = -1;
    *(uint32_t *)(this + 204) = Ticks;
    *(uint32_t *)(this + 208) = v13;
    *(uint32_t *)(this + 212) = 0;
    return 1;
    else
    Debug::Log();
    CampaignClass::ReleaseSubobjectsAndDestruct(this);
    return 0;
}

int  CampaignClass::ReleaseSubobjectsAndDestruct(uint32_t *this)
{
    void (__thiscall ***v2)(uint32_t, int); // ecx
    void (__thiscall ***v3)(uint32_t, int); // ecx
    void (__thiscall ***v4)(uint32_t, int); // ecx
    v2 = (void (__thiscall ***)(uint32_t, int))*(this + 45);
    if ( v2 )
    (**v2)(v2, 1);
    *(this + 45) = 0;
    v3 = (void (__thiscall ***)(uint32_t, int))*(this + 44);
    if ( v3 )
    (**v3)(v3, 1);
    *(this + 44) = 0;
    v4 = (void (__thiscall ***)(uint32_t, int))*(this + 43);
    if ( v4 )
    (**v4)(v4, 1);
    *(this + 43) = 0;
    return SessionClass::Destruct(this + 20);
}

