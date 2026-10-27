// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SerialPort_e4.hpp"
#include "e4/classes/E4Recv_4E0A00_e4.hpp"
#include "e4/classes/E4Recv_4E2A50_e4.hpp"
#include "e4/classes/E4Recv_4E6070_e4.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/E4Recv_4C95D0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_4C3DD0_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/FileFind_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "classes/ObjectTypeClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ControlClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/_VectorClass_PAVParticleClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/TiberianSunClassFactory_e4.hpp"  // X74 typed-global (pUnk)
#include "e4/classes/NetworkLobby_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_4E6070(int p0); }  // x4:signals@0x4e6070
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_6616B0(int p0); }  // x4:signals@0x6616b0
namespace gamemd { int sub_74F730(int p0); }  // x4:signals@0x74f730
namespace gamemd { int sub_720960(int p0); }  // x4:signals@0x720960
namespace gamemd { int sub_5F15C0(int p0, int p1, int p2, int p3); }  // x4:signals@0x5f15c0
namespace gamemd { int sub_5408F0(int p0, int p1, int p2, int p3, int p4, int p5); }  // x4:signals@0x5408f0
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char byte_8B40E0;  // data: 0x8b40e0 truth(IDA G42.57w9)
extern unsigned char byte_8B40E1;  // data: 0x8b40e1 truth(IDA G42.57w9)
extern unsigned char byte_8B40E2;  // data: 0x8b40e2 truth(IDA G42.57w9)
extern unsigned char byte_A83CD4;  // data: 0xa83cd4 truth(IDA G42.57w9)
extern unsigned char byte_A83CD5;  // data: 0xa83cd5 truth(IDA G42.57w9)
extern unsigned char byte_A83CD6;  // data: 0xa83cd6 truth(IDA G42.57w9)
extern unsigned char byte_A83CD9;  // data: 0xa83cd9 truth(IDA G42.57w9)
extern unsigned char byte_A83DC0;  // data: 0xa83dc0 truth(IDA G42.57w9)
extern unsigned char byte_A83DC1;  // data: 0xa83dc1 truth(IDA G42.57w9)
extern unsigned char byte_A83DC2;  // data: 0xa83dc2 truth(IDA G42.57w9)
extern unsigned char byte_A83EC8;  // data: 0xa83ec8 truth(IDA G42.57w9)
extern unsigned char byte_A83EC9;  // data: 0xa83ec9 truth(IDA G42.57w9)
extern unsigned char byte_A83ECA;  // data: 0xa83eca truth(IDA G42.57w9)
extern unsigned char byte_A8E8C4;  // data: 0xa8e8c4 truth(IDA G42.57w9)
extern unsigned char byte_A8E8C5;  // data: 0xa8e8c5 truth(IDA G42.57w9)
extern unsigned char byte_A8E8C6;  // data: 0xa8e8c6 truth(IDA G42.57w9)
extern unsigned char byte_A8E980;  // data: 0xa8e980 truth(IDA G42.57w9)
extern unsigned char byte_A8E981;  // data: 0xa8e981 truth(IDA G42.57w9)
extern unsigned char byte_A8E982;  // data: 0xa8e982 truth(IDA G42.57w9)
extern unsigned char byte_A8EAE4;  // data: 0xa8eae4 truth(IDA G42.57w9)
extern unsigned int a2;  // data: 0x822bc0 truth(IDA G42.57w9)
extern unsigned int a3;  // data: 0x822bbc truth(IDA G42.57w9)
extern unsigned int a4;  // data: 0x822bb8 truth(IDA G42.57w9)
extern unsigned int a5;  // data: 0x822bb4 truth(IDA G42.57w9)
extern unsigned int a6;  // data: 0x822bb0 truth(IDA G42.57w9)
extern unsigned int a7;  // data: 0x822bac truth(IDA G42.57w9)
extern unsigned int a8;  // data: 0x822ba8 truth(IDA G42.57w9)
extern unsigned short word_A83CDA;  // data: 0xa83cda truth(IDA G42.57w9)
extern unsigned short word_A8EAE5;  // data: 0xa8eae5 truth(IDA G42.57w9)


// 0x4E0A00
namespace gamemd {  // G42.18 ns repair
unsigned int VectorClass::sub_4E0A00(int a2, unsigned int * a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  int *v6; // eax
  unsigned int *v7; // edx
  unsigned int *v8; // eax
  int v9; // ecx
  void *v10; // eax

  this->Items = 0; /*0x4e0a0a*/
  this->Capacity = a2; /*0x4e0a11*/
  this->IsInitialized = 1; /*0x4e0a14*/
  this->IsAllocated = 0; /*0x4e0a18*/
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_ptr_7E9264) */  /*0x4e0a1c*/
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
      this->Items = a3 + 1; /*0x4e0a48*/
    }
    else
    {
      v6 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x4e0a55*/
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
      this->Items = v10; /*0x4e0a83*/
      this->IsAllocated = 1; /*0x4e0a86*/
    }
  }
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_ptr_7E928C) */  /*0x4e0a8a*/
  this->u32_14 = 10; /*0x4e0a90*/
  this->Capacity = 0; /*0x4e0a97*/
  return &this->ptr_0; /*0x4e0aa0*/

}
} // namespace gamemd
// 0x4E1FE0
namespace gamemd {
int GameOptionsDlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
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
  unsigned int *WindowLongA; // eax
  HWND hWnda; // [esp+20h] [ebp+10h]

  result = (int)(BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd)); /*0x4e1ffa*/
  if ( !result ) /*0x4e2001*/
  {
    if ( a2 == 273 ) /*0x4e200d*/
    {
      v30 = (*(((unsigned short *)&(a3)) + 1)); /*0x4e233f*/
      WindowLongA = (unsigned int *)GetWindowLongA(hDlg, 8); /*0x4e2342*/
      switch ( (uint16_t)a3 ) /*0x4e2354*/
      {
        case 0x52Cu: /*0x4e2354*/
          if ( !v30 && byte_A8E9A0 == 1 ) /*0x4e23a1*/
          {
          dword_A8EDA0 = 4; /*0x4e23a3*/
          *WindowLongA = 1; /*0x4e23ad*/
        }
          break;
        case 0x52Du: /*0x4e2354*/
          if ( !v30 && byte_A8E9A0 == 1 ) /*0x4e237b*/
          {
          dword_A8EDA0 = 6; /*0x4e237e*/
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
        if ( dword_A8B238[0] || byte_A8EDDC ) /*0x4e2058*/
        {
          if ( DlgItem ) /*0x4e207d*/
          {
            SendMessageA(DlgItem, 0x4ACu, 0, 0); /*0x4e2089*/
            SendMessageA(hWnda, 0x406u, 1u, 393216); /*0x4e209c*/
            SendMessageA(hWnda, 0x405u, 1u, 6 - *(unsigned int *)dword_A8EB60); /*0x4e20b8*/
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
        if ( dword_A8B538 ) /*0x4e20c1*/
        {
          v8 = GetDlgItem(hDlg, 1321); /*0x4e20c9*/
          ShowWindow(v8, 0); /*0x4e20ce*/
          v9 = GetDlgItem(hDlg, 1812); /*0x4e20d6*/
          ShowWindow(v9, 0); /*0x4e20db*/
          v10 = GetDlgItem(hDlg, 1649); /*0x4e20e3*/
          ShowWindow(v10, 0); /*0x4e20e8*/
          if ( dword_A8B538 ) /*0x4e20f1*/
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
          SendMessageA(v15, 0x405u, 1u, 6 - dword_A8EB70); /*0x4e2159*/
        }
        v16 = GetDlgItem(hDlg, 1323); /*0x4e2161*/
        v17 = v16; /*0x4e2163*/
        if ( v16 ) /*0x4e2167*/
        {
          SendMessageA(v16, 0x4ACu, 0, 0); /*0x4e2173*/
          SendMessageA(v17, 0x406u, 1u, 0x20000); /*0x4e2182*/
          SendMessageA(v17, 0x405u, 1u, dword_A8EB78); /*0x4e2193*/
        }
        v18 = GetDlgItem(hDlg, 1537); /*0x4e219b*/
        if ( v18 ) /*0x4e219f*/
          SendMessageA(v18, 0xF1u, byte_A8EB7E != 0, 0); /*0x4e21b7*/
        v19 = GetDlgItem(hDlg, 1540); /*0x4e21bf*/
        if ( v19 ) /*0x4e21c3*/
          SendMessageA(v19, 0xF1u, byte_A8EB7F != 0, 0); /*0x4e21db*/
        v20 = GetDlgItem(hDlg, 1538); /*0x4e21e3*/
        if ( v20 ) /*0x4e21e7*/
          SendMessageA(v20, 0xF1u, byte_A8EB80 != 0, 0); /*0x4e21ff*/
        if ( byte_A8E9A0 == 1 ) /*0x4e2208*/
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
            SendMessageA(v24, 0x405u, 1u, dword_A8EB64); /*0x4e226d*/
            return 0; /*0x4e2275*/
          }
        }
      }
      return 0; /*0x4e2216*/
    }
    if ( (unsigned short)a3 == 5 ) /*0x4e227c*/
    {
      v25 = (*(((unsigned short *)&(a3)) + 1)); /*0x4e228e*/
      if ( hWnd == GetDlgItem(hDlg, 1321) ) /*0x4e2295*/
      {
        v26 = (wchar_t *)((&off_822730)[v25]); /*0x4e2297*/
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
      if ( !byte_A8E9A0 && hWnd == GetDlgItem(hDlg, 1295) ) /*0x4e22f0*/
      {
        v26 = (wchar_t *)((&off_822774)[v25]); /*0x4e22f6*/
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
// 0x4E34A0
namespace gamemd {
void * UpdateLobbyGraphicsWOL(HWND hDlg, int a2, int a3)
{
  int v3; // edx

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
  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, v3); /*0x4e350f*/
  HWND *result = 0; // eax /*0x4e3511*/
  if ( a3 ) /*0x4e3519*/
  {
    if ( a3 == 1 ) /*0x4e3527*/
    {
      result = (HWND *)HashTable::Find((void *)(g_DialogHashTable), off_844B1C[0], 0); /*0x4e3532*/
    }
    else if ( a3 == 2 ) /*0x4e3537*/
    {
      result = (HWND *)HashTable::Find((void *)(g_DialogHashTable), off_844B20[0], 0); /*0x4e3547*/
    }
  }
  else
  {
    result = (HWND *)HashTable::Find((void *)(g_DialogHashTable), off_844B18[0], 0); /*0x4e3522*/
  }
  if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x4e354f*/
    return CacheDialogInvalidate(DlgItem, (HWND)result); /*0x4e3555*/
  return result; /*0x4e355b*/
}
}
// 0x4E3690
namespace gamemd {
void * sub_4E3690(HWND hDlg, int a2)
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
    if ( dword_A8B23C ) /*0x4e379f*/
      v8 = (*(int (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 40))(dword_A8B23C); /*0x4e37a3*/
    else
      v8 = -2; /*0x4e37a8*/
  }
  Default = (HWND)((BuildingType *)v8)->FindDefault(); /*0x4e37af*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e37b8*/

}
}
// 0x4E3CE0
namespace gamemd {
void * SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2)
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

  v18 = dword_A8B3BC; /*0x4e3ce9*/
  if ( dword_A8B3C0 == -2 ) /*0x4e3cfb*/
  {
    v18 = -2; /*0x4e3cfd*/
  }
  else if ( dword_A8B3C0 == -3 ) /*0x4e3d06*/
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
    if ( dword_A8B23C ) /*0x4e3f3e*/
      v13 = (*(int (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 40))(dword_A8B23C); /*0x4e3f42*/
    else
      v13 = -2; /*0x4e3f47*/
  }
  Default = (HWND)((BuildingType *)v13)->FindDefault(); /*0x4e3f4e*/
  return CacheDialogInvalidate(v10, Default); /*0x4e3f5c*/

}
}
// 0x4E3F70
namespace gamemd {
HWND * SetupLobbyCountryCombo(HWND aP0, int nIDDlgItem, int a3)
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

  hWnd = GetDlgItem(aP0, nIDDlgItem); /*0x4e3f86*/
  v15 = !ShowWindow(hWnd, 0); /*0x4e3f9d*/
  v5 = SendDlgItemMessageA(aP0, nIDDlgItem, 0x146u, 0, 0); /*0x4e3fa8*/
  v6 = 0; /*0x4e3faa*/
  if ( v5 > 0 ) /*0x4e3fae*/
  {
    while ( SendDlgItemMessageA(aP0, nIDDlgItem, 0x150u, v6, 0) != a3 ) /*0x4e3fc4*/
    {
      if ( (int)++v6 >= v5 ) /*0x4e3fc9*/
        goto LABEL_6; /*0x4e3fc9*/
    }
    SendDlgItemMessageA(aP0, nIDDlgItem, 0x14Eu, v6, 0); /*0x4e3fd7*/
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
  DlgItem = GetDlgItem(aP0, v8); /*0x4e40a2*/
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
  v11 = SendDlgItemMessageA(aP0, v10, 0x147u, 0, 0); /*0x4e4119*/
  v12 = SendDlgItemMessageA(aP0, v10, 0x150u, v11, 0); /*0x4e4125*/
  if ( v12 < -3 || v12 > 9 ) /*0x4e412f*/
  {
    if ( dword_A8B23C ) /*0x4e4139*/
      v12 = (*(int (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 40))(dword_A8B23C); /*0x4e413d*/
    else
      v12 = -2; /*0x4e4142*/
  }
  Default = (HWND)((BuildingType *)v12)->FindDefault(); /*0x4e4149*/
  return CacheDialogInvalidate(DlgItem, Default); /*0x4e4157*/

}
}
// 0x4E45A0
namespace gamemd {
bool FillComboBoxFactions(HWND hDlg, int nIDDlgItem)
{
  int v11; // [esp+14h] [ebp-Ch]

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e45b1*/
  bool v10; // [esp+13h] [ebp-Dh]
  v10 = !ShowWindow(DlgItem, 0); /*0x4e45ce*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e45d3*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e45df*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e45eb*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(g_Str_GUI_RandomAsSymbols), 0, g_Str_File_GDlgSupp_cpp, 522); /*0x4e45fe*/
  LRESULT v5; // ebx
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
  int *v6; // ebx
  v6 = (int *)(dword_8B4040);
  WPARAM wParam; // [esp+1Ch] [ebp-4h]
  wParam = 0; /*0x4e46c2*/
  LPARAM lParam; // [esp+18h] [ebp-8h]
  lParam = 0; /*0x4e46c6*/
  do /*0x4e472c*/
  {
    bool v9; // [esp+12h] [ebp-Eh]
    v9 = *v6 == v11; /*0x4e46d7*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e46e0*/
    {
      LRESULT v7; // ebp
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)aAb); /*0x4e46f1*/
      SendMessageA(DlgItem, 0x498u, v7, *(v6 - 1)); /*0x4e46fe*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e470c*/
      if ( v9 ) /*0x4e4714*/
        wParam = v7; /*0x4e4716*/
    }
    v6 += 3; /*0x4e471e*/
    ++lParam; /*0x4e4728*/
  }
  while ( (int)v6 < (int)&dbl_8B40A0 ); /*0x4e472c*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e473b*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e4747*/
  (*((unsigned char *)&(result))) = v10; /*0x4e4749*/
  if ( !v10 ) /*0x4e474f*/
    return ShowWindow(DlgItem, 5); /*0x4e4754*/
  return result; /*0x4e475a*/
}
}
// 0x4E48E0
namespace gamemd {
int SkirmishDialog_MapPlayerToControl(HWND a1, int a2)
{

  int v2; // edi
  int v3; // eax
  unsigned int *v4; // edx

  v2 = dword_A8B3B4; /*0x4e48e7*/
  if ( dword_A8B3B8 == -2 ) /*0x4e48f0*/
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
  if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x4e496b*/
  {
    v4 = *(unsigned int **)&stru_A8D804.__pad_3D[4 * a2 + 591]; /*0x4e496d*/
    if ( v4 == (unsigned int *)g_Lobby_MaxPlayers && *(unsigned int *)((char *)v4 + 107) == -1 ) /*0x4e4982*/
      v2 = 8; /*0x4e4984*/
  }
  return SetupSkirmishSpawnLocations(a1, v3, v2); /*0x4e4991*/

}
}
// 0x4E49A0
namespace gamemd {
int SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3)
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
  int result; // eax
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
      (*((unsigned char *)&(v6))) = v6 & 0xF8; /*0x4e4a3a*/
      v5 = v6 + 7; /*0x4e4a3c*/
      break;
  }
  v7 = (int)((int *)(0));
  v8 = (int *)(dword_8B4040); /*0x4e4a43*/
  while ( *v8 != v5 ) /*0x4e4a4a*/
  {
    v8 += 3; /*0x4e4a4c*/
    ++v7; /*0x4e4a4f*/
    if ( (int)v8 >= (int)&dword_8B40AC ) /*0x4e4a56*/
      goto LABEL_22; /*0x4e4a56*/
  }
  if ( v7 != -1 ) /*0x4e4a5d*/
    dword_8B4040[3 * v7] = -1; /*0x4e4a62*/
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
      dword_8B4040[3 * v10] = v11; /*0x4e4b47*/
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
    if ( (((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4) /*0x4e4bf7*/
      && ((v14 = *(&dword_A8DA90 + i), v14 == g_Lobby_MaxPlayers) || *(unsigned int *)(v14 + 107) == -1) )
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
// 0x4E4C20
namespace gamemd {
char FillColorComboBoxUI(HWND hDlg, int nIDDlgItem)
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
  int result; // eax

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
      (*((unsigned char *)&(v5))) = v5 & 0xF8; /*0x4e4c97*/
      v4 = v5 + 7; /*0x4e4c99*/
      break;
  }
  v6 = (int)((int *)(0));
  v7 = (int *)(dword_8B4040); /*0x4e4c9f*/
  while ( *v7 != v4 ) /*0x4e4ca6*/
  {
    v7 += 3; /*0x4e4ca8*/
    ++v6; /*0x4e4cab*/
    if ( (int)v7 >= (int)&dword_8B40AC ) /*0x4e4cb2*/
      goto LABEL_22; /*0x4e4cb2*/
  }
  if ( v6 != -1 ) /*0x4e4cb9*/
    dword_8B4040[3 * v6] = -1; /*0x4e4cbe*/
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
    dword_8B4040[3 * v9] = v10; /*0x4e4d67*/
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
    if ( (((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4) /*0x4e4dfc*/
      && ((v13 = *(&dword_A8DA90 + i), v13 == g_Lobby_MaxPlayers) || *(unsigned int *)(v13 + 107) == -1) )
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
// 0x4E50C0
namespace gamemd {
bool FillComboBoxAllianceSlots(HWND hDlg, int nIDDlgItem)
{
  int v11; // [esp+14h] [ebp-Ch]

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e50d3*/
  bool v10; // [esp+13h] [ebp-Dh]
  v10 = !ShowWindow(DlgItem, 0); /*0x4e50ed*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e50f2*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e50fd*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5108*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(g_Str_GUI_RandomAsSymbols), 0, g_Str_File_GDlgSupp_cpp, 833); /*0x4e511b*/
  LRESULT v5; // eax
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
  WPARAM wParam; // [esp+1Ch] [ebp-4h]
  wParam = (WPARAM)((int *)(0));
  LPARAM lParam; // [esp+18h] [ebp-8h]
  lParam = 0; /*0x4e51ca*/
  int *v6; // ebp
  v6 = (int *)(dword_8B3F38); /*0x4e51ce*/
  do /*0x4e5228*/
  {
    bool v9; // [esp+12h] [ebp-Eh]
    v9 = *v6 == v11; /*0x4e51e1*/
    if ( *v6 == v11 || *v6 == -1 ) /*0x4e51ea*/
    {
      LRESULT v7; // ebx
      v7 = SendMessageA(DlgItem, 0x4C2u, 0, *(v6 - 2)); /*0x4e51fa*/
      SendMessageA(DlgItem, 0x151u, v7, lParam); /*0x4e5208*/
      if ( v9 ) /*0x4e5210*/
        wParam = v7; /*0x4e5212*/
    }
    v6 += 3; /*0x4e521a*/
    ++lParam; /*0x4e5224*/
  }
  while ( (int)v6 < (int)&dword_8B3F98 ); /*0x4e5228*/
  SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x4e5237*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5243*/
  (*((unsigned char *)&(result))) = v10; /*0x4e5245*/
  if ( !v10 ) /*0x4e524b*/
    return ShowWindow(DlgItem, 5); /*0x4e5250*/
  return result; /*0x4e5256*/
}
}
// 0x4E53D0
namespace gamemd {
int Lobby_FillFactionComboBox(HWND a1, int a2)
{

  int v2; // edi
  int v3; // eax
  unsigned int *v4; // edx

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
  if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x4e544b*/
  {
    v4 = *(unsigned int **)&stru_A8D804.__pad_3D[4 * a2 + 591]; /*0x4e544d*/
    if ( v4 == (unsigned int *)g_Lobby_MaxPlayers && *(unsigned int *)((char *)v4 + 107) == -1 ) /*0x4e5462*/
      v2 = 8; /*0x4e5464*/
  }
  return SetupLobbyFactionSlots(a1, v3, v2); /*0x4e5471*/

}
}
// 0x4E5480
namespace gamemd {
int SetupLobbyFactionSlots(HWND aP0, int nIDDlgItem, int a3)
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
  int result; // eax
  bool v16; // [esp+Bh] [ebp-Dh]
  LRESULT v18; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  v4 = aP0; /*0x4e5487*/
  hWnd = GetDlgItem(aP0, nIDDlgItem); /*0x4e5498*/
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
      (*((unsigned char *)&(v6))) = v6 & 0xF8; /*0x4e551a*/
      v5 = v6 + 7; /*0x4e551c*/
      break;
  }
  v7 = (int)((int *)(0));
  v8 = (int *)(dword_8B3F38); /*0x4e5523*/
  while ( *v8 != v5 ) /*0x4e552a*/
  {
    v8 += 3; /*0x4e552c*/
    ++v7; /*0x4e552f*/
    if ( (int)v8 >= (int)&unk_8B3FA4 ) /*0x4e5536*/
      goto LABEL_22; /*0x4e5536*/
  }
  if ( v7 != -1 ) /*0x4e553d*/
    dword_8B3F38[3 * v7] = -1; /*0x4e5542*/
  LABEL_22:
  v9 = 0; /*0x4e554d*/
  v18 = SendDlgItemMessageA(v4, nIDDlgItem, 0x146u, 0, 0); /*0x4e5564*/
  if ( v18 > 0 )
  {
    while ( 1 ) /*0x4e557a*/
    {
      v10 = SendDlgItemMessageA(v4, nIDDlgItem, 0x150u, v9, 0); /*0x4e557a*/
      if ( v10 == a3 ) /*0x4e5580*/
        break; /*0x4e5580*/
      v4 = aP0; /*0x4e5586*/
      if ( (int)++v9 >= v18 ) /*0x4e558d*/
        goto LABEL_44; /*0x4e558d*/
    }
    SendDlgItemMessageA(aP0, nIDDlgItem, 0x14Eu, v9, 0); /*0x4e55a2*/
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
      dword_8B3F38[3 * v10] = v11; /*0x4e5627*/
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
    if ( (((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4) /*0x4e56d7*/
      && ((v14 = *(&dword_A8DA90 + i), v14 == g_Lobby_MaxPlayers) || *(unsigned int *)(v14 + 107) == -1) )
    {
      result = SetupComboBoxRandomAlliance(v4, v13); /*0x4e56e4*/
    }
    else
    {
      result = FillComboBoxAllianceSlots(v4, v13); /*0x4e56db*/
    }
  }
  return result; /*0x4e56f3*/
}
}
// 0x4E5700
namespace gamemd {
char FillComboBoxSides(HWND hDlg, int nIDDlgItem)
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
  int result; // eax

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
      (*((unsigned char *)&(v5))) = v5 & 0xF8; /*0x4e5777*/
      v4 = v5 + 7; /*0x4e5779*/
      break;
  }
  v6 = (int)((int *)(0));
  v7 = (int *)(dword_8B3F38); /*0x4e577f*/
  while ( *v7 != v4 ) /*0x4e5786*/
  {
    v7 += 3; /*0x4e5788*/
    ++v6; /*0x4e578b*/
    if ( (int)v7 >= (int)&unk_8B3FA4 ) /*0x4e5792*/
      goto LABEL_22; /*0x4e5792*/
  }
  if ( v6 != -1 ) /*0x4e5799*/
    dword_8B3F38[3 * v6] = -1; /*0x4e579e*/
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
    dword_8B3F38[3 * v9] = v10; /*0x4e5847*/
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
    if ( (((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4) /*0x4e58dc*/
      && ((v13 = *(&dword_A8DA90 + i), v13 == g_Lobby_MaxPlayers) || *(unsigned int *)(v13 + 107) == -1) )
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
// 0x4E5B60
namespace gamemd {
bool FillLobbyPlayerSlot(HWND hDlg, int nIDDlgItem)
{
  HWND DlgItem; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  LPARAM v6; // ebx
  LPARAM *v7; // ebp
  LRESULT v8; // eax
  int result; // eax
  HWND v10; // eax
  bool v11; // [esp+Bh] [ebp-5h]

  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e5b71*/
  v11 = !ShowWindow(DlgItem, 0); /*0x4e5b8e*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e5b93*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5b9f*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5bab*/
  if ( ((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4 ) /*0x4e5bba*/
  {
    if ( dword_A8B23C && (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C) < 0 ) /*0x4e5be8*/
    {
      StringCSF = GetStringCSF((char *)(aGuiNoneassymbo), 0, g_Str_File_GDlgSupp_cpp, 1110); /*0x4e5bfb*/
      goto LABEL_9; /*0x4e5bfb*/
    }
  }
  else
  {
    v3 = Skirmish_Setup(); /*0x4e5bbc*/
    if ( v3 && (*(int (**)(int))(*(unsigned int *)v3 + 44))(v3) < 0 ) /*0x4e5bce*/
    {
      StringCSF = GetStringCSF((char *)(aGuiNoneassymbo), 0, g_Str_File_GDlgSupp_cpp, 1119); /*0x4e5bd5*/
      LABEL_9:
      v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5c00*/
      SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5c14*/
    }
  }
  v6 = (LPARAM)((LPARAM *)(0));
  v7 = (LPARAM *)(&dword_8B3FC0); /*0x4e5c1a*/
  do /*0x4e5c41*/
  {
    v8 = SendMessageA(DlgItem, 0x4C2u, 0, *v7); /*0x4e5c2b*/
    SendMessageA(DlgItem, 0x151u, v8, v6); /*0x4e5c35*/
    v7 += 3; /*0x4e5c37*/
    ++v6; /*0x4e5c3a*/
  }
  while ( (int)v7 < (int)&dword_8B3FF0 ); /*0x4e5c41*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e5c4d*/
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e5c59*/
  result = ((unsigned int *)(dword_A8B238))[0]; /*0x4e5c5b*/
  if ( ((unsigned int *)(dword_A8B238))[0] == 4 && Network::IsLobbyFeature() ) /*0x4e5c67*/
  {
    ShowWindow(DlgItem, 0); /*0x4e5c79*/
    v10 = GetDlgItem(hDlg, 1940); /*0x4e5c85*/
    return ShowWindow(v10, 0); /*0x4e5c8e*/
  }
  else
  {
    (*((unsigned char *)&(result))) = v11; /*0x4e5c96*/
    if ( !v11 ) /*0x4e5c9c*/
      return ShowWindow(DlgItem, 5); /*0x4e5ca1*/
  }
  return result; /*0x4e5c90*/
}
}
// 0x4E5E20
namespace gamemd {
int Lobby_SetupPlayerSlotDialog(HWND a1, int a2)
{

  int v2; // edi
  int v3; // eax
  unsigned int *v4; // edx

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
  if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x4e5e99*/
  {
    v4 = *(unsigned int **)&stru_A8D804.__pad_3D[4 * a2 + 591]; /*0x4e5e9b*/
    if ( v4 == (unsigned int *)g_Lobby_MaxPlayers && *(unsigned int *)((char *)v4 + 107) == -1 ) /*0x4e5eaf*/
      v2 = 4; /*0x4e5eb1*/
  }
  return SetupLobbyPlayerSlots(a1, v3, v2); /*0x4e5ebe*/

}
}
// 0x4E5ED0
namespace gamemd {
bool SetupLobbyPlayerSlots(SessionClass * aP0, int nIDDlgItem, int a3)
{
  int result; // eax
  WPARAM v6; // ebp
  LRESULT v7; // ebx
  int v8; // esi
  HWND DlgItem; // eax
  bool v10; // [esp+13h] [ebp-9h]
  HWND hWnd; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  hWnd = GetDlgItem((HWND)(aP0), nIDDlgItem); /*0x4e5ee6*/
  v10 = !ShowWindow(hWnd, 0); /*0x4e5efd*/
  result = SendDlgItemMessageA((HWND)(aP0), nIDDlgItem, 0x146u, 0, 0); /*0x4e5f02*/
  v6 = 0; /*0x4e5f08*/
  v12 = result; /*0x4e5f0c*/
  if ( result > 0 )
  {
    while ( 1 ) /*0x4e5f26*/
    {
      v7 = SendDlgItemMessageA((HWND)(aP0), nIDDlgItem, 0x150u, v6, 0); /*0x4e5f26*/
      if ( v7 == a3 ) /*0x4e5f2c*/
        break; /*0x4e5f2c*/
      result = v12; /*0x4e5f2e*/
      if ( (int)++v6 >= v12 ) /*0x4e5f35*/
        goto LABEL_22; /*0x4e5f35*/
    }
    result = SendDlgItemMessageA((HWND)(aP0), nIDDlgItem, 0x14Eu, v6, 0); /*0x4e5f46*/
    if ( v7 != -2 )
    {
      switch ( nIDDlgItem )
      {
        case 1901:
          v8 = 0; /*0x4e5f5d*/
          break;
        case 1902:
          v8 = 1; /*0x4e5f69*/
          break;
        case 1903:
          v8 = 2; /*0x4e5f78*/
          break;
        case 1904:
          v8 = 3; /*0x4e5f87*/
          break;
        case 1905:
          v8 = 4; /*0x4e5f96*/
          break;
        case 1906:
          v8 = 5; /*0x4e5fa5*/
          break;
        case 1907:
          v8 = 6; /*0x4e5fb4*/
          break;
        default:
          v8 = nIDDlgItem != 1908 ? -1 : 7;
          break;
      }
      result = 3 * v7; /*0x4e5fcb*/
      dword_8B3FC8[3 * v7] = v8; /*0x4e5fce*/
    }
  }
  LABEL_22:
  if ( ((unsigned int *)(dword_A8B238))[0] == 4 && Network::IsLobbyFeature() ) /*0x4e5fde*/
  {
    ShowWindow(hWnd, 0); /*0x4e5ff4*/
    DlgItem = GetDlgItem((HWND)(aP0), 1940); /*0x4e5ffc*/
    return ShowWindow(DlgItem, 0); /*0x4e6005*/
  }
  else
  {
    (*((unsigned char *)&(result))) = v10; /*0x4e6011*/
    if ( !v10 ) /*0x4e6017*/
      return ShowWindow(hWnd, 5); /*0x4e6020*/
  }
  return result; /*0x4e6007*/
}
}
// 0x4E6860
namespace gamemd {
int sub_4E6860()
{
  dword_A8ED44 = 0; /*0x4e6867*/
  dword_A8ED48 = 0; /*0x4e686c*/
  byte_A8ED4C = 1; /*0x4e6871*/
  byte_A8ED4D = 0; /*0x4e6878*/
  dword_A8ED40 = (int)&off_7E4678; /*0x4e687d*/
  dword_A8ED54 = 10; /*0x4e6887*/
  dword_A8ED50 = 0; /*0x4e6891*/
  return atexit(sub_4E68A0); /*0x4e689c*/
}
}
// 0x4E6CE0
namespace gamemd {
int sub_4E6CE0()
{
  dword_A8022C = 0; /*0x4e6ce7*/
  dword_A80230 = 0; /*0x4e6cec*/
  byte_A80234 = 1; /*0x4e6cf1*/
  byte_A80235 = 0; /*0x4e6cf8*/
  dword_A80228 = (int)&g_ptr_7E3238; /*0x4e6cfd*/
  dword_A8023C = 10; /*0x4e6d07*/
  dword_A80238 = 0; /*0x4e6d11*/
  return atexit(sub_4E6D20); /*0x4e6d1c*/
}
}
// 0x4E6D20
namespace gamemd {
void sub_4E6D20()
{
  dword_A80228 = (int)&g_ptr_7E8500; /*0x4e6d28*/
  if ( dword_A8022C && byte_A80235 ) /*0x4e6d3c*/
  {
    operator delete((void *)(dword_A8022C)); /*0x4e6d3f*/
    dword_A8022C = 0; /*0x4e6d47*/
  }
  byte_A80235 = 0; /*0x4e6d4d*/
  dword_A80230 = 0; /*0x4e6d53*/
}
}
// 0x4E7460
namespace gamemd {
int sub_4E7460()
{
  dword_A83CE4 = 0; /*0x4e7467*/
  dword_A83CE8 = 0; /*0x4e746c*/
  byte_A83CEC = 1; /*0x4e7471*/
  byte_A83CED = 0; /*0x4e7478*/
  dword_A83CE0 = (int)&g_ptr_7E3238; /*0x4e747d*/
  dword_A83CF4 = 10; /*0x4e7487*/
  dword_A83CF0 = 0; /*0x4e7491*/
  return atexit(sub_4E74A0); /*0x4e749c*/
}
}
// 0x4E74A0
namespace gamemd {
void sub_4E74A0()
{
  dword_A83CE0 = (int)&g_ptr_7E8500; /*0x4e74a8*/
  if ( dword_A83CE4 && byte_A83CED ) /*0x4e74bc*/
  {
    operator delete((void *)(dword_A83CE4)); /*0x4e74bf*/
    dword_A83CE4 = 0; /*0x4e74c7*/
  }
  byte_A83CED = 0; /*0x4e74cd*/
  dword_A83CE8 = 0; /*0x4e74d3*/
}
}
// 0x4E75E0
namespace gamemd {
int sub_4E75E0()
{
  dword_A83C84 = 0; /*0x4e75e7*/
  dword_A83C88 = 0; /*0x4e75ec*/
  byte_A83C8C = 1; /*0x4e75f1*/
  byte_A83C8D = 0; /*0x4e75f8*/
  dword_A83C80 = (int)&g_ptr_7E3238; /*0x4e75fd*/
  dword_A83C94 = 10; /*0x4e7607*/
  dword_A83C90 = 0; /*0x4e7611*/
  return atexit(sub_4E7620); /*0x4e761c*/
}
}
// 0x4E7620
namespace gamemd {
void sub_4E7620()
{
  dword_A83C80 = (int)&g_ptr_7E8500; /*0x4e7628*/
  if ( dword_A83C84 && byte_A83C8D ) /*0x4e763c*/
  {
    operator delete((void *)(dword_A83C84)); /*0x4e763f*/
    dword_A83C84 = 0; /*0x4e7647*/
  }
  byte_A83C8D = 0; /*0x4e764d*/
  dword_A83C88 = 0; /*0x4e7653*/
}
}
// 0x4E7EA0
namespace gamemd {
char * * sub_4E7EA0()
{

  char *result; // eax
  result = (char *)(byte_A802D4);
  int v1 = 128; // ecx /*0x4e7ea5*/
  do /*0x4e7eb2*/
  {
    *result = 0; /*0x4e7eac*/
    result += 111; /*0x4e7eae*/
    --v1; /*0x4e7eb1*/
  }
  while ( v1 ); /*0x4e7eb2*/
  dword_A802C8 = 0; /*0x4e7eb4*/
  dword_A802CC = 0; /*0x4e7eba*/
  dword_A802D0 = 0; /*0x4e7ec0*/
  return (char **)(result); /*0x4e7ec6*/
}
}
// 0x4E8090
namespace gamemd {
void unknown_libname_18()
{
  void *v0; // edi

  v0 = (void *)((unsigned char)((void *)unk_A8EAA4));
  unk_A8EA70 = (unsigned char)(&g_ptr_7EEFDC); /*0x5f1657*/
  if ( unk_A8EAA4 ) /*0x5f165f*/
  {
    FileFind::Close(); /*0x5f1663*/
    operator delete((v0)); /*0x5f1669*/
  }
  ((int)&unk_A8EA70)->FreeResources(); /*0x5f1673*/
  if ( unk_A8EAB0 != -1 ) /*0x5f1680*/
  {
    if ( !g_ClipboardBuffer ) /*0x5f168a*/
      goto LABEL_10; /*0x5f168a*/
    ((SerialPort *)((HANDLE *)g_ClipboardBuffer))->Close(); /*0x5f168c*/
    if ( g_ClipboardBuffer ) /*0x5f1699*/
      (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f169f*/
    g_ClipboardBuffer = 0; /*0x5f16a1*/
    unk_A8EAB0 = -1; /*0x5f16ad*/
    ((int)&unk_A8EA70)->FreeResources(); /*0x5f16b0*/
  }
  if ( g_ClipboardBuffer ) /*0x5f16bd*/
  {
    (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5f16c3*/
    g_ClipboardBuffer = 0; /*0x5f16c5*/
  }
  LABEL_10: unk_A8EA70 = (unsigned char)(&g_ptr_7EC1D4);
}
}
// 0x4E9240
namespace gamemd {
AbstractClass * * VectorClass::HouseClass__vt_02_(int a2, unsigned int * a3)
{

  if ( a2 ) /*0x4e924c*/
  {
    this->IsInitialized = 0; /*0x4e9256*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x4e925c*/
      v4 = a3; /*0x4e9272*/
    else
      v4 = (unsigned int *)(operator new(4 * a2)); /*0x4e926e*/
    this->IsInitialized = 1; /*0x4e9276*/
    if ( v4 ) /*0x4e927a*/
    {
      if ( this->Items ) /*0x4e9285*/
      {
        int v6 = this->Capacity; // ecx /*0x4e928c*/
        if ( a2 < v6 ) /*0x4e9291*/
          v6 = a2; /*0x4e9293*/
        int i; // eax
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x4e9299*/
          ++i; /*0x4e929e*/
        if ( this->IsAllocated ) /*0x4e92ab*/
        {
          operator delete((this->Items)); /*0x4e92b6*/
          this->Items = 0; /*0x4e92be*/
        }
      }
      this->Items = v4; /*0x4e92c7*/
      this->Capacity = a2; /*0x4e92cf*/
      this->IsAllocated = a3 == 0; /*0x4e92d2*/
      return (gamemd::AbstractClass **)(1); /*0x4e92d8*/
    }
    else
    {
      return 0; /*0x4e927f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*&this->IsInitialized))(this); /*0x4e92e2*/
    return (gamemd::AbstractClass **)(1); /*0x4e92e8*/
  }
}
}
// 0x4E9E20
namespace gamemd {
AbstractClass * _VectorClass_PAVParticleClass::ParticleSystemClass__vt_02_(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e9e2c*/
  {
    LOBYTE(this->u8_C) = 0; /*0x4e9e36*/
    if ( a3 ) /*0x4e9e3c*/
      v4 = a3; /*0x4e9e52*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4e9e4e*/
    LOBYTE(this->u8_C) = 1; /*0x4e9e56*/
    if ( v4 ) /*0x4e9e5a*/
    {
      if ( *&this->u32_4 ) /*0x4e9e65*/
      {
        m_8 = this->m_8; /*0x4e9e6c*/
        if ( a2 < m_8 ) /*0x4e9e71*/
          m_8 = a2; /*0x4e9e73*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x4e9e79*/
          ++i; /*0x4e9e7e*/
        if ( BYTE1(this->u8_C) ) /*0x4e9e8b*/
        {
          __3_YAXPAX_Z(*&this->u32_4); /*0x4e9e96*/
          *&this->u32_4 = 0; /*0x4e9e9e*/
        }
      }
      *&this->u32_4 = v4; /*0x4e9ea7*/
      this->m_8 = a2; /*0x4e9eaf*/
      BYTE1(this->u8_C) = a3 == 0; /*0x4e9eb2*/
      return 1; /*0x4e9eb8*/
    }
    else
    {
      return 0; /*0x4e9e5f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVParticleClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4e9ec2*/
    return 1; /*0x4e9ec8*/
  }

}
}
// 0x4E9ED0
namespace gamemd {
void _VectorClass_PAVParticleClass::ParticleSystemClass__vt_03_()
{
  if ( *&this->u32_4 && (this->u8_D) ) /*0x4e9edd*/
  {
    operator delete((void *)(*&this->u32_4)); /*0x4e9ee3*/
    *&this->u32_4 = 0; /*0x4e9eeb*/
  }
  (this->u8_D) = 0; /*0x4e9eee*/
  this->u8_D = 0; /*0x4e9ef1*/
}
}
// 0x4E0C30
namespace gamemd {
void nullsub_138()
{
  ; /*0x4e0c30*/
}
} // namespace gamemd

// 0x4E0D30
namespace gamemd {
unsigned int * FoggedObjectClass_42::loc_4E0D30(unsigned int * Block, char a2)
{


  void *v3 = *&Block->__pad_004; // eax /*0x4e0ce3*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x4e0ce6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4e0cf0*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0cf8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4e0d00*/
  }
  BYTE1(Block->m_C) = 0; /*0x4e0d0b*/
  Block->m_8 = 0; /*0x4e0d11*/
  if ( (a2 & 1) != 0 ) /*0x4e0d18*/
    __3_YAXPAX_Z(Block); /*0x4e0d1b*/
  return Block->__pad_0; /*0x4e0d25*/

}
} // namespace gamemd

// 0x4E0F10
namespace gamemd {
void sub_4E0F10()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x4e0f1c*/
  dbl_8B3E18 = Math::Sqrt(v0 + v0); /*0x4e0f2e*/
}
} // namespace gamemd

// 0x4E0F40
namespace gamemd {
void sub_4E0F40()
{
  dbl_8B3E68 = dbl_8B3E18 / 60.0; /*0x4e0f4c*/
}
} // namespace gamemd

// 0x4E0F60
namespace gamemd {
void sub_4E0F60()
{
  dbl_8B3E50 = 1.0 / dbl_8B3E68; /*0x4e0f6c*/
}
} // namespace gamemd

// 0x4E0F80
namespace gamemd {
void sub_4E0F80()
{
  dbl_8B3E48 = 0.0174532925199433 * 45.0; /*0x4e0f8c*/
}
} // namespace gamemd

// 0x4E0FA0
namespace gamemd {
void sub_4E0FA0()
{
  dbl_8B3E20 = 0.0174532925199433 * 60.0; /*0x4e0fac*/
}
} // namespace gamemd

// 0x4E0FC0
namespace gamemd {
void sub_4E0FC0()
{
  dbl_8B3E08 = 0.0174532925199433 * 90.0; /*0x4e0fcc*/
}
} // namespace gamemd

// 0x4E0FE0
namespace gamemd {
long long sub_4E0FE0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_8B3E08 - dbl_8B3E20); /*0x4e0ff2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_8B3E18 * 0.5); /*0x4e1006*/
  dword_8B3E70 = result; /*0x4e100b*/
  return result; /*0x4e1010*/
}
} // namespace gamemd

// 0x4E1020
namespace gamemd {
void sub_4E1020()
{
  dbl_8B3E28 = Math::ArcTan((double)dword_8B3E70 * 0.00390625); /*0x4e1037*/
}
} // namespace gamemd

// 0x4E1050
namespace gamemd {
void sub_4E1050()
{
  dbl_8B3E40 = Math::ArcTan((double)(2 * dword_8B3E70) / dbl_8B3E18); /*0x4e1072*/
}
} // namespace gamemd

// 0x4E1080
namespace gamemd {
long long sub_4E1080()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_8B3E70) + 0.5); /*0x4e109b*/
  dword_8B3E64 = result; /*0x4e10a0*/
  return result; /*0x4e10a6*/
}
} // namespace gamemd

// 0x4E10B0
namespace gamemd {
int sub_4E10B0()
{
  word_8B3E10 = 0; /*0x4e10b2*/
  word_8B3E12 = 0; /*0x4e10b8*/
  return 0; /*0x4e10be*/
}
} // namespace gamemd

// 0x4E10C0
namespace gamemd {
int sub_4E10C0()
{
  dword_8B3E30 = 0; /*0x4e10c2*/
  dword_8B3E34 = 0; /*0x4e10c7*/
  dword_8B3E38 = 0; /*0x4e10cc*/
  return 0; /*0x4e10d1*/
}
} // namespace gamemd

// 0x4E10E0
namespace gamemd {
int sub_4E10E0()
{
  dword_8B3E60 = 0; /*0x4e10e5*/
  dword_8B3E58 = 128; /*0x4e10ef*/
  dword_8B3E5C = 128; /*0x4e10f4*/
  return 128; /*0x4e10f9*/
}
} // namespace gamemd

// 0x4E12B0
namespace gamemd {
int sub_4E12B0()
{
  dword_8B3E78 = 0; /*0x4e12b2*/
  dword_8B3E7C = 0; /*0x4e12b7*/
  dword_8B3E80 = 0; /*0x4e12bc*/
  dword_8B3E84 = 0; /*0x4e12c1*/
  return 0; /*0x4e12c6*/
}
} // namespace gamemd

// 0x4E1AF0
namespace gamemd {
int sub_4E1AF0()
{
  dword_8B3EA0 = 0; /*0x4e1af2*/
  dword_8B3EA4 = 0; /*0x4e1af7*/
  dword_8B3EA8 = 0; /*0x4e1afc*/
  dword_8B3EAC = 0; /*0x4e1b01*/
  return 0; /*0x4e1b06*/
}
} // namespace gamemd

// 0x4E1B10
namespace gamemd {
void sub_4E1B10()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x4e1b1c*/
  dbl_8B3EB8 = Math::Sqrt(v0 + v0); /*0x4e1b2e*/
}
} // namespace gamemd

// 0x4E1B40
namespace gamemd {
void sub_4E1B40()
{
  dbl_8B3F08 = dbl_8B3EB8 / 60.0; /*0x4e1b4c*/
}
} // namespace gamemd

// 0x4E1B60
namespace gamemd {
void sub_4E1B60()
{
  dbl_8B3EF0 = 1.0 / dbl_8B3F08; /*0x4e1b6c*/
}
} // namespace gamemd

// 0x4E1B80
namespace gamemd {
void sub_4E1B80()
{
  dbl_8B3EE8 = 0.0174532925199433 * 45.0; /*0x4e1b8c*/
}
} // namespace gamemd

// 0x4E1BA0
namespace gamemd {
void sub_4E1BA0()
{
  dbl_8B3EC0 = 0.0174532925199433 * 60.0; /*0x4e1bac*/
}
} // namespace gamemd

// 0x4E1BC0
namespace gamemd {
void sub_4E1BC0()
{
  dbl_8B3E98 = 0.0174532925199433 * 90.0; /*0x4e1bcc*/
}
} // namespace gamemd

// 0x4E1BE0
namespace gamemd {
long long sub_4E1BE0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_8B3E98 - dbl_8B3EC0); /*0x4e1bf2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_8B3EB8 * 0.5); /*0x4e1c06*/
  dword_8B3F10 = result; /*0x4e1c0b*/
  return result; /*0x4e1c10*/
}
} // namespace gamemd

// 0x4E1C20
namespace gamemd {
void sub_4E1C20()
{
  dbl_8B3EC8 = Math::ArcTan((double)dword_8B3F10 * 0.00390625); /*0x4e1c37*/
}
} // namespace gamemd

// 0x4E1C50
namespace gamemd {
void sub_4E1C50()
{
  dbl_8B3EE0 = Math::ArcTan((double)(2 * dword_8B3F10) / dbl_8B3EB8); /*0x4e1c72*/
}
} // namespace gamemd

// 0x4E1C80
namespace gamemd {
long long sub_4E1C80()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_8B3F10) + 0.5); /*0x4e1c9b*/
  dword_8B3F04 = result; /*0x4e1ca0*/
  return result; /*0x4e1ca6*/
}
} // namespace gamemd

// 0x4E1CB0
namespace gamemd {
int sub_4E1CB0()
{
  word_8B3EB0 = 0; /*0x4e1cb2*/
  word_8B3EB2 = 0; /*0x4e1cb8*/
  return 0; /*0x4e1cbe*/
}
} // namespace gamemd

// 0x4E1CC0
namespace gamemd {
int sub_4E1CC0()
{
  dword_8B3ED0 = 0; /*0x4e1cc2*/
  dword_8B3ED4 = 0; /*0x4e1cc7*/
  dword_8B3ED8 = 0; /*0x4e1ccc*/
  return 0; /*0x4e1cd1*/
}
} // namespace gamemd

// 0x4E1CE0
namespace gamemd {
int sub_4E1CE0()
{
  dword_8B3F00 = 0; /*0x4e1ce5*/
  dword_8B3EF8 = 128; /*0x4e1cef*/
  dword_8B3EFC = 128; /*0x4e1cf4*/
  return 128; /*0x4e1cf9*/
}
} // namespace gamemd

// 0x4E2440
namespace gamemd {
DWORD sub_4E2440()
{

  DWORD result; // eax
  result = timeGetTime(); /*0x4e2440*/
  dword_8B3F14 = result; /*0x4e2446*/
  return result; /*0x4e244b*/
}
} // namespace gamemd

// 0x4E24E0
namespace gamemd {
int sub_4E24E0()
{
  dword_8B3F18 = 0; /*0x4e24e2*/
  dword_8B3F1C = 0; /*0x4e24e7*/
  dword_8B3F20 = 0; /*0x4e24ec*/
  dword_8B3F24 = 0; /*0x4e24f1*/
  return 0; /*0x4e24f6*/
}
} // namespace gamemd

// 0x4E2A50
namespace gamemd {
int E4Recv_4E2A50::sub_4E2A50(ControlClass * aP1, int aP2, int aP3, ControlClass * aP4, int aP5)
{


  ControlClass::Construct((ControlClass *)this, aP1, aP2, aP3, aP4, aP5, 7, 1); /*0x4e2a74*/
  int v7 = this->M48; // ecx /*0x4e2a79*/
  /* X11: ptr_0 install elided (implicit via GaugeClass virtuals 0x4e2a83) */
  if ( v7 != 255 ) /*0x4e2a89*/
  {
    this->M48 = 255; /*0x4e2a8d*/
    ((GadgetClass *)this)->MarkDirty(); /*0x4e2a90*/
  }
  int v8 = 0; // eax /*0x4e2a99*/
  if ( this->M48 < 0 ) /*0x4e2a9d*/
    v8 = this->M48; /*0x4e2a9f*/
  if ( v8 != this->u32_34 ) /*0x4e2aa4*/
  {
    this->u32_34 = v8; /*0x4e2aa6*/
    (*(void (**)(GaugeClass *))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x4e2aad*/
  }
  this->M45 = 1; /*0x4e2ab2*/
  this->M46 = aP4 > aP5; /*0x4e2ab9*/
  this->M44 = 1; /*0x4e2abc*/
  this->M56 = 0; /*0x4e2ac0*/
  this->M60 = 0; /*0x4e2ac7*/
  this->u32_40 = 0; /*0x4e2ace*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E9430) */  /*0x4e2ad5*/
  return (int)this->ptr_0; /*0x4e2add*/

}
} // namespace gamemd

// 0x4E3110
namespace gamemd {
int sub_4E3110()
{
  dword_8B3F90 = 0; /*0x4e3112*/
  dword_8B3F94 = 0; /*0x4e3117*/
  dword_8B3F98 = 0; /*0x4e311c*/
  dword_8B3F9C = 0; /*0x4e3121*/
  return 0; /*0x4e3126*/
}
} // namespace gamemd

// 0x4E3130
namespace gamemd {
void sub_4E3130()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x4e313c*/
  dbl_8B3FA8 = Math::Sqrt(v0 + v0); /*0x4e314e*/
}
} // namespace gamemd

// 0x4E3160
namespace gamemd {
void sub_4E3160()
{
  dbl_8B40B8 = dbl_8B3FA8 / 60.0; /*0x4e316c*/
}
} // namespace gamemd

// 0x4E3180
namespace gamemd {
void sub_4E3180()
{
  dbl_8B40A0 = 1.0 / dbl_8B40B8; /*0x4e318c*/
}
} // namespace gamemd

// 0x4E31A0
namespace gamemd {
void sub_4E31A0()
{
  dbl_8B4098 = 0.0174532925199433 * 45.0; /*0x4e31ac*/
}
} // namespace gamemd

// 0x4E31C0
namespace gamemd {
void sub_4E31C0()
{
  dbl_8B3FB0 = 0.0174532925199433 * 60.0; /*0x4e31cc*/
}
} // namespace gamemd

// 0x4E31E0
namespace gamemd {
void sub_4E31E0()
{
  dbl_8B3F28 = 0.0174532925199433 * 90.0; /*0x4e31ec*/
}
} // namespace gamemd

// 0x4E3200
namespace gamemd {
long long sub_4E3200()
{

  double v0; // st7
  v0 = Math::Sin(dbl_8B3F28 - dbl_8B3FB0); /*0x4e3212*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_8B3FA8 * 0.5); /*0x4e3226*/
  dword_8B40C0 = result; /*0x4e322b*/
  return result; /*0x4e3230*/
}
} // namespace gamemd

// 0x4E3240
namespace gamemd {
void sub_4E3240()
{
  dbl_8B3FB8 = Math::ArcTan((double)dword_8B40C0 * 0.00390625); /*0x4e3257*/
}
} // namespace gamemd

// 0x4E3270
namespace gamemd {
void sub_4E3270()
{
  dbl_8B4030 = Math::ArcTan((double)(2 * dword_8B40C0) / dbl_8B3FA8); /*0x4e3292*/
}
} // namespace gamemd

// 0x4E32A0
namespace gamemd {
long long sub_4E32A0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_8B40C0) + 0.5); /*0x4e32bb*/
  dword_8B40B4 = result; /*0x4e32c0*/
  return result; /*0x4e32c6*/
}
} // namespace gamemd

// 0x4E32D0
namespace gamemd {
int sub_4E32D0()
{
  word_8B3FA0 = 0; /*0x4e32d2*/
  word_8B3FA2 = 0; /*0x4e32d8*/
  return 0; /*0x4e32de*/
}
} // namespace gamemd

// 0x4E32E0
namespace gamemd {
int sub_4E32E0()
{
  dword_8B4020 = 0; /*0x4e32e2*/
  dword_8B4024 = 0; /*0x4e32e7*/
  dword_8B4028 = 0; /*0x4e32ec*/
  return 0; /*0x4e32f1*/
}
} // namespace gamemd

// 0x4E3300
namespace gamemd {
int sub_4E3300()
{
  dword_8B40B0 = 0; /*0x4e3305*/
  dword_8B40A8 = 128; /*0x4e330f*/
  dword_8B40AC = 128; /*0x4e3314*/
  return 128; /*0x4e3319*/
}
} // namespace gamemd

// 0x4E3A00
namespace gamemd {
bool FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e3a0e*/
  bool v11; // [esp+Fh] [ebp-5h]
  v11 = !ShowWindow(DlgItem, 0); /*0x4e3a2b*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3a30*/
  SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3a3c*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(aGuiRandomex, 0, g_Str_File_GDlgSupp_cpp, 276); /*0x4e3a4f*/
  LRESULT v4; // eax
  v4 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3a5d*/
  SendMessageA(DlgItem, 0x151u, v4, -2); /*0x4e3a68*/
  int v5 = dword_A83CA8; // ecx /*0x4e3a6a*/
  int v6 = 0; // ebx /*0x4e3a70*/
  int i; // [esp+10h] [ebp-4h]
  for ( i = dword_A83CA8; v6 < v5; ++v6 ) /*0x4e3a78*/
  {
    int v7; // ebp
    v7 = *((unsigned int *)dword_A83C9C + v6); /*0x4e3a80*/
    if ( v7 ) /*0x4e3a85*/
    {
      if ( *(unsigned char *)(v7 + 421) ) /*0x4e3a87*/
      {
        int v8; // eax
        v8 = *(unsigned int *)(v7 + 184); /*0x4e3a91*/
        if ( v8 > -3 && v8 <= 9 && **(unsigned short **)(v7 + 96) ) /*0x4e3aa4*/
        {
          LRESULT v9; // eax
          v9 = SendMessageA(DlgItem, 0x4C2u, 0, *(unsigned int *)(v7 + 96)); /*0x4e3ab3*/
          SendMessageA(DlgItem, 0x151u, v9, *(unsigned int *)(v7 + 184)); /*0x4e3ac3*/
          v5 = i; /*0x4e3ac5*/
        }
      }
    }
  }
  SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x4e3ad9*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3ae5*/
  (*((unsigned char *)&(result))) = v11; /*0x4e3ae7*/
  if ( !v11 ) /*0x4e3aed*/
    return ShowWindow(DlgItem, 5); /*0x4e3af2*/
  return result; /*0x4e3af8*/
}
} // namespace gamemd

// 0x4E3B00
namespace gamemd {
LRESULT SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e3b12*/
  bool v3; // bl
  v3 = !ShowWindow(DlgItem, 0); /*0x4e3b2b*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3b2e*/
  SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3b3a*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309); /*0x4e3b4d*/
  LRESULT v5; // eax
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3b5b*/
  SendMessageA(DlgItem, 0x151u, v5, -3); /*0x4e3b66*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3b72*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e3b7e*/
  if ( !v3 ) /*0x4e3b82*/
    return ShowWindow(DlgItem, 5); /*0x4e3b87*/
  return result; /*0x4e3b89*/
}
} // namespace gamemd

// 0x4E4170
namespace gamemd {
int GetComboBoxSelected(HWND aP0, int nIDDlgItem, LRESULT wParam)
{

  LRESULT v3 = wParam; // eax /*0x4e4170*/
  if ( wParam == -1 ) /*0x4e4184*/
    v3 = SendDlgItemMessageA(aP0, nIDDlgItem, 0x147u, 0, 0); /*0x4e4191*/
  int result; // eax
  result = SendDlgItemMessageA(aP0, nIDDlgItem, 0x150u, v3, 0); /*0x4e419d*/
  if ( result < -3 || result > 9 ) /*0x4e41aa*/
  {
    if ( dword_A8B23C ) /*0x4e41b4*/
      return (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 40))(dword_A8B23C); /*0x4e41b8*/
    else
      return -2; /*0x4e41be*/
  }
  return result; /*0x4e41a2*/
}
} // namespace gamemd

// 0x4E43C0
namespace gamemd {
LPARAM * InitGameDropdownColors()
{

  FootClass_Array.temporalTargetingMe = (TemporalClass *)GetStringCSF(aGuiGoldabbrev, 0, g_Str_File_GDlgSupp_cpp, 475); /*0x4e43e7*/
  FootClass_Array.chronoLockRemaining = (int)GetStringCSF(aGuiRedabbrev, 0, g_Str_File_GDlgSupp_cpp, 476); /*0x4e4402*/
  FootClass_Array.chronoDestCoords[2] = (int)GetStringCSF(aGuiBlueabbrev, 0, g_Str_File_GDlgSupp_cpp, 477); /*0x4e441d*/
  FootClass_Array.isBerserk_duration_left = (int)GetStringCSF(aGuiGreenabbrev, 0, g_Str_File_GDlgSupp_cpp, 478); /*0x4e4438*/
  FootClass_Array.rockerLinkedUnit = (FootClass *)GetStringCSF(aGuiOrangeabbre, 0, g_Str_File_GDlgSupp_cpp, 479); /*0x4e4453*/
  FootClass_Array.target = (AbstractClass *)GetStringCSF(aGuiSkyblueabbr, 0, g_Str_File_GDlgSupp_cpp, 480); /*0x4e446e*/
  FootClass_Array.mindControlledBy = (TechnoClass *)GetStringCSF(aGuiPurpleabbre, 0, g_Str_File_GDlgSupp_cpp, 481); /*0x4e4489*/
  FootClass_Array.mindControlledBy_house = (HouseClass *)GetStringCSF(aGuiPinkabbrev, 0, g_Str_File_GDlgSupp_cpp, 482); /*0x4e44a4*/
  FootClass_Array.slaveManager = (SlaveManagerClass *)GetStringCSF(aGuiGrayabbrev, 0, g_Str_File_GDlgSupp_cpp, 483); /*0x4e44ae*/
  int *p_owningHouseIndex0 = &FootClass_Array.owningHouseIndex0; // ecx /*0x4e44b3*/
  LPARAM *result = dword_8316A8; // eax /*0x4e44b8*/
  do /*0x4e44d3*/
  {
    int v3; // edx
    v3 = *result++; /*0x4e44bd*/
    *(p_owningHouseIndex0 - 1) = v3; /*0x4e44c2*/
    *p_owningHouseIndex0 = -1; /*0x4e44c5*/
    p_owningHouseIndex0 += 3; /*0x4e44cb*/
  }
  while ( (int)result < (int)&off_8316CC ); /*0x4e44d3*/
  return result; /*0x4e44d5*/
}
} // namespace gamemd

// 0x4E4580
namespace gamemd {
bool IsAvailableColorhWnd(int a1)
{
  return dword_8B4040[3 * a1] != -1; /*0x4e4592*/
}
} // namespace gamemd

// 0x4E4770
namespace gamemd {
LRESULT FillListBox(HWND hDlg, int nIDDlgItem)
{

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e477c*/
  bool v3; // bl
  v3 = !ShowWindow(DlgItem, 0); /*0x4e4799*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e479c*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e47a8*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e47b4*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 567); /*0x4e47c7*/
  LRESULT v5; // ebp
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e47d7*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e47e2*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e47ed*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e47f9*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e4805*/
  if ( !v3 ) /*0x4e4809*/
    return ShowWindow(DlgItem, 5); /*0x4e480e*/
  return result; /*0x4e4814*/
}
} // namespace gamemd

// 0x4E4E20
namespace gamemd {
int GetComboBoxSelectedRaw(HWND aP0, int nIDDlgItem, LRESULT wParam)
{

  LRESULT v3 = wParam; // eax /*0x4e4e20*/
  if ( wParam == -1 ) /*0x4e4e34*/
    v3 = SendDlgItemMessageA(aP0, nIDDlgItem, 0x147u, 0, 0); /*0x4e4e41*/
  return SendDlgItemMessageA(aP0, nIDDlgItem, 0x150u, v3, 0); /*0x4e4e4f*/
}
} // namespace gamemd

// 0x4E4F30
namespace gamemd {
wchar_t * sub_4E4F30()
{
  return GetStringCSF(aSttHostcombost, 0, g_Str_File_GDlgSupp_cpp, 747); /*0x4e4f46*/
}
} // namespace gamemd

// 0x4E4F50
namespace gamemd {
int * _cfltcvt_init()
{

  dword_8B3F30 = (int)a1_2; /*0x4e4f50*/
  dword_8B3F3C = (int)a2; /*0x4e4f5a*/
  dword_8B3F48 = (int)a3; /*0x4e4f64*/
  dword_8B3F54 = (int)a4; /*0x4e4f6e*/
  dword_8B3F60 = (int)a5; /*0x4e4f78*/
  dword_8B3F6C = (int)a6; /*0x4e4f82*/
  dword_8B3F78 = (int)a7; /*0x4e4f8c*/
  dword_8B3F84 = (int)a8; /*0x4e4f96*/
  dword_8B3F90 = (int)a0_0; /*0x4e4fa0*/
  int *result = dword_8B3F38; // eax /*0x4e4faa*/
  do /*0x4e4fbd*/
  {
    *result = -1; /*0x4e4faf*/
    result += 3; /*0x4e4fb5*/
  }
  while ( (int)result < (int)&unk_8B3FA4 ); /*0x4e4fbd*/
  return result; /*0x4e4fbf*/
}
}
// 0x4E4FC0
namespace gamemd {
void Lobby_ResetFactionTable(int a1)
{

  if ( a1 > 0 ) /*0x4e4fc2*/
  {
    int *v1 = dword_8B3F38; // eax /*0x4e4fc4*/
    int v2 = a1; // edx /*0x4e4fc9*/
    do /*0x4e4fd5*/
    {
      *v1 = -1; /*0x4e4fcb*/
      v1 += 3; /*0x4e4fd1*/
      --v2; /*0x4e4fd4*/
    }
    while ( v2 ); /*0x4e4fd5*/
  }
  if ( a1 < 9 ) /*0x4e4fda*/
  {
    int *v3; // eax
    v3 = (int *)(12 * a1 + 9125688); /*0x4e4fdf*/
    do /*0x4e4ff4*/
    {
      *v3 = -2; /*0x4e4fe6*/
      v3 += 3; /*0x4e4fec*/
    }
    while ( (int)v3 < (int)&unk_8B3FA4 ); /*0x4e4ff4*/
  }
}
} // namespace gamemd

// 0x4E50A0
namespace gamemd {
bool sub_4E50A0(int a1)
{
  return dword_8B3F38[3 * a1] != -1; /*0x4e50b2*/
}
} // namespace gamemd

// 0x4E5260
namespace gamemd {
int SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e526c*/
  bool v3; // bl
  v3 = !ShowWindow(DlgItem, 0); /*0x4e5289*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e528c*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5298*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e52a4*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 876); /*0x4e52b7*/
  LRESULT v5; // ebp
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e52c7*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e52d2*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e52dd*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e52e9*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e52f5*/
  if ( !v3 ) /*0x4e52f9*/
    return ShowWindow(DlgItem, 5); /*0x4e52fe*/
  return result; /*0x4e5304*/
}
} // namespace gamemd

// 0x4E5900
namespace gamemd {
LRESULT SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{

  LRESULT v3 = wParam; // eax /*0x4e5900*/
  if ( wParam == -1 ) /*0x4e5914*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e5921*/
  return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x4e592f*/
}
} // namespace gamemd

// 0x4E5CB0
namespace gamemd {
LRESULT InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{

  HWND DlgItem; // esi
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x4e5cbc*/
  bool v3; // bl
  v3 = !ShowWindow(DlgItem, 0); /*0x4e5cd9*/
  SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e5cdc*/
  SendMessageA(DlgItem, 0x4DDu, 0, 1); /*0x4e5ce8*/
  SendMessageA(DlgItem, 0x4DEu, 0, 9); /*0x4e5cf4*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1165); /*0x4e5d07*/
  LRESULT v5; // ebp
  v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e5d17*/
  SendMessageA(DlgItem, 0x151u, v5, -2); /*0x4e5d22*/
  SendMessageA(DlgItem, 0x498u, v5, -1); /*0x4e5d2d*/
  SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e5d39*/
  int result; // eax
  result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e5d45*/
  if ( !v3 ) /*0x4e5d49*/
    return ShowWindow(DlgItem, 5); /*0x4e5d4e*/
  return result; /*0x4e5d54*/
}
} // namespace gamemd

// 0x4E6030
namespace gamemd {
LRESULT GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{

  LRESULT v3 = wParam; // eax /*0x4e6030*/
  if ( wParam == -1 ) /*0x4e6044*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x4e6051*/
  return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x4e605f*/
}
} // namespace gamemd

// 0x4E6070
namespace gamemd {
int E4Recv_4E6070::sub_4E6070()
{

  *&this->M104 = 0; /*0x4e6087*/
  this->health = 0; /*0x4e608a*/
  Debug::Log(); /*0x4e608d*/
  memset(this, 0xFFu, 0x18u); /*0x4e609f*/
  LOWORD(this->M108) = -1; /*0x4e60a9*/
  this->u32_-41 + (*&this->u32_-41)++) = 2; /*0x4e60cc*/
  Debug::Log(); /*0x4e60d6*/
  return (int)this; /*0x4e612c*/

}
} // namespace gamemd

// 0x4E6140
namespace gamemd {
void nullsub_54()
{
  ; /*0x4e6140*/
}
} // namespace gamemd

// 0x4E6150
namespace gamemd {
char * Version_GetString(unsigned int * a1, unsigned char * a2, char * Destination, size_t Count)
{

  *a2 = Event_Process_7C5F3D(); /*0x4e615b*/
  Event_Process_7C5FFF(); /*0x4e615d*/
  *a1 = byte_84E863; /*0x4e6169*/
  char *result = Destination; // eax /*0x4e616b*/
  if ( Destination ) /*0x4e6173*/
    return strncpy(Destination, Source, Count); /*0x4e6180*/
  return result; /*0x4e616f*/
}
} // namespace gamemd

// 0x4E6190
namespace gamemd {
int sub_4E6190()
{
  int result; // eax

  Event_Process_7C5F3D(); /*0x4e6194*/
  Event_Process_7C5FFF(); /*0x4e6199*/
  int v0 = byte_84E863; // esi /*0x4e619e*/
  int v2; // [esp+0h] [ebp-44h] BYREF
  char Destination[64]; // [esp+4h] [ebp-40h] BYREF
  if ( &v2 != (int *)-4 ) /*0x4e61ab*/
    strncpy(Destination, Source, 0x40u); /*0x4e61b9*/
  if ( !v0 || !byte_84E864 ) /*0x4e61d0*/
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
  switch ( byte_84E864 ) /*0x4e623c*/
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
} // namespace gamemd

// 0x4E62D0
namespace gamemd {
void sub_4E62D0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x4e62dc*/
  dbl_A83D40 = Math::Sqrt(v0 + v0); /*0x4e62ee*/
}
} // namespace gamemd

// 0x4E6300
namespace gamemd {
void sub_4E6300()
{
  dbl_A8EC98 = dbl_A83D40 / 60.0; /*0x4e630c*/
}
} // namespace gamemd

// 0x4E6320
namespace gamemd {
void sub_4E6320()
{
  dbl_A8EB58 = 1.0 / dbl_A8EC98; /*0x4e632c*/
}
} // namespace gamemd

// 0x4E6340
namespace gamemd {
void sub_4E6340()
{
  dbl_A8EB20 = 0.0174532925199433 * 45.0; /*0x4e634c*/
}
} // namespace gamemd

// 0x4E6360
namespace gamemd {
void sub_4E6360()
{
  dbl_A83DB0 = 0.0174532925199433 * 60.0; /*0x4e636c*/
}
} // namespace gamemd

// 0x4E6380
namespace gamemd {
void sub_4E6380()
{
  dbl_8B4168 = 0.0174532925199433 * 90.0; /*0x4e638c*/
}
} // namespace gamemd

// 0x4E63A0
namespace gamemd {
long long sub_4E63A0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_8B4168 - dbl_A83DB0); /*0x4e63b2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_A83D40 * 0.5); /*0x4e63c6*/
  dword_A8ED58 = result; /*0x4e63cb*/
  return result; /*0x4e63d0*/
}
} // namespace gamemd

// 0x4E63E0
namespace gamemd {
void sub_4E63E0()
{
  dbl_A83DE0 = Math::ArcTan((double)dword_A8ED58 * 0.00390625); /*0x4e63f7*/
}
} // namespace gamemd

// 0x4E6410
namespace gamemd {
void sub_4E6410()
{
  dbl_A8E958 = Math::ArcTan((double)(2 * dword_A8ED58) / dbl_A83D40); /*0x4e6432*/
}
} // namespace gamemd

// 0x4E6440
namespace gamemd {
long long sub_4E6440()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_A8ED58) + 0.5); /*0x4e645b*/
  dword_A8EC94 = result; /*0x4e6460*/
  return result; /*0x4e6466*/
}
} // namespace gamemd

// 0x4E6470
namespace gamemd {
int sub_4E6470()
{
  word_A83CD0 = 0; /*0x4e6472*/
  word_A83CD2 = 0; /*0x4e6478*/
  return 0; /*0x4e647e*/
}
} // namespace gamemd

// 0x4E6480
namespace gamemd {
int sub_4E6480()
{
  dword_A8E380 = 0; /*0x4e6482*/
  dword_A8E384 = 0; /*0x4e6487*/
  dword_A8E388 = 0; /*0x4e648c*/
  return 0; /*0x4e6491*/
}
} // namespace gamemd

// 0x4E64A0
namespace gamemd {
int sub_4E64A0()
{
  dword_A8EC70 = 0; /*0x4e64a5*/
  dword_A8EC68 = 128; /*0x4e64af*/
  dword_A8EC6C = 128; /*0x4e64b4*/
  return 128; /*0x4e64b9*/
}
} // namespace gamemd

// 0x4E64C0
namespace gamemd {
int sub_4E64C0()
{
  dword_A83C58 = 0; /*0x4e64c2*/
  dword_A83C5C = 0; /*0x4e64c7*/
  dword_A83C60 = 0; /*0x4e64cc*/
  dword_A83C64 = 0; /*0x4e64d1*/
  return 0; /*0x4e64d6*/
}
} // namespace gamemd

// 0x4E64E0
namespace gamemd {
int sub_4E64E0()
{
  dword_A8B204 = 0; /*0x4e64e7*/
  dword_A8B208 = 0; /*0x4e64ec*/
  byte_A8B20C = 1; /*0x4e64f1*/
  byte_A8B20D = 0; /*0x4e64f8*/
  dword_A8B200 = (int)&g_ptr_7E3238; /*0x4e64fd*/
  dword_A8B214 = 10; /*0x4e6507*/
  dword_A8B210 = 0; /*0x4e6511*/
  return atexit(sub_4E6520); /*0x4e651c*/
}
} // namespace gamemd

// 0x4E6520
namespace gamemd {
void sub_4E6520()
{
  dword_A8B200 = (int)&g_ptr_7E8500; /*0x4e6528*/
  if ( dword_A8B204 && byte_A8B20D ) /*0x4e653c*/
  {
    operator delete((void *)(dword_A8B204)); /*0x4e653f*/
    dword_A8B204 = 0; /*0x4e6547*/
  }
  byte_A8B20D = 0; /*0x4e654d*/
  dword_A8B208 = 0; /*0x4e6553*/
}
} // namespace gamemd

// 0x4E6560
namespace gamemd {
int sub_4E6560()
{
  dword_8B417C = 0; /*0x4e6567*/
  dword_8B4180 = 0; /*0x4e656c*/
  byte_8B4184 = 1; /*0x4e6571*/
  byte_8B4185 = 0; /*0x4e6578*/
  dword_8B4178 = (int)&g_ptr_7E3238; /*0x4e657d*/
  dword_8B418C = 10; /*0x4e6587*/
  dword_8B4188 = 0; /*0x4e6591*/
  return atexit(sub_4E65A0); /*0x4e659c*/
}
} // namespace gamemd

// 0x4E65A0
namespace gamemd {
void sub_4E65A0()
{
  dword_8B4178 = (int)&g_ptr_7E8500; /*0x4e65a8*/
  if ( dword_8B417C && byte_8B4185 ) /*0x4e65bc*/
  {
    operator delete((void *)(dword_8B417C)); /*0x4e65bf*/
    dword_8B417C = 0; /*0x4e65c7*/
  }
  byte_8B4185 = 0; /*0x4e65cd*/
  dword_8B4180 = 0; /*0x4e65d3*/
}
} // namespace gamemd

// 0x4E65E0
namespace gamemd {
int sub_4E65E0()
{
  dword_A8EAEC = 0; /*0x4e65e7*/
  dword_A8EAF0 = 0; /*0x4e65ec*/
  byte_A8EAF4 = 1; /*0x4e65f1*/
  byte_A8EAF5 = 0; /*0x4e65f8*/
  dword_A8EAE8 = (int)&g_ptr_7E3238; /*0x4e65fd*/
  dword_A8EAFC = 10; /*0x4e6607*/
  dword_A8EAF8 = 0; /*0x4e6611*/
  return atexit(sub_4E6620); /*0x4e661c*/
}
} // namespace gamemd

// 0x4E6620
namespace gamemd {
void sub_4E6620()
{
  dword_A8EAE8 = (int)&g_ptr_7E8500; /*0x4e6628*/
  if ( dword_A8EAEC && byte_A8EAF5 ) /*0x4e663c*/
  {
    operator delete((void *)(dword_A8EAEC)); /*0x4e663f*/
    dword_A8EAEC = 0; /*0x4e6647*/
  }
  byte_A8EAF5 = 0; /*0x4e664d*/
  dword_A8EAF0 = 0; /*0x4e6653*/
}
} // namespace gamemd

// 0x4E6660
namespace gamemd {
int sub_4E6660()
{
  dword_8B4194 = 0; /*0x4e6667*/
  dword_8B4198 = 0; /*0x4e666c*/
  byte_8B419C = 1; /*0x4e6671*/
  byte_8B419D = 0; /*0x4e6678*/
  dword_8B4190 = (int)&g_ptr_7E3238; /*0x4e667d*/
  dword_8B41A4 = 10; /*0x4e6687*/
  dword_8B41A0 = 0; /*0x4e6691*/
  return atexit(sub_4E66A0); /*0x4e669c*/
}
} // namespace gamemd

// 0x4E66A0
namespace gamemd {
void sub_4E66A0()
{
  dword_8B4190 = (int)&g_ptr_7E8500; /*0x4e66a8*/
  if ( dword_8B4194 && byte_8B419D ) /*0x4e66bc*/
  {
    operator delete((void *)(dword_8B4194)); /*0x4e66bf*/
    dword_8B4194 = 0; /*0x4e66c7*/
  }
  byte_8B419D = 0; /*0x4e66cd*/
  dword_8B4198 = 0; /*0x4e66d3*/
}
} // namespace gamemd

// 0x4E66E0
namespace gamemd {
int sub_4E66E0()
{
  dword_A8020C = 0; /*0x4e66e7*/
  dword_A80210 = 0; /*0x4e66ec*/
  byte_A80214 = 1; /*0x4e66f1*/
  byte_A80215 = 0; /*0x4e66f8*/
  dword_A80208 = (int)&g_ptr_7E3238; /*0x4e66fd*/
  dword_A8021C = 10; /*0x4e6707*/
  g_GameCleanupState = 0; /*0x4e6711*/
  return atexit(sub_4E6720); /*0x4e671c*/
}
} // namespace gamemd

// 0x4E6720
namespace gamemd {
void sub_4E6720()
{
  dword_A80208 = (int)&g_ptr_7E8500; /*0x4e6728*/
  if ( dword_A8020C && byte_A80215 ) /*0x4e673c*/
  {
    operator delete((void *)(dword_A8020C)); /*0x4e673f*/
    dword_A8020C = 0; /*0x4e6747*/
  }
  byte_A80215 = 0; /*0x4e674d*/
  dword_A80210 = 0; /*0x4e6753*/
}
} // namespace gamemd

// 0x4E6760
namespace gamemd {
int sub_4E6760()
{
  dword_8B413C = 0; /*0x4e6767*/
  dword_8B4140 = 0; /*0x4e676c*/
  byte_8B4144 = 1; /*0x4e6771*/
  byte_8B4145 = 0; /*0x4e6778*/
  dword_8B4138 = (int)&g_ptr_7E3238; /*0x4e677d*/
  dword_8B414C = 10; /*0x4e6787*/
  dword_8B4148 = 0; /*0x4e6791*/
  return atexit(sub_4E67A0); /*0x4e679c*/
}
} // namespace gamemd

// 0x4E67A0
namespace gamemd {
void sub_4E67A0()
{
  dword_8B4138 = (int)&g_ptr_7E8500; /*0x4e67a8*/
  if ( dword_8B413C && byte_8B4145 ) /*0x4e67bc*/
  {
    operator delete((void *)(dword_8B413C)); /*0x4e67bf*/
    dword_8B413C = 0; /*0x4e67c7*/
  }
  byte_8B4145 = 0; /*0x4e67cd*/
  dword_8B4140 = 0; /*0x4e67d3*/
}
} // namespace gamemd

// 0x4E67E0
namespace gamemd {
int sub_4E67E0()
{
  dword_A8EC3C = 0; /*0x4e67e7*/
  dword_A8EC40 = 0; /*0x4e67ec*/
  byte_A8EC44 = 1; /*0x4e67f1*/
  byte_A8EC45 = 0; /*0x4e67f8*/
  dword_A8EC38 = (int)&g_ptr_7E3238; /*0x4e67fd*/
  dword_A8EC4C = 10; /*0x4e6807*/
  dword_A8EC48 = 0; /*0x4e6811*/
  return atexit(sub_4E6820); /*0x4e681c*/
}
} // namespace gamemd

// 0x4E6820
namespace gamemd {
void sub_4E6820()
{
  dword_A8EC38 = (int)&g_ptr_7E8500; /*0x4e6828*/
  if ( dword_A8EC3C && byte_A8EC45 ) /*0x4e683c*/
  {
    operator delete((void *)(dword_A8EC3C)); /*0x4e683f*/
    dword_A8EC3C = 0; /*0x4e6847*/
  }
  byte_A8EC45 = 0; /*0x4e684d*/
  dword_A8EC40 = 0; /*0x4e6853*/
}
} // namespace gamemd

// 0x4E68A0
namespace gamemd {
void sub_4E68A0()
{
  dword_A8ED40 = (int)&g_ptr_7E8500; /*0x4e68a8*/
  if ( dword_A8ED44 && byte_A8ED4D ) /*0x4e68bc*/
  {
    operator delete((void *)(dword_A8ED44)); /*0x4e68bf*/
    dword_A8ED44 = 0; /*0x4e68c7*/
  }
  byte_A8ED4D = 0; /*0x4e68cd*/
  dword_A8ED48 = 0; /*0x4e68d3*/
}
} // namespace gamemd

// 0x4E68E0
namespace gamemd {
int sub_4E68E0()
{
  dword_A8EC54 = 0; /*0x4e68e7*/
  dword_A8EC58 = 0; /*0x4e68ec*/
  byte_A8EC5C = 1; /*0x4e68f1*/
  byte_A8EC5D = 0; /*0x4e68f8*/
  dword_A8EC50 = (int)&g_ptr_7E3238; /*0x4e68fd*/
  dword_A8EC64 = 10; /*0x4e6907*/
  dword_A8EC60 = 0; /*0x4e6911*/
  return atexit(sub_4E6920); /*0x4e691c*/
}
} // namespace gamemd

// 0x4E6920
namespace gamemd {
void sub_4E6920()
{
  dword_A8EC50 = (int)&g_ptr_7E8500; /*0x4e6928*/
  if ( dword_A8EC54 && byte_A8EC5D ) /*0x4e693c*/
  {
    operator delete((void *)(dword_A8EC54)); /*0x4e693f*/
    dword_A8EC54 = 0; /*0x4e6947*/
  }
  byte_A8EC5D = 0; /*0x4e694d*/
  dword_A8EC58 = 0; /*0x4e6953*/
}
} // namespace gamemd

// 0x4E6960
namespace gamemd {
int sub_4E6960()
{
  dword_A83DCC = 0; /*0x4e6967*/
  dword_A83DD0 = 0; /*0x4e696c*/
  byte_A83DD4 = 1; /*0x4e6971*/
  byte_A83DD5 = 0; /*0x4e6978*/
  dword_A83DC8 = (int)&g_ptr_7E3238; /*0x4e697d*/
  dword_A83DDC = 10; /*0x4e6987*/
  dword_A83DD8 = 0; /*0x4e6991*/
  return atexit(sub_4E69A0); /*0x4e699c*/
}
} // namespace gamemd

// 0x4E69A0
namespace gamemd {
void sub_4E69A0()
{
  dword_A83DC8 = (int)&g_ptr_7E8500; /*0x4e69a8*/
  if ( dword_A83DCC && byte_A83DD5 ) /*0x4e69bc*/
  {
    operator delete((void *)(dword_A83DCC)); /*0x4e69bf*/
    dword_A83DCC = 0; /*0x4e69c7*/
  }
  byte_A83DD5 = 0; /*0x4e69cd*/
  dword_A83DD0 = 0; /*0x4e69d3*/
}
} // namespace gamemd

// 0x4E69E0
namespace gamemd {
int sub_4E69E0()
{
  dword_A8B1E4 = 0; /*0x4e69e7*/
  dword_A8B1E8 = 0; /*0x4e69ec*/
  byte_A8B1EC = 1; /*0x4e69f1*/
  byte_A8B1ED = 0; /*0x4e69f8*/
  dword_A8B1E0 = (int)&g_ptr_7E3238; /*0x4e69fd*/
  dword_A8B1F4 = 10; /*0x4e6a07*/
  dword_A8B1F0 = 0; /*0x4e6a11*/
  return atexit(sub_4E6A20); /*0x4e6a1c*/
}
} // namespace gamemd

// 0x4E6A20
namespace gamemd {
void sub_4E6A20()
{
  dword_A8B1E0 = (int)&g_ptr_7E8500; /*0x4e6a28*/
  if ( dword_A8B1E4 && byte_A8B1ED ) /*0x4e6a3c*/
  {
    operator delete((void *)(dword_A8B1E4)); /*0x4e6a3f*/
    dword_A8B1E4 = 0; /*0x4e6a47*/
  }
  byte_A8B1ED = 0; /*0x4e6a4d*/
  dword_A8B1E8 = 0; /*0x4e6a53*/
}
} // namespace gamemd

// 0x4E6A60
namespace gamemd {
int sub_4E6A60()
{
  dword_A8E98C = 0; /*0x4e6a67*/
  dword_A8E990 = 0; /*0x4e6a6c*/
  byte_A8E994 = 1; /*0x4e6a71*/
  byte_A8E995 = 0; /*0x4e6a78*/
  dword_A8E988 = (int)&g_ptr_7E3238; /*0x4e6a7d*/
  dword_A8E99C = 10; /*0x4e6a87*/
  dword_A8E998 = 0; /*0x4e6a91*/
  return atexit(sub_4E6AA0); /*0x4e6a9c*/
}
} // namespace gamemd

// 0x4E6AA0
namespace gamemd {
void sub_4E6AA0()
{
  dword_A8E988 = (int)&g_ptr_7E8500; /*0x4e6aa8*/
  if ( dword_A8E98C && byte_A8E995 ) /*0x4e6abc*/
  {
    operator delete((void *)(dword_A8E98C)); /*0x4e6abf*/
    dword_A8E98C = 0; /*0x4e6ac7*/
  }
  byte_A8E995 = 0; /*0x4e6acd*/
  dword_A8E990 = 0; /*0x4e6ad3*/
}
} // namespace gamemd

// 0x4E6AE0
namespace gamemd {
int sub_4E6AE0()
{
  dword_A83DEC = 0; /*0x4e6ae7*/
  dword_A83DF0 = 0; /*0x4e6aec*/
  byte_A83DF4 = 1; /*0x4e6af1*/
  byte_A83DF5 = 0; /*0x4e6af8*/
  dword_A83DE8 = (int)&g_ptr_7E3238; /*0x4e6afd*/
  dword_A83DFC = 10; /*0x4e6b07*/
  dword_A83DF8 = 0; /*0x4e6b11*/
  return atexit(sub_4E6B20); /*0x4e6b1c*/
}
} // namespace gamemd

// 0x4E6B20
namespace gamemd {
void sub_4E6B20()
{
  dword_A83DE8 = (int)&g_ptr_7E8500; /*0x4e6b28*/
  if ( dword_A83DEC && byte_A83DF5 ) /*0x4e6b3c*/
  {
    operator delete((void *)(dword_A83DEC)); /*0x4e6b3f*/
    dword_A83DEC = 0; /*0x4e6b47*/
  }
  byte_A83DF5 = 0; /*0x4e6b4d*/
  dword_A83DF0 = 0; /*0x4e6b53*/
}
} // namespace gamemd

// 0x4E6B60
namespace gamemd {
int sub_4E6B60()
{
  dword_A8EB44 = 0; /*0x4e6b67*/
  dword_A8EB48 = 0; /*0x4e6b6c*/
  byte_A8EB4C = 1; /*0x4e6b71*/
  byte_A8EB4D = 0; /*0x4e6b78*/
  dword_A8EB40 = (int)&g_ptr_7E3238; /*0x4e6b7d*/
  dword_A8EB54 = 10; /*0x4e6b87*/
  dword_A8EB50 = 0; /*0x4e6b91*/
  return atexit(sub_4E6BA0); /*0x4e6b9c*/
}
} // namespace gamemd

// 0x4E6BA0
namespace gamemd {
void sub_4E6BA0()
{
  dword_A8EB40 = (int)&g_ptr_7E8500; /*0x4e6ba8*/
  if ( dword_A8EB44 && byte_A8EB4D ) /*0x4e6bbc*/
  {
    operator delete((void *)(dword_A8EB44)); /*0x4e6bbf*/
    dword_A8EB44 = 0; /*0x4e6bc7*/
  }
  byte_A8EB4D = 0; /*0x4e6bcd*/
  dword_A8EB48 = 0; /*0x4e6bd3*/
}
} // namespace gamemd

// 0x4E6BE0
namespace gamemd {
int sub_4E6BE0()
{
  dword_A8E394 = 0; /*0x4e6be7*/
  dword_A8E398 = 0; /*0x4e6bec*/
  byte_A8E39C = 1; /*0x4e6bf1*/
  byte_A8E39D = 0; /*0x4e6bf8*/
  dword_A8E390 = (int)&g_ptr_7E3238; /*0x4e6bfd*/
  dword_A8E3A4 = 10; /*0x4e6c07*/
  dword_A8E3A0 = 0; /*0x4e6c11*/
  return atexit(sub_4E6C20); /*0x4e6c1c*/
}
} // namespace gamemd

// 0x4E6C20
namespace gamemd {
void sub_4E6C20()
{
  dword_A8E390 = (int)&g_ptr_7E8500; /*0x4e6c28*/
  if ( dword_A8E394 && byte_A8E39D ) /*0x4e6c3c*/
  {
    operator delete((void *)(dword_A8E394)); /*0x4e6c3f*/
    dword_A8E394 = 0; /*0x4e6c47*/
  }
  byte_A8E39D = 0; /*0x4e6c4d*/
  dword_A8E398 = 0; /*0x4e6c53*/
}
} // namespace gamemd

// 0x4E6C60
namespace gamemd {
int sub_4E6C60()
{
  dword_8B410C = 0; /*0x4e6c67*/
  dword_8B4110 = 0; /*0x4e6c6c*/
  byte_8B4114 = 1; /*0x4e6c71*/
  byte_8B4115 = 0; /*0x4e6c78*/
  dword_8B4108 = (int)&g_ptr_7E3238; /*0x4e6c7d*/
  dword_8B411C = 10; /*0x4e6c87*/
  dword_8B4118 = 0; /*0x4e6c91*/
  return atexit(sub_4E6CA0); /*0x4e6c9c*/
}
} // namespace gamemd

// 0x4E6CA0
namespace gamemd {
void sub_4E6CA0()
{
  dword_8B4108 = (int)&g_ptr_7E8500; /*0x4e6ca8*/
  if ( dword_8B410C && byte_8B4115 ) /*0x4e6cbc*/
  {
    operator delete((void *)(dword_8B410C)); /*0x4e6cbf*/
    dword_8B410C = 0; /*0x4e6cc7*/
  }
  byte_8B4115 = 0; /*0x4e6ccd*/
  dword_8B4110 = 0; /*0x4e6cd3*/
}
} // namespace gamemd

// 0x4E6D60
namespace gamemd {
int sub_4E6D60()
{
  dword_A8E9AC = 0; /*0x4e6d67*/
  dword_A8E9B0 = 0; /*0x4e6d6c*/
  byte_A8E9B4 = 1; /*0x4e6d71*/
  byte_A8E9B5 = 0; /*0x4e6d78*/
  dword_A8E9A8 = (int)&g_ptr_7E3238; /*0x4e6d7d*/
  dword_A8E9BC = 10; /*0x4e6d87*/
  dword_A8E9B8 = 0; /*0x4e6d91*/
  return atexit(sub_4E6DA0); /*0x4e6d9c*/
}
} // namespace gamemd

// 0x4E6DA0
namespace gamemd {
void sub_4E6DA0()
{
  dword_A8E9A8 = (int)&g_ptr_7E8500; /*0x4e6da8*/
  if ( dword_A8E9AC && byte_A8E9B5 ) /*0x4e6dbc*/
  {
    operator delete((void *)(dword_A8E9AC)); /*0x4e6dbf*/
    dword_A8E9AC = 0; /*0x4e6dc7*/
  }
  byte_A8E9B5 = 0; /*0x4e6dcd*/
  dword_A8E9B0 = 0; /*0x4e6dd3*/
}
} // namespace gamemd

// 0x4E6DE0
namespace gamemd {
int sub_4E6DE0()
{
  dword_8B40EC = 0; /*0x4e6de7*/
  dword_8B40F0 = 0; /*0x4e6dec*/
  byte_8B40F4 = 1; /*0x4e6df1*/
  byte_8B40F5 = 0; /*0x4e6df8*/
  dword_8B40E8 = (int)&g_ptr_7E3238; /*0x4e6dfd*/
  dword_8B40FC = 10; /*0x4e6e07*/
  dword_8B40F8 = 0; /*0x4e6e11*/
  return atexit(sub_4E6E20); /*0x4e6e1c*/
}
} // namespace gamemd

// 0x4E6E20
namespace gamemd {
void sub_4E6E20()
{
  dword_8B40E8 = (int)&g_ptr_7E8500; /*0x4e6e28*/
  if ( dword_8B40EC && byte_8B40F5 ) /*0x4e6e3c*/
  {
    operator delete((void *)(dword_8B40EC)); /*0x4e6e3f*/
    dword_8B40EC = 0; /*0x4e6e47*/
  }
  byte_8B40F5 = 0; /*0x4e6e4d*/
  dword_8B40F0 = 0; /*0x4e6e53*/
}
} // namespace gamemd

// 0x4E6E60
namespace gamemd {
int sub_4E6E60()
{
  dword_A83E34 = 0; /*0x4e6e67*/
  dword_A83E38 = 0; /*0x4e6e6c*/
  byte_A83E3C = 1; /*0x4e6e71*/
  byte_A83E3D = 0; /*0x4e6e78*/
  dword_A83E30 = (int)&g_ptr_7E3238; /*0x4e6e7d*/
  dword_A83E44 = 10; /*0x4e6e87*/
  dword_A83E40 = 0; /*0x4e6e91*/
  return atexit(sub_4E6EA0); /*0x4e6e9c*/
}
} // namespace gamemd

// 0x4E6EA0
namespace gamemd {
void sub_4E6EA0()
{
  dword_A83E30 = (int)&g_ptr_7E8500; /*0x4e6ea8*/
  if ( dword_A83E34 && byte_A83E3D ) /*0x4e6ebc*/
  {
    operator delete((void *)(dword_A83E34)); /*0x4e6ebf*/
    dword_A83E34 = 0; /*0x4e6ec7*/
  }
  byte_A83E3D = 0; /*0x4e6ecd*/
  dword_A83E38 = 0; /*0x4e6ed3*/
}
} // namespace gamemd

// 0x4E6EE0
namespace gamemd {
int sub_4E6EE0()
{
  dword_A83CFC = 0; /*0x4e6ee7*/
  dword_A83D00 = 0; /*0x4e6eec*/
  byte_A83D04 = 1; /*0x4e6ef1*/
  byte_A83D05 = 0; /*0x4e6ef8*/
  dword_A83CF8 = (int)&g_ptr_7E3238; /*0x4e6efd*/
  dword_A83D0C = 10; /*0x4e6f07*/
  dword_A83D08 = 0; /*0x4e6f11*/
  return atexit(sub_4E6F20); /*0x4e6f1c*/
}
} // namespace gamemd

// 0x4E6F20
namespace gamemd {
void sub_4E6F20()
{
  dword_A83CF8 = (int)&g_ptr_7E8500; /*0x4e6f28*/
  if ( dword_A83CFC && byte_A83D05 ) /*0x4e6f3c*/
  {
    operator delete((void *)(dword_A83CFC)); /*0x4e6f3f*/
    dword_A83CFC = 0; /*0x4e6f47*/
  }
  byte_A83D05 = 0; /*0x4e6f4d*/
  dword_A83D00 = 0; /*0x4e6f53*/
}
} // namespace gamemd

// 0x4E6F60
namespace gamemd {
int sub_4E6F60()
{
  dword_8B4124 = 0; /*0x4e6f67*/
  dword_8B4128 = 0; /*0x4e6f6c*/
  byte_8B412C = 1; /*0x4e6f71*/
  byte_8B412D = 0; /*0x4e6f78*/
  dword_8B4120 = (int)&g_ptr_7E3238; /*0x4e6f7d*/
  dword_8B4134 = 10; /*0x4e6f87*/
  dword_8B4130 = 0; /*0x4e6f91*/
  return atexit(sub_4E6FA0); /*0x4e6f9c*/
}
} // namespace gamemd

// 0x4E6FA0
namespace gamemd {
void sub_4E6FA0()
{
  dword_8B4120 = (int)&g_ptr_7E8500; /*0x4e6fa8*/
  if ( dword_8B4124 && byte_8B412D ) /*0x4e6fbc*/
  {
    operator delete((void *)(dword_8B4124)); /*0x4e6fbf*/
    dword_8B4124 = 0; /*0x4e6fc7*/
  }
  byte_8B412D = 0; /*0x4e6fcd*/
  dword_8B4128 = 0; /*0x4e6fd3*/
}
} // namespace gamemd

// 0x4E6FE0
namespace gamemd {
int sub_4E6FE0()
{
  dword_A83C9C = 0; /*0x4e6fe7*/
  dword_A83CA0 = 0; /*0x4e6fec*/
  byte_A83CA4 = 1; /*0x4e6ff1*/
  byte_A83CA5 = 0; /*0x4e6ff8*/
  dword_A83C98 = (int)&g_ptr_7E3238; /*0x4e6ffd*/
  dword_A83CAC = 10; /*0x4e7007*/
  dword_A83CA8 = 0; /*0x4e7011*/
  return atexit(sub_4E7020); /*0x4e701c*/
}
} // namespace gamemd

// 0x4E7020
namespace gamemd {
void sub_4E7020()
{
  dword_A83C98 = (int)&g_ptr_7E8500; /*0x4e7028*/
  if ( dword_A83C9C && byte_A83CA5 ) /*0x4e703c*/
  {
    operator delete((void *)(dword_A83C9C)); /*0x4e703f*/
    dword_A83C9C = 0; /*0x4e7047*/
  }
  byte_A83CA5 = 0; /*0x4e704d*/
  dword_A83CA0 = 0; /*0x4e7053*/
}
} // namespace gamemd

// 0x4E7060
namespace gamemd {
int sub_4E7060()
{
  dword_A8E8D4 = 0; /*0x4e7067*/
  dword_A8E8D8 = 0; /*0x4e706c*/
  byte_A8E8DC = 1; /*0x4e7071*/
  byte_A8E8DD = 0; /*0x4e7078*/
  dword_A8E8D0 = (int)&g_ptr_7E3238; /*0x4e707d*/
  dword_A8E8E4 = 10; /*0x4e7087*/
  dword_A8E8E0 = 0; /*0x4e7091*/
  return atexit(sub_4E70A0); /*0x4e709c*/
}
} // namespace gamemd

// 0x4E70A0
namespace gamemd {
void sub_4E70A0()
{
  dword_A8E8D0 = (int)&g_ptr_7E8500; /*0x4e70a8*/
  if ( dword_A8E8D4 && byte_A8E8DD ) /*0x4e70bc*/
  {
    operator delete((void *)(dword_A8E8D4)); /*0x4e70bf*/
    dword_A8E8D4 = 0; /*0x4e70c7*/
  }
  byte_A8E8DD = 0; /*0x4e70cd*/
  dword_A8E8D8 = 0; /*0x4e70d3*/
}
} // namespace gamemd

// 0x4E70E0
namespace gamemd {
int sub_4E70E0()
{
  dword_A8ECA4 = 0; /*0x4e70e7*/
  dword_A8ECA8 = 0; /*0x4e70ec*/
  byte_A8ECAC = 1; /*0x4e70f1*/
  byte_A8ECAD = 0; /*0x4e70f8*/
  dword_A8ECA0 = (int)&g_ptr_7E3238; /*0x4e70fd*/
  dword_A8ECB4 = 10; /*0x4e7107*/
  dword_A8ECB0 = 0; /*0x4e7111*/
  return atexit(sub_4E7120); /*0x4e711c*/
}
} // namespace gamemd

// 0x4E7120
namespace gamemd {
void sub_4E7120()
{
  dword_A8ECA0 = (int)&g_ptr_7E8500; /*0x4e7128*/
  if ( dword_A8ECA4 && byte_A8ECAD ) /*0x4e713c*/
  {
    operator delete((void *)(dword_A8ECA4)); /*0x4e713f*/
    dword_A8ECA4 = 0; /*0x4e7147*/
  }
  byte_A8ECAD = 0; /*0x4e714d*/
  dword_A8ECA8 = 0; /*0x4e7153*/
}
} // namespace gamemd

// 0x4E7160
namespace gamemd {
int sub_4E7160()
{
  dword_8B41CC = 0; /*0x4e7167*/
  dword_8B41D0 = 0; /*0x4e716c*/
  byte_8B41D4 = 1; /*0x4e7171*/
  byte_8B41D5 = 0; /*0x4e7178*/
  dword_8B41C8 = (int)&g_ptr_7E3238; /*0x4e717d*/
  dword_8B41DC = 10; /*0x4e7187*/
  dword_8B41D8 = 0; /*0x4e7191*/
  return atexit(sub_4E71A0); /*0x4e719c*/
}
} // namespace gamemd

// 0x4E71A0
namespace gamemd {
void sub_4E71A0()
{
  dword_8B41C8 = (int)&g_ptr_7E8500; /*0x4e71a8*/
  if ( dword_8B41CC && byte_8B41D5 ) /*0x4e71bc*/
  {
    operator delete((void *)(dword_8B41CC)); /*0x4e71bf*/
    dword_8B41CC = 0; /*0x4e71c7*/
  }
  byte_8B41D5 = 0; /*0x4e71cd*/
  dword_8B41D0 = 0; /*0x4e71d3*/
}
} // namespace gamemd

// 0x4E71E0
namespace gamemd {
int sub_4E71E0()
{
  dword_A83D84 = 0; /*0x4e71e7*/
  dword_A83D88 = 0; /*0x4e71ec*/
  byte_A83D8C = 1; /*0x4e71f1*/
  byte_A83D8D = 0; /*0x4e71f8*/
  dword_A83D80 = (int)&g_ptr_7E3238; /*0x4e71fd*/
  dword_A83D94 = 10; /*0x4e7207*/
  dword_A83D90 = 0; /*0x4e7211*/
  return atexit(sub_4E7220); /*0x4e721c*/
}
} // namespace gamemd

// 0x4E7220
namespace gamemd {
void sub_4E7220()
{
  dword_A83D80 = (int)&g_ptr_7E8500; /*0x4e7228*/
  if ( dword_A83D84 && byte_A83D8D ) /*0x4e723c*/
  {
    operator delete((void *)(dword_A83D84)); /*0x4e723f*/
    dword_A83D84 = 0; /*0x4e7247*/
  }
  byte_A83D8D = 0; /*0x4e724d*/
  dword_A83D88 = 0; /*0x4e7253*/
}
} // namespace gamemd

// 0x4E7260
namespace gamemd {
int sub_4E7260()
{
  dword_A8EC1C = 0; /*0x4e7267*/
  dword_A8EC20 = 0; /*0x4e726c*/
  byte_A8EC24 = 1; /*0x4e7271*/
  byte_A8EC25 = 0; /*0x4e7278*/
  dword_A8EC18 = (int)&g_ptr_7E3238; /*0x4e727d*/
  dword_A8EC2C = 10; /*0x4e7287*/
  dword_A8EC28 = 0; /*0x4e7291*/
  return atexit(sub_4E72A0); /*0x4e729c*/
}
} // namespace gamemd

// 0x4E72A0
namespace gamemd {
void sub_4E72A0()
{
  dword_A8EC18 = (int)&g_ptr_7E8500; /*0x4e72a8*/
  if ( dword_A8EC1C && byte_A8EC25 ) /*0x4e72bc*/
  {
    operator delete((void *)(dword_A8EC1C)); /*0x4e72bf*/
    dword_A8EC1C = 0; /*0x4e72c7*/
  }
  byte_A8EC25 = 0; /*0x4e72cd*/
  dword_A8EC20 = 0; /*0x4e72d3*/
}
} // namespace gamemd

// 0x4E72E0
namespace gamemd {
int sub_4E72E0()
{
  dword_A8E31C = 0; /*0x4e72e7*/
  dword_A8E320 = 0; /*0x4e72ec*/
  byte_A8E324 = 1; /*0x4e72f1*/
  byte_A8E325 = 0; /*0x4e72f8*/
  dword_A8E318 = (int)&g_ptr_7E3238; /*0x4e72fd*/
  dword_A8E32C = 10; /*0x4e7307*/
  dword_A8E328 = 0; /*0x4e7311*/
  return atexit(sub_4E7320); /*0x4e731c*/
}
} // namespace gamemd

// 0x4E7320
namespace gamemd {
void sub_4E7320()
{
  dword_A8E318 = (int)&g_ptr_7E8500; /*0x4e7328*/
  if ( dword_A8E31C && byte_A8E325 ) /*0x4e733c*/
  {
    operator delete((void *)(dword_A8E31C)); /*0x4e733f*/
    dword_A8E31C = 0; /*0x4e7347*/
  }
  byte_A8E325 = 0; /*0x4e734d*/
  dword_A8E320 = 0; /*0x4e7353*/
}
} // namespace gamemd

// 0x4E7360
namespace gamemd {
int sub_4E7360()
{
  dword_A83C6C = 0; /*0x4e7367*/
  dword_A83C70 = 0; /*0x4e736c*/
  byte_A83C74 = 1; /*0x4e7371*/
  byte_A83C75 = 0; /*0x4e7378*/
  dword_A83C68 = (int)&g_ptr_7E3238; /*0x4e737d*/
  dword_A83C7C = 10; /*0x4e7387*/
  dword_A83C78 = 0; /*0x4e7391*/
  return atexit(sub_4E73A0); /*0x4e739c*/
}
} // namespace gamemd

// 0x4E73A0
namespace gamemd {
void sub_4E73A0()
{
  dword_A83C68 = (int)&g_ptr_7E8500; /*0x4e73a8*/
  if ( dword_A83C6C && byte_A83C75 ) /*0x4e73bc*/
  {
    operator delete((void *)(dword_A83C6C)); /*0x4e73bf*/
    dword_A83C6C = 0; /*0x4e73c7*/
  }
  byte_A83C75 = 0; /*0x4e73cd*/
  dword_A83C70 = 0; /*0x4e73d3*/
}
} // namespace gamemd

// 0x4E73E0
namespace gamemd {
int sub_4E73E0()
{
  dword_A8B21C = 0; /*0x4e73e7*/
  dword_A8B220 = 0; /*0x4e73ec*/
  byte_A8B224 = 1; /*0x4e73f1*/
  byte_A8B225 = 0; /*0x4e73f8*/
  dword_A8B218 = (int)&g_ptr_7E3238; /*0x4e73fd*/
  dword_A8B22C = 10; /*0x4e7407*/
  dword_A8B228 = 0; /*0x4e7411*/
  return atexit(sub_4E7420); /*0x4e741c*/
}
} // namespace gamemd

// 0x4E7420
namespace gamemd {
void sub_4E7420()
{
  dword_A8B218 = (int)&g_ptr_7E8500; /*0x4e7428*/
  if ( dword_A8B21C && byte_A8B225 ) /*0x4e743c*/
  {
    operator delete((void *)(dword_A8B21C)); /*0x4e743f*/
    dword_A8B21C = 0; /*0x4e7447*/
  }
  byte_A8B225 = 0; /*0x4e744d*/
  dword_A8B220 = 0; /*0x4e7453*/
}
} // namespace gamemd

// 0x4E74E0
namespace gamemd {
int sub_4E74E0()
{
  dword_8B4154 = 0; /*0x4e74e7*/
  dword_8B4158 = 0; /*0x4e74ec*/
  byte_8B415C = 1; /*0x4e74f1*/
  byte_8B415D = 0; /*0x4e74f8*/
  dword_8B4150 = (int)&g_ptr_7E3238; /*0x4e74fd*/
  dword_8B4164 = 10; /*0x4e7507*/
  dword_8B4160 = 0; /*0x4e7511*/
  return atexit(sub_4E7520); /*0x4e751c*/
}
} // namespace gamemd

// 0x4E7520
namespace gamemd {
void sub_4E7520()
{
  dword_8B4150 = (int)&g_ptr_7E8500; /*0x4e7528*/
  if ( dword_8B4154 && byte_8B415D ) /*0x4e753c*/
  {
    operator delete((void *)(dword_8B4154)); /*0x4e753f*/
    dword_8B4154 = 0; /*0x4e7547*/
  }
  byte_8B415D = 0; /*0x4e754d*/
  dword_8B4158 = 0; /*0x4e7553*/
}
} // namespace gamemd

// 0x4E7560
namespace gamemd {
int sub_4E7560()
{
  dword_A8E34C = 0; /*0x4e7567*/
  dword_A8E350 = 0; /*0x4e756c*/
  byte_A8E354 = 1; /*0x4e7571*/
  byte_A8E355 = 0; /*0x4e7578*/
  dword_A8E348 = (int)&g_ptr_7E3238; /*0x4e757d*/
  dword_A8E35C = 10; /*0x4e7587*/
  dword_A8E358 = 0; /*0x4e7591*/
  return atexit(sub_4E75A0); /*0x4e759c*/
}
} // namespace gamemd

// 0x4E75A0
namespace gamemd {
void sub_4E75A0()
{
  dword_A8E348 = (int)&g_ptr_7E8500; /*0x4e75a8*/
  if ( dword_A8E34C && byte_A8E355 ) /*0x4e75bc*/
  {
    operator delete((void *)(dword_A8E34C)); /*0x4e75bf*/
    dword_A8E34C = 0; /*0x4e75c7*/
  }
  byte_A8E355 = 0; /*0x4e75cd*/
  dword_A8E350 = 0; /*0x4e75d3*/
}
} // namespace gamemd

// 0x4E7660
namespace gamemd {
int sub_4E7660()
{
  dword_A8EB2C = 0; /*0x4e7667*/
  dword_A8EB30 = 0; /*0x4e766c*/
  byte_A8EB34 = 1; /*0x4e7671*/
  byte_A8EB35 = 0; /*0x4e7678*/
  dword_A8EB28 = (int)&g_ptr_7E3238; /*0x4e767d*/
  dword_A8EB3C = 10; /*0x4e7687*/
  dword_A8EB38 = 0; /*0x4e7691*/
  return atexit(sub_4E76A0); /*0x4e769c*/
}
} // namespace gamemd

// 0x4E76A0
namespace gamemd {
void sub_4E76A0()
{
  dword_A8EB28 = (int)&g_ptr_7E8500; /*0x4e76a8*/
  if ( dword_A8EB2C && byte_A8EB35 ) /*0x4e76bc*/
  {
    operator delete((void *)(dword_A8EB2C)); /*0x4e76bf*/
    dword_A8EB2C = 0; /*0x4e76c7*/
  }
  byte_A8EB35 = 0; /*0x4e76cd*/
  dword_A8EB30 = 0; /*0x4e76d3*/
}
} // namespace gamemd

// 0x4E76E0
namespace gamemd {
int sub_4E76E0()
{
  dword_A8ED2C = 0; /*0x4e76e7*/
  dword_A8ED30 = 0; /*0x4e76ec*/
  byte_A8ED34 = 1; /*0x4e76f1*/
  byte_A8ED35 = 0; /*0x4e76f8*/
  dword_A8ED28 = (int)&g_ptr_7E3238; /*0x4e76fd*/
  dword_A8ED3C = 10; /*0x4e7707*/
  dword_A8ED38 = 0; /*0x4e7711*/
  return atexit(sub_4E7720); /*0x4e771c*/
}
} // namespace gamemd

// 0x4E7720
namespace gamemd {
void sub_4E7720()
{
  dword_A8ED28 = (int)&g_ptr_7E8500; /*0x4e7728*/
  if ( dword_A8ED2C && byte_A8ED35 ) /*0x4e773c*/
  {
    operator delete((void *)(dword_A8ED2C)); /*0x4e773f*/
    dword_A8ED2C = 0; /*0x4e7747*/
  }
  byte_A8ED35 = 0; /*0x4e774d*/
  dword_A8ED30 = 0; /*0x4e7753*/
}
} // namespace gamemd

// 0x4E7760
namespace gamemd {
int sub_4E7760()
{
  dword_A83D9C = 0; /*0x4e7767*/
  dword_A83DA0 = 0; /*0x4e776c*/
  byte_A83DA4 = 1; /*0x4e7771*/
  byte_A83DA5 = 0; /*0x4e7778*/
  dword_A83D98 = (int)&g_ptr_7E3238; /*0x4e777d*/
  dword_A83DAC = 10; /*0x4e7787*/
  dword_A83DA8 = 0; /*0x4e7791*/
  return atexit(sub_4E77A0); /*0x4e779c*/
}
} // namespace gamemd

// 0x4E77A0
namespace gamemd {
void sub_4E77A0()
{
  dword_A83D98 = (int)&g_ptr_7E8500; /*0x4e77a8*/
  if ( dword_A83D9C && byte_A83DA5 ) /*0x4e77bc*/
  {
    operator delete((void *)(dword_A83D9C)); /*0x4e77bf*/
    dword_A83D9C = 0; /*0x4e77c7*/
  }
  byte_A83DA5 = 0; /*0x4e77cd*/
  dword_A83DA0 = 0; /*0x4e77d3*/
}
} // namespace gamemd

// 0x4E77E0
namespace gamemd {
int sub_4E77E0()
{
  dword_A83D6C = 0; /*0x4e77e7*/
  dword_A83D70 = 0; /*0x4e77ec*/
  byte_A83D74 = 1; /*0x4e77f1*/
  byte_A83D75 = 0; /*0x4e77f8*/
  dword_A83D68 = (int)&g_ptr_7E3238; /*0x4e77fd*/
  dword_A83D7C = 10; /*0x4e7807*/
  dword_A83D78 = 0; /*0x4e7811*/
  return atexit(sub_4E7820); /*0x4e781c*/
}
} // namespace gamemd

// 0x4E7820
namespace gamemd {
void sub_4E7820()
{
  dword_A83D68 = (int)&g_ptr_7E8500; /*0x4e7828*/
  if ( dword_A83D6C && byte_A83D75 ) /*0x4e783c*/
  {
    operator delete((void *)(dword_A83D6C)); /*0x4e783f*/
    dword_A83D6C = 0; /*0x4e7847*/
  }
  byte_A83D75 = 0; /*0x4e784d*/
  dword_A83D70 = 0; /*0x4e7853*/
}
} // namespace gamemd

// 0x4E7860
namespace gamemd {
int sub_4E7860()
{
  dword_A8E334 = 0; /*0x4e7867*/
  dword_A8E338 = 0; /*0x4e786c*/
  byte_A8E33C = 1; /*0x4e7871*/
  byte_A8E33D = 0; /*0x4e7878*/
  dword_A8E330 = (int)&g_ptr_7E3238; /*0x4e787d*/
  dword_A8E344 = 10; /*0x4e7887*/
  dword_A8E340 = 0; /*0x4e7891*/
  return atexit(sub_4E78A0); /*0x4e789c*/
}
} // namespace gamemd

// 0x4E78A0
namespace gamemd {
void sub_4E78A0()
{
  dword_A8E330 = &g_ptr_7E8500; /*0x4e78a8*/
  if ( dword_A8E334 && byte_A8E33D ) /*0x4e78bc*/
  {
    operator delete((void *)(dword_A8E334)); /*0x4e78bf*/
    dword_A8E334 = 0; /*0x4e78c7*/
  }
  byte_A8E33D = 0; /*0x4e78cd*/
  dword_A8E338 = 0; /*0x4e78d3*/
}
} // namespace gamemd

// 0x4E78E0
namespace gamemd {
int sub_4E78E0()
{
  dword_A83CBC = 0; /*0x4e78e7*/
  dword_A83CC0 = 0; /*0x4e78ec*/
  byte_A83CC4 = 1; /*0x4e78f1*/
  byte_A83CC5 = 0; /*0x4e78f8*/
  dword_A83CB8 = (int)&g_ptr_7E3238; /*0x4e78fd*/
  dword_A83CCC = 10; /*0x4e7907*/
  dword_A83CC8 = 0; /*0x4e7911*/
  return atexit(sub_4E7920); /*0x4e791c*/
}
} // namespace gamemd

// 0x4E7920
namespace gamemd {
void sub_4E7920()
{
  dword_A83CB8 = (int)&g_ptr_7E8500; /*0x4e7928*/
  if ( dword_A83CBC && byte_A83CC5 ) /*0x4e793c*/
  {
    operator delete((void *)(dword_A83CBC)); /*0x4e793f*/
    dword_A83CBC = 0; /*0x4e7947*/
  }
  byte_A83CC5 = 0; /*0x4e794d*/
  dword_A83CC0 = 0; /*0x4e7953*/
}
} // namespace gamemd

// 0x4E7960
namespace gamemd {
int sub_4E7960()
{
  dword_A83D54 = 0; /*0x4e7967*/
  dword_A83D58 = 0; /*0x4e796c*/
  byte_A83D5C = 1; /*0x4e7971*/
  byte_A83D5D = 0; /*0x4e7978*/
  stru_A83D50 = (int)&g_ptr_7E3238; /*0x4e797d*/
  dword_A83D64 = 10; /*0x4e7987*/
  dword_A83D60 = 0; /*0x4e7991*/
  return atexit(sub_4E79A0); /*0x4e799c*/
}
} // namespace gamemd

// 0x4E79A0
namespace gamemd {
void sub_4E79A0()
{
  stru_A83D50 = (int)&g_ptr_7E8500; /*0x4e79a8*/
  if ( dword_A83D54 && byte_A83D5D ) /*0x4e79bc*/
  {
    operator delete((void *)(dword_A83D54)); /*0x4e79bf*/
    dword_A83D54 = 0; /*0x4e79c7*/
  }
  byte_A83D5D = 0; /*0x4e79cd*/
  dword_A83D58 = 0; /*0x4e79d3*/
}
} // namespace gamemd

// 0x4E79E0
namespace gamemd {
int sub_4E79E0()
{
  dword_A8EC7C = 0; /*0x4e79e7*/
  dword_A8EC80 = 0; /*0x4e79ec*/
  byte_A8EC84 = 1; /*0x4e79f1*/
  byte_A8EC85 = 0; /*0x4e79f8*/
  dword_A8EC78 = (TechnoClass *)&g_ptr_7E3238; /*0x4e79fd*/
  dword_A8EC8C = 10; /*0x4e7a07*/
  dword_A8EC88 = 0; /*0x4e7a11*/
  return atexit(sub_4E7A20); /*0x4e7a1c*/
}
} // namespace gamemd

// 0x4E7A20
namespace gamemd {
void sub_4E7A20()
{
  dword_A8EC78 = (TechnoClass *)&g_ptr_7E8500; /*0x4e7a28*/
  if ( dword_A8EC7C && byte_A8EC85 ) /*0x4e7a3c*/
  {
    operator delete((void *)(dword_A8EC7C)); /*0x4e7a3f*/
    dword_A8EC7C = 0; /*0x4e7a47*/
  }
  byte_A8EC85 = 0; /*0x4e7a4d*/
  dword_A8EC80 = 0; /*0x4e7a53*/
}
} // namespace gamemd

// 0x4E7A60
namespace gamemd {
int sub_4E7A60()
{
  dword_A8EB04 = 0; /*0x4e7a67*/
  dword_A8EB08 = 0; /*0x4e7a6c*/
  byte_A8EB0C = 1; /*0x4e7a71*/
  byte_A8EB0D = 0; /*0x4e7a78*/
  stru_A8EB00 = (int)&g_ptr_7E3238; /*0x4e7a7d*/
  dword_A8EB14 = 10; /*0x4e7a87*/
  dword_A8EB10 = 0; /*0x4e7a91*/
  return atexit(sub_4E7AA0); /*0x4e7a9c*/
}
} // namespace gamemd

// 0x4E7AA0
namespace gamemd {
void sub_4E7AA0()
{
  stru_A8EB00 = (int)&g_ptr_7E8500; /*0x4e7aa8*/
  if ( dword_A8EB04 && byte_A8EB0D ) /*0x4e7abc*/
  {
    operator delete((void *)(dword_A8EB04)); /*0x4e7abf*/
    dword_A8EB04 = 0; /*0x4e7ac7*/
  }
  byte_A8EB0D = 0; /*0x4e7acd*/
  dword_A8EB08 = 0; /*0x4e7ad3*/
}
} // namespace gamemd

// 0x4E7AE0
namespace gamemd {
int sub_4E7AE0()
{
  dword_A8E364 = 0; /*0x4e7ae7*/
  dword_A8E368 = 0; /*0x4e7aec*/
  byte_A8E36C = 1; /*0x4e7af1*/
  byte_A8E36D = 0; /*0x4e7af8*/
  dword_A8E360 = (int)&g_ptr_7E3238; /*0x4e7afd*/
  dword_A8E374 = 10; /*0x4e7b07*/
  dword_A8E370 = 0; /*0x4e7b11*/
  return atexit(sub_4E7B20); /*0x4e7b1c*/
}
} // namespace gamemd

// 0x4E7B20
namespace gamemd {
void sub_4E7B20()
{
  dword_A8E360 = (int)&g_ptr_7E8500; /*0x4e7b28*/
  if ( dword_A8E364 && byte_A8E36D ) /*0x4e7b3c*/
  {
    operator delete((void *)(dword_A8E364)); /*0x4e7b3f*/
    dword_A8E364 = 0; /*0x4e7b47*/
  }
  byte_A8E36D = 0; /*0x4e7b4d*/
  dword_A8E368 = 0; /*0x4e7b53*/
}
} // namespace gamemd

// 0x4E7B60
namespace gamemd {
int sub_4E7B60()
{
  dword_A8E96C = 0; /*0x4e7b67*/
  dword_A8E970 = 0; /*0x4e7b6c*/
  byte_A8E974 = 1; /*0x4e7b71*/
  byte_A8E975 = 0; /*0x4e7b78*/
  dword_A8E968 = (int)&g_ptr_7E3238; /*0x4e7b7d*/
  dword_A8E97C = 10; /*0x4e7b87*/
  dword_A8E978 = 0; /*0x4e7b91*/
  return atexit(sub_4E7BA0); /*0x4e7b9c*/
}
} // namespace gamemd

// 0x4E7BA0
namespace gamemd {
void sub_4E7BA0()
{
  dword_A8E968 = (int)&g_ptr_7E8500; /*0x4e7ba8*/
  if ( dword_A8E96C && byte_A8E975 ) /*0x4e7bbc*/
  {
    operator delete((void *)(dword_A8E96C)); /*0x4e7bbf*/
    dword_A8E96C = 0; /*0x4e7bc7*/
  }
  byte_A8E975 = 0; /*0x4e7bcd*/
  dword_A8E970 = 0; /*0x4e7bd3*/
}
} // namespace gamemd

// 0x4E7BE0
namespace gamemd {
int sub_4E7BE0()
{
  dword_8B41E4 = 0; /*0x4e7be7*/
  dword_8B41E8 = 0; /*0x4e7bec*/
  byte_8B41EC = 1; /*0x4e7bf1*/
  byte_8B41ED = 0; /*0x4e7bf8*/
  dword_8B41E0 = (int)&g_ptr_7E3238; /*0x4e7bfd*/
  dword_8B41F4 = 10; /*0x4e7c07*/
  dword_8B41F0 = 0; /*0x4e7c11*/
  return atexit(sub_4E7C20); /*0x4e7c1c*/
}
} // namespace gamemd

// 0x4E7C20
namespace gamemd {
void sub_4E7C20()
{
  dword_8B41E0 = (int)&g_ptr_7E8500; /*0x4e7c28*/
  if ( dword_8B41E4 && byte_8B41ED ) /*0x4e7c3c*/
  {
    operator delete((void *)(dword_8B41E4)); /*0x4e7c3f*/
    dword_8B41E4 = 0; /*0x4e7c47*/
  }
  byte_8B41ED = 0; /*0x4e7c4d*/
  dword_8B41E8 = 0; /*0x4e7c53*/
}
} // namespace gamemd

// 0x4E7C60
namespace gamemd {
int sub_4E7C60()
{
  dword_A83E04 = 0; /*0x4e7c67*/
  dword_A83E08 = 0; /*0x4e7c6c*/
  byte_A83E0C = 1; /*0x4e7c71*/
  byte_A83E0D = 0; /*0x4e7c78*/
  dword_A83E00 = (int)&g_ptr_7E3238; /*0x4e7c7d*/
  dword_A83E14 = 10; /*0x4e7c87*/
  dword_A83E10 = 0; /*0x4e7c91*/
  return atexit(sub_4E7CA0); /*0x4e7c9c*/
}
} // namespace gamemd

// 0x4E7CA0
namespace gamemd {
void sub_4E7CA0()
{
  dword_A83E00 = (int)&g_ptr_7E8500; /*0x4e7ca8*/
  if ( dword_A83E04 && byte_A83E0D ) /*0x4e7cbc*/
  {
    operator delete((void *)(dword_A83E04)); /*0x4e7cbf*/
    dword_A83E04 = 0; /*0x4e7cc7*/
  }
  byte_A83E0D = 0; /*0x4e7ccd*/
  dword_A83E08 = 0; /*0x4e7cd3*/
}
} // namespace gamemd

gamemd::TiberianSunClassFactory pUnk;  // X74: object storage for 0xA8E8C8 (compiler dynamic-init installs vptr)

// 0x4E7CE0
namespace gamemd {
void sub_4E7CE0()
{
  /* X74: ptr_0 install = compiler dynamic-init of typed global pUnk */  /*0x4e7ce0*/
}
} // namespace gamemd

// 0x4E7D10
namespace gamemd {
int sub_4E7D10()
{
  sub_6616B0(stru_A8E7B0); /*0x4e7d15*/
  return atexit(unknown_libname_13); /*0x4e7d25*/
}
} // namespace gamemd

// 0x4E7D30
namespace gamemd {
int unknown_libname_13()
{
  stru_A8E7B0[0] = &g_ptr_7F0AFC; /*0x66170d*/
  stru_A8E7B0[3] = 0; /*0x661713*/
  stru_A8E7B0[4] = 0; /*0x661716*/
  memset(&stru_A8E7B0[5], 0, 0x100u); /*0x661719*/
  (stru_A8E7B0)->Dtor(); /*0x66171d*/
}
} // namespace gamemd

// 0x4E7D40
namespace gamemd {
int sub_4E7D40()
{
  dword_A8ECBC = 0; /*0x4e7d47*/
  dword_A8ECC0 = 0; /*0x4e7d4c*/
  byte_A8ECC4 = 1; /*0x4e7d51*/
  byte_A8ECC5 = 0; /*0x4e7d58*/
  dword_A8ECB8 = (ObjectClass *)&g_ptr_7E3238; /*0x4e7d5d*/
  dword_A8ECCC = 10; /*0x4e7d67*/
  dword_A8ECC8 = 0; /*0x4e7d71*/
  return atexit(sub_4E7D80); /*0x4e7d7c*/
}
} // namespace gamemd

// 0x4E7D80
namespace gamemd {
void sub_4E7D80()
{
  dword_A8ECB8 = (ObjectClass *)&g_ptr_7E8500; /*0x4e7d88*/
  if ( dword_A8ECBC && byte_A8ECC5 ) /*0x4e7d9c*/
  {
    operator delete((void *)(dword_A8ECBC)); /*0x4e7d9f*/
    dword_A8ECBC = 0; /*0x4e7da7*/
  }
  byte_A8ECC5 = 0; /*0x4e7dad*/
  dword_A8ECC0 = 0; /*0x4e7db3*/
}
} // namespace gamemd

// 0x4E7DC0
namespace gamemd {
int sub_4E7DC0()
{
  sub_74F730(&dword_A8ECE0); /*0x4e7dc5*/
  return atexit(sub_4E7DE0); /*0x4e7dd5*/
}
} // namespace gamemd

// 0x4E7DE0
namespace gamemd {
void sub_4E7DE0()
{
  dword_A8ECE0 = (int)&g_ptr_7EA57C; /*0x4e7de0*/
}
} // namespace gamemd

// 0x4E7DF0
namespace gamemd {
int sub_4E7DF0()
{
  dword_A8ECD8 = 0; /*0x4e7df7*/
  dword_A8ECDC = 0; /*0x4e7dfc*/
  return atexit(unknown_libname_14); /*0x4e7e07*/
}
} // namespace gamemd

// 0x4E7E10
namespace gamemd {
int unknown_libname_14()
{
  (&dword_A8ECD8)->ReleaseWaveAndString(); /*0x4e7e15*/
}
} // namespace gamemd

// 0x4E7E20
namespace gamemd {
int unknown_libname_15()
{
  *(unsigned int *)dword_A8EB60 = 3; /*0x5fa35a*/
  dword_A8EB64 = 1; /*0x5fa360*/
  *(unsigned int *)unk_A8EB6C = 0; /*0x5fa363*/
  dword_A8EB70 = 3; /*0x5fa366*/
  unk_A8EB74[0] = 1; /*0x5fa36d*/
  dword_A8EB78 = 2; /*0x5fa370*/
  byte_A8EB7C = 1; /*0x5fa377*/
  unk_A8EB7D = 1; /*0x5fa37a*/
  byte_A8EB7E = 1; /*0x5fa37d*/
  byte_A8EB80 = 1; /*0x5fa380*/
  byte_A8EBA5 = 1; /*0x5fa383*/
  *(unsigned int *)&dword_A8EBF8 = 18; /*0x5fa38b*/
  *(unsigned int *)&dword_A8EBFC = 18; /*0x5fa391*/
  *(unsigned int *)&dword_A8EC00 = 17; /*0x5fa39f*/
  *(unsigned int *)&dword_A8EC04 = 17; /*0x5fa3a5*/
  dword_A8EB84 = -1; /*0x5fa3b0*/
  *(unsigned int *)&dword_A8EC08 = 16; /*0x5fa3b3*/
  *(unsigned int *)dword_A8EC0C = 16; /*0x5fa3b9*/
  dword_A8EB88 = -1; /*0x5fa3c4*/
  unk_A8EBAC = -1; /*0x5fa3c7*/
  unk_A8EBB0 = -1; /*0x5fa3ca*/
  byte_A8EB7F = 0; /*0x5fa3cd*/
  dword_A8EB8C = 800; /*0x5fa3d0*/
  dword_A8EB90 = 600; /*0x5fa3d7*/
  byte_A8EB94 = 0; /*0x5fa3de*/
  byte_A8EB95 = 0; /*0x5fa3e1*/
  byte_A8EB96 = 0; /*0x5fa3e4*/
  flt_A8EB98 = 0.69999999; /*0x5fa3e7*/
  flt_A8EB9C = 1060320051; /*0x5fa3ee*/
  flt_A8EBA0 = 0.40000001; /*0x5fa3f5*/
  byte_A8EBA4 = 0; /*0x5fa3fc*/
  byte_A8EBA6 = 0; /*0x5fa3ff*/
  unk_A8EBA8 = -65527; /*0x5fa402*/
  dword_A8EBB4 = 0; /*0x5fa40e*/
  unk_A8EC10 = 81; /*0x5fa411*/
  unk_A8EC14 = 81; /*0x5fa417*/
  unk_A8EBB8[0] = 0; /*0x5fa41d*/
  return dword_A8EB60; /*0x5fa421*/
}
} // namespace gamemd

// 0x4E7E30
namespace gamemd {
int sub_4E7E30()
{
  sub_720960(&unk_A83D10); /*0x4e7e35*/
  return atexit(sub_4E7E50); /*0x4e7e45*/
}
} // namespace gamemd

// 0x4E7E50
namespace gamemd {
void sub_4E7E50()
{
  dword_A83D24 = (int)&g_ptr_7E8500; /*0x4e7e58*/
  if ( dword_A83D28 && byte_A83D31 ) /*0x4e7e6c*/
  {
    operator delete((void *)(dword_A83D28)); /*0x4e7e6f*/
    dword_A83D28 = 0; /*0x4e7e77*/
  }
  byte_A83D31 = 0; /*0x4e7e7d*/
  dword_A83D2C = 0; /*0x4e7e83*/
}
} // namespace gamemd

// 0x4E7E90
namespace gamemd {
int unknown_libname_16()
{
  return (unk_A83E18)->initStripClass();
}
} // namespace gamemd

// 0x4E7ED0
namespace gamemd {
char * sub_4E7ED0()
{

  char *result = byte_8B4204; // eax /*0x4e7ed0*/
  int v1 = 0x4000; // ecx /*0x4e7ed5*/
  do /*0x4e7ee2*/
  {
    *result = 0; /*0x4e7edc*/
    result += 111; /*0x4e7ede*/
    --v1; /*0x4e7ee1*/
  }
  while ( v1 ); /*0x4e7ee2*/
  dword_8B41F8 = 0; /*0x4e7ee4*/
  dword_8B41FC = 0; /*0x4e7eea*/
  dword_8B4200 = 0; /*0x4e7ef0*/
  return result; /*0x4e7ef6*/
}
} // namespace gamemd

// 0x4E7F00
namespace gamemd {
unsigned char * sub_4E7F00()
{

  unsigned char *result = &unk_A83EDC; // eax /*0x4e7f00*/
  int v1 = 256; // ecx /*0x4e7f05*/
  do /*0x4e7f12*/
  {
    *result = 0; /*0x4e7f0c*/
    result += 111; /*0x4e7f0e*/
    --v1; /*0x4e7f11*/
  }
  while ( v1 ); /*0x4e7f12*/
  dword_A83ED0 = 0; /*0x4e7f14*/
  dword_A83ED4 = 0; /*0x4e7f1a*/
  dword_A83ED8 = 0; /*0x4e7f20*/
  return result; /*0x4e7f26*/
}
} // namespace gamemd

// 0x4E7F30
namespace gamemd {
int sub_4E7F30()
{
  dword_8B41AC = 0; /*0x4e7f37*/
  dword_8B41B0 = 0; /*0x4e7f3c*/
  byte_8B41B4 = 1; /*0x4e7f41*/
  byte_8B41B5 = 0; /*0x4e7f48*/
  dword_8B41A8 = (int)&g_ptr_7E3238; /*0x4e7f4d*/
  dword_8B41BC = 10; /*0x4e7f57*/
  dword_8B41B8 = 0; /*0x4e7f61*/
  return atexit(sub_4E7F70); /*0x4e7f6c*/
}
} // namespace gamemd

// 0x4E7F70
namespace gamemd {
void sub_4E7F70()
{
  dword_8B41A8 = (int)&g_ptr_7E8500; /*0x4e7f78*/
  if ( dword_8B41AC && byte_8B41B5 ) /*0x4e7f8c*/
  {
    operator delete((void *)(dword_8B41AC)); /*0x4e7f8f*/
    dword_8B41AC = 0; /*0x4e7f97*/
  }
  byte_8B41B5 = 0; /*0x4e7f9d*/
  dword_8B41B0 = 0; /*0x4e7fa3*/
}
} // namespace gamemd

// 0x4E7FB0
namespace gamemd {
int sub_4E7FB0()
{
  dword_8B40CC = 0; /*0x4e7fb7*/
  dword_8B40D0 = 0; /*0x4e7fbc*/
  byte_8B40D4 = 1; /*0x4e7fc1*/
  byte_8B40D5 = 0; /*0x4e7fc8*/
  dword_8B40C8 = (int)&g_ptr_7E3238; /*0x4e7fcd*/
  dword_8B40DC = 10; /*0x4e7fd7*/
  dword_8B40D8 = 0; /*0x4e7fe1*/
  return atexit(sub_4E7FF0); /*0x4e7fec*/
}
} // namespace gamemd

// 0x4E7FF0
namespace gamemd {
void sub_4E7FF0()
{
  dword_8B40C8 = (int)&g_ptr_7E8500; /*0x4e7ff8*/
  if ( dword_8B40CC && byte_8B40D5 ) /*0x4e800c*/
  {
    operator delete((void *)(dword_8B40CC)); /*0x4e800f*/
    dword_8B40CC = 0; /*0x4e8017*/
  }
  byte_8B40D5 = 0; /*0x4e801d*/
  dword_8B40D0 = 0; /*0x4e8023*/
}
} // namespace gamemd

// 0x4E8030
namespace gamemd {
int sub_4E8030()
{
  SessionClass::SessionClass((char *)dword_A8B238); /*0x4e8035*/
  return atexit(unknown_libname_17); /*0x4e8045*/
}
} // namespace gamemd

// 0x4E8050
namespace gamemd {
int unknown_libname_17()
{
  ObjectManager::CleanupArrays((int)dword_A8B238); /*0x4e8055*/
}
} // namespace gamemd

// 0x4E8060
namespace gamemd {
int sub_4E8060()
{
  sub_5F15C0(&unk_A8EA70, 16, 16, 236, 4660); /*0x4e8073*/
  return atexit(unknown_libname_18); /*0x4e8083*/
}
} // namespace gamemd

// 0x4E80A0
namespace gamemd {
int sub_4E80A0()
{
  sub_5408F0((char *)unk_A8E9C0, 455, 558, 160, 32, 34835, 43524); /*0x4e80c0*/
  return atexit(unknown_libname_19); /*0x4e80d0*/
}
} // namespace gamemd

// 0x4E80E0
namespace gamemd {
int unknown_libname_19()
{
  IPXManagerClass::processPacket((char *)unk_A8E9C0); /*0x4e80e5*/
}
} // namespace gamemd

// 0x4E80F0
namespace gamemd {
int sub_4E80F0()
{
  sub_4E6070((int)dword_A8E8E8); /*0x4e80f5*/
  return atexit(unknown_libname_20); /*0x4e8105*/
}
} // namespace gamemd

// 0x4E8110
namespace gamemd {
int unknown_libname_20()
{
  nullsub_54(); /*0x4e8115*/
}
} // namespace gamemd

// 0x4E8120
char sub_4E8120()
{
  byte_A83CD9 = 0; /*0x4e8122*/
  word_A83CDA = 0; /*0x4e8127*/
  return 0; /*0x4e8131*/
}
// 0x4E8140
char sub_4E8140()
{
  byte_A83CD4 = 127; /*0x4e8142*/
  byte_A83CD5 = 127; /*0x4e8147*/
  byte_A83CD6 = 127; /*0x4e814c*/
  return 127; /*0x4e8151*/
}
// 0x4E8160
char sub_4E8160()
{
  stru_A80220 = -1; /*0x4e8162*/
  DataGlobal_A80221 = -1; /*0x4e8167*/
  return -1; /*0x4e8171*/
}
// 0x4E8180
char sub_4E8180()
{
  byte_A8EAE4 = -1; /*0x4e8182*/
  word_A8EAE5 = 0; /*0x4e8189*/
  return 0; /*0x4e8193*/
}
// 0x4E81A0
char sub_4E81A0()
{
  byte_A83EC9 = -1; /*0x4e81a2*/
  byte_A83EC8 = 0; /*0x4e81a9*/
  byte_A83ECA = 0; /*0x4e81ae*/
  return 0; /*0x4e81b3*/
}
// 0x4E81C0
char sub_4E81C0()
{
  byte_A8E8C6 = -1; /*0x4e81c2*/
  byte_A8E8C4 = 0; /*0x4e81c9*/
  byte_A8E8C5 = 0; /*0x4e81ce*/
  return 0; /*0x4e81d3*/
}
// 0x4E81E0
char sub_4E81E0()
{
  byte_A83DC0 = 0; /*0x4e81e2*/
  byte_A83DC1 = -1; /*0x4e81e9*/
  byte_A83DC2 = -1; /*0x4e81ee*/
  return -1; /*0x4e81f3*/
}
// 0x4E8200
char sub_4E8200()
{
  byte_8B40E1 = 0; /*0x4e8202*/
  byte_8B40E0 = -1; /*0x4e8209*/
  byte_8B40E2 = -1; /*0x4e820e*/
  return -1; /*0x4e8213*/
}
// 0x4E8220
char sub_4E8220()
{
  byte_A8E982 = 0; /*0x4e8222*/
  byte_A8E980 = -1; /*0x4e8229*/
  byte_A8E981 = -1; /*0x4e822e*/
  return -1; /*0x4e8233*/
}
// 0x4E92F0
void VectorClass::HouseClass_vt_03_free_(gamemd::VectorClass_TagClass *a1)  // G57w17h4 receiver-first (raw this=VectorClass)
{
  if ( *(unsigned int *)(a1 + 4) && *(unsigned char *)(a1 + 13) ) /*0x4e92fd*/
  {
    operator delete((void *)(*(void **)(a1 + 4))); /*0x4e9303*/
    *(unsigned int *)(a1 + 4) = 0; /*0x4e930b*/
  }
  *(unsigned char *)(a1 + 13) = 0; /*0x4e930e*/
  *(unsigned int *)(a1 + 8) = 0; /*0x4e9311*/
}
// 0x4E9320
int VectorClass::HouseClass_vt_04_free_(gamemd::VectorClass_TagClass *a1, int * a2)  // G57w17h4 receiver-first (raw this=VectorClass)
{

  if ( !*(unsigned char *)(a1 + 12) ) /*0x4e9320*/
    return 0; /*0x4e9328*/
  int v3; // edx
  v3 = *(unsigned int *)(a1 + 8); /*0x4e932e*/
  int result = 0; // eax /*0x4e9331*/
  if ( v3 <= 0 ) /*0x4e9335*/
    return -1; /*0x4e934c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)(a1 + 4); *i != *a2; ++i ) /*0x4e933b*/
  {
    if ( ++result >= v3 ) /*0x4e934a*/
      return -1; /*0x4e934a*/
  }
  return result; /*0x4e932a*/
}
// 0x4E9360
unsigned int VectorClass::HouseClass_vt_05_free_(gamemd::VectorClass_TagClass *a1, int a2)  // G57w17h4 receiver-first (raw this=VectorClass)
{
  if ( *(unsigned char *)(a1 + 12) ) /*0x4e9360*/
    return (unsigned int)(a2 - *(unsigned int *)(a1 + 4)) >> 2; /*0x4e9375*/
  else
    return 0; /*0x4e9367*/
}
// 0x4E9F00
int _VectorClass_PAVParticleClass::ParticleSystemClass_vt_04_free_(gamemd::_VectorClass_PAVParticleClass *a1, int * a2)  // G57w17h4 receiver-first (raw this=_VectorClass_PAVParticleClass)
{

  if ( !(*((unsigned char *)&(a1->m_C))) ) /*0x4e9f00*/
    return 0; /*0x4e9f08*/
  int m_8; // edx
  m_8 = a1->m_8; /*0x4e9f0e*/
  int result = 0; // eax /*0x4e9f11*/
  if ( m_8 <= 0 ) /*0x4e9f15*/
    return -1; /*0x4e9f2c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a1->m_1[3]; *i != *a2; ++i ) /*0x4e9f1b*/
  {
    if ( ++result >= m_8 ) /*0x4e9f2a*/
      return -1; /*0x4e9f2a*/
  }
  return result; /*0x4e9f0a*/
}
// 0x4E9F40
unsigned int _VectorClass_PAVParticleClass::ParticleSystemClass_vt_05_free_(gamemd::_VectorClass_PAVParticleClass *a1, int a2)  // G57w17h4 receiver-first (raw this=_VectorClass_PAVParticleClass)
{
  if ( (*((unsigned char *)&(a1->m_C))) ) /*0x4e9f40*/
    return (unsigned int)(a2 - *(unsigned int *)&a1->m_1[3]) >> 2; /*0x4e9f55*/
  else
    return 0; /*0x4e9f47*/
}
// 0x4EF4E0
namespace gamemd {
unsigned int *  VectorClass::HouseClass_vt_00(char a2)
{

  void *v3 = this->Items; // eax /*0x4ef4e3*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x4ef4e6*/
  if ( v3 && this->IsAllocated ) /*0x4ef4f0*/
  {
    operator delete((v3)); /*0x4ef4f8*/
    this->Items = 0; /*0x4ef500*/
  }
  this->IsAllocated = 0; /*0x4ef50b*/
  this->Capacity = 0; /*0x4ef511*/
  if ( (a2 & 1) != 0 ) /*0x4ef518*/
    operator delete((this)); /*0x4ef51b*/
  return this; /*0x4ef525*/
}
} // namespace gamemd

// 0x4EF800
namespace gamemd {
unsigned int * _VectorClass_PAVParticleClass::ParticleSystemClass_vt_00(_VectorClass_PAVParticleClass *Block, char a2)
{

  void *v3 = *&Block->u32_4; // eax /*0x4ef803*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x4ef806*/
  if ( v3 && (Block->u8_D) ) /*0x4ef810*/
  {
    operator delete((v3)); /*0x4ef818*/
    *&Block->u32_4 = 0; /*0x4ef820*/
  }
  (Block->u8_D) = 0; /*0x4ef82b*/
  Block->m_8 = 0; /*0x4ef831*/
  if ( (a2 & 1) != 0 ) /*0x4ef838*/
    operator delete((Block)); /*0x4ef83b*/
  return Block->__pad_0; /*0x4ef845*/
}
} // namespace gamemd
