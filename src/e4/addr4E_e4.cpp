// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4E0A00_e4.hpp"
#include "e4/classes/E4Recv_4E2A50_e4.hpp"
#include "e4/classes/E4Recv_4E6070_e4.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"

// 0x4E0A00
namespace gamemd {
unsigned int * E4Recv_4E0A00::sub_4E0A00(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4E0A00(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax

  *(this + 1) = 0; /*0x4e0a0a*/
  *(this + 2) = a2; /*0x4e0a11*/
  *((_BYTE *)this + 12) = 1; /*0x4e0a14*/
  *((_BYTE *)this + 13) = 0; /*0x4e0a18*/
  *this = &vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0a1c*/
  if ( a2 ) /*0x4e0a22*/
  {
    if ( a3 ) /*0x4e0a2a*/
    {
      *a3 = a2; /*0x4e0a2f*/
      if ( a2 - 1 >= 0 ) /*0x4e0a36*/
      {
        v4 = a3 + 2; /*0x4e0a38*/
        v5 = a2; /*0x4e0a3b*/
        do /*0x4e0a46*/
        {
          *v4 = 0; /*0x4e0a3c*/
          v4 += 2; /*0x4e0a42*/
          --v5; /*0x4e0a45*/
        }
        while ( v5 ); /*0x4e0a46*/
      }
      *(this + 1) = a3 + 1; /*0x4e0a48*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2 + 4); /*0x4e0a55*/
      if ( v6 ) /*0x4e0a5f*/
      {
        *v6 = a2; /*0x4e0a64*/
        v7 = v6 + 1; /*0x4e0a68*/
        if ( a2 - 1 >= 0 ) /*0x4e0a6b*/
        {
          v8 = v6 + 2; /*0x4e0a6d*/
          v9 = a2; /*0x4e0a70*/
          do /*0x4e0a7b*/
          {
            *v8 = 0; /*0x4e0a71*/
            v8 += 2; /*0x4e0a77*/
            --v9; /*0x4e0a7a*/
          }
          while ( v9 ); /*0x4e0a7b*/
        }
        v10 = v7; /*0x4e0a7d*/
      }
      else
      {
        v10 = 0; /*0x4e0a81*/
      }
      *(this + 1) = v10; /*0x4e0a83*/
      *((_BYTE *)this + 13) = 1; /*0x4e0a86*/
    }
  }
  *this = &vt_DynamicVectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass; /*0x4e0a8a*/
  *(this + 5) = 10; /*0x4e0a90*/
  *(this + 4) = 0; /*0x4e0a97*/
  return this; /*0x4e0aa0*/
}
}
} // namespace gamemd

// 0x4E0D30
namespace gamemd {
unsigned int * FoggedObjectClass_42::loc_4E0D30(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall FoggedObjectClass_42_::loc_4E0D30(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4e0d33*/
  *this = &vt_VectorClass_FootClass; /*0x4e0d36*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4e0d40*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0d48*/
    *(this + 1) = 0; /*0x4e0d50*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4e0d5b*/
  *(this + 2) = 0; /*0x4e0d61*/
  if ( (a2 & 1) != 0 ) /*0x4e0d68*/
    __3_YAXPAX_Z(this); /*0x4e0d6b*/
  return this; /*0x4e0d75*/
}
}
} // namespace gamemd

// 0x4E1FE0
namespace gamemd {
int GameOptionsDlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall GameOptionsDlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // ebp
  HWND v16; // eax
  HWND v17; // ebp
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // esi
  BOOL IsSoundEnabled; // eax
  HWND v23; // eax
  HWND v24; // esi
  unsigned int v25; // edi
  wchar_t *v26; // edi
  HWND v27; // eax
  HWND v28; // esi
  wchar_t *String; // eax
  unsigned int v30; // ebx
  _DWORD *WindowLongA; // eax
  HWND hWnda; // [esp+20h] [ebp+10h]

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x4e1ffa*/
  if ( !result ) /*0x4e2001*/
  {
    if ( a2 == 273 ) /*0x4e200d*/
    {
      v30 = HIWORD(a3); /*0x4e233f*/
      WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x4e2342*/
      switch ( (unsigned __int16)a3 ) /*0x4e2354*/
      {
        case 0x52Cu: /*0x4e2354*/
          if ( !v30 && MEMORY[0xA8E9A0] == 1 ) /*0x4e23a1*/
          {
            MEMORY[0xA8EDA0] = 4; /*0x4e23a3*/
            *WindowLongA = 1; /*0x4e23ad*/
          }
          break;
        case 0x52Du: /*0x4e2354*/
          if ( !v30 && MEMORY[0xA8E9A0] == 1 ) /*0x4e237b*/
          {
            MEMORY[0xA8EDA0] = 6; /*0x4e237e*/
            *WindowLongA = 1; /*0x4e2389*/
            return 0; /*0x4e2393*/
          }
          break;
        case 0x686u: /*0x4e2354*/
          *WindowLongA = 1; /*0x4e2363*/
          return 0; /*0x4e236d*/
      }
      return 0; /*0x4e235f*/
    }
    if ( a2 != 276 ) /*0x4e2016*/
    {
      if ( a2 == 1175 ) /*0x4e2022*/
      {
        DlgItem = GetDlgItem(hDlg, 1321); /*0x4e2034*/
        hWnda = DlgItem; /*0x4e2048*/
        if ( MEMORY[0xA8B238][0] || MEMORY[0xA8EDDC] ) /*0x4e2058*/
        {
          if ( DlgItem ) /*0x4e207d*/
          {
            SendMessageA(DlgItem, 0x4ACu, 0, 0); /*0x4e2089*/
            SendMessageA(hWnda, 0x406u, 1u, 393216); /*0x4e209c*/
            SendMessageA(hWnda, 0x405u, 1u, 6 - *(_DWORD *)MEMORY[0xA8EB60]); /*0x4e20b8*/
          }
        }
        else
        {
          ShowWindow(DlgItem, 0); /*0x4e205d*/
          v6 = GetDlgItem(hDlg, 1812); /*0x4e2065*/
          ShowWindow(v6, 0); /*0x4e206a*/
          v7 = GetDlgItem(hDlg, 1649); /*0x4e2072*/
          ShowWindow(v7, 0); /*0x4e2077*/
        }
        if ( MEMORY[0xA8B538] ) /*0x4e20c1*/
        {
          v8 = GetDlgItem(hDlg, 1321); /*0x4e20c9*/
          ShowWindow(v8, 0); /*0x4e20ce*/
          v9 = GetDlgItem(hDlg, 1812); /*0x4e20d6*/
          ShowWindow(v9, 0); /*0x4e20db*/
          v10 = GetDlgItem(hDlg, 1649); /*0x4e20e3*/
          ShowWindow(v10, 0); /*0x4e20e8*/
          if ( MEMORY[0xA8B538] ) /*0x4e20f1*/
          {
            v11 = GetDlgItem(hDlg, 1321); /*0x4e20f9*/
            ShowWindow(v11, 0); /*0x4e20fe*/
            v12 = GetDlgItem(hDlg, 1812); /*0x4e2106*/
            ShowWindow(v12, 0); /*0x4e210b*/
            v13 = GetDlgItem(hDlg, 1649); /*0x4e2113*/
            ShowWindow(v13, 0); /*0x4e2118*/
          }
        }
        v14 = GetDlgItem(hDlg, 1322); /*0x4e2120*/
        v15 = v14; /*0x4e2122*/
        if ( v14 ) /*0x4e2126*/
        {
          SendMessageA(v14, 0x4ACu, 0, 0); /*0x4e2132*/
          SendMessageA(v15, 0x406u, 1u, 393216); /*0x4e2141*/
          SendMessageA(v15, 0x405u, 1u, 6 - MEMORY[0xA8EB70]); /*0x4e2159*/
        }
        v16 = GetDlgItem(hDlg, 1323); /*0x4e2161*/
        v17 = v16; /*0x4e2163*/
        if ( v16 ) /*0x4e2167*/
        {
          SendMessageA(v16, 0x4ACu, 0, 0); /*0x4e2173*/
          SendMessageA(v17, 0x406u, 1u, 0x20000); /*0x4e2182*/
          SendMessageA(v17, 0x405u, 1u, MEMORY[0xA8EB78]); /*0x4e2193*/
        }
        v18 = GetDlgItem(hDlg, 1537); /*0x4e219b*/
        if ( v18 ) /*0x4e219f*/
          SendMessageA(v18, 0xF1u, MEMORY[0xA8EB7E] != 0, 0); /*0x4e21b7*/
        v19 = GetDlgItem(hDlg, 1540); /*0x4e21bf*/
        if ( v19 ) /*0x4e21c3*/
          SendMessageA(v19, 0xF1u, MEMORY[0xA8EB7F] != 0, 0); /*0x4e21db*/
        v20 = GetDlgItem(hDlg, 1538); /*0x4e21e3*/
        if ( v20 ) /*0x4e21e7*/
          SendMessageA(v20, 0xF1u, MEMORY[0xA8EB80] != 0, 0); /*0x4e21ff*/
        if ( MEMORY[0xA8E9A0] == 1 ) /*0x4e2208*/
        {
          v21 = GetDlgItem(hDlg, 1325); /*0x4e2212*/
          if ( v21 ) /*0x4e2216*/
          {
            IsSoundEnabled = Audio::IsSoundEnabled(); /*0x4e221c*/
            EnableWindow(v21, IsSoundEnabled); /*0x4e2223*/
            return 0; /*0x4e222f*/
          }
        }
        else
        {
          v23 = GetDlgItem(hDlg, 1295); /*0x4e2238*/
          v24 = v23; /*0x4e223a*/
          if ( v23 ) /*0x4e223e*/
          {
            SendMessageA(v23, 0x4ACu, 0, 0); /*0x4e224e*/
            SendMessageA(v24, 0x406u, 1u, 0x20000); /*0x4e225d*/
            SendMessageA(v24, 0x405u, 1u, MEMORY[0xA8EB64]); /*0x4e226d*/
            return 0; /*0x4e2275*/
          }
        }
      }
      return 0; /*0x4e2216*/
    }
    if ( (_WORD)a3 == 5 ) /*0x4e227c*/
    {
      v25 = HIWORD(a3); /*0x4e228e*/
      if ( hWnd == GetDlgItem(hDlg, 1321) ) /*0x4e2295*/
      {
        v26 = (&MEMORY[0x822730])[v25]; /*0x4e2297*/
        v27 = GetDlgItem(hDlg, 1649); /*0x4e22a3*/
        goto LABEL_38; /*0x4e22a3*/
      }
      if ( hWnd == GetDlgItem(hDlg, 1322) ) /*0x4e22af*/
      {
        v26 = (wchar_t *)off_82274C[v25]; /*0x4e22b1*/
        v27 = GetDlgItem(hDlg, 1650); /*0x4e22bd*/
        goto LABEL_38; /*0x4e22bd*/
      }
      if ( hWnd == GetDlgItem(hDlg, 1323) ) /*0x4e22c9*/
      {
        v26 = (wchar_t *)off_822768[v25]; /*0x4e22cb*/
        v27 = GetDlgItem(hDlg, 1651); /*0x4e22d7*/
        goto LABEL_38; /*0x4e22d7*/
      }
      if ( !MEMORY[0xA8E9A0] && hWnd == GetDlgItem(hDlg, 1295) ) /*0x4e22f0*/
      {
        v26 = (&off_822774)[v25]; /*0x4e22f6*/
        v27 = GetDlgItem(hDlg, 1648); /*0x4e2303*/
LABEL_38:
        v28 = v27; /*0x4e2305*/
        if ( v27 ) /*0x4e2309*/
        {
          String = GetStringCSF(v26, 0, aDRa2mdpostGame, 434); /*0x4e231d*/
          SendMessageA(v28, 0x4B2u, 0, (LPARAM)String); /*0x4e232b*/
          return 0; /*0x4e2337*/
        }
      }
    }
    return 0; /*0x4e23b3*/
  }
  return result; /*0x4e2229*/
}
}
} // namespace gamemd

// 0x4E2A50
namespace gamemd {
int E4Recv_4E2A50::sub_4E2A50(ControlClass * aP1, int aP2, int aP3, ControlClass * aP4, int aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4E2A50(int this, ControlClass *aP1, int aP2, int aP3, ControlClass *aP4, int aP5)
{
  int v7; // ecx
  int v8; // eax

  ControlClass::Construct( /*0x4e2a74*/
    (_DWORD *)this,
    aP1,
    (ControlClass *)aP2,
    (ControlClass *)aP3,
    aP4,
    (ControlClass *)aP5,
    7,
    (ControlClass *)1);
  v7 = this->M48; /*0x4e2a79*/
  *(_DWORD *)this = &vt_GaugeClass; /*0x4e2a83*/
  if ( v7 != 255 ) /*0x4e2a89*/
  {
    this->M48 = 255; /*0x4e2a8d*/
    VectorClass_ptr_ConvertClass::MarkDirty((_BYTE *)this); /*0x4e2a90*/
  }
  v8 = 0; /*0x4e2a99*/
  if ( *(int *)(this + 48) < 0 ) /*0x4e2a9d*/
    v8 = this->M48; /*0x4e2a9f*/
  if ( v8 != this->M52 ) /*0x4e2aa4*/
  {
    this->M52 = v8; /*0x4e2aa6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 72))(this); /*0x4e2aad*/
  }
  *(_BYTE *)(this + 45) = 1; /*0x4e2ab2*/
  *(_BYTE *)(this + 46) = (int)aP4 > aP5; /*0x4e2ab9*/
  *(_BYTE *)(this + 44) = 1; /*0x4e2abc*/
  this->M56 = 0; /*0x4e2ac0*/
  this->M60 = 0; /*0x4e2ac7*/
  this->M64 = 0; /*0x4e2ace*/
  *(_DWORD *)this = &vt_TriColorGaugeClass; /*0x4e2ad5*/
  return this; /*0x4e2add*/
}
}
} // namespace gamemd

// 0x4E34A0
namespace gamemd {
HWND * UpdateLobbyGraphicsWOL(HWND hDlg, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__fastcall UpdateLobbyGraphicsWOL(HWND hDlg, int a2, int a3)
{
  int v3; // edx
  HWND DlgItem; // esi
  HWND *result; // eax

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1877; /*0x4e34b0*/
        break;
      case 2:
        v3 = 1878; /*0x4e34bc*/
        break;
      case 3:
        v3 = 1879; /*0x4e34c8*/
        break;
      case 4:
        v3 = 1880; /*0x4e34d4*/
        break;
      case 5:
        v3 = 1881; /*0x4e34e0*/
        break;
      case 6:
        v3 = 1882; /*0x4e34ec*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1883;
        break;
    }
  }
  else
  {
    v3 = 1876; /*0x4e34a4*/
  }
  DlgItem = GetDlgItem(hDlg, v3); /*0x4e350f*/
  result = 0; /*0x4e3511*/
  if ( a3 ) /*0x4e3519*/
  {
    if ( a3 == 1 ) /*0x4e3527*/
    {
      result = (HWND *)HashTable::Find( /*0x4e3532*/
                         &g_MatrixTransformState + 5774,
                         *(const char **)&stru_830620.__pad_579C[60768],
                         0);
    }
    else if ( a3 == 2 ) /*0x4e3537*/
    {
      result = (HWND *)HashTable::Find( /*0x4e3547*/
                         &g_MatrixTransformState + 5774,
                         *(const char **)&stru_830620.__pad_579C[60772],
                         0);
    }
  }
  else
  {
    result = (HWND *)HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60764], 0); /*0x4e3522*/
  }
  if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x4e354f*/
    return CacheDialogInvalidate(DlgItem, (HWND)result); /*0x4e3555*/
  return result; /*0x4e355b*/
}
}
} // namespace gamemd

// 0x4E3690
namespace gamemd {
HWND * sub_4E3690(HWND hDlg, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__fastcall sub_4E3690(HWND hDlg, int a2)
{
  int v4; // eax
  HWND DlgItem; // ebp
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  HWND Default; // eax

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v4 = 1755; /*0x4e36a8*/
        break;
      case 2:
        v4 = 1756; /*0x4e36b4*/
        break;
      case 3:
        v4 = 1757; /*0x4e36c0*/
        break;
      case 4:
        v4 = 1758; /*0x4e36cc*/
        break;
      case 5:
        v4 = 1759; /*0x4e36d8*/
        break;
      case 6:
        v4 = 1760; /*0x4e36e4*/
        break;
      default:
        v4 = a2 != 7 ? -1 : 1761;
        break;
    }
  }
  else
  {
    v4 = 1754; /*0x4e369c*/
  }
  DlgItem = GetDlgItem(hDlg, v4); /*0x4e3708*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 = 1296; /*0x4e3718*/
        break;
      case 2:
        v6 = 1299; /*0x4e3724*/
        break;
      case 3:
        v6 = 1310; /*0x4e3730*/
        break;
      case 4:
        v6 = 1300; /*0x4e373c*/
        break;
      case 5:
        v6 = 1311; /*0x4e3748*/
        break;
      case 6:
        v6 = 1312; /*0x4e3754*/
        break;
      default:
        v6 = a2 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v6 = 1697; /*0x4e370c*/
  }
  v7 = SendDlgItemMessageA(hDlg, v6, 0x147u, 0, 0); /*0x4e377f*/
  v8 = SendDlgItemMessageA(hDlg, v6, 0x150u, v7, 0); /*0x4e378b*/
  if ( v8 < -3 || v8 > 9 ) /*0x4e3795*/
  {
    if ( MEMORY[0xA8B23C] ) /*0x4e379f*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x4e37a3*/
    else
      v8 = -2; /*0x4e37a8*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v8); /*0x4e37af*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e37b8*/
}
}
} // namespace gamemd

// 0x4E3CE0
namespace gamemd {
HWND * SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__fastcall SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2)
{
  int v3; // esi
  HWND DlgItem; // ebx
  LRESULT v5; // ebp
  WPARAM v6; // edi
  HWND v7; // ebp
  int v8; // esi
  int v9; // eax
  HWND v10; // edi
  int v11; // esi
  LRESULT v12; // eax
  LRESULT v13; // eax
  HWND Default; // eax
  bool v16; // [esp+7h] [ebp-9h]
  int v18; // [esp+Ch] [ebp-4h]

  v18 = MEMORY[0xA8B3BC]; /*0x4e3ce9*/
  if ( MEMORY[0xA8B3C0] == -2 ) /*0x4e3cfb*/
  {
    v18 = -2; /*0x4e3cfd*/
  }
  else if ( MEMORY[0xA8B3C0] == -3 ) /*0x4e3d06*/
  {
    v18 = -3; /*0x4e3d08*/
  }
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1296; /*0x4e3d1f*/
        break;
      case 2:
        v3 = 1299; /*0x4e3d2b*/
        break;
      case 3:
        v3 = 1310; /*0x4e3d37*/
        break;
      case 4:
        v3 = 1300; /*0x4e3d43*/
        break;
      case 5:
        v3 = 1311; /*0x4e3d4f*/
        break;
      case 6:
        v3 = 1312; /*0x4e3d5b*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v3 = 1697; /*0x4e3d13*/
  }
  DlgItem = GetDlgItem(hDlg, v3); /*0x4e3d7f*/
  v16 = !ShowWindow(DlgItem, 0); /*0x4e3d97*/
  v5 = SendDlgItemMessageA(hDlg, v3, 0x146u, 0, 0); /*0x4e3da2*/
  v6 = 0; /*0x4e3da4*/
  if ( v5 <= 0 ) /*0x4e3da8*/
  {
LABEL_23:
    v7 = hDlg; /*0x4e3dc9*/
  }
  else
  {
    while ( SendDlgItemMessageA(hDlg, v3, 0x150u, v6, 0) != v18 ) /*0x4e3dc2*/
    {
      if ( (int)++v6 >= v5 ) /*0x4e3dc7*/
        goto LABEL_23; /*0x4e3dc7*/
    }
    v7 = hDlg; /*0x4e3df2*/
    SendDlgItemMessageA(hDlg, v3, 0x14Eu, v6, 0); /*0x4e3e00*/
  }
  if ( !v16 ) /*0x4e3dd3*/
    ShowWindow(DlgItem, 5); /*0x4e3dd8*/
  switch ( v3 ) /*0x4e3de4*/
  {
    case 1697: /*0x4e3de4*/
      v8 = 0; /*0x4e3de6*/
      v9 = 1754; /*0x4e3de8*/
      break;
    case 1296: /*0x4e3de4*/
      v8 = 1; /*0x4e3e10*/
      v9 = 1755; /*0x4e3e15*/
      break;
    case 1299: /*0x4e3de4*/
      v8 = 2; /*0x4e3e24*/
      v9 = 1756; /*0x4e3e29*/
      break;
    case 1310: /*0x4e3de4*/
      v8 = 3; /*0x4e3e38*/
      v9 = 1757; /*0x4e3e3d*/
      break;
    case 1300: /*0x4e3de4*/
      v8 = 4; /*0x4e3e4c*/
      v9 = 1758; /*0x4e3e51*/
      break;
    case 1311: /*0x4e3de4*/
      v8 = 5; /*0x4e3e60*/
      v9 = 1759; /*0x4e3e65*/
      break;
    case 1312: /*0x4e3de4*/
      v8 = 6; /*0x4e3e74*/
      v9 = 1760; /*0x4e3e79*/
      break;
    case 1313: /*0x4e3de4*/
      v8 = 7; /*0x4e3e88*/
      v9 = 1761; /*0x4e3e8d*/
      break;
    default:
      v8 = -1; /*0x4e3e94*/
      v9 = -1; /*0x4e3e97*/
      break;
  }
  v10 = GetDlgItem(v7, v9); /*0x4e3ea4*/
  if ( v8 )
  {
    switch ( v8 )
    {
      case 1:
        v11 = 1296; /*0x4e3eb4*/
        break;
      case 2:
        v11 = 1299; /*0x4e3ec0*/
        break;
      case 3:
        v11 = 1310; /*0x4e3ecc*/
        break;
      case 4:
        v11 = 1300; /*0x4e3ed8*/
        break;
      case 5:
        v11 = 1311; /*0x4e3ee4*/
        break;
      case 6:
        v11 = 1312; /*0x4e3ef0*/
        break;
      default:
        v11 = v8 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v11 = 1697; /*0x4e3ea8*/
  }
  v12 = SendDlgItemMessageA(v7, v11, 0x147u, 0, 0); /*0x4e3f1b*/
  v13 = SendDlgItemMessageA(v7, v11, 0x150u, v12, 0); /*0x4e3f27*/
  if ( v13 < -3 || v13 > 9 ) /*0x4e3f34*/
  {
    if ( MEMORY[0xA8B23C] ) /*0x4e3f3e*/
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x4e3f42*/
    else
      v13 = -2; /*0x4e3f47*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v13); /*0x4e3f4e*/
  return CacheDialogInvalidate(v10, Default); /*0x4e3f5c*/
}
}
} // namespace gamemd

// 0x4E3F70
namespace gamemd {
HWND * SetupLobbyCountryCombo(SkirmishDialog * aP0, int nIDDlgItem, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__fastcall SetupLobbyCountryCombo(SkirmishDialog *aP0, int nIDDlgItem, int a3)
{
  LRESULT v5; // ebx
  WPARAM v6; // edi
  int v7; // esi
  int v8; // eax
  HWND DlgItem; // edi
  int v10; // esi
  LRESULT v11; // eax
  LRESULT v12; // eax
  HWND Default; // eax
  bool v15; // [esp+13h] [ebp-5h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e3f86*/
  v15 = !ShowWindow(hWnd, 0); /*0x4e3f9d*/
  v5 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x146u, 0, 0); /*0x4e3fa8*/
  v6 = 0; /*0x4e3faa*/
  if ( v5 > 0 ) /*0x4e3fae*/
  {
    while ( SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, v6, 0) != a3 ) /*0x4e3fc4*/
    {
      if ( (int)++v6 >= v5 ) /*0x4e3fc9*/
        goto LABEL_6; /*0x4e3fc9*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v6, 0); /*0x4e3fd7*/
  }
LABEL_6:
  if ( !v15 ) /*0x4e3fe3*/
    ShowWindow(hWnd, 5); /*0x4e3fec*/
  switch ( nIDDlgItem ) /*0x4e3ff8*/
  {
    case 1697: /*0x4e3ff8*/
      v7 = 0; /*0x4e3ffa*/
      v8 = 1754; /*0x4e3ffc*/
      break;
    case 1296: /*0x4e3ff8*/
      v7 = 1; /*0x4e400e*/
      v8 = 1755; /*0x4e4013*/
      break;
    case 1299: /*0x4e3ff8*/
      v7 = 2; /*0x4e4022*/
      v8 = 1756; /*0x4e4027*/
      break;
    case 1310: /*0x4e3ff8*/
      v7 = 3; /*0x4e4036*/
      v8 = 1757; /*0x4e403b*/
      break;
    case 1300: /*0x4e3ff8*/
      v7 = 4; /*0x4e404a*/
      v8 = 1758; /*0x4e404f*/
      break;
    case 1311: /*0x4e3ff8*/
      v7 = 5; /*0x4e405e*/
      v8 = 1759; /*0x4e4063*/
      break;
    case 1312: /*0x4e3ff8*/
      v7 = 6; /*0x4e4072*/
      v8 = 1760; /*0x4e4077*/
      break;
    case 1313: /*0x4e3ff8*/
      v7 = 7; /*0x4e4086*/
      v8 = 1761; /*0x4e408b*/
      break;
    default:
      v7 = -1; /*0x4e4092*/
      v8 = -1; /*0x4e4095*/
      break;
  }
  DlgItem = GetDlgItem((HWND)aP0, v8); /*0x4e40a2*/
  if ( v7 )
  {
    switch ( v7 )
    {
      case 1:
        v10 = 1296; /*0x4e40b2*/
        break;
      case 2:
        v10 = 1299; /*0x4e40be*/
        break;
      case 3:
        v10 = 1310; /*0x4e40ca*/
        break;
      case 4:
        v10 = 1300; /*0x4e40d6*/
        break;
      case 5:
        v10 = 1311; /*0x4e40e2*/
        break;
      case 6:
        v10 = 1312; /*0x4e40ee*/
        break;
      default:
        v10 = v7 != 7 ? -1 : 1313;
        break;
    }
  }
  else
  {
    v10 = 1697; /*0x4e40a6*/
  }
  v11 = SendDlgItemMessageA((HWND)aP0, v10, 0x147u, 0, 0); /*0x4e4119*/
  v12 = SendDlgItemMessageA((HWND)aP0, v10, 0x150u, v11, 0); /*0x4e4125*/
  if ( v12 < -3 || v12 > 9 ) /*0x4e412f*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x4e4139*/
      v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]); /*0x4e413d*/
    else
      v12 = -2; /*0x4e4142*/
  }
  Default = (HWND)BuildingType::FindDefault((void *)v12); /*0x4e4149*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e4157*/
}
}
} // namespace gamemd

// 0x4E4580
namespace gamemd {
bool IsAvailableColorhWnd(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall IsAvailableColorhWnd(int a1)
{
  return MEMORY[0x8B4040][3 * a1] != -1; /*0x4e4592*/
}
}
} // namespace gamemd

// 0x4E45A0
namespace gamemd {
bool FillComboBoxFactions(HWND hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall FillComboBoxFactions(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  LRESULT v5; // ebx
  int *v6; // ebx
  LRESULT v7; // ebp
  bool result; // al
  bool v9; // [esp+12h] [ebp-Eh]
  bool v10; // [esp+13h] [ebp-Dh]
  int v11; // [esp+14h] [ebp-Ch]
  LPARAM lParam; // [esp+18h] [ebp-8h]
  WPARAM wParam; // [esp+1Ch] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e45b1*/
  v10 = !ShowWindow(DlgItem, 0); /*0x4e45ce*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e45d3*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e45df*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e45eb*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 522); /*0x4e45fe*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e460e*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e4619*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e4624*/
  switch ( nIDDlgItem )
  {
    case 1698:
      v11 = 0; /*0x4e462e*/
      break;
    case 1314:
      v11 = 1; /*0x4e4643*/
      break;
    case 1315:
      v11 = 2; /*0x4e4655*/
      break;
    case 1316:
      v11 = 3; /*0x4e4667*/
      break;
    case 1317:
      v11 = 4; /*0x4e4679*/
      break;
    case 1318:
      v11 = 5; /*0x4e468b*/
      break;
    case 1319:
      v11 = 6; /*0x4e469d*/
      break;
    default:
      v11 = nIDDlgItem != 1320 ? -1 : 7;
      break;
  }
  v6 = MEMORY[0x8B4040]; /*0x4e46bd*/
  wParam = 0; /*0x4e46c2*/
  lParam = 0; /*0x4e46c6*/
  do /*0x4e472c*/
  {
    v9 = *v6 == v11; /*0x4e46d7*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e46e0*/
    {
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)aAb); /*0x4e46f1*/
      SendMessageA(DlgItem, 0x498u, v7, *(v6 - 1)); /*0x4e46fe*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e470c*/
      if ( v9 ) /*0x4e4714*/
        wParam = v7; /*0x4e4716*/
    }
    v6 += 3; /*0x4e471e*/
    ++lParam; /*0x4e4728*/
  }
  while ( (int)v6 < (int)&MEMORY[0x8B40A0] ); /*0x4e472c*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e473b*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e4747*/
  result = v10; /*0x4e4749*/
  if ( !v10 ) /*0x4e474f*/
    return ShowWindow(DlgItem, 5); /*0x4e4754*/
  return result; /*0x4e475a*/
}
}
} // namespace gamemd

// 0x4E48E0
namespace gamemd {
int SkirmishDialog_MapPlayerToControl(HWND a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SkirmishDialog_MapPlayerToControl(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = MEMORY[0xA8B3B4]; /*0x4e48e7*/
  if ( MEMORY[0xA8B3B8] == -2 ) /*0x4e48f0*/
    v2 = -2; /*0x4e48f2*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1314; /*0x4e4907*/
        break;
      case 2:
        v3 = 1315; /*0x4e4913*/
        break;
      case 3:
        v3 = 1316; /*0x4e491f*/
        break;
      case 4:
        v3 = 1317; /*0x4e492b*/
        break;
      case 5:
        v3 = 1318; /*0x4e4937*/
        break;
      case 6:
        v3 = 1319; /*0x4e4943*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1320;
        break;
    }
  }
  else
  {
    v3 = 1698; /*0x4e48fb*/
  }
  if ( MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4 ) /*0x4e496b*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e496d*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e4982*/
      v2 = 8; /*0x4e4984*/
  }
  return SetupSkirmishSpawnLocations(a1, v3, v2); /*0x4e4991*/
}
}
} // namespace gamemd

// 0x4E49A0
namespace gamemd {
char SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int *v8; // ecx
  WPARAM v9; // edi
  LRESULT v10; // ebp
  int v11; // esi
  int i; // esi
  int v13; // edx
  int v14; // eax
  char result; // al
  bool v16; // [esp+Bh] [ebp-Dh]
  LRESULT v18; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  v4 = hDlg; /*0x4e49a7*/
  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x4e49b8*/
  v16 = !ShowWindow(hWnd, 0); /*0x4e49c4*/
  switch ( nIDDlgItem ) /*0x4e49cf*/
  {
    case 1698: /*0x4e49cf*/
      v5 = 0; /*0x4e49d1*/
      break;
    case 1314: /*0x4e49cf*/
      v5 = 1; /*0x4e49dd*/
      break;
    case 1315: /*0x4e49cf*/
      v5 = 2; /*0x4e49ec*/
      break;
    case 1316: /*0x4e49cf*/
      v5 = 3; /*0x4e49fb*/
      break;
    case 1317: /*0x4e49cf*/
      v5 = 4; /*0x4e4a0a*/
      break;
    case 1318: /*0x4e49cf*/
      v5 = 5; /*0x4e4a19*/
      break;
    case 1319: /*0x4e49cf*/
      v5 = 6; /*0x4e4a28*/
      break;
    default:
      v6 = -(nIDDlgItem != 1320); /*0x4e4a38*/
      LOBYTE(v6) = v6 & 0xF8; /*0x4e4a3a*/
      v5 = v6 + 7; /*0x4e4a3c*/
      break;
  }
  v7 = 0; /*0x4e4a41*/
  v8 = MEMORY[0x8B4040]; /*0x4e4a43*/
  while ( *v8 != v5 ) /*0x4e4a4a*/
  {
    v8 += 3; /*0x4e4a4c*/
    ++v7; /*0x4e4a4f*/
    if ( (int)v8 >= (int)&MEMORY[0x8B40AC] ) /*0x4e4a56*/
      goto LABEL_22; /*0x4e4a56*/
  }
  if ( v7 != -1 ) /*0x4e4a5d*/
    MEMORY[0x8B4040][3 * v7] = -1; /*0x4e4a62*/
LABEL_22:
  v9 = 0; /*0x4e4a6d*/
  v18 = SendDlgItemMessageA(v4, nIDDlgItem, 0x146u, 0, 0); /*0x4e4a84*/
  if ( v18 > 0 )
  {
    while ( 1 ) /*0x4e4a9a*/
    {
      v10 = SendDlgItemMessageA(v4, nIDDlgItem, 0x150u, v9, 0); /*0x4e4a9a*/
      if ( v10 == a3 ) /*0x4e4aa0*/
        break; /*0x4e4aa0*/
      v4 = hDlg; /*0x4e4aa6*/
      if ( (int)++v9 >= v18 ) /*0x4e4aad*/
        goto LABEL_44; /*0x4e4aad*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v9, 0); /*0x4e4ac2*/
    if ( v10 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1698:
          v11 = 0; /*0x4e4ad5*/
          break;
        case 1314:
          v11 = 1; /*0x4e4ae1*/
          break;
        case 1315:
          v11 = 2; /*0x4e4af0*/
          break;
        case 1316:
          v11 = 3; /*0x4e4aff*/
          break;
        case 1317:
          v11 = 4; /*0x4e4b0e*/
          break;
        case 1318:
          v11 = 5; /*0x4e4b1d*/
          break;
        case 1319:
          v11 = 6; /*0x4e4b2c*/
          break;
        default:
          v11 = nIDDlgItem != 1320 ? -1 : 7;
          break;
      }
      MEMORY[0x8B4040][3 * v10] = v11; /*0x4e4b47*/
    }
    v4 = hDlg; /*0x4e4b4e*/
  }
LABEL_44:
  if ( !v16 ) /*0x4e4b5a*/
    ShowWindow(hWnd, 5); /*0x4e4b63*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1314; /*0x4e4b7b*/
          break;
        case 2:
          v13 = 1315; /*0x4e4b87*/
          break;
        case 3:
          v13 = 1316; /*0x4e4b93*/
          break;
        case 4:
          v13 = 1317; /*0x4e4b9f*/
          break;
        case 5:
          v13 = 1318; /*0x4e4bab*/
          break;
        case 6:
          v13 = 1319; /*0x4e4bb7*/
          break;
        default:
          v13 = i != 7 ? -1 : 1320;
          break;
      }
    }
    else
    {
      v13 = 1698; /*0x4e4b6f*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e4bf7*/
      && ((v14 = *(&MEMORY[0xA8DA90] + i), v14 == MEMORY[0xAC11B4]) || *(_DWORD *)(v14 + 107) == -1) )
    {
      result = FillListBox(v4, v13); /*0x4e4c04*/
    }
    else
    {
      result = FillComboBoxFactions(v4, v13); /*0x4e4bfb*/
    }
  }
  return result; /*0x4e4c13*/
}
}
} // namespace gamemd

// 0x4E4C20
namespace gamemd {
char FillColorComboBoxUI(HWND hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall FillColorComboBoxUI(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // esi
  int i; // esi
  int v12; // edx
  int v13; // eax
  char result; // al

  switch ( nIDDlgItem ) /*0x4e4c2c*/
  {
    case 1698: /*0x4e4c2c*/
      v4 = 0; /*0x4e4c2e*/
      break;
    case 1314: /*0x4e4c2c*/
      v4 = 1; /*0x4e4c3a*/
      break;
    case 1315: /*0x4e4c2c*/
      v4 = 2; /*0x4e4c49*/
      break;
    case 1316: /*0x4e4c2c*/
      v4 = 3; /*0x4e4c58*/
      break;
    case 1317: /*0x4e4c2c*/
      v4 = 4; /*0x4e4c67*/
      break;
    case 1318: /*0x4e4c2c*/
      v4 = 5; /*0x4e4c76*/
      break;
    case 1319: /*0x4e4c2c*/
      v4 = 6; /*0x4e4c85*/
      break;
    default:
      v5 = -(nIDDlgItem != 1320); /*0x4e4c95*/
      LOBYTE(v5) = v5 & 0xF8; /*0x4e4c97*/
      v4 = v5 + 7; /*0x4e4c99*/
      break;
  }
  v6 = 0; /*0x4e4c9d*/
  v7 = MEMORY[0x8B4040]; /*0x4e4c9f*/
  while ( *v7 != v4 ) /*0x4e4ca6*/
  {
    v7 += 3; /*0x4e4ca8*/
    ++v6; /*0x4e4cab*/
    if ( (int)v7 >= (int)&MEMORY[0x8B40AC] ) /*0x4e4cb2*/
      goto LABEL_22; /*0x4e4cb2*/
  }
  if ( v6 != -1 ) /*0x4e4cb9*/
    MEMORY[0x8B4040][3 * v6] = -1; /*0x4e4cbe*/
LABEL_22:
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e4cc9*/
  v9 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v8, 0); /*0x4e4ce6*/
  switch ( nIDDlgItem )
  {
    case 1698:
      v10 = 0; /*0x4e4cf1*/
      break;
    case 1314:
      v10 = 1; /*0x4e4cfd*/
      break;
    case 1315:
      v10 = 2; /*0x4e4d0c*/
      break;
    case 1316:
      v10 = 3; /*0x4e4d1b*/
      break;
    case 1317:
      v10 = 4; /*0x4e4d2a*/
      break;
    case 1318:
      v10 = 5; /*0x4e4d39*/
      break;
    case 1319:
      v10 = 6; /*0x4e4d48*/
      break;
    default:
      v10 = nIDDlgItem != 1320 ? -1 : 7;
      break;
  }
  if ( v9 != -2 ) /*0x4e4d62*/
    MEMORY[0x8B4040][3 * v9] = v10; /*0x4e4d67*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v12 = 1314; /*0x4e4d80*/
          break;
        case 2:
          v12 = 1315; /*0x4e4d8c*/
          break;
        case 3:
          v12 = 1316; /*0x4e4d98*/
          break;
        case 4:
          v12 = 1317; /*0x4e4da4*/
          break;
        case 5:
          v12 = 1318; /*0x4e4db0*/
          break;
        case 6:
          v12 = 1319; /*0x4e4dbc*/
          break;
        default:
          v12 = i != 7 ? -1 : 1320;
          break;
      }
    }
    else
    {
      v12 = 1698; /*0x4e4d74*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e4dfc*/
      && ((v13 = *(&MEMORY[0xA8DA90] + i), v13 == MEMORY[0xAC11B4]) || *(_DWORD *)(v13 + 107) == -1) )
    {
      result = FillListBox(hDlg, v12); /*0x4e4e09*/
    }
    else
    {
      result = FillComboBoxFactions(hDlg, v12); /*0x4e4e00*/
    }
  }
  return result; /*0x4e4e18*/
}
}
} // namespace gamemd

// 0x4E50A0
namespace gamemd {
bool sub_4E50A0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_4E50A0(int a1)
{
  return MEMORY[0x8B3F38][3 * a1] != -1; /*0x4e50b2*/
}
}
} // namespace gamemd

// 0x4E50C0
namespace gamemd {
bool FillComboBoxAllianceSlots(HWND hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall FillComboBoxAllianceSlots(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  int *v6; // ebp
  LRESULT v7; // ebx
  bool result; // al
  bool v9; // [esp+12h] [ebp-Eh]
  bool v10; // [esp+13h] [ebp-Dh]
  int v11; // [esp+14h] [ebp-Ch]
  LPARAM lParam; // [esp+18h] [ebp-8h]
  WPARAM wParam; // [esp+1Ch] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e50d3*/
  v10 = !ShowWindow(DlgItem, 0); /*0x4e50ed*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e50f2*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e50fd*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5108*/
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 833); /*0x4e511b*/
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5128*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5133*/
  switch ( nIDDlgItem )
  {
    case 1699:
      v11 = 0; /*0x4e513d*/
      break;
    case 1700:
      v11 = 1; /*0x4e514e*/
      break;
    case 1701:
      v11 = 2; /*0x4e5160*/
      break;
    case 1702:
      v11 = 3; /*0x4e5172*/
      break;
    case 1703:
      v11 = 4; /*0x4e5184*/
      break;
    case 1704:
      v11 = 5; /*0x4e5196*/
      break;
    case 1706:
      v11 = 6; /*0x4e51a8*/
      break;
    default:
      v11 = nIDDlgItem != 1707 ? -1 : 7;
      break;
  }
  wParam = 0; /*0x4e51c6*/
  lParam = 0; /*0x4e51ca*/
  v6 = MEMORY[0x8B3F38]; /*0x4e51ce*/
  do /*0x4e5228*/
  {
    v9 = *v6 == v11; /*0x4e51e1*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e51ea*/
    {
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, *(v6 - 2)); /*0x4e51fa*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e5208*/
      if ( v9 ) /*0x4e5210*/
        wParam = v7; /*0x4e5212*/
    }
    v6 += 3; /*0x4e521a*/
    ++lParam; /*0x4e5224*/
  }
  while ( (int)v6 < (int)&MEMORY[0x8B3F98] ); /*0x4e5228*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e5237*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5243*/
  result = v10; /*0x4e5245*/
  if ( !v10 ) /*0x4e524b*/
    return ShowWindow(DlgItem, 5); /*0x4e5250*/
  return result; /*0x4e5256*/
}
}
} // namespace gamemd

// 0x4E53D0
namespace gamemd {
int Lobby_FillFactionComboBox(HWND a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Lobby_FillFactionComboBox(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = -2; /*0x4e53d4*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1700; /*0x4e53e7*/
        break;
      case 2:
        v3 = 1701; /*0x4e53f3*/
        break;
      case 3:
        v3 = 1702; /*0x4e53ff*/
        break;
      case 4:
        v3 = 1703; /*0x4e540b*/
        break;
      case 5:
        v3 = 1704; /*0x4e5417*/
        break;
      case 6:
        v3 = 1706; /*0x4e5423*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1707;
        break;
    }
  }
  else
  {
    v3 = 1699; /*0x4e53db*/
  }
  if ( MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4 ) /*0x4e544b*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e544d*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e5462*/
      v2 = 8; /*0x4e5464*/
  }
  return SetupLobbyFactionSlots(a1, v3, v2); /*0x4e5471*/
}
}
} // namespace gamemd

// 0x4E5480
namespace gamemd {
char SetupLobbyFactionSlots(SessionClass * aP0, int nIDDlgItem, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall SetupLobbyFactionSlots(SessionClass *aP0, int nIDDlgItem, int a3)
{
  SessionClass *v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edx
  char *v8; // ecx
  WPARAM v9; // edi
  LRESULT v10; // ebp
  int v11; // esi
  int i; // esi
  int v13; // edx
  int v14; // eax
  char result; // al
  bool v16; // [esp+Bh] [ebp-Dh]
  LRESULT v18; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  v4 = aP0; /*0x4e5487*/
  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e5498*/
  v16 = !ShowWindow(hWnd, 0); /*0x4e54a4*/
  switch ( nIDDlgItem ) /*0x4e54af*/
  {
    case 1699: /*0x4e54af*/
      v5 = 0; /*0x4e54b1*/
      break;
    case 1700: /*0x4e54af*/
      v5 = 1; /*0x4e54bd*/
      break;
    case 1701: /*0x4e54af*/
      v5 = 2; /*0x4e54cc*/
      break;
    case 1702: /*0x4e54af*/
      v5 = 3; /*0x4e54db*/
      break;
    case 1703: /*0x4e54af*/
      v5 = 4; /*0x4e54ea*/
      break;
    case 1704: /*0x4e54af*/
      v5 = 5; /*0x4e54f9*/
      break;
    case 1706: /*0x4e54af*/
      v5 = 6; /*0x4e5508*/
      break;
    default:
      v6 = -(nIDDlgItem != 1707); /*0x4e5518*/
      LOBYTE(v6) = v6 & 0xF8; /*0x4e551a*/
      v5 = v6 + 7; /*0x4e551c*/
      break;
  }
  v7 = 0; /*0x4e5521*/
  v8 = &stru_89E138.__pad_579C[67172]; /*0x4e5523*/
  while ( *(_DWORD *)v8 != v5 ) /*0x4e552a*/
  {
    v8 += 12; /*0x4e552c*/
    ++v7; /*0x4e552f*/
    if ( (int)v8 >= (int)&stru_89E138.__pad_579C[67280] ) /*0x4e5536*/
      goto LABEL_22; /*0x4e5536*/
  }
  if ( v7 != -1 ) /*0x4e553d*/
    *(_DWORD *)&stru_89E138.__pad_579C[12 * v7 + 67172] = -1; /*0x4e5542*/
LABEL_22:
  v9 = 0; /*0x4e554d*/
  v18 = SendDlgItemMessageA((HWND)v4, nIDDlgItem, 0x146u, 0, 0); /*0x4e5564*/
  if ( v18 > 0 )
  {
    while ( 1 ) /*0x4e557a*/
    {
      v10 = SendDlgItemMessageA((HWND)v4, nIDDlgItem, 0x150u, v9, 0); /*0x4e557a*/
      if ( v10 == a3 ) /*0x4e5580*/
        break; /*0x4e5580*/
      v4 = aP0; /*0x4e5586*/
      if ( (int)++v9 >= v18 ) /*0x4e558d*/
        goto LABEL_44; /*0x4e558d*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v9, 0); /*0x4e55a2*/
    if ( v10 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1699:
          v11 = 0; /*0x4e55b5*/
          break;
        case 1700:
          v11 = 1; /*0x4e55c1*/
          break;
        case 1701:
          v11 = 2; /*0x4e55d0*/
          break;
        case 1702:
          v11 = 3; /*0x4e55df*/
          break;
        case 1703:
          v11 = 4; /*0x4e55ee*/
          break;
        case 1704:
          v11 = 5; /*0x4e55fd*/
          break;
        case 1706:
          v11 = 6; /*0x4e560c*/
          break;
        default:
          v11 = nIDDlgItem != 1707 ? -1 : 7;
          break;
      }
      *(_DWORD *)&stru_89E138.__pad_579C[12 * v10 + 67172] = v11; /*0x4e5627*/
    }
    v4 = aP0; /*0x4e562e*/
  }
LABEL_44:
  if ( !v16 ) /*0x4e563a*/
    ShowWindow(hWnd, 5); /*0x4e5643*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1700; /*0x4e565b*/
          break;
        case 2:
          v13 = 1701; /*0x4e5667*/
          break;
        case 3:
          v13 = 1702; /*0x4e5673*/
          break;
        case 4:
          v13 = 1703; /*0x4e567f*/
          break;
        case 5:
          v13 = 1704; /*0x4e568b*/
          break;
        case 6:
          v13 = 1706; /*0x4e5697*/
          break;
        default:
          v13 = i != 7 ? -1 : 1707;
          break;
      }
    }
    else
    {
      v13 = 1699; /*0x4e564f*/
    }
    if ( (*(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) /*0x4e56d7*/
      && ((v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * i + 18396],
           (CoordStruct *)v14 == *(&g_MatrixTransformState + 2281))
       || *(_DWORD *)(v14 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance((HWND)v4, v13); /*0x4e56e4*/
    }
    else
    {
      result = FillComboBoxAllianceSlots((HWND)v4, v13); /*0x4e56db*/
    }
  }
  return result; /*0x4e56f3*/
}
}
} // namespace gamemd

// 0x4E5700
namespace gamemd {
char FillComboBoxSides(HWND hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall FillComboBoxSides(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // esi
  int i; // esi
  int v12; // edx
  int v13; // eax
  char result; // al

  switch ( nIDDlgItem ) /*0x4e570c*/
  {
    case 1699: /*0x4e570c*/
      v4 = 0; /*0x4e570e*/
      break;
    case 1700: /*0x4e570c*/
      v4 = 1; /*0x4e571a*/
      break;
    case 1701: /*0x4e570c*/
      v4 = 2; /*0x4e5729*/
      break;
    case 1702: /*0x4e570c*/
      v4 = 3; /*0x4e5738*/
      break;
    case 1703: /*0x4e570c*/
      v4 = 4; /*0x4e5747*/
      break;
    case 1704: /*0x4e570c*/
      v4 = 5; /*0x4e5756*/
      break;
    case 1706: /*0x4e570c*/
      v4 = 6; /*0x4e5765*/
      break;
    default:
      v5 = -(nIDDlgItem != 1707); /*0x4e5775*/
      LOBYTE(v5) = v5 & 0xF8; /*0x4e5777*/
      v4 = v5 + 7; /*0x4e5779*/
      break;
  }
  v6 = 0; /*0x4e577d*/
  v7 = MEMORY[0x8B3F38]; /*0x4e577f*/
  while ( *v7 != v4 ) /*0x4e5786*/
  {
    v7 += 3; /*0x4e5788*/
    ++v6; /*0x4e578b*/
    if ( (int)v7 >= (int)&MEMORY[0x8B3FA4] ) /*0x4e5792*/
      goto LABEL_22; /*0x4e5792*/
  }
  if ( v6 != -1 ) /*0x4e5799*/
    MEMORY[0x8B3F38][3 * v6] = -1; /*0x4e579e*/
LABEL_22:
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e57a9*/
  v9 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v8, 0); /*0x4e57c6*/
  switch ( nIDDlgItem )
  {
    case 1699:
      v10 = 0; /*0x4e57d1*/
      break;
    case 1700:
      v10 = 1; /*0x4e57dd*/
      break;
    case 1701:
      v10 = 2; /*0x4e57ec*/
      break;
    case 1702:
      v10 = 3; /*0x4e57fb*/
      break;
    case 1703:
      v10 = 4; /*0x4e580a*/
      break;
    case 1704:
      v10 = 5; /*0x4e5819*/
      break;
    case 1706:
      v10 = 6; /*0x4e5828*/
      break;
    default:
      v10 = nIDDlgItem != 1707 ? -1 : 7;
      break;
  }
  if ( v9 != -2 ) /*0x4e5842*/
    MEMORY[0x8B3F38][3 * v9] = v10; /*0x4e5847*/
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v12 = 1700; /*0x4e5860*/
          break;
        case 2:
          v12 = 1701; /*0x4e586c*/
          break;
        case 3:
          v12 = 1702; /*0x4e5878*/
          break;
        case 4:
          v12 = 1703; /*0x4e5884*/
          break;
        case 5:
          v12 = 1704; /*0x4e5890*/
          break;
        case 6:
          v12 = 1706; /*0x4e589c*/
          break;
        default:
          v12 = i != 7 ? -1 : 1707;
          break;
      }
    }
    else
    {
      v12 = 1699; /*0x4e5854*/
    }
    if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x4e58dc*/
      && ((v13 = *(&MEMORY[0xA8DA90] + i), v13 == MEMORY[0xAC11B4]) || *(_DWORD *)(v13 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance(hDlg, v12); /*0x4e58e9*/
    }
    else
    {
      result = FillComboBoxAllianceSlots(hDlg, v12); /*0x4e58e0*/
    }
  }
  return result; /*0x4e58f8*/
}
}
} // namespace gamemd

// 0x4E5B60
namespace gamemd {
bool FillLobbyPlayerSlot(HWND hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall FillLobbyPlayerSlot(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  LPARAM v6; // ebx
  LPARAM *v7; // ebp
  LRESULT v8; // eax
  HWND v9; // eax
  bool result; // al
  bool v11; // [esp+Bh] [ebp-5h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e5b71*/
  v11 = !ShowWindow(DlgItem, 0); /*0x4e5b8e*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e5b93*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5b9f*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5bab*/
  if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x4e5bba*/
  {
    if ( MEMORY[0xA8B23C] && (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]) < 0 ) /*0x4e5be8*/
    {
      StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1110); /*0x4e5bfb*/
      goto LABEL_9; /*0x4e5bfb*/
    }
  }
  else
  {
    v3 = Skirmish_Setup(); /*0x4e5bbc*/
    if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) < 0 ) /*0x4e5bce*/
    {
      StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1119); /*0x4e5bd5*/
LABEL_9:
      v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5c00*/
      SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5c14*/
    }
  }
  v6 = 0; /*0x4e5c16*/
  v7 = &MEMORY[0x8B3FC0]; /*0x4e5c1a*/
  do /*0x4e5c41*/
  {
    v8 = SendMessageA(DlgItem, 0x4C2u, 0, *v7); /*0x4e5c2b*/
    SendMessageA(DlgItem, 0x151u, v8, v6); /*0x4e5c35*/
    v7 += 3; /*0x4e5c37*/
    ++v6; /*0x4e5c3a*/
  }
  while ( (int)v7 < (int)&MEMORY[0x8B3FF0] ); /*0x4e5c41*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e5c4d*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5c59*/
  if ( MEMORY[0xA8B238][0] == 4 && Network::IsLobbyFeature() ) /*0x4e5c67*/
  {
    ShowWindow(DlgItem, 0); /*0x4e5c79*/
    v9 = GetDlgItem(hDlg, 1940); /*0x4e5c85*/
    return ShowWindow(v9, 0); /*0x4e5c8e*/
  }
  else
  {
    result = v11; /*0x4e5c96*/
    if ( !v11 ) /*0x4e5c9c*/
      return ShowWindow(DlgItem, 5); /*0x4e5ca1*/
  }
  return result; /*0x4e5c90*/
}
}
} // namespace gamemd

// 0x4E5E20
namespace gamemd {
bool Lobby_SetupPlayerSlotDialog(HWND a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall Lobby_SetupPlayerSlotDialog(HWND a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v2 = -1; /*0x4e5e22*/
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v3 = 1902; /*0x4e5e35*/
        break;
      case 2:
        v3 = 1903; /*0x4e5e41*/
        break;
      case 3:
        v3 = 1904; /*0x4e5e4d*/
        break;
      case 4:
        v3 = 1905; /*0x4e5e59*/
        break;
      case 5:
        v3 = 1906; /*0x4e5e65*/
        break;
      case 6:
        v3 = 1907; /*0x4e5e71*/
        break;
      default:
        v3 = a2 != 7 ? -1 : 1908;
        break;
    }
  }
  else
  {
    v3 = 1901; /*0x4e5e29*/
  }
  if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x4e5e99*/
  {
    v4 = *(&MEMORY[0xA8DA90] + a2); /*0x4e5e9b*/
    if ( v4 == MEMORY[0xAC11B4] && *(_DWORD *)(v4 + 107) == -1 ) /*0x4e5eaf*/
      v2 = 4; /*0x4e5eb1*/
  }
  return SetupLobbyPlayerSlots(a1, v3, v2); /*0x4e5ebe*/
}
}
} // namespace gamemd

// 0x4E5ED0
namespace gamemd {
bool SetupLobbyPlayerSlots(SessionClass * aP0, int nIDDlgItem, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall SetupLobbyPlayerSlots(SessionClass *aP0, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebp
  LRESULT v6; // ebx
  int v7; // esi
  HWND DlgItem; // eax
  bool result; // al
  bool v10; // [esp+13h] [ebp-9h]
  HWND hWnd; // [esp+14h] [ebp-8h]
  LRESULT v12; // [esp+18h] [ebp-4h]

  hWnd = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x4e5ee6*/
  v10 = !ShowWindow(hWnd, 0); /*0x4e5efd*/
  v5 = 0; /*0x4e5f08*/
  v12 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x146u, 0, 0); /*0x4e5f0c*/
  if ( v12 > 0 )
  {
    while ( 1 ) /*0x4e5f26*/
    {
      v6 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, v5, 0); /*0x4e5f26*/
      if ( v6 == a3 ) /*0x4e5f2c*/
        break; /*0x4e5f2c*/
      if ( (int)++v5 >= v12 ) /*0x4e5f35*/
        goto LABEL_22; /*0x4e5f35*/
    }
    SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x14Eu, v5, 0); /*0x4e5f46*/
    if ( v6 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1901:
          v7 = 0; /*0x4e5f5d*/
          break;
        case 1902:
          v7 = 1; /*0x4e5f69*/
          break;
        case 1903:
          v7 = 2; /*0x4e5f78*/
          break;
        case 1904:
          v7 = 3; /*0x4e5f87*/
          break;
        case 1905:
          v7 = 4; /*0x4e5f96*/
          break;
        case 1906:
          v7 = 5; /*0x4e5fa5*/
          break;
        case 1907:
          v7 = 6; /*0x4e5fb4*/
          break;
        default:
          v7 = nIDDlgItem != 1908 ? -1 : 7;
          break;
      }
      *(_DWORD *)&stru_89E138.__pad_579C[12 * v6 + 67316] = v7; /*0x4e5fce*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && Network::IsLobbyFeature() ) /*0x4e5fde*/
  {
    ShowWindow(hWnd, 0); /*0x4e5ff4*/
    DlgItem = GetDlgItem((HWND)aP0, 1940); /*0x4e5ffc*/
    return ShowWindow(DlgItem, 0); /*0x4e6005*/
  }
  else
  {
    result = v10; /*0x4e6011*/
    if ( !v10 ) /*0x4e6017*/
      return ShowWindow(hWnd, 5); /*0x4e6020*/
  }
  return result; /*0x4e6007*/
}
}
} // namespace gamemd

// 0x4E6070
namespace gamemd {
int E4Recv_4E6070::sub_4E6070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4E6070(int this)
{
  this->M104 = 0; /*0x4e6087*/
  this->M108 = 0; /*0x4e608a*/
  Debug::Log(); /*0x4e608d*/
  memset((void *)this, 0xFFu, 0x18u); /*0x4e609f*/
  *(_WORD *)(this + 24) = -1; /*0x4e60a9*/
  *(_DWORD *)(this + 4 * (this->M104)++) = 2; /*0x4e60cc*/
  Debug::Log(); /*0x4e60d6*/
  return this; /*0x4e612c*/
}
}
} // namespace gamemd

// 0x4E6190
namespace gamemd {
int sub_4E6190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6190()
{
  int v0; // esi
  int result; // eax
  int v2; // [esp+0h] [ebp-44h] BYREF
  char Destination[64]; // [esp+4h] [ebp-40h] BYREF

  Event_Process_7C5F3D(); /*0x4e6194*/
  Event_Process_7C5FFF(); /*0x4e6199*/
  v0 = MEMORY[0x84E863]; /*0x4e619e*/
  if ( &v2 != (int *)-4 ) /*0x4e61ab*/
    strncpy(Destination, MEMORY[0x84E865], 0x40u); /*0x4e61b9*/
  if ( !v0 || !MEMORY[0x84E864] ) /*0x4e61d0*/
    return -1; /*0x4e627c*/
  if ( !_strcmpi(Destination, aAuthenticamd) ) /*0x4e61e0*/
    return 7; /*0x4e61ec*/
  if ( !_strcmpi(Destination, aCyrixinstead) ) /*0x4e6200*/
    return 8; /*0x4e620c*/
  if ( v0 == 4 ) /*0x4e621b*/
    return 0; /*0x4e6275*/
  if ( v0 == 5 ) /*0x4e621e*/
    return 1; /*0x4e626b*/
  if ( v0 != 6 ) /*0x4e6221*/
    return 6; /*0x4e6223*/
  switch ( MEMORY[0x84E864] ) /*0x4e623c*/
  {
    case 3: /*0x4e623c*/
    case 5: /*0x4e623c*/
      result = 3; /*0x4e6243*/
      break; /*0x4e624c*/
    case 6: /*0x4e623c*/
      result = 5; /*0x4e624d*/
      break; /*0x4e6256*/
    case 7: /*0x4e623c*/
    case 8: /*0x4e623c*/
    case 10: /*0x4e623c*/
      result = 4; /*0x4e6257*/
      break; /*0x4e6260*/
    default:
      result = 2; /*0x4e6261*/
      break; /*0x4e626a*/
  }
  return result; /*0x4e61f1*/
}
}
} // namespace gamemd

// 0x4E64E0
namespace gamemd {
int sub_4E64E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E64E0()
{
  MEMORY[0xA8B204] = 0; /*0x4e64e7*/
  MEMORY[0xA8B208] = 0; /*0x4e64ec*/
  MEMORY[0xA8B20C] = 1; /*0x4e64f1*/
  MEMORY[0xA8B20D] = 0; /*0x4e64f8*/
  MEMORY[0xA8B200] = (int)&vt_DynamicVectorClass_AITriggerTypeClass; /*0x4e64fd*/
  MEMORY[0xA8B214] = 10; /*0x4e6507*/
  MEMORY[0xA8B210] = 0; /*0x4e6511*/
  return atexit(sub_4E6520); /*0x4e651c*/
}
}
} // namespace gamemd

// 0x4E6520
namespace gamemd {
void sub_4E6520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6520()
{
  MEMORY[0xA8B200] = (int)&vt_VectorClass_AITriggerTypeClass; /*0x4e6528*/
  if ( MEMORY[0xA8B204] && MEMORY[0xA8B20D] ) /*0x4e653c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B204]); /*0x4e653f*/
    MEMORY[0xA8B204] = 0; /*0x4e6547*/
  }
  MEMORY[0xA8B20D] = 0; /*0x4e654d*/
  MEMORY[0xA8B208] = 0; /*0x4e6553*/
}
}
} // namespace gamemd

// 0x4E6560
namespace gamemd {
int sub_4E6560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6560()
{
  unk_8B417C = 0; /*0x4e6567*/
  dword_8B4180 = 0; /*0x4e656c*/
  unk_8B4184 = 1; /*0x4e6571*/
  unk_8B4185 = 0; /*0x4e6578*/
  dword_8B4178 = (int)&vt_DynamicVectorClass_TriggerTypeClass; /*0x4e657d*/
  dword_8B418C = 10; /*0x4e6587*/
  dword_8B4188 = 0; /*0x4e6591*/
  return atexit(sub_4E65A0); /*0x4e659c*/
}
}
} // namespace gamemd

// 0x4E65A0
namespace gamemd {
void sub_4E65A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E65A0()
{
  dword_8B4178 = (int)&vt_VectorClass_TriggerTypeClass; /*0x4e65a8*/
  if ( unk_8B417C && unk_8B4185 ) /*0x4e65bc*/
  {
    __3_YAXPAX_Z(unk_8B417C); /*0x4e65bf*/
    unk_8B417C = 0; /*0x4e65c7*/
  }
  unk_8B4185 = 0; /*0x4e65cd*/
  dword_8B4180 = 0; /*0x4e65d3*/
}
}
} // namespace gamemd

// 0x4E65E0
namespace gamemd {
int sub_4E65E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E65E0()
{
  MEMORY[0xA8EAEC] = 0; /*0x4e65e7*/
  MEMORY[0xA8EAF0] = 0; /*0x4e65ec*/
  MEMORY[0xA8EAF4] = 1; /*0x4e65f1*/
  MEMORY[0xA8EAF5] = 0; /*0x4e65f8*/
  MEMORY[0xA8EAE8] = (int)&vt_DynamicVectorClass_TriggerClass; /*0x4e65fd*/
  MEMORY[0xA8EAFC] = 10; /*0x4e6607*/
  MEMORY[0xA8EAF8] = 0; /*0x4e6611*/
  return atexit(sub_4E6620); /*0x4e661c*/
}
}
} // namespace gamemd

// 0x4E6620
namespace gamemd {
void sub_4E6620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6620()
{
  MEMORY[0xA8EAE8] = (int)&vt_VectorClass_TriggerClass; /*0x4e6628*/
  if ( MEMORY[0xA8EAEC] && MEMORY[0xA8EAF5] ) /*0x4e663c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EAEC]); /*0x4e663f*/
    MEMORY[0xA8EAEC] = 0; /*0x4e6647*/
  }
  MEMORY[0xA8EAF5] = 0; /*0x4e664d*/
  MEMORY[0xA8EAF0] = 0; /*0x4e6653*/
}
}
} // namespace gamemd

// 0x4E6660
namespace gamemd {
int sub_4E6660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6660()
{
  unk_8B4194 = 0; /*0x4e6667*/
  dword_8B4198 = 0; /*0x4e666c*/
  unk_8B419C = 1; /*0x4e6671*/
  unk_8B419D = 0; /*0x4e6678*/
  dword_8B4190 = (int)&vt_DynamicVectorClass_BuildingLightClass; /*0x4e667d*/
  dword_8B41A4 = 10; /*0x4e6687*/
  dword_8B41A0 = 0; /*0x4e6691*/
  return atexit(sub_4E66A0); /*0x4e669c*/
}
}
} // namespace gamemd

// 0x4E66A0
namespace gamemd {
void sub_4E66A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E66A0()
{
  dword_8B4190 = (int)&vt_VectorClass_BuildingLightClass; /*0x4e66a8*/
  if ( unk_8B4194 && unk_8B419D ) /*0x4e66bc*/
  {
    __3_YAXPAX_Z(unk_8B4194); /*0x4e66bf*/
    unk_8B4194 = 0; /*0x4e66c7*/
  }
  unk_8B419D = 0; /*0x4e66cd*/
  dword_8B4198 = 0; /*0x4e66d3*/
}
}
} // namespace gamemd

// 0x4E66E0
namespace gamemd {
int sub_4E66E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E66E0()
{
  dword_A8020C = 0; /*0x4e66e7*/
  dword_A80210 = 0; /*0x4e66ec*/
  byte_A80214 = 1; /*0x4e66f1*/
  byte_A80215 = 0; /*0x4e66f8*/
  dword_A80208 = (int)&vt_DynamicVectorClass_ParticleSystemClass; /*0x4e66fd*/
  dword_A8021C = 10; /*0x4e6707*/
  g_GameCleanupState = 0; /*0x4e6711*/
  return atexit(sub_4E6720); /*0x4e671c*/
}
}
} // namespace gamemd

// 0x4E6720
namespace gamemd {
void sub_4E6720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6720()
{
  dword_A80208 = (int)&vt_VectorClass_ParticleSystemClass; /*0x4e6728*/
  if ( dword_A8020C && byte_A80215 ) /*0x4e673c*/
  {
    __3_YAXPAX_Z(dword_A8020C); /*0x4e673f*/
    dword_A8020C = 0; /*0x4e6747*/
  }
  byte_A80215 = 0; /*0x4e674d*/
  dword_A80210 = 0; /*0x4e6753*/
}
}
} // namespace gamemd

// 0x4E6760
namespace gamemd {
int sub_4E6760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6760()
{
  MEMORY[0x8B413C] = 0; /*0x4e6767*/
  MEMORY[0x8B4140] = 0; /*0x4e676c*/
  MEMORY[0x8B4144] = 1; /*0x4e6771*/
  MEMORY[0x8B4145] = 0; /*0x4e6778*/
  MEMORY[0x8B4138] = (int)&vt_DynamicVectorClass_TubeClass; /*0x4e677d*/
  MEMORY[0x8B414C] = 10; /*0x4e6787*/
  MEMORY[0x8B4148] = 0; /*0x4e6791*/
  return atexit(sub_4E67A0); /*0x4e679c*/
}
}
} // namespace gamemd

// 0x4E67A0
namespace gamemd {
void sub_4E67A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E67A0()
{
  MEMORY[0x8B4138] = (int)&vt_VectorClass_TubeClass; /*0x4e67a8*/
  if ( MEMORY[0x8B413C] && MEMORY[0x8B4145] ) /*0x4e67bc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B413C]); /*0x4e67bf*/
    MEMORY[0x8B413C] = 0; /*0x4e67c7*/
  }
  MEMORY[0x8B4145] = 0; /*0x4e67cd*/
  MEMORY[0x8B4140] = 0; /*0x4e67d3*/
}
}
} // namespace gamemd

// 0x4E67E0
namespace gamemd {
int sub_4E67E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E67E0()
{
  MEMORY[0xA8EC3C] = 0; /*0x4e67e7*/
  MEMORY[0xA8EC40] = 0; /*0x4e67ec*/
  MEMORY[0xA8EC44] = 1; /*0x4e67f1*/
  MEMORY[0xA8EC45] = 0; /*0x4e67f8*/
  MEMORY[0xA8EC38] = (int)&vt_DynamicVectorClass_WaveClass; /*0x4e67fd*/
  MEMORY[0xA8EC4C] = 10; /*0x4e6807*/
  MEMORY[0xA8EC48] = 0; /*0x4e6811*/
  return atexit(sub_4E6820); /*0x4e681c*/
}
}
} // namespace gamemd

// 0x4E6820
namespace gamemd {
void sub_4E6820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6820()
{
  MEMORY[0xA8EC38] = (int)&vt_VectorClass_WaveClass; /*0x4e6828*/
  if ( MEMORY[0xA8EC3C] && MEMORY[0xA8EC45] ) /*0x4e683c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC3C]); /*0x4e683f*/
    MEMORY[0xA8EC3C] = 0; /*0x4e6847*/
  }
  MEMORY[0xA8EC45] = 0; /*0x4e684d*/
  MEMORY[0xA8EC40] = 0; /*0x4e6853*/
}
}
} // namespace gamemd

// 0x4E6860
namespace gamemd {
int sub_4E6860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6860()
{
  MEMORY[0xA8ED44] = 0; /*0x4e6867*/
  MEMORY[0xA8ED48] = 0; /*0x4e686c*/
  MEMORY[0xA8ED4C] = 1; /*0x4e6871*/
  MEMORY[0xA8ED4D] = 0; /*0x4e6878*/
  MEMORY[0xA8ED40] = (int)&off_7E4678; /*0x4e687d*/
  MEMORY[0xA8ED54] = 10; /*0x4e6887*/
  MEMORY[0xA8ED50] = 0; /*0x4e6891*/
  return atexit(sub_4E68A0); /*0x4e689c*/
}
}
} // namespace gamemd

// 0x4E68A0
namespace gamemd {
void sub_4E68A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E68A0()
{
  MEMORY[0xA8ED40] = (int)&vt_VectorClass_BulletClass; /*0x4e68a8*/
  if ( MEMORY[0xA8ED44] && MEMORY[0xA8ED4D] ) /*0x4e68bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ED44]); /*0x4e68bf*/
    MEMORY[0xA8ED44] = 0; /*0x4e68c7*/
  }
  MEMORY[0xA8ED4D] = 0; /*0x4e68cd*/
  MEMORY[0xA8ED48] = 0; /*0x4e68d3*/
}
}
} // namespace gamemd

// 0x4E68E0
namespace gamemd {
int sub_4E68E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E68E0()
{
  MEMORY[0xA8EC54] = 0; /*0x4e68e7*/
  MEMORY[0xA8EC58] = 0; /*0x4e68ec*/
  MEMORY[0xA8EC5C] = 1; /*0x4e68f1*/
  MEMORY[0xA8EC5D] = 0; /*0x4e68f8*/
  MEMORY[0xA8EC50] = (int)&vt_DynamicVectorClass_OverlayClass; /*0x4e68fd*/
  MEMORY[0xA8EC64] = 10; /*0x4e6907*/
  MEMORY[0xA8EC60] = 0; /*0x4e6911*/
  return atexit(sub_4E6920); /*0x4e691c*/
}
}
} // namespace gamemd

// 0x4E6920
namespace gamemd {
void sub_4E6920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6920()
{
  MEMORY[0xA8EC50] = (int)&vt_VectorClass_OverlayClass; /*0x4e6928*/
  if ( MEMORY[0xA8EC54] && MEMORY[0xA8EC5D] ) /*0x4e693c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC54]); /*0x4e693f*/
    MEMORY[0xA8EC54] = 0; /*0x4e6947*/
  }
  MEMORY[0xA8EC5D] = 0; /*0x4e694d*/
  MEMORY[0xA8EC58] = 0; /*0x4e6953*/
}
}
} // namespace gamemd

// 0x4E6960
namespace gamemd {
int sub_4E6960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6960()
{
  MEMORY[0xA83DCC] = 0; /*0x4e6967*/
  MEMORY[0xA83DD0] = 0; /*0x4e696c*/
  MEMORY[0xA83DD4] = 1; /*0x4e6971*/
  MEMORY[0xA83DD5] = 0; /*0x4e6978*/
  MEMORY[0xA83DC8] = (int)&vt_DynamicVectorClass_ParticleClass; /*0x4e697d*/
  MEMORY[0xA83DDC] = 10; /*0x4e6987*/
  MEMORY[0xA83DD8] = 0; /*0x4e6991*/
  return atexit(sub_4E69A0); /*0x4e699c*/
}
}
} // namespace gamemd

// 0x4E69A0
namespace gamemd {
void sub_4E69A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E69A0()
{
  MEMORY[0xA83DC8] = (int)&vt_VectorClass_ParticleClass; /*0x4e69a8*/
  if ( MEMORY[0xA83DCC] && MEMORY[0xA83DD5] ) /*0x4e69bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83DCC]); /*0x4e69bf*/
    MEMORY[0xA83DCC] = 0; /*0x4e69c7*/
  }
  MEMORY[0xA83DD5] = 0; /*0x4e69cd*/
  MEMORY[0xA83DD0] = 0; /*0x4e69d3*/
}
}
} // namespace gamemd

// 0x4E69E0
namespace gamemd {
int sub_4E69E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E69E0()
{
  MEMORY[0xA8B1E4] = 0; /*0x4e69e7*/
  MEMORY[0xA8B1E8] = 0; /*0x4e69ec*/
  MEMORY[0xA8B1EC] = 1; /*0x4e69f1*/
  MEMORY[0xA8B1ED] = 0; /*0x4e69f8*/
  MEMORY[0xA8B1E0] = (int)&vt_DynamicVectorClass_SmudgeClass; /*0x4e69fd*/
  MEMORY[0xA8B1F4] = 10; /*0x4e6a07*/
  MEMORY[0xA8B1F0] = 0; /*0x4e6a11*/
  return atexit(sub_4E6A20); /*0x4e6a1c*/
}
}
} // namespace gamemd

// 0x4E6A20
namespace gamemd {
void sub_4E6A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6A20()
{
  MEMORY[0xA8B1E0] = (int)&vt_VectorClass_SmudgeClass; /*0x4e6a28*/
  if ( MEMORY[0xA8B1E4] && MEMORY[0xA8B1ED] ) /*0x4e6a3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B1E4]); /*0x4e6a3f*/
    MEMORY[0xA8B1E4] = 0; /*0x4e6a47*/
  }
  MEMORY[0xA8B1ED] = 0; /*0x4e6a4d*/
  MEMORY[0xA8B1E8] = 0; /*0x4e6a53*/
}
}
} // namespace gamemd

// 0x4E6A60
namespace gamemd {
int sub_4E6A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6A60()
{
  MEMORY[0xA8E98C] = 0; /*0x4e6a67*/
  MEMORY[0xA8E990] = 0; /*0x4e6a6c*/
  MEMORY[0xA8E994] = 1; /*0x4e6a71*/
  MEMORY[0xA8E995] = 0; /*0x4e6a78*/
  MEMORY[0xA8E988] = (int)&vt_DynamicVectorClass_TerrainClass; /*0x4e6a7d*/
  MEMORY[0xA8E99C] = 10; /*0x4e6a87*/
  MEMORY[0xA8E998] = 0; /*0x4e6a91*/
  return atexit(sub_4E6AA0); /*0x4e6a9c*/
}
}
} // namespace gamemd

// 0x4E6AA0
namespace gamemd {
void sub_4E6AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6AA0()
{
  MEMORY[0xA8E988] = (int)&vt_VectorClass_TerrainClass; /*0x4e6aa8*/
  if ( MEMORY[0xA8E98C] && MEMORY[0xA8E995] ) /*0x4e6abc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E98C]); /*0x4e6abf*/
    MEMORY[0xA8E98C] = 0; /*0x4e6ac7*/
  }
  MEMORY[0xA8E995] = 0; /*0x4e6acd*/
  MEMORY[0xA8E990] = 0; /*0x4e6ad3*/
}
}
} // namespace gamemd

// 0x4E6AE0
namespace gamemd {
int sub_4E6AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6AE0()
{
  MEMORY[0xA83DEC] = 0; /*0x4e6ae7*/
  MEMORY[0xA83DF0] = 0; /*0x4e6aec*/
  MEMORY[0xA83DF4] = 1; /*0x4e6af1*/
  MEMORY[0xA83DF5] = 0; /*0x4e6af8*/
  MEMORY[0xA83DE8] = (int)&vt_DynamicVectorClass_InfantryClass; /*0x4e6afd*/
  MEMORY[0xA83DFC] = 10; /*0x4e6b07*/
  MEMORY[0xA83DF8] = 0; /*0x4e6b11*/
  return atexit(sub_4E6B20); /*0x4e6b1c*/
}
}
} // namespace gamemd

// 0x4E6B20
namespace gamemd {
void sub_4E6B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6B20()
{
  MEMORY[0xA83DE8] = (int)&vt_VectorClass_InfantryClass; /*0x4e6b28*/
  if ( MEMORY[0xA83DEC] && MEMORY[0xA83DF5] ) /*0x4e6b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83DEC]); /*0x4e6b3f*/
    MEMORY[0xA83DEC] = 0; /*0x4e6b47*/
  }
  MEMORY[0xA83DF5] = 0; /*0x4e6b4d*/
  MEMORY[0xA83DF0] = 0; /*0x4e6b53*/
}
}
} // namespace gamemd

// 0x4E6B60
namespace gamemd {
int sub_4E6B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6B60()
{
  MEMORY[0xA8EB44] = 0; /*0x4e6b67*/
  MEMORY[0xA8EB48] = 0; /*0x4e6b6c*/
  MEMORY[0xA8EB4C] = 1; /*0x4e6b71*/
  MEMORY[0xA8EB4D] = 0; /*0x4e6b78*/
  MEMORY[0xA8EB40] = (int)&vt_DynamicVectorClass_BuildingClass; /*0x4e6b7d*/
  MEMORY[0xA8EB54] = 10; /*0x4e6b87*/
  MEMORY[0xA8EB50] = 0; /*0x4e6b91*/
  return atexit(sub_4E6BA0); /*0x4e6b9c*/
}
}
} // namespace gamemd

// 0x4E6BA0
namespace gamemd {
void sub_4E6BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6BA0()
{
  MEMORY[0xA8EB40] = (int)&vt_VectorClass_BuildingClass; /*0x4e6ba8*/
  if ( MEMORY[0xA8EB44] && MEMORY[0xA8EB4D] ) /*0x4e6bbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB44]); /*0x4e6bbf*/
    MEMORY[0xA8EB44] = 0; /*0x4e6bc7*/
  }
  MEMORY[0xA8EB4D] = 0; /*0x4e6bcd*/
  MEMORY[0xA8EB48] = 0; /*0x4e6bd3*/
}
}
} // namespace gamemd

// 0x4E6BE0
namespace gamemd {
int sub_4E6BE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6BE0()
{
  MEMORY[0xA8E394] = 0; /*0x4e6be7*/
  MEMORY[0xA8E398] = 0; /*0x4e6bec*/
  MEMORY[0xA8E39C] = 1; /*0x4e6bf1*/
  MEMORY[0xA8E39D] = 0; /*0x4e6bf8*/
  MEMORY[0xA8E390] = (int)&vt_DynamicVectorClass_AircraftClass; /*0x4e6bfd*/
  MEMORY[0xA8E3A4] = 10; /*0x4e6c07*/
  MEMORY[0xA8E3A0] = 0; /*0x4e6c11*/
  return atexit(sub_4E6C20); /*0x4e6c1c*/
}
}
} // namespace gamemd

// 0x4E6C20
namespace gamemd {
void sub_4E6C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6C20()
{
  MEMORY[0xA8E390] = (int)&vt_VectorClass_AircraftClass; /*0x4e6c28*/
  if ( MEMORY[0xA8E394] && MEMORY[0xA8E39D] ) /*0x4e6c3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E394]); /*0x4e6c3f*/
    MEMORY[0xA8E394] = 0; /*0x4e6c47*/
  }
  MEMORY[0xA8E39D] = 0; /*0x4e6c4d*/
  MEMORY[0xA8E398] = 0; /*0x4e6c53*/
}
}
} // namespace gamemd

// 0x4E6C60
namespace gamemd {
int sub_4E6C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6C60()
{
  MEMORY[0x8B410C] = 0; /*0x4e6c67*/
  MEMORY[0x8B4110] = 0; /*0x4e6c6c*/
  MEMORY[0x8B4114] = 1; /*0x4e6c71*/
  MEMORY[0x8B4115] = 0; /*0x4e6c78*/
  MEMORY[0x8B4108] = (int)&vt_DynamicVectorClass_UnitClass; /*0x4e6c7d*/
  MEMORY[0x8B411C] = 10; /*0x4e6c87*/
  MEMORY[0x8B4118] = 0; /*0x4e6c91*/
  return atexit(sub_4E6CA0); /*0x4e6c9c*/
}
}
} // namespace gamemd

// 0x4E6CA0
namespace gamemd {
void sub_4E6CA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6CA0()
{
  MEMORY[0x8B4108] = (int)&vt_VectorClass_UnitClass; /*0x4e6ca8*/
  if ( MEMORY[0x8B410C] && MEMORY[0x8B4115] ) /*0x4e6cbc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B410C]); /*0x4e6cbf*/
    MEMORY[0x8B410C] = 0; /*0x4e6cc7*/
  }
  MEMORY[0x8B4115] = 0; /*0x4e6ccd*/
  MEMORY[0x8B4110] = 0; /*0x4e6cd3*/
}
}
} // namespace gamemd

// 0x4E6CE0
namespace gamemd {
int sub_4E6CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6CE0()
{
  HouseClass_Array = 0; /*0x4e6ce7*/
  dword_A80230 = 0; /*0x4e6cec*/
  byte_A80234 = 1; /*0x4e6cf1*/
  byte_A80235 = 0; /*0x4e6cf8*/
  HouseClass_Array_0 = (int)&vt_DynamicVectorClass_HouseClass; /*0x4e6cfd*/
  dword_A8023C = 10; /*0x4e6d07*/
  HouseClass_Count = 0; /*0x4e6d11*/
  return atexit(sub_4E6D20); /*0x4e6d1c*/
}
}
} // namespace gamemd

// 0x4E6D20
namespace gamemd {
void sub_4E6D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6D20()
{
  HouseClass_Array_0 = (int)&vt_VectorClass_HouseClass; /*0x4e6d28*/
  if ( HouseClass_Array && byte_A80235 ) /*0x4e6d3c*/
  {
    __3_YAXPAX_Z(HouseClass_Array); /*0x4e6d3f*/
    HouseClass_Array = 0; /*0x4e6d47*/
  }
  byte_A80235 = 0; /*0x4e6d4d*/
  dword_A80230 = 0; /*0x4e6d53*/
}
}
} // namespace gamemd

// 0x4E6D60
namespace gamemd {
int sub_4E6D60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6D60()
{
  MEMORY[0xA8E9AC] = 0; /*0x4e6d67*/
  MEMORY[0xA8E9B0] = 0; /*0x4e6d6c*/
  MEMORY[0xA8E9B4] = 1; /*0x4e6d71*/
  MEMORY[0xA8E9B5] = 0; /*0x4e6d78*/
  MEMORY[0xA8E9A8] = (int)&vt_DynamicVectorClass_AnimClass; /*0x4e6d7d*/
  MEMORY[0xA8E9BC] = 10; /*0x4e6d87*/
  MEMORY[0xA8E9B8] = 0; /*0x4e6d91*/
  return atexit(sub_4E6DA0); /*0x4e6d9c*/
}
}
} // namespace gamemd

// 0x4E6DA0
namespace gamemd {
void sub_4E6DA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6DA0()
{
  MEMORY[0xA8E9A8] = (int)&vt_VectorClass_AnimClass; /*0x4e6da8*/
  if ( MEMORY[0xA8E9AC] && MEMORY[0xA8E9B5] ) /*0x4e6dbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E9AC]); /*0x4e6dbf*/
    MEMORY[0xA8E9AC] = 0; /*0x4e6dc7*/
  }
  MEMORY[0xA8E9B5] = 0; /*0x4e6dcd*/
  MEMORY[0xA8E9B0] = 0; /*0x4e6dd3*/
}
}
} // namespace gamemd

// 0x4E6DE0
namespace gamemd {
int sub_4E6DE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6DE0()
{
  MEMORY[0x8B40EC] = 0; /*0x4e6de7*/
  MEMORY[0x8B40F0] = 0; /*0x4e6dec*/
  MEMORY[0x8B40F4] = 1; /*0x4e6df1*/
  MEMORY[0x8B40F5] = 0; /*0x4e6df8*/
  MEMORY[0x8B40E8] = (int)&vt_DynamicVectorClass_TeamClass; /*0x4e6dfd*/
  MEMORY[0x8B40FC] = 10; /*0x4e6e07*/
  MEMORY[0x8B40F8] = 0; /*0x4e6e11*/
  return atexit(sub_4E6E20); /*0x4e6e1c*/
}
}
} // namespace gamemd

// 0x4E6E20
namespace gamemd {
void sub_4E6E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6E20()
{
  MEMORY[0x8B40E8] = (int)&vt_VectorClass_TeamClass; /*0x4e6e28*/
  if ( MEMORY[0x8B40EC] && MEMORY[0x8B40F5] ) /*0x4e6e3c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40EC]); /*0x4e6e3f*/
    MEMORY[0x8B40EC] = 0; /*0x4e6e47*/
  }
  MEMORY[0x8B40F5] = 0; /*0x4e6e4d*/
  MEMORY[0x8B40F0] = 0; /*0x4e6e53*/
}
}
} // namespace gamemd

// 0x4E6E60
namespace gamemd {
int sub_4E6E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6E60()
{
  MEMORY[0xA83E34] = 0; /*0x4e6e67*/
  MEMORY[0xA83E38] = 0; /*0x4e6e6c*/
  MEMORY[0xA83E3C] = 1; /*0x4e6e71*/
  MEMORY[0xA83E3D] = 0; /*0x4e6e78*/
  MEMORY[0xA83E30] = (int)&vt_DynamicVectorClass_FactoryClass; /*0x4e6e7d*/
  MEMORY[0xA83E44] = 10; /*0x4e6e87*/
  MEMORY[0xA83E40] = 0; /*0x4e6e91*/
  return atexit(sub_4E6EA0); /*0x4e6e9c*/
}
}
} // namespace gamemd

// 0x4E6EA0
namespace gamemd {
void sub_4E6EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6EA0()
{
  MEMORY[0xA83E30] = (int)&vt_VectorClass_FactoryClass; /*0x4e6ea8*/
  if ( MEMORY[0xA83E34] && MEMORY[0xA83E3D] ) /*0x4e6ebc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83E34]); /*0x4e6ebf*/
    MEMORY[0xA83E34] = 0; /*0x4e6ec7*/
  }
  MEMORY[0xA83E3D] = 0; /*0x4e6ecd*/
  MEMORY[0xA83E38] = 0; /*0x4e6ed3*/
}
}
} // namespace gamemd

// 0x4E6EE0
namespace gamemd {
int sub_4E6EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6EE0()
{
  g_CampaignTypeArray = 0; /*0x4e6ee7*/
  dword_A83D00 = 0; /*0x4e6eec*/
  byte_A83D04 = 1; /*0x4e6ef1*/
  byte_A83D05 = 0; /*0x4e6ef8*/
  dword_A83CF8 = (int)&vt_DynamicVectorClass_CampaignClass; /*0x4e6efd*/
  dword_A83D0C = 10; /*0x4e6f07*/
  g_UnitTypeInitState = 0; /*0x4e6f11*/
  return atexit(sub_4E6F20); /*0x4e6f1c*/
}
}
} // namespace gamemd

// 0x4E6F20
namespace gamemd {
void sub_4E6F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6F20()
{
  dword_A83CF8 = (int)&vt_VectorClass_CampaignClass; /*0x4e6f28*/
  if ( g_CampaignTypeArray && byte_A83D05 ) /*0x4e6f3c*/
  {
    __3_YAXPAX_Z(g_CampaignTypeArray); /*0x4e6f3f*/
    g_CampaignTypeArray = 0; /*0x4e6f47*/
  }
  byte_A83D05 = 0; /*0x4e6f4d*/
  dword_A83D00 = 0; /*0x4e6f53*/
}
}
} // namespace gamemd

// 0x4E6F60
namespace gamemd {
int sub_4E6F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6F60()
{
  MEMORY[0x8B4124] = 0; /*0x4e6f67*/
  MEMORY[0x8B4128] = 0; /*0x4e6f6c*/
  MEMORY[0x8B412C] = 1; /*0x4e6f71*/
  MEMORY[0x8B412D] = 0; /*0x4e6f78*/
  MEMORY[0x8B4120] = (int)&vt_DynamicVectorClass_SideClass; /*0x4e6f7d*/
  MEMORY[0x8B4134] = 10; /*0x4e6f87*/
  MEMORY[0x8B4130] = 0; /*0x4e6f91*/
  return atexit(sub_4E6FA0); /*0x4e6f9c*/
}
}
} // namespace gamemd

// 0x4E6FA0
namespace gamemd {
void sub_4E6FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E6FA0()
{
  MEMORY[0x8B4120] = (int)&vt_VectorClass_SideClass; /*0x4e6fa8*/
  if ( MEMORY[0x8B4124] && MEMORY[0x8B412D] ) /*0x4e6fbc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B4124]); /*0x4e6fbf*/
    MEMORY[0x8B4124] = 0; /*0x4e6fc7*/
  }
  MEMORY[0x8B412D] = 0; /*0x4e6fcd*/
  MEMORY[0x8B4128] = 0; /*0x4e6fd3*/
}
}
} // namespace gamemd

// 0x4E6FE0
namespace gamemd {
int sub_4E6FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E6FE0()
{
  g_SuperWeaponTypeCount = 0; /*0x4e6fe7*/
  dword_A83CA0 = 0; /*0x4e6fec*/
  byte_A83CA4 = 1; /*0x4e6ff1*/
  byte_A83CA5 = 0; /*0x4e6ff8*/
  dword_A83C98 = (int)&vt_DynamicVectorClass_HouseTypeClass; /*0x4e6ffd*/
  dword_A83CAC = 10; /*0x4e7007*/
  g_SuperWeaponTypeArray = 0; /*0x4e7011*/
  return atexit(sub_4E7020); /*0x4e701c*/
}
}
} // namespace gamemd

// 0x4E7020
namespace gamemd {
void sub_4E7020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7020()
{
  dword_A83C98 = (int)&vt_VectorClass_HouseTypeClass; /*0x4e7028*/
  if ( g_SuperWeaponTypeCount && byte_A83CA5 ) /*0x4e703c*/
  {
    __3_YAXPAX_Z(g_SuperWeaponTypeCount); /*0x4e703f*/
    g_SuperWeaponTypeCount = 0; /*0x4e7047*/
  }
  byte_A83CA5 = 0; /*0x4e704d*/
  dword_A83CA0 = 0; /*0x4e7053*/
}
}
} // namespace gamemd

// 0x4E7060
namespace gamemd {
int sub_4E7060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7060()
{
  MEMORY[0xA8E8D4] = 0; /*0x4e7067*/
  MEMORY[0xA8E8D8] = 0; /*0x4e706c*/
  MEMORY[0xA8E8DC] = 1; /*0x4e7071*/
  MEMORY[0xA8E8DD] = 0; /*0x4e7078*/
  MEMORY[0xA8E8D0] = (int)&vt_DynamicVectorClass_TaskForceClass; /*0x4e707d*/
  MEMORY[0xA8E8E4] = 10; /*0x4e7087*/
  MEMORY[0xA8E8E0] = 0; /*0x4e7091*/
  return atexit(sub_4E70A0); /*0x4e709c*/
}
}
} // namespace gamemd

// 0x4E70A0
namespace gamemd {
void sub_4E70A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E70A0()
{
  MEMORY[0xA8E8D0] = (int)&vt_VectorClass_TaskForceClass; /*0x4e70a8*/
  if ( MEMORY[0xA8E8D4] && MEMORY[0xA8E8DD] ) /*0x4e70bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E8D4]); /*0x4e70bf*/
    MEMORY[0xA8E8D4] = 0; /*0x4e70c7*/
  }
  MEMORY[0xA8E8DD] = 0; /*0x4e70cd*/
  MEMORY[0xA8E8D8] = 0; /*0x4e70d3*/
}
}
} // namespace gamemd

// 0x4E70E0
namespace gamemd {
int sub_4E70E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E70E0()
{
  MEMORY[0xA8ECA4] = 0; /*0x4e70e7*/
  MEMORY[0xA8ECA8] = 0; /*0x4e70ec*/
  MEMORY[0xA8ECAC] = 1; /*0x4e70f1*/
  MEMORY[0xA8ECAD] = 0; /*0x4e70f8*/
  MEMORY[0xA8ECA0] = (int)&vt_DynamicVectorClass_TeamTypeClass; /*0x4e70fd*/
  MEMORY[0xA8ECB4] = 10; /*0x4e7107*/
  MEMORY[0xA8ECB0] = 0; /*0x4e7111*/
  return atexit(sub_4E7120); /*0x4e711c*/
}
}
} // namespace gamemd

// 0x4E7120
namespace gamemd {
void sub_4E7120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7120()
{
  MEMORY[0xA8ECA0] = (int)&vt_VectorClass_TeamTypeClass; /*0x4e7128*/
  if ( MEMORY[0xA8ECA4] && MEMORY[0xA8ECAD] ) /*0x4e713c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECA4]); /*0x4e713f*/
    MEMORY[0xA8ECA4] = 0; /*0x4e7147*/
  }
  MEMORY[0xA8ECAD] = 0; /*0x4e714d*/
  MEMORY[0xA8ECA8] = 0; /*0x4e7153*/
}
}
} // namespace gamemd

// 0x4E7160
namespace gamemd {
int sub_4E7160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7160()
{
  unk_8B41CC = 0; /*0x4e7167*/
  dword_8B41D0 = 0; /*0x4e716c*/
  unk_8B41D4 = 1; /*0x4e7171*/
  unk_8B41D5 = 0; /*0x4e7178*/
  dword_8B41C8 = (int)&vt_DynamicVectorClass_ScriptTypeClass; /*0x4e717d*/
  dword_8B41DC = 10; /*0x4e7187*/
  dword_8B41D8 = 0; /*0x4e7191*/
  return atexit(sub_4E71A0); /*0x4e719c*/
}
}
} // namespace gamemd

// 0x4E71A0
namespace gamemd {
void sub_4E71A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E71A0()
{
  dword_8B41C8 = (int)&vt_VectorClass_ScriptTypeClass; /*0x4e71a8*/
  if ( unk_8B41CC && unk_8B41D5 ) /*0x4e71bc*/
  {
    __3_YAXPAX_Z(unk_8B41CC); /*0x4e71bf*/
    unk_8B41CC = 0; /*0x4e71c7*/
  }
  unk_8B41D5 = 0; /*0x4e71cd*/
  dword_8B41D0 = 0; /*0x4e71d3*/
}
}
} // namespace gamemd

// 0x4E71E0
namespace gamemd {
int sub_4E71E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E71E0()
{
  MEMORY[0xA83D84] = 0; /*0x4e71e7*/
  MEMORY[0xA83D88] = 0; /*0x4e71ec*/
  MEMORY[0xA83D8C] = 1; /*0x4e71f1*/
  MEMORY[0xA83D8D] = 0; /*0x4e71f8*/
  MEMORY[0xA83D80] = (int)&vt_DynamicVectorClass_OverlayTypeClass; /*0x4e71fd*/
  MEMORY[0xA83D94] = 10; /*0x4e7207*/
  MEMORY[0xA83D90] = 0; /*0x4e7211*/
  return atexit(sub_4E7220); /*0x4e721c*/
}
}
} // namespace gamemd

// 0x4E7220
namespace gamemd {
void sub_4E7220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7220()
{
  MEMORY[0xA83D80] = (int)&vt_VectorClass_OverlayTypeClass; /*0x4e7228*/
  if ( MEMORY[0xA83D84] && MEMORY[0xA83D8D] ) /*0x4e723c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D84]); /*0x4e723f*/
    MEMORY[0xA83D84] = 0; /*0x4e7247*/
  }
  MEMORY[0xA83D8D] = 0; /*0x4e724d*/
  MEMORY[0xA83D88] = 0; /*0x4e7253*/
}
}
} // namespace gamemd

// 0x4E7260
namespace gamemd {
int sub_4E7260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7260()
{
  MEMORY[0xA8EC1C] = 0; /*0x4e7267*/
  MEMORY[0xA8EC20] = 0; /*0x4e726c*/
  MEMORY[0xA8EC24] = 1; /*0x4e7271*/
  MEMORY[0xA8EC25] = 0; /*0x4e7278*/
  MEMORY[0xA8EC18] = (int)&vt_DynamicVectorClass_SmudgeTypeClass; /*0x4e727d*/
  MEMORY[0xA8EC2C] = 10; /*0x4e7287*/
  MEMORY[0xA8EC28] = 0; /*0x4e7291*/
  return atexit(sub_4E72A0); /*0x4e729c*/
}
}
} // namespace gamemd

// 0x4E72A0
namespace gamemd {
void sub_4E72A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E72A0()
{
  MEMORY[0xA8EC18] = (int)&vt_VectorClass_SmudgeTypeClass; /*0x4e72a8*/
  if ( MEMORY[0xA8EC1C] && MEMORY[0xA8EC25] ) /*0x4e72bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC1C]); /*0x4e72bf*/
    MEMORY[0xA8EC1C] = 0; /*0x4e72c7*/
  }
  MEMORY[0xA8EC25] = 0; /*0x4e72cd*/
  MEMORY[0xA8EC20] = 0; /*0x4e72d3*/
}
}
} // namespace gamemd

// 0x4E72E0
namespace gamemd {
int sub_4E72E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E72E0()
{
  MEMORY[0xA8E31C] = 0; /*0x4e72e7*/
  MEMORY[0xA8E320] = 0; /*0x4e72ec*/
  MEMORY[0xA8E324] = 1; /*0x4e72f1*/
  MEMORY[0xA8E325] = 0; /*0x4e72f8*/
  MEMORY[0xA8E318] = (int)&vt_DynamicVectorClass_TerrainTypeClass; /*0x4e72fd*/
  MEMORY[0xA8E32C] = 10; /*0x4e7307*/
  MEMORY[0xA8E328] = 0; /*0x4e7311*/
  return atexit(sub_4E7320); /*0x4e731c*/
}
}
} // namespace gamemd

// 0x4E7320
namespace gamemd {
void sub_4E7320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7320()
{
  MEMORY[0xA8E318] = (int)&vt_VectorClass_TerrainTypeClass; /*0x4e7328*/
  if ( MEMORY[0xA8E31C] && MEMORY[0xA8E325] ) /*0x4e733c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E31C]); /*0x4e733f*/
    MEMORY[0xA8E31C] = 0; /*0x4e7347*/
  }
  MEMORY[0xA8E325] = 0; /*0x4e734d*/
  MEMORY[0xA8E320] = 0; /*0x4e7353*/
}
}
} // namespace gamemd

// 0x4E7360
namespace gamemd {
int sub_4E7360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7360()
{
  g_TriggerTypeCount = 0; /*0x4e7367*/
  dword_A83C70 = 0; /*0x4e736c*/
  byte_A83C74 = 1; /*0x4e7371*/
  byte_A83C75 = 0; /*0x4e7378*/
  dword_A83C68 = (int)&vt_DynamicVectorClass_BuildingTypeClass; /*0x4e737d*/
  dword_A83C7C = 10; /*0x4e7387*/
  g_TriggerClassCount = 0; /*0x4e7391*/
  return atexit(sub_4E73A0); /*0x4e739c*/
}
}
} // namespace gamemd

// 0x4E73A0
namespace gamemd {
void sub_4E73A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E73A0()
{
  dword_A83C68 = (int)&vt_VectorClass_BuildingTypeClass; /*0x4e73a8*/
  if ( g_TriggerTypeCount && byte_A83C75 ) /*0x4e73bc*/
  {
    __3_YAXPAX_Z(g_TriggerTypeCount); /*0x4e73bf*/
    g_TriggerTypeCount = 0; /*0x4e73c7*/
  }
  byte_A83C75 = 0; /*0x4e73cd*/
  dword_A83C70 = 0; /*0x4e73d3*/
}
}
} // namespace gamemd

// 0x4E73E0
namespace gamemd {
int sub_4E73E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E73E0()
{
  MEMORY[0xA8B21C] = 0; /*0x4e73e7*/
  MEMORY[0xA8B220] = 0; /*0x4e73ec*/
  MEMORY[0xA8B224] = 1; /*0x4e73f1*/
  MEMORY[0xA8B225] = 0; /*0x4e73f8*/
  MEMORY[0xA8B218] = (int)&vt_DynamicVectorClass_AircraftTypeClass; /*0x4e73fd*/
  MEMORY[0xA8B22C] = 10; /*0x4e7407*/
  MEMORY[0xA8B228] = 0; /*0x4e7411*/
  return atexit(sub_4E7420); /*0x4e741c*/
}
}
} // namespace gamemd

// 0x4E7420
namespace gamemd {
void sub_4E7420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7420()
{
  MEMORY[0xA8B218] = (int)&vt_VectorClass_AircraftTypeClass; /*0x4e7428*/
  if ( MEMORY[0xA8B21C] && MEMORY[0xA8B225] ) /*0x4e743c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8B21C]); /*0x4e743f*/
    MEMORY[0xA8B21C] = 0; /*0x4e7447*/
  }
  MEMORY[0xA8B225] = 0; /*0x4e744d*/
  MEMORY[0xA8B220] = 0; /*0x4e7453*/
}
}
} // namespace gamemd

// 0x4E7460
namespace gamemd {
int sub_4E7460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7460()
{
  g_UnitTypeCount2 = 0; /*0x4e7467*/
  dword_A83CE8 = 0; /*0x4e746c*/
  byte_A83CEC = 1; /*0x4e7471*/
  byte_A83CED = 0; /*0x4e7478*/
  UnitTypeClass_Array = (int)&vt_DynamicVectorClass_UnitTypeClass; /*0x4e747d*/
  dword_A83CF4 = 10; /*0x4e7487*/
  g_CrateCount = 0; /*0x4e7491*/
  return atexit(sub_4E74A0); /*0x4e749c*/
}
}
} // namespace gamemd

// 0x4E74A0
namespace gamemd {
void sub_4E74A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E74A0()
{
  UnitTypeClass_Array = (int)&vt_VectorClass_UnitTypeClass; /*0x4e74a8*/
  if ( g_UnitTypeCount2 && byte_A83CED ) /*0x4e74bc*/
  {
    __3_YAXPAX_Z(g_UnitTypeCount2); /*0x4e74bf*/
    g_UnitTypeCount2 = 0; /*0x4e74c7*/
  }
  byte_A83CED = 0; /*0x4e74cd*/
  dword_A83CE8 = 0; /*0x4e74d3*/
}
}
} // namespace gamemd

// 0x4E74E0
namespace gamemd {
int sub_4E74E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E74E0()
{
  MEMORY[0x8B4154] = 0; /*0x4e74e7*/
  MEMORY[0x8B4158] = 0; /*0x4e74ec*/
  MEMORY[0x8B415C] = 1; /*0x4e74f1*/
  MEMORY[0x8B415D] = 0; /*0x4e74f8*/
  MEMORY[0x8B4150] = (int)&vt_DynamicVectorClass_AnimTypeClass; /*0x4e74fd*/
  MEMORY[0x8B4164] = 10; /*0x4e7507*/
  MEMORY[0x8B4160] = 0; /*0x4e7511*/
  return atexit(sub_4E7520); /*0x4e751c*/
}
}
} // namespace gamemd

// 0x4E7520
namespace gamemd {
void sub_4E7520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7520()
{
  MEMORY[0x8B4150] = (int)&vt_VectorClass_AnimTypeClass; /*0x4e7528*/
  if ( MEMORY[0x8B4154] && MEMORY[0x8B415D] ) /*0x4e753c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B4154]); /*0x4e753f*/
    MEMORY[0x8B4154] = 0; /*0x4e7547*/
  }
  MEMORY[0x8B415D] = 0; /*0x4e754d*/
  MEMORY[0x8B4158] = 0; /*0x4e7553*/
}
}
} // namespace gamemd

// 0x4E7560
namespace gamemd {
int sub_4E7560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7560()
{
  MEMORY[0xA8E34C] = 0; /*0x4e7567*/
  MEMORY[0xA8E350] = 0; /*0x4e756c*/
  MEMORY[0xA8E354] = 1; /*0x4e7571*/
  MEMORY[0xA8E355] = 0; /*0x4e7578*/
  MEMORY[0xA8E348] = (int)&vt_DynamicVectorClass_InfantryTypeClass; /*0x4e757d*/
  MEMORY[0xA8E35C] = 10; /*0x4e7587*/
  MEMORY[0xA8E358] = 0; /*0x4e7591*/
  return atexit(sub_4E75A0); /*0x4e759c*/
}
}
} // namespace gamemd

// 0x4E75A0
namespace gamemd {
void sub_4E75A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E75A0()
{
  MEMORY[0xA8E348] = (int)&vt_VectorClass_InfantryTypeClass; /*0x4e75a8*/
  if ( MEMORY[0xA8E34C] && MEMORY[0xA8E355] ) /*0x4e75bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E34C]); /*0x4e75bf*/
    MEMORY[0xA8E34C] = 0; /*0x4e75c7*/
  }
  MEMORY[0xA8E355] = 0; /*0x4e75cd*/
  MEMORY[0xA8E350] = 0; /*0x4e75d3*/
}
}
} // namespace gamemd

// 0x4E75E0
namespace gamemd {
int sub_4E75E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E75E0()
{
  dword_A83C84 = 0; /*0x4e75e7*/
  dword_A83C88 = 0; /*0x4e75ec*/
  byte_A83C8C = 1; /*0x4e75f1*/
  byte_A83C8D = 0; /*0x4e75f8*/
  BulletTypeClass_Array = (int)&vt_DynamicVectorClass_BulletTypeClass; /*0x4e75fd*/
  dword_A83C94 = 10; /*0x4e7607*/
  g_BulletTypeInitState = 0; /*0x4e7611*/
  return atexit(sub_4E7620); /*0x4e761c*/
}
}
} // namespace gamemd

// 0x4E7620
namespace gamemd {
void sub_4E7620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7620()
{
  BulletTypeClass_Array = (int)&vt_VectorClass_BulletTypeClass; /*0x4e7628*/
  if ( dword_A83C84 && byte_A83C8D ) /*0x4e763c*/
  {
    __3_YAXPAX_Z(dword_A83C84); /*0x4e763f*/
    dword_A83C84 = 0; /*0x4e7647*/
  }
  byte_A83C8D = 0; /*0x4e764d*/
  dword_A83C88 = 0; /*0x4e7653*/
}
}
} // namespace gamemd

// 0x4E7660
namespace gamemd {
int sub_4E7660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7660()
{
  MEMORY[0xA8EB2C] = 0; /*0x4e7667*/
  MEMORY[0xA8EB30] = 0; /*0x4e766c*/
  MEMORY[0xA8EB34] = 1; /*0x4e7671*/
  MEMORY[0xA8EB35] = 0; /*0x4e7678*/
  MEMORY[0xA8EB28] = (int)&vt_DynamicVectorClass_VoxelAnimTypeClass; /*0x4e767d*/
  MEMORY[0xA8EB3C] = 10; /*0x4e7687*/
  MEMORY[0xA8EB38] = 0; /*0x4e7691*/
  return atexit(sub_4E76A0); /*0x4e769c*/
}
}
} // namespace gamemd

// 0x4E76A0
namespace gamemd {
void sub_4E76A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E76A0()
{
  MEMORY[0xA8EB28] = (int)&vt_VectorClass_VoxelAnimTypeClass; /*0x4e76a8*/
  if ( MEMORY[0xA8EB2C] && MEMORY[0xA8EB35] ) /*0x4e76bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB2C]); /*0x4e76bf*/
    MEMORY[0xA8EB2C] = 0; /*0x4e76c7*/
  }
  MEMORY[0xA8EB35] = 0; /*0x4e76cd*/
  MEMORY[0xA8EB30] = 0; /*0x4e76d3*/
}
}
} // namespace gamemd

// 0x4E76E0
namespace gamemd {
int sub_4E76E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E76E0()
{
  MEMORY[0xA8ED2C] = 0; /*0x4e76e7*/
  MEMORY[0xA8ED30] = 0; /*0x4e76ec*/
  MEMORY[0xA8ED34] = 1; /*0x4e76f1*/
  MEMORY[0xA8ED35] = 0; /*0x4e76f8*/
  MEMORY[0xA8ED28] = (int)&vt_DynamicVectorClass_IsometricTileTypeClass; /*0x4e76fd*/
  MEMORY[0xA8ED3C] = 10; /*0x4e7707*/
  MEMORY[0xA8ED38] = 0; /*0x4e7711*/
  return atexit(sub_4E7720); /*0x4e771c*/
}
}
} // namespace gamemd

// 0x4E7720
namespace gamemd {
void sub_4E7720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7720()
{
  MEMORY[0xA8ED28] = (int)&vt_VectorClass_IsometricTileTypeClass; /*0x4e7728*/
  if ( MEMORY[0xA8ED2C] && MEMORY[0xA8ED35] ) /*0x4e773c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ED2C]); /*0x4e773f*/
    MEMORY[0xA8ED2C] = 0; /*0x4e7747*/
  }
  MEMORY[0xA8ED35] = 0; /*0x4e774d*/
  MEMORY[0xA8ED30] = 0; /*0x4e7753*/
}
}
} // namespace gamemd

// 0x4E7760
namespace gamemd {
int sub_4E7760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7760()
{
  MEMORY[0xA83D9C] = 0; /*0x4e7767*/
  MEMORY[0xA83DA0] = 0; /*0x4e776c*/
  MEMORY[0xA83DA4] = 1; /*0x4e7771*/
  MEMORY[0xA83DA5] = 0; /*0x4e7778*/
  MEMORY[0xA83D98] = (int)&vt_DynamicVectorClass_ParticleTypeClass; /*0x4e777d*/
  MEMORY[0xA83DAC] = 10; /*0x4e7787*/
  MEMORY[0xA83DA8] = 0; /*0x4e7791*/
  return atexit(sub_4E77A0); /*0x4e779c*/
}
}
} // namespace gamemd

// 0x4E77A0
namespace gamemd {
void sub_4E77A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E77A0()
{
  MEMORY[0xA83D98] = (int)&vt_VectorClass_ParticleTypeClass; /*0x4e77a8*/
  if ( MEMORY[0xA83D9C] && MEMORY[0xA83DA5] ) /*0x4e77bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D9C]); /*0x4e77bf*/
    MEMORY[0xA83D9C] = 0; /*0x4e77c7*/
  }
  MEMORY[0xA83DA5] = 0; /*0x4e77cd*/
  MEMORY[0xA83DA0] = 0; /*0x4e77d3*/
}
}
} // namespace gamemd

// 0x4E77E0
namespace gamemd {
int sub_4E77E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E77E0()
{
  MEMORY[0xA83D6C] = 0; /*0x4e77e7*/
  MEMORY[0xA83D70] = 0; /*0x4e77ec*/
  MEMORY[0xA83D74] = 1; /*0x4e77f1*/
  MEMORY[0xA83D75] = 0; /*0x4e77f8*/
  MEMORY[0xA83D68] = (int)&vt_DynamicVectorClass_ParticleSystemTypeClass; /*0x4e77fd*/
  MEMORY[0xA83D7C] = 10; /*0x4e7807*/
  MEMORY[0xA83D78] = 0; /*0x4e7811*/
  return atexit(sub_4E7820); /*0x4e781c*/
}
}
} // namespace gamemd

// 0x4E7820
namespace gamemd {
void sub_4E7820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7820()
{
  MEMORY[0xA83D68] = (int)&vt_VectorClass_ParticleSystemTypeClass; /*0x4e7828*/
  if ( MEMORY[0xA83D6C] && MEMORY[0xA83D75] ) /*0x4e783c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D6C]); /*0x4e783f*/
    MEMORY[0xA83D6C] = 0; /*0x4e7847*/
  }
  MEMORY[0xA83D75] = 0; /*0x4e784d*/
  MEMORY[0xA83D70] = 0; /*0x4e7853*/
}
}
} // namespace gamemd

// 0x4E7860
namespace gamemd {
int sub_4E7860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7860()
{
  MEMORY[0xA8E334] = 0; /*0x4e7867*/
  MEMORY[0xA8E338] = 0; /*0x4e786c*/
  MEMORY[0xA8E33C] = 1; /*0x4e7871*/
  MEMORY[0xA8E33D] = 0; /*0x4e7878*/
  MEMORY[0xA8E330] = (int)&vt_DynamicVectorClass_SuperWeaponTypeClass; /*0x4e787d*/
  MEMORY[0xA8E344] = 10; /*0x4e7887*/
  MEMORY[0xA8E340] = 0; /*0x4e7891*/
  return atexit(sub_4E78A0); /*0x4e789c*/
}
}
} // namespace gamemd

// 0x4E78A0
namespace gamemd {
void sub_4E78A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E78A0()
{
  MEMORY[0xA8E330] = (int)&vt_VectorClass_SuperWeaponTypeClass; /*0x4e78a8*/
  if ( MEMORY[0xA8E334] && MEMORY[0xA8E33D] ) /*0x4e78bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E334]); /*0x4e78bf*/
    MEMORY[0xA8E334] = 0; /*0x4e78c7*/
  }
  MEMORY[0xA8E33D] = 0; /*0x4e78cd*/
  MEMORY[0xA8E338] = 0; /*0x4e78d3*/
}
}
} // namespace gamemd

// 0x4E78E0
namespace gamemd {
int sub_4E78E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E78E0()
{
  dword_A83CBC = 0; /*0x4e78e7*/
  dword_A83CC0 = 0; /*0x4e78ec*/
  byte_A83CC4 = 1; /*0x4e78f1*/
  byte_A83CC5 = 0; /*0x4e78f8*/
  dword_A83CB8 = (int)&vt_DynamicVectorClass_SuperClass; /*0x4e78fd*/
  dword_A83CCC = 10; /*0x4e7907*/
  dword_A83CC8 = 0; /*0x4e7911*/
  return atexit(sub_4E7920); /*0x4e791c*/
}
}
} // namespace gamemd

// 0x4E7920
namespace gamemd {
void sub_4E7920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7920()
{
  dword_A83CB8 = (int)&vt_VectorClass_SuperClass; /*0x4e7928*/
  if ( dword_A83CBC && byte_A83CC5 ) /*0x4e793c*/
  {
    __3_YAXPAX_Z(dword_A83CBC); /*0x4e793f*/
    dword_A83CBC = 0; /*0x4e7947*/
  }
  byte_A83CC5 = 0; /*0x4e794d*/
  dword_A83CC0 = 0; /*0x4e7953*/
}
}
} // namespace gamemd

// 0x4E7960
namespace gamemd {
int sub_4E7960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7960()
{
  MEMORY[0xA83D54] = 0; /*0x4e7967*/
  MEMORY[0xA83D58] = 0; /*0x4e796c*/
  MEMORY[0xA83D5C] = 1; /*0x4e7971*/
  MEMORY[0xA83D5D] = 0; /*0x4e7978*/
  MEMORY[0xA83D50] = (int)&vt_DynamicVectorClass_SuperClass; /*0x4e797d*/
  MEMORY[0xA83D64] = 10; /*0x4e7987*/
  MEMORY[0xA83D60] = 0; /*0x4e7991*/
  return atexit(sub_4E79A0); /*0x4e799c*/
}
}
} // namespace gamemd

// 0x4E79A0
namespace gamemd {
void sub_4E79A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E79A0()
{
  MEMORY[0xA83D50] = (int)&vt_VectorClass_SuperClass; /*0x4e79a8*/
  if ( MEMORY[0xA83D54] && MEMORY[0xA83D5D] ) /*0x4e79bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83D54]); /*0x4e79bf*/
    MEMORY[0xA83D54] = 0; /*0x4e79c7*/
  }
  MEMORY[0xA83D5D] = 0; /*0x4e79cd*/
  MEMORY[0xA83D58] = 0; /*0x4e79d3*/
}
}
} // namespace gamemd

// 0x4E79E0
namespace gamemd {
int sub_4E79E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E79E0()
{
  MEMORY[0xA8EC7C] = 0; /*0x4e79e7*/
  MEMORY[0xA8EC80] = 0; /*0x4e79ec*/
  MEMORY[0xA8EC84] = 1; /*0x4e79f1*/
  MEMORY[0xA8EC85] = 0; /*0x4e79f8*/
  MEMORY[0xA8EC78] = (TechnoClass *)&vt_DynamicVectorClass_TechnoClass; /*0x4e79fd*/
  MEMORY[0xA8EC8C] = 10; /*0x4e7a07*/
  MEMORY[0xA8EC88] = 0; /*0x4e7a11*/
  return atexit(sub_4E7A20); /*0x4e7a1c*/
}
}
} // namespace gamemd

// 0x4E7A20
namespace gamemd {
void sub_4E7A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7A20()
{
  MEMORY[0xA8EC78] = (TechnoClass *)&vt_VectorClass_TechnoClass; /*0x4e7a28*/
  if ( MEMORY[0xA8EC7C] && MEMORY[0xA8EC85] ) /*0x4e7a3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EC7C]); /*0x4e7a3f*/
    MEMORY[0xA8EC7C] = 0; /*0x4e7a47*/
  }
  MEMORY[0xA8EC85] = 0; /*0x4e7a4d*/
  MEMORY[0xA8EC80] = 0; /*0x4e7a53*/
}
}
} // namespace gamemd

// 0x4E7A60
namespace gamemd {
int sub_4E7A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7A60()
{
  MEMORY[0xA8EB04] = 0; /*0x4e7a67*/
  MEMORY[0xA8EB08] = 0; /*0x4e7a6c*/
  MEMORY[0xA8EB0C] = 1; /*0x4e7a71*/
  MEMORY[0xA8EB0D] = 0; /*0x4e7a78*/
  MEMORY[0xA8EB00] = (int)&vt_DynamicVectorClass_TechnoTypeClass; /*0x4e7a7d*/
  MEMORY[0xA8EB14] = 10; /*0x4e7a87*/
  MEMORY[0xA8EB10] = 0; /*0x4e7a91*/
  return atexit(sub_4E7AA0); /*0x4e7a9c*/
}
}
} // namespace gamemd

// 0x4E7AA0
namespace gamemd {
void sub_4E7AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7AA0()
{
  MEMORY[0xA8EB00] = (int)&vt_VectorClass_TechnoTypeClass; /*0x4e7aa8*/
  if ( MEMORY[0xA8EB04] && MEMORY[0xA8EB0D] ) /*0x4e7abc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8EB04]); /*0x4e7abf*/
    MEMORY[0xA8EB04] = 0; /*0x4e7ac7*/
  }
  MEMORY[0xA8EB0D] = 0; /*0x4e7acd*/
  MEMORY[0xA8EB08] = 0; /*0x4e7ad3*/
}
}
} // namespace gamemd

// 0x4E7AE0
namespace gamemd {
int sub_4E7AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7AE0()
{
  MEMORY[0xA8E364] = 0; /*0x4e7ae7*/
  MEMORY[0xA8E368] = 0; /*0x4e7aec*/
  MEMORY[0xA8E36C] = 1; /*0x4e7af1*/
  MEMORY[0xA8E36D] = 0; /*0x4e7af8*/
  MEMORY[0xA8E360] = (int)&vt_DynamicVectorClass_ObjectClass; /*0x4e7afd*/
  MEMORY[0xA8E374] = 10; /*0x4e7b07*/
  MEMORY[0xA8E370] = 0; /*0x4e7b11*/
  return atexit(sub_4E7B20); /*0x4e7b1c*/
}
}
} // namespace gamemd

// 0x4E7B20
namespace gamemd {
void sub_4E7B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7B20()
{
  MEMORY[0xA8E360] = (int)&vt_VectorClass_ObjectClass; /*0x4e7b28*/
  if ( MEMORY[0xA8E364] && MEMORY[0xA8E36D] ) /*0x4e7b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E364]); /*0x4e7b3f*/
    MEMORY[0xA8E364] = 0; /*0x4e7b47*/
  }
  MEMORY[0xA8E36D] = 0; /*0x4e7b4d*/
  MEMORY[0xA8E368] = 0; /*0x4e7b53*/
}
}
} // namespace gamemd

// 0x4E7B60
namespace gamemd {
int sub_4E7B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7B60()
{
  MEMORY[0xA8E96C] = 0; /*0x4e7b67*/
  MEMORY[0xA8E970] = 0; /*0x4e7b6c*/
  MEMORY[0xA8E974] = 1; /*0x4e7b71*/
  MEMORY[0xA8E975] = 0; /*0x4e7b78*/
  MEMORY[0xA8E968] = (int)&vt_DynamicVectorClass_AbstractTypeClass; /*0x4e7b7d*/
  MEMORY[0xA8E97C] = 10; /*0x4e7b87*/
  MEMORY[0xA8E978] = 0; /*0x4e7b91*/
  return atexit(sub_4E7BA0); /*0x4e7b9c*/
}
}
} // namespace gamemd

// 0x4E7BA0
namespace gamemd {
void sub_4E7BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7BA0()
{
  MEMORY[0xA8E968] = (int)&vt_VectorClass_AbstractTypeClass; /*0x4e7ba8*/
  if ( MEMORY[0xA8E96C] && MEMORY[0xA8E975] ) /*0x4e7bbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8E96C]); /*0x4e7bbf*/
    MEMORY[0xA8E96C] = 0; /*0x4e7bc7*/
  }
  MEMORY[0xA8E975] = 0; /*0x4e7bcd*/
  MEMORY[0xA8E970] = 0; /*0x4e7bd3*/
}
}
} // namespace gamemd

// 0x4E7BE0
namespace gamemd {
int sub_4E7BE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7BE0()
{
  unk_8B41E4 = 0; /*0x4e7be7*/
  unk_8B41E8 = 0; /*0x4e7bec*/
  unk_8B41EC = 1; /*0x4e7bf1*/
  unk_8B41ED = 0; /*0x4e7bf8*/
  dword_8B41E0 = (int)&vt_DynamicVectorClass_BuildingClass; /*0x4e7bfd*/
  unk_8B41F4 = 10; /*0x4e7c07*/
  unk_8B41F0 = 0; /*0x4e7c11*/
  return atexit(sub_4E7C20); /*0x4e7c1c*/
}
}
} // namespace gamemd

// 0x4E7C20
namespace gamemd {
void sub_4E7C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7C20()
{
  dword_8B41E0 = (int)&vt_VectorClass_BuildingClass; /*0x4e7c28*/
  if ( unk_8B41E4 && unk_8B41ED ) /*0x4e7c3c*/
  {
    __3_YAXPAX_Z(unk_8B41E4); /*0x4e7c3f*/
    unk_8B41E4 = 0; /*0x4e7c47*/
  }
  unk_8B41ED = 0; /*0x4e7c4d*/
  unk_8B41E8 = 0; /*0x4e7c53*/
}
}
} // namespace gamemd

// 0x4E7C60
namespace gamemd {
int sub_4E7C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7C60()
{
  MEMORY[0xA83E04] = 0; /*0x4e7c67*/
  MEMORY[0xA83E08] = 0; /*0x4e7c6c*/
  MEMORY[0xA83E0C] = 1; /*0x4e7c71*/
  MEMORY[0xA83E0D] = 0; /*0x4e7c78*/
  MEMORY[0xA83E00] = (int)&vt_DynamicVectorClass_AnimClass; /*0x4e7c7d*/
  MEMORY[0xA83E14] = 10; /*0x4e7c87*/
  MEMORY[0xA83E10] = 0; /*0x4e7c91*/
  return atexit(sub_4E7CA0); /*0x4e7c9c*/
}
}
} // namespace gamemd

// 0x4E7CA0
namespace gamemd {
void sub_4E7CA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7CA0()
{
  MEMORY[0xA83E00] = (int)&vt_VectorClass_AnimClass; /*0x4e7ca8*/
  if ( MEMORY[0xA83E04] && MEMORY[0xA83E0D] ) /*0x4e7cbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xA83E04]); /*0x4e7cbf*/
    MEMORY[0xA83E04] = 0; /*0x4e7cc7*/
  }
  MEMORY[0xA83E0D] = 0; /*0x4e7ccd*/
  MEMORY[0xA83E08] = 0; /*0x4e7cd3*/
}
}
} // namespace gamemd

// 0x4E7CE0
namespace gamemd {
void sub_4E7CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4E7CE0()
{
  MEMORY[0xA8E8C8].field_0 = (struct IUnknownVtbl *)&vt_TiberianSunClassFactory; /*0x4e7ce0*/
}
}
} // namespace gamemd

// 0x4E7D30
namespace gamemd {
int unknown_libname_13()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_13()
{
  MEMORY[0xA8E7B0][0] = &vt_RandomStraw; /*0x66170d*/
  MEMORY[0xA8E7B0][3] = 0; /*0x661713*/
  MEMORY[0xA8E7B0][4] = 0; /*0x661716*/
  memset(&MEMORY[0xA8E7B0][5], 0, 0x100u); /*0x661719*/
  Straw::Dtor(MEMORY[0xA8E7B0]); /*0x66171d*/
}
}
} // namespace gamemd

// 0x4E7D40
namespace gamemd {
int sub_4E7D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7D40()
{
  MEMORY[0xA8ECBC] = 0; /*0x4e7d47*/
  MEMORY[0xA8ECC0] = 0; /*0x4e7d4c*/
  MEMORY[0xA8ECC4] = 1; /*0x4e7d51*/
  MEMORY[0xA8ECC5] = 0; /*0x4e7d58*/
  MEMORY[0xA8ECB8] = (ObjectClass *)&vt_DynamicVectorClass_ObjectClass; /*0x4e7d5d*/
  MEMORY[0xA8ECCC] = 10; /*0x4e7d67*/
  MEMORY[0xA8ECC8] = 0; /*0x4e7d71*/
  return atexit(sub_4E7D80); /*0x4e7d7c*/
}
}
} // namespace gamemd

// 0x4E7D80
namespace gamemd {
void sub_4E7D80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7D80()
{
  MEMORY[0xA8ECB8] = (ObjectClass *)&vt_VectorClass_ObjectClass; /*0x4e7d88*/
  if ( MEMORY[0xA8ECBC] && MEMORY[0xA8ECC5] ) /*0x4e7d9c*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECBC]); /*0x4e7d9f*/
    MEMORY[0xA8ECBC] = 0; /*0x4e7da7*/
  }
  MEMORY[0xA8ECC5] = 0; /*0x4e7dad*/
  MEMORY[0xA8ECC0] = 0; /*0x4e7db3*/
}
}
} // namespace gamemd

// 0x4E7DE0
namespace gamemd {
void sub_4E7DE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7DE0()
{
  MEMORY[0xA8ECE0] = (int)&vt_VersionClass; /*0x4e7de0*/
}
}
} // namespace gamemd

// 0x4E7E50
namespace gamemd {
void sub_4E7E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7E50()
{
  dword_A83D24 = (int)&vt_VectorClass_ThemeControl; /*0x4e7e58*/
  if ( dword_A83D28 && byte_A83D31 ) /*0x4e7e6c*/
  {
    __3_YAXPAX_Z(dword_A83D28); /*0x4e7e6f*/
    dword_A83D28 = 0; /*0x4e7e77*/
  }
  byte_A83D31 = 0; /*0x4e7e7d*/
  dword_A83D2C = 0; /*0x4e7e83*/
}
}
} // namespace gamemd

// 0x4E7EA0
namespace gamemd {
char * sub_4E7EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_4E7EA0()
{
  char *result; // eax
  int v1; // ecx

  result = g_NetworkPacketIndex; /*0x4e7ea0*/
  v1 = 128; /*0x4e7ea5*/
  do /*0x4e7eb2*/
  {
    *result = 0; /*0x4e7eac*/
    result += 111; /*0x4e7eae*/
    --v1; /*0x4e7eb1*/
  }
  while ( v1 ); /*0x4e7eb2*/
  Networking_LastEventIndex = 0; /*0x4e7eb4*/
  g_NetworkEventIndex = 0; /*0x4e7eba*/
  Networking_NextPacketIndex = 0; /*0x4e7ec0*/
  return result; /*0x4e7ec6*/
}
}
} // namespace gamemd

// 0x4E7F30
namespace gamemd {
int sub_4E7F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7F30()
{
  unk_8B41AC = 0; /*0x4e7f37*/
  unk_8B41B0 = 0; /*0x4e7f3c*/
  unk_8B41B4 = 1; /*0x4e7f41*/
  unk_8B41B5 = 0; /*0x4e7f48*/
  unk_8B41A8 = (int)&vt_DynamicVectorClass_TagClass; /*0x4e7f4d*/
  unk_8B41BC = 10; /*0x4e7f57*/
  dword_8B41B8 = 0; /*0x4e7f61*/
  return atexit(sub_4E7F70); /*0x4e7f6c*/
}
}
} // namespace gamemd

// 0x4E7F70
namespace gamemd {
void sub_4E7F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7F70()
{
  unk_8B41A8 = (int)&vt_VectorClass_TagClass; /*0x4e7f78*/
  if ( unk_8B41AC && unk_8B41B5 ) /*0x4e7f8c*/
  {
    __3_YAXPAX_Z(unk_8B41AC); /*0x4e7f8f*/
    unk_8B41AC = 0; /*0x4e7f97*/
  }
  unk_8B41B5 = 0; /*0x4e7f9d*/
  unk_8B41B0 = 0; /*0x4e7fa3*/
}
}
} // namespace gamemd

// 0x4E7FB0
namespace gamemd {
int sub_4E7FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4E7FB0()
{
  MEMORY[0x8B40CC] = 0; /*0x4e7fb7*/
  MEMORY[0x8B40D0] = 0; /*0x4e7fbc*/
  MEMORY[0x8B40D4] = 1; /*0x4e7fc1*/
  MEMORY[0x8B40D5] = 0; /*0x4e7fc8*/
  MEMORY[0x8B40C8] = (int)&vt_DynamicVectorClass_TagClass; /*0x4e7fcd*/
  MEMORY[0x8B40DC] = 10; /*0x4e7fd7*/
  MEMORY[0x8B40D8] = 0; /*0x4e7fe1*/
  return atexit(sub_4E7FF0); /*0x4e7fec*/
}
}
} // namespace gamemd

// 0x4E7FF0
namespace gamemd {
void sub_4E7FF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4E7FF0()
{
  MEMORY[0x8B40C8] = (int)&vt_VectorClass_TagClass; /*0x4e7ff8*/
  if ( MEMORY[0x8B40CC] && MEMORY[0x8B40D5] ) /*0x4e800c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40CC]); /*0x4e800f*/
    MEMORY[0x8B40CC] = 0; /*0x4e8017*/
  }
  MEMORY[0x8B40D5] = 0; /*0x4e801d*/
  MEMORY[0x8B40D0] = 0; /*0x4e8023*/
}
}
} // namespace gamemd

// 0x4E8090
namespace gamemd {
int unknown_libname_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __thiscall unknown_libname_18(ConnManClass *this)
{
  void **v1; // edi

  v1 = *(void ***)&MEMORY[0xA8D63C].__pad_1258[528]; /*0x5f1654*/
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[476] = &vt_NullModemClass; /*0x5f1657*/
  if ( v1 ) /*0x5f165f*/
  {
    FileFind::Close(v1); /*0x5f1663*/
    __3_YAXPAX_Z(v1); /*0x5f1669*/
  }
  ObjectClass::FreeResources((int)&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5f1673*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[540] != -1 ) /*0x5f1680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f168a*/
      goto LABEL_10; /*0x5f168a*/
    SerialPort::Close((HANDLE *)g_ClipboardBuffer); /*0x5f168c*/
    if ( g_ClipboardBuffer ) /*0x5f1699*/
      (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5f169f*/
    g_ClipboardBuffer = 0; /*0x5f16a1*/
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[540] = -1; /*0x5f16ad*/
    ObjectClass::FreeResources((int)&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5f16b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f16bd*/
  {
    (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5f16c3*/
    g_ClipboardBuffer = 0; /*0x5f16c5*/
  }
LABEL_10:
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[476] = &vt_ConnManClass; /*0x5f16cf*/
}
}
} // namespace gamemd

// 0x4E9240
namespace gamemd {
char HouseClass__vt_02_(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HouseClass::vt_02_(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e924c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e9256*/
    if ( a3 ) /*0x4e925c*/
      v4 = a3; /*0x4e9272*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e926e*/
    *((_BYTE *)this + 12) = 1; /*0x4e9276*/
    if ( v4 ) /*0x4e927a*/
    {
      if ( this->vtable1 ) /*0x4e9285*/
      {
        v6 = this->vtable2; /*0x4e928c*/
        if ( a2 < v6 ) /*0x4e9291*/
          v6 = a2; /*0x4e9293*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->vtable1 + 4 * i - 4) ) /*0x4e9299*/
          ++i; /*0x4e929e*/
        if ( *((_BYTE *)this + 13) ) /*0x4e92ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e92b6*/
          this->vtable1 = 0; /*0x4e92be*/
        }
      }
      this->vtable1 = v4; /*0x4e92c7*/
      this->vtable2 = a2; /*0x4e92cf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4e92d2*/
      return 1; /*0x4e92d8*/
    }
    else
    {
      return 0; /*0x4e927f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4e92e2*/
    return 1; /*0x4e92e8*/
  }
}
}
} // namespace gamemd

// 0x4E92F0
namespace gamemd {
void HouseClass__vt_03_()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HouseClass::vt_03_(int this)
{
  if ( this->vtable1 && *(_BYTE *)(this + 13) ) /*0x4e92fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9303*/
    this->vtable1 = 0; /*0x4e930b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e930e*/
  this->vtable2 = 0; /*0x4e9311*/
}
}
} // namespace gamemd

// 0x4E9320
namespace gamemd {
int HouseClass__vt_04_(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseClass::vt_04_(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->vtable3 ) /*0x4e9320*/
    return 0; /*0x4e9328*/
  v3 = this->vtable2; /*0x4e932e*/
  result = 0; /*0x4e9331*/
  if ( v3 <= 0 ) /*0x4e9335*/
    return -1; /*0x4e934c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e933b*/
  {
    if ( ++result >= v3 ) /*0x4e934a*/
      return -1; /*0x4e934a*/
  }
  return result; /*0x4e932a*/
}
}
} // namespace gamemd

// 0x4E9360
namespace gamemd {
unsigned int HouseClass__vt_05_(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall HouseClass::vt_05_(int this, int a2)
{
  if ( (unsigned char)this->vtable3 ) /*0x4e9360*/
    return (unsigned int)(a2 - this->vtable1) >> 2; /*0x4e9375*/
  else
    return 0; /*0x4e9367*/
}
}
} // namespace gamemd

// 0x4E9E20
namespace gamemd {
char ParticleSystemClass__vt_02_(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass::vt_02_(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e9e2c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e9e36*/
    if ( a3 ) /*0x4e9e3c*/
      v4 = a3; /*0x4e9e52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e9e4e*/
    *((_BYTE *)this + 12) = 1; /*0x4e9e56*/
    if ( v4 ) /*0x4e9e5a*/
    {
      if ( this->vtable1 ) /*0x4e9e65*/
      {
        v6 = this->vtable2; /*0x4e9e6c*/
        if ( a2 < v6 ) /*0x4e9e71*/
          v6 = a2; /*0x4e9e73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->vtable1 + 4 * i - 4) ) /*0x4e9e79*/
          ++i; /*0x4e9e7e*/
        if ( *((_BYTE *)this + 13) ) /*0x4e9e8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9e96*/
          this->vtable1 = 0; /*0x4e9e9e*/
        }
      }
      this->vtable1 = v4; /*0x4e9ea7*/
      this->vtable2 = a2; /*0x4e9eaf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4e9eb2*/
      return 1; /*0x4e9eb8*/
    }
    else
    {
      return 0; /*0x4e9e5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4e9ec2*/
    return 1; /*0x4e9ec8*/
  }
}
}
} // namespace gamemd

// 0x4E9ED0
namespace gamemd {
void ParticleSystemClass__vt_03_()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass::vt_03_(int this)
{
  if ( this->vtable1 && *(_BYTE *)(this + 13) ) /*0x4e9edd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e9ee3*/
    this->vtable1 = 0; /*0x4e9eeb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e9eee*/
  this->vtable2 = 0; /*0x4e9ef1*/
}
}
} // namespace gamemd

// 0x4E9F00
namespace gamemd {
int ParticleSystemClass__vt_04_(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass::vt_04_(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->vtable3 ) /*0x4e9f00*/
    return 0; /*0x4e9f08*/
  v3 = this->vtable2; /*0x4e9f0e*/
  result = 0; /*0x4e9f11*/
  if ( v3 <= 0 ) /*0x4e9f15*/
    return -1; /*0x4e9f2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e9f1b*/
  {
    if ( ++result >= v3 ) /*0x4e9f2a*/
      return -1; /*0x4e9f2a*/
  }
  return result; /*0x4e9f0a*/
}
}
} // namespace gamemd

// 0x4E9F40
namespace gamemd {
unsigned int ParticleSystemClass__vt_05_(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass::vt_05_(int this, int a2)
{
  if ( (unsigned char)this->vtable3 ) /*0x4e9f40*/
    return (unsigned int)(a2 - this->vtable1) >> 2; /*0x4e9f55*/
  else
    return 0; /*0x4e9f47*/
}
}
} // namespace gamemd

// 0x4EF4E0
namespace gamemd {
VectorClass * HouseClass__vt_00_(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall HouseClass::vt_00_(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4ef4e3*/
  *this = &vt_VectorClass_TagClass; /*0x4ef4e6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4ef4f0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef4f8*/
    *(this + 1) = 0; /*0x4ef500*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4ef50b*/
  *(this + 2) = 0; /*0x4ef511*/
  if ( (a2 & 1) != 0 ) /*0x4ef518*/
    __3_YAXPAX_Z(this); /*0x4ef51b*/
  return (VectorClass *)this; /*0x4ef525*/
}
}
} // namespace gamemd

// 0x4EF800
namespace gamemd {
VectorClass * ParticleSystemClass__vt_00_(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall ParticleSystemClass::vt_00_(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4ef803*/
  *this = &vt_VectorClass_ParticleClass; /*0x4ef806*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4ef810*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef818*/
    *(this + 1) = 0; /*0x4ef820*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4ef82b*/
  *(this + 2) = 0; /*0x4ef831*/
  if ( (a2 & 1) != 0 ) /*0x4ef838*/
    __3_YAXPAX_Z(this); /*0x4ef83b*/
  return (VectorClass *)this; /*0x4ef845*/
}
}
} // namespace gamemd

// 0x4E0C30
namespace gamemd {
void nullsub_138()
{
  ;
}
} // namespace gamemd

// 0x4E0F10
namespace gamemd {
void sub_4E0F10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3E18 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4E0F40
namespace gamemd {
void sub_4E0F40()
{
{
    DataGlobal_8B3E68 = DataGlobal_8B3E18 / 60.0;
}
}
} // namespace gamemd

// 0x4E0F60
namespace gamemd {
void sub_4E0F60()
{
{
    DataGlobal_8B3E50 = 1.0 / DataGlobal_8B3E68;
}
}
} // namespace gamemd

// 0x4E0F80
namespace gamemd {
void sub_4E0F80()
{
{
    DataGlobal_8B3E48 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4E0FA0
namespace gamemd {
void sub_4E0FA0()
{
{
    DataGlobal_8B3E20 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4E0FC0
namespace gamemd {
void sub_4E0FC0()
{
{
    DataGlobal_8B3E08 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4E0FE0
namespace gamemd {
long long sub_4E0FE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3E08 - DataGlobal_8B3E20);
    result = Math::RoundToInt(v0 * DataGlobal_8B3E18 * 0.5);
    DataGlobal_8B3E70 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E1020
namespace gamemd {
void sub_4E1020()
{
{
    DataGlobal_8B3E28 = Math::ArcTan((double)DataGlobal_8B3E70 * 0.00390625);
}
}
} // namespace gamemd

// 0x4E1050
namespace gamemd {
void sub_4E1050()
{
{
    DataGlobal_8B3E40 = Math::ArcTan((double)(2 * DataGlobal_8B3E70) / DataGlobal_8B3E18);
}
}
} // namespace gamemd

// 0x4E1080
namespace gamemd {
long long sub_4E1080()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3E70) + 0.5);
    DataGlobal_8B3E64 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E10B0
namespace gamemd {
int sub_4E10B0()
{
{
    DataGlobal_8B3E10 = 0;
    DataGlobal_8B3E12 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E10C0
namespace gamemd {
int sub_4E10C0()
{
{
    DataGlobal_8B3E30 = 0;
    DataGlobal_8B3E34 = 0;
    DataGlobal_8B3E38 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E10E0
namespace gamemd {
int sub_4E10E0()
{
{
    DataGlobal_8B3E60 = 0;
    DataGlobal_8B3E58 = 128;
    DataGlobal_8B3E5C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4E12B0
namespace gamemd {
int sub_4E12B0()
{
{
    DataGlobal_8B3E78 = 0;
    DataGlobal_8B3E7C = 0;
    DataGlobal_8B3E80 = 0;
    DataGlobal_8B3E84 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E1AF0
namespace gamemd {
int sub_4E1AF0()
{
{
    DataGlobal_8B3EA0 = 0;
    DataGlobal_8B3EA4 = 0;
    DataGlobal_8B3EA8 = 0;
    DataGlobal_8B3EAC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E1B10
namespace gamemd {
void sub_4E1B10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3EB8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4E1B40
namespace gamemd {
void sub_4E1B40()
{
{
    DataGlobal_8B3F08 = DataGlobal_8B3EB8 / 60.0;
}
}
} // namespace gamemd

// 0x4E1B60
namespace gamemd {
void sub_4E1B60()
{
{
    DataGlobal_8B3EF0 = 1.0 / DataGlobal_8B3F08;
}
}
} // namespace gamemd

// 0x4E1B80
namespace gamemd {
void sub_4E1B80()
{
{
    DataGlobal_8B3EE8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4E1BA0
namespace gamemd {
void sub_4E1BA0()
{
{
    DataGlobal_8B3EC0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4E1BC0
namespace gamemd {
void sub_4E1BC0()
{
{
    DataGlobal_8B3E98 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4E1BE0
namespace gamemd {
long long sub_4E1BE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3E98 - DataGlobal_8B3EC0);
    result = Math::RoundToInt(v0 * DataGlobal_8B3EB8 * 0.5);
    DataGlobal_8B3F10 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E1C20
namespace gamemd {
void sub_4E1C20()
{
{
    DataGlobal_8B3EC8 = Math::ArcTan((double)DataGlobal_8B3F10 * 0.00390625);
}
}
} // namespace gamemd

// 0x4E1C50
namespace gamemd {
void sub_4E1C50()
{
{
    DataGlobal_8B3EE0 = Math::ArcTan((double)(2 * DataGlobal_8B3F10) / DataGlobal_8B3EB8);
}
}
} // namespace gamemd

// 0x4E1C80
namespace gamemd {
long long sub_4E1C80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3F10) + 0.5);
    DataGlobal_8B3F04 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E1CB0
namespace gamemd {
int sub_4E1CB0()
{
{
    DataGlobal_8B3EB0 = 0;
    DataGlobal_8B3EB2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E1CC0
namespace gamemd {
int sub_4E1CC0()
{
{
    DataGlobal_8B3ED0 = 0;
    DataGlobal_8B3ED4 = 0;
    DataGlobal_8B3ED8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E1CE0
namespace gamemd {
int sub_4E1CE0()
{
{
    DataGlobal_8B3F00 = 0;
    DataGlobal_8B3EF8 = 128;
    DataGlobal_8B3EFC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4E2440
namespace gamemd {
DWORD sub_4E2440()
{
{
    DWORD result;
    result = timeGetTime();
    DataGlobal_8B3F14 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E24E0
namespace gamemd {
int sub_4E24E0()
{
{
    DataGlobal_8B3F18 = 0;
    DataGlobal_8B3F1C = 0;
    DataGlobal_8B3F20 = 0;
    DataGlobal_8B3F24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E3110
namespace gamemd {
int sub_4E3110()
{
{
    DataGlobal_8B3F90 = 0;
    DataGlobal_8B3F94 = 0;
    DataGlobal_8B3F98 = 0;
    DataGlobal_8B3F9C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E3130
namespace gamemd {
void sub_4E3130()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3FA8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4E3160
namespace gamemd {
void sub_4E3160()
{
{
    DataGlobal_8B40B8 = DataGlobal_8B3FA8 / 60.0;
}
}
} // namespace gamemd

// 0x4E3180
namespace gamemd {
void sub_4E3180()
{
{
    DataGlobal_8B40A0 = 1.0 / DataGlobal_8B40B8;
}
}
} // namespace gamemd

// 0x4E31A0
namespace gamemd {
void sub_4E31A0()
{
{
    DataGlobal_8B4098 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4E31C0
namespace gamemd {
void sub_4E31C0()
{
{
    DataGlobal_8B3FB0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4E31E0
namespace gamemd {
void sub_4E31E0()
{
{
    DataGlobal_8B3F28 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4E3200
namespace gamemd {
long long sub_4E3200()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3F28 - DataGlobal_8B3FB0);
    result = Math::RoundToInt(v0 * DataGlobal_8B3FA8 * 0.5);
    DataGlobal_8B40C0 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E3240
namespace gamemd {
void sub_4E3240()
{
{
    DataGlobal_8B3FB8 = Math::ArcTan((double)DataGlobal_8B40C0 * 0.00390625);
}
}
} // namespace gamemd

// 0x4E3270
namespace gamemd {
void sub_4E3270()
{
{
    DataGlobal_8B4030 = Math::ArcTan((double)(2 * DataGlobal_8B40C0) / DataGlobal_8B3FA8);
}
}
} // namespace gamemd

// 0x4E32A0
namespace gamemd {
long long sub_4E32A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B40C0) + 0.5);
    DataGlobal_8B40B4 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E32D0
namespace gamemd {
int sub_4E32D0()
{
{
    DataGlobal_8B3FA0 = 0;
    DataGlobal_8B3FA2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E32E0
namespace gamemd {
int sub_4E32E0()
{
{
    DataGlobal_8B4020 = 0;
    DataGlobal_8B4024 = 0;
    DataGlobal_8B4028 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E3300
namespace gamemd {
int sub_4E3300()
{
{
    DataGlobal_8B40B0 = 0;
    DataGlobal_8B40A8 = 128;
    DataGlobal_8B40AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4E3A00
namespace gamemd {
bool FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    wchar_t *StringCSF;
    LRESULT v4;
    int v5;
    int v6;
    int v7;
    int v8;
    LRESULT v9;
    bool result;
    bool v11;
    int i;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v11 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DEu, 0, 7);
    StringCSF = GetStringCSF(aGuiRandomex, 0, g_Str_File_GDlgSupp_cpp, 276);
    v4 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v4, -2);
    v5 = g_SuperWeaponTypeArray;
    v6 = 0;
    for ( i = g_SuperWeaponTypeArray; v6 < v5; ++v6 )
  {
    v7 = *((int *)(g_SuperWeaponTypeCount) + v6);
    if ( v7 )
    {
    if ( *(char *)(v7 + 421) )
      {
    v8 = *(int *)(v7 + 184);
    if ( v8 > -3 && v8 <= 9 && **(short **)(v7 + 96) )
        {
    v9 = SendMessageA(DlgItem, 0x4C2u, 0, *(int *)(v7 + 96));
    SendMessageA(DlgItem, 0x151u, v9, *(int *)(v7 + 184));
    v5 = i;
        }
      }
    }
  }
    SendMessageA(DlgItem, 0x4F1u, 0, 0);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = v11;
    if ( !v11 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}
} // namespace gamemd

// 0x4E3B00
namespace gamemd {
LRESULT SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DEu, 0, 7);
    StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -3);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}
} // namespace gamemd

// 0x4E4170
namespace gamemd {
LRESULT GetComboBoxSelected(ReferenceCounted * aP0, int nIDDlgItem, WPARAM wParam)
{
{
    ReferenceCounted *v3;
    LRESULT result;
    v3 = (ReferenceCounted *)wParam;
    if ( wParam == -1 )
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0);
    result = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0);
    if ( result < -3 || result > 9 )
  {
    if ( *(int *)&HouseClass_Player.__pad_5568[8072] )
    return (*(LRESULT (__thiscall **)(int))(**(int **)&HouseClass_Player.__pad_5568[8072] + 40))(*(int *)&HouseClass_Player.__pad_5568[8072]);
    else
    return -2;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E43C0
namespace gamemd {
LPARAM * InitGameDropdownColors()
{
{
    int *v0;
    LPARAM *result;
    int v2;
    DataGlobal_8B4038 = (int)GetStringCSF(aGuiGoldabbrev, 0, g_Str_File_GDlgSupp_cpp, 475);
    DataGlobal_8B4044 = (int)GetStringCSF(aGuiRedabbrev, 0, g_Str_File_GDlgSupp_cpp, 476);
    DataGlobal_8B4050 = (int)GetStringCSF(aGuiBlueabbrev, 0, g_Str_File_GDlgSupp_cpp, 477);
    DataGlobal_8B405C = (int)GetStringCSF(aGuiGreenabbrev, 0, g_Str_File_GDlgSupp_cpp, 478);
    DataGlobal_8B4068 = (int)GetStringCSF(aGuiOrangeabbre, 0, g_Str_File_GDlgSupp_cpp, 479);
    DataGlobal_8B4074 = (int)GetStringCSF(aGuiSkyblueabbr, 0, g_Str_File_GDlgSupp_cpp, 480);
    DataGlobal_8B4080 = (int)GetStringCSF(aGuiPurpleabbre, 0, g_Str_File_GDlgSupp_cpp, 481);
    DataGlobal_8B408C = (int)GetStringCSF(aGuiPinkabbrev, 0, g_Str_File_GDlgSupp_cpp, 482);
    LODWORD(DataGlobal_8B4098) = GetStringCSF(aGuiGrayabbrev, 0, g_Str_File_GDlgSupp_cpp, 483);
    v0 = DataGlobal_8B4040;
    result = DataGlobal_8316A8;
    do
  {
    v2 = *result++;
    *(v0 - 1) = v2;
    *v0 = -1;
    v0 += 3;
  }
    while ( (int)result < (int)DataGlobal_8316CC );
    return result;
}
}
} // namespace gamemd

// 0x4E4770
namespace gamemd {
LRESULT FillListBox(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 567);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}
} // namespace gamemd

// 0x4E4E20
namespace gamemd {
LRESULT GetComboBoxSelectedRaw(ReferenceCounted * aP0, int nIDDlgItem, WPARAM wParam)
{
{
    ReferenceCounted *v3;
    v3 = (ReferenceCounted *)wParam;
    if ( wParam == -1 )
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0);
}
}
} // namespace gamemd

// 0x4E4F30
namespace gamemd {
wchar_t * sub_4E4F30()
{
{
    return GetStringCSF(aSttHostcombost, 0, g_Str_File_GDlgSupp_cpp, 747);
}
}
} // namespace gamemd

// 0x4E4F50
namespace gamemd {
char * _cfltcvt_init()
{
{
    char *result;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61700] = a1_2;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61712] = a2;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61724] = a3;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61736] = a4;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61748] = a5;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61760] = a6;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61772] = a7;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61784] = a8;
    *(int *)&g_CellDirectionOffsets.__pad_579C[61796] = a0_0;
    result = &g_CellDirectionOffsets.__pad_579C[61708];
    do
  {
    *(int *)result = -1;
    result += 12;
  }
    while ( (int)result < (int)&g_CellDirectionOffsets.__pad_579C[61816] );
    return result;
}
}
} // namespace gamemd

// 0x4E4FC0
namespace gamemd {
void Lobby_ResetFactionTable(int a1)
{
{
    int *v1;
    int v2;
    int *v3;
    if ( a1 > 0 )
  {
    v1 = DataGlobal_8B3F38;
    v2 = a1;
    do
    {
    *v1 = -1;
    v1 += 3;
    --v2;
    }
    while ( v2 );
  }
    if ( a1 < 9 )
  {
    v3 = (int *)(12 * a1 + 9125688);
    do
    {
    *v3 = -2;
    v3 += 3;
    }
    while ( (int)v3 < (int)&DataGlobal_8B3FA4 );
  }
}
}
} // namespace gamemd

// 0x4E5260
namespace gamemd {
LRESULT SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 876);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}
} // namespace gamemd

// 0x4E5900
namespace gamemd {
LRESULT SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
{
    LRESULT v3;
    v3 = wParam;
    if ( wParam == -1 )
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0);
}
}
} // namespace gamemd

// 0x4E5CB0
namespace gamemd {
LRESULT InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1165);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}
} // namespace gamemd

// 0x4E6030
namespace gamemd {
LRESULT GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
{
    LRESULT v3;
    v3 = wParam;
    if ( wParam == -1 )
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0);
}
}
} // namespace gamemd

// 0x4E6140
namespace gamemd {
void nullsub_54()
{
  ;
}
} // namespace gamemd

// 0x4E6150
namespace gamemd {
char * Version_GetString(unsigned int * a1, unsigned char * a2, char * Destination, size_t Count)
{
{
    char *result;
    *a2 = Event_Process_7C5F3D();
    Event_Process_7C5FFF();
    *a1 = DataGlobal_84E863;
    result = Destination;
    if ( Destination )
    return strncpy(Destination, Source, Count);
    return result;
}
}
} // namespace gamemd

// 0x4E62D0
namespace gamemd {
void sub_4E62D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A83D40 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4E6300
namespace gamemd {
void sub_4E6300()
{
{
    DataGlobal_A8EC98 = DataGlobal_A83D40 / 60.0;
}
}
} // namespace gamemd

// 0x4E6320
namespace gamemd {
void sub_4E6320()
{
{
    DataGlobal_A8EB58 = 1.0 / DataGlobal_A8EC98;
}
}
} // namespace gamemd

// 0x4E6340
namespace gamemd {
void sub_4E6340()
{
{
    DataGlobal_A8EB20 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4E6360
namespace gamemd {
void sub_4E6360()
{
{
    DataGlobal_A83DB0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4E6380
namespace gamemd {
void sub_4E6380()
{
{
    DataGlobal_8B4168 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4E63A0
namespace gamemd {
long long sub_4E63A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B4168 - DataGlobal_A83DB0);
    result = Math::RoundToInt(v0 * DataGlobal_A83D40 * 0.5);
    BounceClass_Array = result;
    return result;
}
}
} // namespace gamemd

// 0x4E63E0
namespace gamemd {
void sub_4E63E0()
{
{
    DataGlobal_A83DE0 = Math::ArcTan((double)BounceClass_Array * 0.00390625);
}
}
} // namespace gamemd

// 0x4E6410
namespace gamemd {
void sub_4E6410()
{
{
    DataGlobal_A8E958 = Math::ArcTan((double)(2 * BounceClass_Array) / DataGlobal_A83D40);
}
}
} // namespace gamemd

// 0x4E6440
namespace gamemd {
long long sub_4E6440()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * BounceClass_Array) + 0.5);
    DataGlobal_A8EC94 = result;
    return result;
}
}
} // namespace gamemd

// 0x4E6470
namespace gamemd {
int sub_4E6470()
{
{
    DataGlobal_A83CD0 = 0;
    DataGlobal_A83CD2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E6480
namespace gamemd {
int sub_4E6480()
{
{
    DataGlobal_A8E380 = 0;
    DataGlobal_A8E384 = 0;
    DataGlobal_A8E388 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E64A0
namespace gamemd {
int sub_4E64A0()
{
{
    DataGlobal_A8EC70 = 0;
    DataGlobal_A8EC68 = 128;
    DataGlobal_A8EC6C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4E64C0
namespace gamemd {
int sub_4E64C0()
{
{
    DataGlobal_A83C58 = 0;
    DataGlobal_A83C5C = 0;
    DataGlobal_A83C60 = 0;
    DataGlobal_A83C64 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E7D10
namespace gamemd {
int sub_4E7D10()
{
{
    sub_6616B0(g_MixFile_LoadCount);
    return atexit(unknown_libname_13);
}
}
} // namespace gamemd

// 0x4E7DC0
namespace gamemd {
int sub_4E7DC0()
{
{
    sub_74F730(&g_CoordScatterManager);
    return atexit(sub_4E7DE0);
}
}
} // namespace gamemd

// 0x4E7DF0
namespace gamemd {
int sub_4E7DF0()
{
{
    DataGlobal_A8ECD8 = 0;
    DataGlobal_A8ECDC = 0;
    return atexit(unknown_libname_14);
}
}
} // namespace gamemd

// 0x4E7E10
namespace gamemd {
int unknown_libname_14()
{
    void __cdecl unknown_libname_14()
{
    ObjectTypeClass::ReleaseWaveAndString((int *)&g_NetworkPlayerBuffer.__pad_14B0[492]);
}
}
} // namespace gamemd

// 0x4E7E20
namespace gamemd {
int unknown_libname_15()
{
    char *unknown_libname_15()
{
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[116] = 3;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[120] = 1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[128] = 0;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[132] = 3;
    g_NetworkPlayerBuffer.__pad_14B0[136] = 1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[140] = 2;
    g_NetworkPlayerBuffer.__pad_14B0[144] = 1;
    g_NetworkPlayerBuffer.__pad_14B0[145] = 1;
    g_NetworkPlayerBuffer.__pad_14B0[146] = 1;
    g_NetworkPlayerBuffer.__pad_14B0[148] = 1;
    g_NetworkPlayerBuffer.__pad_14B0[185] = 1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[268] = 18;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[272] = 18;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[276] = 17;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[280] = 17;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[152] = -1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[284] = 16;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[288] = 16;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[156] = -1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[192] = -1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[196] = -1;
    g_NetworkPlayerBuffer.__pad_14B0[147] = 0;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[160] = 800;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[164] = 600;
    g_NetworkPlayerBuffer.__pad_14B0[168] = 0;
    g_NetworkPlayerBuffer.__pad_14B0[169] = 0;
    g_NetworkPlayerBuffer.__pad_14B0[170] = 0;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[172] = 1060320051;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[176] = 1060320051;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[180] = 1053609165;
    g_NetworkPlayerBuffer.__pad_14B0[184] = 0;
    g_NetworkPlayerBuffer.__pad_14B0[186] = 0;
    *(short *)&g_NetworkPlayerBuffer.__pad_14B0[188] = 9;
    *(short *)&g_NetworkPlayerBuffer.__pad_14B0[190] = -1;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[200] = 0;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[292] = 81;
    *(int *)&g_NetworkPlayerBuffer.__pad_14B0[296] = 81;
    g_NetworkPlayerBuffer.__pad_14B0[204] = 0;
    return &g_NetworkPlayerBuffer.__pad_14B0[116];
}
}
} // namespace gamemd

// 0x4E7E30
namespace gamemd {
int sub_4E7E30()
{
{
    sub_720960(&g_BuildingTypeClass_Count);
    return atexit(sub_4E7E50);
}
}
} // namespace gamemd

// 0x4E7E90
namespace gamemd {
int unknown_libname_16()
{
    int *unknown_libname_16()
{
    return TabClass::initStripClass(DataGlobal_A83E18);
}
}
} // namespace gamemd

// 0x4E7ED0
namespace gamemd {
char * sub_4E7ED0()
{
{
    char *result;
    int v1;
    result = g_MenuInitComplete;
    v1 = 0x4000;
    do
  {
    *result = 0;
    result += 111;
    --v1;
  }
    while ( v1 );
    g_GameInitState = 0;
    g_MenuInitFlags = 0;
    g_MenuInitState = 0;
    return result;
}
}
} // namespace gamemd

// 0x4E7F00
namespace gamemd {
unsigned char * sub_4E7F00()
{
{
    char *result;
    int v1;
    result = &DataGlobal_A83EDC;
    v1 = 256;
    do
  {
    *result = 0;
    result += 111;
    --v1;
  }
    while ( v1 );
    DataGlobal_A83ED0 = 0;
    DataGlobal_A83ED4 = 0;
    DataGlobal_A83ED8 = 0;
    return result;
}
}
} // namespace gamemd

// 0x4E8030
namespace gamemd {
int sub_4E8030()
{
{
    SessionClass::SessionClass((char *)g_GameMode_Current);
    return atexit(unknown_libname_17);
}
}
} // namespace gamemd

// 0x4E8050
namespace gamemd {
int unknown_libname_17()
{
    void __cdecl unknown_libname_17()
{
    ObjectManager::CleanupArrays((int)&g_GameMode_Current);
}
}
} // namespace gamemd

// 0x4E8060
namespace gamemd {
int sub_4E8060()
{
{
    sub_5F15C0(&g_EventManager, 16, 16, 236, 4660);
    return atexit(unknown_libname_18);
}
}
} // namespace gamemd

// 0x4E80A0
namespace gamemd {
int sub_4E80A0()
{
{
    sub_5408F0((char *)g_NetworkManager, 455, 558, 160, 32, 34835, 43524);
    return atexit(unknown_libname_19);
}
}
} // namespace gamemd

// 0x4E80E0
namespace gamemd {
int unknown_libname_19()
{
    void __cdecl unknown_libname_19()
{
    IPXManagerClass::processPacket(&g_NetworkPlayerBuffer.__pad_1258[300]);
}
}
} // namespace gamemd

// 0x4E80F0
namespace gamemd {
int sub_4E80F0()
{
{
    sub_4E6070((int)DataGlobal_A8E8E8);
    return atexit(unknown_libname_20);
}
}
} // namespace gamemd

// 0x4E8110
namespace gamemd {
int unknown_libname_20()
{
    void __cdecl unknown_libname_20()
{
    nullsub_54(DataGlobal_A8E8E8);
}
}
} // namespace gamemd

// 0x4E8120
namespace gamemd {
char sub_4E8120()
{
{
    DataGlobal_A83CD9 = 0;
    DataGlobal_A83CDA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E8140
namespace gamemd {
char sub_4E8140()
{
{
    DataGlobal_A83CD4 = 127;
    DataGlobal_A83CD5 = 127;
    DataGlobal_A83CD6 = 127;
    return 127;
}
}
} // namespace gamemd

// 0x4E8160
namespace gamemd {
char sub_4E8160()
{
{
    DataGlobal_A80220 = -1;
    DataGlobal_A80221 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x4E8180
namespace gamemd {
char sub_4E8180()
{
{
    DataGlobal_A8EAE4 = -1;
    DataGlobal_A8EAE5 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E81A0
namespace gamemd {
char sub_4E81A0()
{
{
    DataGlobal_A83EC9 = -1;
    DataGlobal_A83EC8 = 0;
    DataGlobal_A83ECA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E81C0
namespace gamemd {
char sub_4E81C0()
{
{
    DataGlobal_A8E8C6 = -1;
    DataGlobal_A8E8C4 = 0;
    DataGlobal_A8E8C5 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4E81E0
namespace gamemd {
char sub_4E81E0()
{
{
    DataGlobal_A83DC0 = 0;
    DataGlobal_A83DC1 = -1;
    DataGlobal_A83DC2 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x4E8200
namespace gamemd {
char sub_4E8200()
{
{
    DataGlobal_8B40E1 = 0;
    DataGlobal_8B40E0 = -1;
    DataGlobal_8B40E2 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x4E8220
namespace gamemd {
char sub_4E8220()
{
{
    DataGlobal_A8E982 = 0;
    DataGlobal_A8E980 = -1;
    DataGlobal_A8E981 = -1;
    return -1;
}
}
} // namespace gamemd
