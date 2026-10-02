// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/FileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7436E0_e4.hpp"
#include "e4/classes/E4Recv_7490C0_e4.hpp"
#include "e4/classes/E4Recv_74BBA0_e4.hpp"
#include "e4/classes/E4Recv_74BBF0_e4.hpp"
#include "e4/classes/E4Recv_74BCA0_e4.hpp"
#include "e4/classes/E4Recv_74BDC0_e4.hpp"
#include "e4/classes/E4Recv_74BF40_e4.hpp"
#include "e4/classes/E4Recv_74E1C0_e4.hpp"
#include "e4/classes/E4Recv_74EA70_e4.hpp"
#include "e4/classes/E4Recv_74F63A_e4.hpp"
#include "e4/classes/E4Recv_74F730_e4.hpp"
#include "e4/classes/E4Recv_74FAE0_e4.hpp"
#include "e4/classes/__e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/BitArray_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"

// 0x743270
namespace gamemd {
Coord * * PlaceScenarioUnits(void * a1, void * a2)
{
  INIClass *v2; // esi
  int KeyCount; // eax
  int v4; // ecx
  uint8_t *StringByIndex; // eax
  char *v6; // eax
  int v7; // esi
  char *v8; // eax
  int Index; // edi
  void *v10; // esi
  int *v11; // eax
  int v12; // esi
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // ebp
  char *v21; // eax
  int v22; // ebx
  char *v23; // eax
  TeamClass *v24; // eax
  int v25; // eax
  char *v26; // eax
  int v27; // eax
  char *v28; // eax
  char *v29; // eax
  bool v30; // al
  char *v31; // eax
  int v32; // edi
  int v33; // eax
  char *v34; // eax
  char *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // edi
  int v39; // eax
  unsigned int v40; // edi
  int i; // ecx
  unsigned int v42; // eax
  int v43; // edx
  int v44; // eax
  void* v46;
  void *Block; // [esp+18h] [ebp-BCh]
  int v48; // [esp+1Ch] [ebp-B8h]
  char v49; // [esp+20h] [ebp-B4h]
  char v50; // [esp+21h] [ebp-B3h]
  int v51; // [esp+24h] [ebp-B0h]
  int v52; // [esp+28h] [ebp-ACh]
  int v53; // [esp+2Ch] [ebp-A8h]
  int v54; // [esp+30h] [ebp-A4h]
  int v55; // [esp+34h] [ebp-A0h]
  int v56; // [esp+38h] [ebp-9Ch]
  INIClass *v57; // [esp+3Ch] [ebp-98h]
  unsigned int v58[2]; // [esp+40h] [ebp-94h] BYREF
  int v59; // [esp+48h] [ebp-8Ch]
  int v60; // [esp+4Ch] [ebp-88h]
  int v61; // [esp+50h] [ebp-84h]
  char String[128]; // [esp+54h] [ebp-80h] BYREF

  v2 = (gamemd::INIClass *)(a1);
  v57 = (gamemd::INIClass *)(a1);
  INIClass::ResetSection(a1); /*0x74327f*/
  Block = 0; /*0x74328e*/
  v49 = 1; /*0x743292*/
  v46 = (void*)&DynamicVectorClass_int_vftable; /*0x743297*/
  v52 = 10; /*0x74329f*/
  v51 = 0; /*0x7432a7*/
  v50 = 0; /*0x7432ab*/
  v48 = 0; /*0x7432af*/
  KeyCount = INIClass::GetKeyCount(v2->__pad_0, (uint8_t *)aUnits); /*0x7432b3*/
  v4 = 0; /*0x7432b8*/
  v61 = KeyCount; /*0x7432bc*/
  v54 = 0; /*0x7432c0*/
  if ( KeyCount > 0 ) /*0x7432c4*/
  {
    while ( 1 ) /*0x7432dd*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v2->__pad_0, (uint8_t *)aUnits, v4); /*0x7432dd*/
      INIClass::GetString(v2, (uint8_t *)aUnits, StringByIndex, 0, String, 128); /*0x7432f6*/
      v6 = strtok(String, Str); /*0x743305*/
      v7 = ((HouseClass *)(v6))->FindByName(); /*0x743314*/
      if ( v7 != -1 ) /*0x743319*/
      {
        v8 = strtok(0, Str); /*0x743325*/
        Index = ((BuildingTypeClass *)((BuildingTypeClass *)v8))->FindIndex(); /*0x74333a*/
        v10 = (void *)*((unsigned int *)((char *)&stru_A80220) + v7); /*0x74333f*/
        if ( Index != -1 ) /*0x743342*/
        {
          v11 = (int *)RA2_OPNEW(0x8E8u); /*0x74334d*/
          if ( v11 ) /*0x743357*/
          {
            v12 = ((UnitClass *)(v11))->Construct(*((unsigned int *)dword_A83CE4 + Index), v10); /*0x74336f*/
            if ( v12 ) /*0x743373*/
            {
              v13 = strtok(0, Str); /*0x74337f*/
              v60 = atoi(v13); /*0x74338d*/
              if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 408) < 4 ) /*0x74339f*/
              {
                v17 = strtok(0, Str); /*0x7433d0*/
                v18 = atoi(v17); /*0x7433d6*/
                IDA_LOWORD(v55) = v18 % 128; /*0x7433f1*/
                IDA_HIWORD(v55) = v18 / 128; /*0x7433fb*/
                v16 = v55; /*0x743400*/
              }
              else
              {
                v14 = strtok(0, Str); /*0x7433a1*/
                IDA_LOWORD(v56) = atoi(v14); /*0x7433b2*/
                v15 = strtok(0, Str); /*0x7433b7*/
                IDA_HIWORD(v56) = atoi(v15); /*0x7433c2*/
                v16 = v56; /*0x7433c7*/
              }
              v53 = v16; /*0x743404*/
              v58[0] = ((int16_t)v16 << 8) + 128; /*0x743429*/
              v58[1] = (IDA_SHIWORD(v16) << 8) + 128; /*0x74342d*/
              v59 = 0; /*0x743431*/
              v19 = strtok(0, Str); /*0x743435*/
              v20 = atoi(v19); /*0x743446*/
              v21 = strtok(0, Str); /*0x743448*/
              v22 = LookupWaypointName((ObjectClass *)v21); /*0x743457*/
              v23 = strtok(0, Str); /*0x743460*/
              v24 = (TeamClass *)((ObjectTypeClass *)((ObjectTypeClass *)v23))->FindByName(); /*0x74346a*/
              if ( v24 ) /*0x743471*/
              {
                v25 = (int)(((TeamClass *)(v24))->FindOrCreate());
                if ( v25 ) /*0x74347c*/
                  ((ObjectClass *)((ObjectClass *)v12))->SetReference(v25); /*0x743481*/
              }
              v26 = strtok(0, Str); /*0x74348d*/
              if ( v26 ) /*0x743497*/
              {
                v27 = atoi(v26); /*0x74349a*/
                FootClass::SetField((int *)(v12 + 336), v27); /*0x7434a9*/
              }
              v28 = strtok(0, Str); /*0x7434b5*/
              if ( v28 ) /*0x7434bf*/
                *(unsigned int *)(v12 + 532) = atoi(v28); /*0x7434ca*/
              v29 = strtok(0, Str); /*0x7434d7*/
              if ( v29 ) /*0x7434e1*/
              {
                v30 = atoi(v29) != 0; /*0x7434ee*/
                *(unsigned char *)(v12 + 140) = v30; /*0x7434f3*/
                if ( v30 ) /*0x7434f9*/
                  v59 = dword_B1D0AC + ((Cell *)(v58))->GetGroundHeight(); /*0x743510*/
              }
              v31 = strtok(0, Str); /*0x74351b*/
              if ( v31 ) /*0x743525*/
              {
                v32 = atoi(v31); /*0x743531*/
                if ( v51 < v48 /*0x74355f*/
                  || (v50 || !v48)
                  && v52 > 0
                  && ((uint8_t (*)(void ***, int, unsigned int))v46[2])(&v46, v52 + v48, 0) )
                {
                  v33 = v51++; /*0x74356a*/
                  *((unsigned int *)Block + v33) = v32; /*0x743575*/
                }
              }
              v34 = strtok(0, Str); /*0x74357f*/
              if ( v34 ) /*0x743589*/
                *(unsigned char *)(v12 + 1057) = atoi(v34) != 0; /*0x743599*/
              v35 = strtok(0, Str); /*0x7435a6*/
              if ( v35 ) /*0x7435b0*/
                *(unsigned char *)(v12 + 1058) = atoi(v35) != 0; /*0x7435c0*/
              if ( (*(uint8_t (**)(int, unsigned int *, int, int))(*(unsigned int *)v12 + 216))( /*0x7435d0*/
                     v12,
                     v58,
                     v20,
                     a2) )
              {
                v36 = *(unsigned int *)(v12 + 1732); /*0x7435de*/
                IDA_LOWORD(v37) = Math::RoundToInt((double)v61 * (double)*(int *)(v36 + 160) * 0.00390625); /*0x7435f0*/
                *(unsigned int *)(v12 + 108) = v37; /*0x7435f5*/
                v38 = *(unsigned int *)(v36 + 160); /*0x7435f8*/
                if ( v37 > v38 - 3 ) /*0x743603*/
                  *(unsigned int *)(v12 + 108) = v38; /*0x743605*/
                if ( !*(unsigned int *)(v12 + 108) ) /*0x743608*/
                  *(unsigned int *)(v12 + 108) = 1; /*0x74360f*/
                v39 = *(unsigned int *)v12; /*0x743619*/
                a2 = 0; /*0x74361b*/
                *(unsigned int *)(v12 + 112) = *(unsigned int *)(v12 + 108); /*0x743620*/
                (*(void (**)(int, int))(v39 + 488))(v12, v22); /*0x743623*/
                if ( (*(uint8_t (**)(int))(*(unsigned int *)v12 + 512))(v12) ) /*0x74362d*/
                  (*(void (**)(int))(*(unsigned int *)v12 + 492))(v12); /*0x74363b*/
              }
              else
              {
                a2 = (void *)(1);
                (*(void (**)(int))(*(unsigned int *)v12 + 32))(v12); /*0x743649*/
              }
            }
          }
        }
      }
      v4 = ++v54; /*0x743654*/
      if ( v54 >= v61 ) /*0x74365b*/
        break; /*0x74365b*/
      v2 = v57; /*0x7432cd*/
    }
  }
  v40 = *((unsigned int *)((char *)&FootClass_Array + 2)); /*0x743664*/
  for ( i = 0; i < *((unsigned int *)((char *)&FootClass_Array + 2)); ++i ) /*0x74366e*/
  {
    v42 = *((unsigned int *)Block + i); /*0x74367a*/
    v43 = *(unsigned int *)(((char *)&FootClass_Array) + 4 * i); /*0x74367d*/
    if ( v42 == -1 || v42 >= v40 ) /*0x743687*/
    {
      *(unsigned int *)(v43 + 1736) = 0; /*0x74369b*/
    }
    else
    {
      v44 = *(unsigned int *)(((char *)&FootClass_Array) + 4 * v42); /*0x743689*/
      *(unsigned int *)(v43 + 1736) = v44; /*0x74368c*/
      *(unsigned char *)(v44 + 1744) = 1; /*0x743692*/
    }
    v40 = *((unsigned int *)((char *)&FootClass_Array + 2)); /*0x7436a1*/
  }
  v46 = (void *)((int)((void*)&VectorClass_int_vftable));
  if ( Block ) /*0x7436bd*/
  {
    if ( v50 ) /*0x7436c5*/
      RA2_OPDEL(Block); /*0x7436c8*/
  }
}
}
// 0x746EC0
namespace gamemd {
int sub_746EC0()
{
  dword_B1D0C8 = 0; /*0x746ec2*/
  dword_B1D0CC = 0; /*0x746ec7*/
  dword_B1D0D0 = 0; /*0x746ecc*/
  dword_B1D0D4 = 0; /*0x746ed1*/
  return 0; /*0x746ed6*/
}
}
// 0x7483B0
namespace gamemd {
int CopySHPFrameToSurface(int a1, unsigned short * a2, int * a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // edi
  int result; // eax
  int *v9; // ebp
  char *v10; // ecx
  uint16_t v11; // ax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int * v20;
  unsigned int *v21; // edx
  unsigned int v22; // edi
  uint16_t v23; // ax
  unsigned int v24; // edx
  int v25; // eax
  int16_t *v26; // edi
  int *v27; // ebx
  int16_t v28; // cx
  int *v29; // eax
  unsigned int v30; // edx
  int v31; // esi
  unsigned short *v32; // eax
  int *v33; // ebx
  int *v34; // edx
  int v35; // edi
  int v36; // edi
  unsigned int v37; // ebx
  int *v38; // edx
  uint16_t *v39; // eax
  int v40; // esi
  uint16_t v41; // cx
  uint16_t v42; // bp
  uint16_t *v43; // eax
  uint16_t v44; // cx
  uint16_t v45; // bp
  int v46; // edi
  uint16_t v47; // cx
  int v48; // edx
  int v49; // eax
  int *v50; // ecx
  char *v51; // [esp+Ch] [ebp-Ch]
  char *v52; // [esp+10h] [ebp-8h]
  unsigned int v53; // [esp+14h] [ebp-4h]
  int v54; // [esp+20h] [ebp+8h]
  uint16_t *v55; // [esp+24h] [ebp+Ch]
  uint16_t *v56; // [esp+24h] [ebp+Ch]
  uint16_t *v57; // [esp+24h] [ebp+Ch]
  char *v58; // [esp+2Ch] [ebp+14h]
  int v59; // [esp+2Ch] [ebp+14h]
  int v60; // [esp+2Ch] [ebp+14h]
  unsigned int v61; // [esp+2Ch] [ebp+14h]
  unsigned int v62; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7483be*/
  result = (int)a3; /*0x7483c4*/
  v9 = a3; /*0x7483d0*/
  v10 = (char *)&a3[2 * a6 * a5]; /*0x7483d2*/
  v62 = a6; /*0x7483da*/
  v53 = (unsigned int)v10; /*0x7483de*/
  v51 = (char *)a3; /*0x7483e2*/
  v52 = (char *)&a3[2 * a4]; /*0x7483e6*/
  v58 = (char *)a3; /*0x7483ea*/
  if ( a3 < (int *)v10 ) /*0x7483ee*/
  {
    do /*0x7483f5*/
    {
      v11 = *a2++; /*0x7483f5*/
      v55 = a2; /*0x748400*/
      v12 = v11; /*0x748404*/
      v13 = v11 & 0xF000; /*0x748406*/
      v14 = v12 & 0xFFFF0FFF; /*0x74840b*/
      if ( v13 > 12288 ) /*0x748416*/
      {
        if ( v13 == 20480 ) /*0x7485c6*/
        {
          if ( v14 ) /*0x7486c4*/
          {
            v46 = 4 * (v6 >> 2); /*0x7486c9*/
            do /*0x748703*/
            {
              v47 = *((unsigned short *)dword_B1D14C + *a2); /*0x7486d6*/
              v48 = 4; /*0x7486da*/
              v49 = v47 | (v47 << 16); /*0x7486ea*/
              ++a2; /*0x7486ec*/
              v50 = v9; /*0x7486ef*/
              do /*0x7486f9*/
              {
                *v50 = v49; /*0x7486f1*/
                v50[1] = v49; /*0x7486f3*/
                v50 = (int *)((char *)v50 + v46); /*0x7486f6*/
                --v48; /*0x7486f8*/
              }
              while ( v48 ); /*0x7486f9*/
              v9 += 2; /*0x7486fb*/
              --v14; /*0x7486fe*/
              v58 = (char *)v9; /*0x7486ff*/
            }
            while ( v14 ); /*0x748703*/
          }
        }
        else if ( v13 == 24576 ) /*0x7485d1*/
        {
          if ( v14 ) /*0x748650*/
          {
            v36 = 4 * (v6 >> 2); /*0x748659*/
            v37 = v14; /*0x74865c*/
            do /*0x7486ba*/
            {
              v38 = v9; /*0x748668*/
              v39 = (uint16_t *)(a1 + 32 * *v55++); /*0x748670*/
              v40 = 4; /*0x748679*/
              do /*0x7486ac*/
              {
                v41 = v39[1]; /*0x748682*/
                v42 = *v39; /*0x748686*/
                v43 = v39 + 2; /*0x74868e*/
                *v38 = v42 | (v41 << 16); /*0x748691*/
                v44 = v43[1]; /*0x748695*/
                v45 = *v43; /*0x74869b*/
                v39 = v43 + 2; /*0x74869e*/
                v38[1] = v45 | (v44 << 16); /*0x7486a6*/
                v38 = (int *)((char *)v38 + v36); /*0x7486a9*/
                --v40; /*0x7486ab*/
              }
              while ( v40 ); /*0x7486ac*/
              v9 = (int *)(v58 + 8); /*0x7486b2*/
              --v37; /*0x7486b5*/
              v58 += 8; /*0x7486b6*/
            }
            while ( v37 ); /*0x7486ba*/
            a2 = v55; /*0x7486bc*/
          }
        }
        else if ( v13 == 28672 && v14 ) /*0x7485e0*/
        {
          v61 = v14; /*0x7485e6*/
          while ( 1 ) /*0x7485f9*/
          {
            v31 = 4; /*0x7485f9*/
            v32 = (unsigned short *)(a1 + 32 * *a2); /*0x748601*/
            v57 = a2 + 1; /*0x748606*/
            v33 = v9; /*0x74860a*/
            do /*0x748631*/
            {
              v34 = v33; /*0x74860c*/
              v35 = 4; /*0x74860e*/
              do /*0x748625*/
              {
                if ( (IDA_HIBYTE(*v32) & 0x80u) == 0 ) /*0x748619*/
                  *(unsigned short *)v34 = *v32; /*0x74861b*/
                v34 = (int *)((char *)v34 + 2); /*0x74861e*/
                ++v32; /*0x748621*/
                --v35; /*0x748624*/
              }
              while ( v35 ); /*0x748625*/
              --v31; /*0x74862d*/
              v33 = (int *)((char *)v33 + 2 * ((v62 * 2) >> 1)); /*0x74862e*/
            }
            while ( v31 ); /*0x748631*/
            v9 += 2; /*0x748637*/
            if ( !--v61 ) /*0x74863f*/
              break; /*0x74863f*/
            a2 = v57; /*0x7485ec*/
          }
          a2 = v57; /*0x748641*/
          v58 = (char *)v9; /*0x748645*/
        }
        goto LABEL_55; /*0x748649*/
      }
      if ( v13 == 12288 ) /*0x74841c*/
      {
        v54 = 4; /*0x74854b*/
        v26 = (int16_t *)(a1 + 32 * *a2); /*0x748556*/
        v56 = a2 + 1; /*0x74855b*/
        do /*0x7485a2*/
        {
          v27 = v9; /*0x74855f*/
          v60 = 4; /*0x748561*/
          do /*0x748591*/
          {
            v28 = *v26; /*0x748569*/
            if ( (IDA_HIBYTE(*v26) & 0x80u) == 0 ) /*0x74856f*/
            {
              v29 = v27; /*0x748573*/
              if ( v14 ) /*0x748575*/
              {
                v30 = v14; /*0x748577*/
                do /*0x748580*/
                {
                  *(unsigned short *)v29 = v28; /*0x748579*/
                  v29 += 2; /*0x74857c*/
                  --v30; /*0x74857f*/
                }
                while ( v30 ); /*0x748580*/
              }
            }
            v27 = (int *)((char *)v27 + 2); /*0x748586*/
            ++v26; /*0x748589*/
            --v60; /*0x74858d*/
          }
          while ( v60 ); /*0x748591*/
          v9 = (int *)((char *)v9 + v62 * 2); /*0x74859b*/
          --v54; /*0x74859e*/
        }
        while ( v54 ); /*0x7485a2*/
        a2 = v56; /*0x7485a6*/
        v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7485b6*/
        v58 = (char *)v9; /*0x7485b8*/
        goto LABEL_55; /*0x7485bc*/
      }
      if ( v13 ) /*0x748424*/
      {
        if ( v13 != 4096 ) /*0x74842f*/
        {
          if ( v13 == 0x2000 ) /*0x74843a*/
          {
            v59 = 4; /*0x748449*/
            v15 = (int *)(a1 + 32 * *a2++); /*0x748454*/
            do /*0x7484af*/
            {
              v16 = *v15; /*0x748467*/
              v17 = v15 + 1; /*0x748469*/
              v18 = v9; /*0x74846e*/
              if ( v14 ) /*0x748470*/
              {
                v19 = v14; /*0x748472*/
                do /*0x74847a*/
                {
                  *v18 = v16; /*0x748474*/
                  v18 += 2; /*0x748476*/
                  --v19; /*0x748479*/
                }
                while ( v19 ); /*0x74847a*/
              }
              v20 = (int *)((unsigned int *)(*v17));
              v15 = (int *)((unsigned int *)(v17 + 1));
              v21 = (unsigned int *)(v9 + 1);
              if ( v14 ) /*0x748494*/
              {
                v22 = v14; /*0x748496*/
                do /*0x74849e*/
                {
                  *v21 = (unsigned int)(v20);
                  v21 += 2; /*0x74849a*/
                  --v22; /*0x74849d*/
                }
                while ( v22 ); /*0x74849e*/
              }
              v9 = (int *)((char *)v9 + v62 * 2); /*0x7484a8*/
              --v59; /*0x7484ab*/
            }
            while ( v59 ); /*0x7484af*/
            v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7484c3*/
            v58 = (char *)v9; /*0x7484c5*/
          }
          goto LABEL_55; /*0x7484c9*/
        }
      }
      else
      {
        v23 = *a2; /*0x7484d6*/
        v24 = 2 * v14; /*0x7484d9*/
        ++a2; /*0x7484dc*/
        v25 = *((uint16_t *)dword_B1D14C + v23) | (*((uint16_t *)dword_B1D14C + v23) << 16); /*0x7484ee*/
        if ( 2 * v14 ) /*0x7484d9*/
          memset32(v9, v25, v24); /*0x7484f8*/
        if ( v24 ) /*0x748503*/
        {
          memset32((char *)v9 + v62 * 2, v25, v24); /*0x748507*/
          memset32(&v9[v62], v25, v24); /*0x748517*/
          memset32((char *)&v9[v62] + v62 * 2, v25, v24); /*0x748533*/
        }
      }
      v9 += 2 * v14; /*0x748535*/
      v58 = (char *)v9; /*0x748539*/
  LABEL_55:
      result = (int)v52; /*0x748705*/
      v6 = v62 * 2; /*0x748709*/
      if ( v9 == (int *)v52 ) /*0x74870f*/
      {
        result = 2 * v62; /*0x748719*/
        v9 = (int *)&v51[2 * v62]; /*0x748720*/
        v51 = (char *)v9; /*0x748722*/
        v58 = (char *)v9; /*0x748726*/
        v52 = (char *)&v9[2 * a4]; /*0x74872e*/
      }
    }
    while ( (unsigned int)v9 < v53 ); /*0x7483f5*/
  }
  return result; /*0x74873d*/
}
}
// 0x748AF0
namespace gamemd {
unsigned int sub_748AF0(int a1, unsigned short * a2, int * a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  int v8; // ecx
  unsigned int result; // eax
  int v11; // ecx
  unsigned short *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  uint16_t *v16; // eax
  int v17; // esi
  uint16_t v18; // cx
  uint16_t v19; // bx
  uint16_t *v20; // eax
  uint16_t v21; // cx
  uint16_t v22; // bx
  unsigned int v23; // [esp+8h] [ebp-4h]
  unsigned short *v24; // [esp+18h] [ebp+Ch]
  int *v25; // [esp+20h] [ebp+14h]
  int *v26; // [esp+24h] [ebp+18h]

  v6 = a3; /*0x748afa*/
  v7 = 2 * a6; /*0x748afe*/
  v8 = 2 * a6 * a5; /*0x748b02*/
  v26 = a3; /*0x748b09*/
  result = (unsigned int)&a3[v8]; /*0x748b0d*/
  v23 = result; /*0x748b16*/
  v25 = &a3[2 * a4]; /*0x748b1d*/
  if ( (unsigned int)a3 < result ) /*0x748b21*/
  {
    while ( 1 ) /*0x748b37*/
    {
      result = *a2 & 0x1FFF; /*0x748b37*/
      v11 = *a2 & 0xE000; /*0x748b3c*/
      v24 = a2 + 1; /*0x748b42*/
      if ( (*a2 & 0xE000) == 0 ) /*0x748b48*/
        break; /*0x748b48*/
      if ( v11 == 0x2000 ) /*0x748b50*/
      {
        v12 = (unsigned short *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748b72*/
        v13 = 2; /*0x748b74*/
        do /*0x748b9b*/
        {
          v14 = v6; /*0x748b79*/
          v15 = 4; /*0x748b7b*/
          do /*0x748b92*/
          {
            if ( (IDA_HIBYTE(*v12) & 0x80u) == 0 ) /*0x748b86*/
              *(unsigned short *)v14 = *v12; /*0x748b88*/
            v14 = (int *)((char *)v14 + 2); /*0x748b8b*/
            ++v12; /*0x748b8e*/
            --v15; /*0x748b91*/
          }
          while ( v15 ); /*0x748b92*/
          v12 += 4; /*0x748b94*/
          --v13; /*0x748b97*/
          v6 = (int *)((char *)v6 + 2 * v7); /*0x748b98*/
        }
        while ( v13 ); /*0x748b9b*/
        goto LABEL_17; /*0x748b9b*/
      }
      if ( v11 == 0x4000 ) /*0x748b58*/
        v6 += 2; /*0x748b5e*/
  LABEL_18:
      if ( v6 == v25 ) /*0x748bfa*/
      {
        v6 = &v26[v7]; /*0x748c07*/
        result = a4; /*0x748c09*/
        v26 = v6; /*0x748c0d*/
        v25 = &v6[2 * a4]; /*0x748c14*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x748c1c*/
        return result; /*0x748c1c*/
      a2 = v24; /*0x748b2b*/
    }
    v16 = (uint16_t *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748bab*/
    v17 = 2; /*0x748bb1*/
    do /*0x748be4*/
    {
      v18 = v16[1]; /*0x748bba*/
      v19 = *v16; /*0x748bbe*/
      v20 = v16 + 2; /*0x748bc6*/
      *v6 = v19 | (v18 << 16); /*0x748bc9*/
      v21 = v20[1]; /*0x748bcd*/
      v22 = *v20; /*0x748bd3*/
      v16 = v20 + 6; /*0x748bd6*/
      v6[1] = v22 | (v21 << 16); /*0x748bde*/
      v6 = (int *)((char *)v6 + 2 * v7); /*0x748be1*/
      --v17; /*0x748be3*/
    }
    while ( v17 ); /*0x748be4*/
  LABEL_17:
    result = 4 * v7; /*0x748be6*/
    v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x748bf4*/
    goto LABEL_18; /*0x748bf4*/
  }
  return result; /*0x748c24*/
}
}
// 0x74BB20
namespace gamemd {
void * globalHelper_04BB20(ObjectClass * Source, int a2)
{
  int v4; // esi
  VoxelAnimTypeClass *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x74bb3f*/
    return 0; /*0x74bb9c*/
  v4 = 0; /*0x74bb4e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x74bb52*/
  {
  LABEL_6:
    v5 = (VoxelAnimTypeClass *)RA2_OPNEW(0x308u); /*0x74bb73*/
    if ( v5 ) /*0x74bb82*/
// 0x74ad80
      return ((VoxelAnimTypeClass *)(v5))->Constructor(Source); /*0x74bb8f*/
    return 0; /*0x74bb82*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v4) + 36),(const char *)(Source)) ) /*0x74bb69*/
  {
    if ( ++v4 >= *(unsigned int *)(a2 + 16) ) /*0x74bb71*/
      goto LABEL_6; /*0x74bb71*/
  }
  return *(unsigned int **)(*(unsigned int *)(a2 + 4) + 4 * v4); /*0x74bb8c*/
}
}
// 0x74BBF0
namespace gamemd {
unsigned int * E4Recv_74BBF0::sub_74BBF0(int a2)
{

  void **p_vtable3; // esi
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  p_vtable3 = (void **)(&((unsigned int *)this)[0]); /*0x74bbff*/
  ((unsigned int *)this)[0] = 0; /*0x74bc04*/
  ((unsigned int *)this)[0] = 0; /*0x74bc07*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x74bc0a*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x74bc0e*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_VectorClass); /*0x74bc11*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)-1); /*0x74bc17*/
  LOBYTE(((unsigned int *)this)[0]) = *(unsigned char *)(a2 + 4); /*0x74bc21*/
  ((unsigned int *)this)[0] = (unsigned int)(*(void **)(a2 + 8)); /*0x74bc27*/
  if ( &((unsigned int *)this)[0] == (void **)(a2 + 12) ) /*0x74bc2a*/
    goto LABEL_8; /*0x74bc2a*/
  (*((void (**)(void **))*p_vtable3 + 3))(p_vtable3); /*0x74bc30*/
  v4 = *(unsigned int *)(a2 + 20); /*0x74bc33*/
  p_vtable3[2] = (void *)v4; /*0x74bc38*/
  if ( !v4 ) /*0x74bc3b*/
  {
    p_vtable3[1] = (void *)((unsigned int)(0));
    *((unsigned char *)p_vtable3 + 13) = 0; /*0x74bc82*/
LABEL_8:
    this->AbstractClass = (unsigned int)(*(void **)a2); /*0x74bc85*/
    return this; /*0x74bc8d*/
  }
  v5 = (int)(__2_YAPAXI_Z(v4)); /*0x74bc3e*/
  p_vtable3[1] = (void *)v5; /*0x74bc48*/
  if ( !v5 ) /*0x74bc4b*/
    goto LABEL_8; /*0x74bc4b*/
  v6 = (int)p_vtable3[2]; /*0x74bc4d*/
  v7 = 0; /*0x74bc50*/
  *((unsigned char *)p_vtable3 + 13) = 1; /*0x74bc54*/
  if ( v6 <= 0 ) /*0x74bc58*/
    goto LABEL_8; /*0x74bc58*/
  do /*0x74bc6c*/
  {
    *((unsigned char *)p_vtable3[1] + v7) = *(unsigned char *)(*(unsigned int *)(a2 + 16) + v7); /*0x74bc63*/
    ++v7; /*0x74bc69*/
  }
  while ( v7 < (int)p_vtable3[2] ); /*0x74bc6c*/
  this->AbstractClass = (unsigned int)(*(void **)a2); /*0x74bc74*/
  return this; /*0x74bc78*/

}
}
// 0x74BCA0
namespace gamemd {
unsigned int * E4Recv_74BCA0::sub_74BCA0(int a2)
{

  void *vtable2; // edx
  size_t v4; // eax
  int v5; // eax
  int abstractFlags; // ecx
  int v7; // eax

  vtable2 = (void *)(((unsigned int *)this)[0]); /*0x74bca6*/
  if ( vtable2 != (void *)-1 ) /*0x74bcac*/
  {
    SetBitfieldBit(((unsigned int *)this)[0], (int)vtable2, LOBYTE(((unsigned int *)this)[0])); /*0x74bcb7*/
    ((unsigned int *)this)[0] = (unsigned int)((void *)-1); /*0x74bcbc*/
  }
  LOBYTE(((unsigned int *)this)[0]) = *(unsigned char *)(a2 + 4); /*0x74bcd0*/
  ((unsigned int *)this)[0] = (unsigned int)(*(void **)(a2 + 8)); /*0x74bcd8*/
  if ( &((unsigned int *)this)[0] == (void **)(a2 + 12) ) /*0x74bcdb*/
    goto LABEL_10; /*0x74bcdb*/
  (*((void (**)(void **))((unsigned int *)this)[0] + 3))(&((unsigned int *)this)[0]); /*0x74bce1*/
  v4 = *(unsigned int *)(a2 + 20); /*0x74bce4*/
  ((unsigned int *)this)[0] = v4; /*0x74bce9*/
  if ( !v4 ) /*0x74bcec*/
  {
    ((unsigned int *)this)[0] = 0; /*0x74bd2c*/
    BYTE1(((unsigned int *)this)[0]) = 0; /*0x74bd33*/
LABEL_10:
    this->AbstractClass = (unsigned int)(*(void **)a2); /*0x74bd37*/
    return this; /*0x74bd39*/
  }
  v5 = (int)(__2_YAPAXI_Z(v4)); /*0x74bcef*/
  ((unsigned int *)this)[0] = v5; /*0x74bcf7*/
  if ( !v5 ) /*0x74bcfc*/
    goto LABEL_10; /*0x74bcfc*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x74bcfe*/
  v7 = 0; /*0x74bd01*/
  BYTE1(((unsigned int *)this)[0]) = 1; /*0x74bd05*/
  if ( abstractFlags <= 0 ) /*0x74bd09*/
    goto LABEL_10; /*0x74bd09*/
  do /*0x74bd1d*/
  {
    *(unsigned char *)(((unsigned int *)this)[0] + v7) = *(unsigned char *)(v7 + *(unsigned int *)(a2 + 16)); /*0x74bd14*/
    ++v7; /*0x74bd1a*/
  }
  while ( v7 < ((unsigned int *)this)[0] ); /*0x74bd1d*/
  this->AbstractClass = (unsigned int)(*(void **)a2); /*0x74bd23*/
  return this; /*0x74bd25*/

}
}
// 0x74BDC0
namespace gamemd {
int E4Recv_74BDC0::sub_74BDC0(unsigned int a2)
{

  void *vtable2; // edx
  char *vtable0; // edi
  void * v6;
  char *v7; // edx
  int v8; // ebp
  void *v10; // edx
  void (**vtable3)(void **); // edx
  void * v12;

  vtable2 = (void *)(((unsigned int *)this)[0]); /*0x74bdc8*/
  if ( vtable2 != (void *)-1 ) /*0x74bdcd*/
  {
    SetBitfieldBit(((unsigned int *)this)[0], (int)vtable2, LOBYTE(((unsigned int *)this)[0])); /*0x74bdd8*/
    ((unsigned int *)this)[0] = (unsigned int)((void *)-1); /*0x74bddd*/
  }
  if ( a2 ) /*0x74bde6*/
  {
    vtable0 = (char *)((unsigned int)((char *)this->AbstractClass));
    v6 = (void *)((unsigned int)((*((int (**)(void **, unsigned int, unsigned int))((unsigned int *)this)[0] + 2))(&((unsigned int *)this)[0], (a2 + 7) >> 3, 0)));
    this->AbstractClass = (unsigned int)((void *)a2);
    v12 = v6; /*0x74be03*/
    if ( v6 && (unsigned int)vtable0 < a2 ) /*0x74be0b*/
    {
      do /*0x74be53*/
      {
        v7 = (char *)((unsigned int *)this)[0]; /*0x74be0e*/
        if ( v7 != vtable0 ) /*0x74be13*/
        {
          v8 = (int)vtable0; /*0x74be17*/
          if ( vtable0 >= (char *)(this->AbstractClass) ) /*0x74be1b*/
            v8 = -1; /*0x74be1d*/
          if ( (char *)v8 != v7 ) /*0x74be22*/
          {
            if ( v7 != (char *)-1 ) /*0x74be27*/
              SetBitfieldBit(((unsigned int *)this)[0], (int)v7, LOBYTE(((unsigned int *)this)[0])); /*0x74be32*/
            if ( v8 != -1 ) /*0x74be3a*/
              LOBYTE(((unsigned int *)this)[0]) = BitArray::TestBit(((unsigned int *)this)[0], v8); /*0x74be46*/
            ((unsigned int *)this)[0] = (unsigned int)((void *)v8); /*0x74be49*/
          }
        }
        ++vtable0; /*0x74be4c*/
        LOBYTE(((unsigned int *)this)[0]) = (int)(0); /*0x74be4d*/
      }
      while ( (unsigned int)vtable0 < a2 ); /*0x74be53*/
    }
    return (int)(v12); /*0x74be56*/
  }
  else
  {
    v10 = (void *)(((unsigned int *)this)[0]); /*0x74be60*/
    if ( v10 != (void *)-1 ) /*0x74be65*/
    {
      SetBitfieldBit(((unsigned int *)this)[0], (int)v10, LOBYTE(((unsigned int *)this)[0])); /*0x74be70*/
      ((unsigned int *)this)[0] = (unsigned int)((void *)-1); /*0x74be75*/
    }
    vtable3 = (void (**)(void **))((unsigned int *)this)[0]; /*0x74be78*/
    this->AbstractClass = 0; /*0x74be7e*/
    vtable3[3](&((unsigned int *)this)[0]); /*0x74be84*/
    return 1; /*0x74be89*/
  }

}
}
// 0x74D760
namespace gamemd {
void CleanupVeinholeSystem()
{
  int i; // esi
  int v1; // ecx
  int result; // eax

  for ( i = dword_B1D2A0 - 1; i >= 0; --i ) /*0x74d76e*/
  {
    v1 = *((unsigned int *)dword_B1D294 + i); /*0x74d776*/
    if ( v1 ) /*0x74d77b*/
      (*(void (**)(int, int))(*(unsigned int *)v1 + 32))(v1, 1); /*0x74d781*/
  }
  result = (int)dword_B1D294; /*0x74d787*/
  dword_B1D2A0 = 0; /*0x74d78c*/
  if ( dword_B1D294 && byte_B1D29D ) /*0x74d79c*/
  {
    RA2_OPDEL(dword_B1D294); /*0x74d79f*/
    dword_B1D294 = 0; /*0x74d7a7*/
  }
  byte_B1D29D = 0; /*0x74d7ad*/
  dword_B1D298 = 0; /*0x74d7b3*/
  return result; /*0x74d7b9*/
}
}
// 0x74DE90
namespace gamemd {
int InitializeVeinholeSystem(char a1)
{
  size_t v2; // edi
  int i; // esi
  void *v4; // eax
  int v5; // ebp
  void *v6; // eax
  unsigned int *v7; // esi
  int VeinholeShrinkRate; // eax
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int *v12; // eax
  int j; // ecx
  int k; // eax
  int m; // esi
  int v16; // ecx
  int result; // eax
  int n; // esi
  size_t v19; // [esp+10h] [ebp-8h]

    v2 = ((Object *)0)->ComputeAllocationSize();
  v19 = v2; /*0x74dea2*/
  if ( !a1 ) /*0x74dea6*/
  {
  unsigned int v4 = (unsigned int)((void *)(dword_B1D2F0));
    goto LABEL_18; /*0x74dffd*/
  }
  for ( i = dword_B1D2A0 - 1; i >= 0; --i ) /*0x74deb8*/
    System_Init_74E8A0(*((unsigned int *)dword_B1D294 + i)); /*0x74dec3*/
  v4 = (void *)(dword_B1D2F0); /*0x74decb*/
  if ( dword_B1D2F0 ) /*0x74ded2*/
  {
    RA2_OPDEL(dword_B1D2F0); /*0x74ded5*/
    v4 = 0; /*0x74dedd*/
    dword_B1D2F0 = 0; /*0x74dedf*/
  }
  v5 = dword_B1D2A0 - 1; /*0x74deea*/
  if ( dword_B1D2A0 - 1 >= 0 ) /*0x74deef*/
  {
    do /*0x74dff7*/
    {
      v6 = (unsigned int *)(RA2_OPNEW(8 * dword_8871E0->AircraftFogReveal));
      if ( !v6 ) /*0x74df12*/
        v6 = 0; /*0x74df1b*/
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 180) = (unsigned int)(v6); /*0x74df28*/
      v7 = (unsigned int *)(RA2_OPNEW(0x14u)); /*0x74df33*/
      if ( v7 ) /*0x74df3a*/
      {
        VeinholeShrinkRate = (unsigned int)(dword_8871E0->AircraftFogReveal);
        v7[3] = (unsigned int)(0);
        v7[1] = (unsigned int)(VeinholeShrinkRate);
        v7[4] = (unsigned int)(-1);
        *v7 = (unsigned int)(0);
        v9 = (void *)((unsigned int)(RA2_OPNEW(4 * VeinholeShrinkRate + 4)));
        v10 = (unsigned int)(v7[1]);
        v7[2] = (unsigned int)(v9);
        v11 = 0; /*0x74df6d*/
        if ( v10 >= 0 ) /*0x74df71*/
        {
          do /*0x74df80*/
          {
            ++v11; /*0x74df76*/
            *(unsigned int *)(v7[2] + 4 * v11 - 4) = 0; /*0x74df77*/
          }
          while ( v11 <= v7[1] ); /*0x74df80*/
        }
      }
      else
      {
        v7 = (unsigned int *)((unsigned int)(0));
      }
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 176) = (unsigned int)(v7); /*0x74df90*/
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 196) = (unsigned int)(RA2_OPNEW(v2)); /*0x74dfa9*/
      memset(*(void **)(*((unsigned int *)dword_B1D294 + v5) + 196), 0, v2); /*0x74dfc5*/
      v12 = *(unsigned int **)(*((unsigned int *)dword_B1D294 + v5) + 176); /*0x74dfd6*/
      for ( j = 0; j <= *v12; *(unsigned int *)(v12[2] + 4 * j - 4) = 0 ) /*0x74dfe0*/
        ++j; /*0x74dfe5*/
      v2 = v19; /*0x74dff0*/
      --v5; /*0x74dff4*/
      *v12 = 0; /*0x74dff5*/
    }
    while ( v5 >= 0 ); /*0x74dff7*/
    goto LABEL_17; /*0x74dff7*/
  }
  LABEL_18:
  if ( !v4 ) /*0x74e004*/
    dword_B1D2F0 = (unsigned int)(RA2_OPNEW(v2)); /*0x74e00f*/
  ((LayerClass *)(&dword_87F7E8))->CellIteratorReset(); /*0x74e019*/
  for ( k = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); k; k = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext() ) /*0x74e02f*/
    *(unsigned int *)(k + 320) &= ~0x8000u; /*0x74e03e*/
  memset((void *)(dword_B1D2F0), 0, v2); /*0x74e05c*/
  for ( m = dword_B1D2A0 - 1; m >= 0; --m ) /*0x74e06f*/
  {
    v16 = *((unsigned int *)dword_B1D294 + m); /*0x74e077*/
    if ( *(unsigned char *)(v16 + 256) ) /*0x74e07a*/
      RulesClass::Reset(); /*0x74e084*/
    else
      ProcessVeinholeMonster(v16); /*0x74e08b*/
  }
  ((LayerClass *)(&dword_87F7E8))->CellIteratorReset(); /*0x74e098*/
  result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); /*0x74e0a2*/
  for ( n = result; result; n = result ) /*0x74e0ab*/
  {
    if ( *(unsigned int *)(n + 68) == 126 && !*((unsigned char *)dword_B1D2F0 + Cell::PosToIndex((int16_t *)(n + 36))) ) /*0x74e0c5*/
      *(unsigned int *)(n + 68) = -1; /*0x74e0cb*/
    *(unsigned int *)(n + 320) &= ~0x8000u; /*0x74e0da*/
    result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); /*0x74e0e5*/
  }
  return result; /*0x74e0f0*/
}
}
// 0x74F3C0
namespace gamemd {
int _::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x74f3c2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x74f3cd*/
  {
    v3 = 0; /*0x74f3cf*/
    if ( m_8 <= 0 ) /*0x74f3d3*/
      return 1; /*0x74f3f3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x74f3d5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x74f3db*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x74f3e4*/
    {
      ++v3; /*0x74f3e6*/
      ++v4; /*0x74f3e7*/
      if ( v3 >= m_8 ) /*0x74f3ec*/
        return 1; /*0x74f3ec*/
    }
  }
  return 0; /*0x74f3ee*/

}
}
// 0x74F400
namespace gamemd {
AbstractClass * * _::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x74f40c*/
  {
    LOBYTE(this->m_C) = 0; /*0x74f416*/
    if ( a3 ) /*0x74f41c*/
      v4 = a3; /*0x74f432*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x74f42e*/
    LOBYTE(this->m_C) = 1; /*0x74f436*/
    if ( v4 ) /*0x74f43a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x74f445*/
      {
        m_8 = this->m_8; /*0x74f44c*/
        if ( a2 < m_8 ) /*0x74f451*/
          m_8 = a2; /*0x74f453*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x74f459*/
          ++i; /*0x74f45e*/
        if ( BYTE1(this->m_C) ) /*0x74f46b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x74f476*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x74f47e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x74f487*/
      this->m_8 = a2; /*0x74f48f*/
      BYTE1(this->m_C) = a3 == 0; /*0x74f492*/
      return (gamemd::AbstractClass **)(1); /*0x74f498*/
    }
    else
    {
      return 0; /*0x74f43f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x74f4a2*/
    return (gamemd::AbstractClass **)(1); /*0x74f4a8*/
  }

}
}
// 0x74F4B0
namespace gamemd {
void _::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x74f4bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x74f4c3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x74f4cb*/
  }
  BYTE1(this->m_C) = 0; /*0x74f4ce*/
  this->m_8 = 0; /*0x74f4d1*/

}
} // namespace gamemd

// 0x74F4E0
namespace gamemd {
int _::Read(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x74f4e0*/
    return 0; /*0x74f4e8*/
  v3 = *((unsigned int *)this + 2); /*0x74f4ee*/
  result = 0; /*0x74f4f1*/
  if ( v3 <= 0 ) /*0x74f4f5*/
    return -1; /*0x74f50c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x74f4fb*/
  {
    if ( ++result >= v3 ) /*0x74f50a*/
      return -1; /*0x74f50a*/
  }
  return result; /*0x74f4ea*/

}
}
// 0x74F520
namespace gamemd {
unsigned int _::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x74f520*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x74f535*/
  else
    return 0; /*0x74f527*/

}
}
// 0x74FAE0
namespace gamemd {
AbstractClass * * E4Recv_74FAE0::sub_74FAE0()
{

  int v2; // eax
  int v3; // eax
  uint16_t vtable2_high; // bp
  int v5; // eax
  uint16_t v6; // ax
  char *p_vtable3; // esi
  RawFileClass v9; // [esp+10h] [ebp-24h] BYREF

  if ( (this->ambientSoundController[2] & 8) == 0 ) /*0x74faef*/
  {
    RawFileClass::Construct(&v9, (int)g_Str_File_VERSION_TXT); /*0x74fafa*/
    if ( (uint8_t)((FileClass *)(&v9))->Open(0) ) /*0x74fb04*/
    {
      ((FileClass *)(&v9))->Read((gamemd::BufferIOFileClass *)((char *)&this->owningHouseIndex + 2), 16); /*0x74fb17*/
      for ( BYTE1(this->attachedBomb) = 0; /*0x74fb30*/
            *((unsigned char *)&this->owningHouseIndex + strlen((const char *)&this->owningHouseIndex + 2) + 1) == 13;
            *((unsigned char *)&this->owningHouseIndex + strlen((const char *)&this->owningHouseIndex + 2) + 1) = 0 )
      {
        ; /*0x74fb40*/
      }
    }
    else
    {
      BYTE2(this->owningHouseIndex) = 0; /*0x74fb55*/
    }
    ((RawFileClass *)(&v9))->Dtor(); /*0x74fb5c*/
    v2 = this->ambientSoundController[2]; /*0x74fb61*/
    LOBYTE(v2) = v2 | 8; /*0x74fb64*/
    this->ambientSoundController[2] = v2; /*0x74fb66*/
  }
  v3 = this->ambientSoundController[2]; /*0x74fb69*/
  if ( (v3 & 4) != 0 ) /*0x74fb6e*/
  {
    vtable2_high = HIWORD(((unsigned int *)this)[0]); /*0x74fb70*/
  }
  else
  {
    vtable2_high = 1; /*0x74fb76*/
    LOBYTE(v3) = v3 | 4; /*0x74fb7b*/
    HIWORD(((unsigned int *)this)[0]) = 1; /*0x74fb7d*/
    this->ambientSoundController[2] = v3; /*0x74fb81*/
  }
  if ( (*((unsigned int *)((char *)&stru_A8EB00 + 320)) & 8) == 0 ) /*0x74fb8b*/
  {
    RawFileClass::Construct(&v9, (int)g_Str_File_VERSION_TXT); /*0x74fb9a*/
    if ( (uint8_t)((FileClass *)(&v9))->Open(0) ) /*0x74fba4*/
    {
      ((FileClass *)(&v9))->Read(&(unsigned int *)((char *)&stru_A8EB00 + 294), 16); /*0x74fbb8*/
      for ( *((unsigned int *)((char *)&stru_A8EB00 + 309)) = 0; /*0x74fbd9*/
            ((unsigned int *)&stru_A8EB00)[strlen(&(unsigned int *)((char *)&stru_A8EB00 + 294)) + 293] == 13;
            ((unsigned int *)&stru_A8EB00)[strlen(&(unsigned int *)((char *)&stru_A8EB00 + 294)) + 293] = 0 )
      {
        ; /*0x74fbee*/
      }
    }
    else
    {
      *((unsigned int *)((char *)&stru_A8EB00 + 294)) = 0; /*0x74fc07*/
    }
    ((RawFileClass *)(&v9))->Dtor(); /*0x74fc11*/
    v5 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 320); /*0x74fc16*/
    LOBYTE(v5) = *((unsigned int *)((char *)&stru_A8EB00 + 320)) | 8; /*0x74fc1b*/
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 320) = v5; /*0x74fc1d*/
  }
  if ( (*((unsigned int *)((char *)&stru_A8EB00 + 320)) & 2) != 0 ) /*0x74fc2f*/
  {
    v6 = *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 260); /*0x74fc31*/
  }
  else
  {
    *(unsigned short *)&(unsigned int *)((char *)&stru_A8EB00 + 260) = 1; /*0x74fc3e*/
    v6 = 1; /*0x74fc49*/
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 320) |= 2u; /*0x74fc4e*/
  }
  p_vtable3 = (char *)&((unsigned int *)this)[0]; /*0x74fc60*/
  sprintf(p_vtable3, "%d.%3.3d", v6, vtable2_high); /*0x74fc6a*/
  return p_vtable3; /*0x74fc74*/

}
}
// 0x74FF30
namespace gamemd {
void ObjectClass::unknown_libname_35()
{

  this->AbstractClass = 0; /*0x74ff32*/
  return this; /*0x74ff38*/

}
}
// 0x746EE0
namespace gamemd {
void sub_746EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x746eec*/
  dbl_B1D0E0 = Math::Sqrt(v0 + v0); /*0x746efe*/
}
} // namespace gamemd

// 0x746F10
namespace gamemd {
void sub_746F10()
{
  dbl_B1D130 = dbl_B1D0E0 / 60.0; /*0x746f1c*/
}
} // namespace gamemd

// 0x746F30
namespace gamemd {
void sub_746F30()
{
  dbl_B1D118 = 1.0 / dbl_B1D130; /*0x746f3c*/
}
} // namespace gamemd

// 0x746F50
namespace gamemd {
void sub_746F50()
{
  dbl_B1D110 = 0.0174532925199433 * 45.0; /*0x746f5c*/
}
} // namespace gamemd

// 0x746F70
namespace gamemd {
void sub_746F70()
{
  dbl_B1D0E8 = 0.0174532925199433 * 60.0; /*0x746f7c*/
}
} // namespace gamemd

// 0x746F90
namespace gamemd {
void sub_746F90()
{
  dbl_B1D0C0 = 0.0174532925199433 * 90.0; /*0x746f9c*/
}
} // namespace gamemd

// 0x746FB0
namespace gamemd {
long long sub_746FB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D0C0 - dbl_B1D0E8); /*0x746fc2*/
  result = Math::RoundToInt(v0 * dbl_B1D0E0 * 0.5); /*0x746fd6*/
  dword_B1D138 = result; /*0x746fdb*/
  return result; /*0x746fe0*/
}
} // namespace gamemd

// 0x746FF0
namespace gamemd {
void sub_746FF0()
{
  dbl_B1D0F0 = Math::ArcTan((double)dword_B1D138 * 0.00390625); /*0x747007*/
}
} // namespace gamemd

// 0x747020
namespace gamemd {
void sub_747020()
{
  dbl_B1D108 = Math::ArcTan((double)(2 * dword_B1D138) / dbl_B1D0E0); /*0x747042*/
}
} // namespace gamemd

// 0x747050
namespace gamemd {
long long sub_747050()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D138) + 0.5); /*0x74706b*/
  dword_B1D12C = result; /*0x747070*/
  return result; /*0x747076*/
}
} // namespace gamemd

// 0x747080
namespace gamemd {
int sub_747080()
{
  word_B1D0D8 = 0; /*0x747082*/
  word_B1D0DA = 0; /*0x747088*/
  return 0; /*0x74708e*/
}
} // namespace gamemd

// 0x747090
namespace gamemd {
int sub_747090()
{
  dword_B1D0F8 = 0; /*0x747092*/
  dword_B1D0FC = 0; /*0x747097*/
  dword_B1D100 = 0; /*0x74709c*/
  return 0; /*0x7470a1*/
}
} // namespace gamemd

// 0x7470B0
namespace gamemd {
int sub_7470B0()
{
  dword_B1D128 = 0; /*0x7470b5*/
  dword_B1D120 = 128; /*0x7470bf*/
  dword_B1D124 = 128; /*0x7470c4*/
  return 128; /*0x7470c9*/
}
} // namespace gamemd

// 0x7473C0
namespace gamemd {
int UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0()
{

  return AbstractClass::processWeaponFire(int a1) ;

}
} // namespace gamemd

// 0x7473E0
namespace gamemd {
int sub_7473E0()
{
  int v1; // esi
  int v2; // ecx
  ConvertClass *v3; // eax
  int result; // eax

  if ( !dword_B1D13C ) /*0x7473e7*/
  {
    v1 = RA2_OPNEW(0x20u); /*0x7473f1*/
    if ( v1 ) /*0x7473f8*/
    {
      *(unsigned int *)(v1 + 4) = 256; /*0x747409*/
      *(unsigned int *)(v1 + 8) = 256; /*0x74740c*/
      *(unsigned int *)(v1 + 12) = 0; /*0x74740f*/
      *(unsigned int *)v1 = &XSurface_Vtable; /*0x747416*/
      *(unsigned int *)(v1 + 16) = 1; /*0x74741c*/
      Buffer::Init((Buffer *)(v1 + 20), 0, 0x10000); /*0x747423*/
      *(unsigned int *)v1 = &BSurface_Vtable; /*0x747428*/
      v2 = v1; /*0x74742e*/
    }
    else
    {
      v2 = 0; /*0x747432*/
    }
    dword_B1D13C = v2; /*0x747434*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v2 + 24))(v2, 0); /*0x74743e*/
  }
  if ( !dword_B1D140 ) /*0x747449*/
  {
    v3 = (ConvertClass *)RA2_OPNEW(0x188u); /*0x747450*/
    if ( v3 ) /*0x74745a*/
      dword_B1D140 = (BuildingClass *)ConvertClass::Construct( /*0x747478*/
                                        v3,
                                        (int)&FileSystem_TEMPERAT_PAL,
                                        (int)&FileSystem_TEMPERAT_PAL,
                                        dword_B1D13C,
                                        1,
                                        0);
    else
      dword_B1D140 = 0; /*0x74747f*/
  }
  dword_B1D144 = (int)SearchMIXFile(aViscSmlShp, 0); /*0x74749c*/
  result = (int)SearchMIXFile(aViscLrgShp, 0); /*0x7474a1*/
  dword_B1D148 = result; /*0x7474a6*/
  return result; /*0x7474ab*/
}
} // namespace gamemd

// 0x747600
namespace gamemd {
unsigned int * sub_747600(unsigned int * a1, int a2, unsigned int * a3)
{
  *a1 = *a3; /*0x74760a*/
  a1[1] = a3[1]; /*0x74760f*/
  return a1; /*0x747612*/
}
} // namespace gamemd

// 0x748380
namespace gamemd {
int sub_748380(unsigned short * a1, int a2)
{
  int result; // eax
  uint16_t v3; // dx

  result = a2; /*0x748380*/
  if ( a2 > 0 ) /*0x748384*/
  {
    do /*0x74839e*/
    {
      v3 = *a1++; /*0x74838f*/
      --result; /*0x748395*/
      *(a1 - 1) = *((unsigned short *)dword_B1D14C + v3); /*0x74839a*/
    }
    while ( result ); /*0x74839e*/
  }
  return result; /*0x7483a1*/
}
} // namespace gamemd

// 0x749010
namespace gamemd {
void ObjectClass::nullsub_143()
{

  ; /*0x749010*/

}
} // namespace gamemd

// 0x7490A0
namespace gamemd {
int Array_Sum(int * a1)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = a1[512]; /*0x7490a0*/
  result = 0; /*0x7490a6*/
  if ( v1 > 0 ) /*0x7490aa*/
  {
    do /*0x7490b5*/
    {
      v3 = *a1++; /*0x7490ad*/
      result += v3; /*0x7490b2*/
      --v1; /*0x7490b4*/
    }
    while ( v1 ); /*0x7490b5*/
  }
  return result; /*0x7490b8*/
}
} // namespace gamemd

// 0x7490C0
namespace gamemd {
Iostream_init * E4Recv_7490C0::__0Iostream_init_QAE_XZ_7()
{

  return this; /*0x7490c2*/

}
} // namespace gamemd

// 0x7491A0
namespace gamemd {
void sub_7491A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7491ac*/
  dbl_B1D170 = Math::Sqrt(v0 + v0); /*0x7491be*/
}
} // namespace gamemd

// 0x7491D0
namespace gamemd {
void sub_7491D0()
{
  dbl_B1D1C0 = dbl_B1D170 / 60.0; /*0x7491dc*/
}
} // namespace gamemd

// 0x7491F0
namespace gamemd {
void sub_7491F0()
{
  dbl_B1D1A8 = 1.0 / dbl_B1D1C0; /*0x7491fc*/
}
} // namespace gamemd

// 0x749210
namespace gamemd {
void sub_749210()
{
  dbl_B1D1A0 = 0.0174532925199433 * 45.0; /*0x74921c*/
}
} // namespace gamemd

// 0x749230
namespace gamemd {
void sub_749230()
{
  dbl_B1D178 = 0.0174532925199433 * 60.0; /*0x74923c*/
}
} // namespace gamemd

// 0x749250
namespace gamemd {
void sub_749250()
{
  dbl_B1D150 = 0.0174532925199433 * 90.0; /*0x74925c*/
}
} // namespace gamemd

// 0x749270
namespace gamemd {
long long sub_749270()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D150 - dbl_B1D178); /*0x749282*/
  result = Math::RoundToInt(v0 * dbl_B1D170 * 0.5); /*0x749296*/
  dword_B1D1C8 = result; /*0x74929b*/
  return result; /*0x7492a0*/
}
} // namespace gamemd

// 0x7492E0
namespace gamemd {
void sub_7492E0()
{
  dbl_B1D198 = Math::ArcTan((double)(2 * dword_B1D1C8) / dbl_B1D170); /*0x749302*/
}
} // namespace gamemd

// 0x749310
namespace gamemd {
long long sub_749310()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D1C8) + 0.5); /*0x74932b*/
  dword_B1D1BC = result; /*0x749330*/
  return result; /*0x749336*/
}
} // namespace gamemd

// 0x749340
namespace gamemd {
int sub_749340()
{
  word_B1D168 = 0; /*0x749342*/
  word_B1D16A = 0; /*0x749348*/
  return 0; /*0x74934e*/
}
} // namespace gamemd

// 0x749350
namespace gamemd {
int sub_749350()
{
  dword_B1D188 = 0; /*0x749352*/
  dword_B1D18C = 0; /*0x749357*/
  dword_B1D190 = 0; /*0x74935c*/
  return 0; /*0x749361*/
}
} // namespace gamemd

// 0x749370
namespace gamemd {
int sub_749370()
{
  dword_B1D1B8 = 0; /*0x749375*/
  dword_B1D1B0 = 128; /*0x74937f*/
  dword_B1D1B4 = 128; /*0x749384*/
  return 128; /*0x749389*/
}
} // namespace gamemd

// 0x749390
namespace gamemd {
int sub_749390()
{
  dword_B1D158 = 0; /*0x749392*/
  dword_B1D15C = 0; /*0x749397*/
  dword_B1D160 = 0; /*0x74939c*/
  dword_B1D164 = 0; /*0x7493a1*/
  return 0; /*0x7493a6*/
}
} // namespace gamemd

// 0x74AB70
namespace gamemd {
void sub_74AB70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x74ab7c*/
  dbl_B1D1F0 = Math::Sqrt(v0 + v0); /*0x74ab8e*/
}
} // namespace gamemd

// 0x74ABA0
namespace gamemd {
void sub_74ABA0()
{
  dbl_B1D240 = dbl_B1D1F0 / 60.0; /*0x74abac*/
}
} // namespace gamemd

// 0x74ABC0
namespace gamemd {
void sub_74ABC0()
{
  dbl_B1D228 = 1.0 / dbl_B1D240; /*0x74abcc*/
}
} // namespace gamemd

// 0x74ABE0
namespace gamemd {
void sub_74ABE0()
{
  dbl_B1D220 = 0.0174532925199433 * 45.0; /*0x74abec*/
}
} // namespace gamemd

// 0x74AC00
namespace gamemd {
void sub_74AC00()
{
  dbl_B1D1F8 = 0.0174532925199433 * 60.0; /*0x74ac0c*/
}
} // namespace gamemd

// 0x74AC20
namespace gamemd {
void sub_74AC20()
{
  dbl_B1D1D0 = 0.0174532925199433 * 90.0; /*0x74ac2c*/
}
} // namespace gamemd

// 0x74AC40
namespace gamemd {
long long sub_74AC40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D1D0 - dbl_B1D1F8); /*0x74ac52*/
  result = Math::RoundToInt(v0 * dbl_B1D1F0 * 0.5); /*0x74ac66*/
  dword_B1D248 = result; /*0x74ac6b*/
  return result; /*0x74ac70*/
}
} // namespace gamemd

// 0x74AC80
namespace gamemd {
void sub_74AC80()
{
  dbl_B1D200 = Math::ArcTan((double)dword_B1D248 * 0.00390625); /*0x74ac97*/
}
} // namespace gamemd

// 0x74ACB0
namespace gamemd {
void sub_74ACB0()
{
  dbl_B1D218 = Math::ArcTan((double)(2 * dword_B1D248) / dbl_B1D1F0); /*0x74acd2*/
}
} // namespace gamemd

// 0x74ACE0
namespace gamemd {
long long sub_74ACE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D248) + 0.5); /*0x74acfb*/
  dword_B1D23C = result; /*0x74ad00*/
  return result; /*0x74ad06*/
}
} // namespace gamemd

// 0x74AD10
namespace gamemd {
int sub_74AD10()
{
  word_B1D1E8 = 0; /*0x74ad12*/
  word_B1D1EA = 0; /*0x74ad18*/
  return 0; /*0x74ad1e*/
}
} // namespace gamemd

// 0x74AD20
namespace gamemd {
int sub_74AD20()
{
  dword_B1D208 = 0; /*0x74ad22*/
  dword_B1D20C = 0; /*0x74ad27*/
  dword_B1D210 = 0; /*0x74ad2c*/
  return 0; /*0x74ad31*/
}
} // namespace gamemd

// 0x74AD40
namespace gamemd {
int sub_74AD40()
{
  dword_B1D238 = 0; /*0x74ad45*/
  dword_B1D230 = 128; /*0x74ad4f*/
  dword_B1D234 = 128; /*0x74ad54*/
  return 128; /*0x74ad59*/
}
} // namespace gamemd

// 0x74AD60
namespace gamemd {
int sub_74AD60()
{
  dword_B1D1D8 = 0; /*0x74ad62*/
  dword_B1D1DC = 0; /*0x74ad67*/
  dword_B1D1E0 = 0; /*0x74ad6c*/
  dword_B1D1E4 = 0; /*0x74ad71*/
  return 0; /*0x74ad76*/
}
} // namespace gamemd

// 0x74BBA0
namespace gamemd {
char * E4Recv_74BBA0::sub_74BBA0(int a2, int a3)
{

  char *v4; // ecx

  *(unsigned int *)this = a2; /*0x74bbae*/
  v4 = (unsigned char *)this + 12; /*0x74bbb0*/
  *((unsigned char *)this + 4) = 0; /*0x74bbb6*/
  *((unsigned int *)this + 2) = -1; /*0x74bbb9*/
  *((unsigned int *)v4 + 1) = 0; /*0x74bbc0*/
  *((unsigned int *)v4 + 2) = 0; /*0x74bbc3*/
  v4[12] = 1; /*0x74bbc6*/
  v4[13] = 0; /*0x74bbca*/
  *(unsigned int *)v4 = &vt_VectorClass; /*0x74bbcd*/
  (*(void (**)(char *, unsigned int, int))(*(unsigned int *)v4 + 8))(v4, (unsigned int)(a2 + 7) >> 3, a3); /*0x74bbda*/
  return this; /*0x74bbdf*/

}
} // namespace gamemd

// 0x74BF40
namespace gamemd {
void E4Recv_74BF40::sub_74BF40(unsigned int a2)
{

  unsigned int v3; // edi
  void *vtable2; // edx

  v3 = a2; /*0x74bf44*/
  if ( (void *)a2 >= this->AbstractClass ) /*0x74bf4a*/
    v3 = -1; /*0x74bf4c*/
  vtable2 = ((unsigned int *)this)[0]; /*0x74bf4f*/
  if ( (void *)v3 != vtable2 ) /*0x74bf54*/
  {
    if ( vtable2 != (void *)-1 ) /*0x74bf59*/
      SetBitfieldBit(((unsigned int *)this)[0], (int)vtable2, LOBYTE(((unsigned int *)this)[0])); /*0x74bf64*/
    if ( v3 != -1 ) /*0x74bf6c*/
      LOBYTE(((unsigned int *)this)[0]) = BitArray::TestBit(((unsigned int *)this)[0], v3); /*0x74bf78*/
    ((unsigned int *)this)[0] = (void *)v3; /*0x74bf7b*/
  }

}
} // namespace gamemd

// 0x74C170
namespace gamemd {
int sub_74C170()
{
  dword_B1D260 = 0; /*0x74c172*/
  dword_B1D264 = 0; /*0x74c177*/
  dword_B1D268 = 0; /*0x74c17c*/
  dword_B1D26C = 0; /*0x74c181*/
  return 0; /*0x74c186*/
}
} // namespace gamemd

// 0x74C190
namespace gamemd {
void sub_74C190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x74c19c*/
  dbl_B1D278 = Math::Sqrt(v0 + v0); /*0x74c1ae*/
}
} // namespace gamemd

// 0x74C1C0
namespace gamemd {
void sub_74C1C0()
{
  dbl_B1D2E0 = dbl_B1D278 / 60.0; /*0x74c1cc*/
}
} // namespace gamemd

// 0x74C1E0
namespace gamemd {
void sub_74C1E0()
{
  dbl_B1D2C8 = 1.0 / dbl_B1D2E0; /*0x74c1ec*/
}
} // namespace gamemd

// 0x74C200
namespace gamemd {
void sub_74C200()
{
  dbl_B1D2C0 = 0.0174532925199433 * 45.0; /*0x74c20c*/
}
} // namespace gamemd

// 0x74C220
namespace gamemd {
void sub_74C220()
{
  dbl_B1D280 = 0.0174532925199433 * 60.0; /*0x74c22c*/
}
} // namespace gamemd

// 0x74C240
namespace gamemd {
void sub_74C240()
{
  dbl_B1D258 = 0.0174532925199433 * 90.0; /*0x74c24c*/
}
} // namespace gamemd

// 0x74C260
namespace gamemd {
long long sub_74C260()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D258 - dbl_B1D280); /*0x74c272*/
  result = Math::RoundToInt(v0 * dbl_B1D278 * 0.5); /*0x74c286*/
  dword_B1D2E8 = result; /*0x74c28b*/
  return result; /*0x74c290*/
}
} // namespace gamemd

// 0x74C2A0
namespace gamemd {
void sub_74C2A0()
{
  dbl_B1D288 = Math::ArcTan((double)dword_B1D2E8 * 0.00390625); /*0x74c2b7*/
}
} // namespace gamemd

// 0x74C2D0
namespace gamemd {
void sub_74C2D0()
{
  dbl_B1D2B8 = Math::ArcTan((double)(2 * dword_B1D2E8) / dbl_B1D278); /*0x74c2f2*/
}
} // namespace gamemd

// 0x74C300
namespace gamemd {
long long sub_74C300()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D2E8) + 0.5); /*0x74c31b*/
  dword_B1D2DC = result; /*0x74c320*/
  return result; /*0x74c326*/
}
} // namespace gamemd

// 0x74C330
namespace gamemd {
int sub_74C330()
{
  word_B1D270 = 0; /*0x74c332*/
  word_B1D272 = 0; /*0x74c338*/
  return 0; /*0x74c33e*/
}
} // namespace gamemd

// 0x74C340
namespace gamemd {
int sub_74C340()
{
  dword_B1D2A8 = 0; /*0x74c342*/
  dword_B1D2AC = 0; /*0x74c347*/
  dword_B1D2B0 = 0; /*0x74c34c*/
  return 0; /*0x74c351*/
}
} // namespace gamemd

// 0x74C360
namespace gamemd {
int sub_74C360()
{
  dword_B1D2D8 = 0; /*0x74c365*/
  dword_B1D2D0 = 128; /*0x74c36f*/
  dword_B1D2D4 = 128; /*0x74c374*/
  return 128; /*0x74c379*/
}
} // namespace gamemd

// 0x74C380
namespace gamemd {
int sub_74C380()
{
  dword_B1D294 = 0; /*0x74c387*/
  dword_B1D298 = 0; /*0x74c38c*/
  byte_B1D29C = 1; /*0x74c391*/
  byte_B1D29D = 0; /*0x74c398*/
  stru_B1D290 = (int)&off_7F663C; /*0x74c39d*/
  dword_B1D2A4 = 10; /*0x74c3a7*/
  dword_B1D2A0 = 0; /*0x74c3b1*/
  return atexit(sub_74C3C0); /*0x74c3bc*/
}
} // namespace gamemd

// 0x74C3C0
namespace gamemd {
void sub_74C3C0()
{
  if ( (byte_B1D250 & 1) == 0 ) /*0x74c3ca*/
  {
    stru_B1D290 = (int)&VectorClass_VeinholeMonsterClass___vftable; /*0x74c3ce*/
    byte_B1D250 |= 1u; /*0x74c3e1*/
    if ( dword_B1D294 ) /*0x74c3e7*/
    {
      if ( byte_B1D29D ) /*0x74c3f1*/
      {
        RA2_OPDEL(dword_B1D294); /*0x74c3f4*/
        dword_B1D294 = 0; /*0x74c3fc*/
      }
    }
    byte_B1D29D = 0; /*0x74c406*/
    dword_B1D298 = 0; /*0x74c40d*/
  }
}
} // namespace gamemd

// 0x74F3B0
namespace gamemd {
int _::Seek(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x74f3ba*/

}
}
// 0x74F63A
namespace gamemd {
void E4Recv_74F63A::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_0()
{

  *(unsigned int *)this = 0; /*0x74f63a*/

}
} // namespace gamemd

// 0x74F650
namespace gamemd {
VectorClass_flat * _::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74f653*/
  *Block = &vt_VectorClass; /*0x74f656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x74f660*/
  {
    __3_YAXPAX_Z(v3); /*0x74f668*/
    *(Block + 1) = 0; /*0x74f670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x74f67b*/
  *(Block + 2) = 0; /*0x74f681*/
  if ( (a2 & 1) != 0 ) /*0x74f688*/
    __3_YAXPAX_Z(Block); /*0x74f68b*/
  return Block; /*0x74f695*/

}
} // namespace gamemd

// 0x74F730
namespace gamemd {
unsigned int * E4Recv_74F730::sub_74F730()
{

  int v2; // edx

  v2 = this->ambientSoundController[2]; /*0x74f734*/
  ((unsigned int *)this)[0] = 0; /*0x74f737*/
  LOWORD(((unsigned int *)this)[0]) = 0; /*0x74f73d*/
  HIWORD(((unsigned int *)this)[0]) = 0; /*0x74f741*/
  this->ambientSoundController[0] = 0; /*0x74f745*/
  this->ambientSoundController[1] = 0; /*0x74f748*/
  this->ambientSoundController[2] = v2 & 0xFFFFFFF0; /*0x74f74b*/
  this->vtable1 = &vt_VersionClass; /*0x74f74e*/
  BYTE2(this->owningHouseIndex) = 0; /*0x74f754*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x74f757*/
  return this; /*0x74f75a*/

}
} // namespace gamemd

// 0x74FDC0
namespace gamemd {
char * sub_74FDC0()
{
  signed int FileVersionInfoSizeA; // eax
  DWORD v1; // esi
  void *v2; // ebx
  unsigned int puLen; // [esp+4h] [ebp-190h] BYREF
  LPVOID lpBuffer; // [esp+8h] [ebp-18Ch] BYREF
  DWORD dwHandle; // [esp+Ch] [ebp-188h] BYREF
  CHAR SubBlock[128]; // [esp+10h] [ebp-184h] BYREF
  CHAR Filename[260]; // [esp+90h] [ebp-104h] BYREF

  if ( !byte_846358 ) /*0x74fdce*/
    return off_846158; /*0x74fdce*/
  byte_846358 = 0; /*0x74fde8*/
  if ( !GetModuleFileNameA(g_hInstance, Filename, 0x104u) ) /*0x74fdef*/
    return off_846158; /*0x74fdef*/
  dwHandle = 1; /*0x74fe0a*/
  FileVersionInfoSizeA = GetFileVersionInfoSizeA(Filename, &dwHandle); /*0x74fe12*/
  v1 = FileVersionInfoSizeA; /*0x74fe17*/
  if ( FileVersionInfoSizeA <= 0 ) /*0x74fe1b*/
    return off_846158; /*0x74fee3*/
  v2 = RA2_OPNEW(FileVersionInfoSizeA); /*0x74fe2f*/
  if ( GetFileVersionInfoA(Filename, dwHandle, v1, v2) ) /*0x74fe3c*/
  {
    VerQueryValueA(v2, ::SubBlock, &lpBuffer, &puLen); /*0x74fe59*/
    if ( puLen ) /*0x74fe64*/
    {
      sprintf( /*0x74fe81*/
        SubBlock,
        "\\StringFileInfo\\%04d%04d\\ProductVersion",
        *(uint16_t *)lpBuffer,
        *((uint16_t *)lpBuffer + 1));
      VerQueryValueA(v2, SubBlock, &lpBuffer, &puLen); /*0x74fe99*/
      if ( puLen ) /*0x74fea4*/
        strcpy(off_846158, (const char *)lpBuffer); /*0x74fec2*/
    }
  }
  RA2_OPDEL(v2); /*0x74fecd*/
  return off_846158; /*0x74fedb*/
}
} // namespace gamemd

// 0x74FF40
namespace gamemd {
void ObjectClass::nullsub_69()
{

  ; /*0x74ff40*/

}
} // namespace gamemd
