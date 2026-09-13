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
{
    int v0;
    int result;
    int v2;
    char Destination[64];
    Event_Process_7C5F3D();
    Event_Process_7C5FFF();
    v0 = DataGlobal_84E863;
    if ( &v2 != (int *)-4 )
    strncpy(Destination, Source, 0x40u);
    if ( !v0 || !DataGlobal_84E864 )
    return -1;
    if ( !_strcmpi(Destination, aAuthenticamd) )
    return 7;
    if ( !_strcmpi(Destination, aCyrixinstead) )
    return 8;
    if ( v0 == 4 )
    return 0;
    if ( v0 == 5 )
    return 1;
    if ( v0 != 6 )
    return 6;
    switch ( DataGlobal_84E864 )
  {
    case 3: case 5: result = 3;
    break;
    case 6: result = 5;
    break;
    case 7: case 8: case 10: result = 4;
    break;
    default: result = 2;
    break;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E64E0
namespace gamemd {
int sub_4E64E0()
{
{
    DataGlobal_A8B204 = 0;
    DataGlobal_A8B208 = 0;
    DataGlobal_A8B20C = 1;
    DataGlobal_A8B20D = 0;
    AITriggerTypeClass_Array = (int)&vt_DynamicVectorClass_AITriggerTypeClass;
    DataGlobal_A8B214 = 10;
    g_AnimTypeInitQueue = 0;
    return atexit(sub_4E6520);
}
}
} // namespace gamemd

// 0x4E6520
namespace gamemd {
void sub_4E6520()
{
{
    AITriggerTypeClass_Array = (int)&vt_VectorClass_AITriggerTypeClass;
    if ( DataGlobal_A8B204 && DataGlobal_A8B20D )
  {
    __3_YAXPAX_Z(DataGlobal_A8B204);
    DataGlobal_A8B204 = 0;
  }
    DataGlobal_A8B20D = 0;
    DataGlobal_A8B208 = 0;
}
}
} // namespace gamemd

// 0x4E6560
namespace gamemd {
int sub_4E6560()
{
{
    DataGlobal_8B417C = 0;
    LightConvertClass_Array = 0;
    DataGlobal_8B4184 = 1;
    DataGlobal_8B4185 = 0;
    DataGlobal_8B4178 = (int)&vt_DynamicVectorClass_TriggerTypeClass;
    DataGlobal_8B418C = 10;
    g_MultiplayerLogBuffer = 0;
    return atexit(sub_4E65A0);
}
}
} // namespace gamemd

// 0x4E65A0
namespace gamemd {
void sub_4E65A0()
{
{
    DataGlobal_8B4178 = (int)&vt_VectorClass_TriggerTypeClass;
    if ( DataGlobal_8B417C && DataGlobal_8B4185 )
  {
    __3_YAXPAX_Z(DataGlobal_8B417C);
    DataGlobal_8B417C = 0;
  }
    DataGlobal_8B4185 = 0;
    LightConvertClass_Array = 0;
}
}
} // namespace gamemd

// 0x4E65E0
namespace gamemd {
int sub_4E65E0()
{
{
    g_TriggerClassCapacity = 0;
    DataGlobal_A8EAF0 = 0;
    DataGlobal_A8EAF4 = 1;
    DataGlobal_A8EAF5 = 0;
    TriggerClass_Array = (int)&vt_DynamicVectorClass_TriggerClass;
    DataGlobal_A8EAFC = 10;
    g_ProductionQueueState = 0;
    return atexit(sub_4E6620);
}
}
} // namespace gamemd

// 0x4E6620
namespace gamemd {
void sub_4E6620()
{
{
    TriggerClass_Array = (int)&vt_VectorClass_TriggerClass;
    if ( g_TriggerClassCapacity && DataGlobal_A8EAF5 )
  {
    __3_YAXPAX_Z(g_TriggerClassCapacity);
    g_TriggerClassCapacity = 0;
  }
    DataGlobal_A8EAF5 = 0;
    DataGlobal_A8EAF0 = 0;
}
}
} // namespace gamemd

// 0x4E6660
namespace gamemd {
int sub_4E6660()
{
{
    DataGlobal_8B4194 = 0;
    DataGlobal_8B4198 = 0;
    DataGlobal_8B419C = 1;
    DataGlobal_8B419D = 0;
    DataGlobal_8B4190 = (int)&vt_DynamicVectorClass_BuildingLightClass;
    DataGlobal_8B41A4 = 10;
    DataGlobal_8B41A0 = 0;
    return atexit(sub_4E66A0);
}
}
} // namespace gamemd

// 0x4E66A0
namespace gamemd {
void sub_4E66A0()
{
{
    DataGlobal_8B4190 = (int)&vt_VectorClass_BuildingLightClass;
    if ( DataGlobal_8B4194 && DataGlobal_8B419D )
  {
    __3_YAXPAX_Z(DataGlobal_8B4194);
    DataGlobal_8B4194 = 0;
  }
    DataGlobal_8B419D = 0;
    DataGlobal_8B4198 = 0;
}
}
} // namespace gamemd

// 0x4E66E0
namespace gamemd {
int sub_4E66E0()
{
{
    DataGlobal_A8020C = 0;
    DataGlobal_A80210 = 0;
    DataGlobal_A80214 = 1;
    DataGlobal_A80215 = 0;
    DataGlobal_A80208 = (int)&vt_DynamicVectorClass_ParticleSystemClass;
    DataGlobal_A8021C = 10;
    g_GameCleanupState = 0;
    return atexit(sub_4E6720);
}
}
} // namespace gamemd

// 0x4E6720
namespace gamemd {
void sub_4E6720()
{
{
    DataGlobal_A80208 = (int)&vt_VectorClass_ParticleSystemClass;
    if ( DataGlobal_A8020C && DataGlobal_A80215 )
  {
    __3_YAXPAX_Z(DataGlobal_A8020C);
    DataGlobal_A8020C = 0;
  }
    DataGlobal_A80215 = 0;
    DataGlobal_A80210 = 0;
}
}
} // namespace gamemd

// 0x4E6760
namespace gamemd {
int sub_4E6760()
{
{
    g_PathClass_State = 0;
    DataGlobal_8B4140 = 0;
    DataGlobal_8B4144 = 1;
    DataGlobal_8B4145 = 0;
    DataGlobal_8B4138 = (int)&vt_DynamicVectorClass_TubeClass;
    DataGlobal_8B414C = 10;
    g_UnitTypeCount = 0;
    return atexit(sub_4E67A0);
}
}
} // namespace gamemd

// 0x4E67A0
namespace gamemd {
void sub_4E67A0()
{
{
    DataGlobal_8B4138 = (int)&vt_VectorClass_TubeClass;
    if ( g_PathClass_State && DataGlobal_8B4145 )
  {
    __3_YAXPAX_Z(g_PathClass_State);
    g_PathClass_State = 0;
  }
    DataGlobal_8B4145 = 0;
    DataGlobal_8B4140 = 0;
}
}
} // namespace gamemd

// 0x4E67E0
namespace gamemd {
int sub_4E67E0()
{
{
    DataGlobal_A8EC3C = 0;
    DataGlobal_A8EC40 = 0;
    g_GameObjectManager = 1;
    DataGlobal_A8EC45 = 0;
    DataGlobal_A8EC38 = (int)&vt_DynamicVectorClass_WaveClass;
    DataGlobal_A8EC4C = 10;
    DataGlobal_A8EC48 = 0;
    return atexit(sub_4E6820);
}
}
} // namespace gamemd

// 0x4E6820
namespace gamemd {
void sub_4E6820()
{
{
    DataGlobal_A8EC38 = (int)&vt_VectorClass_WaveClass;
    if ( DataGlobal_A8EC3C && DataGlobal_A8EC45 )
  {
    __3_YAXPAX_Z(DataGlobal_A8EC3C);
    DataGlobal_A8EC3C = 0;
  }
    DataGlobal_A8EC45 = 0;
    DataGlobal_A8EC40 = 0;
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
{
    BulletClass_Array = (int)&vt_VectorClass_BulletClass;
    if ( DataGlobal_A8ED44 && DataGlobal_A8ED4D )
  {
    __3_YAXPAX_Z(DataGlobal_A8ED44);
    DataGlobal_A8ED44 = 0;
  }
    DataGlobal_A8ED4D = 0;
    DataGlobal_A8ED48 = 0;
}
}
} // namespace gamemd

// 0x4E68E0
namespace gamemd {
int sub_4E68E0()
{
{
    g_ObjectClass_Capacity = 0;
    DataGlobal_A8EC58 = 0;
    DataGlobal_A8EC5C = 1;
    DataGlobal_A8EC5D = 0;
    OverlayClass_Array = (int)&vt_DynamicVectorClass_OverlayClass;
    DataGlobal_A8EC64 = 10;
    DataGlobal_A8EC60 = 0;
    return atexit(sub_4E6920);
}
}
} // namespace gamemd

// 0x4E6920
namespace gamemd {
void sub_4E6920()
{
{
    OverlayClass_Array = (int)&vt_VectorClass_OverlayClass;
    if ( g_ObjectClass_Capacity && DataGlobal_A8EC5D )
  {
    __3_YAXPAX_Z(g_ObjectClass_Capacity);
    g_ObjectClass_Capacity = 0;
  }
    DataGlobal_A8EC5D = 0;
    DataGlobal_A8EC58 = 0;
}
}
} // namespace gamemd

// 0x4E6960
namespace gamemd {
int sub_4E6960()
{
{
    DataGlobal_A83DCC = 0;
    DataGlobal_A83DD0 = 0;
    DataGlobal_A83DD4 = 1;
    DataGlobal_A83DD5 = 0;
    DataGlobal_A83DC8 = (int)&vt_DynamicVectorClass_ParticleClass;
    DataGlobal_A83DDC = 10;
    DataGlobal_A83DD8 = 0;
    return atexit(sub_4E69A0);
}
}
} // namespace gamemd

// 0x4E69A0
namespace gamemd {
void sub_4E69A0()
{
{
    DataGlobal_A83DC8 = (int)&vt_VectorClass_ParticleClass;
    if ( DataGlobal_A83DCC && DataGlobal_A83DD5 )
  {
    __3_YAXPAX_Z(DataGlobal_A83DCC);
    DataGlobal_A83DCC = 0;
  }
    DataGlobal_A83DD5 = 0;
    DataGlobal_A83DD0 = 0;
}
}
} // namespace gamemd

// 0x4E69E0
namespace gamemd {
int sub_4E69E0()
{
{
    DataGlobal_A8B1E4 = 0;
    DataGlobal_A8B1E8 = 0;
    DataGlobal_A8B1EC = 1;
    DataGlobal_A8B1ED = 0;
    SmudgeClass_Array = (int)&vt_DynamicVectorClass_SmudgeClass;
    DataGlobal_A8B1F4 = 10;
    DataGlobal_A8B1F0 = 0;
    return atexit(sub_4E6A20);
}
}
} // namespace gamemd

// 0x4E6A20
namespace gamemd {
void sub_4E6A20()
{
{
    SmudgeClass_Array = (int)&vt_VectorClass_SmudgeClass;
    if ( DataGlobal_A8B1E4 && DataGlobal_A8B1ED )
  {
    __3_YAXPAX_Z(DataGlobal_A8B1E4);
    DataGlobal_A8B1E4 = 0;
  }
    DataGlobal_A8B1ED = 0;
    DataGlobal_A8B1E8 = 0;
}
}
} // namespace gamemd

// 0x4E6A60
namespace gamemd {
int sub_4E6A60()
{
{
    DataGlobal_A8E98C = 0;
    DataGlobal_A8E990 = 0;
    DataGlobal_A8E994 = 1;
    DataGlobal_A8E995 = 0;
    DataGlobal_A8E988 = (int)&vt_DynamicVectorClass_TerrainClass;
    DataGlobal_A8E99C = 10;
    DataGlobal_A8E998 = 0;
    return atexit(sub_4E6AA0);
}
}
} // namespace gamemd

// 0x4E6AA0
namespace gamemd {
void sub_4E6AA0()
{
{
    DataGlobal_A8E988 = (int)&vt_VectorClass_TerrainClass;
    if ( DataGlobal_A8E98C && DataGlobal_A8E995 )
  {
    __3_YAXPAX_Z(DataGlobal_A8E98C);
    DataGlobal_A8E98C = 0;
  }
    DataGlobal_A8E995 = 0;
    DataGlobal_A8E990 = 0;
}
}
} // namespace gamemd

// 0x4E6AE0
namespace gamemd {
int sub_4E6AE0()
{
{
    g_InfantryClassLimit = 0;
    DataGlobal_A83DF0 = 0;
    DataGlobal_A83DF4 = 1;
    DataGlobal_A83DF5 = 0;
    InfantryClass_Array = (int)&vt_DynamicVectorClass_InfantryClass;
    DataGlobal_A83DFC = 10;
    g_BuildingClass_Count = 0;
    return atexit(sub_4E6B20);
}
}
} // namespace gamemd

// 0x4E6B20
namespace gamemd {
void sub_4E6B20()
{
{
    InfantryClass_Array = (int)&vt_VectorClass_InfantryClass;
    if ( g_InfantryClassLimit && DataGlobal_A83DF5 )
  {
    __3_YAXPAX_Z(g_InfantryClassLimit);
    g_InfantryClassLimit = 0;
  }
    DataGlobal_A83DF5 = 0;
    DataGlobal_A83DF0 = 0;
}
}
} // namespace gamemd

// 0x4E6B60
namespace gamemd {
int sub_4E6B60()
{
{
    g_BuildingClass_InstanceCount = 0;
    DataGlobal_A8EB48 = 0;
    DataGlobal_A8EB4C = 1;
    DataGlobal_A8EB4D = 0;
    BuildingClass_Array = (int)&vt_DynamicVectorClass_BuildingClass;
    DataGlobal_A8EB54 = 10;
    g_BuildingProductionState = 0;
    return atexit(sub_4E6BA0);
}
}
} // namespace gamemd

// 0x4E6BA0
namespace gamemd {
void sub_4E6BA0()
{
{
    BuildingClass_Array = (int)&vt_VectorClass_BuildingClass;
    if ( g_BuildingClass_InstanceCount && DataGlobal_A8EB4D )
  {
    __3_YAXPAX_Z(g_BuildingClass_InstanceCount);
    g_BuildingClass_InstanceCount = 0;
  }
    DataGlobal_A8EB4D = 0;
    DataGlobal_A8EB48 = 0;
}
}
} // namespace gamemd

// 0x4E6BE0
namespace gamemd {
int sub_4E6BE0()
{
{
    DataGlobal_A8E394 = 0;
    DataGlobal_A8E398 = 0;
    DataGlobal_A8E39C = 1;
    DataGlobal_A8E39D = 0;
    AircraftClass_Array = (int)&vt_DynamicVectorClass_AircraftClass;
    DataGlobal_A8E3A4 = 10;
    g_AircraftClassCount = 0;
    return atexit(sub_4E6C20);
}
}
} // namespace gamemd

// 0x4E6C20
namespace gamemd {
void sub_4E6C20()
{
{
    AircraftClass_Array = (int)&vt_VectorClass_AircraftClass;
    if ( DataGlobal_A8E394 && DataGlobal_A8E39D )
  {
    __3_YAXPAX_Z(DataGlobal_A8E394);
    DataGlobal_A8E394 = 0;
  }
    DataGlobal_A8E39D = 0;
    DataGlobal_A8E398 = 0;
}
}
} // namespace gamemd

// 0x4E6C60
namespace gamemd {
int sub_4E6C60()
{
{
    g_UnitClassPool = 0;
    DataGlobal_8B4110 = 0;
    DataGlobal_8B4114 = 1;
    DataGlobal_8B4115 = 0;
    UnitClass_Array = (int)&vt_DynamicVectorClass_UnitClass;
    DataGlobal_8B411C = 10;
    g_HouseClass_BuildState = 0;
    return atexit(sub_4E6CA0);
}
}
} // namespace gamemd

// 0x4E6CA0
namespace gamemd {
void sub_4E6CA0()
{
{
    UnitClass_Array = (int)&vt_VectorClass_UnitClass;
    if ( g_UnitClassPool && DataGlobal_8B4115 )
  {
    __3_YAXPAX_Z(g_UnitClassPool);
    g_UnitClassPool = 0;
  }
    DataGlobal_8B4115 = 0;
    DataGlobal_8B4110 = 0;
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
{
    g_AnimClassPool = 0;
    DataGlobal_A8E9B0 = 0;
    DataGlobal_A8E9B4 = 1;
    DataGlobal_A8E9B5 = 0;
    AnimClass_Array = (int)&vt_DynamicVectorClass_AnimClass;
    DataGlobal_A8E9BC = 10;
    g_AnimClassCount = 0;
    return atexit(sub_4E6DA0);
}
}
} // namespace gamemd

// 0x4E6DA0
namespace gamemd {
void sub_4E6DA0()
{
{
    AnimClass_Array = (int)&vt_VectorClass_AnimClass;
    if ( g_AnimClassPool && DataGlobal_A8E9B5 )
  {
    __3_YAXPAX_Z(g_AnimClassPool);
    g_AnimClassPool = 0;
  }
    DataGlobal_A8E9B5 = 0;
    DataGlobal_A8E9B0 = 0;
}
}
} // namespace gamemd

// 0x4E6DE0
namespace gamemd {
int sub_4E6DE0()
{
{
    g_TeamClassPool = 0;
    DataGlobal_8B40F0 = 0;
    DataGlobal_8B40F4 = 1;
    DataGlobal_8B40F5 = 0;
    TeamClass_Array = (int)&vt_DynamicVectorClass_TeamClass;
    DataGlobal_8B40FC = 10;
    g_HouseClass_AIProductionState = 0;
    return atexit(sub_4E6E20);
}
}
} // namespace gamemd

// 0x4E6E20
namespace gamemd {
void sub_4E6E20()
{
{
    TeamClass_Array = (int)&vt_VectorClass_TeamClass;
    if ( g_TeamClassPool && DataGlobal_8B40F5 )
  {
    __3_YAXPAX_Z(g_TeamClassPool);
    g_TeamClassPool = 0;
  }
    DataGlobal_8B40F5 = 0;
    DataGlobal_8B40F0 = 0;
}
}
} // namespace gamemd

// 0x4E6E60
namespace gamemd {
int sub_4E6E60()
{
{
    g_TeamTypeCount = 0;
    DataGlobal_A83E38 = 0;
    DataGlobal_A83E3C = 1;
    DataGlobal_A83E3D = 0;
    DataGlobal_A83E30 = (int)&vt_DynamicVectorClass_FactoryClass;
    DataGlobal_A83E44 = 10;
    g_TeamTypeCapacity = 0;
    return atexit(sub_4E6EA0);
}
}
} // namespace gamemd

// 0x4E6EA0
namespace gamemd {
void sub_4E6EA0()
{
{
    DataGlobal_A83E30 = (int)&vt_VectorClass_FactoryClass;
    if ( g_TeamTypeCount && DataGlobal_A83E3D )
  {
    __3_YAXPAX_Z(g_TeamTypeCount);
    g_TeamTypeCount = 0;
  }
    DataGlobal_A83E3D = 0;
    DataGlobal_A83E38 = 0;
}
}
} // namespace gamemd

// 0x4E6EE0
namespace gamemd {
int sub_4E6EE0()
{
{
    g_CampaignTypeArray = 0;
    DataGlobal_A83D00 = 0;
    DataGlobal_A83D04 = 1;
    DataGlobal_A83D05 = 0;
    DataGlobal_A83CF8 = (int)&vt_DynamicVectorClass_CampaignClass;
    DataGlobal_A83D0C = 10;
    g_UnitTypeInitState = 0;
    return atexit(sub_4E6F20);
}
}
} // namespace gamemd

// 0x4E6F20
namespace gamemd {
void sub_4E6F20()
{
{
    DataGlobal_A83CF8 = (int)&vt_VectorClass_CampaignClass;
    if ( g_CampaignTypeArray && DataGlobal_A83D05 )
  {
    __3_YAXPAX_Z(g_CampaignTypeArray);
    g_CampaignTypeArray = 0;
  }
    DataGlobal_A83D05 = 0;
    DataGlobal_A83D00 = 0;
}
}
} // namespace gamemd

// 0x4E6F60
namespace gamemd {
int sub_4E6F60()
{
{
    DataGlobal_8B4124 = 0;
    DataGlobal_8B4128 = 0;
    DataGlobal_8B412C = 1;
    DataGlobal_8B412D = 0;
    DataGlobal_8B4120 = (int)&vt_DynamicVectorClass_SideClass;
    DataGlobal_8B4134 = 10;
    g_ObjectTypeList = 0;
    return atexit(sub_4E6FA0);
}
}
} // namespace gamemd

// 0x4E6FA0
namespace gamemd {
void sub_4E6FA0()
{
{
    DataGlobal_8B4120 = (int)&vt_VectorClass_SideClass;
    if ( DataGlobal_8B4124 && DataGlobal_8B412D )
  {
    __3_YAXPAX_Z(DataGlobal_8B4124);
    DataGlobal_8B4124 = 0;
  }
    DataGlobal_8B412D = 0;
    DataGlobal_8B4128 = 0;
}
}
} // namespace gamemd

// 0x4E6FE0
namespace gamemd {
int sub_4E6FE0()
{
{
    g_SuperWeaponTypeCount = 0;
    DataGlobal_A83CA0 = 0;
    DataGlobal_A83CA4 = 1;
    DataGlobal_A83CA5 = 0;
    DataGlobal_A83C98 = (int)&vt_DynamicVectorClass_HouseTypeClass;
    DataGlobal_A83CAC = 10;
    g_SuperWeaponTypeArray = 0;
    return atexit(sub_4E7020);
}
}
} // namespace gamemd

// 0x4E7020
namespace gamemd {
void sub_4E7020()
{
{
    DataGlobal_A83C98 = (int)&vt_VectorClass_HouseTypeClass;
    if ( g_SuperWeaponTypeCount && DataGlobal_A83CA5 )
  {
    __3_YAXPAX_Z(g_SuperWeaponTypeCount);
    g_SuperWeaponTypeCount = 0;
  }
    DataGlobal_A83CA5 = 0;
    DataGlobal_A83CA0 = 0;
}
}
} // namespace gamemd

// 0x4E7060
namespace gamemd {
int sub_4E7060()
{
{
    g_MultiplayerLogEntry = 0;
    DataGlobal_A8E8D8 = 0;
    DataGlobal_A8E8DC = 1;
    DataGlobal_A8E8DD = 0;
    DataGlobal_A8E8D0 = (int)&vt_DynamicVectorClass_TaskForceClass;
    DataGlobal_A8E8E4 = 10;
    g_MultiplayerLogFlags = 0;
    return atexit(sub_4E70A0);
}
}
} // namespace gamemd

// 0x4E70A0
namespace gamemd {
void sub_4E70A0()
{
{
    DataGlobal_A8E8D0 = (int)&vt_VectorClass_TaskForceClass;
    if ( g_MultiplayerLogEntry && DataGlobal_A8E8DD )
  {
    __3_YAXPAX_Z(g_MultiplayerLogEntry);
    g_MultiplayerLogEntry = 0;
  }
    DataGlobal_A8E8DD = 0;
    DataGlobal_A8E8D8 = 0;
}
}
} // namespace gamemd

// 0x4E70E0
namespace gamemd {
int sub_4E70E0()
{
{
    g_TeamTypePool = 0;
    DataGlobal_A8ECA8 = 0;
    DataGlobal_A8ECAC = 1;
    DataGlobal_A8ECAD = 0;
    TeamTypeClass_Array = (int)&vt_DynamicVectorClass_TeamTypeClass;
    DataGlobal_A8ECB4 = 10;
    g_MultiplayerLogState = 0;
    return atexit(sub_4E7120);
}
}
} // namespace gamemd

// 0x4E7120
namespace gamemd {
void sub_4E7120()
{
{
    TeamTypeClass_Array = (int)&vt_VectorClass_TeamTypeClass;
    if ( g_TeamTypePool && DataGlobal_A8ECAD )
  {
    __3_YAXPAX_Z(g_TeamTypePool);
    g_TeamTypePool = 0;
  }
    DataGlobal_A8ECAD = 0;
    DataGlobal_A8ECA8 = 0;
}
}
} // namespace gamemd

// 0x4E7160
namespace gamemd {
int sub_4E7160()
{
{
    g_MultiplayerSyncState = 0;
    DataGlobal_8B41D0 = 0;
    DataGlobal_8B41D4 = 1;
    DataGlobal_8B41D5 = 0;
    DataGlobal_8B41C8 = (int)&vt_DynamicVectorClass_ScriptTypeClass;
    DataGlobal_8B41DC = 10;
    g_MultiplayerDebugState = 0;
    return atexit(sub_4E71A0);
}
}
} // namespace gamemd

// 0x4E71A0
namespace gamemd {
void sub_4E71A0()
{
{
    DataGlobal_8B41C8 = (int)&vt_VectorClass_ScriptTypeClass;
    if ( g_MultiplayerSyncState && DataGlobal_8B41D5 )
  {
    __3_YAXPAX_Z(g_MultiplayerSyncState);
    g_MultiplayerSyncState = 0;
  }
    DataGlobal_8B41D5 = 0;
    DataGlobal_8B41D0 = 0;
}
}
} // namespace gamemd

// 0x4E71E0
namespace gamemd {
int sub_4E71E0()
{
{
    g_BuildingTypeClass_Array = 0;
    DataGlobal_A83D88 = 0;
    DataGlobal_A83D8C = 1;
    DataGlobal_A83D8D = 0;
    DataGlobal_A83D80 = (int)&vt_DynamicVectorClass_OverlayTypeClass;
    DataGlobal_A83D94 = 10;
    g_ObjectTypeConfig = 0;
    return atexit(sub_4E7220);
}
}
} // namespace gamemd

// 0x4E7220
namespace gamemd {
void sub_4E7220()
{
{
    DataGlobal_A83D80 = (int)&vt_VectorClass_OverlayTypeClass;
    if ( g_BuildingTypeClass_Array && DataGlobal_A83D8D )
  {
    __3_YAXPAX_Z(g_BuildingTypeClass_Array);
    g_BuildingTypeClass_Array = 0;
  }
    DataGlobal_A83D8D = 0;
    DataGlobal_A83D88 = 0;
}
}
} // namespace gamemd

// 0x4E7260
namespace gamemd {
int sub_4E7260()
{
{
    FactoryClass_Array = 0;
    DataGlobal_A8EC20 = 0;
    DataGlobal_A8EC24 = 1;
    DataGlobal_A8EC25 = 0;
    DataGlobal_A8EC18 = (int)&vt_DynamicVectorClass_SmudgeTypeClass;
    DataGlobal_A8EC2C = 10;
    FactoryClass_Count = 0;
    return atexit(sub_4E72A0);
}
}
} // namespace gamemd

// 0x4E72A0
namespace gamemd {
void sub_4E72A0()
{
{
    DataGlobal_A8EC18 = (int)&vt_VectorClass_SmudgeTypeClass;
    if ( FactoryClass_Array && DataGlobal_A8EC25 )
  {
    __3_YAXPAX_Z(FactoryClass_Array);
    FactoryClass_Array = 0;
  }
    DataGlobal_A8EC25 = 0;
    DataGlobal_A8EC20 = 0;
}
}
} // namespace gamemd

// 0x4E72E0
namespace gamemd {
int sub_4E72E0()
{
{
    DataGlobal_A8E31C = 0;
    DataGlobal_A8E320 = 0;
    DataGlobal_A8E324 = 1;
    DataGlobal_A8E325 = 0;
    DataGlobal_A8E318 = (int)&vt_DynamicVectorClass_TerrainTypeClass;
    DataGlobal_A8E32C = 10;
    g_RulesClassInitState = 0;
    return atexit(sub_4E7320);
}
}
} // namespace gamemd

// 0x4E7320
namespace gamemd {
void sub_4E7320()
{
{
    DataGlobal_A8E318 = (int)&vt_VectorClass_TerrainTypeClass;
    if ( DataGlobal_A8E31C && DataGlobal_A8E325 )
  {
    __3_YAXPAX_Z(DataGlobal_A8E31C);
    DataGlobal_A8E31C = 0;
  }
    DataGlobal_A8E325 = 0;
    DataGlobal_A8E320 = 0;
}
}
} // namespace gamemd

// 0x4E7360
namespace gamemd {
int sub_4E7360()
{
{
    g_TriggerTypeCount = 0;
    DataGlobal_A83C70 = 0;
    DataGlobal_A83C74 = 1;
    DataGlobal_A83C75 = 0;
    DataGlobal_A83C68 = (int)&vt_DynamicVectorClass_BuildingTypeClass;
    DataGlobal_A83C7C = 10;
    g_TriggerClassCount = 0;
    return atexit(sub_4E73A0);
}
}
} // namespace gamemd

// 0x4E73A0
namespace gamemd {
void sub_4E73A0()
{
{
    DataGlobal_A83C68 = (int)&vt_VectorClass_BuildingTypeClass;
    if ( g_TriggerTypeCount && DataGlobal_A83C75 )
  {
    __3_YAXPAX_Z(g_TriggerTypeCount);
    g_TriggerTypeCount = 0;
  }
    DataGlobal_A83C75 = 0;
    DataGlobal_A83C70 = 0;
}
}
} // namespace gamemd

// 0x4E73E0
namespace gamemd {
int sub_4E73E0()
{
{
    g_AircraftTypeCount = 0;
    DataGlobal_A8B220 = 0;
    DataGlobal_A8B224 = 1;
    DataGlobal_A8B225 = 0;
    AircraftTypeClass_Array = (int)&vt_DynamicVectorClass_AircraftTypeClass;
    DataGlobal_A8B22C = 10;
    g_TypeClass_FindCache = 0;
    return atexit(sub_4E7420);
}
}
} // namespace gamemd

// 0x4E7420
namespace gamemd {
void sub_4E7420()
{
{
    AircraftTypeClass_Array = (int)&vt_VectorClass_AircraftTypeClass;
    if ( g_AircraftTypeCount && DataGlobal_A8B225 )
  {
    __3_YAXPAX_Z(g_AircraftTypeCount);
    g_AircraftTypeCount = 0;
  }
    DataGlobal_A8B225 = 0;
    DataGlobal_A8B220 = 0;
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
{
    g_AnimTypeCount = 0;
    DataGlobal_8B4158 = 0;
    DataGlobal_8B415C = 1;
    DataGlobal_8B415D = 0;
    AnimTypeClass_Array = (int)&vt_DynamicVectorClass_AnimTypeClass;
    DataGlobal_8B4164 = 10;
    DataGlobal_8B4160 = 0;
    return atexit(sub_4E7520);
}
}
} // namespace gamemd

// 0x4E7520
namespace gamemd {
void sub_4E7520()
{
{
    AnimTypeClass_Array = (int)&vt_VectorClass_AnimTypeClass;
    if ( g_AnimTypeCount && DataGlobal_8B415D )
  {
    __3_YAXPAX_Z(g_AnimTypeCount);
    g_AnimTypeCount = 0;
  }
    DataGlobal_8B415D = 0;
    DataGlobal_8B4158 = 0;
}
}
} // namespace gamemd

// 0x4E7560
namespace gamemd {
int sub_4E7560()
{
{
    Factory_ExitCellTable = 0;
    DataGlobal_A8E350 = 0;
    DataGlobal_A8E354 = 1;
    DataGlobal_A8E355 = 0;
    InfantryTypeClass_Array = (int)&vt_DynamicVectorClass_InfantryTypeClass;
    DataGlobal_A8E35C = 10;
    g_LoadScreenProgress = 0;
    return atexit(sub_4E75A0);
}
}
} // namespace gamemd

// 0x4E75A0
namespace gamemd {
void sub_4E75A0()
{
{
    InfantryTypeClass_Array = (int)&vt_VectorClass_InfantryTypeClass;
    if ( Factory_ExitCellTable && DataGlobal_A8E355 )
  {
    __3_YAXPAX_Z(Factory_ExitCellTable);
    Factory_ExitCellTable = 0;
  }
    DataGlobal_A8E355 = 0;
    DataGlobal_A8E350 = 0;
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
{
    DataGlobal_A8EB2C = 0;
    DataGlobal_A8EB30 = 0;
    DataGlobal_A8EB34 = 1;
    DataGlobal_A8EB35 = 0;
    VoxelAnimTypeClass_Array = (int)&vt_DynamicVectorClass_VoxelAnimTypeClass;
    DataGlobal_A8EB3C = 10;
    g_MultiplayerPool = 0;
    return atexit(sub_4E76A0);
}
}
} // namespace gamemd

// 0x4E76A0
namespace gamemd {
void sub_4E76A0()
{
{
    VoxelAnimTypeClass_Array = (int)&vt_VectorClass_VoxelAnimTypeClass;
    if ( DataGlobal_A8EB2C && DataGlobal_A8EB35 )
  {
    __3_YAXPAX_Z(DataGlobal_A8EB2C);
    DataGlobal_A8EB2C = 0;
  }
    DataGlobal_A8EB35 = 0;
    DataGlobal_A8EB30 = 0;
}
}
} // namespace gamemd

// 0x4E76E0
namespace gamemd {
int sub_4E76E0()
{
{
    g_FrameCounter = 0;
    DataGlobal_A8ED30 = 0;
    DataGlobal_A8ED34 = 1;
    DataGlobal_A8ED35 = 0;
    DataGlobal_A8ED28 = (int)&vt_DynamicVectorClass_IsometricTileTypeClass;
    DataGlobal_A8ED3C = 10;
    g_TechnoClassCount = 0;
    return atexit(sub_4E7720);
}
}
} // namespace gamemd

// 0x4E7720
namespace gamemd {
void sub_4E7720()
{
{
    DataGlobal_A8ED28 = (int)&vt_VectorClass_IsometricTileTypeClass;
    if ( g_FrameCounter && DataGlobal_A8ED35 )
  {
    __3_YAXPAX_Z(g_FrameCounter);
    g_FrameCounter = 0;
  }
    DataGlobal_A8ED35 = 0;
    DataGlobal_A8ED30 = 0;
}
}
} // namespace gamemd

// 0x4E7760
namespace gamemd {
int sub_4E7760()
{
{
    g_BuildingProductionQueue = 0;
    DataGlobal_A83DA0 = 0;
    DataGlobal_A83DA4 = 1;
    DataGlobal_A83DA5 = 0;
    DataGlobal_A83D98 = (int)&vt_DynamicVectorClass_ParticleTypeClass;
    DataGlobal_A83DAC = 10;
    g_BuildingTypeInitState = 0;
    return atexit(sub_4E77A0);
}
}
} // namespace gamemd

// 0x4E77A0
namespace gamemd {
void sub_4E77A0()
{
{
    DataGlobal_A83D98 = (int)&vt_VectorClass_ParticleTypeClass;
    if ( g_BuildingProductionQueue && DataGlobal_A83DA5 )
  {
    __3_YAXPAX_Z(g_BuildingProductionQueue);
    g_BuildingProductionQueue = 0;
  }
    DataGlobal_A83DA5 = 0;
    DataGlobal_A83DA0 = 0;
}
}
} // namespace gamemd

// 0x4E77E0
namespace gamemd {
int sub_4E77E0()
{
{
    DataGlobal_A83D6C = 0;
    DataGlobal_A83D70 = 0;
    DataGlobal_A83D74 = 1;
    DataGlobal_A83D75 = 0;
    DataGlobal_A83D68 = (int)&vt_DynamicVectorClass_ParticleSystemTypeClass;
    DataGlobal_A83D7C = 10;
    g_InfantryTypeInitState = 0;
    return atexit(sub_4E7820);
}
}
} // namespace gamemd

// 0x4E7820
namespace gamemd {
void sub_4E7820()
{
{
    DataGlobal_A83D68 = (int)&vt_VectorClass_ParticleSystemTypeClass;
    if ( DataGlobal_A83D6C && DataGlobal_A83D75 )
  {
    __3_YAXPAX_Z(DataGlobal_A83D6C);
    DataGlobal_A83D6C = 0;
  }
    DataGlobal_A83D75 = 0;
    DataGlobal_A83D70 = 0;
}
}
} // namespace gamemd

// 0x4E7860
namespace gamemd {
int sub_4E7860()
{
{
    g_SuperWeaponPool = 0;
    DataGlobal_A8E338 = 0;
    DataGlobal_A8E33C = 1;
    DataGlobal_A8E33D = 0;
    DataGlobal_A8E330 = (int)&vt_DynamicVectorClass_SuperWeaponTypeClass;
    DataGlobal_A8E344 = 10;
    g_HouseClassInitState = 0;
    return atexit(sub_4E78A0);
}
}
} // namespace gamemd

// 0x4E78A0
namespace gamemd {
void sub_4E78A0()
{
{
    DataGlobal_A8E330 = (int)&vt_VectorClass_SuperWeaponTypeClass;
    if ( g_SuperWeaponPool && DataGlobal_A8E33D )
  {
    __3_YAXPAX_Z(g_SuperWeaponPool);
    g_SuperWeaponPool = 0;
  }
    DataGlobal_A8E33D = 0;
    DataGlobal_A8E338 = 0;
}
}
} // namespace gamemd

// 0x4E78E0
namespace gamemd {
int sub_4E78E0()
{
{
    DataGlobal_A83CBC = 0;
    DataGlobal_A83CC0 = 0;
    DataGlobal_A83CC4 = 1;
    DataGlobal_A83CC5 = 0;
    DataGlobal_A83CB8 = (int)&vt_DynamicVectorClass_SuperClass;
    DataGlobal_A83CCC = 10;
    DataGlobal_A83CC8 = 0;
    return atexit(sub_4E7920);
}
}
} // namespace gamemd

// 0x4E7920
namespace gamemd {
void sub_4E7920()
{
{
    DataGlobal_A83CB8 = (int)&vt_VectorClass_SuperClass;
    if ( DataGlobal_A83CBC && DataGlobal_A83CC5 )
  {
    __3_YAXPAX_Z(DataGlobal_A83CBC);
    DataGlobal_A83CBC = 0;
  }
    DataGlobal_A83CC5 = 0;
    DataGlobal_A83CC0 = 0;
}
}
} // namespace gamemd

// 0x4E7960
namespace gamemd {
int sub_4E7960()
{
{
    DataGlobal_A83D54 = 0;
    DataGlobal_A83D58 = 0;
    DataGlobal_A83D5C = 1;
    DataGlobal_A83D5D = 0;
    SuperClass_ShowTimers = (int)&vt_DynamicVectorClass_SuperClass;
    DataGlobal_A83D64 = 10;
    DataGlobal_A83D60 = 0;
    return atexit(sub_4E79A0);
}
}
} // namespace gamemd

// 0x4E79A0
namespace gamemd {
void sub_4E79A0()
{
{
    SuperClass_ShowTimers = (int)&vt_VectorClass_SuperClass;
    if ( DataGlobal_A83D54 && DataGlobal_A83D5D )
  {
    __3_YAXPAX_Z(DataGlobal_A83D54);
    DataGlobal_A83D54 = 0;
  }
    DataGlobal_A83D5D = 0;
    DataGlobal_A83D58 = 0;
}
}
} // namespace gamemd

// 0x4E79E0
namespace gamemd {
int sub_4E79E0()
{
{
    g_TechnoClass_Count = 0;
    DataGlobal_A8EC80 = 0;
    DataGlobal_A8EC84 = 1;
    DataGlobal_A8EC85 = 0;
    TechnoClass_Array = (TechnoClass *)&vt_DynamicVectorClass_TechnoClass;
    DataGlobal_A8EC8C = 10;
    g_SidebarState = 0;
    return atexit(sub_4E7A20);
}
}
} // namespace gamemd

// 0x4E7A20
namespace gamemd {
void sub_4E7A20()
{
{
    TechnoClass_Array = (TechnoClass *)&vt_VectorClass_TechnoClass;
    if ( g_TechnoClass_Count && DataGlobal_A8EC85 )
  {
    __3_YAXPAX_Z(g_TechnoClass_Count);
    g_TechnoClass_Count = 0;
  }
    DataGlobal_A8EC85 = 0;
    DataGlobal_A8EC80 = 0;
}
}
} // namespace gamemd

// 0x4E7A60
namespace gamemd {
int sub_4E7A60()
{
{
    DataGlobal_A8EB04 = 0;
    DataGlobal_A8EB08 = 0;
    DataGlobal_A8EB0C = 1;
    DataGlobal_A8EB0D = 0;
    DataGlobal_A8EB00 = (int)&vt_DynamicVectorClass_TechnoTypeClass;
    DataGlobal_A8EB14 = 10;
    DataGlobal_A8EB10 = 0;
    return atexit(sub_4E7AA0);
}
}
} // namespace gamemd

// 0x4E7AA0
namespace gamemd {
void sub_4E7AA0()
{
{
    DataGlobal_A8EB00 = (int)&vt_VectorClass_TechnoTypeClass;
    if ( DataGlobal_A8EB04 && DataGlobal_A8EB0D )
  {
    __3_YAXPAX_Z(DataGlobal_A8EB04);
    DataGlobal_A8EB04 = 0;
  }
    DataGlobal_A8EB0D = 0;
    DataGlobal_A8EB08 = 0;
}
}
} // namespace gamemd

// 0x4E7AE0
namespace gamemd {
int sub_4E7AE0()
{
{
    DataGlobal_A8E364 = 0;
    DataGlobal_A8E368 = 0;
    DataGlobal_A8E36C = 1;
    DataGlobal_A8E36D = 0;
    DataGlobal_A8E360 = (int)&vt_DynamicVectorClass_ObjectClass;
    DataGlobal_A8E374 = 10;
    DataGlobal_A8E370 = 0;
    return atexit(sub_4E7B20);
}
}
} // namespace gamemd

// 0x4E7B20
namespace gamemd {
void sub_4E7B20()
{
{
    DataGlobal_A8E360 = (int)&vt_VectorClass_ObjectClass;
    if ( DataGlobal_A8E364 && DataGlobal_A8E36D )
  {
    __3_YAXPAX_Z(DataGlobal_A8E364);
    DataGlobal_A8E364 = 0;
  }
    DataGlobal_A8E36D = 0;
    DataGlobal_A8E368 = 0;
}
}
} // namespace gamemd

// 0x4E7B60
namespace gamemd {
int sub_4E7B60()
{
{
    DataGlobal_A8E96C = 0;
    DataGlobal_A8E970 = 0;
    DataGlobal_A8E974 = 1;
    DataGlobal_A8E975 = 0;
    DataGlobal_A8E968 = (int)&vt_DynamicVectorClass_AbstractTypeClass;
    DataGlobal_A8E97C = 10;
    g_AbstractTypePool = 0;
    return atexit(sub_4E7BA0);
}
}
} // namespace gamemd

// 0x4E7BA0
namespace gamemd {
void sub_4E7BA0()
{
{
    DataGlobal_A8E968 = (int)&vt_VectorClass_AbstractTypeClass;
    if ( DataGlobal_A8E96C && DataGlobal_A8E975 )
  {
    __3_YAXPAX_Z(DataGlobal_A8E96C);
    DataGlobal_A8E96C = 0;
  }
    DataGlobal_A8E975 = 0;
    DataGlobal_A8E970 = 0;
}
}
} // namespace gamemd

// 0x4E7BE0
namespace gamemd {
int sub_4E7BE0()
{
{
    DataGlobal_8B41E4 = 0;
    DataGlobal_8B41E8 = 0;
    DataGlobal_8B41EC = 1;
    DataGlobal_8B41ED = 0;
    DataGlobal_8B41E0 = (int)&vt_DynamicVectorClass_BuildingClass;
    DataGlobal_8B41F4 = 10;
    DataGlobal_8B41F0 = 0;
    return atexit(sub_4E7C20);
}
}
} // namespace gamemd

// 0x4E7C20
namespace gamemd {
void sub_4E7C20()
{
{
    DataGlobal_8B41E0 = (int)&vt_VectorClass_BuildingClass;
    if ( DataGlobal_8B41E4 && DataGlobal_8B41ED )
  {
    __3_YAXPAX_Z(DataGlobal_8B41E4);
    DataGlobal_8B41E4 = 0;
  }
    DataGlobal_8B41ED = 0;
    DataGlobal_8B41E8 = 0;
}
}
} // namespace gamemd

// 0x4E7C60
namespace gamemd {
int sub_4E7C60()
{
{
    DataGlobal_A83E04 = 0;
    DataGlobal_A83E08 = 0;
    DataGlobal_A83E0C = 1;
    DataGlobal_A83E0D = 0;
    DataGlobal_A83E00 = (int)&vt_DynamicVectorClass_AnimClass;
    DataGlobal_A83E14 = 10;
    DataGlobal_A83E10 = 0;
    return atexit(sub_4E7CA0);
}
}
} // namespace gamemd

// 0x4E7CA0
namespace gamemd {
void sub_4E7CA0()
{
{
    DataGlobal_A83E00 = (int)&vt_VectorClass_AnimClass;
    if ( DataGlobal_A83E04 && DataGlobal_A83E0D )
  {
    __3_YAXPAX_Z(DataGlobal_A83E04);
    DataGlobal_A83E04 = 0;
  }
    DataGlobal_A83E0D = 0;
    DataGlobal_A83E08 = 0;
}
}
} // namespace gamemd

// 0x4E7CE0
namespace gamemd {
void sub_4E7CE0()
{
{
    pUnk.field_0 = (struct IUnknownVtbl *)&vt_TiberianSunClassFactory;
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
{
    g_ObjectClass_CurrentCount = 0;
    DataGlobal_A8ECC0 = 0;
    DataGlobal_A8ECC4 = 1;
    DataGlobal_A8ECC5 = 0;
    DataGlobal_A8ECB8 = (ObjectClass *)&vt_DynamicVectorClass_ObjectClass;
    DataGlobal_A8ECCC = 10;
    g_SelectionManager = 0;
    return atexit(sub_4E7D80);
}
}
} // namespace gamemd

// 0x4E7D80
namespace gamemd {
void sub_4E7D80()
{
{
    DataGlobal_A8ECB8 = (ObjectClass *)&vt_VectorClass_ObjectClass;
    if ( g_ObjectClass_CurrentCount && DataGlobal_A8ECC5 )
  {
    __3_YAXPAX_Z(g_ObjectClass_CurrentCount);
    g_ObjectClass_CurrentCount = 0;
  }
    DataGlobal_A8ECC5 = 0;
    DataGlobal_A8ECC0 = 0;
}
}
} // namespace gamemd

// 0x4E7DE0
namespace gamemd {
void sub_4E7DE0()
{
{
    g_CoordScatterManager = (int)&vt_VersionClass;
}
}
} // namespace gamemd

// 0x4E7E50
namespace gamemd {
void sub_4E7E50()
{
{
    DataGlobal_A83D24 = (int)&vt_VectorClass_ThemeControl;
    if ( DataGlobal_A83D28 && DataGlobal_A83D31 )
  {
    __3_YAXPAX_Z(DataGlobal_A83D28);
    DataGlobal_A83D28 = 0;
  }
    DataGlobal_A83D31 = 0;
    DataGlobal_A83D2C = 0;
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
{
    DataGlobal_8B41AC = 0;
    DataGlobal_8B41B0 = 0;
    DataGlobal_8B41B4 = 1;
    DataGlobal_8B41B5 = 0;
    DataGlobal_8B41A8 = (int)&vt_DynamicVectorClass_TagClass;
    DataGlobal_8B41BC = 10;
    DataGlobal_8B41B8 = 0;
    return atexit(sub_4E7F70);
}
}
} // namespace gamemd

// 0x4E7F70
namespace gamemd {
void sub_4E7F70()
{
{
    DataGlobal_8B41A8 = (int)&vt_VectorClass_TagClass;
    if ( DataGlobal_8B41AC && DataGlobal_8B41B5 )
  {
    __3_YAXPAX_Z(DataGlobal_8B41AC);
    DataGlobal_8B41AC = 0;
  }
    DataGlobal_8B41B5 = 0;
    DataGlobal_8B41B0 = 0;
}
}
} // namespace gamemd

// 0x4E7FB0
namespace gamemd {
int sub_4E7FB0()
{
{
    DataGlobal_8B40CC = 0;
    DataGlobal_8B40D0 = 0;
    DataGlobal_8B40D4 = 1;
    DataGlobal_8B40D5 = 0;
    DataGlobal_8B40C8 = (int)&vt_DynamicVectorClass_TagClass;
    DataGlobal_8B40DC = 10;
    g_ScenarioUpdateState = 0;
    return atexit(sub_4E7FF0);
}
}
} // namespace gamemd

// 0x4E7FF0
namespace gamemd {
void sub_4E7FF0()
{
{
    DataGlobal_8B40C8 = (int)&vt_VectorClass_TagClass;
    if ( DataGlobal_8B40CC && DataGlobal_8B40D5 )
  {
    __3_YAXPAX_Z(DataGlobal_8B40CC);
    DataGlobal_8B40CC = 0;
  }
    DataGlobal_8B40D5 = 0;
    DataGlobal_8B40D0 = 0;
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
