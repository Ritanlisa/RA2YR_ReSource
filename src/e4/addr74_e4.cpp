// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FileClass_e4.hpp"
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
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_e4_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int LookupWaypointName(ObjectClass *p_this);  // x4:ida@0x5b3910
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aViscLrgShp[13];  // data: 0x84599c truth(IDA G42.57w9)
extern char aViscSmlShp[13];  // data: 0x8459ac truth(IDA G42.57w9)


// 0x743270
namespace gamemd {  // G42.18 ns repair
Coord * * PlaceScenarioUnits(void * a1, void * a2, void * aUnits)
{

  INIClass *v2; // esi
  signed int KeyCount; // eax
  int v4; // ecx
  unsigned __int8 *StringByIndex; // eax
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
  unsigned __int16 *v16; // eax
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
  unsigned __int16 *v37; // eax
  int v38; // edi
  int v39; // eax
  unsigned int v40; // edi
  int i; // ecx
  unsigned int v42; // eax
  unsigned int *v43; // edx
  unsigned __int8 *v44; // eax
  void **v46; // [esp+14h] [ebp-C0h] BYREF
  void *Block; // [esp+18h] [ebp-BCh]
  int v48; // [esp+1Ch] [ebp-B8h]
  char v49; // [esp+20h] [ebp-B4h]
  char v50; // [esp+21h] [ebp-B3h]
  int v51; // [esp+24h] [ebp-B0h]
  int v52; // [esp+28h] [ebp-ACh]
  unsigned __int16 *v53; // [esp+2Ch] [ebp-A8h]
  int v54; // [esp+30h] [ebp-A4h]
  unsigned __int16 *v55; // [esp+34h] [ebp-A0h]
  unsigned __int16 *v56; // [esp+38h] [ebp-9Ch]
  INIClass *v57; // [esp+3Ch] [ebp-98h]
  unsigned int v58[2]; // [esp+40h] [ebp-94h] BYREF
  int v59; // [esp+48h] [ebp-8Ch]
  int v60; // [esp+4Ch] [ebp-88h]
  int v61; // [esp+50h] [ebp-84h]
  char String[128]; // [esp+54h] [ebp-80h] BYREF

  v2 = a1; /*0x743278*/
  v57 = a1; /*0x74327b*/
  INIClass::ResetSection(a1); /*0x74327f*/
  Block = 0; /*0x74328e*/
  v49 = 1; /*0x743292*/
  v46 = &g_ptr_7E4E78; /*0x743297*/
  v52 = 10; /*0x74329f*/
  v51 = 0; /*0x7432a7*/
  v50 = 0; /*0x7432ab*/
  v48 = 0; /*0x7432af*/
  KeyCount = INIClass::GetKeyCount(v2->__pad_0, (unsigned __int8 *)aUnits); /*0x7432b3*/
  v4 = 0; /*0x7432b8*/
  v61 = KeyCount; /*0x7432bc*/
  v54 = 0; /*0x7432c0*/
  if ( KeyCount > 0 ) /*0x7432c4*/
  {
    while ( 1 ) /*0x7432dd*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v2->__pad_0, (unsigned __int8 *)aUnits, v4); /*0x7432dd*/
      INIClass::GetString(v2, (unsigned __int8 *)aUnits, StringByIndex, 0, String, 128); /*0x7432f6*/
      v6 = strtok(String, Delimiter); /*0x743305*/
      v7 = HouseClass::FindByName(v6); /*0x743314*/
      if ( v7 != -1 ) /*0x743319*/
      {
        v8 = strtok(0, Delimiter); /*0x743325*/
        Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v8); /*0x74333a*/
        v10 = (void *)*(&dword_A8022C->ptr_0 + v7); /*0x74333f*/
        if ( Index != -1 ) /*0x743342*/
        {
          v11 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x74334d*/
          if ( v11 ) /*0x743357*/
          {
            v12 = UnitClass::Construct(v11, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.ptr_8 + 3) + 4 * Index), v10); /*0x74336f*/
            if ( v12 ) /*0x743373*/
            {
              v13 = strtok(0, Delimiter); /*0x74337f*/
              v60 = atoi(v13); /*0x74338d*/
              if ( *(int *)&stru_A8E960.random[520] < 4 ) /*0x74339f*/
              {
                v17 = strtok(0, Delimiter); /*0x7433d0*/
                v18 = atoi(v17); /*0x7433d6*/
                LOWORD(v55) = v18 % 128; /*0x7433f1*/
                HIWORD(v55) = v18 / 128; /*0x7433fb*/
                v16 = v55; /*0x743400*/
              }
              else
              {
                v14 = strtok(0, Delimiter); /*0x7433a1*/
                LOWORD(v56) = atoi(v14); /*0x7433b2*/
                v15 = strtok(0, Delimiter); /*0x7433b7*/
                HIWORD(v56) = atoi(v15); /*0x7433c2*/
                v16 = v56; /*0x7433c7*/
              }
              v53 = v16; /*0x743404*/
              v58[0] = ((__int16)v16 << 8) + 128; /*0x743429*/
              v58[1] = (SHIWORD(v16) << 8) + 128; /*0x74342d*/
              v59 = 0; /*0x743431*/
              v19 = strtok(0, Delimiter); /*0x743435*/
              v20 = atoi(v19); /*0x743446*/
              v21 = strtok(0, Delimiter); /*0x743448*/
              v22 = LookupWaypointName((ObjectClass *)v21); /*0x743457*/
              v23 = strtok(0, Delimiter); /*0x743460*/
              v24 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v23); /*0x74346a*/
              if ( v24 ) /*0x743471*/
              {
                v25 = TeamClass::FindOrCreate(v24); /*0x743475*/
                if ( v25 ) /*0x74347c*/
                  ObjectClass::SetReference((ObjectClass *)v12, v25); /*0x743481*/
              }
              v26 = strtok(0, Delimiter); /*0x74348d*/
              if ( v26 ) /*0x743497*/
              {
                v27 = atoi(v26); /*0x74349a*/
                FootClass::SetField(&v12->veterancy, v27); /*0x7434a9*/
              }
              v28 = strtok(0, Delimiter); /*0x7434b5*/
              if ( v28 ) /*0x7434bf*/
                v12->displayProductionTo = atoi(v28); /*0x7434ca*/
              v29 = strtok(0, Delimiter); /*0x7434d7*/
              if ( v29 ) /*0x7434e1*/
              {
                v30 = atoi(v29) != 0; /*0x7434ee*/
                v12->onBridge = v30; /*0x7434f3*/
                if ( v30 ) /*0x7434f9*/
                  v59 = dword_B1D0AC + Cell::GetGroundHeight(v58); /*0x743510*/
              }
              v31 = strtok(0, Delimiter); /*0x74351b*/
              if ( v31 ) /*0x743525*/
              {
                v32 = atoi(v31); /*0x743531*/
                if ( v51 < v48 /*0x74355f*/
                  || (v50 || !v48)
                  && v52 > 0
                  && ((unsigned __int8 (*)(void ***, int, unsigned int))v46[2])(&v46, v52 + v48, 0) )
                {
                  v33 = v51++; /*0x74356a*/
                  *((unsigned int *)Block + v33) = v32; /*0x743575*/
                }
              }
              v34 = strtok(0, Delimiter); /*0x74357f*/
              if ( v34 ) /*0x743589*/
                v12->isRecruitableByAlly_d = atoi(v34) != 0; /*0x743599*/
              v35 = strtok(0, Delimiter); /*0x7435a6*/
              if ( v35 ) /*0x7435b0*/
                v12->isRecruitableByEnemy_d = atoi(v35) != 0; /*0x7435c0*/
              if ( (*(unsigned __int8 (**)(int, unsigned int *, int, int))(*(unsigned int *)v12 + 216))( /*0x7435d0*/
                     v12,
                     v58,
                     v20,
                     a2) )
              {
                v36 = v12->Type; /*0x7435de*/
                LOWORD(v37) = Math::RoundToInt((double)v61 * (double)*(int *)(v36 + 160) * 0.00390625); /*0x7435f0*/
                v12->health = v37; /*0x7435f5*/
                v38 = v36->Strength; /*0x7435f8*/
                if ( (int)v37 > v38 - 3 ) /*0x743603*/
                  v12->health = v38; /*0x743605*/
                if ( !v12->health ) /*0x743608*/
                  v12->health = 1; /*0x74360f*/
                v39 = *(unsigned int *)v12; /*0x743619*/
                a2 = 0; /*0x74361b*/
                v12->estimatedHealth = *(unsigned int *)(v12 + 108); /*0x743620*/
                (*(void (**)(int, int))(v39 + 488))(v12, v22); /*0x743623*/
                if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v12 + 512))(v12) ) /*0x74362d*/
                  (*(void (**)(int))(*(unsigned int *)v12 + 492))(v12); /*0x74363b*/
              }
              else
              {
                a2 = 1; /*0x743645*/
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
  v40 = dword_8B4118; /*0x743664*/
  for ( i = 0; i < dword_8B4118; ++i ) /*0x74366e*/
  {
    v42 = *((unsigned int *)Block + i); /*0x74367a*/
    v43 = (unsigned int *)*((unsigned int *)dword_8B410C + i); /*0x74367d*/
    if ( v42 == -1 || v42 >= v40 ) /*0x743687*/
    {
      v43[434] = 0; /*0x74369b*/
    }
    else
    {
      v44 = (unsigned __int8 *)*((unsigned int *)dword_8B410C + v42); /*0x743689*/
      v43[434] = (unsigned int)v44; /*0x74368c*/
      v44[1744] = 1; /*0x743692*/
    }
    v40 = dword_8B4118; /*0x7436a1*/
  }
  v46 = &g_ptr_7E4DB8; /*0x7436b4*/
  if ( Block ) /*0x7436bd*/
  {
    if ( v50 ) /*0x7436c5*/
      __3_YAXPAX_Z(Block); /*0x7436c8*/
  }

}
}  // G42.18 ns repair
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
  unsigned __int16 v11; // ax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int v20; // ecx
  unsigned int *v21; // edx
  unsigned int v22; // edi
  unsigned __int16 v23; // ax
  unsigned int v24; // edx
  int v25; // eax
  __int16 *v26; // edi
  int *v27; // ebx
  __int16 v28; // cx
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
  unsigned __int16 *v39; // eax
  int v40; // esi
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // bp
  unsigned __int16 *v43; // eax
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // bp
  int v46; // edi
  unsigned __int16 v47; // cx
  int v48; // edx
  int v49; // eax
  int *v50; // ecx
  char *v51; // [esp+Ch] [ebp-Ch]
  char *v52; // [esp+10h] [ebp-8h]
  unsigned int v53; // [esp+14h] [ebp-4h]
  int v54; // [esp+20h] [ebp+8h]
  unsigned __int16 *v55; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v56; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v57; // [esp+24h] [ebp+Ch]
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
              v39 = (unsigned __int16 *)(a1 + 32 * *v55++); /*0x748670*/
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
                if ( ((((*v32) >> 8) & 0xFF) & 0x80u) == 0 ) /*0x748619*/
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
        v26 = (__int16 *)(a1 + 32 * *a2); /*0x748556*/
        v56 = a2 + 1; /*0x74855b*/
        do /*0x7485a2*/
        {
          v27 = v9; /*0x74855f*/
          v60 = 4; /*0x748561*/
          do /*0x748591*/
          {
            v28 = *v26; /*0x748569*/
            if ( ((((*v26) >> 8) & 0xFF) & 0x80u) == 0 ) /*0x74856f*/
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
              v20 = *v17; /*0x74848a*/
              v15 = v17 + 1; /*0x74848c*/
              v21 = v9 + 1; /*0x748491*/
              if ( v14 ) /*0x748494*/
              {
                v22 = v14; /*0x748496*/
                do /*0x74849e*/
                {
                  *v21 = v20; /*0x748498*/
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
        v25 = *((unsigned __int16 *)dword_B1D14C + v23) | (*((unsigned __int16 *)dword_B1D14C + v23) << 16); /*0x7484ee*/
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
  unsigned __int16 *v16; // eax
  int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // bx
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
            if ( ((((*v12) >> 8) & 0xFF) & 0x80u) == 0 ) /*0x748b86*/
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
    v16 = (unsigned __int16 *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748bab*/
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
    v5 = (VoxelAnimTypeClass *)operator new(0x308u); /*0x74bb73*/
    if ( v5 ) /*0x74bb82*/
      return (v5)->Constructor(Source); /*0x74bb8f*/
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

  int *p_vfptr3; // esi
  void *v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax

  p_vfptr3 = &this->ptr_C; /*0x74bbff*/
  this->uniqueId = 0; /*0x74bc04*/
  this->abstractFlags = 0; /*0x74bc07*/
  LOBYTE(this->nextArrayIndex) = 1; /*0x74bc0a*/
  BYTE1(this->nextArrayIndex) = 0; /*0x74bc0e*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F65F4) */  /*0x74bc11*/
  this->ptr_8 = -1; /*0x74bc17*/
  LOBYTE(this->ptr_4) = *(unsigned char *)(a2 + 4); /*0x74bc21*/
  this->ptr_8 = *(unsigned int *)(a2 + 8); /*0x74bc27*/
  if ( &this->ptr_C == (int *)(a2 + 12) ) /*0x74bc2a*/
    goto LABEL_8; /*0x74bc2a*/
  (*(void (**)(int *))(*p_vfptr3 + 12))(p_vfptr3); /*0x74bc30*/
  v4 = *(void **)(a2 + 20); /*0x74bc33*/
  p_vfptr3[2] = (int)v4; /*0x74bc38*/
  if ( !v4 ) /*0x74bc3b*/
  {
    p_vfptr3[1] = 0; /*0x74bc7f*/
    *((unsigned char *)p_vfptr3 + 13) = 0; /*0x74bc82*/
LABEL_8:
    this->ptr_0 = *(unsigned int *)a2; /*0x74bc85*/
    return &this->ptr_0; /*0x74bc8d*/
  }
  v5 = (void *)__2_YAPAXI_Z((size_t)v4); /*0x74bc3e*/
  p_vfptr3[1] = (int)v5; /*0x74bc48*/
  if ( !v5 ) /*0x74bc4b*/
    goto LABEL_8; /*0x74bc4b*/
  v6 = p_vfptr3[2]; /*0x74bc4d*/
  v7 = 0; /*0x74bc50*/
  *((unsigned char *)p_vfptr3 + 13) = 1; /*0x74bc54*/
  if ( v6 <= 0 ) /*0x74bc58*/
    goto LABEL_8; /*0x74bc58*/
  do /*0x74bc6c*/
  {
    *(unsigned char *)(v7 + p_vfptr3[1]) = *(unsigned char *)(*(unsigned int *)(a2 + 16) + v7); /*0x74bc63*/
    ++v7; /*0x74bc69*/
  }
  while ( v7 < p_vfptr3[2] ); /*0x74bc6c*/
  this->ptr_0 = *(unsigned int *)a2; /*0x74bc74*/
  return &this->ptr_0; /*0x74bc78*/

}
}
// 0x74BCA0
namespace gamemd {
unsigned int * E4Recv_74BCA0::sub_74BCA0(int a2)
{

  void *ptr_4; // edx
  size_t v4; // eax
  int v5; // eax
  int abstractFlags; // ecx
  int v7; // eax

  ptr_4 = (void *)(this->M8); /*0x74bca6*/
  if ( ptr_4 != (void *)-1 ) /*0x74bcac*/
  {
    SetBitfieldBit(this->M16, (int)ptr_4, LOBYTE(this->M16)); /*0x74bcb7*/
    this->M8 = (unsigned int)((void *)-1); /*0x74bcbc*/
  }
  LOBYTE(this->M4) = *(unsigned char *)(a2 + 4); /*0x74bcd0*/
  this->M8 = (unsigned int)(*(void **)(a2 + 8)); /*0x74bcd8*/
  if ( &this->M8 == (void **)(a2 + 12) ) /*0x74bcdb*/
    goto LABEL_10; /*0x74bcdb*/
  (*((void (**)(void **))this->M12 + 3))(&this->M12); /*0x74bce1*/
  v4 = *(unsigned int *)(a2 + 20); /*0x74bce4*/
  this->M8 = v4; /*0x74bce9*/
  if ( !v4 ) /*0x74bcec*/
  {
    this->M4 = 0; /*0x74bd2c*/
    BYTE1(this->nextArrayIndex) = 0; /*0x74bd33*/
    LABEL_10:
    this->AbstractClass = *(void **)a2; /*0x74bd37*/
    return &this->AbstractClass; /*0x74bd39*/
  }
  v5 = (int)(__2_YAPAXI_Z(v4)); /*0x74bcef*/
  this->M4 = v5; /*0x74bcf7*/
  if ( !v5 ) /*0x74bcfc*/
    goto LABEL_10; /*0x74bcfc*/
  abstractFlags = this->M8; /*0x74bcfe*/
  v7 = 0; /*0x74bd01*/
  BYTE1(this->nextArrayIndex) = 1; /*0x74bd05*/
  if ( abstractFlags <= 0 ) /*0x74bd09*/
    goto LABEL_10; /*0x74bd09*/
  do /*0x74bd1d*/
  {
    *(unsigned char *)(this->M4 + v7) = *(unsigned char *)(v7 + *(unsigned int *)(a2 + 16)); /*0x74bd14*/
    ++v7; /*0x74bd1a*/
  }
  while ( v7 < this->M8 ); /*0x74bd1d*/
  this->AbstractClass = *(void **)a2; /*0x74bd23*/
  return &this->AbstractClass; /*0x74bd25*/

}
}
// 0x74BDC0
namespace gamemd {
int E4Recv_74BDC0::sub_74BDC0(unsigned int a2)
{

  void (**ptr_8)(void **); // edx
  unsigned int v12; // [esp+10h] [ebp+4h]

  void *ptr_4; // edx
  ptr_4 = (void *)(this->M8); /*0x74bdc8*/
  if ( ptr_4 != (void *)-1 ) /*0x74bdcd*/
  {
    SetBitfieldBit(this->M16, (int)ptr_4, LOBYTE(this->M16)); /*0x74bdd8*/
    this->M8 = (unsigned int)((void *)-1); /*0x74bddd*/
  }
  if ( a2 ) /*0x74bde6*/
  {
    char *ptr_0; // edi
    ptr_0 = (char *)this->AbstractClass; /*0x74bdeb*/
    unsigned __int8 v6; // al
    v6 = (*((int (**)(void **, unsigned int, unsigned int))this->M8 + 2))(&this->M8, (a2 + 7) >> 3, 0); /*0x74bdf9*/
    this->AbstractClass = (void *)a2; /*0x74be01*/
    v12 = v6; /*0x74be03*/
    if ( v6 && (unsigned int)ptr_0 < a2 ) /*0x74be0b*/
    {
      do /*0x74be53*/
      {
        char *v7; // edx
        v7 = (char *)this->M8; /*0x74be0e*/
        if ( v7 != ptr_0 ) /*0x74be13*/
        {
          int v8; // ebp
          v8 = (int)ptr_0; /*0x74be17*/
          if ( ptr_0 >= this->AbstractClass ) /*0x74be1b*/
            v8 = -1; /*0x74be1d*/
          if ( (char *)v8 != v7 ) /*0x74be22*/
          {
            if ( v7 != (char *)-1 ) /*0x74be27*/
              SetBitfieldBit(this->M16, (int)v7, LOBYTE(this->M16)); /*0x74be32*/
            if ( v8 != -1 ) /*0x74be3a*/
              LOBYTE(this->M4) = BitArray::TestBit(this->M4, v8); /*0x74be46*/
            this->M8 = (unsigned int)((void *)v8); /*0x74be49*/
          }
        }
        ++ptr_0; /*0x74be4c*/
        LOBYTE(this->M4) = 0; /*0x74be4d*/
      }
      while ( (unsigned int)ptr_0 < a2 ); /*0x74be53*/
    }
    return v12; /*0x74be56*/
  }
  else
  {
    void *v10; // edx
    v10 = (void *)(this->M8); /*0x74be60*/
    if ( v10 != (void *)-1 ) /*0x74be65*/
    {
      SetBitfieldBit(this->M16, (int)v10, LOBYTE(this->M16)); /*0x74be70*/
      this->M8 = (unsigned int)((void *)-1); /*0x74be75*/
    }
    ptr_8 = (void (**)(void **))this->M12; /*0x74be78*/
    this->AbstractClass = 0; /*0x74be7e*/
    ptr_8[3](&this->M12); /*0x74be84*/
    return 1; /*0x74be89*/
  }

}
}
// 0x74D760
namespace gamemd {
int CleanupVeinholeSystem()
{

  int i; // esi
  for ( i = dword_B1D2A0 - 1; i >= 0; --i ) /*0x74d76e*/
  {
    int v1; // ecx
    v1 = *((unsigned int *)dword_B1D294 + i); /*0x74d776*/
    if ( v1 ) /*0x74d77b*/
      (*(void (**)(int, int))(*(unsigned int *)v1 + 32))(v1, 1); /*0x74d781*/
  }
  int result; // eax
  result = (int)dword_B1D294; /*0x74d787*/
  dword_B1D2A0 = 0; /*0x74d78c*/
  if ( dword_B1D294 && byte_B1D29D ) /*0x74d79c*/
  {
    operator delete((void *)(dword_B1D294)); /*0x74d79f*/
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

  v2 = Object::ComputeAllocationSize(); /*0x74de9e*/
  v19 = v2; /*0x74dea2*/
  if ( !a1 ) /*0x74dea6*/
  {
LABEL_17:
    v4 = dword_B1D2F0; /*0x74dffd*/
    goto LABEL_18; /*0x74dffd*/
  }
  for ( i = dword_B1D2A0 - 1; i >= 0; --i ) /*0x74deb8*/
    System_Init_74E8A0(*((unsigned int *)dword_B1D294 + i)); /*0x74dec3*/
  v4 = dword_B1D2F0; /*0x74decb*/
  if ( dword_B1D2F0 ) /*0x74ded2*/
  {
    __3_YAXPAX_Z(dword_B1D2F0); /*0x74ded5*/
    v4 = 0; /*0x74dedd*/
    dword_B1D2F0 = 0; /*0x74dedf*/
  }
  v5 = dword_B1D2A0 - 1; /*0x74deea*/
  if ( dword_B1D2A0 - 1 >= 0 ) /*0x74deef*/
  {
    do /*0x74dff7*/
    {
      v6 = __2_YAPAXI_Z(8 * dword_8871E0->AircraftFogReveal); /*0x74df08*/
      if ( !v6 ) /*0x74df12*/
        v6 = 0; /*0x74df1b*/
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 180) = v6; /*0x74df28*/
      v7 = __2_YAPAXI_Z(0x14u); /*0x74df33*/
      if ( v7 ) /*0x74df3a*/
      {
        VeinholeShrinkRate = dword_8871E0->AircraftFogReveal; /*0x74df42*/
        v7[3] = 0; /*0x74df48*/
        v7[1] = VeinholeShrinkRate; /*0x74df4b*/
        v7[4] = -1; /*0x74df4e*/
        *v7 = 0; /*0x74df5c*/
        v9 = __2_YAPAXI_Z(4 * VeinholeShrinkRate + 4); /*0x74df5f*/
        v10 = v7[1]; /*0x74df64*/
        v7[2] = v9; /*0x74df67*/
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
        v7 = 0; /*0x74df84*/
      }
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 176) = v7; /*0x74df90*/
      *(unsigned int *)(*((unsigned int *)dword_B1D294 + v5) + 196) = __2_YAPAXI_Z(v2); /*0x74dfa9*/
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
    dword_B1D2F0 = __2_YAPAXI_Z(v2); /*0x74e00f*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x74e019*/
  for ( k = LayerClass::CellIteratorNext(&dword_87F7E8); k; k = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x74e02f*/
    *(unsigned int *)(k + 320) &= ~0x8000u; /*0x74e03e*/
  memset(dword_B1D2F0, 0, v2); /*0x74e05c*/
  for ( m = dword_B1D2A0 - 1; m >= 0; --m ) /*0x74e06f*/
  {
    v16 = *((unsigned int *)dword_B1D294 + m); /*0x74e077*/
    if ( *(unsigned char *)(v16 + 256) ) /*0x74e07a*/
      RulesClass::Reset(); /*0x74e084*/
    else
      ProcessVeinholeMonster(v16); /*0x74e08b*/
  }
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x74e098*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x74e0a2*/
  for ( n = result; result; n = result ) /*0x74e0ab*/
  {
    if ( *(unsigned int *)(n + 68) == 126 && !*((unsigned char *)dword_B1D2F0 + Cell::PosToIndex((__int16 *)(n + 36))) ) /*0x74e0c5*/
      *(unsigned int *)(n + 68) = -1; /*0x74e0cb*/
    *(unsigned int *)(n + 320) &= ~0x8000u; /*0x74e0da*/
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x74e0e5*/
  }
  return result; /*0x74e0f0*/

}
}
// 0x74F3C0
namespace gamemd {
char _e4::AddRef(int a2)
{


  int m_8; // esi
  m_8 = (int)(this->ptr_8); /*0x74f3c2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x74f3cd*/
  {
    int v3 = 0; // edx /*0x74f3cf*/
    if ( m_8 <= 0 ) /*0x74f3d3*/
      return 1; /*0x74f3f3*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->u32_4); /*0x74f3d5*/
    int v5; // ecx
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
char _e4::Release(int a2, unsigned int * a3)
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
      if ( *&this->u32_4 ) /*0x74f445*/
      {
        m_8 = this->m_8; /*0x74f44c*/
        if ( a2 < m_8 ) /*0x74f451*/
          m_8 = a2; /*0x74f453*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x74f459*/
          ++i; /*0x74f45e*/
        if ( BYTE1(this->m_C) ) /*0x74f46b*/
        {
          __3_YAXPAX_Z(*&this->u32_4); /*0x74f476*/
          *&this->u32_4 = 0; /*0x74f47e*/
        }
      }
      *&this->u32_4 = v4; /*0x74f487*/
      this->m_8 = a2; /*0x74f48f*/
      BYTE1(this->m_C) = a3 == 0; /*0x74f492*/
      return 1; /*0x74f498*/
    }
    else
    {
      return 0; /*0x74f43f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVVeinholeMonsterClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x74f4a2*/
    return 1; /*0x74f4a8*/
  }

}
}
// 0x74F4B0
namespace gamemd {
wchar_t * _e4::ddtor()
{

  if ( *&this->u32_4 && BYTE1(this->u32_C) ) /*0x74f4bd*/
  {
    __3_YAXPAX_Z(*&this->u32_4); /*0x74f4c3*/
    *&this->u32_4 = 0; /*0x74f4cb*/
  }
  BYTE1(this->u32_C) = 0; /*0x74f4ce*/
  this->ptr_8 = 0; /*0x74f4d1*/

}
} // namespace gamemd

// 0x74F4E0
namespace gamemd {
int _e4::Read(unsigned int * a2)
{

  if ( !this->u32_C ) /*0x74f4e0*/
    return 0; /*0x74f4e8*/
  int v3; // edx
  v3 = (int)(this->ptr_8); /*0x74f4ee*/
  int result = 0; // eax /*0x74f4f1*/
  if ( v3 <= 0 ) /*0x74f4f5*/
    return -1; /*0x74f50c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int *)this->u32_C + 4); *i != *a2; ++i ) /*0x74f4fb*/
  {
    if ( ++result >= v3 ) /*0x74f50a*/
      return -1; /*0x74f50a*/
  }
  return result; /*0x74f4ea*/
}
}
// 0x74F520
namespace gamemd {
unsigned int _e4::Write(int a2)
{
  if ( this->u32_C ) /*0x74f520*/
    return (unsigned int)(a2 - this->u32_4) >> 2; /*0x74f535*/
  else
    return 0; /*0x74f527*/
}
}
// 0x74FAE0
namespace gamemd {
AbstractClass * * E4Recv_74FAE0::sub_74FAE0()
{

  unsigned __int16 pN_high; // bp
  unsigned __int16 v6; // ax
  RawFileClass v9; // [esp+10h] [ebp-24h] BYREF

  if ( (this->ambientSoundController[2] & 8) == 0 ) /*0x74faef*/
  {
    (&v9)->Construct((int)g_Str_File_VERSION_TXT); /*0x74fafa*/
    if ( (unsigned __int8)(&v9)->Open(0) ) /*0x74fb04*/
    {
      FileClass::Read(&v9, (char *)&this->owningHouseIndex + 2, 16); /*0x74fb17*/
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
    (&v9)->Dtor(); /*0x74fb5c*/
    int v2; // eax
    v2 = this->ambientSoundController[2]; /*0x74fb61*/
    (v2) = ((v2) & ~0xFF) | ((v2 | 8) & 0xFF); /*0x74fb64*/
    this->ambientSoundController[2] = v2; /*0x74fb66*/
  }
  int v3; // eax
  v3 = this->ambientSoundController[2]; /*0x74fb69*/
  if ( (v3 & 4) != 0 ) /*0x74fb6e*/
  {
    pN_high = HIWORD(this->M10); /*0x74fb70*/
  }
  else
  {
    pN_high = 1; /*0x74fb76*/
    (v3) = ((v3) & ~0xFF) | ((v3 | 4) & 0xFF); /*0x74fb7b*/
    HIWORD(this->M10) = 1; /*0x74fb7d*/
    this->ambientSoundController[2] = v3; /*0x74fb81*/
  }
  if ( (DataGlobal_A8EC40 & 8) == 0 ) /*0x74fb8b*/
  {
    RawFileClass::Construct(&v9, (int)g_Str_File_VERSION_TXT); /*0x74fb9a*/
    if ( (unsigned __int8)(&v9)->Open(0) ) /*0x74fba4*/
    {
      FileClass::Read(&v9, &byte_A8ED0A, 16); /*0x74fbb8*/
      for ( DataGlobal_A8EB00[537] = 0; /*0x74fbd9*/
      stru_A8EB00.?[strlen(&stru_A8EB00.?[294]) + 293] == 13;
      stru_A8EB00.?[strlen(&stru_A8EB00.?[294]) + 293] = 0 )
      {
        ; /*0x74fbee*/
      }
    }
    else
    {
      DataGlobal_A8EB00[522] = 0; /*0x74fc07*/
    }
    (&v9)->Dtor(); /*0x74fc11*/
    int v5; // eax
    v5 = *(unsigned int *)&DataGlobal_A8EC40; /*0x74fc16*/
    LOBYTE(v5) = DataGlobal_A8EC40 | 8; /*0x74fc1b*/
    *(unsigned int *)&DataGlobal_A8EC40 = v5; /*0x74fc1d*/
  }
  if ( (DataGlobal_A8EC40 & 2) != 0 ) /*0x74fc2f*/
  {
    v6 = *(unsigned short *)&DataGlobal_A8EC04; /*0x74fc31*/
  }
  else
  {
    *(unsigned short *)&DataGlobal_A8EC04 = 1; /*0x74fc3e*/
    v6 = 1; /*0x74fc49*/
    *(unsigned int *)&DataGlobal_A8EC40 |= 2u; /*0x74fc4e*/
  }
  char *pVal; // esi
  pVal = (char *)&this->ptr_C; /*0x74fc60*/
  sprintf(pVal, "%d.%3.3d", v6, pN_high); /*0x74fc6a*/
  return pVal; /*0x74fc74*/

}
}
// 0x74FF30
namespace gamemd {
unsigned int * ObjectClass::ObjectClass::unknown_libname_35()
{

  this->AbstractClass = 0; /*0x74ff32*/
  return &this->AbstractClass; /*0x74ff38*/

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
  v0 = Math::Sin(dbl_B1D0C0 - dbl_B1D0E8); /*0x746fc2*/
  int64_t result; // rax
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
  return AbstractClass::processWeaponFire();
}
} // namespace gamemd

// 0x7473E0
namespace gamemd {
int sub_7473E0()
{
  int v2; // ecx

  if ( !dword_B1D13C ) /*0x7473e7*/
  {
    int v1; // esi
    v1 = operator new(0x20u); /*0x7473f1*/
    if ( v1 ) /*0x7473f8*/
    {
      *(unsigned int *)(v1 + 4) = 256; /*0x747409*/
      *(unsigned int *)(v1 + 8) = 256; /*0x74740c*/
      *(unsigned int *)(v1 + 12) = 0; /*0x74740f*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x747416*/
      *(unsigned int *)(v1 + 16) = 1; /*0x74741c*/
      Buffer::Init((Buffer *)(v1 + 20), 0, 0x10000); /*0x747423*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x747428*/
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
    ConvertClass *v3; // eax
    v3 = (ConvertClass *)operator new(0x188u); /*0x747450*/
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
  int result; // eax
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

  int result = a2; // eax /*0x748380*/
  if ( a2 > 0 ) /*0x748384*/
  {
    do /*0x74839e*/
    {
      uint16_t v3; // dx
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
  v1 = a1[512]; /*0x7490a0*/
  int result = 0; // eax /*0x7490a6*/
  if ( v1 > 0 ) /*0x7490aa*/
  {
    do /*0x7490b5*/
    {
      int v3; // esi
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
  v0 = Math::Sin(dbl_B1D150 - dbl_B1D178); /*0x749282*/
  int64_t result; // rax
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
  v0 = Math::Sin(dbl_B1D1D0 - dbl_B1D1F8); /*0x74ac52*/
  int64_t result; // rax
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
  v4 = &this->u8_C; /*0x74bbb0*/
  this->M4 = 0; /*0x74bbb6*/
  this->M8 = -1; /*0x74bbb9*/
  *((unsigned int *)v4 + 1) = 0; /*0x74bbc0*/
  *((unsigned int *)v4 + 2) = 0; /*0x74bbc3*/
  v4[12] = 1; /*0x74bbc6*/
  v4[13] = 0; /*0x74bbca*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F65F4) */  /*0x74bbcd*/
  (*(void (**)(char *, unsigned int, int))(*(unsigned int *)v4 + 8))(v4, (unsigned int)(a2 + 7) >> 3, a3); /*0x74bbda*/
  return this; /*0x74bbdf*/

}
} // namespace gamemd

// 0x74BF40
namespace gamemd {
void E4Recv_74BF40::sub_74BF40(unsigned int a2)
{


  unsigned int v3 = a2; // edi /*0x74bf44*/
  if ( (void *)a2 >= this->AbstractClass ) /*0x74bf4a*/
    v3 = -1; /*0x74bf4c*/
  void *ptr_4 = this->M8; // edx /*0x74bf4f*/
  if ( (void *)v3 != ptr_4 ) /*0x74bf54*/
  {
    if ( ptr_4 != (void *)-1 ) /*0x74bf59*/
      SetBitfieldBit(this->M16, (int)ptr_4, LOBYTE(this->M16)); /*0x74bf64*/
    if ( v3 != -1 ) /*0x74bf6c*/
      LOBYTE(this->M4) = BitArray::TestBit(this->M4, v3); /*0x74bf78*/
    this->M8 = (void *)v3; /*0x74bf7b*/
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
  v0 = Math::Sin(dbl_B1D258 - dbl_B1D280); /*0x74c272*/
  int64_t result; // rax
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
    stru_B1D290 = (int)&g_ptr_7E8500; /*0x74c3ce*/
    byte_B1D250 |= 1u; /*0x74c3e1*/
    if ( dword_B1D294 ) /*0x74c3e7*/
    {
      if ( byte_B1D29D ) /*0x74c3f1*/
      {
        operator delete((void *)(dword_B1D294)); /*0x74c3f4*/
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
int _e4::Seek(int a2)
{
  return *(unsigned int *)(this->u32_4 + 4 * a2); /*0x74f3ba*/
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
VectorClass_flat * _e4::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x74f653*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x74f656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x74f660*/
  {
    operator delete((v3)); /*0x74f668*/
    *(Block + 1) = 0; /*0x74f670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x74f67b*/
  *(Block + 2) = 0; /*0x74f681*/
  if ( (a2 & 1) != 0 ) /*0x74f688*/
    operator delete((Block)); /*0x74f68b*/
  return Block; /*0x74f695*/
}
} // namespace gamemd

// 0x74F730
namespace gamemd {
unsigned int ObjectClass::sub_74F730()
{

  int v2; // edx
  v2 = this->ambientSoundController[2]; /*0x74f734*/
  this->ptr_4 = 0; /*0x74f737*/
  (this->ptr_8) = 0; /*0x74f73d*/
  (*&this->ptr_8->AbstractClass_1) = 0; /*0x74f741*/
  this->ambientSoundController[0] = 0; /*0x74f745*/
  this->ambientSoundController[1] = 0; /*0x74f748*/
  this->ambientSoundController[2] = v2 & 0xFFFFFFF0; /*0x74f74b*/
  /* X11: ptr_0 install elided (implicit via VersionClass virtuals 0x74f74e) */
  (this->q02A) = 0; /*0x74f754*/
  (this->ptr_C) = 0; /*0x74f757*/
  return &this->ptr_0; /*0x74f75a*/
}
} // namespace gamemd

// 0x74FDC0
namespace gamemd {
char * sub_74FDC0()
{

  if ( !byte_846358 ) /*0x74fdce*/
    return off_846158; /*0x74fdce*/
  byte_846358 = 0; /*0x74fde8*/
  CHAR Filename[260]; // [esp+90h] [ebp-104h] BYREF
  if ( !GetModuleFileNameA(g_hInstance, Filename, 0x104u) ) /*0x74fdef*/
    return off_846158; /*0x74fdef*/
  DWORD dwHandle; // [esp+Ch] [ebp-188h] BYREF
  dwHandle = 1; /*0x74fe0a*/
  signed int FileVersionInfoSizeA; // eax
  FileVersionInfoSizeA = GetFileVersionInfoSizeA(Filename, &dwHandle); /*0x74fe12*/
  DWORD v1 = FileVersionInfoSizeA; // esi /*0x74fe17*/
  if ( FileVersionInfoSizeA <= 0 ) /*0x74fe1b*/
    return off_846158; /*0x74fee3*/
  void *v2; // ebx
  v2 = operator new(FileVersionInfoSizeA); /*0x74fe2f*/
  if ( GetFileVersionInfoA(Filename, dwHandle, v1, v2) ) /*0x74fe3c*/
  {
    unsigned int puLen; // [esp+4h] [ebp-190h] BYREF
    LPVOID lpBuffer; // [esp+8h] [ebp-18Ch] BYREF
    VerQueryValueA(v2, ::SubBlock, &lpBuffer, &puLen); /*0x74fe59*/
    if ( puLen ) /*0x74fe64*/
    {
      CHAR SubBlock[128]; // [esp+10h] [ebp-184h] BYREF
      sprintf( /*0x74fe81*/
        SubBlock,
        "\\StringFileInfo\\%04d%04d\\ProductVersion",
        *(uint16_t *)lpBuffer,
        lpBuffer->u32_4);
      VerQueryValueA(v2, SubBlock, &lpBuffer, &puLen); /*0x74fe99*/
      if ( puLen ) /*0x74fea4*/
        strcpy(off_846158, (const char *)lpBuffer); /*0x74fec2*/
    }
  }
  operator delete((v2)); /*0x74fecd*/
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
