// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_641B00_e4.hpp"
#include "e4/classes/E4Recv_6429E0_e4.hpp"
#include "e4/classes/E4Recv_643720_e4.hpp"
#include "e4/classes/E4Recv_644850_e4.hpp"
#include "e4/classes/E4Recv_6458D0_e4.hpp"
#include "e4/classes/E4Recv_645B60_e4.hpp"
#include "e4/classes/E4Recv_645BB0_e4.hpp"
#include "e4/classes/E4Recv_645CD0_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/E4Recv_646D00_e4.hpp"
#include "e4/classes/E4Recv_64A7B0_e4.hpp"
#include "e4/classes/E4Recv_64AAA0_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x6406E0
namespace gamemd {
void unknown_libname_27()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
{
  *this = 0; /*0x6406e2*/
  return this; /*0x6406e8*/
}
}
} // namespace gamemd

// 0x645B60
namespace gamemd {
void * E4Recv_645B60::sub_645B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x645b65*/
  v3 = (const void **)&off_7F0248; /*0x645b67*/
  while ( _strcmpi(this, *v3) ) /*0x645b7a*/
  {
    ++v3; /*0x645b7c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x645b7f*/
    if ( (int)v3 >= (int)&flt_7F0278 ) /*0x645b86*/
      return 0; /*0x645b8d*/
  }
  return v2; /*0x645b88*/
}
}
} // namespace gamemd

// 0x645D60
namespace gamemd {
ObjectClass * * E4Recv_645D60::sub_645D60(float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3

  float v21 = *this; /*0x645d6f*/
  int v22 = this->M4; /*0x645d76*/
  int v23 = this->M8; /*0x645d7d*/
  int v24 = this->M12; /*0x645d88*/
  float v29[4]; // [esp+38h] [ebp-40h] BYREF
  float * v3 = sub_6460C0(v29, a2); /*0x645d8e*/
  float v30[4]; // [esp+48h] [ebp-30h] BYREF
  float * v4 = QuaternionMathMultiply(v30, &v21, v3); /*0x645d9c*/
  double v5 = *(this + 3); /*0x645da3*/
  int v6 = *((_DWORD *)v4 + 1); /*0x645da6*/
  int v25 = *(_DWORD *)v4; /*0x645da9*/
  int v7 = *((_DWORD *)v4 + 2); /*0x645daf*/
  int v26 = v6; /*0x645db2*/
  int v27 = v7; /*0x645db7*/
  int v20; // [esp+Ch] [ebp-6Ch]
  *(float *)&v20 = -v5; /*0x645dbe*/
  double v8 = *(this + 2); /*0x645dc1*/
  int v28 = *((_DWORD *)v4 + 3); /*0x645dc5*/
  int v19; // [esp+8h] [ebp-70h]
  *(float *)&v19 = -v8; /*0x645dcb*/
  int v18; // [esp+4h] [ebp-74h]
  *(float *)&v18 = -*(this + 1); /*0x645dd4*/
  int v17; // [esp+0h] [ebp-78h]
  *(float *)&v17 = -*this; /*0x645de0*/
  float * v9 = (float *)Int4::Set(v30, v17, v18, v19, v20); /*0x645de3*/
  v29[0] = *v9; /*0x645dea*/
  v29[1] = v9[1]; /*0x645df1*/
  v29[2] = v9[2]; /*0x645df8*/
  v29[3] = v9[3]; /*0x645e03*/
  float v31[4]; // [esp+58h] [ebp-20h] BYREF
  float * v10 = sub_6460C0(v31, a2); /*0x645e09*/
  float v32[4]; // [esp+68h] [ebp-10h] BYREF
  float * v11 = QuaternionMathMultiply(v32, v29, v10); /*0x645e17*/
  v21 = *v11; /*0x645e1e*/
  v22 = *((_DWORD *)v11 + 1); /*0x645e25*/
  int v12 = *((_DWORD *)v11 + 3); /*0x645e30*/
  v23 = *((_DWORD *)v11 + 2); /*0x645e33*/
  v24 = v12; /*0x645e3b*/
  if ( !(v14 | v15) ) /*0x645e97*/
  {
    *this = -*this; /*0x645ea2*/
    *(this + 1) = -*(this + 1); /*0x645ea9*/
    *(this + 2) = -*(this + 2); /*0x645eb1*/
    *(this + 3) = -*(this + 3); /*0x645eb9*/
  }
  return this; /*0x645ebe*/
}
}
} // namespace gamemd

// 0x646730
namespace gamemd {
void * ConvertMatrixToQuaternion(float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float *result; // eax

  _DWORD v26[3]; // [esp+1Ch] [ebp-4Ch]
  v26[2] = 10; /*0x64673d*/
  double v3 = a2[10] + a2[5]; /*0x646744*/
  _DWORD v31[12]; // [esp+38h] [ebp-30h]
  v31[10] = 10; /*0x646747*/
  float * v4 = a1; /*0x64674b*/
  int v5 = 0; /*0x64674d*/
  double v6 = v3 + *a2; /*0x646754*/
  float v27 = 0.0; /*0x64675a*/
  float v28 = 0.0; /*0x646762*/
  float v29 = 0.0; /*0x64676a*/
  float v30 = 1.0; /*0x646778*/
  v26[0] = 0; /*0x646780*/
  v26[1] = 5; /*0x646784*/
  v31[0] = 0; /*0x646788*/
  v31[1] = 1; /*0x64678c*/
  v31[2] = 2; /*0x646794*/
  v31[3] = 3; /*0x64679e*/
  v31[4] = 4; /*0x6467a6*/
  v31[5] = 5; /*0x6467b1*/
  v31[6] = 6; /*0x6467b5*/
  v31[7] = 7; /*0x6467bd*/
  v31[8] = 8; /*0x6467c5*/
  v31[9] = 9; /*0x6467cd*/
  v31[11] = 11; /*0x6467d5*/
  if ( v6 == 0.0 ) /*0x6467dd*/
  {
    float v7 = v28; /*0x6467e3*/
    result = a1; /*0x6467e7*/
    *a1 = v27; /*0x6467ec*/
    float v9 = v29; /*0x6467ee*/
    v4[1] = v7; /*0x6467f4*/
    float v10 = v30; /*0x6467f7*/
    v4[2] = v9; /*0x6467fb*/
    v4[3] = v10; /*0x6467fe*/
  }
  else
  {
    if ( v6 <= 0.0 ) /*0x646810*/
    {
  int v14; // edi
      int v13 = *a2 < (double)a2[5]; /*0x646876*/
      if ( a2[v26[v13]] < (double)a2[10] ) /*0x64688c*/
        v13 = 2; /*0x64688e*/
      if ( v13 == 1 ) /*0x646896*/
      {
        v14 = 2; /*0x6468b0*/
      }
      else if ( v13 == 2 ) /*0x646899*/
      {
        v14 = 0; /*0x6468a7*/
        v5 = 1; /*0x6468a9*/
      }
      else
      {
        v14 = 1; /*0x64689b*/
        v5 = 2; /*0x6468a0*/
      }
      double v15 = Math::Sqrt(a2[v26[v13]] - (a2[v26[v5]] + a2[v26[v14]]) + 1.0); /*0x6468de*/
      *(&v27 + v13) = v15 * 0.5; /*0x6468eb*/
      double v16 = 0.5 / v15; /*0x6468f5*/
      int v17 = v31[4 * v14 + v13]; /*0x646913*/
      int v18 = v31[4 * v13 + v14]; /*0x646917*/
      v30 = (a2[v31[4 * v5 + v14]] - a2[v31[4 * v14 + v5]]) * v16; /*0x64691d*/
      double v19 = a2[v17] + a2[v18]; /*0x646924*/
      int v20 = v31[4 * v5 + v13]; /*0x64692f*/
      int v21 = v31[4 * v13 + v5]; /*0x646933*/
      *(&v27 + v14) = v19 * v16; /*0x646939*/
      v4 = a1; /*0x646943*/
      *(&v27 + v5) = (a2[v20] + a2[v21]) * v16; /*0x646949*/
    }
    else
    {
      double v11 = Math::Sqrt(v6 + 1.0); /*0x64681e*/
      v30 = v11 * 0.5; /*0x64682b*/
      double v12 = 0.5 / v11; /*0x646832*/
      v27 = (a2[9] - a2[6]) * v12; /*0x646840*/
      v28 = (a2[2] - a2[8]) * v12; /*0x64684c*/
      v29 = (a2[4] - a2[1]) * v12; /*0x646858*/
    }
    float v22 = v28; /*0x646953*/
    *v4 = v27; /*0x646959*/
    float v23 = v29; /*0x64695b*/
    v4[1] = v22; /*0x64695f*/
    float v24 = v30; /*0x646962*/
    v4[2] = v23; /*0x646966*/
    v4[3] = v24; /*0x646969*/
    return v4; /*0x64696c*/
  }
  return result; /*0x646801*/
}
}
} // namespace gamemd

// 0x646F70
namespace gamemd {
char sub_646F70(IUnknown * a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v9; // [esp-20h] [ebp-98h]

  LOBYTE(v9) = a4; /*0x646fbd*/
  char *v7; // eax
  v7 = sub_4C68E0( /*0x646fcd*/
  char v10[112]; // [esp+8h] [ebp-70h] BYREF
         (AnimClass *)v10,
         *(_DWORD *)&HouseClass_Player->__pad_28[8],
         a3,
         v9,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a6,
         a7);
  if ( Networking_LastEventIndex >= 128 ) /*0x646fdc*/
    return 0; /*0x647036*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v7, 0x6Fu); /*0x646ff8*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x647009*/
  ++Networking_LastEventIndex; /*0x647020*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647025*/
  return 1; /*0x64702d*/
}
}
} // namespace gamemd

// 0x647260
namespace gamemd {
AbstractClass * * ProcessNetworkEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int Buffer; // [esp+10h] [ebp-74h] BYREF
  __int16 v7; // [esp+80h] [ebp-4h]
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x64726e*/
  {
  _BYTE v6[108]; // [esp+14h] [ebp-70h] BYREF
    v6[0] = 0; /*0x64727a*/
    if ( EventQueue::Process(g_BinkMoviePlayer) ) /*0x64727f*/
    {
      if ( EventQueue::Read(g_BinkMoviePlayer) == 27 || (g_NetworkEventPending & 4) != 0 ) /*0x6472a5*/
      {
        g_WTFMode = 0; /*0x6472aa*/
        return; /*0x6472b5*/
      }
    }
    else if ( (g_NetworkEventPending & 4) != 0 /*0x6472eb*/
           && (int)g_CurrentFrame > 0
           && (DataGlobal_AC50F8 != (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance)
            || DataGlobal_AC5200 != (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance)) )
    {
      g_WTFMode = 0; /*0x6472f0*/
      return; /*0x6472fb*/
    }
    DataGlobal_AC50F8 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance); /*0x64730d*/
    DataGlobal_AC5200 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance); /*0x647317*/
    ComputeNetworkFrameCRC(); /*0x64731c*/
    int v0 = (int)g_CurrentFrame; /*0x647321*/
    dword_B04474[(unsigned __int8)g_CurrentFrame] = *(_DWORD *)Networking_CurrentFrameCRC; /*0x647334*/
    if ( v0 >= DataGlobal_A8E30C ) /*0x647342*/
    {
      if ( byte_B04880 ) /*0x64734b*/
        LogMultiplayToSync_MPDEBUG(v0 % 256, 0); /*0x64735f*/
      else
        Multiplay::LogToSYNC_NOMPDEBUG(0); /*0x647368*/
      GameClass::Shutdown(); /*0x64736d*/
      ExitProgram(0); /*0x647374*/
    }
    if ( v0 ) /*0x647386*/
    {
      if ( g_GameMode_Current[0] /*0x6473b7*/
        && g_GameMode_Current[0] != 5
        && g_GameTypeFlags == 2
        && v0 != g_ScenarioLoadState * ((g_ScenarioLoadState + v0 - 1) / (unsigned int)g_ScenarioLoadState) )
      {
        return; /*0x6473b7*/
      }
    }
    else if ( g_GameMode_Current[0] ) /*0x64738a*/
    {
      return; /*0x64738a*/
    }
    if ( CCFileClass::Read(g_MainLoopObject, &Buffer, 4) != 4 ) /*0x6473cf*/
      goto LABEL_30; /*0x6473cf*/
    int v1 = 0; /*0x6473d9*/
    if ( Buffer > 0 ) /*0x6473dd*/
    {
      while ( CCFileClass::Read(g_MainLoopObject, v6, 111) == 111 ) /*0x6473fd*/
      {
        v6[1] &= ~1u; /*0x647414*/
        if ( dword_8B41F8 < 0x4000 ) /*0x647418*/
        {
          char * v2 = &unk_8B4204[111 * unk_8B4200]; /*0x64742e*/
          qmemcpy(v2, v6, 0x6Cu); /*0x647435*/
          v2 += 108; /*0x647435*/
          *(_WORD *)v2 = v7; /*0x647437*/
          char v8 = v8; /*0x647439*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x647442*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64745c*/
          ++dword_8B41F8; /*0x647462*/
        }
        if ( ++v1 >= Buffer ) /*0x64746e*/
          goto LABEL_29; /*0x64746e*/
      }
      goto LABEL_30; /*0x6473fd*/
    }
LABEL_29:
    if ( !Network::ProcessEventList(0, 0, 0) ) /*0x6474a0*/
    {
LABEL_30:
      g_WTFMode = 0; /*0x6474a9*/
      return; /*0x6474b7*/
    }
LABEL_31:
    Network_Process_64D990(0); /*0x6474b8*/
  }
  else
  {
    switch ( g_GameMode_Current[0] ) /*0x6474d5*/
    {
      case 0: /*0x6474d5*/
      case 5: /*0x6474d5*/
        while ( Networking_LastEventIndex ) /*0x6474e3*/
        {
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x647504*/
          if ( dword_8B41F8 < 0x4000 ) /*0x647515*/
          {
            char * v3 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x647522*/
            char * v4 = &unk_8B4204[111 * unk_8B4200]; /*0x647539*/
            qmemcpy(v4, v3, 0x6Cu); /*0x647540*/
            v3 += 108; /*0x647540*/
            v4 += 108; /*0x647540*/
            *(_WORD *)v4 = *(_WORD *)v3; /*0x647542*/
            v4[2] = v3[2]; /*0x647544*/
            dword_A70204[unk_8B4200] = timeGetTime(); /*0x64754d*/
            unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64755f*/
            ++dword_8B41F8; /*0x64756a*/
          }
          Network_Process_652540(&Networking_LastEventIndex); /*0x647574*/
        }
        if ( (g_NetworkEventPending & 1) != 0 ) /*0x64758d*/
          Network_Process_64D9E0(); /*0x64758f*/
        if ( Network::ProcessEventList(0, 0, 0) ) /*0x6475ae*/
          goto LABEL_31; /*0x6475b5*/
        g_WTFMode = 0; /*0x6475be*/
        break; /*0x6475c7*/
      case 1: /*0x6474d5*/
      case 2: /*0x6474d5*/
      case 3: /*0x6474d5*/
      case 4: /*0x6474d5*/
        Network::QueueProcessingLoop(); /*0x6475c8*/
        break; /*0x6475c8*/
      default:
        return;
    }
  }
}
}
} // namespace gamemd

// 0x648350
namespace gamemd {
void RunNetworkGameLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v0; // eax
  void *v1; // ebx
  int *v2; // esi
  wchar_t *v9; // ebx
  void *v12; // [esp+10h] [ebp-60h]
  DWORD v18; // [esp+2Ch] [ebp-44h] BYREF
  DWORD TicksTimer; // [esp+34h] [ebp-3Ch]
  int v21; // [esp+3Ch] [ebp-34h]
  DWORD v22; // [esp+40h] [ebp-30h]
  int v24; // [esp+48h] [ebp-28h]
  DWORD v25; // [esp+4Ch] [ebp-24h]
  DWORD v28; // [esp+58h] [ebp-18h]
  DWORD v31; // [esp+64h] [ebp-Ch]
  Debug::Log(); /*0x64835c*/
  if ( g_GameMode_Current[0] < 3 || g_GameMode_Current[0] > 4 ) /*0x648371*/
  {
    v12 = (void *)DataGlobal_A8EA74; /*0x648393*/
    v2 = &g_EventManager; /*0x648397*/
    v1 = (void *)DataGlobal_A8EA74; /*0x64839c*/
    v0 = DataGlobal_A8EA78 - 14; /*0x6483a0*/
  }
  else
  {
    v0 = DataGlobal_A8DA40; /*0x648373*/
    v1 = &DataGlobal_A8D812; /*0x648378*/
    v12 = &DataGlobal_A8D812; /*0x64837d*/
    v2 = g_NetworkManager; /*0x648381*/
  }
  LOWORD(dword_AFA400) = BuildNetworkEventPacket((int)v2, (int)v1, v0, (int)g_ScenarioState, dword_AFA400) /*0x6483c1*/
                       + dword_AFA400;
  TicksTimer = Timer::GetTicks(); /*0x6483d5*/
  v21 = 15; /*0x6483d9*/
  v22 = Timer::GetTicks(); /*0x6483ea*/
  v24 = 600; /*0x6483ee*/
  v18 = Timer::GetTicks(); /*0x6483fb*/
  Debug::Log(); /*0x648404*/
  while ( 2 ) /*0x64840c*/
  {
  int v8; // ecx
    EventQueue::Process(g_BinkMoviePlayer); /*0x64840c*/
    int v3 = v21; /*0x64841b*/
    if ( TicksTimer == -1 ) /*0x648424*/
    {
LABEL_9:
      if ( v3 ) /*0x64843b*/
        goto LABEL_11; /*0x64843b*/
      goto LABEL_10; /*0x64843b*/
    }
    signed int v4 = Timer::GetTicks() - TicksTimer; /*0x64842f*/
    if ( v4 < v3 ) /*0x648435*/
    {
      v3 -= v4; /*0x648437*/
      goto LABEL_9; /*0x648437*/
    }
LABEL_10:
    v25 = Timer::GetTicks(); /*0x64843d*/
    int v27 = 15; /*0x648458*/
    TicksTimer = v25; /*0x64845c*/
  int v26; // [esp+50h] [ebp-20h]
    int v20 = v26; /*0x648460*/
    v21 = 15; /*0x648464*/
    Debug::Log(); /*0x648468*/
    SendNetworkFrameSync(v2, dword_AFA400); /*0x64847e*/
LABEL_11:
    (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648483*/
    int v5 = v24; /*0x64848e*/
    if ( v22 != -1 ) /*0x648494*/
    {
      signed int v6 = Timer::GetTicks() - v22; /*0x64849f*/
      if ( v6 >= v5 ) /*0x6484a5*/
      {
LABEL_33:
        Debug::Log(); /*0x648664*/
        return; /*0x648678*/
      }
      v5 -= v6; /*0x6484ab*/
    }
    if ( !v5 ) /*0x6484af*/
      goto LABEL_33; /*0x6484af*/
    int v7 = 1; /*0x6484b5*/
    do /*0x64858f*/
    {
  unsigned int v13; // [esp+18h] [ebp-58h] BYREF
  int v14; // [esp+1Ch] [ebp-54h] BYREF
      if ( !(*(int (__thiscall **)(int *, void *, unsigned int *, int *))(*v2 + 12))(v2, v1, &v13, &v14) ) /*0x6484c9*/
        break; /*0x6484ce*/
      EventQueue::Process(g_BinkMoviePlayer); /*0x6484da*/
      if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x6484ec*/
      {
        switch ( ProcessNetworkMessage((int)v1, 0) ) /*0x648528*/
        {
          case 0: /*0x648528*/
            goto LABEL_23;
          case 4: /*0x648528*/
            (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648533*/
            v28 = Timer::GetTicks(); /*0x648544*/
            TicksTimer = v28; /*0x648548*/
            int v30 = 15; /*0x648550*/
            v21 = 15; /*0x648554*/
            int v29 = v29; /*0x64855c*/
            v31 = Timer::GetTicks(); /*0x64856e*/
            int v33 = 600; /*0x648572*/
            v22 = v31; /*0x648576*/
  int v32; // [esp+68h] [ebp-8h]
            int v23 = v32; /*0x64857a*/
            v24 = 600; /*0x64857e*/
            goto LABEL_23; /*0x64857e*/
          default:
            return;
        }
        return;
      }
      if ( ProcessNetworkFrameSync((int)v2, (int)v1, v14, v13, (int)&dword_AFA358, &v18) == 3 ) /*0x64850e*/
        goto LABEL_33; /*0x64850e*/
LABEL_23:
      (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648586*/
      v8 = v7++; /*0x648589*/
    }
    while ( v8 < 64 ); /*0x64858f*/
    Event::Dispatch(); /*0x648595*/
    if ( !DataGlobal_A8EDA0 ) /*0x6485a1*/
    {
  int v15; // [esp+20h] [ebp-50h] BYREF
  int v16; // [esp+24h] [ebp-4Ch] BYREF
  int v17; // [esp+28h] [ebp-48h] BYREF
      InputManager_ProcessEvents::Vtable((int *)&DataGlobal_87F7E8, &v15, &v17, &v16); /*0x6485b7*/
      SyncDelayClass::ProcessNetworkSync(&v15); /*0x6485c0*/
      ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->__tail_0[2].GetSizeMax)(g_TacticalClass_Instance); /*0x6485cd*/
      TacticalMap::Redraw(&DataGlobal_87F7E8); /*0x6485d5*/
    }
    v9 = g_CurrentFrame + 500; /*0x6485e7*/
    int v10 = 0; /*0x6485ed*/
    if ( (*(int (__thiscall **)(int *))(*v2 + 16))(v2) > 0 ) /*0x6485f4*/
    {
      int * v11 = &dword_AFA358; /*0x6485f6*/
      do /*0x648615*/
      {
        if ( *v11 < (int)v9 ) /*0x648600*/
          v9 = (wchar_t *)*v11; /*0x648602*/
        ++v10; /*0x64860c*/
        v11 += 6; /*0x64860d*/
      }
      while ( v10 < (*(int (__thiscall **)(int *))(*v2 + 16))(v2) ); /*0x648615*/
    }
    if ( (int)((char *)v9 + g_ScenarioLoadState) < (int)g_CurrentFrame ) /*0x64862a*/
    {
      Debug::Log(); /*0x64863e*/
      v1 = v12; /*0x648643*/
      continue; /*0x64864a*/
    }
    break;
  }
  Debug::Log(); /*0x64867f*/
  Debug::Log(); /*0x648689*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x64869f*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486b2*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486c5*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486d8*/
}
}
} // namespace gamemd

// 0x648710
namespace gamemd {
AbstractClass * * QueueNetworkProcessor(CellStruct * aP0, int * a1, int arg0, int arg4, ScenarioClass * a4, int a6, short arg10, int * a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MSVQAnim *v9; // esi
  ObjectClass *v10; // ebp
  ObjectClass *Time; // edi
  ObjectClass *v13; // edi
  ObjectClass *v14; // esi
  ObjectClass *v15; // eax
  IPXManagerClass *v17; // edx
  signed int eax18; // eax
  MSVQAnim *v23; // esi
  signed int eax25; // eax
  MSVQAnim *v25; // esi
  SkirmishDialog *Indirect; // eax
  int RemainingMs; // kr04_4
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  ObjectClass *v38; // esi
  CellStruct *v40; // ebp
  CellStruct *v41; // eax
  int ConnectionSpeed; // eax
  CellStruct *v44; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  int i; // esi
  int j; // esi
  ScenarioClass *v58; // esi
  ObjectClass *v60; // eax
  ObjectClass *v62; // eax
  ObjectClass *v63; // eax
  int *edi133; // edi
  ObjectClass *v73; // edi
  CCINIClass *v75; // edx
  int edx158; // edx
  ObjectClass *v76; // esi
  HWND esi181; // esi
  MSVQAnim *v79; // esi
  HWND v81; // esi
  HWND v82; // esi
  HWND v83; // esi
  HWND esi224; // esi
  CCINIClass *v84; // eax
  wchar_t *v86; // [esp-2h] [ebp-738h]
  wchar_t *_FFFFFFFEa; // [esp-2h] [ebp-738h]
  MSVQAnim *v87; // [esp+2h] [ebp-734h]
  MSVQAnim *v88; // [esp+2h] [ebp-734h]
  MSVQAnim *Class; // [esp+2h] [ebp-734h]
  MSVQAnim *v90; // [esp+2h] [ebp-734h]
  MSVQAnim *v91; // [esp+2h] [ebp-734h]
  ObjectClass *v92; // [esp+6h] [ebp-730h]
  CampaignScore *_A; // [esp+Ah] [ebp-72Ch]
  ObjectClass *v94; // [esp+1Ah] [ebp-71Ch]
  ObjectClass *v96; // [esp+22h] [ebp-714h]
  ObjectClass *v97; // [esp+22h] [ebp-714h]
  ObjectClass *Ticks; // [esp+2Ah] [ebp-70Ch]
  MSVQAnim *v100; // [esp+32h] [ebp-704h]
  MSVQAnim *v101; // [esp+36h] [ebp-700h] BYREF
  ObjectClass *v102; // [esp+3Ah] [ebp-6FCh]
  ScenarioClass *v103; // [esp+3Eh] [ebp-6F8h]
  DWORD v106; // [esp+42h] [ebp-6F4h]
  MSVQAnim *v105; // [esp+46h] [ebp-6F0h]
  MSVQAnim *v108; // [esp+4Ah] [ebp-6ECh]
  ObjectClass *v107; // [esp+4Eh] [ebp-6E8h]
  CCINIClass **var6E4; // [esp+52h] [ebp-6E4h]
  ObjectClass *v109; // [esp+56h] [ebp-6E0h]
  MSVQAnim *v110; // [esp+5Ah] [ebp-6DCh]
  ObjectClass *v111; // [esp+5Eh] [ebp-6D8h]
  ObjectClass *v113; // [esp+66h] [ebp-6D0h]
  MSVQAnim *v116; // [esp+6Ah] [ebp-6CCh]
  ScenarioClass *v117; // [esp+6Eh] [ebp-6C8h]
  _DWORD var6C0[2]; // [esp+76h] [ebp-6C0h] BYREF
  DWORD v120; // [esp+7Eh] [ebp-6B8h]
  IPXManagerClass *v119; // [esp+82h] [ebp-6B4h]
  IPXManagerClass *v121; // [esp+8Ah] [ebp-6ACh] BYREF
  int var6A0; // [esp+96h] [ebp-6A0h]
  int var69C; // [esp+9Ah] [ebp-69Ch] BYREF
  MouseClass *v126; // [esp+9Eh] [ebp-698h]
  ObjectClass *v127; // [esp+A2h] [ebp-694h]
  BOOL var690; // [esp+A6h] [ebp-690h]
  ObjectClass *v129; // [esp+AAh] [ebp-68Ch]
  ObjectClass *v130; // [esp+AEh] [ebp-688h] BYREF
  unsigned int var684; // [esp+B2h] [ebp-684h] BYREF
  int v134[7]; // [esp+B6h] [ebp-680h] BYREF
  ObjectClass *v133; // [esp+D2h] [ebp-664h]
  IPXManagerClass *var660; // [esp+D6h] [ebp-660h]
  int var65C; // [esp+DAh] [ebp-65Ch]
  ObjectClass *v136; // [esp+DEh] [ebp-658h]
  ObjectClass *v137; // [esp+E2h] [ebp-654h]
  ObjectClass *v138; // [esp+E6h] [ebp-650h]
  ObjectClass *v139; // [esp+EAh] [ebp-64Ch]
  MSVQAnim *var648; // [esp+EEh] [ebp-648h]
  ObjectClass *v141; // [esp+F2h] [ebp-644h]
  ScenarioClass *v142; // [esp+F6h] [ebp-640h]
  ObjectClass *var63C; // [esp+FAh] [ebp-63Ch]
  ScenarioClass *v146; // [esp+FEh] [ebp-638h]
  ObjectClass *v145; // [esp+102h] [ebp-634h]
  ObjectClass *var630; // [esp+106h] [ebp-630h]
  ScenarioClass *var62C; // [esp+10Ah] [ebp-62Ch]
  ObjectClass *v148; // [esp+10Eh] [ebp-628h]
  ObjectClass *v149; // [esp+112h] [ebp-624h]
  int var620; // [esp+116h] [ebp-620h]
  ObjectClass *v151; // [esp+11Ah] [ebp-61Ch]
  ObjectClass *v152; // [esp+122h] [ebp-614h]
  DWORD v155; // [esp+126h] [ebp-610h]
  MSVQAnim *v156; // [esp+12Ah] [ebp-60Ch]
  ObjectClass *var608; // [esp+12Eh] [ebp-608h]
  ObjectClass *v158; // [esp+132h] [ebp-604h]
  ObjectClass *v157; // [esp+13Ah] [ebp-5FCh]
  DWORD v162; // [esp+152h] [ebp-5E4h]
  int v163; // [esp+15Ah] [ebp-5DCh]
  DWORD v164; // [esp+15Eh] [ebp-5D8h]
  int v165; // [esp+166h] [ebp-5D0h]
  wchar_t lParam[512]; // [esp+16Eh] [ebp-5C8h] BYREF
  char Destination[43]; // [esp+572h] [ebp-1C4h] BYREF
  MouseClass *v172; // [esp+5A5h] [ebp-191h]
  ObjectClass *v173; // [esp+5A9h] [ebp-18Dh]
  int * v8 = a1;
  v9 = 0;
  char v95 = 0;
  var6E4 = *(CCINIClass ***)&stru_87C374[44948];
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  v94 = 0;
  v10 = (ObjectClass *)arg4;
  v162 = Timer::GetTicks();
  v163 = 2 * arg4;
  v164 = Timer::GetTicks();
  v165 = arg4 / 2;
  v107 = 0;
  Ticks = (ObjectClass *)Timer::GetTicks();
  v100 = (MSVQAnim *)arg0;
  v106 = Timer::GetTicks();
  v105 = v116;
  v108 = (MSVQAnim *)arg4;
  v101 = (MSVQAnim *)Timer::GetTicks();
  v102 = (ObjectClass *)v116;
  v103 = a4;
  var6C0[0] = Timer::GetTicks();
  var6C0[1] = v129;
  v111 = (ObjectClass *)180;
  v109 = (ObjectClass *)Timer::GetTicks();
  v110 = v116;
  v120 = Timer::GetTicks();
  int v122 = 300;
  int v118 = 0;
  Time = (ObjectClass *)timeGetTime();
  if ( (*(int (__thiscall **)(int *))(*v8 + 16))(v8) > 0 )
  {
    int * v12 = a7 + 5;
    do
    {
      *v12 = (int)Time;
      v9 = (MSVQAnim *)((char *)v9 + 1);
      v12 += 6;
    }
    while ( (int)v9 < (*(int (__thiscall **)(int *))(*v8 + 16))(v8) );
LABEL_4:
    v10 = (ObjectClass *)arg4;
  }
  v13 = (ObjectClass *)arg0;
  EventQueue::Process(*(_DWORD **)&stru_87C374[13308]);
  v14 = (ObjectClass *)v100;
  if ( Ticks == (ObjectClass *)-1 )
  {
LABEL_8:
    if ( v14 )
      goto LABEL_17;
    goto LABEL_9;
  }
  v15 = (ObjectClass *)(Timer::GetTicks() - (_DWORD)Ticks);
  if ( (int)v15 < (int)v100 )
  {
    v14 = (ObjectClass *)((char *)v100 - (char *)v15);
    goto LABEL_8;
  }
LABEL_9:
  v151 = (ObjectClass *)Timer::GetTicks();
  Ticks = v151;
  v152 = (ObjectClass *)arg0;
  v100 = (MSVQAnim *)arg0;
  SendNetworkFrameSync(v8, arg10);
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && HouseClass_Player[40532] )
  {
    Network::Disconnect(&HouseClass_Player[44148]);
    Debug::Log();
    int v168 = 39;
    char * v16 = ToWideStringChar(**(IUnknown ***)&HouseClass_Player[40236]);
    strncpy(Destination, v16, (IUnknown *)0x14);
    HIWORD(v17) = *(_WORD *)&HouseClass_Player[40538];
    int v170 = *(_DWORD *)(HouseClass_Player.field_0 + 48);
    var69C = *(_DWORD *)&HouseClass_Player[40536];
    LOWORD(v17) = *(_WORD *)&HouseClass_Player[40560];
    v127 = *(ObjectClass **)&HouseClass_Player[40544];
    v126 = *(MouseClass **)&HouseClass_Player[40540];
    Network::SetPort(&var69C, v17);
    int v18 = 1;
    int v171 = var69C;
    v172 = v126;
    v173 = v127;
    if ( *(int *)&HouseClass_Player[40248] > 1 )
    {
      int v19 = *(_DWORD *)&HouseClass_Player[40236];
      _WORD * v20 = (_WORD *)(&HouseClass_Player + 42344);
      do
      {
        int v21 = *(_DWORD *)(*(_DWORD *)(v19 + 4 * v18) + 111);
        if ( v21 != *(_DWORD *)(HouseClass_Player.field_0 + 48) )
        {
          LOWORD(v21) = *v20;
          Network::SendMessage(
            (int)&HouseClass_Player[44148],
            (int)&v168,
            91,
            0,
            *(_DWORD *)(v19 + 4 * v18) + 40,
            v21,
            0);
          v19 = *(_DWORD *)&HouseClass_Player[40236];
        }
        ++v18;
        ++v20;
      }
      while ( v18 < *(int *)&HouseClass_Player[40248] );
    }
    Event::Dispatch();
    v13 = (ObjectClass *)arg0;
  }
LABEL_17:
  int v22 = v122;
  if ( v120 != -1 )
  {
    eax18 = Timer::GetTicks() - v120;
    if ( eax18 >= v22 )
      goto LABEL_21;
    v22 -= eax18;
  }
  if ( !v22 )
  {
LABEL_21:
    if ( !aP0 )
    {
      v133 = (ObjectClass *)Timer::GetTicks();
      var65C = 300;
      v120 = (DWORD)v133;
      v119 = var660;
      v122 = 300;
      goto LABEL_34;
    }
    goto LABEL_24;
  }
  if ( !aP0 )
    goto LABEL_34;
LABEL_24:
  v23 = (MSVQAnim *)v111;
  if ( v109 == (ObjectClass *)-1 )
    goto LABEL_27;
  eax25 = Timer::GetTicks() - (_DWORD)v109;
  if ( eax25 < (int)v23 )
  {
    v23 = (MSVQAnim *)((char *)v23 - eax25);
LABEL_27:
    if ( v23 )
      goto LABEL_34;
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 1
    || *(_DWORD *)&HouseClass_Player[29932] == 2
    || HouseClass_Player[40532] )
  {
    Debug::Log();
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
      Network::Disconnect(&HouseClass_Player[44148]);
    Multiplayer::ShowProgress(
      &HouseClass_Player[29932],
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13501) != 0 ? 200 : 100);
    v148 = (ObjectClass *)Timer::GetTicks();
    var620 = 180;
    v109 = v148;
    v110 = (MSVQAnim *)v149;
    v111 = (ObjectClass *)180;
  }
LABEL_34:
  (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
  v25 = v108;
  if ( v106 != -1 )
  {
    int v27 = Timer::GetTicks() - v106;
    if ( v27 >= (int)v25 )
      goto LABEL_38;
    v25 = (MSVQAnim *)((char *)v25 - v27);
  }
  if ( v25 )
    goto LABEL_93;
LABEL_38:
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
    Network::Disconnect(&HouseClass_Player[44148]);
  int v28 = *v8;
  BOOL v29 = v94 == 0;
  var690 = aP0 == 0;
  int v30 = (*(int (__thiscall **)(int *))(v28 + 16))(v8);
  int v114 = v30;
  dword_AFA418 = Timer::GetTicks() - var6C0[0];
  if ( v30 > 0 )
  {
    char * v31 = (char *)&unk_AFA278;
    int v32 = v30;
    do
    {
      char * v33 = &v31[(char *)a7 - (char *)&unk_AFA278];
      char * v34 = v31;
      v31 += 24;
      --v32;
      qmemcpy(v34, v33, 0x18u);
    }
    while ( v32 );
    v29 = v94 == 0;
  }
  if ( v29 )
  {
    byte_B04894 = HouseClass_Player[42540];
    HouseClass_Player[42540] = 0;
    dword_B04468 = -1;
    Indirect = (SkirmishDialog *)CreateDialogIndirect(g_hInstance, (HWND)0xEA, g_hWnd, NetworkScore::DlgProc, 0);
    *(&g_MatrixTransformState + 7698) = (CoordStruct *)Indirect;
    if ( !Indirect )
      goto LABEL_50;
    SetWindowLongA((HWND)Indirect, 8, (LONG)&dword_B04468);
    SetupDialog(*(&g_MatrixTransformState + 7698), 234);
    ShowWindow((HWND)*(&g_MatrixTransformState + 7698), 1);
    SendMessageA((HWND)*(&g_MatrixTransformState + 7698), 0x4A9u, 0, 1);
    byte_B04470 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 28))(*(_DWORD *)&stru_87C374[45772]);
    if ( byte_B04470 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 20))(*(_DWORD *)&stru_87C374[45772]);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 16))(*(_DWORD *)&stru_87C374[45772]);
  }
  Indirect = (SkirmishDialog *)*(&g_MatrixTransformState + 7698);
LABEL_50:
  if ( dword_B04468 == 2 )
  {
    CloseDialog((HWND)Indirect, 0);
    if ( byte_B04470 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
    HouseClass_Player[42540] = byte_B04894;
    MapClass::MarkForRedraw(&stru_87C374[13428], 2);
    if ( v94 )
    {
      v76 = (ObjectClass *)Dialog::FindByHandle((void *)0xEA);
      if ( v76 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
        CloseDialog((HWND)v76, 0);
        HouseClass_Player[42540] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374[13428], 2);
        if ( HouseClass_Player[42540] )
          TacticalMap::Redraw(&stru_87C374[13428]);
      }
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
      Connection::Close(&HouseClass_Player[44148]);
    if ( byte_B04878 )
    {
      Network::SendUnreachable();
      return 9;
    }
    else
    {
      Network::SendUnreachable();
      return 8;
    }
  }
  RemainingMs = Timer::GetRemainingMs((signed int *)&v101);
  if ( v29 )
    goto LABEL_54;
  if ( (wchar_t *)(RemainingMs / 60) != dword_B04898 )
  {
    v29 = v94 == 0;
LABEL_54:
    dword_B04898 = (wchar_t *)(RemainingMs / 60);
    DlgItem = GetDlgItem((HWND)*(&g_MatrixTransformState + 7698), 1616);
    if ( DlgItem )
    {
      v87 = (MSVQAnim *)dword_B04898;
      StringCSF = GetStringCSF((wchar_t *)&stru_830620[28916], 0, &stru_830620[28288], 3853);
      swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v87, (CampaignScore *)v92);
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam);
    }
    if ( ((unsigned __int8)dword_B04898 & 1) == 0 )
      PostMessageA((HWND)*(&g_MatrixTransformState + 7698), 0xFu, 0, 0);
    if ( v29 )
    {
      while ( *(_DWORD *)&HouseClass_Player[32236] )
      {
        __3_YAXPAX_Z(**(void ***)&HouseClass_Player[32224]);
        Network_Process_652560(&HouseClass_Player[32220], 0);
      }
      memset(&HouseClass_Player[32244], 0, 0x20u);
      memset(&HouseClass_Player[32276], 0xFFu, 0x100u);
      v38 = (ObjectClass *)GetDlgItem((HWND)*(&g_MatrixTransformState + 7698), 1617);
      if ( v38 )
      {
        if ( var690 )
        {
          v40 = 0;
          v41 = 0;
          int v42 = 0x7FFFFFFF;
          if ( v114 > 0 )
          {
            int * v43 = a7;
            do
            {
              if ( *v43 < v42 )
              {
                v42 = *v43;
                v40 = v41;
              }
              v41 = (CellStruct *)((char *)v41 + 1);
              v43 += 6;
            }
            while ( (int)v41 < v114 );
          }
          if ( *(_DWORD *)&HouseClass_Player[29932] == 3
            || *(_DWORD *)&HouseClass_Player[29932] == 4 )
          {
            ConnectionSpeed = Network::GetConnectionSpeed(&HouseClass_Player[44148], v40);
            Class = (MSVQAnim *)Network::GetClass((int *)&HouseClass_Player[44148], ConnectionSpeed);
            _FFFFFFFEa = GetStringCSF((wchar_t *)&stru_830620[28896], 0, &stru_830620[28288], 3908);
            swprintf(lParam, (const size_t)_FFFFFFFEa, (const wchar_t *const)Class, (CampaignScore *)v92);
          }
          else
          {
            v88 = *(MSVQAnim **)(*(_DWORD *)&HouseClass_Player[40236] + 4);
            v86 = GetStringCSF((wchar_t *)&stru_830620[28896], 0, &stru_830620[28288], 3914);
            swprintf(lParam, (const size_t)v86, (const wchar_t *const)v88, (CampaignScore *)v92);
          }
          DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374[46016], (HWND)v38);
          v44 = *(CellStruct **)&HouseClass_Player[29932];
          if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
          {
            v46 = GetStringCSF((wchar_t *)&stru_830620[28876], 0, &stru_830620[28288], 3928);
            wcscpy(lParam, v46);
            wcscat(lParam, &stru_82083C);
            v47 = GetStringCSF((wchar_t *)&stru_830620[28852], 0, &stru_830620[28288], 3930);
            wcscat(lParam, (CampaignScore *)v47);
            wcscat(lParam, &stru_82083C);
            v48 = GetStringCSF((wchar_t *)&stru_830620[28828], 0, &stru_830620[28288], 3932);
            wcscat(lParam, (CampaignScore *)v48);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374[46016], (HWND)v38);
            v44 = *(CellStruct **)&HouseClass_Player[29932];
            if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
              goto LABEL_75;
          }
          if ( v44 == (CellStruct *)3 )
          {
LABEL_75:
            v49 = GetStringCSF((wchar_t *)&stru_830620[28808], 0, &stru_830620[28288], 3939);
            wcscpy(lParam, v49);
            wcscat(lParam, &stru_82083C);
            if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
            {
              v90 = (MSVQAnim *)GetStringCSF(
                                  (wchar_t *)&stru_830620[28784],
                                  0,
                                  &stru_830620[28288],
                                  3943);
              wcscat(lParam, (CampaignScore *)v90);
            }
            else if ( *(_DWORD *)&HouseClass_Player[29932] == 3 )
            {
              v91 = (MSVQAnim *)GetStringCSF(
                                  (wchar_t *)&stru_830620[28764],
                                  0,
                                  &stru_830620[28288],
                                  3945);
              wcscat(lParam, (CampaignScore *)v91);
            }
            DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374[46016], (HWND)v38);
          }
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374[46016], (HWND)v38);
          v50 = GetStringCSF((wchar_t *)&stru_830620[28744], 0, &stru_830620[28288], 3955);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, v50, (HWND)v38);
          v51 = GetStringCSF((wchar_t *)&stru_830620[28724], 0, &stru_830620[28288], 3960);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, v51, (HWND)v38);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374[46016], (HWND)v38);
        }
        else
        {
          v52 = GetStringCSF((wchar_t *)&stru_830620[28696], 0, &stru_830620[28288], 3963);
          swprintf(lParam, (const size_t)v52, (const wchar_t *const)v92, _A);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
        }
      }
    }
  }
  if ( *(int *)&HouseClass_Player[32236] > 0 )
  {
    Network_Process_64AD10(
      *(_DWORD *)(**(_DWORD **)&HouseClass_Player[32224] + 51),
      *(_DWORD *)(**(_DWORD **)&HouseClass_Player[32224] + 47));
    __3_YAXPAX_Z(**(void ***)&HouseClass_Player[32224]);
    Network_Process_652560(&HouseClass_Player[32220], 0);
  }
  int v53 = *(_DWORD *)&HouseClass_Player[40248];
  for ( i = 0; i < *(int *)&HouseClass_Player[40248]; ++i )
  {
    if ( *(_DWORD *)&HouseClass_Player[21864][4
                                                * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236]
                                                                        + 4 * i)
                                                            + 111)
                                                + 10380] >= v53 - 1 )
    {
      Debug::Log();
      if ( !i )
      {
        Debug::Log();
        for ( j = 1; j < *(int *)&HouseClass_Player[40248]; ++j )
        {
  int v57; // eax
          v57 = (*(int (__thiscall **)(int *, _DWORD))(*v8 + 24))(
                  v8,
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * j) + 111));
          KickNetworkPlayerNow((int)v8, v57, (int)a7, 0);
        }
        break;
      }
  int v55; // eax
      v55 = (*(int (__thiscall **)(int *, _DWORD))(*v8 + 24))(
              v8,
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * i) + 111));
      KickNetworkPlayerNow((int)v8, v55, (int)a7, 1u);
    }
    v53 = *(_DWORD *)&HouseClass_Player[40248];
  }
  v10 = (ObjectClass *)arg4;
  v13 = (ObjectClass *)arg0;
  v94 = (ObjectClass *)1;
LABEL_93:
  v58 = v103;
  if ( v101 == (MSVQAnim *)-1 )
    goto LABEL_96;
  signed int v59 = Timer::GetTicks() - (_DWORD)v101;
  if ( v59 < (int)v58 )
  {
    v58 = (ScenarioClass *)((char *)v58 - v59);
LABEL_96:
    if ( v58 )
    {
LABEL_100:
      v96 = (ObjectClass *)1;
      while ( 1 )
      {
        if ( !(*(int (__thiscall **)(int *, int, unsigned int *, ObjectClass **))(*v8 + 12))(v8, a6, &var684, &v130) )
          goto LABEL_120;
        EventQueue::Process(*(_DWORD **)&stru_87C374[13308]);
        if ( *(_DWORD *)&HouseClass_Player[29932] == 1 || *(_DWORD *)&HouseClass_Player[29932] == 2 )
        {
          int v61 = ProcessNetworkMessage(a6, (int)aP0);
          switch ( v61 )
          {
  int v125; // [esp+92h] [ebp-6A4h]
  int v124; // [esp+8Eh] [ebp-6A8h]
            case 4:
              (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
              v158 = (ObjectClass *)Timer::GetTicks();
              Ticks = v158;
              v157 = v13;
              v100 = (MSVQAnim *)v13;
              v62 = (ObjectClass *)Timer::GetTicks();
              v141 = v10;
              v108 = (MSVQAnim *)v10;
              v139 = v62;
              v106 = (DWORD)v62;
              v105 = var648;
              v142 = (ScenarioClass *)Timer::GetTicks();
              v101 = (MSVQAnim *)v142;
              v146 = a4;
              v102 = var63C;
              v103 = a4;
              goto LABEL_116;
            case 5:
              if ( aP0 )
                v107 = (ObjectClass *)((char *)v107 + 1);
LABEL_120:
              if ( v94 )
                (*(void (__thiscall **)(int *))(*v8 + 16))(v8);
              if ( aP0 )
              {
                int v66 = (*(int (__thiscall **)(int *))(*v8 + 16))(v8);
                if ( (int)v107 < v66 )
                {
LABEL_162:
                  Event::Dispatch();
                  if ( !aP0 && !*(_DWORD *)&HouseClass_Player[45140] && !v94 )
                  {
                    InputManager_ProcessEvents::Vtable(
                      (int *)&stru_87C374[13428],
                      (MouseClass *)v134,
  char v161; // [esp+14Eh] [ebp-5E8h] BYREF
                      (MouseClass *)&v161,
  int a3; // [esp+16Ah] [ebp-5CCh] BYREF
                      &a3);
                    SyncDelayClass::ProcessNetworkSync(v134);
                    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[44976] + 92))(*(_DWORD *)&stru_87C374[44976]);
                    TacticalMap::Redraw(&stru_87C374[13428]);
                  }
                  ++v118;
                  goto LABEL_4;
                }
LABEL_223:
                if ( v94 )
                {
                  esi224 = (HWND)Dialog::FindByHandle((void *)0xEA);
                  if ( esi224 )
                  {
                    if ( byte_B04470 )
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
                    CloseDialog(esi224, 0);
                    HouseClass_Player[42540] = byte_B04894;
                    MapClass::MarkForRedraw(&stru_87C374[13428], 2);
                    if ( HouseClass_Player[42540] )
                      TacticalMap::Redraw(&stru_87C374[13428]);
                  }
                  if ( (*(int (__thiscall **)(int *))(*a1 + 16))(a1) > 0 )
                  {
                    dword_B77780 = 0;
                    dword_B77CE0 = 0;
                  }
                }
                if ( v95 && HouseClass_Player[31592] && HouseClass_Player[31593] )
                {
                  v84 = *var6E4;
                  v121 = (IPXManagerClass *)100;
                  v124 = 400;
                  v125 = 540;
                  var6A0 = 4;
                  ((void (__thiscall *)(CCINIClass **, IPXManagerClass **, _DWORD))v84->sectionHead[1])(
                    var6E4,
                    &v121,
                    0);
                }
                if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
                  Connection::Close(&HouseClass_Player[44148]);
                return 0;
              }
              int v67 = -1;
              v97 = *(ObjectClass **)&HouseClass_Player[30724];
              if ( *(_DWORD *)&HouseClass_Player[30720] == 1 )
                goto LABEL_223;
              int * v68 = a1;
              int v69 = 0;
              int v70 = *(_DWORD *)&HouseClass_Player[45112] + 1000;
              if ( (*(int (__thiscall **)(int *))(*a1 + 16))(a1) > 0 )
              {
                int * v71 = a7;
                do
                {
                  if ( *v71 < v70 )
                  {
                    v70 = *v71;
                    v67 = v69;
                  }
                  ++v69;
                  v71 += 6;
                }
                while ( v69 < (*(int (__thiscall **)(int *))(*a1 + 16))(a1) );
                v68 = a1;
              }
              int v72 = 0;
              if ( (*(int (__thiscall **)(int *))(*v68 + 16))(v68) <= 0 )
              {
LABEL_136:
                if ( *(int *)&HouseClass_Player[45112] < (int)&v97->__pad_0[v70] )
                  goto LABEL_223;
                v72 = -1;
              }
              else
              {
                edi133 = a7 + 1;
                while ( edi133[1] >= (unsigned int)*edi133 )
                {
                  ++v72;
                  edi133 += 6;
                  if ( v72 >= (*(int (__thiscall **)(int *))(*a1 + 16))(a1) )
                    goto LABEL_136;
                }
              }
              if ( *(int *)&HouseClass_Player[45112] < (int)&v97->__pad_0[v70] )
                v67 = -1;
              if ( HouseClass_Player[31592]
                && HouseClass_Player[31593]
                && v118 > 0
                && (!v95 || v67 != -1 || v72 != -1) )
              {
                DrawHUD();
                goto LABEL_148;
              }
              if ( !v95 )
              {
LABEL_148:
                if ( v67 == -1 )
                {
                  v73 = (ObjectClass *)var6E4;
                }
                else
                {
                  if ( HouseClass_Player[31592] && HouseClass_Player[31593] )
                  {
                    v73 = (ObjectClass *)var6E4;
  _DWORD v160[4]; // [esp+13Eh] [ebp-5F8h] BYREF
                    v160[1] = 400;
                    v160[0] = 20 * (5 * v67 + 5);
                    v75 = *var6E4;
                    v160[2] = 35;
                    v160[3] = 3;
                    ((void (__thiscall *)(CCINIClass **, _DWORD *, int))v75->sectionHead[1])(
                      var6E4,
                      v160,
                      (255 >> stru_89E138[11420] << stru_89E138[11416])
                    | (255 >> stru_89E138[11436] << stru_89E138[11432])
                    | (40 >> stru_89E138[11428] << stru_89E138[11424]));
                  }
                  else
                  {
                    v73 = (ObjectClass *)var6E4;
                  }
                  ++*(_DWORD *)&HouseClass_Player[21864][104 * v67 + 8980];
                }
                if ( v72 != -1 )
                {
                  if ( HouseClass_Player[31592] && HouseClass_Player[31593] )
                  {
                    edx158 = *(_DWORD *)v73->__pad_0;
                    v124 = 400;
                    v125 = 40;
                    var6A0 = 3;
                    v121 = (IPXManagerClass *)(100 * v72 + 140);
                    (*(void (__thiscall **)(ObjectClass *, IPXManagerClass **, int))(edx158 + 20))(
                      v73,
                      &v121,
                      (255 >> stru_89E138[11420] << stru_89E138[11416])
                    | (40 >> stru_89E138[11436] << stru_89E138[11432])
                    | (40 >> stru_89E138[11428] << stru_89E138[11424]));
                  }
                  ++*(_DWORD *)&HouseClass_Player[21864][104 * v67 + 8984];
                }
                v95 = 1;
              }
              v8 = a1;
              goto LABEL_162;
            case 6:
              if ( !Network_Process_64B410((int)v8, a7) )
              {
                if ( v94 )
                {
                  v81 = (HWND)Dialog::FindByHandle((void *)0xEA);
                  if ( v81 )
                  {
                    if ( byte_B04470 )
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
                    CloseDialog(v81, 0);
                    HouseClass_Player[42540] = byte_B04894;
                    MapClass::MarkForRedraw(&stru_87C374[13428], 2);
                    if ( HouseClass_Player[42540] )
                      TacticalMap::Redraw(&stru_87C374[13428]);
                  }
                }
                if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
                  Connection::Close(&HouseClass_Player[44148]);
                Network::SendUnreachable();
                return 7;
              }
              MapClass::MarkForRedraw(&stru_87C374[13428], 2);
              TacticalMap::Redraw(&stru_87C374[13428]);
              v63 = (ObjectClass *)Timer::GetTicks();
              v134[6] = (int)v13;
              v100 = (MSVQAnim *)v13;
              v134[4] = (int)v63;
              Ticks = v63;
              v136 = (ObjectClass *)Timer::GetTicks();
              v106 = (DWORD)v136;
              v138 = v10;
              v108 = (MSVQAnim *)v10;
              v105 = (MSVQAnim *)v137;
              v113 = (ObjectClass *)Timer::GetTicks();
              v117 = a4;
              v101 = (MSVQAnim *)v113;
              v102 = (ObjectClass *)v116;
              v103 = a4;
              break;
            default:
              if ( v61 )
                goto LABEL_120;
              break;
          }
        }
        int v64 = ProcessNetworkFrameSync((int)v8, a6, (int)v130, var684, (int)a7, var6C0);
        switch ( v64 )
        {
          case 1:
            v107 = (ObjectClass *)((char *)v107 + 1);
            break;
          case 2:
            if ( v94 )
            {
              v82 = (HWND)Dialog::FindByHandle((void *)0xEA);
              if ( v82 )
              {
                if ( byte_B04470 )
                  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
                CloseDialog(v82, 0);
                HouseClass_Player[42540] = byte_B04894;
                MapClass::MarkForRedraw(&stru_87C374[13428], 2);
                if ( HouseClass_Player[42540] )
                  TacticalMap::Redraw(&stru_87C374[13428]);
              }
            }
            if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
              Connection::Close(&HouseClass_Player[44148]);
            return 2;
          case 3:
            if ( v94 )
            {
              v83 = (HWND)Dialog::FindByHandle((void *)0xEA);
              if ( v83 )
              {
                if ( byte_B04470 )
                  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
                CloseDialog(v83, 0);
                HouseClass_Player[42540] = byte_B04894;
                MapClass::MarkForRedraw(&stru_87C374[13428], 2);
                if ( HouseClass_Player[42540] )
                  TacticalMap::Redraw(&stru_87C374[13428]);
              }
            }
            if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
              Connection::Close(&HouseClass_Player[44148]);
            Network::SendUnreachable();
            return 3;
        }
        (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
LABEL_116:
        bool v65 = (int)v96 < 64;
        v96 = (ObjectClass *)((char *)v96 + 1);
        if ( !v65 )
          goto LABEL_120;
      }
    }
  }
  if ( aP0 )
  {
    if ( v94 )
    {
      esi181 = (HWND)Dialog::FindByHandle((void *)0xEA);
      if ( esi181 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
        CloseDialog(esi181, 0);
        HouseClass_Player[42540] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374[13428], 2);
        if ( HouseClass_Player[42540] )
          TacticalMap::Redraw(&stru_87C374[13428]);
      }
    }
    Network::SendUnreachable();
  }
  else
  {
    if ( Network_Process_64B410((int)v8, a7) )
    {
      MapClass::MarkForRedraw(&stru_87C374[13428], 2);
      TacticalMap::Redraw(&stru_87C374[13428]);
      v60 = (ObjectClass *)Timer::GetTicks();
      v134[3] = (int)v13;
      v100 = (MSVQAnim *)v13;
      v134[1] = (int)v60;
      Ticks = v60;
      v155 = Timer::GetTicks();
      v106 = v155;
      var608 = v10;
      v108 = (MSVQAnim *)v10;
      v105 = v156;
      v145 = (ObjectClass *)Timer::GetTicks();
      var62C = a4;
      v101 = (MSVQAnim *)v145;
      v102 = var630;
      v103 = a4;
      goto LABEL_100;
    }
    if ( v94 )
    {
      v79 = (MSVQAnim *)Dialog::FindByHandle((void *)0xEA);
      if ( v79 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 24))(*(_DWORD *)&stru_87C374[45772]);
        CloseDialog((HWND)v79, 0);
        HouseClass_Player[42540] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374[13428], 2);
        if ( HouseClass_Player[42540] )
          TacticalMap::Redraw(&stru_87C374[13428]);
      }
    }
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
    Connection::Close(&HouseClass_Player[44148]);
  return 7;
}
}
} // namespace gamemd

// 0x649CA0
namespace gamemd {
AbstractClass * * BuildNetworkEventPacket(int a1, int a2, int a3, int a4, short a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v20; // esi
  int v22; // [esp+10h] [ebp-1Ch]
  int v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-4h]
  AbstractClass *v6 = Networking_LastEventIndex; /*0x649caf*/
  v26 = a1; /*0x649cc4*/
  v25 = 0; /*0x649cc8*/
  v22 = Networking_LastEventIndex; /*0x649ccc*/
  if ( Networking_LastEventIndex > 0x2000 - dword_8B41F8 ) /*0x649cd0*/
    v22 = 0x2000 - dword_8B41F8; /*0x649cd2*/
  v28 = Networking_LastEventIndex; /*0x649cd6*/
  while ( 1 )
  {
  int v24; // [esp+18h] [ebp-14h]
    if ( !v22 || !v6 || (v24 = 1, g_ScenarioLoadFlags == 1) ) /*0x649cf9*/
      v24 = 0; /*0x649cfb*/
    *(_BYTE *)a2 = 28; /*0x649cff*/
    int v27 = 0; /*0x649d0a*/
    int v8 = a4; /*0x649d1b*/
    *(_DWORD *)(a2 + 3) = g_GameTypeFlags == 2
                        ? (wchar_t *)(g_ScenarioLoadState
                                    * (((unsigned int)g_CurrentFrame + g_ScenarioLoadState + a4 - 1)
                                     / g_ScenarioLoadState))
                        : (wchar_t *)((char *)g_CurrentFrame + a4);
    *(_BYTE *)(a2 + 2) = *((_BYTE *)HouseClass_Player + 48); /*0x649d49*/
    *(_DWORD *)(a2 + 7) = *(_DWORD *)Networking_CurrentFrameCRC; /*0x649d57*/
    *(_WORD *)(a2 + 11) = a5; /*0x649d5a*/
    *(_BYTE *)(a2 + 13) = a4; /*0x649d5e*/
    int v9 = g_GameTypeFlags != 0 ? 14 : 111;
    if ( g_GameTypeFlags )
    {
      v9 = g_GameTypeFlags <= 0 || g_GameTypeFlags > 2
         ? 0
         : CompressNetworkMegaMission(a2, a3, a4, g_GameTypeFlags != 0 ? 14 : 111, v22, &v27);
    }
    else
    {
      int v23 = 0; /*0x649da7*/
      if ( Networking_LastEventIndex )
      {
        AbstractClass *v10 = g_NetworkEventIndex; /*0x649db7*/
        while ( v23 < v22 )
        {
  AbstractClass *v19; // al
          int v11 = 37 * v10; /*0x649dcf*/
          int v12 = g_NetworkPacketIndex[3 * v11] == 31 ? *(int *)((char *)&dword_A802DF + 3 * v11) + 111 : 111;
          if ( v9 + v12 > a3 ) /*0x649df5*/
            break; /*0x649df5*/
          *(int *)((char *)&dword_A802D7 + 3 * v11) = (int)g_CurrentFrame + v8; /*0x649e03*/
          byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)HouseClass_Player + 48); /*0x649e1e*/
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x649e3a*/
          if ( dword_8B41F8 >= 0x4000 ) /*0x649e4b*/
            break; /*0x649e4b*/
          char * v13 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649e61*/
          char * v14 = &unk_8B4204[111 * unk_8B4200]; /*0x649e73*/
          qmemcpy(v14, v13, 0x6Cu); /*0x649e7a*/
          v13 += 108; /*0x649e7a*/
          v14 += 108; /*0x649e7a*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x649e7c*/
          v14[2] = v13[2]; /*0x649e7e*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x649e8e*/
          ++dword_8B41F8; /*0x649eae*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x649eb7*/
          char * v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649ec5*/
          char v16 = *v15; /*0x649ecc*/
          qmemcpy((void *)(a2 + v9), v15, 0x6Cu); /*0x649ed3*/
          v15 += 108; /*0x649ed3*/
          int v17 = a2 + v9 + 108; /*0x649ed3*/
          *(_WORD *)v17 = *(_WORD *)v15; /*0x649ed5*/
          *(_BYTE *)(v17 + 2) = v15[2]; /*0x649ed9*/
          if ( v16 == 31 ) /*0x649eda*/
          {
            int v18 = v9 + 111; /*0x649ee1*/
            qmemcpy( /*0x649f00*/
              (void *)(a2 + v18),
              *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
              *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
            v19 = g_NetworkEventIndex; /*0x649f09*/
            v9 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + v18; /*0x649f14*/
          }
          else
          {
            v19 = g_NetworkEventIndex; /*0x649f1d*/
            v9 += 111; /*0x649f22*/
          }
          ++v23; /*0x649f32*/
          if ( !Networking_LastEventIndex /*0x649f48*/
            || (v10 = (v19 + 1) & 0x7F,
                g_NetworkEventIndex = v10,
                --Networking_LastEventIndex,
                !Networking_LastEventIndex) )
          {
            a1 = v26; /*0x649f57*/
            break; /*0x649f57*/
          }
          a1 = v26; /*0x649f4a*/
          v8 = a4; /*0x649f4e*/
        }
      }
    }
    v22 -= v27; /*0x649f5b*/
    v20 = v27 + v25; /*0x649f6d*/
    v25 += v27; /*0x649f71*/
    if ( v27 ) /*0x649f75*/
    {
      Debug::Log(); /*0x649f84*/
      v24 = 1; /*0x649f8c*/
    }
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a1 + 8))(a1, a2, v9, v24, -1); /*0x649fa1*/
    ++dword_B0487C; /*0x649fab*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x649fb5*/
    v6 = Networking_LastEventIndex; /*0x649fb8*/
    if ( !Networking_LastEventIndex || Networking_LastEventIndex > v28 ) /*0x649fc6*/
      break; /*0x649fc6*/
    if ( !v22 ) /*0x649fce*/
    {
      v20 = v25; /*0x649fd4*/
      break; /*0x649fd4*/
    }
  }
  if ( v20 ) /*0x649fda*/
    Debug::Log(); /*0x649fe8*/
  return v20; /*0x649ff2*/
}
}
} // namespace gamemd

// 0x64A000
namespace gamemd {
void Network_SendFrameSync(int * a1, short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v7; // [esp+78h] [ebp-4h]

  _BYTE v6[108]; // [esp+Ch] [ebp-70h] BYREF
  memset(v6, 0, sizeof(v6)); /*0x64a015*/
  v7 = 0; /*0x64a017*/
  char v8 = 0; /*0x64a019*/
  v6[0] = 25; /*0x64a01f*/
  if ( g_GameTypeFlags == 2 ) /*0x64a027*/
    *(_DWORD *)&v6[3] = g_ScenarioLoadState /*0x64a04a*/
                      * (((unsigned int)g_CurrentFrame + (int)g_ScenarioState + g_ScenarioLoadState - 1)
                       / g_ScenarioLoadState);
  else
    *(_DWORD *)&v6[3] = (char *)g_CurrentFrame + (_DWORD)g_ScenarioState; /*0x64a05f*/
  char v3 = *((_BYTE *)HouseClass_Player + 48); /*0x64a06e*/
  *(_DWORD *)&v6[7] = DataGlobal_A8E7A8; /*0x64a076*/
  v6[2] = v3; /*0x64a07a*/
  int v4 = *a1; /*0x64a07e*/
  v6[13] = (_BYTE)g_ScenarioState; /*0x64a084*/
  *(_WORD *)&v6[11] = a2; /*0x64a08b*/
  (*(void (__thiscall **)(int *, _BYTE *, int, _DWORD, int))(v4 + 8))(a1, v6, 14, 0, -1); /*0x64a090*/
  ((void (*)(const char *, ...))Debug::Log)(DataGlobal_8377DC); /*0x64a098*/
  return ++dword_B0487C; /*0x64a0a6*/
}
}
} // namespace gamemd

// 0x64A0C0
namespace gamemd {
AbstractClass * * Network_ProcessFrameSync(int a1, int a2, int a3, unsigned int a4, int a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *Class; // eax
  int v27; // eax
  char v28; // al
  _BYTE *v29; // ebp
  Game *v33; // si
  unsigned int v35; // [esp+10h] [ebp-88h]
  int v37; // [esp+14h] [ebp-84h]
  _DWORD *v39; // [esp+18h] [ebp-80h]
  int v41; // [esp+20h] [ebp-78h]
  int v6 = a2; /*0x64a0cc*/
  int v7 = 0; /*0x64a0d5*/
  v41 = 0; /*0x64a0e0*/
  int v8 = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 24))(a3); /*0x64a0e7*/
  if ( g_Network_IsHosting ) /*0x64a0f0*/
  {
    char v9 = *(_BYTE *)v6; /*0x64a0f6*/
    if ( *(_BYTE *)v6 == 37 || v9 == 38 ) /*0x64a0fe*/
    {
      int v10 = *(char *)(v6 + 2); /*0x64a104*/
      int v42 = v10; /*0x64a10a*/
      unsigned int v34 = 0; /*0x64a10e*/
      if ( v9 == 38 || v9 == 37 ) /*0x64a11d*/
        Debug::Log(); /*0x64a124*/
      bool v11 = v10 <= 0; /*0x64a12c*/
      if ( !v10 ) /*0x64a12e*/
      {
        Debug::Log(); /*0x64a135*/
        v11 = 1; /*0x64a13d*/
      }
      if ( !v11 ) /*0x64a13f*/
      {
        char * v12 = (char *)(v6 + 7); /*0x64a145*/
        int v38 = v10; /*0x64a148*/
        int v13 = v6 + 7; /*0x64a14c*/
        do /*0x64a372*/
        {
          if ( *(_BYTE *)v6 == 37 ) /*0x64a151*/
          {
            int v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *(char *)(v13 + 11)); /*0x64a162*/
            if ( v14 != -1 ) /*0x64a168*/
            {
              int v15 = *(_DWORD *)v13 - *(unsigned __int8 *)(v13 + 10); /*0x64a17d*/
              int * v16 = (int *)(a5 + 24 * v14); /*0x64a182*/
              if ( *v16 >= v15 ) /*0x64a187*/
              {
                if ( Network::GetClass(g_NetworkManager, *(char *)(v13 + 11)) ) /*0x64a1fd*/
                {
                  Class = (char *)Network::GetClass(g_NetworkManager, *(char *)(v13 + 11)); /*0x64a213*/
                  ToWideStringChar(Class); /*0x64a21a*/
                  Debug::Log(); /*0x64a225*/
                }
              }
              else
              {
                *v16 = v15; /*0x64a189*/
                Network_Process_652110(a5, v14); /*0x64a194*/
                if ( Network::GetClass(g_NetworkManager, *(char *)(v13 + 11)) ) /*0x64a1a3*/
                {
                  char * v17 = (char *)Network::GetClass(g_NetworkManager, *(char *)(v13 + 11)); /*0x64a1b9*/
                  ToWideStringChar(v17); /*0x64a1c0*/
                  Debug::Log(); /*0x64a1cb*/
                }
                int v18 = *(unsigned __int16 *)(v13 + 8); /*0x64a1d8*/
                if ( v16[1] < (unsigned int)(unsigned __int16)v18 ) /*0x64a1de*/
                {
                  v16[1] = v18; /*0x64a1e6*/
                  Debug::Log(); /*0x64a1e9*/
                }
              }
              if ( (*(_BYTE *)(v13 + 12) & 1) == 0 ) /*0x64a231*/
                v16[3] = Timer::GetTicks() - *a6; /*0x64a24f*/
            }
          }
          else if ( *v12 == *((_DWORD *)HouseClass_Player + 12) ) /*0x64a263*/
          {
            DataGlobal_A8E2D4 = *(_DWORD *)(v12 + 2); /*0x64a268*/
            Debug::Log(); /*0x64a289*/
          }
          else
          {
            int v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *v12); /*0x64a29d*/
            if ( v20 != -1 ) /*0x64a2a3*/
            {
              unsigned int v21 = *(_DWORD *)(v12 + 2); /*0x64a2b0*/
              *(_DWORD *)(a5 + 24 * v20 + 16) = v21; /*0x64a2b6*/
              DataGlobal_AC5210[v20] = v21; /*0x64a2ba*/
              if ( v34 <= v21 ) /*0x64a2c5*/
                v34 = v21; /*0x64a2c7*/
              if ( v12[1] ) /*0x64a2cb*/
              {
                if ( SessionClass::IsValidHouse((int)g_GameMode_Current, 0) ) /*0x64a2dd*/
                {
                  if ( DataGlobal_A8E2CC != *v12 ) /*0x64a2ef*/
                  {
  char v43[112]; // [esp+28h] [ebp-70h] BYREF
                    char * v22 = EventClass::Add2(v43, *((_DWORD *)HouseClass_Player + 12), 0x28u, *v12); /*0x64a301*/
                    if ( Networking_LastEventIndex < 128 ) /*0x64a310*/
                    {
                      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v22, 0x6Fu); /*0x64a32c*/
                      v6 = a2; /*0x64a33d*/
                      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x64a341*/
                      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x64a358*/
                      ++Networking_LastEventIndex; /*0x64a35e*/
                    }
                  }
                }
              }
            }
          }
          v13 += 13; /*0x64a367*/
          v12 += 8; /*0x64a36a*/
          --v38; /*0x64a36e*/
        }
        while ( v38 ); /*0x64a372*/
        v10 = v42; /*0x64a378*/
        v7 = v34; /*0x64a37c*/
      }
      if ( v10 && v7 ) /*0x64a38a*/
      {
        DataGlobal_A8E2C4 = v7; /*0x64a396*/
        return 0; /*0x64a3a4*/
      }
      return v41; /*0x64a610*/
    }
  }
  _DWORD * v24 = (_DWORD *)(a5 + 24 * v8); /*0x64a3b9*/
  v39 = v24; /*0x64a3be*/
  if ( *v24 < *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13) ) /*0x64a3c7*/
  {
    if ( *v24 == -1 ) /*0x64a3cc*/
    {
      v41 = 1; /*0x64a3d3*/
      Debug::Log(); /*0x64a3db*/
    }
    *v24 = *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13); /*0x64a3ef*/
    Network_Process_652110(a5, v8); /*0x64a3f4*/
  }
  int v25 = *(unsigned __int16 *)(v6 + 11); /*0x64a3fe*/
  if ( (unsigned int)(unsigned __int16)v25 > v24[1] ) /*0x64a404*/
    v24[1] = v25; /*0x64a406*/
  if ( *(_BYTE *)v6 == 25 ) /*0x64a40c*/
  {
    if ( g_GameMode_Current[0] == 4 || g_GameMode_Current[0] == 3 ) /*0x64a5b0*/
    {
      Network::GetClass(g_NetworkManager, a3); /*0x64a5ca*/
      Debug::Log(); /*0x64a5d5*/
    }
    if ( *(_DWORD *)(v6 + 7) != DataGlobal_A8E7A8 ) /*0x64a5e8*/
      return 2; /*0x64a5f9*/
    v24[3] = Timer::GetTicks() - *a6; /*0x64a60d*/
    return v41; /*0x64a60d*/
  }
  int v26 = 0; /*0x64a417*/
  if ( g_GameTypeFlags ) /*0x64a41b*/
  {
    v27 = DecodeNetworkEvents((char *)v6, a4); /*0x64a426*/
    goto LABEL_59; /*0x64a42b*/
  }
  v37 = 0; /*0x64a437*/
  v35 = a4; /*0x64a43e*/
  if ( a4 < 0x6F ) /*0x64a442*/
  {
LABEL_58:
    v27 = v37; /*0x64a539*/
    goto LABEL_59; /*0x64a539*/
  }
  while ( 1 ) /*0x64a448*/
  {
    v28 = *(_BYTE *)(v26 + v6); /*0x64a448*/
    v29 = (_BYTE *)(v26 + v6); /*0x64a44b*/
    if ( v28 != 25 ) /*0x64a450*/
      break; /*0x64a450*/
LABEL_52:
    v26 += 111; /*0x64a502*/
    v35 -= 111; /*0x64a50f*/
    if ( v35 < 0x6F ) /*0x64a513*/
    {
      v24 = v39; /*0x64a535*/
      goto LABEL_58; /*0x64a535*/
    }
  }
  v29[1] &= ~1u; /*0x64a45e*/
  if ( v28 == 31 ) /*0x64a461*/
  {
    void * v30 = __2_YAPAXI_Z(*(_DWORD *)(v29 + 11)); /*0x64a467*/
    unsigned int v31 = *(_DWORD *)(v29 + 11); /*0x64a46c*/
    *(_DWORD *)(v29 + 7) = v30; /*0x64a472*/
    qmemcpy(v30, (const void *)(v6 + 111), v31); /*0x64a47f*/
    int v32 = *(_DWORD *)(v29 + 11); /*0x64a488*/
    v6 = a2; /*0x64a48f*/
    v26 += v32; /*0x64a493*/
    v35 -= v32; /*0x64a497*/
  }
  if ( dword_8B41F8 < 0x4000 ) /*0x64a4a5*/
  {
    qmemcpy(&unk_8B4204[111 * unk_8B4200], v29, 0x6Fu); /*0x64a4c0*/
    v6 = a2; /*0x64a4d1*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64a4d5*/
    unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64a4ee*/
    ++dword_8B41F8; /*0x64a4f8*/
    ++v37; /*0x64a4fe*/
    goto LABEL_52; /*0x64a4fe*/
  }
  if ( *v29 == 31 ) /*0x64a51e*/
    __3_YAXPAX_Z(*(void **)(v29 + 7)); /*0x64a524*/
  v24 = v39; /*0x64a52c*/
  v27 = -1; /*0x64a530*/
LABEL_59:
  v33 = v27; /*0x64a53d*/
  if ( v27 == -1 ) /*0x64a542*/
  {
    Debug::Log(); /*0x64a549*/
    return 3; /*0x64a551*/
  }
  else
  {
    if ( *(_BYTE *)v6 == 28 && v27 > 0 ) /*0x64a56a*/
      v33 = v27 - 1; /*0x64a56c*/
    Debug::Log(); /*0x64a57c*/
    v24[2] += v33; /*0x64a590*/
    return v41; /*0x64a593*/
  }
}
}
} // namespace gamemd

// 0x64A630
namespace gamemd {
int Network_ProcessMessage(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v6; // edi
  int v2 = a1; /*0x64a631*/
  int v3 = *(_DWORD *)a1; /*0x64a635*/
  if ( a2 ) /*0x64a638*/
  {
    if ( v3 == 102 ) /*0x64a63d*/
    {
LABEL_7:
      HandlePlayerDisconnection(*(char *)(a1 + 29), 0); /*0x64a650*/
      return 5; /*0x64a662*/
    }
  }
  else if ( v3 == 102 || v3 == 105 || v3 == 106 ) /*0x64a64e*/
  {
    goto LABEL_7; /*0x64a64e*/
  }
  if ( v3 == 104 ) /*0x64a666*/
  {
    char * v5 = CharToWideString((_BYTE *)(a1 + 4)); /*0x64a678*/
    v6 = (wchar_t *)(v2 + 25); /*0x64a67f*/
    int v7 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].__pad_A0 * 900.0); /*0x64a68e*/
    if ( !((int (__stdcall *)(wchar_t *, int, wchar_t *, int))ScrollingText::AddLine)( /*0x64a6a1*/
            (wchar_t *)v5,
            *(unsigned __int8 *)(v2 + 24),
            (wchar_t *)(v2 + 25),
            v7) )
    {
      IUnknown *v8 = CharToWideString((_BYTE *)(v2 + 4)); /*0x64a6b1*/
      IUnknown *v9 = *(unsigned __int8 *)(v2 + 24); /*0x64a6cb*/
      int v10 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].__pad_A0 * 900.0); /*0x64a6cd*/
      MessageListClass::AddMessage(g_GameNetworkObject, (wchar_t *)v8, v9, v6, v9, 16454, v10, 0); /*0x64a6e1*/
      PlayVocClass(g_RulesClass_Instance->MovieOn, 0x2000, 1.0, 0); /*0x64a6fe*/
    }
    if ( wcslen(v6) ) /*0x64a704*/
      wcscpy((wchar_t *)&DataGlobal_A8D110 + 1, v6); /*0x64a718*/
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x64a727*/
    return 4; /*0x64a727*/
  }
  if ( v3 == 120 ) /*0x64a737*/
  {
    if ( (_BYTE)DataGlobal_A8D110 && g_GameMode_Current[0] == 3 || BYTE1(DataGlobal_A8D110) && g_GameMode_Current[0] == 4 ) /*0x64a759*/
    {
      LOBYTE(a1) = *(_BYTE *)(a1 + 25); /*0x64a75b*/
      ((void (__thiscall *)(int))PlayTauntClass)(a1); /*0x64a75e*/
      return 4; /*0x64a76a*/
    }
    return 4; /*0x64a733*/
  }
  if ( v3 >= 100 && v3 < 109 /*0x64a790*/
    || v3 >= 110 && v3 <= 116
    || g_ScenarioLoadFlags == 1
    || !*(_BYTE *)a1
    || *(_BYTE *)a1 >= 0x2Fu )
  {
    return 4; /*0x64a790*/
  }
  int v11 = -(*((_DWORD *)HouseClass_Player + 12) != *(char *)(a1 + 2)); /*0x64a7a4*/
  LOBYTE(v11) = v11 & 0xFA; /*0x64a7a7*/
  return v11 + 6; /*0x64a660*/
}
}
} // namespace gamemd

// 0x64AAE0
namespace gamemd {
void KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND DlgItem; // eax
  HWND v5; // esi
  wchar_t *StringCSF; // eax
  void (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT v8; // edi
  wchar_t *v9; // eax
  HWND v13; // [esp-4h] [ebp-1D8h]
  char Destination[43]; // [esp+10h] [ebp-1C4h] BYREF
  int i; // [esp+3Bh] [ebp-199h]

  if ( lParam >= 0 && lParam < Game_PlayerCount ) /*0x64aafb*/
  {
    Debug::Log(); /*0x64ab16*/
    DlgItem = GetDlgItem(hDlg, 1617); /*0x64ab24*/
    v5 = DlgItem; /*0x64ab2c*/
    if ( !lParam ) /*0x64ab2e*/
    {
      v13 = DlgItem; /*0x64ab30*/
      StringCSF = GetStringCSF(DataGlobal_8379E8, 0, g_Str_File_Queue_CPP, 3375); /*0x64ab42*/
      DrawDialogText(-1, StringCSF, v13); /*0x64ab4c*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab51*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64ab61*/
      if ( v8 > 50 ) /*0x64ab66*/
        goto LABEL_9; /*0x64ab66*/
      goto LABEL_10; /*0x64ab66*/
    }
    if ( g_GameMode_Current[0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x64ab7a*/
    {
      v9 = GetStringCSF(DataGlobal_8379D8, 0, g_Str_File_Queue_CPP, 3385); /*0x64ab8e*/
      DrawDialogText(-1, v9, v5); /*0x64ab98*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab9d*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64abaf*/
      if ( v8 > 50 ) /*0x64abb4*/
      {
LABEL_9:
        v7(v5, 0x182u, 0, 0); /*0x64abb6*/
        --v8; /*0x64abc2*/
      }
LABEL_10:
      v7(v5, 0x197u, v8 - 1, 0); /*0x64abc3*/
      return; /*0x64abd8*/
    }
    int v14 = 28; /*0x64abdf*/
    char * v10 = ToWideStringChar(*(char **)Game_PlayerInfoArray); /*0x64abeb*/
    strncpy(Destination, v10, 0x14u); /*0x64abf6*/
    int v11 = Game_PlayerInfoArray; /*0x64abfb*/
    int v12 = 1; /*0x64ac00*/
    int v17 = *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 111); /*0x64ac0d*/
    for ( i = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * lParam) + 111); v12 < Game_PlayerCount; v11 = Game_PlayerInfoArray ) /*0x64ac23*/
    {
      Debug::Log(); /*0x64ac2e*/
      Network::SendMessage( /*0x64ac58*/
        (int)g_NetworkManager,
        (int)&v14,
        455,
        1,
        *(_DWORD *)(Game_PlayerInfoArray + 4 * v12++) + 40,
        0,
        0);
    }
    Network_Process_64AD10(*(_DWORD *)(*(_DWORD *)v11 + 111), *(_DWORD *)(*(_DWORD *)(v11 + 4 * lParam) + 111)); /*0x64ac77*/
  }
}
}
} // namespace gamemd

// 0x64B240
namespace gamemd {
AbstractClass * * Network_KickPlayerNow(int a1, int a2, int a3, unsigned char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ecx

  bool v13 = time(0) - dword_B0489C < 60; /*0x64b270*/
  dword_B0489C = time(0); /*0x64b27e*/
  AbstractClass *v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2); /*0x64b292*/
  Debug::Log(); /*0x64b29f*/
  if ( v6 == -1 ) /*0x64b2aa*/
  {
    Debug::Log(); /*0x64b2b1*/
  }
  else
  {
    *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 520) = 1; /*0x64b2cc*/
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) == 1 /*0x64b2f4*/
      && g_GameMode_Current[0] == 4
      && !DataGlobal_A8F900 )
    {
      Timer::UpdateDelta(); /*0x64b2f6*/
      DataGlobal_B0BD78 = 1; /*0x64b2ff*/
      if ( !v13 ) /*0x64b307*/
        DataGlobal_A8B8C1 = 1; /*0x64b309*/
      for ( i = 0; i < HouseClass_Count; ++i ) /*0x64b318*/
      {
        _BYTE * v8 = (_BYTE *)*((_DWORD *)HouseClass_Array + i); /*0x64b320*/
        if ( v8 && !v8[501] && v8[492] ) /*0x64b331*/
          v8[520] = 1; /*0x64b33b*/
      }
      ProcessGameResults(0); /*0x64b34d*/
    }
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) > 1 && !v13 ) /*0x64b369*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 583) = 1; /*0x64b374*/
    int v14 = a2; /*0x64b37f*/
    if ( a2 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b389*/
    {
      int v9 = 4 * a2 + 11057984; /*0x64b394*/
      int * v10 = &DataGlobal_A8BB60[8 * a2]; /*0x64b39e*/
      int v11 = a3 + 24 * a2; /*0x64b3a4*/
      while ( 1 ) /*0x64b3b7*/
      {
        _DWORD * v12 = (_DWORD *)(v9 + 4); /*0x64b3b7*/
        qmemcpy((void *)v11, (const void *)(v11 + 24), 0x18u); /*0x64b3ba*/
        *(v12 - 1) = *v12; /*0x64b3c1*/
        v11 += 24; /*0x64b3cb*/
        qmemcpy(v10, v10 + 8, 0x20u); /*0x64b3ce*/
        _DWORD * v16 = v12; /*0x64b3d9*/
        ++v14; /*0x64b3df*/
        v10 += 8; /*0x64b3e3*/
        if ( v14 >= (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b3ec*/
          break; /*0x64b3ec*/
        v9 = (int)v16; /*0x64b3a9*/
      }
    }
    HandleNetworkPlayerDisconnect(v6, a4); /*0x64b3fe*/
  }
}
}
} // namespace gamemd

// 0x64B4D0
namespace gamemd {
void Compress_DictionaryLookup(unsigned char * a1, unsigned int * a2, unsigned char * a3, const void * a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v5; // dl
  char result; // al
  unsigned __int8 v19; // [esp+1Ch] [ebp-8h]
  v5 = *a1; /*0x64b4d8*/
  v19 = *a1; /*0x64b4e4*/
  if ( *a1 > 1u ) /*0x64b4e8*/
  {
    char v16 = 0; /*0x64b4ec*/
    int v6 = v5; /*0x64b4f4*/
    char * v7 = (char *)&DataGlobal_AC5235; /*0x64b4fa*/
    int v18 = v5; /*0x64b4ff*/
    int * v8 = dword_AFA338; /*0x64b503*/
    do /*0x64b508*/
    {
      if ( v6 == *v8 ) /*0x64b50c*/
      {
        if ( !memcmp(v7 - 5, a3, 5u) && !memcmp(v7, a4, 5 * *v8 - 5) ) /*0x64b52e*/
        {
          if ( a5 ) /*0x64b59c*/
            *a2 += 5 - 5 * v18; /*0x64b5b0*/
          result = 1; /*0x64b5b4*/
          if ( a5 ) /*0x64b5b6*/
          {
            *a1 = 0; /*0x64b5c6*/
            a3[6] = v16; /*0x64b5cf*/
          }
          return result; /*0x64b5d5*/
        }
        v6 = v18; /*0x64b530*/
        v5 = v19; /*0x64b534*/
      }
      ++v8; /*0x64b53c*/
      v7 += 640; /*0x64b540*/
      ++v16; /*0x64b54b*/
    }
    while ( (int)v8 < (int)&dword_AFA358 ); /*0x64b508*/
  }
  if ( a5 && v5 > 1u ) /*0x64b560*/
  {
    Game *v9 = -1; /*0x64b566*/
    int v10 = -1; /*0x64b569*/
    int v11 = 0; /*0x64b56c*/
    int * v12 = dword_AFA42C; /*0x64b56e*/
    while ( 1 ) /*0x64b573*/
    {
      int v13 = *v12; /*0x64b573*/
      if ( !*v12 ) /*0x64b573*/
        break; /*0x64b573*/
      if ( (int)g_CurrentFrame - v13 > v10 ) /*0x64b582*/
      {
        v10 = (int)g_CurrentFrame - v13; /*0x64b584*/
        v9 = v11; /*0x64b586*/
      }
      ++v12; /*0x64b588*/
      ++v11; /*0x64b58b*/
      if ( (int)v12 >= (int)&dword_AFA44C ) /*0x64b592*/
        goto LABEL_21; /*0x64b592*/
    }
    v9 = v11; /*0x64b5d8*/
LABEL_21:
    if ( v9 == -1 ) /*0x64b5dd*/
      v9 = 0; /*0x64b5df*/
    Debug::Log(); /*0x64b5ee*/
    dword_AFA42C[v9] = (int)g_CurrentFrame; /*0x64b600*/
    char * v15 = (char *)&DataGlobal_AC5230 + 640 * v9; /*0x64b60f*/
    *(_DWORD *)v15 = *(_DWORD *)a3; /*0x64b61d*/
    v15[4] = a3[4]; /*0x64b626*/
    qmemcpy((char *)&DataGlobal_AC5235 + 640 * v9, a4, 5 * *a1 - 5); /*0x64b63a*/
    dword_AFA338[v9] = *a1; /*0x64b647*/
    a3[6] = v9; /*0x64b64e*/
  }
  return 0; /*0x64b5c4*/
}
}
} // namespace gamemd

// 0x64B660
namespace gamemd {
AbstractClass * * Network_CompressMegaMission(int a1, int a2, int a3, int a4, int a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v8; // al
  #375 *v13; // edx
  int result; // eax
  __int16 v32; // [esp+A0h] [ebp-4h]
  _WORD v31[54]; // [esp+34h] [ebp-70h] BYREF
  memset(v31, 0, sizeof(v31)); /*0x64b67e*/
  v32 = 0; /*0x64b680*/
  char v33 = 0; /*0x64b682*/
  int v30 = a2; /*0x64b688*/
  int v28 = 0; /*0x64b68e*/
  _BYTE * v25 = 0; /*0x64b692*/
  int v23; // [esp+14h] [ebp-90h] BYREF
  LOBYTE(v23) = 0; /*0x64b696*/
  char v22 = 0; /*0x64b69b*/
  char v24 = 0; /*0x64b6a0*/
  _BYTE * v26 = 0; /*0x64b6a5*/
  _BYTE * v27 = 0; /*0x64b6a9*/
  if ( DataGlobal_A8ED74 ) /*0x64b6ad*/
    Debug::Log(); /*0x64b6ba*/
  if ( Networking_LastEventIndex ) /*0x64b6c8*/
  {
    AbstractClass *v7 = g_NetworkEventIndex; /*0x64b6ce*/
    while ( v28 < a5 ) /*0x64b6d4*/
    {
  int v17; // eax
      v8 = g_NetworkPacketIndex[111 * v7]; /*0x64b6ef*/
  int v29; // [esp+2Ch] [ebp-78h]
      LOBYTE(v29) = v8; /*0x64b6f6*/
      unsigned int v9 = (unsigned __int8)byte_8208EC[v8]; /*0x64b70c*/
      if ( v8 == 31 ) /*0x64b70e*/
        int v10 = *(int *)((char *)&dword_A802DF + 111 * v7) + v9 + 1; /*0x64b717*/
      else
        v10 = v9 + 1; /*0x64b71d*/
      if ( LOBYTE(v31[0]) == 4 ) /*0x64b725*/
      {
        if ( v8 == 4 ) /*0x64b72d*/
        {
          if ( !v24 /*0x64b798*/
            && (v24 = *((_BYTE *)&dword_A802DF + 111 * v7 + 1), v24 == LOBYTE(v31[6]))
            && byte_A802E6[111 * v7] == LOBYTE(v31[9])
            && *(int *)((char *)&dword_A802DF + 111 * v7 + 3) == *(_DWORD *)&v31[7]
            && byte_A802EB[111 * v7] == HIBYTE(v31[11])
            && *(_DWORD *)((char *)&unk_A802E7 + 111 * v7) == *(_DWORD *)((char *)&v31[9] + 1) )
          {
            if ( DataGlobal_A8ED74 ) /*0x64b7a5*/
            {
              FromNameIndex(v24); /*0x64b821*/
              Debug::Log(); /*0x64b82d*/
              v7 = g_NetworkEventIndex; /*0x64b832*/
            }
            v9 = 5; /*0x64b83f*/
            v10 = 5; /*0x64b846*/
            LOBYTE(v23) = v23 + 1; /*0x64b848*/
            v22 = 1; /*0x64b84c*/
          }
          else
          {
            if ( DataGlobal_A8ED74 ) /*0x64b85d*/
              Debug::Log(); /*0x64b864*/
            Debug::Log(); /*0x64b87c*/
            DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b89b*/
            ++v10; /*0x64b8a0*/
            v22 = 0; /*0x64b8a9*/
            *v25 = v23; /*0x64b8ae*/
            LOBYTE(v23) = 1; /*0x64b8b7*/
            v7 = g_NetworkEventIndex; /*0x64b8c0*/
            v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b8c6*/
          }
        }
        else
        {
          Debug::Log(); /*0x64b8de*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b8fd*/
          _BYTE * v11 = v25; /*0x64b902*/
          v25 = 0; /*0x64b90a*/
          v22 = 0; /*0x64b912*/
          *v11 = v23; /*0x64b917*/
          v7 = g_NetworkEventIndex; /*0x64b919*/
          LOBYTE(v23) = 0; /*0x64b91f*/
        }
      }
      else if ( v8 == 4 ) /*0x64b928*/
      {
        if ( DataGlobal_A8ED74 ) /*0x64b931*/
        {
          Debug::Log(); /*0x64b938*/
          v7 = g_NetworkEventIndex; /*0x64b93d*/
        }
        ++v10; /*0x64b94d*/
        LOBYTE(v23) = 1; /*0x64b94e*/
        v22 = 0; /*0x64b953*/
        v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b95c*/
      }
      v24 = 0; /*0x64b96d*/
      if ( a4 + v10 > v30 ) /*0x64b974*/
      {
        if ( (_BYTE)v29 == 4 && v22 ) /*0x64bd5d*/
        {
          LOBYTE(v23) = v23 - 1; /*0x64bd65*/
          Debug::Log(); /*0x64bd79*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bd98*/
          *v25 = v23; /*0x64bda5*/
        }
        break; /*0x64bda5*/
      }
      if ( g_GameTypeFlags == 2 ) /*0x64b981*/
        unsigned int v12 = g_ScenarioLoadState * (((unsigned int)g_CurrentFrame + g_ScenarioLoadState + a3 - 1) / g_ScenarioLoadState); /*0x64b9a0*/
      else
        v12 = (unsigned int)g_CurrentFrame + a3; /*0x64b9b1*/
      v13 = HouseClass_Player; /*0x64b9b9*/
      *(int *)((char *)&dword_A802D7 + 111 * v7) = v12; /*0x64b9bf*/
      byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)v13 + 48); /*0x64b9d4*/
      byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x64b9f0*/
      if ( dword_8B41F8 >= 0x4000 ) /*0x64ba01*/
        break; /*0x64ba01*/
      int v14 = g_CrateSystemState[g_NetworkEventIndex]; /*0x64ba12*/
      char * v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64ba19*/
      char * v16 = &unk_8B4204[111 * unk_8B4200]; /*0x64ba2c*/
      qmemcpy(v16, v15, 0x6Cu); /*0x64ba38*/
      v15 += 108; /*0x64ba38*/
      v16 += 108; /*0x64ba38*/
      *(_WORD *)v16 = *(_WORD *)v15; /*0x64ba3a*/
      v16[2] = v15[2]; /*0x64ba3c*/
      dword_A70204[unk_8B4200] = v14; /*0x64ba43*/
      unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64ba5b*/
      ++dword_8B41F8; /*0x64ba6a*/
      switch ( (_BYTE)v29 ) /*0x64ba70*/
      {
        case 4: /*0x64ba70*/
          *v25 = v23; /*0x64bbc1*/
          if ( v22 ) /*0x64bbc3*/
          {
            qmemcpy((void *)(a1 + a4), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bbec*/
            a4 += v9; /*0x64bc06*/
            if ( Networking_LastEventIndex == 1 || v28 == a5 - 1 ) /*0x64bc1d*/
            {
              Debug::Log(); /*0x64bc7d*/
              DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bc9c*/
              *v25 = v23; /*0x64bca9*/
            }
            else if ( DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 0) ) /*0x64bc36*/
            {
              Debug::Log(); /*0x64bc52*/
              v24 = 1; /*0x64bc62*/
              *v25 = v23; /*0x64bc67*/
            }
            goto LABEL_47; /*0x64bc69*/
          }
          *(_BYTE *)(a1 + a4) = 4; /*0x64bcb4*/
          _BYTE * v18 = (_BYTE *)(a1 + a4 + 2); /*0x64bcc9*/
          v27 = v18; /*0x64bcd2*/
          qmemcpy(v18, (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bce2*/
          v26 = &v18[v9]; /*0x64bcf5*/
          v17 = a4 + v9 + 2; /*0x64bcf9*/
          break;
        case 0x1B: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 27; /*0x64bb6d*/
          qmemcpy((void *)(a1 + a4 + 1), (const void *)(111 * g_NetworkEventIndex + 11010785), v9); /*0x64bb93*/
          a4 += v9 + 1; /*0x64bba7*/
          goto LABEL_47; /*0x64bbae*/
        case 0x1F: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 31; /*0x64bad9*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DF + 111 * g_NetworkEventIndex, v9); /*0x64baff*/
          a4 += v9 + 1; /*0x64bb18*/
          qmemcpy( /*0x64bb3b*/
            (void *)(a1 + a4),
            *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
            *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
          v17 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + a4; /*0x64bb5d*/
          break;
        default:
          *(_BYTE *)(a1 + a4) = v29; /*0x64ba89*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bab0*/
          a4 += v9 + 1; /*0x64bac4*/
          goto LABEL_47; /*0x64bacb*/
      }
      a4 = v17; /*0x64bcfd*/
LABEL_47:
      ++v28; /*0x64bd04*/
      char * v19 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64bd22*/
      AbstractClass *v20 = Networking_LastEventIndex; /*0x64bd29*/
      qmemcpy(v31, v19, sizeof(v31)); /*0x64bd2e*/
      v19 += 108; /*0x64bd2e*/
      v32 = *(_WORD *)v19; /*0x64bd30*/
      v33 = v19[2]; /*0x64bd34*/
      if ( Networking_LastEventIndex ) /*0x64bd35*/
      {
        v7 = ((_BYTE)g_NetworkEventIndex + 1) & 0x7F; /*0x64bd3a*/
        g_NetworkEventIndex = v7; /*0x64bd3e*/
        --Networking_LastEventIndex; /*0x64bd44*/
        if ( v20 != 1 ) /*0x64bd49*/
          continue; /*0x64bd49*/
      }
      break; /*0x64bd49*/
    }
  }
  result = a4; /*0x64bda7*/
  *a6 = v28; /*0x64bdbc*/
  return result; /*0x64bdb9*/
}
}
} // namespace gamemd

// 0x64BDD0
namespace gamemd {
AbstractClass * * Network_DecodeEvents(char * a1, unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v7; // al
  unsigned __int8 v10; // cl
  unsigned int v11; // ecx
  char *v14; // ebp
  unsigned __int8 v21; // dl
  int v22; // esi
  char *v23; // ecx
  void **v24; // ebp
  void **v26; // esi
  bool v29; // zf
  unsigned __int8 v33; // [esp+13h] [ebp-99h]
  unsigned int v34; // [esp+14h] [ebp-98h]
  int v35; // [esp+18h] [ebp-94h]
  int v37; // [esp+1Ch] [ebp-90h]
  int v38; // [esp+20h] [ebp-8Ch]
  int v40; // [esp+28h] [ebp-84h]
  void **v41; // [esp+2Ch] [ebp-80h]
  unsigned __int8 v44; // [esp+38h] [ebp-74h]
  _DWORD v45[28]; // [esp+3Ch] [ebp-70h] BYREF

  char * v2 = a1; /*0x64bdd9*/
  int v3 = 0; /*0x64bddc*/
  memset(v45, 0, 111); /*0x64bded*/
  v34 = a2; /*0x64bdfd*/
  v35 = 0; /*0x64be01*/
  v33 = 0; /*0x64be05*/
  int v4 = 13; /*0x64be09*/
  char * v5 = a1; /*0x64be0e*/
  v40 = a1[2]; /*0x64be10*/
  if ( a2 < 0xE ) /*0x64be14*/
    return v35; /*0x64c370*/
  AbstractClass *v6 = unk_8B4200; /*0x64be1a*/
  while ( 1 ) /*0x64be20*/
  {
  unsigned int v9; // eax
    v7 = *v5; /*0x64be20*/
    v44 = *v5; /*0x64be24*/
    if ( *v5 == 25 ) /*0x64be28*/
    {
      v3 += v4 + 1; /*0x64c33e*/
      unsigned int v31 = -1 - v4 + v34; /*0x64c342*/
      v4 = 13; /*0x64c344*/
      v34 = v31; /*0x64c349*/
      v5 = &v2[v3]; /*0x64c34d*/
      goto LABEL_48; /*0x64c350*/
    }
    if ( v7 == 28 ) /*0x64be30*/
    {
      int v8 = *(_DWORD *)(v5 + 3); /*0x64be35*/
      BYTE2(v45[0]) = v5[2]; /*0x64be38*/
      v3 += 6; /*0x64be40*/
      *(_DWORD *)((char *)v45 + 3) = v8; /*0x64be43*/
      v9 = v34 - 6; /*0x64be47*/
    }
    else
    {
      if ( v7 != 4 ) /*0x64be4e*/
        goto LABEL_9; /*0x64be4e*/
      v10 = v2[++v3]; /*0x64be50*/
      v33 = v10; /*0x64be59*/
      v9 = v34 - 1; /*0x64be5d*/
    }
    v34 = v9; /*0x64be5e*/
LABEL_9:
    memset((char *)&v45[1] + 3, 0, 0x68u); /*0x64be6d*/
    LOBYTE(v45[0]) = v44; /*0x64be75*/
    v11 = (unsigned __int8)byte_8208EC[v44]; /*0x64be85*/
    v38 = v11; /*0x64be8d*/
    if ( v44 != 4 ) /*0x64be91*/
    {
  AbstractClass *v13; // edi
  char *v12; // esi
      if ( v44 == 27 ) /*0x64be99*/
      {
        v12 = &v2[v3 + 1]; /*0x64bf10*/
        v13 = (char *)&v45[3] + 1; /*0x64bf14*/
      }
      else
      {
        v12 = &v2[v3 + 1]; /*0x64be9d*/
        if ( v44 == 31 ) /*0x64bea1*/
        {
          qmemcpy((char *)&v45[2] + 3, v12, v11); /*0x64bec7*/
          AbstractClass *v15 = *(_DWORD *)((char *)&v45[2] + 3); /*0x64bed0*/
          v14 = (char *)__2_YAPAXI_Z(*(_DWORD *)((char *)&v45[2] + 3)); /*0x64bede*/
          *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64beed*/
          qmemcpy(v14, &a1[v3 + 1 + v38], v15); /*0x64befa*/
          v3 += v15; /*0x64befe*/
          v34 -= v15; /*0x64bf05*/
LABEL_39:
          v6 = unk_8B4200; /*0x64c250*/
          goto LABEL_40; /*0x64c250*/
        }
        v13 = (char *)&v45[1] + 3; /*0x64bea3*/
      }
      qmemcpy(v13, v12, v11); /*0x64beac*/
      goto LABEL_14; /*0x64beac*/
    }
    qmemcpy((char *)&v45[1] + 3, &v2[v3 + 1], v11); /*0x64bf29*/
    if ( v33 > 1u ) /*0x64bf38*/
    {
      v3 += v11 + 1; /*0x64bf41*/
      v34 += -1 - v11; /*0x64bf52*/
      v38 = 5; /*0x64bf56*/
      Debug::Log(); /*0x64bf5e*/
      char v16 = HIBYTE(v45[2]); /*0x64bf70*/
      int v17 = SBYTE1(v45[3]) + 8 * v40; /*0x64bf77*/
      char * v18 = (char *)&unk_AFA468 + 640 * v17; /*0x64bf84*/
      *(_DWORD *)v18 = *(_DWORD *)((char *)&v45[1] + 3); /*0x64bf89*/
      v18[4] = v16; /*0x64bf8b*/
      int v43 = 1; /*0x64bf93*/
      DataGlobal_AC50FC[v17] = 1; /*0x64bf97*/
      if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64bfac*/
        Debug::Log(); /*0x64bfba*/
      char * v36 = &a1[v3]; /*0x64bfe0*/
      char * v42 = (char *)&unk_AFA46D + 640 * v17; /*0x64bfe4*/
      while ( dword_8B41F8 < 0x4000 ) /*0x64bff2*/
      {
        char * v19 = &unk_8B4204[111 * unk_8B4200]; /*0x64c00c*/
        qmemcpy(v19, v45, 0x6Cu); /*0x64c013*/
        v19 += 108; /*0x64c013*/
        *(_WORD *)v19 = v45[27]; /*0x64c015*/
        v19[2] = BYTE2(v45[27]); /*0x64c017*/
        dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c028*/
        unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c047*/
        ++dword_8B41F8; /*0x64c051*/
        v14 = *(char **)v36; /*0x64c057*/
        char v20 = v36[4]; /*0x64c05e*/
        ++v35; /*0x64c063*/
        *(_DWORD *)v42 = *(_DWORD *)v36; /*0x64c06b*/
        HIBYTE(v45[2]) = v20; /*0x64c06d*/
        v42[4] = v20; /*0x64c071*/
        v21 = v33 - 1; /*0x64c078*/
        v33 = v21; /*0x64c081*/
        *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c085*/
        ++v43; /*0x64c089*/
        v42 += 5; /*0x64c08d*/
        DataGlobal_AC50FC[v17] = v43; /*0x64c091*/
        if ( v21 == 1 ) /*0x64c098*/
        {
          v38 = 4; /*0x64c0d3*/
          Debug::Log(); /*0x64c0db*/
          goto LABEL_39; /*0x64c0e3*/
        }
        v3 += 5; /*0x64c0a7*/
        v36 += 5; /*0x64c0ad*/
        v34 -= 5; /*0x64c0b3*/
        if ( !v21 ) /*0x64c0b7*/
          goto LABEL_39; /*0x64c0b7*/
      }
      return -1; /*0x64bff2*/
    }
    if ( !v33 ) /*0x64c0ea*/
      break; /*0x64c0ea*/
LABEL_14:
    v14 = *(char **)((char *)&v45[1] + 3); /*0x64beb5*/
LABEL_40:
    if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c264*/
    {
      Debug::Log(); /*0x64c271*/
      v6 = unk_8B4200; /*0x64c276*/
    }
    if ( dword_8B41F8 >= 0x4000 ) /*0x64c289*/
    {
      if ( LOBYTE(v45[0]) == 31 ) /*0x64c357*/
        __3_YAXPAX_Z(v14); /*0x64c35a*/
      return -1; /*0x64c35a*/
    }
    char * v30 = &unk_8B4204[111 * v6]; /*0x64c29e*/
    qmemcpy(v30, v45, 0x6Cu); /*0x64c2a5*/
    v30 += 108; /*0x64c2a5*/
    *(_WORD *)v30 = v45[27]; /*0x64c2a7*/
    v30[2] = BYTE2(v45[27]); /*0x64c2a9*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c2bd*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c2d6*/
    v3 += v38 + 1; /*0x64c2de*/
    v29 = -1 - v38 + v34 == 0; /*0x64c2e8*/
    unk_8B4200 = v6; /*0x64c2ea*/
    ++dword_8B41F8; /*0x64c2f0*/
    ++v35; /*0x64c2f6*/
    v34 += -1 - v38; /*0x64c2fa*/
    if ( v29 ) /*0x64c2fe*/
      return v35; /*0x64c2fe*/
    v5 = &a1[v3]; /*0x64c306*/
    v4 = (unsigned __int8)byte_8208EC[(unsigned __int8)a1[v3]]; /*0x64c31c*/
    if ( a1[v3] == 4 ) /*0x64c31e*/
      ++v4; /*0x64c320*/
    v2 = a1; /*0x64c321*/
LABEL_48:
    if ( v34 < v4 + 1 ) /*0x64c32e*/
      return v35; /*0x64c32e*/
  }
  v3 += v11 + 1; /*0x64c0f9*/
  v38 = 5; /*0x64c0fd*/
  v37 = 1; /*0x64c105*/
  v22 = SBYTE1(v45[3]) + 8 * v40; /*0x64c10d*/
  v33 = DataGlobal_AC50FC[v22]; /*0x64c11c*/
  v34 += -1 - v11; /*0x64c126*/
  v23 = (char *)&unk_AFA468 + 640 * v22; /*0x64c130*/
  v14 = *(char **)v23; /*0x64c136*/
  *(_DWORD *)((char *)&v45[1] + 3) = *(_DWORD *)v23; /*0x64c138*/
  HIBYTE(v45[2]) = v23[4]; /*0x64c13f*/
  if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c151*/
  {
    Debug::Log(); /*0x64c165*/
    v6 = unk_8B4200; /*0x64c16a*/
  }
  if ( !v33 ) /*0x64c179*/
    goto LABEL_40; /*0x64c179*/
  v24 = (void **)((char *)&unk_AFA46D + 640 * v22); /*0x64c185*/
  while ( dword_8B41F8 < 0x4000 ) /*0x64c19b*/
  {
    char * v25 = &unk_8B4204[111 * v6]; /*0x64c1b0*/
    qmemcpy(v25, v45, 0x6Cu); /*0x64c1b7*/
    v25 += 108; /*0x64c1b7*/
    *(_WORD *)v25 = v45[27]; /*0x64c1b9*/
    v25[2] = BYTE2(v45[27]); /*0x64c1bb*/
    v26 = v24; /*0x64c1cc*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c1d1*/
    v41 = (void **)((char *)v24 + 5); /*0x64c1e8*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c1ec*/
    ++dword_8B41F8; /*0x64c1f3*/
    char v27 = v33 - 1; /*0x64c1fd*/
    unk_8B4200 = v6; /*0x64c200*/
    v14 = (char *)*v24; /*0x64c206*/
    ++v37; /*0x64c208*/
    char v28 = *((_BYTE *)v26 + 4); /*0x64c20c*/
    v29 = v33 == 2; /*0x64c20f*/
    ++v35; /*0x64c211*/
    --v33; /*0x64c215*/
    *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c219*/
    HIBYTE(v45[2]) = v28; /*0x64c21d*/
    if ( v29 ) /*0x64c221*/
    {
      v38 = -1; /*0x64c231*/
      Debug::Log(); /*0x64c248*/
      goto LABEL_39; /*0x64c248*/
    }
    if ( !v27 ) /*0x64c225*/
      goto LABEL_40; /*0x64c225*/
    v24 = v41; /*0x64c18d*/
  }
  return -1; /*0x64c362*/
}
}
} // namespace gamemd

// 0x64CD30
namespace gamemd {
void sub_64CD30(int a1, int a2, int a3, char a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v5 = a1 + a2; /*0x64cd34*/
  if ( a1 <= a1 + a2 ) /*0x64cd39*/
  {
    while ( a4 != DataGlobal_A83EE7[111 * (unsigned __int8)(DataGlobal_A83ED4 + a1)] /*0x64cd67*/
         || a3 != *(int *)((char *)&DataGlobal_A83EE3 + 111 * (unsigned __int8)(DataGlobal_A83ED4 + a1)) )
    {
      if ( ++a1 > v5 ) /*0x64cd6c*/
        return; /*0x64cd6c*/
    }
    char * v6 = (char *)&DataGlobal_A83EEF + 111 * (unsigned __int8)(DataGlobal_A83ED4 + a1); /*0x64cd7e*/
    *(_DWORD *)v6 = *(_DWORD *)a5; /*0x64cd8b*/
    v6[4] = *(_BYTE *)(a5 + 4); /*0x64cd90*/
  }
}
}
} // namespace gamemd

// 0x64CDA0
namespace gamemd {
void Network_ProcessMapEvent(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v23; // eax
  _BYTE *WaypointCoords; // eax
  int k; // esi
  void **v77; // [esp+5Ch] [ebp-10Ch] BYREF
  void *Block; // [esp+60h] [ebp-108h]
  int TileIndex; // [esp+74h] [ebp-F4h] BYREF
  int i; // [esp+88h] [ebp-E0h]
  void *Base; // [esp+8Ch] [ebp-DCh]
  size_t NumOfElements; // [esp+90h] [ebp-D8h]
  void **v94; // [esp+A0h] [ebp-C8h] BYREF
  int j; // [esp+B0h] [ebp-B8h]
  void **v100; // [esp+B8h] [ebp-B0h] BYREF

  int v2 = a1; /*0x64cdb2*/
  int v84 = a1; /*0x64cdc0*/
  if ( DataGlobal_A83EF3[111 * (unsigned __int8)(a1 + DataGlobal_A83ED4)] == 11 ) /*0x64cdd3*/
  {
    _DWORD * v4 = (_DWORD *)Network_Process_6E7C20((char *)&DataGlobal_A83EEF + 111 * (unsigned __int8)(a1 + DataGlobal_A83ED4)); /*0x64cde9*/
    if ( v4 ) /*0x64cdf0*/
    {
      if ( v4 != g_CellClassArray ) /*0x64cdfb*/
      {
        _DWORD * v73 = (_DWORD *)v4[9]; /*0x64ce0b*/
        if ( v73 != (_DWORD *)DataGlobal_AC6640 ) /*0x64ce0f*/
        {
  char v80; // [esp+69h] [ebp-FFh]
  int v79; // [esp+64h] [ebp-104h]
          ObjectVector::Construct(&v77, 0, 0); /*0x64ce2b*/
          int v5 = v2 + a2; /*0x64ce30*/
          v77 = &vt_DynamicVectorClass_ObjectClass; /*0x64ce33*/
          int v82 = 10; /*0x64ce3d*/
          int v81 = 0; /*0x64ce45*/
          int v6 = v2; /*0x64ce4d*/
          for ( i = v2 + a2; v6 < v5; ++v6 ) /*0x64ce53*/
          {
            _BYTE * v7 = BuildingLoadQueue::Find((_BYTE *)&DataGlobal_A83EE3 + 111 * (unsigned __int8)(v6 + DataGlobal_A83ED4)); /*0x64ce72*/
            _BYTE * v8 = v7; /*0x64ce77*/
            if ( v7 /*0x64cec3*/
              && (v7[20] & 4) != 0
              && (char)v7[1668] < 0
              && (v81 < v79
               || (v80 || !v79)
               && v82 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0)) )
            {
              MapClass *v9 = v81++; /*0x64cece*/
              *((_DWORD *)Block + v9) = v8; /*0x64ced9*/
            }
          }
          int v10 = 0; /*0x64cee9*/
          if ( v81 > 0 ) /*0x64ceed*/
          {
  IUnknown *v115; // [esp+F4h] [ebp-74h] BYREF
  float v112; // [esp+E8h] [ebp-80h] BYREF
  float v108; // [esp+D8h] [ebp-90h]
  float v107; // [esp+D4h] [ebp-94h]
  int v103; // [esp+C4h] [ebp-A4h]
  int v102; // [esp+C0h] [ebp-A8h]
  void *v101; // [esp+BCh] [ebp-ACh]
  int v97; // [esp+ACh] [ebp-BCh]
  int v96; // [esp+A8h] [ebp-C0h]
  void *v95; // [esp+A4h] [ebp-C4h]
  float v106; // [esp+D0h] [ebp-98h] BYREF
            _DWORD * v11 = (_DWORD *)Network_Process_5F6790(&v106, &v77); /*0x64cefe*/
  _DWORD v130[3]; // [esp+138h] [ebp-30h] BYREF
            v130[0] = *v11; /*0x64cf05*/
            v130[1] = v11[1]; /*0x64cf0f*/
            v130[2] = v11[2]; /*0x64cf1d*/
            MapClass *v12 = Network_Process_5F6810(&v77, v130); /*0x64cf30*/
            MapClass *v76 = (_DWORD *)v12; /*0x64cf38*/
            Base = 0; /*0x64cf3c*/
            NumOfElements = 0; /*0x64cf40*/
            signed int v91 = 0; /*0x64cf44*/
  int v92; // [esp+98h] [ebp-D0h]
            LOBYTE(v92) = 0; /*0x64cf48*/
            float v93 = 0.0; /*0x64cf4d*/
            if ( v81 > 0 ) /*0x64cf51*/
            {
              do /*0x64d029*/
              {
                TechnoClass *v13 = v76[39]; /*0x64cf67*/
                int v14 = v76[40]; /*0x64cf6b*/
                RecoilData *v15 = v76[41]; /*0x64cf6e*/
  _DWORD *v16; // eax
                v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD, float *))(**((_DWORD **)Block + v10) + 72))( /*0x64cf79*/
                                  *((_DWORD *)Block + v10),
                                  &v112);
                IUnknown *v17 = (float *)Coord::Subtract(&v115, *v16 - v13, v16[1] - v14, v16[2] - v15); /*0x64cf94*/
                v106 = *v17; /*0x64cf9b*/
                v107 = v17[1]; /*0x64cfac*/
                v108 = v17[2]; /*0x64cfb6*/
                int v18 = Coord::Length((int *)&v106); /*0x64cfbd*/
                _DWORD * v19 = (char *)Block + 4 * v10; /*0x64cfcc*/
                int v20 = v10 + 1000 * v18; /*0x64cfd6*/
                int v21 = v91; /*0x64cfdc*/
                if ( (int)(NumOfElements + 1) <= v91 ) /*0x64cfe2*/
                  goto LABEL_22; /*0x64cfe2*/
                if ( !v91 ) /*0x64cfe6*/
                  v21 = 10; /*0x64cfe8*/
                if ( (unsigned __int8)Network_Process_6525A0(v21) ) /*0x64cff2*/
                {
LABEL_22:
                  *((_DWORD *)Base + 2 * NumOfElements) = v20; /*0x64d003*/
                  *((_DWORD *)Base + 2 * NumOfElements + 1) = *v19; /*0x64d010*/
                  LOBYTE(v92) = 0; /*0x64d019*/
                  ++NumOfElements; /*0x64d01e*/
                }
                ++v10; /*0x64d026*/
              }
              while ( v10 < v81 ); /*0x64d029*/
              v2 = v84; /*0x64d02f*/
              v12 = (int)v76; /*0x64d033*/
            }
            v81 = 0; /*0x64d03f*/
            if ( Block && v80 ) /*0x64d04b*/
            {
              __3_YAXPAX_Z(Block); /*0x64d04e*/
              Block = 0; /*0x64d056*/
            }
            v80 = 0; /*0x64d063*/
            v79 = 0; /*0x64d068*/
            VectorClass::CellConstructor(&v100, 0, 0); /*0x64d06c*/
            v100 = &vt_DynamicVectorClass_Cell; /*0x64d07c*/
            int v105 = 10; /*0x64d087*/
            int v104 = 0; /*0x64d08e*/
            BoolVector::Construct(0, 0); /*0x64d095*/
            int v99 = 10; /*0x64d09a*/
            signed int v22 = 0; /*0x64d09e*/
            v23 = NumOfElements; /*0x64d0a0*/
            v94 = &vt_DynamicVectorClass_bool; /*0x64d0a4*/
            for ( j = 0; v22 < (int)NumOfElements; ++v22 ) /*0x64d0b2*/
            {
              if ( !(_BYTE)v92 ) /*0x64d0c2*/
              {
                qsort(Base, v23, 8u, sub_652630); /*0x64d0d1*/
                v93 = 0.0; /*0x64d0d9*/
                LOBYTE(v92) = 1; /*0x64d0dd*/
              }
              _DWORD * v24 = (char *)Base + 8 * v22 + 4; /*0x64d0f0*/
              if ( v81 < v79 /*0x64d117*/
                || (v80 || !v79)
                && v82 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0) )
              {
                MapClass *v25 = v81++; /*0x64d126*/
                *((_DWORD *)Block + v25) = *v24; /*0x64d12f*/
              }
              if ( v104 < v102 /*0x64d171*/
                || (BYTE1(v103) || !v102)
                && v105 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v100[2])(&v100, v105 + v102, 0) )
              {
                int v26 = v104++; /*0x64d186*/
                *((_DWORD *)v101 + v26) = v73; /*0x64d194*/
              }
              if ( j < v96 /*0x64d1c4*/
                || (BYTE1(v97) || !v96)
                && v99 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v94[2])(&v94, v99 + v96, 0) )
              {
                MapClass *v27 = j++; /*0x64d1cf*/
                *((_BYTE *)v95 + v27) = 0; /*0x64d1da*/
              }
              v23 = NumOfElements; /*0x64d1de*/
            }
            TechnoClass *v28 = 0; /*0x64d1fc*/
            int v120 = *(_DWORD *)v12->GetCellCoords_Alt(&TileIndex); /*0x64d202*/
            TechnoClass *v119 = 0; /*0x64d20b*/
            if ( v81 > 0 ) /*0x64d212*/
            {
  ObjectClass *v116; // [esp+F8h] [ebp-70h]
  float v110; // [esp+E0h] [ebp-88h]
  float v109; // [esp+DCh] [ebp-8Ch]
  _DWORD *v75; // [esp+54h] [ebp-114h] BYREF
  ObjectClass *v48; // eax
  int v45; // eax
  int v44; // ecx
  ObjectClass *v42; // esi
  RecoilData *v40; // edx
  ObjectClass *v39; // ecx
  IUnknown *v38; // eax
  _DWORD *v29; // ebp
              while ( 1 ) /*0x64d222*/
              {
                v29 = (_DWORD *)*((_DWORD *)Block + v28); /*0x64d222*/
                v76 = v73; /*0x64d225*/
                if ( !v28 ) /*0x64d229*/
                {
                  _DWORD * v30 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v73); /*0x64d235*/
                  int v31 = v30[80]; /*0x64d23a*/
                  BYTE1(v31) |= 0x80u; /*0x64d245*/
                  v30[80] = v31; /*0x64d248*/
                  *(_BYTE *)v95 = 1; /*0x64d24e*/
                  goto LABEL_84; /*0x64d251*/
                }
                if ( !*((_BYTE *)v95 + v28) ) /*0x64d25a*/
                  break; /*0x64d25a*/
LABEL_84:
                MapClass *v60 = v81; /*0x64d76b*/
                TileIndex = ++v28; /*0x64d772*/
                if ( v28 < v81 ) /*0x64d776*/
                {
                  do /*0x64d889*/
                  {
                    if ( !*((_BYTE *)v95 + v28) ) /*0x64d780*/
                    {
  _WORD *v61; // edi
                      v61 = (_WORD *)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)Block + v28) + 440))( /*0x64d7a4*/
                                       *((_DWORD *)Block + v28),
  char v131[4]; // [esp+144h] [ebp-24h] BYREF
                                       v131);
  char v132[4]; // [esp+148h] [ebp-20h] BYREF
                      _WORD * v62 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v29 + 440))(v29, v132); /*0x64d7b0*/
                      if ( *v62 == *v61 && v62[1] == v61[1] ) /*0x64d7ca*/
                      {
                        _DWORD * v63 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x64d7da*/
  int v125; // [esp+11Ch] [ebp-4Ch] BYREF
                        ScriptAction::GetWaypointCoords(&v125, v63); /*0x64d7e7*/
  char v134[8]; // [esp+154h] [ebp-14h] BYREF
                        WaypointCoords = ScriptAction::GetWaypointCoords(v134, *((_DWORD **)Block + v28)); /*0x64d7fb*/
                        int v128 = *(_DWORD *)WaypointCoords; /*0x64d802*/
                        int v65 = v2; /*0x64d809*/
                        if ( v2 <= i ) /*0x64d814*/
                        {
                          while ( WaypointCoords[4] != DataGlobal_A83EE7[111 * (unsigned __int8)(v65 + DataGlobal_A83ED4)] /*0x64d841*/
                               || v128 != *(int *)((char *)&DataGlobal_A83EE3
                                                 + 111 * (unsigned __int8)(v65 + DataGlobal_A83ED4)) )
                          {
                            if ( ++v65 > i ) /*0x64d84a*/
                              goto LABEL_94; /*0x64d84a*/
                          }
  char v126; // [esp+120h] [ebp-48h]
                          char v66 = v126; /*0x64d863*/
                          char * v67 = (char *)&DataGlobal_A83EEF + 111 * (unsigned __int8)(v65 + DataGlobal_A83ED4); /*0x64d86a*/
                          *(_DWORD *)v67 = v125; /*0x64d871*/
                          v67[4] = v66; /*0x64d873*/
LABEL_94:
                          v2 = v84; /*0x64d876*/
                        }
                        *((_BYTE *)v95 + v28) = 1; /*0x64d87e*/
                      }
                    }
                    v60 = v81; /*0x64d882*/
                    ++v28; /*0x64d886*/
                  }
                  while ( v28 < v81 ); /*0x64d889*/
                  v28 = TileIndex; /*0x64d88f*/
                }
                v119 = v28; /*0x64d895*/
                if ( v28 >= v60 ) /*0x64d89c*/
                  goto LABEL_99; /*0x64d89c*/
              }
              _DWORD * v122 = v73; /*0x64d26b*/
  char v135[12]; // [esp+15Ch] [ebp-Ch] BYREF
              _DWORD * v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v29 + 76))(v29, v135, 0); /*0x64d27a*/
              int v33 = *v32 / 256; /*0x64d2a4*/
              int v34 = v32[1] / 256; /*0x64d2a7*/
              int v35 = (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v73) + 80) >> 8) & 1; /*0x64d2c2*/
              int v36 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v73) + 283) + 4 * v35; /*0x64d2df*/
              v112 = (double)(__int16)v73 + 0.5; /*0x64d2fe*/
              float v114 = 0.0; /*0x64d30b*/
              int v74 = (__int16)v33 - (__int16)v120; /*0x64d316*/
              RecoilData *v87 = 0.0; /*0x64d31a*/
              float v113 = (double)SHIWORD(v73) + 0.5; /*0x64d330*/
              IUnknown *v85 = (float)v74; /*0x64d33e*/
              v74 = (__int16)v34 - SHIWORD(v120); /*0x64d344*/
              ObjectClass *v86 = (float)v74; /*0x64d34c*/
              double v37 = Math::Sqrt(v86 * v86 + v85 * v85); /*0x64d365*/
              if ( v37 == 0.0 ) /*0x64d378*/
              {
                v38 = v85; /*0x64d3c6*/
                v39 = v86; /*0x64d3ca*/
                v40 = v87; /*0x64d3ce*/
                v115 = v85; /*0x64d3d2*/
                v116 = v86; /*0x64d3db*/
              }
              else
              {
                v106 = v85 / v37; /*0x64d380*/
                v38 = v106; /*0x64d38d*/
                v115 = v106; /*0x64d394*/
                v107 = v86 / v37; /*0x64d39b*/
                v39 = v107; /*0x64d3a2*/
                v116 = v107; /*0x64d3af*/
                v108 = 0.0 / v37; /*0x64d3b6*/
                v40 = v108; /*0x64d3bd*/
              }
              RecoilData *v117 = v40; /*0x64d3e2*/
              v87 = v40; /*0x64d3e9*/
              int v41 = *v29; /*0x64d3ed*/
              v86 = v39; /*0x64d3f0*/
              v85 = v38; /*0x64d3f6*/
              v74 = 0; /*0x64d3fa*/
              char v72 = 0; /*0x64d402*/
              int v127 = (*(int (__thiscall **)(_DWORD *))(v41 + 132))(v29); /*0x64d40d*/
              TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, (__int16 *)&v73, *(_DWORD *)(v127 + 1460), 1); /*0x64d42c*/
              while ( 1 ) /*0x64d43e*/
              {
                v109 = v115 + v112; /*0x64d43e*/
                v112 = v109; /*0x64d45a*/
                v110 = v116 + v113; /*0x64d461*/
                v113 = v110; /*0x64d47d*/
                float v111 = v117 + v114; /*0x64d484*/
                v114 = v111; /*0x64d499*/
  _DWORD *v121; // [esp+10Ch] [ebp-5Ch]
                LOWORD(v121) = Math::RoundToInt(v109); /*0x64d4ac*/
                HIWORD(v121) = Math::RoundToInt(v110); /*0x64d4b9*/
                v75 = v121; /*0x64d4d2*/
                v42 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v75); /*0x64d4df*/
                if ( !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v75, 1) ) /*0x64d4f0*/
                  goto LABEL_75; /*0x64d4f0*/
  int v43; // edi
                v43 = MapClass::GetTileIndex( /*0x64d520*/
                        &DataGlobal_87F7E8,
                        (__int16 *)&v75,
                        *(_DWORD *)(v127 + 1460),
                        BYTE1(v42[80]) & 1);
                v44 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v29 + 428))( /*0x64d535*/
                        v29,
                        v42,
                        -1,
                        v36,
                        0,
                        1);
                if ( v43 != TileIndex ) /*0x64d53b*/
                  goto LABEL_68; /*0x64d53b*/
                v45 = v42[80]; /*0x64d53d*/
                if ( (v45 & 0x8000) == 0 ) /*0x64d546*/
                  break; /*0x64d546*/
                v122 = v75; /*0x64d54c*/
LABEL_69:
                if ( ++v74 >= 6 ) /*0x64d5b3*/
                {
                  v48 = &v122; /*0x64d5b9*/
                  goto LABEL_77; /*0x64d5c0*/
                }
              }
              if ( (v45 & 0x100) != 0 ) /*0x64d55d*/
              {
                __int64 v46 = v36 - v42->q11B - 4; /*0x64d56d*/
                if ( (int)((HIDWORD(v46) ^ v46) - HIDWORD(v46)) > 2 ) /*0x64d575*/
                  goto LABEL_75; /*0x64d575*/
              }
              if ( (v42[80] & 0x100) == 0 ) /*0x64d57d*/
              {
                __int64 v47 = v36 - v42->q11B; /*0x64d58a*/
                if ( (int)((HIDWORD(v47) ^ v47) - HIDWORD(v47)) > 2 ) /*0x64d592*/
                  goto LABEL_75; /*0x64d592*/
              }
              if ( v44 < 4 || v44 == 6 ) /*0x64d5a0*/
              {
                if ( v72 ) /*0x64d5cb*/
                {
                  signed int v49 = abs32((__int16)v75 - (__int16)v73); /*0x64d5e7*/
                  signed int v50 = abs32(SHIWORD(v75) - SHIWORD(v73)); /*0x64d5f3*/
                  if ( v49 > v50 ) /*0x64d5f7*/
                    v50 = v49; /*0x64d5f9*/
                  TileIndex = v50 + 3; /*0x64d600*/
                  int v51 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v73) + 80) >> 8; /*0x64d61d*/
                  LOBYTE(v51) = v51 & 1; /*0x64d620*/
                  int v71 = v51; /*0x64d623*/
                  int v52 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v75) + 80) >> 8; /*0x64d639*/
                  LOBYTE(v52) = v52 & 1; /*0x64d63c*/
                  Pathfinding::CalcDistance( /*0x64d64b*/
                    (int)g_AudioInitFlag,
                    (__int16 *)&v75,
                    (__int16 *)&v73,
                    (int)v29,
                    v52,
                    v71,
                    -1);
LABEL_75:
                  v48 = &v122; /*0x64d650*/
                  goto LABEL_77; /*0x64d657*/
                }
  _WORD v118[2]; // [esp+100h] [ebp-68h] BYREF
                v118[0] = Math::RoundToInt(v109); /*0x64d66c*/
                v118[1] = Math::RoundToInt(v110); /*0x64d679*/
                v48 = v118; /*0x64d681*/
LABEL_77:
                v28 = v119; /*0x64d688*/
                v76 = (_DWORD *)*v48; /*0x64d698*/
                *((_DWORD *)v101 + v119) = v76; /*0x64d6a0*/
                _DWORD * v53 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x64d6a9*/
  int v123; // [esp+114h] [ebp-54h] BYREF
                ScriptAction::GetWaypointCoords(&v123, v53); /*0x64d6b6*/
  char v133[8]; // [esp+14Ch] [ebp-1Ch] BYREF
                _BYTE * v54 = ScriptAction::GetWaypointCoords(v133, v29); /*0x64d6c3*/
                int v129 = *(_DWORD *)v54; /*0x64d6ca*/
                int v55 = v84; /*0x64d6d1*/
                if ( v84 <= i ) /*0x64d6de*/
                {
                  while ( v54[4] != DataGlobal_A83EE7[111 * (unsigned __int8)(v55 + DataGlobal_A83ED4)] /*0x64d70b*/
                       || v129 != *(int *)((char *)&DataGlobal_A83EE3 + 111 * (unsigned __int8)(v55 + DataGlobal_A83ED4)) )
                  {
                    if ( ++v55 > i ) /*0x64d714*/
                      goto LABEL_83; /*0x64d714*/
                  }
  char v124; // [esp+118h] [ebp-50h]
                  char v56 = v124; /*0x64d72d*/
                  char * v57 = (char *)&DataGlobal_A83EEF + 111 * (unsigned __int8)(v55 + DataGlobal_A83ED4); /*0x64d734*/
                  *(_DWORD *)v57 = v123; /*0x64d73b*/
                  v57[4] = v56; /*0x64d73d*/
                }
LABEL_83:
                IUnknown *v58 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x64d740*/
                int v59 = v58[80]; /*0x64d74f*/
                v2 = v84; /*0x64d75a*/
                BYTE1(v59) |= 0x80u; /*0x64d75e*/
                v58[80] = v59; /*0x64d761*/
                *((_BYTE *)v95 + v28) = 1; /*0x64d767*/
                goto LABEL_84; /*0x64d767*/
              }
LABEL_68:
              v72 = 1; /*0x64d5a2*/
              goto LABEL_69; /*0x64d5a2*/
            }
LABEL_99:
  _DWORD *v69; // eax
  int v70; // edx
            for ( k = 0; k < v104; v69[80] = v70 ) /*0x64d8af*/
            {
              v69 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v101 + 2 * k); /*0x64d8c1*/
              v70 = v69[80]; /*0x64d8c6*/
              BYTE1(v70) &= ~0x80u; /*0x64d8d1*/
              ++k; /*0x64d8d4*/
            }
            v94 = &vt_VectorClass_bool; /*0x64d8e6*/
            if ( v95 && BYTE1(v97) ) /*0x64d8f8*/
            {
              __3_YAXPAX_Z(v95); /*0x64d8fb*/
              v95 = 0; /*0x64d903*/
            }
            BYTE1(v97) = 0; /*0x64d90e*/
            v96 = 0; /*0x64d915*/
            v100 = &vt_VectorClass_Cell; /*0x64d919*/
            if ( v101 && BYTE1(v103) ) /*0x64d92f*/
            {
              __3_YAXPAX_Z(v101); /*0x64d932*/
              v101 = 0; /*0x64d93a*/
            }
            BYTE1(v103) = 0; /*0x64d945*/
            v102 = 0; /*0x64d94e*/
            __3_YAXPAX_Z(Base); /*0x64d955*/
          }
          v77 = &vt_VectorClass_ObjectClass; /*0x64d963*/
          if ( Block ) /*0x64d96d*/
          {
            if ( v80 ) /*0x64d975*/
              __3_YAXPAX_Z(Block); /*0x64d978*/
          }
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x64DAB0
namespace gamemd {
void ComputeNetworkFrameCRC()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebx
  _DWORD *Value; // eax
  int j; // esi
  HouseClass *v15; // edx
  int k; // ebp
  int v31; // [esp+10h] [ebp-14h] BYREF
  _DWORD v32[2]; // [esp+14h] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-4h]
  unsigned int v0 = 0; /*0x64dab9*/
  int v1 = 0; /*0x64dabe*/
  for ( *(_DWORD *)Networking_CurrentFrameCRC = 0; v1 < g_BuildingClass_Count; *(_DWORD *)Networking_CurrentFrameCRC = v0 ) /*0x64dac8*/
  {
    int v2 = *((_DWORD *)g_InfantryClassLimit + v1); /*0x64dad3*/
    int v3 = *(_DWORD *)(v2 + 156); /*0x64dadc*/
    int v4 = *(_DWORD *)(v2 + 160); /*0x64dae2*/
    v34 = *(_DWORD *)(v2 + 164); /*0x64daf3*/
    v0 = v3 / 10 /*0x64db41*/
       + ((v4 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v2 + 904), &v31) >> 7) + 1) >> 1)
       + (*(_DWORD *)Networking_CurrentFrameCRC >> 31)
       + 2 * *(_DWORD *)Networking_CurrentFrameCRC;
    ++v1; /*0x64db49*/
  }
  for ( i = 0; i < g_HouseClass_BuildState; *(_DWORD *)Networking_CurrentFrameCRC = v0 ) /*0x64db61*/
  {
    int v6 = *((_DWORD *)g_UnitClassPool + i); /*0x64db6d*/
    int v7 = *(_DWORD *)(v6 + 156); /*0x64db76*/
    int v33 = *(_DWORD *)(v6 + 160); /*0x64db7f*/
    v34 = *(_DWORD *)(v6 + 164); /*0x64db8a*/
    int v8 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v6 + 904), &v31) >> 7) + 1) >> 1); /*0x64dbad*/
    Value = ProgressTimer::GetValue((_WORD *)(v6 + 928), v32); /*0x64dbb3*/
    v0 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1) /*0x64dc09*/
       + v8
       + ((v33 / 10) << 16)
       + v7 / 10
       + (*(_DWORD *)Networking_CurrentFrameCRC >> 31)
       + 2 * *(_DWORD *)Networking_CurrentFrameCRC;
    ++i; /*0x64dc0b*/
  }
  for ( j = 0; j < g_BuildingProductionState; *(_DWORD *)Networking_CurrentFrameCRC = v0 ) /*0x64dc23*/
  {
    int v11 = *((_DWORD *)g_BuildingClass_InstanceCount + j); /*0x64dc2f*/
    int v12 = *(_DWORD *)(v11 + 156); /*0x64dc38*/
    int v13 = *(_DWORD *)(v11 + 160); /*0x64dc3e*/
    v34 = *(_DWORD *)(v11 + 164); /*0x64dc48*/
    v0 = v12 / 10 /*0x64dc9d*/
       + ((v13 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v11 + 904), v32) >> 7) + 1) >> 1)
       + (*(_DWORD *)Networking_CurrentFrameCRC >> 31)
       + 2 * *(_DWORD *)Networking_CurrentFrameCRC;
    ++j; /*0x64dca5*/
  }
  int v14 = HouseClass_Count; /*0x64dcb3*/
  if ( HouseClass_Count > 0 ) /*0x64dcbb*/
  {
    v15 = HouseClass_Array; /*0x64dcbd*/
    do /*0x64dce2*/
    {
      int v16 = *(_DWORD *)v15->__pad_0; /*0x64dcc3*/
      v15 = (HouseClass *)((char *)v15 + 4); /*0x64dcc7*/
      v0 = *(unsigned __int8 *)(v16 + 577) + (v0 >> 31) + 2 * v0; /*0x64dcda*/
      --v14; /*0x64dcdc*/
      *(_DWORD *)Networking_CurrentFrameCRC = v0; /*0x64dcdd*/
    }
    while ( v14 ); /*0x64dce2*/
  }
  int * v17 = DataGlobal_8A0370; /*0x64dce4*/
  do /*0x64dd92*/
  {
    int v18 = 0; /*0x64dcec*/
    bool v19 = *v17 <= 0; /*0x64dcee*/
    v31 = 0; /*0x64dcf0*/
    if ( !v19 ) /*0x64dcf4*/
    {
      do /*0x64dd83*/
      {
        _DWORD * v20 = *(_DWORD **)(*(v17 - 3) + 4 * v18); /*0x64dcfd*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v20 + 44))(v20) != 4 /*0x64dd19*/
          || (*(int (__stdcall **)(_DWORD *))(v20[1] + 16))(v20 + 1) != -2 )
        {
          int v21 = v20[39]; /*0x64dd23*/
          int v22 = v20[40]; /*0x64dd25*/
          int v23 = *v20; /*0x64dd2b*/
          v34 = v20[41]; /*0x64dd2d*/
          int v24 = v21 / 10 + ((v22 / 10) << 16) + (*(int (__thiscall **)(_DWORD *))(v23 + 44))(v20); /*0x64dd5d*/
          v18 = v31; /*0x64dd67*/
          *(_DWORD *)Networking_CurrentFrameCRC = v24 + (*(_DWORD *)Networking_CurrentFrameCRC >> 31) + 2 * *(_DWORD *)Networking_CurrentFrameCRC; /*0x64dd73*/
        }
        v19 = ++v18 < *v17; /*0x64dd7d*/
        v31 = v18; /*0x64dd7f*/
      }
      while ( v19 ); /*0x64dd83*/
    }
    v17 += 6; /*0x64dd89*/
  }
  while ( (int)v17 < (int)&DataGlobal_8A03E8 ); /*0x64dd92*/
  for ( k = 0; k < DataGlobal_87F788; ++k ) /*0x64dda1*/
  {
    _DWORD * v26 = (_DWORD *)*((_DWORD *)DataGlobal_87F77C + k); /*0x64ddad*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v26 + 44))(v26) != 4 /*0x64ddc9*/
      || (*(int (__stdcall **)(_DWORD *))(v26[1] + 16))(v26 + 1) != -2 )
    {
      int v27 = v26[39]; /*0x64ddd3*/
      int v28 = v26[40]; /*0x64ddd5*/
      int v29 = *v26; /*0x64dddb*/
      v34 = v26[41]; /*0x64dddd*/
      *(_DWORD *)Networking_CurrentFrameCRC = v27 / 10 /*0x64de1f*/
                                  + ((v28 / 10) << 16)
                                  + (*(int (__thiscall **)(_DWORD *))(v29 + 44))(v26)
                                  + (*(_DWORD *)Networking_CurrentFrameCRC >> 31)
                                  + 2 * *(_DWORD *)Networking_CurrentFrameCRC;
    }
  }
  *(_DWORD *)Networking_CurrentFrameCRC = Random::State((_DWORD *)g_ScenarioClass_Instance + 134) /*0x64de54*/
                              + (*(_DWORD *)Networking_CurrentFrameCRC >> 31)
                              + 2 * *(_DWORD *)Networking_CurrentFrameCRC;
  return AllocateTriggerLog((int)g_CurrentFrame % 256); /*0x64de75*/
}
}
} // namespace gamemd

// 0x6404D0
namespace gamemd {
int sub_6404D0()
{
{
    DataGlobal_AC4E98 = 0;
    DataGlobal_AC4E9C = 0;
    DataGlobal_AC4EA0 = 0;
    DataGlobal_AC4EA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6404F0
namespace gamemd {
void sub_6404F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4EB0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x640520
namespace gamemd {
void sub_640520()
{
{
    DataGlobal_AC4F00 = DataGlobal_AC4EB0 / 60.0;
}
}
} // namespace gamemd

// 0x640540
namespace gamemd {
void sub_640540()
{
{
    DataGlobal_AC4EE8 = 1.0 / DataGlobal_AC4F00;
}
}
} // namespace gamemd

// 0x640560
namespace gamemd {
void sub_640560()
{
{
    DataGlobal_AC4EE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x640580
namespace gamemd {
void sub_640580()
{
{
    DataGlobal_AC4EB8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6405A0
namespace gamemd {
void sub_6405A0()
{
{
    DataGlobal_AC4E88 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6405C0
namespace gamemd {
long long sub_6405C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4E88 - DataGlobal_AC4EB8);
    result = Math::RoundToInt(v0 * DataGlobal_AC4EB0 * 0.5);
    DataGlobal_AC4F08 = result;
    return result;
}
}
} // namespace gamemd

// 0x640600
namespace gamemd {
void sub_640600()
{
{
    DataGlobal_AC4EC0 = Math::ArcTan((double)DataGlobal_AC4F08 * 0.00390625);
}
}
} // namespace gamemd

// 0x640630
namespace gamemd {
void sub_640630()
{
{
    DataGlobal_AC4ED8 = Math::ArcTan((double)(2 * DataGlobal_AC4F08) / DataGlobal_AC4EB0);
}
}
} // namespace gamemd

// 0x640660
namespace gamemd {
long long sub_640660()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4F08) + 0.5);
    DataGlobal_AC4EFC = result;
    return result;
}
}
} // namespace gamemd

// 0x640690
namespace gamemd {
int sub_640690()
{
{
    DataGlobal_AC4EA8 = 0;
    DataGlobal_AC4EAA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6406A0
namespace gamemd {
int sub_6406A0()
{
{
    DataGlobal_AC4EC8 = 0;
    DataGlobal_AC4ECC = 0;
    DataGlobal_AC4ED0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6406C0
namespace gamemd {
int sub_6406C0()
{
{
    DataGlobal_AC4EF8 = 0;
    DataGlobal_AC4EF0 = 128;
    DataGlobal_AC4EF4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x642770
namespace gamemd {
int sub_642770()
{
{
    DataGlobal_AC4F18 = 0;
    DataGlobal_AC4F1C = 0;
    DataGlobal_AC4F20 = 0;
    DataGlobal_AC4F24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x642790
namespace gamemd {
void sub_642790()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4F30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6427C0
namespace gamemd {
void sub_6427C0()
{
{
    DataGlobal_AC5008 = DataGlobal_AC4F30 / 60.0;
}
}
} // namespace gamemd

// 0x6427E0
namespace gamemd {
void sub_6427E0()
{
{
    DataGlobal_AC4FF0 = 1.0 / DataGlobal_AC5008;
}
}
} // namespace gamemd

// 0x642800
namespace gamemd {
void sub_642800()
{
{
    DataGlobal_AC4FE8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x642820
namespace gamemd {
void sub_642820()
{
{
    DataGlobal_AC4F38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x642840
namespace gamemd {
void sub_642840()
{
{
    DataGlobal_AC4F10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x642860
namespace gamemd {
long long sub_642860()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4F10 - DataGlobal_AC4F38);
    result = Math::RoundToInt(v0 * DataGlobal_AC4F30 * 0.5);
    DataGlobal_AC5010 = result;
    return result;
}
}
} // namespace gamemd

// 0x6428A0
namespace gamemd {
void sub_6428A0()
{
{
    DataGlobal_AC4F40 = Math::ArcTan((double)DataGlobal_AC5010 * 0.00390625);
}
}
} // namespace gamemd

// 0x6428D0
namespace gamemd {
void sub_6428D0()
{
{
    DataGlobal_AC4FE0 = Math::ArcTan((double)(2 * DataGlobal_AC5010) / DataGlobal_AC4F30);
}
}
} // namespace gamemd

// 0x642900
namespace gamemd {
long long sub_642900()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC5010) + 0.5);
    DataGlobal_AC5004 = result;
    return result;
}
}
} // namespace gamemd

// 0x642930
namespace gamemd {
int sub_642930()
{
{
    DataGlobal_AC4F28 = 0;
    DataGlobal_AC4F2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x642940
namespace gamemd {
int sub_642940()
{
{
    DataGlobal_AC4F48 = 0;
    DataGlobal_AC4F4C = 0;
    DataGlobal_AC4F50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x642960
namespace gamemd {
int sub_642960()
{
{
    DataGlobal_AC5000 = 0;
    DataGlobal_AC4FF8 = 128;
    DataGlobal_AC4FFC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x642980
namespace gamemd {
int sub_642980()
{
{
    sub_6429E0(g_UIManager);
    return atexit(sub_6429A0);
}
}
} // namespace gamemd

// 0x6429A0
namespace gamemd {
void sub_6429A0()
{
{
    g_UIManager[0] = (int)&vt_ProgressScreenClass;
    if ( DataGlobal_AC4FB0 )
  {
    __3_YAXPAX_Z(DataGlobal_AC4FAC);
    DataGlobal_AC4FB0 = 0;
  }
    DataGlobal_AC4FAC = 0;
}
}
} // namespace gamemd

// 0x6429E0
namespace gamemd {
unsigned int * E4Recv_6429E0::sub_6429E0()
{
{
    this->field_48 = 0;
    *(int *)this->__pad_4C = 0;
    *(int *)&this->__pad_4C[4] = 0;
    this->field_54 = 0;
    this->M88 = 0;
    this->M92 = 0;
    this->M96 = 0;
    this->M97 = 0;
    this->M98 = 0;
    this->M100 = 0;
    this->M104 = 0;
    this->M108 = 0;
    this->M120 = -1;
    this->M128 = -1;
    this->M112 = 0;
    this->M124 = 0;
    *(int *)this->__pad_0 = &vt_ProgressScreenClass;
    memset(&this->__pad_0[8], 0, 0x40u);
    return this->__pad_0;
}
}
} // namespace gamemd

// 0x642FF0
namespace gamemd {
int sub_642FF0(int a1, int a2, char a3)
{
{
    int v3;
    int Default;
    int v5;
    int Instance;
    short *v7;
    int v8;
    int v9;
    int v11;
    int v12[7];
    short v13;
    v3 = 0;
    v11 = Building::GetFoundationSize(v12, 0)[3] + 6;
    if ( a3 )
  {
    Default = BuildingType::FindDefault(0);
    v5 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v3 = (*(int (__thiscall **)(int))(*(int *)(v5) + 128))(v5);
    }
  }
    Instance = TextRenderer::GetInstance();
    v7 = v12;
    v8 = 15;
    do
  {
    *v7++ = *(short *)CharToWideString(g_Str_W);
    --v8;
  }
    while ( v8 );
    v13 = 0;
    Text::MeasureWidth((int)v12, 0);
    v9 = *(int *)(Instance + 28);
    if ( v11 > v3 )
    v3 = v11;
    if ( v3 <= v9 )
    v3 = v9;
    return a1 + a2 * (v3 + 4);
}
}
} // namespace gamemd

// 0x6430C0
namespace gamemd {
int sub_6430C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v10;
    int v11[7];
    short v12;
    v1 = 0;
    v10 = Building::GetFoundationSize(v11, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v11;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v12 = 0;
    Text::MeasureWidth((int)v11, 0);
    v7 = v10;
    v8 = *(int *)(Instance + 28);
    if ( v10 <= v1 )
    v7 = v1;
    if ( v7 <= v8 )
    v7 = v8;
    return (v7 - Building::GetFoundationSize(v11, 0)[3] - 2) / 2;
}
}
} // namespace gamemd

// 0x6431C0
namespace gamemd {
int sub_6431C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int v12[7];
    short v13;
    v1 = 0;
    v11 = Building::GetFoundationSize(v12, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v12;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v13 = 0;
    Text::MeasureWidth((int)v12, 0);
    v7 = *(int *)(Instance + 28);
    if ( v11 > v1 )
    v1 = v11;
    if ( v1 <= v7 )
    v1 = v7;
    v8 = v1 + 4;
    v9 = BuildingType::FindDefault(0);
    if ( !v9 )
    return v8 / 2;
    (*(void (__thiscall **)(int))(*(int *)(v9) + 124))(v9);
    return (v8 - (*(int (__thiscall **)(int))(*(int *)(v9) + 128))(v9)) / 2;
}
}
} // namespace gamemd

// 0x6432C0
namespace gamemd {
int sub_6432C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    short *v11;
    int v12;
    int v14;
    int v15[7];
    short v16;
    v1 = 0;
    v14 = Building::GetFoundationSize(v15, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v15;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v16 = 0;
    Text::MeasureWidth((int)v15, 0);
    v7 = *(int *)(Instance + 28);
    v8 = v14;
    if ( v14 <= v1 )
    v8 = v1;
    if ( v8 <= v7 )
    v8 = v7;
    v9 = v8 + 4;
    v10 = TextRenderer::GetInstance();
    v11 = v15;
    v12 = 15;
    do
  {
    *v11++ = *(short *)CharToWideString(g_Str_W);
    --v12;
  }
    while ( v12 );
    v16 = 0;
    Text::MeasureWidth((int)v15, 0);
    return (v9 - *(int *)(v10 + 28)) / 2;
}
}
} // namespace gamemd

// 0x6435B0
namespace gamemd {
char sub_6435B0(int a1, int a2, int a3)
{
{
    int Default;
    int v4;
    int v5;
    char result;
    int v7;
    int v8[4];
    Default = BuildingType::FindDefault(0);
    v4 = Default;
    if ( Default )
  {
    v5 = (*(int (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    Default = (*(int (__thiscall **)(int))(*(int *)(v4) + 128))(v4);
  }
    else
  {
    v5 = 0;
  }
    v8[0] = a1;
    v8[3] = Default;
    v8[1] = a2;
    v8[2] = v5;
    result = 0;
    v7 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue);
    if ( g_DSurface_Hidden )
  {
    result = sub_4BAFE0((int *)g_DSurface_Hidden);
    if ( !result )
    return Surface::BlitTransparent(v8, g_DSurface_Hidden, a3, v7);
  }
    return result;
}
}
} // namespace gamemd

// 0x643EB0
namespace gamemd {
void sub_643EB0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC5028 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x643EE0
namespace gamemd {
void sub_643EE0()
{
{
    DataGlobal_AC5078 = DataGlobal_AC5028 / 60.0;
}
}
} // namespace gamemd

// 0x643F00
namespace gamemd {
void sub_643F00()
{
{
    DataGlobal_AC5060 = 1.0 / DataGlobal_AC5078;
}
}
} // namespace gamemd

// 0x643F20
namespace gamemd {
void sub_643F20()
{
{
    DataGlobal_AC5058 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x643F40
namespace gamemd {
void sub_643F40()
{
{
    DataGlobal_AC5030 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x643F60
namespace gamemd {
void sub_643F60()
{
{
    DataGlobal_AC5018 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x643F80
namespace gamemd {
long long sub_643F80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC5018 - DataGlobal_AC5030);
    result = Math::RoundToInt(v0 * DataGlobal_AC5028 * 0.5);
    DataGlobal_AC5080 = result;
    return result;
}
}
} // namespace gamemd

// 0x643FC0
namespace gamemd {
void sub_643FC0()
{
{
    DataGlobal_AC5038 = Math::ArcTan((double)DataGlobal_AC5080 * 0.00390625);
}
}
} // namespace gamemd

// 0x643FF0
namespace gamemd {
void sub_643FF0()
{
{
    DataGlobal_AC5050 = Math::ArcTan((double)(2 * DataGlobal_AC5080) / DataGlobal_AC5028);
}
}
} // namespace gamemd

// 0x644020
namespace gamemd {
long long sub_644020()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC5080) + 0.5);
    DataGlobal_AC5074 = result;
    return result;
}
}
} // namespace gamemd

// 0x644050
namespace gamemd {
int sub_644050()
{
{
    DataGlobal_AC5020 = 0;
    DataGlobal_AC5022 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x644060
namespace gamemd {
int sub_644060()
{
{
    DataGlobal_AC5040 = 0;
    DataGlobal_AC5044 = 0;
    DataGlobal_AC5048 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x644080
namespace gamemd {
int sub_644080()
{
{
    DataGlobal_AC5070 = 0;
    DataGlobal_AC5068 = 128;
    DataGlobal_AC506C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x644850
namespace gamemd {
ObjectClass * E4Recv_644850::sub_644850()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620[26816];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620[26836] )
    return (ObjectClass *)-1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x6449F0
namespace gamemd {
void sub_6449F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC5098 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x644A20
namespace gamemd {
void sub_644A20()
{
{
    DataGlobal_AC50E8 = DataGlobal_AC5098 / 60.0;
}
}
} // namespace gamemd

// 0x644A40
namespace gamemd {
void sub_644A40()
{
{
    DataGlobal_AC50D0 = 1.0 / DataGlobal_AC50E8;
}
}
} // namespace gamemd

// 0x644A60
namespace gamemd {
void sub_644A60()
{
{
    DataGlobal_AC50C8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x644A80
namespace gamemd {
void sub_644A80()
{
{
    DataGlobal_AC50A0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x644AA0
namespace gamemd {
void sub_644AA0()
{
{
    DataGlobal_AC5088 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x644AC0
namespace gamemd {
long long sub_644AC0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC5088 - DataGlobal_AC50A0);
    result = Math::RoundToInt(v0 * DataGlobal_AC5098 * 0.5);
    DataGlobal_AC50F0 = result;
    return result;
}
}
} // namespace gamemd

// 0x644B00
namespace gamemd {
void sub_644B00()
{
{
    DataGlobal_AC50A8 = Math::ArcTan((double)DataGlobal_AC50F0 * 0.00390625);
}
}
} // namespace gamemd

// 0x644B30
namespace gamemd {
void sub_644B30()
{
{
    DataGlobal_AC50C0 = Math::ArcTan((double)(2 * DataGlobal_AC50F0) / DataGlobal_AC5098);
}
}
} // namespace gamemd

// 0x644B60
namespace gamemd {
long long sub_644B60()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC50F0) + 0.5);
    DataGlobal_AC50E4 = result;
    return result;
}
}
} // namespace gamemd

// 0x644B90
namespace gamemd {
int sub_644B90()
{
{
    DataGlobal_AC5090 = 0;
    DataGlobal_AC5092 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x644BA0
namespace gamemd {
int sub_644BA0()
{
{
    DataGlobal_AC50B0 = 0;
    DataGlobal_AC50B4 = 0;
    DataGlobal_AC50B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x644BC0
namespace gamemd {
int sub_644BC0()
{
{
    DataGlobal_AC50E0 = 0;
    DataGlobal_AC50D8 = 128;
    DataGlobal_AC50DC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6458D0
namespace gamemd {
ObjectClass * E4Recv_6458D0::sub_6458D0()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620[27292];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620[27312] )
    return (ObjectClass *)-1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x645BA0
namespace gamemd {
char * sub_645BA0(int a1)
{
{
    return DataGlobal_7F0248[a1];
}
}
} // namespace gamemd

// 0x645CD0
namespace gamemd {
void E4Recv_645CD0::sub_645CD0(float a2)
{
{
    *(void**)this = a2 * *(void**)this;
    this->M4 = a2 *(void**)this->M4;
    this->M8 = a2 *(void**)this->M8;
    this->M12 = a2 *(void**)this->M12;
}
}
} // namespace gamemd

// 0x645ED0
namespace gamemd {
float * QuaternionMathMultiply(ObjectClass * aP0, float * a1, float * a2)
{
{
    double v4;
    double v5;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    float v17;
    float v18;
    float v19;
    float v20;
    float a2a;
    v11 = *a2;
    v13 = *((int*)(a2) + 1);
    v15 = *((int*)(a2) + 2);
    a2a = *((int*)(a2) + 3);
    v17 = *((int*)(a1) + 1) * a2a;
    v18 = *((int*)(a1) + 2) * a2a;
    v4 = *((int*)(a1) + 3);
    v12 = v4 * v11;
    v14 = v13 * v4;
    v16 = v15 * v4;
    v19 = *((int*)(a1) + 2) * *a2 - *((int*)(a2) + 2) * *a1;
    v20 = *((int*)(a2) + 1) * *a1 - *((int*)(a1) + 1) * *a2;
    v7 = *((int*)(a1) + 1) * *((int*)(a2) + 2) - *((int*)(a1) + 2) * *((int*)(a2) + 1) + v12 + *a1 * a2a;
    v8 = v17 + v14 + v19;
    v9 = v18 + v16 + v20;
    v10 = v4 * *((int*)(a2) + 3) - (*((int*)(a1) + 2) * *((int*)(a2) + 2) + *((int*)(a1) + 1) * *((int*)(a2) + 1) + *a1 * *a2);
    v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7;
    if ( 0.0 != v5 )
  {
    v7 = v7 / v5;
    v8 = v8 / v5;
    v9 = v9 / v5;
    v10 = v10 / v5;
  }
    *(float *)aP0->__pad_0 = v7;
    *(float *)&aP0->__pad_0[4] = v8;
    *(float *)&aP0->__pad_0[8] = v9;
    *(float *)&aP0->__pad_0[12] = v10;
    return (float *)aP0->__pad_0;
}
}
} // namespace gamemd

// 0x646040
namespace gamemd {
unsigned int * sub_646040(ObjectClass * aP0, float * a1, float * a2)
{
{
    double v4;
    float *v5;
    float v7;
    float v8;
    float v9;
    ObjectClass *v10;
    float v11[4];
    v7 = -*a2;
    v8 = -*((int*)(a2) + 1);
    v9 = -*((int*)(a2) + 2);
    v4 = *((int*)(a2) + 3);
    v11[1] = v8;
    v11[0] = v7;
    *(float *)&v10 = v4;
    v11[2] = v9;
    LODWORD(v11[3]) = v10;
    v5 = QuaternionMathMultiply((ObjectClass *)&v7, a1, v11);
    *(float *)aP0->__pad_0 = *v5;
    *(float *)&aP0->__pad_0[4] = v5[1];
    *(float *)&aP0->__pad_0[8] = v5[2];
    *(float *)&aP0->__pad_0[12] = v5[3];
    return aP0->__pad_0;
}
}
} // namespace gamemd

// 0x6460C0
namespace gamemd {
float * sub_6460C0(float * a0, ObjectClass * aP1)
{
{
    float v3;
    float v4;
    float v5;
    float v6;
    v3 = -*(float *)aP1->__pad_0;
    v4 = -*(float *)&aP1->__pad_0[4];
    v5 = -*(float *)&aP1->__pad_0[8];
    v6 = *(float *)&aP1->__pad_0[12];
    *a0 = v3;
    *((int*)(a0) + 1) = v4;
    *((int*)(a0) + 2) = v5;
    *((int*)(a0) + 3) = v6;
    return a0;
}
}
} // namespace gamemd

// 0x646110
namespace gamemd {
float * sub_646110(float * a1, float * a2)
{
{
    float v3;
    float v4;
    float v5;
    float v6;
    v3 = -*a2;
    v4 = -*((int*)(a2) + 1);
    v5 = -*((int*)(a2) + 2);
    v6 = *((int*)(a2) + 3);
    *a1 = v3;
    *((int*)(a1) + 1) = v4;
    *((int*)(a1) + 2) = v5;
    *((int*)(a1) + 3) = v6;
    return a1;
}
}
} // namespace gamemd

// 0x646464
namespace gamemd {
void sub_646464()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
// positive sp value has been detected, the output may be wrong!
{
  *(_DWORD *)(a2 + 12) = a1; /*0x646464*/
  return a3; /*0x64646e*/
}
}
} // namespace gamemd

// 0x646480
namespace gamemd {
float * Quaternion_FromAxisAngle(float * a1, float * a2, float a3)
{
{
    float v3;
    float v4;
    float v5;
    double v7;
    double v8;
    double v9;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    float v17;
    float v18;
    float v19;
    float v20;
    float v21;
    v3 = *((int*)(a2) + 1);
    v4 = *((int*)(a2) + 2);
    v5 = *a2;
    v11 = *a2;
    v7 = Math::Sqrt(v4 * v4 + v3 * v3 + v11 * v11);
    if ( v7 == 0.0 )
  {
    v12 = v5;
    v13 = v3;
    v14 = v4;
  }
    else
  {
    v15 = v11 / v7;
    v12 = v15;
    v17 = v3 / v7;
    v13 = v17;
    v19 = v4 / v7;
    v14 = v19;
  }
    v8 = Math::SinCos(a3 * 0.5);
    v16 = v12 * v8;
    v18 = v13 * v8;
    v20 = v14 * v8;
    v9 = Math::ArcTan2(a3 * 0.5);
    v21 = v9;
    *a1 = v16;
    *((int*)(a1) + 1) = v18;
    *((int*)(a1) + 2) = v20;
    *((int*)(a1) + 3) = v21;
    return a1;
}
}
} // namespace gamemd

// 0x646980
namespace gamemd {
float * Quaternion_ToMatrix(float * a1, float * a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13[12];
    v2 = *((int*)(a2) + 2) * *((int*)(a2) + 2);
    v12 = *((int*)(a2) + 1) * *((int*)(a2) + 1);
    v13[0] = 1.0 - (v12 + v2 + v12 + v2);
    v4 = *((int*)(a2) + 1) * *a2;
    v5 = *((int*)(a2) + 3) * *((int*)(a2) + 2);
    v13[1] = v4 - v5 + v4 - v5;
    v10 = *((int*)(a2) + 3) * *((int*)(a2) + 1);
    v6 = *a2 * *((int*)(a2) + 2);
    v9 = v6;
    v13[2] = v6 + v10 + v6 + v10;
    v13[4] = v5 + v4 + v5 + v4;
    v11 = *a2 * *a2;
    v13[5] = 1.0 - (v11 + v2 + v11 + v2);
    v7 = *((int*)(a2) + 1) * *((int*)(a2) + 2);
    v8 = *((int*)(a2) + 3) * *a2;
    v13[6] = v7 - v8 + v7 - v8;
    v13[8] = v9 - v10 + v9 - v10;
    v13[11] = 0.0;
    v13[7] = 0.0;
    v13[3] = 0.0;
    v13[9] = v8 + v7 + v8 + v7;
    v13[10] = 1.0 - (v11 + v12 + v11 + v12);
    qmemcpy(a1, v13, 0x30u);
    return a1;
}
}
} // namespace gamemd

// 0x646A80
namespace gamemd {
void sub_646A80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC6650 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x646AB0
namespace gamemd {
void sub_646AB0()
{
{
    DataGlobal_AFA460 = DataGlobal_AC6650 / 60.0;
}
}
} // namespace gamemd

// 0x646AD0
namespace gamemd {
void sub_646AD0()
{
{
    DataGlobal_AFA410 = 1.0 / DataGlobal_AFA460;
}
}
} // namespace gamemd

// 0x646AF0
namespace gamemd {
void sub_646AF0()
{
{
    DataGlobal_AFA408 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x646B10
namespace gamemd {
void sub_646B10()
{
{
    DataGlobal_AFA260 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x646B30
namespace gamemd {
void sub_646B30()
{
{
    DataGlobal_AC5208 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x646B50
namespace gamemd {
long long sub_646B50()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC5208 - DataGlobal_AFA260);
    result = Math::RoundToInt(v0 * DataGlobal_AC6650 * 0.5);
    DataGlobal_B0446C = result;
    return result;
}
}
} // namespace gamemd

// 0x646B90
namespace gamemd {
void sub_646B90()
{
{
    DataGlobal_AFA270 = Math::ArcTan((double)DataGlobal_B0446C * 0.00390625);
}
}
} // namespace gamemd

// 0x646BC0
namespace gamemd {
void sub_646BC0()
{
{
    DataGlobal_AFA330 = Math::ArcTan((double)(2 * DataGlobal_B0446C) / DataGlobal_AC6650);
}
}
} // namespace gamemd

// 0x646BF0
namespace gamemd {
long long sub_646BF0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0446C) + 0.5);
    DataGlobal_AFA45C = result;
    return result;
}
}
} // namespace gamemd

// 0x646C20
namespace gamemd {
int sub_646C20()
{
{
    DataGlobal_AC6640 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x646C30
namespace gamemd {
int sub_646C30()
{
{
    DataGlobal_AFA320 = 0;
    DataGlobal_AFA324 = 0;
    DataGlobal_AFA328 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x646C50
namespace gamemd {
int sub_646C50()
{
{
    DataGlobal_AFA428 = 0;
    DataGlobal_AFA420 = 128;
    DataGlobal_AFA424 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x646C70
namespace gamemd {
int sub_646C70()
{
{
    DataGlobal_AC6630 = 0;
    DataGlobal_AC6634 = 0;
    DataGlobal_AC6638 = 0;
    DataGlobal_AC663C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x646D00
namespace gamemd {
unsigned int * E4Recv_646D00::sub_646D00()
{
{
    *(void**)this = -1;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    return this;
}
}
} // namespace gamemd

// 0x646D20
namespace gamemd {
unsigned int * sub_646D20()
{
{
    int *result;
    int v1;
    result = &DataGlobal_AFA280;
    v1 = 7;
    do
  {
    *(result - 2) = -1;
    *(result - 1) = 0;
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result += 6;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x646D90
namespace gamemd {
int sub_646D90()
{
{
    DataGlobal_AC6648 = Timer::GetTicks();
    return atexit(nullsub_216);
}
}
} // namespace gamemd

// 0x646DB0
namespace gamemd {
void nullsub_216()
{
  ;
}
} // namespace gamemd

// 0x646DC0
namespace gamemd {
unsigned int * sub_646DC0()
{
{
    int *result;
    int v1;
    result = &DataGlobal_AFA360;
    v1 = 7;
    do
  {
    *(result - 2) = -1;
    *(result - 1) = 0;
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result += 6;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x648340
namespace gamemd {
void nullsub_32()
{
  ;
}
} // namespace gamemd

// 0x64AAA0
namespace gamemd {
LRESULT E4Recv_64AAA0::sub_64AAA0()
{
{
    LRESULT v2;
    v2 = SendMessageA(this, 0x18Bu, 0, 0);
    if ( v2 > 50 )
  {
    SendMessageA(this, 0x182u, 0, 0);
    --v2;
  }
    return SendMessageA(this, 0x197u, v2 - 1, 0);
}
}
} // namespace gamemd

// 0x64AE30
namespace gamemd {
int sub_64AE30()
{
{
    DataGlobal_B04884 = 0;
    DataGlobal_B04888 = 0;
    DataGlobal_B0488C = 0;
    DataGlobal_B0488D = 0;
    DataGlobal_B04878 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x64DE80
namespace gamemd {
int Hash_Compute(unsigned int * a1, int a2)
{
  result = a2 + (*a1 >> 31) + 2 * *a1;
  *a1 = result;
}
} // namespace gamemd
