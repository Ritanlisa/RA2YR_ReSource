// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/E4Recv_690530_e4.hpp"
#include "e4/classes/E4Recv_6905F0_e4.hpp"
#include "e4/classes/E4Recv_6966D0_e4.hpp"
#include "e4/classes/E4Recv_696950_e4.hpp"
#include "e4/classes/E4Recv_69ADE0_e4.hpp"
#include "e4/classes/E4Recv_69B690_e4.hpp"
#include "e4/classes/E4Recv_69E060_e4.hpp"
#include "e4/classes/E4Recv_69E9F0_e4.hpp"
#include "e4/classes/E4Recv_69F0C0_e4.hpp"
#include "e4/classes/E4Recv_69F1B0_e4.hpp"
#include "e4/classes/E4Recv_69F210_e4.hpp"
#include "e4/classes/E4Recv_69F5E0_e4.hpp"

// 0x690400
namespace gamemd {
int E4Recv_690400::sub_690400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_690400(int *this)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v6[4]; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  v2 = *this; /*0x690429*/
  v3 = *(this + 1); /*0x69042f*/
  v5[0] = v2; /*0x690432*/
  v6[0] = v2 + Rect.left; /*0x69043d*/
  v5[1] = v3; /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = v3 + Rect.top; /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( MEMORY[0x887640] ) /*0x69046f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], MEMORY[0x88730C], 0); /*0x69047c*/
  result = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x69049c*/
             MEMORY[0x887308],
             v6,
             MEMORY[0x88730C],
             v5,
             0,
             1);
  if ( MEMORY[0x887640] ) /*0x6904a7*/
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))( /*0x6904b4*/
             MEMORY[0x887640],
             MEMORY[0x88730C],
             0);
  return result; /*0x6904b7*/
}
}
} // namespace gamemd

// 0x690530
namespace gamemd {
void E4Recv_690530::sub_690530(void * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_690530(_DWORD *this, void *a2, int a3)
{
  int i; // esi

  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      for ( i = 0; i < *(this + 17); ++i ) /*0x69054d*/
      {
        if ( !_strcmpi(a2, **(const void ***)(*(this + 14) + 4 * i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x6905F0
namespace gamemd {
char * E4Recv_6905F0::sub_6905F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_6905F0(_DWORD *this)
{
  void *v2; // eax
  char *result; // eax

  v2 = (void *)*(this + 3); /*0x6905f6*/
  *this = &ScoreFontClass::`vftable'; /*0x6905f9*/
  if ( v2 && (unsigned char)this->M16 == 1 ) /*0x690607*/
  {
    __3_YAXPAX_Z(v2); /*0x69060a*/
    *(this + 3) = 0; /*0x690612*/
    *((_BYTE *)this + 16) = 0; /*0x690615*/
  }
  result = (char *)--MEMORY[0xB0558C]; /*0x69061d*/
  if ( !MEMORY[0xB0558C] ) /*0x690623*/
  {
    result = &MEMORY[0xB05594]; /*0x690625*/
    do /*0x690637*/
    {
      *((_DWORD *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x690637*/
  }
  return result; /*0x690639*/
}
}
} // namespace gamemd

// 0x6911B0
namespace gamemd {
void sub_6911B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6911B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6911bc*/
  MEMORY[0xB055C8] = Math::Sqrt(v0 + v0); /*0x6911ce*/
}
}
} // namespace gamemd

// 0x6911E0
namespace gamemd {
void sub_6911E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6911E0()
{
  MEMORY[0xB05618] = MEMORY[0xB055C8] / 60.0; /*0x6911ec*/
}
}
} // namespace gamemd

// 0x691200
namespace gamemd {
void sub_691200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_691200()
{
  MEMORY[0xB05600] = 1.0 / MEMORY[0xB05618]; /*0x69120c*/
}
}
} // namespace gamemd

// 0x691220
namespace gamemd {
void sub_691220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_691220()
{
  MEMORY[0xB055F8] = 0.0174532925199433 * 45.0; /*0x69122c*/
}
}
} // namespace gamemd

// 0x691240
namespace gamemd {
void sub_691240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_691240()
{
  MEMORY[0xB055D0] = 0.0174532925199433 * 60.0; /*0x69124c*/
}
}
} // namespace gamemd

// 0x691260
namespace gamemd {
void sub_691260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_691260()
{
  MEMORY[0xB055A8] = 0.0174532925199433 * 90.0; /*0x69126c*/
}
}
} // namespace gamemd

// 0x691280
namespace gamemd {
long long sub_691280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_691280()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB055A8] - MEMORY[0xB055D0]); /*0x691292*/
  result = Math::RoundToInt(v0 * MEMORY[0xB055C8] * 0.5); /*0x6912a6*/
  MEMORY[0xB05620] = result; /*0x6912ab*/
  return result; /*0x6912b0*/
}
}
} // namespace gamemd

// 0x6912C0
namespace gamemd {
void sub_6912C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6912C0()
{
  MEMORY[0xB055D8] = Math::ArcTan((double)MEMORY[0xB05620] * 0.00390625); /*0x6912d7*/
}
}
} // namespace gamemd

// 0x6912F0
namespace gamemd {
void sub_6912F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6912F0()
{
  MEMORY[0xB055F0] = Math::ArcTan((double)(2 * MEMORY[0xB05620]) / MEMORY[0xB055C8]); /*0x691312*/
}
}
} // namespace gamemd

// 0x691320
namespace gamemd {
long long sub_691320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_691320()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05620]) + 0.5); /*0x69133b*/
  MEMORY[0xB05614] = result; /*0x691340*/
  return result; /*0x691346*/
}
}
} // namespace gamemd

// 0x691350
namespace gamemd {
int sub_691350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_691350()
{
  MEMORY[0xB055C0] = 0; /*0x691352*/
  MEMORY[0xB055C2] = 0; /*0x691358*/
  return 0; /*0x69135e*/
}
}
} // namespace gamemd

// 0x691360
namespace gamemd {
int sub_691360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_691360()
{
  MEMORY[0xB055E0] = 0; /*0x691362*/
  MEMORY[0xB055E4] = 0; /*0x691367*/
  MEMORY[0xB055E8] = 0; /*0x69136c*/
  return 0; /*0x691371*/
}
}
} // namespace gamemd

// 0x691380
namespace gamemd {
int sub_691380()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_691380()
{
  MEMORY[0xB05610] = 0; /*0x691385*/
  MEMORY[0xB05608] = 128; /*0x69138f*/
  MEMORY[0xB0560C] = 128; /*0x691394*/
  return 128; /*0x691399*/
}
}
} // namespace gamemd

// 0x6913A0
namespace gamemd {
int sub_6913A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6913A0()
{
  MEMORY[0xB055B0] = 0; /*0x6913a2*/
  MEMORY[0xB055B4] = 0; /*0x6913a7*/
  MEMORY[0xB055B8] = 0; /*0x6913ac*/
  MEMORY[0xB055BC] = 0; /*0x6913b1*/
  return 0; /*0x6913b6*/
}
}
} // namespace gamemd

// 0x692030
namespace gamemd {
int sub_692030()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_692030()
{
  MEMORY[0xB05648] = 0; /*0x692032*/
  MEMORY[0xB0564C] = 0; /*0x692037*/
  MEMORY[0xB05650] = 0; /*0x69203c*/
  MEMORY[0xB05654] = 0; /*0x692041*/
  return 0; /*0x692046*/
}
}
} // namespace gamemd

// 0x692050
namespace gamemd {
void sub_692050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_692050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69205c*/
  MEMORY[0xB05660] = Math::Sqrt(v0 + v0); /*0x69206e*/
}
}
} // namespace gamemd

// 0x692080
namespace gamemd {
void sub_692080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_692080()
{
  MEMORY[0xB056B8] = MEMORY[0xB05660] / 60.0; /*0x69208c*/
}
}
} // namespace gamemd

// 0x6920A0
namespace gamemd {
void sub_6920A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6920A0()
{
  MEMORY[0xB056A0] = 1.0 / MEMORY[0xB056B8]; /*0x6920ac*/
}
}
} // namespace gamemd

// 0x6920C0
namespace gamemd {
void sub_6920C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6920C0()
{
  MEMORY[0xB05698] = 0.0174532925199433 * 45.0; /*0x6920cc*/
}
}
} // namespace gamemd

// 0x6920E0
namespace gamemd {
void sub_6920E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6920E0()
{
  MEMORY[0xB05668] = 0.0174532925199433 * 60.0; /*0x6920ec*/
}
}
} // namespace gamemd

// 0x692100
namespace gamemd {
void sub_692100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_692100()
{
  MEMORY[0xB05630] = 0.0174532925199433 * 90.0; /*0x69210c*/
}
}
} // namespace gamemd

// 0x692120
namespace gamemd {
long long sub_692120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_692120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB05630] - MEMORY[0xB05668]); /*0x692132*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05660] * 0.5); /*0x692146*/
  MEMORY[0xB056C0] = result; /*0x69214b*/
  return result; /*0x692150*/
}
}
} // namespace gamemd

// 0x692160
namespace gamemd {
void sub_692160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_692160()
{
  MEMORY[0xB05670] = Math::ArcTan((double)MEMORY[0xB056C0] * 0.00390625); /*0x692177*/
}
}
} // namespace gamemd

// 0x692190
namespace gamemd {
void sub_692190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_692190()
{
  MEMORY[0xB05688] = Math::ArcTan((double)(2 * MEMORY[0xB056C0]) / MEMORY[0xB05660]); /*0x6921b2*/
}
}
} // namespace gamemd

// 0x6921C0
namespace gamemd {
long long sub_6921C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6921C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB056C0]) + 0.5); /*0x6921db*/
  MEMORY[0xB056B4] = result; /*0x6921e0*/
  return result; /*0x6921e6*/
}
}
} // namespace gamemd

// 0x6921F0
namespace gamemd {
int sub_6921F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6921F0()
{
  MEMORY[0xB05658] = 0; /*0x6921f2*/
  return 0; /*0x6921fe*/
}
}
} // namespace gamemd

// 0x692200
namespace gamemd {
int sub_692200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_692200()
{
  MEMORY[0xB05678] = 0; /*0x692202*/
  MEMORY[0xB0567C] = 0; /*0x692207*/
  MEMORY[0xB05680] = 0; /*0x69220c*/
  return 0; /*0x692211*/
}
}
} // namespace gamemd

// 0x692220
namespace gamemd {
int sub_692220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_692220()
{
  MEMORY[0xB056B0] = 0; /*0x692225*/
  MEMORY[0xB056A8] = 128; /*0x69222f*/
  MEMORY[0xB056AC] = 128; /*0x692234*/
  return 128; /*0x692239*/
}
}
} // namespace gamemd

// 0x692240
namespace gamemd {
int sub_692240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_692240()
{
  MEMORY[0xB05638] = Timer::GetTicks(); /*0x69224f*/
  MEMORY[0xB05640] = 0; /*0x692254*/
  return atexit(sub_692270); /*0x692264*/
}
}
} // namespace gamemd

// 0x692270
namespace gamemd {
void sub_692270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_692270()
{
  if ( (MEMORY[0xB05629] & 1) == 0 ) /*0x69227a*/
    MEMORY[0xB05629] |= 1u; /*0x69227e*/
}
}
} // namespace gamemd

// 0x693940
namespace gamemd {
int sub_693940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_693940()
{
  MEMORY[0xB056D0] = 0; /*0x693942*/
  MEMORY[0xB056D4] = 0; /*0x693947*/
  MEMORY[0xB056D8] = 0; /*0x69394c*/
  MEMORY[0xB056DC] = 0; /*0x693951*/
  return 0; /*0x693956*/
}
}
} // namespace gamemd

// 0x693960
namespace gamemd {
void sub_693960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_693960()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69396c*/
  MEMORY[0xB056E8] = Math::Sqrt(v0 + v0); /*0x69397e*/
}
}
} // namespace gamemd

// 0x693990
namespace gamemd {
void sub_693990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_693990()
{
  MEMORY[0xB05738] = MEMORY[0xB056E8] / 60.0; /*0x69399c*/
}
}
} // namespace gamemd

// 0x6939B0
namespace gamemd {
void sub_6939B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6939B0()
{
  MEMORY[0xB05720] = 1.0 / MEMORY[0xB05738]; /*0x6939bc*/
}
}
} // namespace gamemd

// 0x6939D0
namespace gamemd {
void sub_6939D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6939D0()
{
  MEMORY[0xB05718] = 0.0174532925199433 * 45.0; /*0x6939dc*/
}
}
} // namespace gamemd

// 0x6939F0
namespace gamemd {
void sub_6939F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6939F0()
{
  MEMORY[0xB056F0] = 0.0174532925199433 * 60.0; /*0x6939fc*/
}
}
} // namespace gamemd

// 0x693A10
namespace gamemd {
void sub_693A10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_693A10()
{
  MEMORY[0xB056C8] = 0.0174532925199433 * 90.0; /*0x693a1c*/
}
}
} // namespace gamemd

// 0x693A30
namespace gamemd {
long long sub_693A30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_693A30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB056C8] - MEMORY[0xB056F0]); /*0x693a42*/
  result = Math::RoundToInt(v0 * MEMORY[0xB056E8] * 0.5); /*0x693a56*/
  MEMORY[0xB05740] = result; /*0x693a5b*/
  return result; /*0x693a60*/
}
}
} // namespace gamemd

// 0x693A70
namespace gamemd {
void sub_693A70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_693A70()
{
  MEMORY[0xB056F8] = Math::ArcTan((double)MEMORY[0xB05740] * 0.00390625); /*0x693a87*/
}
}
} // namespace gamemd

// 0x693AA0
namespace gamemd {
void sub_693AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_693AA0()
{
  MEMORY[0xB05710] = Math::ArcTan((double)(2 * MEMORY[0xB05740]) / MEMORY[0xB056E8]); /*0x693ac2*/
}
}
} // namespace gamemd

// 0x693AD0
namespace gamemd {
long long sub_693AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_693AD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05740]) + 0.5); /*0x693aeb*/
  MEMORY[0xB05734] = result; /*0x693af0*/
  return result; /*0x693af6*/
}
}
} // namespace gamemd

// 0x693B00
namespace gamemd {
int sub_693B00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_693B00()
{
  MEMORY[0xB056E0] = 0; /*0x693b02*/
  MEMORY[0xB056E2] = 0; /*0x693b08*/
  return 0; /*0x693b0e*/
}
}
} // namespace gamemd

// 0x693B10
namespace gamemd {
int sub_693B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_693B10()
{
  MEMORY[0xB05700] = 0; /*0x693b12*/
  MEMORY[0xB05704] = 0; /*0x693b17*/
  MEMORY[0xB05708] = 0; /*0x693b1c*/
  return 0; /*0x693b21*/
}
}
} // namespace gamemd

// 0x693B30
namespace gamemd {
int sub_693B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_693B30()
{
  MEMORY[0xB05730] = 0; /*0x693b35*/
  MEMORY[0xB05728] = 128; /*0x693b3f*/
  MEMORY[0xB0572C] = 128; /*0x693b44*/
  return 128; /*0x693b49*/
}
}
} // namespace gamemd

// 0x693B70
namespace gamemd {
char Network_RequestFile(char * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Network_RequestFile(char *a1, int a2, int a3)
{
  char *Flagged; // eax
  char *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  bool v13; // al
  char *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  char *v22; // eax
  char *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  char v30; // bl
  const char *v31; // eax
  DWORD Ticks; // [esp+10h] [ebp-5C0h]
  DWORD v33; // [esp+10h] [ebp-5C0h]
  DWORD v34; // [esp+10h] [ebp-5C0h]
  int v36; // [esp+20h] [ebp-5B0h]
  int v37; // [esp+24h] [ebp-5ACh] BYREF
  _BYTE v38[6]; // [esp+2Ah] [ebp-5A6h] BYREF
  _BYTE v39[12]; // [esp+38h] [ebp-598h] BYREF
  _BYTE v40[4]; // [esp+44h] [ebp-58Ch] BYREF
  _DWORD v41[62]; // [esp+48h] [ebp-588h] BYREF
  __int16 v42; // [esp+140h] [ebp-490h]
  int v43[113]; // [esp+144h] [ebp-48Ch] BYREF
  __int16 v44; // [esp+308h] [ebp-2C8h]
  char v45; // [esp+30Ah] [ebp-2C6h]
  _BYTE v46[163]; // [esp+30Ch] [ebp-2C4h] BYREF
  char v47[89]; // [esp+3AFh] [ebp-221h] BYREF
  int v48; // [esp+408h] [ebp-1C8h] BYREF
  _BYTE v49[171]; // [esp+40Ch] [ebp-1C4h] BYREF
  int v50; // [esp+4B7h] [ebp-119h]
  char v51[277]; // [esp+4BBh] [ebp-115h] BYREF

  v36 = 0; /*0x693b86*/
  Waypoint::InitInvalid(v39); /*0x693b8a*/
  Debug::Log(MEMORY[0x83E8F8]); /*0x693b94*/
  Timer::GetTicks(); /*0x693ba0*/
  Debug::Log(MEMORY[0x83E8DC]); /*0x693bb2*/
  Ticks = Timer::GetTicks(); /*0x693bc3*/
  if ( a2 == 1 || a2 == 2 ) /*0x693be4*/
  {
    memset(v41, 0, sizeof(v41)); /*0x693cd4*/
    v42 = 0; /*0x693ce5*/
    v41[0] = 110; /*0x693ce7*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x693d00*/
    {
      v8 = 3600; /*0x693d06*/
      if ( Ticks != -1 ) /*0x693d0d*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x693d18*/
        if ( v9 >= 3600 ) /*0x693d1e*/
          break; /*0x693d1e*/
        v8 = 3600 - v9; /*0x693d20*/
      }
      if ( !v8 ) /*0x693d24*/
        break; /*0x693d24*/
      Event::Dispatch(); /*0x693d26*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693bfa*/
    v44 = 0; /*0x693c02*/
    v45 = 0; /*0x693c04*/
    v43[0] = 16; /*0x693c05*/
    CopyWideToChar(&v43[1], *(char **)MEMORY[0xA8DA78], -1); /*0x693c19*/
    if ( MEMORY[0xA8B238] == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x693c80*/
    {
      v6 = 3600; /*0x693c8a*/
      if ( Ticks != -1 ) /*0x693c91*/
      {
        v7 = Timer::GetTicks() - Ticks; /*0x693c9c*/
        if ( v7 >= 3600 ) /*0x693ca2*/
          break; /*0x693ca2*/
        v6 = 3600 - v7; /*0x693ca8*/
      }
      if ( !v6 ) /*0x693cac*/
        break; /*0x693cac*/
      Event::Dispatch(); /*0x693cb2*/
    }
  }
  v10 = 3600; /*0x693d39*/
  if ( Ticks != -1 ) /*0x693d44*/
  {
    v11 = Timer::GetTicks() - Ticks; /*0x693d4f*/
    if ( v11 >= 3600 ) /*0x693d55*/
    {
LABEL_24:
      Debug::Log(MEMORY[0x83E8AC]); /*0x693d5d*/
      return 0; /*0x693d76*/
    }
    v10 = 3600 - v11; /*0x693d57*/
  }
  if ( !v10 ) /*0x693d5b*/
    goto LABEL_24; /*0x693d5b*/
  v33 = Timer::GetTicks(); /*0x693d8e*/
  if ( a2 == 1 || a2 == 2 ) /*0x693da8*/
  {
    while ( 1 ) /*0x693e97*/
    {
      Event::Dispatch(); /*0x693e97*/
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v46, (int)v40) > 0 && *(_DWORD *)v46 == 111 ) /*0x693ebe*/
        break; /*0x693ebe*/
      v18 = 3600; /*0x693ec4*/
      if ( v33 != -1 ) /*0x693ecb*/
      {
        v19 = Timer::GetTicks() - v33; /*0x693ed6*/
        if ( v19 >= 3600 ) /*0x693edc*/
          goto LABEL_50; /*0x693edc*/
        v18 = 3600 - v19; /*0x693ede*/
      }
      if ( !v18 ) /*0x693ee2*/
        goto LABEL_50; /*0x693ee2*/
    }
    v17 = *(_DWORD *)&v46[158]; /*0x693ef8*/
    strcpy(a1, v47); /*0x693f0a*/
  }
  else
  {
    while ( 1 ) /*0x693db3*/
    {
      Event::Dispatch(); /*0x693db3*/
      v37 = 455; /*0x693dd4*/
      if ( Network::Send((int)MEMORY[0xA8E9C0], (int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&MEMORY[0xA8BB1C]); /*0x693dee*/
        if ( MEMORY[0xA8B238] == 4 ) /*0x693df9*/
        {
          v14 = GameSettings::FindFlagged(); /*0x693dfb*/
          v13 = v14 && !_strcmpi(v14 + 36, v49); /*0x693e20*/
        }
        if ( v48 == 17 && v13 ) /*0x693e2d*/
          break; /*0x693e2d*/
      }
      v15 = 3600; /*0x693e33*/
      if ( v33 != -1 ) /*0x693e3a*/
      {
        v16 = Timer::GetTicks() - v33; /*0x693e45*/
        if ( v16 >= 3600 ) /*0x693e4b*/
          goto LABEL_50; /*0x693e4b*/
        v15 = 3600 - v16; /*0x693e51*/
      }
      if ( !v15 ) /*0x693e55*/
        goto LABEL_50; /*0x693e55*/
    }
    v17 = v50; /*0x693e72*/
    strcpy(a1, v51); /*0x693e84*/
  }
  v36 = v17; /*0x693f18*/
  Debug::Log(MEMORY[0x83E88C]); /*0x693f1c*/
  Debug::Log(MEMORY[0x83E878], a1); /*0x693f2b*/
LABEL_50:
  v20 = 3600; /*0x693f33*/
  if ( v33 != -1 ) /*0x693f3e*/
  {
    v21 = Timer::GetTicks() - v33; /*0x693f49*/
    if ( v21 >= 3600 ) /*0x693f4f*/
    {
LABEL_54:
      Debug::Log(MEMORY[0x83E83C]); /*0x693f57*/
      return 0; /*0x693f70*/
    }
    v20 = 3600 - v21; /*0x693f51*/
  }
  if ( !v20 ) /*0x693f55*/
    goto LABEL_54; /*0x693f55*/
  Debug::Log(MEMORY[0x83E81C]); /*0x693f78*/
  v34 = Timer::GetTicks(); /*0x693f95*/
  if ( a2 == 1 || a2 == 2 ) /*0x693faa*/
  {
    memset(v41, 0, sizeof(v41)); /*0x6940b8*/
    v42 = 0; /*0x6940ba*/
    v41[0] = 113; /*0x6940cb*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x6940e4*/
    {
      v26 = 3600; /*0x6940ea*/
      if ( v34 != -1 ) /*0x6940f1*/
      {
        v27 = Timer::GetTicks() - v34; /*0x6940fc*/
        if ( v27 >= 3600 ) /*0x694102*/
          break; /*0x694102*/
        v26 = 3600 - v27; /*0x694104*/
      }
      if ( !v26 ) /*0x694108*/
        break; /*0x694108*/
      Event::Dispatch(); /*0x69410a*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693fbe*/
    v44 = 0; /*0x693fc0*/
    v45 = 0; /*0x693fc2*/
    v43[0] = 21; /*0x693fc8*/
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x693ff7*/
    if ( MEMORY[0xA8B238] == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x694064*/
    {
      v24 = 3600; /*0x69406e*/
      if ( v34 != -1 ) /*0x694075*/
      {
        v25 = Timer::GetTicks() - v34; /*0x694080*/
        if ( v25 >= 3600 ) /*0x694086*/
          break; /*0x694086*/
        v24 = 3600 - v25; /*0x69408c*/
      }
      if ( !v24 ) /*0x694090*/
        break; /*0x694090*/
      Event::Dispatch(); /*0x694096*/
    }
  }
  v28 = 3600; /*0x69411d*/
  if ( v34 != -1 ) /*0x694128*/
  {
    v29 = Timer::GetTicks() - v34; /*0x694133*/
    if ( v29 >= 3600 ) /*0x694139*/
    {
LABEL_78:
      Debug::Log(MEMORY[0x83E7F4]); /*0x694141*/
      return 0; /*0x69415a*/
    }
    v28 = 3600 - v29; /*0x69413b*/
  }
  if ( !v28 ) /*0x69413f*/
    goto LABEL_78; /*0x69413f*/
  v30 = ReceiveNetworkFile(a1, v36, a2, a3); /*0x694173*/
  v31 = g_Str_true; /*0x694175*/
  if ( !v30 ) /*0x69417c*/
    v31 = g_Str_false; /*0x69417e*/
  Debug::Log(MEMORY[0x83E7D0], v31); /*0x694189*/
  return v30; /*0x693d6c*/
}
}
} // namespace gamemd

// 0x6941A0
namespace gamemd {
char ReceiveNetworkFile(RawFileClass * a1, DWORD a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ReceiveNetworkFile(RawFileClass *a1, DWORD a2, int a3, char a4)
{
  int v6; // ebp
  size_t v7; // esi
  wchar_t *StringCSF; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  bool v13; // al
  char *Flagged; // eax
  _BYTE *v15; // eax
  RawFileClass *v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int CampaignScore_field_0x0C; // esi
  signed int v20; // eax
  char v21; // bl
  char v23; // [esp+21h] [ebp-77h]
  char v24[2]; // [esp+22h] [ebp-76h] BYREF
  RawFileClass *v25; // [esp+24h] [ebp-74h]
  RawFileClass *v26; // [esp+28h] [ebp-70h]
  LPCVOID lpBuffer; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  int v29; // [esp+34h] [ebp-64h] BYREF
  int v30; // [esp+38h] [ebp-60h]
  DWORD nNumberOfBytesToWrite; // [esp+3Ch] [ebp-5Ch]
  CampaignScore v32; // [esp+40h] [ebp-58h] BYREF
  int v33; // [esp+64h] [ebp-34h]
  _BYTE v34[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v35[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x6941bb*/
  v32.CampaignScore_field_0x0C = 0; /*0x6941bf*/
  Waypoint::InitInvalid(v34); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = __2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct(v35, a1); /*0x6941f0*/
  if ( FileClass::Open((int *)v35, 0) ) /*0x6941fb*/
    FileClass::Delete(v35); /*0x694208*/
  FileClass::Open2(v35, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = (RawFileClass *)(a2 / 0xC0); /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = (RawFileClass *)++v7; /*0x694238*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = (LPCVOID)__2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620.__pad_579C[31860], 0, 0); /*0x6942a2*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[35880], 0, &stru_830620.__pad_579C[35852], 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding( /*0x6942cf*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      -1,
      (ProgressScreenClass *)0xFFFFFFFF,
      (ProgressScreenClass *)StringCSF,
      0,
      1);
    Screen::Capture(1, 0, a2, v6); /*0x6942d8*/
    LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283); /*0x6942ea*/
    Network::UpdateLatencyDisplay((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 0, 0); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x69432b*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x694333*/
  v32.CampaignScore_field_0x0C = v10; /*0x69433f*/
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection(&MEMORY[0xA8D63C].__pad_1258[300]); /*0x69434a*/
    TacticalClass::SetCameraPosition(&MEMORY[0xA8D63C].__pad_1258[300], 120, -1, 1200); /*0x69435d*/
  }
  if ( a3 == 3 || (v11 = 10800, a3 != 4) ) /*0x69436f*/
    v11 = 3600; /*0x694371*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x694383*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x694387*/
  v32.CampaignScore_field_0x0C = v11; /*0x69438b*/
  v12 = 0; /*0x69438f*/
  while ( v9 == 1 || v9 == 2 ) /*0x69439d*/
  {
    MessageLoop(); /*0x69452f*/
    Event::Dispatch(); /*0x694534*/
    if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8D63C].__pad_1258[476], (CampaignScore *)v6, &v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(_DWORD *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = *(_WORD *)(v6 + 24); /*0x694561*/
    if ( *((_BYTE *)Block + v18) ) /*0x694567*/
      goto LABEL_43; /*0x69456a*/
    *((_BYTE *)Block + v18) = 1; /*0x694570*/
    v26 = (RawFileClass *)((char *)v26 + 1); /*0x69457c*/
    v12 += 100; /*0x694580*/
    v32.CampaignScore_field_0x1C = Timer::GetTicks(); /*0x69458c*/
    v32.CampaignScore_field_0x04 = v32.CampaignScore_field_0x1C; /*0x694595*/
    v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x69459b*/
    v32.CampaignScore_field_0x0C = 1800; /*0x69459f*/
    v33 = 1800; /*0x6945ad*/
    Debug::Log(); /*0x6945b1*/
    qmemcpy( /*0x6945dd*/
      (char *)lpBuffer + 192 * *(unsigned __int16 *)(v6 + 24),
      (const void *)(v6 + 28),
      *(unsigned __int16 *)(v6 + 26));
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / (int)v25; /*0x694604*/
      Network::UpdateLatencyDisplay( /*0x694611*/
        (ProgressScreenClass *)&g_MatrixTransformState + 283,
        0,
        (ProgressScreenClass *)COERCE_UNSIGNED_INT64((double)(v12 / (int)v25)),
        (ProgressScreenClass *)(ProgressScreenClass *)HIDWORD(COERCE_UNSIGNED_INT64((double)(v12 / (int)v25))));
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay( /*0x69469d*/
          (ProgressScreenClass *)&g_MatrixTransformState + 283,
          0,
          0,
          (ProgressScreenClass *)0x40590000);
      v23 = 1; /*0x6946a2*/
LABEL_53:
      v21 = v23; /*0x6946a7*/
      goto LABEL_54; /*0x6946a7*/
    }
LABEL_42:
    v9 = a3; /*0x694622*/
LABEL_43:
    CampaignScore_field_0x0C = v32.CampaignScore_field_0x0C; /*0x694629*/
    if ( v32.CampaignScore_field_0x04 != -1 ) /*0x694634*/
    {
      v20 = Timer::GetTicks() - v32.CampaignScore_field_0x04; /*0x69463f*/
      if ( v20 >= CampaignScore_field_0x0C ) /*0x694645*/
        goto LABEL_53; /*0x694645*/
      CampaignScore_field_0x0C -= v20; /*0x694647*/
    }
    if ( !CampaignScore_field_0x0C ) /*0x69464b*/
      goto LABEL_53; /*0x69464b*/
  }
  MessageLoop(); /*0x6943a3*/
  Event::Dispatch(); /*0x6943a8*/
  v29 = 487; /*0x6943c2*/
  if ( !Network::Send((int)&MEMORY[0xA8D63C].__pad_1258[300], v6, (int)&v29, (TechnoTypeClass *)v34, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare((int)v34, (int)&MEMORY[0xA8BB1C]); /*0x6943e0*/
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, (char *)(v6 + 4)); /*0x69440f*/
  }
  if ( *(_DWORD *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + *(unsigned __int16 *)(v6 + 24); /*0x69442d*/
  if ( *v15 ) /*0x69442f*/
    goto LABEL_43; /*0x694432*/
  v16 = v26; /*0x694438*/
  *v15 = 1; /*0x69443c*/
  v12 += 100; /*0x694442*/
  v26 = (RawFileClass *)&v16->__pad_0[1]; /*0x694448*/
  if ( v9 == 3 || (v17 = 10800, v9 != 4) ) /*0x694454*/
    v17 = 3600; /*0x694456*/
  v32.CampaignScore_field_0x10 = Timer::GetTicks(); /*0x694471*/
  v32.CampaignScore_field_0x18 = v17 / 2; /*0x69447a*/
  v32.CampaignScore_field_0x04 = v32.CampaignScore_field_0x10; /*0x69447e*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x14; /*0x694482*/
  v32.CampaignScore_field_0x0C = v17 / 2; /*0x694486*/
  if ( v32.CampaignScore_field_0x10 != -1 ) /*0x69448a*/
    Timer::GetTicks(); /*0x694490*/
  Debug::Log(); /*0x6944b5*/
  qmemcpy( /*0x6944e1*/
    (char *)lpBuffer + 192 * *(unsigned __int16 *)(v6 + 24),
    (const void *)(v6 + 28),
    *(unsigned __int16 *)(v6 + 26));
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / (int)v25; /*0x694508*/
    Network::UpdateLatencyDisplay( /*0x694515*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      0,
      (ProgressScreenClass *)COERCE_UNSIGNED_INT64((double)(v12 / (int)v25)),
      (ProgressScreenClass *)(ProgressScreenClass *)HIDWORD(COERCE_UNSIGNED_INT64((double)(v12 / (int)v25))));
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay( /*0x694675*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      0,
      0,
      (ProgressScreenClass *)0x40590000);
LABEL_54:
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection(&MEMORY[0xA8D63C].__pad_1258[300]); /*0x6946bb*/
  FileClass::Write2((int *)v35, lpBuffer, (IUnknown *)nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((HANDLE *)v35); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && FileClass::Open((int *)v35, 0) ) /*0x694722*/
  {
    FileClass::Delete(v35); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z((void *)v6); /*0x694742*/
  RawFileClass::Dtor((int *)v35); /*0x69474e*/
  return v21; /*0x694755*/
}
}
} // namespace gamemd

// 0x694760
namespace gamemd {
char Network_SendFile(char * Source, int a2, char a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Network_SendFile(char *Source, int a2, char a3, char a4)
{
  int Size; // ebx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // ebp
  wchar_t *String; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  signed int v33; // eax
  char *v34; // edi
  int v35; // edx
  size_t v36; // eax
  int v37; // esi
  signed int v38; // eax
  int i; // edi
  int v40; // esi
  int j; // edi
  int v42; // esi
  size_t v43; // eax
  int v44; // eax
  signed int v45; // eax
  int v46; // esi
  signed int v47; // eax
  char v48; // bl
  const char *v49; // eax
  DWORD Ticks; // [esp+20h] [ebp-710h]
  DWORD v51; // [esp+20h] [ebp-710h]
  DWORD v52; // [esp+20h] [ebp-710h]
  int v53; // [esp+28h] [ebp-708h]
  char v54; // [esp+2Fh] [ebp-701h]
  int v55; // [esp+30h] [ebp-700h] BYREF
  int v56; // [esp+34h] [ebp-6FCh]
  int v57; // [esp+38h] [ebp-6F8h]
  int v58; // [esp+3Ch] [ebp-6F4h]
  char v59[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v60[4]; // [esp+50h] [ebp-6E0h] BYREF
  int v61[22]; // [esp+54h] [ebp-6DCh] BYREF
  _BYTE v62[12]; // [esp+ACh] [ebp-684h] BYREF
  int v63; // [esp+B8h] [ebp-678h]
  _BYTE v64[12]; // [esp+C0h] [ebp-670h] BYREF
  int v65; // [esp+CCh] [ebp-664h] BYREF
  char v66[20]; // [esp+D0h] [ebp-660h] BYREF
  __int16 v67; // [esp+E4h] [ebp-64Ch]
  unsigned __int16 Buffer; // [esp+E6h] [ebp-64Ah]
  _BYTE Buffer_2[192]; // [esp+E8h] [ebp-648h] BYREF
  _BYTE v70[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v71[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v72; // [esp+2A4h] [ebp-48Ch] BYREF
  char v73[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v74; // [esp+353h] [ebp-3DDh]
  char v75[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v76[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v77[114]; // [esp+568h] [ebp-1C8h] BYREF

  v58 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v54 = 0; /*0x69478b*/
  Debug::Log(MEMORY[0x83EB28], Source); /*0x694790*/
  CCFileClass::Construct(v61, Source); /*0x69479d*/
  if ( !CCFileClass::Open(v61, 0) ) /*0x6947a7*/
  {
    v61[0] = (int)&CCFileClass::`vftable'; /*0x6947b7*/
    v63 = 0; /*0x6947bf*/
    Vector::Clear((int)v62); /*0x6947c6*/
    v61[0] = (int)&off_7E1668; /*0x6947cf*/
    BufferIOFileClass::Dtor(v61); /*0x6947d7*/
    return 0; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(v61); /*0x6947f4*/
  v56 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(MEMORY[0x83EB08]); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v72 = 17; /*0x69484f*/
    strcpy(v75, Source); /*0x69485d*/
    v74 = Size; /*0x69486c*/
    strcpy(v73, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( MEMORY[0xA8DA84] > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v72, 455, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * v8)) ) /*0x6948e3*/
            goto LABEL_12; /*0x6948ea*/
          v9 = 3600; /*0x6948f0*/
          if ( Ticks == -1 ) /*0x6948f6*/
          {
LABEL_11:
            if ( !v9 ) /*0x69490d*/
              goto LABEL_12; /*0x69490d*/
          }
          else
          {
            v10 = Timer::GetTicks() - Ticks; /*0x694901*/
            if ( v10 < 3600 ) /*0x694907*/
            {
              v9 = 3600 - v10; /*0x694909*/
              goto LABEL_11; /*0x694909*/
            }
LABEL_12:
            if ( ++v8 >= MEMORY[0xA8DA84] ) /*0x694917*/
              goto LABEL_21; /*0x694917*/
          }
        }
      }
      goto LABEL_21; /*0x6948b7*/
    }
    v11 = 0; /*0x694923*/
    if ( MEMORY[0xA8BB18] <= 0 ) /*0x694927*/
    {
LABEL_21:
      while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x6949ba*/
      {
        v14 = 3600; /*0x6949c4*/
        if ( Ticks != -1 ) /*0x6949cb*/
        {
          v15 = Timer::GetTicks() - Ticks; /*0x6949d6*/
          if ( v15 >= 3600 ) /*0x6949dc*/
            goto LABEL_34; /*0x6949dc*/
          v14 = 3600 - v15; /*0x6949e2*/
        }
        if ( !v14 ) /*0x6949e6*/
          break; /*0x6949e6*/
        Event::Dispatch(); /*0x6949ec*/
      }
      goto LABEL_34; /*0x6949fd*/
    }
    while ( 1 ) /*0x694930*/
    {
      Event::Dispatch(); /*0x694930*/
      Debug::Log(MEMORY[0x83EAE0], *(_DWORD *)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + v11))); /*0x69494b*/
      if ( Network::SendToPlayer( /*0x694978*/
             (int)MEMORY[0xA8E9C0],
             (int)&v72,
             455,
             1,
             *(wchar_t **)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + v11))) )
      {
        goto LABEL_20; /*0x69497f*/
      }
      v12 = 3600; /*0x694985*/
      if ( Ticks == -1 ) /*0x69498b*/
      {
LABEL_19:
        if ( !v12 ) /*0x6949a2*/
          goto LABEL_20; /*0x6949a2*/
      }
      else
      {
        v13 = Timer::GetTicks() - Ticks; /*0x694996*/
        if ( v13 < 3600 ) /*0x69499c*/
        {
          v12 = 3600 - v13; /*0x69499e*/
          goto LABEL_19; /*0x69499e*/
        }
LABEL_20:
        if ( ++v11 >= MEMORY[0xA8BB18] ) /*0x6949ac*/
          goto LABEL_21; /*0x6949ac*/
      }
    }
  }
  *(_DWORD *)v70 = 111; /*0x694a1d*/
  strcpy(v71, Source); /*0x694a2b*/
  *(_DWORD *)&v70[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v70, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x694a60*/
  {
    v16 = 3600; /*0x694a66*/
    if ( Ticks != -1 ) /*0x694a6d*/
    {
      v17 = Timer::GetTicks() - Ticks; /*0x694a78*/
      if ( v17 >= 3600 ) /*0x694a7e*/
        break; /*0x694a7e*/
      v16 = 3600 - v17; /*0x694a80*/
    }
    if ( !v16 ) /*0x694a84*/
      break; /*0x694a84*/
    Event::Dispatch(); /*0x694a86*/
  }
LABEL_34:
  v18 = 3600; /*0x694a99*/
  if ( Ticks != -1 ) /*0x694aa4*/
  {
    v19 = Timer::GetTicks() - Ticks; /*0x694aaf*/
    if ( v19 >= 3600 ) /*0x694ab5*/
    {
LABEL_38:
      Debug::Log(MEMORY[0x83EAC4]); /*0x694abd*/
      v61[0] = (int)&CCFileClass::`vftable'; /*0x694ad1*/
      v63 = 0; /*0x694ad9*/
      Vector::Clear((int)v62); /*0x694ae4*/
      v61[0] = (int)&off_7E1668; /*0x694aed*/
      BufferIOFileClass::Dtor(v61); /*0x694af5*/
      return 0; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(v64); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = MEMORY[0xA8DA84] - 1; /*0x694b28*/
  else
    v21 = MEMORY[0xA8BB18]; /*0x694b2d*/
  v51 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v76, (int)v60) > 0 && v76[0] == 113 ) /*0x694bf5*/
        break; /*0x694bf5*/
      v24 = 3600; /*0x694bfb*/
      if ( v51 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v51; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(MEMORY[0x83EA9C]); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v55 = 455; /*0x694b84*/
      if ( Network::Send((int)MEMORY[0xA8E9C0], (int)v77, (int)&v55, (int)v64, (int)v59) && v77[0] == 21 ) /*0x694b9c*/
        ++v20; /*0x694b9e*/
      v22 = 3600; /*0x694ba3*/
      if ( v51 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v51; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v56 + 191) / 192; /*0x694c2e*/
  FileClass::Load(v61, 1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init(0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load(MEMORY[0x83DA30], 0, 0); /*0x694c86*/
    String = GetStringCSF(MEMORY[0x83E9E4], 0, MEMORY[0x83E9C8], 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding(-1, -1, String, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&MEMORY[0xAC4F58], v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v58; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection(MEMORY[0xA8E9C0]); /*0x694d27*/
    TacticalClass::SetCameraPosition(240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v52 = Timer::GetTicks(); /*0x694d63*/
  v53 = v30; /*0x694d6b*/
  v55 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v56; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v53; /*0x694d7f*/
      if ( v52 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v52; /*0x694d91*/
        if ( v33 >= v53 ) /*0x694d97*/
          goto LABEL_121; /*0x694d97*/
        v32 = v53 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_121; /*0x694da1*/
      if ( v58 != 1 && v58 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x6950e3*/
        {
          v54 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 100.0, NAN); /*0x69516c*/
LABEL_121:
          v48 = v54; /*0x695171*/
          goto LABEL_122; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue(&MEMORY[0xA8EA70]) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        v65 = 112; /*0x694fe6*/
        v67 = v27; /*0x694ff1*/
        Buffer = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          Buffer = 192; /*0x695003*/
        v31 -= Buffer; /*0x695021*/
        v56 = v31; /*0x695028*/
        v43 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x69502c*/
        if ( v43 == Buffer ) /*0x695040*/
        {
          v44 = v53; /*0x695046*/
          if ( v52 != -1 ) /*0x69504f*/
          {
            v45 = Timer::GetTicks() - v52; /*0x69505a*/
            if ( v45 >= v53 ) /*0x695060*/
              v44 = 0; /*0x695068*/
            else
              v44 = v53 - v45; /*0x695064*/
          }
          Debug::Log(MEMORY[0x83EA74], v27, v26, v44); /*0x695072*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)&v65, 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v55 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v57 = v55 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, (double)(v55 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) < 10 ) /*0x694ddc*/
      {
        v65 = 18; /*0x694de4*/
        v67 = v27; /*0x694def*/
        Buffer = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          Buffer = 192; /*0x694e01*/
        v34 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x694e17*/
        v35 = v56; /*0x694e31*/
        strcpy(v66, v34); /*0x694e38*/
        v56 = v35 - Buffer; /*0x694e5c*/
        v36 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x694e60*/
        if ( v36 == Buffer ) /*0x694e74*/
        {
          v37 = v53; /*0x694e7e*/
          if ( v52 != -1 ) /*0x694e85*/
          {
            v38 = Timer::GetTicks() - v52; /*0x694e90*/
            if ( v38 >= v53 ) /*0x694e96*/
              v37 = 0; /*0x694e9c*/
            else
              v37 = v53 - v38; /*0x694e98*/
          }
          Debug::Log(MEMORY[0x83EA74], v27, v26, v37); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v40 = Network::SendToPlayer( /*0x694eed*/
                        (int)MEMORY[0xA8E9C0],
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(MEMORY[0xA8DA78] + 4 * i));
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v40 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < MEMORY[0xA8BB18]; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v42 = Network::SendToPlayer( /*0x694f39*/
                        (int)MEMORY[0xA8E9C0],
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + j)));
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v42 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v55 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v57 = v55 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, (double)(v55 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ); /*0x694fb0*/
  v46 = v53; /*0x6950ee*/
  if ( v52 != -1 ) /*0x6950f5*/
  {
    v47 = Timer::GetTicks() - v52; /*0x695100*/
    if ( v47 >= v53 ) /*0x695106*/
      v46 = 0; /*0x69510c*/
    else
      v46 = v53 - v47; /*0x695108*/
  }
  Debug::Log(MEMORY[0x83EA40], v46); /*0x695114*/
  v48 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 100.0, NAN); /*0x69513f*/
LABEL_122:
  if ( MEMORY[0xA8B238] == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection(MEMORY[0xA8E9C0]); /*0x695183*/
  v49 = MEMORY[0x83EA38]; /*0x69518a*/
  if ( !v48 ) /*0x69518f*/
    v49 = MEMORY[0x83EA30]; /*0x695191*/
  Debug::Log(MEMORY[0x83EA14], v49); /*0x69519c*/
  v61[0] = (int)&CCFileClass::`vftable'; /*0x6951ab*/
  v63 = 0; /*0x6951b3*/
  Vector::Clear((int)v62); /*0x6951be*/
  v61[0] = (int)&off_7E1668; /*0x6951c7*/
  BufferIOFileClass::Dtor(v61); /*0x6951cf*/
  return v48; /*0x6947de*/
}
}
} // namespace gamemd

// 0x6951F0
namespace gamemd {
char FindAndValidateMap(ObjectClass * aP0, int edx0, const char * a2, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall FindAndValidateMap(ObjectClass *aP0, int edx0, const char *a2, int a4, char a5)
{
  ObjectClass *v5; // esi
  int v6; // ebp
  int *v7; // esi
  int v8; // eax
  int Field; // eax
  unsigned __int8 **v13[3]; // [esp+20h] [ebp-CCh] BYREF
  _DWORD v14[10]; // [esp+2Ch] [ebp-C0h] BYREF
  char v15; // [esp+54h] [ebp-98h]
  int v16; // [esp+58h] [ebp-94h]
  int v17; // [esp+5Ch] [ebp-90h]
  int v18[22]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v19[12]; // [esp+B8h] [ebp-34h] BYREF
  int v20; // [esp+C4h] [ebp-28h]
  char Destination[32]; // [esp+CCh] [ebp-20h] BYREF

  v5 = aP0; /*0x6951fa*/
  if ( !_strcmpi(aP0, aRandmapSed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88), v5) ) /*0x695249*/
  {
LABEL_17:
    if ( ++v6 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88)); /*0x695260*/
  if ( !CCFileClass::Open(v18, 0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(int **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD((void *)0x3C); /*0x69528b*/
    if ( !ScenarioClass::CheckExists(v7, v8) ) /*0x695293*/
    {
      Field = GameOption::GetField((_DWORD **)v7); /*0x69529e*/
      SetSoundWarning(Field); /*0x6952a5*/
    }
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6952bb*/
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x6952d5*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x695418*/
      v18[0] = (int)&CCFileClass::`vftable'; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      BufferIOFileClass::Dtor(v18); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6952dc*/
  }
  if ( !CCFileClass::Open(v18, 0) || CCFileClass::GetSize(v18) != edx0 ) /*0x695300*/
  {
LABEL_16:
    v18[0] = (int)&CCFileClass::`vftable'; /*0x6953c3*/
    v20 = 0; /*0x6953d2*/
    Vector::Clear((int)v19); /*0x6953d9*/
    v18[0] = (int)&off_7E1668; /*0x6953e2*/
    BufferIOFileClass::Dtor(v18); /*0x6953ea*/
    v5 = aP0; /*0x6953ef*/
    goto LABEL_17; /*0x6953ef*/
  }
  v13[1] = 0; /*0x69530a*/
  v13[2] = 0; /*0x69530e*/
  GenericList::Constructor(v14); /*0x695312*/
  v14[0] = &List<INIClass::INISection *>::`vftable'; /*0x695321*/
  memset(&v14[7], 0, 12); /*0x695329*/
  v15 = 0; /*0x695335*/
  v16 = 0; /*0x695339*/
  v17 = 0; /*0x69533d*/
  v13[0] = (unsigned __int8 **)&INIClass::`vftable'; /*0x695341*/
  FileStraw::Open(v13, (int)v18, 0); /*0x695349*/
  INIClass::GetString( /*0x69536b*/
    v13,
    &g_INI_Key_Digest,
    (unsigned __int8 *)&stru_830620.__pad_1258[32],
    (INIClass *)&stru_830620.__pad_1258[36],
    (INIClass *)Destination,
    32);
  if ( a2 && *a2 && strcmp(a2, Destination) ) /*0x69538f*/
  {
    HashTable::DestroyHashTableINIClass((void **)v13); /*0x6953be*/
    goto LABEL_16; /*0x6953be*/
  }
  strcpy(aP0->__pad_0, (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88)); /*0x695472*/
  HashTable::DestroyHashTableINIClass((void **)v13); /*0x69547f*/
  v18[0] = (int)&CCFileClass::`vftable'; /*0x69548b*/
  v20 = 0; /*0x695493*/
  Vector::Clear((int)v19); /*0x69549a*/
  v18[0] = (int)&off_7E1668; /*0x6954a3*/
  BufferIOFileClass::Dtor(v18); /*0x6954ab*/
  return 1; /*0x695401*/
}
}
} // namespace gamemd

// 0x6954C0
namespace gamemd {
int sub_6954C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6954C0()
{
  MEMORY[0xB05750] = 0; /*0x6954c2*/
  MEMORY[0xB05754] = 0; /*0x6954c7*/
  MEMORY[0xB05758] = 0; /*0x6954cc*/
  MEMORY[0xB0575C] = 0; /*0x6954d1*/
  return 0; /*0x6954d6*/
}
}
} // namespace gamemd

// 0x6954E0
namespace gamemd {
void sub_6954E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6954E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6954ec*/
  MEMORY[0xB05768] = Math::Sqrt(v0 + v0); /*0x6954fe*/
}
}
} // namespace gamemd

// 0x695510
namespace gamemd {
void sub_695510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695510()
{
  MEMORY[0xB057B8] = MEMORY[0xB05768] / 60.0; /*0x69551c*/
}
}
} // namespace gamemd

// 0x695530
namespace gamemd {
void sub_695530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695530()
{
  MEMORY[0xB057A0] = 1.0 / MEMORY[0xB057B8]; /*0x69553c*/
}
}
} // namespace gamemd

// 0x695550
namespace gamemd {
void sub_695550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695550()
{
  MEMORY[0xB05798] = 0.0174532925199433 * 45.0; /*0x69555c*/
}
}
} // namespace gamemd

// 0x695570
namespace gamemd {
void sub_695570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695570()
{
  MEMORY[0xB05770] = 0.0174532925199433 * 60.0; /*0x69557c*/
}
}
} // namespace gamemd

// 0x695590
namespace gamemd {
void sub_695590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695590()
{
  MEMORY[0xB05748] = 0.0174532925199433 * 90.0; /*0x69559c*/
}
}
} // namespace gamemd

// 0x6955B0
namespace gamemd {
long long sub_6955B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6955B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB05748] - MEMORY[0xB05770]); /*0x6955c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05768] * 0.5); /*0x6955d6*/
  MEMORY[0xB057C0] = result; /*0x6955db*/
  return result; /*0x6955e0*/
}
}
} // namespace gamemd

// 0x6955F0
namespace gamemd {
void sub_6955F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6955F0()
{
  MEMORY[0xB05778] = Math::ArcTan((double)MEMORY[0xB057C0] * 0.00390625); /*0x695607*/
}
}
} // namespace gamemd

// 0x695620
namespace gamemd {
void sub_695620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_695620()
{
  MEMORY[0xB05790] = Math::ArcTan((double)(2 * MEMORY[0xB057C0]) / MEMORY[0xB05768]); /*0x695642*/
}
}
} // namespace gamemd

// 0x695650
namespace gamemd {
long long sub_695650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_695650()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB057C0]) + 0.5); /*0x69566b*/
  MEMORY[0xB057B4] = result; /*0x695670*/
  return result; /*0x695676*/
}
}
} // namespace gamemd

// 0x695680
namespace gamemd {
int sub_695680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_695680()
{
  MEMORY[0xB05760] = 0; /*0x695682*/
  MEMORY[0xB05762] = 0; /*0x695688*/
  return 0; /*0x69568e*/
}
}
} // namespace gamemd

// 0x695690
namespace gamemd {
int sub_695690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_695690()
{
  MEMORY[0xB05780] = 0; /*0x695692*/
  MEMORY[0xB05784] = 0; /*0x695697*/
  MEMORY[0xB05788] = 0; /*0x69569c*/
  return 0; /*0x6956a1*/
}
}
} // namespace gamemd

// 0x6956B0
namespace gamemd {
int sub_6956B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6956B0()
{
  MEMORY[0xB057B0] = 0; /*0x6956b5*/
  MEMORY[0xB057A8] = 128; /*0x6956bf*/
  MEMORY[0xB057AC] = 128; /*0x6956c4*/
  return 128; /*0x6956c9*/
}
}
} // namespace gamemd

// 0x695760
namespace gamemd {
int LoadGame_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall LoadGame_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  void (__stdcall *v11)(HWND, UINT, WPARAM, LPARAM); // ebp
  const char *v12; // edi
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  char *v16; // edi
  LRESULT v17; // eax
  LPARAM v18; // ebx
  HWND v19; // eax
  HWND v20; // esi
  LRESULT wParama; // [esp+14h] [ebp+8h]
  LRESULT wParamb; // [esp+14h] [ebp+8h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x695777*/
  if ( result ) /*0x69577e*/
    return result; /*0x69577e*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x69578e*/
  if ( wParam != 273 ) /*0x695799*/
  {
    if ( wParam == 1175 ) /*0x6957a0*/
    {
      DlgItem = GetDlgItem(hWnd, 1629); /*0x6957b2*/
      if ( DlgItem ) /*0x6957bc*/
        SendMessageA(DlgItem, 0xC5u, 0x28u, 0); /*0x6957c8*/
      v7 = GetDlgItem(hWnd, 1631); /*0x6957d0*/
      if ( v7 ) /*0x6957d4*/
        SendMessageA(v7, 0xC5u, 0x3Eu, 0); /*0x6957e0*/
      v8 = GetDlgItem(hWnd, 1626); /*0x6957e8*/
      if ( v8 ) /*0x6957ec*/
      {
        SendMessageA(v8, 0xC5u, 0xFu, 0); /*0x6957fc*/
        return 0; /*0x695804*/
      }
    }
    return 0; /*0x6957ec*/
  }
  if ( (unsigned __int16)a3 > 0x65Bu ) /*0x695813*/
  {
    switch ( (__int16)a3 ) /*0x695a7f*/
    {
      case 1628: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b69*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x695b78*/
          SendDlgItemMessageA(hWnd, 1627, 0xF1u, 0, 0); /*0x695b8d*/
        }
        return 0; /*0x695b8d*/
      case 1629: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 ) /*0x695b2d*/
          return 0; /*0x695b2d*/
        goto LABEL_55; /*0x695b2d*/
      case 1630: /*0x695a7f*/
        if ( HIWORD(a3) != 2 ) /*0x695ab1*/
          return 0; /*0x695ab1*/
        if ( SendMessageA(a4, 0x18Bu, 0, 0) <= 0 ) /*0x695acb*/
          return 0; /*0x695acb*/
        v17 = SendMessageA(a4, 0x188u, 0, 0); /*0x695adb*/
        if ( v17 == -1 ) /*0x695ae0*/
          return 0; /*0x695ae0*/
        v18 = WindowLongA + 8; /*0x695ae6*/
        SendMessageA(a4, 0x4B7u, v17, v18); /*0x695af1*/
        v19 = GetDlgItem(hWnd, 1629); /*0x695af9*/
        v20 = v19; /*0x695aff*/
        if ( !v19 ) /*0x695b03*/
          return 0; /*0x695b03*/
        SendMessageA(v19, 0x4B4u, 0, v18); /*0x695b12*/
        SetFocus(v20); /*0x695b15*/
        return 0; /*0x695b21*/
      case 1631: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 512 ) /*0x695a95*/
          return 0; /*0x695a95*/
        DlgProcLoadGame_Load(WindowLongA); /*0x695a9d*/
        return 0; /*0x695aa8*/
      case 1632: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b54*/
          return 0; /*0x695b57*/
        DlgProcLoadGame_Load_696C40(WindowLongA); /*0x695b5b*/
        return 0; /*0x695b66*/
      case 1633: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b3f*/
          return 0; /*0x695b42*/
LABEL_55:
        DlgProcLoadGame_Load_696AE0(WindowLongA); /*0x695b2f*/
        result = 0; /*0x695b39*/
        break; /*0x695b3c*/
      default:
        return 0;
    }
    return result; /*0x695b3c*/
  }
  if ( (unsigned __int16)a3 == 1627 ) /*0x695819*/
  {
    if ( HIWORD(a3) ) /*0x695a3a*/
    {
      SendMessageA(a4, 0xF1u, 1u, 0); /*0x695a4d*/
      SendDlgItemMessageA(hWnd, 1628, 0xF1u, 0, 0); /*0x695a62*/
      return 0; /*0x695a6e*/
    }
    return 0; /*0x695a3d*/
  }
  if ( (unsigned __int16)a3 <= 0x3EBu ) /*0x695824*/
  {
    switch ( (unsigned __int16)a3 ) /*0x695826*/
    {
      case 0x3EBu: /*0x695826*/
        goto LABEL_65; /*0x695826*/
      case 1u: /*0x695826*/
        if ( !HIWORD(a3) && (unsigned __int8)ApplyModemConfigSettings(WindowLongA) == 1 ) /*0x695886*/
        {
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x69588c*/
          return 0; /*0x695899*/
        }
        return 0; /*0x695886*/
      case 2u: /*0x695826*/
        if ( !HIWORD(a3) ) /*0x69585b*/
        {
          *(_DWORD *)(WindowLongA + 4) = 2; /*0x695864*/
          return 0; /*0x695871*/
        }
        return 0; /*0x69585e*/
      case 0x3EAu: /*0x695826*/
LABEL_65:
        if ( HIWORD(a3) ) /*0x695839*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x69584c*/
          return 0; /*0x695858*/
        }
        break;
    }
    return 0; /*0x695b93*/
  }
  if ( (unsigned __int16)a3 == 1623 ) /*0x6958a1*/
  {
    if ( HIWORD(a3) != 1 ) /*0x695998*/
      return 0; /*0x695998*/
    v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x69599e*/
    wParamb = SendMessageA(a4, 0x147u, 0, 0); /*0x6959b9*/
    if ( SendMessageA(a4, 0x150u, wParamb, 0) == 4 ) /*0x6959c2*/
    {
      v12 = (const char *)(WindowLongA + 8); /*0x6959c8*/
      SendMessageA(a4, 0x4BDu, wParamb, WindowLongA + 8); /*0x6959d3*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1631); /*0x6959dd*/
      goto LABEL_38; /*0x6959dd*/
    }
LABEL_34:
    SetFocus(0); /*0x695981*/
    return 0; /*0x69598f*/
  }
  if ( (unsigned __int16)a3 != 1625 ) /*0x6958aa*/
  {
    if ( (unsigned __int16)a3 == 1626 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x6958c6*/
    {
      v9 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x6958d4*/
      v10 = v9; /*0x6958da*/
      if ( v9 ) /*0x6958de*/
      {
        ShowWindow(v9, 0); /*0x6958e7*/
        EnableWindow(v10, 0); /*0x6958f0*/
        SendMessageA(v10, 0x4B5u, 0x10u, WindowLongA + 8); /*0x695902*/
        *(_BYTE *)(WindowLongA + 23) = 0; /*0x69590a*/
        String::Trim((char *)(WindowLongA + 8)); /*0x69590e*/
        _strupr((char *)(WindowLongA + 8)); /*0x695914*/
        ListBox::SetCustomEntry((HWND *)WindowLongA, 1625, 3, (void *)(WindowLongA + 8)); /*0x695926*/
        return 0; /*0x695931*/
      }
    }
    return 0; /*0x6958de*/
  }
  if ( HIWORD(a3) != 1 ) /*0x69593a*/
    return 0; /*0x69593a*/
  v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x695940*/
  wParama = SendMessageA(a4, 0x147u, 0, 0); /*0x69595b*/
  if ( SendMessageA(a4, 0x150u, wParama, 0) != 3 ) /*0x695964*/
    goto LABEL_34; /*0x695964*/
  v12 = (const char *)(WindowLongA + 8); /*0x69596a*/
  SendMessageA(a4, 0x4BDu, wParama, WindowLongA + 8); /*0x695975*/
  v13 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x69597f*/
LABEL_38:
  v14 = v13; /*0x6959e3*/
  if ( !v13 ) /*0x6959e7*/
    return 0; /*0x6959e7*/
  ShowWindow(v13, 5); /*0x6959f0*/
  EnableWindow(v14, 1); /*0x6959f9*/
  v15 = strchr(v12, 45); /*0x695a02*/
  if ( v15 ) /*0x695a0e*/
  {
    v16 = v15 + 1; /*0x695a10*/
    String::Trim(v15 + 1); /*0x695a13*/
  }
  else
  {
    v16 = &MEMORY[0x889F64]; /*0x695a1a*/
  }
  v11(v14, 0x4B4u, 0, (LPARAM)v16); /*0x695a28*/
  SetFocus(v14); /*0x695a2b*/
  return 0; /*0x6957ff*/
}
}
} // namespace gamemd

// 0x6966D0
namespace gamemd {
HWND E4Recv_6966D0::sub_6966D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_6966D0(int this)
{
  bool v2; // bl
  HWND DlgItem; // eax
  HWND result; // eax

  v2 = *(_DWORD *)(this + 148) == 0; /*0x6966ec*/
  DlgItem = GetDlgItem(*(HWND *)this, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  result = GetDlgItem(*(HWND *)this, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return (HWND)SendMessageA(result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}
}
} // namespace gamemd

// 0x696950
namespace gamemd {
HWND E4Recv_696950::sub_696950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_696950(int this)
{
  HWND result; // eax
  HWND v3; // ebx

  result = GetDlgItem(*(HWND *)this, 1626); /*0x69695c*/
  v3 = result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow(result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, this + 8); /*0x696987*/
    *(_BYTE *)(this + 23) = 0; /*0x69698f*/
    String::Trim((char *)(this + 8)); /*0x696993*/
    _strupr((char *)(this + 8)); /*0x696999*/
    return ListBox::SetCustomEntry((HWND *)this, 1625, 3, (void *)(this + 8)); /*0x6969ab*/
  }
  return result; /*0x6969b1*/
}
}
} // namespace gamemd

// 0x696D00
namespace gamemd {
int sub_696D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_696D00()
{
  MEMORY[0xB057D0] = 0; /*0x696d02*/
  MEMORY[0xB057D4] = 0; /*0x696d07*/
  MEMORY[0xB057D8] = 0; /*0x696d0c*/
  MEMORY[0xB057DC] = 0; /*0x696d11*/
  return 0; /*0x696d16*/
}
}
} // namespace gamemd

// 0x696D20
namespace gamemd {
void sub_696D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696D20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x696d2c*/
  MEMORY[0xB057E8] = Math::Sqrt(v0 + v0); /*0x696d3e*/
}
}
} // namespace gamemd

// 0x696D50
namespace gamemd {
void sub_696D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696D50()
{
  MEMORY[0xB07778] = MEMORY[0xB057E8] / 60.0; /*0x696d5c*/
}
}
} // namespace gamemd

// 0x696D70
namespace gamemd {
void sub_696D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696D70()
{
  MEMORY[0xB07760] = 1.0 / MEMORY[0xB07778]; /*0x696d7c*/
}
}
} // namespace gamemd

// 0x696D90
namespace gamemd {
void sub_696D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696D90()
{
  MEMORY[0xB07758] = 0.0174532925199433 * 45.0; /*0x696d9c*/
}
}
} // namespace gamemd

// 0x696DB0
namespace gamemd {
void sub_696DB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696DB0()
{
  MEMORY[0xB057F0] = 0.0174532925199433 * 60.0; /*0x696dbc*/
}
}
} // namespace gamemd

// 0x696DD0
namespace gamemd {
void sub_696DD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696DD0()
{
  MEMORY[0xB057C8] = 0.0174532925199433 * 90.0; /*0x696ddc*/
}
}
} // namespace gamemd

// 0x696DF0
namespace gamemd {
long long sub_696DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_696DF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB057C8] - MEMORY[0xB057F0]); /*0x696e02*/
  result = Math::RoundToInt(v0 * MEMORY[0xB057E8] * 0.5); /*0x696e16*/
  MEMORY[0xB07780] = result; /*0x696e1b*/
  return result; /*0x696e20*/
}
}
} // namespace gamemd

// 0x696E30
namespace gamemd {
void sub_696E30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696E30()
{
  MEMORY[0xB057F8] = Math::ArcTan((double)MEMORY[0xB07780] * 0.00390625); /*0x696e47*/
}
}
} // namespace gamemd

// 0x696E60
namespace gamemd {
void sub_696E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_696E60()
{
  MEMORY[0xB07750] = Math::ArcTan((double)(2 * MEMORY[0xB07780]) / MEMORY[0xB057E8]); /*0x696e82*/
}
}
} // namespace gamemd

// 0x696E90
namespace gamemd {
long long sub_696E90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_696E90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB07780]) + 0.5); /*0x696eab*/
  MEMORY[0xB07774] = result; /*0x696eb0*/
  return result; /*0x696eb6*/
}
}
} // namespace gamemd

// 0x696EC0
namespace gamemd {
int sub_696EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_696EC0()
{
  MEMORY[0xB057E0] = 0; /*0x696ec2*/
  MEMORY[0xB057E2] = 0; /*0x696ec8*/
  return 0; /*0x696ece*/
}
}
} // namespace gamemd

// 0x696ED0
namespace gamemd {
int sub_696ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_696ED0()
{
  MEMORY[0xB07740] = 0; /*0x696ed2*/
  MEMORY[0xB07744] = 0; /*0x696ed7*/
  MEMORY[0xB07748] = 0; /*0x696edc*/
  return 0; /*0x696ee1*/
}
}
} // namespace gamemd

// 0x696EF0
namespace gamemd {
int sub_696EF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_696EF0()
{
  MEMORY[0xB07770] = 0; /*0x696ef5*/
  MEMORY[0xB07768] = 128; /*0x696eff*/
  MEMORY[0xB0776C] = 128; /*0x696f04*/
  return 128; /*0x696f09*/
}
}
} // namespace gamemd

// 0x6994F0
namespace gamemd {
int ParseMapFileHeader(CampaignScore * aP0, unsigned short * a1, char * a2, CampaignScore * aP3, unsigned char * a4, unsigned int * a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ParseMapFileHeader(
        CampaignScore *aP0,
        _WORD *a1,
        char *a2,
        CampaignScore *aP3,
        _BYTE *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int v7; // edi
  CampaignScore *v8; // ebp
  signed int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v13; // edi
  CCINIClass *v14; // esi
  signed int v15; // edi
  int v17; // [esp+10h] [ebp-1A4h]
  char *v19; // [esp+1Ch] [ebp-198h]
  int v20[22]; // [esp+20h] [ebp-194h] BYREF
  _BYTE v21[12]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  AbstractTypeClass aP1; // [esp+8Ch] [ebp-128h] BYREF
  int v24; // [esp+124h] [ebp-90h]
  _DWORD v25[7]; // [esp+128h] [ebp-8Ch] BYREF
  _DWORD v26[6]; // [esp+144h] [ebp-70h] BYREF
  char v27; // [esp+15Ch] [ebp-58h]
  INIClass aP4; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(v20, aP0->__pad_0); /*0x699507*/
  if ( CCFileClass::Open(v20, 0) && FileClass::Load(v20, (CDFileClass *)1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = (CampaignScore *)__2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(v20, 0, 0); /*0x699584*/
      CCFileClass::Read(v20, v8, v9); /*0x69958f*/
      v8->__pad_0[v9] = 0; /*0x699594*/
      v10 = strstr((ObjectClass *)v8, &stru_830620.__pad_579C[38604]); /*0x69959d*/
      v11 = v10; /*0x6995a2*/
      if ( v10 ) /*0x6995a9*/
      {
        v12 = strstr((ObjectClass *)(v10 + 5), &stru_830620.__pad_579C[38600]); /*0x6995b4*/
        v19 = v12; /*0x6995be*/
        if ( v12 > v11 ) /*0x6995c2*/
        {
          v12[1] = 0; /*0x6995e1*/
          Debug::Log(); /*0x6995e4*/
          v13 = 0; /*0x6995ec*/
          v14 = 0; /*0x6995ee*/
          while ( 1 ) /*0x6995f5*/
          {
            v17 = v13 + 1; /*0x6995f5*/
            v15 = (v13 + 1) * CCFileClass::GetSize(v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = (CCINIClass *)__2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(v20, (CampaignScore *)v14, v15); /*0x69964f*/
            v14->__pad_0[v15] = 0; /*0x699654*/
            if ( strstr((ObjectClass *)v14, &stru_830620.__pad_579C[38532]) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              *(_DWORD *)&aP1.zero_3C = 0; /*0x6996a2*/
              *(_DWORD *)&aP1.UINameLabel[3] = 0; /*0x6996a9*/
              INISectionList::Constructor(&aP1.UINameLabel[7]); /*0x6996b0*/
              Node::Init(&aP1.UIName); /*0x6996bc*/
              *(_DWORD *)&aP1.Name[16] = 0; /*0x6996d5*/
              aP1.Name[20] = 0; /*0x6996dc*/
              *(_DWORD *)&aP1.__pad_24[20] = &CCINIClass_Vtable; /*0x6996e3*/
              aP1.NeedsSaveOrLink = 0; /*0x6996ea*/
              *(_DWORD *)aP1.__pad_24 = 0; /*0x6996f1*/
              aP1.referenceCount = (int)&Straw::`vftable'; /*0x6996f8*/
              Buffer::Init(&aP1.__pad_24[4], (int)v8, (AbstractClass *)(v19 - (char *)v8)); /*0x699703*/
              *(_DWORD *)&aP1.__pad_24[16] = 0; /*0x69970f*/
              aP1.referenceCount = (int)&BufferStraw::`vftable'; /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int)&aP1.__pad_24[20], (AbstractTypeClass *)&aP1.referenceCount, 0, 0); /*0x69972b*/
              *(_DWORD *)&aP1.Name[48] = 0; /*0x699737*/
              v24 = 0; /*0x69973e*/
              INISectionList::Constructor(v25); /*0x699745*/
              Node::Init(v26); /*0x699751*/
              *(_DWORD *)&aP1.Name[44] = &CCINIClass_Vtable; /*0x699756*/
              v26[5] = 0; /*0x699764*/
              v27 = 0; /*0x69976b*/
              *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x69977f*/
              *(_DWORD *)&aP1.__pad_0[8] = 0; /*0x699786*/
              *(_DWORD *)aP1.__pad_0 = &Straw::`vftable'; /*0x69978d*/
              Buffer::Init(&aP1.__pad_0[12], (int)v14, (AbstractClass *)(strlen(v14->__pad_0) + 1)); /*0x699798*/
              aP1.nextArrayIndex = 0; /*0x6997ae*/
              *(_DWORD *)aP1.__pad_0 = &BufferStraw::`vftable'; /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int)&aP1.Name[44], &aP1, 0, 0); /*0x6997c0*/
              *a5 = INIClass::ReadInt_Overwrite( /*0x6997e5*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[38464],
                      (INIClass *)*a5);
              *a6 = INIClass::ReadInt_Overwrite( /*0x69981b*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[38452],
                      (INIClass *)*a6);
              INIClass::GetString( /*0x699833*/
                (unsigned __int8 ***)&aP1.__pad_24[20],
                (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                (unsigned __int8 *)&stru_830620.__pad_579C[37396],
                (INIClass *)&stru_87C374.__pad_579C[33876],
                (INIClass *)aP3,
                256);
              INIClass::GetString( /*0x699858*/
                (unsigned __int8 ***)&aP1.__pad_24[20],
                (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                (unsigned __int8 *)&stru_817828.fallRate,
                &unk_829284,
                &aP4,
                64);
              BulkCharToWide(a1, (unsigned __int8 *)&aP4, -1); /*0x69986a*/
              INIClass::GetString( /*0x69988f*/
                (unsigned __int8 ***)&aP1.Name[44],
                &g_INI_Key_Digest,
                (unsigned __int8 *)&stru_830620.__pad_1258[32],
                (INIClass *)&stru_830620.__pad_579C[38440],
                (INIClass *)a2,
                32);
              *a4 = INIClass::ReadBool_Overwrite( /*0x6998ba*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[32416],
                      0);
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)&aP1.__pad_0[12]); /*0x699906*/
              Straw::Dtor((int *)aP1.__pad_0); /*0x699912*/
              HashTable::DestroyHashTableINIClass((void **)&aP1.Name[44]); /*0x69991e*/
              Vector::Clear((int)&aP1.__pad_24[4]); /*0x69992a*/
              Straw::Dtor(&aP1.referenceCount); /*0x699936*/
              HashTable::DestroyHashTableINIClass((void **)&aP1.__pad_24[20]); /*0x699942*/
              goto LABEL_20; /*0x699942*/
            }
            if ( v17 >= 100 ) /*0x699670*/
            {
              __3_YAXPAX_Z(v8); /*0x69967a*/
              __3_YAXPAX_Z(v14); /*0x699680*/
              goto LABEL_20; /*0x699688*/
            }
            v13 = v17; /*0x699672*/
          }
        }
      }
      if ( v7 >= 100 ) /*0x6995c7*/
      {
        __3_YAXPAX_Z(v8); /*0x6995ce*/
        break; /*0x6995d6*/
      }
    }
  }
LABEL_20:
  v20[0] = (int)&CCFileClass::`vftable'; /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  v20[0] = (int)&off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor(v20); /*0x699970*/
}
}
} // namespace gamemd

// 0x69A340
namespace gamemd {
DWORD sub_69A340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD sub_69A340()
{
  DWORD v0; // eax
  char *v1; // eax
  const char *v2; // ebx
  unsigned int v3; // esi
  DWORD Time; // [esp+Ch] [ebp-4h] BYREF

  Time = timeGetTime(); /*0x69a34a*/
  v0 = DiskSpace::CheckAvailable(); /*0x69a34e*/
  ComputeHash(&Time, v0); /*0x69a359*/
  v1 = Object_Init_7CBC11(MEMORY[0x83EF00]); /*0x69a363*/
  v2 = v1; /*0x69a368*/
  if ( v1 ) /*0x69a36f*/
  {
    v3 = 0; /*0x69a378*/
    if ( strlen(v1) ) /*0x69a37a*/
    {
      do /*0x69a39d*/
        ComputeHash(&Time, v2[v3++]); /*0x69a389*/
      while ( v3 < strlen(v2) ); /*0x69a39d*/
    }
  }
  return Time; /*0x69a3a3*/
}
}
} // namespace gamemd

// 0x69ADE0
namespace gamemd {
char E4Recv_69ADE0::sub_69ADE0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_69ADE0(_BYTE *this, char a2)
{
  *(this + 380) = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}
}
} // namespace gamemd

// 0x69B690
namespace gamemd {
int E4Recv_69B690::sub_69B690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_69B690(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _DWORD *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = *(this + 2579); /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = this + 33; *i != result; ++i ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (int *)*(this + 2576); /*0x69b6bf*/
      while ( 1 ) /*0x69b6c5*/
      {
        v6 = *v5; /*0x69b6c5*/
        if ( *(_DWORD *)(*v5 + 87) == -2 && *(_DWORD *)(v6 + 83) == -1 ) /*0x69b6d0*/
          v7 = -2; /*0x69b6d2*/
        else
          v7 = *(_DWORD *)(v6 + 83); /*0x69b6d6*/
        if ( v7 == result ) /*0x69b6db*/
          break; /*0x69b6db*/
        ++v4; /*0x69b6dd*/
        ++v5; /*0x69b6de*/
        if ( v4 >= v3 ) /*0x69b6e3*/
          goto LABEL_10; /*0x69b6e3*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x69BCC0
namespace gamemd {
int sub_69BCC0(ObjectClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_69BCC0(ObjectClass *aP0)
{
  ObjectClass *v1; // edi
  SessionClass *v2; // esi
  char *v3; // eax

  v1 = 0; /*0x69bcc7*/
  v2 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    v3 = ToWideStringChar((IUnknown *)v2->GameMode[0]); /*0x69bcd0*/
    if ( !_strcmpi(aP0, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    v2 = (SessionClass *)((char *)v2 + 4); /*0x69bce3*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x69bce6*/
    if ( (int)v2 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x69bced*/
      return 0; /*0x69bcf4*/
  }
  return (int)v1->__pad_0; /*0x69bcef*/
}
}
} // namespace gamemd

// 0x69BD00
namespace gamemd {
int sub_69BD00(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_69BD00(int a1)
{
  int v1; // ebx
  char *v2; // esi
  char *v3; // edi
  char *v4; // eax

  v1 = 0; /*0x69bd07*/
  if ( MEMORY[0xA8DA84] <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    v2 = (char *)*(&MEMORY[0xA8DA90] + a1); /*0x69bd18*/
    v3 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v1)); /*0x69bd29*/
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= MEMORY[0xA8DA84] ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}
}
} // namespace gamemd

// 0x69DCD0
namespace gamemd {
int sub_69DCD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69DCD0()
{
  MEMORY[0xB07790] = 0; /*0x69dcd2*/
  MEMORY[0xB07794] = 0; /*0x69dcd7*/
  MEMORY[0xB07798] = 0; /*0x69dcdc*/
  MEMORY[0xB0779C] = 0; /*0x69dce1*/
  return 0; /*0x69dce6*/
}
}
} // namespace gamemd

// 0x69E060
namespace gamemd {
char E4Recv_69E060::sub_69E060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_69E060(_BYTE *this)
{
  return *(this + 52); /*0x69e063*/
}
}
} // namespace gamemd

// 0x69E070
namespace gamemd {
int sub_69E070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69E070()
{
  MEMORY[0xB077A0] = 0; /*0x69e072*/
  MEMORY[0xB077A4] = 0; /*0x69e077*/
  MEMORY[0xB077A8] = 0; /*0x69e07c*/
  MEMORY[0xB077AC] = 0; /*0x69e081*/
  return 0; /*0x69e086*/
}
}
} // namespace gamemd

// 0x69E9F0
namespace gamemd {
int E4Recv_69E9F0::sub_69E9F0(int a1, Straw * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_69E9F0(int this, int a1, Straw *aP2)
{
  Pipe *v4; // ebx

  if ( !a1 || (int)aP2 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  v4 = (Pipe *)Delegate::Invoke((_DWORD *)this, a1, aP2); /*0x69ea0d*/
  if ( !(unsigned char)this->M12 ) /*0x69ea0f*/
    SHA1::Process((Pipe *)(this + 16), (Pipe *)a1, v4); /*0x69ea1b*/
  return (int)v4->__pad_0; /*0x69ea23*/
}
}
} // namespace gamemd

// 0x69EA40
namespace gamemd {
void sub_69EA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69ea4c*/
  MEMORY[0xB077E0] = Math::Sqrt(v0 + v0); /*0x69ea5e*/
}
}
} // namespace gamemd

// 0x69EA70
namespace gamemd {
void sub_69EA70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EA70()
{
  MEMORY[0xB07830] = MEMORY[0xB077E0] / 60.0; /*0x69ea7c*/
}
}
} // namespace gamemd

// 0x69EA90
namespace gamemd {
void sub_69EA90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EA90()
{
  MEMORY[0xB07818] = 1.0 / MEMORY[0xB07830]; /*0x69ea9c*/
}
}
} // namespace gamemd

// 0x69EAB0
namespace gamemd {
void sub_69EAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EAB0()
{
  MEMORY[0xB07810] = 0.0174532925199433 * 45.0; /*0x69eabc*/
}
}
} // namespace gamemd

// 0x69EAD0
namespace gamemd {
void sub_69EAD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EAD0()
{
  MEMORY[0xB077E8] = 0.0174532925199433 * 60.0; /*0x69eadc*/
}
}
} // namespace gamemd

// 0x69EAF0
namespace gamemd {
void sub_69EAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EAF0()
{
  MEMORY[0xB077C0] = 0.0174532925199433 * 90.0; /*0x69eafc*/
}
}
} // namespace gamemd

// 0x69EB10
namespace gamemd {
long long sub_69EB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_69EB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB077C0] - MEMORY[0xB077E8]); /*0x69eb22*/
  result = Math::RoundToInt(v0 * MEMORY[0xB077E0] * 0.5); /*0x69eb36*/
  MEMORY[0xB07838] = result; /*0x69eb3b*/
  return result; /*0x69eb40*/
}
}
} // namespace gamemd

// 0x69EB50
namespace gamemd {
void sub_69EB50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EB50()
{
  MEMORY[0xB077F0] = Math::ArcTan((double)MEMORY[0xB07838] * 0.00390625); /*0x69eb67*/
}
}
} // namespace gamemd

// 0x69EB80
namespace gamemd {
void sub_69EB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69EB80()
{
  MEMORY[0xB07808] = Math::ArcTan((double)(2 * MEMORY[0xB07838]) / MEMORY[0xB077E0]); /*0x69eba2*/
}
}
} // namespace gamemd

// 0x69EBB0
namespace gamemd {
long long sub_69EBB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_69EBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB07838]) + 0.5); /*0x69ebcb*/
  MEMORY[0xB0782C] = result; /*0x69ebd0*/
  return result; /*0x69ebd6*/
}
}
} // namespace gamemd

// 0x69EBE0
namespace gamemd {
int sub_69EBE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69EBE0()
{
  MEMORY[0xB077D8] = 0; /*0x69ebe2*/
  MEMORY[0xB077DA] = 0; /*0x69ebe8*/
  return 0; /*0x69ebee*/
}
}
} // namespace gamemd

// 0x69EBF0
namespace gamemd {
int sub_69EBF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69EBF0()
{
  MEMORY[0xB077F8] = 0; /*0x69ebf2*/
  MEMORY[0xB077FC] = 0; /*0x69ebf7*/
  return 0; /*0x69ec01*/
}
}
} // namespace gamemd

// 0x69EC10
namespace gamemd {
int sub_69EC10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69EC10()
{
  MEMORY[0xB07828] = 0; /*0x69ec15*/
  MEMORY[0xB07820] = 128; /*0x69ec1f*/
  MEMORY[0xB07824] = 128; /*0x69ec24*/
  return 128; /*0x69ec29*/
}
}
} // namespace gamemd

// 0x69EC30
namespace gamemd {
int sub_69EC30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_69EC30()
{
  MEMORY[0xB077C8] = 0; /*0x69ec32*/
  MEMORY[0xB077CC] = 0; /*0x69ec37*/
  MEMORY[0xB077D0] = 0; /*0x69ec3c*/
  MEMORY[0xB077D4] = 0; /*0x69ec41*/
  return 0; /*0x69ec46*/
}
}
} // namespace gamemd

// 0x69F0C0
namespace gamemd {
void * E4Recv_69F0C0::sub_69F0C0(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall sub_69F0C0(int *this, void *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x69f0cc*/
  v3 = *(this + 12); /*0x69f0d1*/
  if ( v3 ) /*0x69f0da*/
  {
    v4 = *(this + 9); /*0x69f0e0*/
    v5 = *(this + 11); /*0x69f0e3*/
    if ( v4 != -1 ) /*0x69f0ef*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x69f0f7*/
        v5 = 0; /*0x69f0fd*/
      else
        v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x69f0f9*/
    }
    if ( (double)(v3 - v5) / (double)*(this + 12) < 1.0 ) /*0x69f118*/
    {
      v6 = *(this + 12); /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = *(this + 9); /*0x69f12d*/
        v9 = *(this + 11); /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x69f140*/
        }
        v7 = (double)(v6 - v9) / (double)*(this + 12); /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, *(this + 8), *(this + 7), v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  v11 = *(this + 7); /*0x69f16c*/
  if ( v11 ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, v11); /*0x69f177*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x69f187*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}
}
} // namespace gamemd

// 0x69F1B0
namespace gamemd {
double E4Recv_69F1B0::sub_69F1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_69F1B0(int *this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  v1 = *(this + 12); /*0x69f1b4*/
  if ( !v1 ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  v3 = *(this + 9); /*0x69f1ca*/
  v4 = *(this + 11); /*0x69f1cd*/
  if ( v3 != -1 ) /*0x69f1d3*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x69f1df*/
      return (double)(v1 - (v4 - ((int)MEMORY[0xA8ED84] - v3))) / (double)v1; /*0x69f1f5*/
    v4 = 0; /*0x69f1f6*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x69f1c5*/
}
}
} // namespace gamemd

// 0x69F210
namespace gamemd {
int E4Recv_69F210::sub_69F210(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_69F210(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = *(this + 7); /*0x69f210*/
  if ( a2 != result ) /*0x69f21c*/
  {
    *(this + 8) = result; /*0x69f21e*/
    *(this + 7) = a2; /*0x69f221*/
    v3 = this + 9; /*0x69f229*/
    *v3 = MEMORY[0xA8ED84]; /*0x69f232*/
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}
}
} // namespace gamemd

// 0x69F5E0
namespace gamemd {
BOOL E4Recv_69F5E0::sub_69F5E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_69F5E0(_DWORD *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  BOOL result; // eax

  v1 = *(this + 12); /*0x69f5e4*/
  if ( v1 ) /*0x69f5ed*/
  {
    v3 = *(this + 11); /*0x69f5f7*/
    v4 = *(this + 9); /*0x69f5fb*/
    if ( v4 != -1 ) /*0x69f601*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v3 ) /*0x69f60d*/
        v3 = 0; /*0x69f613*/
      else
        v3 -= (int)MEMORY[0xA8ED84] - v4; /*0x69f60f*/
    }
    v2 = (double)(v1 - v3) / (double)(int)*(this + 12); /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  result = 0; /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    v5 = *(this + 3); /*0x69f632*/
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/
}
}
} // namespace gamemd

// 0x690150
namespace gamemd {
void nullsub_227()
{
  ;
}
} // namespace gamemd

// 0x691B30
namespace gamemd {
void nullsub_34()
{
  ;
}
} // namespace gamemd

// 0x692F20
namespace gamemd {
void nullsub_175()
{
  ;
}
} // namespace gamemd

// 0x697B60
namespace gamemd {
void nullsub_228()
{
  ;
}
} // namespace gamemd

// 0x69A300
namespace gamemd {
void nullsub_35()
{
  ;
}
} // namespace gamemd

// 0x69B8B0
namespace gamemd {
void nullsub_229(int a1, int a2)
{
  ;
}
} // namespace gamemd
