// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_410DC0_e4.hpp"
#include "e4/classes/E4Recv_412610_e4.hpp"
#include "e4/classes/E4Recv_41DD10_e4.hpp"
#include "e4/classes/E4Recv_41FD30_e4.hpp"
#include "e4/classes/E4Recv_41FD40_e4.hpp"
#include "e4/classes/E4Recv_41FD50_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4116A0
namespace gamemd {
int sub_4116A0(unsigned int a1)
{
{
  int result; // eax

  unsigned int v1 = a1; /*0x4116a5*/
  int v2 = *(_DWORD *)(a1 + 52); /*0x4116a9*/
  int v3 = 188 * v2 + 8943480; /*0x4116bd*/
  if ( (DataGlobal_8877A0[47 * v2] & 1) != 0 ) /*0x4116c4*/
  {
    Debug::Log(); /*0x4116cf*/
    return *(_DWORD *)(v3 + 32); /*0x4116df*/
  }
  unsigned int v5 = Time::GetElapsedMS() - *((_DWORD *)&DataGlobal_887794 + 47 * v2); /*0x4116f2*/
  unsigned int v17 = *(_DWORD *)(v3 + 144); /*0x4116f4*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x4116ff*/
  int v6 = *(_DWORD *)(v3 + 140); /*0x41170b*/
  unsigned int v7 = *(_DWORD *)(v1 + 156) * *(_DWORD *)(v3 + 148); /*0x41171a*/
  int v18 = *(_DWORD *)(v1 + 56); /*0x411723*/
  int v16 = *(_DWORD *)(v3 + 152); /*0x411727*/
  _BYTE v19[4]; // [esp+18h] [ebp-4h] BYREF
  if ( v6 && !(*(int (__stdcall **)(int, unsigned int *, _BYTE *))(*(_DWORD *)v6 + 16))(v6, &a1, v19) ) /*0x41173a*/
  {
  unsigned int v8; // eax
    if ( v16 ) /*0x411747*/
    {
      v8 = a1; /*0x411749*/
LABEL_11:
      v7 += v8; /*0x411769*/
      goto LABEL_12; /*0x411769*/
    }
    unsigned int v9 = v17 >> 1; /*0x411757*/
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
  int v10 = v18 * *(_DWORD *)(v1 + 156); /*0x411780*/
  unsigned int v11 = v7 - v10; /*0x411785*/
  if ( v7 - v10 > v7 ) /*0x411789*/
  {
    v11 = 0; /*0x41178b*/
LABEL_14:
    *(_DWORD *)(v3 + 20) = v11; /*0x41178d*/
    *(_DWORD *)(v3 + 24) = v5; /*0x411792*/
  unsigned int v12; // eax
    v12 = 60 /*0x4117ba*/
        * (v11
         / (*(unsigned __int8 *)(v1 + 62)
          * (*(unsigned __int8 *)(v1 + 63) >> 3)))
        / *(unsigned __int16 *)(v1 + 60);
    *(_DWORD *)(v3 + 32) = v12; /*0x4117bc*/
    unsigned int v13 = *(_DWORD *)(v1 + 196); /*0x4117bf*/
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
  unsigned int v14 = *(_DWORD *)(v3 + 24); /*0x4117df*/
  if ( v5 > v14 ) /*0x4117e4*/
  {
    *(_DWORD *)(v3 + 24) = v5; /*0x4117e8*/
    int v15 = v5 - v14 + *(_DWORD *)(v3 + 32); /*0x4117f0*/
    *(_DWORD *)(v3 + 32) = v15; /*0x4117f4*/
    return v15; /*0x4117fe*/
  }
  return *(_DWORD *)(v3 + 32); /*0x4116da*/
}
} // namespace gamemd
}

// 0x411820
namespace gamemd {
int ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION * dwUser, int a2, int a3, int a4)
{
{
  int result; // eax
  LONG LockCount; // eax
  LONG v8; // eax
  struct _RTL_CRITICAL_SECTION *v10; // edi
  LONG v12; // eax
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
      int v6 = 188 * LockCount + 8943480; /*0x411894*/
      if ( DataGlobal_887778[188 * LockCount] == 1 ) /*0x41189b*/
      {
        if ( DataGlobal_887804[47 * LockCount] ) /*0x4118a1*/
        {
          Debug::Log(); /*0x4118b2*/
          int v7 = 188 * dwUser[2].LockCount + 8943480; /*0x4118ce*/
          if ( DataGlobal_887804[47 * dwUser[2].LockCount] ) /*0x4118c5*/
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
      int v9 = 188 * v8 + 8943480; /*0x4119b7*/
      v10 = (struct _RTL_CRITICAL_SECTION *)(188 * v8 + 8943640); /*0x4119be*/
      EnterCriticalSection(v10); /*0x4119c5*/
      if ( *(_BYTE *)v9 == 1 ) /*0x4119ce*/
      {
        int v11 = *(_DWORD *)(v9 + 140); /*0x4119d0*/
        if ( v11 ) /*0x4119d8*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11 + 72))(*(_DWORD *)(v9 + 140)); /*0x4119dd*/
      }
      *(_DWORD *)(v9 + 40) |= 1u; /*0x4119e7*/
      LeaveCriticalSection(v10); /*0x4119ea*/
      result = -1; /*0x4119f3*/
      break; /*0x4119f7*/
    case 7: /*0x411835*/
      int v15 = 188 * dwUser[2].LockCount + 8943480; /*0x411aad*/
      if ( DataGlobal_887804[47 * dwUser[2].LockCount] ) /*0x411aa4*/
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
      int v13 = 188 * v12 + 8943480; /*0x411a12*/
      if ( DataGlobal_887778[188 * v12] && DataGlobal_887804[47 * v12] ) /*0x411a1b*/
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
          int v14 = *(_DWORD *)(v13 + 40); /*0x411a5a*/
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
} // namespace gamemd
}

// 0x411B20
namespace gamemd {
AbstractClass * * sub_411B20(DWORD_PTR dwUser, AnimClass * aP1, int a3)
{
{
  LPDIRECTSOUND DirectSound; // [esp+8h] [ebp-64h]

  DirectSound = Audio::GetDirectSound(); /*0x411b2f*/
  Debug::Log(); /*0x411b33*/
  GetCurrentThreadId(); /*0x411b3b*/
  Debug::Log(); /*0x411b47*/
  if ( !Audio::IsSoundEnabled() ) /*0x411b4f*/
    return -13; /*0x411b4f*/
  int v3 = 0; /*0x411b5c*/
  char * v4 = &stru_87C374[46084]; /*0x411b5e*/
  do /*0x411b75*/
  {
    if ( !*v4 ) /*0x411b63*/
      break; /*0x411b66*/
    v4 += 188; /*0x411b68*/
    ++v3; /*0x411b6e*/
  }
  while ( (int)v4 < (int)&stru_87C374[46272] ); /*0x411b75*/
  if ( v3 == 1 || a3 != 16 ) /*0x411b85*/
    return -13; /*0x411b85*/
  *(_DWORD *)(dwUser + 52) = v3; /*0x411b99*/
  _BYTE * v5 = (_BYTE *)(188 * v3 + 8943480); /*0x411b9c*/
  memset(v5, 0, 0xBCu); /*0x411bac*/
  *v5 = 1; /*0x411bae*/
  *((_DWORD *)v5 + 1) = *(_DWORD *)(dwUser + 164); /*0x411bbd*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(188 * v3 + 8943640)); /*0x411bc1*/
  int v6 = *(_DWORD *)(dwUser + 160); /*0x411bc7*/
  if ( v6 == -1 )
  {
    int v7 = *(_DWORD *)(dwUser + 112); /*0x411bdf*/
    unsigned int v8 = *(unsigned __int16 *)(dwUser + 14); /*0x411be4*/
    *((_WORD *)v5 + 4) = v7 == (unsigned __int16)v8
                       ? LOWORD(aP1->field_0)
                       : v7 * (unsigned int)LOWORD(aP1->field_0) / v8;
  }
  else
  {
    *((_WORD *)v5 + 4) = v6; /*0x411bd9*/
  }
  _DWORD v11[24]; // [esp+Ch] [ebp-60h] BYREF
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
  *(_DWORD *)&stru_87C374[46072] = aP1->field_8; /*0x411c6c*/
  *(_DWORD *)&stru_87C374[46076] = *(_DWORD *)aP1->__pad_C; /*0x411c75*/
  Debug::Log(); /*0x411c7b*/
  if ( timeBeginPeriod(0x10u) == 97 ) /*0x411c90*/
    return -13; /*0x411cd5*/
  Debug::Log(); /*0x411c97*/
  *((_DWORD *)v5 + 24) = timeSetEvent(0x10u, 1u, fptc, dwUser, 1u); /*0x411cb6*/
  Debug::Log(); /*0x411cb9*/
  return *((_DWORD *)v5 + 24) != 0 ? -1 : -13;
}
} // namespace gamemd
}

// 0x411DF0
namespace gamemd {
void InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
{
  LONG LockCount; // eax
  int **v7; // edi
  unsigned __int16 v8; // ax
  __int16 v9; // dx
  unsigned __int16 v11; // ax
  LPDIRECTSOUND DirectSoundAudio; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSectiona; // [esp+38h] [ebp+4h]

  LockCount = lpCriticalSection[2].LockCount; /*0x411df7*/
  int v3 = 188 * LockCount + 8943480; /*0x411e0c*/
  if ( (DataGlobal_8877A0[47 * LockCount] & 1) == 0 ) /*0x411e13*/
  {
    lpCriticalSectiona = (struct _RTL_CRITICAL_SECTION *)(188 * LockCount + 8943640); /*0x411e9b*/
    EnterCriticalSection(lpCriticalSectiona); /*0x411e9f*/
    int v6 = *(_DWORD *)(v3 + 140); /*0x411ea5*/
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
    int v10 = *(unsigned __int16 *)(v3 + 8); /*0x411f30*/
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
      DataGlobal_88776C(lpCriticalSection); /*0x411f84*/
      DataGlobal_88776C(lpCriticalSection); /*0x411f8b*/
      int * v13 = *v7; /*0x411f91*/
      *(_DWORD *)(v3 + 68) = 0; /*0x411f96*/
      *(_DWORD *)(v3 + 156) = 0; /*0x411f99*/
      *(_DWORD *)(v3 + 148) = 0; /*0x411f9f*/
      (*(void (__stdcall **)(int *, _DWORD))(*v13 + 52))(v13, 0); /*0x411fa9*/
      int v14 = Math::RoundToInt(*(float *)&DataGlobal_A8EB9C * 255.0); /*0x411fb8*/
      int * v15 = *v7; /*0x411fbd*/
      *(_DWORD *)(v3 + 4) = v14; /*0x411fc1*/
      int v16 = *v15; /*0x411fca*/
      int v17 = sub_40A900((unsigned __int8)v14); /*0x411fcc*/
      (*(void (__stdcall **)(int *, int))(v16 + 60))(*v7, v17); /*0x411fd5*/
      int v18 = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(**v7 + 48))(*v7, 0, 0, 1); /*0x411fe8*/
      LeaveCriticalSection(lpCriticalSectiona); /*0x411feb*/
      int v19 = -(v18 != 0); /*0x411ff6*/
      LOBYTE(v19) = v19 & 0xF4; /*0x411ff9*/
      return v19 - 1; /*0x411ffc*/
    }
    LeaveCriticalSection(lpCriticalSectiona); /*0x411f73*/
    return -13; /*0x411f82*/
  }
  if ( !DataGlobal_887778[188 * LockCount] || !DataGlobal_887804[47 * LockCount] ) /*0x411e1e*/
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
    int v4 = *(_DWORD *)(v3 + 40); /*0x411e65*/
    LOBYTE(v4) = v4 & 0xFE; /*0x411e6b*/
    *(_DWORD *)(v3 + 40) = v4; /*0x411e6d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e74*/
    return -1; /*0x411e7a*/
  }
}
} // namespace gamemd
}

// 0x412000
namespace gamemd {
void SubmitDirectSoundBufferData(unsigned int a1, char * a2, char * a3)
{
{
  struct _RTL_CRITICAL_SECTION *v35; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [esp+44h] [ebp-Ch]
  __int64 v40; // [esp+48h] [ebp-8h]
  unsigned int v3 = a1; /*0x412007*/
  char * v4 = a2; /*0x41200b*/
  int v5 = 188 * *(_DWORD *)(a1 + 52) + 8943480; /*0x41201c*/
  if ( !a2 || !a3 ) /*0x41202f*/
    return -13; /*0x41202f*/
  lpCriticalSection = (LPCRITICAL_SECTION)(188 * *(_DWORD *)(a1 + 52) + 8943640); /*0x41203c*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 160)); /*0x412040*/
  if ( v5 ) /*0x412048*/
  {
    int * v6 = *(int **)(v5 + 140); /*0x41204a*/
    if ( v6 ) /*0x412052*/
    {
      v40 = *(unsigned int *)(v5 + 4); /*0x41205f*/
      if ( *(float *)&DataGlobal_A8EB9C * 256.0 != (double)v40 ) /*0x41207a*/
      {
        int v7 = Math::RoundToInt(*(float *)&DataGlobal_A8EB9C * 255.0); /*0x412088*/
        *(_DWORD *)(v5 + 4) = v7; /*0x41208f*/
        int v8 = *v6; /*0x412092*/
        int v9 = sub_40A900((unsigned __int8)v7); /*0x41209a*/
        (*(void (__stdcall **)(_DWORD, int))(v8 + 60))(*(_DWORD *)(v5 + 140), v9); /*0x4120a7*/
      }
    }
  }
  int v10 = *(_DWORD *)(v5 + 64); /*0x4120aa*/
  int v38 = v10; /*0x4120b2*/
  if ( *(_DWORD *)(v5 + 4 * v10 + 72) == 1 ) /*0x4120ba*/
  {
    LeaveCriticalSection(lpCriticalSection); /*0x4120c1*/
    return -13; /*0x4120d3*/
  }
  char * v12 = a3; /*0x4120d4*/
  *(_DWORD *)(v5 + 4 * v10 + 80) = v4; /*0x4120d8*/
  *(_DWORD *)(v5 + 4 * v10 + 88) = v12; /*0x4120dc*/
  *(_DWORD *)(v5 + 4 * v10 + 72) = 1; /*0x4120e0*/
  int v13 = DataGlobal_887804[47 * *(_DWORD *)(v3 + 52)]; /*0x4120ef*/
  int v14 = 188 * *(_DWORD *)(v3 + 52) + 8943480; /*0x4120f8*/
  if ( v13 ) /*0x4120ff*/
  {
    int v37 = *((_DWORD *)&DataGlobal_887814 + 47 * *(_DWORD *)(v3 + 52)); /*0x41210d*/
    if ( !(*(int (__stdcall **)(int, int, _DWORD, char **, unsigned int *, char **, unsigned int *, _DWORD))(*(_DWORD *)v13 + 44))( /*0x412134*/
            v13,
            v37,
            *(_DWORD *)(v3 + 156),
            &a2,
            &a1,
            &a3,
  unsigned int v36; // [esp+38h] [ebp-18h] BYREF
            &v36,
            0) )
    {
  char v26; // cl
  char *v25; // esi
  char *v24; // edi
  char *v19; // edi
  char *v18; // esi
      int v15 = *(_DWORD *)(v14 + 64); /*0x41213f*/
      LODWORD(v40) = v15; /*0x412146*/
      unsigned int v16 = *(_DWORD *)(v14 + 4 * v15 + 88); /*0x41214a*/
      if ( v16 <= a1 ) /*0x412150*/
      {
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x412199*/
        v19 = a2; /*0x41219d*/
      }
      else
      {
        qmemcpy(a2, *(const void **)(v14 + 4 * v15 + 80), a1); /*0x41215f*/
        unsigned int v17 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x412174*/
        if ( v17 <= v36 ) /*0x412178*/
        {
          char * v20 = *(char **)(v14 + 4 * v15 + 80); /*0x412186*/
          char * v21 = a3; /*0x41218a*/
          unsigned int v22 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x41218e*/
          unsigned int v23 = v17 >> 2; /*0x412190*/
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
          int v29 = v37; /*0x4121cf*/
          int v30 = v40; /*0x4121d3*/
          *(_DWORD *)(v14 + 152) = v37; /*0x4121d7*/
          int v31 = *(_DWORD *)(v14 + 4 * v30 + 88); /*0x4121dd*/
          unsigned int v32 = *(_DWORD *)(v14 + 144); /*0x4121e1*/
          unsigned int v33 = v31 + v29; /*0x4121e7*/
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
      char v27 = v16; /*0x4121a1*/
      unsigned int v28 = v16 >> 2; /*0x4121a3*/
      qmemcpy(v19, v18, 4 * v28); /*0x4121a6*/
      v25 = &v18[4 * v28]; /*0x4121a6*/
      v24 = &v19[4 * v28]; /*0x4121a6*/
      v26 = v27; /*0x4121a8*/
      goto LABEL_18; /*0x4121a8*/
    }
  }
LABEL_21:
  int v34 = v10 + 1; /*0x412201*/
  if ( v34 >= 2 ) /*0x412205*/
    v34 = 0; /*0x412207*/
  v35 = lpCriticalSection; /*0x412209*/
  *(_DWORD *)(v5 + 64) = v34; /*0x41220d*/
  LeaveCriticalSection(v35); /*0x412211*/
  return -1; /*0x4120c7*/
}
} // namespace gamemd
}

// 0x4123A0
namespace gamemd {
void fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
{
  volatile LONG *v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // edi
  volatile LONG *lpAddend; // [esp+34h] [ebp-8h]

  char v14 = 0; /*0x4123ab*/
  int v5 = *(_DWORD *)(dwUser + 52); /*0x4123b0*/
  int v6 = 188 * v5 + 8943480; /*0x4123bb*/
  v7 = (volatile LONG *)(188 * v5 + 8943664); /*0x4123c2*/
  lpAddend = v7; /*0x4123c9*/
  if ( InterlockedIncrement(v7) != 1 || (*(_BYTE *)(v6 + 40) & 1) != 0 ) /*0x4123e0*/
    goto LABEL_21; /*0x4123e0*/
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x4123e6*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x4123f1*/
  int v9 = *(_DWORD *)(v6 + 140); /*0x4123f7*/
  if ( !v9 /*0x412424*/
    || *(_DWORD *)(v6 + 96) != uTimerID
  _BYTE v15[4]; // [esp+2Ch] [ebp-10h] BYREF
    || ((*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v9 + 36))(v9, v15), (v15[0] & 5) == 0) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x412529*/
LABEL_21:
    InterlockedDecrement(v7); /*0x41252f*/
    return; /*0x412530*/
  }
  char v10 = 0; /*0x41243d*/
  if ( (*(int (__stdcall **)(_DWORD, unsigned int *, _BYTE *))(**(_DWORD **)(v6 + 140) + 16))( /*0x412447*/
         *(_DWORD *)(v6 + 140),
  unsigned int v16; // [esp+30h] [ebp-Ch] BYREF
         &v16,
  _BYTE v18[4]; // [esp+38h] [ebp-4h] BYREF
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
  unsigned int v11 = *(_DWORD *)(v6 + 156); /*0x412483*/
  if ( v16 < v11 || v16 >= *(_DWORD *)(v6 + 144) >> 1 && !v11 || v10 == 1 ) /*0x4124a4*/
  {
    (*(void (__cdecl **)(DWORD_PTR, _DWORD))&DataGlobal_87F8E4[32396])( /*0x4124af*/
      dwUser,
      *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 68) + 80));
    int v12 = *(_DWORD *)(v6 + 68); /*0x4124b5*/
    int v13 = v12 + 1; /*0x4124c2*/
    ++*(_DWORD *)(v6 + 148); /*0x4124c5*/
    if ( v12 + 1 >= 2 ) /*0x4124ce*/
      v13 = 0; /*0x4124d0*/
    *(_DWORD *)(v6 + 4 * v12 + 72) = 0; /*0x4124d3*/
    (*(void (__cdecl **)(DWORD_PTR))&DataGlobal_87F8E4[32392])(dwUser); /*0x4124db*/
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
} // namespace gamemd
}

// 0x413CD0
namespace gamemd {
bool sub_413CD0(int a1)
{
{

  if ( !a1 ) /*0x413cd5*/
    return 0; /*0x413cd7*/
  int v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
  if ( !v2 ) /*0x413ced*/
    return 0; /*0x413cef*/
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 1728) + 3777) ) /*0x413cf9*/
    return *(_BYTE *)(v2 + 1753) == 0; /*0x413d10*/
  return 0; /*0x413cd9*/
}
} // namespace gamemd
}

// 0x41B110
namespace gamemd {
INIClass * * PlaceAircraftFromINI()
{
{
  CCINIClass *result; // eax
  CCINIClass *v4; // ecx
  unsigned __int8 *StringByIndex; // eax
  INIClass *v7; // esi
  INIClass *v9; // edi
  AircraftClass *v10; // esi
  FootClass *v12; // esi
  INIClass *v16; // eax
  CCINIClass *v20; // edi
  CCINIClass *v22; // ebx
  CCINIClass *v27; // eax
  int i; // [esp+Ch] [ebp-A4h]
  CCINIClass *v37; // [esp+14h] [ebp-9Ch]
  CCINIClass *v38; // [esp+18h] [ebp-98h]
  CCINIClass *v39; // [esp+20h] [ebp-90h]
  INIClass String[2]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a1); /*0x41b119*/
  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_817460); /*0x41b126*/
  v4 = 0; /*0x41b12b*/
  v39 = result; /*0x41b12f*/
  for ( i = 0; i < (int)v39; ++i ) /*0x41b137*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, &stru_817460, v4); /*0x41b14a*/
    INIClass::GetString((unsigned __int8 ***)a1, (INIClass *)&stru_817460, StringByIndex, 0, String, 128); /*0x41b164*/
    char * v6 = strtok(String[0].__pad_0, Delimiter[0]); /*0x41b173*/
    v7 = (INIClass *)HouseClass::FindByName(v6); /*0x41b182*/
    if ( v7 != (INIClass *)-1 ) /*0x41b187*/
    {
      char * v8 = strtok(0, Delimiter[0]); /*0x41b194*/
      v9 = (INIClass *)TypeClass::FindByName(v8); /*0x41b1a3*/
      if ( v9 != (INIClass *)-1 ) /*0x41b1a8*/
      {
        v10 = *(AbstractClass **)&HouseClass_Array->__pad_0[4 * (_DWORD)v7]; /*0x41b1b9*/
        int v11 = __2_YAPAXI_Z(0x6D8u); /*0x41b1bc*/
        if ( v11 ) /*0x41b1c6*/
        {
          v12 = (FootClass *)AircraftClass::Construct( /*0x41b1de*/
                               v11,
                               *(IUnknown **)&g_AircraftTypeCount->__pad_0[4 * (_DWORD)v9],
                               v10);
          if ( v12 ) /*0x41b1e2*/
          {
            char * v13 = strtok(0, Delimiter[0]); /*0x41b1ef*/
            atoi(v13); /*0x41b1f5*/
            if ( *(int *)&g_NetworkPlayerBuffer[5952] < 4 ) /*0x41b210*/
            {
              char * v17 = strtok(0, Delimiter[0]); /*0x41b242*/
              int v18 = atoi(v17); /*0x41b248*/
              LOWORD(v37) = v18 % 128; /*0x41b263*/
              HIWORD(v37) = v18 / 128; /*0x41b26d*/
              v16 = v37; /*0x41b272*/
            }
            else
            {
              char * v14 = strtok(0, Delimiter[0]); /*0x41b212*/
              LOWORD(v38) = atoi(v14); /*0x41b224*/
              char * v15 = strtok(0, Delimiter[0]); /*0x41b229*/
              HIWORD(v38) = atoi(v15); /*0x41b234*/
              v16 = v38; /*0x41b239*/
            }
  _DWORD v40[3]; // [esp+24h] [ebp-8Ch] BYREF
            v40[0] = ((__int16)v16 << 8) + 128; /*0x41b29b*/
            v40[1] = (SHIWORD(v16) << 8) + 128; /*0x41b29f*/
            v40[2] = 0; /*0x41b2a3*/
            char * v19 = strtok(0, Delimiter[0]); /*0x41b2a7*/
            v20 = (CCINIClass *)atoi(v19); /*0x41b2b9*/
            char * v21 = strtok(0, Delimiter[0]); /*0x41b2bb*/
            v22 = (CCINIClass *)LookupWaypointName(v21); /*0x41b2ca*/
            char * v23 = strtok(0, Delimiter[0]); /*0x41b2d3*/
            void * v24 = (void *)ObjectTypeClass::FindByName(v23); /*0x41b2dd*/
            if ( v24 ) /*0x41b2e4*/
            {
              int v25 = TeamClass::FindOrCreate(v24); /*0x41b2e8*/
              if ( v25 ) /*0x41b2ef*/
                ObjectClass::SetReference(v12, v25); /*0x41b2f4*/
            }
            char * v26 = strtok(0, Delimiter[0]); /*0x41b300*/
            if ( v26 ) /*0x41b30a*/
            {
              v27 = (CCINIClass *)atoi(v26); /*0x41b30d*/
              FootClass::SetField((float *)&v12->initialOwner, v27); /*0x41b31c*/
            }
            char * v28 = strtok(0, Delimiter[0]); /*0x41b328*/
            if ( v28 ) /*0x41b332*/
              v12->displayProductionTo[0] = atoi(v28); /*0x41b33d*/
            char * v29 = strtok(0, Delimiter[0]); /*0x41b34a*/
            if ( v29 ) /*0x41b354*/
              v12->__pad_3F7[42] = atoi(v29) != 0; /*0x41b364*/
            char * v30 = strtok(0, Delimiter[0]); /*0x41b371*/
            if ( v30 ) /*0x41b37b*/
              v12->__pad_3F7[43] = atoi(v30) != 0; /*0x41b38b*/
            if ( (*(unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, CCINIClass *, int))(*(_DWORD *)v12->__pad_0 /*0x41b39b*/
                                                                                             + 216))(
                   v12,
                   v40,
                   v20,
                   a2) )
            {
              int v31 = *(_DWORD *)&v12[1].__pad_0[4]; /*0x41b3a9*/
              int v32 = Math::RoundToInt((double)(int)v39 * (double)*(int *)(v31 + 160) * 0.00390625); /*0x41b3bb*/
              v12->health = v32; /*0x41b3c0*/
              int v33 = *(_DWORD *)(v31 + 160); /*0x41b3c3*/
              if ( v32 > v33 - 3 ) /*0x41b3ce*/
                v12->health = v33; /*0x41b3d0*/
              if ( !v12->health ) /*0x41b3d3*/
                v12->health = 1; /*0x41b3da*/
              int v34 = *(_DWORD *)v12->__pad_0; /*0x41b3e4*/
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
} // namespace gamemd
}

// 0x41C610
namespace gamemd {
int CompareFunction(unsigned int * a1, unsigned int * a2)
{
{
  if ( *a1 == *a2 )
    return 0; /*0x41c620*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
} // namespace gamemd
}

// 0x410070
namespace gamemd {
void sub_410070()
{
{
    DataGlobal_887678 = Math::ArcTan((double)DataGlobal_8876C0 * 0.00390625);
}
}
} // namespace gamemd

// 0x4100A0
namespace gamemd {
void sub_4100A0()
{
{
    DataGlobal_887690 = Math::ArcTan((double)(2 * DataGlobal_8876C0) / DataGlobal_887668);
}
}
} // namespace gamemd

// 0x4100D0
namespace gamemd {
long long sub_4100D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8876C0) + 0.5);
    DataGlobal_8876B4 = result;
    return result;
}
}
} // namespace gamemd

// 0x410110
namespace gamemd {
int sub_410110()
{
{
    DataGlobal_887680 = 0;
    DataGlobal_887684 = 0;
    DataGlobal_887688 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x410130
namespace gamemd {
int sub_410130()
{
{
    DataGlobal_8876B0 = 0;
    DataGlobal_8876A8 = 128;
    DataGlobal_8876AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x410150
namespace gamemd {
int sub_410150()
{
{
    DataGlobal_887650 = 0;
    DataGlobal_887654 = 0;
    DataGlobal_887658 = 0;
    DataGlobal_88765C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x410610
namespace gamemd {
void sub_410610()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8876D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x410640
namespace gamemd {
void sub_410640()
{
{
    DataGlobal_887728 = DataGlobal_8876D8 / 60.0;
}
}
} // namespace gamemd

// 0x410660
namespace gamemd {
void sub_410660()
{
{
    DataGlobal_887710 = 1.0 / DataGlobal_887728;
}
}
} // namespace gamemd

// 0x410680
namespace gamemd {
void sub_410680()
{
{
    DataGlobal_887708 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4106A0
namespace gamemd {
void sub_4106A0()
{
{
    DataGlobal_8876E0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4106C0
namespace gamemd {
void sub_4106C0()
{
{
    DataGlobal_8876C8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4106E0
namespace gamemd {
long long sub_4106E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8876C8 - DataGlobal_8876E0);
    result = Math::RoundToInt(v0 * DataGlobal_8876D8 * 0.5);
    DataGlobal_887730 = result;
    return result;
}
}
} // namespace gamemd

// 0x410720
namespace gamemd {
void sub_410720()
{
{
    DataGlobal_8876E8 = Math::ArcTan((double)DataGlobal_887730 * 0.00390625);
}
}
} // namespace gamemd

// 0x410750
namespace gamemd {
void sub_410750()
{
{
    DataGlobal_887700 = Math::ArcTan((double)(2 * DataGlobal_887730) / DataGlobal_8876D8);
}
}
} // namespace gamemd

// 0x410780
namespace gamemd {
long long sub_410780()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_887730) + 0.5);
    DataGlobal_887724 = result;
    return result;
}
}
} // namespace gamemd

// 0x4107B0
namespace gamemd {
int sub_4107B0()
{
{
    DataGlobal_8876D0 = 0;
    DataGlobal_8876D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4107C0
namespace gamemd {
int sub_4107C0()
{
{
    DataGlobal_8876F0 = 0;
    DataGlobal_8876F4 = 0;
    DataGlobal_8876F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4107E0
namespace gamemd {
int sub_4107E0()
{
{
    DataGlobal_887720 = 0;
    DataGlobal_887718 = 128;
    DataGlobal_88771C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x410CC0
namespace gamemd {
int sub_410CC0()
{
{
    DataGlobal_887738 = 0;
    DataGlobal_88773C = 0;
    DataGlobal_887740 = 0;
    DataGlobal_887744 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x410DC0
namespace gamemd {
int E4Recv_410DC0::sub_410DC0(int a2, int a3, int a4, int a5, int a6)
{
{
    short *v8;
    short *v9;
    int v10;
    int v11;
    int v12;
    int v13;
    short v14;
    int v16;
    v8 = (short *)(*(int (__thiscall **)(int, int, int))(*(int *)(a2) + 92))(a2, a3, a4);
    v9 = (short *)(this->M16 + this->M24);
    v10 = (*(int (__thiscall **)(int))(*(int *)(a2) + 116))(a2);
    v11 = a5;
    v12 = v10 / 2 - a5;
    if ( v8 && a6 > 0 )
  {
    v16 = a6;
    do
    {
    if ( v11 > 0 )
      {
    v13 = v11;
    do
        {
    v14 = *v9++;
    *v8++ = v14;
    if ( (unsigned int)v9 >= this->M28 )
    v9 = (short *)((char *)v9 - this->M32);
    --v13;
        }
    while ( v13 );
    v11 = a5;
      }
    v8 += v12;
    --v16;
    }
    while ( v16 );
  }
    return (*(int (__thiscall **)(int))(*(int *)(a2) + 96))(a2);
}
}
} // namespace gamemd

// 0x410E70
namespace gamemd {
char * sub_410E70(char * a1, int a2, unsigned short a3)
{
{
    char *v3;
    int v4;
    char *result;
    unsigned int v6;
    v3 = a1;
    v4 = a2;
    if ( ((unsigned char)a1 & 2) != 0 && a2 )
  {
    *(short *)a1 = a3;
    v3 = a1 + 2;
    v4 = a2 - 1;
  }
    result = 0;
    v6 = v4 >> 1;
    if ( v4 >> 1 )
  {
    memset32(v3, 65537 * a3, v6);
    result = &v3[4 * v6];
  }
    if ( (v4 & 1) != 0 )
  {
    if ( result )
    *(short *)result = a3;
  }
    return result;
}
}
} // namespace gamemd

// 0x411680
namespace gamemd {
int sub_411680()
{
{
    DataGlobal_887748 = 0;
    DataGlobal_88774C = 0;
    DataGlobal_887750 = 0;
    DataGlobal_887754 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x412540
namespace gamemd {
int j_Time_GetElapsedMS()
{
    unsigned int j_Time_GetElapsedMS()
{
    return Time::GetElapsedMS();
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

// 0x412610
namespace gamemd {
int E4Recv_412610::sub_412610()
{
{
    char *v1;
    int v2;
    char v3;
    int v4;
    v1 = this;
    v2 = 0;
    while ( v1 )
  {
    if ( !isxdigit(*v1) )
    break;
    v3 = *v1;
    v4 = 16 * v2;
    ++v1;
    if ( v3 < 48 || v3 > 57 )
    v2 = v4 + toupper(v3) - 55;
    else
    v2 = v4 + v3 - 48;
  }
    return v2;
}
}
} // namespace gamemd

// 0x412660
namespace gamemd {
void sub_412660()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_887858 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x412690
namespace gamemd {
void sub_412690()
{
{
    DataGlobal_889E40 = DataGlobal_887858 / 60.0;
}
}
} // namespace gamemd

// 0x4126B0
namespace gamemd {
void sub_4126B0()
{
{
    DataGlobal_889E28 = 1.0 / DataGlobal_889E40;
}
}
} // namespace gamemd

// 0x4126D0
namespace gamemd {
void sub_4126D0()
{
{
    DataGlobal_889E20 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4126F0
namespace gamemd {
void sub_4126F0()
{
{
    DataGlobal_887860 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x412710
namespace gamemd {
void sub_412710()
{
{
    DataGlobal_887838 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x412730
namespace gamemd {
long long sub_412730()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_887838 - DataGlobal_887860);
    result = Math::RoundToInt(v0 * DataGlobal_887858 * 0.5);
    DataGlobal_889E48 = result;
    return result;
}
}
} // namespace gamemd

// 0x412770
namespace gamemd {
void sub_412770()
{
{
    DataGlobal_887868 = Math::ArcTan((double)DataGlobal_889E48 * 0.00390625);
}
}
} // namespace gamemd

// 0x4127A0
namespace gamemd {
void sub_4127A0()
{
{
    DataGlobal_887880 = Math::ArcTan((double)(2 * DataGlobal_889E48) / DataGlobal_887858);
}
}
} // namespace gamemd

// 0x4127D0
namespace gamemd {
long long sub_4127D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_889E48) + 0.5);
    DataGlobal_889E3C = result;
    return result;
}
}
} // namespace gamemd

// 0x412800
namespace gamemd {
int sub_412800()
{
{
    DataGlobal_887850 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x412810
namespace gamemd {
int sub_412810()
{
{
    DataGlobal_887870 = 0;
    DataGlobal_887874 = 0;
    DataGlobal_887878 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x412830
namespace gamemd {
int sub_412830()
{
{
    DataGlobal_889E38 = 0;
    DataGlobal_889E30 = 128;
    DataGlobal_889E34 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x412850
namespace gamemd {
int sub_412850()
{
{
    DataGlobal_887840 = 0;
    DataGlobal_887844 = 0;
    DataGlobal_887848 = 0;
    DataGlobal_88784C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x412870
namespace gamemd {
int sub_412870()
{
{
    int *v0;
    int v1;
    v0 = g_CellClassManager;
    v1 = 400;
    do
  {
    EventClass::resetEvent(v0, 0, 0);
    *v0 = &vt_DynamicVectorClass_TechnoClass;
    v0[5] = 10;
    v0[4] = 0;
    v0 += 6;
    --v1;
  }
    while ( v1 );
    DataGlobal_889E0C = 0;
    DataGlobal_889E10 = 0;
    DataGlobal_889E14 = 1;
    DataGlobal_889E15 = 0;
    DataGlobal_889E08 = (int)&vt_DynamicVectorClass_TechnoClass;
    DataGlobal_889E1C = 10;
    DataGlobal_889E18 = 0;
    return atexit(sub_4128F0);
}
}
} // namespace gamemd

// 0x4128F0
namespace gamemd {
void sub_4128F0()
{
{
    int *v0;
    int v1;
    int v2;
    int v3;
    void **v4;
    int v5;
    void *v6;
    v0 = g_CellClassManager;
    v1 = 400;
    do
  {
    v2 = v0[2];
    (*(void (__thiscall **)(int *))(*v0 + 12))(v0);
    (*(void (__thiscall **)(int *, int, int))(*v0 + 8))(v0, v2, 0);
    v0 += 6;
    --v1;
  }
    while ( v1 );
    v3 = DataGlobal_889E10;
    (*(void (__thiscall **)(int *))(DataGlobal_889E08 + 12))(&DataGlobal_889E08);
    (*(void (__thiscall **)(int *, int, int))(DataGlobal_889E08 + 8))(&DataGlobal_889E08, v3, 0);
    DataGlobal_889E08 = (int)&vt_VectorClass_TechnoClass;
    if ( DataGlobal_889E0C && DataGlobal_889E15 )
  {
    __3_YAXPAX_Z(DataGlobal_889E0C);
    DataGlobal_889E0C = 0;
  }
    DataGlobal_889E15 = 0;
    DataGlobal_889E10 = 0;
    v4 = &DataGlobal_889E0C;
    v5 = 400;
    do
  {
    v6 = *(v4 - 6);
    v4 -= 6;
    *(v4 - 1) = &vt_VectorClass_TechnoClass;
    if ( v6 )
    {
    if ( *((char *)(v4) + 9) )
      {
    __3_YAXPAX_Z(v6);
    *v4 = 0;
      }
    }
    --v5;
    *((char *)(v4) + 9) = 0;
    v4[1] = 0;
  }
    while ( v5 );
}
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

// 0x413AC0
namespace gamemd {
void sub_413AC0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_889E70 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x413AF0
namespace gamemd {
void sub_413AF0()
{
{
    DataGlobal_889EC0 = DataGlobal_889E70 / 60.0;
}
}
} // namespace gamemd

// 0x413B10
namespace gamemd {
void sub_413B10()
{
{
    DataGlobal_889EA8 = 1.0 / DataGlobal_889EC0;
}
}
} // namespace gamemd

// 0x413B30
namespace gamemd {
void sub_413B30()
{
{
    DataGlobal_889EA0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x413B50
namespace gamemd {
void sub_413B50()
{
{
    DataGlobal_889E78 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x413B70
namespace gamemd {
void sub_413B70()
{
{
    DataGlobal_889E50 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x413B90
namespace gamemd {
long long sub_413B90()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_889E50 - DataGlobal_889E78);
    result = Math::RoundToInt(v0 * DataGlobal_889E70 * 0.5);
    DataGlobal_889EC8 = result;
    return result;
}
}
} // namespace gamemd

// 0x413BD0
namespace gamemd {
void sub_413BD0()
{
{
    DataGlobal_889E80 = Math::ArcTan((double)DataGlobal_889EC8 * 0.00390625);
}
}
} // namespace gamemd

// 0x413C00
namespace gamemd {
void sub_413C00()
{
{
    DataGlobal_889E98 = Math::ArcTan((double)(2 * DataGlobal_889EC8) / DataGlobal_889E70);
}
}
} // namespace gamemd

// 0x413C30
namespace gamemd {
long long sub_413C30()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_889EC8) + 0.5);
    DataGlobal_889EBC = result;
    return result;
}
}
} // namespace gamemd

// 0x413C60
namespace gamemd {
int sub_413C60()
{
{
    g_AircraftStatusFlag = 0;
    return 0;
}
}
} // namespace gamemd

// 0x413C70
namespace gamemd {
int sub_413C70()
{
{
    DataGlobal_889E88 = 0;
    DataGlobal_889E8C = 0;
    DataGlobal_889E90 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x413C90
namespace gamemd {
int sub_413C90()
{
{
    DataGlobal_889EB8 = 0;
    DataGlobal_889EB0 = 128;
    DataGlobal_889EB4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x413CB0
namespace gamemd {
int sub_413CB0()
{
{
    DataGlobal_889E58 = 0;
    DataGlobal_889E5C = 0;
    DataGlobal_889E60 = 0;
    DataGlobal_889E64 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x414A10
namespace gamemd {
void nullsub_71(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x41C6A0
namespace gamemd {
void sub_41C6A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_889EF0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x41C6D0
namespace gamemd {
void sub_41C6D0()
{
{
    DataGlobal_889F50 = DataGlobal_889EF0 / 60.0;
}
}
} // namespace gamemd

// 0x41C6F0
namespace gamemd {
void sub_41C6F0()
{
{
    DataGlobal_889F30 = 1.0 / DataGlobal_889F50;
}
}
} // namespace gamemd

// 0x41C710
namespace gamemd {
void sub_41C710()
{
{
    DataGlobal_889F28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x41C730
namespace gamemd {
void sub_41C730()
{
{
    DataGlobal_889EF8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x41C750
namespace gamemd {
void sub_41C750()
{
{
    DataGlobal_889ED0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x41C770
namespace gamemd {
long long sub_41C770()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_889ED0 - DataGlobal_889EF8);
    result = Math::RoundToInt(v0 * DataGlobal_889EF0 * 0.5);
    DataGlobal_889F58 = result;
    return result;
}
}
} // namespace gamemd

// 0x41C7B0
namespace gamemd {
void sub_41C7B0()
{
{
    DataGlobal_889F00 = Math::ArcTan((double)DataGlobal_889F58 * 0.00390625);
}
}
} // namespace gamemd

// 0x41C7E0
namespace gamemd {
void sub_41C7E0()
{
{
    DataGlobal_889F18 = Math::ArcTan((double)(2 * DataGlobal_889F58) / DataGlobal_889EF0);
}
}
} // namespace gamemd

// 0x41C810
namespace gamemd {
long long sub_41C810()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_889F58) + 0.5);
    DataGlobal_889F4C = result;
    return result;
}
}
} // namespace gamemd

// 0x41C840
namespace gamemd {
int sub_41C840()
{
{
    DataGlobal_889EE8 = 0;
    DataGlobal_889EEA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41C850
namespace gamemd {
int sub_41C850()
{
{
    DataGlobal_889F08 = 0;
    DataGlobal_889F0C = 0;
    DataGlobal_889F10 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41C870
namespace gamemd {
int sub_41C870()
{
{
    DataGlobal_889F48 = 0;
    DataGlobal_889F40 = 128;
    DataGlobal_889F44 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x41C890
namespace gamemd {
int sub_41C890()
{
{
    DataGlobal_889ED8 = 0;
    DataGlobal_889EDC = 0;
    DataGlobal_889EE0 = 0;
    DataGlobal_889EE4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41CAF0
namespace gamemd {
int sub_41CAF0()
{
{
    int result;
    DataGlobal_889F5C = SearchMIXFile(DataGlobal_817FE4, 0);
    result = SearchMIXFile(DataGlobal_817FD8, 0);
    DataGlobal_889F60 = result;
    return result;
}
}
} // namespace gamemd

// 0x41CBD0
namespace gamemd {
void nullsub_85()
{
  ;
}
} // namespace gamemd

// 0x41D070
namespace gamemd {
void sub_41D070()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_889F88 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x41D0A0
namespace gamemd {
void sub_41D0A0()
{
{
    DataGlobal_889FF0 = DataGlobal_889F88 / 60.0;
}
}
} // namespace gamemd

// 0x41D0C0
namespace gamemd {
void sub_41D0C0()
{
{
    DataGlobal_889FD8 = 1.0 / DataGlobal_889FF0;
}
}
} // namespace gamemd

// 0x41D0E0
namespace gamemd {
void sub_41D0E0()
{
{
    DataGlobal_889FD0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x41D100
namespace gamemd {
void sub_41D100()
{
{
    DataGlobal_889F90 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x41D120
namespace gamemd {
void sub_41D120()
{
{
    *(double *)(&g_INI_DefaultBuffer + 4) = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x41D140
namespace gamemd {
long long sub_41D140()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(*(double *)(&g_INI_DefaultBuffer + 4) - DataGlobal_889F90);
    result = Math::RoundToInt(v0 * DataGlobal_889F88 * 0.5);
    DataGlobal_889FF8 = result;
    return result;
}
}
} // namespace gamemd

// 0x41D180
namespace gamemd {
void sub_41D180()
{
{
    DataGlobal_889F98 = Math::ArcTan((double)DataGlobal_889FF8 * 0.00390625);
}
}
} // namespace gamemd

// 0x41D1B0
namespace gamemd {
void sub_41D1B0()
{
{
    DataGlobal_889FB0 = Math::ArcTan((double)(2 * DataGlobal_889FF8) / DataGlobal_889F88);
}
}
} // namespace gamemd

// 0x41D1E0
namespace gamemd {
long long sub_41D1E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_889FF8) + 0.5);
    DataGlobal_889FEC = result;
    return result;
}
}
} // namespace gamemd

// 0x41D210
namespace gamemd {
int sub_41D210()
{
{
    *((int *)&g_INI_DefaultBuffer + 7) = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41D220
namespace gamemd {
int sub_41D220()
{
{
    DataGlobal_889FA0 = 0;
    DataGlobal_889FA4 = 0;
    DataGlobal_889FA8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41D240
namespace gamemd {
int sub_41D240()
{
{
    DataGlobal_889FE8 = 0;
    DataGlobal_889FE0 = 128;
    DataGlobal_889FE4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x41D260
namespace gamemd {
int sub_41D260()
{
{
    *(__int64 *)(&g_INI_DefaultBuffer + 12) = 0;
    *(__int64 *)(&g_INI_DefaultBuffer + 20) = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41D280
namespace gamemd {
int sub_41D280()
{
{
    DataGlobal_889FBC = 0;
    DataGlobal_889FC0 = 0;
    DataGlobal_889FC4 = 1;
    DataGlobal_889FC5 = 0;
    DataGlobal_889FB8 = (int)&vt_DynamicVectorClass_AirstrikeClass;
    DataGlobal_889FCC = 10;
    DataGlobal_889FC8 = 0;
    return atexit(sub_41D2C0);
}
}
} // namespace gamemd

// 0x41D2C0
namespace gamemd {
void sub_41D2C0()
{
{
    DataGlobal_889FB8 = (int)&vt_VectorClass_AirstrikeClass;
    if ( DataGlobal_889FBC && DataGlobal_889FC5 )
  {
    __3_YAXPAX_Z(DataGlobal_889FBC);
    DataGlobal_889FBC = 0;
  }
    DataGlobal_889FC5 = 0;
    DataGlobal_889FC0 = 0;
}
}
} // namespace gamemd

// 0x41DD10
namespace gamemd {
char E4Recv_41DD10::sub_41DD10()
{
{
    this->M64 = g_CurrentFrame;
    this->M60 = 0;
    this->M61 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41E140
namespace gamemd {
int sub_41E140()
{
{
    DataGlobal_88A008 = 0;
    DataGlobal_88A00C = 0;
    DataGlobal_88A010 = 0;
    DataGlobal_88A014 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41E160
namespace gamemd {
void sub_41E160()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_88A020 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x41E190
namespace gamemd {
void sub_41E190()
{
{
    DataGlobal_88A070 = DataGlobal_88A020 / 60.0;
}
}
} // namespace gamemd

// 0x41E1B0
namespace gamemd {
void sub_41E1B0()
{
{
    DataGlobal_88A058 = 1.0 / DataGlobal_88A070;
}
}
} // namespace gamemd

// 0x41E1D0
namespace gamemd {
void sub_41E1D0()
{
{
    DataGlobal_88A050 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x41E1F0
namespace gamemd {
void sub_41E1F0()
{
{
    DataGlobal_88A028 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x41E210
namespace gamemd {
void sub_41E210()
{
{
    DataGlobal_88A000 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x41E230
namespace gamemd {
long long sub_41E230()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_88A000 - DataGlobal_88A028);
    result = Math::RoundToInt(v0 * DataGlobal_88A020 * 0.5);
    DataGlobal_88A078 = result;
    return result;
}
}
} // namespace gamemd

// 0x41E270
namespace gamemd {
void sub_41E270()
{
{
    DataGlobal_88A030 = Math::ArcTan((double)DataGlobal_88A078 * 0.00390625);
}
}
} // namespace gamemd

// 0x41E2A0
namespace gamemd {
void sub_41E2A0()
{
{
    DataGlobal_88A048 = Math::ArcTan((double)(2 * DataGlobal_88A078) / DataGlobal_88A020);
}
}
} // namespace gamemd

// 0x41E2D0
namespace gamemd {
long long sub_41E2D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_88A078) + 0.5);
    DataGlobal_88A06C = result;
    return result;
}
}
} // namespace gamemd

// 0x41E300
namespace gamemd {
int sub_41E300()
{
{
    DataGlobal_88A018 = 0;
    DataGlobal_88A01A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41E310
namespace gamemd {
int sub_41E310()
{
{
    DataGlobal_88A038 = 0;
    DataGlobal_88A03C = 0;
    DataGlobal_88A040 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x41E330
namespace gamemd {
int sub_41E330()
{
{
    DataGlobal_88A068 = 0;
    DataGlobal_88A060 = 128;
    DataGlobal_88A064 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x41FD30
namespace gamemd {
int E4Recv_41FD30::sub_41FD30(int a2)
{
{
    this->M216 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x41FD40
namespace gamemd {
int E4Recv_41FD40::sub_41FD40(int a2)
{
{
    this->M220 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x41FD50
namespace gamemd {
int E4Recv_41FD50::sub_41FD50(int a2)
{
{
    this->M224 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x41FEE0
namespace gamemd {
bool globalHelper_01FEE0(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
{
    IUnknown *v3;
    AbstractClass *v4;
    ObjectClass *CurrentOption;
    MouseClass *v6;
    int v7;
    MouseClass *v8;
    MouseClass *TileIndex;
    v3 = aP0;
    if ( aP0->__pad_EC[4] )
  {
    v4 = (AbstractClass *)a2;
    if ( a2 )
    {
    a2 = *(int **)HouseClass::GetCurrentOption(a1, (IUnknown *)&a1)->__pad_0;
    CurrentOption = HouseClass::GetCurrentOption(v4, (IUnknown *)&a1);
    v6 = *(MouseClass **)v3->__pad_EC;
    aP0 = *(IUnknown **)CurrentOption->__pad_0;
    if ( !v3->__pad_EC[5] )
      {
    TileIndex = (MouseClass *)MapClass::GetTileIndex( &DataGlobal_87C374[13428], (IUnknown *)&aP0, (IUnknown *)v6, 0);
    return MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&a2, (IUnknown *)v6, 0) == (int)TileIndex;
      }
    v7 = MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&aP0, (IUnknown *)v6, 0);
    if ( MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&a2, (IUnknown *)v6, 0) == v7 )
    return 0;
    v8 = (MouseClass *)MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&aP0, (IUnknown *)5, 0);
    if ( (MouseClass *)MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&a2, (IUnknown *)5, 0) != v8 )
    return 0;
    }
  }
    return 1;
}
}
} // namespace gamemd
