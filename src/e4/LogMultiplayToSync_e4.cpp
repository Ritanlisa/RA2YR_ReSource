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
namespace gamemd {  // G42.18 ns repair
CellStruct * * LogMultiplayToSync_MPDEBUG(CellStruct * a1, unsigned char * a2, CellStruct * a3)
{
  bool v23; // cc
  int v48; // eax
  const char *v54; // [esp+Ch] [ebp-3A4h] BYREF
  CellStruct * v56;
  int v57; // [esp+18h] [ebp-398h] BYREF
  int v58; // [esp+1Ch] [ebp-394h] BYREF
  unsigned int *v59; // [esp+24h] [ebp-38Ch]
  int v60; // [esp+28h] [ebp-388h] BYREF
  uint8_t *v61; // [esp+2Ch] [ebp-384h]
  char v62[128]; // [esp+30h] [ebp-380h] BYREF
  char Destination[128]; // [esp+B0h] [ebp-300h] BYREF
  char v64[128]; // [esp+130h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+1B0h] [ebp-200h] BYREF

  v61 = (uint8_t *)((int)(a2));
  int v3; // edx
  v3 = dword_A83D4C->relatedTagsCount; /*0x651709*/
  v56 = (gamemd::CellStruct *)((int)(a1)); /*0x65170c*/
  int v4; // ebx
  v4 = 828 * a1 + 11298400; /*0x65171e*/
  v59 = (unsigned int *)v4; /*0x65172d*/
  sprintf(Buffer, "SYNC%01d_%03d.TXT", v3, a1); /*0x651731*/
  Debug::Log(); /*0x651743*/
  FILE *v5; // eax
  v5 = fopen(Buffer, Mode); /*0x651755*/
  FILE *v6; // esi
  v6 = v5; /*0x65175a*/
  if ( v5 )
  {
    fprintf(v5, "RA2 Sync\n"); /*0x651788*/
  char *ModuleVersion; // eax
    ModuleVersion = (char *)(GetModuleVersion()); /*0x651790*/
    fprintf(v6, "\nVersion %s\n", ModuleVersion); /*0x65179c*/
  char *ModuleInternalVersion; // eax
    ModuleInternalVersion = GetModuleInternalVersion((void*)(&dword_A8ECE0)); /*0x6517a9*/
    fprintf(v6, "Internal Version %s\n", ModuleInternalVersion); /*0x6517b5*/
    v62[0] = 0; /*0x6517c6*/
    ((Time *)(v62))->FormatDate(); /*0x6517cb*/
  char *v52; // [esp-8h] [ebp-3B8h]
    v52 = (char *)(((String *)(Destination))->CopyConstant()); /*0x6517f2*/
  char *v9; // eax
    v9 = (char *)(((String *)(v64))->FormatDword()); /*0x6517f3*/
    fprintf(v6, "Release Build: %s by %s - %s\r\n", v9, v52, v62);
    v60 = (int)((char *)(5));
    (*(((unsigned char *)&(v57)) + (sizeof(v57) - 1))) = 0; /*0x65181b*/
    GetVersionString((unsigned int *)(&v60), (unsigned char *)&v57 + 3, 0, 0); /*0x651820*/
  char *v10; // eax
    v10 = (char *)&off_821F08; /*0x65182b*/
    if ( !(*(((unsigned char *)&(v57)) + (sizeof(v57) - 1))) ) /*0x651830*/
      v10 = (char *)(g_INI_Key_No); /*0x651832*/
  const char *v53; // [esp-8h] [ebp-3B8h]
    v53 = v10; /*0x65183c*/
  char *Name; // eax
    Name = this->PlayerType::GetName(); /*0x65183d*/
    fprintf(v6, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v53, Source);
    fprintf(v6, "Frames: %d\n", dword_A8ED84);
  unsigned int v12; // eax
    if ( dword_ABCD4C ) /*0x65186b*/
      v12 = dword_ABCD48 / (unsigned int)dword_ABCD4C; /*0x651874*/
    else
      v12 = 0; /*0x651878*/
    fprintf(v6, "Average FPS: %d\n", v12);
    fprintf(v6, "Max MaxAhead: %d\n", dword_A8B568);
    fprintf(v6, "Latency setting: %d\n", dword_A8DB9C);
    fprintf(v6, "Game speed setting: %d\n", *(unsigned int *)dword_A8EB60);
    fprintf(v6, "FrameSendRate: %d\n", dword_A8B554);
    fprintf(v6, "\nFrame: %d\n", dword_AC6664[207 * a1 + 1]);
    fprintf(v6, "Slot: %d\n", a1);
    if ( dword_887628 )
    {
  int i; // edi
      for ( i = 0; i < (*(int (**)(int))(*(unsigned int *)dword_887628 + 72))(dword_887628); ++i )
      {
  const char **v14; // eax
        v14 = (const char **)(*(int (**)(int, int))(*(unsigned int *)dword_887628 + 76))(dword_887628, i); /*0x65190c*/
        if ( v14 )
        {
          v54 = *v14; /*0x651919*/
          fprintf(
            v6,
            "Local address: %d.%d.%d.%d\n",
            (uint8_t)v54,
            (((unsigned char *)&(v54))[1]),
            (((unsigned char *)&(v54))[2]),
            (unsigned int)v54 >> 24);
        }
      }
    }
  const char *v15; // edi
    v15 = (const char *)&unk_A8B5C4; /*0x651950*/
    do
    {
      if ( *(v15 - 80) )
      {
        ((Network *)((unsigned int *)v15 + 3))->CopyAddress((unsigned int *)(&v54), (int)&v58); /*0x651970*/
        fprintf(v6, "\nName: %s\n", v15 - 80);
        fprintf(v6, "Address: %d.%d.%d.%d\n", (uint8_t)v58, (((unsigned char *)&(v58))[1]), (((unsigned char *)&(v58))[2]), (*(((unsigned char *)&(v58)) + (sizeof(v58) - 1))));
        fprintf(v6, "Max avg round trip: %d\n", *(unsigned int *)v15);
        fprintf(v6, "Max round trip: %d\n", *((unsigned int *)v15 - 4));
        fprintf(v6, "Resends: %d\n", *((unsigned int *)v15 - 3));
        fprintf(v6, "Frame sync stalls: %d\n", *((unsigned int *)v15 + 1));
        fprintf(v6, "Command cound stalls: %d\n", *((unsigned int *)v15 + 2));
        fprintf(v6, "Lost: %d\n", *((unsigned int *)v15 - 2));
        fprintf(v6, "Percent lost: %d\n", *((unsigned int *)v15 - 1));
      }
      v15 += 104; /*0x651a25*/
    }
    while ( (int)v15 < (int)dword_A8B904 );
  int v16; // ebp
    v16 = (int)((int *)(0));
  int *v17; // edi
    v17 = (int *)(dword_B04474); /*0x651a36*/
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
  int v18; // edi
    v18 = v4 + 68; /*0x651a72*/
  int v19; // ebp
    v19 = 8; /*0x651a75*/
    do
    {
  int v20; // eax
      v20 = *(unsigned int *)v18; /*0x651a7a*/
      if ( *(unsigned int *)v18 != -1 )
      {
        v56 = (gamemd::CellStruct *)(*(unsigned int *)v18); /*0x651a84*/
        fprintf(
          v6,
          "%s: IsHuman:%d  Color:%s  ID:%d  HouseType:%s\n",
          (const char *)(v18 - 56),
          *(uint8_t *)(v18 - 36),
          (const char *)(v18 - 35),
          v20,
          (const char *)(v18 + 4));
      }
      v18 += 92; /*0x651aa6*/
      --v19; /*0x651aa9*/
    }
    while ( v19 );
    v58 = v4->q300; /*0x651ab8*/
  int v55; // [esp+10h] [ebp-3A0h]
    v55 = 0; /*0x651abc*/
    if ( v56 > 0 ) /*0x651ac4*/
    {
      v54 = &v4->vtable4; /*0x651acd*/
      do /*0x651b6b*/
      {
        if ( *((unsigned int *)v54 + 14) != -1 ) /*0x651ad9*/
        {
          fprintf(v6, "-------------------- %s Infantry -------------------\n", v54); /*0x651ae4*/
  int v21; // ebp
          v21 = 0; /*0x651af2*/
          if ( v4->u32_2F0 > 0 ) /*0x651af6*/
          {
  int v22; // edi
            v22 = v58 + 64; /*0x651afc*/
            do /*0x651b4f*/
            {
              if ( *(char *)(v22 - 32) == v55 ) /*0x651b07*/
                fprintf( /*0x651b3b*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d) Speed:%d NavCom:%s(%d)\n",
                  *(unsigned int *)(v22 - 64),
                  *(uint8_t *)(v22 + 36),
                  *(uint8_t *)(v22 + 38),
                  *(unsigned int *)(v22 - 60),
                  (const char *)(v22 - 56),
                  (const char *)(v22 - 24),
                  *(unsigned int *)(v22 - 28),
                  *(char *)(v22 + 39),
                  (const char *)(v22 + 4),
                  *(unsigned int *)v22);
              v22 += 104; /*0x651b49*/
              ++v21; /*0x651b4c*/
            }
            while ( v21 < v4->u32_2F0 ); /*0x651b4f*/
          }
        }
        v23 = ++v55 < v56; /*0x651b61*/
        v54 += 92; /*0x651b67*/
      }
      while ( v23 ); /*0x651b6b*/
    }
  int v24; // eax
    v24 = v4->u32_2F0; /*0x651b71*/
    v55 = 0; /*0x651b77*/
    v58 += 104 * v24; /*0x651b92*/
    if ( v56 > 0 ) /*0x651b96*/
    {
      v54 = &v4->vtable4; /*0x651b9f*/
      do /*0x651c50*/
      {
        if ( *((unsigned int *)v54 + 14) != -1 ) /*0x651bab*/
        {
          fprintf(v6, "-------------------- %s Units -------------------\n", v54); /*0x651bba*/
  int v25; // ebp
          v25 = 0; /*0x651bc8*/
          if ( v4->u32_2F4 > 0 ) /*0x651bcc*/
          {
  int v26; // edi
            v26 = v58 + 92; /*0x651bd2*/
            do /*0x651c34*/
            {
              if ( *(char *)(v26 - 60) == v55 ) /*0x651bdd*/
                fprintf( /*0x651c20*/
                  v6,
                  "COORD:%x   Facing:%d   Facing2:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)  NavCom:%s(%d)   TrkNum:%d T"
                  "rkInd:%d SpdAc:%d\n",
                  *(unsigned int *)(v26 - 92),
                  v26->vtable3,
                  v26->u32_9,
                  v26->u32_A,
                  *(unsigned int *)(v26 - 88),
                  (const char *)(v26 - 84),
                  (const char *)(v26 - 52),
                  *(unsigned int *)(v26 - 56),
                  (const char *)(v26 - 24),
                  *(unsigned int *)(v26 - 28),
                  v26->vtable2,
                  v26->u32_6,
                  *(unsigned int *)v26);
              v26 += 104; /*0x651c2e*/
              ++v25; /*0x651c31*/
            }
            while ( v25 < *(unsigned int *)(v4 + 756) ); /*0x651c34*/
          }
        }
        v23 = ++v55 < v56; /*0x651c46*/
        v54 += 92; /*0x651c4c*/
      }
      while ( v23 ); /*0x651c50*/
    }
  int v27; // eax
    v27 = *&v4->u32_2F4; /*0x651c56*/
    v55 = 0; /*0x651c60*/
    v58 += 104 * v27; /*0x651c77*/
    if ( v56 > 0 ) /*0x651c7b*/
    {
      v54 = (const char *)(v4 + 12); /*0x651c84*/
      do /*0x651d1d*/
      {
        if ( *((unsigned int *)v54 + 14) != -1 ) /*0x651c90*/
        {
          fprintf(v6, "-------------------- %s Aircraft -------------------\n", v54); /*0x651c9b*/
  int v28; // ebp
          v28 = 0; /*0x651ca9*/
          if ( *(int *)(v4 + 760) > 0 ) /*0x651cad*/
          {
  int v29; // edi
            v29 = v58 + 64; /*0x651cb3*/
            do /*0x651d01*/
            {
              if ( *(char *)(v29 - 32) == v55 ) /*0x651cbe*/
                fprintf( /*0x651ced*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)  NavCom:%s(%d)\n",
                  *(unsigned int *)(v29 - 64),
                  *(uint8_t *)(v29 + 36),
                  *(uint8_t *)(v29 + 38),
                  *(unsigned int *)(v29 - 60),
                  (const char *)(v29 - 56),
                  (const char *)(v29 - 24),
                  *(unsigned int *)(v29 - 28),
                  (const char *)(v29 + 4),
                  *(unsigned int *)v29);
              v29 += 104; /*0x651cfb*/
              ++v28; /*0x651cfe*/
            }
            while ( v28 < *(unsigned int *)(v4 + 760) ); /*0x651d01*/
          }
        }
        v23 = ++v55 < v56; /*0x651d13*/
        v54 += 92; /*0x651d19*/
      }
      while ( v23 ); /*0x651d1d*/
    }
  int v30; // eax
    v30 = *&v4->u32_2F8; /*0x651d23*/
    v55 = 0; /*0x651d2d*/
    v58 += 104 * v30; /*0x651d44*/
    if ( v56 > 0 ) /*0x651d48*/
    {
      v54 = (const char *)(v4 + 12); /*0x651d51*/
      do /*0x651de2*/
      {
        if ( *((unsigned int *)v54 + 14) != -1 ) /*0x651d5d*/
        {
          fprintf(v6, "-------------------- %s Buildings -------------------\n", v54); /*0x651d68*/
  int v31; // ebp
          v31 = 0; /*0x651d76*/
          if ( *(int *)(v4 + 764) > 0 ) /*0x651d7a*/
          {
  int v32; // edi
            v32 = v58 + 36; /*0x651d80*/
            do /*0x651dc6*/
            {
              if ( *(char *)(v32 - 4) == v55 ) /*0x651d8b*/
                fprintf( /*0x651db2*/
                  v6,
                  "COORD:%x   Facing:%d   Mission:%d   Type:%d(%s)   Tgt:%s(%d)\n",
                  *(unsigned int *)(v32 - 36),
                  *(uint8_t *)(v32 + 64),
                  *(uint8_t *)(v32 + 66),
                  *(unsigned int *)(v32 - 32),
                  (const char *)(v32 - 28),
                  (const char *)(v32 + 4),
                  *(unsigned int *)v32);
              v32 += 104; /*0x651dc0*/
              ++v31; /*0x651dc3*/
            }
            while ( v31 < *(unsigned int *)(v4 + 764) ); /*0x651dc6*/
          }
        }
        v23 = ++v55 < v56; /*0x651dd8*/
        v54 += 92; /*0x651dde*/
      }
      while ( v23 ); /*0x651de2*/
    }
  int v33; // edi
    v33 = (int)((int *)(0));
    v56 = 0; /*0x651dee*/
  int *v34; // ebx
    v34 = (int *)(v59 + 193); /*0x651df2*/
    do
    {
      fprintf(v6, ">>>> MAP LAYER %d <<<<\n", v33); /*0x651dff*/
  int v35; // ebp
      v35 = 0; /*0x651e06*/
      if ( *v34 > 0 )
      {
        v54 = 0; /*0x651e13*/
        do
        {
  const char *v36; // edi
          v36 = &v54[v34[5]]; /*0x651e1e*/
          fprintf(v6, "Object %d: %x ", v35, *(unsigned int *)v36);
  int16_t v37; // ax
          v37 = v36->u32_24; /*0x651e2f*/
          if ( v37 == 43 || v37 == 19 ) /*0x651e40*/
          {
  char *v39; // eax
            v39 = AbstractType::FindName((void *)v37); /*0x651e68*/
            fprintf(v6, "%s\t(Type:%d) ", v39, 0); /*0x651e74*/
          }
          else
          {
  int v50; // [esp-Ch] [ebp-3BCh]
            v50 = v36->vtable2; /*0x651e49*/
  char *v38; // eax
            v38 = AbstractType::FindName((void *)v37); /*0x651e4d*/
            fprintf(v6, "%s\t(Type:%d(%s)) ", v38, v50, v36 + 8); /*0x651e59*/
          }
  char v40; // al
          v40 = v36[32]; /*0x651e7c*/
          if ( v40 == -1 )
            fprintf(v6, "Owner: None\n");
          else
            fprintf(v6, "Owner: %s\n", (const char *)&v59[23 * v40 + 3]);
          v23 = ++v35 < *v34; /*0x651ebf*/
          v54 += 40; /*0x651ec1*/
        }
        while ( v23 );
        v33 = (int)(v56); /*0x651ecb*/
      }
      ++v33; /*0x651ecf*/
      ++v34; /*0x651ed0*/
      v56 = (gamemd::CellStruct *)(v33); /*0x651ed6*/
    }
    while ( v33 < 5 );
    fprintf(v6, ">>>> LOGIC LAYER <<<<\n"); /*0x651ee6*/
  int v41; // ebp
    v41 = 0; /*0x651eef*/
    if ( (int)v59[203] > 0 )
    {
      v54 = 0; /*0x651f00*/
      do
      {
  unsigned int *v42; // ebx
        v42 = v59; /*0x651f04*/
  const char *v43; // edi
        v43 = &v54[v59[204]]; /*0x651f0c*/
        fprintf(v6, "Object %d: %x ", v41, *(unsigned int *)v43);
  int16_t v44; // ax
        v44 = *((unsigned short *)v43 + 18); /*0x651f21*/
        if ( v44 == 43 || v44 == 19 ) /*0x651f32*/
        {
  char *v46; // eax
          v46 = AbstractType::FindName((void *)v44); /*0x651f5a*/
          fprintf(v6, "%s\t(Type:%d) ", v46, 0); /*0x651f66*/
        }
        else
        {
  int v51; // [esp-Ch] [ebp-3BCh]
          v51 = *((unsigned int *)v43 + 1); /*0x651f3b*/
  char *v45; // eax
          v45 = AbstractType::FindName((void *)v44); /*0x651f3f*/
          fprintf(v6, "%s\t(Type:%d(%s)) ", v45, v51, v43 + 8); /*0x651f4b*/
        }
  char v47; // al
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
  uint8_t *v49; // edi
    v49 = v61; /*0x651fd0*/
    if ( v61 )
    {
      fprintf(v6, "Offending event:\n"); /*0x651fe2*/
      fprintf(v6, "Type:         %d\n", *v49);
      fprintf(v6, "Frame:        %d\n", *(unsigned int *)(v49 + 3));
      fprintf(v6, "ID:           %x\n", (char)v49[2]);
      fprintf(v6, "CRC:          %x\n", *(unsigned int *)(v49 + 7));
      fprintf(v6, "CommandCount: %d\n", *(uint16_t *)(v49 + 11));
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
}  // G42.18 ns repair