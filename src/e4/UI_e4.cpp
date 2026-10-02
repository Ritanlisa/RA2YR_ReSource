// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ShapeButton_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B6EB0_e4.hpp"
#include "e4/classes/E4Recv_5CE4A0_e4.hpp"
#include "e4/classes/E4Recv_5D1C90_e4.hpp"
#include "e4/classes/E4Recv_60B350_e4.hpp"
#include "e4/classes/E4Recv_60B420_e4.hpp"
#include "e4/classes/E4Recv_60B550_e4.hpp"
#include "e4/classes/E4Recv_60B610_e4.hpp"
#include "e4/classes/E4Recv_60B7A0_e4.hpp"
#include "e4/classes/E4Recv_60C7D0_e4.hpp"
#include "e4/classes/E4Recv_60C930_e4.hpp"
#include "e4/classes/E4Recv_60CAF0_e4.hpp"
#include "e4/classes/E4Recv_60CCC0_e4.hpp"
#include "e4/classes/E4Recv_60CDB0_e4.hpp"
#include "e4/classes/E4Recv_630EA0_e4.hpp"
#include "e4/classes/E4Recv_631380_e4.hpp"
#include "e4/classes/E4Recv_631500_e4.hpp"
#include "e4/classes/E4Recv_631B20_e4.hpp"
#include "e4/classes/E4Recv_637D00_e4.hpp"
#include "e4/classes/E4Recv_642E00_e4.hpp"
#include "e4/classes/E4Recv_642E40_e4.hpp"
#include "e4/classes/E4Recv_643670_e4.hpp"
#include "e4/classes/E4Recv_660BB0_e4.hpp"
#include "e4/classes/E4Recv_660BE0_e4.hpp"
#include "e4/classes/E4Recv_6A4F20_e4.hpp"
#include "e4/classes/E4Recv_791AA0_e4.hpp"
#include "e4/classes/E4Recv_7B7980_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x52B6D0
namespace gamemd {
int sub_52B6D0(int a1, int a2, int * a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x52b6d5*/
  if ( a2 <= 0 ) /*0x52b6d7*/
    return 0; /*0x52b709*/
  v4 = *a3; /*0x52b6dd*/
  while ( 1 ) /*0x52b6e6*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x52b6e6*/
    if ( v5 <= v4 ) /*0x52b6ee*/
      break; /*0x52b6ee*/
    v3 /= 2; /*0x52b6f0*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x52b702*/
      return 0; /*0x52b702*/
  }
  if ( v5 != v4 ) /*0x52b6f4*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x52b6f6*/
    v3 += -1 - v3 / 2; /*0x52b6fe*/
    goto LABEL_7; /*0x52b6fe*/
  }
  return a1 + 8 * (v3 / 2); /*0x52b704*/
}
}
// 0x53E720
namespace gamemd {
int sub_53E720()
{
  return dword_AA0444; /*0x53e725*/
}
}
// 0x60AF50
namespace gamemd {
int UI_Get(HWND hWnd, unsigned int * a2)
{
  HWND Parent; // ebp
  char GameSpeed; // bl
  int v6; // ebp
  int v7; // ecx
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60af67*/
  GameSpeed = ((SessionClass *)(dword_A8B238))->GetGameSpeed(); /*0x60af6e*/
  GetWindowRect(Parent, &Rect); /*0x60af76*/
  v6 = 0; /*0x60af7c*/
  if ( !GameSpeed )
    v6 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v7 = 0; /*0x60afb0*/
  if ( !GameSpeed )
    v7 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
  MoveWindow(hWnd, v6 + *a2, v7 + a2[1], a2[2], a2[3], 0); /*0x60afe4*/
  return InvalidateRect(hWnd, 0, 0); /*0x60aff5*/
}
}
// 0x622610
namespace gamemd {
int sub_622610()
{
  int result; // eax
  bool v2; // zf

  result = dword_AC48EC; /*0x622610*/
  v2 = dword_AC48EC == 0; /*0x622615*/
  if ( dword_AC48EC > 0 ) /*0x622617*/
  {
    result = dword_AC48EC - 1; /*0x622619*/
    dword_AC48EC = result; /*0x62261a*/
    v2 = result == 0; /*0x62261f*/
  }
  if ( v2 && stru_887598.lineTrailer ) /*0x62262b*/
  {
    if ( !(*(uint8_t (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer) ) /*0x62262f*/
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x62263e*/
    return dword_AC48EC; /*0x622641*/
  }
  return result; /*0x622646*/
}
}
// 0x647040
namespace gamemd {
char sub_647040()
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x647048*/
    return 0; /*0x647048*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647056*/
    return 0; /*0x647056*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647060*/
    return 0; /*0x647060*/
  v1 = (char *)(EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0xCu)); /*0x647074*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647083*/
    return 0; /*0x6470dc*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x6470a1*/
  (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x6470b4*/
  ++stru_A80220.lineTrailer; /*0x6470cb*/
  dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x6470d0*/
  return 1; /*0x6470d8*/
}
}
// 0x6470F0
namespace gamemd {
char sub_6470F0()
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x6470f8*/
    return 0; /*0x6470f8*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647106*/
    return 0; /*0x647106*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647110*/
    return 0; /*0x647110*/
  v1 = (char *)(EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0x22u)); /*0x647124*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647133*/
    return 0; /*0x64718c*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647151*/
  (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x647164*/
  ++stru_A80220.lineTrailer; /*0x64717b*/
  dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x647180*/
  return 1; /*0x647188*/
}
}
// 0x725070
namespace gamemd {
int sub_725070(int a1, int a2, unsigned int * a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi

  v3 = a2; /*0x725075*/
  if ( a2 <= 0 ) /*0x725077*/
    return 0; /*0x7250a9*/
  v4 = *a3; /*0x72507d*/
  while ( 1 ) /*0x725086*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x725086*/
    if ( v5 <= v4 ) /*0x72508e*/
      break; /*0x72508e*/
    v3 /= 2; /*0x725090*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x7250a2*/
      return 0; /*0x7250a2*/
  }
  if ( v5 != v4 ) /*0x725094*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x725096*/
    v3 += -1 - v3 / 2; /*0x72509e*/
    goto LABEL_7; /*0x72509e*/
  }
  return a1 + 8 * (v3 / 2); /*0x7250a4*/
}
}
// 0x6AC430
namespace gamemd {
int sub_6AC430()
{
  int v1; // eax
  unsigned int v2; // eax

  v1 = 26; /*0x6ac43b*/
  if ( ((unsigned int *)(dword_A8B230))[374].NeedsSaveOrLink ) /*0x6ac435*/
    v1 = 18; /*0x6ac444*/
  v2 = (int)((uint64_t)(1374389535LL /*0x6ac46c*/
                              * (g_DSurface_ViewBounds - g_SidebarBounds - v1 + g_DSurface_SidebarBounds - 7)) >> 32) >> 4;
  return 2 * ((v2 >> 31) + v2); /*0x6ac478*/
}
}
// 0x730EA0
namespace gamemd {
wchar_t * * sub_730EA0()
{
  wchar_t * result;
  unsigned int v1;
  int v2; // edi
  char v3; // bl
  unsigned char *v4; // esi

  result = (wchar_t *)(dword_A8ECC8);
  if ( (int)dword_A8ECC8 > 0 ) /*0x730eab*/
  {
    v1 = dword_A8ECC8; /*0x730ead*/
    v2 = 0; /*0x730eaf*/
    v3 = 1; /*0x730eb3*/
    while ( 1 ) /*0x730eb7*/
    {
      result = (wchar_t *)dword_A8ECBC; /*0x730eb7*/
      v4 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v2); /*0x730ebc*/
      if ( v4 ) /*0x730ec1*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x730ec7*/
        {
          if ( (*(uint8_t (**)(unsigned int))(*(unsigned int *)v4 + 160))(*((unsigned int *)dword_A8ECBC + v2)) /*0x730ee3*/
            || (result = (wchar_t *)(*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4), (unsigned char)result) )
          {
            result = (wchar_t *)(*(int (**)(unsigned char *, int))(*(unsigned int *)v4 + 884))(v4, 6); /*0x730eeb*/
            v3 = (char)result; /*0x730ef1*/
            if ( !(unsigned char)result ) /*0x730ef5*/
              break; /*0x730ef5*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x730efa*/
      {
        if ( v3 ) /*0x730efe*/
          return (wchar_t **)((wchar_t *)PlayVocClass(((unsigned int *)dword_8871E0)[3], 0x2000, 1.0, 0)); /*0x730f17*/
        return (wchar_t **)(result); /*0x730f17*/
      }
    }
  }
  return (wchar_t **)(result);
}
}
// 0x730F30
namespace gamemd {
void * sub_730F30()
{
  wchar_t *result; // eax
  char *v2; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  result = (wchar_t *)((unsigned int *)(dword_A8B538))[0]; /*0x730f30*/
  if ( !((unsigned int *)(dword_A8B538))[0] ) /*0x730f3a*/
  {
    result = *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x730f51*/
    if ( dword_84555C + *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1408) < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 416) ) /*0x730f5a*/
    {
      v2 = (char *)(EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0x2Du)); /*0x730f6c*/
      if ( (int)stru_A80220.lineTrailer < 128 ) /*0x730f7b*/
      {
        qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v2, 0x6Fu); /*0x730f99*/
        (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x730fac*/
        dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x730fc3*/
        ++stru_A80220.lineTrailer; /*0x730fc9*/
      }
      dword_84555C = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x730fd3*/
      return *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x730fce*/
    }
  }
  return result; /*0x730fd8*/
}
}
// 0x730FE0
namespace gamemd {
void * sub_730FE0()
{
  wchar_t * result;
  unsigned int v2;
  int v3; // edi
  char v4; // bl
  unsigned char *v5; // esi

  result = (wchar_t *)(dword_A8ECC8);
  if ( (int)dword_A8ECC8 > 0 ) /*0x730feb*/
  {
    v2 = dword_A8ECC8; /*0x730fed*/
    v3 = 0; /*0x730fef*/
    v4 = 1; /*0x730ff3*/
    while ( 1 ) /*0x730ff7*/
    {
      result = (wchar_t *)dword_A8ECBC; /*0x730ff7*/
      v5 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v3); /*0x730ffc*/
      if ( v5 ) /*0x731001*/
      {
        if ( (v5[20] & 1) != 0 ) /*0x731007*/
        {
          result = (wchar_t *)(*(int (**)(unsigned int))(*(unsigned int *)v5 + 160))(*((unsigned int *)dword_A8ECBC + v3)); /*0x73100d*/
          if ( (unsigned char)result ) /*0x731015*/
          {
            result = (wchar_t *)(*(int (**)(unsigned char *, int))(*(unsigned int *)v5 + 884))(v5, 7); /*0x73101d*/
            v4 = (char)result; /*0x731023*/
            if ( !(unsigned char)result ) /*0x731027*/
              break; /*0x731027*/
          }
        }
      }
      if ( ++v3 >= (int)v2 ) /*0x73102c*/
      {
        if ( v4 ) /*0x731030*/
          return (wchar_t *)PlayVocClass(*(unsigned int *)&dword_8871E0->__pad_704[36], 0x2000, 1.0, 0); /*0x73104a*/
        return result; /*0x73104a*/
      }
    }
  }
  return result; /*0x73104f*/
}
}
// 0x7318F0
namespace gamemd {
AbstractClass * * sub_7318F0()
{
  char *result; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  result = *(char **)(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x7318f0*/
  if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 228) ) /*0x7318fa*/
  {
    result = (char *)dword_A83D4C; /*0x731900*/
    if ( !dword_A83D4C->__pad_140[181] ) /*0x731905*/
    {
      result = (char *)(*(int (**)(unsigned int))(***(unsigned int ***)(unsigned int *)((char *)&stru_A8EB00 + 216) + 60))(**(unsigned int **)&(unsigned int *)((char *)&stru_A8EB00 + 216)); /*0x73191d*/
      if ( result != (char *)dword_A83D4C ) /*0x731926*/
      {
        result = (char *)(*(int (**)(unsigned int))(***(unsigned int ***)(unsigned int *)((char *)&stru_A8EB00 + 216) + 60))(**(unsigned int **)&(unsigned int *)((char *)&stru_A8EB00 + 216)); /*0x731935*/
        if ( result[492] ) /*0x731938*/
        {
          result = (char *)(*(int (**)(unsigned int))(***(unsigned int ***)(unsigned int *)((char *)&stru_A8EB00 + 216) + 56))(**(unsigned int **)&(unsigned int *)((char *)&stru_A8EB00 + 216)); /*0x73194f*/
          if ( *(unsigned int *)&dword_A8B238 ) /*0x73195a*/
          {
            if ( ((int)dword_A8B230->vtable1 & 0x400) == 0 /*0x731981*/
              && *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5301)
              && *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5307) )
            {
              result = (char *)(EventClass::Add2(v2, (int)dword_A83D4C->Object_field_0x30, 3u, (int)result));
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x7319ab*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, result, 0x6Fu); /*0x7319c9*/
                (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x7319dc*/
                result = (char *)stru_A80220.lineTrailer + 1; /*0x7319f2*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x7319f3*/
                ++stru_A80220.lineTrailer; /*0x7319f9*/
              }
            }
          }
        }
      }
    }
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x6D0E60
namespace gamemd {
void sub_6D0E60()
{
  int v1; // esi
  int *v2; // eax
  int v3[2]; // [esp+4h] [ebp-18h] BYREF
  unsigned char v4[16]; // [esp+Ch] [ebp-10h] BYREF

  v1 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[856]; /*0x6d0e73*/
  v3[0] = 0; /*0x6d0e7b*/
  v3[1] = 0; /*0x6d0e7f*/
  v2 = (int *)(*((int (**)(DSurface *, unsigned char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6d0e91*/
                DSurface_Sidebar,
                v4);
  DrawToSurfaceSHP( /*0x6d0ea9*/
    (int)DSurface_Sidebar,
    *(int *)&stru_87F5F0.__pad_58[132],
    v1,
    0,
    v3,
    v2,
    0,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  g_TooltipActive = 1; /*0x6d0eae*/
}
}
// 0x60B1D0
namespace gamemd {
int UI_Get_60B1D0(HWND hWnd, HWND a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v6; // edi
  LONG top; // esi
  int v8; // ebx
  HWND *v9; // eax
  int v10; // eax
  unsigned int *v12; // eax
  HWND v13; // [esp+10h] [ebp-2Ch] BYREF
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v17; // [esp+2Ch] [ebp-10h] BYREF

  v13 = a2; /*0x60b1d9*/
  Parent = GetParent(hWnd); /*0x60b1e9*/
  GameSpeed = ((SessionClass *)(dword_A8B238))->GetGameSpeed(); /*0x60b1f0*/
  GetWindowRect(Parent, &Rect); /*0x60b1fe*/
  GetWindowRect(hWnd, &v17); /*0x60b206*/
  right = Rect.right; /*0x60b20a*/
  v15 = 0; /*0x60b214*/
  if ( !GameSpeed )
    v15 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v14 = 0; /*0x60b244*/
  if ( !GameSpeed )
    v14 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
        - ((*((unsigned int *)v13 + 1) - 600) / 2 < 0 ? 0 : (*((unsigned int *)v13 + 1) - 600) / 2);
  v6 = v17.right - v17.left; /*0x60b296*/
  top = v17.top; /*0x60b298*/
  v8 = v17.bottom - v17.top; /*0x60b29c*/
  v13 = hWnd; /*0x60b29e*/
  if ( dword_AC1B04 ) /*0x60b2a4*/
  {
    v9 = (HWND *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v13) & ((1 << dword_AC1B0C) - 1))); /*0x60b2c5*/
    if ( v9 ) /*0x60b2ca*/
    {
      while ( *v9 != v13 ) /*0x60b2d2*/
      {
        v9 = (HWND *)v9[129]; /*0x60b2d4*/
        if ( !v9 ) /*0x60b2dc*/
          goto LABEL_9; /*0x60b2dc*/
      }
      v12 = (unsigned int *)(v9 + 1);
      if ( v12 ) /*0x60b32c*/
      {
        v10 = v12[55]; /*0x60b32e*/
        if ( v10 ) /*0x60b336*/
        {
          right = Rect.right; /*0x60b338*/
          top = v17.top; /*0x60b33c*/
          return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b340*/
        }
      }
    }
  LABEL_9:
    right = Rect.right; /*0x60b2de*/
    top = v17.top; /*0x60b2e2*/
  }
  v10 = (168 - v6) / 2; /*0x60b2f0*/
  return MoveWindow(hWnd, right - v10 - v6 - v15 - Rect.left, v14 + top - Rect.top, v6, v8, 0); /*0x60b31b*/
}
}
// 0x602B90
namespace gamemd {
bool UI_Helper_602B90(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602b9c*/
  if ( !dword_AC1B04 ) /*0x602ba0*/
    goto LABEL_5; /*0x602ba0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x602bc1*/
  if ( !v3 ) /*0x602bc6*/
    goto LABEL_5; /*0x602bc6*/
  while ( *v3 != v8 ) /*0x602bce*/
  {
    v3 = (unsigned int *)v3[129]; /*0x602bd4*/
    if ( !v3 ) /*0x602bdc*/
      goto LABEL_5; /*0x602bdc*/
  }
  v7 = v3 + 1; /*0x602d4f*/
  if ( v7 ) /*0x602d54*/
    v4 = v7[27]; /*0x602d5a*/
  else
  LABEL_5:
    v4 = 0; /*0x602bde*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602be1*/
  return (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 3014) /*0x602d41*/
      && (DlgCtrlID == 1746
       || DlgCtrlID == 1747
       || DlgCtrlID == 1748
       || DlgCtrlID == 1749
       || DlgCtrlID == 1750
       || DlgCtrlID == 1751
       || DlgCtrlID == 1752
       || DlgCtrlID == 1753)
      || (v4 == 258 || v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1754
       || DlgCtrlID == 1755
       || DlgCtrlID == 1756
       || DlgCtrlID == 1757
       || DlgCtrlID == 1758
       || DlgCtrlID == 1759
       || DlgCtrlID == 1760
       || DlgCtrlID == 1761)
      || (v4 == 194 || v4 == 201)
      && (DlgCtrlID == 1876
       || DlgCtrlID == 1877
       || DlgCtrlID == 1878
       || DlgCtrlID == 1879
       || DlgCtrlID == 1880
       || DlgCtrlID == 1881
       || DlgCtrlID == 1882
       || DlgCtrlID == 1883)
      || v4 == 3014 && (DlgCtrlID == 1919 || DlgCtrlID == 1755);
}
}
// 0x603240
namespace gamemd {
int UI_Helper_603240(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60324c*/
  if ( !dword_AC1B04 ) /*0x603250*/
    goto LABEL_5; /*0x603250*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v8) & ((1 << dword_AC1B0C) - 1))); /*0x603271*/
  if ( !v3 ) /*0x603276*/
    goto LABEL_5; /*0x603276*/
  while ( *v3 != v8 ) /*0x60327e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x603284*/
    if ( !v3 ) /*0x60328c*/
      goto LABEL_5; /*0x60328c*/
  }
  v7 = v3 + 1; /*0x6033d7*/
  if ( v7 ) /*0x6033dc*/
    v4 = v7[27]; /*0x6033e2*/
  else
  LABEL_5:
    v4 = 0; /*0x60328e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603291*/
  return (v4 == 148 /*0x6033c6*/
       || v4 == 216
       || v4 == 245
       || v4 == 226
       || v4 == 213
       || v4 == 257
       || v4 == 297
       || v4 == 215
       || v4 == 187
       || v4 == 256
       || v4 == 214
       || v4 == 293
       || v4 == 290
       || v4 == 274
       || v4 == 231
       || v4 == 278
       || v4 == 285
       || v4 == 284
       || v4 == 254
       || v4 == 271
       || v4 == 279
       || v4 == 276
       || v4 == 230
       || v4 == 243
       || v4 == 244
       || v4 == 700
       || v4 == 270
       || v4 == 264
       || v4 == 3014
       || v4 == 3015)
      && DlgCtrlID == 1820;
}
}
// 0x60D2C0
namespace gamemd {
unsigned int * sub_60D2C0(int a1, int a2)
{
  unsigned int *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (unsigned int *)dword_AC1B04; /*0x60d2c1*/
  v4 = a1; /*0x60d2cb*/
  if ( dword_AC1B04 ) /*0x60d2cf*/
  {
    result = (unsigned int *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v4) & ((1 << dword_AC1B0C) - 1))); /*0x60d2f0*/
    if ( result ) /*0x60d2f5*/
    {
      while ( *result != v4 ) /*0x60d2fd*/
      {
        result = (unsigned int *)result[129]; /*0x60d2ff*/
        if ( !result ) /*0x60d307*/
          return result; /*0x60d307*/
      }
      if ( ++result ) /*0x60d315*/
        result[27] = a2; /*0x60d317*/
    }
  }
  return result; /*0x60d309*/
}
}
// 0x6217E0
namespace gamemd {
void UI_Helper_6217E0(ObjectClass * aP0, ObjectClass * aP1, short a3, int a4)
{
  unsigned int *v4; // esi
  ObjectClass * v5;
  int v6; // ebx
  int16_t v7; // di
  int v8; // ecx
  int v9; // eax
  unsigned short *v10; // ecx
  int v11; // eax
  uint8_t v12; // al
  int16_t v13; // si
  unsigned int v14; // ebp
  int16_t v15; // di
  unsigned int * v16;
  unsigned int * v17;
  bool v18; // zf
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  unsigned short *v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  int v28; // [esp+38h] [ebp+8h]

  v4 = (unsigned int *)(aP0);
  v5 = aP1; /*0x6217ec*/
  v6 = (aP0[2] * a4) >> 16; /*0x6217fa*/
  v19 = 1; /*0x6217fd*/
  v20 = v6; /*0x621805*/
  if ( v6 >= 0 ) /*0x621809*/
  {
    if ( !v6 ) /*0x621811*/
    {
      v6 = 1; /*0x621813*/
      v20 = 1; /*0x621818*/
    }
    v24 = (*(int (**)(int, unsigned int, unsigned int))(aP1->q05C)(aP1, 0, 0); /*0x62182c*/
    if ( v24 ) /*0x621830*/
    {
      v28 = 0; /*0x621839*/
      if ( (int)v4[3] > 0 ) /*0x621843*/
      {
        v7 = a3; /*0x62184a*/
        do /*0x6219b1*/
        {
          v8 = *v4 + (v28 + v4[1]) * ((*(int (**)(int))(v5->isOnMap)(v5) / 2); /*0x62186b*/
          v9 = v4[3] / 4; /*0x621876*/
          if ( v28 == 3 * v9 ) /*0x621880*/
            v19 = 1; /*0x621882*/
          if ( v28 == v9 ) /*0x62188e*/
            v19 = 0; /*0x621890*/
          if ( v6 > 0 ) /*0x62189a*/
          {
            v23 = v6; /*0x6218a4*/
            v10 = (unsigned short *)(v24 + 2 * v8); /*0x6218a8*/
            v11 = 255; /*0x6218ab*/
            v21 = v10; /*0x6218b0*/
            v22 = 255; /*0x6218b4*/
            do /*0x62199d*/
            {
              if ( v19 ) /*0x6218be*/
              {
                v12 = v11 / v4[2]; /*0x6218c5*/
                v13 = *v10; /*0x6218d8*/
                v7 = v7; /*0x6218e7*/
                v12 = v12; /*0x6218fc*/
                g_GameScreenConfig = 255 - v12; /*0x621908*/
                v14 = g_ScreenSaverState /*0x62192d*/
                    & ((g_GameScreenConfig * (uint16_t)(v13 & g_ScreenSaverState)
                      + v12 * (unsigned int)(uint16_t)(v7 & g_ScreenSaverState)) >> 8);
                v15 = IDA_HIWORD(g_ScreenSaverState) /*0x621946*/
                    & ((g_GameScreenConfig * (uint16_t)(IDA_HIWORD(g_ScreenSaverState) & v13)
                      + v12 * (unsigned int)(uint16_t)(IDA_HIWORD(g_ScreenSaverState) & v7)) >> 8);
                v16 = (unsigned int *)((int)((unsigned int *)(g_GameScreenConfig * (uint16_t)(v13 & g_CreditsScreenState))));
                v4 = (unsigned int *)(aP0);
                v6 = (unsigned int)(v20);
                v17 = v16 + v12 * (uint16_t)(v7 & g_CreditsScreenState); /*0x621963*/
                v10 = v21; /*0x621965*/
                IDA_LOWORD(v14) = v15 | v14; /*0x621969*/
                v7 = a3; /*0x62196b*/
                *v21 = ((unsigned int)(v17)>> 8) | v14; /*0x621974*/
                v5 = aP1; /*0x621977*/
              }
              else
              {
                *v10 = v7; /*0x62197d*/
              }
              ++v10; /*0x621988*/
              v11 = v22 + 255; /*0x62198b*/
              v18 = v23 == 1; /*0x621990*/
              v21 = v10; /*0x621991*/
              v22 += 255; /*0x621995*/
              --v23; /*0x621999*/
            }
            while ( !v18 ); /*0x62199d*/
          }
          ++v28; /*0x6219ad*/
        }
        while ( v28 < v4[3] ); /*0x6219b1*/
      }
      (*(void (**)(int))(v5->q060)(v5); /*0x6219bd*/
    }
  }
}
}
// 0x6D0FD0
namespace gamemd {
int sub_6D0FD0()
{
  int *v0; // esi
  int v1; // edi
  int v2; // ebp
  unsigned int v3; // eax
  char *v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  int v9; // ecx
  int result; // eax
  int *v11; // edx
  int v12; // eax
  char *v13; // eax

  v0 = (int *)&stru_B0C1C0; /*0x6d0fd4*/
  do /*0x6d0fef*/
  {
    ((ShapeButton *)((int)v0))->SetShape(0, 0, 0); /*0x6d0fe1*/
    v0 += 24; /*0x6d0fe6*/
  }
  while ( (int)v0 < (int)&dword_B0CB20 ); /*0x6d0fef*/
  v1 = 0; /*0x6d0ffc*/
  v2 = *((unsigned int *)dword_B0FC64 + 2) + *(unsigned int *)dword_B0FC64; /*0x6d100b*/
  do /*0x6d10a6*/
  {
    v3 = ((unsigned int *)(g_ObjectTrackingPool))[v1]; /*0x6d1012*/
    if ( v3 <= 0x18 ) /*0x6d101b*/
    {
      v4 = (char *)&stru_B0C1C0 + 96 * v3; /*0x6d102c*/
      if ( v4 ) /*0x6d1034*/
      {
        v5 = *(unsigned int *)dword_B0FC68 + dword_B0CC38 * v3; /*0x6d1045*/
        v6 = dword_B0CC24; /*0x6d1047*/
        if ( v5 + *((unsigned int *)dword_B0FC68 + 2) <= v2 ) /*0x6d1062*/
        {
          *((unsigned int *)v4 + 9) = v1 + 214; /*0x6d106c*/
          *((unsigned int *)v4 + 20) = dword_87F6CC; /*0x6d1075*/
          v4[45] = 0; /*0x6d1078*/
          *((unsigned int *)v4 + 12) = 0; /*0x6d107b*/
          *((unsigned int *)v4 + 8) = 5; /*0x6d107e*/
          (*(void (**)(char *, int, int))(*(unsigned int *)v4 + 100))(v4, v5, v6); /*0x6d108b*/
          (*(void (**)(char *, int, unsigned int, unsigned int))(*(unsigned int *)v4 + 136))(v4, ((unsigned int *)(dword_B0C148))[v1], 0, 0); /*0x6d109c*/
        }
      }
    }
    ++v1; /*0x6d10a2*/
  }
  while ( v1 < 25 ); /*0x6d10a6*/
  v7 = (&g_ObjectTrackingPool)[dword_B0CC1C]; /*0x6d10b5*/
  if ( v7 <= 0x18 ) /*0x6d10be*/
  {
    v8 = (char *)&stru_B0C1C0 + 96 * v7; /*0x6d10cb*/
    if ( v8 ) /*0x6d10d2*/
    {
      *((unsigned int *)v8 + 12) = 1; /*0x6d10d9*/
      v8[64] = 1; /*0x6d10dc*/
    }
  }
  v9 = dword_B0CC20; /*0x6d10df*/
  result = dword_B0CD28; /*0x6d10e5*/
  if ( dword_B0CC20 <= dword_B0CD28 ) /*0x6d10ec*/
  {
    v11 = (int *)(4 * dword_B0CC20 + 11586424); /*0x6d10ee*/
    do /*0x6d1122*/
    {
      v12 = *v11; /*0x6d10fa*/
      if ( *v11 >= 0 && v12 < 25 ) /*0x6d1103*/
      {
        v13 = (char *)&stru_B0C1C0 + 96 * v12; /*0x6d110b*/
        if ( v13 ) /*0x6d1112*/
          *((unsigned int *)v13 + 8) = 85; /*0x6d1114*/
      }
      result = dword_B0CD28; /*0x6d1117*/
      ++v9; /*0x6d111c*/
      ++v11; /*0x6d111d*/
    }
    while ( v9 <= dword_B0CD28 ); /*0x6d1122*/
  }
  return result; /*0x6d1124*/
}
}
// 0x639DA0
namespace gamemd {
int sub_639DA0()
{
  unsigned int v0;
  int v1; // edi
  unsigned char *v2; // esi

  v0 = dword_A8ECC8; /*0x639da2*/
  v1 = 0; /*0x639dae*/
  if ( (int)dword_A8ECC8 <= 0 ) /*0x639db2*/
    return -1; /*0x639e1b*/
  while ( 1 ) /*0x639db9*/
  {
    v2 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v1); /*0x639db9*/
    if ( !v2 || (v2[20] & 1) == 0 ) /*0x639dca*/
      break; /*0x639dca*/
    if ( !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v2 + 1212))(v2) ) /*0x639dd8*/
    {
      if ( (*(int (**)(unsigned char *))(*(unsigned int *)v2 + 44))(v2) == 2 ) /*0x639def*/
        return 0; /*0x639df8*/
      if ( (*(int (**)(unsigned char *))(*(unsigned int *)v2 + 44))(v2) == 6 ) /*0x639e03*/
        return 1; /*0x639e0f*/
      return 2; /*0x639e03*/
    }
    if ( ++v1 >= (int)v0 ) /*0x639ddd*/
      return -1; /*0x639ddd*/
  }
  return 2; /*0x639df1*/
}
}
// 0x5EBDD0
namespace gamemd {
void UI_Setup_5EBDD0(SkirmishDialog * aP0, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( dword_A8B23C
    && !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->vtable1 + 16))(dword_A8B23C)
    && !Network::IsMultiplayerActive() )
  {
    if ( *(unsigned int *)&dword_A8B238 == 4 )
      v6 = !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ? 6 : 2;
    else
      v6 = 8; /*0x5ebe1b*/
    if ( (int)a2 > v6 ) /*0x5ebe22*/
      a2 = (int)((ObjectClass *)v6); /*0x5ebe24*/
  }
  if ( a4 && !(*(uint8_t (**)(int))(*(unsigned int *)a4 + 64))(a4) || Network::IsMultiplayerActive() ) /*0x5ebe37*/
  {
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ebe47*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebe52*/
        v7 = 6; /*0x5ebe62*/
      else
        v7 = 2; /*0x5ebe5b*/
    }
    else
    {
      v7 = 8; /*0x5ebe69*/
    }
    v8 = a3; /*0x5ebe6e*/
    if ( a3 > v7 ) /*0x5ebe74*/
      v8 = v7; /*0x5ebe76*/
  }
  else
  {
    v8 = a3; /*0x5ebe7a*/
  }
  if ( v8 - (int)a2 <= 0 ) /*0x5ebe84*/
  {
    if ( v8 - (int)a2 < 0 ) /*0x5ebe9c*/
      DisableCampaignSlots((HWND)aP0, v8); /*0x5ebea0*/
    Lobby::SetupPlayerWidgets(aP0); /*0x5ebea7*/
  }
  else
  {
    UpdateMultiplayerLobbySlots((HWND)aP0,(gamemd::ObjectClass *)(a2), v8 - (unsigned int)a2); /*0x5ebe8b*/
    Lobby::SetupPlayerWidgets(aP0); /*0x5ebe92*/
  }
}
}
// 0x793930
namespace gamemd {
void * UI_Setup_793930(void * a1, void * a2, int a3)
{
  int v5; // edi
  char **v6; // esi
  char *v7; // eax
  char *v8; // eax
  unsigned int *result; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = -1; /*0x793938*/
  v12 = -1; /*0x79393c*/
  Debug::Log(); /*0x793952*/
  v5 = 0; /*0x79395a*/
  v6 = (char **)&dword_A8DA90; /*0x79395c*/
  do /*0x79399d*/
  {
    v7 = ToWideStringChar((IUnknown *)(*v6)); /*0x793964*/
    if ( !_strcmpi(v7,(const char *)(a1)) ) /*0x79396a*/
      v13 = v5; /*0x793976*/
    v8 = ToWideStringChar((IUnknown *)(*v6)); /*0x79397d*/
    result = (unsigned int *)_strcmpi(v8,(const char *)(a2)); /*0x793983*/
    if ( !result ) /*0x79398d*/
      v12 = v5; /*0x79398f*/
    ++v6; /*0x793993*/
    ++v5; /*0x793996*/
  }
  while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x79399d*/
  v10 = 0; /*0x7939a5*/
  if ( dword_A8E04C > 0 ) /*0x7939a9*/
  {
    result = (unsigned int *)(&unk_A8DC50);
    while ( 1 ) /*0x7939b0*/
    {
      v11 = *(result - 1); /*0x7939b0*/
      if ( v11 == v13 && *result == v12 ) /*0x7939c3*/
      {
        (&dword_A8DE4C)[2 * v10] = a3; /*0x7939e8*/
        return result; /*0x7939f3*/
      }
      if ( v11 == v12 && *result == v13 ) /*0x7939cd*/
        break; /*0x7939cd*/
      ++v10; /*0x7939cf*/
      result += 2; /*0x7939d0*/
      if ( v10 >= dword_A8E04C ) /*0x7939d5*/
        return result; /*0x7939d5*/
    }
    (&dword_A8DE50)[2 * v10] = a3; /*0x7939fa*/
    return (unsigned int *)a3; /*0x7939f6*/
  }
  return result; /*0x7939d7*/
}
}
// 0x53BAE0
namespace gamemd {
bool sub_53BAE0()
{
  return ChronoScreenEffect_Status != 0; /*0x53baed*/
}
} // namespace gamemd

// 0x5E2340
namespace gamemd {
HWND sub_5E2340()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  HWND result; // eax
  wchar_t *StringCSF; // eax

  Current = (HWND)(Dialog::GetCurrent()); /*0x5e2341*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e2354*/
  result = (HWND)SendMultiplayerStartSignal_Start(0); /*0x5e2356*/
  if ( result != (HWND)1 ) /*0x5e235e*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x5e236a*/
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_netdlg2_cpp, 5300); /*0x5e2381*/
// 0x5e2700
    return Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x5e2389*/
  }
  return result; /*0x5e2391*/
}
} // namespace gamemd

// 0x5E29A0
namespace gamemd {
LRESULT UI_Draw(HWND hWnd, wchar_t *Source, size_t Count, LPARAM lParam)
{
  wchar_t *v5; // eax
  LRESULT v6; // ebx
  LRESULT v7; // ebp
  bool v8; // bl
  LRESULT v9; // eax
  LRESULT v11; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF
  signed int Counta; // [esp+28h] [ebp+4h]

  memset(&word_AC029C, 0, 0x400u); /*0x5e29b5*/
  wcsncpy((wchar_t *)(&word_AC029C), Source, Count); /*0x5e29c2*/
  v5 = (wchar_t *)(wcschr(&word_AC029C, 0xDu)); /*0x5e29ce*/
  if ( v5 || (v5 = wcschr(&word_AC029C, 0xAu)) != 0 ) /*0x5e29eb*/
    *v5 = 0; /*0x5e29ed*/
  v11 = SendMessageA(hWnd, 0x49Du, 0, 1); /*0x5e2a0e*/
  v6 = SendMessageA(hWnd, 0x18Eu, 0, 0); /*0x5e2a14*/
  v7 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e2a22*/
  Counta = SendMessageA(hWnd, 0x1A1u, v6, 0); /*0x5e2a35*/
  GetWindowRect(hWnd, &Rect); /*0x5e2a39*/
  v8 = v7 - v6 <= (Rect.bottom - Rect.top) / Counta; /*0x5e2a54*/
  if ( v7 > 500 ) /*0x5e2a5d*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x5e2a69*/
    --v7; /*0x5e2a6b*/
  }
  v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)&word_AC029C); /*0x5e2a79*/
  if ( lParam != -1 ) /*0x5e2a82*/
    SendMessageA(hWnd, 0x498u, v9, lParam); /*0x5e2a8c*/
  if ( v8 ) /*0x5e2a90*/
    SendMessageA(hWnd, 0x197u, v7, 0); /*0x5e2a9b*/
  return SendMessageA(hWnd, 0x49Du, 0, v11); /*0x5e2aac*/
}
} // namespace gamemd

// 0x603F00
namespace gamemd {
wchar_t ** UI_Assign(wchar_t ** a1, HWND a2, LPARAM, LPARAM)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v8; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v8); /*0x603f0d*/
  lParam[0] = a3; /*0x603f1e*/
  lParam[1] = a4; /*0x603f2b*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f2f*/
  ((WideString *)((WideString *)a1))->AssignFromPtr((const wchar_t **)&v8); /*0x603f3c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x603f45*/
  return a1; /*0x603f4c*/
}
} // namespace gamemd

// 0x623170
namespace gamemd {
bool UI_Connect(HWND hWnd, LONG, LONG)
{
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-20h] BYREF
  struct tagPOINT Point; // [esp+1Ch] [ebp-10h] BYREF
  struct tagPOINT v10; // [esp+24h] [ebp-8h] BYREF

  v10 = *(struct tagPOINT *)&g_DisplayWidth; /*0x623185*/
  Point.x = 0; /*0x623198*/
  Point.y = 0; /*0x6231a2*/
  ClientToScreen((HWND)(g_hWnd), &Point); /*0x6231ae*/
  ClientToScreen((HWND)(g_hWnd), &v10); /*0x6231bc*/
  GetWindowRect(hWnd, &Rect); /*0x6231c4*/
  Rect.right -= Rect.left; /*0x6231d8*/
  Rect.bottom -= Rect.top; /*0x6231e5*/
  if ( a2 == -1 ) /*0x6231e9*/
    v5 = Rect.left - Point.x; /*0x6231eb*/
  else
    v5 = a2; /*0x6231f1*/
  Rect.left = v5; /*0x6231f7*/
  if ( a3 == -1 ) /*0x6231fe*/
    v6 = Rect.top - Point.y; /*0x623200*/
  else
    v6 = a3; /*0x623206*/
  Rect.top = v6; /*0x623217*/
  return MoveWindow(hWnd, v5, v6, Rect.right, Rect.bottom, 0); /*0x623221*/
}
} // namespace gamemd

// 0x623F60
namespace gamemd {
LRESULT UI_Assign_623F60(HWND hWnd, WPARAM wParam, void ** a3)
{
  LRESULT v5; // esi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x18Au, wParam, 0); /*0x623f79*/
  if ( v5 <= 0 ) /*0x623f7d*/
    ((SafeDelete *)(a3))->Ptr(); /*0x623f83*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5 + 4); /*0x623f95*/
  v7 = SendMessageA(hWnd, 0x4B6u, wParam, (LPARAM)v6); /*0x623fa1*/
  ((WideString *)(a3))->Assign_Alt(v6); /*0x623fa8*/
  RA2_OPDEL(v6); /*0x623fae*/
  return v7; /*0x623fb8*/
}
} // namespace gamemd

// 0x6379C0
namespace gamemd {
char sub_6379C0()
{
  char result; // al

  result = byte_AC4CF4; /*0x6379c0*/
  if ( !byte_AC4CF4 ) /*0x6379c7*/
  {
    byte_AC4CF4 = 1; /*0x6379ce*/
    result = PlayVocClass(g_RulesClass_Instance->BombTickingSound, 0x2000, 1.0, 0); /*0x6379e7*/
    if ( dword_AC4B80 ) /*0x6379f4*/
      return (**(int (***)(int, int, unsigned int))dword_AC4B80)(dword_AC4B80, 4551, 0); /*0x6379ff*/
  }
  return result; /*0x637a01*/
}
} // namespace gamemd

// 0x63A120
namespace gamemd {
int sub_63A120(char a1, char a2)
{
  int v2; // esi
  int result; // eax
  wchar_t *v4; // ecx
  wchar_t *StringCSF; // eax

  if ( a2 ) /*0x63a123*/
    v2 = a1 == 0; /*0x63a12c*/
  else
    v2 = 2; /*0x63a130*/
  if ( a1 ) /*0x63a137*/
    result = (&dword_AC4BF4)[v2] + 1; /*0x63a140*/
  else
    result = 1; /*0x63a143*/
  if ( (&dword_AC4BF4)[v2] < result ) /*0x63a153*/
  {
    if ( a2 ) /*0x63a157*/
    {
      if ( a1 ) /*0x63a165*/
        v4 = (wchar_t *)aMsgPlanningmod_9; /*0x63a169*/
      else
        v4 = (wchar_t *)aMsgPlanningmod_10; /*0x63a172*/
    }
    else
    {
      v4 = aMsgPlanningmod_11; /*0x63a185*/
    }
    StringCSF = GetStringCSF(v4, 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233); /*0x63a18a*/
    result = AddMessageListPlayerMessage(StringCSF, 480); /*0x63a196*/
    ++(&dword_AC4BF4)[v2]; /*0x63a19b*/
  }
  return result; /*0x63a1a2*/
}
} // namespace gamemd

// 0x63AAC0
namespace gamemd {
char UI_Handle(MouseClass * aP0, int a2)
{
  char result; // al

  dword_AC4C68 = -1; /*0x63aac6*/
  result = byte_AC4CF4; /*0x63aacb*/
  byte_AC4CB0 = 1; /*0x63aad2*/
  dword_AC4C6C = -1; /*0x63aad9*/
  if ( byte_AC4CF4 ) /*0x63aadf*/
  {
    result = (char)dword_A8ECC8; /*0x63aae1*/
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63aae8*/
    {
      dword_AC4C68 = (unsigned int)(aP0); /*0x63aaf2*/
      dword_AC4C6C = a2; /*0x63aaf7*/
      return (char)(aP0); /*0x63aaea*/
    }
  }
  return result; /*0x63aafd*/
}
} // namespace gamemd

// 0x63AB00
namespace gamemd {
char sub_63AB00(int a1, int a2)
{
  int v2; // eax

  IDA_LOBYTE(v2) = byte_AC4CF4; /*0x63ab00*/
  byte_AC4CB0 = 0; /*0x63ab09*/
  if ( byte_AC4CF4 ) /*0x63ab0f*/
  {
    if ( (int)dword_A8ECC8 <= 0 ) /*0x63ab17*/
    {
      if ( dword_AC4BF0 ) /*0x63ab1f*/
      {
        v2 = abs32(a1 - dword_AC4C68); /*0x63ab30*/
        if ( v2 <= 3 ) /*0x63ab35*/
        {
          v2 = abs32(a2 - dword_AC4C6C); /*0x63ab46*/
          if ( v2 <= 3 ) /*0x63ab4b*/
            dword_AC4BF0 = 0; /*0x63ab4d*/
        }
      }
    }
  }
  return v2; /*0x63ab53*/
}
} // namespace gamemd

// 0x63AC60
namespace gamemd {
IUnknown * UI_Delete_Delete_63AC60()
{
  return (IUnknown *)(dword_AC4BF0); /*0x63ac65*/
}
} // namespace gamemd

// 0x642E00
namespace gamemd {
unsigned int * E4Recv_642E00::UI_Render(unsigned int *a1, unsigned int *a2)
{

  unsigned int *FoundationSize; // eax
  int v3; // ecx
  unsigned int v5[4]; // [esp+10h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v5, 0); /*0x642e0d*/
  v3 = FoundationSize[3]; /*0x642e2b*/
  *a1 = FoundationSize[2] + 6; /*0x642e2e*/
  *a2 = v3 + 6; /*0x642e37*/
  return a2; /*0x642e39*/

}
} // namespace gamemd

// 0x642E40
namespace gamemd {
int E4Recv_642E40::UI_Render_642E40(unsigned int *a1, int *a2)
{

  int Default; // eax
  int v3; // esi
  int result; // eax

  Default = BuildingType::FindDefault(0); /*0x642e43*/
  v3 = Default; /*0x642e48*/
  if ( Default ) /*0x642e4c*/
  {
    *a1 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x642e69*/
    result = (*(int (**)(int))(*(unsigned int *)v3 + 128))(v3); /*0x642e6f*/
    *a2 = result; /*0x642e7a*/
  }
  else
  {
    *a1 = 0; /*0x642e56*/
    *a2 = 0; /*0x642e58*/
    return (int)a1; /*0x642e4e*/
  }
  return result; /*0x642e5a*/

}
} // namespace gamemd

// 0x642E80
namespace gamemd {
int sub_642E80(int * a1, unsigned int * a2)
{
  int Instance; // ebx
  unsigned short *v4; // esi
  int v5; // edi
  int result; // eax
  unsigned char v8[30]; // [esp+14h] [ebp-20h] BYREF
  int16_t v9; // [esp+32h] [ebp-2h]

  Instance = TextRenderer::GetInstance(); /*0x642e97*/
  v4 = (unsigned short *)(v8); /*0x642e99*/
  v5 = 15; /*0x642e9d*/
  do /*0x642eb6*/
  {
    *v4++ = *(unsigned short *)CharToWideString((unsigned char *)(g_Str_W)); /*0x642eaf*/
    --v5; /*0x642eb5*/
  }
  while ( v5 ); /*0x642eb6*/
  v9 = 0; /*0x642ec1*/
  *a1 = Text::MeasureWidth((int)v8, 0); /*0x642ed3*/
  result = *(unsigned int *)(Instance + 28); /*0x642ed5*/
  *a2 = result; /*0x642ed8*/
  return result; /*0x642ed1*/
}
} // namespace gamemd

// 0x643670
namespace gamemd {
int * E4Recv_643670::UI_Render_643670(int a5, int a1, size_t a2, int a3, int a4)
{

  int Instance; // ebx
  unsigned short *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-38h] BYREF
  unsigned int v12[4]; // [esp+14h] [ebp-30h] BYREF
  unsigned char v13[30]; // [esp+24h] [ebp-20h] BYREF
  int16_t v14; // [esp+42h] [ebp-2h]

  Instance = TextRenderer::GetInstance(); /*0x643680*/
  v6 = (unsigned short *)(v13); /*0x643682*/
  v7 = 15; /*0x643686*/
  do /*0x64369f*/
  {
    *v6++ = *(unsigned short *)CharToWideString((unsigned char *)(g_Str_W)); /*0x643698*/
    --v7; /*0x64369e*/
  }
  while ( v7 ); /*0x64369f*/
  v14 = 0; /*0x6436ab*/
  v8 = Text::MeasureWidth((int)v13, 0); /*0x6436b0*/
  v9 = *(unsigned int *)(Instance + 28); /*0x6436b9*/
  if ( a5 != -1 ) /*0x6436bf*/
    v8 = a5; /*0x6436c1*/
  v12[2] = v8 + a1; /*0x6436d5*/
  v12[3] = v9 + a2; /*0x6436d9*/
  v12[0] = 0; /*0x6436fa*/
  v12[1] = 0; /*0x6436fe*/
  return TextRenderer::DrawText(&v11, a3, g_DSurface_Hidden, v12, (int)&a1, a4, 0, 25); /*0x64370a*/

}
} // namespace gamemd

// 0x6AC480
namespace gamemd {
void sub_6AC480(int a1, int * a2, unsigned int * a3, int a4)
{
  char result; // al
  int v5; // ebx
  int v6; // edi
  int BuildingAnimByName; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  unsigned short *v13; // ebp
  unsigned char v14[4]; // [esp+0h] [ebp-30h] BYREF
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h] BYREF
  int v17; // [esp+Ch] [ebp-24h] BYREF
  int16_t v18; // [esp+10h] [ebp-20h]
  uint8_t v19; // [esp+12h] [ebp-1Eh]
  int v20; // [esp+18h] [ebp-18h]
  unsigned int v21[4]; // [esp+20h] [ebp-10h] BYREF

  result = byte_884B8C; /*0x6ac483*/
  v15 = a1; /*0x6ac488*/
  if ( byte_884B8C ) /*0x6ac48e*/
  {
    if ( a1 ) /*0x6ac496*/
    {
      v5 = a2[1]; /*0x6ac49f*/
      v6 = g_FogOfWarState; /*0x6ac4a5*/
      v20 = *a2; /*0x6ac4b5*/
      BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x6ac4b9*/
      v8 = ((Color *)((uint8_t *)(BuildingAnimByName + 776)))->ConvertToRGB((int)v14); /*0x6ac4c9*/
      v18 = *(unsigned short *)v8; /*0x6ac4d7*/
      v19 = *(unsigned char *)(v8 + 2); /*0x6ac4e1*/
      v9 = ((uint8_t)v18 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6ac52e*/
         | (IDA_HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
         | (v19 >> g_BitMask_Red << g_BitShift_Blue);
      v10 = a3[2]; /*0x6ac536*/
      v11 = a3[1]; /*0x6ac539*/
      v21[0] = *a3; /*0x6ac53c*/
      v12 = a3[3]; /*0x6ac542*/
      v21[1] = v11; /*0x6ac547*/
      v21[3] = v11 + v12; /*0x6ac54b*/
      v21[2] = v21[0] + v10; /*0x6ac551*/
      ((Char *)((unsigned char *)v6))->Swap(1); /*0x6ac555*/
      ((TextGroup *)((unsigned int *)v6))->SetRect(v21); /*0x6ac561*/
      ((Property *)((unsigned short *)v6))->Set(v9); /*0x6ac569*/
      v13 = (unsigned short *)v15; /*0x6ac57a*/
      ((Text *)((unsigned int *)v6))->Layout((uint16_t *)v15, &v17, &v16, a4); /*0x6ac584*/
// 0x434cd0
      return Font::Print(v6, DSurface_Sidebar, v13, v20, *(unsigned int *)(v6 + 28) - v16 + v5, a4, 0, 0, 0, 0); /*0x6ac5b2*/
    }
  }
  return result; /*0x6ac5bb*/
}
}
// 0x6BA120
namespace gamemd {
char sub_6BA120(int a1, int a2, char * Source)
{
  return LoadPaletteFromFile(a1, a2, Source, 1, 1); /*0x6ba12e*/
}
} // namespace gamemd

// 0x6DA360
namespace gamemd {
unsigned int * UI_Move(unsigned int * a0, MouseClass * aP1, int a3)
{
  *a0 = *aP1; /*0x6da36a*/
  return a0; /*0x6da36c*/
}
} // namespace gamemd

// 0x72AFF0
namespace gamemd {
int sub_72AFF0()
{
  return dword_B0FB68; /*0x72aff5*/
}
} // namespace gamemd

// 0x72B010
namespace gamemd {
int sub_72B010()
{
  return dword_B0FB70; /*0x72b015*/
}
} // namespace gamemd

// 0x72B030
namespace gamemd {
int sub_72B030()
{
  return dword_B0FB60; /*0x72b035*/
}
} // namespace gamemd

// 0x72B050
namespace gamemd {
int sub_72B050()
{
  return dword_B0FB78; /*0x72b055*/
}
} // namespace gamemd

// 0x72B9D0
namespace gamemd {
int sub_72B9D0()
{
  return dword_B0FD64; /*0x72b9d5*/
}
} // namespace gamemd

// 0x72BBB0
namespace gamemd {
int sub_72BBB0()
{
  return dword_B0FD58; /*0x72bbb5*/
}
} // namespace gamemd

// 0x72BD90
namespace gamemd {
int sub_72BD90()
{
  return dword_B0FD4C; /*0x72bd95*/
}
} // namespace gamemd

// 0x72BF70
namespace gamemd {
int sub_72BF70()
{
  return dword_B0FD40; /*0x72bf75*/
}
} // namespace gamemd

// 0x72C150
namespace gamemd {
int sub_72C150()
{
  return dword_B0FD34; /*0x72c155*/
}
} // namespace gamemd

// 0x72C330
namespace gamemd {
int sub_72C330()
{
  return dword_B0FD28; /*0x72c335*/
}
} // namespace gamemd

// 0x72C510
namespace gamemd {
int sub_72C510()
{
  return dword_B0FD1C; /*0x72c515*/
}
} // namespace gamemd

// 0x72C6F0
namespace gamemd {
int sub_72C6F0()
{
  return dword_B0FD10; /*0x72c6f5*/
}
} // namespace gamemd

// 0x72C8D0
namespace gamemd {
int sub_72C8D0()
{
  return dword_B0FD04; /*0x72c8d5*/
}
} // namespace gamemd

// 0x72CAB0
namespace gamemd {
int sub_72CAB0()
{
  return dword_B0FCF8; /*0x72cab5*/
}
} // namespace gamemd

// 0x72CC80
namespace gamemd {
int sub_72CC80()
{
  return dword_B0FC78; /*0x72cc85*/
}
} // namespace gamemd

// 0x72CE50
namespace gamemd {
int sub_72CE50()
{
  return dword_B0FCEC; /*0x72ce55*/
}
} // namespace gamemd

// 0x72D030
namespace gamemd {
int sub_72D030()
{
  return dword_B0FCE0; /*0x72d035*/
}
} // namespace gamemd

// 0x72D120
namespace gamemd {
char sub_72D120()
{
  char result; // al

  result = byte_B0FCCE; /*0x72d120*/
  if ( !byte_B0FCCE ) /*0x72d127*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72d133*/
      dword_B0FAB8 = LoadFileSHP(off_844D64, (bool *)&byte_B0FCCD); /*0x72d145*/
    result = LoadPaletteSimple(off_844D68, &dword_B0FCD0, &dword_B0FCD4); /*0x72d15a*/
    byte_B0FCCE = 1; /*0x72d15f*/
  }
  return result; /*0x72d166*/
}
} // namespace gamemd

// 0x72D210
namespace gamemd {
int sub_72D210()
{
  return dword_B0FCD4; /*0x72d215*/
}
} // namespace gamemd

// 0x72D820
namespace gamemd {
int sub_72D820()
{
  return dword_B0FBB4; /*0x72d825*/
}
} // namespace gamemd

// 0x72DAC0
namespace gamemd {
int sub_72DAC0()
{
  return dword_B0FCB4; /*0x72dac5*/
}
} // namespace gamemd

// 0x72DAD0
namespace gamemd {
int sub_72DAD0()
{
  return dword_B0FCBC; /*0x72dad5*/
}
} // namespace gamemd

// 0x72E260
namespace gamemd {
char sub_72E260()
{
  return byte_B0FBE0; /*0x72e265*/
}
} // namespace gamemd

// 0x72E2A0
namespace gamemd {
int sub_72E2A0()
{
  return dword_B0FBD4; /*0x72e2a5*/
}
} // namespace gamemd

// 0x72E2C0
namespace gamemd {
int sub_72E2C0()
{
  return dword_B0FBDC; /*0x72e2c5*/
}
} // namespace gamemd

// 0x72E730
namespace gamemd {
void UI_Draw_72E730(ConvertClass * aP0, int * a1, int a3, int aP2, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h]
  int v10[2]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v5 = a1[3]; /*0x72e736*/
  v10[0] = *a1; /*0x72e739*/
  v6 = a1[1]; /*0x72e73d*/
  v8 = 0; /*0x72e740*/
  v10[1] = v6; /*0x72e748*/
  v7 = a1[2]; /*0x72e74c*/
  v9 = 0; /*0x72e754*/
  v11 = v7; /*0x72e75c*/
  v12 = v5; /*0x72e760*/
  if ( v7 > 800 ) /*0x72e764*/
    v11 = (v7 - 800) / 2 + 800; /*0x72e775*/
  if ( v5 > 600 ) /*0x72e77f*/
    v12 = (v5 - 600) / 2 + 600; /*0x72e791*/
  v8 = *(unsigned int *)dword_B0FC1C; /*0x72e79d*/
  v9 = *((unsigned int *)dword_B0FC1C + 1); /*0x72e7a4*/
  if ( g_DisplayWidth == 640 ) /*0x72e7b2*/
    DrawToSurfaceSHP(aP0, a3, aP2, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e7df*/
  else
    DrawToSurfaceSHP(aP0, a3, a5, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e815*/
}
} // namespace gamemd

// 0x72E860
namespace gamemd {
void UI_Draw_72E860(int a1, ConvertClass * a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e86c*/
  v3 = 0; /*0x72e870*/
  v2 = *(unsigned int *)dword_B0FC14; /*0x72e877*/
  v3 = *((unsigned int *)dword_B0FC14 + 1); /*0x72e87e*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0F9DC, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e8a8*/
}
} // namespace gamemd

// 0x72E8C0
namespace gamemd {
void UI_Draw_72E8C0(int a1, ConvertClass * a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e8cc*/
  v3 = 0; /*0x72e8d0*/
  v2 = *(unsigned int *)dword_B0FC20; /*0x72e8d7*/
  v3 = *((unsigned int *)dword_B0FC20 + 1); /*0x72e8de*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0FAF8, 1u, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e909*/
}
} // namespace gamemd

// 0x72E920
namespace gamemd {
void UI_Draw_72E920(int a1, ConvertClass * a2)
{
  int v2; // edi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x72e92c*/
  v4 = 0; /*0x72e930*/
  v2 = *(unsigned int *)dword_B0FC1C; /*0x72e934*/
  v3 = *(unsigned int *)dword_B0FC1C; /*0x72e936*/
  v4 = *((unsigned int *)dword_B0FC1C + 1); /*0x72e93d*/
  if ( g_DisplayWidth >= 800 ) /*0x72e94b*/
    v3 = v2 + 80; /*0x72e952*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB00, 0, &v3, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e97d*/
}
} // namespace gamemd

// 0x72F430
namespace gamemd {
char sub_72F430()
{
  return byte_B0FC0C; /*0x72f435*/
}
} // namespace gamemd

// 0x72F4A0
namespace gamemd {
CCINIClass * UI_Load_72F4A0()
{
  return dword_B0FBE4; /*0x72f4a5*/
}
} // namespace gamemd

// 0x72F4B0
namespace gamemd {
int sub_72F4B0()
{
  return dword_B0FBE8; /*0x72f4b5*/
}
} // namespace gamemd

// 0x72F4D0
namespace gamemd {
int sub_72F4D0()
{
  return dword_B0FC08; /*0x72f4d5*/
}
} // namespace gamemd

// 0x72F4E0
namespace gamemd {
CCINIClass * UI_Load_72F4E0()
{
  return dword_B0FBFC; /*0x72f4e5*/
}
} // namespace gamemd

// 0x731A10
namespace gamemd {
char sub_731A10()
{
  unsigned int **v0; // eax

  v0 = (unsigned int **)UI_Delete_Delete_63AC60(); /*0x731a10*/
  if ( v0 ) /*0x731a17*/
    return UI_Delete_Delete(v0); /*0x731a1b*/
  else
// 0x4311c0
    return ((Network *)(g_VisibilitySystem))->SendBeaconDelete(-1, -1); /*0x731a29*/
}
} // namespace gamemd

// 0x731A30
namespace gamemd {
int sub_731A30()
{
  int result; // eax

  result = dword_A8B538; /*0x731a30*/
  if ( !dword_A8B538 ) /*0x731a37*/
// 0x4ac960
    return MapClass::ToggleZoom((int *)&dword_87F7E8, -1); /*0x731a40*/
  return result; /*0x731a45*/
}
} // namespace gamemd

// 0x731A50
namespace gamemd {
int sub_731A50(char a1)
{
  int result; // eax
  ObjectClass *v3; // [esp+0h] [ebp-4h]

  result = dword_A8B538[0]; /*0x731a50*/
  if ( !dword_A8B538[0] ) /*0x731a5a*/
  {
    UI_Create_731A50_Create(v3); /*0x731a5c*/
    return UI_Create_731A50_Create_63A120(a1, 1); /*0x731a65*/
  }
  return result; /*0x731a6a*/
}
} // namespace gamemd

// 0x731A70
namespace gamemd {
int sub_731A70(char a1)
{
  int result; // eax

  House_Play(); /*0x731a73*/
  result = dword_A8B538; /*0x731a78*/
  if ( !dword_A8B538 ) /*0x731a7f*/
    return UI_Create_731A50_Create_63A120(a1, 0); /*0x731a85*/
  return result; /*0x731a8a*/
}
} // namespace gamemd

// 0x732CA0
namespace gamemd {
char sub_732CA0()
{
  DWORD Time; // eax

  IDA_LOBYTE(Time) = byte_B0FE65; /*0x732ca0*/
  if ( !byte_B0FE65 ) /*0x732ca7*/
  {
    byte_B0FE65 = 1; /*0x732ca9*/
    Time = timeGetTime(); /*0x732cb0*/
    dword_B0FE68 = Time; /*0x732cb6*/
  }
  return Time; /*0x732cbb*/
}
} // namespace gamemd

// 0x732CC0
namespace gamemd {
char sub_732CC0()
{
  int v0; // eax

  IDA_LOBYTE(v0) = byte_B0FE65; /*0x732cc0*/
  if ( byte_B0FE65 ) /*0x732cc7*/
  {
    byte_B0FE65 = 0; /*0x732cc9*/
    v0 = abs32(timeGetTime() - dword_B0FE68); /*0x732cdf*/
    if ( v0 <= 500 ) /*0x732ce6*/
    {
      SelectAllOfType(); /*0x732ce8*/
      IDA_LOBYTE(v0) = MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x732cf4*/
    }
  }
  return v0; /*0x732cf9*/
}
} // namespace gamemd

// 0x734120
namespace gamemd {
unsigned short sub_734120()
{
  int *v0; // eax
  uint16_t v1; // si
  uint16_t result; // ax
  int v3; // eax
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  if ( timeGetTime() - dword_845558 >= 0x640 ) /*0x734138*/
    v0 = UI_Create_734120_Create(&v4); /*0x734149*/
  else
    v0 = UI_Create_734120_Create_660BE0(&v4); /*0x73413e*/
  v4 = *v0; /*0x734150*/
  v1 = v4; /*0x73414e*/
  dword_845558 = timeGetTime(); /*0x73415d*/
  result = IDA_HIWORD(v4); /*0x734162*/
  if ( IDA___PAIR32__(IDA_HIWORD(v4), v1) != word_B0FDF0 ) /*0x734167*/
  {
    v5 = ((int16_t)v1 << 8) + 128; /*0x73418c*/
    v6 = (IDA_SHIWORD(v4) << 8) + 128; /*0x73419c*/
    v7 = 0; /*0x7341a0*/
    v3 = (*((char *)((Coord *)(&dword_87F7E8))->To_Cell(&v5) + 283) << 8) / 2; /*0x7341c6*/
    v6 -= v3; /*0x7341cc*/
    v5 -= v3; /*0x7341df*/
    ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition(&v5); /*0x7341e3*/
    result = dword_880990; /*0x7341e8*/
    if ( dword_880990 ) /*0x7341ef*/
      return (uint16_t)((Tactical *)((int)&dword_87F7E8))->MouseMove(&v4, &word_B0FDF0); /*0x734200*/
  }
  return result; /*0x734205*/
}
} // namespace gamemd

// 0x7342A0
namespace gamemd {
int sub_7342A0()
{
  return dword_B0FE5C; /*0x7342a5*/
}
} // namespace gamemd

// 0x7342B0
namespace gamemd {
int sub_7342B0()
{
  return dword_B0FE60; /*0x7342b5*/
}
} // namespace gamemd

// 0x77CF40
namespace gamemd {
bool sub_77CF40()
{
  return dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x77cf56*/
}
} // namespace gamemd

// 0x7930A0
namespace gamemd {
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7930bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7930c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&byte_B777B0 ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = ((String *)((char **)&dword_B73E40))->GetOrEmpty_Alt(); /*0x7930f6*/
  return _strcmpi(unk_B777D4, v3) == 0; /*0x7930dc*/
}
} // namespace gamemd

// 0x793A10
namespace gamemd {
ObjectClass * UI_Setup_793A10(void * a1, short a2)
{
  int v4; // edi
  char **v5; // esi
  char *v6; // eax
  int result; // eax

  Debug::Log(); /*0x793a26*/
  v4 = 0; /*0x793a2e*/
  v5 = (char **)&dword_A8DA90; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar(*v5); /*0x793a38*/
    result = _strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    ++v5; /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&dword_A8DAB0 ) /*0x793a54*/
      return result; /*0x793a54*/
  }
  *((unsigned short *)&dword_A8E050 + v4) = a2; /*0x793a5b*/
  return result; /*0x793a56*/
}
} // namespace gamemd

// 0x7A2750
namespace gamemd {
void sub_7A2750()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  bool v2; // bl
  wchar_t *StringCSF; // eax
  void *v4; // [esp+8h] [ebp-4h] BYREF

  Current = Dialog::GetCurrent(); /*0x7a2753*/
  DlgItem = GetDlgItem(Current, 1439); /*0x7a2768*/
  ((String *)((char **)&v4))->Assign(0); /*0x7a276c*/
  v2 = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v4) != 1; /*0x7a2781*/
  DeleteAndZero(&v4); /*0x7a2784*/
  if ( v2 ) /*0x7a278b*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x7a2797*/
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_wonline_cpp, 29202); /*0x7a27ae*/
    Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x7a27b6*/
  }
}
} // namespace gamemd

// 0x7B83E0
namespace gamemd {
wchar_t ** sub_7B83E0(wchar_t ** a1, const char ** a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  wchar_t *v6; // edi
  char *v7; // eax
  size_t v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  size_t v11; // eax
  wchar_t *v12; // eax

  if ( *a2 ) /*0x7b83e8*/
    v4 = strlen(*a2); /*0x7b83fb*/
  else
    v4 = 0; /*0x7b83ee*/
  v5 = (int)(((7 * (v4 + 1)) >> 3) + 1) / 2; /*0x7b840f*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5 + 2); /*0x7b841b*/
  v7 = (char *)*a2; /*0x7b841d*/
  if ( !*a2 ) /*0x7b841d*/
    v7 = &g_INI_DefaultBuffer; /*0x7b8426*/
  BinkMovieClass::OpenFile((uint8_t *)v7, v6, v5); /*0x7b8430*/
  if ( v6 ) /*0x7b8437*/
    v8 = wcslen(v6) + 1; /*0x7b8442*/
  else
    v8 = 1; /*0x7b8445*/
  v9 = (wchar_t *)RA2_OPNEW(2 * v8); /*0x7b844e*/
  v10 = v9; /*0x7b8453*/
  *v9 = 0; /*0x7b845a*/
  if ( v6 ) /*0x7b845f*/
    wcscpy(v9, v6); /*0x7b8463*/
  RA2_OPDEL(v6); /*0x7b846c*/
  *a1 = 0; /*0x7b8474*/
  if ( v10 ) /*0x7b847d*/
  {
    v11 = wcslen(v10); /*0x7b8480*/
    v12 = (wchar_t *)RA2_OPNEW(2 * v11 + 2); /*0x7b848a*/
    *a1 = v12; /*0x7b8491*/
    wcscpy(v12, v10); /*0x7b8494*/
    RA2_OPDEL(v10); /*0x7b849a*/
  }
  return a1; /*0x7b84a2*/
}
} // namespace gamemd

// 0x7BA2C0
namespace gamemd {
void sub_7BA2C0()
{
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba2d6*/
    Debug::Log(); /*0x7ba2e7*/
}
} // namespace gamemd
