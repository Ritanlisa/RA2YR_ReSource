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
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"

// 0x44F820
namespace gamemd {
int Scenario::ReadTeams()
{

  INIClass *v1; // esi
  INIClass * result;
  INIClass * v3;
  uint8_t *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  Object *v7; // eax
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
  unsigned int v22;
  int v23; // edi
  char *v24; // eax
  char *v25; // eax
  bool v26; // bl
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  TeamClass *v30; // eax
  void * v31;
  int v32; // edi
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // edx
  BuildingLightClass *v37; // ecx
  int v38; // eax
  int v39; // edx
  Trigger *v40; // ecx
  int v41; // edi
  unsigned char **v42; // ebp
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  unsigned int *v46; // ebp
  int v47; // ebx
  int v48; // edi
  int v49; // eax
  int *v50; // eax
  int v51; // edx
  unsigned int *Value; // eax
  int v53; // esi
  unsigned int v54; // eax
  bool v55; // [esp+8h] [ebp-DCh]
  bool v56; // [esp+9h] [ebp-DBh]
  bool v57; // [esp+Ah] [ebp-DAh]
  bool v58; // [esp+Bh] [ebp-D9h]
  int v59; // [esp+Ch] [ebp-D8h]
  int v60; // [esp+Ch] [ebp-D8h]
  int v61; // [esp+10h] [ebp-D4h]
  int v62; // [esp+14h] [ebp-D0h]
  int IndexByName; // [esp+18h] [ebp-CCh]
  int v64; // [esp+18h] [ebp-CCh]
  int v65; // [esp+1Ch] [ebp-C8h]
  int v66; // [esp+20h] [ebp-C4h]
  int * v67;
  int v68; // [esp+28h] [ebp-BCh]
  int v69; // [esp+2Ch] [ebp-B8h]
  int v70; // [esp+30h] [ebp-B4h]
  INIClass * v71;
  unsigned int v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  unsigned int v74[3]; // [esp+48h] [ebp-9Ch] BYREF
  unsigned int v75[3]; // [esp+54h] [ebp-90h] BYREF
  int v76; // [esp+60h] [ebp-84h] BYREF
  char String[128]; // [esp+64h] [ebp-80h] BYREF

  v1 = (gamemd::INIClass *)((int)(this));
  INIClass::ResetSection(this); /*0x44f82d*/
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = (gamemd::INIClass *)(INIClass::GetKeyCount(v1->__pad_0, (uint8_t *)aStructures)); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  v71 = result; /*0x44f853*/
  v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1->__pad_0, (uint8_t *)aStructures, v3); /*0x44f874*/
      INIClass::GetString(v1, (uint8_t *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      v5 = strtok(String, Str); /*0x44f89e*/
      v6 = ((HouseClass *)(v5))->FindByName(); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = (Object *)*((unsigned int *)((char *)&stru_A80220) + v6); /*0x44f8bc*/
        v65 = (int)v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !*(unsigned int *)&dword_A8B238 || v7 != (gamemd::Object *)(dword_A83D4C) ) /*0x44f8db*/
          {
            v8 = strtok(0, Str); /*0x44f8e8*/
            IndexByName = ((BuildingTypeClass *)((BuildingTypeClass *)v8))->FindIndexByName(); /*0x44f8fa*/
            if ( IndexByName != -1 ) /*0x44f8fe*/
            {
              v9 = strtok(0, Str); /*0x44f90b*/
              v61 = atoi(v9); /*0x44f919*/
              if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 408) < 4 ) /*0x44f92c*/
              {
                v13 = strtok(0, Str); /*0x44f95e*/
                v14 = atoi(v13); /*0x44f964*/
                LOWORD(v66) = v14 % 128; /*0x44f97f*/
                HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                v10 = strtok(0, Str); /*0x44f92e*/
                LOWORD(v69) = atoi(v10); /*0x44f940*/
                v11 = strtok(0, Str); /*0x44f945*/
                HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v59 = (int)(v12);
              v15 = strtok(0, Str); /*0x44f99d*/
              v67 = (int *)(atoi(v15));
              v16 = strtok(0, Str); /*0x44f9bf*/
              v58 = (int *)(0);
              v17 = (unsigned int)(strtok(0, Str));
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              v57 = 0; /*0x44f9e9*/
              v18 = strtok(0, Str); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              v55 = 1; /*0x44fa11*/
              v19 = strtok(0, Str); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              v20 = strtok(0, Str); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = atoi(v20); /*0x44fa56*/
              v70 = 1; /*0x44fa61*/
              v21 = strtok(0, Str); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                v70 = atoi(v21); /*0x44fa7e*/
              v22 = (unsigned int)(v73); /*0x44fa82*/
              v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                v24 = strtok(0, Str); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *(unsigned int *)(v22) = ((BuildingTypeClass *)((BuildingTypeClass *)v24))->FindIndexByName(); /*0x44faa5*/
                ++v22; /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              v56 = 0; /*0x44fab4*/
              v25 = strtok(0, Str); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              v26 = 0; /*0x44fadc*/
              v27 = strtok(0, Str); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              v28 = (int)(__2_YAPAXI_Z(0x720u)); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = ((BuildingClass *)(v28))->Construct(*((unsigned int *)dword_A83C6C + IndexByName), v65); /*0x44fb27*/
                if ( v29 ) /*0x44fb2b*/
                {
                  v30 = (TeamClass *)((ObjectTypeClass *)((ObjectTypeClass *)v16))->FindByName(); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    v31 = (void *)((int)(((TeamClass *)(v30))->FindOrCreate()));
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference((ObjectClass *)v29, v31); /*0x44fb4a*/
                  }
                  *(unsigned char *)(v29 + 1756) = v58; /*0x44fb5b*/
                  *(unsigned char *)(v29 + 1738) = v57; /*0x44fb61*/
                  *(unsigned char *)(v29 + 1739) = v56; /*0x44fb70*/
                  *(unsigned char *)(v29 + 1737) = v26; /*0x44fb78*/
                  if ( v61 >= 256 ) /*0x44fb7e*/
                    v61 = 256; /*0x44fb80*/
                  v32 = *(unsigned int *)(v29 + 1312); /*0x44fb88*/
                  LOWORD(v33) = Math::RoundToInt((double)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  *(unsigned int *)(v29 + 108) = v33; /*0x44fb9f*/
                  v34 = *(unsigned int *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    *(unsigned int *)(v29 + 108) = v34; /*0x44fbaf*/
                  v35 = *(unsigned int *)(v29 + 108); /*0x44fbbc*/
                  v74[2] = 0; /*0x44fbbf*/
                  *(unsigned int *)(v29 + 112) = v35; /*0x44fbcf*/
                  v36 = *(unsigned int *)v29; /*0x44fbd5*/
                  v64 = ((int16_t)v59 << 8) + 128; /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (SHIWORD(v59) << 8) + 128; /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(uint8_t (**)(int, unsigned int *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    v37 = *(BuildingLightClass **)(v29 + 1536); /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      ((BuildingLightClass *)(v37))->FindTarget((unsigned int *)v70); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !*(unsigned char *)(v29 + 1632) && !*(unsigned int *)(v29 + 1284) ) /*0x44fc35*/
                      {
                        v38 = *(unsigned int *)(v29 + 540); /*0x44fc43*/
                        *(unsigned char *)(v29 + 1632) = 1; /*0x44fc49*/
                        *(unsigned char *)(v29 + 128) = 1; /*0x44fc50*/
                        *(unsigned char *)(v38 + 22392) = 1; /*0x44fc57*/
                        *(unsigned char *)(*(unsigned int *)(v29 + 540) + 22393) = 1; /*0x44fc64*/
                        v39 = *(unsigned int *)(v29 + 540); /*0x44fc6b*/
                        *(unsigned char *)(v39 + 508) = 1; /*0x44fc71*/
                        v40 = *(Trigger **)(v29 + 1556); /*0x44fc78*/
                        *(unsigned char *)(v29 + 1770) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          ((Trigger *)(v40))->EnableOnce(0); /*0x44fc8b*/
                        if ( *(unsigned char *)(*(unsigned int *)(v29 + 1312) + 5822) ) /*0x44fc96*/
                          BuildingClass::RepairPlacement((BuildingClass *)v29, 0); /*0x44fca4*/
                        v41 = 0; /*0x44fca9*/
                        v42 = (unsigned char **)(v29 + 1372); /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(unsigned char *)(v41 + *(unsigned int *)(v29 + 1312) + 3980) && *v42 ) /*0x44fcc2*/
                            VtableStub::Method_425270(*v42); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++v42; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        v43 = *(unsigned int *)(v29 + 1312); /*0x44fcdc*/
                        v44 = *(unsigned int *)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          LOBYTE(v39) = *(unsigned char *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction(*(unsigned int *)(v29 + 540), v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (uint8_t)House::IsHumanPlayer(*(House **)(v29 + 540)) ) /*0x44fd07*/
                          ((VoxClass *)((VoxClass *)&stru_818E00.Next))->FindAndPlay(-1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff((BuildingClass *)v29); /*0x44fd23*/
                    }
                    v45 = *(unsigned int *)(v29 + 1312); /*0x44fd28*/
                    *(unsigned char *)(v29 + 1053) = 0; /*0x44fd2e*/
                    if ( *(unsigned char *)(v45 + 5458) && !*(unsigned char *)(v29 + 1740) ) /*0x44fd3f*/
                      BuildingClass::Deactivate((BuildingClass *)v29); /*0x44fd4b*/
                    if ( v62 > 0 ) /*0x44fd56*/
                    {
                      v46 = v73; /*0x44fd5a*/
                      v47 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v46 != -1 ) /*0x44fd66*/
                        {
                          v48 = *((unsigned int *)dword_A83C6C + *v46); /*0x44fd73*/
                          v49 = (int)(__2_YAPAXI_Z(0x720u)); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = (int *)((BuildingClass *)(v49))->Construct(v48, v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          v51 = *v50; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          (*(void (**)(int *, unsigned int *, int))(v51 + 216))(v50, v75, v67); /*0x44fdb9*/
                        }
                        ++v46; /*0x44fdbf*/
                        --v47; /*0x44fdc2*/
                      }
                      while ( v47 ); /*0x44fdc3*/
                    }
                    if ( (*(uint8_t (**)(int))(*(unsigned int *)v29 + 1020))(v29) /*0x44fde1*/
                      && (*(uint8_t (**)(int))(*(unsigned int *)v29 + 1020))(v29)
                      && *(unsigned int *)(v29 + 1408) )
                    {
                      Value = (unsigned int *)(((ProgressTimer *)((ProgressTimer *)(v29 + 904)))->GetValue(&v76));
                      v53 = *(unsigned int *)(v29 + 1408); /*0x44fdfd*/
                      v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(unsigned int *)(v53 + 172) = ((unsigned int *)(dword_7F4890))[v54]; /*0x44fe17*/
                        *(unsigned int *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (**)(int, int))(*(unsigned int *)v29 + 32))(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = (gamemd::INIClass *)((int)((gamemd::INIClass *)(v71)));
      v3 = (gamemd::INIClass *)((int)((gamemd::INIClass *)(++v68)));
      if ( v68 >= (int)(v71) ) /*0x44fe41*/
        break; /*0x44fe41*/
      v1 = (gamemd::INIClass *)(this); /*0x44f866*/
    }
  }
  return (int)(result);

}
}
// 0x4C6180
namespace gamemd {
int Scenario::CopyLocalScenarioData()
{

  int v2; // ecx
  int i; // eax
  void *vtable3; // edx
  char *abstractFlags; // eax
  int result; // eax

  v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *((unsigned char *)this + v2 - 1) = *((unsigned char *)&((unsigned int *)(dword_A8B230))[202].referenceCount + i + 3) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  this->Scenario_field_0x34 = (void *)(*(int (**)(char *))(*(unsigned int *)&dword_A83D4C->__pad_C[24] + 24))(&dword_A83D4C->__pad_C[24]); /*0x4c61b1*/
  vtable3 = ((unsigned int *)(dword_A8B230))[127].vtable3; /*0x4c61ba*/
  abstractFlags = (char *)((unsigned int *)(dword_A8B230))[127].abstractFlags; /*0x4c61c0*/
  if ( vtable3 != (void *)-1 ) /*0x4c61c9*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)vtable3 >= (int)abstractFlags ) /*0x4c61d5*/
      abstractFlags = 0; /*0x4c61db*/
    else
      abstractFlags -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)vtable3; /*0x4c61d7*/
  }
  this->Scenario_field_0x38 = (unsigned char)(abstractFlags);
  result = *(unsigned int *)&dword_A83D4C->__pad_140[68]; /*0x4c61e6*/
  *(unsigned int *)this->__pad_3C = result; /*0x4c61ec*/
  *(unsigned short *)&this->__pad_3C[4] = dword_A8B230[381].vtable3; /*0x4c61fc*/
  return result; /*0x4c6200*/

}
}
// 0x50D610
namespace gamemd {
int Scenario::ProcessSidebarUnits()
{

  int result; // eax
  Scenario **v3; // esi
  int v4; // ebx
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int * v10;
  int i; // [esp+Ch] [ebp-8h]
  char v12[4]; // [esp+10h] [ebp-4h] BYREF

  result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x50d619*/
  for ( i = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; i >= 0; --i ) /*0x50d622*/
  {
    v3 = *(Scenario ***)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
      v4 = *(unsigned int *)(*(int (**)(Scenario **, char *))&(*v3)->__pad_9C[284])(v3, v12); /*0x50d64d*/
      v5 = (*(int (**)(Scenario **))(*v3)->__pad_84)(v3); /*0x50d659*/
      v6 = (int *)__2_YAPAXI_Z(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      v7 = *(unsigned int *)&this->__pad_9C[216]; /*0x50d670*/
      if ( *(unsigned int *)&this->__pad_9C[224] < v7 /*0x50d695*/
        || (this->__pad_9C[221] || !v7)
        && (v8 = *(unsigned int *)&this->__pad_9C[228], v8 > 0)
        && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&this->__pad_9C[208] + 8))(
             &this->__pad_9C[208],
             v7 + v8,
             0) )
      {
        v9 = *(unsigned int *)&this->__pad_9C[224]; /*0x50d69c*/
        v10 = (int *)(*(unsigned int *)&this->__pad_9C[212]); /*0x50d69f*/
        *(unsigned int *)&this->__pad_9C[224] = v9 + 1; /*0x50d6a5*/
        *(unsigned int *)(v10 + 4 * v9) = (unsigned int)(v6); /*0x50d6a8*/
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

  LoadingScreen *v1; // ebp
  int v2; // edi
  int v3; // eax
  void *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // eax

  v1 = (gamemd::LoadingScreen *)(g_DisplayWidth); /*0x552b12*/
  v2 = 640; /*0x552b20*/
  if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x552b3b*/
  {
    v9 = 480; /*0x552b9a*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    v10 = (int)*(&g_DisplayWidth + 1); /*0x552baa*/
    this->Scenario_field_0x24 = v2; /*0x552baf*/
    this->Scenario_field_0x28 = (void *)v9; /*0x552bb4*/
    this->Scenario_field_0x20 = (void *)((v10 - v9) / 2); /*0x552bc6*/
    result = (int)&v1->__pad_0[-v2] / 2; /*0x552bc9*/
    this->Scenario_field_0x1C = (void *)result; /*0x552bcd*/
  }
  else
  {
    v3 = 480; /*0x552b3f*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    v4 = (void *)(v3 - 80); /*0x552b4b*/
    v5 = (char *)&(*(&g_DisplayWidth + 1))[1].LoadingScreen_field_0x10 - v3; /*0x552b5c*/
    this->Scenario_field_0x14 = (void *)v2; /*0x552b5e*/
    this->Scenario_field_0x24 = v2; /*0x552b64*/
    v6 = (int)(v5 - 80) / 2; /*0x552b6f*/
    this->Scenario_field_0x10 = (void *)v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    v7 = (int)&v1->__pad_0[-v2] / 2; /*0x552b76*/
    this->Scenario_field_0x34 = (unsigned char)((void *)v2); /*0x552b78*/
    this->Scenario_field_0xC = (void *)v7; /*0x552b7b*/
    this->Scenario_field_0x1C = (void *)v7; /*0x552b7e*/
    this->Scenario_field_0x20 = (void *)v6; /*0x552b81*/
    this->Scenario_field_0x2C = (void *)v7; /*0x552b84*/
    result = (int)v4 + v6; /*0x552b88*/
    this->Scenario_field_0x28 = v4; /*0x552b8b*/
    this->Scenario_field_0x18 = (unsigned char)((void *)40); /*0x552b8f*/
    this->Scenario_field_0x30 = (void *)result; /*0x552b92*/
    this->Scenario_field_0x38 = (gamemd::Game **)((void *)40); /*0x552b95*/
  }
  return result; /*0x552b87*/

}
}
// 0x552BE0
namespace gamemd {
unsigned int * Scenario::ComputeDialogPos(unsigned int * a2)
{

  char *Scenario_field_0x2C; // edx
  char *Scenario_field_0x30; // ecx
  unsigned int *result; // eax
  char *v5; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h] BYREF

  if ( *(unsigned int *)&dword_A8B238 ) /*0x552beb*/
  {
    v6 = Copy8Bytes(&v11, (int *)&this->Scenario_field_0x1C); /*0x552c3b*/
    v7 = *v6; /*0x552c40*/
    v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552c52*/
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
    Scenario_field_0x2C = (char *)this->Scenario_field_0x2C; /*0x552bf8*/
    Scenario_field_0x30 = (char *)this->Scenario_field_0x30; /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552bfd*/
      v5 = Scenario_field_0x2C + 84; /*0x552c06*/
    else
      v5 = Scenario_field_0x2C + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = Scenario_field_0x30 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/

}
}
// 0x55AFB0
namespace gamemd {
void Scenario::Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1)
{

  int v1; // eax
  AbstractClass *v2; // edi
  TeamClass *v3; // esi
  void *vtable3; // edx
  int abstractFlags; // eax
  void *v6; // eax
  void **p_vtable3; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebx
  AbstractClass *v14; // ebp
  int v15; // edi
  int nextArrayIndex; // edx
  char *NeedsSaveOrLink; // eax
  int *p_nextArrayIndex; // esi
  int v19; // eax
  int v20; // ecx
  unsigned char *vtable0; // edx
  char *vtable2; // eax
  void *v23; // eax
  void *v24; // edx
  unsigned char *v25; // ecx
  char *v26; // eax
  int v27; // edi
  void *v28; // edx
  AbstractClass *v29; // ecx
  void *v30; // eax
  void *v31; // esi
  void *v32; // eax
  void *v33; // ecx
  AbstractClass *v34; // edx
  int v35; // eax
  char *vtable1; // ecx
  AbstractClass *v37; // edx
  void *v38; // eax
  void *v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  void **v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int v49; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v53; // ecx
  int *v54; // eax
  ObjectClass *v55; // [esp+0h] [ebp-38h]
  ObjectClass *v56; // [esp+0h] [ebp-38h]
  ObjectClass *v57; // [esp+0h] [ebp-38h]
  ObjectClass *v58; // [esp+0h] [ebp-38h]
  ObjectClass *v59; // [esp+0h] [ebp-38h]
  LocomotionClass *v60; // [esp+0h] [ebp-38h]
  ObjectClass *v61; // [esp+0h] [ebp-38h]
  AirstrikeClass *v62; // [esp+0h] [ebp-38h]
  int v64; // [esp+14h] [ebp-24h] BYREF
  int v65; // [esp+18h] [ebp-20h]
  int v66; // [esp+1Ch] [ebp-1Ch]
  void **v67; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v69; // [esp+28h] [ebp-10h]
  char v70; // [esp+2Dh] [ebp-Bh]
  int v71; // [esp+30h] [ebp-8h]
  int v72; // [esp+34h] [ebp-4h]

  v1 = 0; /*0x55afc7*/
  v2 = dword_A8B230; /*0x55afcd*/
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[278]; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( (int)((char *)&FootClass_Array) > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (TeamClass *)*((unsigned int *)&((char *)&FootClass_Array)->ObjectClass + v1); /*0x55afec*/
      if ( BYTE2(v2[375].vtable0) ) /*0x55afef*/
      {
        if ( (uint8_t)((TeamClass *)(v3))->Update_0(50, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = dword_A8B230; /*0x55b017*/
      }
      if ( BYTE2(v2[374].uniqueId) ) /*0x55b01d*/
      {
        if ( (uint8_t)((TeamClass *)(v3))->Update_0(27, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) /*0x55b090*/
          || (uint8_t)((TeamClass *)(v3))->Update_0(28, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (uint8_t)((TeamClass *)(v3))->Update_0(36, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (uint8_t)((TeamClass *)(v3))->Update_0(37, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = dword_A8B230; /*0x55b09d*/
      }
      if ( HIBYTE(v2[374].uniqueId) /*0x55b10f*/
        && ((uint8_t)((TeamClass *)(v3))->Update_0(45, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
         || (uint8_t)((TeamClass *)(v3))->Update_0(46, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0))
        || (uint8_t)((TeamClass *)(v3))->Update_0(13, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
        || (uint8_t)((TeamClass *)(v3))->Update_0(51, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = dword_A8B230; /*0x55b118*/
      if ( dword_A8B230[127].vtable3 != (void *)-1 ) /*0x55b124*/
      {
        vtable3 = dword_A8B230[127].vtable3; /*0x55b126*/
        abstractFlags = dword_A8B230[127].abstractFlags; /*0x55b12c*/
        if ( vtable3 != (void *)-1 ) /*0x55b134*/
        {
          if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)vtable3 >= abstractFlags ) /*0x55b140*/
            break; /*0x55b140*/
          abstractFlags -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)vtable3; /*0x55b142*/
        }
        if ( !abstractFlags ) /*0x55b146*/
          break; /*0x55b146*/
      }
LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= (int)((char *)&FootClass_Array) ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    ((TeamClass *)(v3))->Update_0(14, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0); /*0x55b148*/
LABEL_22:
    v2 = dword_A8B230; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
LABEL_24:
  v6 = v2[127].vtable3; /*0x55b17d*/
  p_vtable3 = &v2[127].vtable3; /*0x55b183*/
  if ( v6 != (void *)-1 ) /*0x55b18b*/
  {
    v8 = v2[127].abstractFlags; /*0x55b18d*/
    v9 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)v6; /*0x55b19e*/
    if ( (signed int)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)v2[127].vtable3) >= v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *p_vtable3 != (void *)-1 ) /*0x55b1ae*/
      {
        v10 = v2[127].abstractFlags; /*0x55b1b0*/
        v11 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)*p_vtable3; /*0x55b1b3*/
        if ( v11 >= v10 ) /*0x55b1b9*/
          v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - v11; /*0x55b1bb*/
        v2[127].abstractFlags = v12; /*0x55b1c1*/
        *p_vtable3 = (void *)-1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55b1cd*/
      v2 = dword_A8B230; /*0x55b1d2*/
    }
  }
  BYTE2(v2[374].uniqueId) = 0; /*0x55b1d8*/
  BYTE1(dword_A8B230[374].uniqueId) = 0; /*0x55b1e4*/
  HIBYTE(dword_A8B230[374].uniqueId) = 0; /*0x55b1f1*/
  BYTE2(dword_A8B230[375].vtable0) = 0; /*0x55b1fe*/
  v13 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b205*/
  if ( !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b226*/
    || *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    v14 = dword_A8B230; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = dword_A8B230; /*0x55b228*/
  v15 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b22e*/
  nextArrayIndex = dword_A8B230[128].nextArrayIndex; /*0x55b234*/
  NeedsSaveOrLink = (char *)dword_A8B230[128].NeedsSaveOrLink; /*0x55b23a*/
  p_nextArrayIndex = &dword_A8B230[128].nextArrayIndex; /*0x55b240*/
  if ( nextArrayIndex == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - nextArrayIndex < (int)NeedsSaveOrLink ) /*0x55b251*/
  {
    NeedsSaveOrLink -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - nextArrayIndex; /*0x55b253*/
LABEL_38:
    if ( NeedsSaveOrLink ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  LOWORD(v19) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b259*/
  v20 = v65; /*0x55b26a*/
  *p_nextArrayIndex = v15; /*0x55b26e*/
  p_nextArrayIndex[1] = v20; /*0x55b270*/
  p_nextArrayIndex[2] = v19; /*0x55b278*/
  ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->ProcessVisibilityFlags(); /*0x55b27b*/
  v14 = dword_A8B230; /*0x55b280*/
  v13 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b286*/
LABEL_41:
  v15 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b294*/
LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x55b2ad*/
    v14 = dword_A8B230; /*0x55b2b2*/
    v13 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b2b8*/
    v15 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b2be*/
  }
  if ( ((int)v14->vtable0 & 0x1000) != 0 && *(double *)(v13 + 5704) != 0.0 ) /*0x55b2dd*/
  {
    vtable0 = v14[129].vtable0; /*0x55b2df*/
    vtable2 = (char *)v14[129].vtable2; /*0x55b2e5*/
    if ( vtable0 != (unsigned char *)-1 ) /*0x55b2f4*/
    {
      if ( v15 - (int)vtable0 >= (int)vtable2 ) /*0x55b2fc*/
      {
LABEL_50:
        LOWORD(v23) = Math::RoundToInt(*(double *)(v13 + 5704) * 900.0); /*0x55b304*/
        v24 = (void *)v65; /*0x55b315*/
        v14[129].vtable0 = (void *)v15; /*0x55b319*/
        v14[129].vtable1 = v24; /*0x55b31b*/
        v14[129].vtable2 = v23; /*0x55b323*/
        MapClass::ProcessFogTransition((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b326*/
        v14 = dword_A8B230; /*0x55b32b*/
        v13 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b331*/
        v15 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      vtable2 -= v15 - (unsigned int)vtable0; /*0x55b2fe*/
    }
    if ( !vtable2 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
LABEL_51:
  if ( v14[378].vtable2 != v14[378].vtable1 && *(double *)(v13 + 5736) != 0.0 )
  {
    v25 = v14[130].vtable0; /*0x55b368*/
    v26 = (char *)v14[130].vtable2; /*0x55b36e*/
    if ( v25 != (unsigned char *)-1 ) /*0x55b377*/
    {
      v27 = v15 - (unsigned int)v25; /*0x55b379*/
      if ( v27 >= (int)v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
      goto LABEL_71; /*0x55b383*/
LABEL_57:
    if ( NukeFlash::IsActive() || NukeFlash::ProcessEffect() || (uint8_t)ChronoScreen::IsActive() ) /*0x55b39b*/
    {
      v28 = dword_A8B230[380].vtable2; /*0x55b40e*/
      v29 = dword_A8B230 + 130; /*0x55b414*/
      dword_A8B230[130].vtable0 = *(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b41a*/
      v30 = (void *)v65; /*0x55b41c*/
    }
    else
    {
      if ( !(uint8_t)PsyDom::IsActive() ) /*0x55b3ab*/
      {
        v31 = *(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b3d2*/
        LOWORD(v32) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5736) * 900.0); /*0x55b3e4*/
        v33 = (void *)v65; /*0x55b3ef*/
        v34 = dword_A8B230 + 130; /*0x55b3f3*/
        dword_A8B230[130].vtable0 = v31; /*0x55b3f9*/
        v34->vtable1 = v33; /*0x55b3fb*/
        v34->vtable2 = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = dword_A8B230[381].vtable0; /*0x55b3b8*/
      v29 = dword_A8B230 + 130; /*0x55b3be*/
      dword_A8B230[130].vtable0 = *(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b3c4*/
      v30 = (void *)v65; /*0x55b3c6*/
    }
    v29->vtable1 = v30; /*0x55b420*/
    v29->vtable2 = v28; /*0x55b423*/
LABEL_65:
    dword_A8B230[378].vtable2 = (int)dword_A8B230[378].vtable2 <= 0 ? 0 : dword_A8B230[378].vtable2;
    LOWORD(v35) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5744) * 100.0); /*0x55b453*/
    vtable1 = (char *)dword_A8B230[378].vtable1; /*0x55b45e*/
    if ( (int)dword_A8B230[378].vtable2 >= (int)vtable1 ) /*0x55b46c*/
    {
      dword_A8B230[378].vtable1 = &vtable1[v35]; /*0x55b490*/
      v37 = dword_A8B230; /*0x55b496*/
      v38 = dword_A8B230[378].vtable1; /*0x55b49c*/
      v39 = dword_A8B230[378].vtable2; /*0x55b4a2*/
      if ( (int)v38 >= (int)v39 ) /*0x55b4aa*/
LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      dword_A8B230[378].vtable1 = &vtable1[-v35]; /*0x55b470*/
      v37 = dword_A8B230; /*0x55b476*/
      v38 = dword_A8B230[378].vtable1; /*0x55b47c*/
      v39 = dword_A8B230[378].vtable2; /*0x55b482*/
      if ( (int)v38 <= (int)v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[378].vtable1 = v38; /*0x55b4ae*/
    HIBYTE(dword_A8B230[374].uniqueId) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(); /*0x55b4c6*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x55b4d2*/
  }
LABEL_71:
  UpdateAudioTriggers(v55); /*0x55b4d7*/
  ProcessSpeechEvents(v56); /*0x55b4dc*/
  DispatchBuildingAudioEvents((ObjectClass *)&stru_87F5D8); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects((ScenarioClass *)&v67, 0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v67 = &vt_DynamicVectorClass; /*0x55b50e*/
  v72 = 10; /*0x55b516*/
  v71 = 0; /*0x55b51a*/
  if ( (int)((char *)&FootClass_Array) > 0 ) /*0x55b51e*/
  {
    v42 = v69; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = &((char *)&FootClass_Array)->ObjectClass + v40; /*0x55b530*/
      if ( v71 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v70 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
LABEL_81:
      if ( ++v40 >= (int)((char *)&FootClass_Array) ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v72; /*0x55b526*/
    }
    if ( ((uint8_t (*)(void ***, int, unsigned int))v67[2])(&v67, v41 + v42, 0) ) /*0x55b558*/
    {
LABEL_79:
      v44 = v71++; /*0x55b55f*/
      *((unsigned int *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v69; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
LABEL_82:
  for ( i = 0; i < v71; ++i ) /*0x55b58a*/
    (*(void (**)(unsigned int))(**((unsigned int **)Block + i) + 92))(*((unsigned int *)Block + i)); /*0x55b595*/
  for ( j = dword_8A0218 - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (**)(unsigned int))(**((unsigned int **)dword_8A020C + j) + 92))(*((unsigned int *)dword_8A020C + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(v57); /*0x55b5be*/
  UpdateCameoProduction(v58); /*0x55b5c3*/
  UpdateSuperWeapons(v59); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (**)(unsigned int))(**((unsigned int **)dword_B04BD4 + k) + 92))(*((unsigned int *)dword_B04BD4 + k)); /*0x55b5e4*/
  UpdateDeferredLightSurfaces(6, 0); /*0x55b5f1*/
  LocomotionClass::UpdateAll(v60); /*0x55b5f6*/
  for ( m = 0; m < (int)this->Scenario_field_0x10; ++m ) /*0x55b606*/
  {
    v49 = *((unsigned int *)this->Scenario_field_0x4 + m); /*0x55b60b*/
    (*(void (**)(int))(*(unsigned int *)v49 + 92))(v49); /*0x55b610*/
  }
  if ( *(unsigned int *)&dword_A8B238 ) /*0x55b622*/
  {
    if ( *(unsigned int *)&dword_A8B238 != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < *(int *)&stru_A83D50.__pad_B4[12]; ++n ) /*0x55b632*/
        (*(void (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_B4 + 4 * n) + 92))(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_B4 + 4 * n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(v61); /*0x55b64b*/
  AirstrikeClass::UpdateAll(v62); /*0x55b650*/
  CrateClass::Update((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b65a*/
  (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55b667*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_C8[40]; ++ii ) /*0x55b673*/
    (*(void (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * ii) + 92))(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * ii)); /*0x55b680*/
  for ( jj = 0; jj < ((char *)&stru_A80220); ++jj ) /*0x55b696*/
  {
    v53 = *((unsigned int *)((char *)&stru_A80220) + jj); /*0x55b69d*/
    if ( v53 ) /*0x55b6a2*/
      (*(void (**)(int))(*(unsigned int *)v53 + 92))(v53); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) ) /*0x55b6b8*/
  {
    v54 = (int *)(MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) + 156); /*0x55b6cf*/
    v64 = *v54; /*0x55b6d6*/
    v65 = v54[1]; /*0x55b6e8*/
    v66 = v54[2]; /*0x55b6ef*/
    ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition(&v64); /*0x55b6f3*/
  }
  v67 = &vt_VectorClass; /*0x55b6fc*/
  if ( Block ) /*0x55b706*/
  {
    if ( v70 ) /*0x55b70e*/
      __3_YAXPAX_Z(Block); /*0x55b711*/
  }

}
}
// 0x597A10
namespace gamemd {
int Scenario::LoadOrReloadOptions(IUnknown * aP1)
{

  if ( aP1 ) /*0x597a16*/
    return (*(char (**)(Scenario *, int))(this->Scenario_field_0x0 + 4))(this, aP1); /*0x597a1b*/
  else
    return (uint8_t)LoadOptions::Run((LoadOptions *)this) != 0; /*0x597a28*/

}
}
// 0x5E7460
namespace gamemd {
int Scenario::PreGameInit()
{

  int v0; // edx
  int v1; // eax

  *((unsigned int *)dword_A8B230 + 1173) = MEMORY[0xA8B254]; /*0x5e746b*/
  dword_A8ED84 = 0; /*0x5e747c*/
  dword_A8B54C = dword_A8DA84; /*0x5e7486*/
  Debug::Log("Pregame setup for %d players.\n", dword_A8DA84); /*0x5e748b*/
  *(unsigned int *)dword_A8EB60 = MEMORY[0xA8B268]; /*0x5e74aa*/
  v0 = dword_A8E960; /*0x5e74b0*/
  BYTE1(v0) = BYTE1(dword_A8E960) & 0x77; /*0x5e74bb*/
  v1 = v0 | ((byte_A8B31D & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5e74c1*/
  dword_A8B24C = 2; /*0x5e74c3*/
  LOBYTE(v1) = dword_A8E960 | 0xC0; /*0x5e74cd*/
  dword_A8E960 = v1; /*0x5e74d4*/
  return nullsub_37(&dword_A8E960);

}
}
// 0x642AD0
namespace gamemd {
void Scenario::SetByte96()
{

  LOBYTE(this->Scenario_field_0x60) = 0; /*0x642ad0*/

}
}
// 0x684240
namespace gamemd {
int Scenario::ClearScreen(void *a1_1)
{

  int result; // eax

  ((Mouse *)((ScrollClass *)&stru_87F5F0.__pad_58[416]))->ReleaseCapture(); /*0x684245*/
  if ( !(*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x684252*/
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x684261*/
  BYTE2(dword_A8B230[381].vtable3) = 1; /*0x68426c*/
  *((unsigned int *)((char *)&stru_A8EB00 + 440)) = 1; /*0x684278*/
  result = Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x68427d*/
  dword_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/

}
}
// 0x684620
namespace gamemd {
int Scenario::LoadWithProgress()
{

  char v2; // al
  wchar_t *v3; // edi
  wchar_t *StringCSF; // eax
  Scenario *Instance; // esi
  int v6; // eax
  int uniqueId; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // esi
  unsigned short *v12; // edi
  int v13; // eax
  char v14; // bl
  ScenarioClass *v15; // ecx
  int *v16; // eax
  char Sync; // bl
  int i; // esi
  int j; // esi
  wchar_t *v23; // [esp-10h] [ebp-258h]
  char v24; // [esp-8h] [ebp-250h]
  const wchar_t *v25; // [esp-4h] [ebp-24Ch]
  int _72B380; // [esp-4h] [ebp-24Ch]
  ObjectClass *v27; // [esp+0h] [ebp-248h]
  ObjectClass *v28; // [esp+0h] [ebp-248h]
  LoadProgressMgr *v29; // [esp+10h] [ebp-238h]
  int v30[2]; // [esp+14h] [ebp-234h] BYREF
  const wchar_t *v31; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v33; // [esp+30h] [ebp-218h]
  int v34; // [esp+34h] [ebp-214h]
  int v35; // [esp+38h] [ebp-210h]
  int v36; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v38[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, this); /*0x684653*/
  dword_A8ED84 = 0; /*0x68466b*/
  LOBYTE(dword_A8B230[381].vtable1) = 1; /*0x684675*/
  ++dword_A8E7AC; /*0x684685*/
  if ( _strcmpi(&Source[strlen(Source) - 4], aSed) ) /*0x684694*/
    BYTE1(dword_A8B230[375].vtable0) = 0; /*0x6846be*/
  else
    BYTE1(dword_A8B230[375].vtable0) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v29 = 0; /*0x6846d4*/
  if ( !byte_A8ED6B ) /*0x6846d8*/
  {
    v2 = 1; /*0x6846eb*/
    if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x6846f2*/
      v2 = dword_A8DA84; /*0x6846f4*/
    ProgressAnim::Init((int)&dword_AC4F58, 0, 1079574528, v2, 0); /*0x684706*/
    v3 = 0; /*0x684710*/
    if ( *(unsigned int *)&dword_A8B238 == 4 && *(unsigned int *)dword_B779C4 ) /*0x68471c*/
    {
      v25 = dword_B779D4; /*0x684729*/
      StringCSF = GetStringCSF(aTxtGameId, 0, g_Str_File_Scenario_CPP, 1199); /*0x684736*/
      swprintf(v38, (const size_t)StringCSF, v25); /*0x684744*/
      v3 = v38; /*0x68474c*/
    }
    Instance = (Scenario *)LoadProgressMgr::GetInstance(); /*0x684758*/
    v29 = (LoadProgressMgr *)Instance; /*0x68475c*/
    Scenario::ComputeDisplayPosition(Instance); /*0x684760*/
    Function::Method_643E80((Function *)&dword_AC4F58, (int)Instance); /*0x68476b*/
    v6 = 0; /*0x68477c*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x684780*/
    {
      v8 = *(unsigned int *)(*dword_A8DA78 + 75); /*0x6847a4*/
      if ( v8 == -3 ) /*0x6847aa*/
        v8 = 0; /*0x6847ac*/
      v6 = *(unsigned int *)(*((unsigned int *)dword_A83C9C + v8) + 188); /*0x6847b7*/
    }
    else
    {
      uniqueId = dword_A8B230[375].uniqueId; /*0x684782*/
      if ( uniqueId != -1 ) /*0x68478b*/
        v6 = *(unsigned int *)(*((unsigned int *)dword_A83CFC + uniqueId) + 152); /*0x684795*/
    }
    dword_A8B230[374].NeedsSaveOrLink = v6; /*0x6847c3*/
    Scenario::SetDword32((Scenario *)&dword_AC4F58, v6); /*0x6847c9*/
    LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v27); /*0x6847d5*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x6847e1*/
    {
      SHPClass::Load((int)&dword_AC4F58, g_Str_File_PROGBARM_SHP, 0, 0); /*0x684800*/
    }
    else
    {
      _72B380 = Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((int)&dword_AC4F58, aSpldbrShp, 0, _72B380); /*0x6847f0*/
    }
    v24 = *(unsigned int *)&dword_A8B238 != 0; /*0x684819*/
    v9 = Scenario::ComputeDialogPos(Instance, v30); /*0x68481e*/
    ((TextRenderer *)((int *)dword_AC4F58.__pad_0))->MeasureBuilding(*v9, v9[1], (int)v3, v24, v24); /*0x68482f*/
    v10 = Map_Load(); /*0x684836*/
    Scenario::SetDword30((Scenario *)&dword_AC4F58, v10); /*0x684841*/
    if ( dword_887628 ) /*0x68484d*/
    {
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8DA84 > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (**)(unsigned int *))(*dword_887628 + 48))(dword_887628); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v33 = 0; /*0x6848a3*/
        v34 = 0; /*0x6848b0*/
        v35 = 0; /*0x6848b6*/
        v36 = 0; /*0x6848be*/
        v11 = 1; /*0x6848c2*/
        if ( dword_A8DA84 > 1 ) /*0x6848c4*/
        {
          v12 = &dword_A8E2B2 + 2; /*0x6848ca*/
          do /*0x684955*/
          {
            ((Network *)((Network *)(dword_A8DA78[v11] + 40)))->CopyAddress(&v31, (int)v30); /*0x6848e5*/
            sprintf(Buffer, "%d.%d.%d.%d", LOBYTE(v30[0]), BYTE1(v30[0]), BYTE2(v30[0]), HIBYTE(v30[0])); /*0x68491f*/
            v13 = Debug::Log(); /*0x68492e*/
            LOWORD(v13) = *v12; /*0x684933*/
            (*(void (**)(unsigned int *, char *, int))(*dword_887628 + 44))(dword_887628, Buffer, v13); /*0x684947*/
            ++v11; /*0x68494f*/
            ++v12; /*0x684950*/
          }
          while ( v11 < dword_A8DA84 ); /*0x684955*/
        }
      }
    }
  }
  if ( BYTE1(dword_A8B230[375].vtable0) ) /*0x684961*/
  {
    v14 = Scenario::LoadOrReloadOptions((Scenario *)byte_ABDFD8, (int)Source); /*0x68497a*/
    if ( v14 ) /*0x68497e*/
    {
      RandomMap::Generate((RandomMap *)byte_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v15) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v15); /*0x684990*/
    }
    strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x6849b8*/
  }
  else
  {
    v14 = ScenarioClass::Construct(Source, a2); /*0x6849ce*/
  }
  if ( !dword_8871E0->__pad_13BC[242] ) /*0x6849d6*/
    MapClass::ClearShroud((MapClass *)&dword_87F7E8, 0); /*0x6849e7*/
  if ( v14 )
  {
    MessageListClass::Init( /*0x684ac9*/
      &unk_A8BC60,
      DSurface_ViewBounds.field_0 + 3,
      dword_886FA4,
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      dword_886FA8 - 6);
    PostLoadInitScenario(v27); /*0x684ace*/
    if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 99); /*0x684ae8*/
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x684af3*/
      {
        if ( byte_A8DBA0 ) /*0x684afc*/
          ((Process *)((Process *)&unk_B052D0))->WaitForExit(0x3A98u, 1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, BYTE1(dword_A8B230[375].vtable0) != 0 ? 200 : 100);
    byte_A8B8C1 = 0; /*0x684b30*/
    byte_A8B8C2 = 0; /*0x684b37*/
    Sync = WaitForMultiplayerLoadSync(v28); /*0x684b43*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances((ObjectClass *)&dword_A8B238); /*0x684b53*/
    --dword_A8E7AC; /*0x684b66*/
    if ( !byte_A8ED6B ) /*0x684b6c*/
    {
      if ( Sync ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684b7c*/
        __asm /*0x684b81*/
        {
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x684b8c*/
        {
          do /*0x684bd2*/
          {
            for ( i = 0; i < dword_A8DA84; ++i ) /*0x684b97*/
              Network::UpdateLatencyDisplay((int)&dword_AC4F58, i, 100.0, NAN); /*0x684bae*/
            Progress::GetAverage((Progress *)&dword_AC4F58); /*0x684bc2*/
            __asm /*0x684bc7*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x684bd2*/
        }
      }
    }
    LOBYTE(dword_A8B230[381].vtable1) = 0; /*0x684bde*/
    Scenario::SetByte96((Scenario *)&dword_AC4F58); /*0x684be5*/
    if ( v29 ) /*0x684bf0*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v29); /*0x684c00*/
    }
    for ( j = dword_A80238 - 1; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*((Scenario **)&dword_A8022C->vtable0 + j)); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v31 = asc_82083C; /*0x684a31*/
    v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a45*/
    v16 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_Scenario_CPP, 1293); /*0x684a50*/
    Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v27); /*0x684a5a*/
    --dword_A8E7AC; /*0x684a6b*/
    LOBYTE(dword_A8B230[381].vtable1) = 0; /*0x684a71*/
    if ( v29 ) /*0x684a7d*/
    {
      Function::Method_643E80((Function *)&dword_AC4F58, 0); /*0x684a86*/
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
  char v1; // bl
  AsyncIO *v2; // edi
  double v3; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v12; // ecx
  char v13; // al
  int16_t result; // ax
  void *vtable2; // ecx
  void *vtable3; // ecx
  AbstractClass *v17; // ecx
  int uniqueId; // ecx
  IPXInterfaceClass *v19; // eax
  int v20; // ebp
  int i; // eax
  int v22; // edx
  int v23; // ecx
  LPARAM v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CreditsPower *v28; // [esp-8h] [ebp-94h]
  ObjectClass *v29; // [esp+8h] [ebp-84h] BYREF
  unsigned int v30[8]; // [esp+Ch] [ebp-80h] BYREF
  unsigned int v31[8]; // [esp+2Ch] [ebp-60h] BYREF
  unsigned int v32[8]; // [esp+4Ch] [ebp-40h] BYREF
  unsigned int v33[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(v29); /*0x68568d*/
    Map_Get_55CF10(v29); /*0x685692*/
  }
  p_vtable2 = &dword_A8B230[43].vtable2; /*0x68569f*/
  *((unsigned int *)((char *)&stru_A8EB00 + 376)) = 0; /*0x6856a5*/
  byte_A8E378 = 0; /*0x6856ac*/
  if ( dword_A8B230[43].vtable2 != (void *)-1 ) /*0x6856bb*/
  {
    Ticks = TimerGetTicks(); /*0x6856c0*/
    v6 = (char *)p_vtable2[2]; /*0x6856c7*/
    v7 = Ticks - (unsigned int)*p_vtable2; /*0x6856ca*/
    *p_vtable2 = (void *)-1; /*0x6856cc*/
    p_vtable2[2] = &v6[v7]; /*0x6856d0*/
  }
  AsyncIO::Shutdown(v2); /*0x6856d3*/
  (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x6856e8*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6856f3*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6856ff*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x68570c*/
  Audio::GetFlag((Audio *)g_MixerState); /*0x685715*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685720*/
  v8 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x68572a*/
  if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x685732*/
    v8 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x685744*/
  v9 = v8 + 300; /*0x685746*/
  while ( (uint8_t)Audio::IsPlaying() ) /*0x68574c*/
  {
    v8 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x68575a*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x685762*/
      v8 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x685774*/
    if ( v9 <= v8 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x6857ca*/
    && *(unsigned int *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x6857d1*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6857e5*/
  }
  v10 = *(unsigned int *)&dword_A8B238; /*0x6857ea*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  v1 = 0; /*0x685802*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685807*/
  {
    v12 = dword_A8B23C; /*0x6858c6*/
  LABEL_36:
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x6858ce*/
    if ( v12 ) /*0x6858d7*/
      (*((void (**)(ObjectClass *, int))v12->AbstractClass + 41))(v12, 1); /*0x6858dd*/
    byte_A8E9A0 = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685817*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x68581d*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, StringCSF); /*0x685839*/
    v10 = *(unsigned int *)&dword_A8B238; /*0x68583e*/
  }
  v8 = 0; /*0x685849*/
  if ( !dword_A8B23C ) /*0x68584d*/
  {
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((uint8_t (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x68585a*/
  {
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68586c*/
  LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)&v29 + 3)); /*0x685884*/
    Map_Load_5C9720(0, -1, 3); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
  LABEL_29:
  v12 = dword_A8B23C; /*0x685890*/
  if ( dword_A8B23C ) /*0x685898*/
  {
    v13 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x68589c*/
    v12 = dword_A8B23C; /*0x6858a2*/
    v1 = v13; /*0x6858a8*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x6858b8*/
    dword_A8D588 = 3; /*0x6858ba*/
  if ( !v1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*((void (**)(ObjectClass *))v12->AbstractClass + 43))(v12); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
  LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[143].NeedsSaveOrLink, -1, 3, 1, 1, 1); /*0x685915*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685940*/
  if ( !IDA_BYTE2(dword_A8B230[374].abstractFlags) ) /*0x68594b*/
  {
    __0Iostream_init_QAE_XZ_5((Iostream_init *)((char *)&v29 + 3)); /*0x685959*/
    Map_Load_6C8E80(v1, -1, 3); /*0x685960*/
  }
  vtable2 = dword_A8B230[144].vtable2; /*0x68596b*/
  if ( vtable2 != (void *)-1 ) /*0x685973*/
    Movie::PlayWrapper((int)vtable2, -1, 3, 1, 1, 1); /*0x68597d*/
  vtable3 = dword_A8B230[144].vtable3; /*0x685987*/
  if ( vtable3 != (void *)-1 ) /*0x68598f*/
    Movie::PlayWrapper((int)vtable3, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !CopyProtection::CheckProtectedData() || (v17 = dword_A8B230, IDA_HIBYTE(dword_A8B230[374].abstractFlags)) ) /*0x6859b1*/
  {
    byte_A8E9A0 = 0; /*0x685b33*/
    return (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685b49*/
  }
  if ( IDA_LOBYTE(dword_A8B230[374].abstractFlags) ) /*0x6859bf*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x6859c9*/
    if ( uniqueId != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(unsigned int *)(*((unsigned int *)dword_A83CFC + uniqueId) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(v28, 3, v8); /*0x6859ee*/
    byte_A8E9A0 = 0; /*0x6859f9*/
    return (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a0f*/
  }
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 || !dword_A8B23C ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) ) /*0x685a2b*/
  {
    v17 = dword_A8B230; /*0x685a32*/
  LABEL_58:
    if ( IDA_LOBYTE(v17[374].nextArrayIndex) ) /*0x685a38*/
    {
      if ( IDA_BYTE1(v17[205].vtable1) ) /*0x685a42*/
        Map_Delete_5ADE20((int)v17, (const char *)&v17[7].vtable3); /*0x685a52*/
      else
        Map_Delete_5ADE20((int)v17, (const char *)&v17->vtable1); /*0x685a5c*/
    }
    else
    {
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a6b*/
      Map_Delete((ObjectClass *)dword_A8B230); /*0x685a74*/
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685a81*/
    }
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685a84*/
  LABEL_64:
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685a8f*/
  Scenario::CopyLocalScenarioData((Scenario *)&stru_8A38E0); /*0x685a9f*/
  ++dword_A8B230[130].vtable3; /*0x685ab0*/
  if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x685ada*/
    && dword_A8B23C
    && (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x685aeb*/
    {
      (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 4))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x685af5*/
      if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x685b00*/
        (***(void (****)(unsigned int, int))&stru_887598.isAliveFlag)(*(unsigned int *)&stru_887598.isAliveFlag, 1); /*0x685b06*/
      *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x685b0d*/
      v19 = (IPXInterfaceClass *)RA2_OPNEW(0x3F310u); /*0x685b13*/
      if ( v19 ) /*0x685b1d*/
        *(unsigned int *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v19); /*0x685b26*/
      else
        *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x685b4a*/
    }
    ((WinsockInterface *)(*(WinsockInterface **)&stru_887598.isAliveFlag))->Init(); /*0x685b56*/
    v20 = *(unsigned int *)&stru_A8B250.__pad_0[36]; /*0x685b69*/
    qmemcpy(v33, dword_A8DA90, sizeof(v33)); /*0x685b6f*/
    qmemcpy(v31, &stru_A8B250.__pad_0[108], sizeof(v31)); /*0x685b7f*/
    qmemcpy(v30, &stru_A8B250.__pad_0[76], sizeof(v30)); /*0x685b8f*/
    qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x685b9f*/
    IDA_LOBYTE(result) = InitNetworkGameState(); /*0x685ba1*/
    if ( !(unsigned char)result ) /*0x685ba8*/
    {
      if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x685bb2*/
      {
        result = (***(int (****)(unsigned int, int))&stru_887598.isAliveFlag)( /*0x685bb8*/
                   *(unsigned int *)&stru_887598.isAliveFlag,
                   1);
        *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x685bba*/
      }
      byte_A8E9A0 = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    *(unsigned int *)&stru_A8B250.__pad_0[36] = v20; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v22 = v30[i]; /*0x685be2*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x685be6*/
      v23 = v31[i]; /*0x685bec*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 76] = v22; /*0x685bf0*/
      v24 = v33[i]; /*0x685bf6*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 108] = v23; /*0x685bfa*/
      dword_A8DA90[i] = v24; /*0x685c00*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x685c14*/
  }
  byte_A8E9A0 = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !byte_A8E9A0 ) /*0x685c28*/
    return (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x685c32*/
  while ( !ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
             (char *)&dword_A8B230[130].abstractFlags,
             1,
             v3,
             dword_A8B230[375].uniqueId) )
    ; /*0x685c5d*/
  if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x685c9d*/
    && dword_A8B23C
    && (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x685cad*/
    if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x685ccc*/
        v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685cdf*/
      else
        v25 = 15; /*0x685cce*/
      ((Network *)(&unk_A8E9C0))->SetConnectionParams(v25, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d05*/
        v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d18*/
      else
        v26 = 60; /*0x685d07*/
      ((TacticalClass *)(&unk_A8E9C0))->SetCameraPosition(v26, -1, 600); /*0x685d27*/
    }
    else if ( *(unsigned int *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x685d4c*/
        v27 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x685d5f*/
      else
        v27 = 60; /*0x685d4e*/
      ((Network *)(&unk_A8E9C0))->SetConnectionParams(v27, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x685d7a*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x685d87*/
    Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x685d90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}
}
// 0x685DC0
namespace gamemd {
void Scenario_EndGame()
{
  AsyncIO *v1; // edi
  double v2; // st7
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // eax
  char v11; // bl
  wchar_t *StringCSF; // eax
  ObjectClass *v13; // ecx
  char v14; // al
  int v15; // eax
  int *v16; // eax
  wchar_t *v17; // eax
  IPXInterfaceClass *v18; // eax
  int v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  wchar_t *v28; // [esp-1Ah] [ebp-A8h]
  wchar_t *v29; // [esp-16h] [ebp-A4h]
  int v30; // [esp-Ah] [ebp-98h]
  ObjectClass *v31[2]; // [esp+6h] [ebp-88h] BYREF
  unsigned int v32[8]; // [esp+Eh] [ebp-80h] BYREF
  unsigned int v33[8]; // [esp+2Eh] [ebp-60h] BYREF
  unsigned int v34[8]; // [esp+4Eh] [ebp-40h] BYREF
  unsigned int v35[8]; // [esp+6Eh] [ebp-20h] BYREF

  if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x685ddb*/
  {
    RunNetworkGameLoop(v31[0]); /*0x685ddd*/
    Map_Get_55CF10(v31[0]); /*0x685de2*/
  }
  p_vtable2 = &dword_A8B230[43].vtable2; /*0x685def*/
  *((unsigned int *)((char *)&stru_A8EB00 + 376)) = 0; /*0x685df5*/
  byte_A8E378 = 0; /*0x685dfc*/
  if ( dword_A8B230[43].vtable2 != (void *)-1 ) /*0x685e0b*/
  {
    Ticks = TimerGetTicks(); /*0x685e10*/
    v5 = (char *)p_vtable2[2]; /*0x685e17*/
    v6 = Ticks - (unsigned int)*p_vtable2; /*0x685e1a*/
    *p_vtable2 = (void *)-1; /*0x685e1c*/
    p_vtable2[2] = &v5[v6]; /*0x685e20*/
  }
  AsyncIO::Shutdown(v1); /*0x685e23*/
  (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x685e38*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x685e43*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x685e4f*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x685e5c*/
  if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x685e7b*/
    && *(unsigned int *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x685e96*/
  }
  Audio::GetFlag((Audio *)g_MixerState); /*0x685ea1*/
  Audio::WaitForCallback((Audio *)g_MixerState); /*0x685eac*/
  v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x685eb6*/
  if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x685ebe*/
    v7 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x685ed0*/
  v8 = v7 + 300; /*0x685ed2*/
  while ( (uint8_t)Audio::IsPlaying() ) /*0x685ed8*/
  {
    v9 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x685ee6*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x685eee*/
      v9 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x685f00*/
    if ( v8 <= v9 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x685f35*/
  v10 = *(unsigned int *)&dword_A8B238; /*0x685f3a*/
  v11 = 0; /*0x685f41*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x685f52*/
  {
    v13 = dword_A8B23C; /*0x686014*/
  LABEL_36:
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x68601a*/
    if ( v13 ) /*0x686023*/
      (*((void (**)(ObjectClass *, unsigned int))v13->AbstractClass + 41))(v13, 0); /*0x686028*/
    byte_A8E9A0 = 0; /*0x686035*/
    IDA_LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68603c*/
    return v15; /*0x68604b*/
  }
  dword_A8D57C = (wchar_t *)((char *)dword_A8D57C + 1); /*0x685f62*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x685f68*/
  {
    StringCSF = GetStringCSF(aTxtAwayScoresc, 0, g_Str_File_Scenario_CPP, 2492); /*0x685f7b*/
    ChatMessageWOL(1, StringCSF); /*0x685f84*/
    v10 = *(unsigned int *)&dword_A8B238; /*0x685f89*/
  }
  if ( !dword_A8B23C ) /*0x685f96*/
  {
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v10 != 3 && v10 != 4 || !(*((uint8_t (**)(void))dword_A8B23C->AbstractClass + 2))() ) /*0x685fa4*/
  {
    IDA_LOWORD(stru_A8D600.Network_field_0x10) = 0; /*0x685fb6*/
  LABEL_28:
    Scenario::ResetDisplayArrays((Scenario *)((char *)v31 + 3)); /*0x685fce*/
    Map_Load_5C9720(0, -1, v8); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
  LABEL_29:
  v13 = dword_A8B23C; /*0x685fda*/
  if ( dword_A8B23C ) /*0x685fe2*/
  {
    v14 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 42))(dword_A8B23C); /*0x685fe6*/
    v13 = dword_A8B23C; /*0x685fec*/
    v11 = v14; /*0x685ff2*/
  }
  if ( ++dword_A8D588 >= 4 ) /*0x686002*/
    dword_A8D588 = 3; /*0x686004*/
  if ( !v11 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*((void (**)(ObjectClass *))v13->AbstractClass + 43))(v13); /*0x68604e*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68605b*/
  LABEL_40:
  Movie::PlayWrapper((int)dword_A8B230[144].vtable0, -1, v8, 1, 1, 1); /*0x686060*/
  IDA_LOBYTE(v15) = Screen::Capture(1, 0, v11, -1); /*0x68607c*/
  if ( *(unsigned int *)&dword_A8B238 /*0x6860ec*/
    || (dword_A8D5F8 & 2) != 0
    || (v31[1] = (ObjectClass *)asc_82083C,
        v29 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_Scenario_CPP, 2559),
        v28 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_Scenario_CPP, 2559),
        v16 = (int *)GetStringCSF(aTxtToReplay, 0, g_Str_File_Scenario_CPP, 2559),
        (v15 = Dialog::ShowMessageBox(v16, v28, v29, 0, 0, v30)) != 0) )
  {
    if ( !v11 ) /*0x6860f0*/
    {
      byte_A8E9A0 = 0; /*0x6863c3*/
      return v15; /*0x6863c3*/
    }
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6860fd*/
  {
    v17 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Scenario_CPP, 2566); /*0x686110*/
    ChatMessageWOL(1, v17); /*0x686119*/
  }
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x686141*/
    || !dword_A8B23C
    || !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x686153*/
  {
    (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 4))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x68615d*/
    if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x686168*/
      (***(void (****)(unsigned int, int))&stru_887598.isAliveFlag)(*(unsigned int *)&stru_887598.isAliveFlag, 1); /*0x68616e*/
    *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x686175*/
    v18 = (IPXInterfaceClass *)RA2_OPNEW(0x3F310u); /*0x68617b*/
    if ( v18 ) /*0x686185*/
      *(unsigned int *)&stru_887598.isAliveFlag = IPXInterfaceClass::Construct(v18); /*0x68618e*/
    else
      *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x686195*/
  }
  ((WinsockInterface *)(*(WinsockInterface **)&stru_887598.isAliveFlag))->Init(); /*0x6861a1*/
  v19 = *(unsigned int *)&stru_A8B250.__pad_0[36]; /*0x6861b4*/
  qmemcpy(v35, dword_A8DA90, sizeof(v35)); /*0x6861ba*/
  qmemcpy(v33, &stru_A8B250.__pad_0[108], sizeof(v33)); /*0x6861ca*/
  qmemcpy(v34, &stru_A8B250.__pad_0[76], sizeof(v34)); /*0x6861da*/
  qmemcpy(v32, &stru_A8B250.__pad_0[44], sizeof(v32)); /*0x6861ea*/
  IDA_LOBYTE(v15) = InitNetworkGameState(); /*0x6861ec*/
  if ( (unsigned char)v15 ) /*0x6861f3*/
  {
    *(unsigned int *)&stru_A8B250.__pad_0[36] = v19; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      v21 = v34[i]; /*0x686246*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 44] = v32[i]; /*0x68624a*/
      v22 = v33[i]; /*0x686250*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 76] = v21; /*0x686254*/
      v23 = v35[i]; /*0x68625a*/
      *(unsigned int *)&stru_A8B250.__pad_0[i * 4 + 108] = v22; /*0x68625e*/
      dword_A8DA90[i] = v23; /*0x686264*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x686278*/
  LABEL_65:
    ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 0, v2, dword_A8B230[375].uniqueId); /*0x686282*/
    if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x6862be*/
      && dword_A8B23C
      && (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C) )
    {
      SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x6862ce*/
      if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0xF ) /*0x6862ed*/
          v24 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686300*/
        else
          v24 = 15; /*0x6862ef*/
        ((Network *)(&unk_A8E9C0))->SetConnectionParams(v24, -1, 600, 1); /*0x686311*/
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x686326*/
          v25 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x686339*/
        else
          v25 = 60; /*0x686328*/
        ((TacticalClass *)(&unk_A8E9C0))->SetCameraPosition(v25, -1, 600); /*0x686348*/
      }
      else if ( *(unsigned int *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2) >= 0x3C ) /*0x68636c*/
          v26 = Network::GetLobbyStatus((Network *)&unk_A8E9C0) + 2; /*0x68637f*/
        else
          v26 = 60; /*0x68636e*/
        ((Network *)(&unk_A8E9C0))->SetConnectionParams(v26, -1, 600, 1); /*0x686390*/
      }
    }
    GameResult::CalcScore((GameResult *)&stru_8A38E0); /*0x68639a*/
    if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x6863a7*/
      Tooltip::Enable(*(Tooltip **)&stru_88732C.__pad_1C[32], stru_A8EB00.ObjectTypeClass[32]); /*0x6863af*/
    IDA_LOBYTE(v15) = TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x6861fd*/
  {
    IDA_LOBYTE(v15) = (***(int (****)(unsigned int, int))&stru_887598.isAliveFlag)( /*0x686203*/
                    *(unsigned int *)&stru_887598.isAliveFlag,
                    1);
    *(unsigned int *)&stru_887598.isAliveFlag = 0; /*0x686205*/
  }
  byte_A8E9A0 = 0; /*0x68620f*/
  LABEL_60:
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x68621d*/
    IDA_LOBYTE(v15) = ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x68622a*/
  return v15; /*0x686045*/
}
}
// 0x4758F0
namespace gamemd {
int Scenario::FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3)
{

  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)this, a1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475912*/
    return ((StringList *)((StringList *)&unk_A83D10))->Find(Destination); /*0x475925*/
  else
    return aP3; /*0x475933*/

}
} // namespace gamemd

// 0x5C9700
namespace gamemd {
void * Scenario::ResetDisplayArrays()
{

  g_MissionQueueFrame.localVariables[988] = 0; /*0x5c970f*/
  memset(&g_MissionQueueFrame.localVariables[949], 0, 0x20u); /*0x5c9714*/
  g_MissionQueueFrame.localVariables[989] = 0; /*0x5c9716*/
  return this; /*0x5c971d*/

}
} // namespace gamemd

// 0x642B10
namespace gamemd {
int Scenario::SetDword32(int a2)
{

  this->Scenario_field_0x80 = (void *)a2; /*0x642b14*/
  return a2; /*0x642b1a*/

}
} // namespace gamemd

// 0x642DF0
namespace gamemd {
int Scenario::SetDword30(int a2)
{

  this->Scenario_field_0x78 = (void *)a2; /*0x642df4*/
  return a2; /*0x642df7*/

}
} // namespace gamemd
