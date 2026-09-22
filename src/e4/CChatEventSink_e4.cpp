// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x7AA870
Coord * * CChatEventSink::HandleChatChannelList(int a1, int a2, const char * a3)
{
{
  char **v19; // ecx
  char **v24; // ecx
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  void *Block; // [esp+7Ch] [ebp-31Ch]

  void *v32; // [esp+68h] [ebp-330h] BYREF
  unknown_libname_73(&v32); /*0x7aa87e*/
  char v40[516]; // [esp+194h] [ebp-204h] BYREF
  memset(v40, 0, 513); /*0x7aa893*/
  int v33 = 0; /*0x7aa89b*/
  int v35[2]; // [esp+74h] [ebp-324h] BYREF
  v35[0] = 0; /*0x7aa8a1*/
  v35[1] = 0; /*0x7aa8a5*/
  Block = 0; /*0x7aa8a9*/
  if ( !g_NetworkLobby_Init ) /*0x7aa8ad*/
  {
  _DWORD v39[67]; // [esp+88h] [ebp-310h] BYREF
    int v34 = 0; /*0x7aa8c0*/
    if ( a2 == 262459 ) /*0x7aa8ca*/
    {
      v34 = 41; /*0x7aa8cc*/
    }
    else
    {
      if ( (unsigned __int8)CChatEventSink::Check(&v34, 0) ) /*0x7aa8e4*/
        CChatEventSink::EnsureCapacity(0); /*0x7aa8f3*/
      if ( a2 < 0 ) /*0x7aa8fa*/
      {
LABEL_103:
        v35[0] = 0; /*0x7aaf7c*/
        __3_YAXPAX_Z(Block); /*0x7aaf89*/
        goto LABEL_104; /*0x7aaf89*/
      }
      if ( v34 ) /*0x7aa90e*/
      {
        Debug::Log(); /*0x7aa91d*/
        memset(v39, 0, sizeof(v39)); /*0x7aa930*/
        signed int v3 = g_WOL_ChatState; /*0x7aa932*/
        signed int v4 = 0; /*0x7aa937*/
        if ( (int)g_WOL_ChatState > 0 ) /*0x7aa93b*/
        {
          int v5 = 0; /*0x7aa93d*/
          do /*0x7aa985*/
          {
            if ( v5 >= 0 && v4 < v3 ) /*0x7aa945*/
              qmemcpy(v39, (char *)g_WOL_ConnectionHandler + v5, sizeof(v39)); /*0x7aa959*/
            if ( v39[10] != -1 ) /*0x7aa962*/
            {
              Array::InsertElement(v35, v39, v35[0]); /*0x7aa972*/
              v3 = g_WOL_ChatState; /*0x7aa977*/
            }
            ++v4; /*0x7aa97c*/
            v5 += 268; /*0x7aa97d*/
          }
          while ( v4 < v3 ); /*0x7aa985*/
        }
        g_WOL_ChatState = 0; /*0x7aa987*/
      }
      else
      {
        g_WOL_AuthPool = 0; /*0x7aa910*/
      }
    }
    const char * v6 = a3; /*0x7aa98d*/
    if ( a3 ) /*0x7aa996*/
    {
      do /*0x7aae72*/
      {
        if ( *(_DWORD *)v6 ) /*0x7aa99c*/
        {
          if ( a2 == 262459 ) /*0x7aa9c3*/
          {
            if ( *((_DWORD *)v6 + 10) != -1 ) /*0x7aa9cd*/
            {
              signed int v7 = g_WOL_ChatState; /*0x7aa9d3*/
              char * v8 = 0; /*0x7aa9d8*/
              int v9 = 0; /*0x7aa9da*/
              if ( (int)g_WOL_ChatState > 0 ) /*0x7aa9de*/
              {
                char * v10 = (char *)g_WOL_ConnectionHandler; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = v10; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    int v11 = strcmp(v8 + 52, v6 + 52); /*0x7aaa04*/
                    v6 = a3; /*0x7aaa27*/
                    if ( !v11 ) /*0x7aaa30*/
                      break; /*0x7aaa30*/
                  }
                  v7 = g_WOL_ChatState; /*0x7aaa32*/
                  ++v9; /*0x7aaa37*/
                  v10 += 268; /*0x7aaa38*/
                  if ( v9 >= (int)g_WOL_ChatState ) /*0x7aaa40*/
                    goto LABEL_88; /*0x7aaa40*/
                }
                Debug::Log(); /*0x7aaa54*/
                *((_DWORD *)v8 + 10) = *((_DWORD *)a3 + 10); /*0x7aaa5f*/
              }
            }
          }
          else
          {
            Array::InsertElement((int *)&g_WOL_ChatState, v6, g_WOL_ChatState); /*0x7aaa74*/
            int v12 = 0; /*0x7aaa79*/
            int v13 = v35[0]; /*0x7aaa7b*/
            if ( v35[0] > 0 ) /*0x7aaa81*/
            {
              AbstractClass *v14 = (char *)Block; /*0x7aaa87*/
              while ( 1 ) /*0x7aaa8b*/
              {
                if ( v12 >= 0 && v12 < v13 ) /*0x7aaa91*/
                  qmemcpy(v39, v14, sizeof(v39)); /*0x7aaa9e*/
                if ( !strcmp((const char *)&v39[13], v6 + 52) ) /*0x7aaaad*/
                  break; /*0x7aaaad*/
                v13 = v35[0]; /*0x7aaad4*/
                v6 = a3; /*0x7aaad8*/
                ++v12; /*0x7aaadf*/
                v14 += 268; /*0x7aaae0*/
                if ( v12 >= v35[0] ) /*0x7aaae8*/
                  goto LABEL_43; /*0x7aaae8*/
              }
              v6 = a3; /*0x7aaaec*/
              AbstractClass *v15 = v39[10]; /*0x7aaaf3*/
              Debug::Log(); /*0x7aab01*/
              *((_DWORD *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            String::Assign_Bool(&v32, v6 + 52); /*0x7aab0c*/
            CChatEventSink::EncodeString(39); /*0x7aab1f*/
            String::ToLower((const char **)&v32); /*0x7aab28*/
            if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x7aab41*/
            {
  void *v37; // [esp+80h] [ebp-318h] BYREF
              unknown_libname_73(&v37); /*0x7aab4b*/
              Coord *v16 = g_WOL_ChatPool; /*0x7aab50*/
              int v17 = 0; /*0x7aab55*/
              if ( g_WOL_ChatPool <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                Coord *v18 = 0; /*0x7aab96*/
                if ( v16 < 0 ) /*0x7aab9a*/
                  v18 = v16; /*0x7aab9c*/
                if ( v18 >= dword_B777A4 ) /*0x7aaba4*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_ChatPool); /*0x7aabab*/
                  v16 = g_WOL_ChatPool; /*0x7aabb0*/
                }
                if ( v16 >= dword_B777A4 ) /*0x7aabbb*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_ChatPool); /*0x7aabc2*/
                  v16 = g_WOL_ChatPool; /*0x7aabc7*/
                }
                if ( v18 < v16 ) /*0x7aabce*/
                {
                  memcpy( /*0x7aabeb*/
                    (char *)dword_B777A8 + 4 * v18 + 4,
                    (char *)dword_B777A8 + 4 * v18,
                    4 * (v16 + 0x3FFFFFFF * v18));
                  v16 = g_WOL_ChatPool; /*0x7aabf0*/
                }
                v19 = (char **)((char *)dword_B777A8 + 4 * v18); /*0x7aabfe*/
                if ( v19 ) /*0x7aac03*/
                {
                  String::AssignFromPtr(v19, (const char **)&v32); /*0x7aac0a*/
                  v16 = g_WOL_ChatPool; /*0x7aac0f*/
                }
                g_WOL_ChatPool = v16 + 1; /*0x7aac15*/
              }
              else
              {
                while ( 1 ) /*0x7aab5b*/
                {
                  if ( v17 >= 0 && v17 < v16 ) /*0x7aab61*/
                    String::Reassign((char **)&v37, (const char **)dword_B777A8 + v17); /*0x7aab71*/
                  if ( String::Compare((const char **)&v37, (const char **)&v32) ) /*0x7aab7f*/
                    break; /*0x7aab7f*/
                  v16 = g_WOL_ChatPool; /*0x7aab8c*/
                  if ( ++v17 >= g_WOL_ChatPool ) /*0x7aab94*/
                    goto LABEL_51; /*0x7aab94*/
                }
              }
              DeleteAndZero(&v37); /*0x7aac1e*/
            }
            HashTable *v20 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v32) & ((1 << dword_B7653C) - 1))); /*0x7aac42*/
            if ( v20 ) /*0x7aac47*/
            {
              while ( !String::Compare((const char **)v20, (const char **)&v32) ) /*0x7aac57*/
              {
                v20 = v20->q008; /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
  void *v38; // [esp+84h] [ebp-314h] BYREF
              unknown_libname_73(&v38); /*0x7aac64*/
              Coord *v21 = g_WOL_LoginToken; /*0x7aac6d*/
              int v22 = 0; /*0x7aac72*/
              if ( g_WOL_LoginToken <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                Coord *v23 = 0; /*0x7aacb3*/
                if ( v21 < 0 ) /*0x7aacb7*/
                  v23 = v21; /*0x7aacb9*/
                if ( v23 >= dword_B765FC ) /*0x7aacc1*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_LoginToken); /*0x7aacc8*/
                  v21 = g_WOL_LoginToken; /*0x7aaccd*/
                }
                if ( v21 >= dword_B765FC ) /*0x7aacd8*/
                {
                  DynamicVector::EnsureCapacity(&g_WOL_LoginToken); /*0x7aacdf*/
                  v21 = g_WOL_LoginToken; /*0x7aace4*/
                }
                if ( v23 < v21 ) /*0x7aaceb*/
                {
                  memcpy( /*0x7aad08*/
                    (char *)dword_B76600 + 4 * v23 + 4,
                    (char *)dword_B76600 + 4 * v23,
                    4 * (v21 + 0x3FFFFFFF * v23));
                  v21 = g_WOL_LoginToken; /*0x7aad0d*/
                }
                v24 = (char **)((char *)dword_B76600 + 4 * v23); /*0x7aad1b*/
                if ( v24 ) /*0x7aad20*/
                {
                  String::AssignFromPtr(v24, (const char **)&v32); /*0x7aad27*/
                  v21 = g_WOL_LoginToken; /*0x7aad2c*/
                }
                g_WOL_LoginToken = v21 + 1; /*0x7aad32*/
              }
              else
              {
                while ( 1 ) /*0x7aac78*/
                {
                  if ( v22 >= 0 && v22 < v21 ) /*0x7aac7e*/
                    String::Reassign((char **)&v38, (const char **)dword_B76600 + v22); /*0x7aac8e*/
                  if ( String::Compare((const char **)&v38, (const char **)&v32) ) /*0x7aac9c*/
                    break; /*0x7aac9c*/
                  v21 = g_WOL_LoginToken; /*0x7aaca9*/
                  if ( ++v22 >= g_WOL_LoginToken ) /*0x7aacb1*/
                    goto LABEL_72; /*0x7aacb1*/
                }
              }
              DeleteAndZero(&v38); /*0x7aad3b*/
            }
            _DWORD * v25 = (_DWORD *)g_WOL_HashTable; /*0x7aad40*/
  int v26; // esi
            v26 = *(_DWORD *)(*v25 /*0x7aad5c*/
                            + 4 * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v32) & ((1 << v25[3]) - 1)));
            if ( v26 ) /*0x7aad61*/
            {
              while ( !String::Compare((const char **)v26, (const char **)&v32) ) /*0x7aad71*/
              {
                v26 = *(_DWORD *)(v26 + 112); /*0x7aad73*/
                if ( !v26 ) /*0x7aad78*/
                  goto LABEL_87; /*0x7aad78*/
              }
            }
            else
            {
LABEL_87:
              strcat(v40, String::GetOrEmpty((char **)&v32)); /*0x7aad7a*/
              strcat(v40, DataGlobal_8318B8); /*0x7aadd7*/
              ++v33; /*0x7aade5*/
            }
          }
        }
        else
        {
          Array::InsertElement(&g_WOL_AuthPool, v6, g_WOL_AuthPool); /*0x7aa9ae*/
        }
LABEL_88:
        if ( v33 > 20 ) /*0x7aadee*/
        {
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aae1f*/
            g_UIPointerTable,
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            v40,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aae4b*/
            g_UIPointerTable,
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            v40,
            g_NetworkRematchState & 0xFFFF00);
          v33 = 0; /*0x7aae5c*/
          memset(v40, 0, 0x200u); /*0x7aae64*/
        }
        v6 = (const char *)*((_DWORD *)v6 + 12); /*0x7aae66*/
        a3 = v6; /*0x7aae6b*/
      }
      while ( v6 ); /*0x7aae72*/
      if ( v33 ) /*0x7aae7e*/
      {
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7aaead*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)g_UIPointerTable + 56))( /*0x7aaed9*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00);
        memset(v40, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent(dword_B73690); /*0x7aaef2*/
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7aaf0a*/
    {
      Debug::Log(); /*0x7aaf18*/
    }
    else
    {
      v27 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x7aaf27*/
      if ( v27 ) /*0x7aaf2e*/
        FillBuddyListWOL(v27); /*0x7aaf32*/
      if ( v34 ) /*0x7aaf3d*/
      {
        GameListRenderWOL(); /*0x7aaf77*/
      }
      else
      {
        PopulateWOLLobbyListBox(); /*0x7aaf3f*/
        v28 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7aaf49*/
        v29 = v28; /*0x7aaf4e*/
        if ( v28 ) /*0x7aaf52*/
        {
          KillTimer(v28, 0x55Du); /*0x7aaf5a*/
          DlgItem = GetDlgItem(v29, 1373); /*0x7aaf68*/
          EnableWindow(DlgItem, 1); /*0x7aaf6f*/
        }
      }
    }
    goto LABEL_103; /*0x7aaf20*/
  }
  v35[0] = 0; /*0x7aa8af*/
  __3_YAXPAX_Z(0); /*0x7aa8b4*/
LABEL_104:
  DeleteAndZero(&v32); /*0x7aaf8e*/
  return 0; /*0x7aaf9a*/
}

// 0x7AD930
int CChatEventSink::GrowBuffer()
{
{

  int v2 = *this; /*0x7ad935*/
  TechnoTypeClass *v3 = this->q004; /*0x7ad938*/
  if ( 3 * v2 > v3 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  int v5 = v3 / 2; /*0x7ad94f*/
  if ( v3 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= v3 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  void * v6 = __2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  const void * v7 = (const void *)this->q008; /*0x7ad979*/
  int v8 = (int)v6; /*0x7ad981*/
  if ( v7 ) /*0x7ad985*/
    qmemcpy(v6, v7, 268 * *this); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)this->q008); /*0x7ad9ad*/
  this->q008 = v8; /*0x7ad9b9*/
  this->q004 = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/
}

// 0x7AED40
int CChatEventSink::ProcessChatEvent()
{
{

  int v2 = *this; /*0x7aed44*/
  if ( *this < this->q004 ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  int v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  void * v5 = __2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  int v7 = (int)v5; /*0x7aed87*/
  const void * v6 = (const void *)this->q008; /*0x7aed8d*/
  if ( v6 ) /*0x7aed92*/
    qmemcpy(v5, v6, 248 * *this); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)this->q008); /*0x7aedb4*/
  this->q004 = v4; /*0x7aedc0*/
  this->q008 = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/
}

// 0x7AEE90
int CChatEventSink::Check(unsigned int * a2, int a3)
{
{
  if ( a3 < 0 || a3 >= *this ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(_DWORD *)(this->q008 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/
}

// 0x7AD350
ObjectClass * CChatEventSink::DeleteAndZero(char a2)
{
{
    DeleteAndZero(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// 0x7AECB0
int CChatEventSink::ComputeBucketMask(int a2)
{
{
    return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->CChatEventSink_field_0x0C) - 1);
}
}

// 0x7AEDD0
char CChatEventSink::EnsureCapacity(int a2)
{
{
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    void *v9;
    const void *v10;
    void *v11;
    v3 = *(int *)this;
    if ( !*(int *)this )
    return 0;
    v5 = a2;
    if ( a2 < 0 )
    v5 = 0;
    if ( v5 >= v3 )
    v5 = v3 - 1;
    memcpy( (void *)(this->CChatEventSink_field_0x08 + 4 * v5), (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)), 4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
    v6 = *(int *)this - 1;
    *(int *)this = v6;
    v7 = this->CChatEventSink_field_0x04;
    if ( 3 * v6 <= v7 )
  {
    v8 = v7 / 2;
    if ( v7 / 2 < 10 )
    v8 = 10;
    if ( v8 < v7 )
    {
    v9 = __2_YAPAXI_Z(4 * v8);
    v10 = (const void *)this->CChatEventSink_field_0x08;
    v11 = v9;
    if ( v10 )
    qmemcpy(v9, v10, 4 * *(int *)this);
    __3_YAXPAX_Z(*((void **)(this) + 2));
    this->CChatEventSink_field_0x08 = v11;
    this->CChatEventSink_field_0x04 = v8;
    }
  }
    return 1;
}
}

// 0x7B5E30
char CChatEventSink::EncodeString(char a2)
{
{
    char *v4;
    size_t v5;
    size_t v6;
    char *v7;
    char *v8;
    char *v9;
    const char *v10;
    size_t v11;
    const char *v12;
    if ( !*(void**)this )
    return 0;
    v4 = strchr(*(void**)this, a2);
    if ( !v4 )
    return 0;
    v5 = v4 - *(void**)this;
    v6 = v5;
    v7 = &g_INI_DefaultBuffer;
    if ( *(void**)this )
    v7 = (char *)*(void**)this;
    v8 = (char *)__2_YAPAXI_Z(v5 + 1);
    v9 = v8;
    *v8 = 0;
    if ( v7 )
    strncpy(v8, v7, v6);
    v9[v6] = 0;
    v10 = &g_INI_DefaultBuffer;
    if ( v9 )
    v10 = v9;
    if ( *(void**)this )
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = 0;
    if ( v10 )
    v11 = strlen(v10) + 1;
    else
    v11 = 1;
    v12 = (const char *)__2_YAPAXI_Z(v11);
    *(void**)this = v12;
    *v12 = 0;
    if ( v10 )
    strcpy((char *)*(void**)this, v10);
    if ( v9 )
    __3_YAXPAX_Z(v9);
    return 1;
}
}
