// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_410DC0_e4.hpp"
#include "e4/classes/E4Recv_412610_e4.hpp"
#include "e4/classes/E4Recv_41DD10_e4.hpp"
#include "e4/classes/E4Recv_41FD30_e4.hpp"
#include "e4/classes/E4Recv_41FD40_e4.hpp"
#include "e4/classes/E4Recv_41FD50_e4.hpp"

// 0x410070
namespace gamemd {
void sub_410070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410070()
{
  MEMORY[0x887678] = Math::ArcTan((double)MEMORY[0x8876C0] * 0.00390625); /*0x410087*/
}
}
} // namespace gamemd

// 0x4100A0
namespace gamemd {
void sub_4100A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4100A0()
{
  MEMORY[0x887690] = Math::ArcTan((double)(2 * MEMORY[0x8876C0]) / MEMORY[0x887668]); /*0x4100c2*/
}
}
} // namespace gamemd

// 0x4100D0
namespace gamemd {
long long sub_4100D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4100D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8876C0]) + 0.5); /*0x4100eb*/
  MEMORY[0x8876B4] = result; /*0x4100f0*/
  return result; /*0x4100f6*/
}
}
} // namespace gamemd

// 0x410110
namespace gamemd {
int sub_410110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_410110()
{
  MEMORY[0x887680] = 0; /*0x410112*/
  MEMORY[0x887684] = 0; /*0x410117*/
  MEMORY[0x887688] = 0; /*0x41011c*/
  return 0; /*0x410121*/
}
}
} // namespace gamemd

// 0x410130
namespace gamemd {
int sub_410130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_410130()
{
  MEMORY[0x8876B0] = 0; /*0x410135*/
  MEMORY[0x8876A8] = 128; /*0x41013f*/
  MEMORY[0x8876AC] = 128; /*0x410144*/
  return 128; /*0x410149*/
}
}
} // namespace gamemd

// 0x410150
namespace gamemd {
int sub_410150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_410150()
{
  MEMORY[0x887650] = 0; /*0x410152*/
  MEMORY[0x887654] = 0; /*0x410157*/
  MEMORY[0x887658] = 0; /*0x41015c*/
  MEMORY[0x88765C] = 0; /*0x410161*/
  return 0; /*0x410166*/
}
}
} // namespace gamemd

// 0x410610
namespace gamemd {
void sub_410610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41061c*/
  MEMORY[0x8876D8] = Math::Sqrt(v0 + v0); /*0x41062e*/
}
}
} // namespace gamemd

// 0x410640
namespace gamemd {
void sub_410640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410640()
{
  MEMORY[0x887728] = MEMORY[0x8876D8] / 60.0; /*0x41064c*/
}
}
} // namespace gamemd

// 0x410660
namespace gamemd {
void sub_410660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410660()
{
  MEMORY[0x887710] = 1.0 / MEMORY[0x887728]; /*0x41066c*/
}
}
} // namespace gamemd

// 0x410680
namespace gamemd {
void sub_410680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410680()
{
  MEMORY[0x887708] = 0.0174532925199433 * 45.0; /*0x41068c*/
}
}
} // namespace gamemd

// 0x4106A0
namespace gamemd {
void sub_4106A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4106A0()
{
  MEMORY[0x8876E0] = 0.0174532925199433 * 60.0; /*0x4106ac*/
}
}
} // namespace gamemd

// 0x4106C0
namespace gamemd {
void sub_4106C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4106C0()
{
  MEMORY[0x8876C8] = 0.0174532925199433 * 90.0; /*0x4106cc*/
}
}
} // namespace gamemd

// 0x4106E0
namespace gamemd {
long long sub_4106E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4106E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8876C8] - MEMORY[0x8876E0]); /*0x4106f2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8876D8] * 0.5); /*0x410706*/
  MEMORY[0x887730] = result; /*0x41070b*/
  return result; /*0x410710*/
}
}
} // namespace gamemd

// 0x410720
namespace gamemd {
void sub_410720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410720()
{
  MEMORY[0x8876E8] = Math::ArcTan((double)MEMORY[0x887730] * 0.00390625); /*0x410737*/
}
}
} // namespace gamemd

// 0x410750
namespace gamemd {
void sub_410750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_410750()
{
  MEMORY[0x887700] = Math::ArcTan((double)(2 * MEMORY[0x887730]) / MEMORY[0x8876D8]); /*0x410772*/
}
}
} // namespace gamemd

// 0x410780
namespace gamemd {
long long sub_410780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_410780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887730]) + 0.5); /*0x41079b*/
  MEMORY[0x887724] = result; /*0x4107a0*/
  return result; /*0x4107a6*/
}
}
} // namespace gamemd

// 0x4107B0
namespace gamemd {
int sub_4107B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4107B0()
{
  MEMORY[0x8876D0] = 0; /*0x4107b2*/
  MEMORY[0x8876D2] = 0; /*0x4107b8*/
  return 0; /*0x4107be*/
}
}
} // namespace gamemd

// 0x4107C0
namespace gamemd {
int sub_4107C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4107C0()
{
  MEMORY[0x8876F0] = 0; /*0x4107c2*/
  MEMORY[0x8876F4] = 0; /*0x4107c7*/
  MEMORY[0x8876F8] = 0; /*0x4107cc*/
  return 0; /*0x4107d1*/
}
}
} // namespace gamemd

// 0x4107E0
namespace gamemd {
int sub_4107E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4107E0()
{
  MEMORY[0x887720] = 0; /*0x4107e5*/
  MEMORY[0x887718] = 128; /*0x4107ef*/
  MEMORY[0x88771C] = 128; /*0x4107f4*/
  return 128; /*0x4107f9*/
}
}
} // namespace gamemd

// 0x410CC0
namespace gamemd {
int sub_410CC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_410CC0()
{
  MEMORY[0x887738] = 0; /*0x410cc2*/
  MEMORY[0x88773C] = 0; /*0x410cc7*/
  MEMORY[0x887740] = 0; /*0x410ccc*/
  MEMORY[0x887744] = 0; /*0x410cd1*/
  return 0; /*0x410cd6*/
}
}
} // namespace gamemd

// 0x410DC0
namespace gamemd {
int E4Recv_410DC0::sub_410DC0(int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_410DC0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x410de2*/
  v9 = (__int16 *)(*(this + 4) + *(this + 6)); /*0x410de9*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x410deb*/
  v11 = a5; /*0x410df1*/
  v12 = v10 / 2 - a5; /*0x410df7*/
  if ( v8 && a6 > 0 ) /*0x410e03*/
  {
    v16 = a6; /*0x410e05*/
    do /*0x410e38*/
    {
      if ( v11 > 0 ) /*0x410e0b*/
      {
        v13 = v11; /*0x410e0d*/
        do /*0x410e26*/
        {
          v14 = *v9++; /*0x410e0f*/
          *v8++ = v14; /*0x410e15*/
          if ( (unsigned int)v9 >= *(this + 7) ) /*0x410e20*/
            v9 = (__int16 *)((char *)v9 - *(this + 8)); /*0x410e22*/
          --v13; /*0x410e25*/
        }
        while ( v13 ); /*0x410e26*/
        v11 = a5; /*0x410e28*/
      }
      v8 += v12; /*0x410e30*/
      --v16; /*0x410e34*/
    }
    while ( v16 ); /*0x410e38*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x410e42*/
}
}
} // namespace gamemd

// 0x410E70
namespace gamemd {
char * sub_410E70(char * a1, int a2, unsigned short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__stdcall sub_410E70(char *a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x410e70*/
  v4 = a2; /*0x410e75*/
  if ( ((unsigned __int8)a1 & 2) != 0 && a2 ) /*0x410e86*/
  {
    *(_WORD *)a1 = a3; /*0x410e88*/
    v3 = a1 + 2; /*0x410e8b*/
    v4 = a2 - 1; /*0x410e8e*/
  }
  result = 0; /*0x410e91*/
  v6 = v4 >> 1; /*0x410e96*/
  if ( v4 >> 1 ) /*0x410e96*/
  {
    memset32(v3, 65537 * a3, v6); /*0x410eae*/
    result = &v3[4 * v6]; /*0x410eb0*/
  }
  if ( (v4 & 1) != 0 ) /*0x410eb7*/
  {
    if ( result ) /*0x410ebb*/
      *(_WORD *)result = a3; /*0x410ebd*/
  }
  return result; /*0x410ec0*/
}
}
} // namespace gamemd

// 0x411680
namespace gamemd {
int sub_411680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_411680()
{
  MEMORY[0x887748] = 0; /*0x411682*/
  MEMORY[0x88774C] = 0; /*0x411687*/
  MEMORY[0x887750] = 0; /*0x41168c*/
  MEMORY[0x887754] = 0; /*0x411691*/
  return 0; /*0x411696*/
}
}
} // namespace gamemd

// 0x4116A0
namespace gamemd {
int sub_4116A0(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_4116A0(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-10h]
  unsigned int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  _BYTE v19[4]; // [esp+18h] [ebp-4h] BYREF

  v1 = a1; /*0x4116a5*/
  v2 = *(_DWORD *)(a1 + 52); /*0x4116a9*/
  v3 = 188 * v2 + 8943480; /*0x4116bd*/
  if ( (MEMORY[0x8877A0][47 * v2] & 1) != 0 ) /*0x4116c4*/
  {
    Debug::Log(); /*0x4116cf*/
    return *(_DWORD *)(v3 + 32); /*0x4116df*/
  }
  v5 = Time::GetElapsedMS() - *((_DWORD *)&MEMORY[0x887794] + 47 * v2); /*0x4116f2*/
  v17 = *(_DWORD *)(v3 + 144); /*0x4116f4*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x4116ff*/
  v6 = *(_DWORD *)(v3 + 140); /*0x41170b*/
  v7 = *(_DWORD *)(v1 + 156) * *(_DWORD *)(v3 + 148); /*0x41171a*/
  v18 = *(_DWORD *)(v1 + 56); /*0x411723*/
  v16 = *(_DWORD *)(v3 + 152); /*0x411727*/
  if ( v6 && !(*(int (__stdcall **)(int, unsigned int *, _BYTE *))(*(_DWORD *)v6 + 16))(v6, &a1, v19) ) /*0x41173a*/
  {
    if ( v16 ) /*0x411747*/
    {
      v8 = a1; /*0x411749*/
LABEL_11:
      v7 += v8; /*0x411769*/
      goto LABEL_12; /*0x411769*/
    }
    v9 = v17 >> 1; /*0x411757*/
    if ( a1 >= v17 >> 1 ) /*0x41175b*/
    {
      v7 += a1 - v9; /*0x41175f*/
      goto LABEL_12; /*0x411761*/
    }
    if ( v7 ) /*0x411765*/
    {
      v8 = a1 + v9; /*0x411767*/
      goto LABEL_11; /*0x411767*/
    }
  }
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x41176b*/
  v10 = v18 * *(_DWORD *)(v1 + 156); /*0x411780*/
  v11 = v7 - v10; /*0x411785*/
  if ( v7 - v10 > v7 ) /*0x411789*/
  {
    v11 = 0; /*0x41178b*/
LABEL_14:
    *(_DWORD *)(v3 + 20) = v11; /*0x41178d*/
    *(_DWORD *)(v3 + 24) = v5; /*0x411792*/
    v12 = 60 /*0x4117ba*/
        * (v11
         / (*(unsigned __int8 *)(v1 + 62)
          * (*(unsigned __int8 *)(v1 + 63) >> 3)))
        / *(unsigned __int16 *)(v1 + 60);
    *(_DWORD *)(v3 + 32) = v12; /*0x4117bc*/
    v13 = *(_DWORD *)(v1 + 196); /*0x4117bf*/
    if ( v12 >= v13 ) /*0x4117c7*/
    {
      result = v12 - v13; /*0x4117c9*/
      *(_DWORD *)(v3 + 32) = result; /*0x4117cd*/
      return result; /*0x4117d5*/
    }
    *(_DWORD *)(v3 + 32) = 0; /*0x4117ff*/
    return *(_DWORD *)(v3 + 32); /*0x4117ff*/
  }
  if ( !v11 || v11 > *(_DWORD *)(v3 + 20) ) /*0x4117dd*/
    goto LABEL_14; /*0x4117dd*/
  v14 = *(_DWORD *)(v3 + 24); /*0x4117df*/
  if ( v5 > v14 ) /*0x4117e4*/
  {
    *(_DWORD *)(v3 + 24) = v5; /*0x4117e8*/
    v15 = v5 - v14 + *(_DWORD *)(v3 + 32); /*0x4117f0*/
    *(_DWORD *)(v3 + 32) = v15; /*0x4117f4*/
    return v15; /*0x4117fe*/
  }
  return *(_DWORD *)(v3 + 32); /*0x4116da*/
}
}
} // namespace gamemd

// 0x411820
namespace gamemd {
int ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION * dwUser, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION *dwUser, int a2, int a3, int a4)
{
  int result; // eax
  LONG LockCount; // eax
  int v6; // ebp
  int v7; // esi
  LONG v8; // eax
  int v9; // esi
  struct _RTL_CRITICAL_SECTION *v10; // edi
  int v11; // eax
  LONG v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi

  result = -1; /*0x411824*/
  switch ( a2 ) /*0x411835*/
  {
    case 1: /*0x411835*/
      dwUser[3].RecursionCount = (LONG)j_Time_GetElapsedMS; /*0x411843*/
      dwUser[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)60; /*0x41184a*/
      break; /*0x411852*/
    case 2: /*0x411835*/
      result = sub_411B20((DWORD_PTR)dwUser, a3, a4); /*0x411862*/
      break; /*0x41186e*/
    case 3: /*0x411835*/
      Debug::Log(); /*0x411874*/
      LockCount = dwUser[2].LockCount; /*0x411880*/
      v6 = 188 * LockCount + 8943480; /*0x411894*/
      if ( MEMORY[0x887778][188 * LockCount] == 1 ) /*0x41189b*/
      {
        if ( MEMORY[0x887804][47 * LockCount] ) /*0x4118a1*/
        {
          Debug::Log(); /*0x4118b2*/
          v7 = 188 * dwUser[2].LockCount + 8943480; /*0x4118ce*/
          if ( MEMORY[0x887804][47 * dwUser[2].LockCount] ) /*0x4118c5*/
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x4118de*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 72))(*(_DWORD *)(v7 + 140)); /*0x4118ed*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 8))(*(_DWORD *)(v7 + 140)); /*0x4118f9*/
            *(_DWORD *)(v7 + 140) = 0; /*0x411901*/
            *(_DWORD *)(v7 + 64) = 0; /*0x411907*/
            *(_DWORD *)(v7 + 68) = 0; /*0x41190a*/
            *(_DWORD *)(v7 + 72) = 0; /*0x41190d*/
            *(_DWORD *)(v7 + 76) = 0; /*0x411910*/
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 160)); /*0x411913*/
          }
        }
        Debug::Log(); /*0x41191e*/
        timeKillEvent(*(_DWORD *)(v6 + 96)); /*0x41192a*/
        *(_DWORD *)(v6 + 96) = 0; /*0x411935*/
        Debug::Log(); /*0x411938*/
        timeEndPeriod(0x10u); /*0x411942*/
        *(_BYTE *)v6 = 0; /*0x41194d*/
        Debug::Log(); /*0x411950*/
        DeleteCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x41195f*/
      }
      Debug::Log(); /*0x41196a*/
      result = -1; /*0x411972*/
      break; /*0x411979*/
    case 4: /*0x411835*/
      result = InitializeSoundBufferPlayback(dwUser); /*0x41197f*/
      break; /*0x41198b*/
    case 5: /*0x411835*/
      result = SubmitDirectSoundBufferData(dwUser, a3, a4); /*0x41199b*/
      break; /*0x4119a7*/
    case 6: /*0x411835*/
      v8 = dwUser[2].LockCount; /*0x4119ac*/
      v9 = 188 * v8 + 8943480; /*0x4119b7*/
      v10 = (struct _RTL_CRITICAL_SECTION *)(188 * v8 + 8943640); /*0x4119be*/
      EnterCriticalSection(v10); /*0x4119c5*/
      if ( *(_BYTE *)v9 == 1 ) /*0x4119ce*/
      {
        v11 = *(_DWORD *)(v9 + 140); /*0x4119d0*/
        if ( v11 ) /*0x4119d8*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11 + 72))(*(_DWORD *)(v9 + 140)); /*0x4119dd*/
      }
      *(_DWORD *)(v9 + 40) |= 1u; /*0x4119e7*/
      LeaveCriticalSection(v10); /*0x4119ea*/
      result = -1; /*0x4119f3*/
      break; /*0x4119f7*/
    case 7: /*0x411835*/
      v15 = 188 * dwUser[2].LockCount + 8943480; /*0x411aad*/
      if ( MEMORY[0x887804][47 * dwUser[2].LockCount] ) /*0x411aa4*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x411abd*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 72))(*(_DWORD *)(v15 + 140)); /*0x411acc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 8))(*(_DWORD *)(v15 + 140)); /*0x411ad8*/
        *(_DWORD *)(v15 + 140) = 0; /*0x411ae0*/
        *(_DWORD *)(v15 + 64) = 0; /*0x411ae6*/
        *(_DWORD *)(v15 + 68) = 0; /*0x411ae9*/
        *(_DWORD *)(v15 + 72) = 0; /*0x411aec*/
        *(_DWORD *)(v15 + 76) = 0; /*0x411aef*/
        LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 160)); /*0x411af2*/
      }
      result = -1; /*0x411af8*/
      break; /*0x411af8*/
    case 8: /*0x411835*/
      v12 = dwUser[2].LockCount; /*0x4119fe*/
      v13 = 188 * v12 + 8943480; /*0x411a12*/
      if ( MEMORY[0x887778][188 * v12] && MEMORY[0x887804][47 * v12] ) /*0x411a1b*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * v12 + 8943640)); /*0x411a2a*/
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v13 + 140) + 48))( /*0x411a3d*/
               *(_DWORD *)(v13 + 140),
               0,
               0,
               1) )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a7c*/
          result = -13; /*0x411a82*/
        }
        else
        {
          *(_DWORD *)(v13 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v13 + 24); /*0x411a52*/
          Debug::Log(); /*0x411a55*/
          v14 = *(_DWORD *)(v13 + 40); /*0x411a5a*/
          LOBYTE(v14) = v14 & 0xFE; /*0x411a60*/
          *(_DWORD *)(v13 + 40) = v14; /*0x411a62*/
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a69*/
          result = -1; /*0x411a6f*/
        }
      }
      else
      {
        result = -13; /*0x411a8c*/
      }
      break; /*0x411a75*/
    default:
      return result;
  }
  return result; /*0x411840*/
}
}
} // namespace gamemd

// 0x411B20
namespace gamemd {
int sub_411B20(DWORD_PTR dwUser, AnimClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_411B20(DWORD_PTR dwUser, AnimClass *aP1, int a3)
{
  int v3; // eax
  char *v4; // ecx
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  LPDIRECTSOUND DirectSound; // [esp+8h] [ebp-64h]
  _DWORD v11[24]; // [esp+Ch] [ebp-60h] BYREF

  DirectSound = Audio::GetDirectSound(); /*0x411b2f*/
  Debug::Log(); /*0x411b33*/
  GetCurrentThreadId(); /*0x411b3b*/
  Debug::Log(); /*0x411b47*/
  if ( !Audio::IsSoundEnabled() ) /*0x411b4f*/
    return -13; /*0x411b4f*/
  v3 = 0; /*0x411b5c*/
  v4 = &stru_87C374.__pad_579C[23656]; /*0x411b5e*/
  do /*0x411b75*/
  {
    if ( !*v4 ) /*0x411b63*/
      break; /*0x411b66*/
    v4 += 188; /*0x411b68*/
    ++v3; /*0x411b6e*/
  }
  while ( (int)v4 < (int)&stru_87C374.__pad_579C[23844] ); /*0x411b75*/
  if ( v3 == 1 || a3 != 16 ) /*0x411b85*/
    return -13; /*0x411b85*/
  *(_DWORD *)(dwUser + 52) = v3; /*0x411b99*/
  v5 = (_BYTE *)(188 * v3 + 8943480); /*0x411b9c*/
  memset(v5, 0, 0xBCu); /*0x411bac*/
  *v5 = 1; /*0x411bae*/
  *((_DWORD *)v5 + 1) = *(_DWORD *)(dwUser + 164); /*0x411bbd*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(188 * v3 + 8943640)); /*0x411bc1*/
  v6 = *(_DWORD *)(dwUser + 160); /*0x411bc7*/
  if ( v6 == -1 )
  {
    v7 = *(_DWORD *)(dwUser + 112); /*0x411bdf*/
    v8 = *(unsigned __int16 *)(dwUser + 14); /*0x411be4*/
    *((_WORD *)v5 + 4) = v7 == (unsigned __int16)v8
                       ? LOWORD(aP1->field_0)
                       : v7 * (unsigned int)LOWORD(aP1->field_0) / v8;
  }
  else
  {
    *((_WORD *)v5 + 4) = v6; /*0x411bd9*/
  }
  memset(v11, 0, sizeof(v11)); /*0x411c16*/
  v11[0] = 96; /*0x411c1c*/
  DirectSound->lpVtbl->GetCaps(DirectSound, (LPDSCAPS)v11); /*0x411c28*/
  if ( (v11[1] & 0x20) != 0 ) /*0x411c30*/
    Debug::Log(); /*0x411c3e*/
  else
    *(_DWORD *)(dwUser + 196) = 0; /*0x411c48*/
  v5[10] = BYTE2(aP1->field_0); /*0x411c5a*/
  v5[11] = HIBYTE(aP1->field_0); /*0x411c60*/
  *((_DWORD *)v5 + 9) = aP1->field_4; /*0x411c66*/
  *(_DWORD *)&stru_87C374.__pad_579C[23644] = aP1->field_8; /*0x411c6c*/
  *(_DWORD *)&stru_87C374.__pad_579C[23648] = *(_DWORD *)aP1->__pad_C; /*0x411c75*/
  Debug::Log(); /*0x411c7b*/
  if ( timeBeginPeriod(0x10u) == 97 ) /*0x411c90*/
    return -13; /*0x411cd5*/
  Debug::Log(); /*0x411c97*/
  *((_DWORD *)v5 + 24) = timeSetEvent(0x10u, 1u, fptc, dwUser, 1u); /*0x411cb6*/
  Debug::Log(); /*0x411cb9*/
  return *((_DWORD *)v5 + 24) != 0 ? -1 : -13;
}
}
} // namespace gamemd

// 0x411DF0
namespace gamemd {
int InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
  LONG LockCount; // eax
  int v3; // esi
  int v4; // eax
  int v6; // eax
  int **v7; // edi
  unsigned __int16 v8; // ax
  __int16 v9; // dx
  int v10; // ecx
  unsigned __int16 v11; // ax
  LPDIRECTSOUND DirectSoundAudio; // eax
  int *v13; // eax
  int v14; // eax
  int *v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSectiona; // [esp+38h] [ebp+4h]

  LockCount = lpCriticalSection[2].LockCount; /*0x411df7*/
  v3 = 188 * LockCount + 8943480; /*0x411e0c*/
  if ( (MEMORY[0x8877A0][47 * LockCount] & 1) == 0 ) /*0x411e13*/
  {
    lpCriticalSectiona = (struct _RTL_CRITICAL_SECTION *)(188 * LockCount + 8943640); /*0x411e9b*/
    EnterCriticalSection(lpCriticalSectiona); /*0x411e9f*/
    v6 = *(_DWORD *)(v3 + 140); /*0x411ea5*/
    v7 = (int **)(v3 + 140); /*0x411eab*/
    if ( v6 ) /*0x411eb3*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 72))(*(_DWORD *)(v3 + 140)); /*0x411eb8*/
      (*(void (__stdcall **)(int *))(**v7 + 8))(*v7); /*0x411ec0*/
      *v7 = 0; /*0x411ec3*/
    }
    *(_DWORD *)(v3 + 144) = 2 * (int)lpCriticalSection[6].OwningThread; /*0x411ed8*/
    *(_DWORD *)(v3 + 100) = 0; /*0x411ede*/
    *(_DWORD *)(v3 + 104) = 0; /*0x411ee0*/
    *(_DWORD *)(v3 + 108) = 0; /*0x411ee3*/
    *(_DWORD *)(v3 + 112) = 0; /*0x411ee6*/
    *(_DWORD *)(v3 + 116) = 0; /*0x411ee9*/
    *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 144); /*0x411ef2*/
    *(_DWORD *)(v3 + 100) = 20; /*0x411efa*/
    *(_DWORD *)(v3 + 104) = 65760; /*0x411f01*/
    *(_DWORD *)(v3 + 116) = v3 + 120; /*0x411f08*/
    *(_DWORD *)(v3 + 120) = 0; /*0x411f0b*/
    *(_DWORD *)(v3 + 124) = 0; /*0x411f0d*/
    *(_DWORD *)(v3 + 128) = 0; /*0x411f10*/
    *(_DWORD *)(v3 + 132) = 0; /*0x411f13*/
    *(_WORD *)(v3 + 136) = 0; /*0x411f16*/
    *(_WORD *)(v3 + 120) = 1; /*0x411f1a*/
    v8 = *(unsigned __int8 *)(v3 + 11); /*0x411f1f*/
    v9 = *(unsigned __int8 *)(v3 + 10); /*0x411f24*/
    *(_WORD *)(v3 + 134) = v8; /*0x411f29*/
    v10 = *(unsigned __int16 *)(v3 + 8); /*0x411f30*/
    v11 = v9 * (v8 >> 3); /*0x411f38*/
    *(_WORD *)(v3 + 132) = v11; /*0x411f3b*/
    *(_DWORD *)(v3 + 124) = v10; /*0x411f4a*/
    *(_WORD *)(v3 + 122) = v9; /*0x411f4d*/
    *(_DWORD *)(v3 + 128) = v10 * v11; /*0x411f51*/
    DirectSoundAudio = Audio::GetDirectSound(); /*0x411f57*/
    DirectSoundAudio->lpVtbl->CreateSoundBuffer( /*0x411f63*/
      DirectSoundAudio,
      (LPCDSBUFFERDESC)(v3 + 100),
      (LPDIRECTSOUNDBUFFER *)(v3 + 140),
      0);
    if ( *v7 ) /*0x411f66*/
    {
      MEMORY[0x88776C](lpCriticalSection); /*0x411f84*/
      MEMORY[0x88776C](lpCriticalSection); /*0x411f8b*/
      v13 = *v7; /*0x411f91*/
      *(_DWORD *)(v3 + 68) = 0; /*0x411f96*/
      *(_DWORD *)(v3 + 156) = 0; /*0x411f99*/
      *(_DWORD *)(v3 + 148) = 0; /*0x411f9f*/
      (*(void (__stdcall **)(int *, _DWORD))(*v13 + 52))(v13, 0); /*0x411fa9*/
      v14 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 255.0); /*0x411fb8*/
      v15 = *v7; /*0x411fbd*/
      *(_DWORD *)(v3 + 4) = v14; /*0x411fc1*/
      v16 = *v15; /*0x411fca*/
      v17 = sub_40A900((unsigned __int8)v14); /*0x411fcc*/
      (*(void (__stdcall **)(int *, int))(v16 + 60))(*v7, v17); /*0x411fd5*/
      v18 = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(**v7 + 48))(*v7, 0, 0, 1); /*0x411fe8*/
      LeaveCriticalSection(lpCriticalSectiona); /*0x411feb*/
      v19 = -(v18 != 0); /*0x411ff6*/
      LOBYTE(v19) = v19 & 0xF4; /*0x411ff9*/
      return v19 - 1; /*0x411ffc*/
    }
    LeaveCriticalSection(lpCriticalSectiona); /*0x411f73*/
    return -13; /*0x411f82*/
  }
  if ( !MEMORY[0x887778][188 * LockCount] || !MEMORY[0x887804][47 * LockCount] ) /*0x411e1e*/
    return -13; /*0x411e26*/
  EnterCriticalSection((LPCRITICAL_SECTION)(188 * LockCount + 8943640)); /*0x411e33*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v3 + 140) + 48))( /*0x411e48*/
         *(_DWORD *)(v3 + 140),
         0,
         0,
         1) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e87*/
    return -13; /*0x411e8d*/
  }
  else
  {
    *(_DWORD *)(v3 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v3 + 24); /*0x411e5d*/
    Debug::Log(); /*0x411e60*/
    v4 = *(_DWORD *)(v3 + 40); /*0x411e65*/
    LOBYTE(v4) = v4 & 0xFE; /*0x411e6b*/
    *(_DWORD *)(v3 + 40) = v4; /*0x411e6d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e74*/
    return -1; /*0x411e7a*/
  }
}
}
} // namespace gamemd

// 0x412000
namespace gamemd {
int SubmitDirectSoundBufferData(unsigned int a1, char * a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl SubmitDirectSoundBufferData(unsigned int a1, char *a2, char *a3)
{
  unsigned int v3; // edi
  char *v4; // ebx
  int v5; // ebp
  int *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  char *v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // esi
  char *v19; // edi
  char *v20; // esi
  char *v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char *v24; // edi
  char *v25; // esi
  char v26; // cl
  char v27; // al
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // esi
  struct _RTL_CRITICAL_SECTION *v35; // eax
  unsigned int v36; // [esp+38h] [ebp-18h] BYREF
  int v37; // [esp+3Ch] [ebp-14h]
  int v38; // [esp+40h] [ebp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+44h] [ebp-Ch]
  __int64 v40; // [esp+48h] [ebp-8h]

  v3 = a1; /*0x412007*/
  v4 = a2; /*0x41200b*/
  v5 = 188 * *(_DWORD *)(a1 + 52) + 8943480; /*0x41201c*/
  if ( !a2 || !a3 ) /*0x41202f*/
    return -13; /*0x41202f*/
  lpCriticalSection = (LPCRITICAL_SECTION)(188 * *(_DWORD *)(a1 + 52) + 8943640); /*0x41203c*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 160)); /*0x412040*/
  if ( v5 ) /*0x412048*/
  {
    v6 = *(int **)(v5 + 140); /*0x41204a*/
    if ( v6 ) /*0x412052*/
    {
      v40 = *(unsigned int *)(v5 + 4); /*0x41205f*/
      if ( *(float *)&MEMORY[0xA8EB9C] * 256.0 != (double)v40 ) /*0x41207a*/
      {
        v7 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 255.0); /*0x412088*/
        *(_DWORD *)(v5 + 4) = v7; /*0x41208f*/
        v8 = *v6; /*0x412092*/
        v9 = sub_40A900((unsigned __int8)v7); /*0x41209a*/
        (*(void (__stdcall **)(_DWORD, int))(v8 + 60))(*(_DWORD *)(v5 + 140), v9); /*0x4120a7*/
      }
    }
  }
  v10 = *(_DWORD *)(v5 + 64); /*0x4120aa*/
  v38 = v10; /*0x4120b2*/
  if ( *(_DWORD *)(v5 + 4 * v10 + 72) == 1 ) /*0x4120ba*/
  {
    LeaveCriticalSection(lpCriticalSection); /*0x4120c1*/
    return -13; /*0x4120d3*/
  }
  v12 = a3; /*0x4120d4*/
  *(_DWORD *)(v5 + 4 * v10 + 80) = v4; /*0x4120d8*/
  *(_DWORD *)(v5 + 4 * v10 + 88) = v12; /*0x4120dc*/
  *(_DWORD *)(v5 + 4 * v10 + 72) = 1; /*0x4120e0*/
  v13 = MEMORY[0x887804][47 * *(_DWORD *)(v3 + 52)]; /*0x4120ef*/
  v14 = 188 * *(_DWORD *)(v3 + 52) + 8943480; /*0x4120f8*/
  if ( v13 ) /*0x4120ff*/
  {
    v37 = *((_DWORD *)&MEMORY[0x887814] + 47 * *(_DWORD *)(v3 + 52)); /*0x41210d*/
    if ( !(*(int (__stdcall **)(int, int, _DWORD, char **, unsigned int *, char **, unsigned int *, _DWORD))(*(_DWORD *)v13 + 44))( /*0x412134*/
            v13,
            v37,
            *(_DWORD *)(v3 + 156),
            &a2,
            &a1,
            &a3,
            &v36,
            0) )
    {
      v15 = *(_DWORD *)(v14 + 64); /*0x41213f*/
      LODWORD(v40) = v15; /*0x412146*/
      v16 = *(_DWORD *)(v14 + 4 * v15 + 88); /*0x41214a*/
      if ( v16 <= a1 ) /*0x412150*/
      {
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x412199*/
        v19 = a2; /*0x41219d*/
      }
      else
      {
        qmemcpy(a2, *(const void **)(v14 + 4 * v15 + 80), a1); /*0x41215f*/
        v17 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x412174*/
        if ( v17 <= v36 ) /*0x412178*/
        {
          v20 = *(char **)(v14 + 4 * v15 + 80); /*0x412186*/
          v21 = a3; /*0x41218a*/
          v22 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x41218e*/
          v23 = v17 >> 2; /*0x412190*/
          qmemcpy(a3, v20, 4 * v23); /*0x412193*/
          v25 = &v20[4 * v23]; /*0x412193*/
          v24 = &v21[4 * v23]; /*0x412193*/
          v26 = v22; /*0x412195*/
LABEL_18:
          qmemcpy(v24, v25, v26 & 3); /*0x4121aa*/
          (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v14 + 140) + 76))( /*0x4121cc*/
            *(_DWORD *)(v14 + 140),
            a2,
            a1,
            a3,
            v36);
          v29 = v37; /*0x4121cf*/
          v30 = v40; /*0x4121d3*/
          *(_DWORD *)(v14 + 152) = v37; /*0x4121d7*/
          v31 = *(_DWORD *)(v14 + 4 * v30 + 88); /*0x4121dd*/
          v32 = *(_DWORD *)(v14 + 144); /*0x4121e1*/
          v33 = v31 + v29; /*0x4121e7*/
          *(_DWORD *)(v14 + 156) = v33; /*0x4121eb*/
          if ( v33 >= v32 ) /*0x4121f1*/
            *(_DWORD *)(v14 + 156) = 0; /*0x4121f3*/
          v10 = v38; /*0x4121fd*/
          goto LABEL_21; /*0x4121fd*/
        }
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x41217a*/
        v19 = a3; /*0x41217e*/
        v16 = v36; /*0x412182*/
      }
      v27 = v16; /*0x4121a1*/
      v28 = v16 >> 2; /*0x4121a3*/
      qmemcpy(v19, v18, 4 * v28); /*0x4121a6*/
      v25 = &v18[4 * v28]; /*0x4121a6*/
      v24 = &v19[4 * v28]; /*0x4121a6*/
      v26 = v27; /*0x4121a8*/
      goto LABEL_18; /*0x4121a8*/
    }
  }
LABEL_21:
  v34 = v10 + 1; /*0x412201*/
  if ( v34 >= 2 ) /*0x412205*/
    v34 = 0; /*0x412207*/
  v35 = lpCriticalSection; /*0x412209*/
  *(_DWORD *)(v5 + 64) = v34; /*0x41220d*/
  LeaveCriticalSection(v35); /*0x412211*/
  return -1; /*0x4120c7*/
}
}
} // namespace gamemd

// 0x4123A0
namespace gamemd {
void fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
  int v5; // eax
  int v6; // esi
  volatile LONG *v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // edi
  int v9; // eax
  char v10; // bl
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  char v14; // [esp+2Bh] [ebp-11h]
  _BYTE v15[4]; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+30h] [ebp-Ch] BYREF
  volatile LONG *lpAddend; // [esp+34h] [ebp-8h]
  _BYTE v18[4]; // [esp+38h] [ebp-4h] BYREF

  v14 = 0; /*0x4123ab*/
  v5 = *(_DWORD *)(dwUser + 52); /*0x4123b0*/
  v6 = 188 * v5 + 8943480; /*0x4123bb*/
  v7 = (volatile LONG *)(188 * v5 + 8943664); /*0x4123c2*/
  lpAddend = v7; /*0x4123c9*/
  if ( InterlockedIncrement(v7) != 1 || (*(_BYTE *)(v6 + 40) & 1) != 0 ) /*0x4123e0*/
    goto LABEL_21; /*0x4123e0*/
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x4123e6*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x4123f1*/
  v9 = *(_DWORD *)(v6 + 140); /*0x4123f7*/
  if ( !v9 /*0x412424*/
    || *(_DWORD *)(v6 + 96) != uTimerID
    || ((*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v9 + 36))(v9, v15), (v15[0] & 5) == 0) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x412529*/
LABEL_21:
    InterlockedDecrement(v7); /*0x41252f*/
    return; /*0x412530*/
  }
  v10 = 0; /*0x41243d*/
  if ( (*(int (__stdcall **)(_DWORD, unsigned int *, _BYTE *))(**(_DWORD **)(v6 + 140) + 16))( /*0x412447*/
         *(_DWORD *)(v6 + 140),
         &v16,
         v18) == -2005401450 )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 80))(*(_DWORD *)(v6 + 140)); /*0x412452*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 72))(*(_DWORD *)(v6 + 140)); /*0x41245e*/
    v10 = 1; /*0x412467*/
    v14 = 1; /*0x41246d*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 140) + 52))(*(_DWORD *)(v6 + 140), 0); /*0x412472*/
    *(_DWORD *)(v6 + 152) = 0; /*0x412475*/
    *(_DWORD *)(v6 + 156) = 0; /*0x41247b*/
  }
  v11 = *(_DWORD *)(v6 + 156); /*0x412483*/
  if ( v16 < v11 || v16 >= *(_DWORD *)(v6 + 144) >> 1 && !v11 || v10 == 1 ) /*0x4124a4*/
  {
    (*(void (__cdecl **)(DWORD_PTR, _DWORD))&MEMORY[0x87F8E4].__pad_5568[10532])( /*0x4124af*/
      dwUser,
      *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 68) + 80));
    v12 = *(_DWORD *)(v6 + 68); /*0x4124b5*/
    v13 = v12 + 1; /*0x4124c2*/
    ++*(_DWORD *)(v6 + 148); /*0x4124c5*/
    if ( v12 + 1 >= 2 ) /*0x4124ce*/
      v13 = 0; /*0x4124d0*/
    *(_DWORD *)(v6 + 4 * v12 + 72) = 0; /*0x4124d3*/
    (*(void (__cdecl **)(DWORD_PTR))&MEMORY[0x87F8E4].__pad_5568[10528])(dwUser); /*0x4124db*/
    if ( *(_DWORD *)(v6 + 4 * v13 + 72) ) /*0x4124e1*/
      *(_DWORD *)(v6 + 68) = v13; /*0x4124ec*/
    if ( v14 == 1 ) /*0x4124f4*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v6 + 140) + 48))( /*0x412505*/
        *(_DWORD *)(v6 + 140),
        0,
        0,
        1);
    v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x412508*/
  }
  LeaveCriticalSection(v8); /*0x41250d*/
  InterlockedDecrement(lpAddend); /*0x412518*/
}
}
} // namespace gamemd

// 0x412540
namespace gamemd {
int j_Time_GetElapsedMS()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
unsigned int j_Time_GetElapsedMS()
{
  return Time::GetElapsedMS();
}
}
} // namespace gamemd

// 0x412610
namespace gamemd {
int E4Recv_412610::sub_412610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_412610(char *this)
{
  char *v1; // edi
  int v2; // esi
  char v3; // al
  int v4; // esi

  v1 = this; /*0x412612*/
  v2 = 0; /*0x412614*/
  while ( v1 ) /*0x412618*/
  {
    if ( !isxdigit(*v1) ) /*0x41261e*/
      break; /*0x412628*/
    v3 = *v1; /*0x41262a*/
    v4 = 16 * v2; /*0x41262c*/
    ++v1; /*0x41262f*/
    if ( v3 < 48 || v3 > 57 ) /*0x412636*/
      v2 = v4 + toupper(v3) - 55; /*0x41264d*/
    else
      v2 = v4 + v3 - 48; /*0x41263b*/
  }
  return v2; /*0x412657*/
}
}
} // namespace gamemd

// 0x412660
namespace gamemd {
void sub_412660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_412660()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41266c*/
  MEMORY[0x887858] = Math::Sqrt(v0 + v0); /*0x41267e*/
}
}
} // namespace gamemd

// 0x412690
namespace gamemd {
void sub_412690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_412690()
{
  MEMORY[0x889E40] = MEMORY[0x887858] / 60.0; /*0x41269c*/
}
}
} // namespace gamemd

// 0x4126B0
namespace gamemd {
void sub_4126B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4126B0()
{
  MEMORY[0x889E28] = 1.0 / MEMORY[0x889E40]; /*0x4126bc*/
}
}
} // namespace gamemd

// 0x4126D0
namespace gamemd {
void sub_4126D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4126D0()
{
  MEMORY[0x889E20] = 0.0174532925199433 * 45.0; /*0x4126dc*/
}
}
} // namespace gamemd

// 0x4126F0
namespace gamemd {
void sub_4126F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4126F0()
{
  MEMORY[0x887860] = 0.0174532925199433 * 60.0; /*0x4126fc*/
}
}
} // namespace gamemd

// 0x412710
namespace gamemd {
void sub_412710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_412710()
{
  MEMORY[0x887838] = 0.0174532925199433 * 90.0; /*0x41271c*/
}
}
} // namespace gamemd

// 0x412730
namespace gamemd {
long long sub_412730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_412730()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887838] - MEMORY[0x887860]); /*0x412742*/
  result = Math::RoundToInt(v0 * MEMORY[0x887858] * 0.5); /*0x412756*/
  MEMORY[0x889E48] = result; /*0x41275b*/
  return result; /*0x412760*/
}
}
} // namespace gamemd

// 0x412770
namespace gamemd {
void sub_412770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_412770()
{
  MEMORY[0x887868] = Math::ArcTan((double)MEMORY[0x889E48] * 0.00390625); /*0x412787*/
}
}
} // namespace gamemd

// 0x4127A0
namespace gamemd {
void sub_4127A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4127A0()
{
  MEMORY[0x887880] = Math::ArcTan((double)(2 * MEMORY[0x889E48]) / MEMORY[0x887858]); /*0x4127c2*/
}
}
} // namespace gamemd

// 0x4127D0
namespace gamemd {
long long sub_4127D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4127D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889E48]) + 0.5); /*0x4127eb*/
  MEMORY[0x889E3C] = result; /*0x4127f0*/
  return result; /*0x4127f6*/
}
}
} // namespace gamemd

// 0x412800
namespace gamemd {
int sub_412800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_412800()
{
  MEMORY[0x887850] = 0; /*0x412802*/
  return 0; /*0x41280e*/
}
}
} // namespace gamemd

// 0x412810
namespace gamemd {
int sub_412810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_412810()
{
  MEMORY[0x887870] = 0; /*0x412812*/
  MEMORY[0x887874] = 0; /*0x412817*/
  MEMORY[0x887878] = 0; /*0x41281c*/
  return 0; /*0x412821*/
}
}
} // namespace gamemd

// 0x412830
namespace gamemd {
int sub_412830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_412830()
{
  MEMORY[0x889E38] = 0; /*0x412835*/
  MEMORY[0x889E30] = 128; /*0x41283f*/
  MEMORY[0x889E34] = 128; /*0x412844*/
  return 128; /*0x412849*/
}
}
} // namespace gamemd

// 0x412850
namespace gamemd {
int sub_412850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_412850()
{
  MEMORY[0x887840] = 0; /*0x412852*/
  MEMORY[0x887844] = 0; /*0x412857*/
  MEMORY[0x887848] = 0; /*0x41285c*/
  MEMORY[0x88784C] = 0; /*0x412861*/
  return 0; /*0x412866*/
}
}
} // namespace gamemd

// 0x412870
namespace gamemd {
int sub_412870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_412870()
{
  _DWORD *v0; // esi
  int v1; // edi

  v0 = MEMORY[0x887888]; /*0x412873*/
  v1 = 400; /*0x412878*/
  do /*0x41289c*/
  {
    EventClass::resetEvent(v0, 0, 0); /*0x412883*/
    *v0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x412888*/
    v0[5] = 10; /*0x41288e*/
    v0[4] = 0; /*0x412895*/
    v0 += 6; /*0x412898*/
    --v1; /*0x41289b*/
  }
  while ( v1 ); /*0x41289c*/
  MEMORY[0x889E0C] = 0; /*0x4128a3*/
  MEMORY[0x889E10] = 0; /*0x4128a9*/
  MEMORY[0x889E14] = 1; /*0x4128af*/
  MEMORY[0x889E15] = 0; /*0x4128b6*/
  MEMORY[0x889E08] = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4128bc*/
  MEMORY[0x889E1C] = 10; /*0x4128c6*/
  MEMORY[0x889E18] = 0; /*0x4128d0*/
  return atexit(sub_4128F0); /*0x4128de*/
}
}
} // namespace gamemd

// 0x4128F0
namespace gamemd {
void sub_4128F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4128F0()
{
  _DWORD *v0; // esi
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  void **v4; // esi
  int v5; // edi
  void *v6; // eax

  v0 = MEMORY[0x887888]; /*0x4128f4*/
  v1 = 400; /*0x4128f9*/
  do /*0x412917*/
  {
    v2 = v0[2]; /*0x412902*/
    (*(void (__thiscall **)(_DWORD *))(*v0 + 12))(v0); /*0x412907*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v0 + 8))(v0, v2, 0); /*0x412910*/
    v0 += 6; /*0x412913*/
    --v1; /*0x412916*/
  }
  while ( v1 ); /*0x412917*/
  v3 = MEMORY[0x889E10]; /*0x41291e*/
  (*(void (__thiscall **)(int *))(MEMORY[0x889E08] + 12))(&MEMORY[0x889E08]); /*0x412929*/
  (*(void (__thiscall **)(int *, int, _DWORD))(MEMORY[0x889E08] + 8))(&MEMORY[0x889E08], v3, 0); /*0x412939*/
  MEMORY[0x889E08] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x412948*/
  if ( MEMORY[0x889E0C] && MEMORY[0x889E15] ) /*0x412956*/
  {
    __3_YAXPAX_Z(MEMORY[0x889E0C]); /*0x412959*/
    MEMORY[0x889E0C] = 0; /*0x412961*/
  }
  MEMORY[0x889E15] = 0; /*0x412967*/
  MEMORY[0x889E10] = 0; /*0x41296d*/
  v4 = &MEMORY[0x889E0C]; /*0x412973*/
  v5 = 400; /*0x412978*/
  do /*0x4129a1*/
  {
    v6 = *(v4 - 6); /*0x41297d*/
    v4 -= 6; /*0x412980*/
    *(v4 - 1) = &VectorClass<TechnoClass *>::`vftable'; /*0x412985*/
    if ( v6 ) /*0x412988*/
    {
      if ( *((_BYTE *)v4 + 9) ) /*0x41298a*/
      {
        __3_YAXPAX_Z(v6); /*0x412990*/
        *v4 = 0; /*0x412998*/
      }
    }
    --v5; /*0x41299a*/
    *((_BYTE *)v4 + 9) = 0; /*0x41299b*/
    v4[1] = 0; /*0x41299e*/
  }
  while ( v5 ); /*0x4129a1*/
}
}
} // namespace gamemd

// 0x413AC0
namespace gamemd {
void sub_413AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413AC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x413acc*/
  MEMORY[0x889E70] = Math::Sqrt(v0 + v0); /*0x413ade*/
}
}
} // namespace gamemd

// 0x413AF0
namespace gamemd {
void sub_413AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413AF0()
{
  MEMORY[0x889EC0] = MEMORY[0x889E70] / 60.0; /*0x413afc*/
}
}
} // namespace gamemd

// 0x413B10
namespace gamemd {
void sub_413B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413B10()
{
  MEMORY[0x889EA8] = 1.0 / MEMORY[0x889EC0]; /*0x413b1c*/
}
}
} // namespace gamemd

// 0x413B30
namespace gamemd {
void sub_413B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413B30()
{
  MEMORY[0x889EA0] = 0.0174532925199433 * 45.0; /*0x413b3c*/
}
}
} // namespace gamemd

// 0x413B50
namespace gamemd {
void sub_413B50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413B50()
{
  MEMORY[0x889E78] = 0.0174532925199433 * 60.0; /*0x413b5c*/
}
}
} // namespace gamemd

// 0x413B70
namespace gamemd {
void sub_413B70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413B70()
{
  MEMORY[0x889E50] = 0.0174532925199433 * 90.0; /*0x413b7c*/
}
}
} // namespace gamemd

// 0x413B90
namespace gamemd {
long long sub_413B90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_413B90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x889E50] - MEMORY[0x889E78]); /*0x413ba2*/
  result = Math::RoundToInt(v0 * MEMORY[0x889E70] * 0.5); /*0x413bb6*/
  MEMORY[0x889EC8] = result; /*0x413bbb*/
  return result; /*0x413bc0*/
}
}
} // namespace gamemd

// 0x413BD0
namespace gamemd {
void sub_413BD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413BD0()
{
  MEMORY[0x889E80] = Math::ArcTan((double)MEMORY[0x889EC8] * 0.00390625); /*0x413be7*/
}
}
} // namespace gamemd

// 0x413C00
namespace gamemd {
void sub_413C00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_413C00()
{
  MEMORY[0x889E98] = Math::ArcTan((double)(2 * MEMORY[0x889EC8]) / MEMORY[0x889E70]); /*0x413c22*/
}
}
} // namespace gamemd

// 0x413C30
namespace gamemd {
long long sub_413C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_413C30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889EC8]) + 0.5); /*0x413c4b*/
  MEMORY[0x889EBC] = result; /*0x413c50*/
  return result; /*0x413c56*/
}
}
} // namespace gamemd

// 0x413C60
namespace gamemd {
int sub_413C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_413C60()
{
  MEMORY[0x889E68] = 0; /*0x413c62*/
  return 0; /*0x413c6e*/
}
}
} // namespace gamemd

// 0x413C70
namespace gamemd {
int sub_413C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_413C70()
{
  MEMORY[0x889E88] = 0; /*0x413c72*/
  MEMORY[0x889E8C] = 0; /*0x413c77*/
  MEMORY[0x889E90] = 0; /*0x413c7c*/
  return 0; /*0x413c81*/
}
}
} // namespace gamemd

// 0x413C90
namespace gamemd {
int sub_413C90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_413C90()
{
  MEMORY[0x889EB8] = 0; /*0x413c95*/
  MEMORY[0x889EB0] = 128; /*0x413c9f*/
  MEMORY[0x889EB4] = 128; /*0x413ca4*/
  return 128; /*0x413ca9*/
}
}
} // namespace gamemd

// 0x413CB0
namespace gamemd {
int sub_413CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_413CB0()
{
  MEMORY[0x889E58] = 0; /*0x413cb2*/
  MEMORY[0x889E5C] = 0; /*0x413cb7*/
  MEMORY[0x889E60] = 0; /*0x413cbc*/
  MEMORY[0x889E64] = 0; /*0x413cc1*/
  return 0; /*0x413cc6*/
}
}
} // namespace gamemd

// 0x413CD0
namespace gamemd {
bool sub_413CD0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_413CD0(int a1)
{
  int v2; // eax

  if ( !a1 ) /*0x413cd5*/
    return 0; /*0x413cd7*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
  if ( !v2 ) /*0x413ced*/
    return 0; /*0x413cef*/
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 1728) + 3777) ) /*0x413cf9*/
    return *(_BYTE *)(v2 + 1753) == 0; /*0x413d10*/
  return 0; /*0x413cd9*/
}
}
} // namespace gamemd

// 0x41B110
namespace gamemd {
int PlaceAircraftFromINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__usercall PlaceAircraftFromINI@<eax>(char *a1@<ecx>, int a2@<edi>)
{
  CCINIClass *result; // eax
  CCINIClass *v4; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v6; // eax
  INIClass *v7; // esi
  char *v8; // eax
  INIClass *v9; // edi
  AbstractClass *v10; // esi
  int v11; // eax
  FootClass *v12; // esi
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  CCINIClass *v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  CCINIClass *v20; // edi
  char *v21; // eax
  CCINIClass *v22; // ebx
  char *v23; // eax
  void *v24; // eax
  int v25; // eax
  char *v26; // eax
  CCINIClass *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int i; // [esp+Ch] [ebp-A4h]
  CCINIClass *v37; // [esp+14h] [ebp-9Ch]
  CCINIClass *v38; // [esp+18h] [ebp-98h]
  CCINIClass *v39; // [esp+20h] [ebp-90h]
  _DWORD v40[3]; // [esp+24h] [ebp-8Ch] BYREF
  INIClass String[2]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a1); /*0x41b119*/
  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_817460); /*0x41b126*/
  v4 = 0; /*0x41b12b*/
  v39 = result; /*0x41b12f*/
  for ( i = 0; i < (int)v39; ++i ) /*0x41b137*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, &stru_817460, v4); /*0x41b14a*/
    INIClass::GetString((unsigned __int8 ***)a1, (INIClass *)&stru_817460, StringByIndex, 0, String, 128); /*0x41b164*/
    v6 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x41b173*/
    v7 = (INIClass *)HouseClass::FindByName(v6); /*0x41b182*/
    if ( v7 != (INIClass *)-1 ) /*0x41b187*/
    {
      v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b194*/
      v9 = (INIClass *)TypeClass::FindByName(v8); /*0x41b1a3*/
      if ( v9 != (INIClass *)-1 ) /*0x41b1a8*/
      {
        v10 = *(AbstractClass **)&HouseClass_Array->__pad_0[4 * (_DWORD)v7]; /*0x41b1b9*/
        v11 = __2_YAPAXI_Z(0x6D8u); /*0x41b1bc*/
        if ( v11 ) /*0x41b1c6*/
        {
          v12 = (FootClass *)AircraftClass::Construct( /*0x41b1de*/
                               v11,
                               *(IUnknown **)&MEMORY[0xA8B21C]->__pad_0[4 * (_DWORD)v9],
                               v10);
          if ( v12 ) /*0x41b1e2*/
          {
            v13 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b1ef*/
            atoi(v13); /*0x41b1f5*/
            if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x41b210*/
            {
              v17 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b242*/
              v18 = atoi(v17); /*0x41b248*/
              LOWORD(v37) = v18 % 128; /*0x41b263*/
              HIWORD(v37) = v18 / 128; /*0x41b26d*/
              v16 = v37; /*0x41b272*/
            }
            else
            {
              v14 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b212*/
              LOWORD(v38) = atoi(v14); /*0x41b224*/
              v15 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b229*/
              HIWORD(v38) = atoi(v15); /*0x41b234*/
              v16 = v38; /*0x41b239*/
            }
            v40[0] = ((__int16)v16 << 8) + 128; /*0x41b29b*/
            v40[1] = (SHIWORD(v16) << 8) + 128; /*0x41b29f*/
            v40[2] = 0; /*0x41b2a3*/
            v19 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2a7*/
            v20 = (CCINIClass *)atoi(v19); /*0x41b2b9*/
            v21 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2bb*/
            v22 = (CCINIClass *)LookupWaypointName(v21); /*0x41b2ca*/
            v23 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2d3*/
            v24 = (void *)ObjectTypeClass::FindByName(v23); /*0x41b2dd*/
            if ( v24 ) /*0x41b2e4*/
            {
              v25 = TeamClass::FindOrCreate(v24); /*0x41b2e8*/
              if ( v25 ) /*0x41b2ef*/
                ObjectClass::SetReference(v12, v25); /*0x41b2f4*/
            }
            v26 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b300*/
            if ( v26 ) /*0x41b30a*/
            {
              v27 = (CCINIClass *)atoi(v26); /*0x41b30d*/
              FootClass::SetField((float *)&v12->initialOwner, v27); /*0x41b31c*/
            }
            v28 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b328*/
            if ( v28 ) /*0x41b332*/
              v12->displayProductionTo[0] = atoi(v28); /*0x41b33d*/
            v29 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b34a*/
            if ( v29 ) /*0x41b354*/
              v12->__pad_3F7[42] = atoi(v29) != 0; /*0x41b364*/
            v30 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b371*/
            if ( v30 ) /*0x41b37b*/
              v12->__pad_3F7[43] = atoi(v30) != 0; /*0x41b38b*/
            if ( (*(unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, CCINIClass *, int))(*(_DWORD *)v12->__pad_0 /*0x41b39b*/
                                                                                             + 216))(
                   v12,
                   v40,
                   v20,
                   a2) )
            {
              v31 = *(_DWORD *)&v12[1].__pad_0[4]; /*0x41b3a9*/
              v32 = Math::RoundToInt((double)(int)v39 * (double)*(int *)(v31 + 160) * 0.00390625); /*0x41b3bb*/
              v12->health = v32; /*0x41b3c0*/
              v33 = *(_DWORD *)(v31 + 160); /*0x41b3c3*/
              if ( v32 > v33 - 3 ) /*0x41b3ce*/
                v12->health = v33; /*0x41b3d0*/
              if ( !v12->health ) /*0x41b3d3*/
                v12->health = 1; /*0x41b3da*/
              v34 = *(_DWORD *)v12->__pad_0; /*0x41b3e4*/
              a2 = 0; /*0x41b3e6*/
              v12->estimatedHealth = v12->health; /*0x41b3eb*/
              (*(void (__thiscall **)(FootClass *, CCINIClass *))(v34 + 488))(v12, v22); /*0x41b3ee*/
              (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v12->__pad_0 + 492))(v12); /*0x41b3f8*/
            }
            else
            {
              a2 = 1; /*0x41b402*/
              (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v12->__pad_0 + 32))(v12); /*0x41b406*/
            }
          }
        }
      }
    }
    result = v39; /*0x41b40d*/
    v4 = (CCINIClass *)(i + 1); /*0x41b411*/
  }
  return result; /*0x41b421*/
}
}
} // namespace gamemd

// 0x41C610
namespace gamemd {
int CompareFunction(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x41c620*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x41C6A0
namespace gamemd {
void sub_41C6A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C6A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41c6ac*/
  MEMORY[0x889EF0] = Math::Sqrt(v0 + v0); /*0x41c6be*/
}
}
} // namespace gamemd

// 0x41C6D0
namespace gamemd {
void sub_41C6D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C6D0()
{
  MEMORY[0x889F50] = MEMORY[0x889EF0] / 60.0; /*0x41c6dc*/
}
}
} // namespace gamemd

// 0x41C6F0
namespace gamemd {
void sub_41C6F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C6F0()
{
  MEMORY[0x889F30] = 1.0 / MEMORY[0x889F50]; /*0x41c6fc*/
}
}
} // namespace gamemd

// 0x41C710
namespace gamemd {
void sub_41C710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C710()
{
  MEMORY[0x889F28] = 0.0174532925199433 * 45.0; /*0x41c71c*/
}
}
} // namespace gamemd

// 0x41C730
namespace gamemd {
void sub_41C730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C730()
{
  MEMORY[0x889EF8] = 0.0174532925199433 * 60.0; /*0x41c73c*/
}
}
} // namespace gamemd

// 0x41C750
namespace gamemd {
void sub_41C750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C750()
{
  MEMORY[0x889ED0] = 0.0174532925199433 * 90.0; /*0x41c75c*/
}
}
} // namespace gamemd

// 0x41C770
namespace gamemd {
long long sub_41C770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41C770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x889ED0] - MEMORY[0x889EF8]); /*0x41c782*/
  result = Math::RoundToInt(v0 * MEMORY[0x889EF0] * 0.5); /*0x41c796*/
  MEMORY[0x889F58] = result; /*0x41c79b*/
  return result; /*0x41c7a0*/
}
}
} // namespace gamemd

// 0x41C7B0
namespace gamemd {
void sub_41C7B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C7B0()
{
  MEMORY[0x889F00] = Math::ArcTan((double)MEMORY[0x889F58] * 0.00390625); /*0x41c7c7*/
}
}
} // namespace gamemd

// 0x41C7E0
namespace gamemd {
void sub_41C7E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41C7E0()
{
  MEMORY[0x889F18] = Math::ArcTan((double)(2 * MEMORY[0x889F58]) / MEMORY[0x889EF0]); /*0x41c802*/
}
}
} // namespace gamemd

// 0x41C810
namespace gamemd {
long long sub_41C810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41C810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889F58]) + 0.5); /*0x41c82b*/
  MEMORY[0x889F4C] = result; /*0x41c830*/
  return result; /*0x41c836*/
}
}
} // namespace gamemd

// 0x41C840
namespace gamemd {
int sub_41C840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41C840()
{
  MEMORY[0x889EE8] = 0; /*0x41c842*/
  MEMORY[0x889EEA] = 0; /*0x41c848*/
  return 0; /*0x41c84e*/
}
}
} // namespace gamemd

// 0x41C850
namespace gamemd {
int sub_41C850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41C850()
{
  MEMORY[0x889F08] = 0; /*0x41c852*/
  MEMORY[0x889F0C] = 0; /*0x41c857*/
  MEMORY[0x889F10] = 0; /*0x41c85c*/
  return 0; /*0x41c861*/
}
}
} // namespace gamemd

// 0x41C870
namespace gamemd {
int sub_41C870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41C870()
{
  MEMORY[0x889F48] = 0; /*0x41c875*/
  MEMORY[0x889F40] = 128; /*0x41c87f*/
  MEMORY[0x889F44] = 128; /*0x41c884*/
  return 128; /*0x41c889*/
}
}
} // namespace gamemd

// 0x41C890
namespace gamemd {
int sub_41C890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41C890()
{
  MEMORY[0x889ED8] = 0; /*0x41c892*/
  MEMORY[0x889EDC] = 0; /*0x41c897*/
  MEMORY[0x889EE0] = 0; /*0x41c89c*/
  MEMORY[0x889EE4] = 0; /*0x41c8a1*/
  return 0; /*0x41c8a6*/
}
}
} // namespace gamemd

// 0x41CAF0
namespace gamemd {
int sub_41CAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41CAF0()
{
  int result; // eax

  MEMORY[0x889F5C] = SearchMIXFile(MEMORY[0x817FE4], 0); /*0x41cb03*/
  result = SearchMIXFile(MEMORY[0x817FD8], 0); /*0x41cb08*/
  MEMORY[0x889F60] = result; /*0x41cb0d*/
  return result; /*0x41cb12*/
}
}
} // namespace gamemd

// 0x41D070
namespace gamemd {
void sub_41D070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41d07c*/
  MEMORY[0x889F88] = Math::Sqrt(v0 + v0); /*0x41d08e*/
}
}
} // namespace gamemd

// 0x41D0A0
namespace gamemd {
void sub_41D0A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D0A0()
{
  MEMORY[0x889FF0] = MEMORY[0x889F88] / 60.0; /*0x41d0ac*/
}
}
} // namespace gamemd

// 0x41D0C0
namespace gamemd {
void sub_41D0C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D0C0()
{
  MEMORY[0x889FD8] = 1.0 / MEMORY[0x889FF0]; /*0x41d0cc*/
}
}
} // namespace gamemd

// 0x41D0E0
namespace gamemd {
void sub_41D0E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D0E0()
{
  MEMORY[0x889FD0] = 0.0174532925199433 * 45.0; /*0x41d0ec*/
}
}
} // namespace gamemd

// 0x41D100
namespace gamemd {
void sub_41D100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D100()
{
  MEMORY[0x889F90] = 0.0174532925199433 * 60.0; /*0x41d10c*/
}
}
} // namespace gamemd

// 0x41D120
namespace gamemd {
void sub_41D120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D120()
{
  *(double *)(&MEMORY[0x889F64] + 4) = 0.0174532925199433 * 90.0; /*0x41d12c*/
}
}
} // namespace gamemd

// 0x41D140
namespace gamemd {
long long sub_41D140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41D140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)(&MEMORY[0x889F64] + 4) - MEMORY[0x889F90]); /*0x41d152*/
  result = Math::RoundToInt(v0 * MEMORY[0x889F88] * 0.5); /*0x41d166*/
  MEMORY[0x889FF8] = result; /*0x41d16b*/
  return result; /*0x41d170*/
}
}
} // namespace gamemd

// 0x41D180
namespace gamemd {
void sub_41D180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D180()
{
  MEMORY[0x889F98] = Math::ArcTan((double)MEMORY[0x889FF8] * 0.00390625); /*0x41d197*/
}
}
} // namespace gamemd

// 0x41D1B0
namespace gamemd {
void sub_41D1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41D1B0()
{
  MEMORY[0x889FB0] = Math::ArcTan((double)(2 * MEMORY[0x889FF8]) / MEMORY[0x889F88]); /*0x41d1d2*/
}
}
} // namespace gamemd

// 0x41D1E0
namespace gamemd {
long long sub_41D1E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41D1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889FF8]) + 0.5); /*0x41d1fb*/
  MEMORY[0x889FEC] = result; /*0x41d200*/
  return result; /*0x41d206*/
}
}
} // namespace gamemd

// 0x41D210
namespace gamemd {
int sub_41D210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41D210()
{
  *((_DWORD *)&MEMORY[0x889F64] + 7) = 0; /*0x41d212*/
  return 0; /*0x41d21e*/
}
}
} // namespace gamemd

// 0x41D220
namespace gamemd {
int sub_41D220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41D220()
{
  MEMORY[0x889FA0] = 0; /*0x41d222*/
  MEMORY[0x889FA4] = 0; /*0x41d227*/
  MEMORY[0x889FA8] = 0; /*0x41d22c*/
  return 0; /*0x41d231*/
}
}
} // namespace gamemd

// 0x41D240
namespace gamemd {
int sub_41D240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41D240()
{
  MEMORY[0x889FE8] = 0; /*0x41d245*/
  MEMORY[0x889FE0] = 128; /*0x41d24f*/
  MEMORY[0x889FE4] = 128; /*0x41d254*/
  return 128; /*0x41d259*/
}
}
} // namespace gamemd

// 0x41D260
namespace gamemd {
int sub_41D260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41D260()
{
  *(_QWORD *)(&MEMORY[0x889F64] + 12) = 0; /*0x41d262*/
  *(_QWORD *)(&MEMORY[0x889F64] + 20) = 0; /*0x41d26c*/
  return 0; /*0x41d276*/
}
}
} // namespace gamemd

// 0x41D280
namespace gamemd {
int sub_41D280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41D280()
{
  MEMORY[0x889FBC] = 0; /*0x41d287*/
  MEMORY[0x889FC0] = 0; /*0x41d28c*/
  MEMORY[0x889FC4] = 1; /*0x41d291*/
  MEMORY[0x889FC5] = 0; /*0x41d298*/
  MEMORY[0x889FB8] = (int)&DynamicVectorClass<AirstrikeClass *>::`vftable'; /*0x41d29d*/
  MEMORY[0x889FCC] = 10; /*0x41d2a7*/
  MEMORY[0x889FC8] = 0; /*0x41d2b1*/
  return atexit(sub_41D2C0); /*0x41d2bc*/
}
}
} // namespace gamemd

// 0x41D2C0
namespace gamemd {
void sub_41D2C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_41D2C0()
{
  MEMORY[0x889FB8] = (int)&VectorClass<AirstrikeClass *>::`vftable'; /*0x41d2c8*/
  if ( MEMORY[0x889FBC] && MEMORY[0x889FC5] ) /*0x41d2dc*/
  {
    __3_YAXPAX_Z(MEMORY[0x889FBC]); /*0x41d2df*/
    MEMORY[0x889FBC] = 0; /*0x41d2e7*/
  }
  MEMORY[0x889FC5] = 0; /*0x41d2ed*/
  MEMORY[0x889FC0] = 0; /*0x41d2f3*/
}
}
} // namespace gamemd

// 0x41DD10
namespace gamemd {
char E4Recv_41DD10::sub_41DD10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_41DD10(int this)
{
  this->M64 = MEMORY[0xA8ED84]; /*0x41dd15*/
  *(_BYTE *)(this + 60) = 0; /*0x41dd1a*/
  *(_BYTE *)(this + 61) = 0; /*0x41dd1d*/
  return 0; /*0x41dd20*/
}
}
} // namespace gamemd

// 0x41E140
namespace gamemd {
int sub_41E140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41E140()
{
  MEMORY[0x88A008] = 0; /*0x41e142*/
  MEMORY[0x88A00C] = 0; /*0x41e147*/
  MEMORY[0x88A010] = 0; /*0x41e14c*/
  MEMORY[0x88A014] = 0; /*0x41e151*/
  return 0; /*0x41e156*/
}
}
} // namespace gamemd

// 0x41E160
namespace gamemd {
void sub_41E160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41e16c*/
  MEMORY[0x88A020] = Math::Sqrt(v0 + v0); /*0x41e17e*/
}
}
} // namespace gamemd

// 0x41E190
namespace gamemd {
void sub_41E190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E190()
{
  MEMORY[0x88A070] = MEMORY[0x88A020] / 60.0; /*0x41e19c*/
}
}
} // namespace gamemd

// 0x41E1B0
namespace gamemd {
void sub_41E1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E1B0()
{
  MEMORY[0x88A058] = 1.0 / MEMORY[0x88A070]; /*0x41e1bc*/
}
}
} // namespace gamemd

// 0x41E1D0
namespace gamemd {
void sub_41E1D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E1D0()
{
  MEMORY[0x88A050] = 0.0174532925199433 * 45.0; /*0x41e1dc*/
}
}
} // namespace gamemd

// 0x41E1F0
namespace gamemd {
void sub_41E1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E1F0()
{
  MEMORY[0x88A028] = 0.0174532925199433 * 60.0; /*0x41e1fc*/
}
}
} // namespace gamemd

// 0x41E210
namespace gamemd {
void sub_41E210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E210()
{
  MEMORY[0x88A000] = 0.0174532925199433 * 90.0; /*0x41e21c*/
}
}
} // namespace gamemd

// 0x41E230
namespace gamemd {
long long sub_41E230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41E230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x88A000] - MEMORY[0x88A028]); /*0x41e242*/
  result = Math::RoundToInt(v0 * MEMORY[0x88A020] * 0.5); /*0x41e256*/
  MEMORY[0x88A078] = result; /*0x41e25b*/
  return result; /*0x41e260*/
}
}
} // namespace gamemd

// 0x41E270
namespace gamemd {
void sub_41E270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E270()
{
  MEMORY[0x88A030] = Math::ArcTan((double)MEMORY[0x88A078] * 0.00390625); /*0x41e287*/
}
}
} // namespace gamemd

// 0x41E2A0
namespace gamemd {
void sub_41E2A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_41E2A0()
{
  MEMORY[0x88A048] = Math::ArcTan((double)(2 * MEMORY[0x88A078]) / MEMORY[0x88A020]); /*0x41e2c2*/
}
}
} // namespace gamemd

// 0x41E2D0
namespace gamemd {
long long sub_41E2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_41E2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x88A078]) + 0.5); /*0x41e2eb*/
  MEMORY[0x88A06C] = result; /*0x41e2f0*/
  return result; /*0x41e2f6*/
}
}
} // namespace gamemd

// 0x41E300
namespace gamemd {
int sub_41E300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41E300()
{
  MEMORY[0x88A018] = 0; /*0x41e302*/
  MEMORY[0x88A01A] = 0; /*0x41e308*/
  return 0; /*0x41e30e*/
}
}
} // namespace gamemd

// 0x41E310
namespace gamemd {
int sub_41E310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41E310()
{
  MEMORY[0x88A038] = 0; /*0x41e312*/
  MEMORY[0x88A03C] = 0; /*0x41e317*/
  MEMORY[0x88A040] = 0; /*0x41e31c*/
  return 0; /*0x41e321*/
}
}
} // namespace gamemd

// 0x41E330
namespace gamemd {
int sub_41E330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_41E330()
{
  MEMORY[0x88A068] = 0; /*0x41e335*/
  MEMORY[0x88A060] = 128; /*0x41e33f*/
  MEMORY[0x88A064] = 128; /*0x41e344*/
  return 128; /*0x41e349*/
}
}
} // namespace gamemd

// 0x41FD30
namespace gamemd {
int E4Recv_41FD30::sub_41FD30(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_41FD30(_DWORD *this, int a2)
{
  *(this + 54) = a2; /*0x41fd34*/
  return a2; /*0x41fd3a*/
}
}
} // namespace gamemd

// 0x41FD40
namespace gamemd {
int E4Recv_41FD40::sub_41FD40(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_41FD40(_DWORD *this, int a2)
{
  *(this + 55) = a2; /*0x41fd44*/
  return a2; /*0x41fd4a*/
}
}
} // namespace gamemd

// 0x41FD50
namespace gamemd {
int E4Recv_41FD50::sub_41FD50(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_41FD50(_DWORD *this, int a2)
{
  *(this + 56) = a2; /*0x41fd54*/
  return a2; /*0x41fd5a*/
}
}
} // namespace gamemd

// 0x41FEE0
namespace gamemd {
bool globalHelper_01FEE0(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall globalHelper_01FEE0(IUnknown *aP0, _DWORD *a1, _DWORD *a2)
{
  IUnknown *v3; // edi
  AbstractClass *v4; // esi
  ObjectClass *CurrentOption; // eax
  MouseClass *v6; // esi
  int v7; // edi
  MouseClass *v8; // esi
  MouseClass *TileIndex; // edi

  v3 = aP0; /*0x41fee2*/
  if ( aP0->__pad_EC[4] ) /*0x41fee6*/
  {
    v4 = (AbstractClass *)a2; /*0x41fef4*/
    if ( a2 ) /*0x41fefa*/
    {
      a2 = *(_DWORD **)HouseClass::GetCurrentOption(a1, (IUnknown *)&a1)->__pad_0; /*0x41ff14*/
      CurrentOption = HouseClass::GetCurrentOption(v4, (IUnknown *)&a1); /*0x41ff1b*/
      v6 = *(MouseClass **)v3->__pad_EC; /*0x41ff22*/
      aP0 = *(IUnknown **)CurrentOption->__pad_0; /*0x41ff28*/
      if ( !v3->__pad_EC[5] ) /*0x41ff37*/
      {
        TileIndex = (MouseClass *)MapClass::GetTileIndex( /*0x41ffa2*/
                                    &stru_87C374.__pad_14B0[8132],
                                    (IUnknown *)&aP0,
                                    (IUnknown *)v6,
                                    0);
        return MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == (_DWORD)TileIndex; /*0x41ffbd*/
      }
      v7 = MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)v6, 0); /*0x41ff55*/
      if ( MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == v7 ) /*0x41ff5e*/
        return 0; /*0x41ff5e*/
      v8 = (MouseClass *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)5, 0); /*0x41ff81*/
      if ( (MouseClass *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)5, 0) != v8 ) /*0x41ff8a*/
        return 0; /*0x41ff90*/
    }
  }
  return 1; /*0x41ff8c*/
}
}
} // namespace gamemd

// 0x4125F0
namespace gamemd {
int sub_4125F0()
{
return 1;
}
} // namespace gamemd

// 0x412600
namespace gamemd {
int sub_412600()
{
return 1;
}
} // namespace gamemd

// 0x413490
namespace gamemd {
void nullsub_3(AbstractClass * aP0)
{
  ;
}
} // namespace gamemd

// 0x413590
namespace gamemd {
int sub_413590()
{
return 750;
}
} // namespace gamemd

// 0x414A10
namespace gamemd {
void nullsub_71(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x41CBD0
namespace gamemd {
void nullsub_85()
{
  ;
}
} // namespace gamemd
