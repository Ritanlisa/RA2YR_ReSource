#include "wdtgame.hpp"

void  WDTGame::ProcessTerritorySelection(int *this, uint32_t *a2, bool *a3)
{
    uint32_t *v3; // ebx
    int v5; // ecx
    wchar_t *StringCSF; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    bool v11; // bl
    int v12; // [esp-8h] [ebp-30h]
    uint32_t v13[2]; // [esp+8h] [ebp-20h] BYREF
    uint32_t v14[2]; // [esp+10h] [ebp-18h] BYREF
    void **v15; // [esp+18h] [ebp-10h] BYREF
    int *v16; // [esp+1Ch] [ebp-Ch]
    int v17; // [esp+20h] [ebp-8h]
    int v18; // [esp+24h] [ebp-4h]
    v3 = a2;
    v18 = 0;
    if ( (unsigned __int8)WDTSurface::PointInRect(a2) )
    WDTSurface::ToggleState(this, 1);
    v5 = *(this + 279);
    if ( !*(uint8_t *)(v5 + 104) )
    WDTGame::ToggleTeamMode(v5, this, 1);
    String::Assign((char **)&a3, aMousecancel);
    MSSfxClass::FindByName((char *)this, (const char **)&a3);
    DeleteAndZero((void **)&a3);
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894);
    WideString::Assign((wchar_t **)&a3, StringCSF);
    ScoreText::Show(this, (const wchar_t **)&a3);
    DeleteAndZero::Alt((void **)&a3);
    else
    WDTSurface::ToggleState(this, 0);
    v7 = Count::Get(this + 278);
    v8 = Surface::PixelToIndex(v7, v3);
    if ( v8 != *(this + 280) )
    v12 = v8;
    *(this + 280) = v8;
    Count::Get(this + 278);
    v9 = ComPtr::DestroyWrapper((int)v14, v12);
    TerritorySelectWDT(this, v9);
    ComPtr::Territory_Dtor(v14);
    v10 = ComPtr::DestroyWrapper((int)&v15, *(this + 280));
    WDTGame::Constructor(v10);
    ComPtr::Territory_Dtor(&v15);
    v11 = TerritorySelectWDT(this, (int)v13);
    ComPtr::Territory_Dtor(v13);
    *a3 = v11;
    if ( v11 )
    String::Assign((char **)&a2, aConflictselect);
    if ( String::NotEquals((const char **)&a2, 0) )
    v16 = this + 293;
    v17 = 0;
    v15 = &VectorCursor<MSSfxEntry *,DynamicVectorClass<MSSfxEntry *>>::`vftable';
    if ( Vector::HasCapacity(&v15) )
    do
    if ( !String::Compare((const char **)&a2, *(const char ***)(v16[1] + 4 * v17)) )
    break;
    ((void (__thiscall *)(void ***))v15[2])(&v15);
    while ( ((unsigned __int8 (__thiscall *)(void ***))v15[1])(&v15) );
    if ( ((unsigned __int8 (__thiscall *)(void ***))v15[1])(&v15) )
    nullsub_24(*(uint32_t *)(v16[1] + 4 * v17));
    DeleteAndZero((void **)&a2);
}

char  WDTGame::ReviewHistory(int this, int a2, int a3)
{
    int v3; // edi
    char v4; // bl
    wchar_t *StringCSF; // eax
    int v7; // ebp
    wchar_t *v8; // eax
    wchar_t **v9; // eax
    wchar_t **v10; // eax
    wchar_t **v11; // eax
    int v12; // eax
    int v13; // edi
    wchar_t **v16; // [esp-Ch] [ebp-40h]
    const wchar_t **v17; // [esp-4h] [ebp-38h]
    const wchar_t *v18; // [esp+10h] [ebp-24h]
    char v19; // [esp+14h] [ebp-20h]
    void *v20; // [esp+18h] [ebp-1Ch] BYREF
    void *v21; // [esp+1Ch] [ebp-18h] BYREF
    void *v22; // [esp+20h] [ebp-14h] BYREF
    void *v23; // [esp+24h] [ebp-10h] BYREF
    void *v24; // [esp+28h] [ebp-Ch] BYREF
    uint32_t v25[2]; // [esp+2Ch] [ebp-8h] BYREF
    v3 = a2;
    v4 = 1;
    v19 = 1;
    v18 = 0;
    if ( a2 <= a3 )
    while ( 1 )
    DDraw::HandleSuspend((uint32_t *)this);
    while ( EventQueue::Process(g_BinkMoviePlayer) )
    if ( EventQueue::Read(g_BinkMoviePlayer) == 27 )
    *(uint8_t *)(this + 1092) = 1;
    if ( *(uint8_t *)(this + 1092) )
    break;
    StringCSF = GetStringCSF(aWdtReviewinghi, 0, g_Str_File_WDTSel_cpp, 995);
    WideString::Assign((wchar_t **)&a2, StringCSF);
    WideString::Append2((wchar_t **)&a2, asc_830174);
    if ( v4 )
    v18 = WideString::Length((const wchar_t **)&a2);
    v7 = v3 + 1;
    v17 = (const wchar_t **)sub_7B7E40(&v24, v3 + 1, 2);
    v16 = WideString::Assign((wchar_t **)&v23, (wchar_t *)asc_82083C);
    v8 = GetStringCSF(aWdtReviewinghi_0, 0, g_Str_File_WDTSel_cpp, 1003);
    v9 = WideString::Assign((wchar_t **)&v22, v8);
    v10 = WideString::ConcatAlloc((const wchar_t **)v9, (wchar_t **)&v21, (const wchar_t **)v16);
    v11 = WideString::ConcatAlloc((const wchar_t **)v10, (wchar_t **)&v20, v17);
    WideString::Append((wchar_t **)&a2, (const wchar_t **)v11);
    DeleteAndZero::Alt(&v20);
    DeleteAndZero::Alt(&v21);
    DeleteAndZero::Alt(&v22);
    DeleteAndZero::Alt(&v23);
    DeleteAndZero::Alt(&v24);
    ScoreText::ShowAlt((int *)this, (const wchar_t **)&a2, v4 == 0 ? (unsigned int)v18 : 0);
    v12 = ActivateScreenWDT((int)v25, v3);
    Trigger::ProcessMapEvents(this, v12, 0, v19);
    v25[0] = &rc_ptr<WorldDominationTour::State>::`vftable';
    ComPtr::Release(v25);
    v4 = 0;
    v19 = 0;
    MSEngine::ProcessEvents((uint32_t *)this, *(uint32_t *)(this + 1148), 300000);
    v13 = 5;
    if ( *(uint8_t *)(this + 1092) )
    goto LABEL_19;
    do
    if ( !v13-- )
    break;
    GameClass::FrameLoop((uint32_t *)this, 5);
    DDraw::HandleSuspend((uint32_t *)this);
    while ( EventQueue::Process(g_BinkMoviePlayer) )
    if ( EventQueue::Read(g_BinkMoviePlayer) == 27 )
    *(uint8_t *)(this + 1092) = 1;
    while ( !*(uint8_t *)(this + 1092) );
    if ( *(uint8_t *)(this + 1092) )
    LABEL_19:
    DeleteAndZero::Alt((void **)&a2);
    return v4;
    DeleteAndZero::Alt((void **)&a2);
    v3 = v7;
    if ( v7 > a3 )
    return 0;
    return v4;
}

