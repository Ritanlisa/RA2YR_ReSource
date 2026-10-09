// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x6516F0
namespace gamemd {
CellStruct * * LogMultiplayToSync_MPDEBUG(CellStruct * a1, unsigned char * a2, CellStruct * a3)
{
  int v3; // edx
  int v4; // ebx
  FILE *v5; // eax
  FILE *v6; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  char *v9; // eax
  char *v10; // eax
  char *Name; // eax
  unsigned int v12; // eax
  int i; // edi
  const char **v14; // eax
  const char *v15; // edi
  int v16; // ebp
  int *v17; // edi
  int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // ebp
  int v22; // edi
  bool v23; // cc
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  int v28; // ebp
  int v29; // edi
  int v30; // eax
  int v31; // ebp
  int v32; // edi
  int v33; // edi
  int *v34; // ebx
  int v35; // ebp
  const char *v36; // edi
  __int16 v37; // ax
  char *v38; // eax
  char *v39; // eax
  char v40; // al
  int v41; // ebp
  _DWORD *v42; // ebx
  const char *v43; // edi
  __int16 v44; // ax
  char *v45; // eax
  char *v46; // eax
  char v47; // al
  int v48; // eax
  unsigned __int8 *v49; // edi
  int v50; // [esp-Ch] [ebp-3BCh]
  int v51; // [esp-Ch] [ebp-3BCh]
  char *v52; // [esp-8h] [ebp-3B8h]
  const char *v53; // [esp-8h] [ebp-3B8h]
  const char *v54; // [esp+Ch] [ebp-3A4h] BYREF
  int v55; // [esp+10h] [ebp-3A0h]
  int v56; // [esp+14h] [ebp-39Ch]
  int v57; // [esp+18h] [ebp-398h] BYREF
  int v58; // [esp+1Ch] [ebp-394h] BYREF
  _DWORD *v59; // [esp+24h] [ebp-38Ch]
  int v60; // [esp+28h] [ebp-388h] BYREF
  unsigned __int8 *v61; // [esp+2Ch] [ebp-384h]
  char v62[128]; // [esp+30h] [ebp-380h] BYREF
  char Destination[128]; // [esp+B0h] [ebp-300h] BYREF
  char v64[128]; // [esp+130h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+1B0h] [ebp-200h] BYREF

  v61 = a2; /*0x651701*/
  v3 = *((_DWORD *)dword_A83D4C + 12); /*0x651709*/
  v56 = a1; /*0x65170c*/
  v4 = 828 * a1 + 11298400; /*0x65171e*/
  v59 = (_DWORD *)v4; /*0x65172d*/
  sprintf(Buffer, "SYNC%01d_%03d.TXT", v3, a1); /*0x651731*/
  Debug::Log(); /*0x651743*/
  v5 = fopen(Buffer, Mode); /*0x651755*/
  v6 = v5; /*0x65175a*/
  if ( v5 )
  {
    fprintf(v5, "RA2 Sync\n"); /*0x651788*/
    ModuleVersion = GetModuleVersion(); /*0x651790*/
    fprintf(v6, "\nVersion %s\n", ModuleVersion); /*0x65179c*/
    ModuleInternalVersion = GetModuleInternalVersion((int)&dword_A8ECE0); /*0x6517a9*/
    fprintf(v6, "Internal Version %s\n", ModuleInternalVersion); /*0x6517b5*/
    v62[0] = 0; /*0x6517c6*/
    Time::FormatDate(v62); /*0x6517cb*/
    v52 = String::CopyConstant(Destination); /*0x6517f2*/
    v9 = String::FormatDword(v64); /*0x6517f3*/
    fprintf(v6, "Release Build: %s by %s - %s\r\n", v9, v52, v62);
    v60 = 5; /*0x65180f*/
    IDA_HIBYTE(v57) = 0; /*0x65181b*/
    GetVersionString(&v60, (_BYTE *)&v57 + 3, 0, 0); /*0x651820*/
    v10 = (char *)&off_821F08; /*0x65182b*/
    if ( !IDA_HIBYTE(v57) ) /*0x651830*/
      v10 = g_INI_Key_No; /*0x651832*/
    v53 = v10; /*0x65183c*/
    Name = PlayerType::GetName(); /*0x65183d*/
    fprintf(v6, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v53, Source);
    fprintf(v6, "Frames: %d\n", dword_A8ED84);
    if ( dword_ABCD4C ) /*0x65186b*/
      v12 = dword_ABCD48 / (unsigned int)dword_ABCD4C; /*0x651874*/
    else
      v12 = 0; /*0x651878*/
    fprintf(v6, "Average FPS: %d\n", v12);
    fprintf(v6, "Max MaxAhead: %d\n", dword_A8B568);
    fprintf(v6, "Latency setting: %d\n", dword_A8DB9C);
    fprintf(v6, "Game speed setting: %d\n", *(_DWORD *)dword_A8EB60);
    fprintf(v6, "FrameSendRate: %d\n", dword_A8B554);
    fprintf(v6, "\nFrame: %d\n", dword_AC6664[207 * a1 + 1]);
    fprintf(v6, "Slot: %d\n", a1);
    if ( dword_887628 )
    {
      for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)dword_887628 + 72))(dword_887628); ++i )
      {
        v14 = (const char **)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_887628 + 76))(dword_887628, i); /*0x65190c*/
        if ( v14 )
        {
          v54 = *v14; /*0x651919*/
          fprintf(
            v6,
            "Local address: %d.%d.%d.%d\n",
            (unsigned __int8)v54,
            IDA_BYTE1(v54),
            IDA_BYTE2(v54),
            (unsigned int)v54 >> 24);
        }
      }
    }
    v15 = (const char *)&unk_A8B5C4; /*0x651950*/
    do
    {
      if ( *(v15 - 80) )
      {
        Network::CopyAddress((_DWORD *)v15 + 3, &v54, (int)&v58); /*0x651970*/
        fprintf(v6, "\nName: %s\n", v15 - 80);
        fprintf(v6, "Address: %d.%d.%d.%d\n", (unsigned __int8)v58, IDA_BYTE1(v58), IDA_BYTE2(v58), IDA_HIBYTE(v58));
        fprintf(v6, "Max avg round trip: %d\n", *(_DWORD *)v15);
        fprintf(v6, "Max round trip: %d\n", *((_DWORD *)v15 - 4));
        fprintf(v6, "Resends: %d\n", *((_DWORD *)v15 - 3));
        fprintf(v6, "Frame sync stalls: %d\n", *((_DWORD *)v15 + 1));
        fprintf(v6, "Command cound stalls: %d\n", *((_DWORD *)v15 + 2));
        fprintf(v6, "Lost: %d\n", *((_DWORD *)v15 - 2));
        fprintf(v6, "Percent lost: %d\n", *((_DWORD *)v15 - 1));
      }
      v15 += 104; /*0x651a25*/
    }
    while ( (int)v15 < (int)dword_A8B904 );
    v16 = 0; /*0x651a34*/
    v17 = dword_B04474; /*0x651a36*/
    do /*0x651a68*/
    {
      if ( v16 == v56 ) /*0x651a3f*/
        fprintf(v6, "CRC[%d]=%x  *****\n", v16, *v17); /*0x651a4a*/
      else
        fprintf(v6, "CRC[%d]=%x\n", v16, *v17); /*0x651a56*/
      ++v17; /*0x651a5e*/
      ++v16; /*0x651a61*/
    }
    while ( (int)v17 < (int)&dword_B04874 ); /*0x651a68*/
    v56 = 0; /*0x651a6a*/
    v18 = v4 + 68; /*0x651a72*/
    v19 = 8; /*0x651a75*/
    do
    {
      v20 = *(_DWORD *)v18; /*0x651a7a*/
      if ( *(_DWORD *)v18 != -1 )
      {
        v56 = *(_DWORD *)v18; /*0x651a84*/
        fprintf(
          v6,
          "%s: IsHuman:%d  Color:%s  ID:%d  HouseType:%s\n",
          (const char *)(v18 - 56),
          *(unsigned __int8 *)(v18 - 36),
          (const char *)(v18 - 35),
          v20,
          (const char *)(v18 + 4));
      }
      v18 += 92; /*0x651aa6*/
      --v19; /*0x651aa9*/
    }
    while ( v19 );
    v58 = *(_DWORD *)(v4 + 768); /*0x651ab8*/
    v55 = 0; /*0x651abc*/
    if ( v56 > 0 ) /*0x651ac4*/
    {
      v54 = (const char *)(v4 + 12); /*0x651acd*/
      do /*0x651b6b*/
      {
        if ( *((_DWORD *)v54 + 14) != -1 ) /*0x651ad9*/
        {
          fprintf(v6, "-------------------- %s Infantry -------------------\n", v54); /*0x651ae4*/
          v21 = 0; /*0x651af2*/
          if ( *(int *)(v4 + 752) > 0 ) /*0x651af6*/
          {
            v22 = v58 + 64; /*0x651afc*/
            do /*0x651b4f*/
            {
              if ( *(char *)(v22 - 32) == v55 ) /*0x651b07*/
                fprintf( /*0x651b3b*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d) Speed:%d NavCom:%s(%d)\n",
                  *(_DWORD *)(v22 - 64),
                  *(unsigned __int8 *)(v22 + 36),
                  *(unsigned __int8 *)(v22 + 38),
                  *(_DWORD *)(v22 - 60),
                  (const char *)(v22 - 56),
                  (const char *)(v22 - 24),
                  *(_DWORD *)(v22 - 28),
                  *(char *)(v22 + 39),
                  (const char *)(v22 + 4),
                  *(_DWORD *)v22);
              v22 += 104; /*0x651b49*/
              ++v21; /*0x651b4c*/
            }
            while ( v21 < *(_DWORD *)(v4 + 752) ); /*0x651b4f*/
          }
        }
        v23 = ++v55 < v56; /*0x651b61*/
        v54 += 92; /*0x651b67*/
      }
      while ( v23 ); /*0x651b6b*/
    }
    v24 = *(_DWORD *)(v4 + 752); /*0x651b71*/
    v55 = 0; /*0x651b77*/
    v58 += 104 * v24; /*0x651b92*/
    if ( v56 > 0 ) /*0x651b96*/
    {
      v54 = (const char *)(v4 + 12); /*0x651b9f*/
      do /*0x651c50*/
      {
        if ( *((_DWORD *)v54 + 14) != -1 ) /*0x651bab*/
        {
          fprintf(v6, "-------------------- %s Units -------------------\n", v54); /*0x651bba*/
          v25 = 0; /*0x651bc8*/
          if ( *(int *)(v4 + 756) > 0 ) /*0x651bcc*/
          {
            v26 = v58 + 92; /*0x651bd2*/
            do /*0x651c34*/
            {
              if ( *(char *)(v26 - 60) == v55 ) /*0x651bdd*/
                fprintf( /*0x651c20*/
                  v6,
                  "COORD:%x   Facing:%d   Facing2:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)  NavCom:%s(%d)   TrkNum:%d T"
                  "rkInd:%d SpdAc:%d\n",
                  *(_DWORD *)(v26 - 92),
                  *(unsigned __int8 *)(v26 + 8),
                  *(unsigned __int8 *)(v26 + 9),
                  *(unsigned __int8 *)(v26 + 10),
                  *(_DWORD *)(v26 - 88),
                  (const char *)(v26 - 84),
                  (const char *)(v26 - 52),
                  *(_DWORD *)(v26 - 56),
                  (const char *)(v26 - 24),
                  *(_DWORD *)(v26 - 28),
                  *(__int16 *)(v26 + 4),
                  *(__int16 *)(v26 + 6),
                  *(_DWORD *)v26);
              v26 += 104; /*0x651c2e*/
              ++v25; /*0x651c31*/
            }
            while ( v25 < *(_DWORD *)(v4 + 756) ); /*0x651c34*/
          }
        }
        v23 = ++v55 < v56; /*0x651c46*/
        v54 += 92; /*0x651c4c*/
      }
      while ( v23 ); /*0x651c50*/
    }
    v27 = *(_DWORD *)(v4 + 756); /*0x651c56*/
    v55 = 0; /*0x651c60*/
    v58 += 104 * v27; /*0x651c77*/
    if ( v56 > 0 ) /*0x651c7b*/
    {
      v54 = (const char *)(v4 + 12); /*0x651c84*/
      do /*0x651d1d*/
      {
        if ( *((_DWORD *)v54 + 14) != -1 ) /*0x651c90*/
        {
          fprintf(v6, "-------------------- %s Aircraft -------------------\n", v54); /*0x651c9b*/
          v28 = 0; /*0x651ca9*/
          if ( *(int *)(v4 + 760) > 0 ) /*0x651cad*/
          {
            v29 = v58 + 64; /*0x651cb3*/
            do /*0x651d01*/
            {
              if ( *(char *)(v29 - 32) == v55 ) /*0x651cbe*/
                fprintf( /*0x651ced*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)  NavCom:%s(%d)\n",
                  *(_DWORD *)(v29 - 64),
                  *(unsigned __int8 *)(v29 + 36),
                  *(unsigned __int8 *)(v29 + 38),
                  *(_DWORD *)(v29 - 60),
                  (const char *)(v29 - 56),
                  (const char *)(v29 - 24),
                  *(_DWORD *)(v29 - 28),
                  (const char *)(v29 + 4),
                  *(_DWORD *)v29);
              v29 += 104; /*0x651cfb*/
              ++v28; /*0x651cfe*/
            }
            while ( v28 < *(_DWORD *)(v4 + 760) ); /*0x651d01*/
          }
        }
        v23 = ++v55 < v56; /*0x651d13*/
        v54 += 92; /*0x651d19*/
      }
      while ( v23 ); /*0x651d1d*/
    }
    v30 = *(_DWORD *)(v4 + 760); /*0x651d23*/
    v55 = 0; /*0x651d2d*/
    v58 += 104 * v30; /*0x651d44*/
    if ( v56 > 0 ) /*0x651d48*/
    {
      v54 = (const char *)(v4 + 12); /*0x651d51*/
      do /*0x651de2*/
      {
        if ( *((_DWORD *)v54 + 14) != -1 ) /*0x651d5d*/
        {
          fprintf(v6, "-------------------- %s Buildings -------------------\n", v54); /*0x651d68*/
          v31 = 0; /*0x651d76*/
          if ( *(int *)(v4 + 764) > 0 ) /*0x651d7a*/
          {
            v32 = v58 + 36; /*0x651d80*/
            do /*0x651dc6*/
            {
              if ( *(char *)(v32 - 4) == v55 ) /*0x651d8b*/
                fprintf( /*0x651db2*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)\n",
                  *(_DWORD *)(v32 - 36),
                  *(unsigned __int8 *)(v32 + 64),
                  *(unsigned __int8 *)(v32 + 66),
                  *(_DWORD *)(v32 - 32),
                  (const char *)(v32 - 28),
                  (const char *)(v32 + 4),
                  *(_DWORD *)v32);
              v32 += 104; /*0x651dc0*/
              ++v31; /*0x651dc3*/
            }
            while ( v31 < *(_DWORD *)(v4 + 764) ); /*0x651dc6*/
          }
        }
        v23 = ++v55 < v56; /*0x651dd8*/
        v54 += 92; /*0x651dde*/
      }
      while ( v23 ); /*0x651de2*/
    }
    v33 = 0; /*0x651dec*/
    v56 = 0; /*0x651dee*/
    v34 = v59 + 193; /*0x651df2*/
    do
    {
      fprintf(v6, ">>>> MAP LAYER %d <<<<\n", v33); /*0x651dff*/
      v35 = 0; /*0x651e06*/
      if ( *v34 > 0 )
      {
        v54 = 0; /*0x651e13*/
        do
        {
          v36 = &v54[v34[5]]; /*0x651e1e*/
          fprintf(v6, "Object %d: %x ", v35, *(_DWORD *)v36);
          v37 = *((_WORD *)v36 + 18); /*0x651e2f*/
          if ( v37 == 43 || v37 == 19 ) /*0x651e40*/
          {
            v39 = AbstractType::FindName((void *)v37); /*0x651e68*/
            fprintf(v6, "%s\t(Type:%d) ", v39, 0); /*0x651e74*/
          }
          else
          {
            v50 = *((_DWORD *)v36 + 1); /*0x651e49*/
            v38 = AbstractType::FindName((void *)v37); /*0x651e4d*/
            fprintf(v6, "%s\t(Type:%d(%s)) ", v38, v50, v36 + 8); /*0x651e59*/
          }
          v40 = v36[32]; /*0x651e7c*/
          if ( v40 == -1 )
            fprintf(v6, "Owner: None\n");
          else
            fprintf(v6, "Owner: %s\n", (const char *)&v59[23 * v40 + 3]);
          v23 = ++v35 < *v34; /*0x651ebf*/
          v54 += 40; /*0x651ec1*/
        }
        while ( v23 );
        v33 = v56; /*0x651ecb*/
      }
      ++v33; /*0x651ecf*/
      ++v34; /*0x651ed0*/
      v56 = v33; /*0x651ed6*/
    }
    while ( v33 < 5 );
    fprintf(v6, ">>>> LOGIC LAYER <<<<\n"); /*0x651ee6*/
    v41 = 0; /*0x651eef*/
    if ( (int)v59[203] > 0 )
    {
      v54 = 0; /*0x651f00*/
      do
      {
        v42 = v59; /*0x651f04*/
        v43 = &v54[v59[204]]; /*0x651f0c*/
        fprintf(v6, "Object %d: %x ", v41, *(_DWORD *)v43);
        v44 = *((_WORD *)v43 + 18); /*0x651f21*/
        if ( v44 == 43 || v44 == 19 ) /*0x651f32*/
        {
          v46 = AbstractType::FindName((void *)v44); /*0x651f5a*/
          fprintf(v6, "%s\t(Type:%d) ", v46, 0); /*0x651f66*/
        }
        else
        {
          v51 = *((_DWORD *)v43 + 1); /*0x651f3b*/
          v45 = AbstractType::FindName((void *)v44); /*0x651f3f*/
          fprintf(v6, "%s\t(Type:%d(%s)) ", v45, v51, v43 + 8); /*0x651f4b*/
        }
        v47 = v43[32]; /*0x651f6e*/
        if ( v47 == -1 )
          fprintf(v6, "Owner: None\n");
        else
          fprintf(v6, "Owner: %s\n", (const char *)&v42[23 * v47 + 3]);
        v48 = v42[203]; /*0x651fa7*/
        ++v41; /*0x651fad*/
        v54 += 40; /*0x651fb3*/
      }
      while ( v41 < v48 );
    }
    fprintf(v6, "\nRandom Number:%d\n", v59[1]); /*0x651fcb*/
    v49 = v61; /*0x651fd0*/
    if ( v61 )
    {
      fprintf(v6, "Offending event:\n"); /*0x651fe2*/
      fprintf(v6, "Type:         %d\n", *v49);
      fprintf(v6, "Frame:        %d\n", *(_DWORD *)(v49 + 3));
      fprintf(v6, "ID:           %x\n", (char)v49[2]);
      fprintf(v6, "CRC:          %x\n", *(_DWORD *)(v49 + 7));
      fprintf(v6, "CommandCount: %d\n", *(unsigned __int16 *)(v49 + 11));
      fprintf(v6, "Delay:        %d\n", v49[13]);
    }
    fclose(v6); /*0x65204f*/
  }
  else
  {
    GetLastError(); /*0x651764*/
    Debug::Log(); /*0x651770*/
  }
}
}