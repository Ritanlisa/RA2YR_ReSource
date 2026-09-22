// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_597430_e4.hpp"
#include "e4/classes/E4Recv_6342E0_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/E4Recv_637640_e4.hpp"
#include "e4/classes/E4Recv_63B050_e4.hpp"
#include "e4/classes/E4Recv_63E5D0_e4.hpp"
#include "e4/classes/E4Recv_6550C0_e4.hpp"
#include "e4/classes/E4Recv_65FB80_e4.hpp"
#include "e4/classes/E4Recv_6EF470_e4.hpp"
#include "e4/classes/E4Recv_6F2230_e4.hpp"
#include "e4/classes/E4Recv_6F25E0_e4.hpp"
#include "e4/classes/E4Recv_6F26E0_e4.hpp"
#include "e4/classes/E4Recv_6F2780_e4.hpp"
#include "e4/classes/E4Recv_6F27F0_e4.hpp"
#include "e4/classes/E4Recv_750060_e4.hpp"
#include "e4/classes/E4Recv_764FA0_e4.hpp"
#include "e4/classes/E4Recv_765410_e4.hpp"
#include "e4/classes/E4Recv_765C90_e4.hpp"
#include "e4/classes/E4Recv_76E430_e4.hpp"
#include "e4/classes/E4Recv_76E750_e4.hpp"
#include "e4/classes/E4Recv_7AF500_e4.hpp"
#include "e4/classes/E4Recv_7B0490_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x561180
namespace gamemd {
void Team_Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  HWND Dialog; // edi
  LONG dwNewLong[2]; // [esp+Ch] [ebp-20h] BYREF
  DWORD Ticks; // [esp+14h] [ebp-18h]
  DWORD v21; // [esp+20h] [ebp-Ch]
  dwNewLong[1] = xRight; /*0x561191*/
  dwNewLong[0] = -1; /*0x561195*/
  Debug::Log(); /*0x56119d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5611ad*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5611ba*/
  int v11; // [esp+0h] [ebp-2Ch]
  int v13; // [esp+4h] [ebp-28h]
  int *v15; // [esp+8h] [ebp-24h]
  Frame::Present(g_DSurface_Hidden, a3, yBottom, a4, 0, v11, v13, v15); /*0x5611c7*/
  result = ChangeVideoMode(xRight, yBottom); /*0x5611d0*/
  if ( result ) /*0x5611d7*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5611ea*/
  int v12; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+4h] [ebp-28h]
  int *v16; // [esp+8h] [ebp-24h]
    Frame::Present(g_DSurface_Hidden, a3, yBottom, a4, 0, v12, v14, v16); /*0x5611f7*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x561204*/
    Screen::Capture(1, 0, a3, yBottom); /*0x56120b*/
    Dialog = (HWND)CreateDialog(0xD9u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_561350, 0); /*0x561221*/
    if ( !Dialog ) /*0x561225*/
      goto LABEL_13; /*0x561225*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x561234*/
    Dialog::Show(Dialog); /*0x56123c*/
    Ticks = Timer::GetTicks(); /*0x56124a*/
    int v20 = 600; /*0x561254*/
    while ( dwNewLong[0] < 0 ) /*0x56125c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x56126b*/
        break; /*0x56126b*/
  int v8; // ecx
      LOBYTE(v8) = 0; /*0x56126d*/
      ScreenSaver::Process(v8); /*0x56126f*/
      int v9 = v20; /*0x561278*/
      if ( Ticks != -1 ) /*0x56127f*/
      {
        ObjectClass *v10 = Timer::GetTicks() - Ticks; /*0x56128a*/
        if ( v10 >= v9 ) /*0x561290*/
          goto LABEL_9; /*0x561290*/
        v9 -= v10; /*0x561292*/
      }
      if ( v9 <= 0 ) /*0x561296*/
      {
LABEL_9:
        PostMessageA(Dialog, 0x111u, 0x6CAu, 0); /*0x561298*/
        v21 = Timer::GetTicks(); /*0x5612b9*/
        int v23 = 300; /*0x5612bd*/
        Ticks = v21; /*0x5612c1*/
  int v22; // [esp+24h] [ebp-8h]
        int v19 = v22; /*0x5612c5*/
        v20 = 300; /*0x5612c9*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5612d7*/
    if ( dwNewLong[0] == 1 ) /*0x5612e4*/
    {
LABEL_13:
      Debug::Log(); /*0x561331*/
      g_DSurface_Hidden_2 = g_DSurface_Hidden; /*0x56133e*/
      return 1; /*0x561343*/
    }
    else
    {
      Debug::Log(); /*0x5612f8*/
      ChangeVideoMode(g_CommandLineFlags, DataGlobal_A8EB88); /*0x56130c*/
      g_DSurface_Hidden_2 = g_DSurface_Hidden; /*0x56131b*/
      return 0; /*0x561317*/
    }
  }
  return result; /*0x5611d9*/
}
}
} // namespace gamemd

// 0x5D26C0
namespace gamemd {
int Team::ReleaseAll(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v3 = 0; /*0x5d26c4*/
  result = *(this + 10); /*0x5d26c6*/
  if ( result > 0 ) /*0x5d26cb*/
  {
    do /*0x5d26e4*/
    {
      int v5 = *(_DWORD *)(*(this + 7) + 4 * v3); /*0x5d26d6*/
      (*(void (__thiscall **)(int, ObjectClass *))(*(_DWORD *)v5 + 32))(v5, aP1); /*0x5d26db*/
      result = *(this + 10); /*0x5d26de*/
      ++v3; /*0x5d26e1*/
    }
    while ( v3 < result ); /*0x5d26e4*/
  }
  return result; /*0x5d26e7*/
}
}
} // namespace gamemd

// 0x6219D0
namespace gamemd {
void sub_6219D0(int * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v5 = a2; /*0x6219d7*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6219e7*/
  int v27 = result; /*0x6219ec*/
  if ( result ) /*0x6219f0*/
  {
    int v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5); /*0x6219fc*/
    int v8 = a1[1]; /*0x621a05*/
    int v9 = v7; /*0x621a0a*/
    int v11 = v9 / 2; /*0x621a12*/
    int v25 = v8; /*0x621a1a*/
    if ( v8 < a1[3] + v8 ) /*0x621a1e*/
    {
      int v12 = v11 * v8; /*0x621a26*/
      int v29 = v11 * v8; /*0x621a29*/
      do /*0x621aaf*/
      {
        int v13 = *a1; /*0x621a2d*/
        int v14 = *a1 + a3; /*0x621a36*/
        if ( v13 < v13 + a3 ) /*0x621a3b*/
        {
  int v15; // edx
          HIWORD(v15) = HIWORD(v27); /*0x621a3d*/
          _WORD * v16 = (_WORD *)(v27 + 2 * (v12 + *a1)); /*0x621a45*/
          do /*0x621a8c*/
          {
            LOWORD(v15) = *v16++; /*0x621a4f*/
            LOWORD(v11) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621a5b*/
            LOWORD(v14) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621a65*/
            v14 &= g_ScreenSaverState; /*0x621a68*/
            LOWORD(v15) = (unsigned __int16)v15 >> 1; /*0x621a6e*/
            int v17 = v14 | v11; /*0x621a71*/
            LOWORD(v14) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621a7a*/
            v11 = v15 & (v14 | v17); /*0x621a7f*/
            ++v13; /*0x621a81*/
            *(v16 - 1) = v11; /*0x621a82*/
            v15 = a3 + *a1; /*0x621a88*/
          }
          while ( v13 < v15 ); /*0x621a8c*/
          v8 = v25; /*0x621a8e*/
          v11 = v9 / 2; /*0x621a92*/
          v12 = v29; /*0x621a96*/
        }
        ++v8; /*0x621aa0*/
        v12 += v11; /*0x621aa3*/
        v25 = v8; /*0x621aa7*/
        v29 = v12; /*0x621aab*/
      }
      while ( v8 < a1[3] + a1[1] ); /*0x621aaf*/
      v5 = a2; /*0x621ab5*/
    }
    int v18 = a1[1]; /*0x621ab9*/
    int v26 = v18; /*0x621ac0*/
    if ( v18 < v18 + a4 ) /*0x621ac9*/
    {
      int v19 = v11 * v18; /*0x621acf*/
      int v30 = v19; /*0x621ad2*/
      do /*0x621b59*/
      {
        int v20 = *a1 + a1[2]; /*0x621adb*/
        int v21 = *a1 + a3; /*0x621ae0*/
        int v22 = a3 + v19 + *a1; /*0x621ae3*/
        if ( v21 < v20 ) /*0x621ae7*/
        {
          _WORD * v23 = (_WORD *)(v27 + 2 * v22); /*0x621aed*/
          do /*0x621b35*/
          {
            LOWORD(v22) = *v23++; /*0x621af7*/
            LOWORD(v20) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621b03*/
            LOWORD(v19) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621b0d*/
            v19 &= g_ScreenSaverState; /*0x621b10*/
            LOWORD(v22) = (unsigned __int16)v22 >> 1; /*0x621b16*/
            int v24 = v19 | v20; /*0x621b19*/
            LOWORD(v19) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621b22*/
            v20 = v22 & (v19 | v24); /*0x621b27*/
            ++v21; /*0x621b29*/
            *(v23 - 1) = v20; /*0x621b2a*/
            v22 = *a1 + a1[2]; /*0x621b31*/
          }
          while ( v21 < v22 ); /*0x621b35*/
          v19 = v30; /*0x621b37*/
        }
        v19 += v9 / 2; /*0x621b47*/
        ++v26; /*0x621b4f*/
        v30 = v19; /*0x621b55*/
      }
      while ( v26 < a4 + a1[1] ); /*0x621b59*/
      v5 = a2; /*0x621b5f*/
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x621b67*/
  }
  return result; /*0x621b6c*/
}
}
} // namespace gamemd

// 0x634B20
namespace gamemd {
Game * * E4Recv_634B20::sub_634B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // [esp+10h] [ebp-90h]
  int j; // [esp+18h] [ebp-88h]
  _DWORD v16[2]; // [esp+1Ch] [ebp-84h] BYREF
  _DWORD v17[3]; // [esp+24h] [ebp-7Ch] BYREF
  _WORD v18[56]; // [esp+30h] [ebp-70h] BYREF

  int v2 = 0; /*0x634b2a*/
  int v13 = *(this + 12); /*0x634b33*/
  if ( v13 > 0 ) /*0x634b37*/
  {
    do /*0x634bf7*/
    {
      _BYTE * v3 = *(_BYTE **)(*(this + 9) + 4 * v2); /*0x634b48*/
      qmemcpy(v18, v3, 0x6Cu); /*0x634b57*/
      v3 += 108; /*0x634b57*/
      v18[54] = *(_WORD *)v3; /*0x634b59*/
      LOBYTE(v18[55]) = v3[2]; /*0x634b5f*/
      GetScenarioClassActionCoords(v17, v18); /*0x634b60*/
      Debug::Log(); /*0x634b7d*/
      int v4 = *(this + 4); /*0x634b82*/
      int v5 = 0; /*0x634b88*/
      int v14 = v4; /*0x634b8a*/
      for ( i = 0; v5 < v4; i = v5 ) /*0x634b94*/
      {
        _DWORD * v6 = *(_DWORD **)(*(this + 1) + 4 * v5); /*0x634b99*/
        if ( v6[2] == v2 ) /*0x634b9f*/
        {
          int v7 = *v6; /*0x634ba1*/
          (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 136))(*v6); /*0x634ba7*/
          v16[1] = *(_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 440))(v7, v16); /*0x634bc3*/
          Debug::Log(); /*0x634bd7*/
          v5 = i; /*0x634bdc*/
          v4 = v14; /*0x634be0*/
        }
        ++v5; /*0x634be7*/
      }
      ++v2; /*0x634bf4*/
    }
    while ( v2 < v13 ); /*0x634bf7*/
  }
  if ( *(this + 42) > 0 ) /*0x634c05*/
  {
    qmemcpy(v18, this + 14, 0x6Fu); /*0x634c1b*/
    GetScenarioClassActionCoords(v17, v18); /*0x634c24*/
    Debug::Log(); /*0x634c43*/
    int v8 = *(this + 4); /*0x634c48*/
    int v9 = 0; /*0x634c4e*/
    for ( j = v8; v9 < v8; ++v9 ) /*0x634c56*/
    {
      _BYTE * v10 = *(_BYTE **)(*(this + 1) + 4 * v9); /*0x634c5b*/
      if ( v10[12] ) /*0x634c5e*/
      {
        int v11 = *(_DWORD *)v10; /*0x634c65*/
        (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v10 + 136))(*(_DWORD *)v10); /*0x634c6b*/
        (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 440))(v11, v16); /*0x634c7f*/
        Debug::Log(); /*0x634c9b*/
        v8 = j; /*0x634ca0*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x637640
namespace gamemd {
_UNKNOWN ** E4Recv_637640::sub_637640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _UNKNOWN **result; // eax
  _UNKNOWN **v5; // [esp+Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h] BYREF

  v5 = this; /*0x637647*/
  int v1 = (*(int (__thiscall **)(int *, _UNKNOWN ***))(g_ScriptConfig + 16))(&g_ScriptConfig, &v5); /*0x637655*/
  if ( v1 != -1 && v1 < DataGlobal_AC4CA8 && v1 < --DataGlobal_AC4CA8 ) /*0x637670*/
  {
    do /*0x637688*/
    {
      ++v1; /*0x637678*/
      *((_DWORD *)DataGlobal_AC4C9C + v1 - 1) = *((_DWORD *)DataGlobal_AC4C9C + v1); /*0x63767c*/
    }
    while ( v1 < DataGlobal_AC4CA8 ); /*0x637688*/
  }
  int v2 = (*(int (__thiscall **)(int *, _UNKNOWN **))(DataGlobal_AC4B30 + 16))(&DataGlobal_AC4B30, &retaddr); /*0x63769a*/
  if ( v2 != -1 && v2 < DataGlobal_AC4B40 && v2 < --DataGlobal_AC4B40 ) /*0x6376b5*/
  {
    do /*0x6376cd*/
    {
      ++v2; /*0x6376bd*/
      *((_DWORD *)DataGlobal_AC4B34 + v2 - 1) = *((_DWORD *)DataGlobal_AC4B34 + v2); /*0x6376c1*/
    }
    while ( v2 < DataGlobal_AC4B40 ); /*0x6376cd*/
  }
  v5 = &retaddr; /*0x6376d9*/
  int v3 = (*(int (__thiscall **)(int *))(DataGlobal_AC4C18 + 16))(&DataGlobal_AC4C18); /*0x6376df*/
  if ( v3 != -1 && v3 < DataGlobal_AC4C28 && v3 < --DataGlobal_AC4C28 ) /*0x6376fa*/
  {
    do /*0x637712*/
    {
      ++v3; /*0x637702*/
      *((_DWORD *)DataGlobal_AC4C1C + v3 - 1) = *((_DWORD *)DataGlobal_AC4C1C + v3); /*0x637706*/
    }
    while ( v3 < DataGlobal_AC4C28 ); /*0x637712*/
  }
  result = v5; /*0x637714*/
  if ( (_UNKNOWN **)g_ScriptPool == v5 ) /*0x637722*/
    g_ScriptPool = 0; /*0x637724*/
  if ( (_UNKNOWN **)g_ScriptState == v5 ) /*0x637730*/
    g_ScriptState = 0; /*0x637732*/
  if ( (_UNKNOWN **)g_ScriptActionPool == v5 ) /*0x63773e*/
    g_ScriptActionPool = 0; /*0x637740*/
  return result; /*0x637747*/
}
}
} // namespace gamemd

// 0x638B70
namespace gamemd {
void sub_638B70(int * a1, int a2, char a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a2 != 11 ) /*0x638b79*/
    return 0; /*0x638b79*/
  if ( !a4 ) /*0x638b85*/
    return 1; /*0x638b8d*/
  if ( !a1 ) /*0x638b92*/
    return 0; /*0x638b92*/
  int v12; // [esp+10h] [ebp-4h] BYREF
  int v6 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 440))(a1, &v12); /*0x638ba4*/
  int v7 = *a1; /*0x638ba6*/
  v12 = v6; /*0x638baf*/
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v8 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 440))(a1, &v11); /*0x638bb9*/
  v11 = v8; /*0x638bbf*/
  _DWORD * v9 = Network_Process_6E7C20(&a3); /*0x638bc3*/
  if ( v9 ) /*0x638bca*/
  {
    v8 = v9[9]; /*0x638bcc*/
LABEL_9:
    v11 = v8; /*0x638bef*/
    return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638bef*/
  }
  void * v10 = BuildingLoadQueue::Find(&a3); /*0x638bd5*/
  if ( v10 ) /*0x638bdc*/
  {
    v8 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v10 + 440))(v10, &v11); /*0x638bed*/
    goto LABEL_9; /*0x638bed*/
  }
  return (_WORD)v6 == (_WORD)v8 && HIWORD(v12) == HIWORD(v11); /*0x638b89*/
}
}
} // namespace gamemd

// 0x65AD30
namespace gamemd {
int Team::GetMember(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *(_DWORD *)(this->q0E4 + 4 * (_DWORD)aP1); /*0x65ad3d*/
}
}
} // namespace gamemd

// 0x65AE30
namespace gamemd {
int Team::AllMembersValid()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *i; // ecx

  IUnknown *v1 = this->q0E8; /*0x65ae30*/
  int v2 = 0; /*0x65ae36*/
  if ( v1 <= 0 ) /*0x65ae3a*/
    return 0; /*0x65ae4f*/
  for ( i = (_DWORD *)this->q0E4; !*i; ++i ) /*0x65ae3c*/
  {
    if ( ++v2 >= v1 ) /*0x65ae4d*/
      return 0; /*0x65ae4d*/
  }
  return 1; /*0x65ae51*/
}
}
} // namespace gamemd

// 0x63A1B0
namespace gamemd {
void sub_63A1B0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax

  if ( DataGlobal_AC4BF4[a1] < 1 ) /*0x63a1bb*/
  {
    if ( a1 == 3 ) /*0x63a1c0*/
    {
      StringCSF = GetStringCSF(DataGlobal_836D0C, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1d3*/
    }
    else
    {
      if ( a1 != 4 ) /*0x63a1d8*/
      {
LABEL_7:
        ++DataGlobal_AC4BF4[a1]; /*0x63a1fc*/
        return; /*0x63a1fc*/
      }
      StringCSF = GetStringCSF(DataGlobal_836CF0, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a1eb*/
    }
    AddMessageListPlayerMessage(StringCSF, 480); /*0x63a1f7*/
    goto LABEL_7; /*0x63a1f7*/
  }
}
}
} // namespace gamemd

// 0x76ED10
namespace gamemd {
bool Team_Start_76ED10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int State; // eax
  wchar_t *StringCSF; // eax
  ScoreScreen v10[2]; // [esp-8h] [ebp-4CCh] BYREF

  if ( !*(_DWORD *)(a1 + 4) ) /*0x76ed10*/
    return 0; /*0x76ed20*/
  v10[0].ScoreScreen_field_0x04 = a3; /*0x76ed2a*/
  ConstructWDTSelection((Selection_WorldDominationTour *)&v10[0].ScoreScreen_field_0x1C, a1, a2); /*0x76ed31*/
  int v11; // [esp+60h] [ebp-464h]
  State = FileClass::GetState((_DWORD *)(v11 + 8)); /*0x76ed3f*/
  ScoreText::ShowAlt(&v10[0].ScoreScreen_field_0x1C, (CampaignScore *)(State + 20), 0); /*0x76ed4c*/
  StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76ed62*/
  WideString::Assign((wchar_t **)&v10[0].ScoreScreen_field_0x0C, (CampaignScore *)StringCSF); /*0x76ed6c*/
  ScoreText::Show(&v10[0].ScoreScreen_field_0x1C, (ObjectClass *)&v10[0].ScoreScreen_field_0x0C); /*0x76ed7a*/
  DeleteAndZero::Alt((void **)&v10[0].ScoreScreen_field_0x0C); /*0x76ed83*/
  *(_DWORD *)v10[0].__pad_0 = a2; /*0x76ed8c*/
  Team_Start_76E2F0((int)&v10[0].ScoreScreen_field_0x1C, v10[0]); /*0x76ed8d*/
  ShowWDTTerritorySelection((ObjectClass *)&v10[0].ScoreScreen_field_0x1C, &v10[0].ScoreScreen_field_0x14); /*0x76ed9b*/
  bool v7 = v10[0].ScoreScreen_field_0x18 != 0; /*0x76eda6*/
  if ( v10[0].ScoreScreen_field_0x18 ) /*0x76edab*/
  {
    g_GameDifficulty = *(INIClass **)(v10[0].ScoreScreen_field_0x18 + 8); /*0x76edba*/
    FindWDTTerritoryClass(&v10[0].ScoreScreen_field_0x0C, (int)g_GameDifficulty); /*0x76edbf*/
    if ( v10[0].ScoreScreen_field_0x10 ) /*0x76edca*/
    {
      g_Rules_MultiEngineer = *(unsigned __int8 *)(v10[0].ScoreScreen_field_0x10 + 14); /*0x76edd7*/
      g_RulesInitConfig = (ObjectClass *)*(unsigned __int8 *)(v10[0].ScoreScreen_field_0x10 + 15); /*0x76ede2*/
      g_Rules_Bases = *(unsigned __int16 *)(v10[0].ScoreScreen_field_0x10 + 16); /*0x76edec*/
      int v8 = *(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) >> 2; /*0x76edf5*/
      LOBYTE(HarvesterTruce) = 0; /*0x76edfd*/
      LOBYTE(AlliesAllowed) = v8 & 1; /*0x76ee06*/
      LOBYTE(Bases) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x10) != 0; /*0x76ee14*/
      LOBYTE(v8) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x20) != 0; /*0x76ee20*/
      LOBYTE(FOW) = 0; /*0x76ee22*/
      LOBYTE(MCVRedeploy) = v8; /*0x76ee29*/
      LOBYTE(BridgeDestruction) = 1; /*0x76ee2f*/
      LOBYTE(Crates) = BYTE1(*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56)) & 1; /*0x76ee3d*/
      LOBYTE(ShortGame) = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x400) != 0; /*0x76ee4b*/
      bool v9 = (*(_DWORD *)(v10[0].ScoreScreen_field_0x10 + 56) & 0x200) != 0; /*0x76ee57*/
      LOBYTE(g_Rules_ShortGame) = 0; /*0x76ee59*/
      LOBYTE(SWAllowed) = v9; /*0x76ee60*/
      g_Rules_AlliesAllowed = 0; /*0x76ee65*/
      DataGlobal_A8B278 = (IUnknown *)1; /*0x76ee6f*/
    }
    else
    {
      v7 = 0; /*0x76ee77*/
    }
    v10[0].ScoreScreen_field_0x0C = (int)&vt_rc_ptr_WDTTerritory; /*0x76ee7d*/
    ComPtr::Release((rc_ptr_base *)&v10[0].ScoreScreen_field_0x0C); /*0x76ee85*/
  }
  v10[0].ScoreScreen_field_0x14 = (int)&vt_rc_ptr_WorldDominationTour_Territory; /*0x76ee8e*/
  ComPtr::Release((rc_ptr_base *)&v10[0].ScoreScreen_field_0x14); /*0x76ee96*/
  SelectionInitializeWOL((Selection_WorldDominationTour *)&v10[0].ScoreScreen_field_0x1C); /*0x76ee9f*/
  return v7; /*0x76ed22*/
}
}
} // namespace gamemd

// 0x7AFAD0
namespace gamemd {
void Team_Start_7AFAD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v2; // eax
  char **v3; // esi
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = StaticString::Factory(a1); /*0x7afad7*/
  sprintf(Buffer, stru_84D874, *v2); /*0x7afae9*/
  void *v6; // [esp+4h] [ebp-88h] BYREF
  String::Assign((char **)&v6, Buffer); /*0x7afafa*/
  void *v7; // [esp+8h] [ebp-84h] BYREF
  String::Assign((char **)&v7, aWdtchoicemdIni); /*0x7afb08*/
  v3 = sub_4F1B80((char **)&v6, (char **)&v7, a2); /*0x7afb1e*/
  DeleteAndZero(&v7); /*0x7afb20*/
  DeleteAndZero(&v6); /*0x7afb29*/
  if ( !v3 ) /*0x7afb30*/
    return 0; /*0x7afb32*/
  int v5 = ProcessGraphicMenu((int)v3); /*0x7afb44*/
  (*(void (__thiscall **)(char **, int))*v3)(v3, 1); /*0x7afb4c*/
  switch ( v5 ) /*0x7afb52*/
  {
    case 1: /*0x7afb52*/
      return 1; /*0x7afb7e*/
    case 2: /*0x7afb52*/
      return 2; /*0x7afb71*/
    case 3: /*0x7afb52*/
      return 3; /*0x7afb64*/
  }
  return 0; /*0x7afb34*/
}
}
} // namespace gamemd

// 0x752460
namespace gamemd {
ObjectClass * Team_Helper_752460(int a1)
{
{
    if ( a1 < 0 || a1 >= *(int *)&DataGlobal_B1D188[808] )
    return (ObjectClass *)g_Str_none;
    else
    return *(ObjectClass **)(*(int *)&DataGlobal_B1D188[796] + 4 * a1);
}
}
} // namespace gamemd

// 0x765F60
namespace gamemd {
rc_ptr_base * Team_Create_765F60(rc_ptr_base * a1, int a2)
{
{
    rc_ptr_base *v4;
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
    v5 = v4;
    if ( v4 )
  {
    v6 = v4 + 2;
    v4[1].vfptr = 0;
    v4->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v4 + 2);
    v6->vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Set(v5 + 2, *(int *)(a2 + 4));
    v5->vfptr = &vt_WorldDominationTour_Conflict;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Conflict;
    ComPtr::Set(a1, (int)v5);
    return a1;
}
}
} // namespace gamemd

// 0x767B00
namespace gamemd {
rc_ptr_base * Team_Create_767B00(rc_ptr_base * a1, int a2)
{
{
    rc_ptr_base *v4;
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
    v5 = v4;
    if ( v4 )
  {
    v6 = v4 + 2;
    v4[1].vfptr = 0;
    v4->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v4 + 2);
    v6->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(v5 + 2, *(int *)(a2 + 4));
    v5->vfptr = &vt_WorldDominationTour_History;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_History;
    ComPtr::Set(a1, (int)v5);
    return a1;
}
}
} // namespace gamemd

// 0x76ECD0
namespace gamemd {
void Team_Start_76ECD0(int a1, ScoreScreen * a2)
{
{
    Selection_WorldDominationTour v4;
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
    ConstructWDTSelection(&v4, a1, (int)a2);
    Team_Start_76E750((int)&v4, a2);
    SelectionInitializeWOL(&v4);
}
}
} // namespace gamemd
