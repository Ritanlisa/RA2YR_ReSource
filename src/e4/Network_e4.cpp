// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x4311C0
namespace gamemd {
char Network::SendBeaconDelete(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Network_SendBeaconDelete(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int *v6; // esi
  int v7; // edx
  int *v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v14; // [esp+13h] [ebp-1DDh]
  int v15; // [esp+14h] [ebp-1DCh]
  _BYTE v16[16]; // [esp+18h] [ebp-1D8h] BYREF
  int v17; // [esp+28h] [ebp-1C8h] BYREF
  char v18[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  v4 = *(this + 24); /*0x4311cc*/
  if ( v4 ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v14 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      v8 = v6; /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        v4 = *v8; /*0x4311fe*/
        if ( *v8 ) /*0x4311fe*/
        {
          if ( (*(_BYTE *)(v4 + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++v8; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 += 3; /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return v4; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *v8; /*0x431265*/
    }
    else
    {
      v14 = 0; /*0x431224*/
      v4 = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = *(this + v4); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      v4 = *(_DWORD *)(v9 + 272); /*0x43123d*/
      v15 = v4; /*0x431243*/
      if ( v4 == *((_DWORD *)HouseClass_Player + 12) || !v14 ) /*0x431252*/
      {
        if ( (*(_BYTE *)(v9 + 12) & 1) != 0 /*0x4312a6*/
          && HouseClass::IsAllied(HouseClass_Player, v4)
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v9 + 272)],
                                HouseClass_Player)
          && !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v9 + 272)] + 501) )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x880A04] + 120))( /*0x4312bf*/
                            MEMORY[0x880A04],
                            v16);
          ((void (__stdcall *)(int, char, _DWORD, _DWORD, _DWORD, int))BuildingPlacement::RenderBuildingPlacementShadow)( /*0x4312e6*/
            MEMORY[0x880A04],
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z((void *)v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        v4 = (int)(this + 3 * v15); /*0x4312fd*/
        while ( v9 != *(_DWORD *)v4 ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          v4 += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return v4; /*0x43130c*/
        }
        *(this + 2 * v15 + v11 + v15) = 0; /*0x431322*/
        --*(this + 24); /*0x43132e*/
        LOBYTE(v4) = MEMORY[0xA8B238][0]; /*0x431331*/
        if ( MEMORY[0xA8B238][0] ) /*0x431338*/
        {
          if ( MEMORY[0xA8B238][0] != 5 ) /*0x431341*/
          {
            LOBYTE(v4) = (_BYTE)HouseClass_Player; /*0x431347*/
            if ( v15 == *((_DWORD *)HouseClass_Player + 12) ) /*0x43134f*/
            {
              LOBYTE(v4) = v14; /*0x431355*/
              if ( v14 ) /*0x43135b*/
              {
                v17 = 33; /*0x431367*/
                strcpy(v18, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x431390*/
                LOBYTE(v4) = MEMORY[0xA8DA84]; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v18[56] = v15; /*0x4313a9*/
                for ( v18[55] = v11; v12 < MEMORY[0xA8DA84]; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log(); /*0x4313c2*/
                  Network::SendMessage( /*0x4313e9*/
                    (int)MEMORY[0xA8E9C0],
                    (int)&v17,
                    61,
                    1,
                    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v12) + 40,
                    0,
                    0);
                  LOBYTE(v4) = MEMORY[0xA8DA84]; /*0x4313ee*/
                }
              }
            }
          }
        }
      }
      else
      {
        *(_BYTE *)(v9 + 12) &= 0xFCu; /*0x431254*/
      }
    }
  }
  return v4; /*0x431258*/
}
}
} // namespace gamemd

// 0x431450
namespace gamemd {
char Network::SendBeacon(CellStruct * aP1, int a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Network::SendBeacon(int *this, CellStruct *aP1, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // edi
  int *v7; // esi
  int v8; // edx
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  char *v12; // eax
  char v13; // dl
  char v14; // cl
  int *v15; // ecx
  int i; // esi
  CellStruct *v16; // ecx
  char v19; // [esp+13h] [ebp-1D9h]
  int v21; // [esp+14h] [ebp-1D8h]
  int v22; // [esp+24h] [ebp-1C8h] BYREF
  char v23[43]; // [esp+28h] [ebp-1C4h] BYREF
  char v24; // [esp+53h] [ebp-199h]
  char v25; // [esp+54h] [ebp-198h]
  wchar_t Destination[203]; // [esp+55h] [ebp-197h] BYREF

  if ( a3 == -1 && a4 == -1 ) /*0x431474*/
  {
    v5 = *(this + 24); /*0x431476*/
    v19 = 1; /*0x431479*/
    if ( !v5 ) /*0x431480*/
      return v5; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    v9 = v7; /*0x43148e*/
    while ( 1 ) /*0x431490*/
    {
      v5 = *v9; /*0x431490*/
      if ( *v9 ) /*0x431490*/
      {
        if ( (*(_BYTE *)(v5 + 12) & 2) != 0 ) /*0x431499*/
          break; /*0x431499*/
      }
      ++v8; /*0x43149f*/
      ++v9; /*0x4314a0*/
      if ( v8 >= 3 ) /*0x4314a6*/
      {
        ++v6; /*0x4314a8*/
        v7 += 3; /*0x4314a9*/
        if ( v6 >= 8 ) /*0x4314af*/
          return v5; /*0x4314af*/
        goto LABEL_5; /*0x4314af*/
      }
    }
    v11 = *v9; /*0x43158a*/
  }
  else
  {
    v10 = a4 + 2 * a3; /*0x4314b7*/
    v19 = 0; /*0x4314ba*/
    LOBYTE(v5) = v10 + a3; /*0x4314bf*/
    v11 = *(this + v10 + a3); /*0x4314c1*/
  }
  if ( v11 ) /*0x4314c6*/
  {
    memset((void *)(v11 + 14), 0, 0x100u); /*0x4314e1*/
    if ( aP1 ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v11 + 14), (const wchar_t *)aP1, 0x7Fu); /*0x4314e9*/
    LOBYTE(v5) = (_BYTE)MEMORY[0xA8B238]; /*0x4314f1*/
    if ( MEMORY[0xA8B238] && MEMORY[0xA8B238] != (CellStruct *)5 ) /*0x431501*/
    {
      if ( v19 && *(_DWORD *)(v11 + 272) == *(_DWORD *)&HouseClass_Player->__pad_28[8] && a5 ) /*0x431533*/
      {
        v22 = 34; /*0x43153f*/
        strcpy(v23, ToWideStringChar(**(char ***)&MEMORY[0xA8D63C].__pad_430[12])); /*0x431568*/
        if ( aP1 ) /*0x431573*/
        {
          wcsncpy(Destination, (const wchar_t *)aP1, 0x80u); /*0x431580*/
        }
        else
        {
          v12 = CharToWideString(&MEMORY[0x87F8E4].__pad_5568[20760]); /*0x431596*/
          wcscpy(Destination, (const wchar_t *)v12); /*0x4315a1*/
        }
        v13 = -1; /*0x4315b2*/
        v14 = HouseClass_Player->__pad_28[8]; /*0x4315b5*/
        v24 = -1; /*0x4315b8*/
        v25 = v14; /*0x4315bc*/
        v5 = 0; /*0x4315c0*/
        v15 = this + 3 * v14; /*0x4315c8*/
        do /*0x4315dc*/
        {
          if ( *v15 == v11 ) /*0x4315cd*/
          {
            v13 = v5; /*0x4315cf*/
            v24 = v5; /*0x4315d1*/
          }
          ++v5; /*0x4315d5*/
          ++v15; /*0x4315d6*/
        }
        while ( v5 < 3 ); /*0x4315dc*/
        if ( v13 != -1 ) /*0x4315e1*/
        {
          LOBYTE(v5) = MEMORY[0xA8D63C].__pad_430[24]; /*0x4315e7*/
          for ( i = 1; i < *(int *)&MEMORY[0xA8D63C].__pad_430[24]; ++i ) /*0x4315f3*/
          {
            Debug::Log(); /*0x431608*/
            Network::SendMessage( /*0x431632*/
              (int)&MEMORY[0xA8D63C].__pad_1258[300],
              (int)&v22,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40,
              0,
              0);
            LOBYTE(v5) = MEMORY[0xA8D63C].__pad_430[24]; /*0x431637*/
          }
        }
      }
      else
      {
        v5 = *(_DWORD *)(v11 + 272); /*0x43164e*/
        if ( v5 != *(_DWORD *)&HouseClass_Player->__pad_28[8] && (*(_BYTE *)(v11 + 12) & 1) != 0 ) /*0x431663*/
        {
          LOBYTE(v5) = HouseClass::IsAllied(HouseClass_Player, (IUnknown *)v5); /*0x43166a*/
          if ( (_BYTE)v5 ) /*0x431671*/
          {
            LOBYTE(v5) = HouseClass::IsAlliedWith( /*0x431688*/
                           *(void **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v11 + 272)],
                           HouseClass_Player);
            if ( (_BYTE)v5 ) /*0x43168f*/
            {
              v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v11 + 272)]; /*0x43169d*/
              if ( !*(_BYTE *)(v5 + 501) ) /*0x4316a0*/
              {
                v16 = *(CellStruct **)(v11 + 4); /*0x4316b4*/
                LOWORD(v21) = *(_DWORD *)v11 / 256; /*0x4316c3*/
                HIWORD(v21) = (int)v16 / 256; /*0x4316db*/
                LOBYTE(v5) = CreateTriggerClassIfFarEnough(11, (unsigned __int8)((int)v16 >> 31), v21); /*0x4316e5*/
              }
            }
          }
        }
      }
    }
  }
  return v5; /*0x431641*/
}
}
} // namespace gamemd

// 0x48D1E0
namespace gamemd {
char Network::Dispatch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Network_Dispatch()
{
  int v0; // esi
  int i; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  const char *v7; // eax
  LPARAM *v8; // edi
  int v9; // ebx
  const void *v10; // ebp
  const void *v11; // eax
  int v12; // edi
  const char *v13; // eax
  int v14; // ecx
  unsigned __int16 v15; // ax
  const char *v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  const char *v25; // eax
  int v26; // ebx
  const void *v27; // eax
  LPARAM *v28; // esi
  int v29; // edi
  const void *v30; // ebp
  const void *v31; // eax
  int v32; // esi
  unsigned __int16 v33; // si
  int v34; // edi
  int j; // esi
  int v36; // edi
  int v37; // eax
  wchar_t *v38; // esi
  int v39; // eax
  int v40; // esi
  const void *v41; // eax
  char v43; // [esp+8h] [ebp-208h]
  int v44; // [esp+20h] [ebp-1F0h]
  int *v45; // [esp+20h] [ebp-1F0h]
  _WORD *v46; // [esp+24h] [ebp-1ECh]
  int v47; // [esp+24h] [ebp-1ECh]
  int v48; // [esp+28h] [ebp-1E8h] BYREF
  int v49; // [esp+2Ch] [ebp-1E4h] BYREF
  char v50[4]; // [esp+30h] [ebp-1E0h] BYREF
  int v51; // [esp+34h] [ebp-1DCh]
  char v52[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v53; // [esp+40h] [ebp-1D0h] BYREF
  _DWORD v54[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v55; // [esp+A0h] [ebp-170h]
  char v56; // [esp+A2h] [ebp-16Eh]

  if ( (MEMORY[0x89E950] & 1) == 0 ) /*0x48d1fc*/
  {
    v0 = dword_81D4E4; /*0x48d1fe*/
    MEMORY[0x89E950] |= 1u; /*0x48d20d*/
    MEMORY[0x89E920] = Timer::GetTicks(&MEMORY[0x89E924]); /*0x48d218*/
    MEMORY[0x89E928] = v0; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d23a*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = MEMORY[0xA8D60E]; /*0x48d251*/
    if ( MEMORY[0xA8D60E] ) /*0x48d258*/
      return i; /*0x48d258*/
    v2 = MEMORY[0x89E928]; /*0x48d263*/
    if ( MEMORY[0x89E920] != -1 ) /*0x48d26c*/
    {
      v3 = Timer::GetTicks(&MEMORY[0x89E924]) - MEMORY[0x89E920]; /*0x48d278*/
      if ( v3 >= v2 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v2 -= v3; /*0x48d282*/
    }
    if ( !v2 || MEMORY[0xA8E2A4] ) /*0x48d28f*/
    {
LABEL_10:
      if ( MEMORY[0xA8DA84] ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d2ac*/
        if ( !Network::GetQueueCount(&MEMORY[0xA8E9C0]) ) /*0x48d2b6*/
        {
          memset(v54, 0, sizeof(v54)); /*0x48d2cc*/
          v55 = 0; /*0x48d2ce*/
          v56 = 0; /*0x48d2d0*/
          v54[0] = 41; /*0x48d2d6*/
          CopyWideToChar(-1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(aSendingNetPort); /*0x48d2f5*/
          HIWORD(v4) = HIWORD(MEMORY[0xA8DA84]); /*0x48d2fa*/
          v5 = 1; /*0x48d304*/
          if ( MEMORY[0xA8DA84] > 1 ) /*0x48d306*/
          {
            v46 = (_WORD *)&MEMORY[0xA8E2B2] + 1; /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v4) = *v46; /*0x48d318*/
              v6 = *v46 == 0; /*0x48d31b*/
              v48 = v4; /*0x48d31e*/
              if ( !v6 ) /*0x48d322*/
              {
                v7 = (const char *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5)); /*0x48d331*/
                Debug::Log("Sending to %s\n", v7); /*0x48d33c*/
                Network::SendMessage(v54, 91, 0, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5) + 40, v48, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d375*/
                v44 = 0; /*0x48d37a*/
                v8 = &MEMORY[0xA8DA90]; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d38d*/
                  v10 = (const void *)ToWideStringChar(*v8); /*0x48d399*/
                  v11 = (const void *)ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v44; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = MEMORY[0x887340]; /*0x48d3cc*/
                if ( MEMORY[0x887338] != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks(&MEMORY[0x88733C]) - MEMORY[0x887338]; /*0x48d3e7*/
                if ( v12 - MEMORY[0xA8E284][v44] > 2400 ) /*0x48d3fa*/
                {
                  v13 = (const char *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5)); /*0x48d404*/
                  Debug::Log("No PORT_PROBE from %s in the last 40 seconds\n", v13); /*0x48d40f*/
                  v14 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d41d*/
                  v15 = *(_WORD *)(v14 + 131); /*0x48d420*/
                  if ( v15 != (_WORD)v48 && v15 >= 0x400u ) /*0x48d432*/
                  {
                    v16 = (const char *)ToWideStringChar(v14); /*0x48d434*/
                    Debug::Log("Sending to %s on mangled port from pserver\n", v16); /*0x48d43f*/
                    v17 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d44d*/
                    LOWORD(v18) = *(_WORD *)(v17 + 131); /*0x48d456*/
                    Network::SendMessage(v54, 91, 0, v17 + 40, v18, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v4) = HIWORD(MEMORY[0xA8DA84]); /*0x48d471*/
              ++v5; /*0x48d47a*/
              ++v46; /*0x48d480*/
            }
            while ( v5 < MEMORY[0xA8DA84] ); /*0x48d484*/
          }
          v49 = Timer::GetTicks(v50); /*0x48d49d*/
          v51 = 120; /*0x48d4a1*/
          while ( Network::GetQueueCount(&MEMORY[0xA8E9C0]) > 0 ) /*0x48d4b0*/
          {
            v19 = v51; /*0x48d4b6*/
            if ( v49 != -1 ) /*0x48d4bd*/
            {
              v20 = Timer::GetTicks(v50) - v49; /*0x48d4c8*/
              if ( v20 >= v19 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v19 -= v20; /*0x48d4d0*/
            }
            if ( v19 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d4e0*/
          }
          v21 = dword_81D4E4; /*0x48d4f3*/
          MEMORY[0x89E920] = Timer::GetTicks(&v53); /*0x48d502*/
          MEMORY[0x89E924] = v53; /*0x48d510*/
          MEMORY[0x89E928] = v21; /*0x48d515*/
          MEMORY[0xA8E2A4] = 0; /*0x48d51b*/
          Connection::Close(&MEMORY[0xA8E9C0]); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = MEMORY[0xA8D60E]; /*0x48d527*/
  if ( !MEMORY[0xA8D60E] ) /*0x48d52e*/
  {
    for ( i = Network::Send(&MEMORY[0xA8D638], &MEMORY[0xA8D800], &MEMORY[0xA8D804], &MEMORY[0xA8D810]); /*0x48d554*/
          i;
          i = Network::Send(&MEMORY[0xA8D638], &MEMORY[0xA8D800], &MEMORY[0xA8D804], &MEMORY[0xA8D810]) )
    {
      if ( MEMORY[0xA8D810] == -22012 ) /*0x48d563*/
      {
        v22 = MEMORY[0xA8D638]; /*0x48d569*/
        switch ( MEMORY[0xA8D638] ) /*0x48d583*/
        {
          case 10: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount(&MEMORY[0xA8E9C0]); ++j ) /*0x48d828*/
            {
              v36 = Network::GetConnectionSpeed(j); /*0x48d839*/
              v37 = Network::FindPlayerByID(v36); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(v37) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(v36, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 12: /*0x48d583*/
            if ( (!MEMORY[0xA8D60D] || MEMORY[0xA8D74C] == WideString::Hash(&MEMORY[0xA8D610])) /*0x48d925*/
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111))
                 & (unsigned __int8)MEMORY[0xA8D667]) != 0) )
            {
              v38 = (wchar_t *)CharToWideString(MEMORY[0xA8D63C]); /*0x48d935*/
              v43 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 664) * 900.0); /*0x48d955*/
              v39 = SessionClass::GetPlayerColorScheme(MEMORY[0xA8D748]); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                v38,
                MEMORY[0xA8D748],
                (wchar_t *)((char *)&MEMORY[0xA8D667] + 1),
                v39,
                16454,
                v43,
                0);
              PlayVocClass(1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw(2); /*0x48d9a1*/
              wcscpy((wchar_t *)&MEMORY[0xA8D110] + 1, (wchar_t *)((char *)&MEMORY[0xA8D667] + 1)); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 15: /*0x48d583*/
            Debug::Log(aProcessingNetP); /*0x48da4a*/
            v40 = 0; /*0x48da57*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&MEMORY[0xA8D804]) ) /*0x48da6e*/
                {
                  v41 = (const void *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v40)); /*0x48da85*/
                  if ( !_strcmpi(v41, MEMORY[0xA8D63C]) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v40 >= MEMORY[0xA8DA84] ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay(v40, (double)*(int *)&MEMORY[0xA8D667], NAN); /*0x48dabd*/
            }
            break; /*0x48dac2*/
          case 16: /*0x48d583*/
          case 19: /*0x48d583*/
            break;
          case 28: /*0x48d583*/
            Network::syncGameState(&MEMORY[0xA8D638], &MEMORY[0xA8D804]); /*0x48d594*/
            break; /*0x48d599*/
          case 29: /*0x48d583*/
            if ( (!MEMORY[0xA8D60D] || *(_DWORD *)(&MEMORY[0xA8D667] + 3) == WideString::Hash(&MEMORY[0xA8D610])) /*0x48da2f*/
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111))
                 & (unsigned __int8)MEMORY[0xA8D667]) != 0)
              && ((_BYTE)MEMORY[0xA8D110] && MEMORY[0xA8B238] == 3 || BYTE1(MEMORY[0xA8D110]) && MEMORY[0xA8B238] == 4) )
            {
              LOBYTE(v22) = HIBYTE(MEMORY[0xA8D667]); /*0x48da35*/
              PlayTauntClass(v22); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 32: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              SBYTE1(MEMORY[0xA8D673]),
              *(_DWORD *)&MEMORY[0xA8D667],
              *((_DWORD *)&MEMORY[0xA8D667] + 1),
              MEMORY[0xA8D66F],
              (char)MEMORY[0xA8D673]);
            break; /*0x48d7d0*/
          case 33: /*0x48d583*/
            Network::SendBeaconDelete(SBYTE1(MEMORY[0xA8D673]), (char)MEMORY[0xA8D673]); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 34: /*0x48d583*/
            Network::SendBeacon(&MEMORY[0xA8D667] + 1, SHIBYTE(MEMORY[0xA8D667]), (char)MEMORY[0xA8D667], 0); /*0x48d810*/
            break; /*0x48d815*/
          case 39: /*0x48d583*/
            if ( MEMORY[0xA8B238] == 4 ) /*0x48d5a4*/
            {
              if ( MEMORY[0xA8DBA0] ) /*0x48d5b1*/
              {
                v23 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount(&MEMORY[0xA8E9C0]) > 0 ) /*0x48d5c5*/
                {
                  while ( Network::GetConnectionSpeed(v23) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x48d5de*/
                  {
                    if ( ++v23 >= Network::GetSendCount(&MEMORY[0xA8E9C0]) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  v24 = Network::GetClass(*(_DWORD *)&MEMORY[0xA8D667]); /*0x48d5fa*/
                  v25 = (const char *)ToWideStringChar(v24); /*0x48d601*/
                  Debug::Log("Got NET_IM_STILL_HERE packet from %s.\n", v25); /*0x48d60c*/
                  Network_Helper_646DF0(v23); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 41: /*0x48d583*/
            Debug::Log( /*0x48d635*/
              "Got NET_PORT_PROBE packet from %s - port = %d\n",
              MEMORY[0xA8D63C],
              (unsigned __int16)MEMORY[0xA8D804]);
            v26 = 0; /*0x48d642*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48d646*/
            {
              v45 = &MEMORY[0xA8E2B2]; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&MEMORY[0xA8D804]) ) /*0x48d665*/
                {
                  v27 = (const void *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26)); /*0x48d680*/
                  if ( !_strcmpi(v27, MEMORY[0xA8D63C]) ) /*0x48d686*/
                  {
                    v47 = 0; /*0x48d696*/
                    v28 = &MEMORY[0xA8DA90]; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v29 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26); /*0x48d6a6*/
                      v30 = (const void *)ToWideStringChar(*v28); /*0x48d6b0*/
                      v31 = (const void *)ToWideStringChar(v29); /*0x48d6b2*/
                      if ( !_strcmpi(v30, v31) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v28; /*0x48d6c9*/
                      ++v47; /*0x48d6d3*/
                      if ( (int)v28 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v32 = MEMORY[0x887340]; /*0x48d6e0*/
                    if ( MEMORY[0x887338] != -1 ) /*0x48d6e9*/
                      v32 += Timer::GetTicks(&MEMORY[0x88733C]) - MEMORY[0x887338]; /*0x48d6fb*/
                    MEMORY[0xA8E284][v47] = v32; /*0x48d701*/
LABEL_56:
                    v33 = MEMORY[0xA8D804]; /*0x48d708*/
                    if ( (_WORD)MEMORY[0xA8D804] != *(_WORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26) + 40) /*0x48d724*/
                      || (_WORD)MEMORY[0xA8D804] != *(_WORD *)v45 )
                    {
                      Debug::Log(aStrangePortNum); /*0x48d72b*/
                      v34 = *(unsigned __int16 *)v45; /*0x48d739*/
                      if ( !v33 ) /*0x48d73f*/
                        v33 = 1234; /*0x48d741*/
                      *(_WORD *)v45 = v33; /*0x48d746*/
                      Network::SetPort(v33); /*0x48d756*/
                      Debug::Log("Adjusting port number for player %s from %d to %d\n", MEMORY[0xA8D63C], v34, v33); /*0x48d76d*/
                    }
                  }
                }
                ++v26; /*0x48d77e*/
                v45 = (int *)((char *)v45 + 2); /*0x48d784*/
              }
              while ( v26 < MEMORY[0xA8DA84] ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 47: /*0x48d583*/
            Debug::Log("Got NET_PORT_UNREACHABLE message from %s\n", MEMORY[0xA8D63C]); /*0x48d87c*/
            if ( MEMORY[0xA8B238] == 4 && MEMORY[0x887628] ) /*0x48d898*/
            {
              Network::processAcknowledgment(MEMORY[0xA8D63C]); /*0x48d8a8*/
              Network::GetAddress(v52, &v49, &v48); /*0x48d8be*/
              (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887628] + 120))(MEMORY[0x887628], &v49, v48); /*0x48d8d5*/
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&MEMORY[0xA8D638], &MEMORY[0xA8D804]); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/
}
}
} // namespace gamemd

// 0x4C6C50
namespace gamemd {
char * Network::initConnection(int a2, unsigned int * a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4C6C50(char *this, int a2, _DWORD *a3, char a4)
{
  _DWORD *v5; // ecx
  char v6; // al
  int v8; // [esp+4h] [ebp-8h] BYREF

  if ( a2 < 0 ) /*0x4c6c5c*/
  {
    *(this + 2) = -1; /*0x4c6c97*/
    *this = 0; /*0x4c6c9b*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6ca6*/
    return this; /*0x4c6ca4*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c6c5e*/
    v5 = a3; /*0x4c6c6b*/
    *this = 41; /*0x4c6c6f*/
    Network::CopyAddress(v5, &a2, (int)&v8); /*0x4c6c72*/
    v6 = a4; /*0x4c6c7b*/
    this->Network_field_0x8 = v8; /*0x4c6c7f*/
    *(this + 7) = v6; /*0x4c6c82*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6c8d*/
    return this; /*0x4c6c8b*/
  }
}
}
} // namespace gamemd

// 0x4FC980
namespace gamemd {
char Network::SendOffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Network_SendOffer(int this)
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *(_BYTE *)(this + 502); /*0x4fc98b*/
  if ( !*(_BYTE *)(this + 503) ) /*0x4fc980*/
  {
    if ( result || *(_BYTE *)(this + 504) ) /*0x4fc997*/
    {
      return *(_BYTE *)(this + 502); /*0x4fc9cd*/
    }
    else
    {
      *(_BYTE *)(this + 502) = 1; /*0x4fc9a2*/
      *(_DWORD *)(this + 664) = MEMORY[0xA8ED84]; /*0x4fc9b6*/
      *(_DWORD *)(this + 668) = v2; /*0x4fc9bc*/
      result = *(_BYTE *)(this + 502); /*0x4fc9bf*/
      *(_DWORD *)(this + 672) = 0; /*0x4fc9c5*/
    }
  }
  return result; /*0x4fc9c9*/
}
}
} // namespace gamemd

// 0x52F3F0
namespace gamemd {
char Network::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Network_Init()
{
  int v0; // ecx
  int v1; // esi
  void *v2; // eax
  char v4; // [esp+Dh] [ebp-25h]
  _BYTE v5[36]; // [esp+Eh] [ebp-24h] BYREF

  v0 = MEMORY[0x887628]; /*0x52f3f0*/
  if ( MEMORY[0x887628] ) /*0x52f3fe*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x52f404*/
    v0 = 0; /*0x52f406*/
    MEMORY[0x887628] = 0; /*0x52f408*/
  }
  v1 = 0; /*0x52f414*/
  if ( g_SuperWeaponTypeArray > 0 ) /*0x52f419*/
  {
    do /*0x52f437*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_SuperWeaponTypeCount + v1) + 100))( /*0x52f42c*/
        *((_DWORD *)g_SuperWeaponTypeCount + v1),
        MEMORY[0x887048]);
      ++v1; /*0x52f434*/
    }
    while ( v1 < g_SuperWeaponTypeArray ); /*0x52f437*/
    v0 = MEMORY[0x887628]; /*0x52f439*/
  }
  if ( !v0 ) /*0x52f441*/
  {
    v2 = __2_YAPAXI_Z(0x3F5CCu); /*0x52f448*/
    if ( v2 ) /*0x52f452*/
      v0 = Network::finalizeSession(v2); /*0x52f45b*/
    else
      v0 = 0; /*0x52f45f*/
    MEMORY[0x887628] = v0; /*0x52f461*/
  }
  MEMORY[0xA8B24C] = 2; /*0x52f467*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 60))(v0, 0); /*0x52f474*/
  Network::SetConnectionParams(30, -1, 600, 1); /*0x52f489*/
  Debug::Log(MEMORY[0x826450]); /*0x52f493*/
  v4 = Network_Init_5DA6C0(); /*0x52f4a6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x52f4ac*/
  MEMORY[0xA8E2B2] = 0; /*0x52f4b3*/
  MEMORY[0xA8E2B6] = 0; /*0x52f4be*/
  MEMORY[0xA8E2B0] = 0; /*0x52f4c4*/
  MEMORY[0xA8E2BA] = 0; /*0x52f4ca*/
  MEMORY[0xA8E2A4] = 0; /*0x52f4d0*/
  MEMORY[0xA8E2BE] = 0; /*0x52f4d6*/
  LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x52f4e1*/
  MEMORY[0xA8E2A6] = 0; /*0x52f4e8*/
  MEMORY[0xA8E2C4] = 0; /*0x52f4ef*/
  MEMORY[0xA8E2CC] = -1; /*0x52f4f5*/
  MEMORY[0xA8E2D4] = 20; /*0x52f4fb*/
  MEMORY[0xA8E2D8] = 0; /*0x52f505*/
  MEMORY[0xA8E2DC] = 0; /*0x52f50b*/
  MEMORY[0xA8E2E0] = -1; /*0x52f511*/
  memset(&MEMORY[0xA8DC4C], 0, 0x200u); /*0x52f517*/
  memset(&MEMORY[0xA8DE4C], 0xFFu, 0x200u); /*0x52f527*/
  MEMORY[0xA8E050] = 0; /*0x52f529*/
  MEMORY[0xA8E054] = 0; /*0x52f534*/
  MEMORY[0xA8E058] = 0; /*0x52f53c*/
  MEMORY[0xA8E05C] = 0; /*0x52f547*/
  memset(&MEMORY[0xA8E230], 0, 0x20u); /*0x52f54d*/
  MEMORY[0xA8E04C] = 0; /*0x52f557*/
  if ( MEMORY[0xA8E22C] ) /*0x52f55e*/
  {
    MEMORY[0xA8E228] = MEMORY[0xA8E22C]; /*0x52f560*/
  }
  else if ( MEMORY[0xA8E250] ) /*0x52f56d*/
  {
    MEMORY[0xA8E228] += 7; /*0x52f57c*/
    if ( MEMORY[0xA8E228] >= 1950 ) /*0x52f581*/
      MEMORY[0xA8E228] = 1250; /*0x52f583*/
    MEMORY[0xA8E250] = 0; /*0x52f58d*/
  }
  RawFileClass::Construct(MEMORY[0x826444]); /*0x52f59c*/
  INIClass::SetInt(MEMORY[0x82642C], MEMORY[0x826438], MEMORY[0xA8E228], 0); /*0x52f5b7*/
  INIClass::SetInt(MEMORY[0x82642C], stru_826420, MEMORY[0xABFED8], 0); /*0x52f5d3*/
  INIClass::WriteDigest(v5, 0); /*0x52f5e3*/
  Network::validatePacket(&g_NetworkEventQueue); /*0x52f5ed*/
  MEMORY[0xA8D60E] = 1; /*0x52f5f6*/
  RawFileClass::Dtor(v5); /*0x52f5fd*/
  return v4; /*0x52f606*/
}
}
} // namespace gamemd

// 0x53ED60
namespace gamemd {
short Network::GetAddress(unsigned int * a1, ObjectClass * aP2, unsigned short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall Network::GetAddress(_DWORD *this, _DWORD *a1, ObjectClass *aP2, _WORD *a3)
{
  __int16 result; // ax

  *(_DWORD *)aP2->__pad_0 = *(this + 1); /*0x53ed6a*/
  *(_WORD *)&aP2->__pad_0[4] = (unsigned short)this->Network_field_0x8; /*0x53ed71*/
  result = dword_828140; /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a1 = *this; /*0x53ed85*/
  }
  else
  {
    result = *(_WORD *)this; /*0x53ed8a*/
    *a3 = *(_WORD *)this; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/
}
}
} // namespace gamemd

// 0x53EDA0
namespace gamemd {
char * Network::CopyAddress(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Network_CopyAddress(_DWORD *this, _DWORD *a2, int a3)
{
  char *result; // eax

  result = (char *)(this + 1); /*0x53eda4*/
  *(_DWORD *)a3 = *(this + 1); /*0x53edaa*/
  LOWORD(result) = (unsigned short)this->Network_field_0x8; /*0x53edad*/
  *(_WORD *)(a3 + 4) = (_WORD)result; /*0x53edb1*/
  *a2 = *this; /*0x53edbb*/
  return result; /*0x53edac*/
}
}
} // namespace gamemd

// 0x53EDC0
namespace gamemd {
int Network::CopyAddress_Small(IPXManagerClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::CopyAddress_Small(char *this, IPXManagerClass *aP1)
{
  char *v3; // ecx

  v3 = this + 4; /*0x53edc4*/
  aP1->Socket = *(_DWORD *)v3; /*0x53edc9*/
  *(_WORD *)&aP1->Initialized = *((_WORD *)v3 + 2); /*0x53edcf*/
  return (int)aP1; /*0x53edd3*/
}
}
} // namespace gamemd

// 0x53EE00
namespace gamemd {
int Network::IsBroadcastAddr()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_IsBroadcastAddr(_BYTE *this)
{
  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( *this == 0xFF /*0x53ee3b*/
      && *(this + 1) == 0xFF
      && *(this + 2) == 0xFF
      && *(this + 3) == 0xFF
      && *(this + 4) == 0xFF
      && *(this + 5) == 0xFF
      && *(this + 6) == 0xFF
      && *(this + 7) == 0xFF
      && *(this + 8) == 0xFF
      && *(this + 9) == 0xFF )
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( *(this + 4) == 0xFF /*0x53ee5f*/
         && *(this + 5) == 0xFF
         && *(this + 6) == 0xFF
         && *(this + 7) == 0xFF
         && *(this + 8) == 0xFF
         && *(this + 9) == 0xFF )
  {
    return 1; /*0x53ee66*/
  }
  return 0; /*0x53ee42*/
}
}
} // namespace gamemd

// 0x53EF60
namespace gamemd {
bool Network::processPacket(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Network::processPacket(char *this, TechnoTypeClass *aP1)
{
  char *v4; // edi
  int v5; // ecx
  char *v6; // esi
  bool v7; // zf
  int v8; // ecx
  char *v9; // edi
  char *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return this->Network_field_0x4 != *(_DWORD *)&aP1->__pad_0[4] || *(_WORD *)this != *(_WORD *)aP1->__pad_0; /*0x53ef8d*/
  if ( (*this || *(this + 1) || *(this + 2) || *(this + 3)) /*0x53efc8*/
    && (aP1->__pad_0[0] || aP1->__pad_0[1] || aP1->__pad_0[2] || aP1->__pad_0[3]) )
  {
    v8 = 3; /*0x53efe8*/
    v9 = &aP1->__pad_0[4]; /*0x53efed*/
    v10 = this + 4; /*0x53eff0*/
    v11 = 1; /*0x53eff3*/
    do /*0x53eff5*/
    {
      if ( !v8 ) /*0x53eff5*/
        break; /*0x53eff5*/
      v11 = *(_WORD *)v10 == *(_WORD *)v9; /*0x53eff5*/
      v10 += 2; /*0x53eff5*/
      v9 += 2; /*0x53eff5*/
      --v8; /*0x53eff5*/
    }
    while ( v11 ); /*0x53eff5*/
    return !v11 || *(_DWORD *)this != *(_DWORD *)aP1->__pad_0; /*0x53f001*/
  }
  v4 = &aP1->__pad_0[4]; /*0x53efcf*/
  v5 = 3; /*0x53efd2*/
  v6 = this + 4; /*0x53efd7*/
  v7 = 1; /*0x53efda*/
  do /*0x53efdc*/
  {
    if ( !v5 ) /*0x53efdc*/
      break; /*0x53efdc*/
    v7 = *(_WORD *)v6 == *(_WORD *)v4; /*0x53efdc*/
    v6 += 2; /*0x53efdc*/
    v4 += 2; /*0x53efdc*/
    --v5; /*0x53efdc*/
  }
  while ( v7 ); /*0x53efdc*/
  return !v7; /*0x53ef8f*/
}
}
} // namespace gamemd

// 0x53F0E0
namespace gamemd {
char * Network::FormatAddress(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Network::FormatAddress(unsigned __int16 *this, IUnknown *aP1)
{
  IUnknown *v2; // edx
  int v3; // eax

  v2 = aP1; /*0x53f0e0*/
  if ( !aP1 ) /*0x53f0e9*/
    v2 = (IUnknown *)this; /*0x53f0eb*/
  v3 = v2->field_4; /*0x53f0f3*/
  if ( dword_828140 == 1 ) /*0x53f10c*/
    sprintf( /*0x53f185*/
      &MEMORY[0xA8D63C].__pad_579C[54948],
      MEMORY[0x828158],
      (unsigned __int8)v2->field_0,
      BYTE1(v2->field_0),
      (unsigned __int8)BYTE2(v2->field_0),
      HIBYTE(v2->field_0),
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      (unsigned __int8)LOWORD(v2->field_8),
      HIBYTE(LOWORD(v2->field_8)));
  else
    sprintf( /*0x53f1cf*/
      &MEMORY[0xA8D63C].__pad_579C[54948],
      stru_828144,
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      *this);
  return &MEMORY[0xA8D63C].__pad_579C[54948]; /*0x53f192*/
}
}
} // namespace gamemd

// 0x53F200
namespace gamemd {
short Network::SetPort(IPXManagerClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall Network::SetPort(_WORD *this, IPXManagerClass *aP1)
{
  __int16 result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    *this = (_WORD)aP1; /*0x53f20e*/
    return (__int16)aP1; /*0x53f209*/
  }
  return result; /*0x53f211*/
}
}
} // namespace gamemd

// 0x53F5B0
namespace gamemd {
int sub_53F5B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_53F5B0()
{
  if ( MEMORY[0x887628] ) /*0x53f5b8*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 32))(MEMORY[0x887628]); /*0x53f5bc*/
  unk_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}
}
} // namespace gamemd

// 0x53F830
namespace gamemd {
int sub_53F830(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_53F830(int a1, int a2)
{
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 16))(MEMORY[0x887628], a1, a2, 0); /*0x53f83f*/
  return 1; /*0x53f847*/
}
}
} // namespace gamemd

// 0x540C60
namespace gamemd {
int Network::SetConnectionParams(IUnknown * aP1, int a3, int a4, CellStruct * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::SetConnectionParams(int *this, IUnknown *aP1, int a3, int a4, CellStruct *aP4)
{
  int v6; // ecx
  int *v7; // eax
  int v8; // edx
  int result; // eax

  *(this + 22) = (int)aP1; /*0x540c75*/
  *(this + 23) = a3; /*0x540c78*/
  *(this + 24) = a4; /*0x540c7b*/
  Debug::Log(); /*0x540c7e*/
  Debug::Log(); /*0x540c8e*/
  if ( (_BYTE)aP4 ) /*0x540c9c*/
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*this + 56))(this, *(this + 22), *(this + 23), *(this + 24)); /*0x540cae*/
  v6 = 0; /*0x540cb4*/
  if ( *(this + 17) > 0 ) /*0x540cb8*/
  {
    v7 = this + 10; /*0x540cbb*/
    do /*0x540ce1*/
    {
      v8 = *v7; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      ++v7; /*0x540cc4*/
      *(_DWORD *)(v8 + 40) = *(this + 22); /*0x540cc7*/
      *(_DWORD *)(*(v7 - 1) + 44) = *(this + 23); /*0x540cd0*/
      *(_DWORD *)(*(v7 - 1) + 48) = *(this + 24); /*0x540cd9*/
    }
    while ( v6 < *(this + 17) ); /*0x540ce1*/
  }
  result = *(this + 20); /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    *(_DWORD *)(result + 40) = *(this + 22); /*0x540cee*/
    result = *(this + 23); /*0x540cf4*/
    *(_DWORD *)(*(this + 20) + 44) = result; /*0x540cf7*/
    *(_DWORD *)(*(this + 20) + 48) = *(this + 24); /*0x540d00*/
  }
  return result; /*0x540d03*/
}
}
} // namespace gamemd

// 0x540F00
namespace gamemd {
int Network::sendData(AnimClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::sendData(int this, AnimClass *aP1)
{
  int v3; // ecx
  int v4; // esi
  int i; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( !(unsigned char)this->Network_field_0x4 ) /*0x540f05*/
    return 0; /*0x540f05*/
  v3 = this->Network_field_0x44; /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  v4 = 0; /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  for ( i = this + 40; *(AnimClass **)(*(_DWORD *)i + 100) != aP1; i += 4 ) /*0x540f1d*/
  {
    if ( ++v4 >= v3 ) /*0x540f2d*/
      return 0; /*0x540f2d*/
  }
  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 4 * v4 + 40); /*0x540f37*/
  if ( v7 ) /*0x540f41*/
    (**v7)(v7, 1); /*0x540f47*/
  v8 = v4; /*0x540f4c*/
  if ( v4 < this->Network_field_0x44 - 1 ) /*0x540f51*/
  {
    v9 = (_DWORD *)(this + 4 * v4 + 40); /*0x540f53*/
    do /*0x540f64*/
    {
      ++v8; /*0x540f58*/
      *v9 = v9[1]; /*0x540f59*/
      ++v9; /*0x540f5e*/
    }
    while ( v8 < this->Network_field_0x44 - 1 ); /*0x540f64*/
  }
  v10 = *(_DWORD *)(this + 84); /*0x540f69*/
  v11 = this->Network_field_0x44 - 1; /*0x540f6d*/
  this->Network_field_0x44 = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    *(_DWORD *)(this + 84) = 0; /*0x540f76*/
  return 1; /*0x540f2f*/
}
}
} // namespace gamemd

// 0x540F90
namespace gamemd {
int Network::GetSendCount()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_GetSendCount(_DWORD *this)
{
  return *(this + 17); /*0x540f93*/
}
}
} // namespace gamemd

// 0x540FA0
namespace gamemd {
int Network::GetConnectionSpeed(CellStruct * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::GetConnectionSpeed(_DWORD *this, CellStruct *aP1)
{
  if ( (int)aP1 < 0 || (int)aP1 >= *(this + 17) ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(_DWORD *)(*(this + (_DWORD)aP1 + 10) + 100); /*0x540fb1*/
}
}
} // namespace gamemd

// 0x540FC0
namespace gamemd {
int Network::GetClass(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_GetClass(int *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *i; // edx

  v2 = *(this + 17); /*0x540fc2*/
  v3 = 0; /*0x540fc5*/
  if ( v2 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  for ( i = this + 10; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= v2 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return *(this + v3 + 10) + 104; /*0x540fe2*/
}
}
} // namespace gamemd

// 0x541000
namespace gamemd {
int Network::FindPlayerByID(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::FindPlayerByID(int *this, DynamicVector *aP1)
{
  int v2; // esi
  int v3; // eax
  int *i; // edx

  v2 = *(this + 17); /*0x541002*/
  v3 = 0; /*0x541005*/
  if ( v2 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  for ( i = this + 10; *(DynamicVector **)(*i + 100) != aP1; ++i ) /*0x541010*/
  {
    if ( ++v3 >= v2 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return *(this + v3 + 10) + 76; /*0x541022*/
}
}
} // namespace gamemd

// 0x5410F0
namespace gamemd {
int Network::SendMessage(int a2, int a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_SendMessage(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // edi
  int v10; // ebx

  if ( !(unsigned char)this->Network_field_0x4 || !*(_BYTE *)(this + 5) ) /*0x5410fa*/
    return 0; /*0x541169*/
  v8 = a4; /*0x541107*/
  if ( a4 && (!a5 || Network::IsBroadcastAddr(a5)) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  v9 = (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(**(_DWORD **)(this + 72) + 44))( /*0x54113e*/
         this->Network_field_0x48,
         a2,
         a3,
         a5,
         v8,
         a6,
         a7);
  if ( !v9 ) /*0x541142*/
  {
    v10 = *(_DWORD *)(this + 160) + 1; /*0x54114a*/
    *(_DWORD *)(this + 160) = v10; /*0x54114b*/
    Debug::Log("Send overflow %d\n", v10); /*0x541159*/
  }
  return v9; /*0x541165*/
}
}
} // namespace gamemd

// 0x541260
namespace gamemd {
int Network::SendToPlayer(int a2, int a3, int a4, wchar_t * String2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_SendToPlayer(int this, int a2, int a3, int a4, wchar_t *String2)
{
  int v6; // esi
  int v8; // ebx
  _DWORD *v9; // edx
  char v10; // al
  int v11; // esi
  int v12; // ebx
  int v13; // [esp+0h] [ebp-18h] BYREF
  _DWORD v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( MEMORY[0xA8DA84] && !_wcsicmp(*(const wchar_t **)MEMORY[0xA8DA78], String2) ) /*0x54127e*/
    return 0; /*0x54127e*/
  v6 = 1; /*0x54128f*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v6), String2) ) /*0x5412ad*/
  {
    if ( ++v6 >= MEMORY[0xA8DA84] ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  v8 = a4; /*0x5412ca*/
  v9 = *(_DWORD **)(MEMORY[0xA8DA78] + 4 * v6); /*0x5412ce*/
  LOWORD(v6) = *((_WORD *)&MEMORY[0xA8E2B2] + v6); /*0x5412d1*/
  v9 += 10; /*0x5412d9*/
  v14[0] = *v9; /*0x5412de*/
  v10 = (unsigned char)this->Network_field_0x4; /*0x5412e2*/
  v14[1] = v9[1]; /*0x5412e8*/
  v14[2] = v9[2]; /*0x5412f1*/
  if ( !v10 || !*(_BYTE *)(this + 5) ) /*0x5412f7*/
    return 0; /*0x5412b9*/
  if ( a4 && (&v13 == (int *)-12 || Network::IsBroadcastAddr(v14)) ) /*0x54130e*/
    v8 = 0; /*0x541317*/
  v11 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD *, int, int, _DWORD))(**(_DWORD **)(this + 72) + 44))( /*0x541334*/
          this->Network_field_0x48,
          a2,
          a3,
          v14,
          v8,
          v6,
          0);
  if ( !v11 ) /*0x541338*/
  {
    v12 = *(_DWORD *)(this + 160) + 1; /*0x541340*/
    *(_DWORD *)(this + 160) = v12; /*0x541341*/
    Debug::Log("Send overflow %d\n", v12); /*0x54134f*/
  }
  return v11; /*0x5412b9*/
}
}
} // namespace gamemd

// 0x541370
namespace gamemd {
int Network::Send(int a2, int a3, TechnoTypeClass * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::Send(int this, int a2, int a3, TechnoTypeClass *aP3, int a5)
{
  if ( (unsigned char)this->Network_field_0x4 && *(_BYTE *)(this + 5) ) /*0x541377*/
    return (*(int (__thiscall **)(_DWORD, int, int, TechnoTypeClass *, int))(**(_DWORD **)(this + 72) + 52))( /*0x541397*/
             this->Network_field_0x48,
             a2,
             a3,
             aP3,
             a5);
  else
    return 0; /*0x54139d*/
}
}
} // namespace gamemd

// 0x5413B0
namespace gamemd {
int Network::SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::SendPacketThunk(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( (unsigned char)this->Network_field_0x4 && *(_BYTE *)(this + 5) ) /*0x5413b7*/
    return (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(**(_DWORD **)(this + 72) + 56))( /*0x5413e1*/
             this->Network_field_0x48,
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
} // namespace gamemd

// 0x5413F0
namespace gamemd {
char Network::receiveData(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5413F0(int this, int a2)
{
  char result; // al

  result = (unsigned char)this->Network_field_0x4; /*0x5413f0*/
  if ( result ) /*0x5413f5*/
  {
    result = *(_BYTE *)(this + 5); /*0x5413f7*/
    if ( result ) /*0x5413fc*/
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 60))(this->Network_field_0x48, a2); /*0x541408*/
  }
  return result; /*0x54140b*/
}
}
} // namespace gamemd

// 0x541410
namespace gamemd {
int Network::SendPacket(int a2, int a3, unsigned signed char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_SendPacket(int this, int a2, int a3, unsigned __int8 a4)
{
  int v5; // ecx
  int v6; // edi

  if ( !(unsigned char)this->Network_field_0x4 ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !*(_BYTE *)(this + 5) ) /*0x54141a*/
    return 0; /*0x54141a*/
  v5 = this->Network_field_0x4C; /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  v6 = (*(int (__stdcall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++*(_DWORD *)(this + 160); /*0x541458*/
    Debug::Log(); /*0x541466*/
  }
  return v6; /*0x541471*/
}
}
} // namespace gamemd

// 0x541480
namespace gamemd {
int Network::SendPacketThunk2(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::SendPacketThunk2(int this, int a2, int a3, int a4, int a5)
{
  if ( (unsigned char)this->Network_field_0x4 && *(_BYTE *)(this + 5) ) /*0x541487*/
    return (*(int (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(this + 76) + 52))( /*0x5414a7*/
             this->Network_field_0x4C,
             a2,
             a3,
             a4,
             a5);
  else
    return 0; /*0x5414ad*/
}
}
} // namespace gamemd

// 0x541680
namespace gamemd {
char Network_Recv(IPXManagerClass * aP0, IPXManagerClass * aP1, int a3, int a4, IPXManagerClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Network_Recv(IPXManagerClass *aP0, IPXManagerClass *aP1, int a3, int a4, IPXManagerClass *aP4)
{
  IPXManagerClass *v5; // edi
  int v6; // edx
  IPXManagerClass *v8; // ebx
  IPXManagerClass aP1a; // [esp+0h] [ebp-1Ch] BYREF
  IPXManagerClass v10; // [esp+8h] [ebp-14h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( (unk_AA0674 & 1) == 0 ) /*0x54168a*/
  {
    unk_AA0674 |= 1u; /*0x541696*/
    unk_AA06B0 = htonl((IUnknown *)0x7F000001); /*0x5416a1*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || !HouseClass_Player.__pad_5568[18668] || !dword_B052EC ) /*0x5416ca*/
    return 0; /*0x5416ca*/
  if ( *(unsigned __int16 *)&aP0[1].Initialized == *(_DWORD *)&stru_830620.__pad_579C[49536] ) /*0x5416e8*/
  {
    *(_WORD *)&aP0[1].Initialized = (_WORD)aP4; /*0x5416f2*/
    aP0[1].Socket = *(_DWORD *)(a4 + 4); /*0x541701*/
    Network::FormatAddress((unsigned __int16 *)a4, 0); /*0x541704*/
    Debug::Log(); /*0x54170f*/
    LOWORD(v6) = *(_WORD *)&stru_830620.__pad_579C[49536]; /*0x541714*/
    (*(void (__thiscall **)(_DWORD, IPXManagerClass *, int, void *, int, _DWORD, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] /*0x54173c*/
                                                                                          + 12))(
      *(_DWORD *)&stru_87C374.__pad_579C[23320],
      aP1,
      a3,
      &unk_AA06AC,
      12,
      0,
      1,
      v6);
    return 1; /*0x541746*/
  }
  if ( !*(_WORD *)&aP0[1].Initialized ) /*0x5416da*/
    return 0; /*0x54174c*/
  Network::CopyAddress_Small((char *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 40), &aP1a); /*0x54175e*/
  v8 = aP0 + 1; /*0x541766*/
  if ( aP1a.Socket == aP0[1].Socket && *(_WORD *)&HouseClass_Player.__pad_5568[20478] == *(_WORD *)&aP0[1].Initialized ) /*0x54177e*/
  {
    Debug::Log(); /*0x541785*/
    return 0; /*0x541794*/
  }
  if ( !v8->Socket ) /*0x54179a*/
    return 0; /*0x54179a*/
  LOWORD(v5) = *(_WORD *)&aP0[1].Initialized; /*0x54179d*/
  Waypoint::InitInvalid(v11); /*0x5417a5*/
  v10.Socket = v8->Socket; /*0x5417b5*/
  Struct::Copy6Bytes(v11, &v10); /*0x5417b9*/
  Network::SetPort(v11, v5); /*0x5417c3*/
  *(_WORD *)&aP0[1].Initialized = 0; /*0x5417c8*/
  v8->Socket = 0; /*0x5417d4*/
  Network::FormatAddress((unsigned __int16 *)v11, 0); /*0x5417da*/
  Debug::Log(); /*0x5417e5*/
  (*(void (__thiscall **)(_DWORD, IPXManagerClass *, int, char *, int, _DWORD, int, _WORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] /*0x54180b*/
                                                                                          + 12))(
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    aP1,
    a3,
    v11,
    12,
    0,
    1,
    (_WORD)v5);
  return 1; /*0x541743*/
}
}
} // namespace gamemd

// 0x541820
namespace gamemd {
void * Network::ReceiveLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall Network::ReceiveLoop(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  bool v6; // zf
  char *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  int PlayerName; // eax
  int ebp27; // ebp
  TechnoTypeClass *v18; // ebx
  char *v20; // eax
  _DWORD *v21; // ecx
  int v22; // ecx
  _DWORD *v23; // edx
  _WORD *v24; // ecx
  unsigned __int8 v25; // cl
  int v26; // ebp
  TechnoTypeClass *v29; // edi
  char LinkedIndex; // al
  int eax67; // eax
  int v30; // edi
  int v31; // ecx
  int i; // edi
  _DWORD *v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // ecx
  int v37; // ecx
  int v38; // ebp
  int v39; // ecx
  int v40; // ecx
  TechnoTypeClass *v47; // edi
  void *result; // eax
  IUnknown *v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  IUnknown *aP1; // [esp+34h] [ebp-4B8h] BYREF
  DynamicVector aP2; // [esp+38h] [ebp-4B4h] BYREF
  int var488; // [esp+64h] [ebp-488h]
  __int16 v48; // [esp+68h] [ebp-484h]
  _DWORD v49[32]; // [esp+6Ch] [ebp-480h] BYREF
  __int16 v50; // [esp+ECh] [ebp-400h] BYREF
  unsigned __int8 v51[12]; // [esp+EEh] [ebp-3FEh]
  char v52; // [esp+FAh] [ebp-3F2h]
  char v53; // [esp+FCh] [ebp-3F0h]

  aP2.field_10 = (void *)1; /*0x541830*/
  Waypoint::InitInvalid(&aP2); /*0x541838*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] ) /*0x541844*/
  {
    while ( 1 ) /*0x541864*/
    {
      *(_DWORD *)aP2.__pad_14 = 1024; /*0x541864*/
      *(_DWORD *)&aP2.__pad_14[4] = 128; /*0x54186c*/
      aP1 = 0; /*0x541874*/
      v2 = (*(int (__thiscall **)(_DWORD, __int16 *, char *, _DWORD *, char *, IUnknown **))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10204] /*0x541889*/
                                                                                           + 8))(
             *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204],
             &v50,
             aP2.__pad_14,
             v49,
             &aP2.__pad_14[4],
             &aP1);
      *(_DWORD *)aP2.__pad_C = v2; /*0x54188d*/
      if ( !v2 ) /*0x541891*/
        goto LABEL_92; /*0x541891*/
      v3 = v49[1]; /*0x54189b*/
      *(_DWORD *)aP2.__pad_0 = v49[0]; /*0x5418a6*/
      v4 = *(this + 18); /*0x5418aa*/
      *(this + 35) = &v50; /*0x5418ad*/
      *(_DWORD *)&aP2.field_1[3] = v3; /*0x5418b7*/
      aP2.field_8 = v49[2]; /*0x5418bb*/
      if ( v50 == *(_WORD *)(v4 + 36) ) /*0x5418cb*/
      {
        if ( Network_Recv((int)&v50, (int)&v50, v2, (int)v49, (__int16)aP1) ) /*0x5418ee*/
          goto LABEL_87; /*0x5418f5*/
        if ( (*(int (__thiscall **)(_DWORD, __int16 *, unsigned int, DynamicVector *, IUnknown *))(*(_DWORD *)*(this + 18) /*0x541913*/
                                                                                                 + 48))(
               *(this + 18),
               &v50,
               v2,
               &aP2,
               aP1) )
        {
          if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8D63C].__pad_BC0[204] ) /*0x541932*/
          {
            v5 = 0; /*0x54193d*/
            v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[24] == 0; /*0x54193f*/
            if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] <= 0 ) /*0x541941*/
            {
LABEL_14:
              if ( !v6 ) /*0x541980*/
              {
                Debug::Log(); /*0x54198b*/
                if ( v2 >= 0x10 && v51[0] != 2 && v2 >= 0x3F ) /*0x5419ad*/
                {
                  v8 = *(_DWORD *)(*(this + 35) + 16); /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                  {
                    v9 = (const char *)(*(this + 35) + 20); /*0x5419d3*/
                    memset(&aP2.field_1C, 0, 16); /*0x5419d6*/
                    var488 = 0; /*0x5419ee*/
                    v48 = 0; /*0x5419f2*/
                    strncpy((char *)&aP2.field_1C, v9, 0x14u); /*0x5419f7*/
                    v10 = 0; /*0x541a04*/
                    if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] > 0 ) /*0x541a08*/
                    {
                      while ( 1 ) /*0x541a1b*/
                      {
                        v11 = ToWideStringChar(*(char **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10)); /*0x541a1b*/
                        if ( !_strcmpi(v11, (char *)&aP2.field_1C) ) /*0x541a21*/
                          break; /*0x541a21*/
                        if ( ++v10 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x541a35*/
                          goto LABEL_87; /*0x541a35*/
                      }
                      if ( !NetworkID::Compare( /*0x541a67*/
                              *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40,
                              (int)&aP2)
                        || *(_WORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40) != (_WORD)aP1 )
                      {
                        Debug::Log(); /*0x541a7d*/
                        v12 = (__int16)aP1; /*0x541a82*/
                        v13 = *(_WORD *)&MEMORY[0xA8D63C].__pad_BC0[2 * v10 + 182]; /*0x541a86*/
                        *(_WORD *)&MEMORY[0xA8D63C].__pad_BC0[2 * v10 + 182] = (_WORD)aP1; /*0x541a91*/
                        Network::reconnect( /*0x541aab*/
                          (int *)&g_NetworkEventQueue,
                          *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 111),
                          v12);
                        (*(void (__thiscall **)(_DWORD, DynamicVector *, __int16))(*(_DWORD *)*(this + 18) + 64))( /*0x541abb*/
                          *(this + 18),
                          &aP2,
                          v13);
                        v14 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10); /*0x541ac7*/
                        LOWORD(v14) = *(_WORD *)(v14 + 40); /*0x541acc*/
                        (*(void (__thiscall **)(_DWORD, DynamicVector *, int))(*(_DWORD *)*(this + 18) + 64))( /*0x541ad6*/
                          *(this + 18),
                          &aP2,
                          v14);
                        v15 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40); /*0x541ae5*/
                        *v15 = *(_DWORD *)aP2.__pad_0; /*0x541ae8*/
                        v15[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541aee*/
                        v15[2] = aP2.field_8; /*0x541af5*/
                        Network::SetPort( /*0x541b09*/
                          (_WORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40),
                          (IPXManagerClass *)aP1);
                        NetworkManager::SetPlayerAddress( /*0x541b24*/
                          (int *)&g_NetworkEventQueue,
                          *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 111),
                          (DynamicVector *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40));
                        v16 = (_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[4 * GameClass::FindPlayerName(v10) + 36] /*0x541b3f*/
                                       + 40);
                        *v16 = *(_DWORD *)aP2.__pad_0; /*0x541b42*/
                        v16[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541b48*/
                        v16[2] = aP2.field_8; /*0x541b4f*/
                        v43 = aP1; /*0x541b56*/
                        PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                        Network::SetPort( /*0x541b6c*/
                          (_WORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[4 * PlayerName + 36] + 40),
                          (IPXManagerClass *)v43);
                        ebp27 = 0; /*0x541b74*/
                        if ( (int)*(this + 17) > 0 ) /*0x541b78*/
                        {
                          v18 = (TechnoTypeClass *)(this + 10); /*0x541b7a*/
                          while ( 1 ) /*0x541b87*/
                          {
                            v20 = ToWideStringChar((char *)(*(_DWORD *)v18->__pad_0 + 104)); /*0x541b87*/
                            if ( !_strcmpi(v20, (char *)&aP2.field_1C) ) /*0x541b8d*/
                              break; /*0x541b8d*/
                            ++ebp27; /*0x541b9c*/
                            v18 = (TechnoTypeClass *)((char *)v18 + 4); /*0x541b9d*/
                            if ( ebp27 >= *(this + 17) ) /*0x541ba2*/
                              goto LABEL_33; /*0x541ba2*/
                          }
                          v21 = (_DWORD *)(*(this + ebp27 + 10) + 76); /*0x541bae*/
                          *v21 = *(_DWORD *)aP2.__pad_0; /*0x541bb1*/
                          v21[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541bb7*/
                          v21[2] = aP2.field_8; /*0x541bbe*/
                          Network::SetPort((_WORD *)(*(this + ebp27 + 10) + 76), (IPXManagerClass *)aP1); /*0x541bcd*/
                          Network::FormatAddress((unsigned __int16 *)(*(this + ebp27 + 10) + 76), 0); /*0x541bdb*/
                          Debug::Log(); /*0x541be7*/
LABEL_33:
                          v2 = *(_DWORD *)aP2.__pad_C; /*0x541bef*/
                        }
                        if ( !MEMORY[0xA8D60E] ) /*0x541bfa*/
                        {
                          if ( *(this + 17) ) /*0x541c00*/
                          {
                            v22 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10); /*0x541c16*/
                            if ( (int)HouseClass_Count > *(_DWORD *)(v22 + 111) ) /*0x541c1c*/
                            {
                              if ( SessionClass::IsValidHouse( /*0x541c36*/
                                     (int)&MEMORY[0xA8B238],
                                     *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v22 + 111)]) )
                              {
                                Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x541c49*/
                                Network::FormatAddress((unsigned __int16 *)(*(this + 20) + 76), 0); /*0x541c57*/
                                Debug::Log(); /*0x541c69*/
                                v23 = (_DWORD *)(*(this + 20) + 76); /*0x541c75*/
                                *v23 = *(_DWORD *)aP2.__pad_0; /*0x541c7b*/
                                v23[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541c81*/
                                v23[2] = aP2.field_8; /*0x541c88*/
                                Network::SetPort((_WORD *)(*(this + 20) + 76), (IPXManagerClass *)aP1); /*0x541c96*/
                                *(_DWORD *)&MEMORY[0xA8BB1C] = *(_DWORD *)aP2.__pad_0; /*0x541ca7*/
                                MEMORY[0xA8BB24] = aP2.field_8; /*0x541cb1*/
                                MEMORY[0xA8BB20] = *(_DWORD *)&aP2.field_1[3]; /*0x541cbd*/
                                Network::SetPort(&MEMORY[0xA8BB1C], (IPXManagerClass *)aP1); /*0x541cc2*/
                                *(IPXManagerClass *)&MEMORY[0xA8D63C].__pad_524[68] = *(IPXManagerClass *)aP2.__pad_0; /*0x541cd3*/
                                *(_DWORD *)&MEMORY[0xA8D63C].__pad_524[76] = aP2.field_8; /*0x541ce8*/
                                Network::SetPort(&MEMORY[0xA8D63C].__pad_524[68], (IPXManagerClass *)aP1); /*0x541cee*/
                                *(_WORD *)&MEMORY[0xA8D63C].__pad_524[92] = (_WORD)aP1; /*0x541cf8*/
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
              v7 = &MEMORY[0xA8D63C].__pad_BC0[182]; /*0x541943*/
              while ( !NetworkID::Compare( /*0x54196b*/
                         *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v5) + 40,
                         (int)&aP2)
                   || *(_WORD *)v7 != (_WORD)aP1 )
              {
                ++v5; /*0x541976*/
                v7 += 2; /*0x541977*/
                if ( v5 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x54197c*/
                {
                  v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[24] == 0; /*0x54197e*/
                  goto LABEL_14; /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87; /*0x54196b*/
        }
        ++*(this + 41); /*0x54216c*/
        goto LABEL_91; /*0x542178*/
      }
      v24 = (_WORD *)*(this + 19); /*0x541d04*/
      if ( v50 == v24[18] ) /*0x541d0b*/
      {
        if ( !MEMORY[0xA8D63C].__pad_524[64] /*0x541d2c*/
          || (*(int (__thiscall **)(_WORD *, __int16 *, unsigned int, DynamicVector *, _DWORD))(*(_DWORD *)v24 + 48))(
               v24,
               &v50,
               v2,
               &aP2,
               0) )
        {
          goto LABEL_87; /*0x541d31*/
        }
        ++*(this + 41); /*0x542183*/
LABEL_91:
        Debug::Log(); /*0x54218f*/
        goto LABEL_92; /*0x54218f*/
      }
      if ( v50 != *((_WORD *)this + 16) || Network_Recv((int)&v50, (int)&v50, v2, (int)v49, (__int16)aP1) ) /*0x541d63*/
        goto LABEL_87; /*0x541d6a*/
      v25 = v51[0]; /*0x541d75*/
      if ( MEMORY[0xA8D63C].__pad_524[64] && v51[1] == 0xFF ) /*0x541d87*/
      {
        if ( v51[0] == 2 ) /*0x541d90*/
        {
          (*(void (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)*(this + 20) + 12))( /*0x541da0*/
            *(this + 20),
            &v50,
            v2);
        }
        else if ( (int)*(this + 17) > 0 ) /*0x541dad*/
        {
          Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x541e46*/
          Debug::Log(); /*0x541e59*/
          if ( !(*(int (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)*(this + 10) + 12))( /*0x541e6f*/
                  *(this + 10),
                  &v50,
                  v2) )
          {
            v2 = 0; /*0x541e80*/
            ++*(this + 41); /*0x541e85*/
            goto LABEL_74; /*0x541e91*/
          }
        }
        goto LABEL_75; /*0x541da3*/
      }
      v26 = 0; /*0x541e99*/
      if ( (int)*(this + 17) <= 0 ) /*0x541e9d*/
      {
LABEL_60:
        if ( MEMORY[0xA8B238] == (CellStruct *)4 /*0x541f4a*/
          && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]
          && *(int *)&MEMORY[0xA8D63C].__pad_14B0[664] > 8
          && !MEMORY[0xA8D63C].__pad_524[64]
          && v2 > 0xF
          && v25 == 1
          && v52 == 25 )
        {
          eax67 = 1; /*0x541f56*/
          v30 = v53; /*0x541f5b*/
          if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] > 1 ) /*0x541f65*/
          {
            v31 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4; /*0x541f71*/
            while ( *(_DWORD *)(*(_DWORD *)v31 + 111) != v53 ) /*0x541f79*/
            {
              ++eax67; /*0x541f7f*/
              v31 += 4; /*0x541f80*/
              if ( eax67 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x541f85*/
                goto LABEL_86; /*0x541f85*/
            }
            v35 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * eax67) + 40); /*0x542113*/
            v44 = v53; /*0x542116*/
            *v35 = *(_DWORD *)aP2.__pad_0; /*0x542117*/
            v35[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54211d*/
            v35[2] = aP2.field_8; /*0x542124*/
            if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, v44) != -1 ) /*0x542131*/
            {
              v36 = (_DWORD *)(*(this + (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, v30) + 10) + 76); /*0x542143*/
              *v36 = *(_DWORD *)aP2.__pad_0; /*0x542146*/
              v36[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54214c*/
              v36[2] = aP2.field_8; /*0x542153*/
            }
LABEL_86:
            v2 = *(_DWORD *)aP2.__pad_C; /*0x542156*/
          }
        }
        goto LABEL_87; /*0x542156*/
      }
      v29 = (TechnoTypeClass *)(this + 10); /*0x541e9f*/
      while ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x541ea9*/
      {
        LinkedIndex = Factory::GetLinkedIndex( /*0x541eb6*/
                        (int *)&g_NetworkEventQueue,
                        *(DynamicVector **)(*(_DWORD *)v29->__pad_0 + 100));
        v25 = v51[0]; /*0x541ebb*/
        if ( LinkedIndex == v51[1] ) /*0x541ec4*/
          goto LABEL_72; /*0x541ec4*/
        if ( !MEMORY[0xA8D63C].__pad_524[64] ) /*0x541ed1*/
          break; /*0x541ed1*/
LABEL_59:
        ++v26; /*0x541ef1*/
        v29 = (TechnoTypeClass *)((char *)v29 + 4); /*0x541ef5*/
        if ( v26 >= *(this + 17) ) /*0x541efa*/
          goto LABEL_60; /*0x541efa*/
      }
      if ( !GUID::Compare((char *)(*(_DWORD *)v29->__pad_0 + 76), (int)&aP2) ) /*0x541edd*/
        break; /*0x541edd*/
LABEL_72:
      if ( !(*(int (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)*(this + v26 + 10) + 12))( /*0x541f9b*/
              *(this + v26 + 10),
              &v50,
              v2) )
      {
        v2 = 0; /*0x541fa8*/
        ++*(this + 41); /*0x541fad*/
LABEL_74:
        Debug::Log(); /*0x541fb9*/
      }
LABEL_75:
      if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x541fc8*/
      {
        if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x541fd5*/
        {
          if ( Network::processPacket(aP2.__pad_0, (TechnoTypeClass *)(*(this + 20) + 76)) ) /*0x541fe6*/
          {
            for ( i = 1; i < *(int *)&MEMORY[0xA8D63C].__pad_430[24]; ++i ) /*0x541fff*/
            {
              if ( NetworkID::Compare( /*0x54203e*/
                     *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40,
                     *(this + 20) + 76)
                && SessionClass::IsValidHouse(
                     (int)&MEMORY[0xA8B238],
                     *(#375 **)&HouseClass_Array->__pad_0[4
                                                        * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12]
                                                                                + 4 * i)
                                                                    + 111)]) )
              {
                Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x542051*/
                Network::FormatAddress((unsigned __int16 *)(*(this + 20) + 76), 0); /*0x54205f*/
                Debug::Log(); /*0x542071*/
                v33 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40); /*0x542085*/
                *v33 = *(_DWORD *)aP2.__pad_0; /*0x542088*/
                v33[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54208e*/
                v33[2] = aP2.field_8; /*0x542095*/
                v34 = (_DWORD *)(*(this + 20) + 76); /*0x54209f*/
                *v34 = *(_DWORD *)aP2.__pad_0; /*0x5420a2*/
                v34[1] = *(_DWORD *)&aP2.field_1[3]; /*0x5420a8*/
                v34[2] = aP2.field_8; /*0x5420af*/
                *(_DWORD *)&MEMORY[0xA8BB1C] = *(_DWORD *)aP2.__pad_0; /*0x5420be*/
                *(IPXManagerClass *)&MEMORY[0xA8D63C].__pad_524[68] = *(IPXManagerClass *)aP2.__pad_0; /*0x5420c3*/
                MEMORY[0xA8BB20] = *(_DWORD *)&aP2.field_1[3]; /*0x5420cd*/
                MEMORY[0xA8BB24] = aP2.field_8; /*0x5420d3*/
                *(_DWORD *)&MEMORY[0xA8D63C].__pad_524[76] = aP2.field_8; /*0x5420df*/
                NetworkManager::SetPlayerAddress( /*0x5420f6*/
                  (int *)&g_NetworkEventQueue,
                  *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 111),
                  &aP2);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !v2 ) /*0x54215c*/
        goto LABEL_92; /*0x54215c*/
    }
    v25 = v51[0]; /*0x541eea*/
    goto LABEL_59; /*0x541eea*/
  }
LABEL_92:
  v37 = *(this + 18); /*0x542197*/
  v38 = 0; /*0x54219a*/
  if ( v37 && *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] && !(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 20))(v37) ) /*0x5421aa*/
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 18) + 24))(*(this + 18)); /*0x5421b6*/
    aP2.field_10 = 0; /*0x5421b9*/
  }
  if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x5421c4*/
  {
    v39 = *(this + 19); /*0x5421c6*/
    if ( v39 ) /*0x5421cb*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 20))(v39) ) /*0x5421cf*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 19) + 24))(*(this + 19)); /*0x5421db*/
        aP2.field_10 = 0; /*0x5421de*/
      }
      if ( !MEMORY[0xA8D63C].__pad_BC0[212] ) /*0x5421e9*/
        Network::ProcessAddressChange(); /*0x5421f0*/
    }
    if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x5421fc*/
    {
      v40 = *(this + 20); /*0x5421fe*/
      if ( v40 ) /*0x542203*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 20))(v40) ) /*0x542207*/
        {
          Debug::Log(); /*0x542213*/
          aP2.field_10 = 0; /*0x54221b*/
        }
      }
    }
  }
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] && (int)*(this + 17) > 0 ) /*0x54222a*/
  {
    v47 = (TechnoTypeClass *)(this + 10); /*0x54222c*/
    do /*0x542260*/
    {
      if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v47->__pad_0 + 20))(*(_DWORD *)v47->__pad_0) ) /*0x542233*/
      {
        aP2.field_10 = 0; /*0x54223a*/
        *(this + 42) = *(_DWORD *)(*(_DWORD *)v47->__pad_0 + 100); /*0x542249*/
        Debug::Log(); /*0x54224f*/
      }
      ++v38; /*0x54225a*/
      v47 = (TechnoTypeClass *)((char *)v47 + 4); /*0x54225b*/
    }
    while ( v38 < *(this + 17) ); /*0x542260*/
  }
  result = aP2.field_10; /*0x542262*/
  if ( aP2.field_10 ) /*0x542268*/
    *(this + 42) = -1; /*0x54226a*/
  return result; /*0x542274*/
}
}
} // namespace gamemd

// 0x5422D0
namespace gamemd {
int Network::GetQueueCount()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_GetQueueCount(int this)
{
  if ( (unsigned char)this->Network_field_0x4 && *(_BYTE *)(this + 5) ) /*0x5422d7*/
    return *(_DWORD *)(*(_DWORD *)(this->Network_field_0x48 + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/
}
}
} // namespace gamemd

// 0x5424C0
namespace gamemd {
int Network::GetLobbyStatus()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_GetLobbyStatus(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 18); /*0x5424c0*/
  if ( v1 ) /*0x5424c5*/
    return CellClass::GetBridgeIndex(*(_DWORD *)(v1 + 4)); /*0x5424ca*/
  else
    return 0; /*0x5424cf*/
}
}
} // namespace gamemd

// 0x542500
namespace gamemd {
int Network::updateLatency()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_542500(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 20); /*0x542500*/
  if ( v1 ) /*0x542505*/
    return CellClass::GetBridgeIndex(*(_DWORD **)(v1 + 4)); /*0x54250a*/
  else
    return 0; /*0x54250f*/
}
}
} // namespace gamemd

// 0x543050
namespace gamemd {
unsigned int * Network::SetPlayerCoords(IPXManagerClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Network::SetPlayerCoords(_DWORD *this, IPXManagerClass *aP1)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 19); /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *(IPXManagerClass *)result = *aP1; /*0x543060*/
    result[2] = aP1[1].Socket; /*0x54306b*/
  }
  return result; /*0x54306e*/
}
}
} // namespace gamemd

// 0x543080
namespace gamemd {
int Network::Disconnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_Disconnect(_DWORD *this)
{
  int result; // eax

  result = *(this + 18); /*0x543080*/
  if ( result ) /*0x543085*/
    *(_BYTE *)(result + 200) = 0; /*0x543087*/
  return result; /*0x54308e*/
}
}
} // namespace gamemd

// 0x5B5E90
namespace gamemd {
int Network::SendSettingsRequest()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_SendSettingsRequest(HWND *this)
{
  HWND DlgItem; // eax
  _DWORD v3[62]; // [esp+0h] [ebp-FCh] BYREF
  __int16 v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem(*this, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset(v3, 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v3, 250, 1); /*0x5b5edd*/
}
}
} // namespace gamemd

// 0x5BB580
namespace gamemd {
HKEY sub_5BB580(HKEY a1, const CHAR * a2, const char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HKEY __fastcall sub_5BB580(HKEY a1, const CHAR *a2, const char *a3)
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
  v5 = (CHAR *)__2_YAPAXI_Z(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)__2_YAPAXI_Z(0x100u); /*0x5bb5ad*/
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
        __3_YAXPAX_Z(v5); /*0x5bb67d*/
        __3_YAXPAX_Z(lpData); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        __3_YAXPAX_Z(v5); /*0x5bb69c*/
        __3_YAXPAX_Z(lpData); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5bb6bb*/
  __3_YAXPAX_Z(lpData); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}
}
} // namespace gamemd

// 0x5BC3C0
namespace gamemd {
unsigned signed char sub_5BC3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 sub_5BC3C0()
{
  unsigned __int8 result; // al

  result = MEMORY[0xABF238]; /*0x5bc3c0*/
  if ( MEMORY[0xABF238] ) /*0x5bc3c7*/
  {
    if ( !MEMORY[0xABF240] ) /*0x5bc3d0*/
      CreateDebugOutput(); /*0x5bc3d2*/
    MEMORY[0xABF23A] = 1; /*0x5bc3df*/
    ShowWindow(MEMORY[0xABF240], 1); /*0x5bc3e6*/
    return (unsigned __int8)SetFocus(MEMORY[0xABF234]); /*0x5bc3f3*/
  }
  return result; /*0x5bc3f9*/
}
}
} // namespace gamemd

// 0x5BCC40
namespace gamemd {
int Network::validateConnection(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5BCC40(_DWORD *this, int a2, int a3)
{
  *(this + 2503) = a2; /*0x5bcc48*/
  *(this + 2504) = a3; /*0x5bcc4e*/
  return a2; /*0x5bcc54*/
}
}
} // namespace gamemd

// 0x5C46E0
namespace gamemd {
int Network::SetupRematch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5C46E0(int this)
{
  char *v2; // edi
  int v3; // eax
  int *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  wchar_t *v10; // esi
  unsigned int v11; // ecx
  int ConnectionSpeed; // eax
  int v14; // [esp+10h] [ebp-30h] BYREF
  int v15; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v16[8]; // [esp+18h] [ebp-28h] BYREF
  char v17[16]; // [esp+20h] [ebp-20h] BYREF
  int v18; // [esp+30h] [ebp-10h]
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int i; // [esp+3Ch] [ebp-4h]

  dword_B779D4 = 0; /*0x5c46f5*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x5c46fb*/
  *(_DWORD *)dword_B779C4 = 0; /*0x5c4700*/
  MEMORY[0xA8F900] = 0; /*0x5c4706*/
  v2 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x5c4711*/
  v3 = MEMORY[0xA8DA78]; /*0x5c471e*/
  strcpy(byte_B77830, v2); /*0x5c472f*/
  v4 = (int *)(*(_DWORD *)(v3 + 4 * *(_DWORD *)(this + 84)) + 40); /*0x5c473e*/
  MEMORY[0xA8BB1C] = *v4; /*0x5c4743*/
  MEMORY[0xA8BB20] = v4[1]; /*0x5c474c*/
  MEMORY[0xA8BB24] = v4[2]; /*0x5c4755*/
  wcscpy(&MEMORY[0xA8E258], *(const wchar_t **)(v3 + 4 * *(_DWORD *)(this + 84))); /*0x5c4767*/
  MEMORY[0xA8E2AC] = -1; /*0x5c4772*/
  MEMORY[0xA8B3AC] = *(_DWORD *)(this + 112); /*0x5c4782*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x5c4789*/
  strcpy(v17, "xxx.xxx.xxx.xxx"); /*0x5c47a3*/
  v18 = 0; /*0x5c47ac*/
  v19 = 0; /*0x5c47b9*/
  v5 = 1; /*0x5c47bd*/
  v20 = 0; /*0x5c47c2*/
  for ( i = 0; v5 < MEMORY[0xA8DA84]; ++v5 ) /*0x5c47d0*/
  {
    Network::GetAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5) + 40), &v15, (int)v16, &v14); /*0x5c47ed*/
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)MEMORY[0x887628] + 44))(MEMORY[0x887628], v17, v14); /*0x5c4804*/
  }
  qmemcpy(&MEMORY[0xA8DBCC], (const void *)(this + 196), 0x60u); /*0x5c4827*/
  qmemcpy(MEMORY[0xA8DC2C], (const void *)(this + 292), sizeof(MEMORY[0xA8DC2C])); /*0x5c4839*/
  qmemcpy(&MEMORY[0xA8E230], (const void *)(this + 324), 0x20u); /*0x5c484b*/
  MEMORY[0xA8E2B2] = *(_DWORD *)(this + 404); /*0x5c484f*/
  MEMORY[0xA8E2B6] = *(_DWORD *)(this + 408); /*0x5c4858*/
  MEMORY[0xA8E2BA] = *(_DWORD *)(this + 412); /*0x5c4861*/
  MEMORY[0xA8E2BE] = *(_DWORD *)(this + 416); /*0x5c4876*/
  wcscpy(&MEMORY[0xA8E258], (const wchar_t *)(this + 356)); /*0x5c487c*/
  MEMORY[0xA8E2AC] = *(_DWORD *)(this + 400); /*0x5c488a*/
  MEMORY[0xA8ED94] = *(_DWORD *)(this + 156); /*0x5c4896*/
  InitRandomSeed(); /*0x5c489c*/
  Debug::Log("Setup Rematch: Random Seed = %d\n", MEMORY[0xA8ED94]);
  g_RulesInitConfig = *(_DWORD *)(this + 160); /*0x5c48ba*/
  MEMORY[0xA8B270] = *(_DWORD *)(this + 164); /*0x5c48c6*/
  MEMORY[0xA8B25C] = *(_DWORD *)(this + 168); /*0x5c48d2*/
  MEMORY[0xA8B31F] = *(_BYTE *)(this + 172); /*0x5c48dd*/
  MEMORY[0xA8B260] = *(_BYTE *)(this + 173); /*0x5c48e9*/
  MEMORY[0xA8B261] = *(_BYTE *)(this + 174); /*0x5c48f5*/
  LOBYTE(MEMORY[0xA8B320]) = *(_BYTE *)(this + 175); /*0x5c4900*/
  MEMORY[0xA8B31C] = *(_BYTE *)(this + 176); /*0x5c490c*/
  MEMORY[0xA8B31D] = *(_BYTE *)(this + 177); /*0x5c4918*/
  MEMORY[0xA8B258] = *(_BYTE *)(this + 178); /*0x5c4923*/
  MEMORY[0xA8B31E] = *(_BYTE *)(this + 179); /*0x5c492f*/
  MEMORY[0xA8B278] = *(_DWORD *)(this + 184); /*0x5c493b*/
  MEMORY[0xA8B262] = *(_BYTE *)(this + 188); /*0x5c4946*/
  MEMORY[0xA8B263] = *(_BYTE *)(this + 189); /*0x5c4952*/
  LOBYTE(MEMORY[0xA8B264]) = *(_BYTE *)(this + 190); /*0x5c495e*/
  MEMORY[0xA8B26C] = *(_BYTE *)(this + 191); /*0x5c4969*/
  MEMORY[0xA8B268] = *(_DWORD *)(this + 192); /*0x5c497b*/
  LoadScenarioClassByIndex(MEMORY[0xA8B254]); /*0x5c4981*/
  *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x5c4997*/
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x5c499c*/
  switch ( MEMORY[0xA8B268] ) /*0x5c49b0*/
  {
    case 0: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x5c49b7*/
      MEMORY[0xA8B570] = 60; /*0x5c49c1*/
      MEMORY[0xA8B554] = 10; /*0x5c49cb*/
      goto LABEL_12; /*0x5c49d5*/
    case 1: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x5c49d7*/
      MEMORY[0xA8B570] = 45; /*0x5c49e1*/
      MEMORY[0xA8B554] = 10; /*0x5c49eb*/
      goto LABEL_12; /*0x5c49f5*/
    case 2: /*0x5c49b0*/
      v6 = 30; /*0x5c49f7*/
      goto LABEL_11; /*0x5c49fc*/
    case 3: /*0x5c49b0*/
      v6 = 20; /*0x5c49fe*/
      goto LABEL_11; /*0x5c4a03*/
    case 4: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x5c4a05*/
      MEMORY[0xA8B570] = 15; /*0x5c4a0f*/
      goto LABEL_12; /*0x5c4a19*/
    case 5: /*0x5c49b0*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x5c4a1b*/
      MEMORY[0xA8B570] = 12; /*0x5c4a25*/
      goto LABEL_12; /*0x5c4a2f*/
    default:
      v6 = 10; /*0x5c4a31*/
LABEL_11:
      MEMORY[0xA8B550] = (wchar_t *)v6; /*0x5c4a36*/
      MEMORY[0xA8B570] = v6; /*0x5c4a3b*/
LABEL_12:
      MEMORY[0xA8B56C] = 0; /*0x5c4a40*/
      if ( !(unsigned char)this->Network_field_0x4 ) /*0x5c4a46*/
        MEMORY[0xA8B570] = 0; /*0x5c4a4d*/
      v7 = 0; /*0x5c4a58*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x5c4a5c*/
      {
        v8 = &dword_B7790C; /*0x5c4a5e*/
        v9 = MEMORY[0xA8DA84]; /*0x5c4a63*/
        do /*0x5c4a71*/
        {
          if ( *v8 > v7 ) /*0x5c4a69*/
            v7 = *v8; /*0x5c4a6b*/
          ++v8; /*0x5c4a6d*/
          --v9; /*0x5c4a70*/
        }
        while ( v9 ); /*0x5c4a71*/
      }
      MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x5c4a7a*/
      if ( !v7 || v7 == 1000 ) /*0x5c4a8c*/
      {
        MEMORY[0xA8B570] = 0; /*0x5c4b73*/
        Debug::Log(aPingTimesNotAv_0); /*0x5c4b79*/
LABEL_34:
        v10 = MEMORY[0xA8B550]; /*0x5c4b81*/
        goto LABEL_35; /*0x5c4b81*/
      }
      Debug::Log("Max ping is %d ms\n", v7); /*0x5c4a98*/
      if ( v7 <= 1000 ) /*0x5c4aa6*/
      {
        if ( v7 < 600 ) /*0x5c4aba*/
          MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x5c4abc*/
      }
      else
      {
        MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x5c4aa8*/
      }
      Network::SetConnectionParams( /*0x5c4b0b*/
        MEMORY[0xA8E9C0],
        120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000,
        -1,
        8 * (120 * (60 * v7 / 1000) / 100 + 60 * v7 / 1000),
        1);
      if ( !(unsigned char)this->Network_field_0x4 ) /*0x5c4b10*/
        goto LABEL_34; /*0x5c4b10*/
      IPXManagerClass::sendPacket(5, -1, 120); /*0x5c4b20*/
      if ( !(unsigned char)this->Network_field_0x4 ) /*0x5c4b25*/
        goto LABEL_34; /*0x5c4b28*/
      v10 = MEMORY[0xA8B550]; /*0x5c4b2f*/
      switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x5c4b3a*/
      {
        case 0u: /*0x5c4b3a*/
        case 1u: /*0x5c4b3a*/
          v11 = (unsigned int)MEMORY[0xA8B550]; /*0x5c4b41*/
          break; /*0x5c4b43*/
        case 2u: /*0x5c4b3a*/
          v11 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x5c4b49*/
          break; /*0x5c4b4b*/
        case 3u: /*0x5c4b3a*/
          v11 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x5c4b4d*/
          break; /*0x5c4b50*/
        default:
          v11 = MEMORY[0xA8B56C]; /*0x5c4b52*/
          break; /*0x5c4b52*/
      }
      MEMORY[0xA8B56C] = 10 * (v11 / 0xA); /*0x5c4b67*/
LABEL_35:
      MEMORY[0xA8B568] = (int)v10; /*0x5c4b87*/
      memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x5c4b99*/
      byte_B77A04 = 0; /*0x5c4ba1*/
      *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x5c4ba7*/
      byte_B76568 = 0; /*0x5c4bad*/
      Scenario::PreGameInit(); /*0x5c4bb3*/
      unk_8B41F8 = 0; /*0x5c4bbf*/
      unk_8B41FC = 0; /*0x5c4bc5*/
      unk_8B4200 = 0; /*0x5c4bcb*/
      Networking_LastEventIndex = 0; /*0x5c4bd1*/
      g_NetworkEventIndex = 0; /*0x5c4bd7*/
      Networking_NextPacketIndex = 0; /*0x5c4bdd*/
      Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x5c4be3*/
      Debug::Log("@@@@ Before destroying connections players.count() = %d\n", MEMORY[0xA8DA84]); /*0x5c4bf4*/
      while ( Network::GetSendCount(MEMORY[0xA8E9C0]) ) /*0x5c4c01*/
      {
        ConnectionSpeed = Network::GetConnectionSpeed(MEMORY[0xA8E9C0], 0); /*0x5c4c10*/
        Network::sendData(ConnectionSpeed); /*0x5c4c1b*/
      }
      if ( MEMORY[0xA8DBA0] ) /*0x5c4c34*/
      {
        if ( MEMORY[0xA8EA0C] ) /*0x5c4c3c*/
          NetworkEventQueueClass::WaitForResponse(&g_NetworkEventQueue); /*0x5c4c43*/
        MEMORY[0xA8DBA0] = 0; /*0x5c4c48*/
      }
      return Debug::Log("@@@@ After destroying connections players.count() = %d\n", MEMORY[0xA8DA84]);
  }
}
}
} // namespace gamemd

// 0x5D90E0
namespace gamemd {
char Network::QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Network::QueryAddress(IPXManagerClass *aP0, int a2, int a3, char a4)
{
  int QueueCount; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  DWORD Ticks; // [esp+Ch] [ebp-1D4h]
  int v10; // [esp+18h] [ebp-1C8h] BYREF
  char v11[3]; // [esp+1Ch] [ebp-1C4h] BYREF
  __int16 v12; // [esp+4Dh] [ebp-193h]
  bool v13; // [esp+4Fh] [ebp-191h]

  v10 = 43; /*0x5d9103*/
  strcpy(v11, &stru_830620.__pad_690[64]); /*0x5d910e*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 116))( /*0x5d9127*/
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    a2);
  v12 = a2; /*0x5d9139*/
  v13 = a4 == 1; /*0x5d9141*/
  QueueCount = Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]); /*0x5d9155*/
  Network::FormatAddress((unsigned __int16 *)aP0, 0); /*0x5d9157*/
  Debug::Log(); /*0x5d9169*/
  LOWORD(v5) = aP0->Socket; /*0x5d9175*/
  Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)&v10, 56, 0, (int)aP0, v5, a3); /*0x5d918c*/
  Ticks = Timer::GetTicks(); /*0x5d919a*/
  while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > QueueCount /*0x5d91ab*/
       || *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23320] + 48) )
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
    Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]); /*0x5d91ea*/
    Event::Dispatch(); /*0x5d91ef*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 116))( /*0x5d91f6*/
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    0);
  return 1; /*0x5d9203*/
}
}
} // namespace gamemd

// 0x5D9220
namespace gamemd {
short Network::WaitForPacket(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __stdcall Network_WaitForPacket(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  __int16 v5; // si
  __int16 v7; // [esp+Eh] [ebp-1F6h] BYREF
  DWORD Ticks; // [esp+10h] [ebp-1F4h]
  int v9; // [esp+14h] [ebp-1F0h]
  int v10; // [esp+18h] [ebp-1ECh]
  int v11; // [esp+1Ch] [ebp-1E8h] BYREF
  _BYTE v12[8]; // [esp+20h] [ebp-1E4h] BYREF
  int v13; // [esp+28h] [ebp-1DCh]
  _BYTE v14[12]; // [esp+30h] [ebp-1D4h] BYREF
  _DWORD v15[11]; // [esp+3Ch] [ebp-1C8h] BYREF
  int v16; // [esp+6Bh] [ebp-199h]
  int v17; // [esp+71h] [ebp-193h]

  v2 = 0; /*0x5d922d*/
  Waypoint::InitInvalid(v14); /*0x5d922f*/
  v3 = 60; /*0x5d9244*/
  Ticks = Timer::GetTicks(); /*0x5d924b*/
  v10 = 60; /*0x5d924f*/
  if ( a2 ) /*0x5d9253*/
  {
    Ticks = Timer::GetTicks(); /*0x5d925e*/
    v3 = a2; /*0x5d9266*/
    v9 = v13; /*0x5d9268*/
    v10 = a2; /*0x5d926c*/
  }
  while ( 1 ) /*0x5d9277*/
  {
    if ( Ticks != -1 ) /*0x5d927c*/
    {
      v4 = Timer::GetTicks() - Ticks; /*0x5d9287*/
      if ( v4 >= v3 ) /*0x5d928d*/
        return 0; /*0x5d928d*/
      v3 -= v4; /*0x5d9293*/
    }
    if ( !v3 ) /*0x5d9297*/
      break; /*0x5d9297*/
    Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x5d92a2*/
    Event::Dispatch(); /*0x5d92a7*/
    if ( v2 >= Connection::GetSpeed(MEMORY[0xA8E9C0]) ) /*0x5d92b8*/
      v2 = 0; /*0x5d92ba*/
    if ( Network::SendPacketThunk(v2, v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 ) /*0x5d9304*/
    {
      v5 = v16; /*0x5d9314*/
      Debug::Log(MEMORY[0x830CF4], (unsigned __int16)v17, (unsigned __int16)v16); /*0x5d9322*/
      Network::receiveData(v2); /*0x5d9330*/
      return v5; /*0x5d9341*/
    }
    v3 = v10; /*0x5d9306*/
    ++v2; /*0x5d930a*/
  }
  return 0; /*0x5d9338*/
}
}
} // namespace gamemd

// 0x5D93D0
namespace gamemd {
int Network::dispatchEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5D93D0(_DWORD *this)
{
  int result; // eax

  *(this + 1) = INIClass::ReadInt_Overwrite( /*0x5d93fa*/
                  (int)&MEMORY[0x8870C0],
                  (unsigned __int8 *)MEMORY[0x82642C],
                  (unsigned __int8 *)MEMORY[0x830CC0],
                  0);
  result = INIClass::ReadInt_Overwrite( /*0x5d93fd*/
             (int)&MEMORY[0x8870C0],
             (unsigned __int8 *)MEMORY[0x82642C],
             (unsigned __int8 *)MEMORY[0x830CB0],
             1);
  *(this + 3) = result; /*0x5d9402*/
  return result; /*0x5d9405*/
}
}
} // namespace gamemd

// 0x5D9410
namespace gamemd {
int Network::ResolveAndConnect(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_ResolveAndConnect(int *this, _BYTE *a2)
{
  _BYTE *v3; // esi
  int v4; // edi
  int v5; // esi
  int v7; // ebx
  const char *v8; // esi
  struct hostent *v9; // eax
  int v10; // ecx
  signed int *v11; // edx
  _DWORD *v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  char *v16; // esi
  signed int *v17; // edi
  int v18; // esi
  int v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v23; // edi
  __int16 i; // si
  int v25; // eax
  int v26; // edi
  __int16 j; // bx
  int v28; // eax
  _WORD *v29; // esi
  int k; // edi
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  signed int v38; // eax
  int v39; // esi
  int v40; // esi
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  _WORD *v44; // esi
  int v45; // eax
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // ecx
  int v51; // ebx
  int v52; // eax
  int v53; // ecx
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
  DWORD Ticks; // [esp+44h] [ebp-184h]
  DWORD v69; // [esp+44h] [ebp-184h]
  DWORD v70; // [esp+44h] [ebp-184h]
  signed int v71; // [esp+44h] [ebp-184h]
  DWORD v72; // [esp+44h] [ebp-184h]
  DWORD v73; // [esp+44h] [ebp-184h]
  int v74; // [esp+50h] [ebp-178h] BYREF
  int v75; // [esp+54h] [ebp-174h]
  int v76; // [esp+58h] [ebp-170h] BYREF
  int v77; // [esp+5Ch] [ebp-16Ch]
  _DWORD v78[3]; // [esp+60h] [ebp-168h] BYREF
  signed int v79; // [esp+6Ch] [ebp-15Ch] BYREF
  int v80; // [esp+70h] [ebp-158h]
  int v81; // [esp+74h] [ebp-154h]
  char *v82; // [esp+7Ch] [ebp-14Ch]
  char *v83; // [esp+80h] [ebp-148h]
  int v84; // [esp+84h] [ebp-144h]
  _DWORD v85[2]; // [esp+88h] [ebp-140h] BYREF
  _DWORD v86[2]; // [esp+90h] [ebp-138h] BYREF
  _DWORD v87[3]; // [esp+98h] [ebp-130h] BYREF
  unsigned __int16 v88[18]; // [esp+A4h] [ebp-124h] BYREF
  char name[256]; // [esp+C8h] [ebp-100h] BYREF

  v75 = 4321; /*0x5d9425*/
  v77 = 2130706432; /*0x5d942d*/
  *a2 = 0; /*0x5d9435*/
  v66 = 0; /*0x5d9437*/
  v3 = v87; /*0x5d943b*/
  v4 = 4; /*0x5d943f*/
  do /*0x5d944f*/
  {
    Waypoint::InitInvalid(v3); /*0x5d9446*/
    v3 += 12; /*0x5d944b*/
    --v4; /*0x5d944e*/
  }
  while ( v4 ); /*0x5d944f*/
  Timer::GetTicks(); /*0x5d9455*/
  if ( MEMORY[0xA8E254] ) /*0x5d9469*/
  {
    v5 = 1; /*0x5d9471*/
    Debug::Log(); /*0x5d9476*/
    if ( MEMORY[0xA8E180] ) /*0x5d9485*/
    {
      v5 = 9; /*0x5d948c*/
      Debug::Log(); /*0x5d9491*/
    }
    return v5; /*0x5d94a5*/
  }
  Ticks = Timer::GetTicks(); /*0x5d94bf*/
  Debug::Log(); /*0x5d94cb*/
  v7 = 0; /*0x5d94d3*/
  v84 = 0; /*0x5d94d5*/
  v78[0] = dword_B76338; /*0x5d94d9*/
  v83 = MEMORY[0xB73E44]; /*0x5d94e1*/
  v82 = MEMORY[0x830C08]; /*0x5d94e9*/
  while ( 1 ) /*0x5d94fb*/
  {
    v8 = v82; /*0x5d94fb*/
    if ( dword_B77E1C > v84 ) /*0x5d9501*/
    {
      v8 = v83; /*0x5d9507*/
      LOWORD(v75) = *(_WORD *)v78[0]; /*0x5d9513*/
      Debug::Log(); /*0x5d9518*/
    }
    v82 += 32; /*0x5d953b*/
    v83 += 128; /*0x5d953f*/
    v78[0] += 4; /*0x5d9543*/
    ++v84; /*0x5d9554*/
    if ( !strlen(v8) ) /*0x5d954f*/
      break; /*0x5d954f*/
    strcpy(name, v8); /*0x5d9579*/
    v9 = gethostbyname(name); /*0x5d958a*/
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
      v12 = (signed int *)((char *)&v79 + v7); /*0x5d95c8*/
      v7 += 4; /*0x5d95cc*/
      *v12 = **(_DWORD **)v9->h_addr_list; /*0x5d95d1*/
      Debug::Log(); /*0x5d95f2*/
    }
    else
    {
      v11 = &v79; /*0x5d95a2*/
      while ( *v11 != **(_DWORD **)v9->h_addr_list ) /*0x5d95aa*/
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
  v16 = (char *)v87; /*0x5d964c*/
  v17 = &v79; /*0x5d9650*/
  do /*0x5d9679*/
  {
    v78[0] = *v17; /*0x5d965d*/
    Struct::Copy6Bytes(v16, (int)v78); /*0x5d9661*/
    Network::SetPort(v16, v75); /*0x5d966d*/
    ++v17; /*0x5d9672*/
    v16 += 12; /*0x5d9675*/
    --v15; /*0x5d9678*/
  }
  while ( v15 ); /*0x5d9679*/
  v18 = 255; /*0x5d967b*/
  while ( 1 ) /*0x5d9689*/
  {
    v19 = *(this + 4) + 1; /*0x5d9689*/
    LOWORD(v15) = (unsigned short)this->Network_field_0x10 + 1; /*0x5d968b*/
    v20 = *(this + 4) - 65534 < 0; /*0x5d968e*/
    *(this + 4) = v19; /*0x5d9693*/
    v75 = v15; /*0x5d9696*/
    if ( !(v20 ^ __OFSUB__(v19, 0xFFFF) | (v19 == 0xFFFF)) ) /*0x5d969a*/
      *(this + 4) = 2048; /*0x5d969c*/
    v21 = MEMORY[0x887628]; /*0x5d969f*/
    if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d96b0*/
      break; /*0x5d96b0*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v15) ) /*0x5d96b5*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v15); /*0x5d96ce*/
LABEL_36:
      v21 = MEMORY[0x887628]; /*0x5d96d1*/
      break; /*0x5d96d1*/
    }
    if ( !v18-- ) /*0x5d96bc*/
      goto LABEL_36; /*0x5d96c1*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v21 + 104))(v21, v15) ) /*0x5d96da*/
    return 1; /*0x5d9d92*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d96ed*/
  v69 = Timer::GetTicks(); /*0x5d96f9*/
  v23 = 360; /*0x5d9701*/
  for ( i = 0; ; i = Network::WaitForPacket(2130706432, 0) ) /*0x5d970e*/
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
    Network::QueryAddress((unsigned __int16 *)v87, v15, 2130706432, 0); /*0x5d9742*/
    v23 = 360; /*0x5d9755*/
  }
  if ( !i ) /*0x5d9760*/
  {
LABEL_159:
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v15); /*0x5d9d6d*/
    if ( i == (_WORD)v15 ) /*0x5d9d7c*/
    {
      *(this + 2) = 0; /*0x5d9d85*/
      *a2 = 1; /*0x5d9d8c*/
    }
    return 1; /*0x5d9d8c*/
  }
LABEL_46:
  if ( i == (_WORD)v15 ) /*0x5d9769*/
    goto LABEL_159; /*0x5d9769*/
  v26 = 360; /*0x5d977c*/
  v70 = Timer::GetTicks(); /*0x5d9781*/
  for ( j = 0; ; j = Network::WaitForPacket(2130706433, 0) ) /*0x5d978d*/
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
    Network::QueryAddress(v88, v75, 2130706433, 0); /*0x5d97c5*/
    v26 = 360; /*0x5d97d8*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v75); /*0x5d97e0*/
  if ( !j || j == (_WORD)v75 ) /*0x5d97fc*/
    return 1; /*0x5d97fc*/
  v78[0] = 0; /*0x5d9805*/
  v29 = (_WORD *)(j != i ? 4 : 2);
  v67 = (int)v29; /*0x5d9818*/
  while ( 2 ) /*0x5d981c*/
  {
    v85[0] = 0; /*0x5d981c*/
    v86[0] = 0; /*0x5d9824*/
    v85[1] = 0; /*0x5d9828*/
    v86[1] = 0; /*0x5d982c*/
    for ( k = 0; k < 4; ++k ) /*0x5d9830*/
    {
      v31 = k; /*0x5d9834*/
      if ( !k ) /*0x5d9836*/
        v31 = 1; /*0x5d9838*/
      v75 = 255; /*0x5d983d*/
      while ( 1 ) /*0x5d984a*/
      {
        v32 = v31 + *(this + 4); /*0x5d984a*/
        *(this + 4) = v32; /*0x5d984c*/
        LOWORD(v29) = v32; /*0x5d9854*/
        if ( v32 > 0xFFFF ) /*0x5d9857*/
          *(this + 4) = 2048; /*0x5d9859*/
        v33 = MEMORY[0x887628]; /*0x5d9860*/
        if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9871*/
          break; /*0x5d9871*/
        if ( (*(unsigned __int8 (__stdcall **)(_WORD *))(*(_DWORD *)MEMORY[0x887628] + 104))(v29) ) /*0x5d9876*/
        {
          (*(void (__thiscall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v29); /*0x5d9897*/
LABEL_69:
          v33 = MEMORY[0x887628]; /*0x5d989a*/
          break; /*0x5d989a*/
        }
        if ( v75-- == 0 ) /*0x5d9884*/
          goto LABEL_69; /*0x5d988a*/
      }
      *((_WORD *)v85 + k) = (_WORD)v29; /*0x5d98a0*/
      v35 = (*(int (__thiscall **)(int, _WORD *))(*(_DWORD *)v33 + 104))(v33, v29); /*0x5d98a8*/
      if ( !(_BYTE)v35 ) /*0x5d98ad*/
      {
        if ( k > 0 ) /*0x5d99e7*/
        {
          v44 = v85; /*0x5d99e9*/
          do /*0x5d9a05*/
          {
            if ( *v44 ) /*0x5d99ed*/
            {
              LOWORD(v35) = *v44; /*0x5d99ed*/
              v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v35); /*0x5d99fe*/
            }
            ++v44; /*0x5d9a01*/
            --k; /*0x5d9a04*/
          }
          while ( k ); /*0x5d9a05*/
        }
        return v67; /*0x5d9a15*/
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d98c5*/
    v36 = 0; /*0x5d98d3*/
    v77 += 10; /*0x5d98d5*/
    v38 = Timer::GetTicks(); /*0x5d98d9*/
    HIWORD(v37) = 0; /*0x5d98de*/
    v79 = v38; /*0x5d98e3*/
    v71 = v38; /*0x5d98e7*/
    HIWORD(v38) = HIWORD(v80); /*0x5d98eb*/
    v39 = 720; /*0x5d98ef*/
    v81 = 720; /*0x5d98f1*/
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
        if ( !*((_WORD *)v86 + k) ) /*0x5d9926*/
        {
          LOWORD(v37) = *((_WORD *)v85 + k); /*0x5d992e*/
          Network::QueryAddress((unsigned __int16 *)v87, v37, v40, 0); /*0x5d993e*/
          LOWORD(v38) = Network::WaitForPacket(v40, 0); /*0x5d9948*/
          *((_WORD *)v86 + k) = v38; /*0x5d9950*/
          if ( (_WORD)v38 ) /*0x5d9955*/
            ++v36; /*0x5d9957*/
        }
        ++v40; /*0x5d9959*/
      }
      v39 = 720; /*0x5d995f*/
    }
    v29 = v85; /*0x5d9969*/
    do /*0x5d9985*/
    {
      if ( *v29 ) /*0x5d996d*/
      {
        LOWORD(v38) = *v29; /*0x5d996d*/
        v38 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v38); /*0x5d997e*/
      }
      ++v29; /*0x5d9981*/
      --k; /*0x5d9984*/
    }
    while ( k ); /*0x5d9985*/
    if ( v36 < 4 ) /*0x5d998a*/
    {
      v45 = *(this + 3); /*0x5d9a18*/
      if ( v45 && *(this + 1) > 1 ) /*0x5d9a23*/
        *(this + 2) = v45; /*0x5d9a25*/
      return v67; /*0x5d9a28*/
    }
    else
    {
      HIBYTE(v76) = 0; /*0x5d99a7*/
      HIBYTE(v74) = 0; /*0x5d99ac*/
      v41 = DetectPortAllocationPattern(v36, v85, v86, (char *)&v76 + 3, (char *)&v74 + 3); /*0x5d99b1*/
      if ( v41 ) /*0x5d99b8*/
      {
        v46 = -(HIBYTE(v76) != 0); /*0x5d9a43*/
        *(this + 2) = v41; /*0x5d9a45*/
        v43 = ((v46 & 0x10) + 16) | v67; /*0x5d9a52*/
        v67 = v43; /*0x5d9a56*/
        if ( HIBYTE(v74) ) /*0x5d9a5a*/
          *a2 = 1; /*0x5d9a63*/
      }
      else
      {
        v42 = *(this + 3); /*0x5d99ba*/
        if ( v42 && *(this + 1) > 1 ) /*0x5d99c5*/
          *(this + 2) = v42; /*0x5d99c7*/
        if ( ++v78[0] < 3 ) /*0x5d99d6*/
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
            v48 = *(this + 4) + 1; /*0x5d9a8e*/
            *(this + 4) = v48; /*0x5d9a90*/
            LOWORD(k) = v48; /*0x5d9a98*/
            if ( v48 > 0xFFFF ) /*0x5d9a9b*/
              *(this + 4) = 2048; /*0x5d9a9d*/
            v49 = MEMORY[0x887628]; /*0x5d9aa4*/
            if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9ab5*/
              break; /*0x5d9ab5*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(k) ) /*0x5d9aba*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], k); /*0x5d9ad3*/
LABEL_118:
              v49 = MEMORY[0x887628]; /*0x5d9ad6*/
              break; /*0x5d9ad6*/
            }
            if ( !v47-- ) /*0x5d9ac1*/
              goto LABEL_118; /*0x5d9ac6*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v49 + 104))(v49, k) ) /*0x5d9adf*/
            return v43; /*0x5d9af2*/
          v51 = 255; /*0x5d9af5*/
          while ( 1 ) /*0x5d9afe*/
          {
            v52 = *(this + 4) + 1; /*0x5d9afe*/
            LOWORD(v47) = (unsigned short)this->Network_field_0x10 + 1; /*0x5d9b00*/
            v20 = *(this + 4) - 65534 < 0; /*0x5d9b03*/
            *(this + 4) = v52; /*0x5d9b08*/
            v75 = v47; /*0x5d9b0b*/
            if ( !(v20 ^ __OFSUB__(v52, 0xFFFF) | (v52 == 0xFFFF)) ) /*0x5d9b0f*/
              *(this + 4) = 2048; /*0x5d9b11*/
            v53 = MEMORY[0x887628]; /*0x5d9b18*/
            if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5d9b29*/
              break; /*0x5d9b29*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v47) ) /*0x5d9b2e*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v47); /*0x5d9b47*/
LABEL_130:
              v53 = MEMORY[0x887628]; /*0x5d9b4a*/
              break; /*0x5d9b4a*/
            }
            if ( !v51-- ) /*0x5d9b35*/
              goto LABEL_130; /*0x5d9b3a*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v53 + 104))(v53, v47) ) /*0x5d9b53*/
            return v67; /*0x5d9b68*/
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5d9b73*/
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
            Network::QueryAddress((unsigned __int16 *)v87, k, v77, 0); /*0x5d9bd3*/
            v59 = Network::WaitForPacket(v58, 0); /*0x5d9bdd*/
            v56 = 240; /*0x5d9be2*/
            v55 = v59; /*0x5d9be6*/
          }
          if ( !v55 ) /*0x5d9bed*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], k); /*0x5d9bf8*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v75); /*0x5d9c08*/
            return v67; /*0x5d9c19*/
          }
LABEL_142:
          v78[0] = v87[0]; /*0x5d9c1c*/
          v78[1] = v87[1]; /*0x5d9c2d*/
          v78[2] = v87[2]; /*0x5d9c36*/
          Network::SetPort(v78, LOWORD(v87[0]) + 1); /*0x5d9c3a*/
          v60 = v77; /*0x5d9c3f*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v77, 0); /*0x5d9c4e*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v60, 0); /*0x5d9c5e*/
          Network::QueryAddress((unsigned __int16 *)v78, k, v60, 0); /*0x5d9c6e*/
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
            Network::QueryAddress((unsigned __int16 *)v87, v75, v77, 0); /*0x5d9cce*/
            v61 = Network::WaitForPacket(v64, 0); /*0x5d9ce1*/
          }
          if ( !v61 ) /*0x5d9ce8*/
            goto LABEL_152; /*0x5d9ce8*/
LABEL_150:
          if ( v61 == v55 + *(this + 2) ) /*0x5d9cfd*/
          {
            Debug::Log(); /*0x5d9d5e*/
          }
          else
          {
            Debug::Log(); /*0x5d9d04*/
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
      Debug::Log(); /*0x5d9d1f*/
      if ( dword_B77E18 == 2 || MEMORY[0xA8E180] ) /*0x5d9d38*/
      {
        v43 |= 8u; /*0x5d9d3f*/
        Debug::Log(); /*0x5d9d42*/
      }
      return v43; /*0x5d9d4c*/
    }
  }
}
}
} // namespace gamemd

// 0x5DA040
namespace gamemd {
int sub_5DA040(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_5DA040(char a1)
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
}
} // namespace gamemd

// 0x5DA0B0
namespace gamemd {
unsigned short Network::ResolveNetworkAddress(unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int16 __thiscall Network_ResolveAddress(int *this, unsigned __int16 a2)
{
  __int16 v4; // bx
  struct hostent *v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v11; // edi
  unsigned __int16 v12; // si
  int v13; // eax
  int v14; // edi
  int v15; // ebp
  int v16; // [esp+10h] [ebp-13Ch]
  DWORD Ticks; // [esp+14h] [ebp-138h]
  int v18; // [esp+20h] [ebp-12Ch]
  int v19; // [esp+24h] [ebp-128h] BYREF
  int v20; // [esp+2Ch] [ebp-120h]
  int v21; // [esp+30h] [ebp-11Ch]
  unsigned __int16 v22[8]; // [esp+34h] [ebp-118h] BYREF
  char name[256]; // [esp+4Ch] [ebp-100h] BYREF

  Timer::GetTicks(); /*0x5da0c0*/
  v16 = *this; /*0x5da0d6*/
  if ( !*this ) /*0x5da0c9*/
    return a2; /*0x5da0ee*/
  if ( (*this & 1) != 0 ) /*0x5da0f3*/
    return a2; /*0x5da107*/
  v4 = 4321; /*0x5da11e*/
  strcpy(name, MEMORY[0x8311EC]); /*0x5da12c*/
  if ( dword_B77E1C > 0 ) /*0x5da13c*/
  {
    v4 = dword_B76338[dword_B77E20]; /*0x5da169*/
    strcpy(name, &MEMORY[0xB73E44][128 * dword_B77E20]); /*0x5da174*/
    Debug::Log(); /*0x5da17d*/
  }
  Debug::Log(); /*0x5da18f*/
  v5 = gethostbyname(name); /*0x5da19c*/
  if ( !v5 ) /*0x5da1a3*/
  {
    WSAGetLastError(); /*0x5da1a5*/
    Debug::Log(); /*0x5da1b0*/
    return a2; /*0x5da1ca*/
  }
  v19 = **(_DWORD **)v5->h_addr_list; /*0x5da1dd*/
  Debug::Log(); /*0x5da20d*/
  Waypoint::InitInvalid(v22); /*0x5da219*/
  Struct::Copy6Bytes((char *)v22, (int)&v19); /*0x5da227*/
  Network::SetPort(v22, v4); /*0x5da231*/
  Network::FormatAddress(v22, 0); /*0x5da23c*/
  Debug::Log(); /*0x5da247*/
  v6 = 0; /*0x5da250*/
  v18 = 0; /*0x5da258*/
  Debug::Log(); /*0x5da25c*/
  v20 = v16 & 4; /*0x5da26b*/
  if ( (v16 & 4) != 0 ) /*0x5da26f*/
  {
    v7 = 255; /*0x5da275*/
    while ( 1 ) /*0x5da283*/
    {
      v8 = *(this + 4) + 1; /*0x5da283*/
      *(this + 4) = v8; /*0x5da285*/
      LOWORD(v6) = v8; /*0x5da28d*/
      if ( v8 > 0xFFFF ) /*0x5da290*/
        *(this + 4) = 2048; /*0x5da292*/
      v9 = MEMORY[0x887628]; /*0x5da295*/
      if ( !MEMORY[0x887628] || MEMORY[0xA8B238][0] != 4 ) /*0x5da2a6*/
        break; /*0x5da2a6*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)MEMORY[0x887628] + 104))(v6) ) /*0x5da2ab*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v6); /*0x5da2c4*/
LABEL_19:
        v9 = MEMORY[0x887628]; /*0x5da2c7*/
        break; /*0x5da2c7*/
      }
      if ( !v7-- ) /*0x5da2b2*/
        goto LABEL_19; /*0x5da2b7*/
    }
    v18 = v6; /*0x5da2cd*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 104))(v9, v6) ) /*0x5da2d4*/
      return a2; /*0x5da2ed*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x5da2f8*/
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
    Network::QueryAddress(v22, v6, MEMORY[0x830CA8], 0); /*0x5da368*/
    v12 = Network::WaitForPacket(MEMORY[0x830CA8], 30); /*0x5da37c*/
    Debug::Log(); /*0x5da38c*/
    v11 = 180; /*0x5da391*/
  }
  ++MEMORY[0x830CA8]; /*0x5da39a*/
  if ( (_WORD)v18 ) /*0x5da3ae*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 108))(MEMORY[0x887628], v18); /*0x5da3b9*/
  if ( v12 ) /*0x5da3bf*/
  {
    if ( v20 ) /*0x5da3e9*/
    {
      if ( (v16 & 0x10) != 0 ) /*0x5da415*/
      {
        v14 = v12 + *(this + 2); /*0x5da420*/
      }
      else
      {
        v15 = *(this + 2); /*0x5da424*/
        if ( v15 == 100 ) /*0x5da42a*/
          v14 = v12 - v21 + a2 + 100; /*0x5da445*/
        else
          v14 = a2 % v15 + v15 * (v12 / v15 + 1); /*0x5da46a*/
      }
      if ( v14 > 0xFFFF ) /*0x5da472*/
        v14 -= 0xFFFF; /*0x5da474*/
      if ( v14 < 1024 ) /*0x5da480*/
        LOWORD(v14) = v14 + 1024; /*0x5da482*/
      Debug::Log(); /*0x5da48e*/
      return v14; /*0x5da496*/
    }
    else
    {
      Debug::Log(); /*0x5da3f8*/
      return v12; /*0x5da400*/
    }
  }
  else
  {
    Debug::Log(); /*0x5da3c6*/
    return a2; /*0x5da3cb*/
  }
}
}
} // namespace gamemd

// 0x5E2BA0
namespace gamemd {
int Network::processQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5E2BA0(_BYTE *this)
{
  int result; // eax
  HouseClass *v2; // esi
  int v3; // edi
  _BYTE *v4; // edx

  result = 0; /*0x5e2ba6*/
  if ( HouseClass_Count > 0 ) /*0x5e2baa*/
  {
    v2 = HouseClass_Array; /*0x5e2bae*/
    v3 = HouseClass_Count; /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      v4 = *(_BYTE **)v2->__pad_0; /*0x5e2bb7*/
      if ( *(_DWORD *)v2->__pad_0 && v4[492] && !v4[501] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      v2 = (HouseClass *)((char *)v2 + 4); /*0x5e2bd6*/
      --v3; /*0x5e2bd9*/
    }
    while ( v3 ); /*0x5e2bda*/
  }
  return result; /*0x5e2bdf*/
}
}
} // namespace gamemd

// 0x5E2BE0
namespace gamemd {
int Network::CountDisconnectedHouses()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NetworkLobby_ShowError(void *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ebp
  char v4; // bl
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  v1 = HouseClass_Count; /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( HouseClass_Count <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((_DWORD *)HouseClass_Array + v2); /*0x5e2c0a*/
    if ( v3 && !*(_BYTE *)(v3 + 501) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && (void *)v3 != this ) /*0x5e2c34*/
    {
      v4 = 0; /*0x5e2c36*/
      v5 = 0; /*0x5e2c38*/
      if ( v1 <= 0 ) /*0x5e2c3c*/
        goto LABEL_20; /*0x5e2c3c*/
      do /*0x5e2c9e*/
      {
        if ( v5 != v9 ) /*0x5e2c42*/
        {
          v6 = *((_DWORD *)HouseClass_Array + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !*(_BYTE *)(v6 + 501) /*0x5e2c7d*/
              && !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422)
              && (void *)v6 != this
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v3, *((#375 **)HouseClass_Array + v5))
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)v3) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        v1 = HouseClass_Count; /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < HouseClass_Count ); /*0x5e2c9e*/
      if ( !v4 ) /*0x5e2ca2*/
LABEL_20:
        ++v8; /*0x5e2ca4*/
    }
    v2 = ++v9; /*0x5e2cac*/
  }
  while ( v9 < v1 ); /*0x5e2cb3*/
  return v8; /*0x5e2cc1*/
}
}
} // namespace gamemd

// 0x5E3630
namespace gamemd {
char sub_5E3630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5E3630()
{
  unsigned int v0; // eax
  int v1; // edi
  int i; // esi
  _DWORD v4[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v5; // [esp+1CCh] [ebp-4h]
  char v6; // [esp+1CEh] [ebp-2h]

  if ( MEMORY[0xA8B238][0] == 3 ) /*0x5e3640*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5e3666*/
    v5 = 0; /*0x5e3668*/
    v6 = 0; /*0x5e366a*/
    v4[0] = 40; /*0x5e3675*/
    v0 = strlen(MEMORY[0xA8B380]) + 1; /*0x5e367d*/
    qmemcpy(&v4[1], MEMORY[0xA8B380], v0); /*0x5e368c*/
    v1 = MEMORY[0xA8DA84]; /*0x5e3695*/
    for ( i = 1; i < v1; ++i ) /*0x5e36a2*/
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v4, 455, 1, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40, 0, 0); /*0x5e36c6*/
      LOBYTE(v0) = Event::Dispatch(); /*0x5e36cb*/
    }
  }
  else
  {
    LOBYTE(v0) = LOBYTE(MEMORY[0xA8B238][0]) - 4; /*0x5e3642*/
    if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e3643*/
      LOBYTE(v0) = (unsigned __int8)Network_Create_7A2730(); /*0x5e3649*/
  }
  return v0; /*0x5e364e*/
}
}
} // namespace gamemd

// 0x5E36E0
namespace gamemd {
void sub_5E36E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5E36E0()
{
  MEMORY[0xA8DAB0] = 1; /*0x5e36e5*/
  if ( MEMORY[0xAC116C] ) /*0x5e36ee*/
    UI_Setup_7A2750(); /*0x5e36f0*/
  else
    UI_Setup_5E2340(); /*0x5e36f5*/
}
}
} // namespace gamemd

// 0x5E3720
namespace gamemd {
int Network::SendOptionsGame(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::SendOptionsGame(char *Source)
{
  int result; // eax
  ObjectClass *v2; // eax
  int i; // esi
  IUnknown *v4; // edi
  _DWORD v5[114]; // [esp+8h] [ebp-5C8h] BYREF
  char Destination[1024]; // [esp+1D0h] [ebp-400h] BYREF

  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3731*/
  {
    strncpy(Destination, Source, (IUnknown *)0x3FF); /*0x5e3741*/
    return (*(int (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x5e3759*/
             *(&g_MatrixTransformState + 2263),
             Destination);
  }
  else
  {
    memset(v5, 0, 455); /*0x5e3771*/
    v5[0] = 23; /*0x5e378a*/
    strcpy((char *)&v5[1], &HouseClass_Player.__pad_5568[8396]); /*0x5e379f*/
    v2 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8416]; /*0x5e37b5*/
    strcpy((char *)&v5[11] + 3, Source); /*0x5e37c3*/
    *(_DWORD *)((char *)&v5[111] + 3) = v2; /*0x5e37d1*/
    *(_DWORD *)((char *)&v5[112] + 3) = WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]); /*0x5e37dd*/
    result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e37e4*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x5e37f1*/
    {
      v4 = *(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i); /*0x5e37f9*/
      ToWideStringChar(v4); /*0x5e37fe*/
      Debug::Log(); /*0x5e3809*/
      Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v5, 455, 1, (int)v4->__pad_28, 0, 0); /*0x5e382a*/
      Event::Dispatch(); /*0x5e382f*/
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e3834*/
    }
  }
  return result; /*0x5e375c*/
}
}
} // namespace gamemd

// 0x5E8B60
namespace gamemd {
int Network::InitPlayerSlots()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Network_InitPlayerSlots()
{
  signed int v0; // edx
  int result; // eax

  if ( MEMORY[0xA8B238] == 4 ) /*0x5e8b67*/
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
  memset32(&MEMORY[0xA8DA90], MEMORY[0xAC119C], v0); /*0x5e8b9f*/
  if ( v0 < 8 ) /*0x5e8ba4*/
    memset32((void *)(4 * v0 + 11066000), MEMORY[0xAC11A0], 8 - v0); /*0x5e8bb9*/
  MEMORY[0xA8DA8C] = -1; /*0x5e8bc0*/
  result = Network::processGameEvent(MEMORY[0xA8B250]); /*0x5e8bca*/
  MEMORY[0xAC0D44] = 0; /*0x5e8bcf*/
  MEMORY[0xAC0B94] = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/
}
}
} // namespace gamemd

// 0x5EF4E0
namespace gamemd {
int Network_ModemConnectionDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__usercall Network::ModemConnectionDialog@<eax>(_DWORD *a1@<ebp>, int a2@<edi>)
{
  ObjectClass *v0; // ebx
  int v3; // eax
  LONG v4; // eax
  void (__stdcall *v5)(HWND); // esi
  void (__stdcall *v6)(HWND, int); // ebp
  int v7; // edi
  char *v8; // ebp
  _DWORD *v9; // eax
  int v10; // eax
  const char *v11; // esi
  unsigned int v12; // edx
  char *v13; // edi
  char *v14; // edi
  const char *v15; // esi
  char v16; // cl
  wchar_t *v17; // eax
  _DWORD *v18; // eax
  int v19; // edx
  wchar_t *v20; // eax
  int v21; // ebp
  void *Member23; // eax
  int CampaignScore_field_0x20; // edx
  CampaignScore *v24; // ecx
  CampaignScore *v25; // esi
  DWORD Ticks; // eax
  int v27; // eax
  CampaignScore *v28; // esi
  void *v29; // eax
  void *v30; // eax
  int v31; // edi
  int v32; // esi
  int v33; // edi
  int v34; // esi
  int Elapsed; // esi
  wchar_t *v36; // esi
  wchar_t *v37; // eax
  HWND MessageBox; // eax
  ObjectClass *v39; // edi
  int v40; // esi
  int v41; // esi
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *StringCSF; // [esp-18h] [ebp-8B8h]
  wchar_t *v46; // [esp-18h] [ebp-8B8h]
  wchar_t *v47; // [esp-18h] [ebp-8B8h]
  wchar_t *v48; // [esp-18h] [ebp-8B8h]
  int v49; // [esp-8h] [ebp-8A8h]
  _DWORD *v50; // [esp-4h] [ebp-8A4h]
  int v51; // [esp+8h] [ebp-898h]
  LONG dwNewLong; // [esp+Ch] [ebp-894h] BYREF
  HWND hWnd; // [esp+10h] [ebp-890h]
  CampaignScore aP2; // [esp+14h] [ebp-88Ch] BYREF
  int v55; // [esp+38h] [ebp-868h]
  int v56; // [esp+3Ch] [ebp-864h]
  CampaignScore aP1; // [esp+40h] [ebp-860h] BYREF
  int v58; // [esp+D2h] [ebp-7CEh]
  CellStruct v59; // [esp+13Ch] [ebp-764h] BYREF
  char v60; // [esp+43Ch] [ebp-464h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v51 = -1; /*0x5ef4fb*/
  v0 = (ObjectClass *)CreateDialog(0xECu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = (HWND)v0; /*0x5ef508*/
  if ( !v0 ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA((HWND)v0, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x5ef528*/
  UI_Connect((HWND)v0, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  Dialog::Show((HWND)v0); /*0x5ef549*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[18444] /*0x5ef571*/
    || *(_DWORD *)&HouseClass_Player.__pad_5568[18448] == -1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[18452] == -1
    || Modem::OpenPort(&HouseClass_Player.__pad_5568[22460], (Modem *)&HouseClass_Player.__pad_5568[18444]) )
  {
    v4 = 1618; /*0x5ef57a*/
    dwNewLong = 1618; /*0x5ef57f*/
  }
  else
  {
    v4 = dwNewLong; /*0x5ef585*/
  }
  v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef589*/
  v50 = a1; /*0x5ef58f*/
  v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef590*/
  v49 = a2; /*0x5ef596*/
  v7 = 0; /*0x5ef597*/
  while ( 2 ) /*0x5ef5af*/
  {
    if ( v4 < 0 ) /*0x5ef5af*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        ScreenSaver::Process(0, (int)v0, (int)v6); /*0x5ef5bc*/
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
        v6((HWND)v0, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( Network::sendGameEvent((Modem *)&HouseClass_Player.__pad_5568[18444], v49, v50) ) /*0x5efe87*/
          SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]); /*0x5efe95*/
        Network::handleTimeout((HWND)v0); /*0x5efe9c*/
        v6((HWND)v0, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((LONG)&v59.__pad_170[260], (int)v0, (int)v6) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v8 = *(char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18564] /*0x5ef610*/
                      + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[18440]);
        if ( !*(_DWORD *)v8 ) /*0x5ef613*/
          v8 = &HouseClass_Player.__pad_5568[18444]; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v9 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5ef633*/
        if ( v9 ) /*0x5ef63d*/
          g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v9); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (AnimClass *)&HouseClass_Player.__pad_5568[22460],
                *(_DWORD *)v8,
                *((CellStruct **)v8 + 1),
                v8 + 48,
                *((CellStruct **)v8 + 2),
                0,
                8,
                1) )
        {
          aP2.CampaignScore_field_0x10 = (int)&stru_82083C; /*0x5ef774*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5798); /*0x5ef788*/
          v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5798); /*0x5ef793*/
          Dialog::ShowMessageBox((int)v17, StringCSF, 0, 0, 0, v49); /*0x5ef79d*/
LABEL_34:
          ShowWindow((HWND)v0, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        v10 = *((_DWORD *)v8 + 5); /*0x5ef67f*/
        if ( v10 == 3 ) /*0x5ef685*/
          strcpy((char *)&(&g_MatrixTransformState)[191] + 8, v8 + 32); /*0x5ef6a1*/
        else
          CopyWideToChar( /*0x5ef6bc*/
            (_BYTE *)&(&g_MatrixTransformState)[191] + 8,
            *(char **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18612] + 4 * v10),
            -1);
        v11 = (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18564] /*0x5ef6e0*/
                                       + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[18440])
                           + 154);
        v12 = strlen(v11) + 1; /*0x5ef6e2*/
        v13 = (char *)&(&g_MatrixTransformState)[16] + strlen((const char *)&(&g_MatrixTransformState)[191] + 8) + 4; /*0x5ef6f0*/
        qmemcpy(v13, v11, 4 * (v12 >> 2)); /*0x5ef6f4*/
        v15 = &v11[4 * (v12 >> 2)]; /*0x5ef6f4*/
        v14 = &v13[4 * (v12 >> 2)]; /*0x5ef6f4*/
        v16 = v12; /*0x5ef6f6*/
        LOBYTE(v12) = 0; /*0x5ef6f8*/
        qmemcpy(v14, v15, v16 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v12, (int)v8, (int)v8) ) /*0x5ef701*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 2; /*0x5ef716*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((LONG)v59.__pad_FC) ) /*0x5ef726*/
          {
            v51 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5ef73a*/
          v51 = 0; /*0x5ef73f*/
        }
        EventClass::GetState(0); /*0x5ef74a*/
        ShowWindow((HWND)v0, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (__thiscall ***)(WinModemClass *, int))g_ClipboardBuffer->__pad_0)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v18 = (_DWORD *)__2_YAPAXI_Z(0x2088u); /*0x5ef7d1*/
        if ( v18 ) /*0x5ef7db*/
          g_ClipboardBuffer = (WinModemClass *)WinModemClass::Construct(v18); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init( /*0x5ef818*/
               (AnimClass *)&HouseClass_Player.__pad_5568[22460],
               *(int *)&HouseClass_Player.__pad_5568[18444],
               *(CellStruct **)&HouseClass_Player.__pad_5568[18448],
               &HouseClass_Player.__pad_5568[18492],
               *(CellStruct **)&HouseClass_Player.__pad_5568[18452],
               0,
               8,
               1) )
        {
          LOBYTE(v19) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect(v19, (int)&HouseClass_Player.__pad_5568[18444], (int)v6) ) /*0x5ef828*/
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 3; /*0x5ef838*/
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((LONG)&v59.__pad_FC[96]) ) /*0x5ef848*/
            {
              v51 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5ef85a*/
            v51 = 0; /*0x5ef860*/
          }
          EventClass::GetState(0); /*0x5ef86a*/
          v6((HWND)v0, 5); /*0x5ef872*/
        }
        else
        {
          aP2.CampaignScore_field_0x1C = (int)&stru_82083C; /*0x5ef88d*/
          v46 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5833); /*0x5ef8a1*/
          v20 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5833); /*0x5ef8ac*/
          Dialog::ShowMessageBox((int)v20, v46, 0, 0, 0, v49); /*0x5ef8b6*/
          v6((HWND)v0, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6((HWND)v0, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init( /*0x5ef8fb*/
                (AnimClass *)&HouseClass_Player.__pad_5568[22460],
                *(int *)&HouseClass_Player.__pad_5568[18444],
                *(CellStruct **)&HouseClass_Player.__pad_5568[18448],
                &HouseClass_Player.__pad_5568[18492],
                *(CellStruct **)&HouseClass_Player.__pad_5568[18452],
                0,
                8,
                1) )
        {
          aP2.CampaignScore_field_0x14 = (int)&stru_82083C; /*0x5efe39*/
          v48 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5877); /*0x5efe4d*/
          v43 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[928], 0, &stru_830620.__pad_14B0[948], 5877); /*0x5efe58*/
          Dialog::ShowMessageBox((int)v43, v48, 0, 0, 0, v49); /*0x5efe62*/
          v6((HWND)v0, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v21 = 0; /*0x5ef907*/
        LOBYTE(v0) = 1; /*0x5ef909*/
        Member23 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        WinModemClass::WriteSerial( /*0x5ef932*/
          (int)g_ClipboardBuffer,
          &stru_830620.__pad_14B0[920],
          (WinModemClass *)strlen(&stru_830620.__pad_14B0[920]));
        aP2.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x5ef944*/
        aP2.CampaignScore_field_0x0C = 0; /*0x5ef948*/
        aP2.CampaignScore_field_0x20 = Timer::GetTicks(); /*0x5ef951*/
        CampaignScore_field_0x20 = aP2.CampaignScore_field_0x20; /*0x5ef955*/
        v24 = (CampaignScore *)120; /*0x5ef95b*/
        v56 = 120; /*0x5ef960*/
        aP2.CampaignScore_field_0x04 = aP2.CampaignScore_field_0x20; /*0x5ef964*/
        aP2.CampaignScore_field_0x08 = v55; /*0x5ef968*/
        aP2.CampaignScore_field_0x0C = 120; /*0x5ef96c*/
        break; /*0x5ef96c*/
      default:
LABEL_120:
        v51 = v7; /*0x5efea8*/
        goto LABEL_121; /*0x5efea8*/
    }
    do /*0x5ef996*/
    {
      v25 = v24; /*0x5ef973*/
      if ( CampaignScore_field_0x20 == -1 ) /*0x5ef975*/
      {
        v28 = v24; /*0x5ef992*/
      }
      else
      {
        Ticks = Timer::GetTicks(); /*0x5ef97b*/
        CampaignScore_field_0x20 = aP2.CampaignScore_field_0x04; /*0x5ef980*/
        v27 = Ticks - aP2.CampaignScore_field_0x04; /*0x5ef984*/
        if ( v27 >= (int)v25 ) /*0x5ef988*/
          break; /*0x5ef988*/
        v24 = (CampaignScore *)aP2.CampaignScore_field_0x0C; /*0x5ef98a*/
        v28 = (CampaignScore *)((char *)v25 - v27); /*0x5ef98e*/
      }
    }
    while ( v28 ); /*0x5ef996*/
    v29 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef998*/
    ClearCommBreak(v29); /*0x5ef9a4*/
    v30 = (void *)NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5ef9b2*/
    EscapeCommFunction(v30, 6u); /*0x5ef9b8*/
    v31 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ef9c3*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ef9cc*/
      v31 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v32 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ef9e5*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ef9ee*/
        v32 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa00*/
      if ( (unsigned int)(v32 - v31) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efa12*/
      if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) > 0 /*0x5efa34*/
        && *(_DWORD *)aP1.__pad_0 == 100 )
      {
        v33 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5efa3b*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5efa44*/
          v33 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v34 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5efa5d*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5efa66*/
            v34 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5efa78*/
          if ( (unsigned int)(v34 - v33) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efa86*/
        }
        LOBYTE(v0) = 0; /*0x5efa8d*/
        v21 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset(&v59, 0, 250); /*0x5efaa5*/
    if ( (_BYTE)v0 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v59.field_0 = 100; /*0x5efab9*/
    *(_DWORD *)&v59.__pad_34[94] = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efacc*/
    v59.__pad_8[16] = (unsigned __int8)&v60; /*0x5efae7*/
    Stream::WriteBlock((int)&HouseClass_Player.__pad_5568[22460], &v59, 250, 1); /*0x5efaee*/
    Elapsed = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efb02*/
    if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efb15*/
        if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) > 0 /*0x5efb36*/
          && *(_DWORD *)aP1.__pad_0 == 100 )
        {
          break; /*0x5efb36*/
        }
        if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v41 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efc7a*/
      while ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v41) < 0x1E ) /*0x5efc86*/
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efc8d*/
      if ( v58 > *(int *)&v59.__pad_34[94] ) /*0x5efcb3*/
      {
        v21 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v58 == *(_DWORD *)&v59.__pad_34[94] ) /*0x5efcbc*/
      {
        if ( LOBYTE(aP1.CampaignScore_field_0x18) > (unsigned int)v59.__pad_8[16] ) /*0x5efccf*/
        {
          v21 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( LOBYTE(aP1.CampaignScore_field_0x18) == v59.__pad_8[16] ) /*0x5efcd8*/
        {
          v21 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
LABEL_73:
    *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5efb4d*/
    v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[948], 6293); /*0x5efb80*/
    v37 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[900], 0, &stru_830620.__pad_14B0[948], 6293); /*0x5efb82*/
    MessageBox = CreateMessageBox((LPARAM)v37, (LPARAM)v36, (LONG)(&g_MatrixTransformState + 2381)); /*0x5efb8b*/
    v39 = (ObjectClass *)MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    Dialog::Show(MessageBox); /*0x5efb9c*/
    v40 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efbab*/
    while ( Dialog::PumpMessages() != 1 && !*((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5efbc1*/
    {
      ScreenSaver::Process(0, (int)v0, v21); /*0x5efbc9*/
      Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efbd3*/
      if ( Count::GetCountQueue(&HouseClass_Player.__pad_5568[22460]) ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], &aP1, &aP2) <= 0 ) /*0x5efc00*/
      {
        v21 = 1; /*0x5efd0e*/
        goto LABEL_100; /*0x5efd0e*/
      }
      if ( *(_DWORD *)aP1.__pad_0 != 100 ) /*0x5efc0b*/
      {
        v21 = 0; /*0x5efd0a*/
LABEL_100:
        LOBYTE(v0) = 0; /*0x5efd13*/
        goto LABEL_101; /*0x5efd13*/
      }
      v40 = Timer::GetElapsed(&stru_87C374.__pad_579C[22568]); /*0x5efc20*/
      while ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v40) < 0x1E ) /*0x5efc2c*/
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5efc33*/
      if ( v58 <= *(int *)&v59.__pad_34[94] ) /*0x5efc59*/
      {
        if ( v58 == *(_DWORD *)&v59.__pad_34[94] ) /*0x5efce5*/
        {
          if ( LOBYTE(aP1.CampaignScore_field_0x18) <= (unsigned int)v59.__pad_8[16] ) /*0x5efcf4*/
          {
            if ( LOBYTE(aP1.CampaignScore_field_0x18) == v59.__pad_8[16] ) /*0x5efcff*/
            {
              LOBYTE(v0) = 0; /*0x5efd01*/
              v21 = 3; /*0x5efd03*/
            }
          }
          else
          {
            LOBYTE(v0) = 0; /*0x5efcf6*/
            v21 = 2; /*0x5efcf8*/
          }
        }
      }
      else
      {
        LOBYTE(v0) = 0; /*0x5efc5f*/
        v21 = 2; /*0x5efc61*/
      }
LABEL_101:
      if ( (unsigned int)(Timer::GetElapsed(&stru_87C374.__pad_579C[22568]) - v40) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( (_BYTE)v0 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v21 = 0; /*0x5efd32*/
LABEL_105:
    Dialog::Destroy((SkirmishDialog *)v39); /*0x5efd34*/
LABEL_106:
    if ( v21 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 0; /*0x5efddd*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((LONG)&v59.__pad_170[72]) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5efdf6*/
LABEL_115:
      EventClass::GetState(0); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v21 != 2 ) /*0x5efd45*/
      {
        if ( v21 == 3 ) /*0x5efd48*/
        {
          aP2.CampaignScore_field_0x18 = (int)&stru_82083C; /*0x5efd65*/
          v47 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_14B0[948], 5868); /*0x5efd79*/
          v42 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[876], 0, &stru_830620.__pad_14B0[948], 5868); /*0x5efd84*/
          Dialog::ShowMessageBox((int)v42, v47, 0, 0, 0, v49); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[18556] = 1; /*0x5efda1*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 2; /*0x5efdab*/
      if ( ModemGuest::Dialog((LONG)&v59.__pad_170[168]) != 1 ) /*0x5efdb8*/
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x5efdc3*/
        goto LABEL_115; /*0x5efdcd*/
      }
      v51 = 2; /*0x5efdba*/
    }
LABEL_121:
    v4 = -1; /*0x5efeac*/
    dwNewLong = -1; /*0x5efeb6*/
    if ( v51 == -1 ) /*0x5efeba*/
    {
      v0 = (ObjectClass *)hWnd; /*0x5ef59b*/
      v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  Dialog::Destroy((SkirmishDialog *)hWnd); /*0x5efec4*/
  return (ObjectClass *)v51; /*0x5efecd*/
}
}
} // namespace gamemd

// 0x5EFF70
namespace gamemd {
HWND Network::handleTimeout(HWND hDlg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall Network::handleTimeout(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND result; // eax
  unsigned __int8 v5; // [esp+10h] [ebp-4h]

  v5 = 1; /*0x5eff7e*/
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[84] /*0x5effa4*/
    || *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[88] == -1
    || *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[92] == -1
    || Modem::OpenPort(&MEMORY[0xA8D63C].__pad_1258[476], (Modem *)&MEMORY[0xA8D63C].__pad_430[84]) )
  {
    v5 = 0; /*0x5effad*/
  }
  DlgItem = GetDlgItem(hDlg, 1619); /*0x5effbe*/
  if ( DlgItem ) /*0x5effcc*/
    EnableWindow(DlgItem, v5); /*0x5effd8*/
  v3 = GetDlgItem(hDlg, 1620); /*0x5effe0*/
  if ( v3 ) /*0x5effe4*/
    EnableWindow(v3, v5); /*0x5efff0*/
  result = GetDlgItem(hDlg, 1621); /*0x5efff8*/
  if ( result ) /*0x5efffc*/
    return (HWND)EnableWindow(result, v5); /*0x5f0006*/
  return result; /*0x5f0008*/
}
}
} // namespace gamemd

// 0x5F0040
namespace gamemd {
int Network::CleanupOnDisconnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Network_CleanupOnDisconnect()
{
  if ( (MEMORY[0xA8D5F8] & 2) == 0 && MEMORY[0xA8B238][0] == 1 ) /*0x5f0050*/
    NullModemClass::Negotiate((int)&MEMORY[0xA8EA70]); /*0x5f0057*/
  return ObjectClass::DetachAndFree(&MEMORY[0xA8EA70]);
}
}
} // namespace gamemd

// 0x623310
namespace gamemd {
BOOL Network_Start(HWND hWnd, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall Network_Start(HWND hWnd, LPARAM lParam)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem(hWnd, 1456); /*0x62331c*/
  SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62332b*/
  return UpdateWindow(hWnd); /*0x623338*/
}
}
} // namespace gamemd

// 0x630B90
namespace gamemd {
int Network_resetConnectionState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __usercall Network::resetConnectionState@<al>(LONG dwNewLong@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  HWND Dialog; // eax

  Dialog = (HWND)CreateDialog(0xEEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PhoneEditorDialogProc, 0); /*0x630b9f*/
  *(_DWORD *)dwNewLong = Dialog; /*0x630ba6*/
  if ( Dialog ) /*0x630ba8*/
  {
    *(_BYTE *)(dwNewLong + 8) = 0; /*0x630bae*/
    *(_DWORD *)(dwNewLong + 4) = -1; /*0x630bb2*/
    SetWindowLongA(Dialog, 8, dwNewLong); /*0x630bb9*/
    PhoneEditor::PopulateList((HWND *)dwNewLong); /*0x630bc1*/
    Dialog::Show(*(HWND *)dwNewLong); /*0x630bc8*/
    while ( *(int *)(dwNewLong + 4) < 0 ) /*0x630bd2*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x630bdb*/
        break; /*0x630bdb*/
      ScreenSaver::Process(0, a2, a3); /*0x630bdf*/
    }
    Dialog::Destroy(*(HWND *)dwNewLong); /*0x630bed*/
    if ( *(_BYTE *)(dwNewLong + 8) == 1 ) /*0x630bf6*/
      SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x630bfd*/
  }
  return *(_DWORD *)(dwNewLong + 4) == 1; /*0x630c05*/
}
}
} // namespace gamemd

// 0x643C50
namespace gamemd {
int Network_UpdateLatencyDisplay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
void __thiscall Network::UpdateLatencyDisplay(
        ProgressScreenClass *this,
        ProgressScreenClass *aP1,
        ProgressScreenClass *aP2,
        ProgressScreenClass *aP3)
{
  double v5; // st7
  int v6; // ecx
  double *v7; // eax
  int v8; // edx
  double v9; // st7
  double v10; // st6
  int v11; // ecx
  double v12; // st7
  double *v13; // eax
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int, _DWORD *); // ecx
  HWND v16; // eax
  _DWORD v17[2]; // [esp+8h] [ebp-8h] BYREF

  v5 = 0.0; /*0x643c5c*/
  v6 = *((char *)this + 97); /*0x643c62*/
  if ( v6 > 0 ) /*0x643c6c*/
  {
    v7 = (double *)&this->__pad_0[8]; /*0x643c6e*/
    do /*0x643c77*/
    {
      v5 = v5 + *v7++; /*0x643c71*/
      --v6; /*0x643c76*/
    }
    while ( v6 ); /*0x643c77*/
  }
  v8 = Math::RoundToInt(v5); /*0x643c90*/
  v9 = *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8]; /*0x643c94*/
  v10 = *(double *)&this->field_48 * 0.01 * *(double *)&aP2; /*0x643ca1*/
  *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8] = v10; /*0x643ca4*/
  if ( v10 > *(double *)&this->field_48 ) /*0x643cb0*/
  {
    *(_DWORD *)&this->__pad_0[8 * (_DWORD)aP1 + 8] = this->field_48; /*0x643cb5*/
    *(_DWORD *)&this->__pad_0[8 * (_DWORD)aP1 + 12] = *(_DWORD *)this->__pad_4C; /*0x643cbc*/
  }
  if ( v9 != *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8] ) /*0x643cc9*/
  {
    v11 = *((char *)this + 97); /*0x643ccf*/
    v12 = 0.0; /*0x643cd3*/
    if ( v11 > 0 ) /*0x643cdf*/
    {
      v13 = (double *)&this->__pad_0[8]; /*0x643ce1*/
      do /*0x643cea*/
      {
        v12 = v12 + *v13++; /*0x643ce4*/
        --v11; /*0x643ce9*/
      }
      while ( v11 ); /*0x643cea*/
    }
    v17[0] = v8; /*0x643cf0*/
    v14 = Math::RoundToInt(v12); /*0x643cff*/
    v15 = *(void (__thiscall ****)(_DWORD, int, _DWORD *))&this->__pad_0[4]; /*0x643d04*/
    v17[1] = v14; /*0x643d07*/
    if ( v15 && (unsigned char)this->Network_field_0x60 ) /*0x643d11*/
      (**v15)(v15, 4526, v17); /*0x643d24*/
    v16 = (HWND)*((_DWORD *)this + 25); /*0x643d26*/
    if ( v16 ) /*0x643d2b*/
      SendMessageA(v16, 0xFu, 0, 0); /*0x643d34*/
    else
      LoadScreen::Render(this); /*0x643d4b*/
  }
}
}
} // namespace gamemd

// 0x646D70
namespace gamemd {
int sub_646D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646D70()
{
  int result; // eax

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x646d77*/
    return Network::Disconnect(MEMORY[0xA8E9C0]); /*0x646d7e*/
  return result; /*0x646d83*/
}
}
} // namespace gamemd

// 0x6471A0
namespace gamemd {
char Network::AddFrameEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Network_AddFrameEvent()
{
  char *v0; // eax
  unsigned __int8 v2; // [esp+0h] [ebp-74h]
  char v3[112]; // [esp+4h] [ebp-70h] BYREF

  v2 = 19; /*0x6471a8*/
  if ( MEMORY[0xA8B238][0] == 4 /*0x6471cb*/
    && MEMORY[0xA8DBA0]
    && MEMORY[0xA8DA84] > 2
    && SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) )
  {
    v2 = 39; /*0x6471d4*/
  }
  v0 = EventClass::AddEvent(v3, *((_DWORD *)HouseClass_Player + 12), v2); /*0x6471ec*/
  if ( Networking_LastEventIndex >= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x647219*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x64722c*/
  ++Networking_LastEventIndex; /*0x647243*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/
}
}
} // namespace gamemd

// 0x6475F0
namespace gamemd {
void Network::QueueProcessingLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// void Network::QueueProcessingLoop()
// {
//   CellStruct *v0; // eax
//   char *v1; // ebp
//   IUnknown *v2; // ecx
//   int v3; // esi
//   int v4; // ebx
//   bool v5; // zf
//   unsigned int v6; // esi
//   unsigned int v7; // eax
//   _DWORD *TextBufferEntry; // esi
//   char *v9; // edi
//   _DWORD *v10; // eax
//   int v11; // edx
//   _DWORD *v12; // eax
//   int v13; // ecx
//   CellStruct *v14; // esi
//   char v15; // bl
//   wchar_t *v16; // eax
//   wchar_t *v17; // eax
//   wchar_t *v18; // eax
//   wchar_t *v19; // eax
//   int *v20; // edx
//   int v21; // esi
//   int v22; // esi
//   int v23; // ecx
//   int v24; // edx
//   int v25; // eax
//   int v26; // esi
//   int v27; // eax
//   int v28; // eax
//   int updated; // esi
//   unsigned int v30; // ebx
//   int v31; // edi
//   unsigned int *v32; // ebp
//   unsigned int v33; // esi
//   int v34; // ebp
//   int v35; // edi
//   int v36; // edx
//   int v37; // ecx
//   int v38; // eax
//   int v39; // esi
//   char v40; // al
//   int v41; // edx
//   char *v42; // edi
//   int v43; // eax
//   char *v44; // edi
//   int v45; // eax
//   int v46; // esi
// ... [26464 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x64AC90
namespace gamemd {
int Network::syncGameState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_64AC90(_BYTE *this)
{
  void *v2; // ebx
  int result; // eax

  v2 = __2_YAPAXI_Z(0x1C7u); /*0x64ac9f*/
  qmemcpy(v2, this, 0x1C4u); /*0x64acab*/
  this += 452; /*0x64acab*/
  *((_WORD *)v2 + 226) = *(_WORD *)this; /*0x64acad*/
  *((_BYTE *)v2 + 454) = *(this + 2); /*0x64acaf*/
  result = MEMORY[0xA8BB30]; /*0x64acb0*/
  if ( MEMORY[0xA8BB38] < MEMORY[0xA8BB30] /*0x64aceb*/
    || (MEMORY[0xA8BB35] || !MEMORY[0xA8BB30])
    && MEMORY[0xA8BB3C] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8BB28] + 8))(
                   &MEMORY[0xA8BB28],
                   MEMORY[0xA8BB30] + MEMORY[0xA8BB3C],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xA8BB38]++; /*0x64acf3*/
    *(_DWORD *)(MEMORY[0xA8BB2C] + 4 * result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/
}
}
} // namespace gamemd

// 0x64C380
namespace gamemd {
int Network::ProcessEventList(int a1, int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Network::ProcessEventList(int a1, int *a2, int a3)
{
  IUnknown *v3; // ebx
  IUnknown *v4; // edi
  int v5; // esi
  IUnknown *v6; // ecx
  IUnknown *v7; // eax
  int v8; // ecx
  int i; // esi
  IUnknown *v10; // eax
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
  _BYTE *v21; // ecx
  char *v22; // esi
  char *v23; // edi
  HouseClass *v24; // eax
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
  unsigned __int8 v41; // si
  int v42; // edi
  wchar_t *v43; // eax
  wchar_t *v44; // [esp-10h] [ebp-60h]
  int v45; // [esp+0h] [ebp-50h]
  int v46; // [esp+10h] [ebp-40h]
  int v47; // [esp+14h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+18h] [ebp-38h]
  int v50; // [esp+1Ch] [ebp-34h]
  IUnknown *v51; // [esp+20h] [ebp-30h]
  int v52; // [esp+24h] [ebp-2Ch]
  int var28; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  VectorClass *v53; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  v3 = HouseClass_Count; /*0x64c384*/
  v4 = (IUnknown *)dword_8B41F8; /*0x64c38d*/
  v5 = 0; /*0x64c395*/
  v50 = dword_8B41F8; /*0x64c399*/
  v51 = HouseClass_Count; /*0x64c39d*/
  if ( dword_8B41F8 > 0 ) /*0x64c3a1*/
  {
    v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[7976]; /*0x64c3a3*/
    do /*0x64c40b*/
    {
      if ( *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)) != 28 ) /*0x64c3c3*/
      {
        v7 = *(IUnknown **)((char *)&unk_8B4207 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)); /*0x64c3c5*/
        if ( (int)v7 > *(int *)&HouseClass_Player.__pad_5568[8004] && (int)v7 < (int)v6 ) /*0x64c3d8*/
        {
          Debug::Log(); /*0x64c3e1*/
          v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[7976]; /*0x64c3fb*/
          *(_DWORD *)((char *)&unk_8B4207 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)) = *(_DWORD *)&HouseClass_Player.__pad_5568[7976]; /*0x64c401*/
        }
      }
      ++v5; /*0x64c408*/
    }
    while ( v5 < (int)v4 ); /*0x64c40b*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20516] ) /*0x64c413*/
  {
    v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c419*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20520] ) /*0x64c421*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20524] != -1 ) /*0x64c42e*/
      {
        for ( i = 0; i < (int)v4; ++i ) /*0x64c438*/
        {
          if ( *((_BYTE *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)) == 19 /*0x64c466*/
            && *((char *)&unk_8B4206 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)) == *(_DWORD *)&HouseClass_Player.__pad_5568[20524] )
          {
            v10 = *(IUnknown **)((char *)&unk_8B4207 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)); /*0x64c468*/
            if ( (int)v10 > *(int *)&HouseClass_Player.__pad_5568[20516] && (int)v10 < v8 ) /*0x64c47b*/
            {
              Debug::Log(); /*0x64c484*/
              v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c49e*/
              *(_DWORD *)((char *)&unk_8B4207 + 111 * (((_WORD)i + word_8B41FC) & 0x3FFF)) = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c4a4*/
            }
          }
        }
        if ( *(int *)&HouseClass_Player.__pad_5568[23248] > v8 ) /*0x64c4b8*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[20516] = 0; /*0x64c4ba*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[20520] = 0; /*0x64c4c0*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[20524] = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( (int)v3 <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v46]; /*0x64c4ec*/
    v47 = v12; /*0x64c4f1*/
    if ( v12 ) /*0x64c4f5*/
    {
      if ( *(_BYTE *)(v12 + 492) || *(_BYTE *)(v12 + 493) ) /*0x64c505*/
        break; /*0x64c505*/
    }
LABEL_119:
    if ( ++v46 >= (int)v51 ) /*0x64cc4c*/
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
    if ( *(int *)&HouseClass_Player.__pad_160[36] > 0 ) /*0x64cafe*/
    {
      while ( 1 ) /*0x64cb0a*/
      {
        v36 = 0; /*0x64cb0a*/
        if ( v34 != -1 ) /*0x64cb0f*/
        {
          v36 = HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 60] != (unsigned __int8)v34; /*0x64cb28*/
          if ( HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 66] != v35 /*0x64cb5e*/
            || *(VectorClass **)&HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 62] != v53
            || HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 71] != v54
            || *(_DWORD *)&HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 67] != var28 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 60]; /*0x64cb72*/
        v37 = &HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 62]; /*0x64cb7a*/
        v38 = &HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 67]; /*0x64cb81*/
        v53 = *(VectorClass **)v37; /*0x64cb8a*/
        v56 = v37[4]; /*0x64cb91*/
        var28 = *(_DWORD *)v38; /*0x64cb97*/
        v54 = v38[4]; /*0x64cb9e*/
        if ( v36 ) /*0x64cba2*/
        {
          if ( v33 - v48 > 1 ) /*0x64cbaf*/
          {
            ProcessNetworkMapEvent(v48, v33 - v48); /*0x64cbb1*/
            v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cbb6*/
          }
          v48 = v33; /*0x64cbbc*/
        }
        else if ( v33 == *(_DWORD *)&HouseClass_Player.__pad_160[36] - 1 ) /*0x64cbcb*/
        {
          v39 = v33 - v48 + 1; /*0x64cbd5*/
          if ( v39 > 1 ) /*0x64cbd9*/
          {
            ProcessNetworkMapEvent(v48, v39); /*0x64cbdb*/
            v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cbe0*/
          }
        }
        if ( ++v33 >= *(int *)&HouseClass_Player.__pad_160[36] ) /*0x64cbee*/
          break; /*0x64cbee*/
        v35 = v56; /*0x64cb06*/
      }
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cbfb*/
    {
      while ( 1 ) /*0x64cc0a*/
      {
        EventClass::ProcessEvent((int)&HouseClass_Player.__pad_160[111 * v11 + 48]); /*0x64cc0a*/
        if ( !*(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cc16*/
          break; /*0x64cc16*/
        v11 = (unsigned __int8)(HouseClass_Player.__pad_160[40] + 1); /*0x64cc21*/
        *(_DWORD *)&HouseClass_Player.__pad_160[40] = v11; /*0x64cc28*/
        if ( !--*(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cc33*/
          goto LABEL_119; /*0x64cc33*/
      }
      v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cc37*/
    }
    goto LABEL_119; /*0x64cc37*/
  }
  v14 = a1; /*0x64c525*/
  while ( 1 ) /*0x64c536*/
  {
    v15 = (word_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c536*/
    v52 = *((char *)&unk_8B4206 + 111 * v15); /*0x64c54c*/
    if ( v52 != *(_DWORD *)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(_DWORD *)((char *)&unk_8B4207 + 111 * v15); /*0x64c556*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23248] < v16 || (*((_BYTE *)&unk_8B4205 + 111 * v15) & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23248] <= v16 /*0x64c5a9*/
      || *((_BYTE *)&unk_8B4204 + 111 * v15) == 28
      || !*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
      || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5 )
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
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 16))(v14); /*0x64c62f*/
    v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64c632*/
LABEL_96:
    v49 = ++v13; /*0x64cade*/
    if ( v13 >= v50 ) /*0x64cae2*/
      goto LABEL_97; /*0x64cae2*/
  }
  v17 = *((_BYTE *)&unk_8B4204 + 111 * v15); /*0x64c63d*/
  if ( v17 == 19 ) /*0x64c647*/
  {
    v24 = HouseClass_Array; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      v26 = *(_DWORD *)v24->__pad_0; /*0x64c7d3*/
      if ( *(_DWORD *)v24->__pad_0 ) /*0x64c7d3*/
      {
        if ( *(_DWORD *)(v26 + 48) == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      v24 = (HouseClass *)((char *)v24 + 4); /*0x64c7df*/
      if ( v25 >= (int)v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    *(_BYTE *)(v26 + 584) = 1; /*0x64c7e7*/
LABEL_57:
    if ( Network::CountDisconnectedHouses((void *)v26) == 1 ) /*0x64c7f8*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || HouseClass_Player.__pad_5568[26188] ) /*0x64c809*/
      {
LABEL_66:
        if ( !Network::processQueue((_BYTE *)v26) ) /*0x64c852*/
          Network::SendOffer(v26); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      HouseClass_Player.__pad_5568[9741] = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ProcessGameResults(0); /*0x64c819*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x64c83a*/
      && !HouseClass_Player.__pad_5568[26188]
      && HouseClass_Player.field_0
      && HouseClass_Player.field_0 == v26 )
    {
      Debug::Log(); /*0x64c841*/
      ProcessGameResults(0); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( HouseClass_Player.__pad_5568[23232] /*0x64c885*/
      && *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF)) == 19 )
    {
      Debug::Log(); /*0x64c8b3*/
    }
    v27 = (word_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c8cd*/
    if ( *((char *)&unk_8B4206 + 111 * v27) != *(_DWORD *)(HouseClass_Player.field_0 + 48) ) /*0x64c8e2*/
    {
      if ( *((_BYTE *)&unk_8B4204 + 111 * v27) == 19 ) /*0x64c923*/
      {
        Debug::Log(); /*0x64c935*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 ) /*0x64c94a*/
        {
          HandlePlayerDisconnection(v46, 0); /*0x64c9be*/
        }
        else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 /*0x64c954*/
               || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        {
          if ( a1 ) /*0x64c95c*/
          {
            v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 24))(a1, v46); /*0x64c96c*/
            if ( v29 != -1 ) /*0x64c971*/
            {
              if ( v29 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64c97d*/
              {
                v30 = a3 + 24 * v29; /*0x64c986*/
                do /*0x64c9a5*/
                {
                  ++v29; /*0x64c993*/
                  qmemcpy((void *)v30, (const void *)(v30 + 24), 0x18u); /*0x64c994*/
                  v30 += 24; /*0x64c99a*/
                }
                while ( v29 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ); /*0x64c9a5*/
                v13 = v49; /*0x64c9a7*/
              }
              HandleNetworkPlayerDisconnect((wchar_t *)v46, 0); /*0x64c9b1*/
            }
          }
        }
        if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 /*0x64c9ea*/
          && *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF)) == 19 )
        {
          v31 = v47; /*0x64c9f0*/
          *(_BYTE *)(v47 + 492) = 0; /*0x64c9f4*/
          *(_DWORD *)(v47 + 588) = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5172); /*0x64ca07*/
          HouseClass::CanDetect(); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy(Destination, g_INI_Key_Computer, (IUnknown *)0x14); /*0x64ca2d*/
            v58 = 0; /*0x64ca35*/
          }
          else
          {
            Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x64ca1b*/
          }
          if ( Destination != (char *)(v47 + 90100) ) /*0x64ca46*/
          {
            qmemcpy((void *)(v47 + 90100), Destination, 0x14u); /*0x64ca51*/
            *(_BYTE *)(v47 + 90120) = v58; /*0x64ca53*/
            v31 = v47; /*0x64ca54*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, &stru_830620.__pad_579C[5860], 5672); /*0x64ca6b*/
          wcsncpy((wchar_t *)(v31 + 90154), StringCSF, (DropListClass *)0x15); /*0x64ca78*/
          *(_WORD *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log(); /*0x64ca95*/
          --*(_DWORD *)&HouseClass_Player.__pad_5568[8856]; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    *(_DWORD *)&stru_830620.__pad_579C[5604] = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (char *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF); /*0x64c90a*/
LABEL_73:
    EventClass::ProcessEvent((int)v21); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    *(_DWORD *)&stru_830620.__pad_579C[5604] = timeGetTime() - v20; /*0x64c70c*/
    v21 = (char *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF); /*0x64c723*/
    if ( *v21 == 4 ) /*0x64c733*/
    {
      if ( *(int *)&HouseClass_Player.__pad_160[36] < 256 ) /*0x64c743*/
      {
        v22 = (char *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF); /*0x64c762*/
        v23 = &HouseClass_Player.__pad_160[111 * *(_DWORD *)&HouseClass_Player.__pad_160[44] + 48]; /*0x64c774*/
        qmemcpy(v23, v22, 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(_WORD *)v23 = *(_WORD *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&HouseClass_Player.__pad_160[44] + 6952] = timeGetTime(); /*0x64c78c*/
        *(_DWORD *)&HouseClass_Player.__pad_160[44] = (unsigned __int8)(HouseClass_Player.__pad_160[44] + 1); /*0x64c7a6*/
        ++*(_DWORD *)&HouseClass_Player.__pad_160[36]; /*0x64c7ac*/
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
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18 < v19 ) /*0x64c683*/
    {
      v19 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(_DWORD *)((char *)&unk_8B4207 + 111 * v15) != *(_DWORD *)&HouseClass_Player.__pad_5568[23248] /*0x64c6f2*/
    || dword_B04474[(unsigned __int8)(*(_DWORD *)((char *)&unk_8B4207 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF))
                                    - byte_8B4211[111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)])] == *(_DWORD *)((char *)&unk_8B420B + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)) )
  {
LABEL_95:
    v14 = a1; /*0x64caa8*/
    *((_BYTE *)&unk_8B4205 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)) |= 1u; /*0x64caca*/
    v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cad1*/
    goto LABEL_96; /*0x64cad1*/
  }
  if ( byte_B04880 ) /*0x64cc68*/
  {
    v41 = 0; /*0x64cc6e*/
    v42 = 256; /*0x64cc70*/
    do /*0x64cc9f*/
    {
      LogMultiplayToSync_MPDEBUG(v41++, (unsigned __int8 *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v49) & 0x3FFF)); /*0x64cc98*/
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    Multiplay::LogToSYNC_NOMPDEBUG((unsigned __int8 *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)); /*0x64ccba*/
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x64ccdd*/
  v44 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[8252], 0, &stru_830620.__pad_579C[5860], 5723); /*0x64ccf7*/
  v43 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[8236], 0, &stru_830620.__pad_579C[5860], 5722); /*0x64cd02*/
  Dialog::ShowMessageBox((int)v43, v44, 0, 0, 0, v45); /*0x64cd0c*/
  --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x64cd1b*/
  return 0; /*0x64cc52*/
}
}
} // namespace gamemd

// 0x6521C0
namespace gamemd {
int Network_RecordEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Network_RecordEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  char *v27; // edi

  *(_DWORD *)((char *)&a1 + 3) = MEMORY[0xA8ED84]; /*0x6521c5*/
  if ( Networking_LastEventIndex >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex]; /*0x6521eb*/
  qmemcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
  v27 += 108; /*0x6521f2*/
  *(_WORD *)v27 = a27; /*0x6521f4*/
  v27[2] = BYTE2(a27); /*0x6521f6*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x652205*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x652215*/
  ++Networking_LastEventIndex; /*0x652220*/
  return 1; /*0x652227*/
}
}
} // namespace gamemd

// 0x6523A0
namespace gamemd {
int Network::SendUnreachable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Network_SendUnreachable()
{
  int result; // eax
  int QueueCount; // edi
  int i; // ebx
  char *v3; // esi
  char *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  DWORD Ticks; // [esp+0h] [ebp-1E4h]
  _DWORD v10[3]; // [esp+10h] [ebp-1D4h] BYREF
  _DWORD v11[11]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v12; // [esp+48h] [ebp-19Ch]
  char v13; // [esp+4Ah] [ebp-19Ah]

  Debug::Log(MEMORY[0x8391CC]); /*0x6523ab*/
  result = MEMORY[0xA8B238]; /*0x6523b0*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x6523bb*/
  {
    Network::Disconnect(MEMORY[0xA8E9C0]); /*0x6523c9*/
    QueueCount = Network::GetQueueCount((int)MEMORY[0xA8E9C0]); /*0x6523d8*/
    for ( i = 0; i < dword_B052E0; ++i ) /*0x6523e7*/
    {
      memset(v11, 0, sizeof(v11)); /*0x6523f8*/
      v12 = 0; /*0x6523fa*/
      v13 = 0; /*0x6523fc*/
      v11[0] = 47; /*0x652402*/
      strcpy((char *)&v11[1], ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x65242c*/
      v3 = (char *)Network::checkTimeout(i); /*0x65243f*/
      if ( v3 ) /*0x652443*/
      {
        v4 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x65244d*/
        if ( _strcmpi(v3, v4) ) /*0x652454*/
        {
          Debug::Log(MEMORY[0x8391A8], v3); /*0x652466*/
          v5 = (_DWORD *)Network::processAcknowledgment(v3); /*0x652474*/
          v10[0] = *v5; /*0x65247b*/
          v10[1] = v5[1]; /*0x652485*/
          v10[2] = v5[2]; /*0x652491*/
          v6 = Network::handleDisconnect(v3); /*0x652495*/
          Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v11, 47, 1, (int)v10, v6, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = Timer::GetTicks(); /*0x6524d3*/
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > QueueCount ) /*0x6524e6*/
    {
      v7 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v8 = Timer::GetTicks() - Ticks; /*0x6524fe*/
        if ( v8 >= 300 ) /*0x652504*/
          break; /*0x652504*/
        v7 = 300 - v8; /*0x652506*/
      }
      if ( !v7 ) /*0x65250a*/
        break; /*0x65250a*/
      Event::Dispatch(); /*0x65250c*/
    }
    result = MEMORY[0xA8B238]; /*0x65251f*/
    if ( MEMORY[0xA8B238] == 4 ) /*0x65252a*/
      return Connection::Close(MEMORY[0xA8E9C0]); /*0x652531*/
  }
  return result; /*0x652536*/
}
}
} // namespace gamemd

// 0x663910
namespace gamemd {
void Network::validatePacket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_663910(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  while ( this->Network_field_0x10 ) /*0x663916*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 4)); /*0x663921*/
    v2 = this->Network_field_0x10; /*0x663926*/
    if ( v2 > 0 ) /*0x66392e*/
    {
      v3 = v2 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( this->Network_field_0x10 = v3; /*0x66393a*/
            v4 < this->Network_field_0x10;
            *(_DWORD *)(this->Network_field_0x4 + 4 * v4 - 4) = *(_DWORD *)(this->Network_field_0x4 + 4 * v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  *(_BYTE *)(this + 24) = 0; /*0x663953*/
  *(_DWORD *)(this + 28) = 0; /*0x663956*/
}
}
} // namespace gamemd

// 0x6639D0
namespace gamemd {
char Network::SendMasterPlayerList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Network_SendMasterPlayerList(int this)
{
  int v1; // esi
  int v2; // ebp
  int v4; // eax
  _BYTE *v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  DWORD Ticks; // [esp+10h] [ebp-16Ch]
  _BYTE v11[340]; // [esp+28h] [ebp-154h] BYREF

  v1 = this; /*0x6639d8*/
  memset(v11, 0, 338); /*0x6639e6*/
  Timer::GetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !*(_BYTE *)(this + 24) ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log(); /*0x663a1d*/
  v4 = *(_DWORD *)(v1 + 16); /*0x663a22*/
  v11[0] = 1; /*0x663a2a*/
  v11[1] = v4; /*0x663a2f*/
  if ( v4 > 0 ) /*0x663a33*/
  {
    v5 = &v11[43]; /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      v6 = *(_DWORD *)(v1 + 4); /*0x663a40*/
      qmemcpy(v5 - 41, *(const void **)(v6 + 4 * v2), 0x2Au); /*0x663a51*/
      if ( ((_DWORD (__stdcall *)(_DWORD))IPXManagerClass::send)(**(char **)(v6 + 4 * v2)) == -1 /*0x663a80*/
        && *((_DWORD *)HouseClass_Player + 12) != **(char **)(this->Network_field_0x4 + 4 * v2) )
      {
        Debug::Log(); /*0x663a89*/
        *v5 = 0; /*0x663a8e*/
        *(v5 - 2) = 0; /*0x663a94*/
      }
      ++v2; /*0x663a9c*/
      v5 += 42; /*0x663a9d*/
      if ( v2 >= this->Network_field_0x10 ) /*0x663aa3*/
        break; /*0x663aa3*/
      v1 = this; /*0x663a3c*/
    }
  }
  Network::SendPacket((int)MEMORY[0xA8E9C0], (int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log(); /*0x663ac1*/
  Ticks = Timer::GetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]) > 0 ) /*0x663af3*/
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
} // namespace gamemd

// 0x6640E0
namespace gamemd {
wchar_t * Network::ProcessAddressChange()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *Network_ProcessAddressChange()
{
  wchar_t *result; // eax
  char v1; // si
  const void *v2; // eax
  _BYTE v3[2]; // [esp+2h] [ebp-9Ah] BYREF
  int v4; // [esp+4h] [ebp-98h] BYREF
  __int16 v5; // [esp+8h] [ebp-94h]
  _BYTE v6[4]; // [esp+Ch] [ebp-90h] BYREF
  _DWORD v7[3]; // [esp+10h] [ebp-8Ch] BYREF
  _BYTE v8[12]; // [esp+1Ch] [ebp-80h] BYREF
  int v9; // [esp+28h] [ebp-74h] BYREF

  Waypoint::InitInvalid(v8); /*0x6640ea*/
  result = MEMORY[0xA8ED84]; /*0x6640ef*/
  if ( (int)MEMORY[0xA8ED84] > 0 ) /*0x6640f6*/
  {
    for ( result = (wchar_t *)((wchar_t *(__stdcall *)(int *, _BYTE *, _BYTE *, _BYTE *))Network::SendPacketThunk2)( /*0x66411c*/
                                &dword_B04E9C,
                                v6,
                                v8,
                                v3);
          result;
          result = (wchar_t *)((wchar_t *(__stdcall *)(int *, _BYTE *, _BYTE *, _BYTE *))Network::SendPacketThunk2)(
                                &dword_B04E9C,
                                v6,
                                v8,
                                v3) )
    {
      if ( (_BYTE)dword_B04E9C == 5 ) /*0x664132*/
      {
        ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x839BBC]); /*0x664151*/
        v1 = BYTE1(dword_B04E9C); /*0x66415e*/
        v4 = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v5 = 0; /*0x664174*/
        Waypoint::InitInvalid(v7); /*0x664179*/
        NetworkID::Assign(v7, &v9, (int)&v4, 0); /*0x66418e*/
        v2 = (const void *)((const void *(__stdcall *)(_DWORD, _DWORD *, char))Network::initConnection)( /*0x6641a7*/
                             *((_DWORD *)HouseClass_Player + 12),
                             v7,
                             v1);
        if ( Networking_LastEventIndex < 128 ) /*0x6641b6*/
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v2, 0x6Fu); /*0x6641d2*/
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6641df*/
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6641f6*/
          ++Networking_LastEventIndex; /*0x6641fc*/
        }
      }
      else
      {
        ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x839BE8], (unsigned __int8)dword_B04E9C); /*0x66413f*/
      }
    }
  }
  return result; /*0x66422a*/
}
}
} // namespace gamemd

// 0x6642A0
namespace gamemd {
char * Network::processAcknowledgment(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Network::processAcknowledgment(_DWORD *this, IUnknown *aP1)
{
  int v3; // esi
  IPXManagerClass *v5; // ecx
  IPXManagerClass v6; // [esp+Ch] [ebp-10h] BYREF
  IPXManagerClass v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    Waypoint::InitInvalid(byte_B052C0); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v6.Socket = 0; /*0x6642db*/
  *(_WORD *)&v6.Initialized = 0; /*0x6642e5*/
  Struct::Copy6Bytes(byte_B052C0, &v6); /*0x6642ea*/
  Network::SetPort(byte_B052C0, 0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)*(this + 4) > 0 ) /*0x664302*/
  {
    while ( _strcmpi((char *)(*(_DWORD *)(*(this + 1) + 4 * v3) + 1), (char *)aP1) ) /*0x66431b*/
    {
      if ( ++v3 >= *(this + 4) ) /*0x664323*/
        return byte_B052C0; /*0x664330*/
    }
    v7.Socket = *(_DWORD *)(*(_DWORD *)(*(this + 1) + 4 * v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(byte_B052C0, &v7); /*0x66434a*/
    LOWORD(v5) = *(_WORD *)(*(_DWORD *)(*(this + 1) + 4 * v3) + 37); /*0x664355*/
    Network::SetPort(byte_B052C0, v5); /*0x66435f*/
  }
  return byte_B052C0; /*0x664325*/
}
}
} // namespace gamemd

// 0x664390
namespace gamemd {
short Network::handleDisconnect(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall Network::handleDisconnect(_DWORD *this, IUnknown *aP1)
{
  int v3; // esi

  v3 = 0; /*0x664395*/
  if ( (int)*(this + 4) <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((char *)(*(_DWORD *)(*(this + 1) + 4 * v3) + 1), (char *)aP1) ) /*0x6643b5*/
  {
    if ( ++v3 >= *(this + 4) ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(_WORD *)(*(_DWORD *)(*(this + 1) + 4 * v3) + 37); /*0x6643bf*/
}
}
} // namespace gamemd

// 0x6643E0
namespace gamemd {
int Network::checkTimeout(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6643E0(_DWORD *this, int a2)
{
  if ( a2 >= *(this + 4) ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *(_DWORD *)(*(this + 1) + 4 * a2) + 1; /*0x6643f1*/
}
}
} // namespace gamemd

// 0x664400
namespace gamemd {
char * Network::reconnect(DynamicVector * aP1, short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Network::reconnect(int *this, DynamicVector *aP1, __int16 a3)
{
  int v3; // edx
  char *result; // eax
  char **v5; // esi
  char **i; // ecx

  v3 = *(this + 4); /*0x664400*/
  result = 0; /*0x664404*/
  if ( v3 > 0 ) /*0x66440a*/
  {
    v5 = (char **)*(this + 1); /*0x66440c*/
    for ( i = v5; (DynamicVector *)**i != aP1; ++i ) /*0x664413*/
    {
      if ( (int)++result >= v3 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = v5[(_DWORD)result]; /*0x66442c*/
    *(_WORD *)(result + 37) = a3; /*0x664434*/
  }
  return result; /*0x664426*/
}
}
} // namespace gamemd

// 0x68CAB0
namespace gamemd {
int Network_Assign(void * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_Assign(void *a1, int a2)
{
  int v2; // esi
  IUnknown *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68cab7*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x68cac0*/
    return -1; /*0x68caf9*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x68cac2*/
  while ( 1 ) /*0x68cada*/
  {
    v6 = _strcmpi(a1, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0; /*0x68cada*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x68cadc*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v2) + 784) == a2 ) /*0x68caec*/
      break; /*0x68caec*/
    if ( ++v2 >= *(int *)stru_B05488.__pad_58 ) /*0x68caf7*/
      return -1; /*0x68caf7*/
  }
  return v2; /*0x68caf9*/
}
}
} // namespace gamemd

// 0x6956D0
namespace gamemd {
bool Network::sendGameEvent(Modem * aP0, int _10, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool Network::sendGameEvent(Modem *aP0, int _10, _DWORD *a2)
{
  LONG v3; // ecx
  int v4; // ebx
  LONG v5; // ebp
  HWND Dialog; // eax
  bool v7; // zf

  v5 = v3; /*0x6956d1*/
  *(_DWORD *)(v3 + 4) = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(_DWORD *)v5 = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return *(_DWORD *)(v5 + 4) == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, v5); /*0x6956f7*/
  NetworkDialog::InitModemSettings((HWND *)v5, aP0); /*0x695704*/
  Dialog::Show(*(HWND *)v5); /*0x69570c*/
  while ( *(int *)(v5 + 4) < 0 ) /*0x695716*/
  {
    if ( Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    ScreenSaver::Process(0, v4, v5); /*0x695723*/
  }
  Dialog::Destroy(*(SkirmishDialog **)v5); /*0x695732*/
  v7 = *(_DWORD *)(v5 + 4) == 1; /*0x695737*/
  if ( *(_DWORD *)(v5 + 4) == 1 ) /*0x69573b*/
  {
    qmemcpy(aP0, (const void *)(v5 + 136), 0x70u); /*0x695749*/
    return *(_DWORD *)(v5 + 4) == 1; /*0x69574c*/
  }
  return v7; /*0x695750*/
}
}
} // namespace gamemd

// 0x69B540
namespace gamemd {
unsigned int * Network::processGameEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_69B540(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  *(this + 9) = 0; /*0x69b540*/
  result = this + 27; /*0x69b547*/
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
} // namespace gamemd

// 0x72CDB0
namespace gamemd {
void sub_72CDB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72CDB0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCE5] ) /*0x72cdba*/
  {
    if ( MEMORY[0xB0FCE4] ) /*0x72cdc2*/
    {
      v0 = MEMORY[0xB0FAAC]; /*0x72cdc5*/
      if ( MEMORY[0xB0FAAC] ) /*0x72cdcd*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FAAC]); /*0x72cdd1*/
        __3_YAXPAX_Z(v0); /*0x72cdd7*/
      }
      MEMORY[0xB0FCE4] = 0; /*0x72cddf*/
    }
    MEMORY[0xB0FAAC] = 0; /*0x72cdeb*/
    if ( MEMORY[0xB0FCE8] ) /*0x72cdf3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCE8]); /*0x72cdf6*/
      MEMORY[0xB0FCE8] = 0; /*0x72cdfe*/
    }
    if ( MEMORY[0xB0FCEC] ) /*0x72ce0c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCEC])(MEMORY[0xB0FCEC], 1); /*0x72ce12*/
      MEMORY[0xB0FCEC] = 0; /*0x72ce14*/
    }
  }
  MEMORY[0xB0FCE5] = 0; /*0x72ce1a*/
}
}
} // namespace gamemd

// 0x74FD20
namespace gamemd {
int Network::GetMaxPacketSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network::GetMaxPacketSize(VersionClass *this)
{
  int v1; // ecx
  unsigned int *v2; // eax
  unsigned int v4; // [esp+4h] [ebp+4h]

  v1 = 2; /*0x74fd24*/
  v2 = (unsigned int *)&MEMORY[0x846150]; /*0x74fd29*/
  while ( v4 < *v2 ) /*0x74fd30*/
  {
    v2 -= 2; /*0x74fd32*/
    --v1; /*0x74fd35*/
    if ( (int)v2 < (int)&MEMORY[0x846140] ) /*0x74fd3b*/
      return MEMORY[0x846154]; /*0x74fd42*/
  }
  return MEMORY[0x846144][2 * v1]; /*0x74fd42*/
}
}
} // namespace gamemd

// 0x778180
namespace gamemd {
HIMC sub_778180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HIMC sub_778180()
{
  HIMC result; // eax

  result = dword_B7355C; /*0x778180*/
  if ( dword_B7355C ) /*0x778187*/
    return ImmAssociateContext(g_hWnd, dword_B7355C); /*0x778190*/
  return result; /*0x778195*/
}
}
} // namespace gamemd

// 0x77D940
namespace gamemd {
bool Network::IsMultiplayerActive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool Network_IsMultiplayerActive()
{
  if ( MEMORY[0xA8B238] != 4 ) /*0x77d948*/
    return 0; /*0x77d94a*/
  return dword_B76B24 || (dword_B76B30 & 0x100) != 0; /*0x77d94d*/
}
}
} // namespace gamemd

// 0x77D970
namespace gamemd {
char Network::IsLobbyFeature()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Network_IsLobbyFeature()
{
  if ( MEMORY[0xA8B238] == 4 ) /*0x77d977*/
    return BYTE1(dword_B76B30) & 1; /*0x77d984*/
  else
    return 0; /*0x77d979*/
}
}
} // namespace gamemd

// 0x792F10
namespace gamemd {
void Network::SyncPlayerList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Network_SyncPlayerList()
{
  signed int v0; // eax
  signed int v1; // ebp
  int v2; // ebx
  char *v3; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  int v9; // eax
  int v10; // ecx
  int i; // esi
  int v12; // [esp+Ch] [ebp-7Ch] BYREF
  int v13; // [esp+10h] [ebp-78h] BYREF
  _BYTE v14[8]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v15[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  v0 = g_WOL_State; /*0x792f10*/
  MEMORY[0xA8B54C] = 1; /*0x792f18*/
  v1 = 0; /*0x792f23*/
  if ( (int)g_WOL_State > 0 ) /*0x792f28*/
  {
    v2 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v2 >= 0 && v1 < v0 ) /*0x792f38*/
        qmemcpy(v15, (char *)g_WOL_ConnectionFlags + v2, sizeof(v15)); /*0x792f4b*/
      v3 = CharToWideString(&v15[9]); /*0x792f51*/
      v4 = Player::FindByName((wchar_t *)v3); /*0x792f58*/
      v5 = v4; /*0x792f5d*/
      if ( v4 && IsKnownPointer(v4) ) /*0x792f65*/
        *(_DWORD *)((char *)v5 + 123) = v15[5]; /*0x792f72*/
      v6 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x792f7a*/
      if ( _strcmpi(&v15[9], v6) ) /*0x792f85*/
      {
        if ( (v15[0] & 1) != 0 ) /*0x792f96*/
        {
          v7 = CharToWideString(&v15[9]); /*0x792f9c*/
          v8 = Player::FindByName((wchar_t *)v7); /*0x792fa3*/
          Network::CopyAddress((_DWORD *)v8 + 10, &v13, (int)v14); /*0x792fb5*/
          NetworkID::Assign(&MEMORY[0xA8BB1C], &v13, (int)v14, 0); /*0x792fcb*/
        }
        v12 = 0; /*0x792fde*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)MEMORY[0xAC1170] + 32))( /*0x792fea*/
          MEMORY[0xAC1170],
          v15[6],
          &v12);
        v9 = v12; /*0x792fed*/
        if ( v12 < 0 ) /*0x792ff3*/
        {
          v9 = 0; /*0x792ff5*/
          v12 = 0; /*0x792ff7*/
        }
        v10 = MEMORY[0xA8B54C]; /*0x792ffb*/
        dword_B7790C[MEMORY[0xA8B54C]] = v9; /*0x793001*/
        MEMORY[0xA8B54C] = v10 + 1; /*0x793009*/
      }
      v0 = g_WOL_State; /*0x79300f*/
      ++v1; /*0x793014*/
      v2 += 108; /*0x793015*/
    }
    while ( v1 < (int)g_WOL_State ); /*0x79301a*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x79302a*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x793039*/
  {
    Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40), 0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 44))( /*0x793071*/
      MEMORY[0x887628],
      *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40,
      0);
  }
  Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8BB1C], 0); /*0x793085*/
  Debug::Log(); /*0x793090*/
}
}
} // namespace gamemd

// 0x7982A0
namespace gamemd {
void Network_Delete(int a1, int a2, SessionClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall Network_Delete(int a1, int a2, SessionClass *aP2)
{
  int v3; // edi
  SessionClass *v4; // esi

  v3 = a1; /*0x7982a6*/
  if ( a1 > 0 ) /*0x7982ac*/
  {
    v4 = aP2; /*0x7982af*/
    do /*0x7982bc*/
    {
      DeleteAndZero((int)v4); /*0x7982b3*/
      v4 = (SessionClass *)((char *)v4 + 4); /*0x7982b8*/
      --v3; /*0x7982bb*/
    }
    while ( v3 ); /*0x7982bc*/
  }
  __3_YAXPAX_Z(aP2); /*0x7982c0*/
}
}
} // namespace gamemd

// 0x79C3A0
namespace gamemd {
unsigned int sub_79C3A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int sub_79C3A0()
{
  unsigned int result; // eax
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  char v6[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( String::Length(&g_WOL_AuthObject) ) /*0x79c3a8*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c3d1*/
  }
  result = g_WOL_RequestManager; /*0x79c3d6*/
  if ( g_WOL_RequestManager ) /*0x79c3dd*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79c3e6*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c3f7*/
      v1 = 0; /*0x79c401*/
      if ( g_WOL_RequestManager ) /*0x79c405*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79c40b*/
          v1 = g_WOL_RequestManager - 1; /*0x79c40d*/
        DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79c419*/
        memcpy( /*0x79c442*/
          (char *)g_WOL_SessionID + 4 * v1,
          (char *)g_WOL_SessionID + 4 * v1 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v1 + 1)));
        --g_WOL_RequestManager; /*0x79c456*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79c460*/
        {
          v2 = dword_B76984 / 2; /*0x79c469*/
          if ( dword_B76984 / 2 < 10 ) /*0x79c46e*/
            v2 = 10; /*0x79c470*/
          if ( v2 < dword_B76984 ) /*0x79c477*/
          {
            v3 = __2_YAPAXI_Z(4 * v2); /*0x79c482*/
            v4 = g_WOL_SessionID; /*0x79c487*/
            v5 = v3; /*0x79c492*/
            if ( g_WOL_SessionID ) /*0x79c494*/
            {
              qmemcpy(v3, g_WOL_SessionID, 4 * g_WOL_RequestManager); /*0x79c49e*/
              v4 = g_WOL_SessionID; /*0x79c4a0*/
            }
            __3_YAXPAX_Z(v4); /*0x79c4a7*/
            g_WOL_SessionID = v5; /*0x79c4af*/
            dword_B76984 = v2; /*0x79c4b5*/
          }
        }
      }
    }
    g_WOL_ParseState = time(0); /*0x79c4c3*/
    memset(v6, 0, sizeof(v6)); /*0x79c4d3*/
    strcpy(&v6[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v6); /*0x79c512*/
  }
  return result; /*0x79c518*/
}
}
} // namespace gamemd

// 0x7B2DB0
namespace gamemd {
int Network::finalizeSession()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7B2DB0(int this)
{
  IPXInterfaceClass::bindSocket((char *)this); /*0x7b2db3*/
  *(_DWORD *)(this + 258876) = 0; /*0x7b2dc4*/
  *(_DWORD *)(this + 258880) = 0; /*0x7b2dca*/
  *(_BYTE *)(this + 258884) = 1; /*0x7b2dd0*/
  *(_BYTE *)(this + 258885) = 0; /*0x7b2dd7*/
  *(_DWORD *)(this + 258872) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2ddd*/
  *(_DWORD *)(this + 258892) = 10; /*0x7b2de3*/
  *(_DWORD *)(this + 258888) = 0; /*0x7b2de9*/
  *(_DWORD *)(this + 259412) = 0; /*0x7b2def*/
  *(_DWORD *)(this + 259416) = 0; /*0x7b2df5*/
  *(_BYTE *)(this + 259420) = 1; /*0x7b2dfb*/
  *(_BYTE *)(this + 259421) = 0; /*0x7b2e02*/
  *(_DWORD *)(this + 259408) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2e08*/
  *(_DWORD *)(this + 259428) = 10; /*0x7b2e0e*/
  *(_DWORD *)(this + 259424) = 0; /*0x7b2e14*/
  *(_WORD *)(this + 258812) = 0; /*0x7b2e1a*/
  *(_DWORD *)(this + 258864) = 0; /*0x7b2e21*/
  *(_DWORD *)(this + 259432) = 0; /*0x7b2e27*/
  *(_DWORD *)this = &UDPInterfaceClass::`vftable'; /*0x7b2e2d*/
  *(_DWORD *)(this + 258868) = -1; /*0x7b2e33*/
  return this; /*0x7b2e3f*/
}
}
} // namespace gamemd

// 0x793BB0
namespace gamemd {
int sub_793BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_793BB0()
{
  int result; // eax
  DWORD *v1; // ebp
  int *v2; // ebx
  signed int v3; // esi
  signed int v4; // eax
  int v5; // [esp+0h] [ebp-1D8h]
  DWORD v6; // [esp+8h] [ebp-1D0h]
  int v7[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v8; // [esp+1D4h] [ebp-4h]
  char v9; // [esp+1D6h] [ebp-2h]

  result = MEMORY[0xA8E224]; /*0x793bb6*/
  v5 = 0; /*0x793bbb*/
  if ( MEMORY[0xA8E224] > 0 ) /*0x793bc5*/
  {
    v1 = (DWORD *)&MEMORY[0xA8E1C4]; /*0x793bcf*/
    v2 = MEMORY[0xA8E1A4]; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v3 = v1[2]; /*0x793bdc*/
      if ( *v1 != -1 ) /*0x793be5*/
      {
        v4 = Timer::GetTicks() - *v1; /*0x793bec*/
        if ( v4 >= v3 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v3 -= v4; /*0x793bf3*/
      }
      if ( !v3 ) /*0x793bf7*/
      {
LABEL_7:
        memset(v7, 0, sizeof(v7)); /*0x793c08*/
        v8 = 0; /*0x793c0a*/
        v9 = 0; /*0x793c0c*/
        v7[0] = 13; /*0x793c12*/
        strcpy((char *)&v7[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x793c39*/
        ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + *v2)); /*0x793c4b*/
        Debug::Log(); /*0x793c56*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v7, 47, 0, (wchar_t *)*(&MEMORY[0xA8DA90] + *v2)); /*0x793c76*/
        *v1 = Timer::GetTicks(); /*0x793c8f*/
        v1[1] = v6; /*0x793c99*/
        v1[2] = 1200; /*0x793c9c*/
      }
      result = v5 + 1; /*0x793c9f*/
      ++v2; /*0x793caa*/
      v1 += 3; /*0x793cad*/
      ++v5; /*0x793cb2*/
    }
    while ( v5 < MEMORY[0xA8E224] ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}
}
} // namespace gamemd

// 0x7A2730
namespace gamemd {
LPVOID sub_7A2730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPVOID sub_7A2730()
{
  LPVOID result; // eax

  result = MEMORY[0xAC116C]; /*0x7a2730*/
  if ( MEMORY[0xAC116C] ) /*0x7a2737*/
    return (LPVOID)(*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 60))( /*0x7a2741*/
                     MEMORY[0xAC116C],
                     MEMORY[0x84D690]);
  return result; /*0x7a2744*/
}
}
} // namespace gamemd

// 0x5E8D90
namespace gamemd {
void sub_5E8D90(int a1, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_5E8D90(int a1, LPARAM a2)
{
  *(&MEMORY[0xA8DA90] + a1) = a2; /*0x5e8d90*/
}
}
} // namespace gamemd

// 0x646DF0
namespace gamemd {
DWORD sub_646DF0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __fastcall sub_646DF0(int a1)
{
  DWORD result; // eax

  result = timeGetTime(); /*0x646df3*/
  dword_AFA36C[6 * a1] = result; /*0x646dfd*/
  return result; /*0x646dfc*/
}
}
} // namespace gamemd

// 0x53F4F0
namespace gamemd {
int sub_53F4F0(short a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_53F4F0(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  LOWORD(unk_AA0568) = a1; /*0x53f4f4*/
  unk_AA0548 = a2; /*0x53f4ff*/
  unk_AA055C = a3; /*0x53f509*/
  unk_AA0578 = a4; /*0x53f512*/
  unk_AA0530 = a5; /*0x53f51c*/
  unk_AA0508 = a6; /*0x53f522*/
  unk_AA056C = a7; /*0x53f527*/
  unk_AA05A4 = 1; /*0x53f52d*/
  return a6; /*0x53f537*/
}
}
} // namespace gamemd

// 0x53F540
namespace gamemd {
int sub_53F540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_53F540()
{
  unsigned __int16 v0; // si

  v0 = unk_AA0568; /*0x53f54d*/
  (*(void (__thiscall **)(int, WPARAM))(*(_DWORD *)MEMORY[0x887628] + 80))(MEMORY[0x887628], MEMORY[0xA8EBB4]); /*0x53f556*/
  unk_AA05A8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 60))(MEMORY[0x887628], v0); /*0x53f570*/
  if ( unk_AA05A8 ) /*0x53f576*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]) ) /*0x53f580*/
    {
      unk_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 4))(MEMORY[0x887628]); /*0x53f59a*/
    unk_AA05A8 = 0; /*0x53f59d*/
  }
  return 0; /*0x53f575*/
}
}
} // namespace gamemd

// 0x5DA6C0
namespace gamemd {
char sub_5DA6C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5DA6C0()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init((int)MEMORY[0xA8E9C0]) ) /*0x5da6c8*/
    return 0; /*0x5da6d1*/
  if ( MEMORY[0xA8B238][0] != 4 ) /*0x5da6de*/
  {
    if ( MEMORY[0xA8D5FC] ) /*0x5da6e7*/
    {
      Network::CopyAddress(&MEMORY[0xA8D600], &v1, (int)v2); /*0x5da6f8*/
      Network_Init_542FC0(MEMORY[0xA8E9C0], (int)&v1); /*0x5da707*/
    }
  }
  return 1; /*0x5da6d3*/
}
}
} // namespace gamemd

// 0x796FC0
namespace gamemd {
int sub_796FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_796FC0()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796fca*/
  v1 = v0; /*0x796fcf*/
  if ( v0 ) /*0x796fd6*/
    Waypoint::InitInvalid(v0 + 40); /*0x796fdb*/
  else
    v1 = 0; /*0x796fe2*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotatotoo, -1); /*0x796fed*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796ff7*/
  *(_DWORD *)(v1 + 75) = 1; /*0x796ffe*/
  *(_DWORD *)(v1 + 83) = 2; /*0x797005*/
  v6[1] = 2; /*0x797008*/
  v5 = 0; /*0x79701d*/
  v6[5] = 0; /*0x797025*/
  v6[4] = 0; /*0x79702a*/
  v6[3] = -6; /*0x79702f*/
  v6[2] = 80; /*0x797034*/
  v6[0] = 10; /*0x797039*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x79703e*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x79707a*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x797087*/
    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x797096*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x797099*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x79709e*/
  MEMORY[0xA8B54C] = v3 + 1; /*0x7970aa*/
  MEMORY[0xA8BB1C] = *((_DWORD *)v1 + 10); /*0x7970b1*/
  result = *((_DWORD *)v1 + 11); /*0x7970b7*/
  MEMORY[0xA8BB20] = result; /*0x7970ba*/
  MEMORY[0xA8BB24] = *((_DWORD *)v1 + 12); /*0x7970c3*/
  return result; /*0x7970c2*/
}
}
} // namespace gamemd

// 0x72CD60
namespace gamemd {
char sub_72CD60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72CD60()
{
  char result; // al

  result = MEMORY[0xB0FCE5]; /*0x72cd60*/
  if ( !MEMORY[0xB0FCE5] ) /*0x72cd67*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72cd73*/
      MEMORY[0xB0FAAC] = LoadFileSHP(MEMORY[0x844D74], (bool *)&MEMORY[0xB0FCE4]); /*0x72cd85*/
    result = LoadPaletteSimple(MEMORY[0x844D78], &MEMORY[0xB0FCE8], &MEMORY[0xB0FCEC]); /*0x72cd9a*/
    MEMORY[0xB0FCE5] = 1; /*0x72cd9f*/
  }
  return result; /*0x72cda6*/
}
}
} // namespace gamemd

// 0x5F0120
namespace gamemd {
int Network_Process_5F0120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_5F0120@<al>(int a1@<ebp>)
{
  char result; // al
  int v2; // edx
  int v3; // edx

  result = 0; /*0x5f0126*/
  switch ( MEMORY[0xA8DB30] ) /*0x5f012d*/
  {
    case 0: /*0x5f012d*/
    case 1: /*0x5f012d*/
      goto LABEL_3;
    case 2: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0140*/
        goto LABEL_3; /*0x5f0140*/
      LOBYTE(v2) = 1; /*0x5f014d*/
      result = Modem::CheckStatus(v2, MEMORY[0xAC1234], a1); /*0x5f014f*/
      break; /*0x5f014f*/
    case 3: /*0x5f012d*/
      if ( (Dialog::CheckButtonState() & 0x80u) != 0 ) /*0x5f0160*/
      {
LABEL_3:
        result = NullModem::TestConnection(); /*0x5f0142*/
      }
      else
      {
        LOBYTE(v3) = 1; /*0x5f0168*/
        result = Modem::DetectAndConnect(v3, MEMORY[0xAC1234], a1); /*0x5f016a*/
      }
      break; /*0x5f016a*/
    default:
      return result;
  }
  return result; /*0x5f016f*/
}
}
} // namespace gamemd

// 0x5F6790
namespace gamemd {
int * sub_5F6790(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall sub_5F6790(int *a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f6796*/
  v4 = 0; /*0x5f679f*/
  v5 = 0; /*0x5f67a1*/
  v6 = 0; /*0x5f67a3*/
  v11 = v2; /*0x5f67ab*/
  if ( v2 - 1 >= 0 ) /*0x5f67af*/
  {
    v7 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * (v2 - 1)); /*0x5f67b4*/
    v10 = v2; /*0x5f67b8*/
    do /*0x5f67e0*/
    {
      v8 = (_DWORD *)*v7--; /*0x5f67bc*/
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
}
} // namespace gamemd

// 0x5F6810
namespace gamemd {
unsigned int * sub_5F6810(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_5F6810(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v5; // edi
  int v6; // ebp
  double v7; // st7
  int v8; // eax
  double v9; // st7
  _DWORD *v10; // [esp+18h] [ebp-28h]
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]

  result = 0; /*0x5f681f*/
  v5 = *(_DWORD *)(a1 + 16) - 1; /*0x5f6826*/
  v10 = 0; /*0x5f6827*/
  v6 = 99999999; /*0x5f682b*/
  if ( v5 >= 0 ) /*0x5f6830*/
  {
    while ( result ) /*0x5f6838*/
    {
      v13 = *a2 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 156); /*0x5f68c7*/
      v14 = a2[1] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 160); /*0x5f68d4*/
      v15 = a2[2] - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 164); /*0x5f68de*/
      v9 = Math::Sqrt((double)v13 * (double)v13 + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x5f6903*/
      v8 = Math::RoundToInt(v9); /*0x5f690b*/
      if ( v8 < v6 ) /*0x5f6912*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f691a*/
        goto LABEL_6; /*0x5f691a*/
      }
LABEL_7:
      result = v10; /*0x5f6920*/
      if ( --v5 < 0 ) /*0x5f6925*/
        return result; /*0x5f6925*/
    }
    v10 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v5); /*0x5f6845*/
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
} // namespace gamemd

// 0x64AD10
namespace gamemd {
LRESULT sub_64AD10(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall sub_64AD10(int a1, int a2)
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
  result = MEMORY[0xA8BB40][a2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
LABEL_5:
    MEMORY[0xA8BB60][8 * a2 + result] = a1; /*0x64ad41*/
    ++MEMORY[0xA8BB40][a2]; /*0x64ad53*/
    result = MEMORY[0xA8B238][0]; /*0x64ad5a*/
    if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)Network::GetClass(MEMORY[0xA8E9C0], a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x64ad84*/
      Network::GetClass(MEMORY[0xA8E9C0], a2); /*0x64ad8c*/
      Debug::Log(); /*0x64ad98*/
      v11 = Network::GetClass(MEMORY[0xA8E9C0], a2); /*0x64adb2*/
      StringCSF = GetStringCSF(MEMORY[0x837A30], 0, MEMORY[0x8374A0], 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = Dialog::GetCurrent(); /*0x64add1*/
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
    v5 = &MEMORY[0xA8BB60][8 * a2]; /*0x64ad2b*/
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
} // namespace gamemd

// 0x64B410
namespace gamemd {
int sub_64B410(int a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_64B410(int a1, int *a2)
{
  int *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x64b419*/
  if ( MEMORY[0xA8B238][0] == 1 || MEMORY[0xA8B238][0] == 2 ) /*0x64b42a*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x64b491*/
    {
      ++MEMORY[0xA8DAB4]; /*0x64b498*/
      if ( !Network_Process_5F0120((int)v2) ) /*0x64b49e*/
      {
        --MEMORY[0xA8DAB4]; /*0x64b4ae*/
        return 0; /*0x64b4b9*/
      }
      --MEMORY[0xA8DAB4]; /*0x64b4bb*/
    }
    return 1; /*0x64b4bb*/
  }
  if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 ) /*0x64b434*/
    return 1; /*0x64b4c1*/
  v4 = 0; /*0x64b43e*/
  v5 = 0x7FFFFFFF; /*0x64b442*/
  v7 = 0; /*0x64b447*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) > 0 ) /*0x64b450*/
  {
    do /*0x64b46c*/
    {
      if ( *v2 < v5 ) /*0x64b457*/
      {
        v5 = *v2; /*0x64b459*/
        v7 = v4; /*0x64b45b*/
      }
      ++v4; /*0x64b463*/
      v2 += 6; /*0x64b464*/
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ); /*0x64b46c*/
    v2 = a2; /*0x64b46e*/
  }
  KickNetworkPlayerNow(a1, v7, (int)v2, 1u); /*0x64b47b*/
  return 1; /*0x64b487*/
}
}
} // namespace gamemd

// 0x64D990
namespace gamemd {
void sub_64D990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_64D990()
{
  int v0; // edx
  int v1; // eax

  v0 = dword_8B41F8; /*0x64d990*/
  if ( dword_8B41F8 ) /*0x64d999*/
  {
    v1 = word_8B41FC; /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (unk_8B4205[111 * v1] & 1) == 0 && (int)MEMORY[0xA8ED84] <= *(int *)((char *)&unk_8B4207 + 111 * v1) ) /*0x64d9bd*/
        break; /*0x64d9bd*/
      if ( !v0 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      v1 = ((_WORD)v1 + 1) & 0x3FFF; /*0x64d9c4*/
      --v0; /*0x64d9c9*/
      word_8B41FC = v1; /*0x64d9ca*/
      dword_8B41F8 = v0; /*0x64d9cf*/
    }
    while ( v0 ); /*0x64d9d5*/
  }
}
}
} // namespace gamemd

// 0x64D9E0
namespace gamemd {
int sub_64D9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_64D9E0()
{
  int result; // eax
  int v1; // edi
  __int16 v2; // cx
  int v3; // esi
  int i; // esi
  int Buffer; // [esp+8h] [ebp-4h] BYREF

  if ( MEMORY[0xA8ED84] || (result = MEMORY[0xA8B238][0]) == 0 ) /*0x64d9f4*/
  {
    v1 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( dword_8B41F8 > 0 ) /*0x64da0a*/
    {
      v2 = word_8B41FC; /*0x64da0c*/
      v3 = dword_8B41F8; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( MEMORY[0xA8ED84] == *(wchar_t **)((char *)&unk_8B4207 + 111 * (v2 & 0x3FFF)) /*0x64da32*/
          && (unk_8B4205[111 * (v2 & 0x3FFF)] & 1) == 0 )
        {
          ++v1; /*0x64da34*/
        }
        ++v2; /*0x64da35*/
        --v3; /*0x64da36*/
      }
      while ( v3 ); /*0x64da37*/
      Buffer = v1; /*0x64da39*/
    }
    FileClass::Write(MEMORY[0xA8D58C], &Buffer, 4u); /*0x64da4a*/
    result = dword_8B41F8; /*0x64da4f*/
    for ( i = 0; i < dword_8B41F8; ++i ) /*0x64da59*/
    {
      if ( MEMORY[0xA8ED84] == *(wchar_t **)((char *)&unk_8B4207 + 111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)) /*0x64da85*/
        && (unk_8B4205[111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)] & 1) == 0 )
      {
        FileClass::Write(MEMORY[0xA8D58C], &unk_8B4204[111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)], 0x6Fu); /*0x64da96*/
        --Buffer; /*0x64da9b*/
      }
      result = dword_8B41F8; /*0x64da9f*/
    }
  }
  return result; /*0x64daa9*/
}
}
} // namespace gamemd

// 0x652110
namespace gamemd {
char * sub_652110(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_652110(int a1, int a2)
{
  char *result; // eax
  int v4; // ebx
  unsigned int v5; // eax

  result = (char *)MEMORY[0xA8B238][0]; /*0x652110*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x65211e*/
  {
    v4 = *(_DWORD *)(a1 + 24 * a2); /*0x652135*/
    if ( MEMORY[0xA8DBA0] ) /*0x652142*/
      v5 = ((unsigned int)MEMORY[0xA8E2D4] >> 1) /*0x652183*/
         + (*(_DWORD *)(a1 + 24 * a2 + 16) >> 1)
         - (int)Math::RoundToInt(-60.0 / ((double)(int)MEMORY[0xA8B558] / (double)(unsigned int)MEMORY[0xA8B554])) / 2;
    else
      v5 = (unsigned int)IPXManagerClass::CheckStatus(MEMORY[0xA8E9C0], a2) >> 1; /*0x652192*/
    result = (char *)MEMORY[0xA8ED84] - v5 * (unsigned int)dword_ABCD44 / 0x3C - v4; /*0x6521af*/
    MEMORY[0xA8DB7C][a2] = (int)result; /*0x6521b2*/
  }
  else
  {
    MEMORY[0xA8DB7C][a2] = 0; /*0x652120*/
  }
  return result; /*0x65212b*/
}
}
} // namespace gamemd

// 0x6ABC40
namespace gamemd {
int sub_6ABC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6ABC40()
{
  int result; // eax

  result = MEMORY[0xA8B238][0]; /*0x6abc40*/
  if ( MEMORY[0xA8B238][0] ) /*0x6abc47*/
    MEMORY[0xA8EDA0] = 8; /*0x6abc49*/
  return result; /*0x6abc53*/
}
}
} // namespace gamemd

// 0x7B2730
namespace gamemd {
int sub_7B2730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7B2730()
{
  return dword_B780A0; /*0x7b2735*/
}
}
} // namespace gamemd

// 0x767310
namespace gamemd {
char sub_767310(int a1)
{
return 0;
}
} // namespace gamemd
