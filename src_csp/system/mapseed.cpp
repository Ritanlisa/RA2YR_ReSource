#include "mapseed.hpp"

char  MapSeed::ValidateName(char *this, int a2)
{
    if ( a2 )
    return (*(int (__stdcall **)(int, char *))(*(uint32_t *)this + 8))(a2, this + 120);
    else
    return (unsigned __int8)ShowSaveLoadDialog(this + 120) != 0;
}

void  MapSeed::InsertName(const char **this)
{
    int v2; // eax
    int v3; // esi
    char **v4; // ecx
    int v5; // eax
    int v6; // esi
    char **v7; // ecx
    int v8; // eax
    int v9; // esi
    char **v10; // ecx
    void *v11; // [esp+8h] [ebp-70h] BYREF
    char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF
    if ( MapSeed::CheckName(this) )
    String::AssignFromPtr((char **)&v11, this);
    v2 = g_WindowManager;
    v3 = g_WindowManager;
    if ( g_WindowManager >= dword_B73AAC )
    DynamicVector::EnsureCapacity(&g_WindowManager);
    v2 = g_WindowManager;
    if ( v2 >= dword_B73AAC )
    DynamicVector::EnsureCapacity(&g_WindowManager);
    v2 = g_WindowManager;
    if ( v3 < v2 )
    memcpy((char *)g_WOL_LoginQueue + 4 * v3 + 4, (char *)g_WOL_LoginQueue + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3));
    v2 = g_WindowManager;
    v4 = (char **)((char *)g_WOL_LoginQueue + 4 * v3);
    if ( v4 )
    String::AssignFromPtr(v4, (const char **)&v11);
    v2 = g_WindowManager;
    g_WindowManager = v2 + 1;
    v5 = g_WOL_RequestManager;
    v6 = g_WOL_RequestManager;
    if ( g_WOL_RequestManager >= dword_B76984 )
    DynamicVector::EnsureCapacity(&g_WOL_RequestManager);
    v5 = g_WOL_RequestManager;
    if ( v5 >= dword_B76984 )
    DynamicVector::EnsureCapacity(&g_WOL_RequestManager);
    v5 = g_WOL_RequestManager;
    if ( v6 < v5 )
    memcpy((char *)g_WOL_SessionID + 4 * v6 + 4, (char *)g_WOL_SessionID + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6));
    v5 = g_WOL_RequestManager;
    v7 = (char **)((char *)g_WOL_SessionID + 4 * v6);
    if ( v7 )
    String::AssignFromPtr(v7, (const char **)&v11);
    v5 = g_WOL_RequestManager;
    g_WOL_RequestManager = v5 + 1;
    v8 = g_WOL_BuddyList;
    v9 = g_WOL_BuddyList;
    if ( g_WOL_BuddyList >= dword_B779B4 )
    DynamicVector::EnsureCapacity(&g_WOL_BuddyList);
    v8 = g_WOL_BuddyList;
    if ( v8 >= dword_B779B4 )
    DynamicVector::EnsureCapacity(&g_WOL_BuddyList);
    v8 = g_WOL_BuddyList;
    if ( v9 < v8 )
    memcpy((char *)g_WOL_ChannelMgr + 4 * v9 + 4, (char *)g_WOL_ChannelMgr + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9));
    v8 = g_WOL_BuddyList;
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v9);
    if ( v10 )
    String::AssignFromPtr(v10, (const char **)&v11);
    v8 = g_WOL_BuddyList;
    g_WOL_BuddyList = v8 + 1;
    if ( String::Length(&g_WOL_AuthObject) )
    if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 )
    LABEL_33:
    DeleteAndZero(&v11);
    return;
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject);
    if ( g_WOL_RequestManager )
    if ( g_WOL_RequestManager > 0 )
    String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID);
    DynamicArray::Remove(&g_WOL_RequestManager, 0);
    g_WOL_ParseState = time(0);
    memset(v12, 0, sizeof(v12));
    strcpy(&v12[36], String::GetOrEmpty((char **)&g_WOL_AuthObject));
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 96))(ppv, v12);
    goto LABEL_33;
}

