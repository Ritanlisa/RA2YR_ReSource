// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7AA870
int CChatEventSink::HandleChatChannelList(int a1, int a2, const char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CComObject_CChatEventSink___ATL::vt_08_(int a1, int a2, const char *a3)
{
  signed int v3; // eax
  signed int v4; // ebx
  int v5; // ebp
  const char *v6; // ebx
  signed int v7; // eax
  char *v8; // ebp
  int v9; // edi
  char *v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // edx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // esi
  char **v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // esi
  char **v24; // ecx
  _DWORD *v25; // esi
  int v26; // esi
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  void *v32; // [esp+68h] [ebp-330h] BYREF
  int v33; // [esp+6Ch] [ebp-32Ch]
  int v34; // [esp+70h] [ebp-328h] BYREF
  int v35[2]; // [esp+74h] [ebp-324h] BYREF
  void *Block; // [esp+7Ch] [ebp-31Ch]
  void *v37; // [esp+80h] [ebp-318h] BYREF
  void *v38; // [esp+84h] [ebp-314h] BYREF
  _DWORD v39[67]; // [esp+88h] [ebp-310h] BYREF
  char v40[516]; // [esp+194h] [ebp-204h] BYREF

  unknown_libname_73(&v32); /*0x7aa87e*/
  memset(v40, 0, 513); /*0x7aa893*/
  v33 = 0; /*0x7aa89b*/
  v35[0] = 0; /*0x7aa8a1*/
  v35[1] = 0; /*0x7aa8a5*/
  Block = 0; /*0x7aa8a9*/
  if ( !g_NetworkLobby_Init ) /*0x7aa8ad*/
  {
    v34 = 0; /*0x7aa8c0*/
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
        v3 = g_WOL_ChatState; /*0x7aa932*/
        v4 = 0; /*0x7aa937*/
        if ( (int)g_WOL_ChatState > 0 ) /*0x7aa93b*/
        {
          v5 = 0; /*0x7aa93d*/
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
    v6 = a3; /*0x7aa98d*/
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
              v7 = g_WOL_ChatState; /*0x7aa9d3*/
              v8 = 0; /*0x7aa9d8*/
              v9 = 0; /*0x7aa9da*/
              if ( (int)g_WOL_ChatState > 0 ) /*0x7aa9de*/
              {
                v10 = (char *)g_WOL_ConnectionHandler; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = v10; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    v11 = strcmp(v8 + 52, v6 + 52); /*0x7aaa04*/
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
            v12 = 0; /*0x7aaa79*/
            v13 = v35[0]; /*0x7aaa7b*/
            if ( v35[0] > 0 ) /*0x7aaa81*/
            {
              v14 = (char *)Block; /*0x7aaa87*/
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
              v15 = v39[10]; /*0x7aaaf3*/
              Debug::Log(); /*0x7aab01*/
              *((_DWORD *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            String::Assign_Bool(&v32, v6 + 52); /*0x7aab0c*/
            CChatEventSink::EncodeString(39); /*0x7aab1f*/
            String::ToLower((const char **)&v32); /*0x7aab28*/
            if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x7aab41*/
            {
              unknown_libname_73(&v37); /*0x7aab4b*/
              v16 = g_WOL_ChatPool; /*0x7aab50*/
              v17 = 0; /*0x7aab55*/
              if ( g_WOL_ChatPool <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                v18 = 0; /*0x7aab96*/
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
            v20 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v32) & ((1 << dword_B7653C) - 1))); /*0x7aac42*/
            if ( v20 ) /*0x7aac47*/
            {
              while ( !String::Compare((const char **)v20, (const char **)&v32) ) /*0x7aac57*/
              {
                v20 = *(_DWORD *)(v20 + 8); /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
              unknown_libname_73(&v38); /*0x7aac64*/
              v21 = g_WOL_LoginToken; /*0x7aac6d*/
              v22 = 0; /*0x7aac72*/
              if ( g_WOL_LoginToken <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                v23 = 0; /*0x7aacb3*/
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
            v25 = (_DWORD *)g_WOL_HashTable; /*0x7aad40*/
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
              strcat(v40, MEMORY[0x8318B8]); /*0x7aadd7*/
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
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7aae1f*/
            MEMORY[0xAC1170],
            g_WOL_ConnectFlag,
            g_WOL_GameConfig,
            v40,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7aae4b*/
            MEMORY[0xAC1170],
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
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 20))( /*0x7aaead*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(_DWORD *)MEMORY[0xAC1170] + 56))( /*0x7aaed9*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v40,
          g_NetworkRematchState & 0xFFFF00);
        memset(v40, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent(dword_B73690); /*0x7aaef2*/
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7aaf0a*/
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
}

// 0x7AD350
ObjectClass * CChatEventSink::DeleteAndZero(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall CChatEventSink::DeleteAndZero(void **this, char a2)
{
  DeleteAndZero(this); /*0x7ad353*/
  if ( (a2 & 1) != 0 ) /*0x7ad35d*/
    __3_YAXPAX_Z(this); /*0x7ad360*/
  return (ObjectClass *)this; /*0x7ad36a*/
}
}

// 0x7AD930
char CChatEventSink::GrowBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7AD930(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x7ad935*/
  v3 = *(this + 1); /*0x7ad938*/
  if ( 3 * v2 > v3 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  v5 = v3 / 2; /*0x7ad94f*/
  if ( v3 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= v3 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  v6 = __2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  v7 = (const void *)*(this + 2); /*0x7ad979*/
  v8 = (int)v6; /*0x7ad981*/
  if ( v7 ) /*0x7ad985*/
    qmemcpy(v6, v7, 268 * *this); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x7ad9ad*/
  *(this + 2) = v8; /*0x7ad9b9*/
  *(this + 1) = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/
}
}

// 0x7AECB0
int CChatEventSink::ComputeBucketMask(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7AECB0(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->CChatEventSink_field_0x0C) - 1); /*0x7aecc4*/
}
}

// 0x7AED40
char CChatEventSink::ProcessChatEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7AED40(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7aed44*/
  if ( *this < *(this + 1) ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  v5 = __2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  v7 = (int)v5; /*0x7aed87*/
  v6 = (const void *)*(this + 2); /*0x7aed8d*/
  if ( v6 ) /*0x7aed92*/
    qmemcpy(v5, v6, 248 * *this); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x7aedb4*/
  *(this + 1) = v4; /*0x7aedc0*/
  *(this + 2) = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/
}
}

// 0x7AEDD0
char CChatEventSink::EnsureCapacity(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7AEDD0(void *this, int a2)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *v10; // esi
  void *v11; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)this; /*0x7aedd4*/
  if ( !*(_DWORD *)this ) /*0x7aedd4*/
    return 0; /*0x7aeddb*/
  v5 = a2; /*0x7aede1*/
  if ( a2 < 0 ) /*0x7aede7*/
    v5 = 0; /*0x7aede9*/
  if ( v5 >= v3 ) /*0x7aeded*/
    v5 = v3 - 1; /*0x7aedef*/
  memcpy( /*0x7aee0f*/
    (void *)(this->CChatEventSink_field_0x08 + 4 * v5),
    (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)),
    4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(_DWORD *)this - 1; /*0x7aee1a*/
  *(_DWORD *)this = v6; /*0x7aee1c*/
  v7 = this->CChatEventSink_field_0x04; /*0x7aee1e*/
  if ( 3 * v6 <= v7 ) /*0x7aee26*/
  {
    v8 = v7 / 2; /*0x7aee2f*/
    if ( v7 / 2 < 10 ) /*0x7aee34*/
      v8 = 10; /*0x7aee36*/
    if ( v8 < v7 ) /*0x7aee3d*/
    {
      v9 = __2_YAPAXI_Z(4 * v8); /*0x7aee47*/
      v10 = (const void *)this->CChatEventSink_field_0x08; /*0x7aee4c*/
      v11 = v9; /*0x7aee54*/
      if ( v10 ) /*0x7aee58*/
        qmemcpy(v9, v10, 4 * *(_DWORD *)this); /*0x7aee66*/
      __3_YAXPAX_Z(*((void **)this + 2)); /*0x7aee73*/
      this->CChatEventSink_field_0x08 = v11; /*0x7aee7f*/
      this->CChatEventSink_field_0x04 = v8; /*0x7aee82*/
    }
  }
  return 1; /*0x7aedda*/
}
}

// 0x7AEE90
char CChatEventSink::Check(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7AEE90(int *this, _DWORD *a2, int a3)
{
  if ( a3 < 0 || a3 >= *this ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(_DWORD *)(*(this + 2) + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/
}
}

// 0x7B5E30
char CChatEventSink::EncodeString(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7B5E30(const char **this, char a2)
{
  char *v4; // eax
  size_t v5; // eax
  size_t v6; // esi
  char *v7; // edi
  char *v8; // eax
  char *v9; // ebp
  const char *v10; // esi
  size_t v11; // ecx
  const char *v12; // eax

  if ( !*this ) /*0x7b5e33*/
    return 0; /*0x7b5e39*/
  v4 = strchr(*this, a2); /*0x7b5e46*/
  if ( !v4 ) /*0x7b5e50*/
    return 0; /*0x7b5e52*/
  v5 = v4 - *this; /*0x7b5e5c*/
  v6 = v5; /*0x7b5e5f*/
  v7 = &MEMORY[0x889F64]; /*0x7b5e63*/
  if ( *this ) /*0x7b5e58*/
    v7 = (char *)*this; /*0x7b5e6a*/
  v8 = (char *)__2_YAPAXI_Z(v5 + 1); /*0x7b5e70*/
  v9 = v8; /*0x7b5e75*/
  *v8 = 0; /*0x7b5e7c*/
  if ( v7 ) /*0x7b5e80*/
    strncpy(v8, v7, v6); /*0x7b5e85*/
  v9[v6] = 0; /*0x7b5e8d*/
  v10 = &MEMORY[0x889F64]; /*0x7b5e91*/
  if ( v9 ) /*0x7b5e98*/
    v10 = v9; /*0x7b5e9a*/
  if ( *this ) /*0x7b5e9c*/
    __3_YAXPAX_Z((void *)*this); /*0x7b5ea3*/
  *this = 0; /*0x7b5ead*/
  if ( v10 ) /*0x7b5eb3*/
    v11 = strlen(v10) + 1; /*0x7b5ebc*/
  else
    v11 = 1; /*0x7b5ec2*/
  v12 = (const char *)__2_YAPAXI_Z(v11); /*0x7b5ec8*/
  *this = v12; /*0x7b5ed0*/
  *v12 = 0; /*0x7b5ed4*/
  if ( v10 ) /*0x7b5ed7*/
    strcpy((char *)*this, v10); /*0x7b5eef*/
  if ( v9 ) /*0x7b5efa*/
    __3_YAXPAX_Z(v9); /*0x7b5efd*/
  return 1; /*0x7b5e3b*/
}
}
