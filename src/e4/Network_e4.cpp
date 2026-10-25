// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5CF830_e4.hpp"
#include "e4/classes/E4Recv_5E23D0_e4.hpp"
#include "e4/classes/E4Recv_5EE100_e4.hpp"
#include "e4/classes/E4Recv_6319C0_e4.hpp"
#include "e4/classes/E4Recv_652540_e4.hpp"
#include "e4/classes/E4Recv_652560_e4.hpp"
#include "e4/classes/E4Recv_6525A0_e4.hpp"
#include "e4/classes/E4Recv_69BBF0_e4.hpp"
#include "e4/classes/E4Recv_6E7C20_e4.hpp"
#include "e4/classes/E4Recv_7ADB00_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/NetworkManager_e4.hpp"
#include "e4/classes/NetworkEventQueueClass_e4.hpp"
#include "e4/classes/Tooltip_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/SessionClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MessageListClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/NetworkID_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RawFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned char aMangler1Westwo[22];  // data: 0x8311EC
extern unsigned char aMangler1Westwo_0[22];  // data: 0x830C08
extern unsigned char aTxtModemOrLoop[22];  // data: 0x831E3C
extern unsigned char aTxtOutOfSync[16];  // data: 0x837DE8
extern unsigned char aTxtReconnectKi[28];  // data: 0x837A30
extern unsigned char aTxtStop[9];  // data: 0x837DF8
extern unsigned char aTxtWaitingConn[20];  // data: 0x831E54

// [x87] C2065 declaration supply (signals@0x48db70)
namespace gamemd { void nullsub_8(); }
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aPortbase[9];  // data: 0x826438 truth(IDA G42.57w9)
extern unsigned char aPortpool[9];  // data: 0x826420 truth(IDA G42.57w9)
extern unsigned int aAboutToInitial;  // data: 0x826450 truth(IDA G42.57w9)


// 0x4311C0
namespace gamemd {  // G42.18 ns repair
int Network::SendBeaconDelete(int a2, int a3)
{

  int result; // eax
  int v5; // edi
  Network *v6; // esi
  int v7; // edx
  void **v8; // ecx
  void *v9; // esi
  int *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v13; // [esp+13h] [ebp-1DDh]
  int v14; // [esp+14h] [ebp-1DCh]
  int v15[4]; // [esp+18h] [ebp-1D8h] BYREF
  int v16; // [esp+28h] [ebp-1C8h] BYREF
  char v17[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  result = this->u32_60; /*0x4311cc*/
  if ( result ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v13 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      v8 = (void **)v6; /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        result = (int)*v8; /*0x4311fe*/
        if ( *v8 ) /*0x4311fe*/
        {
          if ( (*(unsigned char *)(result + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++v8; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 = &v6->u32_C; /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return result; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *v8; /*0x431265*/
    }
    else
    {
      v13 = 0; /*0x431224*/
      result = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = (void *)*(&this->Network_field_0x0 + result); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      result = v9->u32_110; /*0x43123d*/
      v14 = result; /*0x431243*/
      if ( result == *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48) || !v13 ) /*0x431252*/
      {
        if ( (*(&v9->q00C) & 1) != 0 /*0x4312a6*/
          && (unsigned __int8)(*(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3))->IsAllied(result)
          && (unsigned __int8)(dword_A8022C->ptr_0 + v9->u32_110)->IsAlliedWith())
          && !*(unsigned char *)(*(&dword_A8022C->ptr_0 + v9->u32_110) + 501) )
        {
          v10 = (int *)(*(int (**)(int, int *))(*(unsigned int *)dword_880A04 + 120))(dword_880A04, v15); /*0x4312bf*/
          BuildingPlacement::RenderBuildingPlacementShadow( /*0x4312e6*/
            (BuildingPlacement *)v9,
            dword_880A04,
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z(v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        result = (int)(unsigned int *)this + 12 * v14; /*0x4312fd*/
        while ( v9 != *(void **)result ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          result += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return result; /*0x43130c*/
        }
        *(&this->Network_field_0x0 + 2 * v14 + v11 + v14) = 0; /*0x431322*/
        --this->u32_60; /*0x43132e*/
        result = *(unsigned int *)&dword_A8B238; /*0x431331*/
        if ( *(unsigned int *)&dword_A8B238 ) /*0x431338*/
        {
          if ( *(unsigned int *)&dword_A8B238 != 5 ) /*0x431341*/
          {
            result = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x431347*/
            if ( v14 == *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48) ) /*0x43134f*/
            {
              (result) = ((result) & ~0xFF) | ((v13) & 0xFF); /*0x431355*/
              if ( v13 ) /*0x43135b*/
              {
                v16 = 33; /*0x431367*/
                strcpy(v17, ToWideStringChar(**(char ***)&stru_A8D804.__pad_3D[567])); /*0x431390*/
                result = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v17[56] = v14; /*0x4313a9*/
                for ( v17[55] = v11; v12 < *(int *)&stru_A8D804.__pad_3D[579]; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log(); /*0x4313c2*/
                  Network::SendMessage( /*0x4313e9*/
                    (int *)&stru_A8E960.nextScenario[96],
                    (int)&v16,
                    61,
                    1,
                    *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v12) + 40,
                    0,
                    0);
                  result = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x4313ee*/
                }
              }
            }
          }
        }
      }
      else
      {
        *(&v9->q00C) &= 0xFCu; /*0x431254*/
      }
    }
  }
  return result; /*0x431258*/

}
}  // G42.18 ns repair
// 0x431450
namespace gamemd {
int Network::SendBeacon(wchar_t *aP1, int a3, int a4, char a5)
{

  int result; // eax
  int v6; // edi
  Network *v7; // esi
  int v8; // edx
  int *p_Network_field_0x0; // ecx
  int v10; // ebp
  char *v11; // eax
  char v12; // dl
  char Object_field_0x30; // cl
  int *v14; // ecx
  int i; // esi
  int v16; // ecx
  char v17; // [esp+13h] [ebp-1D9h]
  int v19; // [esp+14h] [ebp-1D8h]
  int v20; // [esp+24h] [ebp-1C8h] BYREF
  char v21[43]; // [esp+28h] [ebp-1C4h] BYREF
  char v22; // [esp+53h] [ebp-199h]
  char v23; // [esp+54h] [ebp-198h]
  wchar_t Destination[203]; // [esp+55h] [ebp-197h] BYREF

  if ( a3 == -1 && a4 == -1 ) /*0x431474*/
  {
    result = (int)this->u32_60; /*0x431476*/
    v17 = 1; /*0x431479*/
    if ( !result ) /*0x431480*/
      return result; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    p_Network_field_0x0 = &v7->Network_field_0x0; /*0x43148e*/
    while ( 1 ) /*0x431490*/
    {
      result = *p_Network_field_0x0; /*0x431490*/
      if ( *p_Network_field_0x0 ) /*0x431490*/
      {
        if ( (*(unsigned char *)(result + 12) & 2) != 0 ) /*0x431499*/
          break; /*0x431499*/
      }
      ++v8; /*0x43149f*/
      ++p_Network_field_0x0; /*0x4314a0*/
      if ( v8 >= 3 ) /*0x4314a6*/
      {
        ++v6; /*0x4314a8*/
        v7 = &v7->u32_C; /*0x4314a9*/
        if ( v6 >= 8 ) /*0x4314af*/
          return result; /*0x4314af*/
        goto LABEL_5; /*0x4314af*/
      }
    }
    v10 = *p_Network_field_0x0; /*0x43158a*/
  }
  else
  {
    v17 = 0; /*0x4314ba*/
    result = a4 + 2 * a3 + a3; /*0x4314bf*/
    v10 = *(&this->Network_field_0x0 + result); /*0x4314c1*/
  }
  if ( v10 ) /*0x4314c6*/
  {
    memset((void *)(v10 + 14), 0, 0x100u); /*0x4314e1*/
    if ( aP1 ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v10 + 14), aP1, 0x7Fu); /*0x4314e9*/
    result = *(unsigned int *)&dword_A8B238; /*0x4314f1*/
    if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x431501*/
    {
      if ( v17 && *(void **)(v10 + 272) == MEMORY[0xA83D4C]->Object_field_0x30 && a5 ) /*0x431533*/
      {
        v20 = 34; /*0x43153f*/
        strcpy(v21, ToWideStringChar((char *)*MEMORY[0xA8DA78])); /*0x431568*/
        if ( aP1 ) /*0x431573*/
        {
          wcsncpy(Destination, aP1, 0x80u); /*0x431580*/
        }
        else
        {
          v11 = CharToWideString(&g_INI_DefaultBuffer); /*0x431596*/
          wcscpy(Destination, (const wchar_t *)v11); /*0x4315a1*/
        }
        v12 = -1; /*0x4315b2*/
        Object_field_0x30 = (char)MEMORY[0xA83D4C]->Object_field_0x30; /*0x4315b5*/
        v22 = -1; /*0x4315b8*/
        v23 = Object_field_0x30; /*0x4315bc*/
        result = 0; /*0x4315c0*/
        v14 = &this->Network_field_0x0 + 3 * Object_field_0x30; /*0x4315c8*/
        do /*0x4315dc*/
        {
          if ( *v14 == v10 ) /*0x4315cd*/
          {
            v12 = result; /*0x4315cf*/
            v22 = result; /*0x4315d1*/
          }
          ++result; /*0x4315d5*/
          ++v14; /*0x4315d6*/
        }
        while ( result < 3 ); /*0x4315dc*/
        if ( v12 != -1 ) /*0x4315e1*/
        {
          result = MEMORY[0xA8DA84]; /*0x4315e7*/
          for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x4315f3*/
          {
            Debug::Log(); /*0x431608*/
            (&MEMORY[0xA8E9C0].Socket)->SendMessage((int)&v20, 455, 1, MEMORY[0xA8DA78][i] + 40, 0, 0); /*0x431632*/
            result = MEMORY[0xA8DA84]; /*0x431637*/
          }
        }
      }
      else
      {
        result = *(unsigned int *)(v10 + 272); /*0x43164e*/
        if ( (void *)result != MEMORY[0xA83D4C]->Object_field_0x30 && (*(unsigned char *)(v10 + 12) & 1) != 0 ) /*0x431663*/
        {
          result = ((HouseClass *)MEMORY[0xA83D4C])->IsAllied(result); /*0x43166a*/
          if ( (unsigned char)result ) /*0x431671*/
          {
            result = HouseClass::IsAlliedWith( /*0x431688*/
                       *((#375 **)stru_A80220.ptr_C + *(unsigned int *)(v10 + 272)),
                       (#375 *)MEMORY[0xA83D4C]);
            if ( (unsigned char)result ) /*0x43168f*/
            {
              result = *((unsigned int *)stru_A80220.ptr_C + *(unsigned int *)(v10 + 272)); /*0x43169d*/
              if ( !result->u8_1F5 ) /*0x4316a0*/
              {
                v16 = *(unsigned int *)(v10 + 4); /*0x4316b4*/
                (v19) = ((v19) & ~0xFFFF) | ((*(unsigned int *)v10 / 256) & 0xFFFF); /*0x4316c3*/
                (v19) = ((v19) & ~(0xFFFF << 16)) | (((v16 / 256) & 0xFFFF) << 16); /*0x4316db*/
                return CreateTriggerClassIfFarEnough(11, (unsigned __int8)(v16 >> 31), v19); /*0x4316e5*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x431641*/

}
}
// 0x48D1E0
namespace gamemd {
int Network::Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{

  int v1; // esi
  int i; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  char **v8; // edi
  char *v9; // ebx
  char *v10; // ebp
  char *v11; // eax
  int v12; // edi
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  char *Class; // eax
  int v23; // ebx
  char *v24; // eax
  char **v25; // esi
  char *v26; // edi
  char *v27; // ebp
  char *v28; // eax
  int v29; // esi
  __int16 v30; // si
  int j; // esi
  int ConnectionSpeed; // edi
  int PlayerByID; // eax
  char *v34; // eax
  char *v35; // esi
  int v36; // eax
  int PlayerColorScheme; // eax
  int v38; // esi
  char *v39; // eax
  int v41; // [esp+8h] [ebp-208h]
  int v42; // [esp+20h] [ebp-1F0h]
  unsigned __int16 *v43; // [esp+20h] [ebp-1F0h]
  unsigned short *v44; // [esp+24h] [ebp-1ECh]
  int v45; // [esp+24h] [ebp-1ECh]
  int v46; // [esp+28h] [ebp-1E8h] BYREF
  int Ticks; // [esp+2Ch] [ebp-1E4h] BYREF
  int v48; // [esp+34h] [ebp-1DCh]
  char v49[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v50; // [esp+40h] [ebp-1D0h]
  int v51[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v52; // [esp+A0h] [ebp-170h]
  char v53; // [esp+A2h] [ebp-16Eh]

  if ( (byte_89E950 & 1) == 0 ) /*0x48d1fc*/
  {
    v1 = dword_81D4E4; /*0x48d1fe*/
    byte_89E950 |= 1u; /*0x48d20d*/
    dword_89E920 = Timer::GetTicks(); /*0x48d218*/
    dword_89E928 = v1; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  (&MEMORY[0xA8E9C0])->ReceiveLoop(); /*0x48d23a*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = BYTE2(DataGlobal_A8D60C); /*0x48d251*/
    if ( BYTE2(DataGlobal_A8D60C) ) /*0x48d258*/
      return i; /*0x48d258*/
    v3 = dword_89E928; /*0x48d263*/
    if ( dword_89E920 != -1 ) /*0x48d26c*/
    {
      v4 = Timer::GetTicks() - dword_89E920; /*0x48d278*/
      if ( v4 >= v3 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v3 -= v4; /*0x48d282*/
    }
    if ( !v3 || byte_A8E2A4 ) /*0x48d28f*/
    {
LABEL_10:
      if ( MEMORY[0xA8DA84] ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        (&MEMORY[0xA8E9C0])->ReceiveLoop(); /*0x48d2ac*/
        if ( !(&MEMORY[0xA8E9C0])->GetQueueCount() ) /*0x48d2b6*/
        {
          memset(v51, 0, sizeof(v51)); /*0x48d2cc*/
          v52 = 0; /*0x48d2ce*/
          v53 = 0; /*0x48d2d0*/
          v51[0] = 41; /*0x48d2d6*/
          CopyWideToChar(&v51[1], (char *)*MEMORY[0xA8DA78], -1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(); /*0x48d2f5*/
          HIWORD(v5) = HIWORD(MEMORY[0xA8DA84]); /*0x48d2fa*/
          v6 = 1; /*0x48d304*/
          if ( MEMORY[0xA8DA84] > 1 ) /*0x48d306*/
          {
            v44 = &MEMORY[0xA8E2B4]; /*0x48d30c*/
            do /*0x48d484*/
            {
              (v5) = ((v5) & ~0xFFFF) | ((*v44) & 0xFFFF); /*0x48d318*/
              v7 = *v44 == 0; /*0x48d31b*/
              v46 = v5; /*0x48d31e*/
              if ( !v7 ) /*0x48d322*/
              {
                ToWideStringChar((char *)MEMORY[0xA8DA78][v6]); /*0x48d331*/
                Debug::Log(); /*0x48d33c*/
                (&MEMORY[0xA8E9C0].Socket)->SendMessage((int)v51, 91, 0, MEMORY[0xA8DA78][v6] + 40, v46, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                (&MEMORY[0xA8E9C0])->ReceiveLoop(); /*0x48d375*/
                v42 = 0; /*0x48d37a*/
                v8 = (char **)MEMORY[0xA8DA90]; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = (char *)MEMORY[0xA8DA78][v6]; /*0x48d38d*/
                  v10 = ToWideStringChar(*v8); /*0x48d399*/
                  v11 = ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v42; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = *(unsigned int *)&g_PerformanceTickOffset; /*0x48d3cc*/
                if ( *(unsigned int *)&g_LastPerformanceTick != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks() - *(unsigned int *)&g_LastPerformanceTick; /*0x48d3e7*/
                if ( v12 - dword_A8E284[v42] > 2400 ) /*0x48d3fa*/
                {
                  ToWideStringChar((char *)MEMORY[0xA8DA78][v6]); /*0x48d404*/
                  Debug::Log(); /*0x48d40f*/
                  v13 = MEMORY[0xA8DA78][v6]; /*0x48d41d*/
                  v14 = *(unsigned short *)(v13 + 131); /*0x48d420*/
                  if ( v14 != (unsigned short)v46 && v14 >= 0x400u ) /*0x48d432*/
                  {
                    ToWideStringChar((char *)v13); /*0x48d434*/
                    Debug::Log(); /*0x48d43f*/
                    v15 = MEMORY[0xA8DA78][v6]; /*0x48d44d*/
                    (v16) = ((v16) & ~0xFFFF) | ((*(unsigned short *)(v15 + 131)) & 0xFFFF); /*0x48d456*/
                    (&MEMORY[0xA8E9C0].Socket)->SendMessage((int)v51, 91, 0, v15 + 40, v16, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v5) = HIWORD(MEMORY[0xA8DA84]); /*0x48d471*/
              ++v6; /*0x48d47a*/
              ++v44; /*0x48d480*/
            }
            while ( v6 < MEMORY[0xA8DA84] ); /*0x48d484*/
          }
          Ticks = Timer::GetTicks(); /*0x48d49d*/
          v48 = 120; /*0x48d4a1*/
          while ( (&MEMORY[0xA8E9C0])->GetQueueCount() > 0 ) /*0x48d4b0*/
          {
            v17 = v48; /*0x48d4b6*/
            if ( Ticks != -1 ) /*0x48d4bd*/
            {
              v18 = Timer::GetTicks() - Ticks; /*0x48d4c8*/
              if ( v18 >= v48 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v17 = v48 - v18; /*0x48d4d0*/
            }
            if ( v17 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            (&MEMORY[0xA8E9C0])->ReceiveLoop(); /*0x48d4e0*/
          }
          v19 = dword_81D4E4; /*0x48d4f3*/
          dword_89E920 = Timer::GetTicks(); /*0x48d502*/
          dword_89E924 = v50; /*0x48d510*/
          dword_89E928 = v19; /*0x48d515*/
          byte_A8E2A4 = 0; /*0x48d51b*/
          ((Connection *)&MEMORY[0xA8E9C0])->Close(); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = BYTE2(DataGlobal_A8D60C); /*0x48d527*/
  if ( !BYTE2(DataGlobal_A8D60C) ) /*0x48d52e*/
  {
    for ( i = Network::Send( /*0x48d554*/
                (Network *)&MEMORY[0xA8E9C0],
                (int)&Network_EventType,
                (int)&unk_A8D800,
                (int)stru_A8D804,
                (int)&MEMORY[0xA8D810]);
          i;
          i = Network::Send(
                (Network *)&MEMORY[0xA8E9C0],
                (int)&Network_EventType,
                (int)&unk_A8D800,
                (int)stru_A8D804,
                (int)&MEMORY[0xA8D810]) )
    {
      if ( MEMORY[0xA8D810] == 0xAA04 ) /*0x48d563*/
      {
        v20 = *(unsigned int *)&Network_EventType; /*0x48d569*/
        switch ( *(unsigned int *)&Network_EventType ) /*0x48d583*/
        {
          case 0xA: /*0x48d583*/
            for ( j = 0; j < (&MEMORY[0xA8E9C0])->GetSendCount(); ++j ) /*0x48d828*/
            {
              ConnectionSpeed = (&MEMORY[0xA8E9C0])->GetConnectionSpeed(j); /*0x48d839*/
              PlayerByID = ((Network *)&MEMORY[0xA8E9C0])->FindPlayerByID(ConnectionSpeed); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(stru_A8D804, PlayerByID) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(ConnectionSpeed, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 0xC: /*0x48d583*/
            if ( (!BYTE1(DataGlobal_A8D60C) /*0x48d925*/
               || *(unsigned int *)&DataGlobal_A8D74C == ((wchar_t *)&g_CurrentPlayerName)->Hash())
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&g_NetworkEventQueue,
                                      *(unsigned int *)(*MEMORY[0xA8DA78] + 111))
                 & DataGlobal_A8D667) != 0) )
            {
              v35 = CharToWideString(&g_NetworkPlayerBuffer); /*0x48d935*/
              LOWORD(v36) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x48d94a*/
              v41 = v36; /*0x48d955*/
              PlayerColorScheme = (*(unsigned int *)&DataGlobal_A8D748)->GetPlayerColorScheme(); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                (wchar_t *)v35,
                *(int *)&DataGlobal_A8D748,
                (wchar_t *)&stru_A8D600.__pad_64[4],
                PlayerColorScheme,
                16454,
                v41,
                0);
              PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 2); /*0x48d9a1*/
              wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 0xF: /*0x48d583*/
            Debug::Log(); /*0x48da4a*/
            v38 = 0; /*0x48da57*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)((bool *)(MEMORY[0xA8DA78][v38] + 40))->Compare((int)stru_A8D804) ) /*0x48da6e*/
                {
                  v39 = ToWideStringChar((char *)MEMORY[0xA8DA78][v38]); /*0x48da85*/
                  if ( !_strcmpi(v39, &g_NetworkPlayerBuffer) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v38 >= MEMORY[0xA8DA84] ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay( /*0x48dabd*/
                (int)&g_UIManager,
                v38,
                (double)*(int *)&DataGlobal_A8D667,
                NAN);
            }
            break; /*0x48dac2*/
          case 0x10: /*0x48d583*/
          case 0x13: /*0x48d583*/
            break;
          case 0x1C: /*0x48d583*/
            ((Network *)&Network_EventType)->syncGameState(); /*0x48d594*/
            break; /*0x48d599*/
          case 0x1D: /*0x48d583*/
            if ( (!BYTE1(DataGlobal_A8D60C) /*0x48da2f*/
               || *(unsigned int *)&stru_A8D600.__pad_64[9] == ((wchar_t *)&g_CurrentPlayerName)->Hash())
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&g_NetworkEventQueue,
                                      *(unsigned int *)(*MEMORY[0xA8DA78] + 111))
                 & DataGlobal_A8D667) != 0)
              && (dword_A8D110 && *(unsigned int *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(unsigned int *)&dword_A8B238 == 4) )
            {
              LOBYTE(v20) = stru_A8D600.__pad_64[4]; /*0x48da35*/
              PlayTauntClass(v20); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 0x20: /*0x48d583*/
            ((ObjectClass *)/*0x48d7cb*/
              &g_VisibilitySystem)->PlacePlayerBeacon(stru_A8D600.__pad_73[1], *(int *)&DataGlobal_A8D667, *(int *)&stru_A8D600.__pad_64[7], *(int *)DataGlobal_A8D66F, DataGlobal_A8D673);
            break; /*0x48d7d0*/
          case 0x21: /*0x48d583*/
            ((Network *)&g_VisibilitySystem)->SendBeaconDelete(stru_A8D600.__pad_73[1], DataGlobal_A8D673); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 0x22: /*0x48d583*/
            Network::SendBeacon( /*0x48d810*/
              (Network *)&g_VisibilitySystem,
              (wchar_t *)&stru_A8D600.__pad_64[5],
              stru_A8D600.__pad_64[4],
              DataGlobal_A8D667,
              0);
            break; /*0x48d815*/
          case 0x27: /*0x48d583*/
            if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48d5a4*/
            {
              if ( MEMORY[0xA8DBA0] ) /*0x48d5b1*/
              {
                v21 = 0; /*0x48d5bc*/
                if ( (&MEMORY[0xA8E9C0])->GetSendCount() > 0 ) /*0x48d5c5*/
                {
                  while ( (&MEMORY[0xA8E9C0])->GetConnectionSpeed(v21) != *(unsigned int *)&DataGlobal_A8D667 ) /*0x48d5de*/
                  {
                    if ( ++v21 >= (&MEMORY[0xA8E9C0])->GetSendCount() ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  Class = (char *)((Network *)&MEMORY[0xA8E9C0])->GetClass(*(int *)&DataGlobal_A8D667); /*0x48d5fa*/
                  ToWideStringChar(Class); /*0x48d601*/
                  Debug::Log(); /*0x48d60c*/
                  Network_Helper_646DF0(v21); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 0x29: /*0x48d583*/
            Debug::Log(); /*0x48d635*/
            v23 = 0; /*0x48d642*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48d646*/
            {
              v43 = &dword_A8E2B2; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)((bool *)(MEMORY[0xA8DA78][v23] + 40))->Compare((int)stru_A8D804) ) /*0x48d665*/
                {
                  v24 = ToWideStringChar((char *)MEMORY[0xA8DA78][v23]); /*0x48d680*/
                  if ( !_strcmpi(v24, &g_NetworkPlayerBuffer) ) /*0x48d686*/
                  {
                    v45 = 0; /*0x48d696*/
                    v25 = (char **)MEMORY[0xA8DA90]; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v26 = (char *)MEMORY[0xA8DA78][v23]; /*0x48d6a6*/
                      v27 = ToWideStringChar(*v25); /*0x48d6b0*/
                      v28 = ToWideStringChar(v26); /*0x48d6b2*/
                      if ( !_strcmpi(v27, v28) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v25; /*0x48d6c9*/
                      ++v45; /*0x48d6d3*/
                      if ( (int)v25 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v29 = *(unsigned int *)&g_PerformanceTickOffset; /*0x48d6e0*/
                    if ( *(unsigned int *)&g_LastPerformanceTick != -1 ) /*0x48d6e9*/
                      v29 += Timer::GetTicks() - *(unsigned int *)&g_LastPerformanceTick; /*0x48d6fb*/
                    dword_A8E284[v45] = v29; /*0x48d701*/
LABEL_56:
                    v30 = *(unsigned short *)stru_A8D804; /*0x48d708*/
                    if ( *(unsigned short *)stru_A8D804 != *(unsigned short *)(MEMORY[0xA8DA78][v23] + 40) /*0x48d724*/
                      || *(unsigned short *)stru_A8D804 != *v43 )
                    {
                      Debug::Log(); /*0x48d72b*/
                      if ( !v30 ) /*0x48d73f*/
                        v30 = 1234; /*0x48d741*/
                      *v43 = v30; /*0x48d746*/
                      ((Network *)(MEMORY[0xA8DA78][v23] + 40))->SetPort(v30); /*0x48d756*/
                      Debug::Log(); /*0x48d76d*/
                    }
                  }
                }
                ++v23; /*0x48d77e*/
                ++v43; /*0x48d784*/
              }
              while ( v23 < MEMORY[0xA8DA84] ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 0x2F: /*0x48d583*/
            Debug::Log(); /*0x48d87c*/
            if ( *(unsigned int *)&dword_A8B238 == 4 && *(unsigned int *)&stru_887598.isAliveFlag ) /*0x48d898*/
            {
              v34 = ((Network *)&g_NetworkEventQueue)->processAcknowledgment(&g_NetworkPlayerBuffer); /*0x48d8a8*/
              ((Network *)v34)->GetAddress(v49, (int)&Ticks, &v46); /*0x48d8be*/
              (*(void (**)(unsigned int, int *, int))(**(unsigned int **)&stru_887598.isAliveFlag + 120))( /*0x48d8d5*/
                *(unsigned int *)&stru_887598.isAliveFlag,
                &Ticks,
                v46);
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&Network_EventType, (int)stru_A8D804); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      (&MEMORY[0xA8E9C0])->ReceiveLoop(); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/

}
}
// 0x4C6C50
namespace gamemd {
void * Network::initConnection(int a2, unsigned int * a3, char a4)
{

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    this->u32_8 = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    this->u32_3 = dword_A8ED84; /*0x4c6ca6*/
    return this; /*0x4c6ca4*/
  }
  else
  {
    this->u32_8 = a2; /*0x4c6c5e*/
    a3 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    int v8; // [esp+4h] [ebp-8h] BYREF
    ((Network *)(a3))->CopyAddress(&a2, (int)&v8); /*0x4c6c72*/
    a4 = a4; /*0x4c6c7b*/
    this->u32_8 = v8; /*0x4c6c7f*/
    this->u32_1C = a4; /*0x4c6c82*/
    this->u32_3 = dword_A8ED84; /*0x4c6c8d*/
    return this; /*0x4c6c8b*/
  }
}
}
// 0x4FC980
namespace gamemd {
int Network::SendOffer()
{


  int result; // eax
  (result) = ((result) & ~0xFF) | ((this->u8_1F6) & 0xFF); /*0x4fc98b*/
  if ( !this->u32_1F7 ) /*0x4fc980*/
  {
    if ( (unsigned char)result || this->q1F8 ) /*0x4fc997*/
    {
      (result) = ((result) & ~0xFF) | ((this->u8_1F6) & 0xFF); /*0x4fc9cd*/
    }
    else
    {
      this->u8_1F6 = 1; /*0x4fc9a2*/
      this->u32_298 = *(unsigned int *)&TeamTypeClass_Array; /*0x4fc9b6*/
      int v2; // [esp+4h] [ebp-8h]
      result = v2; /*0x4fc9b8*/
      this->u32_29C = v2; /*0x4fc9bc*/
      (result) = ((result) & ~0xFF) | ((this->u8_1F6) & 0xFF); /*0x4fc9bf*/
      this->u32_2A0 = 0; /*0x4fc9c5*/
    }
  }
  return result; /*0x4fc9c9*/

}
}
// 0x52F3F0
namespace gamemd {
AbstractClass * * Network::Init()
{

  int v0; // ecx
  int v1; // esi
  void *v2; // eax
  char v4; // [esp+Dh] [ebp-25h]
  unsigned char v5[36]; // [esp+Eh] [ebp-24h] BYREF

  v0 = dword_887628; /*0x52f3f0*/
  if ( dword_887628 ) /*0x52f3fe*/
  {
    (**(void (***)(int, int))dword_887628)(dword_887628, 1); /*0x52f404*/
    v0 = 0; /*0x52f406*/
    dword_887628 = 0; /*0x52f408*/
  }
  v1 = 0; /*0x52f414*/
  if ( dword_A83CA8 > 0 ) /*0x52f419*/
  {
    do /*0x52f437*/
    {
      (*(void (**)(unsigned int, int))(**((unsigned int **)dword_A83C9C + v1) + 100))( /*0x52f42c*/
        *((unsigned int *)dword_A83C9C + v1),
        dword_887048);
      ++v1; /*0x52f434*/
    }
    while ( v1 < dword_A83CA8 ); /*0x52f437*/
    v0 = dword_887628; /*0x52f439*/
  }
  if ( !v0 ) /*0x52f441*/
  {
    v2 = __2_YAPAXI_Z(0x3F5CCu); /*0x52f448*/
    if ( v2 ) /*0x52f452*/
      v0 = (v2)->finalizeSession(); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    dword_887628 = v0; /*0x52f461*/
  }
  dword_A8B24C = 2; /*0x52f467*/
  (*(void (**)(int, unsigned int))(*(unsigned int *)v0 + 60))(v0, 0); /*0x52f474*/
  (30)->SetConnectionParams(-1, 600, 1); /*0x52f489*/
  Debug::Log(aAboutToInitial); /*0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (**)(int))(*(unsigned int *)dword_887628 + 28))(dword_887628); /*0x52f4ac*/
  dword_A8E2B2 = 0; /*0x52f4b3*/
  dword_A8E2B6 = 0; /*0x52f4be*/
  byte_A8E2B0 = 0; /*0x52f4c4*/
  dword_A8E2BA = 0; /*0x52f4ca*/
  byte_A8E2A4 = 0; /*0x52f4d0*/
  dword_A8E2BE = 0; /*0x52f4d6*/
  LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x52f4e1*/
  word_A8E2A6 = 0; /*0x52f4e8*/
  dword_A8E2C4 = 0; /*0x52f4ef*/
  dword_A8E2CC = -1; /*0x52f4f5*/
  dword_A8E2D4 = 20; /*0x52f4fb*/
  dword_A8E2D8 = 0; /*0x52f505*/
  dword_A8E2DC = 0; /*0x52f50b*/
  dword_A8E2E0 = -1; /*0x52f511*/
  memset(&MEMORY[0xA8DC4C], 0, 0x200u); /*0x52f517*/
  memset(&MEMORY[0xA8DE4C], 0xFFu, 0x200u); /*0x52f527*/
  dword_A8E050 = 0; /*0x52f529*/
  dword_A8E054 = 0; /*0x52f534*/
  dword_A8E058 = 0; /*0x52f53c*/
  dword_A8E05C = 0; /*0x52f547*/
  memset(&dword_A8E230, 0, 0x20u); /*0x52f54d*/
  dword_A8E04C = 0; /*0x52f557*/
  if ( dword_A8E22C ) /*0x52f55e*/
  {
    dword_A8E228 = dword_A8E22C; /*0x52f560*/
  }
  else if ( byte_A8E250 ) /*0x52f56d*/
  {
    dword_A8E228 += 7; /*0x52f57c*/
    if ( dword_A8E228 >= 1950 ) /*0x52f581*/
      dword_A8E228 = 1250; /*0x52f583*/
    byte_A8E250 = 0; /*0x52f58d*/
  }
  (aRa2mdIni)->Construct(); /*0x52f59c*/
  INIClass::SetInt(aMultiplayer, aPortbase, dword_A8E228, 0); /*0x52f5b7*/
  INIClass::SetInt(aMultiplayer, aPortpool, dword_ABFED8, 0); /*0x52f5d3*/
  INIClass::WriteDigest(v5, 0); /*0x52f5e3*/
  (&dword_B052D0)->validatePacket(); /*0x52f5ed*/
  byte_A8D60E = 1; /*0x52f5f6*/
  (v5)->Dtor(); /*0x52f5fd*/
  return v4; /*0x52f606*/

}
}
// 0x53ED60
namespace gamemd {
int Network::GetAddress(unsigned int *a1, int aP2, unsigned short *a3)
{


  *(unsigned int *)aP2 = this->u32_4; /*0x53ed6a*/
  aP2->q004 = this->u32_8; /*0x53ed71*/
  __int16 result = dword_828140; // ax /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a1 = this->__pad_000; /*0x53ed85*/
  }
  else
  {
    result = this->__pad_000; /*0x53ed8a*/
    *a3 = this->__pad_000; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/

}
}
// 0x53EDA0
namespace gamemd {
void * Network::CopyAddress(unsigned int *a2, int a3)
{


  char *result = &this->u32_4; // eax /*0x53eda4*/
  *(unsigned int *)a3 = this->u32_4; /*0x53edaa*/
  LOWORD(result) = this->u32_8; /*0x53edad*/
  a3->ptr_2 = (unsigned short)result; /*0x53edb1*/
  *a2 = this->__pad_000; /*0x53edbb*/
  return result; /*0x53edac*/

}
}
// 0x53EE00
namespace gamemd {
int Network::IsBroadcastAddr()
{

  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( LOBYTE(this->__pad_000) == 0xFF /*0x53ee3b*/
      && BYTE1(this->__pad_000) == 0xFF
      && BYTE2(this->__pad_000) == 0xFF
      && HIBYTE(this->__pad_000) == 0xFF
      && ((this->u32_4) & 0xFF) == 0xFF
      && (((this->u32_4) >> 8) & 0xFF) == 0xFF
      && (((this->u32_4) >> 16) & 0xFF) == 0xFF
      && HIBYTE(this->u32_4) == 0xFF
      && (this->u32_8) = ((this->u32_8) & ~0xFF) | ((= 0xFF
      && (this->u32_8) = ((this->u32_8) & ~(0xFF << 8)) | (((= 0xFF) & 0xFF) << 8)) & 0xFF))
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( ((this->u32_4) & 0xFF) == 0xFF /*0x53ee5f*/
         && (((this->u32_4) >> 8) & 0xFF) == 0xFF
         && (((this->u32_4) >> 16) & 0xFF) == 0xFF
         && HIBYTE(this->u32_4) == 0xFF
         && (this->u32_8) = ((this->u32_8) & ~0xFF) | ((= 0xFF
         && (this->u32_8) = ((this->u32_8) & ~(0xFF << 8)) | (((= 0xFF) & 0xFF) << 8)) & 0xFF))
  {
    return 1; /*0x53ee66*/
  }
  return 0; /*0x53ee42*/

}
}
// 0x53EF60
namespace gamemd {
int Network::processPacket(TechnoTypeClass * aP1)
{

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return this->u32_4 != aP1->u32_4 || *(unsigned short *)this != *(unsigned short *)aP1; /*0x53ef8d*/
  if ( (*this || this->u32_4 || this->u32_8 || this->u32_C) /*0x53efc8*/
    && (*(unsigned char *)aP1 || aP1->u32_1 || aP1->u32_2 || aP1->u32_3) )
  {
    int v8 = 3; // ecx /*0x53efe8*/
    unsigned short *v9 = &aP1->u32_4; // edi /*0x53efed*/
    unsigned short *v10 = &this->u32_4; // esi /*0x53eff0*/
    bool v11 = 1; // zf /*0x53eff3*/
    do /*0x53eff5*/
    {
      if ( !v8 ) /*0x53eff5*/
        break; /*0x53eff5*/
      v11 = *v10++ == *v9++; /*0x53eff5*/
      --v8; /*0x53eff5*/
    }
    while ( v11 ); /*0x53eff5*/
    return !v11 || *(unsigned int *)this != *(unsigned int *)aP1; /*0x53f001*/
  }
  unsigned short *v4 = &aP1->u32_4; // edi /*0x53efcf*/
  int v5 = 3; // ecx /*0x53efd2*/
  unsigned short *v6 = &this->u32_4; // esi /*0x53efd7*/
  bool v7 = 1; // zf /*0x53efda*/
  do /*0x53efdc*/
  {
    if ( !v5 ) /*0x53efdc*/
      break; /*0x53efdc*/
    v7 = *v6++ == *v4++; /*0x53efdc*/
    --v5; /*0x53efdc*/
  }
  while ( v7 ); /*0x53efdc*/
  return !v7; /*0x53ef8f*/
}
}
// 0x53F5B0
namespace gamemd {
int sub_53F5B0()
{
  if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x53f5b8*/
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 32))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x53f5bc*/
  dword_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}
}
// 0x53F830
namespace gamemd {
int sub_53F830(int a1, int a2)
{
  (*(void (__thiscall **)(int, int, int, unsigned int))(*(unsigned int *)dword_887628 + 16))(dword_887628, a1, a2, 0); /*0x53f83f*/
  return 1; /*0x53f847*/
}
}
// 0x540C60
namespace gamemd {
AbstractClass * * Network::SetConnectionParams(int aP1, int a3, int a4, char aP4, void *a5)
{


  this->q058 = aP1; /*0x540c75*/
  this->q05C = a3; /*0x540c78*/
  this->u32_60 = a4; /*0x540c7b*/
  Debug::Log(); /*0x540c7e*/
  Debug::Log(); /*0x540c8e*/
  if ( aP4 ) /*0x540c9c*/
    (*(void (**)(IPXManagerClass *, unsigned int, unsigned int, unsigned int))(this->Socket + 56))( /*0x540cae*/
      this,
      this->q058,
      this->q05C,
      this->u32_60);
  int v6 = 0; // ecx /*0x540cb4*/
  if ( this->u32_44 > 0 ) /*0x540cb8*/
  {
    IPXManagerClass *v7 = &this->__pad_14; // eax /*0x540cbb*/
    do /*0x540ce1*/
    {
      int Socket; // edx
      Socket = v7->Socket; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      v7 = (IPXManagerClass *)((char *)v7 + 4); /*0x540cc4*/
      *(unsigned int *)(Socket + 40) = this->q058; /*0x540cc7*/
      *(unsigned int *)(*(unsigned int *)&v7[-1].Initialized + 44) = this->q05C; /*0x540cd0*/
      *(unsigned int *)(*(unsigned int *)&v7[-1].Initialized + 48) = this->u32_60; /*0x540cd9*/
    }
    while ( v6 < this->u32_44 ); /*0x540ce1*/
  }
  int result = this->q050; // eax /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    result->u8_28 = this->q058; /*0x540cee*/
    result = this->q05C; /*0x540cf4*/
    *(unsigned int *)(this->q050 + 44) = result; /*0x540cf7*/
    *(unsigned int *)(this->q050 + 48) = this->u32_60; /*0x540d00*/
  }
  return result; /*0x540d03*/

}
}
// 0x540F00
namespace gamemd {
int Network::sendData(AnimClass * aP1)
{
  void (__thiscall ***v7)(unsigned int, int); // ecx
  unsigned int *v9; // eax
  int v10; // ecx
  int v11; // edx

  if ( !this->u32_4 ) /*0x540f05*/
    return 0; /*0x540f05*/
  int v3 = this->u32_44; // ecx /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  int v4 = 0; // esi /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  int i; // eax
  for ( i = &this->u32_28; *(unsigned int *)(this->u32_8C != aP1; i += 4 ) /*0x540f1d*/
  {
    if ( ++v4 >= v3 ) /*0x540f2d*/
      return 0; /*0x540f2d*/
  }
  v7 = *(void (__thiscall ****)(unsigned int, int))(&this->u32_4 * v4 + 40); /*0x540f37*/
  if ( v7 ) /*0x540f41*/
    (**v7)(v7, 1); /*0x540f47*/
  v4 = v4; /*0x540f4c*/
  if ( v4 < this->u32_44 - 1 ) /*0x540f51*/
  {
    v9 = &this->u32_4 * v4 + 40); /*0x540f53*/
    do /*0x540f64*/
    {
      ++v4; /*0x540f58*/
      *v9 = v9[1]; /*0x540f59*/
      ++v9; /*0x540f5e*/
    }
    while ( v4 < this->u32_44 - 1 ); /*0x540f64*/
  }
  v10 = this->u32_54; /*0x540f69*/
  v11 = this->u32_44 - 1; /*0x540f6c*/
  this->u32_44 = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    this->u32_54 = 0; /*0x540f76*/
  return 1; /*0x540f2f*/
}
}
// 0x540F90
namespace gamemd {
int Network::GetSendCount()
{
  return this->u32_44; /*0x540f93*/
}
}
// 0x540FA0
namespace gamemd {
int Network::GetConnectionSpeed(int aP1)
{
  if ( aP1 < 0 || aP1 >= this->u32_44 ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(unsigned int *)(*((unsigned int *)this + aP1 + 10) + 100); /*0x540fb1*/
}
}
// 0x540FC0
namespace gamemd {
int Network::GetClass(int a2)
{


  void *Network_field_0x44 = this->u32_44; // esi /*0x540fc2*/
  int v3 = 0; // eax /*0x540fc5*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  int *i; // edx
  for ( i = this->u32_28; *(unsigned int *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return this->u32_28[v3] + 104; /*0x540fe2*/

}
}
// 0x541000
namespace gamemd {
int Network::FindPlayerByID(int aP1)
{


  void *Network_field_0x44 = this->u32_44; // esi /*0x541002*/
  int v3 = 0; // eax /*0x541005*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  int *i; // edx
  for ( i = this->u32_28; *(unsigned int *)(*i + 100) != aP1; ++i ) /*0x541010*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return this->u32_28[v3] + 76; /*0x541022*/

}
}
// 0x5410F0
namespace gamemd {
int Network::SendMessage(int a2, int a3, int a4, int a5, int a6, int a7)
{

  if ( !this->u32_4 || !this->u32_5 ) /*0x5410fa*/
    return 0; /*0x541169*/
  int v8 = a4; // edi /*0x541107*/
  if ( a4 && (!a5 || ((unsigned char *)a5)->IsBroadcastAddr()) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  int v9; // edi
  v9 = this->u32_48->vt_slot_44(/*0x54113e*/
         this->u32_48, a2, a3, a5, v8, a6, a7);
  if ( !v9 ) /*0x541142*/
  {
    ++this->u32_A0; /*0x54114b*/
    Debug::Log(); /*0x541159*/
  }
  return v9; /*0x541165*/
}
}
// 0x541260
namespace gamemd {
AbstractClass * * Network::SendToPlayer(int a2, int a3, int a4, wchar_t * String2, void *a5_1)
{

  if ( dword_A8DA84 && !_wcsicmp(*(const wchar_t **)dword_A8DA78, a5_1) ) /*0x54127e*/
    return 0; /*0x54127e*/
  int v6 = 1; // esi /*0x54128f*/
  if ( dword_A8DA84 <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v6), a5_1) ) /*0x5412ad*/
  {
    if ( ++v6 >= dword_A8DA84 ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  int v8 = a5_1; // ebx /*0x5412ca*/
  unsigned int *v9; // edx
  v9 = *(unsigned int **)(dword_A8DA78 + 4 * v6); /*0x5412ce*/
  (*((unsigned short *)&(v6))) = *((unsigned short *)&dword_A8E2B2 + v6); /*0x5412d1*/
  v9 += 10; /*0x5412d9*/
  unsigned int v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  v14[0] = *v9; /*0x5412de*/
  char v10; // al
  v10 = *(unsigned char *)(a5_1 + 4); /*0x5412e2*/
  v14[1] = v9[1]; /*0x5412e8*/
  v14[2] = v9[2]; /*0x5412f1*/
  if ( !v10 || !*(unsigned char *)(a5_1 + 5) ) /*0x5412f7*/
    return 0; /*0x5412b9*/
  int v13; // [esp+0h] [ebp-18h] BYREF
  if ( a5_1 && (&v13 == (int *)-12 || (v14)->IsBroadcastAddr()) ) /*0x54130e*/
    v8 = 0; /*0x541317*/
  int v11; // esi
  v11 = (*(int (__thiscall **)(unsigned int, int, int, unsigned int *, int, int, unsigned int))(**(unsigned int **)(a5_1 + 72) + 44))( /*0x541334*/
          *(unsigned int *)(a5_1 + 72),
          a5_1,
          a5_1,
          v14,
          v8,
          v6,
          0);
  if ( !v11 ) /*0x541338*/
  {
    int v12; // ebx
    v12 = *(unsigned int *)(a5_1 + 160) + 1; /*0x541340*/
    *(unsigned int *)(a5_1 + 160) = v12; /*0x541341*/
    Debug::Log("Send overflow %d\n", v12); /*0x54134f*/
  }
  return v11; /*0x5412b9*/
}
}
// 0x541370
namespace gamemd {
int Network::Send(int a2, int a3, int aP3, int a5)
{

  if ( ((this->u32_4) & 0xFF) && (((this->u32_4) >> 8) & 0xFF) ) /*0x541377*/
    return (*(int (**)(int, int, int, int, int))(*(unsigned int *)this->u32_48 + 52))( /*0x541397*/
             this->u32_48,
             a2,
             a3,
             aP3,
             a5);
  else
    return 0; /*0x54139d*/

}
}
// 0x5413B0
namespace gamemd {
int Network::SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( this->u32_4 && this->u32_5 ) /*0x5413b7*/
    return this->u32_48->vt_slot_56(/*0x5413e1*/
             this->u32_48, a2, a3, a4, a5, a6, a7);
  else
    return 0; /*0x5413e7*/
}
}
// 0x5413F0
namespace gamemd {
int Network::receiveData(int a2)
{

  char result = this->u32_4; // al /*0x5413f0*/
  if ( result ) /*0x5413f5*/
  {
    result = this->u32_5; /*0x5413f7*/
    if ( result ) /*0x5413fc*/
      return this->u32_48->vt_slot_60(a2); /*0x541408*/
  }
  return result; /*0x54140b*/
}
}
// 0x541410
namespace gamemd {
int Network::SendPacket(int a2, int a3, unsigned char a4)
{

  if ( !this->u32_4 ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !this->u32_5 ) /*0x54141a*/
    return 0; /*0x54141a*/
  int v5 = this->u32_4C; // ecx /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  int v6; // edi
  v6 = (*(int (__stdcall **)(int, int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++this->u32_A0; /*0x541458*/
    Debug::Log(); /*0x541466*/
  }
  return v6; /*0x541471*/
}
}
// 0x541480
namespace gamemd {
int Network::SendPacketThunk2(int a2, int a3, int a4, int a5)
{

  if ( ((this->u32_4) & 0xFF) && (((this->u32_4) >> 8) & 0xFF) ) /*0x541487*/
    return (*(int (**)(void *, int, int, int, int))(*(unsigned int *)this->u32_4C + 52))( /*0x5414a7*/
             this->u32_4C,
             a2,
             a3,
             a4,
             a5);
  else
    return 0; /*0x5414ad*/

}
}
// 0x541820
namespace gamemd {
void * Network::ReceiveLoop(void *a1)
{

  unsigned int Network_field_0xC; // ebx
  int v3; // edx
  unsigned int field_60; // ecx
  int v5; // edi
  bool v6; // zf
  unsigned __int16 *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  int *v15; // ecx
  int *v16; // eax
  int PlayerName; // eax
  signed int v18; // ebp
  unsigned int *p_q028; // ebx
  char *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *v23; // edx
  unsigned short *u32_64; // ecx
  char v25; // cl
  signed int v26; // ebp
  unsigned int *v27; // edi
  char LinkedIndex; // al
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int i; // edi
  int *v33; // ecx
  int *v34; // eax
  int *v35; // eax
  int *v36; // ecx
  unsigned int v37; // ecx
  signed int v38; // ebp
  unsigned int v39; // ecx
  unsigned int u32_68; // ecx
  unsigned int *v41; // edi
  int result; // eax
  __int16 v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  Network *v45; // [esp+24h] [ebp-4C8h]
  __int16 v46[2]; // [esp+34h] [ebp-4B8h] BYREF
  Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

  v47[0].Network_field_0x10 = 1;  /*0x541830*/
  ((Waypoint *)v47)->InitInvalid();  /*0x541838*/
  if ( dword_887628 )
  {  /*0x541844*/
    while ( 1 )
    {  /*0x541864*/
      *(unsigned int *)v47[0].__pad_14 = 1024;  /*0x541864*/
      *(unsigned int *)&v47[0].__pad_14[4] = 128;  /*0x54186c*/
      *(unsigned int *)v46 = 0;  /*0x541874*/
      Network_field_0xC = (*(int (**)(WinsockInterface *, char *, char *, char *, char *, __int16 *))(*(unsigned int *)dword_887628->__pad_0 + 8))(
                            dword_887628,
                            &v47[0].__pad_87[45],
                            v47[0].__pad_14,
                            v47[0].__pad_34,
                            &v47[0].__pad_14[4],
                            v46);  /*0x541889*/
      v47[0].Network_field_0xC = Network_field_0xC;  /*0x54188d*/
      if ( !Network_field_0xC )
        goto LABEL_92;  /*0x541891*/  /*0x541891*/
      v3 = *(unsigned int *)&v47[0].__pad_34[4];  /*0x54189b*/
      v47[0].Network_field_0x0 = *(unsigned int *)v47[0].__pad_34;  /*0x5418a6*/
      field_60 = this->field_60;  /*0x5418aa*/
      *((unsigned int *)this + 35) = &v47[0].__pad_87[45];  /*0x5418ad*/
      v47[0].Network_field_0x4 = v3;  /*0x5418b7*/
      v47[0].Network_field_0x8 = *(unsigned int *)&v47[0].__pad_34[8];  /*0x5418bb*/
      if ( *(unsigned short *)&v47[0].__pad_87[45] == *(unsigned short *)(field_60 + 36) )
      {  /*0x5418cb*/
        if ( Network_Recv(
               (int)&v47[0].__pad_87[45],
               (int)&v47[0].__pad_87[45],
               Network_field_0xC,
               (Network *)v47[0].__pad_34,
               v46[0]) )
        {  /*0x5418ee*/
          goto LABEL_87;  /*0x5418f5*/
        }
        if ( (*(int (**)(unsigned int, char *, unsigned int, Network *, unsigned int))(*(unsigned int *)this->field_60
                                                                                          + 48))(
               this->field_60,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               *(unsigned int *)v46) )
        {  /*0x541913*/
          if ( *(unsigned int *)&dword_A8B238.field_0 == 4 && byte_A8E2C8 )
          {  /*0x541932*/
            v5 = 0;  /*0x54193d*/
            v6 = *(unsigned int *)&stru_A8D804.__pad_3D[579] == 0;  /*0x54193f*/
            if ( *(int *)&stru_A8D804.__pad_3D[579] <= 0 )
            {  /*0x541941*/
LABEL_14:
              if ( !v6 )
              {  /*0x541980*/
                Debug::Log();  /*0x54198b*/
                if ( Network_field_0xC >= 0x10 && v47[0].__pad_87[47] != 2 && Network_field_0xC >= 0x3F )
                {  /*0x5419ad*/
                  v8 = *(unsigned int *)(*((unsigned int *)this + 35) + 16);  /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 )
                  {  /*0x5419cb*/
                    v9 = (const char *)(*((unsigned int *)this + 35) + 20);  /*0x5419d3*/
                    *(unsigned int *)&v47[0].__pad_14[8] = 0;  /*0x5419d6*/
                    *(unsigned int *)&v47[0].__pad_14[12] = 0;  /*0x5419dc*/
                    *(unsigned int *)&v47[0].Network_field_0x22[2] = 0;  /*0x5419e4*/
                    v47[0].Network_field_0x28 = 0;  /*0x5419e9*/
                    *(unsigned int *)v47[0].__pad_2C = 0;  /*0x5419ee*/
                    LOWORD(v47[0].Network_field_0x30) = 0;  /*0x5419f2*/
                    strncpy(&v47[0].__pad_14[8], v9, 0x14u);  /*0x5419f7*/
                    v10 = 0;  /*0x541a04*/
                    if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 )
                    {  /*0x541a08*/
                      while ( 1 )
                      {  /*0x541a1b*/
                        v11 = ToWideStringChar(*(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10));  /*0x541a1b*/
                        if ( !_strcmpi(v11, &v47[0].__pad_14[8]) )
                          break;  /*0x541a21*/  /*0x541a21*/
                        if ( ++v10 >= *(int *)&stru_A8D804.__pad_3D[579] )
                          goto LABEL_87;  /*0x541a35*/  /*0x541a35*/
                      }
                      if ( !(unsigned __int8)NetworkID::Compare(
                                               (bool *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40),
                                               (int)v47)
                        || *(unsigned short *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40) != v46[0] )
                      {  /*0x541a67*/
                        Debug::Log();  /*0x541a7d*/
                        v12 = v46[0];  /*0x541a82*/
                        v13 = *(&dword_A8E2B2 + v10);  /*0x541a86*/
                        *(&dword_A8E2B2 + v10) = v46[0];  /*0x541a91*/
                        Network::reconnect(
                          (Network *)&dword_B052D0,
                          *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 111),
                          v12);  /*0x541aab*/
                        (*(void (**)(unsigned int, Network *, __int16))(*(unsigned int *)this->field_60 + 64))(
                          this->field_60,
                          v47,
                          v13);  /*0x541abb*/
                        v14 = *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10);  /*0x541ac7*/
                        LOWORD(v14) = *(unsigned short *)(v14 + 40);  /*0x541acc*/
                        (*(void (**)(unsigned int, Network *, int))(*(unsigned int *)this->field_60 + 64))(
                          this->field_60,
                          v47,
                          v14);  /*0x541ad6*/
                        v15 = (int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40);  /*0x541ae5*/
                        *v15 = v47[0].Network_field_0x0;  /*0x541ae8*/
                        v15[1] = v47[0].Network_field_0x4;  /*0x541aee*/
                        v15[2] = v47[0].Network_field_0x8;  /*0x541af5*/
                        Network::SetPort(
                          (Network *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40),
                          v46[0]);  /*0x541b09*/
                        NetworkManager::SetPlayerAddress(
                          (NetworkManager *)&dword_B052D0,
                          *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 111),
                          (unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40));  /*0x541b24*/
                        v16 = (int *)(*(unsigned int *)&stru_A8D804.__pad_3D[4 * (v10)->FindPlayerName() + 591] + 40);  /*0x541b3f*/
                        *v16 = v47[0].Network_field_0x0;  /*0x541b42*/
                        v16[1] = v47[0].Network_field_0x4;  /*0x541b48*/
                        v16[2] = v47[0].Network_field_0x8;  /*0x541b4f*/
                        v43 = v46[0];  /*0x541b56*/
                        PlayerName = (v10)->FindPlayerName();  /*0x541b5d*/
                        ((Network *)(*(unsigned int *)&stru_A8D804.__pad_3D[4 * PlayerName + 591] + 40))->SetPort(v43);  /*0x541b6c*/
                        v18 = 0;  /*0x541b74*/
                        if ( (int)this->field_5C > 0 )
                        {  /*0x541b78*/
                          p_q028 = &this->q028;  /*0x541b7a*/
                          while ( 1 )
                          {  /*0x541b87*/
                            v20 = ToWideStringChar((char *)(*p_q028 + 104));  /*0x541b87*/
                            if ( !_strcmpi(v20, &v47[0].__pad_14[8]) )
                              break;  /*0x541b8d*/  /*0x541b8d*/
                            ++v18;  /*0x541b9c*/
                            ++p_q028;  /*0x541b9d*/
                            if ( v18 >= (signed int)this->field_5C )
                              goto LABEL_33;  /*0x541ba2*/  /*0x541ba2*/
                          }
                          v21 = (int *)(*(unsigned int *)&this->field_24[4 * v18 + 4] + 76);  /*0x541bae*/
                          *v21 = v47[0].Network_field_0x0;  /*0x541bb1*/
                          v21[1] = v47[0].Network_field_0x4;  /*0x541bb7*/
                          v21[2] = v47[0].Network_field_0x8;  /*0x541bbe*/
                          ((Network *)(*(unsigned int *)&this->field_24[4 * v18 + 4] + 76))->SetPort(v46[0]);  /*0x541bcd*/
                          ((Network *)(*(unsigned int *)&this->field_24[4 * v18 + 4] + 76))->FormatAddress(0);  /*0x541bdb*/
                          Debug::Log();  /*0x541be7*/
LABEL_33:
                          Network_field_0xC = v47[0].Network_field_0xC;  /*0x541bef*/
                        }
                        if ( !byte_A8D60E )
                        {  /*0x541bfa*/
                          if ( this->field_5C )
                          {  /*0x541c00*/
                            v22 = *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v10);  /*0x541c16*/
                            if ( dword_A80238 > *(unsigned int *)(v22 + 111) )
                            {  /*0x541c1c*/
                              if ( SessionClass::IsValidHouse(
                                     (int)&dword_A8B238,
                                     *((#375 **)&dword_A8022C + *(unsigned int *)(v22 + 111))) )
                              {  /*0x541c36*/
                                (v47)->FormatAddress(0);  /*0x541c49*/
                                ((Network *)(this->u32_68 + 76))->FormatAddress(0);  /*0x541c57*/
                                Debug::Log();  /*0x541c69*/
                                v23 = (int *)(this->u32_68 + 76);  /*0x541c75*/
                                *v23 = v47[0].Network_field_0x0;  /*0x541c7b*/
                                v23[1] = v47[0].Network_field_0x4;  /*0x541c81*/
                                v23[2] = v47[0].Network_field_0x8;  /*0x541c88*/
                                ((Network *)(this->u32_68 + 76))->SetPort(v46[0]);  /*0x541c96*/
                                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0;  /*0x541ca7*/
                                dword_A8BB24 = v47[0].Network_field_0x8;  /*0x541cb1*/
                                dword_A8BB20 = v47[0].Network_field_0x4;  /*0x541cbd*/
                                (&stru_A8BB1C)->SetPort(v46[0]);  /*0x541cc2*/
                                *(NetworkID *)&stru_A8D804.__pad_3D[867] = *(NetworkID *)&v47[0].Network_field_0x0;  /*0x541cd3*/
                                *(unsigned int *)&stru_A8D804.__pad_3D[875] = v47[0].Network_field_0x8;  /*0x541ce8*/
                                ((Network *)&stru_A8D804.__pad_3D[867])->SetPort(v46[0]);  /*0x541cee*/
                                *(unsigned short *)&stru_A8D804.__pad_3D[891] = v46[0];  /*0x541cf8*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v7 = &dword_A8E2B2;  /*0x541943*/
              while ( !(unsigned __int8)NetworkID::Compare(
                                          (bool *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v5) + 40),
                                          (int)v47)
                   || *v7 != v46[0] )
              {  /*0x54196b*/
                ++v5;  /*0x541976*/
                ++v7;  /*0x541977*/
                if ( v5 >= *(int *)&stru_A8D804.__pad_3D[579] )
                {  /*0x54197c*/
                  v6 = *(unsigned int *)&stru_A8D804.__pad_3D[579] == 0;  /*0x54197e*/
                  goto LABEL_14;  /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87;  /*0x54196b*/
        }
        ++*((unsigned int *)this + 41);  /*0x54216c*/
        goto LABEL_91;  /*0x542178*/
      }
      u32_64 = (unsigned short *)this->u32_64;  /*0x541d04*/
      if ( *(unsigned short *)&v47[0].__pad_87[45] == u32_64[18] )
      {  /*0x541d0b*/
        if ( !stru_A8D804.__pad_3D[863]
          || (*(int (**)(unsigned short *, char *, unsigned int, Network *, unsigned int))(*(unsigned int *)u32_64 + 48))(
               u32_64,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               0) )
        {  /*0x541d2c*/
          goto LABEL_87;  /*0x541d31*/
        }
        ++*((unsigned int *)this + 41);  /*0x542183*/
LABEL_91:
        Debug::Log();  /*0x54218f*/
        goto LABEL_92;  /*0x54218f*/
      }
      if ( *(unsigned short *)&v47[0].__pad_87[45] != this->u32_20
        || Network_Recv(
             (int)&v47[0].__pad_87[45],
             (int)&v47[0].__pad_87[45],
             Network_field_0xC,
             (Network *)v47[0].__pad_34,
             v46[0]) )
      {  /*0x541d63*/
        goto LABEL_87;  /*0x541d6a*/
      }
      v25 = v47[0].__pad_87[47];  /*0x541d75*/
      if ( stru_A8D804.__pad_3D[863] && v47[0].__pad_87[48] == -1 )
      {  /*0x541d87*/
        if ( v47[0].__pad_87[47] == 2 )
        {  /*0x541d90*/
          (*(void (**)(unsigned int, char *, unsigned int))(*(unsigned int *)this->u32_68 + 12))(
            this->u32_68,
            &v47[0].__pad_87[45],
            Network_field_0xC);  /*0x541da0*/
        }
        else if ( (int)this->field_5C > 0 )
        {  /*0x541dad*/
          (v47)->FormatAddress(0);  /*0x541e46*/
          Debug::Log();  /*0x541e59*/
          if ( !(*(int (**)(unsigned int, char *, unsigned int))(*(unsigned int *)this->q028 + 12))(
                  this->q028,
                  &v47[0].__pad_87[45],
                  Network_field_0xC) )
          {  /*0x541e6f*/
            Network_field_0xC = 0;  /*0x541e80*/
            ++*((unsigned int *)this + 41);  /*0x541e85*/
            goto LABEL_74;  /*0x541e91*/
          }
        }
        goto LABEL_75;  /*0x541da3*/
      }
      v26 = 0;  /*0x541e99*/
      if ( (int)this->field_5C <= 0 )
      {  /*0x541e9d*/
LABEL_60:
        if ( *(unsigned int *)&dword_A8B238.field_0 == 4
          && !dword_A8E7AC
          && *(int *)&stru_A8E960.random[528] > 8
          && !stru_A8D804.__pad_3D[863]
          && Network_field_0xC > 0xF
          && v25 == 1
          && v47[0].__pad_87[59] == 25 )
        {  /*0x541f4a*/
          v29 = 1;  /*0x541f56*/
          v30 = v47[0].__pad_87[61];  /*0x541f5b*/
          if ( *(int *)&stru_A8D804.__pad_3D[579] > 1 )
          {  /*0x541f65*/
            v31 = *(unsigned int *)&stru_A8D804.__pad_3D[567] + 4;  /*0x541f71*/
            while ( *(unsigned int *)(*(unsigned int *)v31 + 111) != v47[0].__pad_87[61] )
            {  /*0x541f79*/
              ++v29;  /*0x541f7f*/
              v31 += 4;  /*0x541f80*/
              if ( v29 >= *(int *)&stru_A8D804.__pad_3D[579] )
                goto LABEL_86;  /*0x541f85*/  /*0x541f85*/
            }
            v35 = (int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v29) + 40);  /*0x542113*/
            v44 = v47[0].__pad_87[61];  /*0x542116*/
            *v35 = v47[0].Network_field_0x0;  /*0x542117*/
            v35[1] = v47[0].Network_field_0x4;  /*0x54211d*/
            v35[2] = v47[0].Network_field_0x8;  /*0x542124*/
            if ( (*(int (**)(IPXManagerClass *, int))(this->Socket + 24))(this, v44) != -1 )
            {  /*0x542131*/
              v36 = (int *)(*(unsigned int *)&this->field_24[4
                                                     * (*(int (**)(IPXManagerClass *, int))(this->Socket + 24))(
                                                         this,
                                                         v30)
                                                     + 4]
                          + 76);  /*0x542143*/
              *v36 = v47[0].Network_field_0x0;  /*0x542146*/
              v36[1] = v47[0].Network_field_0x4;  /*0x54214c*/
              v36[2] = v47[0].Network_field_0x8;  /*0x542153*/
            }
LABEL_86:
            Network_field_0xC = v47[0].Network_field_0xC;  /*0x542156*/
          }
        }
        goto LABEL_87;  /*0x542156*/
      }
      v27 = &this->q028;  /*0x541e9f*/
      while ( stru_A8D804.__pad_3D[863] )
      {  /*0x541ea9*/
        LinkedIndex = (&dword_B052D0)->GetLinkedIndex(*(unsigned int *)(*v27 + 100));  /*0x541eb6*/
        v25 = v47[0].__pad_87[47];  /*0x541ebb*/
        if ( LinkedIndex == v47[0].__pad_87[48] )
          goto LABEL_72;  /*0x541ec4*/  /*0x541ec4*/
        if ( !stru_A8D804.__pad_3D[863] )
          break;  /*0x541ed1*/  /*0x541ed1*/
LABEL_59:
        ++v26;  /*0x541ef1*/
        ++v27;  /*0x541ef5*/
        if ( v26 >= (signed int)this->field_5C )
          goto LABEL_60;  /*0x541efa*/  /*0x541efa*/
      }
      if ( !(unsigned __int8)GUID::Compare((char *)(*v27 + 76), (int)v47) )
        break;  /*0x541edd*/  /*0x541edd*/
LABEL_72:
      if ( !(*(int (**)(unsigned int, char *, unsigned int))(**(unsigned int **)&this->field_24[4 * v26 + 4] + 12))(
              *(unsigned int *)&this->field_24[4 * v26 + 4],
              &v47[0].__pad_87[45],
              Network_field_0xC) )
      {  /*0x541f9b*/
        Network_field_0xC = 0;  /*0x541fa8*/
        ++*((unsigned int *)this + 41);  /*0x541fad*/
LABEL_74:
        Debug::Log();  /*0x541fb9*/
      }
LABEL_75:
      if ( *(unsigned int *)&dword_A8B238.field_0 == 4 )
      {  /*0x541fc8*/
        if ( stru_A8D804.__pad_3D[863] )
        {  /*0x541fd5*/
          if ( ((char *)v47)->processPacket(this->u32_68 + 76) )
          {  /*0x541fe6*/
            for ( i = 1; i < *(int *)&stru_A8D804.__pad_3D[579]; ++i )
            {  /*0x541fff*/
              if ( (unsigned __int8)NetworkID::Compare(
                                      (bool *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i) + 40),
                                      this->u32_68 + 76)
                && SessionClass::IsValidHouse(
                     (int)&dword_A8B238,
                     *((#375 **)&dword_A8022C
                     + *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i) + 111))) )
              {  /*0x54203e*/
                (v47)->FormatAddress(0);  /*0x542051*/
                ((Network *)(this->u32_68 + 76))->FormatAddress(0);  /*0x54205f*/
                Debug::Log();  /*0x542071*/
                v33 = (int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i) + 40);  /*0x542085*/
                *v33 = v47[0].Network_field_0x0;  /*0x542088*/
                v33[1] = v47[0].Network_field_0x4;  /*0x54208e*/
                v33[2] = v47[0].Network_field_0x8;  /*0x542095*/
                v34 = (int *)(this->u32_68 + 76);  /*0x54209f*/
                *v34 = v47[0].Network_field_0x0;  /*0x5420a2*/
                v34[1] = v47[0].Network_field_0x4;  /*0x5420a8*/
                v34[2] = v47[0].Network_field_0x8;  /*0x5420af*/
                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0;  /*0x5420be*/
                *(NetworkID *)&stru_A8D804.__pad_3D[867] = *(NetworkID *)&v47[0].Network_field_0x0;  /*0x5420c3*/
                dword_A8BB20 = v47[0].Network_field_0x4;  /*0x5420cd*/
                dword_A8BB24 = v47[0].Network_field_0x8;  /*0x5420d3*/
                *(unsigned int *)&stru_A8D804.__pad_3D[875] = v47[0].Network_field_0x8;  /*0x5420df*/
                NetworkManager::SetPlayerAddress(
                  (NetworkManager *)&dword_B052D0,
                  *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i) + 111),
                  v47);  /*0x5420f6*/
              }
            }
          }
        }
      }
LABEL_87:
      if ( !Network_field_0xC )
        goto LABEL_92;  /*0x54215c*/  /*0x54215c*/
    }
    v25 = v47[0].__pad_87[47];  /*0x541eea*/
    goto LABEL_59;  /*0x541eea*/
  }
LABEL_92:
  v37 = this->field_60;  /*0x542197*/
  v38 = 0;  /*0x54219a*/
  if ( v37 && dword_887628 && !(*(int (**)(unsigned int))(*(unsigned int *)v37 + 20))(v37) )
  {  /*0x5421aa*/
    (*(void (**)(unsigned int))(*(unsigned int *)this->field_60 + 24))(this->field_60);  /*0x5421b6*/
    v47[0].Network_field_0x10 = 0;  /*0x5421b9*/
  }
  if ( stru_A8D804.__pad_3D[863] )
  {  /*0x5421c4*/
    v39 = this->u32_64;  /*0x5421c6*/
    if ( v39 )
    {  /*0x5421cb*/
      if ( !(*(int (**)(unsigned int))(*(unsigned int *)v39 + 20))(v39) )
      {  /*0x5421cf*/
        (*(void (**)(unsigned int))(*(unsigned int *)this->u32_64 + 24))(this->u32_64);  /*0x5421db*/
        v47[0].Network_field_0x10 = 0;  /*0x5421de*/
      }
      if ( !byte_A8E2D0 )
        (v45)->ProcessAddressChange();  /*0x5421f0*/  /*0x5421e9*/
    }
    if ( stru_A8D804.__pad_3D[863] )
    {  /*0x5421fc*/
      u32_68 = this->u32_68;  /*0x5421fe*/
      if ( u32_68 )
      {  /*0x542203*/
        if ( !(*(int (**)(unsigned int))(*(unsigned int *)u32_68 + 20))(u32_68) )
        {  /*0x542207*/
          Debug::Log();  /*0x542213*/
          v47[0].Network_field_0x10 = 0;  /*0x54221b*/
        }
      }
    }
  }
  if ( dword_887628 && (int)this->field_5C > 0 )
  {  /*0x54222a*/
    v41 = &this->q028;  /*0x54222c*/
    do
    {  /*0x542260*/
      if ( !(*(int (**)(unsigned int))(*(unsigned int *)*v41 + 20))(*v41) )
      {  /*0x542233*/
        v47[0].Network_field_0x10 = 0;  /*0x54223a*/
        *((unsigned int *)this + 42) = *(unsigned int *)(*v41 + 100);  /*0x542249*/
        Debug::Log();  /*0x54224f*/
      }
      ++v38;  /*0x54225a*/
      ++v41;  /*0x54225b*/
    }
    while ( v38 < (signed int)this->field_5C );  /*0x542260*/
  }
  result = v47[0].Network_field_0x10;  /*0x542262*/
  if ( v47[0].Network_field_0x10 )
    *((unsigned int *)this + 42) = -1;  /*0x54226a*/  /*0x542268*/
  return result;  /*0x542274*/

}
}
// 0x5422D0
namespace gamemd {
int Network::GetQueueCount(void *a1)
{

  if ( this->Initialized && this->Active ) /*0x5422d7*/
    return *(unsigned int *)(*(unsigned int *)(this->u32_48 + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/

}
}
// 0x5424C0
namespace gamemd {
int Network::GetLobbyStatus()
{


  int Network_field_0x48 = this->u32_48; // eax /*0x5424c0*/
  if ( Network_field_0x48 ) /*0x5424c5*/
    return (Network_field_0x48->q004)->GetBridgeIndex(); /*0x5424ca*/
  else
    return 0; /*0x5424cf*/

}
}
// 0x542500
namespace gamemd {
int Network::updateLatency()
{


  CellClass **Network_field_0x50; // eax
  Network_field_0x50 = (CellClass **)this->q050; /*0x542500*/
  if ( Network_field_0x50 ) /*0x542505*/
    return (Network_field_0x50[1])->GetBridgeIndex(); /*0x54250a*/
  else
    return 0; /*0x54250f*/

}
}
// 0x543050
namespace gamemd {
unsigned int * Network::SetPlayerCoords(IPXManagerClass * aP1)
{


  unsigned int *result = this->u32_4C; // eax /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *result = *aP1; /*0x543060*/
    result->q004 = aP1[1]; /*0x543065*/
    result->q008 = aP1[2]; /*0x54306b*/
  }
  return result; /*0x54306e*/

}
}
// 0x543080
namespace gamemd {
int Network::Disconnect()
{


  int result = this->u32_48; // eax /*0x543080*/
  if ( result ) /*0x543085*/
    result->u32_C8 = 0; /*0x543087*/
  return result; /*0x54308e*/

}
}
// 0x5BCC40
namespace gamemd {
int Network::validateConnection(int a2, int a3)
{
  this->u32_271C = a2; /*0x5bcc48*/
  this->u32_2720 = a3; /*0x5bcc4e*/
  return a2; /*0x5bcc54*/
}
}
// 0x5C46E0
namespace gamemd {
AbstractClass * * Network::SetupRematch()
{

  char *v2; // edi
  unsigned int *v3; // eax
  int *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  wchar_t *v10; // esi
  unsigned int v11; // ecx
  int ConnectionSpeed; // eax
  TechnoClass *v14; // [esp+0h] [ebp-40h]
  int v15; // [esp+10h] [ebp-30h] BYREF
  int v16; // [esp+14h] [ebp-2Ch] BYREF
  int v17[2]; // [esp+18h] [ebp-28h] BYREF
  char v18[16]; // [esp+20h] [ebp-20h] BYREF
  int v19; // [esp+30h] [ebp-10h]
  int v20; // [esp+34h] [ebp-Ch]
  int v21; // [esp+38h] [ebp-8h]
  int i; // [esp+3Ch] [ebp-4h]

  dword_B779D4 = 0; /*0x5c46f5*/
  *(unsigned int *)dword_B77D6C = g_NetworkRematchState; /*0x5c46fb*/
  *(unsigned int *)dword_B779C4 = 0; /*0x5c4700*/
  byte_A8F900 = 0; /*0x5c4706*/
  v2 = ((String *)&dword_B73E40)->GetOrEmpty(); /*0x5c4711*/
  v3 = dword_A8DA78; /*0x5c471e*/
  strcpy(byte_B77830, v2); /*0x5c472f*/
  v4 = (int *)(v3[this->u32_54] + 40); /*0x5c473e*/
  g_NetworkRematchObject = *v4; /*0x5c4743*/
  dword_A8BB20 = v4[1]; /*0x5c474c*/
  dword_A8BB24 = v4[2]; /*0x5c4755*/
  wcscpy(word_A8E258, (const wchar_t *)v3[this->u32_54]); /*0x5c4767*/
  dword_A8E2AC = -1; /*0x5c4772*/
  dword_A8B3AC = *(unsigned int *)this->q070; /*0x5c4782*/
  (*(void (**)(unsigned int *))(*dword_887628 + 48))(dword_887628); /*0x5c4789*/
  strcpy(v18, "xxx.xxx.xxx.xxx"); /*0x5c47a3*/
  v19 = 0; /*0x5c47ac*/
  v20 = 0; /*0x5c47b9*/
  v5 = 1; /*0x5c47bd*/
  v21 = 0; /*0x5c47c2*/
  for ( i = 0; v5 < dword_A8DA84; ++v5 ) /*0x5c47d0*/
  {
    ((Network *)(dword_A8DA78[v5] + 40))->GetAddress(&v16, (int)v17, &v15); /*0x5c47ed*/
    (*(void (**)(unsigned int *, char *, int))(*dword_887628 + 44))(dword_887628, v18, v15); /*0x5c4804*/
  }
  memcpy(&unk_A8DBCC, &this->q0C4, 0x60u); /*0x5c4827*/
  memcpy(dword_A8DC2C, &this->q124, sizeof(dword_A8DC2C)); /*0x5c4839*/
  memcpy(dword_A8E230, &this->q144, sizeof(dword_A8E230)); /*0x5c484b*/
  *(unsigned int *)&dword_A8E2B2 = *&this->u32_194; /*0x5c484f*/
  dword_A8E2B6 = *&this->u32_198; /*0x5c4858*/
  dword_A8E2BA = *&this->u32_19C; /*0x5c4861*/
  dword_A8E2BE = *&this->u32_1A0; /*0x5c4876*/
  wcscpy(word_A8E258, (const wchar_t *)&this->q164); /*0x5c487c*/
  dword_A8E2AC = *&this->q190; /*0x5c488a*/
  dword_A8ED94 = this->u32_9C; /*0x5c4896*/
  InitRandomSeed(v14); /*0x5c489c*/
  Debug::Log(); /*0x5c48ac*/
  g_RulesInitConfig = this->u32_A0; /*0x5c48ba*/
  *(unsigned int *)&g_Rules_MultiEngineer = this->u32_A4; /*0x5c48c6*/
  *(unsigned int *)&g_Rules_Bases = *(unsigned int *)this->q0A8; /*0x5c48d2*/
  byte_A8B31F = this->q0AC; /*0x5c48dd*/
  BridgeDestruction = this->u8_AD; /*0x5c48e9*/
  Crates = this->u8_AE; /*0x5c48f5*/
  LOBYTE(dword_A8B320) = this->u8_AF; /*0x5c4900*/
  byte_A8B31C = this->q0B0; /*0x5c490c*/
  byte_A8B31D = this->u32_B1; /*0x5c4918*/
  Bases = this->u32_B2; /*0x5c4923*/
  byte_A8B31E = this->u8_B3; /*0x5c492f*/
  *(unsigned int *)&DataGlobal_A8B278 = this->u32_B8; /*0x5c493b*/
  ShortGame = this->q0BC; /*0x5c4946*/
  SWAllowed = BYTE1(this->q0BC); /*0x5c4952*/
  g_Rules_ShortGame = BYTE2(this->q0BC); /*0x5c495e*/
  MultiEngineer = HIBYTE(this->q0BC); /*0x5c4969*/
  *(unsigned int *)&g_Rules_EngineerCount = this->q0C0; /*0x5c497b*/
  LoadScenarioClassByIndex(*(int *)&g_GameRulesOptions); /*0x5c4981*/
  dword_A8EB60 = *(AudioOptionsClass *)&g_Rules_EngineerCount; /*0x5c4997*/
  dword_A8B230[130].ptr_8 = *(unsigned int *)&g_GameRulesOptions; /*0x5c499c*/
  switch ( *(unsigned int *)&g_Rules_EngineerCount ) /*0x5c49b0*/
  {
    case 0: /*0x5c49b0*/
      dword_A8B550 = (wchar_t *)40; /*0x5c49b7*/
      dword_A8B570 = 60; /*0x5c49c1*/
      dword_A8B554 = 10; /*0x5c49cb*/
      goto LABEL_12; /*0x5c49d5*/
    case 1: /*0x5c49b0*/
      dword_A8B550 = (wchar_t *)40; /*0x5c49d7*/
      dword_A8B570 = 45; /*0x5c49e1*/
      dword_A8B554 = 10; /*0x5c49eb*/
      goto LABEL_12; /*0x5c49f5*/
    case 2: /*0x5c49b0*/
      v6 = 30; /*0x5c49f7*/
      goto LABEL_11; /*0x5c49fc*/
    case 3: /*0x5c49b0*/
      v6 = 20; /*0x5c49fe*/
      goto LABEL_11; /*0x5c4a03*/
    case 4: /*0x5c49b0*/
      dword_A8B550 = (wchar_t *)20; /*0x5c4a05*/
      dword_A8B570 = 15; /*0x5c4a0f*/
      goto LABEL_12; /*0x5c4a19*/
    case 5: /*0x5c49b0*/
      dword_A8B550 = (wchar_t *)20; /*0x5c4a1b*/
      dword_A8B570 = 12; /*0x5c4a25*/
      goto LABEL_12; /*0x5c4a2f*/
    default:
      v6 = 10; /*0x5c4a31*/
      LABEL_11:
      dword_A8B550 = (wchar_t *)v6; /*0x5c4a36*/
      dword_A8B570 = v6; /*0x5c4a3b*/
      LABEL_12:
      dword_A8B56C = 0; /*0x5c4a40*/
      if ( !((this->u32_4) & 0xFF) ) /*0x5c4a46*/
        dword_A8B570 = 0; /*0x5c4a4d*/
      v7 = 0; /*0x5c4a58*/
      if ( dword_A8DA84 > 0 ) /*0x5c4a5c*/
      {
      v8 = &dword_B7790C; /*0x5c4a5e*/
      v9 = dword_A8DA84; /*0x5c4a63*/
      do /*0x5c4a71*/
      {
        if ( *v8 > v7 ) /*0x5c4a69*/
          v7 = *v8; /*0x5c4a6b*/
        ++v8; /*0x5c4a6d*/
        --v9; /*0x5c4a70*/
      }
      while ( v9 ); /*0x5c4a71*/
    }
      dword_A8DB9C = (wchar_t *)1; /*0x5c4a7a*/
      if ( !v7 || v7 == 1000 ) /*0x5c4a8c*/
      {
      dword_A8B570 = 0; /*0x5c4b73*/
      Debug::Log(); /*0x5c4b79*/
      LABEL_34:
      v10 = dword_A8B550; /*0x5c4b81*/
      goto LABEL_35; /*0x5c4b81*/
    }
      Debug::Log(); /*0x5c4a98*/
      if ( v7 <= 1000 ) /*0x5c4aa6*/
      {
      if ( v7 < 600 ) /*0x5c4aba*/
        dword_A8DB9C = (wchar_t *)1; /*0x5c4abc*/
    }
      else
      {
      dword_A8DB9C = (wchar_t *)2; /*0x5c4aa8*/
    }
      Network::SetConnectionParams( /*0x5c4b0b*/
        &unk_A8E9C0,
        120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000,
        -1,
        8 * (120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000),
        1);
      if ( !((this->u32_4) & 0xFF) ) /*0x5c4b10*/
        goto LABEL_34; /*0x5c4b10*/
      (&unk_A8E9C0)->sendPacket(5, -1, 120); /*0x5c4b20*/
      if ( !LOBYTE(this->u32_4) ) /*0x5c4b25*/
        goto LABEL_34; /*0x5c4b28*/
      v10 = dword_A8B550; /*0x5c4b2f*/
      switch ( (unsigned int)dword_A8DB9C ) /*0x5c4b3a*/
      {
      case 0u: /*0x5c4b3a*/
      case 1u: /*0x5c4b3a*/
        v11 = (unsigned int)dword_A8B550; /*0x5c4b41*/
        break; /*0x5c4b43*/
      case 2u: /*0x5c4b3a*/
        v11 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x5c4b49*/
        break; /*0x5c4b4b*/
      case 3u: /*0x5c4b3a*/
        v11 = 2 * (unsigned int)dword_A8B550; /*0x5c4b4d*/
        break; /*0x5c4b50*/
      default:
        v11 = dword_A8B56C; /*0x5c4b52*/
        break; /*0x5c4b52*/
    }
      dword_A8B56C = 10 * (v11 / 0xA); /*0x5c4b67*/
      LABEL_35:
      dword_A8B568 = (int)v10; /*0x5c4b87*/
      memset(&unk_A8B574, 0, 0x340u); /*0x5c4b99*/
      byte_B77A04 = 0; /*0x5c4ba1*/
      dword_A8EB60 = *(AudioOptionsClass *)&g_Rules_EngineerCount; /*0x5c4ba7*/
      byte_B76568[0] = 0; /*0x5c4bad*/
      Scenario::PreGameInit(); /*0x5c4bb3*/
      dword_8B41F8 = 0; /*0x5c4bbf*/
      dword_8B41FC = 0; /*0x5c4bc5*/
      dword_8B4200 = 0; /*0x5c4bcb*/
      dword_A802C8 = 0; /*0x5c4bd1*/
      dword_A802CC = 0; /*0x5c4bd7*/
      dword_A802D0 = 0; /*0x5c4bdd*/
      (dword_887368)->Enable(0); /*0x5c4be3*/
      Debug::Log(); /*0x5c4bf4*/
      while ( (&unk_A8E9C0)->GetSendCount() ) /*0x5c4c01*/
      {
      ConnectionSpeed = (&unk_A8E9C0)->GetConnectionSpeed(0); /*0x5c4c10*/
      ((int)&unk_A8E9C0)->sendData(ConnectionSpeed); /*0x5c4c1b*/
    }
      if ( byte_A8DBA0 ) /*0x5c4c34*/
      {
      if ( dword_A8EA0C ) /*0x5c4c3c*/
        NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&unk_B052D0); /*0x5c4c43*/
      byte_A8DBA0 = 0; /*0x5c4c48*/
    }
      return Debug::Log();
  }

}
}
// 0x5D93D0
namespace gamemd {
int Network::dispatchEvent()
{


  this->u32_4 = (void *)INIClass::ReadInt_Overwrite( /*0x5d93fa*/
                                      (bool *)&CCINIClass_INI_RA2MD,
                                      (unsigned __int8 *)&stru_8263E0.Loop,
                                      (unsigned __int8 *)g_INI_Key_FirewallSettings,
                                      0);
  int result; // eax
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (bool *)&CCINIClass_INI_RA2MD,
             (unsigned __int8 *)&stru_8263E0.Loop,
             (unsigned __int8 *)g_INI_Key_FirewallDelta,
             1);
  this->u32_C = (void *)result; /*0x5d9402*/
  return result; /*0x5d9405*/

}
}
// 0x5D9410
namespace gamemd {
IPXConnClass * * Network::ResolveAndConnect(unsigned char * a2)
{

  Waypoint *v3; // esi
  int v4; // edi
  int v5; // esi
  int v7; // ebx
  const char *v8; // esi
  struct hostent *v9; // eax
  int v10; // ecx
  int *v11; // edx
  unsigned int *v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  Waypoint *v16; // esi
  int *v17; // edi
  int v18; // esi
  int v19; // eax
  bool v20; // sf
  WinsockInterface *v21; // ecx
  int v23; // edi
  __int16 i; // si
  int v25; // eax
  int v26; // edi
  __int16 j; // bx
  int v28; // eax
  int *v29; // esi
  int k; // edi
  int v31; // ebx
  void *v32; // eax
  WinsockInterface *v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  int v40; // esi
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  int *v44; // esi
  int Network_field_0xC; // eax
  int v46; // ecx
  int v47; // esi
  void *v48; // eax
  WinsockInterface *v49; // ecx
  int v51; // ebx
  int v52; // eax
  WinsockInterface *v53; // ecx
  unsigned __int16 v55; // bx
  int v56; // esi
  int v57; // eax
  int v58; // esi
  __int16 v59; // ax
  int v60; // esi
  unsigned __int16 v61; // si
  int m; // edi
  int v63; // eax
  int v64; // esi
  int v65; // eax
  int v66; // [esp+40h] [ebp-188h]
  int v67; // [esp+40h] [ebp-188h]
  int Ticks; // [esp+44h] [ebp-184h]
  int v69; // [esp+44h] [ebp-184h]
  int v70; // [esp+44h] [ebp-184h]
  int v71; // [esp+44h] [ebp-184h]
  int v72; // [esp+44h] [ebp-184h]
  int v73; // [esp+44h] [ebp-184h]
  int v74; // [esp+50h] [ebp-178h] BYREF
  __int16 v75[2]; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  unsigned __int16 v78[2]; // [esp+60h] [ebp-168h] BYREF
  int v79; // [esp+64h] [ebp-164h]
  int v80; // [esp+68h] [ebp-160h]
  int v81; // [esp+6Ch] [ebp-15Ch] BYREF
  int v82; // [esp+70h] [ebp-158h]
  int v83; // [esp+74h] [ebp-154h]
  char *v84; // [esp+7Ch] [ebp-14Ch]
  char *v85; // [esp+80h] [ebp-148h]
  int v86; // [esp+84h] [ebp-144h]
  int v87[2]; // [esp+88h] [ebp-140h] BYREF
  unsigned int v88[2]; // [esp+90h] [ebp-138h] BYREF
  Waypoint v89; // [esp+98h] [ebp-130h] BYREF

  *(unsigned int *)v75 = 4321; /*0x5d9425*/
  v77 = 2130706432; /*0x5d942d*/
  *a2 = 0; /*0x5d9435*/
  v66 = 0; /*0x5d9437*/
  v3 = &v89; /*0x5d943b*/
  v4 = 4; /*0x5d943f*/
  do /*0x5d944f*/
  {
    (v3)->InitInvalid(); /*0x5d9446*/
    v3 = &v3->u32_C; /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  Timer::GetTicks(); /*0x5d9455*/
  if ( dword_A8E254 ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log(); /*0x5d9476*/
    if ( byte_A8E180[0] ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log(); /*0x5d9491*/
    }
    return v5; /*0x5d94a5*/
  }
  Ticks = Timer::GetTicks(); /*0x5d94bf*/
  Debug::Log(); /*0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v86 = 0; /*0x5d94d5*/
  *(unsigned int *)v78 = dword_B76338; /*0x5d94d9*/
  v85 = byte_B73E44; /*0x5d94e1*/
  v84 = aMangler1Westwo_0; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = v84; /*0x5d94fb*/
    if ( dword_B77E1C > v86 ) /*0x5d9501*/
    {
      v8 = v85; /*0x5d9507*/
      v75[0] = **(unsigned short **)v78; /*0x5d9513*/
      Debug::Log(); /*0x5d9518*/
    }
    v84 += 32; /*0x5d953b*/
    v85 += 128; /*0x5d953f*/
    *(unsigned int *)v78 += 4; /*0x5d9543*/
    ++v86; /*0x5d9554*/
    if ( !strlen(v8) ) /*0x5d9549*/
      break; /*0x5d9549*/
    strcpy(&v89.__pad_0[48], v8); /*0x5d9579*/
    v9 = gethostbyname(&v89.__pad_0[48]); /*0x5d958a*/
    if ( !v9 ) /*0x5d9591*/
    {
      WSAGetLastError(); /*0x5d9628*/
      Debug::Log(); /*0x5d9633*/
      break; /*0x5d9633*/
    }
    v10 = 0; /*0x5d9597*/
    if ( v7 <= 0 ) /*0x5d959b*/
    {
LABEL_16:
      ++v66; /*0x5d95b8*/
      v12 = (int *)((char *)&v81 + v7); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(unsigned int **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log(); /*0x5d95f2*/
    }
    else
    {
      v11 = &v81; /*0x5d95a2*/
      while ( *v11 != **(unsigned int **)v9->h_addr_list ) /*0x5d95aa*/
      {
        ++v10; /*0x5d95b0*/
        ++v11; /*0x5d95b1*/
        if ( v10 >= v66 ) /*0x5d95b6*/
          goto LABEL_16; /*0x5d95b6*/
      }
    }
    if ( v7 < 16 ) /*0x5d95fd*/
    {
      v13 = 300; /*0x5d9603*/
      if ( Ticks != -1 ) /*0x5d960a*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x5d9615*/
        if ( v14 >= 300 ) /*0x5d961b*/
          break; /*0x5d961b*/
        v13 = 300 - v14; /*0x5d961d*/
      }
      if ( v13 ) /*0x5d9621*/
        continue; /*0x5d9621*/
    }
    break; /*0x5d9621*/
  }
  v15 = v66; /*0x5d963b*/
  if ( v66 < 3 ) /*0x5d9642*/
    return 1; /*0x5d9642*/
  v16 = &v89; /*0x5d964c*/
  v17 = &v81; /*0x5d9650*/
  do /*0x5d9679*/
  {
    *(unsigned int *)v78 = *v17; /*0x5d965d*/
    Struct::Copy6Bytes(v16->__pad_0, (int)v78); /*0x5d9661*/
    ((Network *)v16)->SetPort(v75[0]); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 = &v16->u32_C; /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = this->q010 + 1; /*0x5d9689*/
    (v15) = ((v15) & ~0xFFFF) | ((((this->q010) & 0xFFFF) + 1) & 0xFFFF); /*0x5d968b*/
    v20 = this->q010 - 65534 < 0; /*0x5d968e*/
    this->q010 = v19; /*0x5d9693*/
    *(unsigned int *)v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ (((((v19) ^ (0xFFFF)) & ((v19) ^ ((v19) - (0xFFFF))))) < 0) | (v19 == 0xFFFF)) ) /*0x5d969a*/
      this->q010 = 2048; /*0x5d969c*/
    v21 = dword_887628; /*0x5d969f*/
    if ( !dword_887628 || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)dword_887628->__pad_0 + 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))(dword_887628, v15); /*0x5d96ce*/
LABEL_36:
      v21 = dword_887628; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(unsigned __int8 (**)(WinsockInterface *, int))(*(unsigned int *)v21->__pad_0 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (**)(WinsockInterface *))(*(unsigned int *)dword_887628->__pad_0 + 28))(dword_887628); /*0x5d96ed*/
  v69 = Timer::GetTicks(); /*0x5d96f9*/
  v23 = 360; /*0x5d9701*/
  for ( i = 0; ; i = (2130706432)->WaitForPacket(0) ) /*0x5d970e*/
  {
    if ( v69 != -1 ) /*0x5d9715*/
    {
      v25 = Timer::GetTicks() - v69; /*0x5d9720*/
      if ( v25 >= 360 ) /*0x5d9726*/
        break; /*0x5d9726*/
      v23 = 360 - v25; /*0x5d9728*/
    }
    if ( !v23 ) /*0x5d972c*/
      break; /*0x5d972c*/
    if ( i ) /*0x5d9731*/
      goto LABEL_46; /*0x5d9731*/
    ((unsigned __int16 *)&v89)->QueryAddress(v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))(dword_887628, v15); /*0x5d9d6d*/
    if ( i == (unsigned short)v15 ) /*0x5d9d7c*/
    {
      this->u32_8 = 0; /*0x5d9d85*/
      *a2 = 1; /*0x5d9d8c*/
    }
    return 1; /*0x5d9d8c*/
  }
LABEL_46:
  if ( i == (unsigned short)v15 ) /*0x5d9769*/
    goto LABEL_159; /*0x5d9769*/
  v26 = 360; /*0x5d977c*/
  v70 = Timer::GetTicks(); /*0x5d9781*/
  for ( j = 0; ; j = (2130706433)->WaitForPacket(0) ) /*0x5d978d*/
  {
    if ( v70 != -1 ) /*0x5d9794*/
    {
      v28 = Timer::GetTicks() - v70; /*0x5d979f*/
      if ( v28 >= 360 ) /*0x5d97a5*/
        break; /*0x5d97a5*/
      v26 = 360 - v28; /*0x5d97a7*/
    }
    if ( !v26 || j ) /*0x5d97b0*/
      break; /*0x5d97b0*/
    ((unsigned __int16 *)&v89.u32_C)->QueryAddress(*(int *)v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (**)(WinsockInterface *, unsigned int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d97e0*/
    dword_887628,
    *(unsigned int *)v75);
  if ( !j || j == v75[0] ) /*0x5d97fc*/
    return 1; /*0x5d97fc*/
  *(unsigned int *)v78 = 0; /*0x5d9805*/
  v29 = (int *)(j != i ? 4 : 2);
  v67 = (int)v29; /*0x5d9818*/
  while ( 2 ) /*0x5d981c*/
  {
    v87[0] = 0; /*0x5d981c*/
    v88[0] = 0; /*0x5d9824*/
    v87[1] = 0; /*0x5d9828*/
    v88[1] = 0; /*0x5d982c*/
    for ( k = 0; k < 4; ++k ) /*0x5d9830*/
    {
      v31 = k; /*0x5d9834*/
      if ( !k ) /*0x5d9836*/
        v31 = 1; /*0x5d9838*/
      *(unsigned int *)v75 = 255; /*0x5d983d*/
      while ( 1 ) /*0x5d984a*/
      {
        v32 = (void *)(v31 + this->q010); /*0x5d984a*/
        this->q010 = (int)v32; /*0x5d984c*/
        LOWORD(v29) = (unsigned short)v32; /*0x5d9854*/
        if ( (int)v32 > 0xFFFF ) /*0x5d9857*/
          this->q010 = 2048; /*0x5d9859*/
        v33 = dword_887628; /*0x5d9860*/
        if ( !dword_887628 || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(unsigned __int8 (**)(int *))(*(unsigned int *)dword_887628->__pad_0 + 104))(v29) ) /*0x5d9876*/
        {
          (*(void (**)(WinsockInterface *, int *))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d9897*/
            dword_887628,
            v29);
LABEL_69:
          v33 = dword_887628; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( (*(unsigned int *)v75)-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((unsigned short *)v87 + k) = (unsigned short)v29; /*0x5d98a0*/
      v35 = (*(int (**)(WinsockInterface *, int *))(*(unsigned int *)v33->__pad_0 + 104))(v33, v29); /*0x5d98a8*/
      if ( !(unsigned char)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v87; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *(unsigned short *)v44 ) /*0x5d99ed*/
            {
              (v35) = ((v35) & ~0xFFFF) | ((*(unsigned short *)v44) & 0xFFFF); /*0x5d99ed*/
              v35 = (*(int (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d99fe*/
                      dword_887628,
                      v35);
            }
            v44 = (int *)((char *)v44 + 2); /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return v67; /*0x5d9a15*/
      }
    }
    (*(void (**)(WinsockInterface *))(*(unsigned int *)dword_887628->__pad_0 + 28))(dword_887628); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = Timer::GetTicks(); /*0x5d98d9*/
    (v37) = ((v37) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5d98de*/
    v81 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    (v38) = ((v38) & ~(0xFFFF << 16)) | ((((((v82) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v83 = 720; /*0x5d98f1*/
    while ( 1 ) /*0x5d98fd*/
    {
      if ( v71 != -1 ) /*0x5d9902*/
      {
        v38 = Timer::GetTicks() - v71; /*0x5d990d*/
        if ( v38 >= 720 ) /*0x5d9913*/
          break; /*0x5d9913*/
        v39 = 720 - v38; /*0x5d9915*/
      }
      if ( !v39 || v36 >= 4 ) /*0x5d991e*/
        break; /*0x5d991e*/
      v40 = v77; /*0x5d9920*/
      for ( k = 0; k < 4; ++k ) /*0x5d9924*/
      {
        if ( !*((unsigned short *)v88 + k) ) /*0x5d9926*/
        {
          (v37) = ((v37) & ~0xFFFF) | ((*((unsigned short *)v87 + k)) & 0xFFFF); /*0x5d992e*/
          ((unsigned __int16 *)&v89)->QueryAddress(v37, v40, 0); /*0x5d993e*/
          (v38) = ((v38) & ~0xFFFF) | (((v40)->WaitForPacket(0)) & 0xFFFF); /*0x5d9948*/
          *((unsigned short *)v88 + k) = v38; /*0x5d9950*/
          if ( (unsigned short)v38 ) /*0x5d9955*/
            ++v36; /*0x5d9957*/
        }
        ++v40; /*0x5d9959*/
      }
      v39 = 720; /*0x5d995f*/
    }
    v29 = v87; /*0x5d9969*/
    do /*0x5d9985*/
    {
      if ( *(unsigned short *)v29 ) /*0x5d996d*/
      {
        (v38) = ((v38) & ~0xFFFF) | ((*(unsigned short *)v29) & 0xFFFF); /*0x5d996d*/
        v38 = (*(int (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d997e*/
                dword_887628,
                v38);
      }
      v29 = (int *)((char *)v29 + 2); /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      Network_field_0xC = this->u32_C; /*0x5d9a18*/
      if ( Network_field_0xC && this->u32_4 > 1 ) /*0x5d9a23*/
        this->u32_8 = Network_field_0xC; /*0x5d9a25*/
      return v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = DetectPortAllocationPattern( /*0x5d99b1*/
              v36,
              (__int16 *)v87,
              (unsigned __int16 *)v88,
              (unsigned char *)&v76 + 3,
              (unsigned char *)&v74 + 3);
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        this->u32_8 = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = this->u32_C; /*0x5d99ba*/
        if ( v42 && this->u32_4 > 1 ) /*0x5d99c5*/
          this->u32_8 = v42; /*0x5d99c7*/
        ++*(unsigned int *)v78; /*0x5d99d2*/
        if ( *(int *)v78 < 3 ) /*0x5d99d6*/
          continue; /*0x5d99d6*/
        v43 = v67; /*0x5d99dc*/
      }
      if ( (v43 & 4) != 0 ) /*0x5d9a69*/
      {
        if ( (v43 & 0x10) != 0 ) /*0x5d9a72*/
        {
          Debug::Log(); /*0x5d9a7d*/
          v47 = 255; /*0x5d9a85*/
          while ( 1 ) /*0x5d9a8e*/
          {
            v48 = (void *)(this->q010 + 1); /*0x5d9a8e*/
            this->q010 = (int)v48; /*0x5d9a90*/
            (k) = ((k) & ~0xFFFF) | (((unsigned short)v48) & 0xFFFF); /*0x5d9a98*/
            if ( (int)v48 > 0xFFFF ) /*0x5d9a9b*/
              this->q010 = 2048; /*0x5d9a9d*/
            v49 = dword_887628; /*0x5d9aa4*/
            if ( !dword_887628 || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)dword_887628->__pad_0 + 104))(k) ) /*0x5d9aba*/
            {
              (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d9ad3*/
                dword_887628,
                k);
LABEL_118:
              v49 = dword_887628; /*0x5d9ad6*/
              break; /*0x5d9ad6*/
            }
            if ( !v47-- ) /*0x5d9ac1*/
              goto LABEL_118; /*0x5d9ac6*/
          }
          if ( !(*(unsigned __int8 (**)(WinsockInterface *, int))(*(unsigned int *)v49->__pad_0 + 104))(v49, k) ) /*0x5d9adf*/
            return v43; /*0x5d9af2*/
          v51 = 255; /*0x5d9af5*/
          while ( 1 ) /*0x5d9afe*/
          {
            v52 = this->q010 + 1; /*0x5d9afe*/
            LOWORD(v47) = LOWORD(this->q010) + 1; /*0x5d9b00*/
            v20 = this->q010 - 65534 < 0; /*0x5d9b03*/
            this->q010 = v52; /*0x5d9b08*/
            *(unsigned int *)v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ (((((v52) ^ (0xFFFF)) & ((v52) ^ ((v52) - (0xFFFF))))) < 0) | (v52 == 0xFFFF)) ) /*0x5d9b0f*/
              this->q010 = 2048; /*0x5d9b11*/
            v53 = dword_887628; /*0x5d9b18*/
            if ( !dword_887628 || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)dword_887628->__pad_0 + 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d9b47*/
                dword_887628,
                v47);
LABEL_130:
              v53 = dword_887628; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(unsigned __int8 (**)(WinsockInterface *, int))(*(unsigned int *)v53->__pad_0 + 104))(v53, v47) ) /*0x5d9b53*/
            return v67; /*0x5d9b68*/
          (*(void (**)(WinsockInterface *))(*(unsigned int *)dword_887628->__pad_0 + 28))(dword_887628); /*0x5d9b73*/
          v72 = Timer::GetTicks(); /*0x5d9b7f*/
          v55 = 0; /*0x5d9b8f*/
          v56 = 240; /*0x5d9b91*/
          v77 += 10; /*0x5d9b9d*/
          while ( 1 ) /*0x5d9ba1*/
          {
            if ( v72 != -1 ) /*0x5d9ba6*/
            {
              v57 = Timer::GetTicks() - v72; /*0x5d9bb1*/
              if ( v57 >= 240 ) /*0x5d9bb7*/
                break; /*0x5d9bb7*/
              v56 = 240 - v57; /*0x5d9bb9*/
            }
            if ( !v56 ) /*0x5d9bbd*/
              break; /*0x5d9bbd*/
            if ( v55 ) /*0x5d9bc2*/
              goto LABEL_142; /*0x5d9bc2*/
            v58 = v77; /*0x5d9bc4*/
            ((unsigned __int16 *)&v89)->QueryAddress(k, v77, 0); /*0x5d9bd3*/
            v59 = (v58)->WaitForPacket(0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))(dword_887628, k); /*0x5d9bf8*/
            (*(void (**)(WinsockInterface *, unsigned int))(*(unsigned int *)dword_887628->__pad_0 + 108))( /*0x5d9c08*/
              dword_887628,
              *(unsigned int *)v75);
            return v67; /*0x5d9c19*/
          }
LABEL_142:
          *(unsigned int *)v78 = *(unsigned int *)v89.__pad_0; /*0x5d9c1c*/
          v79 = *(unsigned int *)&v89.ptr_4; /*0x5d9c2d*/
          v80 = *(unsigned int *)&v89.ptr_8; /*0x5d9c36*/
          ((Network *)v78)->SetPort(*(unsigned short *)v89.__pad_0 + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          (v78)->QueryAddress(k, v77, 0); /*0x5d9c4e*/
          (v78)->QueryAddress(k, v60, 0); /*0x5d9c5e*/
          (v78)->QueryAddress(k, v60, 0); /*0x5d9c6e*/
          v77 = v60 + 1; /*0x5d9c78*/
          v61 = 0; /*0x5d9c7c*/
          v73 = Timer::GetTicks(); /*0x5d9c83*/
          for ( m = 240; ; m = 240 ) /*0x5d9c8b*/
          {
            if ( v73 != -1 ) /*0x5d9c9d*/
            {
              v63 = Timer::GetTicks() - v73; /*0x5d9ca8*/
              if ( v63 >= 240 ) /*0x5d9cae*/
                break; /*0x5d9cae*/
              m = 240 - v63; /*0x5d9cb0*/
            }
            if ( !m ) /*0x5d9cb4*/
              break; /*0x5d9cb4*/
            if ( v61 ) /*0x5d9cb9*/
              goto LABEL_150; /*0x5d9cb9*/
            v64 = v77; /*0x5d9cbb*/
            ((unsigned __int16 *)&v89)->QueryAddress(*(int *)v75, v77, 0); /*0x5d9cce*/
            v61 = (v64)->WaitForPacket(0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( v61 == v55 + this->u32_8 ) /*0x5d9cfd*/
          {
            Debug::Log(); /*0x5d9d5e*/
          }
          else
          {
            Debug::Log(); /*0x5d9d04*/
            v65 = v67; /*0x5d9d09*/
            (v65) = ((v65) & ~0xFF) | ((v67 | 0x40) & 0xFF); /*0x5d9d10*/
            v67 = v65; /*0x5d9d12*/
          }
LABEL_152:
          v43 = v67; /*0x5d9d16*/
        }
        else
        {
          v43 |= 0x40u; /*0x5d9d68*/
        }
      }
      Debug::Log(); /*0x5d9d1f*/
      if ( dword_B77E18 == 2 || byte_A8E180[0] ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log(); /*0x5d9d42*/
      }
      return v43; /*0x5d9d4c*/
    }
  }

}
}
// 0x5DA0B0
namespace gamemd {
unsigned short Network::ResolveNetworkAddress(uint16_t a2, void *a2_1)
{

  unsigned int result; // eax
  __int16 v4; // bx
  struct hostent *v5; // eax
  int v6; // ebx
  int v7; // esi
  void *v8; // eax
  WinsockInterface *v9; // ecx
  int v11; // edi
  unsigned __int16 v12; // si
  int v13; // eax
  int v14; // edi
  int Network_field_0x8; // ebp
  int Network_field_0x0; // [esp+10h] [ebp-13Ch]
  int Ticks; // [esp+14h] [ebp-138h]
  int v18; // [esp+20h] [ebp-12Ch]
  int v19; // [esp+24h] [ebp-128h] BYREF
  int v20; // [esp+2Ch] [ebp-120h]
  int v21; // [esp+30h] [ebp-11Ch]
  Waypoint v22; // [esp+34h] [ebp-118h] BYREF

  Timer::GetTicks(); /*0x5da0c0*/
  result = this->Network_field_0x0; /*0x5da0c9*/
  Network_field_0x0 = this->Network_field_0x0; /*0x5da0d6*/
  if ( !this->Network_field_0x0 ) /*0x5da0c9*/
  {
    LOWORD(result) = a2; /*0x5da0dc*/
    return result; /*0x5da0ee*/
  }
  if ( (result & 1) != 0 ) /*0x5da0f3*/
  {
    LOWORD(result) = a2; /*0x5da0f5*/
    return result; /*0x5da107*/
  }
  v4 = 4321; /*0x5da11e*/
  strcpy(&v22.u32_18, aMangler1Westwo); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy(&v22.u32_18, &byte_B73E44[128 * dword_B77E20]); /*0x5da174*/
    Debug::Log(); /*0x5da17d*/
  }
  Debug::Log(); /*0x5da18f*/
  v5 = gethostbyname(&v22.u32_18); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    result = Debug::Log(); /*0x5da1b0*/
    LOWORD(result) = a2; /*0x5da1b5*/
    return result; /*0x5da1ca*/
  }
  v19 = **(unsigned int **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log(); /*0x5da20d*/
  (&v22)->InitInvalid(); /*0x5da219*/
  Struct::Copy6Bytes(v22.__pad_0, (int)&v19); /*0x5da227*/
  ((Network *)&v22)->SetPort(v4); /*0x5da231*/
  ((Network *)&v22)->FormatAddress(0); /*0x5da23c*/
  Debug::Log(); /*0x5da247*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log(); /*0x5da25c*/
  v20 = Network_field_0x0 & 4; /*0x5da26b*/
  if ( (Network_field_0x0 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = (void *)(this->q010 + 1); /*0x5da283*/
      this->q010 = (int)v8; /*0x5da285*/
      (v6) = ((v6) & ~0xFFFF) | (((unsigned short)v8) & 0xFFFF); /*0x5da28d*/
      if ( (int)v8 > 0xFFFF ) /*0x5da290*/
        this->q010 = 2048; /*0x5da292*/
      v9 = dword_887628; /*0x5da295*/
      if ( !dword_887628 || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)dword_887628->__pad_0 + 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))(dword_887628, v6); /*0x5da2c4*/
LABEL_19:
        v9 = dword_887628; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    result = (*(int (**)(WinsockInterface *, int))(*(unsigned int *)v9->__pad_0 + 104))(v9, v6); /*0x5da2d4*/
    if ( !(unsigned char)result ) /*0x5da2d9*/
    {
      LOWORD(result) = a2; /*0x5da2db*/
      return result; /*0x5da2ed*/
    }
    (*(void (**)(WinsockInterface *))(*(unsigned int *)dword_887628->__pad_0 + 28))(dword_887628); /*0x5da2f8*/
  }
  v21 = (unsigned __int16)v6; /*0x5da308*/
  Debug::Log(); /*0x5da30c*/
  Ticks = Timer::GetTicks(); /*0x5da31d*/
  v11 = 180; /*0x5da325*/
  v12 = 0; /*0x5da332*/
  while ( 1 ) /*0x5da334*/
  {
    if ( Ticks != -1 ) /*0x5da339*/
    {
      v13 = Timer::GetTicks() - Ticks; /*0x5da344*/
      if ( v13 >= 180 ) /*0x5da34a*/
        break; /*0x5da34a*/
      v11 = 180 - v13; /*0x5da34c*/
    }
    if ( !v11 || v12 ) /*0x5da355*/
      break; /*0x5da355*/
    ((unsigned __int16 *)&v22)->QueryAddress(v6, dword_830CA8, 0); /*0x5da368*/
    v12 = (dword_830CA8)->WaitForPacket(30); /*0x5da37c*/
    Debug::Log(); /*0x5da38c*/
    v11 = 180; /*0x5da391*/
  }
  ++dword_830CA8; /*0x5da39a*/
  if ( (unsigned short)v18 ) /*0x5da3ae*/
    (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 108))(dword_887628, v18); /*0x5da3b9*/
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (Network_field_0x0 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = v12 + this->u32_8; /*0x5da420*/
      }
      else
      {
        Network_field_0x8 = this->u32_8; /*0x5da424*/
        if ( Network_field_0x8 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % Network_field_0x8 + Network_field_0x8 * (v12 / Network_field_0x8 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        (v14) = ((v14) & ~0xFFFF) | ((v14 + 1024) & 0xFFFF); /*0x5da482*/
      result = Debug::Log(); /*0x5da48e*/
      (result) = ((result) & ~0xFFFF) | ((v14) & 0xFFFF); /*0x5da496*/
    }
    else
    {
      result = Debug::Log(); /*0x5da3f8*/
      (result) = ((result) & ~0xFFFF) | ((v12) & 0xFFFF); /*0x5da400*/
    }
  }
  else
  {
    result = Debug::Log(); /*0x5da3c6*/
    LOWORD(result) = a2; /*0x5da3cb*/
  }
  return result; /*0x5da0e4*/

}
}
// 0x5E2BA0
namespace gamemd {
int Network::processQueue()
{

  int result = 0; // eax /*0x5e2ba6*/
  if ( stru_A80220.nextArrayIndex > 0 ) /*0x5e2baa*/
  {
    Network **ptr_8; // esi
    ptr_8 = (Network **)stru_A80220.ptr_C; /*0x5e2bae*/
    int nextArrayIndex; // edi
    nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      Network *v4 = *ptr_8; // edx /*0x5e2bb7*/
      if ( *ptr_8 && v4->__pad_1AA[66] && !v4->Network_field_0x1F5[0] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      ++ptr_8; /*0x5e2bd6*/
      --nextArrayIndex; /*0x5e2bd9*/
    }
    while ( nextArrayIndex ); /*0x5e2bda*/
  }
  return result; /*0x5e2bdf*/
}
}
// 0x5E2BE0
namespace gamemd {
int Network::CountDisconnectedHouses()
{
  int nextArrayIndex; // eax
  int v2; // ecx
  int v3; // ebp
  char v4; // bl
  int v5; // edi
  HouseClass *v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( stru_A80220.nextArrayIndex <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((unsigned int *)stru_A80220.ptr_C + v2); /*0x5e2c0a*/
    if ( v3 && !*(unsigned char *)(v3 + 501) && !*(unsigned char *)(*(unsigned int *)(v3 + 52) + 422) && (Network *)v3 != this ) /*0x5e2c34*/
    {
      v4 = 0; /*0x5e2c36*/
      v5 = 0; /*0x5e2c38*/
      if ( nextArrayIndex <= 0 ) /*0x5e2c3c*/
        goto LABEL_20; /*0x5e2c3c*/
      do /*0x5e2c9e*/
      {
        if ( v5 != v9 ) /*0x5e2c42*/
        {
          v6 = *((unsigned int *)stru_A80220.ptr_C + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !v6->defeated /*0x5e2c7d*/
              && !*(unsigned char *)(v6->relatedTagsCapacity + 422)
              && (Network *)v6 != this
              && (uint8_t)((void *)v3)->IsAlliedWith(*((void **)stru_A80220.ptr_C + v5))
              && (uint8_t)((void *)v6)->IsAlliedWith((void *)v3) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < stru_A80220.nextArrayIndex ); /*0x5e2c9e*/
      if ( !v4 ) /*0x5e2ca2*/
        LABEL_20:
      ++v8; /*0x5e2ca4*/
    }
    v2 = ++v9; /*0x5e2cac*/
  }
  while ( v9 < nextArrayIndex ); /*0x5e2cb3*/
  return v8; /*0x5e2cc1*/
}
}
// 0x5EF4E0
namespace gamemd {
AbstractClass * * Network_ModemConnectionDialog()
{

  int v1; // edi
  HWND Dialog; // ebx
  int v3; // eax
  LONG v4; // eax
  void (*v5)(HWND); // esi
  void (*v6)(HWND, int); // ebp
  int v7; // edi
  TechnoTypeClass *v8; // ecx
  Modem *v9; // ebp
  WinModemClass *v10; // eax
  int Modem_field_0x04; // eax
  const char *v12; // esi
  unsigned int v13; // edx
  char *v14; // edi
  char *v15; // edi
  const char *v16; // esi
  char v17; // cl
  int *v18; // eax
  WinModemClass *v19; // eax
  unsigned __int8 *v20; // edx
  int *v21; // eax
  int v22; // ebp
  char v23; // bl
  void *Member23; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // esi
  void *v31; // eax
  void *v32; // eax
  int v33; // edi
  int v34; // esi
  int v35; // edi
  int v36; // esi
  int Elapsed; // esi
  wchar_t *v38; // esi
  wchar_t *v39; // eax
  Dialog *MessageBox; // eax
  Dialog *v41; // edi
  int v42; // esi
  TechnoTypeClass *v43; // ecx
  int v44; // esi
  int *v45; // eax
  int *v46; // eax
  wchar_t *StringCSF; // [esp-18h] [ebp-8B8h]
  wchar_t *v49; // [esp-18h] [ebp-8B8h]
  wchar_t *v50; // [esp-18h] [ebp-8B8h]
  wchar_t *v51; // [esp-18h] [ebp-8B8h]
  int v52; // [esp-8h] [ebp-8A8h]
  int v53; // [esp+8h] [ebp-898h]
  LONG dwNewLong; // [esp+Ch] [ebp-894h] BYREF
  HWND hWnd; // [esp+10h] [ebp-890h]
  int v56; // [esp+14h] [ebp-88Ch] BYREF
  int Ticks; // [esp+18h] [ebp-888h]
  int v58; // [esp+1Ch] [ebp-884h]
  int v59; // [esp+20h] [ebp-880h]
  const wchar_t *v60; // [esp+24h] [ebp-87Ch]
  const wchar_t *v61; // [esp+28h] [ebp-878h]
  const wchar_t *v62; // [esp+2Ch] [ebp-874h]
  const wchar_t *v63; // [esp+30h] [ebp-870h]
  int v64; // [esp+34h] [ebp-86Ch]
  int v65; // [esp+38h] [ebp-868h]
  int v66; // [esp+3Ch] [ebp-864h]
  int v67[6]; // [esp+40h] [ebp-860h] BYREF
  unsigned __int8 v68; // [esp+58h] [ebp-848h]
  int v69; // [esp+D2h] [ebp-7CEh]
  int v70[62]; // [esp+13Ch] [ebp-764h] BYREF
  __int16 v71; // [esp+234h] [ebp-66Ch]
  LONG v72[24]; // [esp+238h] [ebp-668h] BYREF
  LONG v73[23]; // [esp+298h] [ebp-608h] BYREF
  LONG v74[24]; // [esp+2F4h] [ebp-5ACh] BYREF
  LONG v75[23]; // [esp+354h] [ebp-54Ch] BYREF
  LONG v76[35]; // [esp+3B0h] [ebp-4F0h] BYREF
  char v77; // [esp+43Ch] [ebp-464h] BYREF
  LONG v78[221]; // [esp+52Ch] [ebp-374h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v53 = -1; /*0x5ef4fb*/
  Dialog = (HWND)CreateDialog(0xECu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = Dialog; /*0x5ef508*/
  if ( !Dialog ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*(int (**)(ObjectClass *))(g_DSurface_Hidden->ptr_0 + 128))(g_DSurface_Hidden); /*0x5ef528*/
  UI_Connect(Dialog, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  ((Dialog *)Dialog)->Show(); /*0x5ef549*/
  if ( !*(unsigned int *)&stru_A8D804.__pad_3D[639] /*0x5ef571*/
    || *(unsigned int *)&stru_A8D804.__pad_3D[643] == -1
    || *(unsigned int *)&stru_A8D804.__pad_3D[647] == -1
    || Modem::OpenPort((Modem *)&stru_A8E960.altNextScenario[12], &stru_A8D804.__pad_3D[639]) )
  {
    v4 = 1618; /*0x5ef57a*/
    dwNewLong = 1618; /*0x5ef57f*/
  }
  else
  {
    v4 = dwNewLong; /*0x5ef585*/
  }
  v5 = (void (*)(HWND))UpdateWindow; /*0x5ef589*/
  v6 = (void (*)(HWND, int))ShowWindow; /*0x5ef590*/
  v52 = v1; /*0x5ef596*/
  v7 = 0; /*0x5ef597*/
  while ( 2 ) /*0x5ef5af*/
  {
    if ( v4 < 0 ) /*0x5ef5af*/
    {
      while ( (unsigned __int8)Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        LOBYTE(v8) = 0; /*0x5ef5ba*/
        ScreenSaver::Process(v8, v52); /*0x5ef5bc*/
        v4 = dwNewLong; /*0x5ef5c1*/
        if ( dwNewLong >= 0 ) /*0x5ef5c7*/
          goto LABEL_15; /*0x5ef5c7*/
      }
      v4 = dwNewLong; /*0x5ef5cb*/
    }
LABEL_15:
    switch ( v4 ) /*0x5ef5dd*/
    {
      case 1618: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( ((bool *)v78)->sendGameEvent(&stru_A8D804.__pad_3D[639]) ) /*0x5efe87*/
          SaveConfigWOL((TechnoClass *)&dword_A8B238); /*0x5efe95*/
        ((Network *)Dialog)->handleTimeout(); /*0x5efe9c*/
        v6(Dialog, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((Network *)v76) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v9 = *(Modem **)(*(unsigned int *)&stru_A8D804.__pad_3D[759] + 4 * *(unsigned int *)&stru_A8D804.__pad_3D[635]); /*0x5ef610*/
        if ( !*(unsigned int *)v9->__pad_0 ) /*0x5ef613*/
          v9 = (Modem *)&stru_A8D804.__pad_3D[639]; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v10 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef633*/
        if ( v10 ) /*0x5ef63d*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v10); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (int *)&stru_A8E960.altNextScenario[12],
                *(unsigned int *)v9->__pad_0,
                v9->Modem_field_0x04,
                v9[3].__pad_0,
                v9->Modem_field_0x08,
                0,
                8,
                1) )
        {
          v60 = asc_82083C; /*0x5ef774*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef788*/
          v18 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef793*/
          (v18)->ShowMessageBox(StringCSF, 0, 0, 0, v52); /*0x5ef79d*/
LABEL_34:
          ShowWindow(Dialog, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        Modem_field_0x04 = v9[1].Modem_field_0x04; /*0x5ef67f*/
        if ( Modem_field_0x04 == 3 ) /*0x5ef685*/
          strcpy(byte_AC11E8, v9[2].__pad_0); /*0x5ef6a1*/
        else
          CopyWideToChar(byte_AC11E8, *(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[807] + 4 * Modem_field_0x04), -1); /*0x5ef6bc*/
        v12 = (const char *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[759] /*0x5ef6e0*/
                                       + 4 * *(unsigned int *)&stru_A8D804.__pad_3D[635])
                           + 154);
        v13 = strlen(v12) + 1; /*0x5ef6e2*/
        v14 = &byte_AC11E8[strlen(byte_AC11E8)]; /*0x5ef6f0*/
        memcpy(v14, v12, 4 * (v13 >> 2)); /*0x5ef6f4*/
        v16 = &v12[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v15 = &v14[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v17 = v13; /*0x5ef6f6*/
        (v13) = ((v13) & ~0xFF) | ((0) & 0xFF); /*0x5ef6f8*/
        memcpy(v15, v16, v17 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v9, v13) ) /*0x5ef701*/
        {
          *(unsigned int *)&stru_A8D804.__pad_3D[751] = 2; /*0x5ef716*/
          *(unsigned int *)&dword_A8B238 = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((ModemHost *)v72) ) /*0x5ef726*/
          {
            v53 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(unsigned int *)&dword_A8B238 = 0; /*0x5ef73a*/
          v53 = 0; /*0x5ef73f*/
        }
        (0)->GetState(); /*0x5ef74a*/
        ShowWindow(Dialog, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v19 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef7d1*/
        if ( v19 ) /*0x5ef7db*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v19); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init( /*0x5ef818*/
               (int *)&stru_A8E960.altNextScenario[12],
               *(int *)&stru_A8D804.__pad_3D[639],
               *(int *)&stru_A8D804.__pad_3D[643],
               &stru_A8D804.__pad_3D[687],
               *(int *)&stru_A8D804.__pad_3D[647],
               0,
               8,
               1) )
        {
          LOBYTE(v20) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect((Modem *)&stru_A8D804.__pad_3D[639], (int)v20) ) /*0x5ef828*/
          {
            *(unsigned int *)&stru_A8D804.__pad_3D[751] = 3; /*0x5ef838*/
            *(unsigned int *)&dword_A8B238 = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((ModemGuest *)v73) ) /*0x5ef848*/
            {
              v53 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(unsigned int *)&dword_A8B238 = 0; /*0x5ef85a*/
            v53 = 0; /*0x5ef860*/
          }
          (0)->GetState(); /*0x5ef86a*/
          v6(Dialog, 5); /*0x5ef872*/
        }
        else
        {
          v63 = asc_82083C; /*0x5ef88d*/
          v49 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8a1*/
          v21 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8ac*/
          (v21)->ShowMessageBox(v49, 0, 0, 0, v52); /*0x5ef8b6*/
          v6(Dialog, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init( /*0x5ef8fb*/
                (int *)&stru_A8E960.altNextScenario[12],
                *(int *)&stru_A8D804.__pad_3D[639],
                *(int *)&stru_A8D804.__pad_3D[643],
                &stru_A8D804.__pad_3D[687],
                *(int *)&stru_A8D804.__pad_3D[647],
                0,
                8,
                1) )
        {
          v61 = asc_82083C; /*0x5efe39*/
          v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe4d*/
          v46 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe58*/
          (v46)->ShowMessageBox(v51, 0, 0, 0, v52); /*0x5efe62*/
          v6(Dialog, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v22 = 0; /*0x5ef907*/
        v23 = 1; /*0x5ef909*/
        Member23 = (void *)((NullModemClass *)g_ClipboardBuffer)->GetMember23(); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        ((int *)g_ClipboardBuffer)->WriteSerial(aAth, strlen(aAth)); /*0x5ef932*/
        Ticks = Timer::GetTicks(); /*0x5ef944*/
        v59 = 0; /*0x5ef948*/
        v64 = Timer::GetTicks(); /*0x5ef951*/
        v25 = v64; /*0x5ef955*/
        v26 = 120; /*0x5ef95b*/
        v66 = 120; /*0x5ef960*/
        Ticks = v64; /*0x5ef964*/
        v58 = v65; /*0x5ef968*/
        v59 = 120; /*0x5ef96c*/
        break; /*0x5ef96c*/
      default:
LABEL_120:
        v53 = v7; /*0x5efea8*/
        goto LABEL_121; /*0x5efea8*/
    }
    do /*0x5ef996*/
    {
      v27 = v26; /*0x5ef973*/
      if ( v25 == -1 ) /*0x5ef975*/
      {
        v30 = v26; /*0x5ef992*/
      }
      else
      {
        v28 = Timer::GetTicks(); /*0x5ef97b*/
        v25 = Ticks; /*0x5ef980*/
        v29 = v28 - Ticks; /*0x5ef984*/
        if ( v29 >= v27 ) /*0x5ef988*/
          break; /*0x5ef988*/
        v26 = v59; /*0x5ef98a*/
        v30 = v27 - v29; /*0x5ef98e*/
      }
    }
    while ( v30 ); /*0x5ef996*/
    v31 = (void *)((NullModemClass *)g_ClipboardBuffer)->GetMember23(); /*0x5ef998*/
    ClearCommBreak(v31); /*0x5ef9a4*/
    v32 = (void *)((NullModemClass *)g_ClipboardBuffer)->GetMember23(); /*0x5ef9b2*/
    EscapeCommFunction(v32, 6u); /*0x5ef9b8*/
    v33 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5ef9c3*/
    if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5ef9cc*/
      v33 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v34 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5ef9e5*/
      if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5ef9ee*/
        v34 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5efa00*/
      if ( (unsigned int)(v34 - v33) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efa12*/
      if ( ((ObjectTypeClass *)&stru_A8E960.altNextScenario[12])->CreateInstance((int)v67, (int)&v56) > 0 /*0x5efa34*/
        && v67[0] == 100 )
      {
        v35 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5efa3b*/
        if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5efa44*/
          v35 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v36 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5efa5d*/
          if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5efa66*/
            v36 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5efa78*/
          if ( (unsigned int)(v36 - v35) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efa86*/
        }
        v23 = 0; /*0x5efa8d*/
        v22 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset(v70, 0, sizeof(v70)); /*0x5efaa5*/
    v71 = 0; /*0x5efaa7*/
    if ( v23 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v70[0] = 100; /*0x5efab9*/
    *(int *)((char *)&v70[36] + 2) = (&stru_887338)->GetElapsed(); /*0x5efacc*/
    LOBYTE(v70[6]) = (unsigned __int8)&v77; /*0x5efae7*/
    ((int *)&stru_A8E960.altNextScenario[12])->WriteBlock((int)v70, 250, 1); /*0x5efaee*/
    Elapsed = (&stru_887338)->GetElapsed(); /*0x5efb02*/
    if ( (unsigned int)((&stru_887338)->GetElapsed() - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efb15*/
        if ( ((ObjectTypeClass *)&stru_A8E960.altNextScenario[12])->CreateInstance((int)v67, (int)&v56) > 0 /*0x5efb36*/
          && v67[0] == 100 )
        {
          break; /*0x5efb36*/
        }
        if ( (unsigned int)((&stru_887338)->GetElapsed() - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v44 = (&stru_887338)->GetElapsed(); /*0x5efc7a*/
      while ( (unsigned int)((&stru_887338)->GetElapsed() - v44) < 0x1E ) /*0x5efc86*/
        ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efc8d*/
      if ( v69 > *(int *)((char *)&v70[36] + 2) ) /*0x5efcb3*/
      {
        v22 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efcbc*/
      {
        if ( v68 > LOBYTE(v70[6]) ) /*0x5efccf*/
        {
          v22 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( v68 == LOBYTE(v70[6]) ) /*0x5efcd8*/
        {
          v22 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
LABEL_73:
    g_NetworkTestFlag = 0; /*0x5efb4d*/
    v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb80*/
    v39 = GetStringCSF(aTxtWaitingConn, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb82*/
    MessageBox = (Dialog *)CreateMessageBox((LPARAM)v39, (LPARAM)v38, (LONG)&g_NetworkTestFlag); /*0x5efb8b*/
    v41 = MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    (MessageBox)->Show(); /*0x5efb9c*/
    v42 = (&stru_887338)->GetElapsed(); /*0x5efbab*/
    while ( (unsigned __int8)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5efbc1*/
    {
      LOBYTE(v43) = 0; /*0x5efbc7*/
      ScreenSaver::Process(v43, v52); /*0x5efbc9*/
      ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efbd3*/
      if ( ((Count *)&stru_A8E960.altNextScenario[12])->GetCountQueue() ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ((ObjectTypeClass *)&stru_A8E960.altNextScenario[12])->CreateInstance((int)v67, (int)&v56) <= 0 ) /*0x5efc00*/
      {
        v22 = 1; /*0x5efd0e*/
        goto LABEL_100; /*0x5efd0e*/
      }
      if ( v67[0] != 100 ) /*0x5efc0b*/
      {
        v22 = 0; /*0x5efd0a*/
LABEL_100:
        v23 = 0; /*0x5efd13*/
        goto LABEL_101; /*0x5efd13*/
      }
      v42 = (&stru_887338)->GetElapsed(); /*0x5efc20*/
      while ( (unsigned int)((&stru_887338)->GetElapsed() - v42) < 0x1E ) /*0x5efc2c*/
        ((int)&stru_A8E960.altNextScenario[12])->ReadPacket(); /*0x5efc33*/
      if ( v69 <= *(int *)((char *)&v70[36] + 2) ) /*0x5efc59*/
      {
        if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efce5*/
        {
          if ( v68 <= LOBYTE(v70[6]) ) /*0x5efcf4*/
          {
            if ( v68 == LOBYTE(v70[6]) ) /*0x5efcff*/
            {
              v23 = 0; /*0x5efd01*/
              v22 = 3; /*0x5efd03*/
            }
          }
          else
          {
            v23 = 0; /*0x5efcf6*/
            v22 = 2; /*0x5efcf8*/
          }
        }
      }
      else
      {
        v23 = 0; /*0x5efc5f*/
        v22 = 2; /*0x5efc61*/
      }
LABEL_101:
      if ( (unsigned int)((&stru_887338)->GetElapsed() - v42) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( v23 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v22 = 0; /*0x5efd32*/
LABEL_105:
    (v41)->Destroy(); /*0x5efd34*/
LABEL_106:
    if ( v22 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      *(unsigned int *)&stru_A8D804.__pad_3D[751] = 0; /*0x5efddd*/
      *(unsigned int *)&dword_A8B238 = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((ModemHost *)v74) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(unsigned int *)&dword_A8B238 = 0; /*0x5efdf6*/
LABEL_115:
      (0)->GetState(); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v22 != 2 ) /*0x5efd45*/
      {
        if ( v22 == 3 ) /*0x5efd48*/
        {
          v62 = asc_82083C; /*0x5efd65*/
          v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd79*/
          v45 = (int *)GetStringCSF(aTxtModemOrLoop, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd84*/
          (v45)->ShowMessageBox(v50, 0, 0, 0, v52); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      *(unsigned int *)&stru_A8D804.__pad_3D[751] = 1; /*0x5efda1*/
      *(unsigned int *)&dword_A8B238 = 2; /*0x5efdab*/
      if ( ModemGuest::Dialog((ModemGuest *)v75) != 1 ) /*0x5efdb8*/
      {
        *(unsigned int *)&dword_A8B238 = 0; /*0x5efdc3*/
        goto LABEL_115; /*0x5efdcd*/
      }
      v53 = 2; /*0x5efdba*/
    }
LABEL_121:
    v4 = -1; /*0x5efeac*/
    dwNewLong = -1; /*0x5efeb6*/
    if ( v53 == -1 ) /*0x5efeba*/
    {
      Dialog = hWnd; /*0x5ef59b*/
      v6 = (void (*)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (*)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  ((Dialog *)hWnd)->Destroy(); /*0x5efec4*/
  return v53; /*0x5efecd*/

}
}
// 0x630B90
namespace gamemd {
void Network::Network_resetConnectionState()
{


  HWND Dialog; // eax
  Dialog = (HWND)CreateDialog(0xEEu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))PhoneEditorDialogProc, 0); /*0x630b9f*/
  this->__pad_000 = (int)Dialog; /*0x630ba6*/
  if ( Dialog ) /*0x630ba8*/
  {
    (this->u32_8) = ((this->u32_8) & ~0xFF) | ((0) & 0xFF); /*0x630bae*/
    this->u32_4 = (void *)-1; /*0x630bb2*/
    SetWindowLongA(Dialog, 8, (LONG)this); /*0x630bb9*/
    ((PhoneEditor *)this)->PopulateList(); /*0x630bc1*/
    ((Dialog *)this->__pad_000)->Show(); /*0x630bc8*/
    while ( (int)this->u32_4 < 0 ) /*0x630bd2*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x630bdb*/
        break; /*0x630bdb*/
      TechnoTypeClass *v3; // ecx
      LOBYTE(v3) = 0; /*0x630bdd*/
      int v5; // [esp+0h] [ebp-4h]
      ScreenSaver::Process(v3, v5); /*0x630bdf*/
    }
    ((Dialog *)this->__pad_000)->Destroy(); /*0x630bed*/
    if ( LOBYTE(this->u32_8) == 1 ) /*0x630bf6*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x630bfd*/
  }
  return this->u32_4 == 1; /*0x630c05*/

}
}
// 0x643C50
namespace gamemd {
void Network::Network_UpdateLatencyDisplay( ProgressScreenClass * aP1, ProgressScreenClass * aP2, ProgressScreenClass * aP3)
{

  int v4; // ebx
  double v6; // st7
  int v7; // ecx
  double *v8; // eax
  int result; // eax
  int v10; // edx
  double v11; // st7
  double v12; // st6
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  int v17; // ecx
  double v18; // st7
  double *v19; // eax
  unsigned __int16 *v20; // eax
  void (***v21)(unsigned int, int, unsigned int *); // ecx
  HWND v22; // eax
  unsigned int v23[2]; // [esp+8h] [ebp-8h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v6 = 0.0; /*0x643c5c*/
  v7 = this->u32_61; /*0x643c62*/
  if ( v7 > 0 ) /*0x643c6c*/
  {
    v8 = &this->u32_8; /*0x643c6e*/
    do /*0x643c77*/
    {
      v6 = v6 + *v8++; /*0x643c71*/
      --v7; /*0x643c76*/
    }
    while ( v7 ); /*0x643c77*/
  }
  (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt(v6)) & 0xFFFF); /*0x643c88*/
  v10 = result; /*0x643c90*/
  v11 = *(double *)((char *)this + 8 * aP1 + 8); /*0x643c94*/
  v12 = *&this->u32_48 * 0.01 * aP2; /*0x643ca1*/
  *(double *)((char *)this + 8 * aP1 + 8) = v12; /*0x643ca4*/
  if ( v12 > *&this->u32_48 ) /*0x643cb0*/
  {
    *(unsigned int *)((char *)this + 8 * aP1 + 8) = this->u32_48; /*0x643cb5*/
    result = this->u32_4C; /*0x643cb9*/
    *(unsigned int *)((char *)this + 8 * aP1 + 12) = result; /*0x643cbc*/
  }
  v14 = v11 < *(double *)((char *)this + 8 * aP1 + 8); /*0x643cc0*/
  v15 = 0; /*0x643cc0*/
  v16 = v11 == *(double *)((char *)this + 8 * aP1 + 8); /*0x643cc0*/
  (result) = ((result) & ~0xFFFF) | ((v13) & 0xFFFF); /*0x643cc4*/
  if ( v11 != *(double *)((char *)this + 8 * aP1 + 8) ) /*0x643cc9*/
  {
    v17 = this->u32_61; /*0x643ccf*/
    v18 = 0.0; /*0x643cd3*/
    if ( v17 > 0 ) /*0x643cdf*/
    {
      v19 = &this->u32_8; /*0x643ce1*/
      do /*0x643cea*/
      {
        v18 = v18 + *v19++; /*0x643ce4*/
        --v17; /*0x643ce9*/
      }
      while ( v17 ); /*0x643cea*/
    }
    v23[0] = v10; /*0x643cf0*/
    LOWORD(v20) = Math::RoundToInt(v18); /*0x643cff*/
    v21 = *(void (****)(unsigned int, int, unsigned int *))(&this->u32_4); /*0x643d04*/
    v23[1] = v20; /*0x643d07*/
    if ( v21 && this->u32_60 ) /*0x643d11*/
      (**v21)(v21, 4526, v23); /*0x643d24*/
    v22 = *&this->__pad_64; /*0x643d26*/
    if ( v22 ) /*0x643d2b*/
      return SendMessageA(v22, 0xFu, 0, 0); /*0x643d34*/
    else
      return LoadScreen::Render(this, v4, (int)&savedregs, aP3); /*0x643d4b*/
  }
  return result; /*0x643d3a*/

}
}
// 0x646D70
namespace gamemd {
int sub_646D70()
{

  if ( dword_A8B238[0] == 4 ) /*0x646d77*/
    return (unk_A8E9C0)->Disconnect(); /*0x646d7e*/
  int result; // eax
  return result; /*0x646d83*/
}
}
// 0x6471A0
namespace gamemd {
int Network::AddFrameEvent()
{

  uint8_t v3; // [esp+0h] [ebp-74h]
  v3 = 19; /*0x6471a8*/
  if ( *(unsigned int *)&dword_A8B238 == 4 /*0x6471cb*/
    && byte_A8DBA0
    && dword_A8DA84 > 2
    && SessionClass::IsValidHouse((int)&dword_A8B238, 0) )
  {
    v3 = 39; /*0x6471d4*/
  }
  char *v1; // eax
  char v4[112]; // [esp+4h] [ebp-70h] BYREF
  v1 = (v4)->AddEvent((int)dword_A83D4C->relatedTagsCount, v3); /*0x6471ec*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  memcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647219*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64722c*/
  ++stru_A80220.lineTrailer; /*0x647243*/
  dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/
}
}
// 0x6475F0
namespace gamemd {
AbstractClass * * Network::QueueProcessingLoop(void *a1)
{

  int v1; // eax
  Network *v2; // ebp
  int v3; // ecx
  int v4; // esi
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned int v8; // eax
  Network *TextBufferEntry; // esi
  char *v10; // edi
  unsigned int *v11; // eax
  int v12; // edx
  Performance *v13; // edi
  int *v14; // eax
  int v15; // ecx
  int v16; // esi
  char v17; // bl
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // edx
  int v23; // esi
  int v24; // esi
  int v25; // ecx
  unsigned int *v26; // edx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int updated; // esi
  unsigned int v32; // ebx
  int v33; // edi
  unsigned int *v34; // ebp
  unsigned int v35; // esi
  int v36; // ebp
  int v37; // edi
  char *v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // esi
  char q030; // al
  int ptr_0; // edx
  char *v44; // edi
  int v45; // eax
  char *v46; // edi
  // w15f4: v3-export truncated tail (RHS lost): int v4... ...
  // live body via get_context/0x6475F0 — w15f4 regrafted decls only
  int v47; // eax
  int v48; // esi
  int v49; // eax
  int v50; // esi
  int *v51; // eax
  int *v52; // eax
  int *v53; // eax
  int *v54; // eax
  int v55; // edx
  int v56; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-ACh]
  wchar_t *v58; // [esp-10h] [ebp-ACh]
  wchar_t *v59; // [esp-10h] [ebp-ACh]
  wchar_t *v60; // [esp-10h] [ebp-ACh]
  wchar_t *v61; // [esp-10h] [ebp-ACh]
  wchar_t *v62; // [esp-10h] [ebp-ACh]
  wchar_t *v63; // [esp-10h] [ebp-ACh]
  wchar_t *v64; // [esp-10h] [ebp-ACh]
  TechnoClass *v65; // [esp+0h] [ebp-9Ch]
  ObjectClass *v66; // [esp+0h] [ebp-9Ch]
  int v67; // [esp+10h] [ebp-8Ch]
  int v68; // [esp+14h] [ebp-88h]
  Network *v69; // [esp+18h] [ebp-84h]
  Performance *v70; // [esp+1Ch] [ebp-80h]
  unsigned char v71; // [esp+20h] [ebp-7Ch]
  int v72; // [esp+24h] [ebp-78h]
  unsigned char v73[108]; // [esp+2Ch] [ebp-70h] BYREF
  int16_t v74; // [esp+98h] [ebp-4h]
  char v75; // [esp+9Ah] [ebp-2h]
}
} // namespace gamemd

// 0x64AC90
namespace gamemd {
int Network::syncGameState(void *a1_1)
{

  int v2; // ebx
  v2 = operator new(0x1C7u); /*0x64ac9f*/
  memcpy((void *)v2, a1_1, 0x1C4u); /*0x64acab*/
  a1_1 = &a1_1->Network_1C4; /*0x64acab*/
  *(unsigned short *)(v2 + 452) = a1_1->__pad_000; /*0x64acad*/
  *(unsigned char *)(v2 + 454) = (a1_1->u32_2); /*0x64acaf*/
  int result; // eax
  result = *(unsigned int *)DataGlobal_A8BB30; /*0x64acb0*/
  if ( *(int *)&DataGlobal_A8BB38 < *(int *)DataGlobal_A8BB30 /*0x64aceb*/
    || (DataGlobal_A8BB35 || !*(unsigned int *)DataGlobal_A8BB30)
    && *(int *)&DataGlobal_A8BB3C > 0
    && (result = (*((int (__thiscall **)(void **, int, unsigned int))DataGlobal_A8BB28 + 2))(
                   &DataGlobal_A8BB28,
                   *(unsigned int *)DataGlobal_A8BB30 + *(unsigned int *)&DataGlobal_A8BB3C,
                   0),
        (unsigned char)result) )
  {
    result = (*(unsigned int *)&DataGlobal_A8BB38)++; /*0x64acf3*/
    *((unsigned int *)DataGlobal_A8BB2C + result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/
}
}
// 0x64C380
namespace gamemd {
AbstractClass * * Network::ProcessEventList(int a1, int * a2, int a3)
{

  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int i; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  char v17; // dl
  int v18; // esi
  int v19; // edx
  int v20; // esi
  EventClass *v21; // ecx
  char *v22; // esi
  char *v23; // edi
  HouseClass *v24; // eax
  int v25; // ecx
  Network *ptr_0; // esi
  int v27; // eax
  int v28; // esi
  int v29; // ebx
  void *v30; // ebp
  int v31; // esi
  wchar_t *StringCSF; // eax
  int v33; // esi
  int v34; // ebx
  char v35; // dl
  bool v36; // cl
  char *v37; // edx
  char *v38; // eax
  int v39; // edx
  unsigned __int8 v41; // si
  int v42; // edi
  int *v43; // eax
  wchar_t *v44; // [esp-10h] [ebp-60h]
  HouseClass *v45; // [esp+0h] [ebp-50h]
  int v46; // [esp+10h] [ebp-40h]
  int v47; // [esp+14h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+18h] [ebp-38h]
  int v50; // [esp+1Ch] [ebp-34h]
  int v51; // [esp+20h] [ebp-30h]
  Performance *v52; // [esp+24h] [ebp-2Ch]
  int v53; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  int v55; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  v3 = dword_A80238; /*0x64c384*/
  v4 = dword_8B41F8; /*0x64c38d*/
  v5 = 0; /*0x64c395*/
  v50 = dword_8B41F8; /*0x64c399*/
  v51 = dword_A80238; /*0x64c39d*/
  if ( dword_8B41F8 > 0 ) /*0x64c3a1*/
  {
    v6 = dword_A8B1DC; /*0x64c3a3*/
    do /*0x64c40b*/
    {
      if ( byte_8B4204[111 * (((unsigned short)v5 + (unsigned short)dword_8B41FC) & 0x3FFF)] != 28 ) /*0x64c3c3*/
      {
        v7 = *(int *)((char *)&dword_8B4207 + 111 * (((unsigned short)v5 + (unsigned short)dword_8B41FC) & 0x3FFF)); /*0x64c3c5*/
        if ( v7 > dword_A8B1F8 && v7 < v6 ) /*0x64c3d8*/
        {
          Debug::Log(); /*0x64c3e1*/
          v6 = dword_A8B1DC; /*0x64c3fb*/
          *(int *)((char *)&dword_8B4207 + 111 * (((unsigned short)v5 + (unsigned short)dword_8B41FC) & 0x3FFF)) = dword_A8B1DC; /*0x64c401*/
        }
      }
      ++v5; /*0x64c408*/
    }
    while ( v5 < v4 ); /*0x64c40b*/
  }
  if ( dword_A8E2D8 ) /*0x64c413*/
  {
    v8 = dword_A8E2DC; /*0x64c419*/
    if ( dword_A8E2DC ) /*0x64c421*/
    {
      if ( dword_A8E2E0 != -1 ) /*0x64c42e*/
      {
        for ( i = 0; i < v4; ++i ) /*0x64c438*/
        {
          if ( byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)i) & 0x3FFF)] == 19 /*0x64c466*/
            && byte_8B4206[111 * (((unsigned short)dword_8B41FC + (unsigned short)i) & 0x3FFF)] == dword_A8E2E0 )
          {
            v10 = *(int *)((char *)&dword_8B4207 + 111 * (((unsigned short)dword_8B41FC + (unsigned short)i) & 0x3FFF)); /*0x64c468*/
            if ( v10 > dword_A8E2D8 && v10 < v8 ) /*0x64c47b*/
            {
              Debug::Log(); /*0x64c484*/
              v8 = dword_A8E2DC; /*0x64c49e*/
              *(int *)((char *)&dword_8B4207 + 111 * (((unsigned short)i + (unsigned short)dword_8B41FC) & 0x3FFF)) = dword_A8E2DC; /*0x64c4a4*/
            }
          }
        }
        if ( *(int *)&stru_A8E960.random[528] > v8 ) /*0x64c4b8*/
        {
          dword_A8E2D8 = 0; /*0x64c4ba*/
          dword_A8E2DC = 0; /*0x64c4c0*/
          dword_A8E2E0 = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( v3 <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = dword_A83ED4; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(&dword_A8022C->ptr_0 + v46); /*0x64c4ec*/
    v47 = v12; /*0x64c4f1*/
    if ( v12 ) /*0x64c4f5*/
    {
      if ( *(unsigned char *)(v12 + 492) || *(unsigned char *)(v12 + 493) ) /*0x64c505*/
        break; /*0x64c505*/
    }
LABEL_119:
    if ( ++v46 >= v51 ) /*0x64cc4c*/
      return 1; /*0x64cc4c*/
  }
  v13 = 0; /*0x64c517*/
  v49 = 0; /*0x64c51b*/
  if ( v50 <= 0 ) /*0x64c51f*/
  {
LABEL_97:
    v33 = 0; /*0x64cae8*/
    v34 = -1; /*0x64caef*/
    v35 = 0; /*0x64caf2*/
    v54 = 0; /*0x64caf6*/
    v48 = 0; /*0x64cafa*/
    if ( dword_A83ED0 > 0 ) /*0x64cafe*/
    {
      while ( 1 ) /*0x64cb0a*/
      {
        v36 = 0; /*0x64cb0a*/
        if ( v34 != -1 ) /*0x64cb0f*/
        {
          v36 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)] != (char)v34; /*0x64cb28*/
          if ( byte_A83EEE[111 * (unsigned __int8)(v11 + v33)] != v35 /*0x64cb5e*/
            || *(int *)((char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33)) != v55
            || byte_A83EF3[111 * (unsigned __int8)(v11 + v33)] != v54
            || *(int *)((char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33)) != v53 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)]; /*0x64cb72*/
        v37 = (char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33); /*0x64cb7a*/
        v38 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33); /*0x64cb81*/
        v55 = *(unsigned int *)v37; /*0x64cb8a*/
        v56 = v37[4]; /*0x64cb91*/
        v53 = *(unsigned int *)v38; /*0x64cb97*/
        v54 = v38[4]; /*0x64cb9e*/
        if ( v36 ) /*0x64cba2*/
        {
          if ( v33 - v48 > 1 ) /*0x64cbaf*/
          {
            ProcessNetworkMapEvent(v48, v33 - v48); /*0x64cbb1*/
            v11 = dword_A83ED4; /*0x64cbb6*/
          }
          v48 = v33; /*0x64cbbc*/
        }
        else if ( v33 == dword_A83ED0 - 1 ) /*0x64cbcb*/
        {
          v39 = v33 - v48 + 1; /*0x64cbd5*/
          if ( v39 > 1 ) /*0x64cbd9*/
          {
            ProcessNetworkMapEvent(v48, v39); /*0x64cbdb*/
            v11 = dword_A83ED4; /*0x64cbe0*/
          }
        }
        if ( ++v33 >= dword_A83ED0 ) /*0x64cbee*/
          break; /*0x64cbee*/
        v35 = v56; /*0x64cb06*/
      }
    }
    if ( dword_A83ED0 ) /*0x64cbfb*/
    {
      while ( 1 ) /*0x64cc0a*/
      {
        ((EventClass *)((char *)&unk_A83EDC + 111 * v11))->ProcessEvent(); /*0x64cc0a*/
        if ( !dword_A83ED0 ) /*0x64cc16*/
          break; /*0x64cc16*/
        v11 = (unsigned __int8)(dword_A83ED4 + 1); /*0x64cc21*/
        dword_A83ED4 = v11; /*0x64cc28*/
        if ( !--dword_A83ED0 ) /*0x64cc33*/
          goto LABEL_119; /*0x64cc33*/
      }
      v11 = dword_A83ED4; /*0x64cc37*/
    }
    goto LABEL_119; /*0x64cc37*/
  }
  v14 = a1; /*0x64c525*/
  while ( 1 ) /*0x64c536*/
  {
    v15 = ((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF; /*0x64c536*/
    v52 = (Performance *)byte_8B4206[111 * v15]; /*0x64c54c*/
    if ( v52 != *(Performance **)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(int *)((char *)&dword_8B4207 + 111 * v15); /*0x64c556*/
    if ( *(int *)&stru_A8E960.random[528] < v16 || (byte_8B4205[111 * v15] & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( *(int *)&stru_A8E960.random[528] <= v16 /*0x64c5a9*/
      || byte_8B4204[111 * v15] == 28
      || !*(unsigned int *)&dword_A8B238
      || *(unsigned int *)&dword_A8B238 == 5 )
    {
      break; /*0x64c5a9*/
    }
    Debug::Log(); /*0x64c5b4*/
    Debug::Log(); /*0x64c5be*/
    Debug::Log(); /*0x64c5d4*/
    Debug::Log(); /*0x64c5e2*/
    Debug::Log(); /*0x64c5f1*/
    Debug::Log(); /*0x64c602*/
    Debug::Log(); /*0x64c613*/
    Debug::Log(); /*0x64c623*/
    (*(void (**)(int))(*(unsigned int *)v14 + 16))(v14); /*0x64c62f*/
    v11 = dword_A83ED4; /*0x64c632*/
LABEL_96:
    v49 = ++v13; /*0x64cade*/
    if ( v13 >= v50 ) /*0x64cae2*/
      goto LABEL_97; /*0x64cae2*/
  }
  v17 = byte_8B4204[111 * v15]; /*0x64c63d*/
  if ( v17 == 19 ) /*0x64c647*/
  {
    v24 = dword_A8022C; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      ptr_0 = v24->ptr_0; /*0x64c7d3*/
      if ( v24->ptr_0 ) /*0x64c7d3*/
      {
        if ( ptr_0->u32_30 == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      v24 = (HouseClass *)((char *)&v24->ptr_4); /*0x64c7df*/
      if ( v25 >= v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    ptr_0->q248 = 1; /*0x64c7e7*/
LABEL_57:
    if ( ((Network *)ptr_0)->CountDisconnectedHouses() == 1 ) /*0x64c7f8*/
    {
      if ( *(unsigned int *)&dword_A8B238 != 4 || stru_A8E960.waypoints[2414] ) /*0x64c809*/
      {
LABEL_66:
        if ( !((Network *)ptr_0)->processQueue() ) /*0x64c852*/
          ((Network *)ptr_0)->SendOffer(); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      byte_A8B8C1 = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ProcessGameResults(0, v52); /*0x64c819*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 /*0x64c83a*/
      && !stru_A8E960.waypoints[2414]
      && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)
      && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == ptr_0 )
    {
      Debug::Log(); /*0x64c841*/
      ProcessGameResults(0, v52); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( stru_A8E960.random[512] && byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c885*/
      Debug::Log(); /*0x64c8b3*/
    v27 = ((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF; /*0x64c8cd*/
    if ( byte_8B4206[111 * v27] != *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48) ) /*0x64c8e2*/
    {
      if ( byte_8B4204[111 * v27] == 19 ) /*0x64c923*/
      {
        Debug::Log(); /*0x64c935*/
        if ( *(unsigned int *)&dword_A8B238 == 1 || *(unsigned int *)&dword_A8B238 == 2 ) /*0x64c94a*/
        {
          HandlePlayerDisconnection(v46, 0); /*0x64c9be*/
        }
        else if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x64c954*/
        {
          if ( a1 ) /*0x64c95c*/
          {
            v29 = (*(int (**)(int, int))(*(unsigned int *)a1 + 24))(a1, v46); /*0x64c96c*/
            if ( v29 != -1 ) /*0x64c971*/
            {
              if ( v29 < (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) - 1 ) /*0x64c97d*/
              {
                v30 = (void *)(a3 + 24 * v29); /*0x64c986*/
                do /*0x64c9a5*/
                {
                  ++v29; /*0x64c993*/
                  memcpy(v30, (char *)v30 + 24, 0x18u); /*0x64c994*/
                  v30 = (char *)v30 + 24; /*0x64c99a*/
                }
                while ( v29 < (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) - 1 ); /*0x64c9a5*/
                v13 = v49; /*0x64c9a7*/
              }
              HandleNetworkPlayerDisconnect(v46, 0); /*0x64c9b1*/
            }
          }
        }
        if ( (dword_A8D5F8 & 2) != 0 && byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c9ea*/
        {
          v31 = v47; /*0x64c9f0*/
          *(unsigned char *)(v47 + 492) = 0; /*0x64c9f4*/
          *(unsigned int *)(v47 + 588) = *&dword_8871E0->MaxIQLevels_d; /*0x64ca07*/
          (v45)->CanDetect(); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x64ca2d*/
            v58 = 0; /*0x64ca35*/
          }
          else
          {
            Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x64ca1b*/
          }
          if ( Destination != (char *)(v47 + 90100) ) /*0x64ca46*/
          {
            memcpy((void *)(v47 + 90100), Destination, 0x14u); /*0x64ca51*/
            *(unsigned char *)(v47 + 90120) = v58; /*0x64ca53*/
            v31 = v47; /*0x64ca54*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Queue_CPP, 5672); /*0x64ca6b*/
          wcsncpy((wchar_t *)(v31 + 90154), StringCSF, 0x15u); /*0x64ca78*/
          *(unsigned short *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log(); /*0x64ca95*/
          --dword_A8B54C; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    dword_8373A0 = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (EventClass *)&byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)]; /*0x64c90a*/
LABEL_73:
    (v21)->ProcessEvent(); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    dword_8373A0 = timeGetTime() - v20; /*0x64c70c*/
    v21 = (EventClass *)&byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)]; /*0x64c723*/
    if ( (v21->EventClass_field_0x0) = ((v21->EventClass_field_0x0) & ~0xFF) | ((= 4) & 0xFF)) /*0x64c733*/
    {
      if ( dword_A83ED0 < 256 ) /*0x64c743*/
      {
        v22 = &byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)]; /*0x64c762*/
        v23 = (char *)&unk_A83EDC + 111 * dword_A83ED8; /*0x64c774*/
        memcpy(v23, v22, 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(unsigned short *)v23 = *(unsigned short *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        dword_A8ADDC[dword_A83ED8] = timeGetTime(); /*0x64c78c*/
        dword_A83ED8 = (unsigned __int8)(dword_A83ED8 + 1); /*0x64c7a6*/
        ++dword_A83ED0; /*0x64c7ac*/
      }
      goto LABEL_95; /*0x64c7b1*/
    }
    goto LABEL_73; /*0x64c733*/
  }
  if ( a2 ) /*0x64c66e*/
  {
    v18 = *a2; /*0x64c670*/
    v19 = a2[2]; /*0x64c672*/
    if ( *a2 == -1 ) /*0x64c678*/
      goto LABEL_43; /*0x64c678*/
    if ( *(unsigned int *)&stru_A8E960.random[528] - v18 < v19 ) /*0x64c683*/
    {
      v19 -= *(unsigned int *)&stru_A8E960.random[528] - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(int *)((char *)&dword_8B4207 + 111 * v15) != *(unsigned int *)&stru_A8E960.random[528] /*0x64c6f2*/
    || dword_B04474[(unsigned __int8)(*(int *)((char *)&dword_8B4207
                                             + 111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF))
                                    - byte_8B4211[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)])] == *(int *)((char *)&dword_8B420B + 111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)) )
  {
LABEL_95:
    v14 = a1; /*0x64caa8*/
    byte_8B4205[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)] |= 1u; /*0x64caca*/
    v11 = dword_A83ED4; /*0x64cad1*/
    goto LABEL_96; /*0x64cad1*/
  }
  if ( byte_B04880 ) /*0x64cc68*/
  {
    v41 = 0; /*0x64cc6e*/
    v42 = 256; /*0x64cc70*/
    do /*0x64cc9f*/
    {
      LogMultiplayToSync_MPDEBUG( /*0x64cc98*/
        v41++,
        (unsigned __int8 *)&byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v49) & 0x3FFF)]);
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    ((Multiplay *)&byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)])->LogToSYNC_NOMPDEBUG(); /*0x64ccba*/
  }
  ++*(unsigned int *)&stru_A8D804.__pad_3D[627]; /*0x64ccdd*/
  v44 = GetStringCSF(aTxtStop, 0, g_Str_File_Queue_CPP, 5723); /*0x64ccf7*/
  v43 = (int *)GetStringCSF(aTxtOutOfSync, 0, g_Str_File_Queue_CPP, 5722); /*0x64cd02*/
  (v43)->ShowMessageBox(v44, 0, 0, 0, (int)v45); /*0x64cd0c*/
  --*(unsigned int *)&stru_A8D804.__pad_3D[627]; /*0x64cd1b*/
  return 0; /*0x64cc52*/

}
}
// 0x6521C0
namespace gamemd {
AbstractClass * * Network::RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{

  char *v27; // edi

  *(unsigned int *)((char *)&a1 + 3) = MEMORY[0xA8ED84]; /*0x6521c5*/
  if ( dword_A802C8 >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &byte_A802D4[111 * dword_A802D0]; /*0x6521eb*/
  memcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
  v27 += 108; /*0x6521f2*/
  *(unsigned short *)v27 = a27; /*0x6521f4*/
  v27[2] = BYTE2(a27); /*0x6521f6*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x652205*/
  dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x652215*/
  ++dword_A802C8; /*0x652220*/
  return 1; /*0x652227*/

}
}
// 0x6523A0
namespace gamemd {
int Network::SendUnreachable()
{

  int result; // eax
  int QueueCount; // edi
  int i; // ebx
  void *v4; // esi
  char *v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int Ticks; // [esp+0h] [ebp-1E4h]
  int v11[3]; // [esp+10h] [ebp-1D4h] BYREF
  int v12[11]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v13; // [esp+48h] [ebp-19Ch]
  char v14; // [esp+4Ah] [ebp-19Ah]

  Debug::Log(); /*0x6523ab*/
  result = *(unsigned int *)&dword_A8B238; /*0x6523b0*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6523bb*/
  {
    ((Network *)&MEMORY[0xA8E9C0])->Disconnect(); /*0x6523c9*/
    QueueCount = (&MEMORY[0xA8E9C0])->GetQueueCount(); /*0x6523d8*/
    for ( i = 0; i < *(int *)&DataGlobal_B052E0; ++i ) /*0x6523e7*/
    {
      memset(v12, 0, sizeof(v12)); /*0x6523f8*/
      v13 = 0; /*0x6523fa*/
      v14 = 0; /*0x6523fc*/
      v12[0] = 47; /*0x652402*/
      strcpy((char *)&v12[1], ToWideStringChar((char *)*MEMORY[0xA8DA78])); /*0x65242c*/
      v4 = (void *)((Network *)&g_NetworkEventQueue)->checkTimeout(i); /*0x65243f*/
      if ( v4 ) /*0x652443*/
      {
        v5 = ToWideStringChar((char *)*MEMORY[0xA8DA78]); /*0x65244d*/
        if ( _strcmpi((char *)v4, v5) ) /*0x652454*/
        {
          Debug::Log(); /*0x652466*/
          v6 = (int *)((Network *)&g_NetworkEventQueue)->processAcknowledgment(v4); /*0x652474*/
          v11[0] = *v6; /*0x65247b*/
          v11[1] = v6[1]; /*0x652485*/
          v11[2] = v6[2]; /*0x652491*/
          LOWORD(v7) = ((Network *)&g_NetworkEventQueue)->handleDisconnect(v4); /*0x652495*/
          (&MEMORY[0xA8E9C0].Socket)->SendMessage((int)v12, 47, 1, (int)v11, v7, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = Timer::GetTicks(); /*0x6524d3*/
    while ( (&MEMORY[0xA8E9C0])->GetQueueCount() > QueueCount ) /*0x6524e6*/
    {
      v8 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x6524fe*/
        if ( v9 >= 300 ) /*0x652504*/
          break; /*0x652504*/
        v8 = 300 - v9; /*0x652506*/
      }
      if ( !v8 ) /*0x65250a*/
        break; /*0x65250a*/
      Event::Dispatch(); /*0x65250c*/
    }
    result = *(unsigned int *)&dword_A8B238; /*0x65251f*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x65252a*/
      return ((Connection *)&MEMORY[0xA8E9C0])->Close(); /*0x652531*/
  }
  return result; /*0x652536*/

}
}
// 0x663910
namespace gamemd {
void Network::validatePacket()
{

  char *Network_field_0x10; // eax
  char *v3; // ecx
  int v4; // eax

  while ( this->q010 ) /*0x663916*/
  {
    __3_YAXPAX_Z(*(void **)this->u32_4); /*0x663921*/
    Network_field_0x10 = (char *)this->q010; /*0x663926*/
    if ( (int)Network_field_0x10 > 0 ) /*0x66392e*/
    {
      v3 = Network_field_0x10 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( this->q010 = v3; /*0x66393a*/
      v4 < (int)this->q010;
      *((unsigned int *)this->u32_4 + v4 - 1) = *((unsigned int *)this->u32_4 + v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  this->q018 = 0; /*0x663953*/
  *&this->u32_1C = 0; /*0x663956*/

}
}
// 0x6639D0
namespace gamemd {
int Network::SendMasterPlayerList()
{

  Network *v1; // esi
  int v2; // ebp
  int Network_field_0x10; // eax
  unsigned char *v5; // ebx
  const void **Network_field_0x4; // eax
  int v7; // esi
  int v8; // eax
  int Ticks; // [esp+10h] [ebp-16Ch]
  int v11[85]; // [esp+28h] [ebp-154h] BYREF

  v1 = this; /*0x6639d8*/
  memset(v11, 0, 338); /*0x6639e6*/
  Timer::GetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !this->q018 ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log(); /*0x663a1d*/
  Network_field_0x10 = (int)v1->q010; /*0x663a22*/
  LOBYTE(v11[0]) = 1; /*0x663a2a*/
  BYTE1(v11[0]) = Network_field_0x10; /*0x663a2f*/
  if ( Network_field_0x10 > 0 ) /*0x663a33*/
  {
    v5 = (char *)&v11[10] + 3; /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      Network_field_0x4 = (const void **)v1->u32_4; /*0x663a40*/
      memcpy(v5 - 41, Network_field_0x4[v2], 0x2Au); /*0x663a51*/
      if ( (&unk_A8E9C0)->send(*(char *)Network_field_0x4[v2]) == -1 /*0x663a80*/
        && dword_A83D4C->relatedTagsCount != (void *)**((char **)this->u32_4 + v2) )
      {
        Debug::Log(); /*0x663a89*/
        *v5 = 0; /*0x663a8e*/
        *(v5 - 2) = 0; /*0x663a94*/
      }
      ++v2; /*0x663a9c*/
      v5 += 42; /*0x663a9d*/
      if ( v2 >= (int)this->q010 ) /*0x663aa3*/
        break; /*0x663aa3*/
      v1 = this; /*0x663a3c*/
    }
  }
  (&unk_A8E9C0.Socket)->SendPacket((int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log(); /*0x663ac1*/
  Ticks = Timer::GetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue(&unk_A8E9C0) > 0 ) /*0x663af3*/
  {
    v7 = 900; /*0x663afc*/
    if ( Ticks != -1 ) /*0x663b02*/
    {
      v8 = Timer::GetTicks() - Ticks; /*0x663b0d*/
      if ( v8 >= 900 ) /*0x663b13*/
        return 1; /*0x663b13*/
      v7 = 900 - v8; /*0x663b15*/
    }
    if ( !v7 ) /*0x663b19*/
      break; /*0x663b19*/
    Event::Dispatch(); /*0x663b1b*/
  }
  return 1; /*0x663a0c*/

}
}
// 0x6640E0
namespace gamemd {
HashTable_flat * * Network::ProcessAddressChange()
{
  wchar_t *result; // eax
  char v2; // si
  char *inited; // eax
  unsigned short v4[5]; // [esp+2h] [ebp-9Ah] BYREF
  int v5; // [esp+Ch] [ebp-90h] BYREF
  Waypoint v6; // [esp+10h] [ebp-8Ch] BYREF

  ((Waypoint *)&v6.u32_C)->InitInvalid(); /*0x6640ea*/
  result = *(wchar_t **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6640ef*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[416] > 0 ) /*0x6640f6*/
  {
                                for ( result = (wchar_t *)Network::SendPacketThunk2( /*0x66411c*/
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.u32_C,
                                (int)v4);
                                  result;
                                result = (wchar_t *)Network::SendPacketThunk2(
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.u32_C,
                                (int)v4) )
                                {
      if ( (unsigned char)dword_B04E9C == 5 ) /*0x664132*/
      {
        Debug::Log(); /*0x664151*/
        v2 = (((unsigned char *)&(dword_B04E9C))[1]); /*0x66415e*/
        *(unsigned int *)&v4[1] = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v4[3] = 0; /*0x664174*/
        (&v6)->InitInvalid(); /*0x664179*/
        ((NetworkID *)&v6)->Assign(&v6.nextArrayIndex, (int)&v4[1], 0); /*0x66418e*/
        inited = (&v6.referenceCount)->initConnection((int)dword_A83D4C->relatedTagsCount, &v6, v2); /*0x6641a7*/
        if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6641b6*/
        {
          memcpy((char *)&byte_A802D4 + 111 * dword_A802D0, inited, 0x6Fu); /*0x6641d2*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6641df*/
          dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x6641f6*/
          ++stru_A80220.lineTrailer; /*0x6641fc*/
        }
      }
      else
      {
        Debug::Log(); /*0x66413f*/
      }
                                }
  }
  return result; /*0x66422a*/
}
}
// 0x6642A0
namespace gamemd {
void * Network::processAcknowledgment(IUnknown * aP1)
{

  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h] BYREF
  __int16 v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    (&stru_B052C0)->InitInvalid(); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v5 = 0; /*0x6642db*/
  v6 = 0; /*0x6642e5*/
  Struct::Copy6Bytes(DataGlobal_B052C0, (int)&v5); /*0x6642ea*/
  ((Network *)&stru_B052C0)->SetPort(0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)this->q010 > 0 ) /*0x664302*/
  {
    while ( _strcmpi((char *)(*((unsigned int *)this->u32_4 + v3) + 1), (char *)aP1) ) /*0x66431b*/
    {
      if ( ++v3 >= (int)this->q010 ) /*0x664323*/
        return (char *)&stru_B052C0; /*0x664330*/
    }
    v7 = *(unsigned int *)(*((unsigned int *)this->u32_4 + v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(DataGlobal_B052C0, (int)&v7); /*0x66434a*/
    ((Network *)&stru_B052C0)->SetPort(*(unsigned short *)(*((unsigned int *)this->u32_4 + v3) + 37)); /*0x66435f*/
  }
  return (char *)&stru_B052C0; /*0x664325*/

}
}
// 0x664400
namespace gamemd {
void * Network::reconnect(DynamicVector * aP1, short a3)
{

  char *Network_field_0x10; // edx
  char *result; // eax
  char **Network_field_0x4; // esi
  char **i; // ecx

  Network_field_0x10 = (char *)this->q010; /*0x664400*/
  result = 0; /*0x664404*/
  if ( (int)Network_field_0x10 > 0 ) /*0x66440a*/
  {
    Network_field_0x4 = (char **)this->u32_4; /*0x66440c*/
    for ( i = Network_field_0x4; **i != aP1; ++i ) /*0x664413*/
    {
      if ( (int)++result >= (int)Network_field_0x10 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = Network_field_0x4[(unsigned int)result]; /*0x66442c*/
    result->u16_25 = a3; /*0x664434*/
  }
  return result; /*0x664426*/

}
}
// 0x69B540
namespace gamemd {
unsigned int * Network::processGameEvent()
{

  unsigned int *result; // eax
  int v2; // ecx

  *&this->q024 = 0; /*0x69b540*/
  result = &this->u32_6C; /*0x69b547*/
  v2 = 8; /*0x69b54a*/
  do /*0x69b55b*/
  {
    *(result - 8) = -1; /*0x69b552*/
    *result++ = -1; /*0x69b555*/
    --v2; /*0x69b55a*/
  }
  while ( v2 ); /*0x69b55b*/
  return result; /*0x69b55d*/

}
}
// 0x792F10
namespace gamemd {
AbstractClass * * Network::SyncPlayerList(void *a1)
{

  int owningHouseIndex; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // esi
  char *v7; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // ecx
  int i; // esi
  int v13; // [esp+Ch] [ebp-7Ch] BYREF
  int v14; // [esp+10h] [ebp-78h] BYREF
  int v15[2]; // [esp+14h] [ebp-74h] BYREF
  unsigned int v16[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x792f10*/
  dword_A8B54C = 1; /*0x792f18*/
  v2 = 0; /*0x792f23*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x792f28*/
  {
    v3 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v3 >= 0 && v2 < owningHouseIndex ) /*0x792f38*/
        memcpy(v16, (char *)g_WOL_UserList.nextObject + v3, sizeof(v16)); /*0x792f4b*/
      v4 = CharToWideString(&v16[9]); /*0x792f51*/
      v5 = ((Player *)v4)->FindByName(); /*0x792f58*/
      v6 = v5; /*0x792f5d*/
      if ( v5 && (unsigned __int8)IsKnownPointer((ObjectClass *)v5) ) /*0x792f65*/
        v6->u32_7B = v16[5]; /*0x792f72*/
      v7 = ((String *)&g_WindowManager.__pad_EC[684])->GetOrEmpty(); /*0x792f7a*/
      if ( _strcmpi((char *)&v16[9], v7) ) /*0x792f85*/
      {
        if ( (v16[0] & 1) != 0 ) /*0x792f96*/
        {
          v8 = CharToWideString(&v16[9]); /*0x792f9c*/
          v9 = ((Player *)v8)->FindByName(); /*0x792fa3*/
          ((Network *)(v9 + 20))->CopyAddress(&v14, (int)v15); /*0x792fb5*/
          ((NetworkID *)&stru_A8BB1C)->Assign(&v14, (int)v15, 0); /*0x792fcb*/
        }
        v13 = 0; /*0x792fde*/
        (*(void (**)(LPVOID, unsigned int, int *))(*(unsigned int *)g_UIPointerTable + 32))( /*0x792fea*/
          g_UIPointerTable,
          v16[6],
          &v13);
        v10 = v13; /*0x792fed*/
        if ( v13 < 0 ) /*0x792ff3*/
        {
          v10 = 0; /*0x792ff5*/
          v13 = 0; /*0x792ff7*/
        }
        v11 = dword_A8B54C; /*0x792ffb*/
        *((unsigned int *)&g_WOL_UserList.attachedTag + dword_A8B54C) = v10; /*0x793001*/
        dword_A8B54C = v11 + 1; /*0x793009*/
      }
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79300f*/
      ++v2; /*0x793014*/
      v3 += 108; /*0x793015*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x79301a*/
  }
  (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 48))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x79302a*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x793039*/
  {
    ((Network *)(MEMORY[0xA8DA78][i] + 40))->FormatAddress(0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (**)(unsigned int, int, unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 44))( /*0x793071*/
      *(unsigned int *)&stru_887598.isAliveFlag,
      MEMORY[0xA8DA78][i] + 40,
      0);
  }
  (&stru_A8BB1C)->FormatAddress(0); /*0x793085*/
  Debug::Log(); /*0x793090*/

}
}
// 0x79C3A0
namespace gamemd {
AbstractClass * * int sub_79C3A0()
{
  unsigned int result; // eax
  int v2; // esi
  int v3; // ebx
  AnimClass *v4; // eax
  AnimClass *parachute; // esi
  char v7[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( ((String *)&g_WOL_AuthObject)->Length() ) /*0x79c3a8*/
  {
    result = time(0) - *(unsigned int *)g_WOL_ParseState; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    ((DeleteAndZero *)&g_WOL_AuthObject)->Alt2(); /*0x79c3d1*/
  }
  result = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c3d6*/
  if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79c3dd*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c3e6*/
    {
      ((String *)((String *)&g_WOL_AuthObject))->Reassign((const char **)stru_B76900.parachute); /*0x79c3f7*/
      v2 = 0; /*0x79c401*/
      if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79c405*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79c40b*/
          v2 = *(unsigned int *)&stru_B76900.needsRedraw - 1; /*0x79c40d*/
        DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79c419*/
        memcpy( /*0x79c442*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v2,
          &stru_B76900.parachute->AnimClass_field_0x4 + v2,
          4 * (*(unsigned int *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v2 + 1)));
        --*(unsigned int *)&stru_B76900.needsRedraw; /*0x79c456*/
        if ( 3 * *(unsigned int *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.v3 ) /*0x79c460*/
        {
          v3 = *(unsigned int *)&stru_B76900.v3 / 2; /*0x79c469*/
          if ( *(unsigned int *)&stru_B76900.v3 / 2 < 10 ) /*0x79c46e*/
            v3 = 10; /*0x79c470*/
          if ( v3 < *(int *)&stru_B76900.v3 ) /*0x79c477*/
          {
            v4 = (AnimClass *)operator new(4 * v3); /*0x79c482*/
            parachute = stru_B76900.parachute; /*0x79c487*/
            v4 = v4; /*0x79c492*/
            if ( stru_B76900.parachute ) /*0x79c494*/
            {
              memcpy(v4, stru_B76900.parachute, 4 * *(unsigned int *)&stru_B76900.needsRedraw); /*0x79c49e*/
              parachute = stru_B76900.parachute; /*0x79c4a0*/
            }
            operator delete((void *)(parachute)); /*0x79c4a7*/
            stru_B76900.parachute = v4; /*0x79c4af*/
            *(unsigned int *)&stru_B76900.v3 = v3; /*0x79c4b5*/
          }
        }
      }
    }
    *(unsigned int *)g_WOL_ParseState = time(0); /*0x79c4c3*/
    memset(v7, 0, sizeof(v7)); /*0x79c4d3*/
    strcpy(&v7[36], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v7); /*0x79c512*/
  }
  return result; /*0x79c518*/
}
}
// 0x7B2DB0
namespace gamemd {
int Network::finalizeSession()
{

  ((char *)this)->bindSocket(); /*0x7b2db3*/
  this->u32_3F33C = 0; /*0x7b2dc4*/
  this->u32_3F340 = 0; /*0x7b2dca*/
  this->u8_3F344 = 1; /*0x7b2dd0*/
  this->u8_3F345 = 0; /*0x7b2dd7*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x7b2ddd*/
  this->u32_3F34C = 10; /*0x7b2de3*/
  this->u32_3F348 = 0; /*0x7b2de9*/
  this->u32_3F554 = 0; /*0x7b2def*/
  this->u32_3F558 = 0; /*0x7b2df5*/
  this->u8_3F55C = 1; /*0x7b2dfb*/
  this->u8_3F55D = 0; /*0x7b2e02*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x7b2e08*/
  this->u32_3F564 = 10; /*0x7b2e0e*/
  this->u32_3F560 = 0; /*0x7b2e14*/
  this->u16_3F2FC = 0; /*0x7b2e1a*/
  this->u32_3F330 = 0; /*0x7b2e21*/
  this->u32_3F568 = 0; /*0x7b2e27*/
  /* X11: ptr_0 install elided (implicit via UDPInterfaceClass virtuals 0x7b2e2d) */
  this->u32_3F334 = -1; /*0x7b2e33*/
  return (int)this; /*0x7b2e3f*/

}
}
// 0x793BB0
namespace gamemd {
int sub_793BB0()
{
  int result; // eax
  int *v2; // ebp
  unsigned int *v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // [esp+0h] [ebp-1D8h]
  int v7; // [esp+8h] [ebp-1D0h]
  int v8[113]; // [esp+10h] [ebp-1C8h] BYREF
  int16_t v9; // [esp+1D4h] [ebp-4h]
  char v10; // [esp+1D6h] [ebp-2h]

  result = dword_A8E224; /*0x793bb6*/
  v6 = 0; /*0x793bbb*/
  if ( dword_A8E224 > 0 ) /*0x793bc5*/
  {
    v2 = (int *)&unk_A8E1C4; /*0x793bcf*/
    v3 = &dword_A8E1A4; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v4 = v2[2]; /*0x793bdc*/
      if ( *v2 != -1 ) /*0x793be5*/
      {
        v5 = TimerGetTicks() - *v2; /*0x793bec*/
        if ( v5 >= v4 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v4 -= v5; /*0x793bf3*/
      }
      if ( !v4 ) /*0x793bf7*/
      {
  LABEL_7:
        memset(v8, 0, sizeof(v8)); /*0x793c08*/
    v9 = 0; /*0x793c0a*/
    v10 = 0; /*0x793c0c*/
    v8[0] = 13; /*0x793c12*/
    strcpy((char *)&v8[1], ((String *)((String *)&g_WebBrowser))->GetOrEmpty()); /*0x793c39*/
    ToWideStringChar((char *)dword_A8DA90[*v3]); /*0x793c4b*/
    Debug::Log(); /*0x793c56*/
    ((int)&unk_A8E9C0)->SendToPlayer((int)v8, 47, 0, (wchar_t *)dword_A8DA90[*v3]); /*0x793c76*/
    *v2 = TimerGetTicks(); /*0x793c8f*/
    v2[1] = v7; /*0x793c99*/
    v2[2] = 1200; /*0x793c9c*/
      }
      result = v6 + 1; /*0x793c9f*/
      ++v3; /*0x793caa*/
      v2 += 3; /*0x793cad*/
      ++v6; /*0x793cb2*/
    }
    while ( v6 < dword_A8E224 ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}
}
// 0x7A2730
namespace gamemd {
int sub_7A2730()
{
  int result; // eax

  result = (int)ppv; /*0x7a2730*/
  if ( ppv ) /*0x7a2737*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, aG); /*0x7a2741*/
  return result; /*0x7a2744*/
}
}
// 0x53F540
namespace gamemd {
AbstractClass * * sub_53F540()
{
  uint16_t v1; // si

  v1 = *(unsigned short *)&DataGlobal_AA0568; /*0x53f54d*/
  (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)&stru_887598.isAliveFlag + 80))( /*0x53f556*/
    *(unsigned int *)&stru_887598.isAliveFlag,
    stru_A8EB00.ptr_0[45]);
  dword_AA05A8 = (*(uint8_t (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 60))( /*0x53f570*/
                   *(unsigned int *)&stru_887598.isAliveFlag,
                   v1);
  if ( dword_AA05A8 ) /*0x53f576*/
  {
    if ( (*(uint8_t (__thiscall **)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 28))(*(unsigned int *)&stru_887598.isAliveFlag) ) /*0x53f580*/
    {
      dword_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 4))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x53f59a*/
    dword_AA05A8 = 0; /*0x53f59d*/
  }
  return 0; /*0x53f575*/
}
}
// 0x5F0120
namespace gamemd {
void Network_Process_5F0120(int a1)
{
  char result; // al
  int v2; // edx
  int v3; // edx

  result = 0; /*0x5f0126*/
  switch ( g_EventDispatchState ) /*0x5f012d*/
  {
    case 0: /*0x5f012d*/
    case 1: /*0x5f012d*/
      goto LABEL_3;
    case 2: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0140*/
      goto LABEL_3; /*0x5f0140*/
      (v2) = ((v2) & ~0xFF) | ((unsigned int)(1) & 0xFF); /*0x5f014d*/
      result = Modem::CheckStatus(v2, dword_AC1234, a1); /*0x5f014f*/
      break; /*0x5f014f*/
    case 3: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0160*/
    {
  LABEL_3:
        result = NullModem::TestConnection(); /*0x5f0142*/
    }
      else
    {
        (v3) = ((v3) & ~0xFF) | ((unsigned int)(1) & 0xFF); /*0x5f0168*/
        result = Modem::DetectAndConnect(v3, dword_AC1234, a1); /*0x5f016a*/
    }
      break; /*0x5f016a*/
    default:
      return result;
  }
  return result; /*0x5f016f*/
}
}
// 0x5F6810
namespace gamemd {
unsigned int * sub_5F6810(int a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int v5; // edi
  int v6; // ebp
  double v7; // st7
  int v8; // eax
  double v9; // st7
  unsigned int *v10; // [esp+18h] [ebp-28h]
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]

  result = 0; /*0x5f681f*/
  v5 = *(unsigned int *)(a1 + 16) - 1; /*0x5f6826*/
  v10 = 0; /*0x5f6827*/
  v6 = 99999999; /*0x5f682b*/
  if ( v5 >= 0 ) /*0x5f6830*/
  {
    while ( result ) /*0x5f6838*/
    {
      v13 = *a2 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v5) + 156); /*0x5f68c7*/
      v14 = a2[1] - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v5) + 160); /*0x5f68d4*/
      v15 = a2[2] - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v5) + 164); /*0x5f68de*/
      v9 = Math::Sqrt((double)v13 * (double)v13 + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x5f6903*/
      v8 = Math::RoundToInt(v9); /*0x5f690b*/
      if ( v8 < v6 ) /*0x5f6912*/
      {
        v10 = *(unsigned int **)(*(unsigned int *)(a1 + 4) + 4 * v5); /*0x5f691a*/
        goto LABEL_6; /*0x5f691a*/
      }
      LABEL_7:
      result = v10; /*0x5f6920*/
        if ( --v5 < 0 ) /*0x5f6925*/
          return result; /*0x5f6925*/
    }
    v10 = *(unsigned int **)(*(unsigned int *)(a1 + 4) + 4 * v5); /*0x5f6845*/
    v11 = a2[1] - v10[40]; /*0x5f6866*/
    v12 = a2[2] - v10[41]; /*0x5f6870*/
    v7 = Math::Sqrt((double)v12 * (double)v12 + (double)v11 * (double)v11 + (double)(*a2 - v10[39]) /*0x5f6895*/
    * (double)(*a2 - v10[39]));
    v8 = Math::RoundToInt(v7); /*0x5f689d*/
    LABEL_6:
    v6 = v8; /*0x5f691e*/
      goto LABEL_7; /*0x5f691e*/
  }
  return result; /*0x5f692b*/
}
}
// 0x64AD10
namespace gamemd {
long sub_64AD10(int a1, int a2)
{

  LRESULT v3; // edi
  LRESULT result; // eax
  int *v5; // edx
  const wchar_t *Class; // edi
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND DlgItem; // esi
  LRESULT v10; // edi
  int v11; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 0; /*0x64ad1b*/
  result = dword_A8BB40[a2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
LABEL_5:
    dword_A8BB60[8 * a2 + result] = a1; /*0x64ad41*/
    ++dword_A8BB40[a2]; /*0x64ad53*/
    result = *(unsigned int *)&dword_A8B238; /*0x64ad5a*/
    if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)((Network *)&stru_A8E960.nextScenario[96])->GetClass(a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = **(const wchar_t ***)&stru_A8D804.__pad_3D[567]; /*0x64ad84*/
      ((Network *)&stru_A8E960.nextScenario[96])->GetClass(a2); /*0x64ad8c*/
      Debug::Log(); /*0x64ad98*/
      v11 = ((Network *)&stru_A8E960.nextScenario[96])->GetClass(a2); /*0x64adb2*/
      StringCSF = GetStringCSF(aTxtReconnectKi, 0, g_Str_File_Queue_CPP, 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = (HWND)Dialog::GetCurrent(); /*0x64add1*/
      DlgItem = GetDlgItem(Current, 1617); /*0x64ade2*/
      DrawDialogText(-1, Buffer, DlgItem); /*0x64adec*/
      v10 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x64ae03*/
      if ( v10 > 50 ) /*0x64ae08*/
      {
        SendMessageA(DlgItem, 0x182u, 0, 0); /*0x64ae14*/
        --v10; /*0x64ae16*/
      }
      return SendMessageA(DlgItem, 0x197u, v10 - 1, 0); /*0x64ae21*/
    }
  }
  else
  {
    v5 = &dword_A8BB60[8 * a2]; /*0x64ad2b*/
    while ( *v5 != a1 ) /*0x64ad33*/
    {
      ++v3; /*0x64ad39*/
      ++v5; /*0x64ad3a*/
      if ( v3 >= result ) /*0x64ad3f*/
        goto LABEL_5; /*0x64ad3f*/
    }
  }
  return result; /*0x64ae23*/

}
}
// 0x7B2730
namespace gamemd {
int sub_7B2730()
{
  return dword_B780A0; /*0x7b2735*/
}
}
// 0x53EDC0
namespace gamemd {
int Network::CopyAddress_Small(IPXManagerClass * aP1)
{

  char *v3; // ecx

  v3 = &this->u32_4; /*0x53edc4*/
  *(unsigned int *)aP1 = *(unsigned int *)v3; /*0x53edc9*/
  aP1->Initialized = *((unsigned short *)v3 + 2); /*0x53edcf*/
  return aP1; /*0x53edd3*/

}
} // namespace gamemd

// 0x53F0E0
namespace gamemd {
char * Network::FormatAddress(uint16_t *aP1, void *a2)
{

  unsigned int *p_Network_field_0x0; // edx
  int v3; // eax

  p_Network_field_0x0 = aP1; /*0x53f0e0*/
  if ( !aP1 ) /*0x53f0e9*/
    p_Network_field_0x0 = &this->__pad_000; /*0x53f0eb*/
  v3 = p_Network_field_0x0->u32_4; /*0x53f0f3*/
  if ( dword_828140 == 1 )
    sprintf(
      &DataGlobal_AA047C,
      "%02X %02X %02X %02X : %02X %02X %02X %02X %02X %02X",
      (unsigned __int8)*p_Network_field_0x0,
      BYTE1(*p_Network_field_0x0),
      (unsigned __int8)BYTE2(*p_Network_field_0x0),
      HIBYTE(*p_Network_field_0x0),
      (unsigned __int8)v3,
      (((v3) >> 8) & 0xFF),
      (((v3) >> 16) & 0xFF),
      HIBYTE(v3),
      (unsigned __int8)p_Network_field_0x0->u32_8,
      HIBYTE(p_Network_field_0x0->u32_8));
  else
    sprintf( /*0x53f1cf*/
      &DataGlobal_AA047C,
      "%d.%d.%d.%d ; %d",
      (unsigned __int8)v3,
      (((v3) >> 8) & 0xFF),
      (((v3) >> 16) & 0xFF),
      HIBYTE(v3),
      LOWORD(this->__pad_000));
  return &DataGlobal_AA047C; /*0x53f192*/

}
} // namespace gamemd

// 0x53F200
namespace gamemd {
short Network::SetPort(int16_t aP1)
{

  __int16 result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    LOWORD(this->__pad_000) = aP1; /*0x53f20e*/
    return aP1; /*0x53f209*/
  }
  return result; /*0x53f211*/

}
} // namespace gamemd

// 0x53F4F0
namespace gamemd {
int sub_53F4F0(short a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  (*((unsigned short *)&(dword_AA0568))) = a1; /*0x53f4f4*/
  dword_AA0548 = a2; /*0x53f4ff*/
  dword_AA055C = a3; /*0x53f509*/
  dword_AA0578 = a4; /*0x53f512*/
  dword_AA0530 = a5; /*0x53f51c*/
  dword_AA0508 = a6; /*0x53f522*/
  dword_AA056C = a7; /*0x53f527*/
  dword_AA05A4 = 1; /*0x53f52d*/
  return a6; /*0x53f537*/
}
} // namespace gamemd

// 0x541680
namespace gamemd {
char Network_Recv(IPXManagerClass * aP0, IPXManagerClass * aP1, int a3, int a4, IPXManagerClass * aP4)
{
  int v5; // edx
  int *v7; // ebx
  int16_t v8; // di
  int v9; // [esp+0h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-14h] BYREF
  uint16_t v11[6]; // [esp+10h] [ebp-Ch] BYREF

  if ( (byte_AA0674 & 1) == 0 ) /*0x54168a*/
  {
    byte_AA0674 |= 1u; /*0x541696*/
    dword_AA06B0 = htonl(0x7F000001u); /*0x5416a1*/
  }
  if ( dword_A8B238[0] != 4 || !byte_A8DBA0 || !unk_B052EC ) /*0x5416ca*/
    return 0; /*0x5416ca*/
  if ( aP0->u32_C == *(unsigned int *)&dword_841F3C ) /*0x5416e8*/
  {
      aP0->u32_C = aP4; /*0x5416f2*/
      aP0->u32_8 = a4->Initialized; /*0x541701*/
      ((uint16_t *)a4)->FormatAddress(0); /*0x541704*/
      Debug::Log(); /*0x54170f*/
      (*((unsigned short *)&(v5))) = dword_841F3C; /*0x541714*/
      (*(void (__thiscall **)(int, int, int, void *, int, unsigned int, int, int))(*(unsigned int *)dword_887628 + 12))( /*0x54173c*/
      dword_887628,
      aP1,
      a3,
      &unk_AA06AC,
      12,
      0,
      1,
      v5);
      return 1; /*0x541746*/
  }
  if ( !aP0->u32_C ) /*0x5416da*/
    return 0; /*0x54174c*/
  ((char *)(*(unsigned int *)dword_A8DA78 + 40))->CopyAddress_Small((int)&v9); /*0x54175e*/
  v7 = &aP0->u32_8; /*0x541766*/
  if ( v9 == *&aP0->u32_8 && (unsigned short)dword_A8E2B2 == aP0->u32_C ) /*0x54177e*/
  {
    Debug::Log(); /*0x541785*/
    return 0; /*0x541794*/
  }
  if ( !*v7 ) /*0x54179a*/
    return 0; /*0x54179a*/
  v8 = aP0->u32_C; /*0x54179d*/
  (v11)->InitInvalid(); /*0x5417a5*/
  v10 = *v7; /*0x5417b5*/
  Struct::Copy6Bytes((char *)v11, (int)&v10); /*0x5417b9*/
  ((Network *)(v11))->SetPort(v8); /*0x5417c3*/
  aP0->u32_C = 0; /*0x5417c8*/
  *v7 = 0; /*0x5417d4*/
  (v11)->FormatAddress(0); /*0x5417da*/
  Debug::Log(); /*0x5417e5*/
  (*(void (__thiscall **)(int, int, int, uint16_t *, int, unsigned int, int, int16_t))(*(unsigned int *)dword_887628 + 12))( /*0x54180b*/
    dword_887628,
    aP1,
    a3,
    v11,
    12,
    0,
    1,
    v8);
  return 1; /*0x541743*/
}
} // namespace gamemd

// 0x5B5E90
namespace gamemd {
int Network::SendSettingsRequest()
{

  HWND DlgItem; // eax
  int v3[62]; // [esp+0h] [ebp-FCh] BYREF
  __int16 v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem((HWND)this->__pad_000, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset(v3, 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return ((int *)&unk_A8EA70)->WriteBlock((int)v3, 250, 1); /*0x5b5edd*/

}
} // namespace gamemd

// 0x5BB580
namespace gamemd {
HKEY sub_5BB580(HKEY, const CHAR * a2, const char * a3)
{
  HKEY v3; // esi
  DWORD v4; // ebx
  CHAR *v5; // ebp
  HKEY RegistrySubKey; // edi
  int v7; // esi
  DWORD v9; // [esp-1Ch] [ebp-4Ch]
  LPBYTE lpData; // [esp+10h] [ebp-20h]
  DWORD cchName; // [esp+14h] [ebp-1Ch] BYREF
  DWORD cbData; // [esp+18h] [ebp-18h] BYREF
  LPCSTR lpValueName; // [esp+1Ch] [ebp-14h]
  DWORD Type; // [esp+20h] [ebp-10h] BYREF
  HKEY v15; // [esp+24h] [ebp-Ch]
  struct _FILETIME ftLastWriteTime; // [esp+28h] [ebp-8h] BYREF

  v3 = a1; /*0x5bb58c*/
  lpValueName = a2; /*0x5bb58e*/
  v15 = a1; /*0x5bb593*/
  v4 = 0; /*0x5bb597*/
  v5 = (CHAR *)operator new(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)operator new(0x100u); /*0x5bb5ad*/
  cbData = 256; /*0x5bb5b1*/
  while ( 1 ) /*0x5bb5c8*/
  {
    v9 = v4; /*0x5bb5c8*/
    cchName = 256; /*0x5bb5ca*/
    ++v4; /*0x5bb5d2*/
    if ( RegEnumKeyExA(v3, v9, v5, &cchName, 0, 0, 0, &ftLastWriteTime) ) /*0x5bb5d3*/
      break; /*0x5bb5d3*/
    RegistrySubKey = FindRegistrySubKey(v3, v5, 0); /*0x5bb5eb*/
    if ( RegistrySubKey ) /*0x5bb5ef*/
    {
      cbData = 256; /*0x5bb608*/
      if ( !RegQueryValueExA(RegistrySubKey, lpValueName, 0, &Type, lpData, &cbData) /*0x5bb654*/
        && Type == 1
        && !strcmp((const char *)lpData, a3) )
      {
        operator delete((v5)); /*0x5bb67d*/
        operator delete((lpData)); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        operator delete((v5)); /*0x5bb69c*/
        operator delete((lpData)); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  operator delete((v5)); /*0x5bb6bb*/
  operator delete((lpData)); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}
} // namespace gamemd

// 0x5BC3C0
namespace gamemd {
unsigned char sub_5BC3C0()
{
  uint8_t result = byte_ABF238; // al /*0x5bc3c0*/
  if ( byte_ABF238 ) /*0x5bc3c7*/
  {
    if ( !dword_ABF240 ) /*0x5bc3d0*/
      CreateDebugOutput(); /*0x5bc3d2*/
    byte_ABF23A = 1; /*0x5bc3df*/
    ShowWindow(dword_ABF240, 1); /*0x5bc3e6*/
    return (uint8_t)SetFocus(dword_ABF234); /*0x5bc3f3*/
  }
  return result; /*0x5bc3f9*/
}
} // namespace gamemd

// 0x5D90E0
namespace gamemd {
char Network::QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4)
{

  int QueueCount; // ebx
  unsigned __int16 *v5; // edx
  int v6; // esi
  int v7; // eax
  int result; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  __int16 v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy(v11, aWw); /*0x5d910e*/
  (*(void (**)(WinsockInterface *, int))(*(unsigned int *)dword_887628->__pad_0 + 116))(dword_887628, a2); /*0x5d9127*/
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = ((IPXManagerClass *)&stru_A8E960.nextScenario[96])->GetQueueCount(); /*0x5d9155*/
  ((Network *)aP0)->FormatAddress(0); /*0x5d9157*/
  Debug::Log(); /*0x5d9169*/
  LOWORD(v5) = *aP0; /*0x5d9175*/
  ((int *)&stru_A8E960.nextScenario[96])->SendMessage((int)&v10, 56, 0, (int)aP0, (int)v5, a3); /*0x5d918c*/
  Ticks = Timer::GetTicks(); /*0x5d919a*/
  while ( ((IPXManagerClass *)&stru_A8E960.nextScenario[96])->GetQueueCount() > QueueCount /*0x5d91ab*/
       || *(unsigned int *)&dword_887628->__pad_1C[20] )
  {
    v6 = 180; /*0x5d91c5*/
    if ( Ticks != -1 ) /*0x5d91cc*/
    {
      v7 = Timer::GetTicks() - Ticks; /*0x5d91d7*/
      if ( v7 >= 180 ) /*0x5d91dd*/
        break; /*0x5d91dd*/
      v6 = 180 - v7; /*0x5d91df*/
    }
    if ( !v6 ) /*0x5d91e3*/
      break; /*0x5d91e3*/
    ((IPXManagerClass *)&stru_A8E960.nextScenario[96])->ReceiveLoop(); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  result = (*(int (**)(WinsockInterface *, unsigned int))(*(unsigned int *)dword_887628->__pad_0 + 116))(dword_887628, 0); /*0x5d91f6*/
  (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5d9205*/
  return result; /*0x5d9203*/

}
} // namespace gamemd

// 0x5D9220
namespace gamemd {
short Network::WaitForPacket(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  int16_t v5; // si
  int16_t v7; // [esp+Eh] [ebp-1F6h] BYREF
  DWORD Ticks; // [esp+10h] [ebp-1F4h]
  int v9; // [esp+14h] [ebp-1F0h]
  int v10; // [esp+18h] [ebp-1ECh]
  int v11; // [esp+1Ch] [ebp-1E8h] BYREF
  unsigned char v12[8]; // [esp+20h] [ebp-1E4h] BYREF
  int v13; // [esp+28h] [ebp-1DCh]
  unsigned char v14[12]; // [esp+30h] [ebp-1D4h] BYREF
  unsigned int v15[11]; // [esp+3Ch] [ebp-1C8h] BYREF
  int v16; // [esp+6Bh] [ebp-199h]
  int v17; // [esp+71h] [ebp-193h]

  v2 = 0; /*0x5d922d*/
  (v14)->InitInvalid(); /*0x5d922f*/
  v3 = 60; /*0x5d9244*/
  Ticks = TimerGetTicks(); /*0x5d924b*/
  v10 = 60; /*0x5d924f*/
  if ( a2 ) /*0x5d9253*/
  {
    Ticks = TimerGetTicks(); /*0x5d925e*/
    v3 = a2; /*0x5d9266*/
    v9 = v13; /*0x5d9268*/
    v10 = a2; /*0x5d926c*/
  }
  while ( 1 ) /*0x5d9277*/
  {
    if ( Ticks != -1 ) /*0x5d927c*/
    {
      v4 = TimerGetTicks() - Ticks; /*0x5d9287*/
      if ( v4 >= v3 ) /*0x5d928d*/
        return 0; /*0x5d928d*/
      v3 -= v4; /*0x5d9293*/
    }
    if ( !v3 ) /*0x5d9297*/
      break; /*0x5d9297*/
    (unk_A8E9C0)->ReceiveLoop(); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= (unk_A8E9C0)->GetSpeed() ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( (v2)->SendPacketThunk(v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
        v5 = v16; /*0x5d9314*/
        Debug::Log( /*0x5d9322*/
        "Mangler is seeing packets from port %d as coming from port %d\n",
        (uint16_t)v17,
        (uint16_t)v16);
        (v2)->receiveData(); /*0x5d9330*/
        return v5; /*0x5d9341*/
    }
    v3 = v10; /*0x5d9306*/
    ++v2; /*0x5d930a*/
  }
  return 0; /*0x5d9338*/
}
} // namespace gamemd

// 0x5DA040
namespace gamemd {
int sub_5DA040(char a1)
{
  int result; // eax

  result = (a1 & 1) != 0; /*0x5da04b*/
  if ( (a1 & 2) != 0 ) /*0x5da053*/
    result += 2; /*0x5da055*/
  if ( (a1 & 4) != 0 ) /*0x5da05b*/
    result += 3; /*0x5da05d*/
  if ( (a1 & 8) != 0 ) /*0x5da063*/
    result += 10; /*0x5da065*/
  if ( (a1 & 0x10) != 0 ) /*0x5da06b*/
    ++result; /*0x5da06d*/
  if ( (a1 & 0x20) != 0 ) /*0x5da071*/
    result += 2; /*0x5da073*/
  return result; /*0x5da076*/
}
} // namespace gamemd

// 0x5DA6C0
namespace gamemd {
char sub_5DA6C0()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  unsigned char v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init((int)unk_A8E9C0) ) /*0x5da6c8*/
    return 0; /*0x5da6d1*/
  if ( dword_A8B238[0] != 4 ) /*0x5da6de*/
  {
    if ( dword_A8D5FC ) /*0x5da6e7*/
    {
      ((Network *)(&stru_A8D600))->CopyAddress(&v1, (int)v2); /*0x5da6f8*/
      ((ObjectClass *)unk_A8E9C0)->Network_Init_542FC0((int)&v1); /*0x5da707*/
    }
  }
  return 1; /*0x5da6d3*/
}
} // namespace gamemd

// 0x5E3630
namespace gamemd {
char sub_5E3630()
{
  char result; // al
  char *v2; // edi
  unsigned int v3; // kr08_4
  int v4; // edi
  int i; // esi
  ObjectClass *v6; // [esp+0h] [ebp-1D0h]
  int v7[113]; // [esp+8h] [ebp-1C8h] BYREF
  int16_t v8; // [esp+1CCh] [ebp-4h]
  char v9; // [esp+1CEh] [ebp-2h]

  if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x5e3640*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3666*/
    v8 = 0; /*0x5e3668*/
    v9 = 0; /*0x5e366a*/
    v7[0] = 40; /*0x5e3675*/
    v3 = strlen(unk_A8B380) + 1; /*0x5e367d*/
    v2 = &unk_A8B380[v3++]; /*0x5e367d*/
    result = v3 - 1; /*0x5e3683*/
    memcpy(&v7[1], &v2[1 - v3], v3 - 1); /*0x5e368c*/
    v4 = dword_A8DA84; /*0x5e3695*/
    for ( i = 1; i < v4; ++i ) /*0x5e36a2*/
    {
      (&unk_A8E9C0.Socket)->SendMessage((int)v7, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e36c6*/
      result = Event::Dispatch(); /*0x5e36cb*/
    }
  }
  else
  {
    result = *(unsigned char *)&dword_A8B238 - 4; /*0x5e3642*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e3643*/
      return Network_Create_7A2730(v6); /*0x5e3649*/
  }
  return result; /*0x5e364e*/
}
} // namespace gamemd

// 0x5E36E0
namespace gamemd {
void sub_5E36E0()
{
  dword_A8DAB0 = 1; /*0x5e36e5*/
  if ( ppv ) /*0x5e36ee*/
    UI_Setup_7A2750(); /*0x5e36f0*/
  else
    UI_Setup_5E2340(); /*0x5e36f5*/
}
} // namespace gamemd

// 0x5E3720
namespace gamemd {
int Network::SendOptionsGame(char * Source)
{
  int result; // eax
  int v2; // eax
  int i; // esi
  char *v4; // edi
  char *v5; // eax
  unsigned int v6[114]; // [esp+8h] [ebp-5C8h] BYREF
  char Destination[1024]; // [esp+1D0h] [ebp-400h] BYREF

  if ( ppv ) /*0x5e3731*/
  {
    strncpy(Destination, Source, 0x3FFu); /*0x5e3741*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, Destination); /*0x5e3759*/
  }
  else
  {
    memset(v6, 0, 455); /*0x5e3771*/
    v6[0] = 23; /*0x5e378a*/
    strcpy((char *)&v6[1], unk_A8B380); /*0x5e379f*/
    v2 = dword_A8B394; /*0x5e37b5*/
    strcpy((char *)&v6[11] + 3, Source); /*0x5e37c3*/
    *(unsigned int *)((char *)&v6[111] + 3) = v2; /*0x5e37d1*/
    *(unsigned int *)((char *)&v6[112] + 3) = (&word_A8D610)->Hash(); /*0x5e37dd*/
    result = dword_A8DA84; /*0x5e37e4*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e37f1*/
    {
      v4 = *(char **)(dword_A8DA78 + 4 * i); /*0x5e37f9*/
      v5 = ToWideStringChar(v4); /*0x5e37fe*/
      Debug::Log("Sending public game options to %s\n", v5); /*0x5e3809*/
      ((int)&unk_A8E9C0)->SendMessage((int)v6, 455, 1, (int)(v4 + 40), 0, 0); /*0x5e382a*/
      Event::Dispatch(); /*0x5e382f*/
      result = dword_A8DA84; /*0x5e3834*/
    }
  }
  return result; /*0x5e375c*/
}
} // namespace gamemd

// 0x5E8B60
namespace gamemd {
int Network::InitPlayerSlots()
{
  signed int v0; // edx
  int result; // eax

  if ( dword_A8B238 == 4 ) /*0x5e8b67*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8b72*/
      v0 = 6; /*0x5e8b82*/
    else
      v0 = 2; /*0x5e8b7b*/
  }
  else
  {
    v0 = 8; /*0x5e8b89*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b9f*/
  if ( v0 < 8 ) /*0x5e8ba4*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8bb9*/
  dword_A8DA8C = -1; /*0x5e8bc0*/
  result = (stru_A8B250)->processGameEvent(); /*0x5e8bca*/
  word_AC0D44 = 0; /*0x5e8bcf*/
  word_AC0B94 = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/
}
} // namespace gamemd

// 0x5E8D90
namespace gamemd {
void sub_5E8D90(int a1, LPARAM)
{
  *(&dword_A8DA90 + a1) = a2; /*0x5e8d90*/
}
} // namespace gamemd

// 0x5EFF70
namespace gamemd {
HWND Network::handleTimeout(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int result; // eax
  uint8_t v5; // [esp+10h] [ebp-4h]

  v5 = 1; /*0x5eff7e*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5effa4*/
    v5 = 0; /*0x5effad*/
  DlgItem = GetDlgItem((HWND)hDlg, 1619); /*0x5effbe*/
  if ( DlgItem ) /*0x5effcc*/
    EnableWindow(DlgItem, v5); /*0x5effd8*/
  v3 = GetDlgItem((HWND)hDlg, 1620); /*0x5effe0*/
  if ( v3 ) /*0x5effe4*/
    EnableWindow(v3, v5); /*0x5efff0*/
  result = (int)GetDlgItem((HWND)hDlg, 1621); /*0x5efff8*/
  if ( result ) /*0x5efffc*/
    return EnableWindow((HWND)result, v5); /*0x5f0006*/
  return result; /*0x5f0008*/
}
} // namespace gamemd

// 0x5F0040
namespace gamemd {
int Network::CleanupOnDisconnect()
{
  if ( (dword_A8D5F8 & 2) == 0 && dword_A8B238[0] == 1 ) /*0x5f0050*/
    NullModemClass::Negotiate((int)&unk_A8EA70); /*0x5f0057*/
  return ObjectClass::DetachAndFree(&unk_A8EA70);
}
} // namespace gamemd

// 0x5F6790
namespace gamemd {
int * sub_5F6790(int * a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  unsigned int *v7; // edx
  unsigned int *v8; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]

  v2 = *(unsigned int *)(a2 + 16); /*0x5f6796*/
  v4 = 0; /*0x5f679f*/
  v5 = 0; /*0x5f67a1*/
  v6 = 0; /*0x5f67a3*/
  v11 = v2; /*0x5f67ab*/
  if ( v2 - 1 >= 0 ) /*0x5f67af*/
  {
    v7 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * (v2 - 1)); /*0x5f67b4*/
    v10 = v2; /*0x5f67b8*/
    do /*0x5f67e0*/
    {
      v8 = (unsigned int *)*v7--; /*0x5f67bc*/
      v4 += v8[39]; /*0x5f67cb*/
      v5 += v8[40]; /*0x5f67d4*/
      v6 += v8[41]; /*0x5f67d9*/
      --v10; /*0x5f67dc*/
    }
    while ( v10 ); /*0x5f67e0*/
    v2 = v11; /*0x5f67e2*/
  }
  *a1 = v4 / v2; /*0x5f67fd*/
  a1[1] = v5 / v2; /*0x5f6801*/
  a1[2] = v6 / v2; /*0x5f6805*/
  return a1; /*0x5f67ff*/
}
} // namespace gamemd

// 0x623310
namespace gamemd {
bool Network_Start(HWND hWnd, LPARAM lParam)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem(hWnd, 1456); /*0x62331c*/
  SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62332b*/
  return UpdateWindow(hWnd); /*0x623338*/
}
} // namespace gamemd

// 0x646DF0
namespace gamemd {
DWORD sub_646DF0(int a1)
{
  DWORD result; // eax

  result = timeGetTime(); /*0x646df3*/
  dword_AFA36C[6 * a1] = result; /*0x646dfd*/
  return result; /*0x646dfc*/
}
} // namespace gamemd

// 0x64B410
namespace gamemd {
int sub_64B410(int a1, int * a2)
{
  int *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x64b419*/
  if ( *(unsigned int *)&dword_A8B238 == 1 || *(unsigned int *)&dword_A8B238 == 2 ) /*0x64b42a*/
  {
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 16))(a1) ) /*0x64b491*/
    {
      ++dword_A8DAB4; /*0x64b498*/
      if ( !Network_Process_5F0120(v7) ) /*0x64b49e*/
      {
        --dword_A8DAB4; /*0x64b4ae*/
        return 0; /*0x64b4b9*/
      }
      --dword_A8DAB4; /*0x64b4bb*/
    }
    return 1; /*0x64b4bb*/
  }
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 ) /*0x64b434*/
    return 1; /*0x64b4c1*/
  v4 = 0; /*0x64b43e*/
  v5 = 0x7FFFFFFF; /*0x64b442*/
  v8 = 0; /*0x64b447*/
  if ( (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 16))(a1) > 0 ) /*0x64b450*/
  {
    do /*0x64b46c*/
    {
      if ( *v2 < v5 ) /*0x64b457*/
      {
        v5 = *v2; /*0x64b459*/
        v8 = v4; /*0x64b45b*/
      }
      ++v4; /*0x64b463*/
      v2 += 6; /*0x64b464*/
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 16))(a1) ); /*0x64b46c*/
    v2 = a2; /*0x64b46e*/
  }
  KickNetworkPlayerNow(a1, v8, (int)v2, 1u); /*0x64b47b*/
  return 1; /*0x64b487*/
}
} // namespace gamemd

// 0x64D990
namespace gamemd {
void sub_64D990()
{
  int v1; // edx
  int grindingAnimHandle; // eax

  v1 = *(unsigned int *)&FootClass_Array.isCountedAsOwned_special; /*0x64d990*/
  if ( *(unsigned int *)&FootClass_Array.isCountedAsOwned_special ) /*0x64d999*/
  {
    grindingAnimHandle = FootClass_Array.grindingAnimHandle; /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (*((unsigned char *)&FootClass_Array.currentTargetThreatValues[1] + 111 * grindingAnimHandle + 1) & 1) == 0 /*0x64d9bd*/
        && *(int *)&((unsigned int *)&stru_A8EB00)[416] <= *(int *)((char *)&FootClass_Array.currentTargetThreatValues[1]
        + 111 * grindingAnimHandle
      + 3) )
      {
        break; /*0x64d9bd*/
      }
      if ( !v1 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      grindingAnimHandle = ((unsigned short)grindingAnimHandle + 1) & 0x3FFF; /*0x64d9c4*/
      --v1; /*0x64d9c9*/
      FootClass_Array.grindingAnimHandle = grindingAnimHandle; /*0x64d9ca*/
      *(unsigned int *)&FootClass_Array.isCountedAsOwned_special = v1; /*0x64d9cf*/
    }
    while ( v1 ); /*0x64d9d5*/
  }
}
} // namespace gamemd

// 0x64D9E0
namespace gamemd {
int sub_64D9E0()
{
  int result; // eax
  int v2; // edi
  int16_t grindingAnimHandle; // cx
  int v4; // esi
  int i; // esi
  int Buffer; // [esp+8h] [ebp-4h] BYREF

  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] || (result = *(unsigned int *)&dword_A8B238) == 0 ) /*0x64d9f4*/
  {
    v2 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( *(int *)&FootClass_Array.isCountedAsOwned_special > 0 ) /*0x64da0a*/
    {
      grindingAnimHandle = FootClass_Array.grindingAnimHandle; /*0x64da0c*/
      v4 = *(unsigned int *)&FootClass_Array.isCountedAsOwned_special; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] == *(int *)((char *)&FootClass_Array.currentTargetThreatValues[1] /*0x64da32*/
        + 111 * (grindingAnimHandle & 0x3FFF)
        + 3)
          && (*((unsigned char *)&FootClass_Array.currentTargetThreatValues[1] + 111 * (grindingAnimHandle & 0x3FFF) + 1) & 1) == 0 )
        {
          ++v2; /*0x64da34*/
        }
        ++grindingAnimHandle; /*0x64da35*/
        --v4; /*0x64da36*/
      }
      while ( v4 ); /*0x64da37*/
      Buffer = v2; /*0x64da39*/
    }
    (&dword_A8D58C)->Write(&Buffer, 4u); /*0x64da4a*/
    result = *(unsigned int *)&FootClass_Array.isCountedAsOwned_special; /*0x64da4f*/
    for ( i = 0; i < *(int *)&FootClass_Array.isCountedAsOwned_special; ++i ) /*0x64da59*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] == *(int *)((char *)&FootClass_Array.currentTargetThreatValues[1] /*0x64da85*/
      + 111
      * (((*((unsigned short *)&(FootClass_Array.grindingAnimHandle))) + (unsigned short)i) & 0x3FFF)
      + 3)
        && (*((unsigned char *)&FootClass_Array.currentTargetThreatValues[1]
      + 111 * (((*((unsigned short *)&(FootClass_Array.grindingAnimHandle))) + (unsigned short)i) & 0x3FFF)
      + 1)
      & 1) == 0 )
      {
        FileClass::Write( /*0x64da96*/
          &dword_A8D58C,
          (char *)&FootClass_Array.currentTargetThreatValues[1]
        + 111 * (((*((unsigned short *)&(FootClass_Array.grindingAnimHandle))) + (unsigned short)i) & 0x3FFF),
          0x6Fu);
        --Buffer; /*0x64da9b*/
      }
      result = *(unsigned int *)&FootClass_Array.isCountedAsOwned_special; /*0x64da9f*/
    }
  }
  return result; /*0x64daa9*/
}
} // namespace gamemd

// 0x652110
namespace gamemd {
char * sub_652110(int a1, int a2)
{
  char *result; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax

  result = *(char **)&dword_A8B238; /*0x652110*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x65211e*/
  {
    v4 = *(unsigned int *)(a1 + 24 * a2); /*0x652135*/
    v5 = a1 + 24 * a2; /*0x652138*/
    if ( byte_A8DBA0 ) /*0x652142*/
    {
      (*((unsigned short *)&(v6))) = Math::RoundToInt(-60.0 / ((double)(int)dword_A8B558 / (double)(unsigned int)dword_A8B554)); /*0x652168*/
      v7 = (dword_A8E2D4 >> 1) + (*(unsigned int *)(v5 + 16) >> 1) - v6 / 2; /*0x652183*/
    }
    else
    {
      v7 = (unsigned int)IPXManagerClass::CheckStatus(&unk_A8E9C0, a2) >> 1; /*0x652192*/
    }
    result = (char *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v7 * *(unsigned int *)&g_MissionQueueFrame.waypoints[282] / 0x3C - v4); /*0x6521af*/
    dword_A8DB7C[a2] = result; /*0x6521b2*/
  }
  else
  {
    dword_A8DB7C[a2] = 0; /*0x652120*/
  }
  return result; /*0x65212b*/
}
} // namespace gamemd

// 0x664390
namespace gamemd {
AbstractClass * * Network::handleDisconnect(IUnknown * aP1)
{

  int v3 = 0; // esi /*0x664395*/
  if ( (int)this->q010 <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((char *)(*((unsigned int *)this->u32_4 + v3) + 1), (char *)aP1) ) /*0x6643b5*/
  {
    if ( ++v3 >= (int)this->q010 ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(unsigned short *)(*((unsigned int *)this->u32_4 + v3) + 37); /*0x6643bf*/

}
}
// 0x6643E0
namespace gamemd {
int Network::checkTimeout(int a2)
{

  if ( a2 >= (int)this->q010 ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *((unsigned int *)this->u32_4 + a2) + 1; /*0x6643f1*/

}
}
// 0x68CAB0
namespace gamemd {
int Network_Assign(void * a1, int a2)
{
  int v2; // esi
  unsigned int *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( dword_B054E0 <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = dword_B054D4; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68cada*/
    v5 = dword_B054D4; /*0x68cadc*/
    if ( v6 && *(unsigned int *)(*((unsigned int *)dword_B054D4 + v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= dword_B054E0 ) /*0x68caf7*/
      return -1; /*0x68caf7*/
  }
  return v2; /*0x68caf9*/
}
} // namespace gamemd

// 0x6956D0
namespace gamemd {
bool Network::sendGameEvent(unsigned int *aP0, void *a2)
{

  HWND Dialog; // eax
  TechnoTypeClass *v4; // ecx
  bool v5; // zf
  int v7; // [esp+0h] [ebp-8h]

  this->u32_4 = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(unsigned int *)this = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return this->u32_4 == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, (LONG)this); /*0x6956f7*/
  NetworkDialog::InitModemSettings((NetworkDialog *)this, a2); /*0x695704*/
  (*(Dialog **)this)->Show(); /*0x69570c*/
  while ( this->u32_4 < 0 ) /*0x695716*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    LOBYTE(v4) = 0; /*0x695721*/
    ScreenSaver::Process(v4, v7); /*0x695723*/
  }
  (*(Dialog **)this)->Destroy(); /*0x695732*/
  v5 = this->u32_4 == 1; /*0x695737*/
  if ( this->u32_4 == 1 ) /*0x69573b*/
  {
    memcpy(a2, &this->q088, 0x70u); /*0x695749*/
    return this->u32_4 == 1; /*0x69574c*/
  }
  return v5; /*0x695750*/

}
} // namespace gamemd

// 0x6ABC40
namespace gamemd {
int sub_6ABC40()
{
  int result; // eax

  result = dword_A8B238[0]; /*0x6abc40*/
  if ( dword_A8B238[0] ) /*0x6abc47*/
    dword_A8EDA0 = 8; /*0x6abc49*/
  return result; /*0x6abc53*/
}
} // namespace gamemd

// 0x72CD60
namespace gamemd {
char sub_72CD60()
{
  char result = byte_B0FCE5; // al /*0x72cd60*/
  if ( !byte_B0FCE5 ) /*0x72cd67*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cd73*/
      dword_B0FAAC = LoadFileSHP(off_844D74, (bool *)&byte_B0FCE4); /*0x72cd85*/
    result = LoadPaletteSimple(off_844D78, &dword_B0FCE8, &dword_B0FCEC); /*0x72cd9a*/
    byte_B0FCE5 = 1; /*0x72cd9f*/
  }
  return result; /*0x72cda6*/
}
} // namespace gamemd

// 0x72CDB0
namespace gamemd {
void sub_72CDB0()
{
  void *v1; // esi

  if ( DataGlobal_B0FCE5 ) /*0x72cdba*/
  {
    if ( DataGlobal_B0FCE4 ) /*0x72cdc2*/
    {
      v1 = *(void **)&DataGlobal_B0FAAC; /*0x72cdc5*/
      if ( *(unsigned int *)&DataGlobal_B0FAAC ) /*0x72cdcd*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FAAC)->Destroy(); /*0x72cdd1*/
        operator delete((v1)); /*0x72cdd7*/
      }
      DataGlobal_B0FCE4 = 0; /*0x72cddf*/
    }
    *(unsigned int *)&DataGlobal_B0FAAC = 0; /*0x72cdeb*/
    if ( *(unsigned int *)&DataGlobal_B0FCE8 ) /*0x72cdf3*/
    {
      operator delete((*(void **)&DataGlobal_B0FCE8)); /*0x72cdf6*/
      *(unsigned int *)&DataGlobal_B0FCE8 = 0; /*0x72cdfe*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FCEC ) /*0x72ce0c*/
    {
      (***(void (__thiscall ****)(unsigned int, int))&DataGlobal_B0FCEC)( /*0x72ce12*/
        *(unsigned int *)&DataGlobal_B0FCEC,
        1);
      *(unsigned int *)&DataGlobal_B0FCEC = 0; /*0x72ce14*/
    }
  }
  DataGlobal_B0FCE5 = 0; /*0x72ce1a*/
}
} // namespace gamemd

// 0x74FD20
namespace gamemd {
int ((Network *)unsigned int a1)->GetMaxPacketSize()
{
  int v1; // ecx
  unsigned int *v2; // eax

  v1 = 2; /*0x74fd24*/
  v2 = (unsigned int *)&unk_846150; /*0x74fd29*/
  while ( a1 < *v2 ) /*0x74fd30*/
  {
    v2 -= 2; /*0x74fd32*/
    --v1; /*0x74fd35*/
    if ( (int)v2 < (int)&dword_846140 ) /*0x74fd3b*/
      return dword_846154; /*0x74fd42*/
  }
  return dword_846144[2 * v1]; /*0x74fd42*/
}
} // namespace gamemd

// 0x767310
namespace gamemd {
char sub_767310(int a1)
{
  return 0; /*0x767312*/
}
} // namespace gamemd

// 0x778180
namespace gamemd {
HIMC sub_778180()
{
  HIMC result = dword_B7355C; // eax /*0x778180*/
  if ( dword_B7355C ) /*0x778187*/
    return ImmAssociateContext(g_hWnd, dword_B7355C); /*0x778190*/
  return result; /*0x778195*/
}
} // namespace gamemd

// 0x77D940
namespace gamemd {
bool Network::IsMultiplayerActive()
{
  if ( dword_A8B238 != 4 ) /*0x77d948*/
    return 0; /*0x77d94a*/
  return dword_B76B24 || (dword_B76B30 & 0x100) != 0; /*0x77d94d*/
}
} // namespace gamemd

// 0x77D970
namespace gamemd {
char Network::IsLobbyFeature()
{
  if ( dword_A8B238 == 4 ) /*0x77d977*/
    return (((unsigned char *)&(dword_B76B30))[1]) & 1; /*0x77d984*/
  else
    return 0; /*0x77d979*/
}
} // namespace gamemd

// 0x796FC0
namespace gamemd {
int sub_796FC0()
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = operator new(0x85u); /*0x796fca*/
  v2 = v1; /*0x796fcf*/
  if ( v1 ) /*0x796fd6*/
    ((Waypoint *)(v1 + 40))->InitInvalid(); /*0x796fdb*/
  else
    v2 = 0; /*0x796fe2*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aPotatotoo, -1); /*0x796fed*/
  v2->u32_7B = -1; /*0x796ff7*/
  v2->u32_4B = 1; /*0x796ffe*/
  v2->u32_53 = 2; /*0x797005*/
  v6 = 0; /*0x79701d*/
  v9 = 0; /*0x797025*/
  v8 = 0; /*0x79702a*/
  v7 = -95419894; /*0x797039*/
  (&v2->__pad_028)->Assign(&v6, (int)&v7, 0); /*0x79703e*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x79707a*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(uint8_t (__thiscall **)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x797087*/
    dword_A8DA78[v3] = v2; /*0x797096*/
  }
  v4 = dword_A8B54C; /*0x797099*/
  *((unsigned int *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x79709e*/
  dword_A8B54C = v4 + 1; /*0x7970aa*/
  g_NetworkRematchObject = v2->__pad_028; /*0x7970b1*/
  result = *&v2->q02C; /*0x7970b7*/
  DataGlobal_A8BB20 = (void *)result; /*0x7970ba*/
  DataGlobal_A8BB24 = *(void **)(v2 + 48); /*0x7970c3*/
  return result; /*0x7970c2*/
}
} // namespace gamemd

// 0x7982A0
namespace gamemd {
void Network_Delete(int a1, int a2, SessionClass * aP2)
{
  int v3; // edi
  void **v4; // esi

  v3 = a1; /*0x7982a6*/
  if ( a1 > 0 ) /*0x7982ac*/
  {
    v4 = aP2; /*0x7982af*/
    do /*0x7982bc*/
    {
      DeleteAndZero(v4++); /*0x7982b3*/
      --v3; /*0x7982bb*/
    }
    while ( v3 ); /*0x7982bc*/
  }
  operator delete((aP2)); /*0x7982c0*/
}
} // namespace gamemd
