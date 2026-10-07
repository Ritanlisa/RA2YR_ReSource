// E4 materialized pending bodies (auto-generated from full_export v3)
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
#include "e4/classes/HashTable_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/SessionClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MessageListClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/NetworkID_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RawFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aPortbase[];  // data: 0x826438 truth(IDA G42.57w9)
extern char aPortpool[];  // data: 0x826420 truth(IDA G42.57w9)
extern unsigned int aAboutToInitial;  // data: 0x826450 truth(IDA G42.57w9)


// 0x4311C0
namespace gamemd {
int Network::SendBeaconDelete(int a2, int a3)
{

  int result; // eax
  int v5; // edi
  Network *v6; // esi
  int v7; // edx
  int *p_Network_field_0x0; // ecx
  int v9; // esi
  int *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v13; // [esp+13h] [ebp-1DDh]
  int v14; // [esp+14h] [ebp-1DCh]
  int v15[4]; // [esp+18h] [ebp-1D8h] BYREF
  int v16; // [esp+28h] [ebp-1C8h] BYREF
  char v17[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  result = (int)this->q060; /*0x4311cc*/
  if ( result ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v13 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      p_Network_field_0x0 = (int *)(&v6->Network_field_0x0); /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        result = *p_Network_field_0x0; /*0x4311fe*/
        if ( *p_Network_field_0x0 ) /*0x4311fe*/
        {
          if ( (*(unsigned char *)(result + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++p_Network_field_0x0; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 = (Network *)((char *)v6 + 12); /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return result; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *p_Network_field_0x0; /*0x431265*/
    }
    else
    {
      v13 = 0; /*0x431224*/
      result = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = *((int *)&this->q000 + result); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      result = *(unsigned int *)(v9 + 272); /*0x43123d*/
      v14 = result; /*0x431243*/
      if ( (void *)result == dword_A83D4C->Object_field_0x30 || !v13 ) /*0x431252*/
      {
        if ( (*(unsigned char *)(v9 + 12) & 1) != 0 /*0x4312a6*/
          && (uint8_t)((HouseClass *)((HouseClass *)dword_A83D4C))->IsAllied(result)
          && (uint8_t)(((HouseClass *)(*((void **)((char *)&stru_A80220) + *(unsigned int *)(v9 + 272))))->IsAlliedWith( (HouseClass *)((void *)dword_A83D4C)))
          && !*(unsigned char *)(*((unsigned int *)((char *)&stru_A80220) + *(unsigned int *)(v9 + 272)) + 501) )
        {
v10 = (int *)(*(int (**)(unsigned int, int *))(**(unsigned int **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x4312bf*/ *(unsigned int *)&stru_87F5F0.__pad_E12[1538], (int *)(v15));


          BuildingPlacement::RenderBuildingPlacementShadow( /*0x4312e6*/
            (BuildingPlacement *)v9,
            *(int *)&stru_87F5F0.__pad_E12[1538],
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z((void *)v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        result = (int)(unsigned int *)this + 12 * v14; /*0x4312fd*/
        while ( v9 != *(unsigned int *)result ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          result += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return result; /*0x43130c*/
        }
        *((int *)&this->q000 + 2 * v14 + v11 + v14) = 0; /*0x431322*/
        --*(unsigned int *)&this->q060; /*0x43132e*/
        result = *(unsigned int *)&dword_A8B238; /*0x431331*/
        if ( *(unsigned int *)&dword_A8B238 ) /*0x431338*/
        {
          if ( *(unsigned int *)&dword_A8B238 != 5 ) /*0x431341*/
          {
            result = (int)dword_A83D4C; /*0x431347*/
            if ( (void *)v14 == dword_A83D4C->Object_field_0x30 ) /*0x43134f*/
            {
              LOBYTE(result) = v13; /*0x431355*/
              if ( v13 ) /*0x43135b*/
              {
                v16 = 33; /*0x431367*/
                strcpy( (char *)(v17), ToWideStringChar((IUnknown *)((char *)*dword_A8DA78))); /*0x431390*/
                result = dword_A8DA84; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v17[56] = v14; /*0x4313a9*/
                for ( v17[55] = v11; v12 < dword_A8DA84; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log("Sending beacon delete to %s\n"); /*0x4313c2 G57c1: IDA 0x4313c2 push offset aSendingBeaconD*/
                  ((Network *)&unk_A8E9C0)->SendMessage( (int)&v16, 61, 1, ((unsigned int *)dword_A8DA78)[v12] + 40, 0, 0); /*0x4313e9*/
                  result = dword_A8DA84; /*0x4313ee*/
                }
              }
            }
          }
        }
      }
      else
      {
        *(unsigned char *)(v9 + 12) &= 0xFCu; /*0x431254*/
      }
    }
  }
  return result; /*0x431258*/

}
}
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
    result = (int)this->q060; /*0x431476*/
    v17 = 1; /*0x431479*/
    if ( !result ) /*0x431480*/
      return result; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    p_Network_field_0x0 = (int *)(&v7->Network_field_0x0); /*0x43148e*/
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
        v7 = (Network *)((char *)v7 + 12); /*0x4314a9*/
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
    v10 = *((int *)&this->q000 + result); /*0x4314c1*/
  }
  if ( v10 ) /*0x4314c6*/
  {
    memset((void *)(v10 + 14), 0, 0x100u); /*0x4314e1*/
    if ( aP1 ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v10 + 14),(const wchar_t *)(aP1), 0x7Fu); /*0x4314e9*/
    result = *(unsigned int *)&dword_A8B238; /*0x4314f1*/
    if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x431501*/
    {
      if ( v17 && *(void **)(v10 + 272) == dword_A83D4C->Object_field_0x30 && a5 ) /*0x431533*/
      {
        v20 = 34; /*0x43153f*/
        strcpy( (char *)(v21), ToWideStringChar((IUnknown *)((char *)*dword_A8DA78))); /*0x431568*/
        if ( aP1 ) /*0x431573*/
        {
          wcsncpy( (wchar_t *)(Destination), (const wchar_t *)(aP1), 0x80u); /*0x431580*/
        }
        else
        {
          v11 = CharToWideString((unsigned char *)(&g_INI_DefaultBuffer)); /*0x431596*/
          wcscpy( (wchar_t *)(Destination), (const wchar_t *)v11); /*0x4315a1*/
        }
        v12 = -1; /*0x4315b2*/
        Object_field_0x30 = (char)dword_A83D4C->Object_field_0x30; /*0x4315b5*/
        v22 = -1; /*0x4315b8*/
        v23 = Object_field_0x30; /*0x4315bc*/
        result = 0; /*0x4315c0*/
        v14 = (int *)((int *)&this->q000 + 3 * Object_field_0x30); /*0x4315c8*/
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
          result = dword_A8DA84; /*0x4315e7*/
          for ( i = 1; i < dword_A8DA84; ++i ) /*0x4315f3*/
          {
            Debug::Log("Sending beacon text to %s\n"); /*0x431608 G57c1: IDA 0x431608 push offset aSendingBeaconT*/
            ((Network *)&unk_A8E9C0)->SendMessage( (int)&v20, 455, 1, ((unsigned int *)dword_A8DA78)[i] + 40, 0, 0); /*0x431632*/
            result = dword_A8DA84; /*0x431637*/
          }
        }
      }
      else
      {
        result = *(unsigned int *)(v10 + 272); /*0x43164e*/
        if ( (void *)result != dword_A83D4C->Object_field_0x30 && (*(unsigned char *)(v10 + 12) & 1) != 0 ) /*0x431663*/
        {
          result = ((HouseClass *)((HouseClass *)dword_A83D4C))->IsAllied(result); /*0x43166a*/
          if ( (unsigned char)result ) /*0x431671*/
          {
            result = (((HouseClass *)(*((void **)((char *)&stru_A80220) + *(unsigned int *)(v10 + 272))))->IsAlliedWith( (HouseClass *)((void *)dword_A83D4C))); /*0x431688*/
            if ( (unsigned char)result ) /*0x43168f*/
            {
              result = *((unsigned int *)((char *)&stru_A80220) + *(unsigned int *)(v10 + 272)); /*0x43169d*/
              if ( !*(unsigned char *)(result + 501) ) /*0x4316a0*/
              {
                v16 = *(unsigned int *)(v10 + 4); /*0x4316b4*/
                LOWORD(v19) = *(unsigned int *)v10 / 256; /*0x4316c3*/
                HIWORD(v19) = v16 / 256; /*0x4316db*/
                return CreateTriggerClassIfFarEnough(11, (uint8_t)(v16 >> 31), v19); /*0x4316e5*/
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
  uint16_t v14; // ax
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
  int16_t v30; // si
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
  uint16_t *v43; // [esp+20h] [ebp-1F0h]
  unsigned short *v44; // [esp+24h] [ebp-1ECh]
  int v45; // [esp+24h] [ebp-1ECh]
  int v46; // [esp+28h] [ebp-1E8h] BYREF
  int Ticks; // [esp+2Ch] [ebp-1E4h] BYREF
  int v48; // [esp+34h] [ebp-1DCh]
  char v49[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v50; // [esp+40h] [ebp-1D0h]
  int v51[22]; // [esp+48h] [ebp-1C8h] BYREF
  int16_t v52; // [esp+A0h] [ebp-170h]
  char v53; // [esp+A2h] [ebp-16Eh]

  if ( (byte_89E950 & 1) == 0 ) /*0x48d1fc*/
  {
    v1 = dword_81D4E4; /*0x48d1fe*/
    byte_89E950 |= 1u; /*0x48d20d*/
    dword_89E920 = TimerGetTicks(); /*0x48d218*/
    dword_89E928 = v1; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x48d23a*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = BYTE2(stru_A8D600.q00C); /*0x48d251*/
    if ( BYTE2(stru_A8D600.q00C) ) /*0x48d258*/
      return i; /*0x48d258*/
    v3 = dword_89E928; /*0x48d263*/
    if ( dword_89E920 != -1 ) /*0x48d26c*/
    {
      v4 = TimerGetTicks() - dword_89E920; /*0x48d278*/
      if ( v4 >= v3 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v3 -= v4; /*0x48d282*/
    }
    if ( !v3 || byte_A8E2A4 ) /*0x48d28f*/
    {
LABEL_10:
      if ( dword_A8DA84 ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x48d2ac*/
        if ( !((Network *)(&unk_A8E9C0))->GetQueueCount() ) /*0x48d2b6*/
        {
          memset( (void *)(v51), 0, sizeof(v51)); /*0x48d2cc*/
          v52 = 0; /*0x48d2ce*/
          v53 = 0; /*0x48d2d0*/
          v51[0] = 41; /*0x48d2d6*/
          CopyWideToChar((unsigned char *)(&v51[1]), (char *)*dword_A8DA78, -1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log("Sending NET_PORT_PROBE packets in Call_Back\n"); /*0x48d2f5 G57c1: IDA 0x48d2f5 push offset aSendingNetPort*/
          HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d2fa*/
          v6 = 1; /*0x48d304*/
          if ( dword_A8DA84 > 1 ) /*0x48d306*/
          {
            v44 = (unsigned short *)(&MEMORY[0xA8E2B4]); /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v5) = *v44; /*0x48d318*/
              v7 = *v44 == 0; /*0x48d31b*/
              v46 = v5; /*0x48d31e*/
              if ( !v7 ) /*0x48d322*/
              {
                ToWideStringChar( (IUnknown *)((char *)((unsigned int *)dword_A8DA78)[v6])); /*0x48d331*/
                Debug::Log("Sending to %s\n"); /*0x48d33c G57c1: IDA 0x48d33c push offset aSendingToS*/
                ((Network *)&unk_A8E9C0)->SendMessage( (int)v51, 91, 0, ((unsigned int *)dword_A8DA78)[v6] + 40, v46, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x48d375*/
                v42 = 0; /*0x48d37a*/
                v8 = (char **)dword_A8DA90; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = (char *)((unsigned int *)dword_A8DA78)[v6]; /*0x48d38d*/
                  v10 = ToWideStringChar((IUnknown *)(*v8)); /*0x48d399*/
                  v11 = ToWideStringChar((IUnknown *)(v9)); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v42; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x48d3cc*/
                if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d3d5*/
                  v12 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x48d3e7*/
                if ( v12 - (&dword_A8E284)[v42] > 2400 ) /*0x48d3fa*/
                {
                  ToWideStringChar( (IUnknown *)((char *)((unsigned int *)dword_A8DA78)[v6])); /*0x48d404*/
                  Debug::Log("No PORT_PROBE from %s in the last 40 seconds\n"); /*0x48d40f G57c1: IDA 0x48d40f push offset aNoPortProbeFro*/
                  v13 = ((unsigned int *)dword_A8DA78)[v6]; /*0x48d41d*/
                  v14 = *(unsigned short *)(v13 + 131); /*0x48d420*/
                  if ( v14 != (unsigned short)v46 && v14 >= 0x400u ) /*0x48d432*/
                  {
                    ToWideStringChar((IUnknown *)((char *)v13)); /*0x48d434*/
                    Debug::Log("Sending to %s on mangled port from pserver\n"); /*0x48d43f G57c1: IDA 0x48d43f push offset aSendingToSOnMa*/
                    v15 = ((unsigned int *)dword_A8DA78)[v6]; /*0x48d44d*/
                    LOWORD(v16) = *(unsigned short *)(v15 + 131); /*0x48d456*/
                    ((Network *)&unk_A8E9C0)->SendMessage( (int)v51, 91, 0, v15 + 40, v16, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d471*/
              ++v6; /*0x48d47a*/
              ++v44; /*0x48d480*/
            }
            while ( v6 < dword_A8DA84 ); /*0x48d484*/
          }
          Ticks = TimerGetTicks(); /*0x48d49d*/
          v48 = 120; /*0x48d4a1*/
          while ( ((Network *)(&unk_A8E9C0))->GetQueueCount() > 0 ) /*0x48d4b0*/
          {
            v17 = v48; /*0x48d4b6*/
            if ( Ticks != -1 ) /*0x48d4bd*/
            {
              v18 = TimerGetTicks() - Ticks; /*0x48d4c8*/
              if ( v18 >= v48 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v17 = v48 - v18; /*0x48d4d0*/
            }
            if ( v17 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x48d4e0*/
          }
          v19 = dword_81D4E4; /*0x48d4f3*/
          dword_89E920 = TimerGetTicks(); /*0x48d502*/
          dword_89E924 = v50; /*0x48d510*/
          dword_89E928 = v19; /*0x48d515*/
          byte_A8E2A4 = 0; /*0x48d51b*/
          ((Connection *)((Connection *)&unk_A8E9C0))->Close(); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = BYTE2(stru_A8D600.q00C); /*0x48d527*/
  if ( !BYTE2(stru_A8D600.q00C) ) /*0x48d52e*/
  {
    for ( i = Network::Send((int)( /*0x48d554*/)    for ( i = Network::Send( /*0x48d554*/
                (Network *)&unk_A8E9C0,
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810);
          i;
          i = Network::Send(
                (Network *)&unk_A8E9C0(int)(),
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810) )
    {
      if ( word_A8D810 == 0xAA04 ) /*0x48d563*/
      {
        v20 = *(unsigned int *)&stru_A8D600.__pad_34[4]; /*0x48d569*/
        switch ( *(unsigned int *)&stru_A8D600.__pad_34[4] ) /*0x48d583*/
        {
          case 0xA: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount( (void *)(&unk_A8E9C0)); ++j ) /*0x48d828*/
            {
              ConnectionSpeed = ((Network *)(&unk_A8E9C0))->GetConnectionSpeed(j); /*0x48d839*/
              PlayerByID = ((Network *)((Network *)&unk_A8E9C0))->FindPlayerByID(ConnectionSpeed); /*0x48d841*/
              if ( (uint8_t)((GUID *)(dword_A8D804))->Compare(PlayerByID) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect((wchar_t *)(ConnectionSpeed), 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 0xC: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.q00C) /*0x48d925*/
               || *(unsigned int *)&stru_A8D600.__pad_87[197] == WideString::Hash(  (wchar_t *)&stru_A8D600.q010))
              && (!byte_A8DBA0
               || ((uint8_t)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0[16],
                                      *(unsigned int *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0) )
            {
              v35 = CharToWideString( (unsigned char *)(&stru_A8D600.__pad_34[8])); /*0x48d935*/
              LOWORD(v36) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x48d94a*/
              v41 = v36; /*0x48d955*/
              PlayerColorScheme = SessionClass::GetPlayerColorScheme(*(unsigned int *)&stru_A8D600.__pad_87[193]); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                (wchar_t *)v35,
                *(int *)&stru_A8D600.__pad_87[193],
                (wchar_t *)&stru_A8D600.__pad_64[4],
                PlayerColorScheme,
                16454,
                v41,
                0);
              PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x48d995*/
              ((MapClass *)((int)((GScreenClass *)&stru_87F5F0.__pad_58[416])))->MarkForRedraw((int)((MapClass *)((int)((GScreenClass *)&stru_87F5F0.__pad_58[416]))), 2); /*0x48d9a1*/
              wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 0xF: /*0x48d583*/
            Debug::Log("Processing NET_PROGRESS_REPORT\n"); /*0x48da4a G57c1: IDA 0x48da4a push offset aProcessingNetP*/
            v38 = 0; /*0x48da57*/
            if ( dword_A8DA84 > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (uint8_t)((NetworkID *)((bool *)(((unsigned int *)dword_A8DA78)[v38] + 40)))->Compare((int)dword_A8D804) ) /*0x48da6e*/
                {
                  v39 = ToWideStringChar( (IUnknown *)((char *)((unsigned int *)dword_A8DA78)[v38])); /*0x48da85*/
                  if ( !_strcmpi(v39, &stru_A8D600.__pad_34[8]) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v38 >= dword_A8DA84 ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay( /*0x48dabd*/
                (int)&stru_AC4B30.__pad_EC[828],
                v38,
                (double)*(int *)&stru_A8D600.__pad_64[3],
                NAN);
            }
            break; /*0x48dac2*/
          case 0x10: /*0x48d583*/
          case 0x13: /*0x48d583*/
            break;
          case 0x1C: /*0x48d583*/
            Network::syncGameState(  (Network *)&stru_A8D600.__pad_34[4]); /*0x48d594*/
            break; /*0x48d599*/
          case 0x1D: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.q00C) /*0x48da2f*/
               || *(unsigned int *)&stru_A8D600.__pad_64[9] == WideString::Hash(  (wchar_t *)&stru_A8D600.q010))
              && (!byte_A8DBA0
               || ((uint8_t)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0[16],
                                      *(unsigned int *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0)
              && (dword_A8D110 && *(unsigned int *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(unsigned int *)&dword_A8B238 == 4) )
            {
              LOBYTE(v20) = stru_A8D600.__pad_64[4]; /*0x48da35*/
              PlayTauntClass(v20); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 0x20: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              &g_VisibilitySystem,
              stru_A8D600.__pad_73[1],
              *(int *)&stru_A8D600.__pad_64[3],
              *(int *)&stru_A8D600.__pad_64[7],
              *(int *)stru_A8D600.Network_field_0x6F,
              stru_A8D600.__pad_73[0]);
            break; /*0x48d7d0*/
          case 0x21: /*0x48d583*/
            ((Network *)((Network *)&g_VisibilitySystem))->SendBeaconDelete(stru_A8D600.__pad_73[1], stru_A8D600.__pad_73[0]); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 0x22: /*0x48d583*/
            Network::SendBeacon( /*0x48d810*/
              (Network *)&g_VisibilitySystem,
              (wchar_t *)&stru_A8D600.__pad_64[5],
              stru_A8D600.__pad_64[4],
              stru_A8D600.__pad_64[3],
              0);
            break; /*0x48d815*/
          case 0x27: /*0x48d583*/
            if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48d5a4*/
            {
              if ( byte_A8DBA0 ) /*0x48d5b1*/
              {
                v21 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount( (void *)(&unk_A8E9C0)) > 0 ) /*0x48d5c5*/
                {
                  while ( ((Network *)(&unk_A8E9C0))->GetConnectionSpeed(v21) != *(unsigned int *)&stru_A8D600.__pad_64[3] ) /*0x48d5de*/
                  {
                    if ( ++v21 >= Network::GetSendCount( (void *)(&unk_A8E9C0)) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  Class = (char *)((Network *)((Network *)&unk_A8E9C0))->GetClass((*(int *)&stru_A8D600.__pad_64[3])); /*0x48d5fa*/
                  ToWideStringChar((IUnknown *)(Class)); /*0x48d601*/
                  Debug::Log("Got NET_IM_STILL_HERE packet from %s.\n"); /*0x48d60c G57c1: IDA 0x48d60c push offset aGotNetImStillH*/
                  Network_Helper_646DF0(v21); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 0x29: /*0x48d583*/
            Debug::Log("Got NET_PORT_PROBE packet from %s - port = %d\n"); /*0x48d635 G57c1: IDA 0x48d635 push offset aGotNetPortProb*/
            v23 = 0; /*0x48d642*/
            if ( dword_A8DA84 > 0 ) /*0x48d646*/
            {
              v43 = (uint16_t *)(&dword_A8E2B2); /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (uint8_t)((NetworkID *)((bool *)(((unsigned int *)dword_A8DA78)[v23] + 40)))->Compare((int)dword_A8D804) ) /*0x48d665*/
                {
                  v24 = ToWideStringChar( (IUnknown *)((char *)((unsigned int *)dword_A8DA78)[v23])); /*0x48d680*/
                  if ( !_strcmpi(v24, &stru_A8D600.__pad_34[8]) ) /*0x48d686*/
                  {
                    v45 = 0; /*0x48d696*/
                    v25 = (char **)dword_A8DA90; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v26 = (char *)((unsigned int *)dword_A8DA78)[v23]; /*0x48d6a6*/
                      v27 = ToWideStringChar((IUnknown *)(*v25)); /*0x48d6b0*/
                      v28 = ToWideStringChar((IUnknown *)(v26)); /*0x48d6b2*/
                      if ( !_strcmpi(v27, v28) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v25; /*0x48d6c9*/
                      ++v45; /*0x48d6d3*/
                      if ( (int)v25 >= (int)&dword_A8DAB0 ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v29 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x48d6e0*/
                    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d6e9*/
                      v29 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x48d6fb*/
                    (&dword_A8E284)[v45] = v29; /*0x48d701*/
LABEL_56:
                    v30 = *(unsigned short *)dword_A8D804; /*0x48d708*/
                    if ( *(unsigned short *)dword_A8D804 != *(unsigned short *)(((unsigned int *)dword_A8DA78)[v23] + 40) || *(unsigned short *)dword_A8D804 != *v43 ) /*0x48d724*/
                    {
                      Debug::Log("Strange port number in PORT_PROBE packet\n"); /*0x48d72b G57c1: IDA 0x48d72b push offset aStrangePortNum*/
                      if ( !v30 ) /*0x48d73f*/
                        v30 = 1234; /*0x48d741*/
                      *v43 = v30; /*0x48d746*/
                      ((Network *)((Network *)(((unsigned int *)dword_A8DA78)[v23] + 40)))->SetPort(v30); /*0x48d756*/
                      Debug::Log("Adjusting port number for player %s from %d to %d\n"); /*0x48d76d G57c1: IDA 0x48d76d push offset aAdjustingPortN*/
                    }
                  }
                }
                ++v23; /*0x48d77e*/
                ++v43; /*0x48d784*/
              }
              while ( v23 < dword_A8DA84 ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 0x2F: /*0x48d583*/
            Debug::Log("Got NET_PORT_UNREACHABLE message from %s\n"); /*0x48d87c G57c1: IDA 0x48d87c push offset aGotNetPortUnre*/
            if ( *(unsigned int *)&dword_A8B238 == 4 && *(unsigned int *)&dword_887628) /*0x48d898*/
            {
              v34 = (char *)((Network *)&stru_B052C0[16])->processAcknowledgment( (IUnknown *)(&stru_A8D600.__pad_34[8])); /*0x48d8a8*/
              ((Network *)((Network *)v34))->GetAddress( (unsigned int *)(v49), (int)&Ticks, (unsigned short *)(&v46)); /*0x48d8be*/
(*(void (**)(unsigned int, int *, int))(**(unsigned int **)&dword_887628+ 120))( /*0x48d8d5*/ *(unsigned int *)&dword_887628, (int *)(&Ticks), v46);



            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&stru_A8D600.__pad_34[4], (int)dword_A8D804); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/

}
}
// 0x4C6C50
namespace gamemd {
void * Network::initConnection(int a2, unsigned int * a3, char a4)
{

  unsigned int *v5; // ecx
  char v6; // al
  int v8; // [esp+4h] [ebp-8h] BYREF

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    *((unsigned char *)this + 2) = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    *(unsigned int *)&this->q003 = dword_A8ED84; /*0x4c6ca6*/
    return (void *)this; /*0x4c6ca4*/
  }
  else
  {
    *((unsigned char *)this + 2) = a2; /*0x4c6c5e*/
    v5 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    ((Network *)(v5))->CopyAddress((unsigned int *)(&a2), (int)&v8); /*0x4c6c72*/
    v6 = a4; /*0x4c6c7b*/
    *((unsigned int *)this + 2) = v8; /*0x4c6c7f*/
    *((unsigned char *)this + 7) = v6; /*0x4c6c82*/
    *(unsigned int *)&this->q003 = dword_A8ED84; /*0x4c6c8d*/
    return (void *)this; /*0x4c6c8b*/
  }

}
}
// 0x4FC980
namespace gamemd {
int Network::SendOffer()
{

  int result; // eax
  int v2; // [esp+4h] [ebp-8h]

  LOBYTE(result) = LOBYTE(this->u32_1F6); /*0x4fc98b*/
  if ( !(*(unsigned char *)&this->u32_1F7) ) /*0x4fc980*/
  {
    if ( (unsigned char)result || (*(unsigned char *)&this->q1F8) ) /*0x4fc997*/
    {
      LOBYTE(result) = LOBYTE(this->u32_1F6); /*0x4fc9cd*/
    }
    else
    {
      LOBYTE(this->u32_1F6) = 1; /*0x4fc9a2*/
      *((unsigned int *)this + 166) = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4fc9b6*/
      result = v2; /*0x4fc9b8*/
      *((unsigned int *)this + 167) = v2; /*0x4fc9bc*/
      LOBYTE(result) = LOBYTE(this->u32_1F6); /*0x4fc9bf*/
      *((unsigned int *)this + 168) = 0; /*0x4fc9c5*/
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
      v0 = ((Network *)v2)->finalizeSession(); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    dword_887628 = v0; /*0x52f461*/
  }
  dword_A8B24C = 2; /*0x52f467*/
  (*(void (**)(int, unsigned int))(*(unsigned int *)v0 + 60))(v0, 0); /*0x52f474*/
  Network::SetConnectionParams(30, -1, 600, 1); /*0x52f489*/
  ((gamemd::Debug*)aAboutToInitial)->Log("About to initialise the network code\n"); /*0x52f493 G57w12: IDA push seq @ 0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (**)(int))(*(unsigned int *)&((IPXInterfaceClass *)dword_887628)->q_70))(dword_887628);  /*0x52f4ac*/
  dword_A8E2B2 = 0; /*0x52f4b3*/
  dword_A8E2B6 = 0; /*0x52f4be*/
  byte_A8E2B0 = 0; /*0x52f4c4*/
  dword_A8E2BA = 0; /*0x52f4ca*/
  byte_A8E2A4 = 0; /*0x52f4d0*/
  dword_A8E2BE = 0; /*0x52f4d6*/
  LOWORD(dword_A8DBBC) = 0; /*0x52f4e1*/
  word_A8E2A6 = 0; /*0x52f4e8*/
  dword_A8E2C4 = 0; /*0x52f4ef*/
  dword_A8E2CC = -1; /*0x52f4f5*/
  dword_A8E2D4 = 20; /*0x52f4fb*/
  dword_A8E2D8 = 0; /*0x52f505*/
  dword_A8E2DC = 0; /*0x52f50b*/
  dword_A8E2E0 = -1; /*0x52f511*/
  memset( (void *)(&unk_A8DC4C), 0, 0x200u); /*0x52f517*/
  memset( (void *)(&dword_A8DE4C), 0xFFu, 0x200u); /*0x52f527*/
  dword_A8E050 = 0; /*0x52f529*/
  dword_A8E054 = 0; /*0x52f534*/
  dword_A8E058 = 0; /*0x52f53c*/
  dword_A8E05C = 0; /*0x52f547*/
  memset( (void *)(&dword_A8E230), 0, 0x20u); /*0x52f54d*/
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
  ((RawFileClass *)aRa2mdIni)->Construct(); /*0x52f59c*/
  INIClass::SetInt(aMultiplayer, aPortbase, dword_A8E228, 0); /*0x52f5b7*/
  INIClass::SetInt(aMultiplayer, aPortpool, dword_ABFED8, 0); /*0x52f5d3*/
  ((INIClass *)v5)->WriteDigest( 0); /*0x52f5e3*/
  ((Network *)&unk_B052D0)->validatePacket(); /*0x52f5ed*/
  byte_A8D60E = 1; /*0x52f5f6*/
  ((RawFileClass *)(v5))->Dtor(); /*0x52f5fd*/
  return (AbstractClass * *)v4; /*0x52f606*/

}
}
// 0x53ED60
namespace gamemd {
int Network::GetAddress(unsigned int *a1, int aP2, unsigned short *a3)
{

  int16_t result; // ax

  *(unsigned int *)aP2 = *(unsigned int *)&this->q004; /*0x53ed6a*/
  *(unsigned short *)(aP2 + 4) = *(unsigned short *)&this->q008; /*0x53ed71*/
  result = dword_828140; /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a1 = *(unsigned int *)&this->q000; /*0x53ed85*/
  }
  else
  {
    result = *(unsigned int *)&this->q000; /*0x53ed8a*/
    *a3 = *(unsigned int *)&this->q000; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/

}
}
// 0x53EDA0
namespace gamemd {
void * Network::CopyAddress(unsigned int *a2, int a3)
{

  char *result; // eax

  result = (char *)&this->q004; /*0x53eda4*/
  *(unsigned int *)a3 = *(unsigned int *)&this->q004; /*0x53edaa*/
  LOWORD(result) = *(unsigned short *)&this->q008; /*0x53edad*/
  *(unsigned short *)(a3 + 4) = (unsigned short)result; /*0x53edb1*/
  *a2 = *(unsigned int *)&this->q000; /*0x53edbb*/
  return result; /*0x53edac*/

}
}
// 0x53EE00
namespace gamemd {
int Network::IsBroadcastAddr()
{

  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( LOBYTE(this->q000) == 0xFF /*0x53ee3b*/
      && BYTE1(this->q000) == 0xFF
      && BYTE2(this->q000) == 0xFF
      && HIBYTE(this->q000) == 0xFF
      && LOBYTE(this->q004) == 0xFF
      && BYTE1(this->q004) == 0xFF
      && BYTE2(this->q004) == 0xFF
      && HIBYTE(this->q004) == 0xFF
      && LOBYTE(this->q008) == 0xFF
      && BYTE1(this->q008) == 0xFF )
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( LOBYTE(this->q004) == 0xFF /*0x53ee5f*/
         && BYTE1(this->q004) == 0xFF
         && BYTE2(this->q004) == 0xFF
         && HIBYTE(this->q004) == 0xFF
         && LOBYTE(this->q008) == 0xFF
         && BYTE1(this->q008) == 0xFF )
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

  unsigned short *v4; // edi
  int v5; // ecx
  unsigned short *v6; // esi
  bool v7; // zf
  int v8; // ecx
  unsigned short *v9; // edi
  unsigned short *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return *((unsigned int *)this + 1) != *(unsigned int *)(aP1 + 4) || *(unsigned short *)this != *(unsigned short *)aP1; /*0x53ef8d*/
  if ( (*this || *((unsigned char *)this + 1) || *((unsigned char *)this + 2) || *((unsigned char *)this + 3)) /*0x53efc8*/
    && (*(unsigned char *)aP1 || *(unsigned char *)(aP1 + 1) || *(unsigned char *)(aP1 + 2) || *(unsigned char *)(aP1 + 3)) )
  {
    v8 = 3; /*0x53efe8*/
    v9 = (unsigned short *)(aP1 + 4); /*0x53efed*/
    v10 = (unsigned short *)((unsigned char *)this + 4); /*0x53eff0*/
    v11 = 1; /*0x53eff3*/
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
  v4 = (unsigned short *)(aP1 + 4); /*0x53efcf*/
  v5 = 3; /*0x53efd2*/
  v6 = (unsigned short *)((unsigned char *)this + 4); /*0x53efd7*/
  v7 = 1; /*0x53efda*/
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
  if ( *(unsigned int *)&dword_887628) /*0x53f5b8*/
    (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 32))(*(unsigned int *)&dword_887628); /*0x53f5bc*/
  dword_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}
}
// 0x53F830
namespace gamemd {
int sub_53F830(int a1, int a2)
{
  (*(void (**)(int, int, int, unsigned int))(*(unsigned int *)&((IPXInterfaceClass *)dword_887628)->q_40))(dword_887628, a1, a2, 0);  /*0x53f83f*/
  return 1; /*0x53f847*/
}
}
// 0x540C60
namespace gamemd {
AbstractClass * * Network::SetConnectionParams(int aP1, int a3, int a4, char aP4)
{

  int v6; // ecx
  IPXManagerClass *v7; // eax
  int Socket; // edx
  int result; // eax

  *((unsigned int *)this + 22) = aP1; /*0x540c75*/
  *((unsigned int *)this + 23) = a3; /*0x540c78*/
  *((unsigned int *)this + 24) = a4; /*0x540c7b*/
  Debug::Log("IPX Manager: RetryDelta = %d\n"); /*0x540c7e G57c1: IDA 0x540c7e push offset aIpxManagerRetr*/
  Debug::Log("MaxAhead is %d\n"); /*0x540c8e G57c1: IDA 0x540c8e push offset aMaxaheadIsD*/
  if ( aP4 ) /*0x540c9c*/
    (*(void ((gamemd::IPXManagerClass *)(**))(IPXManagerClass *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)&this->q000 + 56))( /*0x540cae*/
      this,
      *((unsigned int *)this + 22),
      *((unsigned int *)this + 23),
      *((unsigned int *)this + 24));
  v6 = 0; /*0x540cb4*/
  if ( *((int *)this + 17) > 0 ) /*0x540cb8*/
  {
    v7 = (IPXManagerClass *)((unsigned int *)this + 5); /*0x540cbb*/
    do /*0x540ce1*/
    {
      Socket = v7->Socket; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      v7 = (IPXManagerClass *)((char *)v7 + 4); /*0x540cc4*/
      *(unsigned int *)(Socket + 40) = *((unsigned int *)this + 22); /*0x540cc7*/
      *(unsigned int *)(*(unsigned int *)&v7[-1].Initialized + 44) = *((unsigned int *)this + 23); /*0x540cd0*/
      *(unsigned int *)(*(unsigned int *)&v7[-1].Initialized + 48) = *((unsigned int *)this + 24); /*0x540cd9*/
    }
    while ( v6 < *((unsigned int *)this + 17) ); /*0x540ce1*/
  }
  result = *((unsigned int *)this + 20); /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    *(unsigned int *)(result + 40) = *((unsigned int *)this + 22); /*0x540cee*/
    result = *((unsigned int *)this + 23); /*0x540cf4*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 44) = result; /*0x540cf7*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 48) = *((unsigned int *)this + 24); /*0x540d00*/
  }
  return (AbstractClass * *)result; /*0x540d03*/

}
}
// 0x540F00
namespace gamemd {
int Network::sendData(AnimClass * aP1)
{

  int v3; // ecx
  int v4; // esi
  int i; // eax
  void (***v7)(unsigned int, int); // ecx
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // ecx
  int v11; // edx

  if ( !*((unsigned char *)this + 4) ) /*0x540f05*/
    return 0; /*0x540f05*/
  v3 = *((unsigned int *)this + 17); /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  v4 = 0; /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  for ( i = (int)((char *)this + 40); *(unsigned int *)(*(unsigned int *)i + 100)  !=  (unsigned int)(aP1); i += 4 ) /*0x540f1d*/
  {
    if ( ++v4 >= v3 ) /*0x540f2d*/
      return 0; /*0x540f2d*/
  }
  v7 = *(void (****)(unsigned int, int))((char *)this + 4 * v4 + 40); /*0x540f37*/
  if ( v7 ) /*0x540f41*/
    (**v7)((unsigned int)(v7), 1); /*0x540f47*/
  v8 = v4; /*0x540f4c*/
  if ( v4 < *((unsigned int *)this + 17) - 1 ) /*0x540f51*/
  {
    v9 = (unsigned int *)((char *)this + 4 * v4 + 40); /*0x540f53*/
    do /*0x540f64*/
    {
      ++v8; /*0x540f58*/
      *v9 = v9[1]; /*0x540f59*/
      ++v9; /*0x540f5e*/
    }
    while ( v8 < *((unsigned int *)this + 17) - 1 ); /*0x540f64*/
  }
  v10 = *((unsigned int *)this + 21); /*0x540f69*/
  v11 = *((unsigned int *)this + 17) - 1; /*0x540f6c*/
  *((unsigned int *)this + 17) = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    *((unsigned int *)this + 21) = 0; /*0x540f76*/
  return 1; /*0x540f2f*/

}
}
// 0x540F90
namespace gamemd {
int Network::GetSendCount()
{

  return *((unsigned int *)this + 17); /*0x540f93*/

}
}
// 0x540FA0
namespace gamemd {
int Network::GetConnectionSpeed(int aP1)
{

  if ( aP1 < 0 || aP1 >= *((unsigned int *)this + 17) ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(unsigned int *)(*((unsigned int *)this + aP1 + 10) + 100); /*0x540fb1*/

}
}
// 0x540FC0
namespace gamemd {
int Network::GetClass(int a2)
{

  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->q044; /*0x540fc2*/
  v3 = 0; /*0x540fc5*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  for ( i = (int *)&this->u32_28; *(unsigned int *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return ((int *)&this->u32_28)[v3] + 104; /*0x540fe2*/

}
}
// 0x541000
namespace gamemd {
int Network::FindPlayerByID(int aP1)
{

  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->q044; /*0x541002*/
  v3 = 0; /*0x541005*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  for ( i = (int *)&this->u32_28; *(unsigned int *)(*i + 100) != aP1; ++i ) /*0x541010*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return ((int *)&this->u32_28)[v3] + 76; /*0x541022*/

}
}
// 0x5410F0
namespace gamemd {
int Network::SendMessage(int a2, int a3, int a4, int a5, int a6, int a7)
{

  int v8; // edi
  int v9; // edi

  if ( !*((unsigned char *)this + 4) || !*((unsigned char *)this + 5) ) /*0x5410fa*/
    return 0; /*0x541169*/
  v8 = a4; /*0x541107*/
  if ( a4 && (!a5 || ((Network *)((unsigned char *)a5))->IsBroadcastAddr()) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  v9 = (*(int (**)(unsigned int, int, int, int, int, int, int))(*(unsigned int *)*((char *)this + 18) + 44))( /*0x54113e*/
         *((char *)this + 18),
         a2,
         a3,
         a5,
         v8,
         a6,
         a7);
  if ( !v9 ) /*0x541142*/
  {
    ++*((char *)this + 40); /*0x54114b*/
    Debug::Log("Send overflow %d\n"); /*0x541159 G57c1: IDA 0x541159 push offset g_Str_Trace_Send_overflow__d*/
  }
  return v9; /*0x541165*/

}
}
// 0x541260
namespace gamemd {
AbstractClass * * Network::SendToPlayer(int a2, int a3, int a4, wchar_t * String2, void *a5_1)
{

  int v6; // esi
  int v8; // ebx
  unsigned int *v9; // edx
  char v10; // al
  int v11; // esi
  int v12; // ebx
  int v13; // [esp+0h] [ebp-18h] BYREF
  unsigned int v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( dword_A8DA84 && !_wcsicmp(*(const wchar_t **)dword_A8DA78, String2) ) /*0x54127e*/
    return 0; /*0x54127e*/
  v6 = 1; /*0x54128f*/
  if ( dword_A8DA84 <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v6), String2) ) /*0x5412ad*/
  {
    if ( ++v6 >= dword_A8DA84 ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  v8 = a4; /*0x5412ca*/
  v9 = *(unsigned int **)(dword_A8DA78 + 4 * v6); /*0x5412ce*/
  LOWORD(v6) = *((unsigned short *)&dword_A8E2B2 + v6); /*0x5412d1*/
  v9 += 10; /*0x5412d9*/
  v14[0] = *v9; /*0x5412de*/
  v10 = *((unsigned char *)this + 4); /*0x5412e2*/
  v14[1] = v9[1]; /*0x5412e8*/
  v14[2] = v9[2]; /*0x5412f1*/
  if ( !v10 || !*((unsigned char *)this + 5) ) /*0x5412f7*/
    return 0; /*0x5412b9*/
  if ( a4 && (&v13 == (int *)-12 || ((Network *)(v14))->IsBroadcastAddr()) ) /*0x54130e*/
    v8 = 0; /*0x541317*/
v11 = (*(int (**)(unsigned int, int, int, unsigned int *, int, int, unsigned int))(**(unsigned int **)&this->q048 + 44))( /*0x541334*/ *((unsigned int *)this + 18), a2, a3, (unsigned int *)(v14), v8, v6, 0);







  if ( !v11 ) /*0x541338*/
  {
    v12 = *((unsigned int *)this + 40) + 1; /*0x541340*/
    *((unsigned int *)this + 40) = v12; /*0x541341*/
    Debug::Log("Send overflow %d\n", v12); /*0x54134f*/
  }
  return (AbstractClass * *)v11; /*0x5412b9*/

}
}
// 0x541370
namespace gamemd {
int Network::Send(int a2, int a3, int aP3, int a5)
{

  if ( LOBYTE(this->q004) && BYTE1(this->q004) ) /*0x541377*/
    return (*(int (**)(int, int, int, int, int))(*(unsigned int *)this->q048 + 52))( /*0x541397*/
             (int)this->q048,
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

  if ( *((unsigned char *)this + 4) && *((unsigned char *)this + 5) ) /*0x5413b7*/
    return (*(int (**)(unsigned int, int, int, int, int, int, int))(**(unsigned int **)&this->q048 + 56))( /*0x5413e1*/
             *((unsigned int *)this + 18),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 0; /*0x5413e7*/

}
}
// 0x5413F0
namespace gamemd {
int Network::receiveData(int a2)
{

  char result; // al

  result = *((unsigned char *)this + 4); /*0x5413f0*/
  if ( result ) /*0x5413f5*/
  {
    result = *((unsigned char *)this + 5); /*0x5413f7*/
    if ( result ) /*0x5413fc*/
      return (*(int (**)(unsigned int, int))(**(unsigned int **)&this->q048 + 60))(*((unsigned int *)this + 18), a2); /*0x541408*/
  }
  return result; /*0x54140b*/

}
}
// 0x541410
namespace gamemd {
int Network::SendPacket(int a2, int a3, unsigned char a4)
{

  int v5; // ecx
  int v6; // edi

  if ( !*((unsigned char *)this + 4) ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !*((unsigned char *)this + 5) ) /*0x54141a*/
    return 0; /*0x54141a*/
  v5 = *((char *)this + 19); /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  v6 = (*(int (**)(int, int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++*((char *)this + 40); /*0x541458*/
    Debug::Log("Send overflow %d\n"); /*0x541466 G57c1: IDA 0x541466 push offset g_Str_Trace_Send_overflow__d*/
  }
  return v6; /*0x541471*/

}
}
// 0x541480
namespace gamemd {
int Network::SendPacketThunk2(int a2, int a3, int a4, int a5)
{

  if ( LOBYTE(this->q004) && BYTE1(this->q004) ) /*0x541487*/
    return (*(int (**)(void *, int, int, int, int))(*(unsigned int *)this->q04C + 52))( /*0x5414a7*/
             this->q04C,
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
void * Network::ReceiveLoop()
{

  void *Network_field_0xC; // ebx
  void *v3; // edx
  int v4; // ecx
  int v5; // edi
  bool v6; // zf
  uint16_t *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  int16_t v12; // ax
  int16_t v13; // bp
  int v14; // edx
  int *v15; // ecx
  int *v16; // eax
  int PlayerName; // eax
  int v18; // ebp
  IPXManagerClass *v19; // ebx
  char *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *v23; // edx
  unsigned short *v24; // ecx
  char v25; // cl
  int v26; // ebp
  IPXManagerClass *v27; // edi
  char LinkedIndex; // al
  int v29; // eax
  int v30; // edi
  unsigned int *v31; // ecx
  int i; // edi
  int *v33; // ecx
  int *v34; // eax
  int *v35; // eax
  int *v36; // ecx
  int v37; // ecx
  int v38; // ebp
  int v39; // ecx
  int v40; // ecx
  IPXManagerClass *v41; // edi
  int result; // eax
  int16_t v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  Network *v45; // [esp+24h] [ebp-4C8h]
  int16_t v46[2]; // [esp+34h] [ebp-4B8h] BYREF
  Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

  *(unsigned char *)&v47[0].q010 = (unsigned char)((void *)1); /*0x541830*/
  ((Waypoint*)((Waypoint *)v47))->InitInvalid(); /*0x541838*/
  if ( *(unsigned int *)&dword_887628) /*0x541844*/
  {
    while ( 1 ) /*0x541864*/
    {
      *(unsigned int *)&v47[0].q014 = 1024; /*0x541864*/
      *(unsigned int *)&v47[0].q018 = 128; /*0x54186c*/
      *(unsigned int *)v46 = 0; /*0x541874*/
Network_field_0xC = (void *)(*(int (**)(unsigned int, char *, char *, char *, char *, int16_t *))(**(unsigned int **)&dword_887628+ 8))( /*0x541889*/ *(unsigned int *)&dword_887628, (char *)(&v47[0].q0B4), &v47[0].q014, &v47[0].q034, (char *)(&v47[0].q018), (int16_t *)(v46));






      v47[0].q00C = Network_field_0xC; /*0x54188d*/
      if ( !Network_field_0xC ) /*0x541891*/
        goto LABEL_92; /*0x541891*/
      v3 = *(void **)&v47[0].__pad_38; /*0x54189b*/
      *(unsigned int *)&v47[0].q000 = *(unsigned int *)&v47[0].q034; /*0x5418a6*/
      v4 = *((unsigned int *)this + 18); /*0x5418aa*/
      *((unsigned int *)this + 35) = (unsigned int)&v47[0].q0B4; /*0x5418ad*/
      v47[0].q004 = v3; /*0x5418b7*/
      v47[0].q008 = *(void **)&v47[0].u32_3C; /*0x5418bb*/
      if ( *(unsigned short *)&v47[0].q0B4 == *(unsigned short *)(v4 + 36) ) /*0x5418cb*/
      {
        if ( Network_Recv( /*0x5418ee*/
               (int)&v47[0].q0B4,
               (int)&v47[0].q0B4,
               (int)Network_field_0xC,
               (int)&v47[0].q034,
               v46[0]) )
        {
          goto LABEL_87; /*0x5418f5*/
        }
if ( (*(int (**)(unsigned int, char *, void *, Network *, unsigned int))(**((unsigned int **)this + 18) + 48))( /*0x541913*/ *((unsigned int *)this + 18), (char *)(&v47[0].q0B4), (void *)(Network_field_0xC), (Network *)(v47), *(unsigned int *)v46) )





        {
          if ( *(unsigned int *)&dword_A8B238 == 4 && byte_A8E2C8 ) /*0x541932*/
          {
            v5 = 0; /*0x54193d*/
            v6 = dword_A8DA84 == 0; /*0x54193f*/
            if ( dword_A8DA84 <= 0 ) /*0x541941*/
            {
LABEL_14:
              if ( !v6 ) /*0x541980*/
              {
                Debug::Log("NAT Alert - port number fiddling detected!\n"); /*0x54198b G57w11: IDA push seq @ 0x54198b*/
                if ( (unsigned int)Network_field_0xC >= 0x10 /*0x5419ad*/
                  && *(unsigned int *)&v47[0].__pad_B6 != 2
                  && (unsigned int)Network_field_0xC >= 0x3F )
                {
                  v8 = *(unsigned int *)(*((unsigned int *)this + 35) + 16); /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                  {
                    v9 = (const char *)(*((unsigned int *)this + 35) + 20); /*0x5419d3*/
                    *(unsigned int *)&v47[0].q01C = 0; /*0x5419d6*/
                    *(unsigned int *)&v47[0].q020 = 0; /*0x5419dc*/
                    *(unsigned int *)&v47[0].q024 = 0; /*0x5419e4*/
                    v47[0].u32_28 = 0; /*0x5419e9*/
                    *(unsigned int *)&v47[0].q02C = 0; /*0x5419ee*/
                    LOWORD(v47[0].u32_30) = 0; /*0x5419f2*/
                    strncpy( (char *)(&v47[0].q01C), (const char *)(v9), 0x14u); /*0x5419f7*/
                    v10 = 0; /*0x541a04*/
                    if ( dword_A8DA84 > 0 ) /*0x541a08*/
                    {
                      while ( 1 ) /*0x541a1b*/
                      {
                        v11 = ToWideStringChar( (IUnknown *)((char *)((unsigned int *)dword_A8DA78)[v10])); /*0x541a1b*/
                        if ( !_strcmpi(v11,(const char *)( &v47[0].q01C)) ) /*0x541a21*/
                          break; /*0x541a21*/
                        if ( ++v10 >= dword_A8DA84 ) /*0x541a35*/
                          goto LABEL_87; /*0x541a35*/
                      }
                      if ( !(uint8_t)((NetworkID *)((bool *)(((unsigned int *)dword_A8DA78)[v10] + 40)))->Compare((int)v47) /*0x541a67*/
                        || *(unsigned short *)(((unsigned int *)dword_A8DA78)[v10] + 40) != v46[0] )
                      {
                        Debug::Log("Player %s is having his port translated to %d\n"); /*0x541a7d G57w11: IDA push seq @ 0x541a7d +2 reg-vararg(s) omitted*/
                        v12 = v46[0]; /*0x541a82*/
                        v13 = *(&dword_A8E2B2 + v10); /*0x541a86*/
                        *(&dword_A8E2B2 + v10) = v46[0]; /*0x541a91*/
                        Network::reconnect( /*0x541aab*/
                          (Network *)&stru_B052C0[16],
                          *(unsigned int *)(((unsigned int *)dword_A8DA78)[v10] + 111),
                          v12);
(*(void (**)(unsigned int, Network *, int16_t))(**((unsigned int **)this + 18) + 64))( /*0x541abb*/ *((unsigned int *)this + 18), (Network *)(v47), v13);



                        v14 = ((unsigned int *)dword_A8DA78)[v10]; /*0x541ac7*/
                        LOWORD(v14) = *(unsigned short *)(v14 + 40); /*0x541acc*/
(*(void (**)(unsigned int, Network *, int))(**((unsigned int **)this + 18) + 64))( /*0x541ad6*/ *((unsigned int *)this + 18), (Network *)(v47), v14);



                        v15 = (int *)(((unsigned int *)dword_A8DA78)[v10] + 40); /*0x541ae5*/
                        *v15 = *(unsigned int *)&v47[0].q000; /*0x541ae8*/
                        v15[1] = (int)*(unsigned int *)&v47[0].q004; /*0x541aee*/
                        v15[2] = (int)*(unsigned int *)&v47[0].q008; /*0x541af5*/
                        ((Network *)((Network *)(((unsigned int *)dword_A8DA78)[v10] + 40)))->SetPort(v46[0]); /*0x541b09*/
                        NetworkManager::SetPlayerAddress( /*0x541b24*/
                          (NetworkManager *)&stru_B052C0[16],
                          *(unsigned int *)(((unsigned int *)dword_A8DA78)[v10] + 111),
                          (unsigned int *)(((unsigned int *)dword_A8DA78)[v10] + 40));
                        v16 = (int *)((&dword_A8DA90)[GameClass::FindPlayerName(v10)] + 40); /*0x541b3f*/
                        *v16 = *(unsigned int *)&v47[0].q000; /*0x541b42*/
                        v16[1] = (int)*(unsigned int *)&v47[0].q004; /*0x541b48*/
                        v16[2] = (int)*(unsigned int *)&v47[0].q008; /*0x541b4f*/
                        v43 = v46[0]; /*0x541b56*/
                        PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                        ((Network *)((Network *)((&dword_A8DA90)[PlayerName] + 40)))->SetPort(v43); /*0x541b6c*/
                        v18 = 0; /*0x541b74*/
                        if ( *((int *)this + 17) > 0 ) /*0x541b78*/
                        {
                          v19 = (IPXManagerClass *)((unsigned int *)this + 5); /*0x541b7a*/
                          while ( 1 ) /*0x541b87*/
                          {
                            v20 = ToWideStringChar( (IUnknown *)((char *)(v19->Socket + 104))); /*0x541b87*/
                            if ( !_strcmpi( v20, (const char *)(&v47[0].q01C) ) ) /*0x541b8d*/
                              break; /*0x541b8d*/
                            ++v18; /*0x541b9c*/
                            v19 = (IPXManagerClass *)((char *)v19 + 4); /*0x541b9d*/
                            if ( v18 >= *((unsigned int *)this + 17) ) /*0x541ba2*/
                              goto LABEL_33; /*0x541ba2*/
                          }
                          v21 = (int *)(*((unsigned int *)this + v18 + 10) + 76); /*0x541bae*/
                          *v21 = *(unsigned int *)&v47[0].q000; /*0x541bb1*/
                          v21[1] = (int)*(unsigned int *)&v47[0].q004; /*0x541bb7*/
                          v21[2] = (int)*(unsigned int *)&v47[0].q008; /*0x541bbe*/
                          ((Network *)((Network *)(*((unsigned int *)this + v18 + 10) + 76)))->SetPort(v46[0]); /*0x541bcd*/
                          ((Network *)((Network *)(*((unsigned int *)this + v18 + 10) + 76)))->FormatAddress(0); /*0x541bdb*/
                          Debug::Log("Set address for connection %d to %s\n"); /*0x541be7 G57w11: IDA push seq @ 0x541be7 +2 reg-vararg(s) omitted*/
LABEL_33:
                          Network_field_0xC = v47[0].q00C; /*0x541bef*/
                        }
                        if ( !BYTE2(stru_A8D600.q00C) ) /*0x541bfa*/
                        {
                          if ( *((unsigned int *)this + 17) ) /*0x541c00*/
                          {
                            v22 = ((unsigned int *)dword_A8DA78)[v10]; /*0x541c16*/
                            if ( ((char *)&stru_A80220) > *(unsigned int *)(v22 + 111) ) /*0x541c1c*/
                            {
                              if ( SessionClass::IsValidHouse( /*0x541c36*/
                                     (int)&dword_A8B238,
                                     *((void **)((char *)&stru_A80220) + *(unsigned int *)(v22 + 111))) )
                              {
                                ((Network *)(v47))->FormatAddress(0); /*0x541c49*/
                                ((Network *)((Network *)(*((unsigned int *)this + 20) + 76)))->FormatAddress(0); /*0x541c57*/
                                Debug::Log("Frame %d, Router apparently changed address from %s to %s\n"); /*0x541c69 G57w11: IDA push seq @ 0x541c69 +2 reg-vararg(s) omitted*/
                                v23 = (int *)(*((unsigned int *)this + 20) + 76); /*0x541c75*/
                                *v23 = *(unsigned int *)&v47[0].q000; /*0x541c7b*/
                                v23[1] = (int)*(unsigned int *)&v47[0].q004; /*0x541c81*/
                                v23[2] = (int)*(unsigned int *)&v47[0].q008; /*0x541c88*/
                                ((Network *)((Network *)(*((unsigned int *)this + 20) + 76)))->SetPort(v46[0]); /*0x541c96*/
                                stru_A8BB1C.q000 = *(unsigned int *)&v47[0].q000; /*0x541ca7*/
                                stru_A8BB1C.q008 = *(unsigned int *)&v47[0].q008; /*0x541cb1*/
                                stru_A8BB1C.q004 = *(unsigned int *)&v47[0].q004; /*0x541cbd*/
                                ((Network *)(&stru_A8BB1C))->SetPort(v46[0]); /*0x541cc2*/
                                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x541cd3*/
                                dword_A8DBAC = *(unsigned int *)&v47[0].q008; /*0x541ce8*/
                                ((Network *)((Network *)&qword_A8DBA4))->SetPort(v46[0]); /*0x541cee*/
                                dword_A8DBBC = v46[0]; /*0x541cf8*/
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
              v7 = &dword_A8E2B2; /*0x541943*/
              while ( !(uint8_t)((NetworkID *)((bool *)(((unsigned int *)dword_A8DA78)[v5] + 40)))->Compare((int)v47) || *v7 != v46[0] ) /*0x54196b*/
              {
                ++v5; /*0x541976*/
                ++v7; /*0x541977*/
                if ( v5 >= dword_A8DA84 ) /*0x54197c*/
                {
                  v6 = dword_A8DA84 == 0; /*0x54197e*/
                  goto LABEL_14; /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87; /*0x54196b*/
        }
        ++*((unsigned int *)this + 41); /*0x54216c*/
        goto LABEL_91; /*0x542178*/
      }
      v24 = (unsigned short *)*((unsigned int *)this + 19); /*0x541d04*/
      if ( *(unsigned short *)&v47[0].q0B4 == v24[18] ) /*0x541d0b*/
      {
        if ( !byte_A8DBA0 /*0x541d2c*/
|| (*(int (**)(unsigned short *, char *, void *, Network *, unsigned int))(*(unsigned int *)v24 + 48))( (unsigned short *)(v24), (char *)(&v47[0].q0B4), (void *)(Network_field_0xC), (Network *)(v47), 0) )





        {
          goto LABEL_87; /*0x541d31*/
        }
        ++*((unsigned int *)this + 41); /*0x542183*/
LABEL_91:
        Debug::Log("RouterChannel recive buffer overflow %d\n"); /*0x54218f G57w11: IDA push seq @ 0x54218f +1 reg-vararg(s) omitted*/
        goto LABEL_92; /*0x54218f*/
      }
      if ( *(unsigned short *)&v47[0].q0B4 != *((unsigned short *)this + 16) /*0x541d63*/
        || Network_Recv(
             (int)&v47[0].q0B4,
             (int)&v47[0].q0B4,
             (int)Network_field_0xC,
             (int)&v47[0].q034,
             v46[0]) )
      {
        goto LABEL_87; /*0x541d6a*/
      }
      v25 = *(unsigned int *)&v47[0].__pad_B6; /*0x541d75*/
      if ( byte_A8DBA0 && BYTE1(v47[0].__pad_B6) == 0xFF ) /*0x541d87*/
      {
        if ( *(unsigned int *)&v47[0].__pad_B6 == 2 ) /*0x541d90*/
        {
(*(void (**)(unsigned int, char *, void *))(**((unsigned int **)this + 20) + 12))( /*0x541da0*/ *((unsigned int *)this + 20), (char *)(&v47[0].q0B4), (void *)(Network_field_0xC));



        }
        else if ( *((int *)this + 17) > 0 ) /*0x541dad*/
        {
          ((Network *)(v47))->FormatAddress(0); /*0x541e46*/
          Debug::Log("Adding DATA_ACK packet %d from %s ; %d to multicast queue\n"); /*0x541e59 G57w11: IDA push seq @ 0x541e59 +2 reg-vararg(s) omitted*/
if ( !(*(int (**)(unsigned int, char *, void *))(**((unsigned int **)this + 10) + 12))( /*0x541e6f*/ *((unsigned int *)this + 10), (char *)(&v47[0].q0B4), (void *)(Network_field_0xC)) )



          {
            Network_field_0xC = (void *)(0); /*0x541e80*/
            ++*((unsigned int *)this + 41); /*0x541e85*/
            goto LABEL_74; /*0x541e91*/
          }
        }
        goto LABEL_75; /*0x541da3*/
      }
      v26 = 0; /*0x541e99*/
      if ( *((int *)this + 17) <= 0 ) /*0x541e9d*/
      {
LABEL_60:
        if ( *(unsigned int *)&dword_A8B238 == 4 /*0x541f4a*/
          && !dword_A8E7AC
          && *(int *)((char *)&stru_A8EB00 + 416) > 8
          && !byte_A8DBA0
          && (unsigned int)Network_field_0xC > 0xF
          && v25 == 1
          && *(unsigned int *)&v47[0].__pad_C2 == 25 )
        {
          v29 = 1; /*0x541f56*/
          v30 = *(signed char *)&v47[0].q0C4; /*0x541f5b*/
          if ( dword_A8DA84 > 1 ) /*0x541f65*/
          {
            v31 = dword_A8DA78 + 1; /*0x541f71*/
            while ( *(unsigned int *)(*v31 + 111) != *(signed char *)&v47[0].q0C4 ) /*0x541f79*/
            {
              ++v29; /*0x541f7f*/
              ++v31; /*0x541f80*/
              if ( v29 >= dword_A8DA84 ) /*0x541f85*/
                goto LABEL_86; /*0x541f85*/
            }
            v35 = (int *)(((unsigned int *)dword_A8DA78)[v29] + 40); /*0x542113*/
            v44 = *(signed char *)&v47[0].q0C4; /*0x542116*/
            *v35 = *(unsigned int *)&v47[0].q000; /*0x542117*/
            v35[1] = (int)*(unsigned int *)&v47[0].q004; /*0x54211d*/
            v35[2] = (int)*(unsigned int *)&v47[0].q008; /*0x542124*/
            if ( (*(int ((gamemd::IPXManagerClass *)(**))(IPXManagerClass *, int))(*(unsigned int *)&this->q000 + 24))(this, v44) != -1 ) /*0x542131*/
            {
              v36 = (int *)(*((unsigned int *)this /*0x542143*/
                            + (*(int (**)(IPXManagerClass *, int))(*(unsigned int *)&this->q000 + 24))((IPXManagerClass *)(this), v30)
                            + 10)
                          + 76);
              *v36 = *(unsigned int *)&v47[0].q000; /*0x542146*/
              v36[1] = (int)*(unsigned int *)&v47[0].q004; /*0x54214c*/
              v36[2] = (int)*(unsigned int *)&v47[0].q008; /*0x542153*/
            }
LABEL_86:
            Network_field_0xC = v47[0].q00C; /*0x542156*/
          }
        }
        goto LABEL_87; /*0x542156*/
      }
      v27 = (IPXManagerClass *)((unsigned int *)this + 5); /*0x541e9f*/
      while ( byte_A8DBA0 ) /*0x541ea9*/
      {
        LinkedIndex = ((Factory *)((Factory *)&stru_B052C0[16]))->GetLinkedIndex(*(unsigned int *)(v27->Socket + 100)); /*0x541eb6*/
        v25 = *(unsigned int *)&v47[0].__pad_B6; /*0x541ebb*/
        if ( LinkedIndex == BYTE1(v47[0].__pad_B6) ) /*0x541ec4*/
          goto LABEL_72; /*0x541ec4*/
        if ( !byte_A8DBA0 ) /*0x541ed1*/
          break; /*0x541ed1*/
LABEL_59:
        ++v26; /*0x541ef1*/
        v27 = (IPXManagerClass *)((char *)v27 + 4); /*0x541ef5*/
        if ( v26 >= *((unsigned int *)this + 17) ) /*0x541efa*/
          goto LABEL_60; /*0x541efa*/
      }
      if ( !(uint8_t)((GUID *)((char *)(v27->Socket + 76)))->Compare((int)v47) ) /*0x541edd*/
        break; /*0x541edd*/
LABEL_72:
if ( !(*(int (**)(unsigned int, char *, void *))(**((unsigned int **)this + v26 + 10) + 12))( /*0x541f9b*/ *((unsigned int *)this + v26 + 10), (char *)(&v47[0].q0B4), (void *)(Network_field_0xC)) )



      {
        Network_field_0xC = (void *)(0); /*0x541fa8*/
        ++*((unsigned int *)this + 41); /*0x541fad*/
LABEL_74:
        Debug::Log("Reecive buffer overflow %d\n"); /*0x541fb9 G57w11: IDA push seq @ 0x541fb9 +1 reg-vararg(s) omitted*/
      }
LABEL_75:
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x541fc8*/
      {
        if ( byte_A8DBA0 ) /*0x541fd5*/
        {
          if ( ((Network *)(char *)v47)->processPacket( *((unsigned int *)this + 20) + 76) ) /*0x541fe6*/
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x541fff*/
            {
              if ( (uint8_t)((NetworkID *)((bool *)(((unsigned int *)dword_A8DA78)[i] + 40)))->Compare(*((unsigned int *)this + 20) + 76) /*0x54203e*/
                && SessionClass::IsValidHouse(
                     (int)&dword_A8B238,
                     *((void **)((char *)&stru_A80220) + *(unsigned int *)(((unsigned int *)dword_A8DA78)[i] + 111))) )
              {
                ((Network *)(v47))->FormatAddress(0); /*0x542051*/
                ((Network *)((Network *)(*((unsigned int *)this + 20) + 76)))->FormatAddress(0); /*0x54205f*/
                Debug::Log("Frame %d, Router apparently changed address from %s to %s\n"); /*0x542071 G57w11: IDA push seq @ 0x542071 +2 reg-vararg(s) omitted*/
                v33 = (int *)(((unsigned int *)dword_A8DA78)[i] + 40); /*0x542085*/
                *v33 = *(unsigned int *)&v47[0].q000; /*0x542088*/
                v33[1] = (int)*(unsigned int *)&v47[0].q004; /*0x54208e*/
                v33[2] = (int)*(unsigned int *)&v47[0].q008; /*0x542095*/
                v34 = (int *)(*((unsigned int *)this + 20) + 76); /*0x54209f*/
                *v34 = *(unsigned int *)&v47[0].q000; /*0x5420a2*/
                v34[1] = (int)*(unsigned int *)&v47[0].q004; /*0x5420a8*/
                v34[2] = (int)*(unsigned int *)&v47[0].q008; /*0x5420af*/
                stru_A8BB1C.q000 = *(unsigned int *)&v47[0].q000; /*0x5420be*/
                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x5420c3*/
                stru_A8BB1C.q004 = *(unsigned int *)&v47[0].q004; /*0x5420cd*/
                stru_A8BB1C.q008 = *(unsigned int *)&v47[0].q008; /*0x5420d3*/
                dword_A8DBAC = *(unsigned int *)&v47[0].q008; /*0x5420df*/
                NetworkManager::SetPlayerAddress( /*0x5420f6*/
                  (NetworkManager *)&stru_B052C0[16],
                  *(unsigned int *)(((unsigned int *)dword_A8DA78)[i] + 111),
                  v47);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !Network_field_0xC ) /*0x54215c*/
        goto LABEL_92; /*0x54215c*/
    }
    v25 = *(unsigned int *)&v47[0].__pad_B6; /*0x541eea*/
    goto LABEL_59; /*0x541eea*/
  }
LABEL_92:
  v37 = *((unsigned int *)this + 18); /*0x542197*/
  v38 = 0; /*0x54219a*/
  if ( v37 && *(unsigned int *)&dword_887628&& !(*(int (**)(int))(*(unsigned int *)v37 + 20))(v37) ) /*0x5421aa*/
  {
    (*(void (**)(unsigned int))(**((unsigned int **)this + 18) + 24))(*((unsigned int *)this + 18)); /*0x5421b6*/
    v47[0].Network_field_0x10 = 0; /*0x5421b9*/
  }
  if ( byte_A8DBA0 ) /*0x5421c4*/
  {
    v39 = *((unsigned int *)this + 19); /*0x5421c6*/
    if ( v39 ) /*0x5421cb*/
    {
      if ( !(*(int (**)(int))(*(unsigned int *)v39 + 20))(v39) ) /*0x5421cf*/
      {
        (*(void (**)(unsigned int))(**((unsigned int **)this + 19) + 24))(*((unsigned int *)this + 19)); /*0x5421db*/
        v47[0].Network_field_0x10 = 0; /*0x5421de*/
      }
      if ( !byte_A8E2D0 ) /*0x5421e9*/
        ((Network *)v45)->ProcessAddressChange(); /*0x5421f0*/
    }
    if ( byte_A8DBA0 ) /*0x5421fc*/
    {
      v40 = *((unsigned int *)this + 20); /*0x5421fe*/
      if ( v40 ) /*0x542203*/
      {
        if ( !(*(int (**)(int))(*(unsigned int *)v40 + 20))(v40) ) /*0x542207*/
        {
          Debug::Log("Multicast channel has gone bad\n"); /*0x542213 G57w11: IDA push seq @ 0x542213*/
          v47[0].Network_field_0x10 = 0; /*0x54221b*/
        }
      }
    }
  }
  if ( *(unsigned int *)&dword_887628&& *((int *)this + 17) > 0 ) /*0x54222a*/
  {
    v41 = (IPXManagerClass *)((unsigned int *)this + 5); /*0x54222c*/
    do /*0x542260*/
    {
      if ( !(*(int (**)(int))(*(unsigned int *)v41->Socket + 20))(v41->Socket) ) /*0x542233*/
      {
        v47[0].Network_field_0x10 = 0; /*0x54223a*/
        *((unsigned int *)this + 42) = *(unsigned int *)(v41->Socket + 100); /*0x542249*/
        Debug::Log("Error - Connection %d has gone bad\n"); /*0x54224f G57w11: IDA push seq @ 0x54224f +1 reg-vararg(s) omitted*/
      }
      ++v38; /*0x54225a*/
      v41 = (IPXManagerClass *)((char *)v41 + 4); /*0x54225b*/
    }
    while ( v38 < *((unsigned int *)this + 17) ); /*0x542260*/
  }
  result = (int)v47[0].Network_field_0x10; /*0x542262*/
  if ( v47[0].Network_field_0x10 ) /*0x542268*/
    *((unsigned int *)this + 42) = -1; /*0x54226a*/
  return (void *)result; /*0x542274*/

}
}
// 0x5422D0
namespace gamemd {
int Network::GetQueueCount()
{

  if ( this->Initialized && this->Active ) /*0x5422d7*/
    return *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 18) + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/

}
}
// 0x5424C0
namespace gamemd {
int Network::GetLobbyStatus()
{

  int Network_field_0x48; // eax

  *(unsigned int *)&this->q048; /*0x5424c0*/
  if ( Network_field_0x48 ) /*0x5424c5*/
    return ((CellClass *)*(CellClass **)(Network_field_0x48 + 4))->GetBridgeIndex(); /*0x5424ca*/
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
    return ((CellClass *)Network_field_0x50[1])->GetBridgeIndex(); /*0x54250a*/
  else
    return 0; /*0x54250f*/

}
}
// 0x543050
namespace gamemd {
unsigned int * Network::SetPlayerCoords(IPXManagerClass * aP1)
{

  unsigned int *result; // eax

  result = this->q04C; /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *result = *aP1; /*0x543060*/
    result[1] = aP1[1]; /*0x543065*/
    result[2] = aP1[2]; /*0x54306b*/
  }
  return result; /*0x54306e*/

}
}
// 0x543080
namespace gamemd {
int Network::Disconnect()
{

  int result; // eax

  *(unsigned int *)&this->q048; /*0x543080*/
  if ( result ) /*0x543085*/
    *(unsigned char *)(result + 200) = 0; /*0x543087*/
  return result; /*0x54308e*/

}
}
// 0x5BCC40
namespace gamemd {
int Network::validateConnection(int a2, int a3)
{

  *((unsigned int *)this + 2503) = a2; /*0x5bcc48*/
  *((unsigned int *)this + 2504) = a3; /*0x5bcc4e*/
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
  v2 = ((String *)((String *)&dword_B73E40))->GetOrEmpty(); /*0x5c4711*/
  v3 = (unsigned int *)(dword_A8DA78); /*0x5c471e*/
  strcpy( (char *)(byte_B77830), (const char *)(v2)); /*0x5c472f*/
  v4 = (int *)(v3[this->q054] + 40); /*0x5c473e*/
  stru_A8BB1C.q000 = *v4; /*0x5c4743*/
  dword_A8BB20 = v4[1]; /*0x5c474c*/
  dword_A8BB24 = v4[2]; /*0x5c4755*/
  wcscpy( (wchar_t *)(word_A8E258), (const wchar_t *)v3[this->q054]); /*0x5c4767*/
  dword_A8E2AC = -1; /*0x5c4772*/
  dword_A8B3AC = *(unsigned int *)&this->q070; /*0x5c4782*/
  (*(void (**)(unsigned int *))(*dword_887628 + 48))( (unsigned int *)(dword_887628)); /*0x5c4789*/
  strcpy( (char *)(v18), "xxx.xxx.xxx.xxx"); /*0x5c47a3*/
  v19 = 0; /*0x5c47ac*/
  v20 = 0; /*0x5c47b9*/
  v5 = 1; /*0x5c47bd*/
  v21 = 0; /*0x5c47c2*/
  for ( i = 0; v5 < dword_A8DA84; ++v5 ) /*0x5c47d0*/
  {
    ((Network *)((Network *)(((unsigned int *)dword_A8DA78)[v5] + 40)))->GetAddress( (unsigned int *)(&v16), (int)v17, (unsigned short *)(&v15)); /*0x5c47ed*/
    (*(void (**)(unsigned int *, char *, int))(*dword_887628 + 44))( (unsigned int *)(dword_887628), (char *)(v18), v15); /*0x5c4804*/
  }
  qmemcpy( (void *)(&unk_A8DBCC), (const void *)(&this->q0C4), 0x60u); /*0x5c4827*/
  qmemcpy( (void *)(dword_A8DC2C), (const void *)(&this->__pad_124), sizeof(dword_A8DC2C)); /*0x5c4839*/
  qmemcpy( (void *)(dword_A8E230), (const void *)(&this->q144), sizeof(dword_A8E230)); /*0x5c484b*/
  *(unsigned int *)&dword_A8E2B2 = *(unsigned int *)&this->u32_194; /*0x5c484f*/
  dword_A8E2B6 = *(unsigned int *)&this->u32_198; /*0x5c4858*/
  dword_A8E2BA = *(unsigned int *)&this->u32_19C; /*0x5c4861*/
  dword_A8E2BE = *(unsigned int *)&this->u32_1A0; /*0x5c4876*/
  wcscpy( (wchar_t *)(word_A8E258), (const wchar_t *)&this->q164); /*0x5c487c*/
  dword_A8E2AC = *(unsigned int *)&this->q190; /*0x5c488a*/
  dword_A8ED94 = this->u32_9C; /*0x5c4896*/
  InitRandomSeed(v14); /*0x5c489c*/
  Debug::Log("Setup Rematch: Random Seed = %d\n"); /*0x5c48ac G57w11: IDA push seq @ 0x5c48ac +1 reg-vararg(s) omitted*/
  g_RulesInitConfig = this->q0A0; /*0x5c48ba*/
  *(unsigned int *)&((unsigned char *)&stru_A8B250)[32] = this->u32_A4; /*0x5c48c6*/
  *(unsigned int *)&((unsigned char *)&stru_A8B250)[12] = *(unsigned int *)&this->q0A8; /*0x5c48d2*/
  byte_A8B31F = this->u8_AC; /*0x5c48dd*/
  ((unsigned char *)&stru_A8B250)[16] = this->u8_AD; /*0x5c48e9*/
  ((unsigned char *)&stru_A8B250)[17] = this->u8_AE; /*0x5c48f5*/
  LOBYTE(dword_A8B320) = this->u8_AF; /*0x5c4900*/
  byte_A8B31C = this->q0B0; /*0x5c490c*/
  byte_A8B31D = this->u8_B1; /*0x5c4918*/
  ((unsigned char *)&stru_A8B250)[8] = this->u8_B2; /*0x5c4923*/
  byte_A8B31E = this->u8_B3; /*0x5c492f*/
  *(unsigned int *)&((unsigned char *)&stru_A8B250)[40] = this->u32_B8; /*0x5c493b*/
  ((unsigned char *)&stru_A8B250)[18] = this->u8_BC; /*0x5c4946*/
  ((unsigned char *)&stru_A8B250)[19] = BYTE1(this->u8_BC); /*0x5c4952*/
  ((unsigned char *)&stru_A8B250)[20] = BYTE2(this->u8_BC); /*0x5c495e*/
  ((unsigned char *)&stru_A8B250)[28] = HIBYTE(this->u8_BC); /*0x5c4969*/
  *(unsigned int *)&((unsigned char *)&stru_A8B250)[24] = *(unsigned int *)&this->q0C0; /*0x5c497b*/
  LoadScenarioClassByIndex(*(int *)&((unsigned char *)&stru_A8B250)[4]); /*0x5c4981*/
  dword_A8EB60 = *(AudioOptionsClass *)&((unsigned char *)&stru_A8B250)[24]; /*0x5c4997*/
  ((AbstractClass *)dword_A8B230)[130].vtable3 = *(unsigned int *)&((unsigned char *)&stru_A8B250)[4]; /*0x5c499c*/
  switch ( *(unsigned int *)&((unsigned char *)&stru_A8B250)[24] ) /*0x5c49b0*/
  {
    case 0: /*0x5c49b0*/
      dword_A8B550 = (unsigned int)(wchar_t *)40; /*0x5c49b7*/
      dword_A8B570 = 60; /*0x5c49c1*/
      dword_A8B554 = 10; /*0x5c49cb*/
      goto LABEL_12; /*0x5c49d5*/
    case 1: /*0x5c49b0*/
      dword_A8B550 = (unsigned int)(wchar_t *)40; /*0x5c49d7*/
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
      dword_A8B550 = (unsigned int)(wchar_t *)20; /*0x5c4a05*/
      dword_A8B570 = 15; /*0x5c4a0f*/
      goto LABEL_12; /*0x5c4a19*/
    case 5: /*0x5c49b0*/
      dword_A8B550 = (unsigned int)(wchar_t *)20; /*0x5c4a1b*/
      dword_A8B570 = 12; /*0x5c4a25*/
      goto LABEL_12; /*0x5c4a2f*/
    default:
      v6 = 10; /*0x5c4a31*/
LABEL_11:
      dword_A8B550 = (unsigned int)(wchar_t *)v6; /*0x5c4a36*/
      dword_A8B570 = v6; /*0x5c4a3b*/
LABEL_12:
      dword_A8B56C = 0; /*0x5c4a40*/
      if ( !LOBYTE(this->MPCooperative_field_0x4) ) /*0x5c4a46*/
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
      dword_A8DB9C = (unsigned int)(wchar_t *)1; /*0x5c4a7a*/
      if ( !v7 || v7 == 1000 ) /*0x5c4a8c*/
      {
        dword_A8B570 = 0; /*0x5c4b73*/
        Debug::Log("Ping times not available\n"); /*0x5c4b79 G57w11: IDA push seq @ 0x5c4b79*/
LABEL_34:
        v10 = (wchar_t *)(dword_A8B550); /*0x5c4b81*/
        goto LABEL_35; /*0x5c4b81*/
      }
      Debug::Log("Max ping is %d ms\n"); /*0x5c4a98 G57w11: IDA push seq @ 0x5c4a98 +1 reg-vararg(s) omitted*/
      if ( v7 <= 1000 ) /*0x5c4aa6*/
      {
        if ( v7 < 600 ) /*0x5c4aba*/
          dword_A8DB9C = (unsigned int)(wchar_t *)1; /*0x5c4abc*/
      }
      else
      {
        dword_A8DB9C = (unsigned int)(wchar_t *)2; /*0x5c4aa8*/
      }
      Network::SetConnectionParams( /*0x5c4b0b*/
        &unk_A8E9C0,
        120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000,
        -1,
        8 * (120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000),
        1);
      if ( !LOBYTE(this->MPCooperative_field_0x4) ) /*0x5c4b10*/
        goto LABEL_34; /*0x5c4b10*/
      ((IPXManagerClass *)&unk_A8E9C0)->sendPacket( 5, -1, 120); /*0x5c4b20*/
      if ( !LOBYTE(this->MPCooperative_field_0x4) ) /*0x5c4b25*/
        goto LABEL_34; /*0x5c4b28*/
      v10 = (wchar_t *)(dword_A8B550); /*0x5c4b2f*/
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
      memset( (void *)(&unk_A8B574), 0, 0x340u); /*0x5c4b99*/
      byte_B77A04 = 0; /*0x5c4ba1*/
      dword_A8EB60 = *(AudioOptionsClass *)&((unsigned char *)&stru_A8B250)[24]; /*0x5c4ba7*/
      ((unsigned char *)&byte_B76568)[0] = 0; /*0x5c4bad*/
      Scenario::PreGameInit(); /*0x5c4bb3*/
      dword_8B41F8 = 0; /*0x5c4bbf*/
      dword_8B41FC = 0; /*0x5c4bc5*/
      dword_8B4200 = 0; /*0x5c4bcb*/
      dword_A802C8 = 0; /*0x5c4bd1*/
      dword_A802CC = 0; /*0x5c4bd7*/
      dword_A802D0 = 0; /*0x5c4bdd*/
      ((Tooltip *)(dword_887368))->Enable(0); /*0x5c4be3*/
      Debug::Log("@@@@ Before destroying connections players.count() = %d\n"); /*0x5c4bf4 G57w11: IDA push seq @ 0x5c4bf4 +1 reg-vararg(s) omitted*/
      while ( Network::GetSendCount( (void *)(&unk_A8E9C0)) ) /*0x5c4c01*/
      {
        ConnectionSpeed = ((Network *)(&unk_A8E9C0))->GetConnectionSpeed(0); /*0x5c4c10*/
        ((Network *)(int)&unk_A8E9C0)->sendData( (AnimClass *)(ConnectionSpeed)); /*0x5c4c1b*/
      }
      if ( byte_A8DBA0 ) /*0x5c4c34*/
      {
        if ( dword_A8EA0C ) /*0x5c4c3c*/
          ((NetworkEventQueueClass *)((NetworkEventQueueClass *)&unk_B052D0))->WaitForResponse(); /*0x5c4c43*/
        byte_A8DBA0 = 0; /*0x5c4c48*/
      }
      return (AbstractClass * *)Debug::Log("@@@@ After destroying connections players.count() = %d\n"); /*0x5c4c48 G57w12: IDA push seq @ 0x5c4c48 +1 reg-vararg omitted*/
  }

}
}
// 0x5D93D0
namespace gamemd {
int Network::dispatchEvent()
{

  int result; // eax

  this->q004 = (void *)INIClass::ReadInt_Overwrite((gamemd::INIClass *)(/*0x5d93fa*/
                                      (bool *)&DSurface_ViewBounds.__pad_FC[36]), (uint8_t *)aMultiplayer, (uint8_t *)g_INI_Key_FirewallSettings, 0);
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (bool *)&DSurface_ViewBounds.__pad_FC[36],
             (uint8_t *)aMultiplayer,
             (uint8_t *)g_INI_Key_FirewallDelta,
             1);
  this->q00C = (void *)result; /*0x5d9402*/
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
  char *v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v23; // edi
  int16_t i; // si
  int v25; // eax
  int v26; // edi
  int16_t j; // bx
  int v28; // eax
  int *v29; // esi
  int k; // edi
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  int v40; // esi
  void *v41; // eax
  void *v42; // eax
  int v43; // ebx
  int *v44; // esi
  void *Network_field_0xC; // eax
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // ecx
  int v51; // ebx
  char *v52; // eax
  int v53; // ecx
  uint16_t v55; // bx
  int v56; // esi
  int v57; // eax
  int v58; // esi
  int16_t v59; // ax
  int v60; // esi
  uint16_t v61; // si
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
  int16_t v75[2]; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  uint16_t v78[2]; // [esp+60h] [ebp-168h] BYREF
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
    ((Waypoint*)v3)->InitInvalid(); /*0x5d9446*/
    v3 = (Waypoint *)((char *)v3 + 12); /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  TimerGetTicks(); /*0x5d9455*/
  if ( dword_A8E254 ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log("Source port %d specified by user\n"); /*0x5d9476 G57w11: IDA push seq @ 0x5d9476 +1 reg-vararg(s) omitted*/
    if ( byte_A8E180 ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log("Netgear bug specified by command line or SendDelay flag\n"); /*0x5d9491 G57w11: IDA push seq @ 0x5d9491*/
    }
    return (IPXConnClass * *)v5; /*0x5d94a5*/
  }
  Ticks = TimerGetTicks(); /*0x5d94bf*/
  Debug::Log("About to call gethostbyname for the mangler address\n"); /*0x5d94cb G57w11: IDA push seq @ 0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v86 = 0; /*0x5d94d5*/
  *(unsigned int *)v78 = dword_B76338; /*0x5d94d9*/
  v85 = &g_WindowManager.__pad_EC[688]; /*0x5d94e1*/
  v84 = aMangler1Westwo_0; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = (const char *)(v84); /*0x5d94fb*/
    if ( dword_B77E1C > v86 ) /*0x5d9501*/
    {
      v8 = (const char *)(v85); /*0x5d9507*/
      v75[0] = **(unsigned short **)v78; /*0x5d9513*/
      Debug::Log("Using mangler from servserv\n"); /*0x5d9518 G57w11: IDA push seq @ 0x5d9518*/
    }
    v84 += 32; /*0x5d953b*/
    v85 += 128; /*0x5d953f*/
    *(unsigned int *)v78 += 4; /*0x5d9543*/
    ++v86; /*0x5d9554*/
    if ( !strlen( (const char *)(v8)) ) /*0x5d9549*/
      break; /*0x5d9549*/
    strcpy( (char *)(&v89.__pad_0[48]), (const char *)(v8)); /*0x5d9579*/
    v9 = gethostbyname(&v89.__pad_0[48]); /*0x5d958a*/
    if ( !v9 ) /*0x5d9591*/
    {
      WSAGetLastError(); /*0x5d9628*/
      Debug::Log("gethostbyname failed! Error code %d\n"); /*0x5d9633 G57w11: IDA push seq @ 0x5d9633 +1 reg-vararg(s) omitted*/
      break; /*0x5d9633*/
    }
    v10 = 0; /*0x5d9597*/
    if ( v7 <= 0 ) /*0x5d959b*/
    {
LABEL_16:
      ++v66; /*0x5d95b8*/
      v12 = (unsigned int *)((int *)((char *)&v81 + v7)); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(unsigned int **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log("Found mangler address at %d.%d.%d.%d\n"); /*0x5d95f2 G57w11: IDA push seq @ 0x5d95f2 +2 reg-vararg(s) omitted*/
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
        v14 = TimerGetTicks() - Ticks; /*0x5d9615*/
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
    ((Network *)((Network *)v16))->SetPort(v75[0]); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 = (Waypoint *)((char *)v16 + 12); /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = (char *)this->q010 + 1; /*0x5d9689*/
    LOWORD(v15) = LOWORD(this->q010) + 1; /*0x5d968b*/
    v20 = (int)this->q010 - 65534 < 0; /*0x5d968e*/
    this->q010 = v19; /*0x5d9693*/
    *(unsigned int *)v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ __OFSUB__(v19, 0xFFFF) | (v19 == (char *)0xFFFF)) ) /*0x5d969a*/
      this->q010 = (void *)2048; /*0x5d969c*/
    v21 = *(unsigned int *)&dword_887628; /*0x5d969f*/
    if ( !*(unsigned int *)&dword_887628|| *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(uint8_t (**)(int))(**(unsigned int **)&dword_887628+ 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d96ce*/
        *(unsigned int *)&dword_887628,
        v15);
LABEL_36:
      v21 = *(unsigned int *)&dword_887628; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(uint8_t (**)(int, int))(*(unsigned int *)v21 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 28))(*(unsigned int *)&dword_887628); /*0x5d96ed*/
  v69 = TimerGetTicks(); /*0x5d96f9*/
  v23 = 360; /*0x5d9701*/
  for ( i = 0; ; i = Network::WaitForPacket(2130706432, 0) ) /*0x5d970e*/
  {
    if ( v69 != -1 ) /*0x5d9715*/
    {
      v25 = TimerGetTicks() - v69; /*0x5d9720*/
      if ( v25 >= 360 ) /*0x5d9726*/
        break; /*0x5d9726*/
      v23 = 360 - v25; /*0x5d9728*/
    }
    if ( !v23 ) /*0x5d972c*/
      break; /*0x5d972c*/
    if ( i ) /*0x5d9731*/
      goto LABEL_46; /*0x5d9731*/
    Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v89), v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9d6d*/
      *(unsigned int *)&dword_887628,
      v15);
    if ( i == (unsigned short)v15 ) /*0x5d9d7c*/
    {
      this->q008 = 0; /*0x5d9d85*/
      *a2 = 1; /*0x5d9d8c*/
    }
    return 1; /*0x5d9d8c*/
  }
LABEL_46:
  if ( i == (unsigned short)v15 ) /*0x5d9769*/
    goto LABEL_159; /*0x5d9769*/
  v26 = 360; /*0x5d977c*/
  v70 = TimerGetTicks(); /*0x5d9781*/
  for ( j = 0; ; j = Network::WaitForPacket(2130706433, 0) ) /*0x5d978d*/
  {
    if ( v70 != -1 ) /*0x5d9794*/
    {
      v28 = TimerGetTicks() - v70; /*0x5d979f*/
      if ( v28 >= 360 ) /*0x5d97a5*/
        break; /*0x5d97a5*/
      v26 = 360 - v28; /*0x5d97a7*/
    }
    if ( !v26 || j ) /*0x5d97b0*/
      break; /*0x5d97b0*/
    Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v89.__pad_0[12]), *(int *)v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d97e0*/
    *(unsigned int *)&dword_887628,
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
        v32 = (int)this->q010 + v31; /*0x5d984a*/
        this->q010 = (void *)v32; /*0x5d984c*/
        LOWORD(v29) = v32; /*0x5d9854*/
        if ( v32 > 0xFFFF ) /*0x5d9857*/
          this->q010 = (void *)2048; /*0x5d9859*/
        v33 = *(unsigned int *)&dword_887628; /*0x5d9860*/
        if ( !*(unsigned int *)&dword_887628|| *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(uint8_t (**)(int *))(**(unsigned int **)&dword_887628+ 104))( (int *)(v29)) ) /*0x5d9876*/
        {
(*(void (**)(unsigned int, int *))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9897*/ *(unsigned int *)&dword_887628, (int *)(v29));


LABEL_69:
          v33 = *(unsigned int *)&dword_887628; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( (*(unsigned int *)v75)-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((unsigned short *)v87 + k) = (unsigned short)v29; /*0x5d98a0*/
      v35 = (*(int (**)(int, int *))(*(unsigned int *)v33 + 104))( v33, (int *)(v29)); /*0x5d98a8*/
      if ( !(unsigned char)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v87; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *(unsigned short *)v44 ) /*0x5d99ed*/
            {
              LOWORD(v35) = *(unsigned short *)v44; /*0x5d99ed*/
              v35 = (*(int (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d99fe*/
                      *(unsigned int *)&dword_887628,
                      v35);
            }
            v44 = (int *)((char *)v44 + 2); /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return (IPXConnClass * *)v67; /*0x5d9a15*/
      }
    }
    (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 28))(*(unsigned int *)&dword_887628); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = TimerGetTicks(); /*0x5d98d9*/
    HIWORD(v37) = 0; /*0x5d98de*/
    v81 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    HIWORD(v38) = HIWORD(v82); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v83 = 720; /*0x5d98f1*/
    while ( 1 ) /*0x5d98fd*/
    {
      if ( v71 != -1 ) /*0x5d9902*/
      {
        v38 = TimerGetTicks() - v71; /*0x5d990d*/
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
          LOWORD(v37) = *((unsigned short *)v87 + k); /*0x5d992e*/
          Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v89), v37, v40, 0); /*0x5d993e*/
          LOWORD(v38) = Network::WaitForPacket(v40, 0); /*0x5d9948*/
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
        LOWORD(v38) = *(unsigned short *)v29; /*0x5d996d*/
        v38 = (*(int (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d997e*/
                *(unsigned int *)&dword_887628,
                v38);
      }
      v29 = (int *)((char *)v29 + 2); /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      Network_field_0xC = this->q00C; /*0x5d9a18*/
      if ( Network_field_0xC && (int)this->q004 > 1 ) /*0x5d9a23*/
        this->q008 = Network_field_0xC; /*0x5d9a25*/
      return (IPXConnClass * *)v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = (void *)DetectPortAllocationPattern( /*0x5d99b1*/
                      v36,
                      (int16_t *)v87,
                      (uint16_t *)v88,
                      (unsigned char *)&v76 + 3,
                      (unsigned char *)&v74 + 3);
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        this->q008 = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = this->q00C; /*0x5d99ba*/
        if ( v42 && (int)this->q004 > 1 ) /*0x5d99c5*/
          this->q008 = v42; /*0x5d99c7*/
        ++*(unsigned int *)v78; /*0x5d99d2*/
        if ( *(int *)v78 < 3 ) /*0x5d99d6*/
          continue; /*0x5d99d6*/
        v43 = v67; /*0x5d99dc*/
      }
      if ( (v43 & 4) != 0 ) /*0x5d9a69*/
      {
        if ( (v43 & 0x10) != 0 ) /*0x5d9a72*/
        {
          Debug::Log("Testing to see if the NAT mangles differently per destination port at the same IP\n"); /*0x5d9a7d G57w11: IDA push seq @ 0x5d9a7d*/
          v47 = 255; /*0x5d9a85*/
          while ( 1 ) /*0x5d9a8e*/
          {
            v48 = (int)this->q010 + 1; /*0x5d9a8e*/
            this->q010 = (void *)v48; /*0x5d9a90*/
            LOWORD(k) = v48; /*0x5d9a98*/
            if ( v48 > 0xFFFF ) /*0x5d9a9b*/
              this->q010 = (void *)2048; /*0x5d9a9d*/
            v49 = *(unsigned int *)&dword_887628; /*0x5d9aa4*/
            if ( !*(unsigned int *)&dword_887628|| *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(uint8_t (**)(int))(**(unsigned int **)&dword_887628+ 104))(k) ) /*0x5d9aba*/
            {
              (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9ad3*/
                *(unsigned int *)&dword_887628,
                k);
LABEL_118:
              v49 = *(unsigned int *)&dword_887628; /*0x5d9ad6*/
              break; /*0x5d9ad6*/
            }
            if ( !v47-- ) /*0x5d9ac1*/
              goto LABEL_118; /*0x5d9ac6*/
          }
          if ( !(*(uint8_t (**)(int, int))(*(unsigned int *)v49 + 104))(v49, k) ) /*0x5d9adf*/
            return (IPXConnClass * *)v43; /*0x5d9af2*/
          v51 = 255; /*0x5d9af5*/
          while ( 1 ) /*0x5d9afe*/
          {
            v52 = (char *)this->q010 + 1; /*0x5d9afe*/
            LOWORD(v47) = LOWORD(this->q010) + 1; /*0x5d9b00*/
            v20 = (int)this->q010 - 65534 < 0; /*0x5d9b03*/
            this->q010 = v52; /*0x5d9b08*/
            *(unsigned int *)v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ __OFSUB__(v52, 0xFFFF) | (v52 == (char *)0xFFFF)) ) /*0x5d9b0f*/
              this->q010 = (void *)2048; /*0x5d9b11*/
            v53 = *(unsigned int *)&dword_887628; /*0x5d9b18*/
            if ( !*(unsigned int *)&dword_887628|| *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(uint8_t (**)(int))(**(unsigned int **)&dword_887628+ 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9b47*/
                *(unsigned int *)&dword_887628,
                v47);
LABEL_130:
              v53 = *(unsigned int *)&dword_887628; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(uint8_t (**)(int, int))(*(unsigned int *)v53 + 104))(v53, v47) ) /*0x5d9b53*/
            return (IPXConnClass * *)v67; /*0x5d9b68*/
          (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 28))(*(unsigned int *)&dword_887628); /*0x5d9b73*/
          v72 = TimerGetTicks(); /*0x5d9b7f*/
          v55 = 0; /*0x5d9b8f*/
          v56 = 240; /*0x5d9b91*/
          v77 += 10; /*0x5d9b9d*/
          while ( 1 ) /*0x5d9ba1*/
          {
            if ( v72 != -1 ) /*0x5d9ba6*/
            {
              v57 = TimerGetTicks() - v72; /*0x5d9bb1*/
              if ( v57 >= 240 ) /*0x5d9bb7*/
                break; /*0x5d9bb7*/
              v56 = 240 - v57; /*0x5d9bb9*/
            }
            if ( !v56 ) /*0x5d9bbd*/
              break; /*0x5d9bbd*/
            if ( v55 ) /*0x5d9bc2*/
              goto LABEL_142; /*0x5d9bc2*/
            v58 = v77; /*0x5d9bc4*/
            Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v89), k, v77, 0); /*0x5d9bd3*/
            v59 = Network::WaitForPacket(v58, 0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9bf8*/
              *(unsigned int *)&dword_887628,
              k);
            (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&dword_887628+ 108))( /*0x5d9c08*/
              *(unsigned int *)&dword_887628,
              *(unsigned int *)v75);
            return (IPXConnClass * *)v67; /*0x5d9c19*/
          }
LABEL_142:
          *(unsigned int *)v78 = *(unsigned int *)v89.__pad_0; /*0x5d9c1c*/
          v79 = *(unsigned int *)&v89.__pad_0[4]; /*0x5d9c2d*/
          v80 = *(unsigned int *)&v89.__pad_0[8]; /*0x5d9c36*/
          ((Network *)((Network *)v78))->SetPort(*(unsigned short *)v89.__pad_0 + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          Network::QueryAddress( (IPXManagerClass *)(v78), k, v77, 0); /*0x5d9c4e*/
          Network::QueryAddress( (IPXManagerClass *)(v78), k, v60, 0); /*0x5d9c5e*/
          Network::QueryAddress( (IPXManagerClass *)(v78), k, v60, 0); /*0x5d9c6e*/
          v77 = v60 + 1; /*0x5d9c78*/
          v61 = 0; /*0x5d9c7c*/
          v73 = TimerGetTicks(); /*0x5d9c83*/
          for ( m = 240; ; m = 240 ) /*0x5d9c8b*/
          {
            if ( v73 != -1 ) /*0x5d9c9d*/
            {
              v63 = TimerGetTicks() - v73; /*0x5d9ca8*/
              if ( v63 >= 240 ) /*0x5d9cae*/
                break; /*0x5d9cae*/
              m = 240 - v63; /*0x5d9cb0*/
            }
            if ( !m ) /*0x5d9cb4*/
              break; /*0x5d9cb4*/
            if ( v61 ) /*0x5d9cb9*/
              goto LABEL_150; /*0x5d9cb9*/
            v64 = v77; /*0x5d9cbb*/
            Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v89), *(int *)v75, v77, 0); /*0x5d9cce*/
            v61 = Network::WaitForPacket(v64, 0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( (void *)v61 == (char *)this->q008 + v55 ) /*0x5d9cfd*/
          {
            Debug::Log("NAT uses the same source port for different destination ports\n"); /*0x5d9d5e G57w11: IDA push seq @ 0x5d9d5e*/
          }
          else
          {
            Debug::Log("NAT uses different source ports for different destination ports\n"); /*0x5d9d04 G57w11: IDA push seq @ 0x5d9d04*/
            v65 = v67; /*0x5d9d09*/
            LOBYTE(v65) = v67 | 0x40; /*0x5d9d10*/
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
      Debug::Log("Testing for Netgear bug\n"); /*0x5d9d1f G57w11: IDA push seq @ 0x5d9d1f*/
      if ( dword_B77E18 == 2 || byte_A8E180 ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log("Netgear bug specified by command line or SendDelay flag\n"); /*0x5d9d42 G57w12: IDA push seq @ 0x5d9d42*/
      }
      return (IPXConnClass * *)v43; /*0x5d9d4c*/
    }
  }

}
}
// 0x5DA0B0
namespace gamemd {
unsigned short Network::ResolveNetworkAddress(uint16_t a2)
{

  unsigned int result; // eax
  int16_t v4; // bx
  struct hostent *v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v11; // edi
  uint16_t v12; // si
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

  TimerGetTicks(); /*0x5da0c0*/
  result = *(unsigned int *)&this->q000; /*0x5da0c9*/
  Network_field_0x0 = *(unsigned int *)&this->q000; /*0x5da0d6*/
  if ( !this->q000 ) /*0x5da0c9*/
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
  strcpy( (char *)(&v22.__pad_0[24]), aMangler1Westwo); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy( (char *)(&v22.__pad_0[24]), (const char *)(&g_WindowManager.__pad_EC[128 * dword_B77E20 + 688])); /*0x5da174*/
    Debug::Log("Using mangler from servserv\n"); /*0x5da17d G57w12: IDA push seq @ 0x5da17d*/
  }
  Debug::Log("Firewall helper - About to call gethostbyname for %s\n"); /*0x5da18f G57w11: IDA push seq @ 0x5da18f +1 reg-vararg(s) omitted*/
  v5 = gethostbyname(&v22.__pad_0[24]); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    result = Debug::Log("gethostbyname failed! Error code %d\n"); /*0x5da1b0 G57w11: IDA push seq @ 0x5da1b0 +1 reg-vararg(s) omitted*/
    LOWORD(result) = a2; /*0x5da1b5*/
    return result; /*0x5da1ca*/
  }
  v19 = **(unsigned int **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log("Mangler address is %d.%d.%d.%d ; %d\n"); /*0x5da20d G57w11: IDA push seq @ 0x5da20d +2 reg-vararg(s) omitted*/
  ((Waypoint*)&v22)->InitInvalid(); /*0x5da219*/
  Struct::Copy6Bytes(v22.__pad_0, (int)&v19); /*0x5da227*/
  ((Network *)((Network *)&v22))->SetPort(v4); /*0x5da231*/
  ((Network *)((Network *)&v22))->FormatAddress(0); /*0x5da23c*/
  Debug::Log("Mangler address is %s\n"); /*0x5da247 G57w11: IDA push seq @ 0x5da247 +1 reg-vararg(s) omitted*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log("fw = %08x\n"); /*0x5da25c G57w11: IDA push seq @ 0x5da25c +1 reg-vararg(s) omitted*/
  v20 = Network_field_0x0 & 4; /*0x5da26b*/
  if ( (Network_field_0x0 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = (int)this->q010 + 1; /*0x5da283*/
      this->q010 = (void *)v8; /*0x5da285*/
      LOWORD(v6) = v8; /*0x5da28d*/
      if ( v8 > 0xFFFF ) /*0x5da290*/
        this->q010 = (void *)2048; /*0x5da292*/
      v9 = *(unsigned int *)&dword_887628; /*0x5da295*/
      if ( !*(unsigned int *)&dword_887628|| *(unsigned int *)&dword_A8B238 != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(uint8_t (**)(int))(**(unsigned int **)&dword_887628+ 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5da2c4*/
          *(unsigned int *)&dword_887628,
          v6);
LABEL_19:
        v9 = *(unsigned int *)&dword_887628; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    result = (*(int (**)(int, int))(*(unsigned int *)v9 + 104))(v9, v6); /*0x5da2d4*/
    if ( !(unsigned char)result ) /*0x5da2d9*/
    {
      LOWORD(result) = a2; /*0x5da2db*/
      return result; /*0x5da2ed*/
    }
    (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 28))(*(unsigned int *)&dword_887628); /*0x5da2f8*/
  }
  v21 = (uint16_t)v6; /*0x5da308*/
  Debug::Log("FirewallHelper - Getting mangling for port %d\n"); /*0x5da30c G57w11: IDA push seq @ 0x5da30c +1 reg-vararg(s) omitted*/
  Ticks = TimerGetTicks(); /*0x5da31d*/
  v11 = 180; /*0x5da325*/
  v12 = 0; /*0x5da332*/
  while ( 1 ) /*0x5da334*/
  {
    if ( Ticks != -1 ) /*0x5da339*/
    {
      v13 = TimerGetTicks() - Ticks; /*0x5da344*/
      if ( v13 >= 180 ) /*0x5da34a*/
        break; /*0x5da34a*/
      v11 = 180 - v13; /*0x5da34c*/
    }
    if ( !v11 || v12 ) /*0x5da355*/
      break; /*0x5da355*/
    Network::QueryAddress( (IPXManagerClass *)((uint16_t *)&v22), v6, dword_830CA8, 0); /*0x5da368*/
    v12 = Network::WaitForPacket(dword_830CA8, 30); /*0x5da37c*/
    Debug::Log("FirewallHelper - Mangled port = %d\n"); /*0x5da38c G57w11: IDA push seq @ 0x5da38c +1 reg-vararg(s) omitted*/
    v11 = 180; /*0x5da391*/
  }
  ++dword_830CA8; /*0x5da39a*/
  if ( (unsigned short)v18 ) /*0x5da3ae*/
    (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 108))( /*0x5da3b9*/
      *(unsigned int *)&dword_887628,
      v18);
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (Network_field_0x0 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = (int)this->q008 + v12; /*0x5da420*/
      }
      else
      {
        Network_field_0x8 = (int)this->q008; /*0x5da424*/
        if ( Network_field_0x8 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % Network_field_0x8 + Network_field_0x8 * (v12 / Network_field_0x8 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        LOWORD(v14) = v14 + 1024; /*0x5da482*/
      result = Debug::Log("FirewallHelper - Returning next mangled port as %d\n"); /*0x5da48e G57w11: IDA push seq @ 0x5da48e +1 reg-vararg(s) omitted*/
      LOWORD(result) = v14; /*0x5da496*/
    }
    else
    {
      result = Debug::Log("FirewallHelper - Returning next mangled port as %d\n"); /*0x5da3f8 G57w11: IDA push seq @ 0x5da3f8 +1 reg-vararg(s) omitted*/
      LOWORD(result) = v12; /*0x5da400*/
    }
  }
  else
  {
    result = Debug::Log("Couldn't find mangled port, returning source port\n"); /*0x5da3c6 G57w11: IDA push seq @ 0x5da3c6*/
    LOWORD(result) = a2; /*0x5da3cb*/
  }
  return result; /*0x5da0e4*/

}
}
// 0x5E2BA0
namespace gamemd {
int Network::processQueue()
{

  int result; // eax
  Network **vtable3; // esi
  int nextArrayIndex; // edi
  Network *v4; // edx

  result = 0; /*0x5e2ba6*/
  if ( ((char *)&stru_A80220) > 0 ) /*0x5e2baa*/
  {
    vtable3 = (Network **)((char *)&stru_A80220); /*0x5e2bae*/
    nextArrayIndex = (unsigned int)((char *)&stru_A80220); /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      v4 = *vtable3; /*0x5e2bb7*/
      if ( *vtable3 && v4->__pad_1AA[66] && !v4->Network_field_0x1F5[0] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      ++vtable3; /*0x5e2bd6*/
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
  int v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  nextArrayIndex = (unsigned int)((char *)&stru_A80220); /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( ((char *)&stru_A80220) <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((unsigned int *)((char *)&stru_A80220) + v2); /*0x5e2c0a*/
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
          v6 = *((unsigned int *)((char *)&stru_A80220) + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !*(unsigned char *)(v6 + 501) /*0x5e2c7d*/
              && !*(unsigned char *)(*(unsigned int *)(v6 + 52) + 422)
              && (Network *)v6 != this
              && (uint8_t)(((HouseClass *)((void *)v3))->IsAlliedWith(*((void **)((char *)&stru_A80220) + v5)))
              && (uint8_t)(((HouseClass *)((void *)v6))->IsAlliedWith( (HouseClass *)((void *)v3))) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        nextArrayIndex = (unsigned int)((char *)&stru_A80220); /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < ((char *)&stru_A80220) ); /*0x5e2c9e*/
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
  HWND Dialog_v; // ebx
  int v3; // eax
  LONG v4; // eax
  void (__stdcall *)(HWND); // esi
  void (__stdcall *)(HWND, int); // ebp
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
  int v20; // edx
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
  uint8_t v68; // [esp+58h] [ebp-848h]
  int v69; // [esp+D2h] [ebp-7CEh]
  int v70[62]; // [esp+13Ch] [ebp-764h] BYREF
  int16_t v71; // [esp+234h] [ebp-66Ch]
  LONG v72[24]; // [esp+238h] [ebp-668h] BYREF
  LONG v73[23]; // [esp+298h] [ebp-608h] BYREF
  LONG v74[24]; // [esp+2F4h] [ebp-5ACh] BYREF
  LONG v75[23]; // [esp+354h] [ebp-54Ch] BYREF
  LONG v76[35]; // [esp+3B0h] [ebp-4F0h] BYREF
  char v77; // [esp+43Ch] [ebp-464h] BYREF
  LONG v78[221]; // [esp+52Ch] [ebp-374h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v53 = -1; /*0x5ef4fb*/
  Dialog_v = (HWND)CreateDialog(0xECu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = Dialog_v; /*0x5ef508*/
  if ( !Dialog_v ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA(Dialog_v, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vtable1 + 32))( (ObjectClass *)(g_DSurface_Hidden)); /*0x5ef528*/
  UI_Connect(Dialog_v, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  ((Dialog *)((Dialog *)Dialog_v))->Show(); /*0x5ef549*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5ef571*/
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
      while ( (uint8_t)Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        IDA_LOBYTE(v8) = 0; /*0x5ef5ba*/
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
        v6(Dialog_v, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( ((Network *)((LONG)v78))->sendGameEvent( (unsigned int *)(&dword_A8DAC0)) ) /*0x5efe87*/
          SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5efe95*/
        Network::handleTimeout( (HWND)((Network *)Dialog_v)); /*0x5efe9c*/
        v6(Dialog_v, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6(Dialog_v, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((Network *)v76) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v9 = (Modem *)*((unsigned int *)dword_A8DB38 + dword_A8DABC); /*0x5ef610*/
        if ( !*(unsigned int *)v9->__pad_0 ) /*0x5ef613*/
          v9 = (Modem *)&dword_A8DAC0; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v10 = (WinModemClass *)RA2_OPNEW(0x2088u); /*0x5ef633*/
        if ( v10 ) /*0x5ef63d*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v10); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (int *)&unk_A8EA70,
                *(unsigned int *)v9->__pad_0,
                v9->Modem_field_0x04,
                v9[3].__pad_0,
                v9->Modem_field_0x08,
                0,
                8,
                1) )
        {
          v60 = (const wchar_t *)(asc_82083C); /*0x5ef774*/
          StringCSF = GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_NullDlg_CPP), 5798); /*0x5ef788*/
          v18 = (int *)GetStringCSF( (wchar_t *)(g_Str_TXT_SELECT_SETTINGS), 0, (const char *)(g_Str_File_NullDlg_CPP), 5798); /*0x5ef793*/
          ((Dialog *)v18)->ShowMessageBox( (unsigned short *)(StringCSF), 0, 0, 0, v52); /*0x5ef79d*/
  LABEL_34:
          ShowWindow(Dialog_v, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        Modem_field_0x04 = v9[1].Modem_field_0x04; /*0x5ef67f*/
        if ( Modem_field_0x04 == 3 ) /*0x5ef685*/
          strcpy( (char *)(byte_AC11E8), v9[2].__pad_0); /*0x5ef6a1*/
        else
          CopyWideToChar( (unsigned char *)(byte_AC11E8), *(char **)(dword_A8DB68 + 4 * Modem_field_0x04), -1); /*0x5ef6bc*/
        v12 = (const char *)(*((unsigned int *)dword_A8DB38 + dword_A8DABC) + 154); /*0x5ef6e0*/
        v13 = strlen( (const char *)(v12)) + 1; /*0x5ef6e2*/
        v14 = &byte_AC11E8[strlen( (const char *)(byte_AC11E8))]; /*0x5ef6f0*/
        qmemcpy( (void *)(v14), (const void *)(v12), 4 * (v13 >> 2)); /*0x5ef6f4*/
        v16 = &v12[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v15 = &v14[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v17 = v13; /*0x5ef6f6*/
        IDA_LOBYTE(v13) = 0; /*0x5ef6f8*/
        qmemcpy( (void *)(v15), (const void *)(v16), v17 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v9, v13) ) /*0x5ef701*/
        {
          dword_A8DB30 = 2; /*0x5ef716*/
          *(unsigned int *)&dword_A8B238 = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((ModemHost *)v72) ) /*0x5ef726*/
          {
            v53 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(unsigned int *)&dword_A8B238 = 0; /*0x5ef73a*/
          v53 = 0; /*0x5ef73f*/
        }
        EventClass::GetState(0); /*0x5ef74a*/
        ShowWindow(Dialog_v, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6(Dialog_v, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v19 = (WinModemClass *)RA2_OPNEW(0x2088u); /*0x5ef7d1*/
        if ( v19 ) /*0x5ef7db*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v19); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef818*/
        {
          IDA_LOBYTE(v20) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect((Modem *)&dword_A8DAC0, v20) ) /*0x5ef828*/
          {
            dword_A8DB30 = 3; /*0x5ef838*/
            *(unsigned int *)&dword_A8B238 = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((ModemGuest *)v73) ) /*0x5ef848*/
            {
              v53 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(unsigned int *)&dword_A8B238 = 0; /*0x5ef85a*/
            v53 = 0; /*0x5ef860*/
          }
          EventClass::GetState(0); /*0x5ef86a*/
          v6(Dialog_v, 5); /*0x5ef872*/
        }
        else
        {
          v63 = (const wchar_t *)(asc_82083C); /*0x5ef88d*/
          v49 = GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_NullDlg_CPP), 5833); /*0x5ef8a1*/
          v21 = (int *)GetStringCSF( (wchar_t *)(g_Str_TXT_SELECT_SETTINGS), 0, (const char *)(g_Str_File_NullDlg_CPP), 5833); /*0x5ef8ac*/
          ((Dialog *)v21)->ShowMessageBox( (unsigned short *)(v49), 0, 0, 0, v52); /*0x5ef8b6*/
          v6(Dialog_v, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6(Dialog_v, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef8fb*/
        {
          v61 = (const wchar_t *)(asc_82083C); /*0x5efe39*/
          v51 = GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_NullDlg_CPP), 5877); /*0x5efe4d*/
          v46 = (int *)GetStringCSF( (wchar_t *)(g_Str_TXT_SELECT_SETTINGS), 0, (const char *)(g_Str_File_NullDlg_CPP), 5877); /*0x5efe58*/
          ((Dialog *)v46)->ShowMessageBox( (unsigned short *)(v51), 0, 0, 0, v52); /*0x5efe62*/
          v6(Dialog_v, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v22 = 0; /*0x5ef907*/
        v23 = 1; /*0x5ef909*/
        Member23 = (void *)((NullModemClass *)g_ClipboardBuffer)->GetMember23(); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        ((WinModemClass *)((int *)g_ClipboardBuffer))->WriteSerial(aAth, strlen(aAth)); /*0x5ef932*/
        Ticks = TimerGetTicks(); /*0x5ef944*/
        v59 = 0; /*0x5ef948*/
        v64 = TimerGetTicks(); /*0x5ef951*/
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
        v28 = TimerGetTicks(); /*0x5ef97b*/
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
    v33 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ef9c3*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9cc*/
      v33 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v34 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ef9e5*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9ee*/
        v34 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5efa00*/
      if ( (unsigned int)(v34 - v33) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efa12*/
      if ( ((ObjectTypeClass *)(&unk_A8EA70))->CreateInstance((int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efa34*/
      {
        v35 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5efa3b*/
        if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa44*/
          v35 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v36 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5efa5d*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa66*/
            v36 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5efa78*/
          if ( (unsigned int)(v36 - v35) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efa86*/
        }
        v23 = 0; /*0x5efa8d*/
        v22 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset( (void *)(v70), 0, sizeof(v70)); /*0x5efaa5*/
    v71 = 0; /*0x5efaa7*/
    if ( v23 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v70[0] = 100; /*0x5efab9*/
    *(int *)((char *)&v70[36] + 2) = ((Timer *)&stru_88732C.__pad_6[6])->GetElapsed(); /*0x5efacc*/
    IDA_LOBYTE(v70[6]) = (uint8_t)&v77; /*0x5efae7*/
    ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v70, 250, 1); /*0x5efaee*/
    Elapsed = ((Timer *)&stru_88732C.__pad_6[6])->GetElapsed(); /*0x5efb02*/
    if ( (unsigned int)(((Timer *)&stru_88732C.__pad_6[6])->GetElapsed() - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efb15*/
        if ( ((ObjectTypeClass *)(&unk_A8EA70))->CreateInstance((int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efb36*/
          break; /*0x5efb36*/
        if ( (unsigned int)(((Timer *)&stru_88732C.__pad_6[6])->GetElapsed() - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v44 = ((Timer *)&stru_88732C.__pad_6[6])->GetElapsed(); /*0x5efc7a*/
      while ( (unsigned int)(((Timer *)&stru_88732C.__pad_6[6])->GetElapsed() - v44) < 0x1E ) /*0x5efc86*/
        ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efc8d*/
      if ( v69 > *(int *)((char *)&v70[36] + 2) ) /*0x5efcb3*/
      {
        v22 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efcbc*/
      {
        if ( v68 > IDA_LOBYTE(v70[6]) ) /*0x5efccf*/
        {
          v22 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( v68 == IDA_LOBYTE(v70[6]) ) /*0x5efcd8*/
        {
          v22 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
  LABEL_73:
    g_NetworkTestFlag = 0; /*0x5efb4d*/
    v38 = GetStringCSF( (wchar_t *)(g_Str_TXT_CANCEL), 0, (const char *)(g_Str_File_NullDlg_CPP), 6293); /*0x5efb80*/
    v39 = GetStringCSF( aTxtWaitingConn, 0, (const char *)(g_Str_File_NullDlg_CPP), 6293); /*0x5efb82*/
    MessageBox = (Dialog *)CreateMessageBox( (LPARAM)((LPARAM)((LPARAM)v39)), (LPARAM)((LPARAM)((LPARAM)v38)), (LONG)&g_NetworkTestFlag); /*0x5efb8b*/
    v41 = MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    ((Dialog *)(MessageBox))->Show(); /*0x5efb9c*/
    v42 = ((Timer *)&stru_88732C.__pad_6[6])->GetElapsed(); /*0x5efbab*/
    while ( (uint8_t)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5efbc1*/
    {
      IDA_LOBYTE(v43) = 0; /*0x5efbc7*/
      ScreenSaver::Process(v43, v52); /*0x5efbc9*/
      ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efbd3*/
      if ( ((Count *)((Count *)&unk_A8EA70))->GetCountQueue() ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ((ObjectTypeClass *)(&unk_A8EA70))->CreateInstance((int)v67, (int)&v56) <= 0 ) /*0x5efc00*/
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
      v42 = ((Timer *)&stru_88732C.__pad_6[6])->GetElapsed(); /*0x5efc20*/
      while ( (unsigned int)(((Timer *)&stru_88732C.__pad_6[6])->GetElapsed() - v42) < 0x1E ) /*0x5efc2c*/
        ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5efc33*/
      if ( v69 <= *(int *)((char *)&v70[36] + 2) ) /*0x5efc59*/
      {
        if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efce5*/
        {
          if ( v68 <= IDA_LOBYTE(v70[6]) ) /*0x5efcf4*/
          {
            if ( v68 == IDA_LOBYTE(v70[6]) ) /*0x5efcff*/
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
      if ( (unsigned int)(((Timer *)&stru_88732C.__pad_6[6])->GetElapsed() - v42) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( v23 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v22 = 0; /*0x5efd32*/
  LABEL_105:
    ((Dialog *)v41)->Destroy(); /*0x5efd34*/
  LABEL_106:
    if ( v22 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      dword_A8DB30 = 0; /*0x5efddd*/
      *(unsigned int *)&dword_A8B238 = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((ModemHost *)v74) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(unsigned int *)&dword_A8B238 = 0; /*0x5efdf6*/
  LABEL_115:
      EventClass::GetState(0); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v22 != 2 ) /*0x5efd45*/
      {
        if ( v22 == 3 ) /*0x5efd48*/
        {
          v62 = (const wchar_t *)(asc_82083C); /*0x5efd65*/
          v50 = GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_NullDlg_CPP), 5868); /*0x5efd79*/
          v45 = (int *)GetStringCSF( aTxtModemOrLoop, 0, (const char *)(g_Str_File_NullDlg_CPP), 5868); /*0x5efd84*/
          ((Dialog *)v45)->ShowMessageBox( (unsigned short *)(v50), 0, 0, 0, v52); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      dword_A8DB30 = 1; /*0x5efda1*/
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
      Dialog_v = hWnd; /*0x5ef59b*/
      v6 = (void (*)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (*)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  ((Dialog *)hWnd)->Destroy(); /*0x5efec4*/
  return (AbstractClass * *)v53; /*0x5efecd*/
}
}
// 0x630B90
namespace gamemd {
void Network::Network_resetConnectionState()
{

  HWND Dialog_v; // eax
  TechnoTypeClass *v3; // ecx
  int v5; // [esp+0h] [ebp-4h]

  Dialog_v = (HWND)CreateDialog(0xEEu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))PhoneEditorDialogProc, 0); /*0x630b9f*/
  *(unsigned int *)&this->q000 = (int)Dialog_v; /*0x630ba6*/
  if ( Dialog_v ) /*0x630ba8*/
  {
    LOBYTE(this->q008) = 0; /*0x630bae*/
    this->q004 = (void *)-1; /*0x630bb2*/
    SetWindowLongA(Dialog_v, 8, (LONG)this); /*0x630bb9*/
    ((PhoneEditor *)((PhoneEditor *)this))->PopulateList(); /*0x630bc1*/
    ((Dialog *)((Dialog *)this->q000))->Show(); /*0x630bc8*/
    while ( (int)this->q004 < 0 ) /*0x630bd2*/
    {
      if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x630bdb*/
        break; /*0x630bdb*/
      LOBYTE(v3) = 0; /*0x630bdd*/
      ScreenSaver::Process(v3, v5); /*0x630bdf*/
    }
    ((Dialog *)this->q000)->Destroy(); /*0x630bed*/
    if ( LOBYTE(this->q008) == 1 ) /*0x630bf6*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x630bfd*/
  }
  return this->q004 == (void *)1; /*0x630c05*/

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
  int16_t v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  int v17; // ecx
  double v18; // st7
  double *v19; // eax
  int v20; // eax
  void (***v21)(unsigned int, int, unsigned int *); // ecx
  HWND v22; // eax
  unsigned int v23[2]; // [esp+8h] [ebp-8h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v6 = 0.0; /*0x643c5c*/
  v7 = *((char *)this + 97); /*0x643c62*/
  if ( v7 > 0 ) /*0x643c6c*/
  {
    v8 = (double *)((char *)this + 8); /*0x643c6e*/
    do /*0x643c77*/
    {
      v6 = v6 + *v8++; /*0x643c71*/
      --v7; /*0x643c76*/
    }
    while ( v7 ); /*0x643c77*/
  }
  LOWORD(result) = Math::RoundToInt(v6); /*0x643c88*/
  v10 = result; /*0x643c90*/
  v11 = *(double *)((char *)this + 8 * aP1 + 8); /*0x643c94*/
  v12 = *(double *)&this->q048 * 0.01 * aP2; /*0x643ca1*/
  *(double *)((char *)this + 8 * aP1 + 8) = v12; /*0x643ca4*/
  if ( v12 > *(double *)&this->q048 ) /*0x643cb0*/
  {
    *(unsigned int *)((char *)this + 8 * aP1 + 8) = *((unsigned int *)this + 18); /*0x643cb5*/
    result = *((unsigned int *)this + 19); /*0x643cb9*/
    *(unsigned int *)((char *)this + 8 * aP1 + 12) = result; /*0x643cbc*/
  }
  v14 = v11 < *(double *)((char *)this + 8 * aP1 + 8); /*0x643cc0*/
  v15 = 0; /*0x643cc0*/
  v16 = v11 == *(double *)((char *)this + 8 * aP1 + 8); /*0x643cc0*/
  LOWORD(result) = v13; /*0x643cc4*/
  if ( v11 != *(double *)((char *)this + 8 * aP1 + 8) ) /*0x643cc9*/
  {
    v17 = *((char *)this + 97); /*0x643ccf*/
    v18 = 0.0; /*0x643cd3*/
    if ( v17 > 0 ) /*0x643cdf*/
    {
      v19 = (double *)((char *)this + 8); /*0x643ce1*/
      do /*0x643cea*/
      {
        v18 = v18 + *v19++; /*0x643ce4*/
        --v17; /*0x643ce9*/
      }
      while ( v17 ); /*0x643cea*/
    }
    v23[0] = v10; /*0x643cf0*/
    LOWORD(v20) = Math::RoundToInt(v18); /*0x643cff*/
    v21 = *(void (****)(unsigned int, int, unsigned int *))&this->q004; /*0x643d04*/
    v23[1] = v20; /*0x643d07*/
    if ( v21 && *((unsigned char *)this + 96) ) /*0x643d11*/
      (**v21)(v21, 4526, v23); /*0x643d24*/
    v22 = *(HWND *)&this->q064; /*0x643d26*/
    if ( v22 ) /*0x643d2b*/
      return SendMessageA( (HWND)(v22), 0xFu, 0, 0); /*0x643d34*/
    else
      return LoadScreen::Render(int a1,v4,(int) &savedregs, aP3); /*0x643d4b*/
  }
  return result; /*0x643d3a*/

}
}
// 0x646D70
namespace gamemd {
int sub_646D70()
{
  int result; // eax

  if ( dword_A8B238[0] == 4 ) /*0x646d77*/
// 0x543080
    return ((Network *)(unk_A8E9C0))->Disconnect(); /*0x646d7e*/
  return result; /*0x646d83*/
}
}
// 0x6471A0
namespace gamemd {
int Network::AddFrameEvent()
{

  char *v1; // eax
  uint8_t v3; // [esp+0h] [ebp-74h]
  char v4[112]; // [esp+4h] [ebp-70h] BYREF

  v3 = 19; /*0x6471a8*/
  if ( *(unsigned int *)&dword_A8B238 == 4 /*0x6471cb*/
    && byte_A8DBA0
    && dword_A8DA84 > 2
    && ((SessionClass *)(int)&dword_A8B238)->IsValidHouse( 0) )
  {
    v3 = 39; /*0x6471d4*/
  }
  v1 = (char *)((EventClass *)v4)->AddEvent( (int)dword_A83D4C->Object_field_0x30, v3); /*0x6471ec*/
  if ( (int)dword_A802C8>= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  qmemcpy( (char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)(v1), 0x6Fu); /*0x647219*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64722c*/
  ++dword_A802C8; /*0x647243*/
  dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/

}
}
// 0x6475F0
namespace gamemd {
AbstractClass * * Network::QueueProcessingLoop()
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
  char Object_field_0x30; // al
  int vtable0; // edx
  char *v44; // edi
  int v45; // eax
  char *v46; // edi
  int v4... [21708 chars total]
}
} // namespace gamemd

// 0x64AC90
namespace gamemd {
int Network::syncGameState(void *a1_1)
{

  int v2; // ebx
  int result; // eax

  v2 = (unsigned int)__2_YAPAXI_Z(0x1C7u); /*0x64ac9f*/
  qmemcpy((void *)v2, this, 0x1C4u); /*0x64acab*/
  this = (Network *)((char *)this + 452); /*0x64acab*/
  *(unsigned short *)(v2 + 452) = *(unsigned int *)&this->q000; /*0x64acad*/
  *(unsigned char *)(v2 + 454) = BYTE2(this->q000); /*0x64acaf*/
  result = *(unsigned int *)stru_A8BB1C.__pad_14; /*0x64acb0*/
  if ( *(int *)&stru_A8BB1C.__pad_14[8] < *(int *)stru_A8BB1C.__pad_14 /*0x64aceb*/
    || (stru_A8BB1C.__pad_14[5] || !*(unsigned int *)stru_A8BB1C.__pad_14)
    && *(int *)&stru_A8BB1C.__pad_14[12] > 0
&& (result = (*((int (**)(void **, int, unsigned int))stru_A8BB1C.q00C + 2))( (void **)(&stru_A8BB1C.q00C), *(unsigned int *)stru_A8BB1C.__pad_14 + *(unsigned int *)&stru_A8BB1C.__pad_14[12], 0), (unsigned char)result) )




  {
    result = (*(unsigned int *)&stru_A8BB1C.__pad_14[8])++; /*0x64acf3*/
    *((unsigned int *)stru_A8BB1C.q010 + result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/

}
}
// 0x64C380
namespace gamemd {
AbstractClass * * Network::ProcessEventList(int a1, int * a2, int a3)
{

  int nextArrayIndex; // ebx
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
  int *vtable3; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // ebx
  int v30; // ebp
  int v31; // esi
  wchar_t *StringCSF; // eax
  int v33; // esi
  int v34; // ebx
  char v35; // dl
  bool v36; // cl
  char *v37; // edx
  char *v38; // eax
  int v39; // edx
  uint8_t v41; // si
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
  int v52; // [esp+24h] [ebp-2Ch]
  int v53; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  int v55; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  nextArrayIndex = dword_A80238; /*0x64c384*/
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
          Debug::Log("DoList: Moving event from frame %d to frame %d\n"); /*0x64c3e1 G57w11: IDA push seq @ 0x64c3e1 +2 reg-vararg(s) omitted*/
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
              Debug::Log("DoList: Moving EXIT event from frame %d to frame %d\n"); /*0x64c484 G57w11: IDA push seq @ 0x64c484 +2 reg-vararg(s) omitted*/
              v8 = dword_A8E2DC; /*0x64c49e*/
              *(int *)((char *)&dword_8B4207 + 111 * (((unsigned short)i + (unsigned short)dword_8B41FC) & 0x3FFF)) = dword_A8E2DC; /*0x64c4a4*/
            }
          }
        }
        if ( (int)dword_A8ED84 > v8 ) /*0x64c4b8*/
        {
          dword_A8E2D8 = 0; /*0x64c4ba*/
          dword_A8E2DC = 0; /*0x64c4c0*/
          dword_A8E2E0 = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( nextArrayIndex <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = dword_A83ED4; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(&dword_A8022C->vtable1 + v46); /*0x64c4ec*/
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
          v36 = byte_A83EE8[111 * (uint8_t)(v11 + v33)] != (char)v34; /*0x64cb28*/
          if ( byte_A83EEE[111 * (uint8_t)(v11 + v33)] != v35 /*0x64cb5e*/
            || *(int *)((char *)&dword_A83EEA + 111 * (uint8_t)(v11 + v33)) != v55
            || byte_A83EF3[111 * (uint8_t)(v11 + v33)] != v54
            || *(int *)((char *)&dword_A83EEF + 111 * (uint8_t)(v11 + v33)) != v53 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = byte_A83EE8[111 * (uint8_t)(v11 + v33)]; /*0x64cb72*/
        v37 = (char *)&dword_A83EEA + 111 * (uint8_t)(v11 + v33); /*0x64cb7a*/
        v38 = (char *)&dword_A83EEF + 111 * (uint8_t)(v11 + v33); /*0x64cb81*/
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
        v11 = (uint8_t)(dword_A83ED4 + 1); /*0x64cc21*/
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
    v52 = byte_8B4206[111 * v15]; /*0x64c54c*/
    if ( v52 != *(unsigned int *)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(int *)((char *)&dword_8B4207 + 111 * v15); /*0x64c556*/
    if ( (int)dword_A8ED84 < v16 || (byte_8B4205[111 * v15] & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( (int)dword_A8ED84 <= v16 /*0x64c5a9*/
      || byte_8B4204[111 * v15] == 28
      || !*(unsigned int *)&dword_A8B238
      || *(unsigned int *)&dword_A8B238 == 5 )
    {
      break; /*0x64c5a9*/
    }
    Debug::Log("Packet received too late!\n"); /*0x64c5b4 G57w11: IDA push seq @ 0x64c5b4*/
    Debug::Log("--------- Event data: -------------------\n"); /*0x64c5be G57w11: IDA push seq @ 0x64c5be*/
    Debug::Log("Type:       %s\n"); /*0x64c5d4 G57w11: IDA push seq @ 0x64c5d4 +1 reg-vararg(s) omitted*/
    Debug::Log("Frame:      %d\n"); /*0x64c5e2 G57w11: IDA push seq @ 0x64c5e2 +1 reg-vararg(s) omitted*/
    Debug::Log("ID:         %d\n"); /*0x64c5f1 G57w11: IDA push seq @ 0x64c5f1 +1 reg-vararg(s) omitted*/
    Debug::Log("MaxAhead=%d\n"); /*0x64c602 G57w11: IDA push seq @ 0x64c602 +1 reg-vararg(s) omitted*/
    Debug::Log("Frame=%d\n"); /*0x64c613 G57w11: IDA push seq @ 0x64c613 +1 reg-vararg(s) omitted*/
    Debug::Log("FrameSendRate=%d\n"); /*0x64c623 G57w11: IDA push seq @ 0x64c623 +1 reg-vararg(s) omitted*/
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
    vtable3 = &dword_A8022C->vtable1; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      v26 = *vtable3; /*0x64c7d3*/
      if ( *vtable3 ) /*0x64c7d3*/
      {
        if ( *(unsigned int *)(v26 + 48) == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      ++vtable3; /*0x64c7df*/
      if ( v25 >= v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    *(unsigned char *)(v26 + 584) = 1; /*0x64c7e7*/
LABEL_57:
    if ( ((Network *)v26)->CountDisconnectedHouses() == 1 ) /*0x64c7f8*/
    {
      if ( *(unsigned int *)&dword_A8B238 != 4 || byte_A8F900 ) /*0x64c809*/
      {
LABEL_66:
        if ( !((Network *)v26)->processQueue() ) /*0x64c852*/
          ((Network *)v26)->SendOffer(); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      byte_A8B8C1 = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c819*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 && !byte_A8F900 && dword_A83D4C && dword_A83D4C == (Object *)v26 ) /*0x64c83a*/
    {
      Debug::Log("Sending game results because I quit, but didn't see completion"); /*0x64c841 G57w11: IDA push seq @ 0x64c841*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( byte_A8ED74 && byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c885*/
      Debug::Log("Exit Event: ID:%d (%s),  Event Frame:%d,  My Frame:%d\n"); /*0x64c8b3 G57w11: IDA push seq @ 0x64c8b3 +2 reg-vararg(s) omitted*/
    v27 = ((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF; /*0x64c8cd*/
    if ( byte_8B4206[111 * v27] != dword_A83D4C->Object_field_0x30 ) /*0x64c8e2*/
    {
      if ( byte_8B4204[111 * v27] == 19 ) /*0x64c923*/
      {
        Debug::Log("Processing EXIT event on frame %d\n"); /*0x64c935 G57w11: IDA push seq @ 0x64c935 +1 reg-vararg(s) omitted*/
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
                v30 = a3 + 24 * v29; /*0x64c986*/
                do /*0x64c9a5*/
                {
                  ++v29; /*0x64c993*/
                  qmemcpy((void *)v30, (const void *)(v30 + 24), 0x18u); /*0x64c994*/
                  v30 += 24; /*0x64c99a*/
                }
                while ( v29 < (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) - 1 ); /*0x64c9a5*/
                v13 = v49; /*0x64c9a7*/
              }
              HandleNetworkPlayerDisconnect( (wchar_t *)(v46), 0); /*0x64c9b1*/
            }
          }
        }
        if ( (dword_A8D5F8 & 2) != 0 && byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c9ea*/
        {
          v31 = v47; /*0x64c9f0*/
          *(unsigned char *)(v47 + 492) = 0; /*0x64c9f4*/
          *(unsigned int *)(v47 + 588) = *(unsigned int *)&dword_8871E0->__pad_13BC[120]; /*0x64ca07*/
          ((HouseClass *)v45)->CanDetect(); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy( (char *)(Destination), (const char *)(g_INI_Key_Computer), 0x14u); /*0x64ca2d*/
            v58 = 0; /*0x64ca35*/
          }
          else
          {
            Destination[0] = (uint8_t)g_INI_Key_Computer; /*0x64ca1b*/
          }
          if ( Destination != (char *)(v47 + 90100) ) /*0x64ca46*/
          {
            qmemcpy( (void *)(v47 + 90100), (const void *)(Destination), 0x14u); /*0x64ca51*/
            *(unsigned char *)(v47 + 90120) = v58; /*0x64ca53*/
            v31 = v47; /*0x64ca54*/
          }
          StringCSF = GetStringCSF( (wchar_t *)(g_Str_TXT_COMPUTER), 0, (const char *)(g_Str_File_Queue_CPP), 5672); /*0x64ca6b*/
          wcsncpy( (wchar_t *)(v31 + 90154), (const wchar_t *)(StringCSF), 0x15u); /*0x64ca78*/
          *(unsigned short *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log("Removing a player %s:%d\n", "D:\\ra2mdpost\\Queue.CPP", 0x162a); /*0x64ca95 G57w11: IDA push seq @ 0x64ca95*/
          --dword_A8B54C; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    dword_8373A0 = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (EventClass *)&byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)]; /*0x64c90a*/
LABEL_73:
    ((EventClass *)v21)->ProcessEvent(); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    dword_8373A0 = timeGetTime() - v20; /*0x64c70c*/
    v21 = (EventClass *)&byte_8B4204[111 * (((unsigned short)v13 + (unsigned short)dword_8B41FC) & 0x3FFF)]; /*0x64c723*/
    if ( LOBYTE(v21->EventClass_field_0x0) == 4 ) /*0x64c733*/
    {
      if ( dword_A83ED0 < 256 ) /*0x64c743*/
      {
        v22 = &byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)]; /*0x64c762*/
        v23 = (char *)&unk_A83EDC + 111 * dword_A83ED8; /*0x64c774*/
        qmemcpy( (void *)(v23), (const void *)(v22), 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(unsigned short *)v23 = *(unsigned short *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        dword_A8ADDC[dword_A83ED8] = timeGetTime(); /*0x64c78c*/
        dword_A83ED8 = (uint8_t)(dword_A83ED8 + 1); /*0x64c7a6*/
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
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x64c683*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(wchar_t **)((char *)&dword_8B4207 + 111 * v15) != dword_A8ED84 /*0x64c6f2*/
    || dword_B04474[(uint8_t)(*(int *)((char *)&dword_8B4207
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
        (uint8_t *)&byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v49) & 0x3FFF)]);
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    ((Multiplay *)((Multiplay *)&byte_8B4204[111 * (((unsigned short)dword_8B41FC + (unsigned short)v13) & 0x3FFF)]))->LogToSYNC_NOMPDEBUG(); /*0x64ccba*/
  }
  ++dword_A8DAB4; /*0x64ccdd*/
  v44 = GetStringCSF( aTxtStop, 0, (const char *)(g_Str_File_Queue_CPP), 5723); /*0x64ccf7*/
  v43 = (int *)GetStringCSF( aTxtOutOfSync, 0, (const char *)(g_Str_File_Queue_CPP), 5722); /*0x64cd02*/
  ((Dialog *)v43)->ShowMessageBox( (unsigned short *)(v44), 0, 0, 0, (int)v45); /*0x64cd0c*/
  --dword_A8DAB4; /*0x64cd1b*/
  return 0; /*0x64cc52*/

}
}
// 0x6521C0
namespace gamemd {
AbstractClass * * Network::RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{

  char *v27; // edi

  *(unsigned int *)((char *)&a1 + 3) = dword_A8ED84; /*0x6521c5*/
  if ( dword_A802C8 >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &byte_A802D4[111 * dword_A802D0]; /*0x6521eb*/
  qmemcpy( (void *)(v27), (const void *)(&a1), 0x6Cu); /*0x6521f2*/
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
  int16_t v13; // [esp+48h] [ebp-19Ch]
  char v14; // [esp+4Ah] [ebp-19Ah]

  Debug::Log("Sending NET_PORT_UNREACHABLE packets\n"); /*0x6523ab G57w11: IDA push seq @ 0x6523ab*/
  result = *(unsigned int *)&dword_A8B238; /*0x6523b0*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6523bb*/
  {
    ((Network *)((Network *)&unk_A8E9C0))->Disconnect(); /*0x6523c9*/
    QueueCount = ((Network *)(&unk_A8E9C0))->GetQueueCount(); /*0x6523d8*/
    for ( i = 0; i < *(int *)&stru_B052C0[32]; ++i ) /*0x6523e7*/
    {
      memset( (void *)(v12), 0, sizeof(v12)); /*0x6523f8*/
      v13 = 0; /*0x6523fa*/
      v14 = 0; /*0x6523fc*/
      v12[0] = 47; /*0x652402*/
      strcpy((char *)&v12[1], ToWideStringChar( (IUnknown *)((char *)*dword_A8DA78))); /*0x65242c*/
      v4 = (void *)((Network *)&stru_B052C0[16])->checkTimeout( i); /*0x65243f*/
      if ( v4 ) /*0x652443*/
      {
        v5 = ToWideStringChar( (IUnknown *)((char *)*dword_A8DA78)); /*0x65244d*/
        if ( _strcmpi((char *)v4, v5) ) /*0x652454*/
        {
          Debug::Log("Sending NET_PORT_UNREACHABLE to %s\n"); /*0x652466 G57w11: IDA push seq @ 0x652466 +1 reg-vararg(s) omitted*/
          v6 = (int *)((Network *)&stru_B052C0[16])->processAcknowledgment( (IUnknown *)(v4)); /*0x652474*/
          v11[0] = *v6; /*0x65247b*/
          v11[1] = v6[1]; /*0x652485*/
          v11[2] = v6[2]; /*0x652491*/
          LOWORD(v7) = ((Network *)&stru_B052C0[16])->handleDisconnect( (IUnknown *)(v4)); /*0x652495*/
          ((Network *)&unk_A8E9C0)->SendMessage( (int)v12, 47, 1, (int)v11, v7, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = TimerGetTicks(); /*0x6524d3*/
    while ( ((Network *)(&unk_A8E9C0))->GetQueueCount() > QueueCount ) /*0x6524e6*/
    {
      v8 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v9 = TimerGetTicks() - Ticks; /*0x6524fe*/
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
      return ((Connection *)((Connection *)&unk_A8E9C0))->Close(); /*0x652531*/
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
    __3_YAXPAX_Z(*(void **)this->q004); /*0x663921*/
    Network_field_0x10 = (char *)this->q010; /*0x663926*/
    if ( (int)Network_field_0x10 > 0 ) /*0x66392e*/
    {
      v3 = Network_field_0x10 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( *(unsigned int *)&this->q010 = v3; /*0x66393a*/
            v4 < (int)this->q010;
            *((unsigned int *)this->q004 + v4 - 1) = *((unsigned int *)this->q004 + v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  this->__pad_14[4] = 0; /*0x663953*/
  *(unsigned int *)&this->__pad_14[8] = 0; /*0x663956*/

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
  memset( (void *)(v11), 0, 338); /*0x6639e6*/
  TimerGetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !this->__pad_14[4] ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log("About to send master player list to router\n"); /*0x663a1d G57w11: IDA push seq @ 0x663a1d*/
  Network_field_0x10 = (int)v1->Network_field_0x10; /*0x663a22*/
  LOBYTE(v11[0]) = 1; /*0x663a2a*/
  BYTE1(v11[0]) = Network_field_0x10; /*0x663a2f*/
  if ( Network_field_0x10 > 0 ) /*0x663a33*/
  {
    v5 = (unsigned char *)((char *)&v11[10] + 3); /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      Network_field_0x4 = (const void **)v1->Network_field_0x4; /*0x663a40*/
      qmemcpy(v5 - 41, Network_field_0x4[v2], 0x2Au); /*0x663a51*/
      if ( ((IPXManagerClass *)&unk_A8E9C0)->send( *(char *)Network_field_0x4[v2]) == -1 /*0x663a80*/
        && dword_A83D4C->Object_field_0x30 != (void *)**((char **)this->q004 + v2) )
      {
        Debug::Log("Marking player %s as inactive\n"); /*0x663a89 G57w11: IDA push seq @ 0x663a89 +1 reg-vararg(s) omitted*/
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
  ((Network *)&unk_A8E9C0)->SendPacket( (int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log("Player list sent to router\n"); /*0x663ac1 G57w11: IDA push seq @ 0x663ac1*/
  Ticks = TimerGetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue(&unk_A8E9C0) > 0 ) /*0x663af3*/
  {
    v7 = 900; /*0x663afc*/
    if ( Ticks != -1 ) /*0x663b02*/
    {
      v8 = TimerGetTicks() - Ticks; /*0x663b0d*/
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

  ((Waypoint*)((Waypoint *)&v6.__pad_0[12]))->InitInvalid(); /*0x6640ea*/
  result = *(wchar_t **)((char *)&stru_A8EB00 + 416); /*0x6640ef*/
  if ( *(int *)((char *)&stru_A8EB00 + 416) > 0 ) /*0x6640f6*/
  {
    for ( result = (wchar_t *)Network::SendPacketThunk2( /*0x66411c*/
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4);
          result;
          result = (wchar_t *)Network::SendPacketThunk2(
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4) )
    {
      if ( (unsigned char)dword_B04E9C == 5 ) /*0x664132*/
      {
        Debug::Log("Received change of address notification.\n"); /*0x664151 G57w11: IDA push seq @ 0x664151*/
        v2 = BYTE1(dword_B04E9C); /*0x66415e*/
        *(unsigned int *)&v4[1] = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v4[3] = 0; /*0x664174*/
        ((Waypoint*)&v6)->InitInvalid(); /*0x664179*/
        ((NetworkID *)((NetworkID *)&v6))->Assign( (unsigned int *)(&v6.__pad_0[24]), (int)&v4[1], 0); /*0x66418e*/
        inited = (char *)((Network *)&v6.__pad_0[28])->initConnection( (int)dword_A83D4C->Object_field_0x30, (unsigned int *)(&v6), v2); /*0x6641a7*/
        if ( (int)dword_A802C8< 128 ) /*0x6641b6*/
        {
          qmemcpy( (char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)(inited), 0x6Fu); /*0x6641d2*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6641df*/
          dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x6641f6*/
          ++dword_A802C8; /*0x6641fc*/
        }
      }
      else
      {
        Debug::Log("Got spurious message %d from the router\n"); /*0x66413f G57w11: IDA push seq @ 0x66413f +1 reg-vararg(s) omitted*/
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
  int16_t v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    ((Waypoint*)&stru_B052C0)->InitInvalid(); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v5 = 0; /*0x6642db*/
  v6 = 0; /*0x6642e5*/
  Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v5); /*0x6642ea*/
  ((Network *)((Network *)&stru_B052C0))->SetPort(0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)this->q010 > 0 ) /*0x664302*/
  {
    while ( _strcmpi((*((unsigned int *)this->q004 + v3) + 1), (char *)aP1) ) /*0x66431b*/
    {
      if ( ++v3 >= (int)this->q010 ) /*0x664323*/
        return (char *)&stru_B052C0; /*0x664330*/
    }
    v7 = *(unsigned int *)(*((unsigned int *)this->q004 + v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v7); /*0x66434a*/
    ((Network *)((Network *)&stru_B052C0))->SetPort(*(unsigned short *)(*((unsigned int *)this->q004 + v3) + 37)); /*0x66435f*/
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
  result = (char *)(0); /*0x664404*/
  if ( (int)Network_field_0x10 > 0 ) /*0x66440a*/
  {
    Network_field_0x4 = (char **)this->q004; /*0x66440c*/
    for ( i = Network_field_0x4; **i != aP1; ++i ) /*0x664413*/
    {
      if ( (int)++result >= (int)Network_field_0x10 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = Network_field_0x4[(unsigned int)result]; /*0x66442c*/
    *(unsigned short *)(result + 37) = a3; /*0x664434*/
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

  *(unsigned int *)&this->q024 = 0; /*0x69b540*/
  result = &this->__pad_64[8]; /*0x69b547*/
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
AbstractClass * * Network::SyncPlayerList()
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

  owningHouseIndex = dword_B77900; /*0x792f10*/
  dword_A8B54C = 1; /*0x792f18*/
  v2 = 0; /*0x792f23*/
  if ( dword_B77900> 0 ) /*0x792f28*/
  {
    v3 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v3 >= 0 && v2 < owningHouseIndex ) /*0x792f38*/
        qmemcpy( (void *)(v16), (char *)dword_B77908+ v3, sizeof(v16)); /*0x792f4b*/
      v4 = CharToWideString( (unsigned char *)(&v16[9])); /*0x792f51*/
      v5 = ((Player *)(((Player *)v4)))->FindByName(); /*0x792f58*/
      v6 = v5; /*0x792f5d*/
      if ( v5 && (uint8_t)IsKnownPointer((ObjectClass *)v5) ) /*0x792f65*/
        *(unsigned int *)&v6->q07B = v16[5]; /*0x792f72*/
      v7 = ((String *)((String *)&g_WindowManager.__pad_EC[684]))->GetOrEmpty(); /*0x792f7a*/
      if ( _strcmpi((char *)&v16[9], v7) ) /*0x792f85*/
      {
        if ( (v16[0] & 1) != 0 ) /*0x792f96*/
        {
          v8 = CharToWideString( (unsigned char *)(&v16[9])); /*0x792f9c*/
          v9 = ((Player *)(((Player *)v8)))->FindByName(); /*0x792fa3*/
          ((Network *)((Network *)(v9 + 20)))->CopyAddress( (unsigned int *)(&v14), (int)v15); /*0x792fb5*/
          ((NetworkID *)((NetworkID *)&stru_A8BB1C))->Assign( (unsigned int *)(&v14), (int)v15, 0); /*0x792fcb*/
        }
        v13 = 0; /*0x792fde*/
(*(void (**)(LPVOID, unsigned int, int *))(*(unsigned int *)g_UIPointerTable + 32))( /*0x792fea*/ g_UIPointerTable, v16[6], (int *)(&v13));



        v10 = v13; /*0x792fed*/
        if ( v13 < 0 ) /*0x792ff3*/
        {
          v10 = 0; /*0x792ff5*/
          v13 = 0; /*0x792ff7*/
        }
        v11 = dword_A8B54C; /*0x792ffb*/
        *((unsigned int *)&dword_B7790C+ dword_A8B54C) = v10; /*0x793001*/
        dword_A8B54C = v11 + 1; /*0x793009*/
      }
      owningHouseIndex = dword_B77900; /*0x79300f*/
      ++v2; /*0x793014*/
      v3 += 108; /*0x793015*/
    }
    while ( v2 < dword_B77900); /*0x79301a*/
  }
  (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 48))(*(unsigned int *)&dword_887628); /*0x79302a*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x793039*/
  {
    ((Network *)((Network *)(dword_A8DA78[i] + 40)))->FormatAddress(0); /*0x793048*/
    Debug::Log("Adding broadcast address %s\n"); /*0x793053 G57w11: IDA push seq @ 0x793053 +1 reg-vararg(s) omitted*/
    (*(void (**)(unsigned int, int, unsigned int))(**(unsigned int **)&dword_887628+ 44))( /*0x793071*/
      *(unsigned int *)&dword_887628,
      dword_A8DA78[i] + 40,
      0);
  }
  ((Network *)(&stru_A8BB1C))->FormatAddress(0); /*0x793085*/
  Debug::Log("User_List_To_Session_Players: Session.HostAddress = %s\n"); /*0x793090 G57w11: IDA push seq @ 0x793090 +1 reg-vararg(s) omitted*/

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

  if ( ((String*)((String *)&g_WindowManager.__pad_14[16]))->Length() ) /*0x79c3a8*/
  {
    result = time(0) - *(unsigned int *)g_WOL_BuddyList.__pad_20; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return (AbstractClass * * int)result; /*0x79c3c6*/
    ((DeleteAndZero *)&g_WindowManager.__pad_14[16])->Alt2(); /*0x79c3d1*/
  }
  result = *(unsigned int *)&dword_B76980; /*0x79c3d6*/
  if ( *(unsigned int *)&dword_B76980) /*0x79c3dd*/
  {
    if ( *(int *)&dword_B76980> 0 ) /*0x79c3e6*/
    {
      ((String *)((String *)&g_WindowManager.__pad_14[16]))->Reassign((const char **)dword_B76988); /*0x79c3f7*/
      v2 = 0; /*0x79c401*/
      if ( *(unsigned int *)&dword_B76980) /*0x79c405*/
      {
        if ( *(int *)&dword_B76980<= 0 ) /*0x79c40b*/
          v2 = *(unsigned int *)&dword_B76980- 1; /*0x79c40d*/
        j_DeleteAndZero( (void *)((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2))); /*0x79c419*/
memcpy( /*0x79c442*/ (void *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2), (const void *)(&stru_B76900.parachute->AnimClass_field_0x4 + v2), 4 * (*(unsigned int *)&dword_B76980+ 0x3FFFFFFF * (v2 + 1)));



        --*(unsigned int *)&dword_B76980; /*0x79c456*/
        if ( 3 * *(unsigned int *)&dword_B76980<= *(int *)&stru_B76900.v3 ) /*0x79c460*/
        {
          v3 = *(unsigned int *)&stru_B76900.v3 / 2; /*0x79c469*/
          if ( *(unsigned int *)&stru_B76900.v3 / 2 < 10 ) /*0x79c46e*/
            v3 = 10; /*0x79c470*/
          if ( v3 < *(int *)&stru_B76900.v3 ) /*0x79c477*/
          {
            v4 = (AnimClass *)RA2_OPNEW(4 * v3); /*0x79c482*/
            parachute = dword_B76988; /*0x79c487*/
            v4 = v4; /*0x79c492*/
            if ( dword_B76988) /*0x79c494*/
            {
              qmemcpy( (void *)(v4), dword_B76988, 4 * *(unsigned int *)&dword_B76980); /*0x79c49e*/
              parachute = dword_B76988; /*0x79c4a0*/
            }
            RA2_OPDEL(parachute); /*0x79c4a7*/
            dword_B76988= v4; /*0x79c4af*/
            *(unsigned int *)&stru_B76900.v3 = v3; /*0x79c4b5*/
          }
        }
      }
    }
    *(unsigned int *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c4c3*/
    memset( (void *)(v7), 0, sizeof(v7)); /*0x79c4d3*/
    strcpy( (char *)(&v7[36]), ((String *)((String *)&g_WindowManager.__pad_14[16]))->GetOrEmpty()); /*0x79c500*/
    return (*(int (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (char *)(v7)); /*0x79c512*/
  }
  return (AbstractClass * * int)result; /*0x79c518*/
}
}
// 0x7B2DB0
namespace gamemd {
int Network::finalizeSession()
{

  IPXInterfaceClass::bindSocket(  (char *)this); /*0x7b2db3*/
  *((unsigned int *)this + 64719) = 0; /*0x7b2dc4*/
  *((unsigned int *)this + 64720) = 0; /*0x7b2dca*/
  *((unsigned char *)this + 258884) = 1; /*0x7b2dd0*/
  *((unsigned char *)this + 258885) = 0; /*0x7b2dd7*/
  *((unsigned int *)this + 64718) = (unsigned int)&vt_DynamicVectorClass;
  *((unsigned int *)this + 64723) = 10; /*0x7b2de3*/
  *((unsigned int *)this + 64722) = 0; /*0x7b2de9*/
  *((unsigned int *)this + 64853) = 0; /*0x7b2def*/
  *((unsigned int *)this + 64854) = 0; /*0x7b2df5*/
  *((unsigned char *)this + 259420) = 1; /*0x7b2dfb*/
  *((unsigned char *)this + 259421) = 0; /*0x7b2e02*/
  *((unsigned int *)this + 64852) = (unsigned int)&vt_DynamicVectorClass;
  *((unsigned int *)this + 64857) = 10; /*0x7b2e0e*/
  *((unsigned int *)this + 64856) = 0; /*0x7b2e14*/
  *((unsigned short *)this + 129406) = 0; /*0x7b2e1a*/
  *((unsigned int *)this + 64716) = 0; /*0x7b2e21*/
  *((unsigned int *)this + 64858) = 0; /*0x7b2e27*/
  *(unsigned int *)&this->q000 = (int)&vt_UDPInterfaceClass; /*0x7b2e2d*/
  *((unsigned int *)this + 64717) = -1; /*0x7b2e33*/
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
        memset( (void *)(v8), 0, sizeof(v8)); /*0x793c08*/
        v9 = 0; /*0x793c0a*/
        v10 = 0; /*0x793c0c*/
        v8[0] = 13; /*0x793c12*/
        strcpy((char *)&v8[1], ((String *)((String *)&g_WindowManager.__pad_EC[684]))->GetOrEmpty()); /*0x793c39*/
        ToWideStringChar( (IUnknown *)((char *)dword_A8DA90[*v3])); /*0x793c4b*/
        Debug::Log("Sending keepalive NET_PING packet to %s\n"); /*0x793c56 G57w11: IDA push seq @ 0x793c56 +1 reg-vararg(s) omitted*/
        ((Network *)((int)&unk_A8E9C0))->SendToPlayer((int)((Network *)((int)&unk_A8E9C0)), (int)v8, 47, 0, (wchar_t *)dword_A8DA90[*v3]); /*0x793c76*/
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
    return (*(int (**)(LPVOID, char *))(*(unsigned int *)ppv + 60))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), aG); /*0x7a2741*/
  return result; /*0x7a2744*/
}
}
// 0x53F540
namespace gamemd {
AbstractClass * * sub_53F540()
{
  uint16_t v1; // si

  v1 = *(unsigned short *)&stru_AA0398.__pad_D8[248]; /*0x53f54d*/
  (*(void (**)(unsigned int, int))(**(unsigned int **)&dword_887628+ 80))( /*0x53f556*/
    *(unsigned int *)&dword_887628,
    stru_A8EB00.ObjectTypeClass[45]);
  dword_AA05A8 = (*(uint8_t (**)(unsigned int, unsigned int))(**(unsigned int **)&dword_887628+ 60))( /*0x53f570*/
                   *(unsigned int *)&dword_887628,
                   v1);
  if ( dword_AA05A8 ) /*0x53f576*/
  {
    if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)&dword_887628+ 28))(*(unsigned int *)&dword_887628) ) /*0x53f580*/
    {
      dword_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (**)(unsigned int))(**(unsigned int **)&dword_887628+ 4))(*(unsigned int *)&dword_887628); /*0x53f59a*/
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
      IDA_LOBYTE(v2) = 1; /*0x5f014d*/
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
        IDA_LOBYTE(v3) = 1; /*0x5f0168*/
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

  result = (unsigned int *)(0); /*0x5f681f*/
  v5 = *(unsigned int *)(a1 + 16) - 1; /*0x5f6826*/
  v10 = (unsigned int *)(0); /*0x5f6827*/
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
  char *v5; // edx
  const wchar_t *Class; // edi
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND DlgItem; // esi
  LRESULT v10; // edi
  int v11; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 0; /*0x64ad1b*/
  result = *(unsigned int *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
  LABEL_5:
    *(unsigned int *)&stru_A8BB1C.__pad_34[32 * a2 + 16 + 4 * result] = a1; /*0x64ad41*/
    ++*(unsigned int *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad53*/
    result = *(unsigned int *)&dword_A8B238; /*0x64ad5a*/
    if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)((Network *)((Network *)&unk_A8E9C0))->GetClass(a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = (const wchar_t *)*dword_A8DA78; /*0x64ad84*/
      ((Network *)((Network *)&unk_A8E9C0))->GetClass(a2); /*0x64ad8c*/
      Debug::Log("Player %s votes to kick player %s from the game\n"); /*0x64ad98 G57w11: IDA push seq @ 0x64ad98 +2 reg-vararg(s) omitted*/
      v11 = ((Network *)((Network *)&unk_A8E9C0))->GetClass(a2); /*0x64adb2*/
      StringCSF = GetStringCSF( aTxtReconnectKi, 0, (const char *)(g_Str_File_Queue_CPP), 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = (HWND)Dialog::GetCurrent(); /*0x64add1*/
      DlgItem = GetDlgItem(Current, 1617); /*0x64ade2*/
      DrawDialogText( -1, (wchar_t *)(Buffer), (HWND)(DlgItem)); /*0x64adec*/
      v10 = SendMessageA( (HWND)(DlgItem), 0x18Bu, 0, 0); /*0x64ae03*/
      if ( v10 > 50 ) /*0x64ae08*/
      {
        SendMessageA( (HWND)(DlgItem), 0x182u, 0, 0); /*0x64ae14*/
        --v10; /*0x64ae16*/
      }
      return SendMessageA( (HWND)(DlgItem), 0x197u, v10 - 1, 0); /*0x64ae21*/
    }
  }
  else
  {
    v5 = &stru_A8BB1C.__pad_34[32 * a2 + 16]; /*0x64ad2b*/
    while ( *(unsigned int *)v5 != a1 ) /*0x64ad33*/
    {
      ++v3; /*0x64ad39*/
      v5 += 4; /*0x64ad3a*/
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

  v3 = (char *)((unsigned char *)this + 4); /*0x53edc4*/
  *(unsigned int *)aP1 = *(unsigned int *)v3; /*0x53edc9*/
  *(unsigned short *)(aP1 + 4) = *((unsigned short *)v3 + 2); /*0x53edcf*/
  return aP1; /*0x53edd3*/

}
} // namespace gamemd

// 0x53F0E0
namespace gamemd {
char * Network::FormatAddress(uint16_t *aP1)
{

  unsigned int *p_Network_field_0x0; // edx
  int v3; // eax

  p_Network_field_0x0 = (unsigned int *)(aP1); /*0x53f0e0*/
  if ( !aP1 ) /*0x53f0e9*/
    p_Network_field_0x0 = (int *)&this->q000; /*0x53f0eb*/
  v3 = p_Network_field_0x0[1]; /*0x53f0f3*/
  if ( dword_828140 == 1 )
    sprintf(
      &stru_AA0398.__pad_D8[12],
      "%02X %02X %02X %02X : %02X %02X %02X %02X %02X %02X",
      (uint8_t)*p_Network_field_0x0,
      BYTE1(*p_Network_field_0x0),
      (uint8_t)BYTE2(*p_Network_field_0x0),
      HIBYTE(*p_Network_field_0x0),
      (uint8_t)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      (uint8_t)*((unsigned short *)p_Network_field_0x0 + 4),
      HIBYTE(*((unsigned short *)p_Network_field_0x0 + 4)));
  else
    sprintf( /*0x53f1cf*/
      &stru_AA0398.__pad_D8[12],
      "%d.%d.%d.%d ; %d",
      (uint8_t)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      LOWORD(this->q000));
  return &stru_AA0398.__pad_D8[12]; /*0x53f192*/

}
} // namespace gamemd

// 0x53F200
namespace gamemd {
short Network::SetPort(int16_t aP1)
{

  int16_t result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    LOWORD(this->q000) = aP1; /*0x53f20e*/
    return aP1; /*0x53f209*/
  }
  return result; /*0x53f211*/

}
} // namespace gamemd

// 0x53F4F0
namespace gamemd {
int sub_53F4F0(short a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  IDA_LOWORD(dword_AA0568) = a1; /*0x53f4f4*/
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
  if ( *(uint16_t *)(aP0 + 12) == *(unsigned int *)&dword_841F3C ) /*0x5416e8*/
  {
    *(unsigned short *)(aP0 + 12) = (unsigned int)aP4; /*0x5416f2*/
    *(unsigned int *)(aP0 + 8) = *(unsigned int *)(a4 + 4); /*0x541701*/
    ((Network *)((uint16_t *)a4))->FormatAddress(0); /*0x541704*/
    Debug::Log("Forwarding packet from %s ; %d to forwarder\n"); /*0x54170f G57w11: IDA push seq @ 0x54170f +1 reg-vararg(s) omitted*/
    IDA_LOWORD(v5) = dword_841F3C; /*0x541714*/
(*(void (**)(int, int, int, void *, int, unsigned int, int, int))(*(unsigned int *)&((IPXInterfaceClass *)dword_887628)->q_30))( /*0x54173c*/ dword_887628, (int)(aP1), a3, (void *)(&unk_AA06AC), 12, 0, 1, v5);








    return 1; /*0x541746*/
  }
  if ( !*(unsigned short *)(aP0 + 12) ) /*0x5416da*/
    return 0; /*0x54174c*/
  ((Network *)(*(unsigned int *)dword_A8DA78 + 40))->CopyAddress_Small( (IPXManagerClass *)((int)&v9)); /*0x54175e*/
  v7 = (int *)(aP0 + 8); /*0x541766*/
  if ( v9 == *(unsigned int *)(aP0 + 8) && (unsigned short)dword_A8E2B2 == *(unsigned short *)(aP0 + 12) ) /*0x54177e*/
  {
    Debug::Log("Packet is supposed to be forwarded to us - just adding it to our queue\n"); /*0x541785 G57w11: IDA push seq @ 0x541785*/
    return 0; /*0x541794*/
  }
  if ( !*v7 ) /*0x54179a*/
    return 0; /*0x54179a*/
  v8 = *(unsigned short *)(aP0 + 12); /*0x54179d*/
  ((Waypoint*)v11)->InitInvalid(); /*0x5417a5*/
  v10 = *v7; /*0x5417b5*/
  Struct::Copy6Bytes((char *)v11, (int)&v10); /*0x5417b9*/
  ((Network *)(v11))->SetPort(v8); /*0x5417c3*/
  *(unsigned short *)(aP0 + 12) = 0; /*0x5417c8*/
  *v7 = 0; /*0x5417d4*/
  ((Network *)(v11))->FormatAddress(0); /*0x5417da*/
  Debug::Log("Forwarding packet from router to %s\n"); /*0x5417e5 G57w11: IDA push seq @ 0x5417e5 +1 reg-vararg(s) omitted*/
(*(void (**)(int, int, int, uint16_t *, int, unsigned int, int, int16_t))(*(unsigned int *)&((IPXInterfaceClass *)dword_887628)->q_30))( /*0x54180b*/ dword_887628, (int)(aP1), a3, (uint16_t *)(v11), 12, 0, 1, v8);








  return 1; /*0x541743*/
}
} // namespace gamemd

// 0x5B5E90
namespace gamemd {
int Network::SendSettingsRequest()
{

  HWND DlgItem; // eax
  int v3[62]; // [esp+0h] [ebp-FCh] BYREF
  int16_t v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem((HWND)this->q000, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset( (void *)(v3), 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v3, 250, 1); /*0x5b5edd*/

}
} // namespace gamemd

// 0x5BB580
namespace gamemd {
HKEY sub_5BB580(HKEY a1, const CHAR * a2, const char * a3)
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
  lpValueName = (unsigned int)a2; /*0x5bb58e*/
  v15 = a1; /*0x5bb593*/
  v4 = 0; /*0x5bb597*/
  v5 = (CHAR *)RA2_OPNEW(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)RA2_OPNEW(0x100u); /*0x5bb5ad*/
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
        RA2_OPDEL(v5); /*0x5bb67d*/
        RA2_OPDEL(lpData); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        RA2_OPDEL(v5); /*0x5bb69c*/
        RA2_OPDEL(lpData); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  RA2_OPDEL(v5); /*0x5bb6bb*/
  RA2_OPDEL(lpData); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}
} // namespace gamemd

// 0x5BC3C0
namespace gamemd {
unsigned char sub_5BC3C0()
{
  uint8_t result; // al

  result = byte_ABF238; /*0x5bc3c0*/
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
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int result; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  int16_t v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy( (char *)(v11), aWw); /*0x5d910e*/
  (*(void (**)(unsigned int *, int))(*dword_887628 + 116))( (unsigned int *)(dword_887628), a2); /*0x5d9127*/
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = ((Network *)((int)unk_A8E9C0))->GetQueueCount(); /*0x5d9155*/
  ((Network *)(aP0))->FormatAddress(0); /*0x5d9157*/
  Debug::Log("Sending from port %d to %s\n"); /*0x5d9169 G57w11: IDA push seq @ 0x5d9169 +2 reg-vararg(s) omitted*/
  LOWORD(v5) = *aP0; /*0x5d9175*/
  ((Network *)(int)unk_A8E9C0)->SendMessage( (int)&v10, 56, 0, (int)aP0, v5, a3); /*0x5d918c*/
  Ticks = TimerGetTicks(); /*0x5d919a*/
  while ( ((Network *)((int)unk_A8E9C0))->GetQueueCount() > QueueCount || dword_887628[12] ) /*0x5d91ab*/
  {
    v6 = 180; /*0x5d91c5*/
    if ( Ticks != -1 ) /*0x5d91cc*/
    {
      v7 = TimerGetTicks() - Ticks; /*0x5d91d7*/
      if ( v7 >= 180 ) /*0x5d91dd*/
        break; /*0x5d91dd*/
      v6 = 180 - v7; /*0x5d91df*/
    }
    if ( !v6 ) /*0x5d91e3*/
      break; /*0x5d91e3*/
    ((Network *)(unk_A8E9C0))->ReceiveLoop(); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  result = (*(int (**)(unsigned int *, unsigned int))(*dword_887628 + 116))( (unsigned int *)(dword_887628), 0); /*0x5d91f6*/
  LOBYTE(result) = 1; /*0x5d9205*/
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
  ((Waypoint*)v14)->InitInvalid(); /*0x5d922f*/
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
    ((Network *)(unk_A8E9C0))->ReceiveLoop(); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= ((Connection *)(unk_A8E9C0))->GetSpeed() ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( gamemd::Network::SendPacketThunk( v2, (int)(v15), (int)(v12), (int)(v14), (int)(&v7), (int)(&v11)) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
      v5 = v16; /*0x5d9314*/
      Debug::Log( /*0x5d9322*/
        "Mangler is seeing packets from port %d as coming from port %d\n",
        (uint16_t)v17,
        (uint16_t)v16);
      Network::receiveData(v2); /*0x5d9330*/
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
      ((Network *)(&stru_A8D600))->CopyAddress( (unsigned int *)(&v1), (int)v2); /*0x5da6f8*/
      Network_Init_542FC0(unk_A8E9C0, (int)&v1); /*0x5da707*/
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
    memset( (void *)(v7), 0, sizeof(v7)); /*0x5e3666*/
    v8 = 0; /*0x5e3668*/
    v9 = 0; /*0x5e366a*/
    v7[0] = 40; /*0x5e3675*/
    v3 = strlen( (const char *)(unk_A8B380)) + 1; /*0x5e367d*/
    v2 = &unk_A8B380[v3++]; /*0x5e367d*/
    result = v3 - 1; /*0x5e3683*/
    qmemcpy( (void *)(&v7[1]), (const void *)(&v2[1 - v3]), v3 - 1); /*0x5e368c*/
    v4 = dword_A8DA84; /*0x5e3695*/
    for ( i = 1; i < v4; ++i ) /*0x5e36a2*/
    {
      ((Network *)&unk_A8E9C0)->SendMessage( (int)v7, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e36c6*/
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
    strncpy( (char *)(Destination), (const char *)(Source), 0x3FFu); /*0x5e3741*/
    return (*(int (**)(LPVOID, char *))(*(unsigned int *)ppv + 60))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (char *)(Destination)); /*0x5e3759*/
  }
  else
  {
    memset( (void *)(v6), 0, 455); /*0x5e3771*/
    v6[0] = 23; /*0x5e378a*/
    strcpy( (char *)&v6[1], (const char *)(unk_A8B380)); /*0x5e379f*/
    v2 = dword_A8B394; /*0x5e37b5*/
    strcpy( (char *)&v6[11] + 3, (const char *)(Source)); /*0x5e37c3*/
    *(unsigned int *)((char *)&v6[111] + 3) = v2; /*0x5e37d1*/
    *(unsigned int *)((char *)&v6[112] + 3) = WideString::Hash( (void *)(&word_A8D610)); /*0x5e37dd*/
    result = dword_A8DA84; /*0x5e37e4*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e37f1*/
    {
      v4 = *(char **)(dword_A8DA78 + 4 * i); /*0x5e37f9*/
      v5 = ToWideStringChar( (IUnknown *)(v4)); /*0x5e37fe*/
      Debug::Log("Sending public game options to %s\n", v5); /*0x5e3809*/
      ((Network *)(int)&unk_A8E9C0)->SendMessage( (int)v6, 455, 1, (int)(v4 + 40), 0, 0); /*0x5e382a*/
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
  result = ((Network *)stru_A8B250)->processGameEvent(); /*0x5e8bca*/
  word_AC0D44 = 0; /*0x5e8bcf*/
  word_AC0B94 = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/

}
} // namespace gamemd

// 0x5E8D90
namespace gamemd {
void sub_5E8D90(int a1, LPARAM a2)
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
  SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)(lParam))); /*0x62332b*/
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
    if ( (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) ) /*0x64b491*/
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
  if ( (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) > 0 ) /*0x64b450*/
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
    while ( v4 < (*(int (**)(int))(*(unsigned int *)a1 + 16))(a1) ); /*0x64b46c*/
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

  v1 = *(unsigned int *)(char *)&FootClass_Array; /*0x64d990*/
  if ( *(unsigned int *)(char *)&FootClass_Array ) /*0x64d999*/
  {
    grindingAnimHandle = (unsigned int)((char *)&FootClass_Array); /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (*((unsigned char *)((char *)&FootClass_Array + 1) + 111 * grindingAnimHandle + 1) & 1) == 0 /*0x64d9bd*/
        && *(int *)((char *)&stru_A8EB00 + 416) <= *(int *)((char *)((char *)&FootClass_Array + 1) + 111 * grindingAnimHandle + 3) )
      {
        break; /*0x64d9bd*/
      }
      if ( !v1 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      grindingAnimHandle = ((unsigned short)grindingAnimHandle + 1) & 0x3FFF; /*0x64d9c4*/
      --v1; /*0x64d9c9*/
      ((unsigned int *)&FootClass_Array)[0] = grindingAnimHandle; /*0x64d9ca*/
      *(unsigned int *)&FootClass_Array[0] = v1; /*0x64d9cf*/
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

  if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) || (result = *(unsigned int *)&dword_A8B238) == 0 ) /*0x64d9f4*/
  {
    v2 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( *(int *)(char *)&FootClass_Array > 0 ) /*0x64da0a*/
    {
      grindingAnimHandle = (unsigned int)((char *)&FootClass_Array); /*0x64da0c*/
      v4 = *(unsigned int *)(char *)&FootClass_Array; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) == *(int *)((char *)((char *)&FootClass_Array + 1) /*0x64da32*/
                                                      + 111 * (grindingAnimHandle & 0x3FFF)
                                                      + 3)
          && (*((unsigned char *)((char *)&FootClass_Array + 1) + 111 * (grindingAnimHandle & 0x3FFF) + 1) & 1) == 0 )
        {
          ++v2; /*0x64da34*/
        }
        ++grindingAnimHandle; /*0x64da35*/
        --v4; /*0x64da36*/
      }
      while ( v4 ); /*0x64da37*/
      Buffer = v2; /*0x64da39*/
    }
    ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&Buffer), 4u); /*0x64da4a*/
    result = *(unsigned int *)(char *)&FootClass_Array; /*0x64da4f*/
    for ( i = 0; i < *(int *)(char *)&FootClass_Array; ++i ) /*0x64da59*/
    {
      if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) == *(int *)((char *)((char *)&FootClass_Array + 1) /*0x64da85*/
                                                    + 111 * ((IDA_LOWORD(((char *)&FootClass_Array)) + (unsigned short)i) & 0x3FFF)
                                                    + 3)
        && (*((unsigned char *)((char *)&FootClass_Array + 1) + 111 * ((IDA_LOWORD(((char *)&FootClass_Array)) + (unsigned short)i) & 0x3FFF) + 1) & 1) == 0 )
      {
        FileClass::Write( /*0x64da96*/
          &dword_A8D58C,
          (char *)((char *)&FootClass_Array + 1) + 111 * ((IDA_LOWORD(((char *)&FootClass_Array)) + (unsigned short)i) & 0x3FFF),
          0x6Fu);
        --Buffer; /*0x64da9b*/
      }
      result = *(unsigned int *)(char *)&FootClass_Array; /*0x64da9f*/
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
      IDA_LOWORD(v6) = Math::RoundToInt(-60.0 / ((double)(int)dword_A8B558 / (double)(unsigned int)dword_A8B554)); /*0x652168*/
      v7 = (dword_A8E2D4 >> 1) + (*(unsigned int *)(v5 + 16) >> 1) - v6 / 2; /*0x652183*/
    }
    else
    {
      v7 = (unsigned int)IPXManagerClass::CheckStatus(&unk_A8E9C0, a2) >> 1; /*0x652192*/
    }
    result = (char *)(*(unsigned int *)((char *)&stru_A8EB00 + 416) - v7 * *(unsigned int *)&g_MissionQueueFrame.waypoints[282] / 0x3C - v4); /*0x6521af*/
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

  int v3; // esi

  v3 = 0; /*0x664395*/
  if ( (int)this->q010 <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((*((unsigned int *)this->q004 + v3) + 1), (char *)aP1) ) /*0x6643b5*/
  {
    if ( ++v3 >= (int)this->q010 ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(unsigned short *)(*((unsigned int *)this->q004 + v3) + 37); /*0x6643bf*/

}
}
// 0x6643E0
namespace gamemd {
int Network::checkTimeout(int a2)
{

  if ( a2 >= (int)this->q010 ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *((unsigned int *)this->q004 + a2) + 1; /*0x6643f1*/

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
  v5 = (unsigned int *)(dword_B054D4); /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(v5[v2] + 772)) == 0; /*0x68cada*/
    v5 = (unsigned int *)(dword_B054D4); /*0x68cadc*/
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
bool Network::sendGameEvent(unsigned int *aP0)
{

  HWND Dialog_v; // eax
  TechnoTypeClass *v4; // ecx
  bool v5; // zf
  int v7; // [esp+0h] [ebp-8h]

  *((unsigned int *)aP0 + 1) = -1; /*0x6956e0*/
  Dialog_v = (HWND)CreateDialog(0xEDu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(unsigned int *)aP0 = Dialog_v; /*0x6956ee*/
  if ( !Dialog_v ) /*0x6956f1*/
    return *((unsigned int *)aP0 + 1) == 1; /*0x6956f1*/
  SetWindowLongA(Dialog_v, 8, (LONG)aP0); /*0x6956f7*/
  NetworkDialog::InitModemSettings((NetworkDialog *)aP0, _10); /*0x695704*/
  ((Dialog *)(*(Dialog **)aP0))->Show(); /*0x69570c*/
  while ( *((int *)aP0 + 1) < 0 ) /*0x695716*/
  {
    if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    LOBYTE(v4) = 0; /*0x695721*/
    ScreenSaver::Process(v4, v7); /*0x695723*/
  }
  ((Dialog *)*(Dialog **)aP0)->Destroy(); /*0x695732*/
  v5 = *((unsigned int *)aP0 + 1) == 1; /*0x695737*/
  if ( *((unsigned int *)aP0 + 1) == 1 ) /*0x69573b*/
  {
    qmemcpy(_10, aP0 + 136, 0x70u); /*0x695749*/
    return *((unsigned int *)aP0 + 1) == 1; /*0x69574c*/
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
  char result; // al

  result = byte_B0FCE5; /*0x72cd60*/
  if ( !byte_B0FCE5 ) /*0x72cd67*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cd73*/
      dword_B0FAAC = (unsigned int)LoadFileSHP( (char *)(off_844D74), (bool *)((bool *)&byte_B0FCE4)); /*0x72cd85*/
    result = LoadPaletteSimple( (char *)(off_844D78), (int *)(&dword_B0FCE8), (unsigned int *)(&dword_B0FCEC)); /*0x72cd9a*/
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

  if ( &byte_B0FCE5 ) /*0x72cdba*/
  {
    if ( &byte_B0FCE4 ) /*0x72cdc2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x72cdc5*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[764] ) /*0x72cdcd*/
      {
        ((FileTreeNode *)(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[764]))->Destroy(); /*0x72cdd1*/
        RA2_OPDEL(v1); /*0x72cdd7*/
      }
      &byte_B0FCE4 = 0; /*0x72cddf*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[764] = 0; /*0x72cdeb*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1336] ) /*0x72cdf3*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1336]); /*0x72cdf6*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1336] = 0; /*0x72cdfe*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1340] ) /*0x72ce0c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1340])( /*0x72ce12*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1340],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1340] = 0; /*0x72ce14*/
    }
  }
  &byte_B0FCE5 = 0; /*0x72ce1a*/
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
  HIMC result; // eax

  result = dword_B7355C; /*0x778180*/
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
    return BYTE1(dword_B76B30) & 1; /*0x77d984*/
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

  v1 = RA2_OPNEW(0x85u); /*0x796fca*/
  v2 = v1; /*0x796fcf*/
  if ( v1 ) /*0x796fd6*/
    ((Waypoint*)((Waypoint *)(v1 + 40)))->InitInvalid(); /*0x796fdb*/
  else
    v2 = 0; /*0x796fe2*/
  BulkCharToWide((unsigned short *)v2, (uint8_t *)aPotatotoo, -1); /*0x796fed*/
  *(unsigned int *)(v2 + 123) = -1; /*0x796ff7*/
  *(unsigned int *)(v2 + 75) = 1; /*0x796ffe*/
  *(unsigned int *)(v2 + 83) = 2; /*0x797005*/
  v6 = 0; /*0x79701d*/
  v9 = 0; /*0x797025*/
  v8 = 0; /*0x79702a*/
  v7 = -95419894; /*0x797039*/
  ((NetworkID *)((NetworkID *)(v2 + 40)))->Assign( (unsigned int *)(&v6), (int)&v7, 0); /*0x79703e*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x79707a*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
&& (*(uint8_t (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))( (PtrVector *)(&stru_A8DA74), dword_A8DA7C + dword_A8DA88, 0) )



  {
    v3 = dword_A8DA84++; /*0x797087*/
    dword_A8DA78[v3] = v2; /*0x797096*/
  }
  dword_A8B54C = dword_A8B54C; /*0x797099*/
  *((unsigned int *)&dword_B7790C+ dword_A8B54C) = 100; /*0x79709e*/
  dword_A8B54C = dword_A8B54C + 1; /*0x7970aa*/
  stru_A8BB1C.q000 = *(unsigned int *)(v2 + 40); /*0x7970b1*/
  result = *(unsigned int *)(v2 + 44); /*0x7970b7*/
  stru_A8BB1C.q004 = (void *)result; /*0x7970ba*/
  stru_A8BB1C.q008 = v2->q00C; /*0x7970c3*/
  return result; /*0x7970c2*/
}
} // namespace gamemd

// 0x7982A0
namespace gamemd {
void Network_Delete(int a1, int a2, SessionClass * aP2)
{
  int v3; // edi

  v3 = a1; /*0x7982a6*/
  if ( a1 > 0 ) /*0x7982ac*/
  {
    v4 = aP2; /*0x7982af*/
    do /*0x7982bc*/
    {
      j_DeleteAndZero(v4++); /*0x7982b3*/
      --v3; /*0x7982bb*/
    }
    while ( v3 ); /*0x7982bc*/
  }
  RA2_OPDEL(aP2); /*0x7982c0*/
}
} // namespace gamemd
