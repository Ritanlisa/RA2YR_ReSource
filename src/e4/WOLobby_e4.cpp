// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E3850
namespace gamemd {
int INIClass::WOLobby_Play()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WOLobby_Play(INIClass *this)
{
  const char *v1; // edx
  int v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  _DWORD v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]

  v2 = (int)*(&g_MatrixTransformState + 2263); /*0x5e3857*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], this->__pad_0); /*0x5e3892*/
    return (*(int (__stdcall **)(int, char *, const char *))(*(_DWORD *)v2 + 56))(v2, v7, v1); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], &HouseClass_Player.__pad_5568[8396]); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, v1); /*0x5e3915*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[17731] = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]); /*0x5e392d*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[17735] = WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]); /*0x5e3937*/
    result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e393c*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, this) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage( /*0x5e39a0*/
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v8,
          455,
          1,
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40,
          0,
          0);
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/
}
}
} // namespace gamemd

// 0x78F7F0
int WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __stdcall sub_78F7F0(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
// {
//   int result; // eax
//   int v5; // ecx
//   HWND DlgItem; // eax
//   HWND v7; // eax
//   HWND v8; // eax
//   HWND v9; // ebx
//   HWND v10; // ebx
//   _DWORD *v11; // eax
//   _DWORD *v12; // eax
//   HWND v13; // esi
//   int v14; // esi
//   wchar_t *v15; // eax
//   HWND v16; // ebx
//   int v17; // esi
//   unsigned int v18; // edi
//   HWND v19; // eax
//   HWND v20; // esi
//   const wchar_t **v21; // eax
//   wchar_t *v22; // eax
//   wchar_t **OwnerName; // eax
//   wchar_t *v24; // eax
//   void *v25; // esi
//   _DWORD *v26; // ecx
//   wchar_t *v27; // eax
//   void *v28; // esi
//   LRESULT v29; // eax
//   wchar_t *v30; // eax
//   wchar_t *v31; // eax
//   int v32; // ebx
//   size_t v33; // esi
//   wchar_t *v34; // edi
//   wchar_t *v35; // eax
//   wchar_t *v36; // eax
//   wchar_t *v37; // ebp
//   const wchar_t *v38; // esi
//   struct tagRECT *p_Rect; // edi
//   wchar_t v40; // ax
//   wchar_t *v41; // eax
//   wchar_t *v42; // eax
//   size_t v43; // esi
//   wchar_t *v44; // edi
//   wcha... [56159 chars total]
// end truncated pseudocode
}

// 0x791B10
int WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __stdcall WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
// {
//   int result; // eax
//   HWND v5; // ebx
//   int v6; // ebp
//   unsigned int v7; // edi
//   HWND v8; // eax
//   HWND v9; // edi
//   wchar_t **v10; // eax
//   CampaignScore *v11; // eax
//   wchar_t **SkirmishMenuOwnerName; // eax
//   CampaignScore *v13; // eax
//   ObjectClass *v14; // esi
//   HWND v15; // esi
//   int v16; // esi
//   wchar_t *v17; // eax
//   CampaignScore *v19; // eax
//   wchar_t *eax40; // eax
//   int v20; // ebx
//   DropListClass *v21; // esi
//   AbstractClass *v23; // edi
//   wchar_t *StringCSF; // eax
//   CampaignScore *v25; // eax
//   wchar_t *ebp44; // ebp
//   const wchar_t *v26; // esi
//   wchar_t *v27; // edi
//   wchar_t v28; // ax
//   wchar_t *v29; // eax
//   CampaignScore *v31; // eax
//   DropListClass *esi66; // esi
//   wchar_t *v32; // edi
//   wchar_t *v33; // eax
//   wchar_t *v34; // eax
//   CampaignScore *v36; // eax
//   wchar_t *edi67; // edi
//   size_t v37; // eax
//   size_t v38; // eax
//   const wchar_t *i; // esi
//   char *v40; // eax
//   wchar_t *... [28672 chars total]
// end truncated pseudocode
}

// 0x603F60
namespace gamemd {
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM a3)
{
{
    LPARAM lParam[2];
    void *v7;
    unknown_libname_74(&v7);
    lParam[0] = a3;
    lParam[1] = -1;
    SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v7);
    DeleteAndZero::Alt(&v7);
    return a1;
}
}
} // namespace gamemd

// 0x72BAC0
namespace gamemd {
char sub_72BAC0()
{
{
    char result;
    result = DataGlobal_B0FD51;
    if ( !DataGlobal_B0FD51 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FB2C = LoadFileSHP(DataGlobal_844DBC, (bool *)&DataGlobal_B0FD50);
    result = LoadPaletteSimple(DataGlobal_844DC0, &DataGlobal_B0FD54, &DataGlobal_B0FD58);
    DataGlobal_B0FD51 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72BB10
namespace gamemd {
void sub_72BB10()
{
{
    void *v0;
    if ( DataGlobal_B0FD51 )
  {
    if ( DataGlobal_B0FD50 )
    {
    v0 = DataGlobal_B0FB2C;
    if ( DataGlobal_B0FB2C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB2C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD50 = 0;
    }
    DataGlobal_B0FB2C = 0;
    if ( DataGlobal_B0FD54 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD54);
    DataGlobal_B0FD54 = 0;
    }
    if ( DataGlobal_B0FD58 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD58)(DataGlobal_B0FD58, 1);
    DataGlobal_B0FD58 = 0;
    }
  }
    DataGlobal_B0FD51 = 0;
}
}
} // namespace gamemd

// 0x781090
namespace gamemd {
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
{
    wchar_t *StringCSF;
    LRESULT v5;
    char v7[108];
    if ( wParam == -1 )
  {
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3050);
  }
    else
  {
    v5 = SendMessageA(a2, 0x199u, wParam, 0);
    if ( v5 >= 0 && v5 < (int)g_WOL_State )
    {
    qmemcpy(v7, &g_WOL_ConnectionFlags[3 * v5], sizeof(v7));
    FormatWOLPlayerInfo(a1, v7);
    return (CampaignScore *)a1;
    }
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3055);
  }
    WideString::Assign(a1, (CampaignScore *)StringCSF);
    return (CampaignScore *)a1;
}
}
} // namespace gamemd
