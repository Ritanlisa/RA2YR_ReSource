// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5C0630_e4.hpp"
#include "e4/classes/E4Recv_5C0E10_e4.hpp"
#include "e4/classes/E4Recv_5C5D20_e4.hpp"
#include "e4/classes/E4Recv_5C60D0_e4.hpp"
#include "e4/classes/E4Recv_5C6190_e4.hpp"
#include "e4/classes/E4Recv_5C8470_e4.hpp"
#include "e4/classes/E4Recv_5C9420_e4.hpp"
#include "e4/classes/E4Recv_5CA670_e4.hpp"
#include "e4/classes/E4Recv_5CAE60_e4.hpp"
#include "e4/classes/E4Recv_5CAF00_e4.hpp"
#include "e4/classes/E4Recv_5CAF70_e4.hpp"
#include "e4/classes/E4Recv_5CB3E0_e4.hpp"
#include "e4/classes/E4Recv_5CD690_e4.hpp"
#include "e4/classes/E4Recv_5CE0C0_e4.hpp"
#include "e4/classes/E4Recv_5CE330_e4.hpp"
#include "e4/classes/E4Recv_5CE3A0_e4.hpp"
#include "e4/classes/E4Recv_5CF840_e4.hpp"

// 0x5C00E0
namespace gamemd {
int sub_5C00E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_5C00E0@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  char result; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  int *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = MEMORY[0xABF3F4]; /*0x5c00e0*/
  if ( MEMORY[0xABF3F4] ) /*0x5c00ea*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 24))(MEMORY[0x887310], 0); /*0x5c00fa*/
    Frame::Present(MEMORY[0x887310], a1, a2, a3, 0, v7, v8, v9); /*0x5c0107*/
    result = TestBitArray(15); /*0x5c0111*/
    if ( !result ) /*0x5c0118*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0129*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c013b*/
      v4 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5c0156*/
      v5 = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5c0159*/
      v6 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5c015b*/
      v9 = *(int **)(MEMORY[0xABF3F4] + 60); /*0x5c015e*/
      v8 = v5; /*0x5c0164*/
      v7 = Rect.left + v6; /*0x5c016e*/
      v10 = v4; /*0x5c0172*/
      return (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5c0187*/
               MEMORY[0x887308],
               &v7,
               *(_DWORD *)(MEMORY[0xABF3F4] + 8),
               MEMORY[0xABF3F4] + 36,
               0,
               1);
    }
  }
  return result; /*0x5c018d*/
}
}
} // namespace gamemd

// 0x5C0540
namespace gamemd {
int BinkMovieHandle___vt03(unsigned char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BinkMovieHandle::_vt03(_DWORD **this, unsigned __int8 a2)
{
  return BinkMovie::Pause(*(this + 4), a2); /*0x5c054d*/
}
}
} // namespace gamemd

// 0x5C0630
namespace gamemd {
void E4Recv_5C0630::sub_5C0630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5C0630(_DWORD *this)
{
  *this = &MovieHandle::`vftable'; /*0x5c0630*/
}
}
} // namespace gamemd

// 0x5C07D0
namespace gamemd {
unsigned int * Movie_Create(int a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall Movie_Create(int a1, int a2, int *a3)
{
  int *v4; // eax
  int v5; // ebx
  int v6; // edx
  char *v7; // eax
  int v8; // esi
  _DWORD *result; // eax
  _DWORD *v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // esi
  int v13; // [esp+14h] [ebp-E4h]
  int v14; // [esp+18h] [ebp-E0h]
  int v15; // [esp+1Ch] [ebp-DCh]
  _BYTE v16[16]; // [esp+20h] [ebp-D8h] BYREF
  char Str[200]; // [esp+30h] [ebp-C8h] BYREF

  if ( !a2 || !(unsigned __int8)Render_Play(1) ) /*0x5c07ea*/
    return 0; /*0x5c07f1*/
  v4 = a3; /*0x5c07f7*/
  if ( a3 ) /*0x5c0800*/
  {
    v5 = *a3; /*0x5c0805*/
    v6 = a3[2]; /*0x5c0807*/
    v13 = a3[1]; /*0x5c080a*/
  }
  else
  {
    v4 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v16); /*0x5c0819*/
    v5 = *v4; /*0x5c081c*/
    v13 = v4[1]; /*0x5c0821*/
    v6 = v4[2]; /*0x5c0825*/
  }
  v14 = v6; /*0x5c0832*/
  v15 = v4[3]; /*0x5c0836*/
  v7 = strrchr(Str, 46); /*0x5c083a*/
  if ( v7 && !_strcmpi(v7, aBik) ) /*0x5c084c*/
  {
    Debug::Log(aPlayMovieAsBin); /*0x5c085d*/
    if ( __2_YAPAXI_Z(0x34u) ) /*0x5c0864*/
      v8 = BinkMovie::Open(Str, a2); /*0x5c087d*/
    else
      v8 = 0; /*0x5c0881*/
    result = __2_YAPAXI_Z(0x14u); /*0x5c0885*/
    if ( result ) /*0x5c088f*/
    {
      *result = &BinkMovieHandle::`vftable'; /*0x5c0897*/
      result[4] = v8; /*0x5c089d*/
      if ( v8 ) /*0x5c08a0*/
      {
        result[2] = **(_DWORD **)(v8 + 4); /*0x5c08ab*/
        result[3] = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4); /*0x5c08b4*/
      }
      return result; /*0x5c08c1*/
    }
    return 0; /*0x5c0964*/
  }
  v10 = (_DWORD *)LoadVQMovie(Str, 0, 0, 0, 0, v5, v13, v14, v15, 255, 0); /*0x5c090a*/
  if ( !v10 ) /*0x5c090e*/
    return 0; /*0x5c090e*/
  v11 = __2_YAPAXI_Z(0x18u); /*0x5c0912*/
  v12 = v11; /*0x5c0917*/
  if ( !v11 ) /*0x5c091e*/
    return 0; /*0x5c0955*/
  v11[20] = 0; /*0x5c0920*/
  *(_DWORD *)v11 = &VQMovieHandle::`vftable'; /*0x5c0924*/
  *((_DWORD *)v11 + 4) = v10; /*0x5c092a*/
  *((_DWORD *)v11 + 2) = MovieClass::GetWidth(*v10); /*0x5c0934*/
  *((_DWORD *)v12 + 3) = MovieClass::GetHeight(**((_DWORD **)v12 + 4)); /*0x5c0941*/
  return v12; /*0x5c08b7*/
}
}
} // namespace gamemd

// 0x5C0E10
namespace gamemd {
void E4Recv_5C0E10::sub_5C0E10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5C0E10(MultiplayerBattle *this)
{
  this->vfptr = &MultiplayerBattle::`vftable'; /*0x5c0e10*/
  MultiplayerGameMode::Dtor(this); /*0x5c0e16*/
}
}
} // namespace gamemd

// 0x5C10F0
namespace gamemd {
void sub_5C10F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C10F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c10fc*/
  MEMORY[0xABF420] = Math::Sqrt(v0 + v0); /*0x5c110e*/
}
}
} // namespace gamemd

// 0x5C1120
namespace gamemd {
void sub_5C1120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1120()
{
  MEMORY[0xABF490] = MEMORY[0xABF420] / 60.0; /*0x5c112c*/
}
}
} // namespace gamemd

// 0x5C1140
namespace gamemd {
void sub_5C1140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1140()
{
  MEMORY[0xABF458] = 1.0 / MEMORY[0xABF490]; /*0x5c114c*/
}
}
} // namespace gamemd

// 0x5C1160
namespace gamemd {
void sub_5C1160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1160()
{
  MEMORY[0xABF450] = 0.0174532925199433 * 45.0; /*0x5c116c*/
}
}
} // namespace gamemd

// 0x5C1180
namespace gamemd {
void sub_5C1180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1180()
{
  MEMORY[0xABF428] = 0.0174532925199433 * 60.0; /*0x5c118c*/
}
}
} // namespace gamemd

// 0x5C11A0
namespace gamemd {
void sub_5C11A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C11A0()
{
  MEMORY[0xABF400] = 0.0174532925199433 * 90.0; /*0x5c11ac*/
}
}
} // namespace gamemd

// 0x5C11C0
namespace gamemd {
long long sub_5C11C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C11C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF400] - MEMORY[0xABF428]); /*0x5c11d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF420] * 0.5); /*0x5c11e6*/
  MEMORY[0xABF498] = result; /*0x5c11eb*/
  return result; /*0x5c11f0*/
}
}
} // namespace gamemd

// 0x5C1200
namespace gamemd {
void sub_5C1200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1200()
{
  MEMORY[0xABF430] = Math::ArcTan((double)MEMORY[0xABF498] * 0.00390625); /*0x5c1217*/
}
}
} // namespace gamemd

// 0x5C1230
namespace gamemd {
void sub_5C1230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C1230()
{
  MEMORY[0xABF448] = Math::ArcTan((double)(2 * MEMORY[0xABF498]) / MEMORY[0xABF420]); /*0x5c1252*/
}
}
} // namespace gamemd

// 0x5C1260
namespace gamemd {
long long sub_5C1260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C1260()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF498]) + 0.5); /*0x5c127b*/
  MEMORY[0xABF48C] = result; /*0x5c1280*/
  return result; /*0x5c1286*/
}
}
} // namespace gamemd

// 0x5C1290
namespace gamemd {
int sub_5C1290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C1290()
{
  MEMORY[0xABF418] = 0; /*0x5c1292*/
  MEMORY[0xABF41A] = 0; /*0x5c1298*/
  return 0; /*0x5c129e*/
}
}
} // namespace gamemd

// 0x5C12A0
namespace gamemd {
int sub_5C12A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C12A0()
{
  MEMORY[0xABF438] = 0; /*0x5c12a2*/
  MEMORY[0xABF43C] = 0; /*0x5c12a7*/
  MEMORY[0xABF440] = 0; /*0x5c12ac*/
  return 0; /*0x5c12b1*/
}
}
} // namespace gamemd

// 0x5C12C0
namespace gamemd {
int sub_5C12C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C12C0()
{
  MEMORY[0xABF488] = 0; /*0x5c12c5*/
  MEMORY[0xABF480] = 128; /*0x5c12cf*/
  MEMORY[0xABF484] = 128; /*0x5c12d4*/
  return 128; /*0x5c12d9*/
}
}
} // namespace gamemd

// 0x5C12E0
namespace gamemd {
int sub_5C12E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C12E0()
{
  MEMORY[0xABF408] = 0; /*0x5c12e2*/
  MEMORY[0xABF40C] = 0; /*0x5c12e7*/
  MEMORY[0xABF410] = 0; /*0x5c12ec*/
  MEMORY[0xABF414] = 0; /*0x5c12f1*/
  return 0; /*0x5c12f6*/
}
}
} // namespace gamemd

// 0x5C17B0
namespace gamemd {
char MPCooperative___vt07(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MPCooperative::_vt07(int *this, int a2)
{
  char v3; // bl
  int v4; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // [esp-8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x5c17c3*/
  v10 = *(this + 207); /*0x5c17c5*/
  v11 = 0; /*0x5c17cb*/
  Movie::GetSection((int)&MEMORY[0x89F518], v10, &v12); /*0x5c17cf*/
  v4 = v12; /*0x5c17d4*/
  if ( !v12 ) /*0x5c17da*/
    return 1; /*0x5c17e4*/
  v6 = *(this + 16); /*0x5c17e7*/
  if ( v6 ) /*0x5c17ec*/
  {
    if ( Movie::GetState(v6, &v11) ) /*0x5c17f3*/
    {
      v7 = v11; /*0x5c180c*/
    }
    else
    {
      v7 = 0; /*0x5c17fc*/
      v11 = 0; /*0x5c17fe*/
    }
    v4 = v12; /*0x5c1810*/
  }
  else
  {
    v7 = 0; /*0x5c1804*/
    v11 = 0; /*0x5c1806*/
  }
  if ( v7 >= *(_DWORD *)(v4 + 32) ) /*0x5c1817*/
    return 1; /*0x5c1821*/
  if ( a2 == -2 ) /*0x5c182b*/
  {
    if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7) + 16) > 1 ) /*0x5c1837*/
      return 1; /*0x5c1841*/
  }
  else if ( a2 == -3 ) /*0x5c1847*/
  {
    return 1; /*0x5c1851*/
  }
  v8 = 0; /*0x5c1857*/
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7); /*0x5c1859*/
  if ( *(int *)(v9 + 16) > 0 ) /*0x5c185f*/
  {
    while ( SideClass::FindByName(*(void **)(*(_DWORD *)(v9 + 4) + 4 * v8)) != a2 ) /*0x5c186e*/
    {
      ++v8; /*0x5c1878*/
      v9 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c187c*/
      if ( v8 >= *(_DWORD *)(v9 + 16) ) /*0x5c1882*/
        return 0; /*0x5c188c*/
    }
    return 1; /*0x5c188f*/
  }
  return v3; /*0x5c17dc*/
}
}
} // namespace gamemd

// 0x5C36F0
namespace gamemd {
int MPCooperative_j__do_always_noconv_codecvt_base_std__MBE_NXZ_17()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
bool __thiscall MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17(std::codecvt_base *this)
{
  return ScenarioClass::processAI(this);
}
}
} // namespace gamemd

// 0x5C5AD0
namespace gamemd {
int sub_5C5AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C5AD0()
{
  MEMORY[0xABF4A8] = 0; /*0x5c5ad2*/
  MEMORY[0xABF4AC] = 0; /*0x5c5ad7*/
  MEMORY[0xABF4B0] = 0; /*0x5c5adc*/
  MEMORY[0xABF4B4] = 0; /*0x5c5ae1*/
  return 0; /*0x5c5ae6*/
}
}
} // namespace gamemd

// 0x5C5AF0
namespace gamemd {
void sub_5C5AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5AF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c5afc*/
  MEMORY[0xABF4C0] = Math::Sqrt(v0 + v0); /*0x5c5b0e*/
}
}
} // namespace gamemd

// 0x5C5B20
namespace gamemd {
void sub_5C5B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5B20()
{
  MEMORY[0xABF510] = MEMORY[0xABF4C0] / 60.0; /*0x5c5b2c*/
}
}
} // namespace gamemd

// 0x5C5B40
namespace gamemd {
void sub_5C5B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5B40()
{
  MEMORY[0xABF4F8] = 1.0 / MEMORY[0xABF510]; /*0x5c5b4c*/
}
}
} // namespace gamemd

// 0x5C5B60
namespace gamemd {
void sub_5C5B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5B60()
{
  MEMORY[0xABF4F0] = 0.0174532925199433 * 45.0; /*0x5c5b6c*/
}
}
} // namespace gamemd

// 0x5C5B80
namespace gamemd {
void sub_5C5B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5B80()
{
  MEMORY[0xABF4C8] = 0.0174532925199433 * 60.0; /*0x5c5b8c*/
}
}
} // namespace gamemd

// 0x5C5BA0
namespace gamemd {
void sub_5C5BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5BA0()
{
  MEMORY[0xABF4A0] = 0.0174532925199433 * 90.0; /*0x5c5bac*/
}
}
} // namespace gamemd

// 0x5C5BC0
namespace gamemd {
long long sub_5C5BC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C5BC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF4A0] - MEMORY[0xABF4C8]); /*0x5c5bd2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF4C0] * 0.5); /*0x5c5be6*/
  MEMORY[0xABF518] = result; /*0x5c5beb*/
  return result; /*0x5c5bf0*/
}
}
} // namespace gamemd

// 0x5C5C00
namespace gamemd {
void sub_5C5C00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5C00()
{
  MEMORY[0xABF4D0] = Math::ArcTan((double)MEMORY[0xABF518] * 0.00390625); /*0x5c5c17*/
}
}
} // namespace gamemd

// 0x5C5C30
namespace gamemd {
void sub_5C5C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5C30()
{
  MEMORY[0xABF4E8] = Math::ArcTan((double)(2 * MEMORY[0xABF518]) / MEMORY[0xABF4C0]); /*0x5c5c52*/
}
}
} // namespace gamemd

// 0x5C5C60
namespace gamemd {
long long sub_5C5C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C5C60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF518]) + 0.5); /*0x5c5c7b*/
  MEMORY[0xABF50C] = result; /*0x5c5c80*/
  return result; /*0x5c5c86*/
}
}
} // namespace gamemd

// 0x5C5C90
namespace gamemd {
int sub_5C5C90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C5C90()
{
  MEMORY[0xABF4B8] = 0; /*0x5c5c92*/
  MEMORY[0xABF4BA] = 0; /*0x5c5c98*/
  return 0; /*0x5c5c9e*/
}
}
} // namespace gamemd

// 0x5C5CA0
namespace gamemd {
int sub_5C5CA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C5CA0()
{
  MEMORY[0xABF4D8] = 0; /*0x5c5ca2*/
  MEMORY[0xABF4DC] = 0; /*0x5c5ca7*/
  MEMORY[0xABF4E0] = 0; /*0x5c5cac*/
  return 0; /*0x5c5cb1*/
}
}
} // namespace gamemd

// 0x5C5CC0
namespace gamemd {
int sub_5C5CC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C5CC0()
{
  MEMORY[0xABF508] = 0; /*0x5c5cc5*/
  MEMORY[0xABF500] = 128; /*0x5c5ccf*/
  MEMORY[0xABF504] = 128; /*0x5c5cd4*/
  return 128; /*0x5c5cd9*/
}
}
} // namespace gamemd

// 0x5C5D20
namespace gamemd {
void E4Recv_5C5D20::sub_5C5D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5C5D20(FreeForAll *this)
{
  this->vfptr = &FreeForAll::`vftable'; /*0x5c5d20*/
  MultiplayerGameMode::Dtor(this); /*0x5c5d26*/
}
}
} // namespace gamemd

// 0x5C5E70
namespace gamemd {
int sub_5C5E70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C5E70()
{
  MEMORY[0xABF528] = 0; /*0x5c5e72*/
  MEMORY[0xABF52C] = 0; /*0x5c5e77*/
  MEMORY[0xABF530] = 0; /*0x5c5e7c*/
  MEMORY[0xABF534] = 0; /*0x5c5e81*/
  return 0; /*0x5c5e86*/
}
}
} // namespace gamemd

// 0x5C5E90
namespace gamemd {
void sub_5C5E90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5E90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c5e9c*/
  MEMORY[0xABF540] = Math::Sqrt(v0 + v0); /*0x5c5eae*/
}
}
} // namespace gamemd

// 0x5C5EC0
namespace gamemd {
void sub_5C5EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5EC0()
{
  MEMORY[0xABF590] = MEMORY[0xABF540] / 60.0; /*0x5c5ecc*/
}
}
} // namespace gamemd

// 0x5C5EE0
namespace gamemd {
void sub_5C5EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5EE0()
{
  MEMORY[0xABF578] = 1.0 / MEMORY[0xABF590]; /*0x5c5eec*/
}
}
} // namespace gamemd

// 0x5C5F00
namespace gamemd {
void sub_5C5F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5F00()
{
  MEMORY[0xABF570] = 0.0174532925199433 * 45.0; /*0x5c5f0c*/
}
}
} // namespace gamemd

// 0x5C5F20
namespace gamemd {
void sub_5C5F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5F20()
{
  MEMORY[0xABF548] = 0.0174532925199433 * 60.0; /*0x5c5f2c*/
}
}
} // namespace gamemd

// 0x5C5F40
namespace gamemd {
void sub_5C5F40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5F40()
{
  MEMORY[0xABF520] = 0.0174532925199433 * 90.0; /*0x5c5f4c*/
}
}
} // namespace gamemd

// 0x5C5F60
namespace gamemd {
long long sub_5C5F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C5F60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF520] - MEMORY[0xABF548]); /*0x5c5f72*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF540] * 0.5); /*0x5c5f86*/
  MEMORY[0xABF598] = result; /*0x5c5f8b*/
  return result; /*0x5c5f90*/
}
}
} // namespace gamemd

// 0x5C5FA0
namespace gamemd {
void sub_5C5FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5FA0()
{
  MEMORY[0xABF550] = Math::ArcTan((double)MEMORY[0xABF598] * 0.00390625); /*0x5c5fb7*/
}
}
} // namespace gamemd

// 0x5C5FD0
namespace gamemd {
void sub_5C5FD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C5FD0()
{
  MEMORY[0xABF568] = Math::ArcTan((double)(2 * MEMORY[0xABF598]) / MEMORY[0xABF540]); /*0x5c5ff2*/
}
}
} // namespace gamemd

// 0x5C6000
namespace gamemd {
long long sub_5C6000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C6000()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF598]) + 0.5); /*0x5c601b*/
  MEMORY[0xABF58C] = result; /*0x5c6020*/
  return result; /*0x5c6026*/
}
}
} // namespace gamemd

// 0x5C6030
namespace gamemd {
int sub_5C6030()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C6030()
{
  MEMORY[0xABF538] = 0; /*0x5c6032*/
  MEMORY[0xABF53A] = 0; /*0x5c6038*/
  return 0; /*0x5c603e*/
}
}
} // namespace gamemd

// 0x5C6040
namespace gamemd {
int sub_5C6040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C6040()
{
  MEMORY[0xABF558] = 0; /*0x5c6042*/
  MEMORY[0xABF55C] = 0; /*0x5c6047*/
  MEMORY[0xABF560] = 0; /*0x5c604c*/
  return 0; /*0x5c6051*/
}
}
} // namespace gamemd

// 0x5C6060
namespace gamemd {
int sub_5C6060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C6060()
{
  MEMORY[0xABF588] = 0; /*0x5c6065*/
  MEMORY[0xABF580] = 128; /*0x5c606f*/
  MEMORY[0xABF584] = 128; /*0x5c6074*/
  return 128; /*0x5c6079*/
}
}
} // namespace gamemd

// 0x5C6080
namespace gamemd {
int sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5c6099*/
  if ( !result ) /*0x5c60a0*/
  {
    if ( a2 == 273 ) /*0x5c60a8*/
      *(_DWORD *)GetWindowLongA(hWnd, 8) = (unsigned __int16)a3; /*0x5c60b9*/
    return 0; /*0x5c60bb*/
  }
  return result; /*0x5c60bd*/
}
}
} // namespace gamemd

// 0x5C60D0
namespace gamemd {
BOOL E4Recv_5C60D0::ShowConfirmDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall ShowConfirmDialog(_WORD *this)
{
  wchar_t *v3; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-14h]
  int v6; // [esp+0h] [ebp-8h]

  StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, aDRa2mdpostMpla, 108); /*0x5c60fa*/
  v3 = GetStringCSF(g_Str_TXT_OK, 0, aDRa2mdpostMpla, 108); /*0x5c6102*/
  return Dialog::ShowMessageBox((int)this, v3, (Movie *)StringCSF, 0, 0, v6) == 0; /*0x5c6116*/
}
}
} // namespace gamemd

// 0x5C6190
namespace gamemd {
void E4Recv_5C6190::sub_5C6190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5C6190(void *this)
{
  *(_DWORD *)this = &MultiplayerManBattle::`vftable'; /*0x5c6190*/
  MultiplayerGameMode::Dtor(this); /*0x5c6196*/
}
}
} // namespace gamemd

// 0x5C6230
namespace gamemd {
int sub_5C6230(unsigned int a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5C6230(unsigned int a1, _BYTE *a2)
{
  int result; // eax
  char v5; // al
  int i; // ecx
  int v7; // esi
  int j; // ecx
  int v9; // ecx
  unsigned int v10; // ebx

  if ( a1 > 0x7F ) /*0x5c623a*/
  {
    v5 = 4; /*0x5c6247*/
    for ( i = 24; i != -8; i -= 8 ) /*0x5c624c*/
    {
      if ( a1 >> i ) /*0x5c6253*/
        break; /*0x5c6257*/
      --v5; /*0x5c625c*/
    }
    v7 = 4; /*0x5c6264*/
    *a2 = v5 | 0x80; /*0x5c6269*/
    result = 1; /*0x5c626b*/
    for ( j = 24; j != -8; j -= 8 ) /*0x5c6270*/
    {
      if ( a1 >> j ) /*0x5c6277*/
        break; /*0x5c627b*/
      --v7; /*0x5c6280*/
    }
    if ( v7 ) /*0x5c6288*/
    {
      v9 = 8 * v7 - 8; /*0x5c628a*/
      do /*0x5c629e*/
      {
        v10 = a1 >> v9; /*0x5c6293*/
        ++result; /*0x5c6295*/
        v9 -= 8; /*0x5c6296*/
        --v7; /*0x5c6299*/
        a2[result - 1] = v10; /*0x5c629a*/
      }
      while ( v7 ); /*0x5c629e*/
    }
  }
  else
  {
    *a2 = a1; /*0x5c623c*/
    return 1; /*0x5c6240*/
  }
  return result; /*0x5c623e*/
}
}
} // namespace gamemd

// 0x5C62B0
namespace gamemd {
int VarInt_Encode(int a1, unsigned char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall VarInt_Encode(int a1, _BYTE *a2, int a3)
{
  unsigned int v4; // eax
  int v5; // edx
  char v6; // dl
  int i; // ecx
  int v8; // edi
  int j; // ecx
  int v10; // esi
  unsigned int v11; // ebx
  _BYTE v13[260]; // [esp+10h] [ebp-104h] BYREF

  v4 = EncodeVarInt_Helper(a3); /*0x5c62c7*/
  *a2 = 2; /*0x5c62cf*/
  if ( v4 > 0x7F ) /*0x5c62d3*/
  {
    v6 = 4; /*0x5c62df*/
    for ( i = 24; i != -8; i -= 8 ) /*0x5c62e4*/
    {
      if ( v4 >> i ) /*0x5c62eb*/
        break; /*0x5c62ef*/
      --v6; /*0x5c62f4*/
    }
    v8 = 4; /*0x5c62fd*/
    a2[1] = v6 | 0x80; /*0x5c6302*/
    v5 = 1; /*0x5c6305*/
    for ( j = 24; j != -8; j -= 8 ) /*0x5c630a*/
    {
      if ( v4 >> j ) /*0x5c6311*/
        break; /*0x5c6315*/
      --v8; /*0x5c631a*/
    }
    if ( v8 ) /*0x5c6322*/
    {
      v10 = 8 * v8 - 8; /*0x5c6324*/
      do /*0x5c6339*/
      {
        v11 = v4 >> v10; /*0x5c632f*/
        ++v5; /*0x5c6331*/
        v10 -= 8; /*0x5c6332*/
        --v8; /*0x5c6335*/
        a2[v5] = v11; /*0x5c6336*/
      }
      while ( v8 ); /*0x5c6339*/
    }
  }
  else
  {
    a2[1] = v4; /*0x5c62d5*/
    v5 = 1; /*0x5c62d8*/
  }
  qmemcpy(&a2[v5 + 1], v13, v4); /*0x5c634a*/
  return v4 + v5 + 1; /*0x5c6357*/
}
}
} // namespace gamemd

// 0x5C6370
namespace gamemd {
char LCW_DecodeLength(int a1, unsigned char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall LCW_DecodeLength(int a1, _BYTE *a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // edx
  int v6; // edi
  unsigned __int8 *v7; // edx
  int v8; // ecx
  int v9; // esi
  char *v10; // ebx
  char v11; // al
  int v12; // edx
  _BYTE *v13; // ecx
  char v14; // dl

  LOBYTE(v3) = *a2; /*0x5c6370*/
  v4 = a2 + 1; /*0x5c6374*/
  if ( (_BYTE)v3 != 2 ) /*0x5c637b*/
    return v3; /*0x5c637b*/
  if ( (char)*v4 < 0 ) /*0x5c6381*/
  {
    v3 = *v4 & 0x7F; /*0x5c638c*/
    v7 = v4 + 1; /*0x5c638f*/
    if ( v3 > 2 ) /*0x5c6393*/
      return v3; /*0x5c6393*/
    v8 = *v7; /*0x5c6397*/
    v4 = v7 + 1; /*0x5c6399*/
    v6 = v8; /*0x5c639d*/
    if ( v3 <= 1 ) /*0x5c639f*/
      goto LABEL_8; /*0x5c639f*/
    v3 = (unsigned __int8)*v4; /*0x5c63a3*/
    v6 = v3 | (v8 << 8); /*0x5c63a8*/
  }
  else
  {
    LOBYTE(v3) = *v4; /*0x5c6383*/
    v6 = (unsigned __int8)*v4; /*0x5c6388*/
  }
  ++v4; /*0x5c63aa*/
LABEL_8:
  v9 = 4 * a3; /*0x5c63ab*/
  if ( v6 <= (unsigned int)(4 * a3) ) /*0x5c63b8*/
  {
    v10 = v4; /*0x5c63bc*/
    v11 = *v4 & 0x80; /*0x5c63be*/
    v12 = v9 - v6; /*0x5c63c6*/
    LOBYTE(v3) = -(v11 != 0); /*0x5c63c8*/
    v13 = (_BYTE *)(v9 + a1); /*0x5c63cd*/
    if ( v9 - v6 > 0 ) /*0x5c63d2*/
    {
      do /*0x5c63d8*/
      {
        --v13; /*0x5c63d4*/
        --v12; /*0x5c63d5*/
        *v13 = v3; /*0x5c63d6*/
      }
      while ( v12 ); /*0x5c63d8*/
    }
    if ( v6 > 0 ) /*0x5c63dc*/
    {
      do /*0x5c63e5*/
      {
        v14 = *v10; /*0x5c63de*/
        --v13; /*0x5c63e0*/
        ++v10; /*0x5c63e1*/
        --v6; /*0x5c63e2*/
        *v13 = v14; /*0x5c63e3*/
      }
      while ( v6 ); /*0x5c63e5*/
    }
  }
  return v3; /*0x5c63e7*/
}
}
} // namespace gamemd

// 0x5C63F0
namespace gamemd {
int sub_5C63F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __userpurge __spoils<ecx> sub_5C63F0@<eax>(
        unsigned int a1@<edx>,
        _BYTE *a2@<ecx>,
        int a3@<ebx>,
        int a4,
        int a5)
{
  _BYTE *v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int i; // ebp
  unsigned int v12; // eax
  char v13; // al

  v5 = a2; /*0x5c63fa*/
  v6 = 4 * a5; /*0x5c63fc*/
  v7 = a1 - 4 * a5; /*0x5c6426*/
  if ( a1 != 4 * a5 ) /*0x5c6428*/
  {
    LOBYTE(a3) = (*(_DWORD *)(4 * a5 + a4 - 4) >= 0) - 1; /*0x5c642b*/
    BYTE1(a3) = a3; /*0x5c642d*/
    v8 = a3 << 16; /*0x5c6435*/
    LOWORD(v8) = a3; /*0x5c6438*/
    memset32(a2, v8, v7 >> 2); /*0x5c643f*/
    memset(&a2[4 * (v7 >> 2)], a3, v7 & 3); /*0x5c644a*/
    v5 = &a2[v7]; /*0x5c6450*/
  }
  v9 = a1; /*0x5c6454*/
  if ( a1 >= v6 ) /*0x5c6456*/
    v9 = 4 * a5; /*0x5c6458*/
  v10 = v9 + a4; /*0x5c645e*/
  for ( i = 0; ; ++i ) /*0x5c6460*/
  {
    v12 = a1; /*0x5c6464*/
    if ( a1 >= v6 ) /*0x5c6466*/
      v12 = 4 * a5; /*0x5c6468*/
    if ( i >= v12 ) /*0x5c646c*/
      break; /*0x5c646c*/
    v13 = *(_BYTE *)--v10; /*0x5c646e*/
    *v5++ = v13; /*0x5c6472*/
  }
  return a1; /*0x5c6478*/
}
}
} // namespace gamemd

// 0x5C6500
namespace gamemd {
char sub_5C6500(int a1, char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C6500(int a1, char *a2, int a3, int a4)
{
  int v4; // esi
  char result; // al
  char *v6; // ecx
  int v7; // esi

  v4 = 4 * a4 - a3; /*0x5c651c*/
  result = -(*a2 < 0); /*0x5c651e*/
  v6 = (char *)(4 * a4 + a1); /*0x5c6523*/
  if ( v4 > 0 ) /*0x5c6527*/
  {
    do /*0x5c652d*/
    {
      --v6; /*0x5c6529*/
      --v4; /*0x5c652a*/
      *v6 = result; /*0x5c652b*/
    }
    while ( v4 ); /*0x5c652d*/
  }
  if ( a3 > 0 ) /*0x5c6531*/
  {
    v7 = a3; /*0x5c6533*/
    do /*0x5c653c*/
    {
      result = *a2; /*0x5c6535*/
      --v6; /*0x5c6537*/
      ++a2; /*0x5c6538*/
      --v7; /*0x5c6539*/
      *v6 = result; /*0x5c653a*/
    }
    while ( v7 ); /*0x5c653c*/
  }
  return result; /*0x5c653e*/
}
}
} // namespace gamemd

// 0x5C6550
namespace gamemd {
char sub_5C6550(int a1, unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C6550(int a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *v4; // ecx
  int v5; // eax
  int v6; // esi

  v4 = (_BYTE *)(4 * a4 + a1); /*0x5c6563*/
  v5 = 4 * a4 - a3; /*0x5c6565*/
  if ( v5 > 0 ) /*0x5c6569*/
  {
    do /*0x5c6570*/
    {
      --v4; /*0x5c656b*/
      --v5; /*0x5c656c*/
      *v4 = 0; /*0x5c656d*/
    }
    while ( v5 ); /*0x5c6570*/
  }
  if ( a3 > 0 ) /*0x5c6574*/
  {
    v6 = a3; /*0x5c6576*/
    do /*0x5c657f*/
    {
      LOBYTE(v5) = *a2; /*0x5c6578*/
      --v4; /*0x5c657a*/
      ++a2; /*0x5c657b*/
      --v6; /*0x5c657c*/
      *v4 = v5; /*0x5c657d*/
    }
    while ( v6 ); /*0x5c657f*/
  }
  return v5; /*0x5c6581*/
}
}
} // namespace gamemd

// 0x5C6660
namespace gamemd {
void BitBuffer_RotateRight(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall BitBuffer_RotateRight(_DWORD *a1, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // edx
  int *v9; // esi
  char v10; // bp
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  char v14; // cl
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ebx
  unsigned int v20; // ebp
  bool v21; // zf
  int v22; // edx
  int i; // edx
  int v24; // ecx
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp+4h]

  v4 = 0; /*0x5c666b*/
  if ( a2 ) /*0x5c666f*/
  {
    if ( a2 == 32 ) /*0x5c6674*/
    {
      v5 = &a1[a3]; /*0x5c667a*/
      if ( a3 ) /*0x5c6682*/
      {
        v6 = a3; /*0x5c6684*/
        do /*0x5c6692*/
        {
          v7 = *--v5; /*0x5c6687*/
          --v6; /*0x5c668d*/
          *v5 = v4; /*0x5c668e*/
          v4 = v7; /*0x5c6690*/
        }
        while ( v6 ); /*0x5c6692*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c669e*/
    {
      v16 = a2 / 32; /*0x5c6715*/
      v17 = a2 % 32; /*0x5c6724*/
      v18 = a3; /*0x5c6725*/
      if ( a2 / 32 < a3 - 1 ) /*0x5c672e*/
      {
        v26 = a3 - 1 - v16; /*0x5c6739*/
        do /*0x5c675d*/
        {
          v19 = a1[v16 + 1]; /*0x5c673d*/
          v20 = a1[v16]; /*0x5c6741*/
          ++a1; /*0x5c6746*/
          v21 = v26 == 1; /*0x5c6755*/
          *(a1 - 1) = (v20 >> v17) | (v19 << (32 - v17)); /*0x5c6756*/
          --v26; /*0x5c6759*/
        }
        while ( !v21 ); /*0x5c675d*/
        v18 = a3; /*0x5c675f*/
      }
      if ( v16 < v18 ) /*0x5c6765*/
      {
        v22 = a1[v16] >> v17; /*0x5c676c*/
        *a1++ = v22; /*0x5c6771*/
      }
      for ( i = 0; ; ++i ) /*0x5c6774*/
      {
        v24 = v16; /*0x5c6778*/
        if ( v16 >= v18 ) /*0x5c677a*/
          v24 = v18; /*0x5c677c*/
        if ( i >= v24 ) /*0x5c6780*/
          break; /*0x5c6780*/
        *a1++ = 0; /*0x5c6786*/
      }
    }
    else
    {
      v27 = 0; /*0x5c66a4*/
      v9 = &a1[a3]; /*0x5c66b6*/
      v10 = 32 - a2; /*0x5c66b9*/
      v11 = a3; /*0x5c66bb*/
      v12 = a3 - 1; /*0x5c66c2*/
      if ( v11 ) /*0x5c66c5*/
      {
        v25 = v12 + 1; /*0x5c66c8*/
        while ( 1 ) /*0x5c66d2*/
        {
          v13 = *--v9; /*0x5c66d2*/
          v14 = v10; /*0x5c66e8*/
          v15 = v27; /*0x5c66ea*/
          v27 = ((1 << a2) - 1) & v13; /*0x5c66ee*/
          *v9 = (v15 << v14) | (v13 >> a2); /*0x5c66f6*/
          if ( !--v25 ) /*0x5c6701*/
            break; /*0x5c6701*/
          v10 = 32 - a2; /*0x5c66ce*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x5C67A0
namespace gamemd {
void RotateBitBufferLeft(int * a0, int a2, Buffer * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall RotateBitBufferLeft(int *a0, int a2, Buffer *aP2)
{
  char v3; // di
  int *v4; // esi
  int v5; // eax
  Buffer *v6; // edx
  int v7; // ecx
  unsigned int j; // ebp
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  Buffer *v13; // ebx
  int *v14; // edx
  int *v15; // ebx
  int *v16; // ebp
  bool v17; // zf
  int v18; // esi
  int i; // esi
  Buffer *v20; // ecx
  char v21; // [esp+10h] [ebp-4h]
  char *v22; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x5c67a5*/
  v4 = a0; /*0x5c67a7*/
  if ( a2 ) /*0x5c67ab*/
  {
    if ( a2 == 32 ) /*0x5c67b0*/
    {
      v5 = 0; /*0x5c67b6*/
      if ( aP2 ) /*0x5c67bd*/
      {
        v6 = aP2; /*0x5c67bf*/
        do /*0x5c67cc*/
        {
          v7 = *v4; /*0x5c67c2*/
          *v4++ = v5; /*0x5c67c4*/
          v6 = (Buffer *)((char *)v6 - 1); /*0x5c67c9*/
          v5 = v7; /*0x5c67ca*/
        }
        while ( v6 ); /*0x5c67cc*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c67d6*/
    {
      v11 = a2 / 32; /*0x5c6833*/
      v12 = a2 % 32; /*0x5c6842*/
      v13 = aP2; /*0x5c6843*/
      v14 = &a0[(_DWORD)aP2 - 1]; /*0x5c684a*/
      if ( v11 < (int)&aP2[-1].Buffer_field_24 + 3 ) /*0x5c6850*/
      {
        v22 = (char *)&aP2[-1].Buffer_field_24 - v11 + 3; /*0x5c685b*/
        do /*0x5c6893*/
        {
          v15 = &v14[-v11 - 1]; /*0x5c6868*/
          v16 = v14--; /*0x5c686c*/
          v17 = v22 == (char *)1; /*0x5c688b*/
          v14[1] = (v16[-v11] << v12) | ((unsigned int)*v15 >> (32 - v12)); /*0x5c688c*/
          --v22; /*0x5c688f*/
        }
        while ( !v17 ); /*0x5c6893*/
        v13 = aP2; /*0x5c6895*/
      }
      if ( v11 < (int)v13 ) /*0x5c689b*/
      {
        v18 = v14[-v11] << v12; /*0x5c68ac*/
        --v14; /*0x5c68ae*/
        v14[1] = v18; /*0x5c68b1*/
      }
      for ( i = 0; ; ++i ) /*0x5c68b4*/
      {
        v20 = (Buffer *)v11; /*0x5c68b8*/
        if ( v11 >= (int)v13 ) /*0x5c68ba*/
          v20 = v13; /*0x5c68bc*/
        if ( i >= (int)v20 ) /*0x5c68c0*/
          break; /*0x5c68c0*/
        *v14-- = 0; /*0x5c68c6*/
      }
    }
    else
    {
      v21 = 32 - a2; /*0x5c67e4*/
      for ( j = 0; aP2; aP2 = (Buffer *)((char *)aP2 - 1) ) /*0x5c67f7*/
      {
        v9 = *v4++; /*0x5c6802*/
        v10 = (j >> v21) | (v9 << v3); /*0x5c6811*/
        j = ~(0xFFFFFFFF >> v3) & v9; /*0x5c6813*/
        *(v4 - 1) = v10; /*0x5c6815*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x5C6940
namespace gamemd {
int InitArrayWithValue(unsigned int * a0, int a2, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall InitArrayWithValue(_DWORD *a0, int a2, AbstractClass *aP2)
{
  memset(a0, 0, 4 * (_DWORD)aP2); /*0x5c694c*/
  *a0 = a2; /*0x5c694e*/
  return 0; /*0x5c6950*/
}
}
} // namespace gamemd

// 0x5C6960
namespace gamemd {
int BitArray_FindHighestBit(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BitArray_FindHighestBit(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx

  v2 = (_DWORD *)(a1 + 4 * a2 - 4); /*0x5c6960*/
  v3 = a2; /*0x5c6965*/
  if ( !*v2 ) /*0x5c6967*/
  {
    while ( --v3 ) /*0x5c696c*/
    {
      if ( *--v2 ) /*0x5c696f*/
        goto LABEL_4; /*0x5c6977*/
    }
    return 0; /*0x5c696d*/
  }
LABEL_4:
  if ( !v3 ) /*0x5c697b*/
    return 0; /*0x5c6980*/
  v6 = *(_DWORD *)(a1 + 4 * v3 - 4); /*0x5c6981*/
  v7 = 0x80000000; /*0x5c6987*/
  result = 32 * v3; /*0x5c698c*/
  if ( v6 >= 0 ) /*0x5c6991*/
  {
    do /*0x5c6998*/
    {
      v7 >>= 1; /*0x5c6993*/
      --result; /*0x5c6995*/
    }
    while ( (v6 & v7) == 0 ); /*0x5c6998*/
  }
  return result; /*0x5c697f*/
}
}
} // namespace gamemd

// 0x5C69E0
namespace gamemd {
int CompareBigIntLE(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall CompareBigIntLE(int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // edx
  bool v8; // cc

  v3 = a3; /*0x5c69e2*/
  v4 = *(_DWORD *)(a1 + 4 * a3 - 4); /*0x5c69e6*/
  v5 = (_DWORD *)(a1 + 4 * a3 - 4); /*0x5c69ea*/
  v6 = *(_DWORD *)(a2 + 4 * a3 - 4); /*0x5c69ee*/
  v7 = (_DWORD *)(a2 + 4 * a3 - 4); /*0x5c69f2*/
  v8 = v4 <= v6; /*0x5c69f6*/
  if ( v4 < v6 ) /*0x5c69f8*/
    return -1; /*0x5c6a0d*/
  while ( 1 ) /*0x5c69fa*/
  {
    if ( !v8 ) /*0x5c69fa*/
      return 1; /*0x5c6a1c*/
    --v5; /*0x5c69fc*/
    --v7; /*0x5c69ff*/
    if ( !--v3 ) /*0x5c6a03*/
      break; /*0x5c6a03*/
    v8 = *v5 <= *v7; /*0x5c6a09*/
    if ( *v5 < *v7 ) /*0x5c6a0b*/
      return -1; /*0x5c6a0b*/
  }
  return 0; /*0x5c6a0d*/
}
}
} // namespace gamemd

// 0x5C6AA0
namespace gamemd {
bool sub_5C6AA0(unsigned int * a1, unsigned int * a2, int a3, bool a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_5C6AA0(unsigned int *a1, unsigned int *a2, int a3, bool a4, int a5)
{
  int v6; // ebp
  bool result; // al
  unsigned int v8; // ebx
  unsigned int v9; // esi

  if ( !a5 ) /*0x5c6aaa*/
    return a4; /*0x5c6af4*/
  v6 = a5; /*0x5c6ab2*/
  result = a4; /*0x5c6ab5*/
  do /*0x5c6aeb*/
  {
    v8 = *a2 + a3; /*0x5c6ac0*/
    v9 = v8 + a4; /*0x5c6ac8*/
    result = v8 < *a2 || result && !v9; /*0x5c6ada*/
    *a1 = v9; /*0x5c6adc*/
    a3 = 0; /*0x5c6ade*/
    ++a2; /*0x5c6ae0*/
    ++a1; /*0x5c6ae3*/
    --v6; /*0x5c6ae6*/
    a4 = result; /*0x5c6ae7*/
  }
  while ( v6 ); /*0x5c6aeb*/
  return result; /*0x5c6af0*/
}
}
} // namespace gamemd

// 0x5C6B60
namespace gamemd {
unsigned char DecodeAudioSampleWord(int a1, unsigned short * a2, unsigned short a3, unsigned char a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 __fastcall DecodeAudioSampleWord(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        int a5)
{
  int v6; // edi
  unsigned __int16 v7; // ax
  int v8; // eax
  unsigned __int8 result; // al

  if ( !(2 * a5) ) /*0x5c6b67*/
    return a4; /*0x5c6bac*/
  v6 = 2 * a5; /*0x5c6b73*/
  do /*0x5c6ba5*/
  {
    v7 = *a2++; /*0x5c6b7e*/
    a1 += 2; /*0x5c6b90*/
    v8 = v7 - a3 - a4; /*0x5c6b93*/
    a3 = 0; /*0x5c6b95*/
    *(_WORD *)(a1 - 2) = v8; /*0x5c6b97*/
    result = BYTE2(v8) & 1; /*0x5c6b9e*/
    --v6; /*0x5c6ba0*/
    a4 = BYTE2(v8) & 1; /*0x5c6ba1*/
  }
  while ( v6 ); /*0x5c6ba5*/
  return result; /*0x5c6ba8*/
}
}
} // namespace gamemd

// 0x5C6BC0
namespace gamemd {
int Array_FillPattern(unsigned int * a1, char * a2, unsigned int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Array_FillPattern(_DWORD *a1, char *a2, _DWORD *a3, int a4)
{
  int v4; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int *v22; // esi
  bool v23; // bl
  unsigned int *v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  bool v29; // [esp+14h] [ebp-14h]
  _DWORD *v30; // [esp+18h] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+20h] [ebp-8h]
  char *v33; // [esp+24h] [ebp-4h]
  unsigned int v34; // [esp+2Ch] [ebp+4h]

  v4 = a4; /*0x5c6bc5*/
  v6 = a4; /*0x5c6bcf*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6be3*/
  v33 = a2; /*0x5c6be7*/
  *a1 = 0; /*0x5c6bf4*/
  if ( *(_DWORD *)a2 ) /*0x5c6bfa*/
    goto LABEL_10; /*0x5c6bfa*/
  v7 = &a2[v6 * 4 - 4]; /*0x5c6c00*/
  v8 = a4; /*0x5c6c04*/
  if ( !*(_DWORD *)v7 ) /*0x5c6c06*/
  {
    do /*0x5c6c16*/
    {
      if ( !--v8 ) /*0x5c6c0c*/
        break; /*0x5c6c0c*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c6c0e*/
      v7 -= 4; /*0x5c6c11*/
    }
    while ( !v9 ); /*0x5c6c16*/
  }
  if ( v8 > 1 ) /*0x5c6c1b*/
  {
LABEL_10:
    if ( *a3 ) /*0x5c6c25*/
      goto LABEL_11; /*0x5c6c25*/
    v11 = &a3[v6 - 1]; /*0x5c6c2e*/
    v12 = a4; /*0x5c6c34*/
    if ( !*v11 ) /*0x5c6c2a*/
    {
      do /*0x5c6c43*/
      {
        if ( !--v12 ) /*0x5c6c39*/
          break; /*0x5c6c39*/
      }
      while ( !*--v11 ); /*0x5c6c43*/
    }
    if ( v12 > 1 ) /*0x5c6c48*/
    {
LABEL_11:
      v14 = &a3[v6 - 1]; /*0x5c6c4e*/
      v15 = a4; /*0x5c6c52*/
      if ( *v14 ) /*0x5c6c54*/
      {
LABEL_14:
        if ( v15 ) /*0x5c6c68*/
        {
          v18 = v15; /*0x5c6c72*/
          v19 = a3[v15 - 1]; /*0x5c6c74*/
          v20 = 0x80000000; /*0x5c6c78*/
          v21 = 32 * v18; /*0x5c6c7d*/
          if ( v19 >= 0 ) /*0x5c6c82*/
          {
            do /*0x5c6c89*/
            {
              v20 >>= 1; /*0x5c6c84*/
              --v21; /*0x5c6c86*/
            }
            while ( (v19 & v20) == 0 ); /*0x5c6c89*/
          }
          v17 = v21; /*0x5c6c8d*/
          if ( v21 ) /*0x5c6c8f*/
            v34 = 1 << ((v21 - 1) % 32); /*0x5c6cae*/
          else
            v34 = 0; /*0x5c6c91*/
          goto LABEL_21; /*0x5c6c95*/
        }
      }
      else
      {
        while ( --v15 ) /*0x5c6c59*/
        {
          if ( *--v14 ) /*0x5c6c5c*/
            goto LABEL_14; /*0x5c6c64*/
        }
      }
      v17 = 0; /*0x5c6c6a*/
      v34 = 0; /*0x5c6c6c*/
LABEL_21:
      if ( (v17 + 31) / 32 && v17 ) /*0x5c6cc6*/
      {
        v32 = v17; /*0x5c6cd0*/
        v30 = &a3[(v17 + 31) / 32 - 1]; /*0x5c6cd4*/
        do /*0x5c6d7b*/
        {
          RotateBitBufferLeft(v4); /*0x5c6ce2*/
          if ( (v34 & *v30) != 0 ) /*0x5c6cf1*/
          {
            v22 = a1; /*0x5c6cf3*/
            v23 = 0; /*0x5c6cf7*/
            v29 = 0; /*0x5c6cfb*/
            v24 = a1; /*0x5c6cff*/
            if ( v4 ) /*0x5c6d01*/
            {
              v31 = a4; /*0x5c6d0d*/
              do /*0x5c6d4d*/
              {
                v25 = *v24 + *(unsigned int *)((char *)v22 + v33 - (char *)a1); /*0x5c6d1c*/
                v26 = v25 + v29; /*0x5c6d24*/
                v23 = v25 < *v24 || v23 && !v26; /*0x5c6d36*/
                *v22 = v26; /*0x5c6d3c*/
                ++v24; /*0x5c6d3e*/
                ++v22; /*0x5c6d41*/
                v29 = v23; /*0x5c6d45*/
                --v31; /*0x5c6d49*/
              }
              while ( v31 ); /*0x5c6d4d*/
              v4 = a4; /*0x5c6d4f*/
            }
          }
          v34 >>= 1; /*0x5c6d59*/
          if ( !v34 ) /*0x5c6d5d*/
          {
            v34 = 0x80000000; /*0x5c6d63*/
            --v30; /*0x5c6d6e*/
          }
          --v32; /*0x5c6d77*/
        }
        while ( v32 ); /*0x5c6d7b*/
      }
    }
  }
  return 0; /*0x5c6d81*/
}
}
} // namespace gamemd

// 0x5C6D90
namespace gamemd {
int sub_5C6D90(int a1, unsigned short * a2, short a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5C6D90(int a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax

  v4 = 0; /*0x5c6d97*/
  if ( 2 * a4 <= 0 ) /*0x5c6d9b*/
    return 0; /*0x5c6dca*/
  v5 = a1 - (_DWORD)a2; /*0x5c6da4*/
  v6 = 2 * a4; /*0x5c6da6*/
  do /*0x5c6dc0*/
  {
    v7 = *a2++; /*0x5c6daa*/
    v8 = v4 + a3 * v7; /*0x5c6db3*/
    *(unsigned __int16 *)((char *)a2 + v5 - 2) = v8; /*0x5c6db5*/
    --v6; /*0x5c6dbd*/
    v4 = HIWORD(v8); /*0x5c6dbe*/
  }
  while ( v6 ); /*0x5c6dc0*/
  return 0; /*0x5c6dc6*/
}
}
} // namespace gamemd

// 0x5C6DD0
namespace gamemd {
int MultiplyAddBigInteger(char * a1, unsigned short * a2, short a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall MultiplyAddBigInteger(char *a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  int v4; // ebx
  char *v5; // ebp
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  _DWORD *v11; // eax
  int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 *v20; // ecx
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  char *v23; // eax
  int v24; // ecx
  int v25; // edx
  char *v26; // eax
  unsigned int v27; // esi
  unsigned __int16 *v28; // ecx
  int v29; // edi
  int v30; // edx
  unsigned __int16 v31; // ax
  unsigned int v32; // eax
  char *v33; // eax
  int v34; // ecx
  int v35; // edx
  char *v36; // eax
  unsigned int v37; // esi
  unsigned __int16 *v38; // ecx
  int v39; // edi
  int v40; // edx
  unsigned __int16 v41; // ax
  unsigned int v42; // eax
  _DWORD v44[64]; // [esp+18h] [ebp-100h] BYREF

  v4 = a4; /*0x5c6dd7*/
  v5 = a1; /*0x5c6ddf*/
  if ( *(int *)&a2[2 * a4 - 2] >= 0 ) /*0x5c6df4*/
  {
    if ( a3 >= 0 ) /*0x5c6f1f*/
    {
      v37 = 0; /*0x5c6f97*/
      v38 = a2; /*0x5c6f9b*/
      if ( 2 * a4 > 0 ) /*0x5c6fa1*/
      {
        v39 = v5 - (char *)a2; /*0x5c6fa5*/
        v40 = 2 * a4; /*0x5c6fa7*/
        do /*0x5c6fc6*/
        {
          v41 = *v38++; /*0x5c6fb0*/
          v42 = v37 + a3 * v41; /*0x5c6fb9*/
          *(unsigned __int16 *)((char *)v38 + v39 - 2) = v42; /*0x5c6fbb*/
          --v40; /*0x5c6fc3*/
          v37 = HIWORD(v42); /*0x5c6fc4*/
        }
        while ( v40 ); /*0x5c6fc6*/
      }
    }
    else
    {
      v27 = 0; /*0x5c6f28*/
      v28 = a2; /*0x5c6f2a*/
      if ( 2 * a4 > 0 ) /*0x5c6f2e*/
      {
        v29 = a1 - (char *)a2; /*0x5c6f37*/
        v30 = 2 * a4; /*0x5c6f39*/
        do /*0x5c6f53*/
        {
          v31 = *v28++; /*0x5c6f3d*/
          v32 = v27 + (__int16)-a3 * v31; /*0x5c6f46*/
          *(unsigned __int16 *)((char *)v28 + v29 - 2) = v32; /*0x5c6f48*/
          --v30; /*0x5c6f50*/
          v27 = HIWORD(v32); /*0x5c6f51*/
        }
        while ( v30 ); /*0x5c6f53*/
        v5 = a1; /*0x5c6f55*/
      }
      v33 = v5; /*0x5c6f5b*/
      if ( a4 > 0 ) /*0x5c6f5d*/
      {
        v34 = a4; /*0x5c6f5f*/
        do /*0x5c6f6c*/
        {
          v35 = *(_DWORD *)v33; /*0x5c6f61*/
          v33 += 4; /*0x5c6f63*/
          *((_DWORD *)v33 - 1) = ~v35; /*0x5c6f68*/
          --v34; /*0x5c6f6b*/
        }
        while ( v34 ); /*0x5c6f6c*/
      }
      v36 = v5; /*0x5c6f71*/
      v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6f73*/
      if ( v10 ) /*0x5c6f77*/
      {
        while ( 1 ) /*0x5c6f79*/
        {
          v36 += 4; /*0x5c6f79*/
          if ( !--v4 ) /*0x5c6f7d*/
            break; /*0x5c6f7d*/
          v10 = (*(_DWORD *)v36)++ == -1; /*0x5c6f81*/
          if ( !v10 ) /*0x5c6f84*/
            return 0; /*0x5c6f92*/
        }
      }
    }
    return 0; /*0x5c6f7d*/
  }
  qmemcpy(v44, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6e05*/
  v6 = v44; /*0x5c6e09*/
  if ( a4 > 0 ) /*0x5c6e14*/
  {
    v7 = a4; /*0x5c6e16*/
    do /*0x5c6e23*/
    {
      v8 = *v6++; /*0x5c6e18*/
      *(v6 - 1) = ~v8; /*0x5c6e1f*/
      --v7; /*0x5c6e22*/
    }
    while ( v7 ); /*0x5c6e23*/
  }
  v9 = a4; /*0x5c6e29*/
  v10 = v44[0] == -1; /*0x5c6e2b*/
  v11 = v44; /*0x5c6e2c*/
  ++v44[0]; /*0x5c6e30*/
  for ( ; v10; v10 = (*v11)++ == -1 ) /*0x5c6e34*/
  {
    ++v11; /*0x5c6e36*/
    if ( !--v9 ) /*0x5c6e3a*/
      break; /*0x5c6e3a*/
  }
  if ( a3 >= 0 ) /*0x5c6e4d*/
  {
    v18 = 2 * a4; /*0x5c6e95*/
    v19 = 0; /*0x5c6e98*/
    v20 = (unsigned __int16 *)v44; /*0x5c6e9c*/
    if ( 2 * a4 > 0 ) /*0x5c6ea0*/
    {
      do /*0x5c6ecb*/
      {
        v21 = *v20++; /*0x5c6eb3*/
        v22 = v19 + a3 * v21; /*0x5c6ebe*/
        *(unsigned __int16 *)((char *)v20 + v5 - (char *)v44 - 2) = v22; /*0x5c6ec0*/
        --v18; /*0x5c6ec8*/
        v19 = HIWORD(v22); /*0x5c6ec9*/
      }
      while ( v18 ); /*0x5c6ecb*/
    }
    v23 = v5; /*0x5c6ed3*/
    if ( a4 > 0 ) /*0x5c6ed5*/
    {
      v24 = a4; /*0x5c6ed7*/
      do /*0x5c6ee4*/
      {
        v25 = *(_DWORD *)v23; /*0x5c6ed9*/
        v23 += 4; /*0x5c6edb*/
        *((_DWORD *)v23 - 1) = ~v25; /*0x5c6ee0*/
        --v24; /*0x5c6ee3*/
      }
      while ( v24 ); /*0x5c6ee4*/
    }
    v26 = v5; /*0x5c6ee9*/
    v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6eeb*/
    if ( v10 ) /*0x5c6eef*/
    {
      while ( 1 ) /*0x5c6ef5*/
      {
        v26 += 4; /*0x5c6ef5*/
        if ( !--v4 ) /*0x5c6ef9*/
          break; /*0x5c6ef9*/
        v10 = (*(_DWORD *)v26)++ == -1; /*0x5c6f01*/
        if ( !v10 ) /*0x5c6f04*/
          return 0; /*0x5c6f12*/
      }
    }
    return 0; /*0x5c6ef9*/
  }
  v12 = 2 * a4; /*0x5c6e4f*/
  v13 = 0; /*0x5c6e51*/
  v14 = (unsigned __int16 *)v44; /*0x5c6e57*/
  if ( 2 * a4 <= 0 ) /*0x5c6e5b*/
    return 0; /*0x5c6fcb*/
  do /*0x5c6e84*/
  {
    v15 = *v14++; /*0x5c6e6e*/
    v16 = v13 + (__int16)-a3 * v15; /*0x5c6e77*/
    *(unsigned __int16 *)((char *)v14 + v5 - (char *)v44 - 2) = v16; /*0x5c6e79*/
    --v12; /*0x5c6e81*/
    v13 = HIWORD(v16); /*0x5c6e82*/
  }
  while ( v12 ); /*0x5c6e84*/
  return 0; /*0x5c6e86*/
}
}
} // namespace gamemd

// 0x5C71E0
namespace gamemd {
short BigInt_ShiftAndScan(unsigned int * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __fastcall BigInt_ShiftAndScan(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // eax
  int v7; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  unsigned int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edi

  if ( !(_WORD)a3 ) /*0x5c71f5*/
    return 0; /*0x5c7201*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7220*/
  v6 = (_DWORD *)(4 * a4 + a2 - 4); /*0x5c722d*/
  *a1 = 0; /*0x5c7231*/
  v7 = a4; /*0x5c7238*/
  if ( *v6 ) /*0x5c723a*/
  {
LABEL_6:
    if ( v7 ) /*0x5c724e*/
    {
      v10 = v7; /*0x5c7254*/
      v11 = *(_DWORD *)(a2 + 4 * v7 - 4); /*0x5c7256*/
      v12 = 0x80000000; /*0x5c725a*/
      v13 = 32 * v10; /*0x5c725f*/
      if ( v11 >= 0 ) /*0x5c7264*/
      {
        do /*0x5c726b*/
        {
          v12 >>= 1; /*0x5c7266*/
          --v13; /*0x5c7268*/
        }
        while ( (v11 & v12) == 0 ); /*0x5c726b*/
      }
      v9 = v13; /*0x5c726d*/
      goto LABEL_11; /*0x5c726d*/
    }
  }
  else
  {
    while ( --v7 ) /*0x5c723f*/
    {
      if ( *--v6 ) /*0x5c7242*/
        goto LABEL_6; /*0x5c724a*/
    }
  }
  v9 = 0; /*0x5c7250*/
LABEL_11:
  v14 = (v9 + 31) / 32; /*0x5c726f*/
  v15 = a2 + 4 * v14 - 4; /*0x5c727b*/
  if ( !v14 ) /*0x5c727f*/
    return 0; /*0x5c7284*/
  if ( v9 ) /*0x5c7290*/
    v16 = 1 << ((v9 - 1) % 32); /*0x5c72ab*/
  else
    v16 = 0; /*0x5c7292*/
  v17 = &a1[v14 - 1]; /*0x5c72af*/
  if ( !v9 ) /*0x5c72b3*/
    return 0; /*0x5c72fb*/
  v18 = 0; /*0x5c72b5*/
  v19 = v9; /*0x5c72b9*/
  v20 = v15 - (_DWORD)v17; /*0x5c72bf*/
  do /*0x5c72e5*/
  {
    v18 *= 2; /*0x5c72c4*/
    if ( (*(_DWORD *)((char *)v17 + v20) & v16) != 0 ) /*0x5c72c8*/
      ++v18; /*0x5c72ca*/
    if ( (unsigned __int16)v18 >= (unsigned __int16)a3 ) /*0x5c72ce*/
    {
      v18 -= a3; /*0x5c72d2*/
      *v17 |= v16; /*0x5c72d6*/
    }
    v16 >>= 1; /*0x5c72d8*/
    if ( !v16 ) /*0x5c72da*/
    {
      v16 = 0x80000000; /*0x5c72dc*/
      --v17; /*0x5c72e1*/
    }
    --v19; /*0x5c72e4*/
  }
  while ( v19 ); /*0x5c72e5*/
  return v18; /*0x5c71f7*/
}
}
} // namespace gamemd

// 0x5C7310
namespace gamemd {
int SubtractBigInteger(unsigned int * a1, unsigned int * a2, int a3, char * a4, Buffer * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SubtractBigInteger(_DWORD *a1, _DWORD *a2, int a3, char *a4, Buffer *aP2)
{
  char *v7; // eax
  int v8; // edx
  int v9; // esi
  Buffer *v11; // ecx
  _DWORD *v12; // eax
  int v14; // esi
  Buffer *v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  Buffer *v23; // ecx
  bool v24; // zf
  _DWORD *v25; // eax
  char *v26; // edx
  Buffer *v27; // esi
  unsigned int v28; // ecx
  char *v29; // eax
  int v30; // edx
  bool v31; // cc
  _DWORD *v32; // ecx
  int v33; // esi
  unsigned __int16 v34; // ax
  int v35; // eax
  _DWORD *v36; // [esp+10h] [ebp-10h]
  unsigned __int8 v37; // [esp+14h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  unsigned int v40; // [esp+24h] [ebp+4h]

  if ( !*(_DWORD *)a4 ) /*0x5c731c*/
  {
    v7 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c732d*/
    v8 = (int)aP2; /*0x5c7333*/
    if ( !*(_DWORD *)v7 ) /*0x5c7329*/
    {
      do /*0x5c7342*/
      {
        if ( !--v8 ) /*0x5c7338*/
          break; /*0x5c7338*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c733a*/
        v7 -= 4; /*0x5c733d*/
      }
      while ( !v9 ); /*0x5c7342*/
    }
    if ( v8 <= 1 ) /*0x5c7347*/
      return -1; /*0x5c7353*/
  }
  memset(a1, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7368*/
  *a1 = 0; /*0x5c7377*/
  memset(a2, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7381*/
  v11 = aP2; /*0x5c738e*/
  *a2 = 0; /*0x5c7392*/
  v12 = (_DWORD *)(4 * (_DWORD)aP2 + a3 - 4); /*0x5c7398*/
  if ( *v12 ) /*0x5c739c*/
  {
LABEL_10:
    if ( v11 ) /*0x5c73b3*/
    {
      v15 = v11; /*0x5c73b9*/
      v16 = *(_DWORD *)(a3 + 4 * (_DWORD)v11 - 4); /*0x5c73bb*/
      v17 = 0x80000000; /*0x5c73bf*/
      v18 = 32 * (_DWORD)v15; /*0x5c73c4*/
      if ( v16 >= 0 ) /*0x5c73c9*/
      {
        do /*0x5c73d0*/
        {
          v17 >>= 1; /*0x5c73cb*/
          --v18; /*0x5c73cd*/
        }
        while ( (v16 & v17) == 0 ); /*0x5c73d0*/
      }
      v14 = v18; /*0x5c73d2*/
      goto LABEL_15; /*0x5c73d2*/
    }
  }
  else
  {
    while ( 1 ) /*0x5c73a4*/
    {
      v11 = (Buffer *)((char *)v11 - 1); /*0x5c73a4*/
      if ( !v11 ) /*0x5c73a5*/
        break; /*0x5c73a5*/
      if ( *--v12 ) /*0x5c73a7*/
        goto LABEL_10; /*0x5c73af*/
    }
  }
  v14 = 0; /*0x5c73b5*/
LABEL_15:
  v19 = (v14 + 31) / 32; /*0x5c73d4*/
  if ( v19 )
  {
    v20 = a3 + 4 * v19 - 4; /*0x5c73e6*/
    v21 = &a2[v19 - 1]; /*0x5c73ea*/
    v36 = v21; /*0x5c73f0*/
    v40 = v14 ? 1 << ((v14 - 1) % 32) : 0;
    if ( v14 ) /*0x5c7419*/
    {
      v38 = v14; /*0x5c7421*/
      v22 = v20 - (_DWORD)v21; /*0x5c7425*/
      for ( i = v20 - (_DWORD)v21; ; v22 = i ) /*0x5c7427*/
      {
        RotateBitBufferLeft(a1, 1, aP2); /*0x5c743d*/
        if ( (v40 & *(_DWORD *)((char *)v36 + v22)) != 0 ) /*0x5c744d*/
        {
          v23 = aP2; /*0x5c7452*/
          v24 = *a1 == -1; /*0x5c7454*/
          v25 = a1; /*0x5c7455*/
          ++*a1; /*0x5c7457*/
          for ( ; v24; v24 = (*v25)++ == -1 ) /*0x5c745a*/
          {
            ++v25; /*0x5c745c*/
            v23 = (Buffer *)((char *)v23 - 1); /*0x5c745f*/
            if ( !v23 ) /*0x5c7460*/
              break; /*0x5c7460*/
          }
        }
        v26 = (char *)&a1[(_DWORD)aP2 - 1]; /*0x5c746d*/
        v27 = aP2; /*0x5c7471*/
        v28 = *(_DWORD *)&a4[4 * (_DWORD)aP2 - 4]; /*0x5c7473*/
        v29 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c7477*/
        if ( *(_DWORD *)v26 >= v28 ) /*0x5c747d*/
        {
          v30 = v26 - v29; /*0x5c747f*/
          v31 = *(_DWORD *)&v29[v30] <= v28; /*0x5c7481*/
          while ( v31 ) /*0x5c7484*/
          {
            v29 -= 4; /*0x5c7486*/
            v27 = (Buffer *)((char *)v27 - 1); /*0x5c7489*/
            if ( !v27 ) /*0x5c748a*/
              break; /*0x5c748a*/
            v31 = *(_DWORD *)&v29[v30] <= *(_DWORD *)v29; /*0x5c748e*/
            if ( *(_DWORD *)&v29[v30] < *(_DWORD *)v29 ) /*0x5c7491*/
              goto LABEL_36; /*0x5c7491*/
          }
          v37 = 0; /*0x5c7498*/
          v32 = a1; /*0x5c74a2*/
          if ( 2 * (_DWORD)aP2 ) /*0x5c749d*/
          {
            v33 = 2 * (_DWORD)aP2; /*0x5c74a8*/
            do /*0x5c74da*/
            {
              v34 = *(_WORD *)((char *)v32 + a4 - (char *)a1); /*0x5c74af*/
              v32 = (_DWORD *)((char *)v32 + 2); /*0x5c74b3*/
              v35 = *((unsigned __int16 *)v32 - 1) - v34 - v37; /*0x5c74ca*/
              *((_WORD *)v32 - 1) = v35; /*0x5c74cc*/
              --v33; /*0x5c74d5*/
              v37 = BYTE2(v35) & 1; /*0x5c74d6*/
            }
            while ( v33 ); /*0x5c74da*/
          }
          *v36 |= v40; /*0x5c74e4*/
        }
LABEL_36:
        v40 >>= 1; /*0x5c74e6*/
        if ( !v40 ) /*0x5c74f0*/
        {
          v40 = 0x80000000; /*0x5c74f6*/
          --v36; /*0x5c7501*/
        }
        if ( !--v38 ) /*0x5c750e*/
          break; /*0x5c750e*/
      }
    }
  }
  return 0; /*0x5c7349*/
}
}
} // namespace gamemd

// 0x5C7520
namespace gamemd {
char SubtractBigIntegerWithSign(char * a1, int * a2, const void * a3, const void * a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall SubtractBigIntegerWithSign(char *a1, int *a2, const void *a3, const void *a4, int a5)
{
  int v5; // ebp
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // eax
  char *v18; // esi
  char *v19; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  int *v28; // eax
  int v29; // ecx
  char *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  char *v34; // edi
  int v35; // ebx
  char *v36; // ecx
  bool v38; // [esp+13h] [ebp-209h]
  bool v39; // [esp+14h] [ebp-208h]
  char *v40; // [esp+18h] [ebp-204h]
  _DWORD v41[64]; // [esp+1Ch] [ebp-200h] BYREF
  _DWORD v42[64]; // [esp+11Ch] [ebp-100h] BYREF

  v5 = a5; /*0x5c7528*/
  v40 = a1; /*0x5c752f*/
  qmemcpy(v42, a3, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7553*/
  v38 = 0; /*0x5c7557*/
  qmemcpy(v41, a4, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7571*/
  if ( (int)v41[a5 + 63] < 0 ) /*0x5c7583*/
  {
    v7 = v42; /*0x5c7587*/
    if ( a5 > 0 ) /*0x5c758e*/
    {
      v8 = a5; /*0x5c7590*/
      do /*0x5c759d*/
      {
        v9 = *v7++; /*0x5c7592*/
        *(v7 - 1) = ~v9; /*0x5c7599*/
        --v8; /*0x5c759c*/
      }
      while ( v8 ); /*0x5c759d*/
    }
    v10 = a5; /*0x5c75a6*/
    v11 = v42[0] == -1; /*0x5c75a8*/
    v12 = v42; /*0x5c75a9*/
    ++v42[0]; /*0x5c75b0*/
    for ( ; v11; v11 = (*v12)++ == -1 ) /*0x5c75b7*/
    {
      ++v12; /*0x5c75b9*/
      if ( !--v10 ) /*0x5c75bd*/
        break; /*0x5c75bd*/
    }
    v38 = 1; /*0x5c75c6*/
  }
  if ( (int)v41[a5 - 1] < 0 ) /*0x5c75d1*/
  {
    v13 = v41; /*0x5c75d5*/
    if ( a5 > 0 ) /*0x5c75d9*/
    {
      v14 = a5; /*0x5c75db*/
      do /*0x5c75e8*/
      {
        v15 = *v13++; /*0x5c75dd*/
        *(v13 - 1) = ~v15; /*0x5c75e4*/
        --v14; /*0x5c75e7*/
      }
      while ( v14 ); /*0x5c75e8*/
    }
    v16 = a5; /*0x5c75ee*/
    v11 = v41[0] == -1; /*0x5c75f0*/
    v17 = v41; /*0x5c75f1*/
    ++v41[0]; /*0x5c75f5*/
    for ( ; v11; v11 = (*v17)++ == -1 ) /*0x5c75f9*/
    {
      ++v17; /*0x5c75fb*/
      if ( !--v16 ) /*0x5c75ff*/
        break; /*0x5c75ff*/
    }
    v38 = !v38; /*0x5c7611*/
  }
  v18 = v40; /*0x5c7615*/
  SubtractBigInteger(v40, a2, (int)v42, (char *)v41, a5); /*0x5c762b*/
  LOBYTE(v19) = v38; /*0x5c7630*/
  if ( v38 ) /*0x5c7636*/
  {
    v20 = a2; /*0x5c763e*/
    if ( a5 > 0 ) /*0x5c7640*/
    {
      v21 = a5; /*0x5c7642*/
      do /*0x5c764f*/
      {
        v22 = *v20++; /*0x5c7644*/
        *(v20 - 1) = ~v22; /*0x5c764b*/
        --v21; /*0x5c764e*/
      }
      while ( v21 ); /*0x5c764f*/
    }
    v23 = a5; /*0x5c7653*/
    v11 = *a2 == -1; /*0x5c7655*/
    v24 = a2; /*0x5c7656*/
    ++*a2; /*0x5c7658*/
    for ( ; v11; v11 = (*v24)++ == -1 ) /*0x5c765a*/
    {
      ++v24; /*0x5c765c*/
      if ( !--v23 ) /*0x5c7660*/
        break; /*0x5c7660*/
    }
    if ( *(_DWORD *)v18 ) /*0x5c7669*/
      goto LABEL_29; /*0x5c7669*/
    v19 = &v18[4 * a5 - 4]; /*0x5c7672*/
    v25 = a5; /*0x5c7678*/
    if ( !*(_DWORD *)v19 ) /*0x5c766e*/
    {
      do /*0x5c7687*/
      {
        if ( !--v25 ) /*0x5c767d*/
          break; /*0x5c767d*/
        v26 = *((_DWORD *)v19 - 1); /*0x5c767f*/
        v19 -= 4; /*0x5c7682*/
      }
      while ( !v26 ); /*0x5c7687*/
    }
    if ( v25 > 1 ) /*0x5c768c*/
    {
LABEL_29:
      v27 = a5; /*0x5c7694*/
      v28 = a2; /*0x5c7697*/
      v11 = (*a2)-- == 0; /*0x5c7699*/
      if ( v11 ) /*0x5c769e*/
      {
        do /*0x5c76b0*/
        {
          ++v28; /*0x5c76a0*/
          if ( !--v27 ) /*0x5c76a4*/
            break; /*0x5c76a4*/
          v29 = *v28 - 1; /*0x5c76a9*/
          *v28 = v29; /*0x5c76ab*/
        }
        while ( v29 == -1 ); /*0x5c76b0*/
      }
      v30 = v18; /*0x5c76b4*/
      if ( a5 > 0 ) /*0x5c76b6*/
      {
        v31 = a5; /*0x5c76b8*/
        do /*0x5c76c5*/
        {
          v32 = *(_DWORD *)v30; /*0x5c76ba*/
          v30 += 4; /*0x5c76bc*/
          *((_DWORD *)v30 - 1) = ~v32; /*0x5c76c1*/
          --v31; /*0x5c76c4*/
        }
        while ( v31 ); /*0x5c76c5*/
      }
      v33 = a5; /*0x5c76c9*/
      v11 = *(_DWORD *)v18 == -1; /*0x5c76cb*/
      v19 = v18; /*0x5c76cc*/
      ++*(_DWORD *)v18; /*0x5c76ce*/
      for ( ; v11; v11 = (*(_DWORD *)v19)++ == -1 ) /*0x5c76d0*/
      {
        v19 += 4; /*0x5c76d2*/
        if ( !--v33 ) /*0x5c76d6*/
          break; /*0x5c76d6*/
      }
      v39 = 0; /*0x5c76e1*/
      v34 = v18; /*0x5c76e6*/
      if ( a5 ) /*0x5c76e8*/
      {
        v35 = (char *)v41 - v40; /*0x5c76f2*/
        do /*0x5c772c*/
        {
          v19 = (char *)(*(_DWORD *)v34 + *(_DWORD *)&v18[v35]); /*0x5c76fd*/
          v36 = &v19[v39]; /*0x5c7705*/
          v39 = (unsigned int)v19 < *(_DWORD *)v34 || (LOBYTE(v19) = v39) != 0 && !v36; /*0x5c771e*/
          *(_DWORD *)v18 = v36; /*0x5c7723*/
          v34 += 4; /*0x5c7725*/
          v18 += 4; /*0x5c7728*/
          --v5; /*0x5c772b*/
        }
        while ( v5 ); /*0x5c772c*/
      }
    }
  }
  return (char)v19; /*0x5c772e*/
}
}
} // namespace gamemd

// 0x5C7740
namespace gamemd {
int ModInverseBigInteger(char * a1, const void * a2, const void * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ModInverseBigInteger(char *a1, const void *a2, const void *a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // edx
  char *j; // eax
  int v10; // esi
  int v11; // edi
  char *v12; // ecx
  char *v13; // edx
  int v14; // edi
  char *v15; // esi
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  unsigned int *v20; // edi
  unsigned int *v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int result; // eax
  int v25; // [esp+10h] [ebp-714h]
  bool v26; // [esp+10h] [ebp-714h]
  unsigned __int8 v27; // [esp+14h] [ebp-710h]
  int i; // [esp+18h] [ebp-70Ch]
  unsigned int v29; // [esp+1Ch] [ebp-708h]
  char *v30; // [esp+20h] [ebp-704h]
  _DWORD v31[64]; // [esp+24h] [ebp-700h] BYREF
  _DWORD v32[128]; // [esp+124h] [ebp-600h] BYREF
  _DWORD v33[64]; // [esp+324h] [ebp-400h] BYREF
  char v34[256]; // [esp+424h] [ebp-300h] BYREF
  char v35[512]; // [esp+524h] [ebp-200h] BYREF

  v4 = a4; /*0x5c7748*/
  v30 = a1; /*0x5c774f*/
  v29 = 4 * a4; /*0x5c776e*/
  qmemcpy(v34, a3, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7775*/
  qmemcpy(v35, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7790*/
  memset(v31, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77a2*/
  v5 = 1; /*0x5c77a6*/
  v25 = 1; /*0x5c77ae*/
  v31[0] = 0; /*0x5c77bf*/
  memset(v32, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77ca*/
  v6 = 0; /*0x5c77d3*/
  v32[0] = 1; /*0x5c77d5*/
  for ( i = 0; ; v6 = i ) /*0x5c77dc*/
  {
    v7 = (v5 % 3) << 8; /*0x5c77ec*/
    if ( !*(_DWORD *)&v34[v7] ) /*0x5c77ef*/
    {
      v8 = a4; /*0x5c7805*/
      for ( j = &v34[v7 - 4 + v29]; !*(_DWORD *)j; j -= 4 ) /*0x5c7807*/
      {
        if ( !--v8 ) /*0x5c7813*/
          break; /*0x5c7813*/
      }
      if ( v8 <= 1 ) /*0x5c7820*/
        break; /*0x5c7820*/
    }
    v10 = (v6 % 3) << 8; /*0x5c783f*/
    v11 = ((v6 + 2) % 3) << 8; /*0x5c7853*/
    SubtractBigInteger(&v34[v11], v33, (int)&v34[v10], &v34[v7], a4); /*0x5c785d*/
    FillArrayPattern(v30, (char *)v31 + v7, v33, a4); /*0x5c7875*/
    v12 = (char *)v31 + v10; /*0x5c787e*/
    v27 = 0; /*0x5c7887*/
    v13 = (char *)v31 + v11; /*0x5c788c*/
    if ( 2 * a4 ) /*0x5c7882*/
    {
      v14 = 2 * a4; /*0x5c7894*/
      v15 = (char *)(v30 - v12); /*0x5c7897*/
      do /*0x5c78c9*/
      {
        v13 += 2; /*0x5c789b*/
        v16 = *(_WORD *)&v12[(_DWORD)v15]; /*0x5c789e*/
        v12 += 2; /*0x5c78a2*/
        v17 = *((unsigned __int16 *)v12 - 1) - v16 - v27; /*0x5c78b9*/
        *((_WORD *)v13 - 1) = v17; /*0x5c78bb*/
        --v14; /*0x5c78c4*/
        v27 = BYTE2(v17) & 1; /*0x5c78c5*/
      }
      while ( v14 ); /*0x5c78c9*/
    }
    ++v25; /*0x5c78d5*/
    ++i; /*0x5c78d9*/
    v5 = v25; /*0x5c78dd*/
  }
  v18 = (v5 - 1) % 3; /*0x5c78f1*/
  if ( (int)v31[64 * v18 - 1 + a4] < 0 ) /*0x5c7902*/
  {
    v19 = a3; /*0x5c7904*/
    v20 = &v31[64 * v18]; /*0x5c7912*/
    v26 = 0; /*0x5c7916*/
    v21 = v20; /*0x5c791b*/
    if ( a4 ) /*0x5c791d*/
    {
      do /*0x5c7959*/
      {
        v22 = *v20 + *v19; /*0x5c7927*/
        v23 = v22 + v26; /*0x5c792f*/
        v26 = v22 < *v20 || v26 && !v23; /*0x5c7948*/
        *v21 = v23; /*0x5c794d*/
        ++v19; /*0x5c794f*/
        ++v20; /*0x5c7952*/
        ++v21; /*0x5c7955*/
        --v4; /*0x5c7958*/
      }
      while ( v4 ); /*0x5c7959*/
      v18 = (v5 - 1) % 3; /*0x5c795b*/
    }
  }
  result = v18 << 8; /*0x5c7967*/
  qmemcpy(v30, (char *)v31 + result, v29); /*0x5c7973*/
  return result; /*0x5c797c*/
}
}
} // namespace gamemd

// 0x5C7990
namespace gamemd {
int DivideBigInteger(unsigned int * a1, char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DivideBigInteger(_DWORD *a1, char *a2, int a3)
{
  char *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // ebx
  int *v18; // ebp
  int v19; // esi
  _DWORD *v20; // eax
  int v21; // edx
  bool v22; // cc
  int *v23; // ecx
  int v24; // esi
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned int v27; // [esp+8h] [ebp-114h]
  unsigned __int8 v29; // [esp+10h] [ebp-10Ch]
  int v30; // [esp+14h] [ebp-108h]
  _DWORD *v31; // [esp+18h] [ebp-104h] BYREF
  int v32[64]; // [esp+1Ch] [ebp-100h] BYREF

  if ( !*(_DWORD *)a2 ) /*0x5c799c*/
  {
    v4 = &a2[4 * a3 - 4]; /*0x5c79b1*/
    v5 = a3; /*0x5c79b7*/
    if ( !*(_DWORD *)v4 ) /*0x5c79ad*/
    {
      do /*0x5c79c6*/
      {
        if ( !--v5 ) /*0x5c79bc*/
          break; /*0x5c79bc*/
        v6 = *((_DWORD *)v4 - 1); /*0x5c79be*/
        v4 -= 4; /*0x5c79c1*/
      }
      while ( !v6 ); /*0x5c79c6*/
    }
    if ( v5 <= 1 ) /*0x5c79cb*/
      return -1; /*0x5c79d8*/
  }
  memset(v32, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c79f1*/
  v32[0] = 0; /*0x5c7a00*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c7a0b*/
  *a1 = 0; /*0x5c7a18*/
  v8 = a3; /*0x5c7a1e*/
  v9 = *(_DWORD *)&a2[4 * a3 - 4]; /*0x5c7a20*/
  v10 = (int)&a2[4 * a3 - 4]; /*0x5c7a24*/
  v31 = (_DWORD *)v10; /*0x5c7a2a*/
  if ( v9 ) /*0x5c7a2e*/
  {
LABEL_10:
    if ( v8 ) /*0x5c7a3f*/
    {
      v13 = v8; /*0x5c7a49*/
      v14 = 0x80000000; /*0x5c7a4b*/
      v15 = *(_DWORD *)&a2[4 * v8 - 4]; /*0x5c7a50*/
      v16 = 32 * v13; /*0x5c7a54*/
      if ( v15 >= 0 ) /*0x5c7a59*/
      {
        do /*0x5c7a60*/
        {
          v14 >>= 1; /*0x5c7a5b*/
          --v16; /*0x5c7a5d*/
        }
        while ( (v15 & v14) == 0 ); /*0x5c7a60*/
      }
      v12 = v16; /*0x5c7a62*/
      goto LABEL_15; /*0x5c7a62*/
    }
  }
  else
  {
    while ( --v8 ) /*0x5c7a30*/
    {
      v11 = *(_DWORD *)(v10 - 4); /*0x5c7a33*/
      v10 -= 4; /*0x5c7a36*/
      if ( v11 ) /*0x5c7a3b*/
        goto LABEL_10; /*0x5c7a3b*/
    }
  }
  v12 = 0; /*0x5c7a41*/
LABEL_15:
  if ( v12 == -1 ) /*0x5c7a69*/
    v27 = 0; /*0x5c7a6b*/
  else
    v27 = 1 << (v12 % 32); /*0x5c7a88*/
  v32[(unsigned int)(v12 - 1) >> 5] |= 1 << ((v12 - 1) & 0x1F); /*0x5c7aa8*/
  v17 = &a1[(v12 + 32) / 32 - 1]; /*0x5c7ab8*/
  if ( v12 ) /*0x5c7abc*/
  {
    v18 = &v32[a3 - 1]; /*0x5c7ac3*/
    v30 = v12; /*0x5c7ac7*/
    do /*0x5c7b81*/
    {
      RotateBitBufferLeft(v32, 1, a3); /*0x5c7adc*/
      v19 = a3; /*0x5c7ae4*/
      v20 = v31; /*0x5c7ae6*/
      if ( (unsigned int)*v18 >= *v31 ) /*0x5c7aee*/
      {
        v21 = (char *)v18 - (char *)v31; /*0x5c7af2*/
        v22 = (unsigned int)*v18 <= *v31; /*0x5c7af4*/
        while ( v22 ) /*0x5c7af7*/
        {
          --v20; /*0x5c7af9*/
          if ( !--v19 ) /*0x5c7afd*/
            break; /*0x5c7afd*/
          v22 = *(_DWORD *)((char *)v20 + v21) <= *v20; /*0x5c7b01*/
          if ( *(_DWORD *)((char *)v20 + v21) < *v20 ) /*0x5c7b04*/
            goto LABEL_30; /*0x5c7b04*/
        }
        v29 = 0; /*0x5c7b0b*/
        v23 = v32; /*0x5c7b15*/
        if ( 2 * a3 ) /*0x5c7b10*/
        {
          v24 = 2 * a3; /*0x5c7b25*/
          do /*0x5c7b55*/
          {
            v25 = *(_WORD *)((char *)v23 + a2 - (char *)v32); /*0x5c7b2a*/
            v23 = (int *)((char *)v23 + 2); /*0x5c7b2e*/
            v26 = *((unsigned __int16 *)v23 - 1) - v25 - v29; /*0x5c7b45*/
            *((_WORD *)v23 - 1) = v26; /*0x5c7b47*/
            --v24; /*0x5c7b50*/
            v29 = BYTE2(v26) & 1; /*0x5c7b51*/
          }
          while ( v24 ); /*0x5c7b55*/
        }
        *v17 |= v27; /*0x5c7b5f*/
      }
LABEL_30:
      v27 >>= 1; /*0x5c7b61*/
      if ( !v27 ) /*0x5c7b6b*/
      {
        v27 = 0x80000000; /*0x5c7b6d*/
        --v17; /*0x5c7b75*/
      }
      --v30; /*0x5c7b7d*/
    }
    while ( v30 ); /*0x5c7b81*/
  }
  return 0; /*0x5c79cd*/
}
}
} // namespace gamemd

// 0x5C7BA0
namespace gamemd {
char sub_5C7BA0(const char * a1, unsigned short * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C7BA0(const char *a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // ebp
  const char *v4; // esi
  unsigned __int16 *v5; // eax
  unsigned int v6; // kr04_4
  int v7; // ebx
  unsigned __int8 *v8; // esi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int16 *v12; // ecx
  int v13; // esi
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int *v16; // edi
  unsigned int *v17; // edx
  int v18; // ebp
  unsigned int v19; // esi
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  int v23; // esi
  int v24; // ecx
  bool v25; // zf
  bool v27; // [esp+Fh] [ebp-11h]
  __int16 v28; // [esp+10h] [ebp-10h]
  bool v29; // [esp+14h] [ebp-Ch]
  unsigned __int8 *i; // [esp+18h] [ebp-8h]

  v3 = a2; /*0x5c7ba5*/
  v4 = a1; /*0x5c7ba7*/
  LOBYTE(v5) = 0; /*0x5c7bae*/
  memset(a2, 0, 4 * a3); /*0x5c7bb2*/
  *(_DWORD *)a2 = 0; /*0x5c7bba*/
  if ( a1 )
  {
    v6 = strlen(a1) + 1; /*0x5c7bc8*/
    if ( v6 != 1 )
    {
      switch ( toupper(v4[v6 - 2]) ) /*0x5c7bf1*/
      {
        case 'B': /*0x5c7bf1*/
          v28 = 2; /*0x5c7c0c*/
          break; /*0x5c7c14*/
        case 'H': /*0x5c7bf1*/
          v28 = 16; /*0x5c7bf8*/
          break; /*0x5c7c00*/
        case 'O': /*0x5c7bf1*/
          v28 = 8; /*0x5c7c02*/
          break; /*0x5c7c0a*/
        default:
          v28 = 10; /*0x5c7c16*/
          break; /*0x5c7c16*/
      }
      v27 = *v4 == 45; /*0x5c7c26*/
      if ( *v4 == 45 ) /*0x5c7c2a*/
        ++v4; /*0x5c7c2c*/
      v7 = *(unsigned __int8 *)v4; /*0x5c7c30*/
      v8 = (unsigned __int8 *)(v4 + 1); /*0x5c7c32*/
      for ( i = v8; v7; i = v8 )
      {
        if ( v7 != 44 )
        {
          if ( !isxdigit((char)v7) ) /*0x5c7c4c*/
            break; /*0x5c7c4c*/
          v9 = isdigit((char)v7) ? v7 - 48 : (unsigned __int8)(toupper((char)v7) - 65) + 10;
          if ( v9 >= (unsigned __int16)v28 ) /*0x5c7c93*/
            break; /*0x5c7c93*/
          v10 = a3; /*0x5c7c99*/
          v11 = 0; /*0x5c7c9d*/
          v12 = v3; /*0x5c7c9f*/
          v13 = 2 * a3; /*0x5c7ca1*/
          if ( 2 * a3 > 0 ) /*0x5c7ca6*/
          {
            do /*0x5c7cc2*/
            {
              v14 = *v12++; /*0x5c7cad*/
              v15 = v11 + v28 * v14; /*0x5c7cb6*/
              *(v12 - 1) = v15; /*0x5c7cb8*/
              --v13; /*0x5c7cbf*/
              v11 = HIWORD(v15); /*0x5c7cc0*/
            }
            while ( v13 ); /*0x5c7cc2*/
            v10 = a3; /*0x5c7cc4*/
          }
          v29 = 0; /*0x5c7cca*/
          v16 = (unsigned int *)v3; /*0x5c7ccf*/
          v17 = (unsigned int *)v3; /*0x5c7cd1*/
          if ( v10 ) /*0x5c7cd3*/
          {
            v18 = v10; /*0x5c7cd5*/
            do /*0x5c7d0e*/
            {
              v19 = *v16 + v9; /*0x5c7ce2*/
              v20 = v19 + v29; /*0x5c7ce5*/
              v29 = v19 < *v16 || v29 && !v20; /*0x5c7cfe*/
              *v17 = v20; /*0x5c7d03*/
              v9 = 0; /*0x5c7d05*/
              ++v16; /*0x5c7d07*/
              ++v17; /*0x5c7d0a*/
              --v18; /*0x5c7d0d*/
            }
            while ( v18 ); /*0x5c7d0e*/
            v3 = a2; /*0x5c7d10*/
          }
          v8 = i; /*0x5c7d14*/
        }
        v7 = *v8++; /*0x5c7d1a*/
      }
      LOBYTE(v5) = v27; /*0x5c7d29*/
      if ( v27 ) /*0x5c7d30*/
      {
        v21 = (int *)v3; /*0x5c7d36*/
        if ( a3 > 0 ) /*0x5c7d3a*/
        {
          v22 = a3; /*0x5c7d3c*/
          do /*0x5c7d49*/
          {
            v23 = *v21++; /*0x5c7d3e*/
            *(v21 - 1) = ~v23; /*0x5c7d45*/
            --v22; /*0x5c7d48*/
          }
          while ( v22 ); /*0x5c7d49*/
        }
        v24 = a3; /*0x5c7d4b*/
        v25 = *(_DWORD *)v3 == -1; /*0x5c7d50*/
        v5 = v3; /*0x5c7d51*/
        ++*(_DWORD *)v3; /*0x5c7d53*/
        for ( ; v25; v25 = (*(_DWORD *)v5)++ == -1 ) /*0x5c7d56*/
        {
          v5 += 2; /*0x5c7d58*/
          if ( !--v24 ) /*0x5c7d5c*/
            break; /*0x5c7d5c*/
        }
      }
    }
  }
  return (char)v5; /*0x5c7d65*/
}
}
} // namespace gamemd

// 0x5C7E00
namespace gamemd {
int sub_5C7E00(unsigned int * a1, unsigned short * a2, unsigned short * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5C7E00(_DWORD *a1, unsigned __int16 *a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // ebp
  int result; // eax
  char *v6; // edx
  unsigned __int16 v7; // bx
  unsigned __int16 *v8; // edi
  _WORD *v9; // ecx
  unsigned int v10; // esi
  unsigned __int16 v11; // ax
  unsigned int v12; // eax
  int v14; // [esp+14h] [ebp-8h]
  char *v15; // [esp+18h] [ebp-4h]
  int v16; // [esp+20h] [ebp+4h]
  int v17; // [esp+24h] [ebp+8h]

  v4 = a3; /*0x5c7e1e*/
  memset(a1, 0, 4 * ((unsigned int)(8 * a4) >> 2)); /*0x5c7e25*/
  result = 2 * a4; /*0x5c7e2e*/
  *a1 = 0; /*0x5c7e31*/
  v14 = 2 * a4; /*0x5c7e39*/
  if ( 2 * a4 > 0 ) /*0x5c7e3d*/
  {
    v6 = (char *)((char *)a1 - (char *)a3); /*0x5c7e3f*/
    v16 = 2 * a4; /*0x5c7e41*/
    v15 = v6; /*0x5c7e45*/
    do /*0x5c7ea5*/
    {
      v7 = *v4; /*0x5c7e49*/
      v8 = a2; /*0x5c7e4d*/
      v9 = (unsigned __int16 *)((char *)v4++ + (_DWORD)v6); /*0x5c7e51*/
      v10 = 0; /*0x5c7e57*/
      if ( result > 0 ) /*0x5c7e5b*/
      {
        v17 = result; /*0x5c7e63*/
        do /*0x5c7e8f*/
        {
          v11 = *v8++; /*0x5c7e6b*/
          v12 = v10 + (unsigned __int16)*v9 + v7 * v11; /*0x5c7e79*/
          *v9++ = v12; /*0x5c7e7b*/
          v10 = HIWORD(v12); /*0x5c7e84*/
          --v17; /*0x5c7e8b*/
        }
        while ( v17 ); /*0x5c7e8f*/
        result = v14; /*0x5c7e91*/
        v6 = v15; /*0x5c7e95*/
      }
      *v9 += v10; /*0x5c7e99*/
      --v16; /*0x5c7ea1*/
    }
    while ( v16 ); /*0x5c7ea5*/
  }
  return result; /*0x5c7ea7*/
}
}
} // namespace gamemd

// 0x5C8470
namespace gamemd {
unsigned int E4Recv_5C8470::sub_5C8470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_5C8470(_WORD *this)
{
  unsigned int result; // eax

  result = ((((((unsigned __int16)MEMORY[0xABF5A0] * (unsigned int)(unsigned __int16)~*this) >> 1) /*0x5c84f0*/
            + (((((unsigned __int16)MEMORY[0xABF6B4] * ((unsigned int)(unsigned __int16)~*(this - 2) + 1)) >> 1)
              + (((unsigned __int16)~*(this - 1) * (unsigned int)(unsigned __int16)MEMORY[0xABF5A0] + 0x10000) >> 1)
              + 1) >> 16)
            + (((unsigned __int16)~*(this - 1) * (unsigned int)(unsigned __int16)MEMORY[0xABF6B4]) >> 1)
            + 1) >> 14)
          + 2 * (unsigned __int16)MEMORY[0xABF6B4] * (unsigned __int16)~*this) >> MEMORY[0xABF8C4];
  if ( result >= 0xFFFF ) /*0x5c84f7*/
    return 0xFFFF; /*0x5c84f9*/
  return result; /*0x5c84ea*/
}
}
} // namespace gamemd

// 0x5C8500
namespace gamemd {
int ModBigIntExp(unsigned int * a0, AbstractClass * aP1, char * a2, char * a3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ModBigIntExp(_DWORD *a0, AbstractClass *aP1, char *a2, char *a3, int a5)
{
  int v5; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  char *v10; // eax
  int v11; // ecx
  char *v13; // eax
  int v14; // ecx
  int v15; // edi
  char *v16; // ebx
  int v17; // ecx
  char *v18; // edi
  _DWORD *v19; // eax
  int v20; // edi
  bool v21; // cc
  int v22; // ecx
  char *v23; // eax
  bool v24; // cc
  unsigned int v25; // edi
  char *v26; // eax
  int v27; // esi
  int v28; // ecx
  unsigned int v29; // edi
  int v30; // ecx
  char *v31; // eax
  int v32; // edx
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ebx
  _WORD *v39; // edx
  char *v40; // ebp
  unsigned int v41; // ebx
  int v43; // [esp+14h] [ebp-110h]
  int v45; // [esp+1Ch] [ebp-108h]
  unsigned int v46; // [esp+20h] [ebp-104h]
  char v47[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8508*/
  v6 = 4 * a5; /*0x5c8516*/
  memset(a0, 0, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c8529*/
  *a0 = 1; /*0x5c853d*/
  if ( !*(_DWORD *)a2 ) /*0x5c8543*/
  {
    v7 = &a2[v6 - 4]; /*0x5c854c*/
    v8 = a5; /*0x5c8552*/
    if ( !*(_DWORD *)v7 ) /*0x5c8548*/
    {
      do /*0x5c8561*/
      {
        if ( !--v8 ) /*0x5c8557*/
          break; /*0x5c8557*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c8559*/
        v7 -= 4; /*0x5c855c*/
      }
      while ( !v9 ); /*0x5c8561*/
    }
    if ( v8 <= 1 ) /*0x5c8566*/
    {
      if ( !*(_DWORD *)aP1->__pad_0 ) /*0x5c856c*/
      {
        v10 = &aP1->__pad_0[v6 - 4]; /*0x5c8579*/
        if ( !*(_DWORD *)v10 ) /*0x5c8575*/
        {
          do /*0x5c858c*/
          {
            if ( !--v5 ) /*0x5c8582*/
              break; /*0x5c8582*/
            v11 = *((_DWORD *)v10 - 1); /*0x5c8584*/
            v10 -= 4; /*0x5c8587*/
          }
          while ( !v11 ); /*0x5c858c*/
        }
        if ( v5 <= 1 ) /*0x5c8591*/
          return -1; /*0x5c85a4*/
      }
      return 0; /*0x5c8591*/
    }
  }
  if ( !*(_DWORD *)a3 ) /*0x5c85ae*/
  {
    v13 = &a3[v6 - 4]; /*0x5c85b7*/
    v14 = a5; /*0x5c85bd*/
    if ( !*(_DWORD *)v13 ) /*0x5c85b3*/
    {
      do /*0x5c85cc*/
      {
        if ( !--v14 ) /*0x5c85c2*/
          break; /*0x5c85c2*/
        v15 = *((_DWORD *)v13 - 1); /*0x5c85c4*/
        v13 -= 4; /*0x5c85c7*/
      }
      while ( !v15 ); /*0x5c85cc*/
    }
    if ( v14 <= 1 ) /*0x5c85d1*/
      return -2; /*0x5c85e2*/
  }
  v16 = &a3[v6 - 4]; /*0x5c85e9*/
  v17 = a5; /*0x5c85ed*/
  v18 = &aP1->__pad_0[v6 - 4]; /*0x5c85ef*/
  v19 = v16; /*0x5c85f3*/
  if ( *(_DWORD *)v18 < *(_DWORD *)v16 ) /*0x5c85f9*/
  {
LABEL_23:
    v22 = a5; /*0x5c860f*/
    v23 = &a3[v6 - 4]; /*0x5c8620*/
    if ( *(_DWORD *)&a2[v6 - 4] >= *(_DWORD *)v16 ) /*0x5c8626*/
    {
      v24 = *(_DWORD *)&a2[v6 - 4] <= *(_DWORD *)v16; /*0x5c862a*/
      while ( v24 ) /*0x5c862d*/
      {
        v23 -= 4; /*0x5c862f*/
        if ( !--v22 ) /*0x5c8633*/
          break; /*0x5c8633*/
        v25 = *(_DWORD *)&v23[a2 - a3]; /*0x5c8637*/
        v24 = v25 <= *(_DWORD *)v23; /*0x5c863a*/
        if ( v25 < *(_DWORD *)v23 ) /*0x5c863c*/
          goto LABEL_31; /*0x5c863c*/
      }
      return -4; /*0x5c8661*/
    }
LABEL_31:
    v26 = &a3[v6 - 4]; /*0x5c8664*/
    v27 = a5; /*0x5c8666*/
    v45 = a5; /*0x5c8668*/
    if ( !*(_DWORD *)v16 ) /*0x5c866c*/
    {
      do /*0x5c867c*/
      {
        if ( !--v27 ) /*0x5c8672*/
          break; /*0x5c8672*/
        v28 = *((_DWORD *)v26 - 1); /*0x5c8674*/
        v26 -= 4; /*0x5c8677*/
      }
      while ( !v28 ); /*0x5c867c*/
      v45 = v27; /*0x5c867e*/
    }
    if ( ModBigIntExp_Helper(a3, v27) ) /*0x5c868b*/
      return -5; /*0x5c86a3*/
    v29 = 4 * v27; /*0x5c86ad*/
    v30 = v27; /*0x5c86b4*/
    v46 = 4 * v27; /*0x5c86b6*/
    v31 = &a2[4 * v27 - 4]; /*0x5c86be*/
    if ( *(_DWORD *)v31 ) /*0x5c86ba*/
    {
LABEL_40:
      if ( v30 ) /*0x5c86d5*/
      {
        v34 = v30; /*0x5c86db*/
        v35 = *(_DWORD *)&a2[4 * v30 - 4]; /*0x5c86dd*/
        v36 = 0x80000000; /*0x5c86e1*/
        v37 = 32 * v34; /*0x5c86e6*/
        if ( v35 >= 0 ) /*0x5c86eb*/
        {
          do /*0x5c86f2*/
          {
            v36 >>= 1; /*0x5c86ed*/
            --v37; /*0x5c86ef*/
          }
          while ( (v35 & v36) == 0 ); /*0x5c86f2*/
        }
        v33 = v37; /*0x5c86f4*/
        goto LABEL_45; /*0x5c86f4*/
      }
    }
    else
    {
      while ( --v30 ) /*0x5c86c6*/
      {
        v32 = *((_DWORD *)v31 - 1); /*0x5c86c9*/
        v31 -= 4; /*0x5c86cc*/
        if ( v32 ) /*0x5c86d1*/
          goto LABEL_40; /*0x5c86d1*/
      }
    }
    v33 = 0; /*0x5c86d7*/
LABEL_45:
    if ( (v33 + 31) / 32 ) /*0x5c86ff*/
    {
      if ( v33 ) /*0x5c870a*/
        v38 = 1 << ((v33 - 1) % 32); /*0x5c8725*/
      else
        v38 = 0; /*0x5c870c*/
      v39 = a0; /*0x5c8727*/
      v40 = &a2[4 * ((v33 + 31) / 32) - 4]; /*0x5c872d*/
      v43 = v33 - 1; /*0x5c8734*/
      qmemcpy(a0, aP1, v29); /*0x5c8741*/
      v41 = v38 >> 1; /*0x5c8748*/
      if ( !v41 ) /*0x5c874c*/
      {
        v41 = 0x80000000; /*0x5c874e*/
        v40 = &a2[4 * ((v33 + 31) / 32) - 8]; /*0x5c8753*/
      }
      if ( v33 != 1 ) /*0x5c875f*/
      {
        while ( 1 ) /*0x5c8776*/
        {
          ComputeModularInverse((int *)v47, v39, v45); /*0x5c8776*/
          if ( (v41 & *(_DWORD *)v40) != 0 ) /*0x5c877e*/
            ComputeModularInverse(a0, aP1, v45); /*0x5c878e*/
          else
            qmemcpy(a0, v47, v46); /*0x5c87a6*/
          v41 >>= 1; /*0x5c87af*/
          if ( !v41 ) /*0x5c87b1*/
          {
            v41 = 0x80000000; /*0x5c87b3*/
            v40 -= 4; /*0x5c87b8*/
          }
          if ( !--v43 ) /*0x5c87c4*/
            break; /*0x5c87c4*/
          v39 = a0; /*0x5c8768*/
        }
      }
      memset(&g_MatrixTransformState + 489, 0, v46); /*0x5c87d8*/
      *(&g_MatrixTransformState + 554) = 0; /*0x5c87e1*/
      *(&g_MatrixTransformState + 489) = 0; /*0x5c87f2*/
      memset(&g_MatrixTransformState + 555, 0, v46); /*0x5c87fb*/
      *(&g_MatrixTransformState + 685) = 0; /*0x5c87ff*/
      *((_WORD *)&g_MatrixTransformState + 968) = 0; /*0x5c8808*/
      *(_QWORD *)(&g_MatrixTransformState + 487) = 0; /*0x5c882b*/
      *((_QWORD *)&g_MatrixTransformState + 344) = 0; /*0x5c8830*/
      *(&g_MatrixTransformState + 555) = 0; /*0x5c8836*/
      *(_QWORD *)(&g_MatrixTransformState + 485) = 0; /*0x5c8841*/
      *((_QWORD *)&(&g_MatrixTransformState)[57] + 1) = 0; /*0x5c884d*/
      *((_WORD *)&(&g_MatrixTransformState)[46] + 2) = 0; /*0x5c8853*/
      *(&g_MatrixTransformState + 483) = 0; /*0x5c885a*/
    }
    return 0; /*0x5c8863*/
  }
  v20 = v18 - v16; /*0x5c85fb*/
  v21 = *(_DWORD *)&v16[v20] <= *(_DWORD *)v16; /*0x5c85fd*/
  while ( v21 ) /*0x5c8600*/
  {
    --v19; /*0x5c8602*/
    if ( !--v17 ) /*0x5c8606*/
      break; /*0x5c8606*/
    v21 = *(_DWORD *)((char *)v19 + v20) <= *v19; /*0x5c860a*/
    if ( *(_DWORD *)((char *)v19 + v20) < *v19 ) /*0x5c860d*/
      goto LABEL_23; /*0x5c860d*/
  }
  return -3; /*0x5c8597*/
}
}
} // namespace gamemd

// 0x5C8930
namespace gamemd {
char sub_5C8930(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C8930(int a1, int a2)
{
  _WORD *v4; // esi
  _DWORD v6[64]; // [esp+Ch] [ebp-100h] BYREF

  v4 = &unk_82E174; /*0x5c893d*/
  while ( ShiftBigIntAndScan(v6, a1, *v4, a2) ) /*0x5c8955*/
  {
    if ( (unsigned int)++v4 >= 0x82FCE2 ) /*0x5c8960*/
      return 1; /*0x5c896d*/
  }
  return 0; /*0x5c8962*/
}
}
} // namespace gamemd

// 0x5C8980
namespace gamemd {
char sub_5C8980(char * a1, unsigned int edx0, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C8980(char *a1, unsigned int edx0, int a3)
{
  char *v3; // edx
  int v4; // ebx
  char *v5; // eax
  int v6; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned __int16 *i; // [esp+10h] [ebp-310h]
  int v15; // [esp+14h] [ebp-30Ch]
  char a2[256]; // [esp+20h] [ebp-300h] BYREF
  AbstractClass aP1; // [esp+120h] [ebp-200h] BYREF
  _DWORD a0[64]; // [esp+220h] [ebp-100h] BYREF

  v3 = a1; /*0x5c8993*/
  v4 = a3; /*0x5c8996*/
  qmemcpy(a2, a1, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c89ab*/
  v5 = a2; /*0x5c89b6*/
  v6 = a3; /*0x5c89c0*/
  if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c89c3*/
  {
    do /*0x5c89dc*/
    {
      v5 += 4; /*0x5c89cc*/
      if ( !--v6 ) /*0x5c89d0*/
        break; /*0x5c89d0*/
      v8 = *(_DWORD *)v5 - 1; /*0x5c89d5*/
      *(_DWORD *)v5 = v8; /*0x5c89d7*/
    }
    while ( v8 == -1 ); /*0x5c89dc*/
  }
  v15 = 0; /*0x5c89e2*/
  if ( !edx0 ) /*0x5c89ec*/
    return 1; /*0x5c8aa1*/
  for ( i = (unsigned __int16 *)&unk_82E174; ; ++i ) /*0x5c89f2*/
  {
    memset(&aP1, 0, v4 * 4); /*0x5c8a0a*/
    *(_DWORD *)aP1.__pad_0 = *i; /*0x5c8a25*/
    ModBigIntExp(a0, &aP1, a2, v3, a3); /*0x5c8a38*/
    if ( a0[0] != 1 ) /*0x5c8a45*/
      break; /*0x5c8a45*/
    v9 = &a0[v4 - 1]; /*0x5c8a4e*/
    v10 = a3; /*0x5c8a57*/
    if ( !a0[a3 - 1] ) /*0x5c8a47*/
    {
      do /*0x5c8a66*/
      {
        if ( !--v10 ) /*0x5c8a5c*/
          break; /*0x5c8a5c*/
      }
      while ( !*--v9 ); /*0x5c8a66*/
    }
    if ( v10 > 1 ) /*0x5c8a6b*/
      break; /*0x5c8a6b*/
    if ( ++v15 >= edx0 ) /*0x5c8a7d*/
      return 1; /*0x5c8a87*/
    v3 = a1; /*0x5c8a89*/
  }
  return 0; /*0x5c8a92*/
}
}
} // namespace gamemd

// 0x5C8AB0
namespace gamemd {
char ValidateRSAKey(int a1, char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ValidateRSAKey(int a1, char *a2, int a3, int a4)
{
  char *v4; // ecx
  unsigned __int16 v5; // si
  _DWORD *v6; // edx
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int HighestBitBitArray; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  _DWORD *v19; // edi
  char *v20; // edx
  _DWORD *v21; // eax
  int v22; // esi
  int v23; // edx
  bool v24; // cc
  char *v25; // ebx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // edx
  bool v29; // cc
  _DWORD *v30; // eax
  int v31; // ecx
  unsigned __int8 v34; // [esp+10h] [ebp-718h]
  int v35; // [esp+10h] [ebp-718h]
  unsigned int v36; // [esp+14h] [ebp-714h]
  unsigned __int8 v37; // [esp+18h] [ebp-710h]
  int v38; // [esp+1Ch] [ebp-70Ch]
  char *v39; // [esp+20h] [ebp-708h]
  int v40; // [esp+24h] [ebp-704h] BYREF
  _DWORD v41[64]; // [esp+28h] [ebp-700h] BYREF
  _DWORD v42[64]; // [esp+128h] [ebp-600h] BYREF
  _DWORD v43[64]; // [esp+228h] [ebp-500h] BYREF
  char v44[256]; // [esp+328h] [ebp-400h] BYREF
  _BYTE v45[256]; // [esp+428h] [ebp-300h] BYREF
  char v46[256]; // [esp+528h] [ebp-200h] BYREF
  _DWORD v47[64]; // [esp+628h] [ebp-100h] BYREF

  v40 = a1; /*0x5c8ac1*/
  v39 = a2; /*0x5c8ac9*/
  v4 = a2; /*0x5c8ad0*/
  v34 = 0; /*0x5c8ad2*/
  v5 = 1; /*0x5c8ad9*/
  v6 = v42; /*0x5c8ade*/
  if ( 2 * a4 ) /*0x5c8acd*/
  {
    v7 = 2 * a4; /*0x5c8ae7*/
    do /*0x5c8b19*/
    {
      v8 = *(_WORD *)v4; /*0x5c8af2*/
      v4 += 2; /*0x5c8af5*/
      v6 = (_DWORD *)((char *)v6 + 2); /*0x5c8b04*/
      v9 = v8 - v5 - v34; /*0x5c8b07*/
      v5 = 0; /*0x5c8b09*/
      *((_WORD *)v6 - 1) = v9; /*0x5c8b0b*/
      --v7; /*0x5c8b14*/
      v34 = BYTE2(v9) & 1; /*0x5c8b15*/
    }
    while ( v7 ); /*0x5c8b19*/
  }
  v10 = 0; /*0x5c8b1d*/
  v36 = 0; /*0x5c8b25*/
  if ( 32 * a4 ) /*0x5c8b22*/
  {
    do /*0x5c8b48*/
    {
      if ( ((1 << (v10 & 0x1F)) & v42[v10 >> 5]) != 0 ) /*0x5c8b43*/
        break; /*0x5c8b43*/
      ++v10; /*0x5c8b45*/
    }
    while ( v10 < 32 * a4 ); /*0x5c8b48*/
    v36 = v10; /*0x5c8b4a*/
  }
  qmemcpy(v46, v42, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8b68*/
  RotateBitBufferRight(v42, v10, a4); /*0x5c8b7b*/
  v38 = 0; /*0x5c8b87*/
  if ( a3 <= 0 ) /*0x5c8b91*/
    return 1; /*0x5c8dbe*/
  while ( 1 ) /*0x5c8bac*/
  {
    memset(v44, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8bac*/
    v37 = 0; /*0x5c8bb0*/
    *(_DWORD *)v44 = 2; /*0x5c8bbe*/
    v11 = v45; /*0x5c8bce*/
    if ( 2 * a4 ) /*0x5c8bc9*/
    {
      v12 = 2 * a4; /*0x5c8bf7*/
      do /*0x5c8c25*/
      {
        v13 = *(unsigned __int16 *)&v11[(char *)v42 - v45] - *(unsigned __int16 *)&v11[v44 - v45]; /*0x5c8c06*/
        v11 += 2; /*0x5c8c12*/
        v14 = v13 - v37; /*0x5c8c15*/
        *((_WORD *)v11 - 1) = v14; /*0x5c8c17*/
        --v12; /*0x5c8c20*/
        v37 = BYTE2(v14) & 1; /*0x5c8c21*/
      }
      while ( v12 ); /*0x5c8c25*/
      v10 = v36; /*0x5c8c27*/
    }
    HighestBitBitArray = FindBitArrayHighestBit((int)v45, a4); /*0x5c8c39*/
    do /*0x5c8c63*/
      ValidateRSAKey_Helper(HighestBitBitArray, a4); /*0x5c8c48*/
    while ( (int)CompareBigIntLE(a4) > 0 ); /*0x5c8c63*/
    Crypto_Helper(v44, 0, a4); /*0x5c8c7e*/
    ModBigIntExp(v41, v43, v46, v39, a4); /*0x5c8c9c*/
    if ( v41[0] == 1 ) /*0x5c8ca6*/
    {
      v16 = &v41[a4 - 1]; /*0x5c8cac*/
      v17 = a4; /*0x5c8cb2*/
      if ( !*v16 ) /*0x5c8ca8*/
      {
        do /*0x5c8cc1*/
        {
          if ( !--v17 ) /*0x5c8cb7*/
            break; /*0x5c8cb7*/
        }
        while ( !*--v16 ); /*0x5c8cc1*/
      }
      if ( v17 <= 1 ) /*0x5c8cc6*/
        goto LABEL_40; /*0x5c8cc6*/
    }
    v19 = &v41[a4 + 63]; /*0x5c8ccc*/
    v20 = (char *)&v41[a4 - 1]; /*0x5c8cd3*/
    v21 = v19; /*0x5c8cd7*/
    v22 = a4; /*0x5c8cd9*/
    if ( *(_DWORD *)v20 >= *v19 ) /*0x5c8cdf*/
    {
      v23 = v20 - (char *)v19; /*0x5c8ce1*/
      v24 = *(_DWORD *)((char *)v19 + v23) <= *v19; /*0x5c8ce3*/
      do /*0x5c8cf7*/
      {
        if ( !v24 ) /*0x5c8ce6*/
          break; /*0x5c8ce6*/
        --v21; /*0x5c8ce8*/
        if ( !--v22 ) /*0x5c8cec*/
          goto LABEL_40; /*0x5c8cec*/
        v24 = *(_DWORD *)((char *)v21 + v23) <= *v21; /*0x5c8cf4*/
      }
      while ( *(_DWORD *)((char *)v21 + v23) >= *v21 ); /*0x5c8cf7*/
    }
    v35 = 1; /*0x5c8cfc*/
    if ( v10 > 1 ) /*0x5c8d04*/
      break; /*0x5c8d04*/
LABEL_39:
    if ( v35 == v10 ) /*0x5c8d91*/
      return 0; /*0x5c8d91*/
LABEL_40:
    if ( ++v38 >= a3 ) /*0x5c8da5*/
      return 1; /*0x5c8da5*/
  }
  v25 = &v46[4 * a4 + 252]; /*0x5c8d0a*/
  while ( 1 ) /*0x5c8d2a*/
  {
    ModBigIntExp(v47, v41, v44, v39, a4); /*0x5c8d2a*/
    v26 = &v41[a4 + 63]; /*0x5c8d31*/
    v27 = a4; /*0x5c8d33*/
    if ( *(_DWORD *)v25 >= *v19 ) /*0x5c8d39*/
    {
      v28 = v25 - (char *)v19; /*0x5c8d3d*/
      v29 = *(_DWORD *)v25 <= *v19; /*0x5c8d3f*/
      do /*0x5c8d4f*/
      {
        if ( !v29 ) /*0x5c8d42*/
          break; /*0x5c8d42*/
        --v26; /*0x5c8d44*/
        if ( !--v27 ) /*0x5c8d48*/
          goto LABEL_38; /*0x5c8d48*/
        v29 = *(_DWORD *)((char *)v26 + v28) <= *v26; /*0x5c8d4c*/
      }
      while ( *(_DWORD *)((char *)v26 + v28) >= *v26 ); /*0x5c8d4f*/
    }
    if ( v41[0] == 1 ) /*0x5c8d56*/
    {
      v30 = &v41[a4 - 1]; /*0x5c8d5c*/
      v31 = a4; /*0x5c8d62*/
      if ( !*v30 ) /*0x5c8d58*/
      {
        do /*0x5c8d71*/
        {
          if ( !--v31 ) /*0x5c8d67*/
            break; /*0x5c8d67*/
        }
        while ( !*--v30 ); /*0x5c8d71*/
      }
      if ( v31 <= 1 ) /*0x5c8d76*/
        return 0; /*0x5c8dac*/
    }
    if ( ++v35 >= v36 ) /*0x5c8d87*/
    {
LABEL_38:
      v10 = v36; /*0x5c8d89*/
      goto LABEL_39; /*0x5c8d89*/
    }
  }
}
}
} // namespace gamemd

// 0x5C8E40
namespace gamemd {
char sub_5C8E40(ObjectClass * aP0, int a2, int a3, ObjectClass * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C8E40(ObjectClass *aP0, int a2, int a3, ObjectClass *aP3, int a5)
{
  int v5; // edi
  _BYTE *v7; // ecx
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ebp
  int *v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // esi
  char v21; // cl
  int v22; // ebp
  char *v23; // edx
  unsigned int *v24; // eax
  int v25; // esi
  int v26; // edx
  bool v27; // cc
  unsigned int v28; // edi
  ObjectClass *v29; // edi
  int v30; // edx
  char *v31; // ecx
  unsigned __int8 v33; // [esp+10h] [ebp-114h]
  int v34; // [esp+10h] [ebp-114h]
  bool v35; // [esp+10h] [ebp-114h]
  int v36; // [esp+14h] [ebp-110h]
  char *v37; // [esp+14h] [ebp-110h]
  int v39; // [esp+1Ch] [ebp-108h]
  char *v40; // [esp+20h] [ebp-104h] BYREF
  _BYTE v41[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8e4a*/
  v33 = 0; /*0x5c8e57*/
  v7 = v41; /*0x5c8e5f*/
  if ( 2 * a5 ) /*0x5c8e63*/
  {
    v36 = 2 * a5; /*0x5c8e85*/
    do /*0x5c8ebc*/
    {
      v8 = *(unsigned __int16 *)&v7[(char *)aP3 - v41] - *(unsigned __int16 *)&v7[a3 - (_DWORD)v41]; /*0x5c8e95*/
      v7 += 2; /*0x5c8ea1*/
      v9 = v8 - v33; /*0x5c8ea4*/
      *((_WORD *)v7 - 1) = v9; /*0x5c8ea6*/
      v33 = BYTE2(v9) & 1; /*0x5c8eaf*/
      --v36; /*0x5c8eb8*/
    }
    while ( v36 ); /*0x5c8ebc*/
  }
  v10 = &v41[4 * a5 - 4]; /*0x5c8ec2*/
  v11 = a5; /*0x5c8ec8*/
  v37 = v10; /*0x5c8eca*/
  if ( *(_DWORD *)v10 ) /*0x5c8ebe*/
  {
LABEL_7:
    if ( v11 ) /*0x5c8edf*/
    {
      v14 = (int *)&v41[4 * v11 - 4]; /*0x5c8ee9*/
      v15 = v11; /*0x5c8eed*/
      v16 = 0x80000000; /*0x5c8eef*/
      v17 = *v14; /*0x5c8ef4*/
      v18 = 32 * v15; /*0x5c8ef6*/
      if ( v17 >= 0 ) /*0x5c8efb*/
      {
        do /*0x5c8f02*/
        {
          v16 >>= 1; /*0x5c8efd*/
          --v18; /*0x5c8eff*/
        }
        while ( (v17 & v16) == 0 ); /*0x5c8f02*/
      }
      v34 = v18; /*0x5c8f04*/
      v13 = v18; /*0x5c8f08*/
      goto LABEL_12; /*0x5c8f08*/
    }
  }
  else
  {
    while ( --v11 ) /*0x5c8ed0*/
    {
      v12 = *((_DWORD *)v10 - 1); /*0x5c8ed3*/
      v10 -= 4; /*0x5c8ed6*/
      if ( v12 ) /*0x5c8edb*/
        goto LABEL_7; /*0x5c8edb*/
    }
  }
  v13 = 0; /*0x5c8ee1*/
  v34 = 0; /*0x5c8ee3*/
LABEL_12:
  v19 = 32 * a5; /*0x5c8f0a*/
  v39 = 32 * a5; /*0x5c8f13*/
  v40 = &aP0->__pad_0[4 * a5 - 4]; /*0x5c8f17*/
  while ( 1 ) /*0x5c8f1b*/
  {
    if ( v13 >= v19 ) /*0x5c8f1d*/
      v13 = v19; /*0x5c8f1f*/
    memset(aP0, 0, 4 * v5); /*0x5c8f3b*/
    *(_DWORD *)aP0->__pad_0 = 0; /*0x5c8f48*/
    v20 = v13 / 8 + 1; /*0x5c8f53*/
    (*(void (__thiscall **)(int, ObjectClass *, int))(*(_DWORD *)a2 + 8))(a2, aP0, v20); /*0x5c8f56*/
    v21 = v13 % 8; /*0x5c8f67*/
    v22 = a5; /*0x5c8f71*/
    v23 = v40; /*0x5c8f7c*/
    aP0->__pad_0[v20 - 1] &= ~(-1 << v21); /*0x5c8f80*/
    v24 = (unsigned int *)&v41[4 * a5 - 4]; /*0x5c8f84*/
    v25 = a5; /*0x5c8f8a*/
    if ( *(_DWORD *)v23 < *(_DWORD *)v37 ) /*0x5c8f90*/
      break; /*0x5c8f90*/
    v26 = v23 - v37; /*0x5c8f92*/
    v27 = *(_DWORD *)&v37[v26] <= *(_DWORD *)v37; /*0x5c8f94*/
    while ( v27 ) /*0x5c8f97*/
    {
      --v24; /*0x5c8f99*/
      if ( --v25 ) /*0x5c8f9d*/
      {
        v28 = *(unsigned int *)((char *)v24 + v26); /*0x5c8fa1*/
        v27 = v28 <= *v24; /*0x5c8fa4*/
        if ( v28 >= *v24 ) /*0x5c8fa6*/
          continue; /*0x5c8fa6*/
      }
      goto LABEL_20; /*0x5c8fa6*/
    }
    v5 = a5; /*0x5c8fe6*/
    v19 = v39; /*0x5c8fed*/
    v13 = v34; /*0x5c8ff1*/
  }
LABEL_20:
  v35 = 0; /*0x5c8fa8*/
  v29 = aP0; /*0x5c8faf*/
  if ( a5 ) /*0x5c8fb1*/
  {
    v30 = a3 - (_DWORD)aP0; /*0x5c8fba*/
    do /*0x5c9008*/
    {
      v24 = (unsigned int *)(*(_DWORD *)aP0->__pad_0 + *(_DWORD *)&v29->__pad_0[v30]); /*0x5c8fc5*/
      v31 = (char *)v24 + v35; /*0x5c8fcd*/
      v35 = (unsigned int)v24 < *(_DWORD *)aP0->__pad_0 || (LOBYTE(v24) = v35) != 0 && !v31; /*0x5c8ffa*/
      *(_DWORD *)v29->__pad_0 = v31; /*0x5c8fff*/
      aP0 = (ObjectClass *)((char *)aP0 + 4); /*0x5c9001*/
      v29 = (ObjectClass *)((char *)v29 + 4); /*0x5c9004*/
      --v22; /*0x5c9007*/
    }
    while ( v22 ); /*0x5c9008*/
  }
  return (char)v24; /*0x5c900a*/
}
}
} // namespace gamemd

// 0x5C9020
namespace gamemd {
char ModCryptoExp(char * a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ModCryptoExp(char *a1, int edx0)
{
  char *v2; // edi
  __int64 v4; // rax
  int v6; // esi
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned __int16 v10; // bp
  _WORD *v11; // edi
  int v12; // esi
  char *v13; // ecx
  _WORD *v14; // esi
  int v15; // edx
  char *v16; // eax
  int v18; // ecx
  unsigned __int16 *v19; // esi
  _DWORD *v20; // eax
  int v21; // ecx
  char a2[252]; // [esp+14h] [ebp-300h] BYREF
  _DWORD a0[64]; // [esp+114h] [ebp-200h] BYREF
  AbstractClass aP1; // [esp+214h] [ebp-100h] BYREF

  v2 = a1; /*0x5c902a*/
  HIDWORD(v4) = *(_DWORD *)a1; /*0x5c9032*/
  if ( (*(_DWORD *)a1 & 1) == 0 ) /*0x5c9037*/
    return 0; /*0x5c9045*/
  v6 = *(_DWORD *)&a1[4 * edx0 - 4]; /*0x5c9046*/
  v7 = &a1[4 * edx0 - 4]; /*0x5c904a*/
  v8 = edx0; /*0x5c9050*/
  if ( !v6 ) /*0x5c9052*/
  {
    do /*0x5c905f*/
    {
      if ( !--v8 ) /*0x5c9055*/
        break; /*0x5c9055*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c9057*/
      v7 -= 4; /*0x5c905a*/
    }
    while ( !v9 ); /*0x5c905f*/
  }
  if ( v8 > 1 || HIDWORD(v4) > (unsigned __int16)dword_82FCE0 ) /*0x5c9072*/
  {
LABEL_17:
    v14 = &unk_82E174; /*0x5c90bb*/
    while ( 1 ) /*0x5c90c0*/
    {
      WORD2(v4) = *v14; /*0x5c90c0*/
      if ( !ShiftBigIntAndScan(a0, (int)v2, SHIDWORD(v4), edx0) ) /*0x5c90ce*/
        break; /*0x5c90ce*/
      if ( (unsigned int)++v14 >= 0x82FCE2 ) /*0x5c90e5*/
      {
        qmemcpy(a2, v2, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c90f9*/
        v15 = edx0; /*0x5c90fd*/
        v16 = a2; /*0x5c9102*/
        if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c910d*/
        {
          do /*0x5c9126*/
          {
            v16 += 4; /*0x5c9116*/
            if ( !--v15 ) /*0x5c911a*/
              break; /*0x5c911a*/
            v18 = *(_DWORD *)v16 - 1; /*0x5c911f*/
            *(_DWORD *)v16 = v18; /*0x5c9121*/
          }
          while ( v18 == -1 ); /*0x5c9126*/
        }
        v19 = (unsigned __int16 *)&unk_82E174; /*0x5c9128*/
        while ( 1 ) /*0x5c9145*/
        {
          memset(&aP1, 0, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c9145*/
          *(_DWORD *)aP1.__pad_0 = *v19; /*0x5c916b*/
          ModBigIntExp(a0, &aP1, a2, a1, edx0); /*0x5c9172*/
          if ( a0[0] != 1 ) /*0x5c917f*/
            break; /*0x5c917f*/
          v20 = &a0[edx0 - 1]; /*0x5c918c*/
          v21 = edx0; /*0x5c9195*/
          if ( !*v20 ) /*0x5c9185*/
          {
            do /*0x5c91a4*/
            {
              if ( !--v21 ) /*0x5c919a*/
                break; /*0x5c919a*/
            }
            while ( !*--v20 ); /*0x5c91a4*/
          }
          if ( v21 > 1 ) /*0x5c91a9*/
            break; /*0x5c91a9*/
          if ( ++v19 >= word_82E178 ) /*0x5c91b8*/
            return 1; /*0x5c91b8*/
        }
        return 0; /*0x5c91a9*/
      }
    }
    return 0; /*0x5c90d6*/
  }
  v10 = *(_WORD *)v2; /*0x5c9074*/
  v11 = &unk_82E174; /*0x5c9077*/
  v12 = 3511; /*0x5c907c*/
  do /*0x5c90a6*/
  {
    v4 = v12; /*0x5c9083*/
    WORD2(v4) = v11[v12 / 2]; /*0x5c9088*/
    v13 = (char *)&v11[v12 / 2]; /*0x5c908c*/
    if ( WORD2(v4) <= v10 ) /*0x5c9092*/
    {
      if ( WORD2(v4) == v10 ) /*0x5c9098*/
        goto LABEL_15; /*0x5c9098*/
      v11 = v13 + 2; /*0x5c909a*/
      v12 += -1 - v12 / 2; /*0x5c90a2*/
    }
    else
    {
      v12 /= 2; /*0x5c9094*/
    }
  }
  while ( v12 > 0 ); /*0x5c90a6*/
  v13 = 0; /*0x5c90a8*/
LABEL_15:
  if ( !v13 ) /*0x5c90b1*/
  {
    v2 = a1; /*0x5c90b7*/
    goto LABEL_17; /*0x5c90b7*/
  }
  return 1; /*0x5c9039*/
}
}
} // namespace gamemd

// 0x5C91D0
namespace gamemd {
int sub_5C91D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C91D0()
{
  MEMORY[0xABF8E0] = 0; /*0x5c91d2*/
  MEMORY[0xABF8E4] = 0; /*0x5c91d7*/
  MEMORY[0xABF8E8] = 0; /*0x5c91dc*/
  MEMORY[0xABF8EC] = 0; /*0x5c91e1*/
  return 0; /*0x5c91e6*/
}
}
} // namespace gamemd

// 0x5C91F0
namespace gamemd {
void sub_5C91F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C91F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c91fc*/
  MEMORY[0xABF8F8] = Math::Sqrt(v0 + v0); /*0x5c920e*/
}
}
} // namespace gamemd

// 0x5C9220
namespace gamemd {
void sub_5C9220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9220()
{
  MEMORY[0xABF948] = MEMORY[0xABF8F8] / 60.0; /*0x5c922c*/
}
}
} // namespace gamemd

// 0x5C9240
namespace gamemd {
void sub_5C9240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9240()
{
  MEMORY[0xABF930] = 1.0 / MEMORY[0xABF948]; /*0x5c924c*/
}
}
} // namespace gamemd

// 0x5C9260
namespace gamemd {
void sub_5C9260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9260()
{
  MEMORY[0xABF928] = 0.0174532925199433 * 45.0; /*0x5c926c*/
}
}
} // namespace gamemd

// 0x5C9280
namespace gamemd {
void sub_5C9280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9280()
{
  MEMORY[0xABF900] = 0.0174532925199433 * 60.0; /*0x5c928c*/
}
}
} // namespace gamemd

// 0x5C92A0
namespace gamemd {
void sub_5C92A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C92A0()
{
  MEMORY[0xABF8D8] = 0.0174532925199433 * 90.0; /*0x5c92ac*/
}
}
} // namespace gamemd

// 0x5C92C0
namespace gamemd {
long long sub_5C92C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C92C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF8D8] - MEMORY[0xABF900]); /*0x5c92d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF8F8] * 0.5); /*0x5c92e6*/
  MEMORY[0xABF950] = result; /*0x5c92eb*/
  return result; /*0x5c92f0*/
}
}
} // namespace gamemd

// 0x5C9300
namespace gamemd {
void sub_5C9300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9300()
{
  MEMORY[0xABF908] = Math::ArcTan((double)MEMORY[0xABF950] * 0.00390625); /*0x5c9317*/
}
}
} // namespace gamemd

// 0x5C9330
namespace gamemd {
void sub_5C9330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9330()
{
  MEMORY[0xABF920] = Math::ArcTan((double)(2 * MEMORY[0xABF950]) / MEMORY[0xABF8F8]); /*0x5c9352*/
}
}
} // namespace gamemd

// 0x5C9360
namespace gamemd {
long long sub_5C9360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C9360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF950]) + 0.5); /*0x5c937b*/
  MEMORY[0xABF944] = result; /*0x5c9380*/
  return result; /*0x5c9386*/
}
}
} // namespace gamemd

// 0x5C9390
namespace gamemd {
int sub_5C9390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C9390()
{
  MEMORY[0xABF8F0] = 0; /*0x5c9392*/
  MEMORY[0xABF8F2] = 0; /*0x5c9398*/
  return 0; /*0x5c939e*/
}
}
} // namespace gamemd

// 0x5C93A0
namespace gamemd {
int sub_5C93A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C93A0()
{
  MEMORY[0xABF910] = 0; /*0x5c93a2*/
  MEMORY[0xABF914] = 0; /*0x5c93a7*/
  MEMORY[0xABF918] = 0; /*0x5c93ac*/
  return 0; /*0x5c93b1*/
}
}
} // namespace gamemd

// 0x5C93C0
namespace gamemd {
int sub_5C93C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C93C0()
{
  MEMORY[0xABF940] = 0; /*0x5c93c5*/
  MEMORY[0xABF938] = 128; /*0x5c93cf*/
  MEMORY[0xABF93C] = 128; /*0x5c93d4*/
  return 128; /*0x5c93d9*/
}
}
} // namespace gamemd

// 0x5C9420
namespace gamemd {
void E4Recv_5C9420::sub_5C9420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5C9420(void *this)
{
  *(_DWORD *)this = &Megawealth::`vftable'; /*0x5c9420*/
  MultiplayerGameMode::Dtor(this); /*0x5c9426*/
}
}
} // namespace gamemd

// 0x5C94F0
namespace gamemd {
int sub_5C94F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C94F0()
{
  MEMORY[0xABF980] = 0; /*0x5c94f2*/
  MEMORY[0xABF984] = 0; /*0x5c94f7*/
  MEMORY[0xABF988] = 0; /*0x5c94fc*/
  MEMORY[0xABF98C] = 0; /*0x5c9501*/
  return 0; /*0x5c9506*/
}
}
} // namespace gamemd

// 0x5C9510
namespace gamemd {
void sub_5C9510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9510()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5c951c*/
  MEMORY[0xABF998] = Math::Sqrt(v0 + v0); /*0x5c952e*/
}
}
} // namespace gamemd

// 0x5C9540
namespace gamemd {
void sub_5C9540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9540()
{
  MEMORY[0xABF9E8] = MEMORY[0xABF998] / 60.0; /*0x5c954c*/
}
}
} // namespace gamemd

// 0x5C9560
namespace gamemd {
void sub_5C9560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9560()
{
  MEMORY[0xABF9D0] = 1.0 / MEMORY[0xABF9E8]; /*0x5c956c*/
}
}
} // namespace gamemd

// 0x5C9580
namespace gamemd {
void sub_5C9580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9580()
{
  MEMORY[0xABF9C8] = 0.0174532925199433 * 45.0; /*0x5c958c*/
}
}
} // namespace gamemd

// 0x5C95A0
namespace gamemd {
void sub_5C95A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C95A0()
{
  MEMORY[0xABF9A0] = 0.0174532925199433 * 60.0; /*0x5c95ac*/
}
}
} // namespace gamemd

// 0x5C95C0
namespace gamemd {
void sub_5C95C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C95C0()
{
  MEMORY[0xABF978] = 0.0174532925199433 * 90.0; /*0x5c95cc*/
}
}
} // namespace gamemd

// 0x5C95E0
namespace gamemd {
long long sub_5C95E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C95E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF978] - MEMORY[0xABF9A0]); /*0x5c95f2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF998] * 0.5); /*0x5c9606*/
  MEMORY[0xABF9F0] = result; /*0x5c960b*/
  return result; /*0x5c9610*/
}
}
} // namespace gamemd

// 0x5C9620
namespace gamemd {
void sub_5C9620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9620()
{
  MEMORY[0xABF9A8] = Math::ArcTan((double)MEMORY[0xABF9F0] * 0.00390625); /*0x5c9637*/
}
}
} // namespace gamemd

// 0x5C9650
namespace gamemd {
void sub_5C9650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C9650()
{
  MEMORY[0xABF9C0] = Math::ArcTan((double)(2 * MEMORY[0xABF9F0]) / MEMORY[0xABF998]); /*0x5c9672*/
}
}
} // namespace gamemd

// 0x5C9680
namespace gamemd {
long long sub_5C9680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5C9680()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF9F0]) + 0.5); /*0x5c969b*/
  MEMORY[0xABF9E4] = result; /*0x5c96a0*/
  return result; /*0x5c96a6*/
}
}
} // namespace gamemd

// 0x5C96B0
namespace gamemd {
int sub_5C96B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C96B0()
{
  MEMORY[0xABF990] = 0; /*0x5c96b2*/
  MEMORY[0xABF992] = 0; /*0x5c96b8*/
  return 0; /*0x5c96be*/
}
}
} // namespace gamemd

// 0x5C96C0
namespace gamemd {
int sub_5C96C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C96C0()
{
  MEMORY[0xABF9B0] = 0; /*0x5c96c2*/
  MEMORY[0xABF9B4] = 0; /*0x5c96c7*/
  MEMORY[0xABF9B8] = 0; /*0x5c96cc*/
  return 0; /*0x5c96d1*/
}
}
} // namespace gamemd

// 0x5C96E0
namespace gamemd {
int sub_5C96E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C96E0()
{
  MEMORY[0xABF9E0] = 0; /*0x5c96e5*/
  MEMORY[0xABF9D8] = 128; /*0x5c96ef*/
  MEMORY[0xABF9DC] = 128; /*0x5c96f4*/
  return 128; /*0x5c96f9*/
}
}
} // namespace gamemd

// 0x5C9850
namespace gamemd {
LRESULT sub_5C9850(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall sub_5C9850(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x5c9868*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x5c9872*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x5c988b*/
}
}
} // namespace gamemd

// 0x5C9AE0
namespace gamemd {
int sub_5C9AE0(const void * a1, const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_5C9AE0(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x5c9aec*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x5c9aef*/
  if ( v2 == v3 )
    return 0; /*0x5c9af6*/
  else
    return v2 <= v3 ? 1 : -1;
}
}
} // namespace gamemd

// 0x5CA420
namespace gamemd {
void sub_5CA420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA420()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ca42c*/
  MEMORY[0xABFA20] = Math::Sqrt(v0 + v0); /*0x5ca43e*/
}
}
} // namespace gamemd

// 0x5CA450
namespace gamemd {
void sub_5CA450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA450()
{
  MEMORY[0xABFA70] = MEMORY[0xABFA20] / 60.0; /*0x5ca45c*/
}
}
} // namespace gamemd

// 0x5CA470
namespace gamemd {
void sub_5CA470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA470()
{
  MEMORY[0xABFA58] = 1.0 / MEMORY[0xABFA70]; /*0x5ca47c*/
}
}
} // namespace gamemd

// 0x5CA490
namespace gamemd {
void sub_5CA490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA490()
{
  MEMORY[0xABFA50] = 0.0174532925199433 * 45.0; /*0x5ca49c*/
}
}
} // namespace gamemd

// 0x5CA4B0
namespace gamemd {
void sub_5CA4B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA4B0()
{
  MEMORY[0xABFA28] = 0.0174532925199433 * 60.0; /*0x5ca4bc*/
}
}
} // namespace gamemd

// 0x5CA4D0
namespace gamemd {
void sub_5CA4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA4D0()
{
  MEMORY[0xABFA00] = 0.0174532925199433 * 90.0; /*0x5ca4dc*/
}
}
} // namespace gamemd

// 0x5CA4F0
namespace gamemd {
long long sub_5CA4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CA4F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABFA00] - MEMORY[0xABFA28]); /*0x5ca502*/
  result = Math::RoundToInt(v0 * MEMORY[0xABFA20] * 0.5); /*0x5ca516*/
  MEMORY[0xABFA78] = result; /*0x5ca51b*/
  return result; /*0x5ca520*/
}
}
} // namespace gamemd

// 0x5CA530
namespace gamemd {
void sub_5CA530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA530()
{
  MEMORY[0xABFA30] = Math::ArcTan((double)MEMORY[0xABFA78] * 0.00390625); /*0x5ca547*/
}
}
} // namespace gamemd

// 0x5CA560
namespace gamemd {
void sub_5CA560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CA560()
{
  MEMORY[0xABFA48] = Math::ArcTan((double)(2 * MEMORY[0xABFA78]) / MEMORY[0xABFA20]); /*0x5ca582*/
}
}
} // namespace gamemd

// 0x5CA590
namespace gamemd {
long long sub_5CA590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CA590()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFA78]) + 0.5); /*0x5ca5ab*/
  MEMORY[0xABFA6C] = result; /*0x5ca5b0*/
  return result; /*0x5ca5b6*/
}
}
} // namespace gamemd

// 0x5CA5C0
namespace gamemd {
int sub_5CA5C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CA5C0()
{
  MEMORY[0xABFA18] = 0; /*0x5ca5c2*/
  MEMORY[0xABFA1A] = 0; /*0x5ca5c8*/
  return 0; /*0x5ca5ce*/
}
}
} // namespace gamemd

// 0x5CA5D0
namespace gamemd {
int sub_5CA5D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CA5D0()
{
  MEMORY[0xABFA38] = 0; /*0x5ca5d2*/
  MEMORY[0xABFA3C] = 0; /*0x5ca5d7*/
  MEMORY[0xABFA40] = 0; /*0x5ca5dc*/
  return 0; /*0x5ca5e1*/
}
}
} // namespace gamemd

// 0x5CA5F0
namespace gamemd {
int sub_5CA5F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CA5F0()
{
  MEMORY[0xABFA68] = 0; /*0x5ca5f5*/
  MEMORY[0xABFA60] = 128; /*0x5ca5ff*/
  MEMORY[0xABFA64] = 128; /*0x5ca604*/
  return 128; /*0x5ca609*/
}
}
} // namespace gamemd

// 0x5CA610
namespace gamemd {
int sub_5CA610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CA610()
{
  MEMORY[0xABFA08] = 0; /*0x5ca612*/
  MEMORY[0xABFA0C] = 0; /*0x5ca617*/
  MEMORY[0xABFA10] = 0; /*0x5ca61c*/
  MEMORY[0xABFA14] = 0; /*0x5ca621*/
  return 0; /*0x5ca626*/
}
}
} // namespace gamemd

// 0x5CA670
namespace gamemd {
void E4Recv_5CA670::sub_5CA670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5CA670(void *this)
{
  *(_DWORD *)this = &MultiplayerSiege::`vftable'; /*0x5ca670*/
  MultiplayerGameMode::Dtor(this); /*0x5ca676*/
}
}
} // namespace gamemd

// 0x5CAC00
namespace gamemd {
int sub_5CAC00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CAC00()
{
  MEMORY[0xABFA88] = 0; /*0x5cac02*/
  MEMORY[0xABFA8C] = 0; /*0x5cac07*/
  MEMORY[0xABFA90] = 0; /*0x5cac0c*/
  MEMORY[0xABFA94] = 0; /*0x5cac11*/
  return 0; /*0x5cac16*/
}
}
} // namespace gamemd

// 0x5CAC20
namespace gamemd {
void sub_5CAC20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAC20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5cac2c*/
  MEMORY[0xABFAA0] = Math::Sqrt(v0 + v0); /*0x5cac3e*/
}
}
} // namespace gamemd

// 0x5CAC50
namespace gamemd {
void sub_5CAC50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAC50()
{
  MEMORY[0xABFAF0] = MEMORY[0xABFAA0] / 60.0; /*0x5cac5c*/
}
}
} // namespace gamemd

// 0x5CAC70
namespace gamemd {
void sub_5CAC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAC70()
{
  MEMORY[0xABFAD8] = 1.0 / MEMORY[0xABFAF0]; /*0x5cac7c*/
}
}
} // namespace gamemd

// 0x5CAC90
namespace gamemd {
void sub_5CAC90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CAC90()
{
  MEMORY[0xABFAD0] = 0.0174532925199433 * 45.0; /*0x5cac9c*/
}
}
} // namespace gamemd

// 0x5CACB0
namespace gamemd {
void sub_5CACB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CACB0()
{
  MEMORY[0xABFAA8] = 0.0174532925199433 * 60.0; /*0x5cacbc*/
}
}
} // namespace gamemd

// 0x5CACD0
namespace gamemd {
void sub_5CACD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CACD0()
{
  MEMORY[0xABFA80] = 0.0174532925199433 * 90.0; /*0x5cacdc*/
}
}
} // namespace gamemd

// 0x5CAE60
namespace gamemd {
void E4Recv_5CAE60::sub_5CAE60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5CAE60(void **this)
{
  *this = &MultiplayerSiegeDefenderTeam::`vftable'; /*0x5cae60*/
  MultiplayerTeam::Destructor(this); /*0x5cae66*/
}
}
} // namespace gamemd

// 0x5CAF00
namespace gamemd {
void E4Recv_5CAF00::sub_5CAF00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5CAF00(void **this)
{
  *this = &MultiplayerSiegeAttackerTeam::`vftable'; /*0x5caf00*/
  MultiplayerTeam::Destructor(this); /*0x5caf06*/
}
}
} // namespace gamemd

// 0x5CAF70
namespace gamemd {
DWORD E4Recv_5CAF70::sub_5CAF70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __thiscall sub_5CAF70(LONG *this)
{
  DWORD result; // eax
  LARGE_INTEGER Frequency; // [esp+4h] [ebp-8h] BYREF

  if ( QueryPerformanceFrequency(&Frequency) ) /*0x5caf7b*/
  {
    result = Frequency.LowPart; /*0x5caf89*/
    *this = Frequency.HighPart; /*0x5caf8d*/
  }
  else
  {
    *this = 0; /*0x5caf94*/
    return 0; /*0x5caf9a*/
  }
  return result; /*0x5caf8f*/
}
}
} // namespace gamemd

// 0x5CB240
namespace gamemd {
void sub_5CB240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB240()
{
  MEMORY[0xABFB08] = 0.0174532925199433 * 90.0; /*0x5cb24c*/
}
}
} // namespace gamemd

// 0x5CB2A0
namespace gamemd {
void sub_5CB2A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5CB2A0()
{
  MEMORY[0xABFB38] = Math::ArcTan((double)MEMORY[0xABFB80] * 0.00390625); /*0x5cb2b7*/
}
}
} // namespace gamemd

// 0x5CB300
namespace gamemd {
long long sub_5CB300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5CB300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFB80]) + 0.5); /*0x5cb31b*/
  MEMORY[0xABFB74] = result; /*0x5cb320*/
  return result; /*0x5cb326*/
}
}
} // namespace gamemd

// 0x5CB330
namespace gamemd {
int sub_5CB330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CB330()
{
  MEMORY[0xABFB20] = 0; /*0x5cb332*/
  MEMORY[0xABFB22] = 0; /*0x5cb338*/
  return 0; /*0x5cb33e*/
}
}
} // namespace gamemd

// 0x5CB340
namespace gamemd {
int sub_5CB340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CB340()
{
  MEMORY[0xABFB40] = 0; /*0x5cb342*/
  MEMORY[0xABFB44] = 0; /*0x5cb347*/
  MEMORY[0xABFB48] = 0; /*0x5cb34c*/
  return 0; /*0x5cb351*/
}
}
} // namespace gamemd

// 0x5CB360
namespace gamemd {
int sub_5CB360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5CB360()
{
  MEMORY[0xABFB70] = 0; /*0x5cb365*/
  MEMORY[0xABFB68] = 128; /*0x5cb36f*/
  MEMORY[0xABFB6C] = 128; /*0x5cb374*/
  return 128; /*0x5cb379*/
}
}
} // namespace gamemd

// 0x5CB3E0
namespace gamemd {
void E4Recv_5CB3E0::sub_5CB3E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5CB3E0(void *this)
{
  *(_DWORD *)this = &UnholyAlliance::`vftable'; /*0x5cb3e0*/
  MultiplayerGameMode::Dtor(this); /*0x5cb3e6*/
}
}
} // namespace gamemd

// 0x5CD570
namespace gamemd {
int sub_5CD570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5CD570(
        int this,
        const wchar_t **a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  size_t v11; // ebx
  int v12; // ebp
  int v13; // eax
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp+20h]
  int v17; // [esp+40h] [ebp+24h]

  *(_DWORD *)(this + 8) = a4; /*0x5cd581*/
  *(_DWORD *)(this + 4) = a3; /*0x5cd587*/
  *(_BYTE *)(this + 12) = 1; /*0x5cd58a*/
  v11 = 0; /*0x5cd597*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5cd59c*/
  *(_DWORD *)(this + 24) = 0; /*0x5cd59f*/
  *(_DWORD *)this = &MSAnim::`vftable'; /*0x5cd5a5*/
  WideString::AssignFromPtr((wchar_t **)(this + 28), a2); /*0x5cd5ab*/
  *(_DWORD *)(this + 44) = a8; /*0x5cd5c0*/
  *(_BYTE *)(this + 48) = a9; /*0x5cd5c7*/
  *(_DWORD *)(this + 32) = 0; /*0x5cd5ce*/
  *(_DWORD *)(this + 36) = a7; /*0x5cd5d1*/
  *(_DWORD *)(this + 40) = 0; /*0x5cd5d4*/
  *(_DWORD *)(this + 52) = a5; /*0x5cd5d7*/
  *(_BYTE *)(this + 72) = 0; /*0x5cd5da*/
  *(_BYTE *)(this + 73) = a10; /*0x5cd5dd*/
  *(_DWORD *)(this + 76) = 0; /*0x5cd5e0*/
  *(_DWORD *)this = &MSPrintAnim::`vftable'; /*0x5cd5e3*/
  *(_DWORD *)(this + 16) = Timer::GetTicks(); /*0x5cd5f6*/
  *(_DWORD *)(this + 20) = v15; /*0x5cd5f9*/
  *(_DWORD *)(this + 24) = a7; /*0x5cd5ff*/
  sub_5CD690(this, a6); /*0x5cd602*/
  if ( a10 ) /*0x5cd60b*/
  {
    v17 = 0; /*0x5cd611*/
    v16 = *(_DWORD *)(*(_DWORD *)(this + 52) + 4); /*0x5cd618*/
    if ( WideString::GetChar((const wchar_t **)(this + 28), 0) ) /*0x5cd61e*/
    {
      do /*0x5cd658*/
      {
        if ( WideString::GetChar((const wchar_t **)(this + 28), v11) == 10 ) /*0x5cd634*/
          break; /*0x5cd634*/
        v12 = **(_DWORD **)(this + 52); /*0x5cd63c*/
        LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v11++); /*0x5cd63e*/
        v17 += (*(int (__thiscall **)(_DWORD, int))(v12 + 4))(*(_DWORD *)(this + 52), v13); /*0x5cd651*/
      }
      while ( WideString::GetChar((const wchar_t **)(this + 28), v11) ); /*0x5cd658*/
    }
    *(_DWORD *)(this + 76) = (*(_DWORD *)(this + 64) - v17 - v16) / 2; /*0x5cd676*/
  }
  return this; /*0x5cd67b*/
}
}
} // namespace gamemd

// 0x5CD690
namespace gamemd {
unsigned int * E4Recv_5CD690::sub_5CD690(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5CD690(int this, int *a2)
{
  int *v4; // edi
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *result; // eax
  _DWORD *v20; // edi
  wchar_t *v21; // eax
  int v22; // edx
  _DWORD *v23; // [esp-8h] [ebp-3Ch]
  int v24; // [esp+Ch] [ebp-28h]
  int v25; // [esp+10h] [ebp-24h]
  _DWORD v26[6]; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+2Ch] [ebp-8h]
  int v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]

  if ( a2[2] <= 0 || a2[3] <= 0 ) /*0x5cd6ac*/
  {
    v20 = (_DWORD *)(this + 56); /*0x5cd81e*/
    v21 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd825*/
    result = sub_5D30C0(*(size_t **)(this + 52), v21, (_DWORD *)(this + 56)); /*0x5cd82e*/
    v22 = *(_DWORD *)(this + 8); /*0x5cd836*/
    *v20 = *(_DWORD *)(this + 4); /*0x5cd839*/
    *(_DWORD *)(this + 60) = v22; /*0x5cd83b*/
  }
  else
  {
    v4 = (int *)(this + 56); /*0x5cd6b2*/
    v23 = (_DWORD *)(this + 56); /*0x5cd6b6*/
    v5 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd6ba*/
    sub_5D30C0(*(size_t **)(this + 52), v5, v23); /*0x5cd6c3*/
    v6 = *(_DWORD *)(this + 52); /*0x5cd6dc*/
    *(_DWORD *)(this + 4) += (a2[2] - *(_DWORD *)(this + 64)) / 2; /*0x5cd6df*/
    v7 = a2[3] % *(_DWORD *)(v6 + 8) / 2 + *(_DWORD *)(this + 8); /*0x5cd706*/
    v8 = *(_DWORD *)(this + 60); /*0x5cd70d*/
    *v4 += *(_DWORD *)(this + 4); /*0x5cd710*/
    *(_DWORD *)(this + 8) = v7; /*0x5cd71a*/
    *(_DWORD *)(this + 60) = v7 + v8; /*0x5cd71d*/
    Rect::Set(v26, 0, 0, 0, 0); /*0x5cd720*/
    v9 = *v4; /*0x5cd727*/
    v10 = *(_DWORD *)(this + 60); /*0x5cd729*/
    v11 = *(_DWORD *)(this + 64); /*0x5cd72c*/
    v27 = v11; /*0x5cd72f*/
    v28 = *(_DWORD *)(this + 68); /*0x5cd736*/
    v29 = a2[2]; /*0x5cd73f*/
    if ( a2[2] <= 0 ) /*0x5cd743*/
      goto LABEL_20; /*0x5cd743*/
    v25 = a2[3]; /*0x5cd74e*/
    if ( v25 <= 0 || *(int *)(this + 64) <= 0 || *(int *)(this + 68) <= 0 ) /*0x5cd768*/
      goto LABEL_20; /*0x5cd768*/
    v12 = *a2; /*0x5cd76a*/
    if ( v9 < *a2 ) /*0x5cd76e*/
    {
      v11 += v9 - v12; /*0x5cd772*/
      v9 = *a2; /*0x5cd774*/
      v27 = v11; /*0x5cd776*/
    }
    if ( v11 < 1 ) /*0x5cd77d*/
      goto LABEL_20; /*0x5cd77d*/
    v13 = a2[1]; /*0x5cd77f*/
    v24 = v13; /*0x5cd784*/
    if ( v10 < v13 ) /*0x5cd788*/
    {
      v14 = v10 - v13 + v28; /*0x5cd790*/
      v10 = v24; /*0x5cd792*/
      v28 = v14; /*0x5cd796*/
    }
    if ( v28 < 1 ) /*0x5cd79f*/
      goto LABEL_20; /*0x5cd79f*/
    if ( v9 + v11 > v12 + v29 ) /*0x5cd7ab*/
      v27 = v29 + v12 - v9; /*0x5cd7b5*/
    if ( v27 < 1 ) /*0x5cd7be*/
      goto LABEL_20; /*0x5cd7be*/
    v15 = v28; /*0x5cd7c8*/
    if ( v28 + v10 > v24 + v25 ) /*0x5cd7d3*/
      v15 = v24 + v25 - v10; /*0x5cd7d7*/
    if ( v15 < 1 ) /*0x5cd7dc*/
    {
LABEL_20:
      v17 = v26[0]; /*0x5cd7e6*/
      v10 = v26[1]; /*0x5cd7ea*/
      v16 = v26[2]; /*0x5cd7ee*/
      v15 = v26[3]; /*0x5cd7f2*/
    }
    else
    {
      v16 = v27; /*0x5cd7de*/
      v17 = v9; /*0x5cd7e2*/
    }
    *v4 = v17; /*0x5cd7f6*/
    v18 = *(_DWORD *)(this + 52); /*0x5cd7f8*/
    *(_DWORD *)(this + 60) = v10; /*0x5cd7fb*/
    *(_DWORD *)(this + 64) = v16; /*0x5cd7fe*/
    *(_DWORD *)(this + 68) = v15; /*0x5cd801*/
    result = (_DWORD *)(*(_DWORD *)(v18 + 4) / 2); /*0x5cd80f*/
    *(_DWORD *)(this + 4) += result; /*0x5cd813*/
  }
  return result; /*0x5cd80e*/
}
}
} // namespace gamemd

// 0x5CD850
namespace gamemd {
ObjectClass * WrapWideStringText(const wchar_t ** ecx0, int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall WrapWideStringText(const wchar_t **ecx0, int *a2, int a3)
{
  ObjectClass *v3; // esi
  int *v4; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v20; // eax
  void **v21; // ecx
  wchar_t **v23; // eax
  wchar_t **v24; // eax
  wchar_t **v25; // eax
  ObjectClass *v26; // [esp-8h] [ebp-4Ch]
  ObjectClass *v27; // [esp-8h] [ebp-4Ch]
  size_t v28; // [esp-8h] [ebp-4Ch]
  ObjectClass *v30; // [esp+10h] [ebp-34h] BYREF
  wchar_t *v31; // [esp+14h] [ebp-30h] BYREF
  void *v32; // [esp+18h] [ebp-2Ch] BYREF
  wchar_t *v33; // [esp+1Ch] [ebp-28h] BYREF
  int v34; // [esp+20h] [ebp-24h]
  ObjectClass *v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  ObjectClass *v37; // [esp+2Ch] [ebp-18h] BYREF
  wchar_t *v38; // [esp+30h] [ebp-14h] BYREF
  wchar_t *v39; // [esp+34h] [ebp-10h] BYREF
  wchar_t *v40; // [esp+38h] [ebp-Ch] BYREF
  wchar_t *a1; // [esp+3Ch] [ebp-8h] BYREF
  wchar_t *v42; // [esp+40h] [ebp-4h] BYREF
  int v43; // [esp+48h] [ebp+4h]

  v3 = 0; /*0x5cd855*/
  v4 = a2; /*0x5cd858*/
  v34 = 0; /*0x5cd861*/
  if ( String_Helper(ecx0, 0) ) /*0x5cd865*/
    return 0; /*0x5cd865*/
  if ( !v4 ) /*0x5cd874*/
    return 0; /*0x5cd874*/
  v6 = v4[1]; /*0x5cd87a*/
  if ( a3 <= v6 ) /*0x5cd883*/
    return 0; /*0x5cdb7c*/
  v43 = a3 - v6; /*0x5cd891*/
  if ( WideString::GetChar(ecx0, 0) ) /*0x5cd895*/
  {
    do /*0x5cdac6*/
    {
      v7 = 0; /*0x5cd8a7*/
      v35 = v3; /*0x5cd8ab*/
      if ( v43 <= 0 ) /*0x5cd8af*/
        goto LABEL_12; /*0x5cd8af*/
      while ( WideString::GetChar(ecx0, v3) /*0x5cd8d8*/
           && WideString::GetChar(ecx0, v3) != 10
           && WideString::GetChar(ecx0, v3) != 64 )
      {
        v8 = *v4; /*0x5cd8da*/
        v26 = v3; /*0x5cd8df*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd8e2*/
        LOWORD(v9) = WideString::GetChar(ecx0, v26); /*0x5cd8e3*/
        v36 = v8; /*0x5cd8e8*/
        v4 = a2; /*0x5cd8ec*/
        v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v9); /*0x5cd8fa*/
        if ( v7 >= v43 ) /*0x5cd900*/
          goto LABEL_12; /*0x5cd900*/
      }
      if ( v7 >= v43 ) /*0x5cd908*/
      {
LABEL_12:
        while ( WideString::GetChar(ecx0, v3) ) /*0x5cd90d*/
        {
          if ( WideString::GetChar(ecx0, v3) == 32 || WideString::GetChar(ecx0, v3) == 10 ) /*0x5cd931*/
            break; /*0x5cd931*/
          if ( v3 == v35 ) /*0x5cd937*/
            goto LABEL_18; /*0x5cd937*/
          v10 = *v4; /*0x5cd939*/
          v3 = (ObjectClass *)((char *)v3 - 1); /*0x5cd93c*/
          LOWORD(v11) = WideString::GetChar(ecx0, v3); /*0x5cd940*/
          v12 = v10; /*0x5cd945*/
          v4 = a2; /*0x5cd947*/
          v7 -= (*(int (__thiscall **)(int *, int))(v12 + 4))(a2, v11); /*0x5cd953*/
        }
      }
      if ( v3 == v35 ) /*0x5cd964*/
      {
LABEL_18:
        if ( v7 >= v43 ) /*0x5cd96e*/
          goto LABEL_25; /*0x5cd96e*/
        while ( WideString::GetChar(ecx0, v3) /*0x5cd9c7*/
             && WideString::GetChar(ecx0, v3) != 32
             && WideString::GetChar(ecx0, v3) != 10
             && WideString::GetChar(ecx0, v3) != 64
             && WideString::GetChar(ecx0, v3) != 45 )
        {
          v13 = *v4; /*0x5cd9cd*/
          v27 = v3; /*0x5cd9d2*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd9d5*/
          LOWORD(v14) = WideString::GetChar(ecx0, v27); /*0x5cd9d6*/
          v36 = v13; /*0x5cd9db*/
          v4 = a2; /*0x5cd9df*/
          v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v14); /*0x5cd9ed*/
          if ( v7 >= v43 ) /*0x5cd9f3*/
            goto LABEL_25; /*0x5cd9f3*/
        }
        if ( v7 >= v43 ) /*0x5cdae6*/
        {
LABEL_25:
          v15 = *v4; /*0x5cd9f9*/
          LOWORD(v16) = WideString::GetChar(ecx0, v3); /*0x5cd9ff*/
          v17 = v15; /*0x5cda04*/
          v4 = a2; /*0x5cda06*/
          v7 -= (*(int (__thiscall **)(int *, int))(v17 + 4))(a2, v16); /*0x5cda14*/
          WideString::AssignFromPtr(&v33, ecx0); /*0x5cda17*/
          String::TruncateTo((void **)&v33, (size_t)v3); /*0x5cda21*/
          WideString::AssignFromPtr((wchar_t **)&v32, ecx0); /*0x5cda2b*/
          WideString::Erase((const wchar_t **)&v32, 0, (int)v3); /*0x5cda37*/
          v18 = WideString::Assign(&v42, (CampaignScore *)asc_830174); /*0x5cda4f*/
          v19 = WideString::ConcatAlloc((const wchar_t **)&v33, &a1, (ObjectClass *)v18); /*0x5cda5e*/
          v20 = WideString::ConcatAlloc((const wchar_t **)v19, &v40, (ObjectClass *)&v32); /*0x5cda65*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v20); /*0x5cda6d*/
          DeleteAndZero::Alt((void **)&v40); /*0x5cda76*/
          DeleteAndZero::Alt((void **)&a1); /*0x5cda7f*/
          DeleteAndZero::Alt((void **)&v42); /*0x5cda88*/
          DeleteAndZero::Alt(&v32); /*0x5cda91*/
          v21 = (void **)&v33; /*0x5cda96*/
        }
        else
        {
          WideString::AssignFromPtr(&v31, ecx0); /*0x5cdaf1*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdaf6*/
          String::TruncateTo((void **)&v31, (size_t)v3); /*0x5cdafc*/
          WideString::AssignFromPtr((wchar_t **)&v30, ecx0); /*0x5cdb06*/
          WideString::Erase((const wchar_t **)&v30, 0, (int)v3); /*0x5cdb12*/
          v23 = WideString::Assign(&v39, (CampaignScore *)asc_830174); /*0x5cdb2a*/
          v24 = WideString::ConcatAlloc((const wchar_t **)&v31, &v38, (ObjectClass *)v23); /*0x5cdb39*/
          v25 = WideString::ConcatAlloc((const wchar_t **)v24, (wchar_t **)&v37, (ObjectClass *)&v30); /*0x5cdb40*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v25); /*0x5cdb48*/
          DeleteAndZero::Alt((void **)&v37); /*0x5cdb51*/
          DeleteAndZero::Alt((void **)&v38); /*0x5cdb5a*/
          DeleteAndZero::Alt((void **)&v39); /*0x5cdb63*/
          DeleteAndZero::Alt((void **)&v30); /*0x5cdb6c*/
          v21 = (void **)&v31; /*0x5cdb71*/
        }
        DeleteAndZero::Alt(v21); /*0x5cda9a*/
      }
      if ( v7 > v34 ) /*0x5cdaa3*/
        v34 = v7; /*0x5cdaa5*/
      if ( WideString::GetChar(ecx0, v3) ) /*0x5cdaac*/
      {
        v28 = (size_t)v3; /*0x5cdaba*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdabd*/
        String_Helper_7B7660(ecx0, 0xAu, v28); /*0x5cdabe*/
      }
    }
    while ( WideString::GetChar(ecx0, v3) ); /*0x5cdac6*/
  }
  return (ObjectClass *)v34; /*0x5cdad9*/
}
}
} // namespace gamemd

// 0x5CDB90
namespace gamemd {
int sub_5CDB90(const wchar_t ** a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5CDB90(const wchar_t **a1, int a2, int a3)
{
  int v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ebp

  if ( String_Helper(a1, 0) || !a2 || a3 < *(_DWORD *)(a2 + 8) ) /*0x5cdbbb*/
    return 0; /*0x5cdc42*/
  v5 = 0; /*0x5cdbc2*/
  v6 = 0; /*0x5cdbc8*/
  v7 = 0; /*0x5cdbca*/
  while ( WideString::GetChar(a1, v6) ) /*0x5cdbcc*/
  {
    for ( ; WideString::GetChar(a1, v6); v6 = (ObjectClass *)((char *)v6 + 1) ) /*0x5cdbd9*/
    {
      if ( WideString::GetChar(a1, v6) == 10 ) /*0x5cdbef*/
        break; /*0x5cdbef*/
    }
    if ( WideString::GetChar(a1, v6) != 10 ) /*0x5cdc0b*/
    {
      v5 += *(_DWORD *)(a2 + 8); /*0x5cdc15*/
      if ( v5 >= a3 ) /*0x5cdc1a*/
      {
        v5 = 0; /*0x5cdc1d*/
        ++v7; /*0x5cdc23*/
        String_Helper_7B7660(a1, 0xCu, (size_t)v6); /*0x5cdc24*/
      }
      v6 = (ObjectClass *)((char *)v6 + 1); /*0x5cdc29*/
    }
  }
  return v7; /*0x5cdc3b*/
}
}
} // namespace gamemd

// 0x5CE0C0
namespace gamemd {
char E4Recv_5CE0C0::sub_5CE0C0(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5CE0C0(int this, int a2, _DWORD *a3)
{
  signed int v4; // edi
  signed int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // ebx
  size_t v10; // ebp
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  size_t v18; // [esp+Ch] [ebp-20h]
  size_t v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+30h] [ebp+4h]

  v4 = *(_DWORD *)(this + 24); /*0x5ce0cb*/
  if ( this->M16 != -1 ) /*0x5ce0d1*/
  {
    v5 = Timer::GetTicks() - this->M16; /*0x5ce0db*/
    if ( v5 >= v4 ) /*0x5ce0e0*/
      goto LABEL_5; /*0x5ce0e0*/
    v4 -= v5; /*0x5ce0e2*/
  }
  if ( v4 ) /*0x5ce0e8*/
  {
LABEL_24:
    *a3 = 0; /*0x5ce28a*/
    a3[1] = 0; /*0x5ce290*/
    a3[2] = 0; /*0x5ce293*/
    a3[3] = 0; /*0x5ce296*/
    return 0; /*0x5ce296*/
  }
LABEL_5:
  if ( (unsigned char)this->M12 != 1 ) /*0x5ce0f6*/
    goto LABEL_24; /*0x5ce0f6*/
  v6 = *(_DWORD *)(this + 44); /*0x5ce0fc*/
  this->M16 = Timer::GetTicks(); /*0x5ce108*/
  *(_DWORD *)(this + 20) = v20; /*0x5ce10f*/
  *(_DWORD *)(this + 24) = v6; /*0x5ce112*/
  if ( *(_DWORD *)(this + 32) >= (unsigned int)WideString::Length((const wchar_t **)(this + 28)) ) /*0x5ce122*/
  {
    v7 = Math::RoundToInt(MEMORY[0xA8EB98] * 64.0); /*0x5ce130*/
    sub_406670(aBleep1, v7); /*0x5ce13c*/
    return 1; /*0x5ce149*/
  }
  if ( (unsigned char)this->M48 == 1 && *(int *)(this + 92) > 0 && *(int *)(this + 96) > 0 ) /*0x5ce15f*/
    (*(void (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5ce173*/
      a2,
      this + 84,
      MEMORY[0x887310],
      this + 84,
      0,
      1);
  v9 = *(_DWORD *)(this + 4); /*0x5ce179*/
  if ( (unsigned char)this->M73 ) /*0x5ce176*/
    v9 += *(_DWORD *)(this + 76); /*0x5ce180*/
  v18 = *(_DWORD *)(this + 32); /*0x5ce18b*/
  v10 = v18 + 1; /*0x5ce18c*/
  LOWORD(v11) = WideString::GetChar((const wchar_t **)(this + 28), v18); /*0x5ce18d*/
  v12 = v11; /*0x5ce192*/
  if ( (_WORD)v11 != 10 ) /*0x5ce198*/
  {
    do /*0x5ce1d5*/
    {
      if ( !(_WORD)v12 ) /*0x5ce19d*/
        break; /*0x5ce19d*/
      (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 52) + 16))( /*0x5ce1b5*/
        *(_DWORD *)(this + 52),
        a2,
        v12,
        v9,
        this->M80,
        *(_DWORD *)(this + 36),
        0);
      v9 += (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 4))(*(_DWORD *)(this + 52), v12); /*0x5ce1c1*/
      v19 = v10++; /*0x5ce1c5*/
      LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v19); /*0x5ce1ca*/
      v12 = v13; /*0x5ce1cf*/
    }
    while ( (_WORD)v13 != 10 ); /*0x5ce1d5*/
  }
  v14 = this->M64; /*0x5ce1e0*/
  v15 = *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce1e3*/
  v21 = this->M80; /*0x5ce1e6*/
  *a3 = *(_DWORD *)(this + 56); /*0x5ce1ee*/
  a3[1] = v21; /*0x5ce1f4*/
  a3[2] = v14; /*0x5ce1f7*/
  a3[3] = v15; /*0x5ce1fa*/
  if ( *(_DWORD *)(this + 36) == 2 ) /*0x5ce203*/
  {
    *(_DWORD *)(this + 84) = 0; /*0x5ce20b*/
    *(_DWORD *)(this + 88) = 0; /*0x5ce20e*/
    *(_DWORD *)(this + 92) = 0; /*0x5ce211*/
    this->M96 = 0; /*0x5ce214*/
    *(_DWORD *)(this + 32) = v10; /*0x5ce217*/
    if ( (_WORD)v12 == 10 ) /*0x5ce21a*/
    {
      v16 = Math::RoundToInt(MEMORY[0xA8EB98] * 64.0); /*0x5ce228*/
      sub_406670(aBleep1, v16); /*0x5ce234*/
      this->M80 += *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce244*/
    }
  }
  else
  {
    *(_DWORD *)(this + 84) = *a3; /*0x5ce24e*/
    *(_DWORD *)(this + 88) = a3[1]; /*0x5ce254*/
    *(_DWORD *)(this + 92) = a3[2]; /*0x5ce25a*/
    this->M96 = a3[3]; /*0x5ce260*/
  }
  if ( (unsigned char)this->M48 == 1 ) /*0x5ce26c*/
  {
    v17 = *(_DWORD *)(this + 36) + 1; /*0x5ce271*/
    *(_DWORD *)(this + 36) = v17; /*0x5ce274*/
    if ( v17 > 2 ) /*0x5ce27a*/
    {
      *(_DWORD *)(this + 36) = 0; /*0x5ce27c*/
      return 0; /*0x5ce287*/
    }
  }
  return 0; /*0x5ce141*/
}
}
} // namespace gamemd

// 0x5CE330
namespace gamemd {
int E4Recv_5CE330::sub_5CE330(const wchar_t ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5CE330(_DWORD **this, const wchar_t **a2)
{
  int v3; // ebp
  size_t v4; // esi
  int v5; // ebp
  int v6; // eax
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x5ce33b*/
  v4 = 0; /*0x5ce340*/
  for ( i = 0; WideString::GetChar(a2, v4); i = v3 ) /*0x5ce346*/
  {
    if ( WideString::GetChar(a2, v4) == 10 ) /*0x5ce35c*/
      break; /*0x5ce35c*/
    v5 = **(this + 13); /*0x5ce364*/
    LOWORD(v6) = WideString::GetChar(a2, v4); /*0x5ce366*/
    v3 = (*(int (__thiscall **)(_DWORD, int))(v5 + 4))(*(this + 13), v6) + i; /*0x5ce378*/
    ++v4; /*0x5ce37a*/
  }
  return v3; /*0x5ce38d*/
}
}
} // namespace gamemd

// 0x5CE3A0
namespace gamemd {
int E4Recv_5CE3A0::sub_5CE3A0(int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5CE3A0(int this, int a2, int *a3)
{
  _DWORD *v4; // ecx
  int result; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // ebx
  size_t v9; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // [esp+18h] [ebp-28h]
  int v15; // [esp+18h] [ebp-28h]
  size_t i; // [esp+1Ch] [ebp-24h]
  _DWORD v17[4]; // [esp+30h] [ebp-10h] BYREF
  int v18; // [esp+48h] [ebp+8h]

  if ( !a3 /*0x5ce3e1*/
    || (v4 = ClipRectIntersection(v17, a3, (int *)(this + 56), 0, 0), result = v4[2], v6 = v4[3], result > 0) && v6 > 0 )
  {
    result = this->M32; /*0x5ce3e7*/
    v7 = *(_DWORD *)(this + 8); /*0x5ce3ea*/
    v8 = *(_DWORD *)(this + 4); /*0x5ce3ed*/
    v9 = 0; /*0x5ce3f0*/
    v18 = v7; /*0x5ce3f4*/
    for ( i = result; v9 < i; ++v9 ) /*0x5ce3fc*/
    {
      if ( WideString::GetChar((const wchar_t **)(this + 28), v9) == 10 ) /*0x5ce40f*/
      {
        v8 = *(_DWORD *)(this + 4); /*0x5ce414*/
        v7 += *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce41e*/
        v14 = *(_DWORD *)(*(_DWORD *)(this + 52) + 8); /*0x5ce420*/
        v18 = v7; /*0x5ce426*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x5ce42a*/
        if ( v7 + v14 >= result ) /*0x5ce438*/
          return result; /*0x5ce438*/
      }
      else
      {
        v15 = **(_DWORD **)(this + 52); /*0x5ce44b*/
        LOWORD(v10) = WideString::GetChar((const wchar_t **)(this + 28), v9); /*0x5ce44f*/
        (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int))(v15 + 16))( /*0x5ce461*/
          *(_DWORD *)(this + 52),
          a2,
          v10,
          v8,
          v7,
          2,
          1);
        v11 = **(_DWORD **)(this + 52); /*0x5ce46b*/
        LOWORD(v12) = WideString::GetChar((const wchar_t **)(this + 28), v9); /*0x5ce46d*/
        v13 = (*(int (__thiscall **)(_DWORD, int))(v11 + 4))(*(_DWORD *)(this + 52), v12); /*0x5ce476*/
        v7 = v18; /*0x5ce479*/
        v8 += v13; /*0x5ce47d*/
      }
      result = i; /*0x5ce47f*/
    }
  }
  return result; /*0x5ce48c*/
}
}
} // namespace gamemd

// 0x5CF840
namespace gamemd {
const char ** E4Recv_5CF840::sub_5CF840(MapSelect * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
const char **__thiscall sub_5CF840(_DWORD *this, MapSelect *aP1)
{
  int v3; // esi
  const char **v4; // ebp
  ObjectClass *v5; // edi
  void *v7; // [esp+10h] [ebp-4h] BYREF

  if ( !Audio::IsSoundEnabled() ) /*0x5cf847*/
    return 0; /*0x5cf847*/
  v3 = 0; /*0x5cf853*/
  if ( (int)*(this + 21) <= 0 ) /*0x5cf857*/
    return 0; /*0x5cf8b5*/
  v4 = (const char **)aP1; /*0x5cf859*/
  while ( 1 ) /*0x5cf864*/
  {
    v5 = *(ObjectClass **)(*(this + 18) + 4 * v3); /*0x5cf864*/
    String::AssignFromPtr((char **)&v7, (const char **)v5); /*0x5cf868*/
    String::ToLower((const char **)&v7); /*0x5cf871*/
    String::AssignFromPtr((char **)&aP1, v4); /*0x5cf87b*/
    String::ToLower((const char **)&aP1); /*0x5cf884*/
    if ( String::Compare((const char **)&v7, (const char **)&aP1) ) /*0x5cf892*/
      break; /*0x5cf892*/
    DeleteAndZero((void **)&aP1); /*0x5cf89f*/
    DeleteAndZero(&v7); /*0x5cf8a8*/
    if ( ++v3 >= *(this + 21) ) /*0x5cf8b3*/
      return 0; /*0x5cf8b3*/
  }
  DeleteAndZero((void **)&aP1); /*0x5cf8bf*/
  DeleteAndZero(&v7); /*0x5cf8c8*/
  return (const char **)v5; /*0x5cf8b5*/
}
}
} // namespace gamemd

// 0x5C0330
namespace gamemd {
void nullsub_176()
{
  ;
}
} // namespace gamemd

// 0x5CCA10
namespace gamemd {
void nullsub_189(int a1)
{
  ;
}
} // namespace gamemd

// 0x5CD310
namespace gamemd {
void nullsub_190()
{
  ;
}
} // namespace gamemd
