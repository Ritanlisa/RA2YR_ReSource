// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_642E00_e4.hpp"
#include "e4/classes/E4Recv_642E40_e4.hpp"
#include "e4/classes/E4Recv_643670_e4.hpp"

// 0x52B6D0
namespace gamemd {
int sub_52B6D0(int a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_52B6D0(int a1, int a2, int *a3)
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
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x52b6e6*/
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
} // namespace gamemd

// 0x53BAE0
namespace gamemd {
BOOL sub_53BAE0()
{
{
    return ChronoScreenEffect_Status != 0;
}
}
} // namespace gamemd

// 0x53E720
namespace gamemd {
int sub_53E720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_53E720()
{
  return unk_AA0444; /*0x53e725*/
}
}
} // namespace gamemd

// 0x5E29A0
namespace gamemd {
LRESULT UI_Draw(HWND hWnd, wchar_t * Source, DropListClass * Count, LPARAM lParam)
{
{
    wchar_t *v5;
    DropListClass *v6;
    LRESULT v7;
    bool v8;
    LRESULT v9;
    LRESULT v11;
    struct tagRECT Rect;
    signed int Counta;
    memset(&g_MatrixTransformState + 1315, 0, 0x400u);
    wcsncpy((wchar_t *)&g_MatrixTransformState + 2630, Source, Count);
    v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xD);
    if ( v5 || (v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xA)) != 0 )
    *v5 = 0;
    v11 = SendMessageA(hWnd, 0x49Du, 0, 1);
    v6 = (DropListClass *)SendMessageA(hWnd, 0x18Eu, 0, 0);
    v7 = SendMessageA(hWnd, 0x18Bu, 0, 0);
    Counta = SendMessageA(hWnd, 0x1A1u, (WPARAM)v6, 0);
    GetWindowRect(hWnd, &Rect);
    v8 = v7 - (int)v6 <= (Rect.bottom - Rect.top) / Counta;
    if ( v7 > 500 )
  {
    SendMessageA(hWnd, 0x182u, 0, 0);
    --v7;
  }
    v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)(&g_MatrixTransformState + 1315));
    if ( lParam != -1 )
    SendMessageA(hWnd, 0x498u, v9, lParam);
    if ( v8 )
    SendMessageA(hWnd, 0x197u, v7, 0);
    return SendMessageA(hWnd, 0x49Du, 0, v11);
}
}
} // namespace gamemd

// 0x603F00
namespace gamemd {
wchar_t ** UI_Assign(wchar_t ** a1, HWND a2, LPARAM a3, LPARAM a4)
{
{
    LPARAM lParam[2];
    void *v8;
    unknown_libname_74(&v8);
    lParam[0] = a3;
    lParam[1] = a4;
    SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v8);
    DeleteAndZero::Alt(&v8);
    return a1;
}
}
} // namespace gamemd

// 0x60AF50
namespace gamemd {
BOOL UI_Get(HWND hWnd, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall UI_Get(HWND hWnd, _DWORD *a2)
{
  HWND Parent; // ebp
  char GameSpeed; // bl
  int v6; // ebp
  int v7; // ecx
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60af67*/
  GameSpeed = SessionClass::GetGameSpeed(&MEMORY[0xA8B238]); /*0x60af6e*/
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
} // namespace gamemd

// 0x622610
namespace gamemd {
int sub_622610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_622610()
{
  int result; // eax
  bool v1; // zf

  result = MEMORY[0xAC48EC]; /*0x622610*/
  v1 = MEMORY[0xAC48EC] == 0; /*0x622615*/
  if ( MEMORY[0xAC48EC] > 0 ) /*0x622617*/
  {
    result = MEMORY[0xAC48EC] - 1; /*0x622619*/
    MEMORY[0xAC48EC] = result; /*0x62261a*/
    v1 = result == 0; /*0x62261f*/
  }
  if ( v1 && MEMORY[0x887640] ) /*0x62262b*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 28))(MEMORY[0x887640]) ) /*0x62262f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 24))(MEMORY[0x887640]); /*0x62263e*/
    return MEMORY[0xAC48EC]; /*0x622641*/
  }
  return result; /*0x622646*/
}
}
} // namespace gamemd

// 0x623170
namespace gamemd {
BOOL UI_Connect(HWND hWnd, LONG a2, LONG a3)
{
{
    LONG v5;
    LONG v6;
    struct tagRECT Rect;
    struct tagPOINT Point;
    struct tagPOINT v10;
    v10 = *(struct tagPOINT *)&g_DisplayWidth;
    Point.x = 0;
    Point.y = 0;
    ClientToScreen(g_hWnd, &Point);
    ClientToScreen(g_hWnd, &v10);
    GetWindowRect(hWnd, &Rect);
    Rect.right -= Rect.left;
    Rect.bottom -= Rect.top;
    if ( a2 == -1 )
    v5 = Rect.left - Point.x;
    else
    v5 = a2;
    Rect.left = v5;
    if ( a3 == -1 )
    v6 = Rect.top - Point.y;
    else
    v6 = a3;
    Rect.top = v6;
    return MoveWindow(hWnd, v5, v6, Rect.right, Rect.bottom, 0);
}
}
} // namespace gamemd

// 0x63AAC0
namespace gamemd {
char UI_Handle(MouseClass * aP0, int a2)
{
{
    char result;
    *((__int64 *)&(&g_MatrixTransformState)[503] + 1) = -1;
    result = *((char *)&(&g_MatrixTransformState)[506] + 4);
    *((char *)&g_MatrixTransformState + 24224) = 1;
    if ( *((char *)&(&g_MatrixTransformState)[506] + 4) )
  {
    result = HouseClass_Player.__pad_5568[23060];
    if ( *(int *)&HouseClass_Player.__pad_5568[23060] <= 0 )
    {
    *((__int64 *)&(&g_MatrixTransformState)[503] + 1) = __PAIR64__(a2, (unsigned int)aP0);
    return (char)aP0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x642E00
namespace gamemd {
unsigned int * E4Recv_642E00::UI_Render()
{
{
    int *FoundationSize;
    int v2;
    int v4[4];
    int *v5;
    int *v6;
    FoundationSize = Building::GetFoundationSize(v4, 0);
    v2 = FoundationSize[3];
    *v5 = FoundationSize[2] + 6;
    *v6 = v2 + 6;
    return v6;
}
}
} // namespace gamemd

// 0x647040
namespace gamemd {
char sub_647040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_647040()
{
  char *v0; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 503) ) /*0x647048*/
    return 0; /*0x647048*/
  if ( *((_BYTE *)HouseClass_Player + 504) ) /*0x647056*/
    return 0; /*0x647056*/
  if ( *((_BYTE *)HouseClass_Player + 502) ) /*0x647060*/
    return 0; /*0x647060*/
  v0 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0xCu); /*0x647074*/
  if ( Networking_LastEventIndex >= 128 ) /*0x647083*/
    return 0; /*0x6470dc*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x6470a1*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6470b4*/
  ++Networking_LastEventIndex; /*0x6470cb*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6470d0*/
  return 1; /*0x6470d8*/
}
}
} // namespace gamemd

// 0x6470F0
namespace gamemd {
char sub_6470F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_6470F0()
{
  char *v0; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 503) ) /*0x6470f8*/
    return 0; /*0x6470f8*/
  if ( *((_BYTE *)HouseClass_Player + 504) ) /*0x647106*/
    return 0; /*0x647106*/
  if ( *((_BYTE *)HouseClass_Player + 502) ) /*0x647110*/
    return 0; /*0x647110*/
  v0 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0x22u); /*0x647124*/
  if ( Networking_LastEventIndex >= 128 ) /*0x647133*/
    return 0; /*0x64718c*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x647151*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x647164*/
  ++Networking_LastEventIndex; /*0x64717b*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647180*/
  return 1; /*0x647188*/
}
}
} // namespace gamemd

// 0x6DA360
namespace gamemd {
unsigned int * UI_Move(unsigned int * a0, MouseClass * aP1, int a3)
{
{
    *a0 = aP1->field_0;
    return a0;
}
}
} // namespace gamemd

// 0x725070
namespace gamemd {
int sub_725070(int a1, int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_725070(int a1, int a2, unsigned int *a3)
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
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x725086*/
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
} // namespace gamemd

// 0x72D120
namespace gamemd {
char sub_72D120()
{
{
    char result;
    result = DataGlobal_B0FCCE;
    if ( !DataGlobal_B0FCCE )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FAB8 = LoadFileSHP(DataGlobal_844D64, (bool *)&DataGlobal_B0FCCD);
    result = LoadPaletteSimple(DataGlobal_844D68, &DataGlobal_B0FCD0, &DataGlobal_B0FCD4);
    DataGlobal_B0FCCE = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x731A10
namespace gamemd {
char sub_731A10()
{
{
    int **v0;
    v0 = (int **)UI_Delete_Delete_63AC60();
    if ( v0 )
    return UI_Delete_Delete(v0);
    else
    return Network::SendBeaconDelete(g_VisibilitySystem, -1, -1);
}
}
} // namespace gamemd

// 0x6AC430
namespace gamemd {
int sub_6AC430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6AC430()
{
  int v0; // eax
  unsigned int v1; // eax

  v0 = 26; /*0x6ac43b*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6ac435*/
    v0 = 18; /*0x6ac444*/
  v1 = (int)((unsigned __int64)(1374389535LL * (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v0 + MEMORY[0x886F94] - 7)) >> 32) >> 4; /*0x6ac46c*/
  return 2 * ((v1 >> 31) + v1); /*0x6ac478*/
}
}
} // namespace gamemd

// 0x623F60
namespace gamemd {
LRESULT UI_Assign_623F60(HWND hWnd, WPARAM wParam, void ** a3)
{
{
    LRESULT v5;
    wchar_t *v6;
    LRESULT v7;
    v5 = SendMessageA(hWnd, 0x18Au, wParam, 0);
    if ( v5 <= 0 )
    SafeDelete::Ptr(a3);
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4);
    v7 = SendMessageA(hWnd, 0x4B6u, wParam, (LPARAM)v6);
    WideString::Assign_Alt(a3, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}
} // namespace gamemd

// 0x72B9D0
namespace gamemd {
int sub_72B9D0()
{
{
    return DataGlobal_B0FD64;
}
}
} // namespace gamemd

// 0x72BBB0
namespace gamemd {
int sub_72BBB0()
{
{
    return DataGlobal_B0FD58;
}
}
} // namespace gamemd

// 0x72BD90
namespace gamemd {
int sub_72BD90()
{
{
    return DataGlobal_B0FD4C;
}
}
} // namespace gamemd

// 0x72BF70
namespace gamemd {
int sub_72BF70()
{
{
    return DataGlobal_B0FD40;
}
}
} // namespace gamemd

// 0x72C150
namespace gamemd {
int sub_72C150()
{
{
    return DataGlobal_B0FD34;
}
}
} // namespace gamemd

// 0x72C330
namespace gamemd {
int sub_72C330()
{
{
    return DataGlobal_B0FD28;
}
}
} // namespace gamemd

// 0x72C510
namespace gamemd {
int sub_72C510()
{
{
    return DataGlobal_B0FD1C;
}
}
} // namespace gamemd

// 0x72C6F0
namespace gamemd {
int sub_72C6F0()
{
{
    return DataGlobal_B0FD10;
}
}
} // namespace gamemd

// 0x72C8D0
namespace gamemd {
int sub_72C8D0()
{
{
    return DataGlobal_B0FD04;
}
}
} // namespace gamemd

// 0x72CAB0
namespace gamemd {
int sub_72CAB0()
{
{
    return DataGlobal_B0FCF8;
}
}
} // namespace gamemd

// 0x72CE50
namespace gamemd {
int sub_72CE50()
{
{
    return DataGlobal_B0FCEC;
}
}
} // namespace gamemd

// 0x72D030
namespace gamemd {
int sub_72D030()
{
{
    return DataGlobal_B0FCE0;
}
}
} // namespace gamemd

// 0x72D210
namespace gamemd {
int sub_72D210()
{
{
    return DataGlobal_B0FCD4;
}
}
} // namespace gamemd

// 0x72D820
namespace gamemd {
int sub_72D820()
{
{
    return DataGlobal_B0FBB4;
}
}
} // namespace gamemd

// 0x730EA0
namespace gamemd {
wchar_t * sub_730EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *sub_730EA0()
{
  wchar_t *result; // eax
  wchar_t *v1; // ebp
  int v2; // edi
  char v3; // bl
  _BYTE *v4; // esi

  result = MEMORY[0xA8ECC8]; /*0x730ea0*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x730eab*/
  {
    v1 = MEMORY[0xA8ECC8]; /*0x730ead*/
    v2 = 0; /*0x730eaf*/
    v3 = 1; /*0x730eb3*/
    while ( 1 ) /*0x730eb7*/
    {
      result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x730eb7*/
      v4 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v2); /*0x730ebc*/
      if ( v4 ) /*0x730ec1*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x730ec7*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v2)) /*0x730ee3*/
            || (result = (wchar_t *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4), (_BYTE)result) )
          {
            result = (wchar_t *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v4 + 884))(v4, 6); /*0x730eeb*/
            v3 = (char)result; /*0x730ef1*/
            if ( !(_BYTE)result ) /*0x730ef5*/
              break; /*0x730ef5*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x730efa*/
      {
        if ( v3 ) /*0x730efe*/
          return (wchar_t *)PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, 0); /*0x730f17*/
        return result; /*0x730f17*/
      }
    }
  }
  return result; /*0x730f1c*/
}
}
} // namespace gamemd

// 0x730F30
namespace gamemd {
wchar_t * sub_730F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *sub_730F30()
{
  wchar_t *result; // eax
  char *v1; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  result = (wchar_t *)MEMORY[0xA8B538]; /*0x730f30*/
  if ( !MEMORY[0xA8B538] ) /*0x730f3a*/
  {
    result = MEMORY[0xA8ED84]; /*0x730f51*/
    if ( MEMORY[0x84555C] + LODWORD(MEMORY[0x8871E0]->?) < (int)MEMORY[0xA8ED84] ) /*0x730f5a*/
    {
      v1 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0x2Du); /*0x730f6c*/
      if ( Networking_LastEventIndex < 128 ) /*0x730f7b*/
      {
        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v1, 0x6Fu); /*0x730f99*/
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x730fac*/
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x730fc3*/
        ++Networking_LastEventIndex; /*0x730fc9*/
      }
      MEMORY[0x84555C] = (int)MEMORY[0xA8ED84]; /*0x730fd3*/
      return MEMORY[0xA8ED84]; /*0x730fce*/
    }
  }
  return result; /*0x730fd8*/
}
}
} // namespace gamemd

// 0x730FE0
namespace gamemd {
wchar_t * sub_730FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *sub_730FE0()
{
  wchar_t *result; // eax
  wchar_t *v1; // ebp
  int v2; // edi
  char v3; // bl
  _BYTE *v4; // esi

  result = MEMORY[0xA8ECC8]; /*0x730fe0*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x730feb*/
  {
    v1 = MEMORY[0xA8ECC8]; /*0x730fed*/
    v2 = 0; /*0x730fef*/
    v3 = 1; /*0x730ff3*/
    while ( 1 ) /*0x730ff7*/
    {
      result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x730ff7*/
      v4 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v2); /*0x730ffc*/
      if ( v4 ) /*0x731001*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x731007*/
        {
          result = (wchar_t *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v2)); /*0x73100d*/
          if ( (_BYTE)result ) /*0x731015*/
          {
            result = (wchar_t *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v4 + 884))(v4, 7); /*0x73101d*/
            v3 = (char)result; /*0x731023*/
            if ( !(_BYTE)result ) /*0x731027*/
              break; /*0x731027*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x73102c*/
      {
        if ( v3 ) /*0x731030*/
          return (wchar_t *)PlayVocClass(MEMORY[0x8871E0]->?[1], 0x2000, 1.0, 0); /*0x73104a*/
        return result; /*0x73104a*/
      }
    }
  }
  return result; /*0x73104f*/
}
}
} // namespace gamemd

// 0x7318F0
namespace gamemd {
char * sub_7318F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_7318F0()
{
  char *result; // eax
  char v1[112]; // [esp+0h] [ebp-70h] BYREF

  result = (char *)MEMORY[0xA8ECC8]; /*0x7318f0*/
  if ( MEMORY[0xA8ECC8] ) /*0x7318fa*/
  {
    result = (char *)HouseClass_Player; /*0x731900*/
    if ( !*((_BYTE *)HouseClass_Player + 501) ) /*0x731905*/
    {
      result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x73191d*/
      if ( result != (char *)HouseClass_Player ) /*0x731926*/
      {
        result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x731935*/
        if ( result[492] ) /*0x731938*/
        {
          result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 56))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x73194f*/
          if ( MEMORY[0xA8B238][0] ) /*0x73195a*/
          {
            if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x400) == 0 /*0x731981*/
              && BYTE1(MEMORY[0x8871E0][1].InfantryBrute)
              && HIBYTE(MEMORY[0x8871E0][1].InfantryMutate) )
            {
              result = EventClass::Add2(v1, *((_DWORD *)HouseClass_Player + 12), 3u, (int)result); /*0x73199c*/
              if ( Networking_LastEventIndex < 128 ) /*0x7319ab*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], result, 0x6Fu); /*0x7319c9*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x7319dc*/
                result = (char *)(Networking_LastEventIndex + 1); /*0x7319f2*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x7319f3*/
                ++Networking_LastEventIndex; /*0x7319f9*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x7319fe*/
}
}
} // namespace gamemd

// 0x731A30
namespace gamemd {
int sub_731A30()
{
{
    int result;
    result = MuteSWLaunches;
    if ( !MuteSWLaunches )
    return MapClass::ToggleZoom((int *)&DataGlobal_87F7E8, -1);
    return result;
}
}
} // namespace gamemd

// 0x731A50
namespace gamemd {
int sub_731A50(char a1)
{
{
    int result;
    result = MuteSWLaunches;
    if ( !MuteSWLaunches )
  {
    UI_Create_731A50_Create();
    return UI_Create_731A50_Create_63A120(a1, 1);
  }
    return result;
}
}
} // namespace gamemd

// 0x731A70
namespace gamemd {
int sub_731A70(char a1)
{
{
    int result;
    House_Play();
    result = MuteSWLaunches;
    if ( !MuteSWLaunches )
    return UI_Create_731A50_Create_63A120(a1, 0);
    return result;
}
}
} // namespace gamemd

// 0x732CA0
namespace gamemd {
char sub_732CA0()
{
{
    DWORD Time;
    LOBYTE(Time) = DataGlobal_B0FE65;
    if ( !DataGlobal_B0FE65 )
  {
    DataGlobal_B0FE65 = 1;
    Time = timeGetTime();
    DataGlobal_B0FE68 = Time;
  }
    return Time;
}
}
} // namespace gamemd

// 0x732CC0
namespace gamemd {
char sub_732CC0()
{
{
    int v0;
    LOBYTE(v0) = DataGlobal_B0FE65;
    if ( DataGlobal_B0FE65 )
  {
    DataGlobal_B0FE65 = 0;
    v0 = abs32(timeGetTime() - DataGlobal_B0FE68);
    if ( v0 <= 500 )
    {
    SelectAllOfType();
    LOBYTE(v0) = MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
    }
  }
    return v0;
}
}
} // namespace gamemd

// 0x734120
namespace gamemd {
unsigned short sub_734120()
{
{
    int *v0;
    unsigned short v1;
    unsigned short result;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    if ( timeGetTime() - DataGlobal_845558 >= 0x640 )
    v0 = UI_Create_734120_Create(&v4);
    else
    v0 = UI_Create_734120_Create_660BE0(&v4);
    v4 = *v0;
    v1 = v4;
    DataGlobal_845558 = timeGetTime();
    result = HIWORD(v4);
    if ( __PAIR32__(HIWORD(v4), v1) != DataGlobal_B0FDF0 )
  {
    v5 = ((short)v1 << 8) + 128;
    v6 = (SHIWORD(v4) << 8) + 128;
    v7 = 0;
    v3 = (*((char *)Coord::To_Cell(&DataGlobal_87F7E8, &v5) + 283) << 8) / 2;
    v6 -= v3;
    v5 -= v3;
    Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v5);
    result = g_RadarBlipManager;
    if ( g_RadarBlipManager )
    return (unsigned short)Tactical::MouseMove((int)&DataGlobal_87F7E8, &v4, &DataGlobal_B0FDF0);
  }
    return result;
}
}
} // namespace gamemd

// 0x7342A0
namespace gamemd {
int sub_7342A0()
{
{
    return DataGlobal_B0FE5C;
}
}
} // namespace gamemd

// 0x7342B0
namespace gamemd {
int sub_7342B0()
{
{
    return DataGlobal_B0FE60;
}
}
} // namespace gamemd

// 0x6379C0
namespace gamemd {
char sub_6379C0()
{
{
    char result;
    result = DataGlobal_AC4CF4;
    if ( !DataGlobal_AC4CF4 )
  {
    DataGlobal_AC4CF4 = 1;
    result = PlayVocClass(g_RulesClass_Instance->MindClearedSound, 0x2000, 1.0, 0);
    if ( DataGlobal_AC4B80 )
    return (**(int (__thiscall ***)(int, int, int))DataGlobal_AC4B80)(DataGlobal_AC4B80, 4551, 0);
  }
    return result;
}
}
} // namespace gamemd

// 0x63A120
namespace gamemd {
int sub_63A120(char a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_63A120(char a1, char a2)
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
    result = MEMORY[0xAC4BF4][v2] + 1; /*0x63a140*/
  else
    result = 1; /*0x63a143*/
  if ( MEMORY[0xAC4BF4][v2] < result ) /*0x63a153*/
  {
    if ( a2 ) /*0x63a157*/
    {
      if ( a1 ) /*0x63a165*/
        v4 = (wchar_t *)MEMORY[0x836CD0]; /*0x63a169*/
      else
        v4 = (wchar_t *)MEMORY[0x836CB4]; /*0x63a172*/
    }
    else
    {
      v4 = MEMORY[0x836C9C]; /*0x63a185*/
    }
    StringCSF = GetStringCSF(v4, 0, MEMORY[0x836BD4], 3233); /*0x63a18a*/
    result = AddMessageListPlayerMessage(StringCSF, 480); /*0x63a196*/
    ++MEMORY[0xAC4BF4][v2]; /*0x63a19b*/
  }
  return result; /*0x63a1a2*/
}
}
} // namespace gamemd

// 0x63AC60
namespace gamemd {
IUnknown * UI_Delete_Delete_63AC60()
{
{
    return (IUnknown *)*(&g_MatrixTransformState + 6008);
}
}
} // namespace gamemd

// 0x6D0E60
namespace gamemd {
void sub_6D0E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D0E60()
{
  void *v0; // esi
  int *v1; // eax
  int v2[2]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v3[16]; // [esp+Ch] [ebp-10h] BYREF

  v0 = MEMORY[0xB0FB08]; /*0x6d0e73*/
  v2[0] = 0; /*0x6d0e7b*/
  v2[1] = 0; /*0x6d0e7f*/
  v1 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v3); /*0x6d0e91*/
  DrawToSurfaceSHP(MEMORY[0x887300], MEMORY[0x87F6CC], (int)v0, 0, v2, v1, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0ea9*/
  MEMORY[0xB0B518] = 1; /*0x6d0eae*/
}
}
} // namespace gamemd

// 0x72AFF0
namespace gamemd {
int sub_72AFF0()
{
{
    return DataGlobal_B0FB68;
}
}
} // namespace gamemd

// 0x72B010
namespace gamemd {
int sub_72B010()
{
{
    return DataGlobal_B0FB70;
}
}
} // namespace gamemd

// 0x72B030
namespace gamemd {
int sub_72B030()
{
{
    return DataGlobal_B0FB60;
}
}
} // namespace gamemd

// 0x72E260
namespace gamemd {
char sub_72E260()
{
{
    return DataGlobal_B0FBE0;
}
}
} // namespace gamemd

// 0x72E730
namespace gamemd {
void UI_Draw_72E730(ConvertClass * aP0, int * a1, int a3, int aP2, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Draw_72E730(ConvertClass *aP0, int *a1, int a3, int aP2, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h]
  _DWORD v10[2]; // [esp+8h] [ebp-10h] BYREF
  ConvertClass *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v5 = a1[3]; /*0x72e736*/
  v10[0] = *a1; /*0x72e739*/
  v6 = a1[1]; /*0x72e73d*/
  v8 = 0; /*0x72e740*/
  v10[1] = v6; /*0x72e748*/
  v7 = a1[2]; /*0x72e74c*/
  v9 = 0; /*0x72e754*/
  v11 = (ConvertClass *)v7; /*0x72e75c*/
  v12 = v5; /*0x72e760*/
  if ( v7 > 800 ) /*0x72e764*/
    v11 = (ConvertClass *)((v7 - 800) / 2 + 800); /*0x72e775*/
  if ( v5 > 600 ) /*0x72e77f*/
    v12 = (v5 - 600) / 2 + 600; /*0x72e791*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e79d*/
  v9 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e7a4*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72e7b2*/
    DrawToSurfaceSHP( /*0x72e7df*/
      (int)aP0,
      a3,
      (ConvertClass *)aP2,
      0,
      (ConvertClass *)&v8,
      (ConvertClass *)v10,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e815*/
      (int)aP0,
      a3,
      (ConvertClass *)a5,
      0,
      (ConvertClass *)&v8,
      (ConvertClass *)v10,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
}
}
} // namespace gamemd

// 0x72E860
namespace gamemd {
void UI_Draw_72E860(int a1, ConvertClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Draw_72E860(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e86c*/
  v3 = 0; /*0x72e870*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20464]; /*0x72e877*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20464] + 4); /*0x72e87e*/
  DrawToSurfaceSHP( /*0x72e8a8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[19896],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x72E8C0
namespace gamemd {
void UI_Draw_72E8C0(int a1, ConvertClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Draw_72E8C0(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e8cc*/
  v3 = 0; /*0x72e8d0*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20476]; /*0x72e8d7*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 4); /*0x72e8de*/
  DrawToSurfaceSHP( /*0x72e909*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[20180],
    1u,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x72E920
namespace gamemd {
void UI_Draw_72E920(int a1, ConvertClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Draw_72E920(int a1, ConvertClass *a2)
{
  int v2; // edi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x72e92c*/
  v4 = 0; /*0x72e930*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e934*/
  v3 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e936*/
  v4 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e93d*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] >= 800 ) /*0x72e94b*/
    v3 = v2 + 80; /*0x72e952*/
  DrawToSurfaceSHP( /*0x72e97d*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20356],
    *(ConvertClass **)&stru_B05488.__pad_579C[20188],
    0,
    (ConvertClass *)&v3,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x60B1D0
namespace gamemd {
BOOL UI_Get_60B1D0(HWND hWnd, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall UI_Get_60B1D0(HWND hWnd, HWND a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  LONG right; // ecx
  int v6; // edi
  LONG top; // esi
  int v8; // ebx
  HWND *v9; // eax
  int v10; // eax
  _DWORD *v12; // eax
  HWND v13; // [esp+10h] [ebp-2Ch] BYREF
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v17; // [esp+2Ch] [ebp-10h] BYREF

  v13 = a2; /*0x60b1d9*/
  Parent = GetParent(hWnd); /*0x60b1e9*/
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b1f0*/
  GetWindowRect(Parent, &Rect); /*0x60b1fe*/
  GetWindowRect(hWnd, &v17); /*0x60b206*/
  right = Rect.right; /*0x60b20a*/
  v15 = 0; /*0x60b214*/
  if ( !GameSpeed )
    v15 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
  v14 = 0; /*0x60b244*/
  if ( !GameSpeed )
    v14 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
        - ((*((_DWORD *)v13 + 1) - 600) / 2 < 0 ? 0 : (*((_DWORD *)v13 + 1) - 600) / 2);
  v6 = v17.right - v17.left; /*0x60b296*/
  top = v17.top; /*0x60b298*/
  v8 = v17.bottom - v17.top; /*0x60b29c*/
  v13 = hWnd; /*0x60b29e*/
  if ( MEMORY[0xAC1B04] ) /*0x60b2a4*/
  {
    v9 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b2c5*/
    if ( v9 ) /*0x60b2ca*/
    {
      while ( *v9 != v13 ) /*0x60b2d2*/
      {
        v9 = (HWND *)v9[129]; /*0x60b2d4*/
        if ( !v9 ) /*0x60b2dc*/
          goto LABEL_9; /*0x60b2dc*/
      }
      v12 = v9 + 1; /*0x60b327*/
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
} // namespace gamemd

// 0x63AB00
namespace gamemd {
char sub_63AB00(int a1, int a2)
{
{
    int v2;
    LOBYTE(v2) = DataGlobal_AC4CF4;
    DataGlobal_AC4CB0 = 0;
    if ( DataGlobal_AC4CF4 )
  {
    if ( (int)g_SelectionManager <= 0 )
    {
    if ( g_ScriptActionPool )
      {
    v2 = abs32(a1 - DataGlobal_AC4C68);
    if ( v2 <= 3 )
        {
    v2 = abs32(a2 - DataGlobal_AC4C6C);
    if ( v2 <= 3 )
    g_ScriptActionPool = 0;
        }
      }
    }
  }
    return v2;
}
}
} // namespace gamemd

// 0x602B90
namespace gamemd {
bool UI_Helper_602B90(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall UI_Helper_602B90(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602b9c*/
  if ( !MEMORY[0xAC1B04] ) /*0x602ba0*/
    goto LABEL_5; /*0x602ba0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602bc1*/
  if ( !v3 ) /*0x602bc6*/
    goto LABEL_5; /*0x602bc6*/
  while ( *v3 != v8 ) /*0x602bce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602bd4*/
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
} // namespace gamemd

// 0x603240
namespace gamemd {
BOOL UI_Helper_603240(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall UI_Helper_603240(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60324c*/
  if ( !MEMORY[0xAC1B04] ) /*0x603250*/
    goto LABEL_5; /*0x603250*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603271*/
  if ( !v3 ) /*0x603276*/
    goto LABEL_5; /*0x603276*/
  while ( *v3 != v8 ) /*0x60327e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603284*/
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
} // namespace gamemd

// 0x60D2C0
namespace gamemd {
unsigned int * sub_60D2C0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_60D2C0(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x60d2c1*/
  v4 = a1; /*0x60d2cb*/
  if ( MEMORY[0xAC1B04] ) /*0x60d2cf*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60d2f0*/
    if ( result ) /*0x60d2f5*/
    {
      while ( *result != v4 ) /*0x60d2fd*/
      {
        result = (_DWORD *)result[129]; /*0x60d2ff*/
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
} // namespace gamemd

// 0x6217E0
namespace gamemd {
void UI_Helper_6217E0(ObjectClass * aP0, ObjectClass * aP1, short a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Helper_6217E0(ObjectClass *aP0, ObjectClass *aP1, __int16 a3, int a4)
{
  ObjectClass *v4; // esi
  ObjectClass *v5; // ebp
  int v6; // ebx
  __int16 v7; // di
  int v8; // ecx
  int v9; // eax
  __int16 *v10; // ecx
  int v11; // eax
  unsigned __int8 v12; // al
  __int16 v13; // si
  unsigned int v14; // ebp
  __int16 v15; // di
  int v16; // ecx
  unsigned int v17; // eax
  bool v18; // zf
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  __int16 *v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  __int16 v25; // [esp+24h] [ebp-Ch]
  int v28; // [esp+38h] [ebp+8h]

  v4 = aP0; /*0x6217ea*/
  v5 = aP1; /*0x6217ec*/
  v6 = (*(_DWORD *)&aP0->__pad_0[8] * a4) >> 16; /*0x6217fa*/
  v19 = 1; /*0x6217fd*/
  v20 = v6; /*0x621805*/
  if ( v6 >= 0 ) /*0x621809*/
  {
    if ( !v6 ) /*0x621811*/
    {
      v6 = 1; /*0x621813*/
      v20 = 1; /*0x621818*/
    }
    v24 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x62182c*/
    if ( v24 ) /*0x621830*/
    {
      v28 = 0; /*0x621839*/
      if ( *(int *)&v4->__pad_0[12] > 0 ) /*0x621843*/
      {
        v7 = a3; /*0x62184a*/
        do /*0x6219b1*/
        {
          v8 = *(_DWORD *)v4->__pad_0 /*0x62186b*/
             + (v28 + *(_DWORD *)&v4->__pad_0[4])
             * ((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 116))(v5)
              / 2);
          v9 = *(_DWORD *)&v4->__pad_0[12] / 4; /*0x621876*/
          if ( v28 == 3 * v9 ) /*0x621880*/
            v19 = 1; /*0x621882*/
          if ( v28 == v9 ) /*0x62188e*/
            v19 = 0; /*0x621890*/
          if ( v6 > 0 ) /*0x62189a*/
          {
            v23 = v6; /*0x6218a4*/
            v10 = (__int16 *)(v24 + 2 * v8); /*0x6218a8*/
            v11 = 255; /*0x6218ab*/
            v21 = v10; /*0x6218b0*/
            v22 = 255; /*0x6218b4*/
            do /*0x62199d*/
            {
              if ( v19 ) /*0x6218be*/
              {
                v12 = v11 / *(_DWORD *)&v4->__pad_0[8]; /*0x6218c5*/
                v13 = *v10; /*0x6218d8*/
                v25 = v7; /*0x6218e7*/
                g_GameScreenFlags = v12; /*0x6218fc*/
                g_GameScreenConfig = 255 - v12; /*0x621908*/
                v14 = (unsigned int)*(&g_MatrixTransformState + 5802) /*0x62192d*/
                    & ((g_GameScreenConfig * (unsigned __int16)(v13 & *(_WORD *)(&g_MatrixTransformState + 5802))
                      + v12 * (unsigned int)(unsigned __int16)(v7 & *(_WORD *)(&g_MatrixTransformState + 5802))) >> 8);
                v15 = *((_WORD *)&g_MatrixTransformState + 11605) /*0x621946*/
                    & ((g_GameScreenConfig * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v13)
                      + v12 * (unsigned int)(unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v7)) >> 8);
                v16 = g_GameScreenConfig * (unsigned __int16)(v13 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621958*/
                v4 = aP0; /*0x62195b*/
                v6 = v20; /*0x62195f*/
                v17 = v16 + v12 * (unsigned __int16)(v25 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621963*/
                v10 = v21; /*0x621965*/
                LOWORD(v14) = v15 | v14; /*0x621969*/
                v7 = a3; /*0x62196b*/
                *v21 = (v17 >> 8) | v14; /*0x621974*/
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
        while ( v28 < *(_DWORD *)&v4->__pad_0[12] ); /*0x6219b1*/
      }
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x6219bd*/
    }
  }
}
}
} // namespace gamemd

// 0x72B050
namespace gamemd {
int sub_72B050()
{
{
    return DataGlobal_B0FB78;
}
}
} // namespace gamemd

// 0x72CC80
namespace gamemd {
int sub_72CC80()
{
{
    return DataGlobal_B0FC78;
}
}
} // namespace gamemd

// 0x72DAC0
namespace gamemd {
int sub_72DAC0()
{
{
    return DataGlobal_B0FCB4;
}
}
} // namespace gamemd

// 0x72DAD0
namespace gamemd {
int sub_72DAD0()
{
{
    return DataGlobal_B0FCBC;
}
}
} // namespace gamemd

// 0x72E2A0
namespace gamemd {
int sub_72E2A0()
{
{
    return DataGlobal_B0FBD4;
}
}
} // namespace gamemd

// 0x72E2C0
namespace gamemd {
int sub_72E2C0()
{
{
    return DataGlobal_B0FBDC;
}
}
} // namespace gamemd

// 0x72F4B0
namespace gamemd {
int sub_72F4B0()
{
{
    return DataGlobal_B0FBE8;
}
}
} // namespace gamemd

// 0x7BA2C0
namespace gamemd {
void sub_7BA2C0()
{
{
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
}
}
} // namespace gamemd

// 0x6BA120
namespace gamemd {
char sub_6BA120(int a1, int a2, char * Source)
{
{
    return LoadPaletteFromFile(a1, a2, Source, 1, 1);
}
}
} // namespace gamemd

// 0x6D0FD0
namespace gamemd {
int sub_6D0FD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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

  v0 = (int *)&MEMORY[0xB0C1C0]; /*0x6d0fd4*/
  do /*0x6d0fef*/
  {
    ShapeButton::SetShape((int)v0, 0, 0, 0); /*0x6d0fe1*/
    v0 += 24; /*0x6d0fe6*/
  }
  while ( (int)v0 < (int)&MEMORY[0xB0CB20] ); /*0x6d0fef*/
  v1 = 0; /*0x6d0ffc*/
  v2 = *((_DWORD *)MEMORY[0xB0FC64] + 2) + *(_DWORD *)MEMORY[0xB0FC64]; /*0x6d100b*/
  do /*0x6d10a6*/
  {
    v3 = MEMORY[0xB0CB78][v1]; /*0x6d1012*/
    if ( v3 <= 0x18 ) /*0x6d101b*/
    {
      v4 = (char *)&MEMORY[0xB0C1C0] + 96 * v3; /*0x6d102c*/
      if ( v4 ) /*0x6d1034*/
      {
        v5 = *(_DWORD *)MEMORY[0xB0FC68] + MEMORY[0xB0CC38] * v3; /*0x6d1045*/
        v6 = MEMORY[0xB0CC24]; /*0x6d1047*/
        if ( v5 + *((_DWORD *)MEMORY[0xB0FC68] + 2) <= v2 ) /*0x6d1062*/
        {
          *((_DWORD *)v4 + 9) = v1 + 214; /*0x6d106c*/
          *((_DWORD *)v4 + 20) = MEMORY[0x87F6CC]; /*0x6d1075*/
          v4[45] = 0; /*0x6d1078*/
          *((_DWORD *)v4 + 12) = 0; /*0x6d107b*/
          *((_DWORD *)v4 + 8) = 5; /*0x6d107e*/
          (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v4 + 100))(v4, v5, v6); /*0x6d108b*/
          (*(void (__thiscall **)(char *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 136))(v4, MEMORY[0xB0C148][v1], 0, 0); /*0x6d109c*/
        }
      }
    }
    ++v1; /*0x6d10a2*/
  }
  while ( v1 < 25 ); /*0x6d10a6*/
  v7 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d10b5*/
  if ( v7 <= 0x18 ) /*0x6d10be*/
  {
    v8 = (char *)&MEMORY[0xB0C1C0] + 96 * v7; /*0x6d10cb*/
    if ( v8 ) /*0x6d10d2*/
    {
      *((_DWORD *)v8 + 12) = 1; /*0x6d10d9*/
      v8[64] = 1; /*0x6d10dc*/
    }
  }
  v9 = MEMORY[0xB0CC20]; /*0x6d10df*/
  result = MEMORY[0xB0CD28]; /*0x6d10e5*/
  if ( MEMORY[0xB0CC20] <= MEMORY[0xB0CD28] ) /*0x6d10ec*/
  {
    v11 = (int *)(4 * MEMORY[0xB0CC20] + 11586424); /*0x6d10ee*/
    do /*0x6d1122*/
    {
      v12 = *v11; /*0x6d10fa*/
      if ( *v11 >= 0 && v12 < 25 ) /*0x6d1103*/
      {
        v13 = (char *)&MEMORY[0xB0C1C0] + 96 * v12; /*0x6d110b*/
        if ( v13 ) /*0x6d1112*/
          *((_DWORD *)v13 + 8) = 85; /*0x6d1114*/
      }
      result = MEMORY[0xB0CD28]; /*0x6d1117*/
      ++v9; /*0x6d111c*/
      ++v11; /*0x6d111d*/
    }
    while ( v9 <= MEMORY[0xB0CD28] ); /*0x6d1122*/
  }
  return result; /*0x6d1124*/
}
}
} // namespace gamemd

// 0x72F430
namespace gamemd {
char sub_72F430()
{
{
    return DataGlobal_B0FC0C;
}
}
} // namespace gamemd

// 0x72F4A0
namespace gamemd {
CCINIClass * UI_Load_72F4A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *UI_Load_72F4A0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20416]; /*0x72f4a5*/
}
}
} // namespace gamemd

// 0x72F4E0
namespace gamemd {
CCINIClass * UI_Load_72F4E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *UI_Load_72F4E0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20440]; /*0x72f4e5*/
}
}
} // namespace gamemd

// 0x639DA0
namespace gamemd {
int sub_639DA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_639DA0()
{
  wchar_t *v0; // ebx
  int v1; // edi
  _BYTE *v2; // esi

  v0 = MEMORY[0xA8ECC8]; /*0x639da2*/
  v1 = 0; /*0x639dae*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x639db2*/
    return -1; /*0x639e1b*/
  while ( 1 ) /*0x639db9*/
  {
    v2 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v1); /*0x639db9*/
    if ( !v2 || (v2[20] & 1) == 0 ) /*0x639dca*/
      break; /*0x639dca*/
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 1212))(v2) ) /*0x639dd8*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 2 ) /*0x639def*/
        return 0; /*0x639df8*/
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 44))(v2) == 6 ) /*0x639e03*/
        return 1; /*0x639e0f*/
      return 2; /*0x639e03*/
    }
    if ( ++v1 >= (int)v0 ) /*0x639ddd*/
      return -1; /*0x639ddd*/
  }
  return 2; /*0x639df1*/
}
}
} // namespace gamemd

// 0x642E40
namespace gamemd {
int E4Recv_642E40::UI_Render_642E40()
{
{
    int Default;
    int v2;
    int result;
    int *v4;
    int *v5;
    Default = BuildingType::FindDefault(0);
    v2 = Default;
    if ( Default )
  {
    *v4 = (*(int (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    result = (*(int (__thiscall **)(int))(*(int *)(v2) + 128))(v2);
    *v5 = result;
  }
    else
  {
    *v4 = 0;
    *v5 = 0;
    return (int)v4;
  }
    return result;
}
}
} // namespace gamemd

// 0x642E80
namespace gamemd {
int sub_642E80(int * a1, unsigned int * a2)
{
{
    int Instance;
    short *v4;
    int v5;
    int result;
    char v8[30];
    short v9;
    Instance = TextRenderer::GetInstance();
    v4 = v8;
    v5 = 15;
    do
  {
    *v4++ = *(short *)CharToWideString(g_Str_W);
    --v5;
  }
    while ( v5 );
    v9 = 0;
    *a1 = Text::MeasureWidth((int)v8, 0);
    result = *(int *)(Instance + 28);
    *a2 = result;
    return result;
}
}
} // namespace gamemd

// 0x643670
namespace gamemd {
int * E4Recv_643670::UI_Render_643670()
{
{
    AbstractClass *Instance;
    short *v2;
    int v3;
    int v4;
    int referenceCount;
    int v7;
    int v8[4];
    char v9[30];
    short v10;
    int v11;
    int v12;
    size_t v13;
    int v14;
    int v15;
    Instance = TextRenderer::GetInstance();
    v2 = v9;
    v3 = 15;
    do
  {
    *v2++ = *(short *)CharToWideString(g_Str_W);
    --v3;
  }
    while ( v3 );
    v10 = 0;
    v4 = Text::MeasureWidth((int)v9, 0);
    referenceCount = Instance->referenceCount;
    if ( v15 != -1 )
    v4 = v15;
    v8[2] = v4 + v11;
    v8[3] = referenceCount + v12;
    v8[0] = 0;
    v8[1] = 0;
    return TextRenderer::DrawText(&v7, v13, (int)g_DSurface_Hidden, v8, (int)&v11, v14, 0, 25);
}
}
} // namespace gamemd

// 0x5E2340
namespace gamemd {
HWND sub_5E2340()
{
{
    HWND Current;
    HWND DlgItem;
    HWND result;
    wchar_t *StringCSF;
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1439);
    result = (HWND)SendMultiplayerStartSignal_Start(0);
    if ( result != (HWND)1 )
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1);
    StringCSF = GetStringCSF(DataGlobal_83168C, 0, g_Str_File_netdlg2_cpp, 5300);
    return Dialog::ShowMessage(-1, (size_t)StringCSF);
  }
    return result;
}
}
} // namespace gamemd

// 0x5EBDD0
namespace gamemd {
void UI_Setup_5EBDD0(SkirmishDialog * aP0, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UI_Setup_5EBDD0(SkirmishDialog *aP0, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
    && !Network::IsMultiplayerActive() )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      v6 = !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ? 6 : 2;
    else
      v6 = 8; /*0x5ebe1b*/
    if ( a2 > v6 ) /*0x5ebe22*/
      a2 = v6; /*0x5ebe24*/
  }
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 64))(a4) || Network::IsMultiplayerActive() ) /*0x5ebe37*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5ebe47*/
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
  if ( v8 - a2 <= 0 ) /*0x5ebe84*/
  {
    if ( v8 - a2 < 0 ) /*0x5ebe9c*/
      DisableCampaignSlots((HWND)aP0, v8); /*0x5ebea0*/
    Lobby::SetupPlayerWidgets((HWND)aP0); /*0x5ebea7*/
  }
  else
  {
    UpdateMultiplayerLobbySlots((HWND)aP0, (char *)a2, v8 - a2); /*0x5ebe8b*/
    Lobby::SetupPlayerWidgets((HWND)aP0); /*0x5ebe92*/
  }
}
}
} // namespace gamemd

// 0x77CF40
namespace gamemd {
BOOL sub_77CF40()
{
{
    return g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2;
}
}
} // namespace gamemd

// 0x7930A0
namespace gamemd {
bool sub_7930A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7930bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7930c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7930f6*/
  return _strcmpi(byte_B777D4, v3) == 0; /*0x7930dc*/
}
}
} // namespace gamemd

// 0x793930
namespace gamemd {
ObjectClass * UI_Setup_793930(void * a1, void * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall UI_Setup_793930(void *a1, void *a2, int a3)
{
  int v5; // edi
  SessionClass *v6; // esi
  char *v7; // eax
  char *v8; // eax
  ObjectClass *result; // eax
  int v10; // edx
  void *lineTrailer; // ecx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = -1; /*0x793938*/
  v12 = -1; /*0x79393c*/
  Debug::Log(); /*0x793952*/
  v5 = 0; /*0x79395a*/
  v6 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x79395c*/
  do /*0x79399d*/
  {
    v7 = ToWideStringChar((IUnknown *)v6->GameMode[0]); /*0x793964*/
    if ( !_strcmpi(v7, a1) ) /*0x79396a*/
      v13 = v5; /*0x793976*/
    v8 = ToWideStringChar((IUnknown *)v6->GameMode[0]); /*0x79397d*/
    result = (ObjectClass *)_strcmpi(v8, a2); /*0x793983*/
    if ( !result ) /*0x79398d*/
      v12 = v5; /*0x79398f*/
    v6 = (SessionClass *)((char *)v6 + 4); /*0x793993*/
    ++v5; /*0x793996*/
  }
  while ( (int)v6 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x79399d*/
  v10 = 0; /*0x7939a5*/
  if ( *(int *)&HouseClass_Player.__pad_5568[19864] > 0 ) /*0x7939a9*/
  {
    result = (ObjectClass *)&HouseClass_Player.__pad_5568[18844]; /*0x7939ab*/
    while ( 1 ) /*0x7939b0*/
    {
      lineTrailer = result[-1].lineTrailer; /*0x7939b0*/
      if ( lineTrailer == (void *)v13 && *(_DWORD *)result->__pad_0 == v12 ) /*0x7939c3*/
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[8 * v10 + 19352] = a3; /*0x7939e8*/
        return result; /*0x7939f3*/
      }
      if ( lineTrailer == (void *)v12 && *(_DWORD *)result->__pad_0 == v13 ) /*0x7939cd*/
        break; /*0x7939cd*/
      ++v10; /*0x7939cf*/
      result = (ObjectClass *)((char *)result + 8); /*0x7939d0*/
      if ( v10 >= *(int *)&HouseClass_Player.__pad_5568[19864] ) /*0x7939d5*/
        return result; /*0x7939d5*/
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[8 * v10 + 19356] = a3; /*0x7939fa*/
    return (ObjectClass *)a3; /*0x7939f6*/
  }
  return result; /*0x7939d7*/
}
}
} // namespace gamemd

// 0x793A10
namespace gamemd {
ObjectClass * UI_Setup_793A10(void * a1, short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall UI_Setup_793A10(void *a1, __int16 a2)
{
  int v4; // edi
  SessionClass *v5; // esi
  char *v6; // eax
  ObjectClass *result; // eax

  Debug::Log(); /*0x793a26*/
  v4 = 0; /*0x793a2e*/
  v5 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar((IUnknown *)v5->GameMode[0]); /*0x793a38*/
    result = (ObjectClass *)_strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    v5 = (SessionClass *)((char *)v5 + 4); /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x793a54*/
      return result; /*0x793a54*/
  }
  *(_WORD *)&HouseClass_Player.__pad_5568[2 * v4 + 19868] = a2; /*0x793a5b*/
  return result; /*0x793a56*/
}
}
} // namespace gamemd

// 0x7A2750
namespace gamemd {
void sub_7A2750()
{
{
    HWND Current;
    HWND DlgItem;
    bool v2;
    wchar_t *StringCSF;
    void *v4;
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1439);
    String::Assign((char **)&v4, 0);
    v2 = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v4) != 1;
    DeleteAndZero(&v4);
    if ( v2 )
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1);
    StringCSF = GetStringCSF(DataGlobal_83168C, 0, g_Str_File_wonline_cpp, 29202);
    Dialog::ShowMessage(-1, (size_t)StringCSF);
  }
}
}
} // namespace gamemd

// 0x7B83E0
namespace gamemd {
wchar_t ** sub_7B83E0(wchar_t ** a1, const char ** a2)
{
{
    unsigned int v4;
    unsigned int v5;
    wchar_t *v6;
    char *v7;
    size_t v8;
    wchar_t *v9;
    wchar_t *v10;
    size_t v11;
    wchar_t *v12;
    if ( *a2 )
    v4 = strlen(*a2);
    else
    v4 = 0;
    v5 = (int)(((7 * (v4 + 1)) >> 3) + 1) / 2;
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2);
    v7 = (char *)*a2;
    if ( !*a2 )
    v7 = &g_INI_DefaultBuffer;
    BinkMovieClass::OpenFile((unsigned char *)v7, v6, v5);
    if ( v6 )
    v8 = wcslen(v6) + 1;
    else
    v8 = 1;
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8);
    v10 = v9;
    *v9 = 0;
    if ( v6 )
    wcscpy(v9, v6);
    __3_YAXPAX_Z(v6);
    *a1 = 0;
    if ( v10 )
  {
    v11 = wcslen(v10);
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2);
    *a1 = v12;
    wcscpy(v12, v10);
    __3_YAXPAX_Z(v10);
  }
    return a1;
}
}
} // namespace gamemd

// 0x6AC480
namespace gamemd {
char sub_6AC480(int a1, int * a2, unsigned int * a3, int a4)
{
{
    char result;
    int v5;
    int v6;
    int BuildingAnimByName;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    short *v13;
    char v14[4];
    int v15;
    int v16;
    int v17;
    short v18;
    unsigned char v19;
    int v20;
    int v21[4];
    result = DataGlobal_884B8C;
    v15 = a1;
    if ( DataGlobal_884B8C )
  {
    if ( a1 )
    {
    v5 = *((int*)(a2) + 1);
    v6 = aP0;
    v20 = *a2;
    BuildingAnimByName = FindBuildingAnimByName(DataGlobal_836ED8, 1);
    v8 = Color::ConvertToRGB((unsigned char *)(BuildingAnimByName + 776), (int)v14);
    v18 = *(short *)v8;
    v19 = *(char *)(v8 + 2);
    v9 = ((unsigned char)v18 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
    | (v19 >> g_BitMask_Red << g_BitShift_Blue);
    v10 = *((int*)(a3) + 2);
    v11 = *((int*)(a3) + 1);
    v21[0] = *a3;
    v12 = *((int*)(a3) + 3);
    v21[1] = v11;
    v21[3] = v11 + v12;
    v21[2] = v21[0] + v10;
    Char::Swap((char *)v6, 1);
    TextGroup::SetRect((int *)v6, v21);
    Property::Set((short *)v6, v9);
    v13 = (short *)v15;
    Text::Layout((int *)v6, (unsigned short *)v15, &v17, &v16, a4);
    return Font::Print(v6, DSurface_Sidebar, v13, v20, *(int *)(v6 + 28) - v16 + v5, a4, 0, 0, 0, 0);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x72F4D0
namespace gamemd {
int sub_72F4D0()
{
{
    return DataGlobal_B0FC08;
}
}
} // namespace gamemd
