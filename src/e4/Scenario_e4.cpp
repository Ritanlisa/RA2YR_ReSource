// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x44F820
namespace gamemd {
int Scenario::ReadTeams()
{
  int result; // eax
  int v3; // ecx
  uint8_t *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  void *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // ebp
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  unsigned int *v22; // esi
  int v23; // edi
  char *v24; // eax
  char *v25; // eax
  bool v26; // bl
  char *v27; // eax
  void *v28; // eax
  int v29; // esi
  void *v30; // eax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // edx
  unsigned int *v37; // ecx
  int v38; // eax
  int v39; // edx
  unsigned char *v40; // ecx
  int v41; // edi
  unsigned char **v42; // ebp
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v48; // edi
  void *v49; // eax
  int *v50; // eax
  int v51; // edx
  unsigned int *Value; // eax
  int v53; // esi
  unsigned int v54; // eax
  bool v55; // [esp+8h] [ebp-DCh]
  bool v56; // [esp+9h] [ebp-DBh]
  bool v57; // [esp+Ah] [ebp-DAh]
  bool v58; // [esp+Bh] [ebp-D9h]
  int v60; // [esp+Ch] [ebp-D8h]
  int v61; // [esp+10h] [ebp-D4h]
  int v62; // [esp+14h] [ebp-D0h]
  int IndexByName; // [esp+18h] [ebp-CCh]
  int v64; // [esp+18h] [ebp-CCh]
  int v65; // [esp+1Ch] [ebp-C8h]
  int v66; // [esp+20h] [ebp-C4h]
  int v67; // [esp+24h] [ebp-C0h]
  int v68; // [esp+28h] [ebp-BCh]
  int v69; // [esp+2Ch] [ebp-B8h]
  int v70; // [esp+30h] [ebp-B4h]
  unsigned int v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  unsigned int v74[3]; // [esp+48h] [ebp-9Ch] BYREF
  unsigned int v75[3]; // [esp+54h] [ebp-90h] BYREF
  int v76; // [esp+60h] [ebp-84h] BYREF
  char String[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection(); /*0x44f82d*/
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = INIClass::GetKeyCount(this, (uint8_t *)aStructures); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  result = result; /*0x44f853*/
  v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(this, (uint8_t *)aStructures, v3); /*0x44f874*/
      INIClass::GetString((uint8_t ***)this, (uint8_t *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      v5 = strtok(String, Delimiter); /*0x44f89e*/
      v6 = HouseClass::FindByName(v5); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = (void *)*((unsigned int *)HouseClass_Array + v6); /*0x44f8bc*/
        v65 = (int)v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !g_GameMode_Current[0] || v7 != HouseClass_Player ) /*0x44f8db*/
          {
            v8 = strtok(0, Delimiter); /*0x44f8e8*/
            IndexByName = BuildingTypeClass::FindIndexByName(v8); /*0x44f8fa*/
            if ( IndexByName != -1 ) /*0x44f8fe*/
            {
              v9 = strtok(0, Delimiter); /*0x44f90b*/
              v61 = atoi(v9); /*0x44f919*/
              if ( dword_A8ED7C < 4 ) /*0x44f92c*/
              {
                v13 = strtok(0, Delimiter); /*0x44f95e*/
                v14 = atoi(v13); /*0x44f964*/
                IDA_LOWORD(v66) = v14 % 128; /*0x44f97f*/
                IDA_HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                v10 = strtok(0, Delimiter); /*0x44f92e*/
                IDA_LOWORD(v69) = atoi(v10); /*0x44f940*/
                v11 = strtok(0, Delimiter); /*0x44f945*/
                IDA_HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v12 = v12; /*0x44f999*/
              v15 = strtok(0, Delimiter); /*0x44f99d*/
              v67 = atoi(v15); /*0x44f9af*/
              v16 = strtok(0, Delimiter); /*0x44f9bf*/
              v58 = 0; /*0x44f9c1*/
              v17 = strtok(0, Delimiter); /*0x44f9c6*/
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              v57 = 0; /*0x44f9e9*/
              v18 = strtok(0, Delimiter); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              v55 = 1; /*0x44fa11*/
              v19 = strtok(0, Delimiter); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              v20 = strtok(0, Delimiter); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = atoi(v20); /*0x44fa56*/
              v70 = 1; /*0x44fa61*/
              v21 = strtok(0, Delimiter); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                v70 = atoi(v21); /*0x44fa7e*/
              v22 = v73; /*0x44fa82*/
              v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                v24 = strtok(0, Delimiter); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *v22 = BuildingTypeClass::FindIndexByName(v24); /*0x44faa5*/
                ++v22; /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              v56 = 0; /*0x44fab4*/
              v25 = strtok(0, Delimiter); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              v26 = 0; /*0x44fadc*/
              v27 = strtok(0, Delimiter); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              v28 = operator new(0x720u); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = BuildingClass::Construct((int)v28, *((unsigned int *)g_TriggerTypeCount + IndexByName), v65); /*0x44fb27*/
                if ( v29 ) /*0x44fb2b*/
                {
                  v30 = (void *)ObjectTypeClass::FindByName(v16); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    v31 = (int)(TeamClass::FindOrCreate(v30));
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference((unsigned int *)v29, v31); /*0x44fb4a*/
                  }
                  v29->q6DC = v58; /*0x44fb5b*/
                  v29->u8_6CA = v57; /*0x44fb61*/
                  v29->q6CB = v56; /*0x44fb70*/
                  v29->q6C9 = v26; /*0x44fb78*/
                  if ( v61 >= 256 ) /*0x44fb7e*/
                    v61 = 256; /*0x44fb80*/
                  v32 = v29->q520; /*0x44fb88*/
                  v33 = Math::RoundToInt((double)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  v29->q06C = v33; /*0x44fb9f*/
                  v34 = *(unsigned int *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    v29->q06C = v34; /*0x44fbaf*/
                  v35 = v29->q06C; /*0x44fbbc*/
                  v74[2] = 0; /*0x44fbbf*/
                  v29->q070 = v35; /*0x44fbcf*/
                  v36 = *(unsigned int *)v29; /*0x44fbd5*/
                  v64 = ((int16_t)v12 << 8) + 128; /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (IDA_SHIWORD(v12) << 8) + 128; /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(uint8_t (__thiscall **)(int, unsigned int *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    v37 = v29->q600; /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      BuildingLightClass::FindTarget(v37, (unsigned int *)v70); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !v29->q660 && !v29->q504 ) /*0x44fc35*/
                      {
                        v38 = v29->q21C; /*0x44fc43*/
                        v29->q660 = 1; /*0x44fc49*/
                        v29->q080 = 1; /*0x44fc50*/
                        v38->q5778 = 1; /*0x44fc57*/
                        *(unsigned char *)(v29->q21C + 22393) = 1; /*0x44fc64*/
                        v39 = v29->q21C; /*0x44fc6b*/
                        *(unsigned char *)(v39 + 508) = 1; /*0x44fc71*/
                        v40 = v29->q614; /*0x44fc78*/
                        *(unsigned char *)(v29 + 1770) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          Trigger::EnableOnce(v40, 0); /*0x44fc8b*/
                        if ( v29->q520->LaserFencePost ) /*0x44fc96*/
                          BuildingClass::RepairPlacement((unsigned char *)v29, 0); /*0x44fca4*/
                        v41 = 0; /*0x44fca9*/
                        v42 = (unsigned char **)(v29 + 1372); /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(unsigned char *)(v41 + v29->q520 + 3980) && *v42 ) /*0x44fcc2*/
                            VtableStub::425270(*v42); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++v42; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        v43 = v29->q520; /*0x44fcdc*/
                        v44 = *(unsigned int *)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          IDA_LOBYTE(v39) = *(unsigned char *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction(v29->q21C, v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (uint8_t)House::IsHumanPlayer(*(void **)(v29 + 540)) ) /*0x44fd07*/
                          VoxClass::FindAndPlay(aEvaBuildingonl, -1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff(v29); /*0x44fd23*/
                    }
                    v45 = v29->q520; /*0x44fd28*/
                    v29->q1074 = 0; /*0x44fd2e*/
                    if ( *(unsigned char *)(v45 + 5458) && !v29->q6CC ) /*0x44fd3f*/
                      BuildingClass::Deactivate(v29); /*0x44fd4b*/
                    if ( v62 > 0 ) /*0x44fd56*/
                    {
                      v73 = v73; /*0x44fd5a*/
                      v62 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v73 != -1 ) /*0x44fd66*/
                        {
                          v48 = *((unsigned int *)g_TriggerTypeCount + *v73); /*0x44fd73*/
                          v49 = operator new(0x720u); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = (int *)BuildingClass::Construct((int)v49, v48, v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          v51 = *v50; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          v50->COMStub_54(v75, v67); /*0x44fdb9*/
                        }
                        ++v73; /*0x44fdbf*/
                        --v62; /*0x44fdc2*/
                      }
                      while ( v62 ); /*0x44fdc3*/
                    }
                    if ( (*(uint8_t (__thiscall **)(int))(v29->q0FF)(v29) /*0x44fde1*/
                      && (*(uint8_t (__thiscall **)(int))(v29->q0FF)(v29)
                      && v29->q580 )
                    {
                      Value = ProgressTimer::GetValue((unsigned short *)(v29 + 904), &v76); /*0x44fdf6*/
                      v53 = v29->q580; /*0x44fdfd*/
                      v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(unsigned int *)(v53 + 172) = dword_7F4890[v54]; /*0x44fe17*/
                        *(unsigned int *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(int, int))(v29->needsSave)(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = result; /*0x44fe36*/
      v3 = ++v68; /*0x44fe3a*/
      if ( v68 >= result ) /*0x44fe41*/
        break; /*0x44fe41*/
    }
  }
  return result; /*0x44fe4a*/
}
}
// 0x4C6180
namespace gamemd {
int Scenario::CopyLocalScenarioData()
{
  int v2; // ecx
  int i; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax

  v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *(unsigned char *)(v2 + this - 1) = *((unsigned char *)g_ScenarioClass_Instance + i + 7303) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  this->q034 = (*(int (__stdcall **)(char *))(*((unsigned int *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x4c61b1*/
  v4 = *((unsigned int *)g_ScenarioClass_Instance + 1146); /*0x4c61ba*/
  v5 = *((unsigned int *)g_ScenarioClass_Instance + 1148); /*0x4c61c0*/
  if ( v4 != -1 ) /*0x4c61c9*/
  {
    if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x4c61d5*/
      v5 = 0; /*0x4c61db*/
    else
      v5 -= (int)g_CurrentFrame - v4; /*0x4c61d7*/
  }
  this->q038 = v5; /*0x4c61dd*/
  result = *((unsigned int *)HouseClass_Player + 97); /*0x4c61e6*/
  this->q03C = result; /*0x4c61ec*/
  this->q040 = *((unsigned short *)g_ScenarioClass_Instance + 6864); /*0x4c61fc*/
  return result; /*0x4c6200*/
}
}
// 0x50D610
namespace gamemd {
int Scenario::ProcessSidebarUnits()
{
  int result; // eax
  unsigned int *v3; // esi
  int v4; // ebx
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int i; // [esp+Ch] [ebp-8h]
  char v12[4]; // [esp+10h] [ebp-4h] BYREF

  result = g_SidebarState - 1; /*0x50d619*/
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x50d622*/
  {
    v3 = (unsigned int *)*((unsigned int *)g_TechnoClass_Count + result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
      v4 = *(unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*v3 + 440))(v3, v12); /*0x50d64d*/
      v5 = (*(int (__thiscall **)(unsigned int *))(*v3 + 132))(v3); /*0x50d659*/
      v6 = (int *)operator new(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      v7 = this->u32_174; /*0x50d670*/
      if ( this->u32_17C < v7 /*0x50d695*/
        || (this->u8_179 || !v7)
        && (v8 = this->u32_180, v8 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(this->u32_16C + 8))(&this->u32_5B0, v7 + v8, 0) )
      {
        v9 = this->u32_17C; /*0x50d69c*/
        v10 = this->u32_170; /*0x50d69f*/
        this->u32_17C = v9 + 1; /*0x50d6a5*/
        *(unsigned int *)(v10 + 4 * v9) = v6; /*0x50d6a8*/
      }
    }
    result = i - 1; /*0x50d6af*/
  }
  return result; /*0x50d6bd*/
}
}
// 0x552B10
namespace gamemd {
Game * * Scenario::ComputeDisplayPosition()
{
  int v1; // ebp
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // eax

  g_DisplayWidth = g_DisplayWidth; /*0x552b12*/
  v2 = 640; /*0x552b20*/
  if ( g_DisplayWidth != 640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( g_GameMode_Current[0] ) /*0x552b3b*/
  {
    v9 = 480; /*0x552b9a*/
    if ( g_DisplayWidth != 640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    v10 = DataGlobal_8A00A8; /*0x552baa*/
    this->q024 = v2; /*0x552baf*/
    this->q028 = v9; /*0x552bb4*/
    this->q020 = (v10 - v9) / 2; /*0x552bc6*/
    result = (g_DisplayWidth - v2) / 2; /*0x552bc9*/
    this->q01C = result; /*0x552bcd*/
  }
  else
  {
    v3 = 480; /*0x552b3f*/
    if ( g_DisplayWidth != 640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    v4 = v3 - 80; /*0x552b4b*/
    v5 = DataGlobal_8A00A8 - (v3 - 80); /*0x552b5c*/
    this->q014 = v2; /*0x552b5e*/
    this->q024 = v2; /*0x552b64*/
    v6 = (v5 - 80) / 2; /*0x552b6f*/
    this->q010 = v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    v7 = (g_DisplayWidth - v2) / 2; /*0x552b76*/
    this->q034 = v2; /*0x552b78*/
    this->q00C = v7; /*0x552b7b*/
    this->q01C = v7; /*0x552b7e*/
    this->q020 = v6; /*0x552b81*/
    this->q02C = v7; /*0x552b84*/
    result = v4 + v6; /*0x552b88*/
    this->q028 = v4; /*0x552b8b*/
    this->q018 = 40; /*0x552b8f*/
    this->q030 = result; /*0x552b92*/
    this->q038 = 40; /*0x552b95*/
  }
  return result; /*0x552b87*/
}
}
// 0x552BE0
namespace gamemd {
unsigned int * Scenario::ComputeDialogPos(unsigned int * a2)
{
  int v2; // edx
  int v3; // ecx
  unsigned int *result; // eax
  int v5; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h] BYREF

  if ( g_GameMode_Current[0] ) /*0x552beb*/
  {
    v6 = Copy8Bytes(&v11, ((char *)&this->q004 + 3)); /*0x552c3b*/
    v7 = *v6; /*0x552c40*/
    v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( g_DisplayWidth == 640 ) /*0x552c52*/
    {
      v9 = v7 + 12; /*0x552c58*/
      v10 = v8 + 256; /*0x552c5b*/
    }
    else
    {
      v9 = v7 + 16; /*0x552c71*/
      v10 = v8 + 321; /*0x552c74*/
    }
    *a2 = v9; /*0x552c62*/
    a2[1] = v10; /*0x552c64*/
  }
  else
  {
    v2 = this->q02C; /*0x552bf8*/
    v3 = this->q030; /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( g_DisplayWidth == 640 ) /*0x552bfd*/
      v5 = v2 + 84; /*0x552c06*/
    else
      v5 = v2 + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = v3 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/
}
}
// 0x55AFB0
namespace gamemd {
void Scenario::Update()
{
  int v1; // eax
  char *v2; // edi
  void **v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // edx
  char *v8; // ecx
  char *v9; // eax
  int v10; // eax
  char *v11; // ebp
  int v12; // eax
  double *v13; // ebx
  unsigned int *v14; // ebp
  int v15; // edi
  int v16; // edx
  int v17; // eax
  int *v18; // esi
  int64_t v19; // rax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // edx
  char *v29; // ecx
  int v30; // eax
  int v32; // eax
  char *v34; // edx
  int v35; // eax
  int v36; // ecx
  unsigned int *v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  unsigned int *v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int v47; // edx
  int k; // esi
  int m; // esi
  int v50; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v54; // ecx
  int *v55; // eax
  int v57; // [esp+14h] [ebp-24h] BYREF
  int v58; // [esp+18h] [ebp-20h]
  int v59; // [esp+1Ch] [ebp-1Ch]
  void **v60; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v62; // [esp+28h] [ebp-10h]
  char v63; // [esp+2Dh] [ebp-Bh]
  int v64; // [esp+30h] [ebp-8h]
  int v65; // [esp+34h] [ebp-4h]

  v1 = 0; /*0x55afc7*/
  v2 = (char *)g_ScenarioClass_Instance; /*0x55afcd*/
  ++dword_ABCD40; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( g_ScenarioUpdateState > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (void **)*((unsigned int *)dword_8B40CC + v1); /*0x55afec*/
      if ( v2[13502] ) /*0x55afef*/
      {
        if ( TeamClass::Update_0(v3, 50, 0, dword_ABCCD8, 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = (char *)g_ScenarioClass_Instance; /*0x55b017*/
      }
      if ( v2[13482] ) /*0x55b01d*/
      {
        if ( TeamClass::Update_0(v3, 27, 0, dword_ABCCD8, 0, 0) /*0x55b090*/
          || TeamClass::Update_0(v3, 28, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 36, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 37, 0, dword_ABCCD8, 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = (char *)g_ScenarioClass_Instance; /*0x55b09d*/
      }
      if ( v2[13483] /*0x55b10f*/
        && (TeamClass::Update_0(v3, 45, 0, dword_ABCCD8, 0, 0) || TeamClass::Update_0(v3, 46, 0, dword_ABCCD8, 0, 0))
        || TeamClass::Update_0(v3, 13, 0, dword_ABCCD8, 0, 0)
        || TeamClass::Update_0(v3, 51, 0, dword_ABCCD8, 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = (char *)g_ScenarioClass_Instance; /*0x55b118*/
      if ( *((unsigned int *)g_ScenarioClass_Instance + 1146) != -1 ) /*0x55b124*/
      {
        v4 = *((unsigned int *)g_ScenarioClass_Instance + 1146); /*0x55b126*/
        v5 = *((unsigned int *)g_ScenarioClass_Instance + 1148); /*0x55b12c*/
        if ( v4 != -1 ) /*0x55b134*/
        {
          if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x55b140*/
            break; /*0x55b140*/
          v5 -= (int)g_CurrentFrame - v4; /*0x55b142*/
        }
        if ( !v5 ) /*0x55b146*/
          break; /*0x55b146*/
      }
  LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= g_ScenarioUpdateState ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    TeamClass::Update_0(v3, 14, 0, dword_ABCCD8, 0, 0); /*0x55b148*/
  LABEL_22:
    v2 = (char *)g_ScenarioClass_Instance; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
  LABEL_24:
  v6 = *((unsigned int *)v2 + 1146); /*0x55b17d*/
  v7 = v2 + 4584; /*0x55b183*/
  if ( v6 != -1 ) /*0x55b18b*/
  {
    v8 = (char *)*((unsigned int *)v2 + 1148); /*0x55b18d*/
    v9 = (char *)g_CurrentFrame - v6; /*0x55b19e*/
    if ( (int)g_CurrentFrame - *((unsigned int *)v2 + 1146) >= (int)v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *v7 != -1 ) /*0x55b1ae*/
      {
        v10 = *((unsigned int *)v2 + 1148); /*0x55b1b0*/
        v11 = (char *)g_CurrentFrame - *v7; /*0x55b1b3*/
        if ( (int)v11 >= v10 ) /*0x55b1b9*/
          v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - (unsigned int)v11; /*0x55b1bb*/
        *((unsigned int *)v2 + 1148) = v12; /*0x55b1c1*/
        *v7 = -1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x55b1cd*/
      v2 = (char *)g_ScenarioClass_Instance; /*0x55b1d2*/
    }
  }
  v2[13482] = 0; /*0x55b1d8*/
  *((unsigned char *)g_ScenarioClass_Instance + 13481) = 0; /*0x55b1e4*/
  *((unsigned char *)g_ScenarioClass_Instance + 13483) = 0; /*0x55b1f1*/
  *((unsigned char *)g_ScenarioClass_Instance + 13502) = 0; /*0x55b1fe*/
  v13 = (double *)g_RulesClass_Instance; /*0x55b205*/
  if ( !*((unsigned char *)g_RulesClass_Instance + 6128) || *((double *)g_RulesClass_Instance + 712) == 0.0 ) /*0x55b226*/
  {
    v14 = g_ScenarioClass_Instance; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = g_ScenarioClass_Instance; /*0x55b228*/
  v15 = (int)g_CurrentFrame; /*0x55b22e*/
  v16 = *((unsigned int *)g_ScenarioClass_Instance + 1158); /*0x55b234*/
  v17 = *((unsigned int *)g_ScenarioClass_Instance + 1160); /*0x55b23a*/
  v18 = (int *)((char *)g_ScenarioClass_Instance + 4632); /*0x55b240*/
  if ( v16 == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( (int)g_CurrentFrame - v16 < v17 ) /*0x55b251*/
  {
    v17 -= (int)g_CurrentFrame - v16; /*0x55b253*/
  LABEL_38:
    if ( v17 ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  v19 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 712) * 900.0); /*0x55b259*/
  v58 = v58; /*0x55b26a*/
  *v18 = v15; /*0x55b26e*/
  v18[1] = v58; /*0x55b270*/
  v18[2] = v19; /*0x55b278*/
  MapClass::ProcessVisibilityFlags(&MapClass_Instance, IDA_HIDWORD(v19)); /*0x55b27b*/
  v14 = g_ScenarioClass_Instance; /*0x55b280*/
  v13 = (double *)g_RulesClass_Instance; /*0x55b286*/
  LABEL_41:
  v15 = (int)g_CurrentFrame; /*0x55b294*/
  LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility(&MapClass_Instance); /*0x55b2ad*/
    v14 = g_ScenarioClass_Instance; /*0x55b2b2*/
    v13 = (double *)g_RulesClass_Instance; /*0x55b2b8*/
    v15 = (int)g_CurrentFrame; /*0x55b2be*/
  }
  if ( (*v14 & 0x1000) != 0 && v13[713] != 0.0 ) /*0x55b2dd*/
  {
    v21 = v14[1161]; /*0x55b2df*/
    v22 = v14[1163]; /*0x55b2e5*/
    if ( v21 != -1 ) /*0x55b2f4*/
    {
      if ( v15 - v21 >= v22 ) /*0x55b2fc*/
      {
  LABEL_50:
        v23 = Math::RoundToInt(v13[713] * 900.0); /*0x55b304*/
        v58 = v58; /*0x55b315*/
        v14[1161] = v15; /*0x55b319*/
        v14[1162] = v58; /*0x55b31b*/
        v14[1163] = v23; /*0x55b323*/
        MapClass::ProcessFogTransition(&MapClass_Instance); /*0x55b326*/
        v14 = g_ScenarioClass_Instance; /*0x55b32b*/
        v13 = (double *)g_RulesClass_Instance; /*0x55b331*/
        v15 = (int)g_CurrentFrame; /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      v22 -= v15 - v21; /*0x55b2fe*/
    }
    if ( !v22 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
  LABEL_51:
  if ( v14[3404] != v14[3403] && v13[717] != 0.0 ) /*0x55b362*/
  {
    v25 = v14[1170]; /*0x55b368*/
    v26 = v14[1172]; /*0x55b36e*/
    if ( v25 != -1 ) /*0x55b377*/
    {
      v27 = v15 - v25; /*0x55b379*/
      if ( v27 >= v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
  LABEL_57:
    if ( (uint8_t)NukeFlash::IsActive() /*0x55b39b*/
      || (uint8_t)NukeFlash::ProcessEffect()
      || (uint8_t)ChronoScreen::IsActive() )
    {
      v28 = *((unsigned int *)g_ScenarioClass_Instance + 3422); /*0x55b40e*/
      v29 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b414*/
      *((unsigned int *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x55b41a*/
      v30 = v58; /*0x55b41c*/
    }
    else
    {
      if ( !PsyDom::IsActive() ) /*0x55b3ab*/
      {
        g_CurrentFrame = g_CurrentFrame; /*0x55b3d2*/
        v32 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 717) * 900.0); /*0x55b3e4*/
        v58 = v58; /*0x55b3ef*/
        v34 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b3f3*/
        *((unsigned int *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x55b3f9*/
        *((unsigned int *)v34 + 1) = v58; /*0x55b3fb*/
        *((unsigned int *)v34 + 2) = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = *((unsigned int *)g_ScenarioClass_Instance + 3429); /*0x55b3b8*/
      v29 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b3be*/
      *((unsigned int *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x55b3c4*/
      v30 = v58; /*0x55b3c6*/
    }
    *((unsigned int *)v29 + 1) = v30; /*0x55b420*/
    *((unsigned int *)v29 + 2) = v28; /*0x55b423*/
  LABEL_65:
    *((unsigned int *)g_ScenarioClass_Instance + 3404) &= (*((unsigned int *)g_ScenarioClass_Instance + 3404) <= 0) - 1; /*0x55b426*/
    v35 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 718) * 100.0); /*0x55b453*/
    v36 = *((unsigned int *)g_ScenarioClass_Instance + 3403); /*0x55b45e*/
    if ( *((unsigned int *)g_ScenarioClass_Instance + 3404) >= v36 ) /*0x55b46c*/
    {
      *((unsigned int *)g_ScenarioClass_Instance + 3403) = v35 + v36; /*0x55b490*/
      v37 = g_ScenarioClass_Instance; /*0x55b496*/
      v38 = *((unsigned int *)g_ScenarioClass_Instance + 3403); /*0x55b49c*/
      v39 = *((unsigned int *)g_ScenarioClass_Instance + 3404); /*0x55b4a2*/
      if ( v38 >= v39 ) /*0x55b4aa*/
  LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      *((unsigned int *)g_ScenarioClass_Instance + 3403) = v36 - v35; /*0x55b470*/
      v37 = g_ScenarioClass_Instance; /*0x55b476*/
      v38 = *((unsigned int *)g_ScenarioClass_Instance + 3403); /*0x55b47c*/
      v39 = *((unsigned int *)g_ScenarioClass_Instance + 3404); /*0x55b482*/
      if ( v38 <= v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[3403] = v38; /*0x55b4ae*/
    *((unsigned char *)g_ScenarioClass_Instance + 13483) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(&MapClass_Instance); /*0x55b4c6*/
    MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x55b4d2*/
  }
  UpdateAudioTriggers(); /*0x55b4d7*/
  ProcessSpeechEvents(); /*0x55b4dc*/
  DispatchBuildingAudioEvents(&dword_87F5D8); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects(0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v65 = 10; /*0x55b516*/
  v64 = 0; /*0x55b51a*/
  if ( g_HouseClass_AIProductionState > 0 ) /*0x55b51e*/
  {
    v42 = v62; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = (char *)g_TeamClassPool + 4 * v40; /*0x55b530*/
      if ( v64 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v63 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
  LABEL_81:
      if ( ++v40 >= g_HouseClass_AIProductionState ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v65; /*0x55b526*/
    }
    if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v60[2])(&v60, v41 + v42, 0) ) /*0x55b558*/
    {
  LABEL_79:
      v44 = v64++; /*0x55b55f*/
      *((unsigned int *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v62; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
  LABEL_82:
  for ( i = 0; i < v64; ++i ) /*0x55b58a*/
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)Block + i) + 92))(*((unsigned int *)Block + i)); /*0x55b595*/
  for ( j = dword_8A0218 - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)dword_8A020C + j) + 92))(*((unsigned int *)dword_8A020C + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(); /*0x55b5be*/
  UpdateCameoProduction(); /*0x55b5c3*/
  UpdateSuperWeapons(); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)dword_B04BD4 + k) + 92))(*((unsigned int *)dword_B04BD4 + k)); /*0x55b5e4*/
  IDA_LOBYTE(v47) = 0; /*0x55b5ea*/
  UpdateDeferredLightSurfaces(6, v47); /*0x55b5f1*/
  LocomotionClass::UpdateAll(); /*0x55b5f6*/
  for ( m = 0; m < this->q010; ++m ) /*0x55b606*/
  {
    v50 = *(unsigned int *)(this->Items + 4 * m); /*0x55b60b*/
    (*(void (__thiscall **)(int))(*(unsigned int *)v50 + 92))(v50); /*0x55b610*/
  }
  if ( g_GameMode_Current ) /*0x55b622*/
  {
    if ( g_GameMode_Current != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < dword_A83E10; ++n ) /*0x55b632*/
        (*(void (__thiscall **)(unsigned int))(**((unsigned int **)dword_A83E04 + n) + 92))(*((unsigned int *)dword_A83E04 + n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(); /*0x55b64b*/
  AirstrikeClass::UpdateAll(); /*0x55b650*/
  CrateClass::Update(&MapClass_Instance); /*0x55b65a*/
  ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->lpVtbl[2].GetSizeMax)(g_TacticalClass_Instance); /*0x55b667*/
  for ( ii = 0; ii < g_TeamTypeCapacity; ++ii ) /*0x55b673*/
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)g_TeamTypeCount + ii) + 92))(*((unsigned int *)g_TeamTypeCount + ii)); /*0x55b680*/
  for ( jj = 0; jj < HouseClass_Count; ++jj ) /*0x55b696*/
  {
    v54 = *((unsigned int *)HouseClass_Array + jj); /*0x55b69d*/
    if ( v54 ) /*0x55b6a2*/
      (*(void (__thiscall **)(int))(*(unsigned int *)v54 + 92))(v54); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode(&MapClass_Instance) ) /*0x55b6b8*/
  {
    v55 = (int *)(MapClass::GetScrollMode(&MapClass_Instance) + 156); /*0x55b6cf*/
    v57 = *v55; /*0x55b6d6*/
    v58 = v55[1]; /*0x55b6e8*/
    v59 = v55[2]; /*0x55b6ef*/
    Tactical::SetTacticalPosition(&v57); /*0x55b6f3*/
  }
  if ( Block ) /*0x55b706*/
  {
    if ( v63 ) /*0x55b70e*/
      RA2_OPDEL(Block); /*0x55b711*/
  }
}
}
// 0x597A10
namespace gamemd {
int Scenario::LoadOrReloadOptions(IUnknown * aP1)
{
  if ( aP1 ) /*0x597a16*/
    return (aP1); /*0x597a1b*/
  else
    return (uint8_t)LoadOptions::Run(this) != 0; /*0x597a28*/
}
}
// 0x5E7460
namespace gamemd {
int Scenario::PreGameInit()
{
  int v0; // edx
  int v1; // eax

  *((unsigned int *)g_ScenarioClass_Instance + 1173) = g_GameRulesOptions; /*0x5e746b*/
  g_CurrentFrame = 0; /*0x5e747c*/
  g_ScenarioLoadFlags = Game_PlayerCount; /*0x5e7486*/
  Debug::Log("Pregame setup for %d players.\n", Game_PlayerCount); /*0x5e748b*/
  *(unsigned int *)g_GameModeOptions = g_Rules_EngineerCount; /*0x5e74aa*/
  v0 = g_IntroMovieObject; /*0x5e74b0*/
  IDA_BYTE1(v0) = IDA_BYTE1(v1) & 0x77; /*0x5e74bb*/
  v1 = v0 | ((HarvesterTruce & 1 | (16 * (BridgeDestruction & 1))) << 11); /*0x5e74c1*/
  g_GameTypeFlags = 2; /*0x5e74c3*/
  IDA_LOBYTE(v1) = v1 | 0xC0; /*0x5e74cd*/
  v1 = v1; /*0x5e74d4*/
  return nullsub_37(&v1);
}
}
// 0x642AD0
namespace gamemd {
void Scenario::SetByte96()
{
  *(&this->q0246) = 0; /*0x642ad0*/
}
}
// 0x684240
namespace gamemd {
int Scenario::ClearScreen()
{
  HWND result; // eax

  Mouse::ReleaseCapture(&MapClass_Instance); /*0x684245*/
  if ( !(*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684252*/
    (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684261*/
  *((unsigned char *)g_ScenarioClass_Instance + 13730) = 1; /*0x68426c*/
  g_GameActive = 1; /*0x684278*/
  result = Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x68427d*/
  dword_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/
}
}
// 0x684620
namespace gamemd {
int Scenario::LoadWithProgress()
{
  char v1; // al
  wchar_t *v2; // edi
  wchar_t *String; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  unsigned short *v12; // edi
  int v13; // eax
  char v14; // bl
  int v15; // ecx
  wchar_t *v16; // eax
  char v18; // bl
  int i; // esi
  int j; // esi
  wchar_t *v21; // [esp-10h] [ebp-258h]
  char v22; // [esp-8h] [ebp-250h]
  const wchar_t *v23; // [esp-4h] [ebp-24Ch]
  int v24; // [esp-4h] [ebp-24Ch]
  int v25; // [esp+10h] [ebp-238h]
  unsigned char v26[8]; // [esp+14h] [ebp-234h] BYREF
  const wchar_t *v27; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v29; // [esp+30h] [ebp-218h]
  int v30; // [esp+34h] [ebp-214h]
  int v31; // [esp+38h] [ebp-210h]
  int v32; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v34[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, this); /*0x684653*/
  g_CurrentFrame = 0; /*0x68466b*/
  *((unsigned char *)g_ScenarioClass_Instance + 13720) = 1; /*0x684675*/
  ++g_IKnowWhatImDoing; /*0x684685*/
  if ( _strcmpi(&Source[strlen(Source) - 4], aSed) ) /*0x684694*/
    *((unsigned char *)g_ScenarioClass_Instance + 13501) = 0; /*0x6846be*/
  else
    *((unsigned char *)g_ScenarioClass_Instance + 13501) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v25 = 0; /*0x6846d4*/
  if ( !g_ArmageddonMode ) /*0x6846d8*/
  {
    v1 = 1; /*0x6846eb*/
    if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x6846f2*/
      v1 = Game_PlayerCount; /*0x6846f4*/
    ProgressAnim::Init((int)g_UIManager, 0, 1079574528, v1, 0); /*0x684706*/
    v2 = 0; /*0x684710*/
    if ( g_GameMode_Current[0] == 4 && *(unsigned int *)dword_B779C4 ) /*0x68471c*/
    {
      v23 = dword_B779D4; /*0x684729*/
      String = GetStringCSF(aTxtGameId, 0, g_Str_File_Scenario_CPP, 1199); /*0x684736*/
      swprintf(v34, (const size_t)String, v23); /*0x684744*/
      v2 = v34; /*0x68474c*/
    }
    v4 = LoadProgressMgr::GetInstance(); /*0x684758*/
    v25 = v4; /*0x68475c*/
    Scenario::ComputeDisplayPosition(v4); /*0x684760*/
    Function::643E80(v4); /*0x68476b*/
    v5 = 0; /*0x68477c*/
    if ( g_GameMode_Current[0] ) /*0x684780*/
    {
      v7 = *(unsigned int *)(*(unsigned int *)Game_PlayerInfoArray + 75); /*0x6847a4*/
      if ( v7 == -3 ) /*0x6847aa*/
        v7 = 0; /*0x6847ac*/
      v5 = *(unsigned int *)(*((unsigned int *)g_SuperWeaponTypeCount + v7) + 188); /*0x6847b7*/
    }
    else
    {
      v6 = *((unsigned int *)g_ScenarioClass_Instance + 3379); /*0x684782*/
      if ( v6 != -1 ) /*0x68478b*/
        v5 = *(unsigned int *)(*((unsigned int *)g_CampaignTypeArray + v6) + 152); /*0x684795*/
    }
    *((unsigned int *)g_ScenarioClass_Instance + 3374) = v5; /*0x6847c3*/
    Scenario::SetDword32(v5); /*0x6847c9*/
    v8 = LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v8); /*0x6847d5*/
    if ( g_GameMode_Current[0] ) /*0x6847e1*/
    {
      SHPClass::Load((int)g_UIManager, g_Str_File_PROGBARM_SHP, 0, 0); /*0x684800*/
    }
    else
    {
      v24 = Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((int)g_UIManager, aSpldbrShp, 0, v24); /*0x6847f0*/
    }
    v22 = g_GameMode_Current[0] != 0; /*0x684819*/
    v9 = (int *)Scenario::ComputeDialogPos(v26); /*0x68481e*/
    TextRenderer::MeasureBuilding((int)g_UIManager, *v9, v9[1], (int)v2, v22, v22); /*0x68482f*/
    v10 = Map_Load(v4); /*0x684836*/
    Scenario::SetDword30(v10); /*0x684841*/
    if ( g_NetworkInterface ) /*0x68484d*/
    {
      if ( g_GameMode_Current[0] == 4 && Game_PlayerCount > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(int))(*(unsigned int *)g_NetworkInterface + 48))(g_NetworkInterface); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v29 = 0; /*0x6848a3*/
        v30 = 0; /*0x6848b0*/
        v31 = 0; /*0x6848b6*/
        v32 = 0; /*0x6848be*/
        v11 = 1; /*0x6848c2*/
        if ( Game_PlayerCount > 1 ) /*0x6848c4*/
        {
          v12 = (unsigned short *)(&Network_PlayerPorts + 2); /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress((unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v11) + 40), &v27, (int)v26); /*0x6848e5*/
            sprintf(Buffer, "%d.%d.%d.%d", v26[0], v26[1], v26[2], v26[3]); /*0x68491f*/
            Debug::Log(); /*0x68492e*/
            IDA_LOWORD(v13) = *v12; /*0x684933*/
            (*(void (__thiscall **)(int, char *, int))(*(unsigned int *)g_NetworkInterface + 44))( /*0x684947*/
              g_NetworkInterface,
              Buffer,
              v13);
            ++v11; /*0x68494f*/
            ++v12; /*0x684950*/
          }
          while ( v11 < Game_PlayerCount ); /*0x684955*/
        }
      }
    }
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13501) ) /*0x684961*/
  {
    v14 = Scenario::LoadOrReloadOptions(Source); /*0x68497a*/
    if ( v14 ) /*0x68497e*/
    {
      RandomMap::Generate((int *)dword_ABDFD8, 0, 0); /*0x684989*/
      IDA_LOBYTE(v15) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v15); /*0x684990*/
    }
    strcpy((char *)g_ScenarioClass_Instance + 4700, Source); /*0x6849b8*/
  }
  else
  {
    v14 = ScenarioClass::Construct(Source); /*0x6849ce*/
  }
  if ( !IDA_BYTE2(g_RulesClass_Instance[1].NukeTakeOff) ) /*0x6849d6*/
    MapClass::ClearShroud(&MapClass_Instance, 0); /*0x6849e7*/
  if ( v14 )
  {
    MessageListClass::Init( /*0x684ac9*/
      g_GameNetworkObject,
      DSurface_ViewBounds + 3,
      g_Map_VisibleRect,
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      g_Map_VisibleRectOffset - 6);
    PostLoadInitScenario(); /*0x684ace*/
    if ( g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress(g_GameMode_Current, 99); /*0x684ae8*/
      if ( g_GameMode_Current[0] == 4 ) /*0x684af3*/
      {
        if ( g_Network_IsHosting ) /*0x684afc*/
          Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x3A98u, 1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress(g_GameMode_Current, *((unsigned char *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
    byte_A8B8C1 = 0; /*0x684b30*/
    byte_A8B8C2 = 0; /*0x684b37*/
    v18 = WaitForMultiplayerLoadSync(); /*0x684b43*/
    if ( g_GameMode_Current[0] == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances(g_GameMode_Current); /*0x684b53*/
    --g_IKnowWhatImDoing; /*0x684b66*/
    if ( !g_ArmageddonMode ) /*0x684b6c*/
    {
      if ( v18 ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        while ( Progress::GetAverage((int)g_UIManager) < 1.0 ) /*0x684b8c*/
        {
          for ( i = 0; i < Game_PlayerCount; ++i ) /*0x684b97*/
            Network::UpdateLatencyDisplay((int)g_UIManager, i, 100.0, NAN); /*0x684bae*/
        }
      }
    }
    *((unsigned char *)g_ScenarioClass_Instance + 13720) = 0; /*0x684bde*/
    Scenario::SetByte96(g_UIManager); /*0x684be5*/
    if ( v25 ) /*0x684bf0*/
    {
      Function::643E80(0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v25); /*0x684c00*/
    }
    for ( j = HouseClass_Count - 1; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*(unsigned int *)&HouseClass_Array->gap0[4 * j]); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v27 = asc_82083C; /*0x684a31*/
    v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a45*/
    v16 = GetStringCSF(aTxtUnableReadS, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a50*/
    Dialog::ShowMessageBox(4, v16, v21, 0, 0, 0); /*0x684a5a*/
    --g_IKnowWhatImDoing; /*0x684a6b*/
    *((unsigned char *)g_ScenarioClass_Instance + 13720) = 0; /*0x684a71*/
    if ( v25 ) /*0x684a7d*/
    {
      Function::643E80(0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}
}
// 0x685670
namespace gamemd {
void Scenario_EndGameFlow()
{
  unsigned int *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  wchar_t *String; // eax
  int v9; // eax
  int v10; // ecx
  char v11; // al
  int16_t result; // ax
  Iostream_init *v13; // eax
  int v14; // ecx
  int v15; // ecx
  unsigned char *v16; // ecx
  int v17; // ecx
  void *v18; // eax
  LPARAM v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+Bh] [ebp-81h] BYREF
  unsigned int v28[8]; // [esp+Ch] [ebp-80h] BYREF
  unsigned int v29[8]; // [esp+2Ch] [ebp-60h] BYREF
  unsigned int v30[8]; // [esp+4Ch] [ebp-40h] BYREF
  unsigned int v31[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( g_GameMode_Current && g_GameMode_Current != 5 && (g_NetworkEventPending & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(); /*0x68568d*/
    Map_Get_55CF10(); /*0x685692*/
  }
  v1 = (char *)g_ScenarioClass_Instance + 1556; /*0x68569f*/
  g_BounceClassInit = 0; /*0x6856a5*/
  g_FramePresent_State = 0; /*0x6856ac*/
  if ( *((unsigned int *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    v3 = v1[2]; /*0x6856c7*/
    v4 = Ticks - *v1; /*0x6856ca*/
    *v1 = -1; /*0x6856cc*/
    v1[2] = v4 + v3; /*0x6856d0*/
  }
  AsyncIO::Shutdown(); /*0x6856d3*/
  (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)g_WWMouseClass_Instance + 64))( /*0x6856e8*/
    g_WWMouseClass_Instance,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x6856f3*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x68570c*/
  Audio::GetFlag(g_MixerState); /*0x685715*/
  Audio::WaitForCallback(g_MixerState); /*0x685720*/
  v5 = g_PerformanceTickOffset; /*0x68572a*/
  if ( g_LastPerformanceTick != -1 ) /*0x685732*/
    v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685744*/
  v6 = v5 + 300; /*0x685746*/
  while ( (uint8_t)Audio::IsPlaying() ) /*0x68574c*/
  {
    v5 = g_PerformanceTickOffset; /*0x68575a*/
    if ( g_LastPerformanceTick != -1 ) /*0x685762*/
      v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685774*/
    if ( v6 <= v5 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x6857ca*/
  {
    Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x6857d1*/
    ChangeVideoMode(xRight, yBottom); /*0x6857e5*/
  }
  v7 = g_GameMode_Current; /*0x6857ea*/
  if ( !g_GameMode_Current ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  a1 = 0; /*0x685802*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685807*/
  {
    v10 = g_GameStateFlags; /*0x6858c6*/
  LABEL_36:
    g_CurrentPlayerName = 0; /*0x6858ce*/
    if ( v10 ) /*0x6858d7*/
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v10 + 164))(v10, 1); /*0x6858dd*/
    g_WTFMode = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685817*/
  if ( g_GameMode_Current == 4 ) /*0x68581d*/
  {
    String = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, String); /*0x685839*/
    v7 = g_GameMode_Current; /*0x68583e*/
  }
  v5 = 0; /*0x685849*/
  if ( !g_GameStateFlags ) /*0x68584d*/
  {
    g_CurrentPlayerName = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(uint8_t (**)(void))(*(unsigned int *)g_GameStateFlags + 8))() ) /*0x68585a*/
  {
    g_CurrentPlayerName = 0; /*0x68586c*/
  LABEL_28:
    v9 = Scenario::ResetDisplayArrays(&v27); /*0x685884*/
    Map_Load_5C9720(v9); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
  LABEL_29:
  v10 = g_GameStateFlags; /*0x685890*/
  if ( g_GameStateFlags ) /*0x685898*/
  {
    v11 = (*(int (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 168))(g_GameStateFlags); /*0x68589c*/
    v10 = g_GameStateFlags; /*0x6858a2*/
    a1 = v11; /*0x6858a8*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x6858b8*/
    dword_A8D588 = 3; /*0x6858ba*/
  if ( !a1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*(void (__thiscall **)(int))(*(unsigned int *)v10 + 172))(v10); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
  LABEL_40:
  Movie::PlayWrapper(*((unsigned int *)g_ScenarioClass_Instance + 1295), -1, 3, 1, 1, 1); /*0x685915*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685940*/
  if ( !*((unsigned char *)g_ScenarioClass_Instance + 13486) ) /*0x68594b*/
  {
    v13 = __0Iostream_init_QAE_XZ_5((Iostream_init *)&v27); /*0x685959*/
    Map_Load_6C8E80(v13); /*0x685960*/
  }
  v14 = *((unsigned int *)g_ScenarioClass_Instance + 1298); /*0x68596b*/
  if ( v14 != -1 ) /*0x685973*/
    Movie::PlayWrapper(v14, -1, 3, 1, 1, 1); /*0x68597d*/
  v15 = *((unsigned int *)g_ScenarioClass_Instance + 1299); /*0x685987*/
  if ( v15 != -1 ) /*0x68598f*/
    Movie::PlayWrapper(v15, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !(uint8_t)CopyProtection::CheckProtectedData() /*0x6859b1*/
    || (v16 = g_ScenarioClass_Instance, *((unsigned char *)g_ScenarioClass_Instance + 13487)) )
  {
    g_WTFMode = 0; /*0x685b33*/
    return (*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685b49*/
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13484) ) /*0x6859bf*/
  {
    v17 = *((unsigned int *)g_ScenarioClass_Instance + 3379); /*0x6859c9*/
    if ( v17 != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(unsigned int *)(*((unsigned int *)g_CampaignTypeArray + v17) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(a1, 3, v5); /*0x6859ee*/
    g_WTFMode = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a0f*/
  }
  if ( g_GameMode_Current != 3 && g_GameMode_Current != 4 || !g_GameStateFlags ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags) ) /*0x685a2b*/
  {
    v16 = g_ScenarioClass_Instance; /*0x685a32*/
  LABEL_58:
    if ( v16[13488] ) /*0x685a38*/
    {
      if ( v16[7385] ) /*0x685a42*/
        Map_Delete_5ADE20(v16, v16 + 264); /*0x685a52*/
      else
        Map_Delete_5ADE20(v16, v16 + 4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a6b*/
      Map_Delete(g_ScenarioClass_Instance); /*0x685a74*/
      (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x685a81*/
    }
  }
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685a84*/
  LABEL_64:
  (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a8f*/
  Scenario::CopyLocalScenarioData(&byte_8A38E0); /*0x685a9f*/
  ++*((unsigned int *)g_ScenarioClass_Instance + 1173); /*0x685ab0*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685ada*/
    && g_GameStateFlags
    && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    if ( g_GameMode_Current == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(int))(*(unsigned int *)g_NetworkInterface + 4))(g_NetworkInterface); /*0x685af5*/
      if ( g_NetworkInterface ) /*0x685b00*/
        (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685b06*/
      g_NetworkInterface = 0; /*0x685b0d*/
      v18 = operator new(0x3F310u); /*0x685b13*/
      if ( v18 ) /*0x685b1d*/
        g_NetworkInterface = IPXInterfaceClass::Construct(v18); /*0x685b26*/
      else
        g_NetworkInterface = 0; /*0x685b4a*/
    }
    WinsockInterface::Init((unsigned int *)g_NetworkInterface); /*0x685b56*/
    v19 = g_Rules_AlliesAllowed; /*0x685b69*/
    qmemcpy(v31, &g_NetworkPlayerName, sizeof(v31)); /*0x685b6f*/
    qmemcpy(v29, g_CampaignConfig, sizeof(v29)); /*0x685b7f*/
    qmemcpy(v28, g_CampaignPlayerArray, sizeof(v28)); /*0x685b8f*/
    qmemcpy(v30, dword_A8B27C, sizeof(v30)); /*0x685b9f*/
    result = InitNetworkGameState(); /*0x685ba1*/
    if ( !(unsigned char)result ) /*0x685ba8*/
    {
      if ( g_NetworkInterface ) /*0x685bb2*/
      {
        result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685bb8*/
        g_NetworkInterface = 0; /*0x685bba*/
      }
      g_WTFMode = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    g_Rules_AlliesAllowed = v19; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v21 = v28[i]; /*0x685be2*/
      dword_A8B27C[i] = v30[i]; /*0x685be6*/
      v22 = v29[i]; /*0x685bec*/
      g_CampaignPlayerArray[i] = v21; /*0x685bf0*/
      v23 = v31[i]; /*0x685bf6*/
      g_CampaignConfig[i] = v22; /*0x685bfa*/
      *(LPARAM *)((char *)&g_NetworkPlayerName + i * 4) = v23; /*0x685c00*/
    }
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685c14*/
  }
  g_WTFMode = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !g_WTFMode ) /*0x685c28*/
    return (*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685c32*/
  while ( !(uint8_t)ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
                              (char *)g_ScenarioClass_Instance + 4700,
                              *((unsigned int *)g_ScenarioClass_Instance + 3379)) )
    ; /*0x685c5d*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685c9d*/
    && g_GameStateFlags
    && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    SessionClass::CreateConnections(&g_GameMode_Current); /*0x685cad*/
    if ( g_GameMode_Current == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0xF ) /*0x685ccc*/
        v24 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685cdf*/
      else
        v24 = 15; /*0x685cce*/
      Network::SetConnectionParams(g_NetworkManager, v24, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d05*/
        v25 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d18*/
      else
        v25 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(v25, -1, 600); /*0x685d27*/
    }
    else if ( g_GameMode_Current == 4 && !g_GameSessionFlags ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d4c*/
        v26 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d5f*/
      else
        v26 = 60; /*0x685d4e*/
      Network::SetConnectionParams(g_NetworkManager, v26, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore(&byte_8A38E0); /*0x685d7a*/
  if ( g_TacticalRender ) /*0x685d87*/
    Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x685d90*/
  TacticalMap::Redraw(&MapClass_Instance); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}
}
// 0x685DC0
namespace gamemd {
void Scenario_EndGame()
{
  unsigned int *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // eax
  char v8; // bl
  wchar_t *String; // eax
  int v10; // eax
  int v11; // ecx
  char v12; // al
  LONG v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  unsigned int *v16; // eax
  LPARAM v17; // ebp
  int i; // eax
  int v19; // edx
  int v20; // ecx
  LPARAM v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wchar_t *v26; // [esp-1Ah] [ebp-A8h]
  wchar_t *v27; // [esp-16h] [ebp-A4h]
  char v28; // [esp+9h] [ebp-85h] BYREF
  const wchar_t *v29; // [esp+Ah] [ebp-84h]
  unsigned int v30[8]; // [esp+Eh] [ebp-80h] BYREF
  unsigned int v31[8]; // [esp+2Eh] [ebp-60h] BYREF
  unsigned int v32[8]; // [esp+4Eh] [ebp-40h] BYREF
  unsigned int v33[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 && (g_NetworkEventPending & 2) == 0 ) /*0x685ddb*/
  {
    RunNetworkGameLoop(); /*0x685ddd*/
    Map_Get_55CF10(); /*0x685de2*/
  }
  v0 = (char *)g_ScenarioClass_Instance + 1556; /*0x685def*/
  g_BounceClassInit = 0; /*0x685df5*/
  g_FramePresent_State = 0; /*0x685dfc*/
  if ( *((unsigned int *)g_ScenarioClass_Instance + 389) != -1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    v2 = v0[2]; /*0x685e17*/
    v3 = Ticks - *v0; /*0x685e1a*/
    *v0 = -1; /*0x685e1c*/
    v0[2] = v3 + v2; /*0x685e20*/
  }
  AsyncIO::Shutdown(); /*0x685e23*/
  (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)g_WWMouseClass_Instance + 64))( /*0x685e38*/
    g_WWMouseClass_Instance,
    g_DSurface_Hidden,
    0);
  (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x685e43*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x685e5c*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x685e7b*/
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(xRight, yBottom); /*0x685e96*/
  }
  Audio::GetFlag(g_MixerState); /*0x685ea1*/
  Audio::WaitForCallback(g_MixerState); /*0x685eac*/
  v4 = g_PerformanceTickOffset; /*0x685eb6*/
  if ( g_LastPerformanceTick != -1 ) /*0x685ebe*/
    v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685ed0*/
  v5 = v4 + 300; /*0x685ed2*/
  while ( (uint8_t)Audio::IsPlaying() ) /*0x685ed8*/
  {
    v6 = g_PerformanceTickOffset; /*0x685ee6*/
    if ( g_LastPerformanceTick != -1 ) /*0x685eee*/
      v6 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685f00*/
    if ( v5 <= v6 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x685f35*/
  v7 = g_GameMode_Current[0]; /*0x685f3a*/
  v8 = 0; /*0x685f41*/
  if ( !g_GameMode_Current[0] ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685f52*/
  {
    v11 = g_GameStateFlags; /*0x686014*/
  LABEL_36:
    g_CurrentPlayerName[0] = 0; /*0x68601a*/
    if ( v11 ) /*0x686023*/
      (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v11 + 164))(v11, 0); /*0x686028*/
    g_WTFMode = 0; /*0x686035*/
    IDA_LOBYTE(v13) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68603c*/
    return v13; /*0x68604b*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685f62*/
  if ( g_GameMode_Current[0] == 4 ) /*0x685f68*/
  {
    String = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2492); /*0x685f7b*/
    ChatMessageWOL(1, String); /*0x685f84*/
    v7 = g_GameMode_Current[0]; /*0x685f89*/
  }
  if ( !g_GameStateFlags ) /*0x685f96*/
  {
    g_CurrentPlayerName[0] = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(uint8_t (**)(void))(*(unsigned int *)g_GameStateFlags + 8))() ) /*0x685fa4*/
  {
    g_CurrentPlayerName[0] = 0; /*0x685fb6*/
  LABEL_28:
    v10 = Scenario::ResetDisplayArrays(&v28); /*0x685fce*/
    Map_Load_5C9720(v10); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
  LABEL_29:
  v11 = g_GameStateFlags; /*0x685fda*/
  if ( g_GameStateFlags ) /*0x685fe2*/
  {
    v12 = (*(int (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 168))(g_GameStateFlags); /*0x685fe6*/
    v11 = g_GameStateFlags; /*0x685fec*/
    v8 = v12; /*0x685ff2*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x686002*/
    dword_A8D588 = 3; /*0x686004*/
  if ( !v8 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*(void (__thiscall **)(int))(*(unsigned int *)v11 + 172))(v11); /*0x68604e*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68605b*/
  LABEL_40:
  Movie::PlayWrapper(*((unsigned int *)g_ScenarioClass_Instance + 1296), -1, v5, 1, 1, 1); /*0x686060*/
  IDA_LOBYTE(v13) = Screen::Capture(1, 0, v8, -1); /*0x68607c*/
  if ( g_GameMode_Current[0] /*0x6860ec*/
    || (g_NetworkEventPending & 2) != 0
    || (v29 = asc_82083C,
        v27 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_Scenario_CPP, 2559),
        v26 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_Scenario_CPP, 2559),
        v14 = GetStringCSF(aTxtToReplay, 0, g_Str_File_Scenario_CPP, 2559),
        (v13 = Dialog::ShowMessageBox(-1, v14, v26, v27, 0, 0)) != 0) )
  {
    if ( !v8 ) /*0x6860f0*/
    {
      g_WTFMode = 0; /*0x6863c3*/
      return v13; /*0x6863c3*/
    }
  }
  if ( g_GameMode_Current[0] == 4 ) /*0x6860fd*/
  {
    v15 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Scenario_CPP, 2566); /*0x686110*/
    ChatMessageWOL(1, v15); /*0x686119*/
  }
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 /*0x686141*/
    || !g_GameStateFlags
    || !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( g_GameMode_Current[0] == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(int))(*(unsigned int *)g_NetworkInterface + 4))(g_NetworkInterface); /*0x68615d*/
    if ( g_NetworkInterface ) /*0x686168*/
      (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x68616e*/
    g_NetworkInterface = 0; /*0x686175*/
    v16 = operator new(0x3F310u); /*0x68617b*/
    if ( v16 ) /*0x686185*/
      g_NetworkInterface = (int)IPXInterfaceClass::Construct(v16); /*0x68618e*/
    else
      g_NetworkInterface = 0; /*0x686195*/
  }
  WinsockInterface::Init((unsigned int *)g_NetworkInterface); /*0x6861a1*/
  v17 = g_Rules_AlliesAllowed; /*0x6861b4*/
  qmemcpy(v33, &g_NetworkPlayerName, sizeof(v33)); /*0x6861ba*/
  qmemcpy(v31, g_CampaignConfig, sizeof(v31)); /*0x6861ca*/
  qmemcpy(v32, g_CampaignPlayerArray, sizeof(v32)); /*0x6861da*/
  qmemcpy(v30, dword_A8B27C, sizeof(v30)); /*0x6861ea*/
  IDA_LOBYTE(v13) = InitNetworkGameState(); /*0x6861ec*/
  if ( (unsigned char)v13 ) /*0x6861f3*/
  {
    g_Rules_AlliesAllowed = v17; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v19 = v32[i]; /*0x686246*/
      dword_A8B27C[i] = v30[i]; /*0x68624a*/
      v20 = v31[i]; /*0x686250*/
      g_CampaignPlayerArray[i] = v19; /*0x686254*/
      v21 = v33[i]; /*0x68625a*/
      g_CampaignConfig[i] = v20; /*0x68625e*/
      *(LPARAM *)((char *)&g_NetworkPlayerName + i * 4) = v21; /*0x686264*/
    }
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x686278*/
  LABEL_65:
    ScenarioClass::LoadScenarioAndStart( /*0x686282*/
      (char *)g_ScenarioClass_Instance + 4700,
      0,
      *((unsigned int *)g_ScenarioClass_Instance + 3379));
    if ( (g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4) /*0x6862be*/
      && g_GameStateFlags
      && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags) )
    {
      SessionClass::CreateConnections(g_GameMode_Current); /*0x6862ce*/
      if ( g_GameMode_Current[0] == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0xF ) /*0x6862ed*/
          v22 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x686300*/
        else
          v22 = 15; /*0x6862ef*/
        Network::SetConnectionParams(g_NetworkManager, v22, -1, 600, 1); /*0x686311*/
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x686326*/
          v23 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x686339*/
        else
          v23 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(g_NetworkManager, v23, -1, 600); /*0x686348*/
      }
      else if ( g_GameMode_Current[0] == 4 && !g_GameSessionFlags ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x68636c*/
          v24 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x68637f*/
        else
          v24 = 60; /*0x68636e*/
        Network::SetConnectionParams(g_NetworkManager, v24, -1, 600, 1); /*0x686390*/
      }
    }
    GameResult::CalcScore((int)&byte_8A38E0); /*0x68639a*/
    if ( g_TacticalRender ) /*0x6863a7*/
      Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x6863af*/
    IDA_LOBYTE(v13) = TacticalMap::Redraw(&MapClass_Instance); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( g_NetworkInterface ) /*0x6861fd*/
  {
    IDA_LOBYTE(v13) = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x686203*/
    g_NetworkInterface = 0; /*0x686205*/
  }
  g_WTFMode = 0; /*0x68620f*/
  LABEL_60:
  if ( g_GameMode_Current[0] == 4 ) /*0x68621d*/
    IDA_LOBYTE(v13) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68622a*/
  return v13; /*0x686045*/
}
}
// 0x4758F0
namespace gamemd {
int Scenario::FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(this, a1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475912*/
    return StringList::Find(&g_BuildingTypeClass_Count, Destination); /*0x475925*/
  else
    return aP3; /*0x475933*/
}
} // namespace gamemd

// 0x5C9700
namespace gamemd {
void * Scenario::ResetDisplayArrays()
{
  dword_ABF9F4 = 0; /*0x5c970f*/
  memset(dword_ABF958, 0, sizeof(dword_ABF958)); /*0x5c9714*/
  dword_ABF9F8 = 0; /*0x5c9716*/
  return this; /*0x5c971d*/
}
} // namespace gamemd

// 0x642B10
namespace gamemd {
int Scenario::SetDword32(int a2)
{
  *(&this->q00C2) = a2; /*0x642b14*/
  return a2; /*0x642b1a*/
}
} // namespace gamemd

// 0x642DF0
namespace gamemd {
int Scenario::SetDword30(int a2)
{
  this->q078 = a2; /*0x642df4*/
  return a2; /*0x642df7*/
}
} // namespace gamemd
