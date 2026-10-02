// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_652CD0_e4.hpp"
#include "e4/classes/E4Recv_6547C0_e4.hpp"
#include "e4/classes/E4Recv_655050_e4.hpp"
#include "e4/classes/E4Recv_655890_e4.hpp"
#include "e4/classes/E4Recv_659560_e4.hpp"
#include "e4/classes/E4Recv_659570_e4.hpp"
#include "e4/classes/E4Recv_659590_e4.hpp"
#include "e4/classes/E4Recv_659650_e4.hpp"
#include "e4/classes/E4Recv_6599C0_e4.hpp"
#include "e4/classes/E4Recv_659A30_e4.hpp"
#include "e4/classes/E4Recv_65C6D0_e4.hpp"
#include "e4/classes/E4Recv_65C890_e4.hpp"
#include "e4/classes/E4Recv_65C910_e4.hpp"
#include "e4/classes/E4Recv_65DD30_e4.hpp"
#include "e4/classes/E4Recv_65FB60_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/E4Recv_645B60_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Diplomacy_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/ScriptTypeClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x650A90
namespace gamemd {
int Trigger_AllocateLog(int a1)
{
  int result; // eax
  int i; // esi
  int16_t *v20; // ebp
  char *Name; // eax
  int16_t *v24; // edi
  int16_t *v31; // ebp
  int16_t *v35; // edi
  int16_t *v44; // ebp
  int16_t *v48; // edi
  int16_t *v58; // edi
  if ( byte_B04880 )
  {
  int v86; // [esp+34h] [ebp-4h]
  unsigned int v85[3]; // [esp+28h] [ebp-10h] BYREF
  int v84; // [esp+24h] [ebp-14h] BYREF
  bool v39; // cc
    int v3 = 828 * a1 + 11298400;
    unsigned int * v83 = (unsigned int *)v3;
    *(unsigned int *)v3 = *(unsigned int *)Networking_CurrentFrameCRC;
    DataGlobal_00AC6664[207 * a1] = ((Random *)((unsigned int *)g_ScenarioClass_Instance + 134))->State();
    DataGlobal_00AC6664[207 * a1 + 1] = g_CurrentFrame;
    int v4 = 0;
    int v5 = 828 * a1 + 11298412;
    do
    {
      *(unsigned int *)(v5 + 56) = -1;
      if ( v4 < HouseClass_Count )
      {
        *(unsigned char *)v5 = 0;
        for ( i = 0; i < Game_PlayerCount; ++i )
        {
          int v7 = *(unsigned int *)(Game_PlayerInfoArray + 4 * i);
          if ( *(unsigned int *)(v7 + 111) == v4 )
          {
            char * v8 = ToWideStringChar((gamemd::IUnknown *)((char *)v7));
            strncpy((char *)v5, v8, 0x14u);
          }
        }
        if ( !*(unsigned char *)v5
          && (!_strcmpi((const char *)((const void *)(*(unsigned int *)(*((unsigned int *)HouseClass_Array + v4) + 52) + 36)),(const char *)(g_INI_Key_Neutral))
           || !_strcmpi((const char *)((const void *)(*(unsigned int *)(*((unsigned int *)HouseClass_Array + v4) + 52) + 36)),(const char *)(g_INI_Key_Special))) )
        {
          strcpy((char *)v5, (const char *)(*(unsigned int *)(*((unsigned int *)HouseClass_Array + v4) + 52) + 36));
          v3 = (int)v83;
        }
        char v9 = *(unsigned char *)(*((unsigned int *)HouseClass_Array + v4) + 492);
        *(unsigned char *)(v5 + 52) = 0;
        *(unsigned char *)(v5 + 20) = v9;
        strncpy(
          (char *)(v5 + 21),
          *(const char **)(*((unsigned int *)BuildingTypeClass_AnimTable + *(unsigned int *)(*((unsigned int *)HouseClass_Array + v4) + 90196)) + 772),
          0x1Fu);
        *(unsigned int *)(v5 + 56) = v4;
        *(unsigned char *)(v5 + 91) = 0;
        strncpy(
          (char *)(v5 + 60),
          (const char *)(*((unsigned int *)g_SuperWeaponTypeCount
                         + *(unsigned int *)(*(unsigned int *)(*((unsigned int *)HouseClass_Array + v4) + 52) + 180))
                       + 36),
          0x1Fu);
      }
      ++v4;
      v5 += 92;
    }
    while ( v4 < 8 );
    int v10 = (int)(DataGlobal_87F788);
    int v11 = g_BuildingProductionState + g_AircraftClassCount + g_BuildingClass_Count + g_HouseClass_BuildState;
    unsigned int v12 =
    do
    {
      int v13 = *(unsigned int *)(v12);
      v12 += 6;
      v10 += v13;
    }
    while ( (int)v12 < (int)&DataGlobal_8A03E8 );
    if ( !*(unsigned int *)(v3 + 820) )
      *(unsigned int *)(v3 + 820) = (unsigned int)(operator new(*(unsigned int *)(v3 + 824)));
    int v14 = 40 * v10 + 104 * v11;
    if ( (unsigned int)(v14 + 1024) > *(unsigned int *)(v3 + 824) )
    {
      RA2_OPDEL(*(void **)(v3 + 820));
      *(unsigned int *)(v3 + 824) = (v14 + 0xFFFF) & 0xFFFF0000;
      ((Debug *)0)->Log();
      *(unsigned int *)(v3 + 820) = (unsigned int)(operator new(*(unsigned int *)(v3 + 824)));
    }
    int v15 = *(unsigned int *)(v3 + 820);
    int v78 = 0;
    *(unsigned int *)(v3 + 768) = v15;
    for ( *(unsigned int *)(v3 + 752) = g_BuildingClass_Count; v78 < g_BuildingClass_Count; ++v78 )
    {
      int v16 = *((unsigned int *)g_InfantryClassLimit + v78);
      int v17 = *(unsigned int *)(v16 + 156);
      int v18 = *(unsigned int *)(v16 + 160);
      v86 = *(unsigned int *)(v16 + 164);
      *(unsigned int *)v15 = v17 / 10 + ((v18 / 10) << 16);
      *(unsigned char *)(v15 + 100) = (unsigned int)((*((ProgressTimer *)((unsigned short *)(v16 + 904)))->GetValue((int)(&v84)) >> 7) + 1) >> 1;
      *(unsigned char *)(v15 + 102) = (*(int (**)(int))(*(unsigned int *)v16 + 388))(v16);
      *(unsigned int *)(v15 + 4) = *(unsigned int *)(*(unsigned int *)(v16 + 1728) + 3576);
      *(unsigned char *)(v15 + 103) = Math::RoundToInt(*(double *)(v16 + 1400) * 256.0);
      char v19 = *(unsigned char *)(*(unsigned int *)(v16 + 540) + 48);
      *(unsigned char *)(v15 + 31) = 0;
      *(unsigned char *)(v15 + 32) = v19;
      strncpy((char *)(v15 + 8), (const char *)(*(unsigned int *)(v16 + 1728) + 36), 0x17u);
      v20 = *(int16_t **)(v16 + 1444);
      int v21 = 0;
      if ( v20 )
      {
        if ( (v20[10] & 1) != 0 )
        {
          v21 = (*(int (**)(int16_t *))(*(unsigned int *)v20 + 64))(v20);
        }
        else if ( (*(int (**)(int16_t *))(*(unsigned int *)v20 + 44))(v20) == 11 )
        {
          v21 = v20[18] | (v20[19] << 16);
        }
        void * v22 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v20 + 44))(v20);
        Name = AbstractType::FindName(v22);
        *(unsigned char *)(v15 + 91) = 0;
        *(unsigned int *)(v15 + 64) = v21;
        strncpy((char *)(v15 + 68), Name, 0x17u);
      }
      else
      {
        *(unsigned int *)(v15 + 64) = 0;
        *(unsigned char *)(v15 + 68) = 0;
      }
      v24 = *(int16_t **)(v16 + 692);
      int v25 = 0;
      if ( v24 )
      {
        if ( (v24[10] & 1) != 0 )
        {
          v25 = (*(int (**)(int16_t *))(*(unsigned int *)v24 + 64))(v24);
        }
        else if ( (*(int (**)(int16_t *))(*(unsigned int *)v24 + 44))(v24) == 11 )
        {
          v25 = v24[18] | (v24[19] << 16);
        }
        void * v26 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v24 + 44))(v24);
        char * v27 = AbstractType::FindName(v26);
        *(unsigned char *)(v15 + 63) = 0;
        *(unsigned int *)(v15 + 36) = v25;
        strncpy((char *)(v15 + 40), v27, 0x17u);
      }
      else
      {
        *(unsigned int *)(v15 + 36) = 0;
        *(unsigned char *)(v15 + 40) = 0;
      }
      v15 += 104;
    }
    int v80 = 0;
    v83[189] = g_HouseClass_BuildState;
    if ( g_HouseClass_BuildState > 0 )
    {
      do
      {
        int v28 = *((unsigned int *)g_UnitClassPool + v80);
        int v29 = *(unsigned int *)(v28 + 156);
        int v30 = *(unsigned int *)(v28 + 160);
        v86 = *(unsigned int *)(v28 + 164);
        *(unsigned int *)v15 = v29 / 10 + ((v30 / 10) << 16);
        *(unsigned char *)(v15 + 100) = (unsigned int)((*((ProgressTimer *)((unsigned short *)(v28 + 904)))->GetValue((int)(&v84)) >> 7) + 1) >> 1;
        *(unsigned char *)(v15 + 101) = (unsigned int)((*((ProgressTimer *)((unsigned short *)(v28 + 928)))->GetValue((int)(v85)) >> 7) + 1) >> 1;
        *(unsigned char *)(v15 + 102) = (*(int (**)(int))(*(unsigned int *)v28 + 388))(v28);
        *(unsigned int *)(v15 + 4) = *(unsigned int *)(*(unsigned int *)(v28 + 1732) + 3576);
        *(unsigned char *)(v15 + 103) = Math::RoundToInt(*(double *)(v28 + 1400) * 256.0);
        *(unsigned char *)(v15 + 32) = *(unsigned char *)(*(unsigned int *)(v28 + 540) + 48);
        if ( !*(unsigned int *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(unsigned short *)(v15 + 96) = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 1652) + 188))(*(unsigned int *)(v28 + 1652));
        if ( !*(unsigned int *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(unsigned short *)(v15 + 98) = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 1652) + 192))(*(unsigned int *)(v28 + 1652));
        if ( !*(unsigned int *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(unsigned int *)(v15 + 92) = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 1652) + 196))(*(unsigned int *)(v28 + 1652));
        *(unsigned char *)(v15 + 31) = 0;
        strncpy((char *)(v15 + 8), (const char *)(*(unsigned int *)(v28 + 1732) + 36), 0x17u);
        v31 = *(int16_t **)(v28 + 1444);
        int v32 = 0;
        if ( v31 )
        {
          if ( (v31[10] & 1) != 0 )
          {
            v32 = (*(int (**)(int16_t *))(*(unsigned int *)v31 + 64))(v31);
          }
          else if ( (*(int (**)(int16_t *))(*(unsigned int *)v31 + 44))(v31) == 11 )
          {
            v32 = v31[18] | (v31[19] << 16);
          }
          void * v33 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v31 + 44))(v31);
          char * v34 = AbstractType::FindName(v33);
          *(unsigned char *)(v15 + 91) = 0;
          *(unsigned int *)(v15 + 64) = v32;
          strncpy((char *)(v15 + 68), v34, 0x17u);
        }
        else
        {
          *(unsigned int *)(v15 + 64) = 0;
          *(unsigned char *)(v15 + 68) = 0;
        }
        v35 = *(int16_t **)(v28 + 692);
        int v36 = 0;
        if ( v35 )
        {
          if ( (v35[10] & 1) != 0 )
          {
            v36 = (*(int (**)(int16_t *))(*(unsigned int *)v35 + 64))(v35);
          }
          else if ( (*(int (**)(int16_t *))(*(unsigned int *)v35 + 44))(v35) == 11 )
          {
            v36 = v35[18] | (v35[19] << 16);
          }
          void * v37 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v35 + 44))(v35);
          char * v38 = AbstractType::FindName(v37);
          *(unsigned char *)(v15 + 63) = 0;
          *(unsigned int *)(v15 + 36) = v36;
          strncpy((char *)(v15 + 40), v38, 0x17u);
        }
        else
        {
          *(unsigned int *)(v15 + 36) = 0;
          *(unsigned char *)(v15 + 40) = 0;
        }
        v15 += 104;
        v39 = v80 + 1 < g_HouseClass_BuildState;
        ++v78;
        ++v80;
      }
      while ( v39 );
    }
    int v81 = 0;
    v83[190] = g_AircraftClassCount;
    if ( g_AircraftClassCount > 0 )
    {
      do
      {
        int v40 = *((unsigned int *)DataGlobal_A8E394 + v81);
        int v41 = *(unsigned int *)(v40 + 156);
        int v42 = *(unsigned int *)(v40 + 160);
        v86 = *(unsigned int *)(v40 + 164);
        *(unsigned int *)v15 = v41 / 10 + ((v42 / 10) << 16);
        *(unsigned char *)(v15 + 100) = (unsigned int)((*((ProgressTimer *)((unsigned short *)(v40 + 904)))->GetValue((int)(v85)) >> 7) + 1) >> 1;
        *(unsigned char *)(v15 + 102) = (*(int (**)(int))(*(unsigned int *)v40 + 388))(v40);
        *(unsigned int *)(v15 + 4) = *(unsigned int *)(*(unsigned int *)(v40 + 1732) + 3576);
        *(unsigned char *)(v15 + 103) = Math::RoundToInt(*(double *)(v40 + 1400) * 256.0);
        char v43 = *(unsigned char *)(*(unsigned int *)(v40 + 540) + 48);
        *(unsigned char *)(v15 + 31) = 0;
        *(unsigned char *)(v15 + 32) = v43;
        strncpy((char *)(v15 + 8), (const char *)(*(unsigned int *)(v40 + 1732) + 36), 0x17u);
        v44 = *(int16_t **)(v40 + 1444);
        int v45 = 0;
        if ( v44 )
        {
          if ( (v44[10] & 1) != 0 )
          {
            v45 = (*(int (**)(int16_t *))(*(unsigned int *)v44 + 64))(v44);
          }
          else if ( (*(int (**)(int16_t *))(*(unsigned int *)v44 + 44))(v44) == 11 )
          {
            v45 = v44[18] | (v44[19] << 16);
          }
          void * v46 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v44 + 44))(v44);
          char * v47 = AbstractType::FindName(v46);
          *(unsigned char *)(v15 + 91) = 0;
          *(unsigned int *)(v15 + 64) = v45;
          strncpy((char *)(v15 + 68), v47, 0x17u);
        }
        else
        {
          *(unsigned int *)(v15 + 64) = 0;
          *(unsigned char *)(v15 + 68) = 0;
        }
        v48 = *(int16_t **)(v40 + 692);
        int v49 = 0;
        if ( v48 )
        {
          if ( (v48[10] & 1) != 0 )
          {
            v49 = (*(int (**)(int16_t *))(*(unsigned int *)v48 + 64))(v48);
          }
          else if ( (*(int (**)(int16_t *))(*(unsigned int *)v48 + 44))(v48) == 11 )
          {
            v49 = v48[18] | (v48[19] << 16);
          }
          void * v50 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v48 + 44))(v48);
          char * v51 = AbstractType::FindName(v50);
          *(unsigned char *)(v15 + 63) = 0;
          *(unsigned int *)(v15 + 36) = v49;
          strncpy((char *)(v15 + 40), v51, 0x17u);
        }
        else
        {
          *(unsigned int *)(v15 + 36) = 0;
          *(unsigned char *)(v15 + 40) = 0;
        }
        v15 += 104;
        v39 = v81 + 1 < g_AircraftClassCount;
        ++v78;
        ++v81;
      }
      while ( v39 );
    }
    int v52 = 0;
    for ( v83[191] = g_BuildingProductionState; v52 < g_BuildingProductionState; ++v78 )
    {
      int v53 = *((unsigned int *)g_BuildingClass_InstanceCount + v52);
      int v54 = *(unsigned int *)(v53 + 156);
      int v55 = *(unsigned int *)(v53 + 160);
      v86 = *(unsigned int *)(v53 + 164);
      *(unsigned int *)v15 = v54 / 10 + ((v55 / 10) << 16);
      *(unsigned char *)(v15 + 100) = (unsigned int)((*((ProgressTimer *)((unsigned short *)(v53 + 904)))->GetValue((int)(v85)) >> 7) + 1) >> 1;
      *(unsigned char *)(v15 + 102) = (*(int (**)(int))(*(unsigned int *)v53 + 388))(v53);
      int v56 = 0;
      *(unsigned int *)(v15 + 4) = *(unsigned int *)(*(unsigned int *)(v53 + 1312) + 3576);
      char v57 = *(unsigned char *)(*(unsigned int *)(v53 + 540) + 48);
      *(unsigned int *)(v15 + 64) = 0;
      *(unsigned char *)(v15 + 32) = v57;
      *(unsigned char *)(v15 + 68) = 0;
      *(unsigned char *)(v15 + 31) = 0;
      strncpy((char *)(v15 + 8), (const char *)(*(unsigned int *)(v53 + 1312) + 36), 0x17u);
      v58 = *(int16_t **)(v53 + 692);
      if ( v58 )
      {
        if ( (v58[10] & 1) != 0 )
        {
          v56 = (*(int (**)(int16_t *))(*(unsigned int *)v58 + 64))(v58);
        }
        else if ( (*(int (**)(int16_t *))(*(unsigned int *)v58 + 44))(v58) == 11 )
        {
          v56 = v58[18] | (v58[19] << 16);
        }
        void * v59 = (void *)(*(int (**)(int16_t *))(*(unsigned int *)v58 + 44))(v58);
        char * v60 = AbstractType::FindName(v59);
        *(unsigned char *)(v15 + 63) = 0;
        *(unsigned int *)(v15 + 36) = v56;
        strncpy((char *)(v15 + 40), v60, 0x17u);
      }
      else
      {
        *(unsigned int *)(v15 + 36) = 0;
        *(unsigned char *)(v15 + 40) = 0;
      }
      v15 += 104;
      ++v52;
    }
    unsigned int v61 =
    v83[187] = v78;
    unsigned int * v62 = v83 + 193;
    unsigned int * v82 = v83 + 193;
    do
    {
      v62[5] = v15;
      int v63 = 0;
      int v79 = 0;
      if ( *(unsigned int *)(v61) > 0 )
      {
        do
        {
          unsigned int * v64 = *(unsigned int **)(*(unsigned int *)((v61 - 3)) + 4 * v63);
          if ( (*(int (**)(unsigned int *))(*v64 + 44))(v64) != 4
            || (*(int (**)(unsigned int *))(v64[1] + 16))(v64 + 1) != -2 )
          {
            int v65 = v64[39];
            int v66 = v64[40];
            v86 = v64[41];
            v84 = (v66 / 10) << 16;
            *(unsigned int *)v15 = v65 / 2 + v84;
            *(unsigned short *)(v15 + 36) = (*(int (**)(unsigned int *))(*v64 + 44))(v64);
            if ( (*(int (**)(unsigned int *))(*v64 + 44))(v64) == 43
              || (*(int (**)(unsigned int *))(*v64 + 44))(v64) == 19 )
            {
              *(unsigned int *)(v15 + 4) = -1;
              *(unsigned char *)(v15 + 8) = 0;
            }
            else
            {
              int v67 = (*(int (**)(unsigned int *))(*v64 + 136))(v64);
              *(unsigned int *)(v15 + 4) = (*(int (**)(int))(*(unsigned int *)v67 + 64))(v67);
              *(unsigned char *)(v15 + 31) = 0;
              int v68 = (*(int (**)(unsigned int *))(*v64 + 136))(v64);
              strncpy((char *)(v15 + 8), (const char *)(v68 + 36), 0x17u);
            }
            int v69 = (*(int (**)(unsigned int *))(*v64 + 60))(v64);
            if ( v69 )
              *(unsigned char *)(v15 + 32) = *(unsigned char *)(v69 + 48);
            else
              *(unsigned char *)(v15 + 32) = -1;
            v15 += 40;
            ++v79;
          }
          ++v63;
        }
        while ( v63 < *(unsigned int *)(v61) );
        v62 = v82;
      }
      v61 += 6;
      *v62++ = v79;
      v82 = v62;
    }
    while ( (int)v61 < (int)&DataGlobal_8A03E8 );
    int v70 = (int)(0);
    int v71 = (int)(0);
    v83[204] = (int)(v15);
    for ( result = DataGlobal_87F788; v71 < (int)(DataGlobal_87F788); ++v71 )
    {
      unsigned int * v72 = (unsigned int *)*((unsigned int *)DataGlobal_87F77C + v71);
      if ( (*(int (**)(unsigned int *))(*v72 + 44))(v72) != 4
        || (*(int (**)(unsigned int *))(v72[1] + 16))(v72 + 1) != -2 )
      {
        int v73 = v72[39];
        int v74 = v72[40];
        v86 = v72[41];
        v84 = (v74 / 10) << 16;
        *(unsigned int *)v15 = v73 / 2 + v84;
        *(unsigned short *)(v15 + 36) = (*(int (**)(unsigned int *))(*v72 + 44))(v72);
        if ( (*(int (**)(unsigned int *))(*v72 + 44))(v72) == 43
          || (*(int (**)(unsigned int *))(*v72 + 44))(v72) == 19 )
        {
          *(unsigned int *)(v15 + 4) = -1;
          *(unsigned char *)(v15 + 8) = 0;
        }
        else
        {
          int v75 = (*(int (**)(unsigned int *))(*v72 + 136))(v72);
          *(unsigned int *)(v15 + 4) = (*(int (**)(int))(*(unsigned int *)v75 + 64))(v75);
          *(unsigned char *)(v15 + 31) = 0;
          int v76 = (*(int (**)(unsigned int *))(*v72 + 136))(v72);
          strncpy((char *)(v15 + 8), (const char *)(v76 + 36), 0x17u);
        }
        int v77 = (*(int (**)(unsigned int *))(*v72 + 60))(v72);
        if ( v77 )
          *(unsigned char *)(v15 + 32) = *(unsigned char *)(v77 + 48);
        else
          *(unsigned char *)(v15 + 32) = -1;
        v15 += 40;
        ++v70;
      }
      result = (int)(DataGlobal_87F788);
    }
    v83[203] = v70;
  }
  else
  {
    result = (int)(((Random *)((unsigned int *)g_ScenarioClass_Instance + 134))->State());
    dword_AFA26C = result;
  }
  return result;
}
} // namespace gamemd

// 0x652630
namespace gamemd {
int sub_652630(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x652640*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x653FA0
namespace gamemd {
char RenderScoreboardSidebar(void * a1, void * a2)
{
  unsigned int *v2; // ecx
  int v3; // eax
  unsigned int *v4; // edi
  int v5; // esi
  int *v6; // eax
  int v7; // esi
  int BuildingAnimByName; // eax
  wchar_t *StringCSF; // eax
  int v10; // eax
  int v11; // ecx
  wchar_t *v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // ebp
  unsigned int *v21; // eax
  const wchar_t *v22; // ecx
  unsigned int *v23; // eax
  int v24; // edx
  unsigned int *v25; // eax
  unsigned int v27;
  unsigned int v28;
  int v29; // [esp+0h] [ebp-C8h]
  unsigned int *v30; // [esp+4h] [ebp-C4h]
  unsigned int *v31; // [esp+4h] [ebp-C4h]
  int v32; // [esp+4h] [ebp-C4h]
  int v33; // [esp+8h] [ebp-C0h]
  int v34; // [esp+8h] [ebp-C0h]
  int v35; // [esp+Ch] [ebp-BCh]
  int v36; // [esp+Ch] [ebp-BCh]
  int v37; // [esp+Ch] [ebp-BCh]
  int v38; // [esp+10h] [ebp-B8h]
  int v40; // [esp+14h] [ebp-B4h]
  int v41; // [esp+18h] [ebp-B0h]
  int i; // [esp+20h] [ebp-A8h] BYREF
  int v43; // [esp+24h] [ebp-A4h] BYREF
  int v44; // [esp+28h] [ebp-A0h] BYREF
  int v45; // [esp+2Ch] [ebp-9Ch]
  int v46; // [esp+30h] [ebp-98h] BYREF
  int v47; // [esp+34h] [ebp-94h] BYREF
  unsigned int v48[2]; // [esp+38h] [ebp-90h] BYREF
  int v49; // [esp+40h] [ebp-88h] BYREF
  char v50[16]; // [esp+44h] [ebp-84h] BYREF
  int v51; // [esp+54h] [ebp-74h] BYREF
  wchar_t Buffer[18]; // [esp+58h] [ebp-70h] BYREF
  wchar_t v53[24]; // [esp+7Ch] [ebp-4Ch] BYREF
  char v54[12]; // [esp+ACh] [ebp-1Ch] BYREF
  char v55[16]; // [esp+B8h] [ebp-10h] BYREF

  IDA_LOBYTE(v3) = byte_884B8D; /*0x653fa0*/
  v4 = v2; /*0x653faf*/
  if ( byte_884B8D )
  {
    v5 = VtableStub::sub_72F510(); /*0x653fbc*/
    i = v4[1145]; /*0x653fd4*/
    v43 = v4[1147]; /*0x653fe6*/
    v6 = (int *)(*((int (**)(DSurface *, int *, unsigned int))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x653ff1*/
                  DSurface_Sidebar,
                  &v49,
                  0);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v5,(gamemd::ConvertClass *)(dword_B04A38), 0x20u,(gamemd::ConvertClass *)(&v43),(gamemd::ConvertClass *)(v6), 0, 0, 0, 1000, 0, 0, 0, 0, 0, v41); /*0x65400b*/
    v7 = v4[1149] + 2; /*0x65401c*/
    v43 = v4[1148]; /*0x65401f*/
    v44 = v7; /*0x654031*/
    BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x654035*/
    v30 = (unsigned int *)(*((int (**)(DSurface *, char *, int *, int, unsigned int, int))DSurface_Sidebar->DSurface_field_0x0 /*0x654056*/
                     + 30))(
                      DSurface_Sidebar,
                      v50,
                      &v43,
                      BuildingAnimByName,
                      0,
                      25);
    v27 = DSurface_Sidebar; /*0x654057*/
    StringCSF = GetStringCSF((wchar_t *)&stru_8392C0.SampleIndex[1], 0, (const char *)&stru_8392C0.SampleIndex[5], 1268); /*0x654069*/
    TextRenderer::DrawText(&v46, (size_t)StringCSF, (int)v27, v30, v33, v35, v38, v40); /*0x654074*/
    v10 = v4[1150]; /*0x654079*/
    v11 = v4[1148]; /*0x65407f*/
    v43 = v7; /*0x654088*/
    i = v10 + v11 - 2; /*0x654095*/
    v36 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6540b0*/
    v31 = (unsigned int *)(*((int (**)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6540c6*/
                      DSurface_Sidebar,
                      &v49);
    v28 = DSurface_Sidebar; /*0x6540c7*/
    v12 = GetStringCSF((wchar_t *)&stru_8392C0.ActiveBufferCount, 0, (const char *)&stru_8392C0.SampleIndex[5], 1270); /*0x6540d9*/
    TextRenderer::DrawText(&v46, (size_t)v12, (int)v28, v31, (int)&i, v36, 0, 537); /*0x6540e4*/
    v13 = v7 + 7; /*0x6540f1*/
    v14 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[132] + 4) == 1
        ? *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[132] + 372) + 14)
        : *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[132] + 372) + 28);
    v15 = v4[1148]; /*0x654113*/
    i = v15 + v4[1150] - 1; /*0x654129*/
    v43 = v13; /*0x654133*/
    v44 = v15; /*0x654137*/
    v45 = v13; /*0x65413b*/
    (*((void (**)(DSurface *, int *, int *, int))DSurface_Sidebar->DSurface_field_0x0 + 12))( /*0x654146*/
      DSurface_Sidebar,
      &v44,
      &i,
      v14);
    v16 = v13 + 4; /*0x65414f*/
    v3 = 0; /*0x654152*/
    for ( i = 0; v3 < ((char *)&stru_A80220); i = v3 ) /*0x65415a*/
    {
      v44 = *((unsigned int *)((char *)&stru_A80220) + v3); /*0x65416d*/
      v17 = v44; /*0x654168*/
      if ( v44 && *(unsigned char *)(*(unsigned int *)(v44 + 52) + 421) ) /*0x65417a*/
      {
        if ( *(unsigned char *)(v44 + 501) ) /*0x654188*/
        {
          v18 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6541a2*/
          v17 = v44; /*0x6541a7*/
          v19 = v18; /*0x6541ab*/
          v20 = 25; /*0x6541ad*/
        }
        else
        {
          v20 = 16409; /*0x6541ba*/
          v19 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v44 + 90196)); /*0x6541bf*/
        }
        Buffer[0] = 0; /*0x6541d3*/
        swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)(v17 + 90154)); /*0x6541da*/
        if ( !wcslen(Buffer) ) /*0x6541e4*/
          wcscpy(Buffer, (const wchar_t *)&stru_8392C0.VocClass_field_94); /*0x6541fa*/
        if ( (unsigned int)wcslen(Buffer) > 0x12 ) /*0x654212*/
          wcscpy(v53, L"."); /*0x654214*/
        v48[0] = v4[1148]; /*0x654229*/
        v48[1] = v16; /*0x65423b*/
        v21 = (unsigned int *)(*((int (**)(DSurface *, char *, unsigned int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x654249*/
                          DSurface_Sidebar,
                          v55,
                          v48);
        TextRenderer::DrawText(&v51, (size_t)&Buffer[2], (int)DSurface_Sidebar, v21, v19, 0, v20, a2); /*0x65425d*/
        v22 = 0; /*0x654269*/
        v23 = (unsigned int *)(v45 + 21476); /*0x65426b*/
        v45 = 20; /*0x654270*/
        do /*0x65428b*/
        {
          v24 = *v23 + v23[21]; /*0x65427b*/
          ++v23; /*0x65427d*/
          v22 = (const wchar_t *)((char *)v22 + v24); /*0x654280*/
          --v45; /*0x654287*/
        }
        while ( v45 ); /*0x65428b*/
        swprintf(&Buffer[2], (const size_t)&stru_8392C0.VocClass_field_8C, v22); /*0x654298*/
        a2 = (void *)(v20 | 0x200); /*0x6542ba*/
        v47 = v4[1150] + v4[1148] - 2; /*0x6542c5*/
        v48[0] = v16; /*0x6542c9*/
        v25 = (unsigned int *)(*((int (**)(DSurface *, char *, int *, int, unsigned int))DSurface_Sidebar->DSurface_field_0x0 /*0x6542d7*/
                         + 30))(
                          DSurface_Sidebar,
                          v54,
                          &v47,
                          v19,
                          0);
        TextRenderer::DrawText(&v49, (size_t)Buffer, (int)DSurface_Sidebar, v25, v29, v32, v34, v37); /*0x6542ec*/
        v3 = i; /*0x6542f1*/
        v16 += 9; /*0x6542f8*/
      }
      ++v3; /*0x654301*/
    }
  }
  return v3; /*0x654310*/
}
}
// 0x655050
namespace gamemd {
unsigned int * E4Recv_655050::sub_655050(unsigned int * a2, int16_t * a3)
{

  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi

  v3 = *a3; /*0x655063*/
  v4 = a3[1]; /*0x655066*/
  v5 = v3 + *((unsigned int *)this + 1316) - v4; /*0x65506e*/
  v6 = v3 + v4 - *((unsigned int *)this + 1318); /*0x655075*/
  v7 = 2; /*0x655077*/
  if ( v5 == -1 ) /*0x65507c*/
  {
    v5 = 0; /*0x65507e*/
LABEL_4:
    v7 = 1; /*0x655090*/
    goto LABEL_5; /*0x655090*/
  }
  if ( v5 == 2 * *((unsigned int *)this + 65) - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
LABEL_5:
  *a2 = v5; /*0x655095*/
  a2[1] = v6; /*0x6550a2*/
  a2[2] = v7; /*0x6550a6*/
  a2[3] = 1; /*0x6550aa*/
  return a2; /*0x6550a5*/

}
}
// 0x655890
namespace gamemd {
int E4Recv_655890::sub_655890()
{

  return (int)this->vtable1 + 251 * (int)((unsigned int *)this)[0]; /*0x6558a3*/

}
}
// 0x658640
namespace gamemd {
int ObjectClass::DrawPowerBarForPlayers(HWND hDlg)
{

  TabClass *v1; // ecx
  int v2; // esi
  TabClass *v3; // ebx
  int v4; // edi
  int i; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x658653*/
  v3 = v1; /*0x658657*/
  for ( i = dword_A80238; v2 < i; ++v2 ) /*0x658661*/
  {
    v4 = *(&dword_A8022C->vtable1 + v2); /*0x658668*/
    if ( v4 /*0x658683*/
      && ((uint8_t)House::IsHumanPlayer(*((House **)&dword_A8022C->vtable1 + v2))
       || !*(unsigned char *)(*(unsigned int *)(v4 + 52) + 422)) )
    {
      ((TabClass *)(v3))->DrawPower(hDlg); /*0x658692*/
    }
  }
  ((TabClass *)(v3))->DrawPower(hDlg); /*0x6586b4*/
  return ((TabClass *)(v3))->DrawPower(hDlg); /*0x6586c3*/

}
}
// 0x6586D0
namespace gamemd {
void sub_6586D0()
{
  Dialog *Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (Dialog *)CreateDialog(0x73u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))Diplomacy::DlgProc, 0); /*0x6586e9*/
  *((unsigned int *)((char *)&stru_A8EB00 + 440)) = 1; /*0x6586eb*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6586f2*/
  if ( Dialog ) /*0x6586f9*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x658703*/
    ((gamemd::Dialog *)(Dialog))->Show(); /*0x65870b*/
    dwNewLong = 0; /*0x658710*/
        while ( !this->this->((gamemd::Dialog *)0)->PumpMessages() )
    {
      if ( dwNewLong ) /*0x658727*/
        goto LABEL_7; /*0x658727*/
    }
    dwNewLong = 1059; /*0x65872b*/
  LABEL_7:
    Dialog::Destroy(Dialog); /*0x658733*/
  }
  Timer::PumpMessages(*(Timer **)&((unsigned int *)(stru_87F5F0.__pad_58))[296]); /*0x658740*/
  *((unsigned int *)((char *)&stru_A8EB00 + 440)) = IDA_BYTE2((&dword_A8B230)[381].vtable3); /*0x658758*/
  return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x658763*/
}
}
// 0x6591B0
namespace gamemd {
AbstractClass * * UpdateProjectileTrails()
{
  int v1; // ecx
  char *v2; // esi
  int v3; // ebp
  int v4; // edi
  char *v5; // edx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  bool v13; // al
  int v14; // esi
  int v15; // eax
  unsigned int *v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  ObjectClass *v20; // [esp+0h] [ebp-30h]
  void *Block; // [esp+14h] [ebp-1Ch] BYREF
  double v22; // [esp+18h] [ebp-18h]
  double v23; // [esp+20h] [ebp-10h]
  double v24; // [esp+28h] [ebp-8h]

  v1 = dword_B04A70 - 1; /*0x6591c3*/
  v2 = 0; /*0x6591c6*/
  v3 = 0; /*0x6591c8*/
  Block = 0; /*0x6591cd*/
  IDA_LODWORD(v22) = 0; /*0x6591d1*/
  if ( dword_B04A70 - 1 >= 0 ) /*0x6591d5*/
  {
    v4 = dword_B04A70; /*0x6591dc*/
    v5 = (char *)dword_B04A64 + 4 * v1; /*0x6591df*/
    do /*0x6591f5*/
    {
      if ( *(unsigned int *)(*(unsigned int *)v5 + 16) == 2 ) /*0x6591e8*/
      {
        ++v2; /*0x6591ea*/
        if ( *(unsigned char *)(*(unsigned int *)v5 + 9) ) /*0x6591eb*/
          ++v3; /*0x6591f0*/
      }
      v5 -= 4; /*0x6591f1*/
      --v4; /*0x6591f4*/
    }
    while ( v4 ); /*0x6591f5*/
    IDA_LODWORD(v22) = v3; /*0x6591f7*/
    Block = v2; /*0x6591fb*/
  }
  v6 = (double)(unsigned int)dword_ABCD44 /*0x65921d*/
     / (double)(int)dword_A8B558
     * ((double)(unsigned int)dword_ABCD44
      / (double)(int)dword_A8B558
      * ((double)(unsigned int)dword_ABCD44
       / (double)(int)dword_A8B558));
  v7 = (double)IDA_SLODWORD(v22); /*0x65921f*/
  v23 = (double)(int)Block; /*0x659227*/
  v22 = v7 / v23 - v6; /*0x659233*/
  v8 = 0.0; /*0x659237*/
  if ( v22 > 0.0 ) /*0x65924c*/
    v8 = v23 * v22; /*0x659254*/
  v9 = dword_B04A70 - 1; /*0x65925a*/
  v24 = v8 / v7; /*0x65925e*/
  v23 = 1.0 / v6; /*0x65926c*/
  if ( v1 >= 0 )
  {
    while ( 1 ) /*0x659282*/
    {
      v10 = *((unsigned int *)dword_B04A64 + v9); /*0x659282*/
      Block = (void *)v10; /*0x659285*/
      v11 = *(unsigned int *)(v10 + 16); /*0x659289*/
      if ( v11 == 1 ) /*0x65928f*/
        break; /*0x65928f*/
      if ( v11 == 2 ) /*0x6592d0*/
      {
        if ( *(unsigned char *)(v10 + 9) ) /*0x6592d6*/
        {
          v14 = Random::Range(&Randomizer_Global, 0, 99); /*0x6592e8*/
          IDA_LOWORD(v15) = Math::RoundToInt(v24 * 100.0); /*0x6592f4*/
          if ( v14 < v15 ) /*0x6592fb*/
            *((unsigned char *)Block + 9) = 0; /*0x659301*/
        }
        v13 = (bool)(Weapon_Update(v20, 0));
        goto LABEL_22; /*0x65930a*/
      }
  LABEL_35:
      if ( --v9 < 0 ) /*0x6593d6*/
        return; /*0x6593d6*/
    }
    IDA_LOWORD(v12) = Math::RoundToInt(v23 * 10.0); /*0x65929b*/
    IDA_LODWORD(v22) = v12; /*0x6592a3*/
    if ( v12 >= 10 ) /*0x6592a7*/
    {
      if ( v12 > 100 ) /*0x6592b5*/
        IDA_LODWORD(v22) = 100; /*0x6592b7*/
    }
    else
    {
      IDA_LODWORD(v22) = 10; /*0x6592a9*/
    }
    *(double *)(v10 + 24) = (double)IDA_SLODWORD(v22); /*0x6592bf*/
    v13 = RenderProjectileTrail((ObjectClass *)Block); /*0x6592c6*/
  LABEL_22:
    if ( v13 )
    {
      v16 = (unsigned int *)(Block);
      v17 = *(unsigned int *)Block; /*0x65931b*/
      if ( *(unsigned int *)Block && *(void **)(v17 + 1296) == Block ) /*0x659327*/
      {
        *(unsigned int *)(v17 + 1296) = 0; /*0x659329*/
        *(unsigned int *)Block = 0; /*0x659333*/
        v16 = (unsigned int *)(Block); /*0x659335*/
      }
      v18 = v16[1]; /*0x659339*/
      if ( v18
        && (*(unsigned char *)(v18 + 20) & 1) != 0
        && *(unsigned int **)((*(unsigned char *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) == v16 )
      {
        *(unsigned int *)((*(unsigned char *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) = 0;
        *((unsigned int *)Block + 1) = 0; /*0x659380*/
      }
      v19 = (*(int (**)(int *, void **))(RadBeam_Array + 16))(&RadBeam_Array, &Block); /*0x659393*/
      if ( v19 != -1 && v19 < dword_B04A70 && v19 < --dword_B04A70 ) /*0x6593ae*/
      {
        do /*0x6593c6*/
        {
          ++v19; /*0x6593b6*/
          *((unsigned int *)dword_B04A64 + v19 - 1) = *((unsigned int *)dword_B04A64 + v19); /*0x6593ba*/
        }
        while ( v19 < dword_B04A70 ); /*0x6593c6*/
      }
      RA2_OPDEL(Block); /*0x6593cd*/
    }
    goto LABEL_35; /*0x6593cd*/
  }
}
}
// 0x659590
namespace gamemd {
int E4Recv_659590::sub_659590(unsigned int * a2, unsigned int * a3, short a4)
{

  char result; // al
  char *v6; // esi
  int v7; // eax
  int v8[2]; // [esp+Ch] [ebp-20h] BYREF
  int v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(a2, v9); /*0x6595a8*/
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(a3, v8); /*0x6595bd*/
  v10[0] = DSurface_ViewBounds.field_0; /*0x6595d3*/
  v10[1] = (int)DSurface_ViewBounds.field_4; /*0x6595dd*/
  v10[2] = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6595e5*/
  v10[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6595e9*/
  result = ClipLine(v9, v8, v10); /*0x6595f6*/
  if ( result ) /*0x6595fd*/
  {
    v6 = (char *)((unsigned int *)this)[0] - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
    v7 = ZCoordToScreenY(a3[2]); /*0x659612*/
    return (*(char (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, char *, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65963f*/
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             v9,
             v8,
             a4,
             v6,
             -2 - v7,
             0);
  }
  return result; /*0x659642*/

}
}
// 0x65B160
namespace gamemd {
int sub_65B160()
{
  dword_B04BD4 = 0; /*0x65b167*/
  dword_B04BD8 = 0; /*0x65b16c*/
  byte_B04BDC = 1; /*0x65b171*/
  byte_B04BDD = 0; /*0x65b178*/
  RadSiteClass_Array = (int)&DynamicVectorClass_RadSiteClass___vftable; /*0x65b17d*/
  dword_B04BE4 = 10; /*0x65b187*/
  dword_B04BE0 = 0; /*0x65b191*/
  return atexit(sub_65B1A0); /*0x65b19c*/
}
}
// 0x65B1A0
namespace gamemd {
void sub_65B1A0()
{
  RadSiteClass_Array = (int)&VectorClass_RadSiteClass___vftable; /*0x65b1a8*/
  if ( dword_B04BD4 && byte_B04BDD ) /*0x65b1bc*/
  {
    RA2_OPDEL(dword_B04BD4); /*0x65b1bf*/
    dword_B04BD4 = 0; /*0x65b1c7*/
  }
  byte_B04BDD = 0; /*0x65b1cd*/
  dword_B04BD8 = 0; /*0x65b1d3*/
}
}
// 0x65C300
namespace gamemd {
int RAMFileClass::nullsub_0_1()
{

  if ( (*(uint8_t (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 24))(this) ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->RAMFileClass_field_0x10 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/

}
}
// 0x65C350
namespace gamemd {
int RAMFileClass::nullsub_0_2(int a2)
{

  if ( !this->RAMFileClass_field_0x8 /*0x65c35c*/
    || (*(uint8_t (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 24))(this) )
  {
    return 0; /*0x65c391*/
  }
  *((unsigned int *)this + 5) = 0; /*0x65c367*/
  *((unsigned int *)this + 6) = a2; /*0x65c36e*/
  *((unsigned char *)this + 28) = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->RAMFileClass_field_0x10 = 0; /*0x65c37a*/
  return (*(uint8_t (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 24))(this); /*0x65c38d*/

}
// 0x65C3A0
namespace gamemd {
AbstractClass * *  RAMFileClass::nullsub_0_3(void * a1, signed int Size)
{

  signed int v4; // edi
  char v5; // bl
  int v6; // eax

  if ( !this->RAMFileClass_field_0x8 ) /*0x65c3a6*/
    return 0; /*0x65c3a6*/
  if ( !a1 ) /*0x65c3b3*/
    return 0; /*0x65c3b3*/
  v4 = Size; /*0x65c3b5*/
  if ( !Size ) /*0x65c3bb*/
    return 0; /*0x65c3bb*/
  v5 = 0; /*0x65c3bf*/
  if ( (*(uint8_t (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 24))(this) ) /*0x65c3c1*/
  {
    if ( (*((unsigned char *)this + 24) & 1) != 0 ) /*0x65c3d9*/
      goto LABEL_7; /*0x65c3d9*/
    return 0; /*0x65c418*/
  }
  (*(void (**)(RAMFileClass *, int))(*(unsigned int *)this->__pad_0 + 28))(this, 1); /*0x65c3ce*/
  v5 = 1; /*0x65c3d1*/
LABEL_7:
  v6 = *((unsigned int *)this + 5); /*0x65c3db*/
  if ( Size >= (int)this->RAMFileClass_field_0x10 - v6 ) /*0x65c3e5*/
    v4 = (signed int)this->RAMFileClass_field_0x10 - v6; /*0x65c3e7*/
  memcpy(a1, (char *)this->RAMFileClass_field_0x8 + v6, v4); /*0x65c3f1*/
  *((unsigned int *)this + 5) += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    (*(void (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 52))(this); /*0x65c409*/
  return v4; /*0x65c40e*/

}
}
// 0x65C420
namespace gamemd {
AbstractClass * * RAMFileClass::nullsub_0_4(int a2, int a3)
{

  AbstractClass *RAMFileClass_field_0x10; // edx
  AbstractClass *RAMFileClass_field_0xC; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->RAMFileClass_field_0x8 /*0x65c42c*/
    || !(*(uint8_t (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 24))(this) )
  {
    return *((unsigned int *)this + 5); /*0x65c494*/
  }
  RAMFileClass_field_0x10 = (gamemd::AbstractClass *)(this->RAMFileClass_field_0x10); /*0x65c436*/
  RAMFileClass_field_0xC = RAMFileClass_field_0x10; /*0x65c43b*/
  if ( (*((unsigned char *)this + 24) & 2) != 0 ) /*0x65c43d*/
    RAMFileClass_field_0xC = (gamemd::AbstractClass *)(this->RAMFileClass_field_0xC); /*0x65c43f*/
  switch ( a3 ) /*0x65c449*/
  {
    case 0: /*0x65c449*/
      v6 = a2; /*0x65c469*/
      goto LABEL_11; /*0x65c469*/
    case 1: /*0x65c449*/
      *((unsigned int *)this + 5) += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = (int)RAMFileClass_field_0xC + a2; /*0x65c455*/
LABEL_11:
      *((unsigned int *)this + 5) = v6; /*0x65c46d*/
      break;
  }
  if ( *((int *)this + 5) < 0 ) /*0x65c475*/
    *((unsigned int *)this + 5) = 0; /*0x65c477*/
  if ( *((unsigned int *)this + 5) > (int)RAMFileClass_field_0xC ) /*0x65c481*/
    *((unsigned int *)this + 5) = (unsigned int)(RAMFileClass_field_0xC); /*0x65c483*/
  result = *((unsigned int *)this + 5); /*0x65c486*/
  if ( result > (int)RAMFileClass_field_0x10 ) /*0x65c48b*/
    this->RAMFileClass_field_0x10 = (unsigned int)((AbstractClass *)result); /*0x65c48d*/
  return result; /*0x65c490*/

}
}
// 0x65C560
namespace gamemd {
int RAMFileClass::nullsub_0_6(int a2)
{

  return (*(int (**)(RAMFileClass *))(*(unsigned int *)this->__pad_0 + 4))(this); /*0x65c565*/

}
// 0x65C5A0
namespace gamemd {
void * RAMFileClass::nullsub_0_10(char a2)
{

  char v3; // al

  v3 = *((unsigned char *)this + 29); /*0x65c5a3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_RAMFileClass); /*0x65c5a6*/
  *((unsigned char *)this + 28) = 0; /*0x65c5ae*/
  if ( v3 ) /*0x65c5b2*/
  {
    __3_YAXPAX_Z((void *)(this->RAMFileClass_field_0x8)); /*0x65c5b8*/
    this->RAMFileClass_field_0x8 = (unsigned int)(0); /*0x65c5c0*/
    *((unsigned char *)this + 29) = 0; /*0x65c5c7*/
  }
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_FileClass); /*0x65c5cf*/
  if ( (a2 & 1) != 0 ) /*0x65c5d7*/
    __3_YAXPAX_Z(this); /*0x65c5da*/
  return this; /*0x65c5e4*/

}
}
// 0x65C630
namespace gamemd {
void unknown_libname_28()
{
  *this = a2; /*0x65c636*/
  return this; /*0x65c638*/
}
}
// 0x65C910
namespace gamemd {
int E4Recv_65C910::sub_65C910(ObjectClass * aP1, int a3)
{

  int result; // eax
  int v5; // ecx
  int v6; // edi
  bool v7; // zf
  bool v8; // cc
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  unsigned int vtable1; // ecx
  unsigned int v14; // edi
  int v15; // esi
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // ebp
  ObjectClass *v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]
  void *vtable0; // [esp+14h] [ebp+4h]
  int v23; // [esp+18h] [ebp+8h]

  result = (int)(aP1); /*0x65c913*/
  v5 = a3; /*0x65c919*/
  v6 = (int)((gamemd::ObjectClass *)(aP1)); /*0x65c91e*/
  v7 = (int)(aP1 == a3); /*0x65c920*/
  v8 = aP1 <= a3; /*0x65c920*/
  v19 = (gamemd::ObjectClass *)(this); /*0x65c922*/
  v23 = (int)(aP1); /*0x65c926*/
  if ( !v7 ) /*0x65c92a*/
  {
    if ( !v8 ) /*0x65c930*/
    {
      v6 = v5; /*0x65c932*/
      v5 = (int)(aP1); /*0x65c934*/
      v23 = v6; /*0x65c936*/
    }
    v9 = v5 - v6; /*0x65c93d*/
    v10 = 31; /*0x65c93f*/
    v21 = v9; /*0x65c949*/
    if ( v9 >= 0 ) /*0x65c94d*/
    {
      do /*0x65c95d*/
      {
        if ( v10 <= 0 ) /*0x65c951*/
          break; /*0x65c951*/
        --v10; /*0x65c953*/
      }
      while ( ((1 << v10) & v9) == 0 ); /*0x65c95d*/
    }
    v11 = -1 << (v10 + 1); /*0x65c963*/
    v12 = v9 + 1; /*0x65c965*/
    v20 = ~v11; /*0x65c96c*/
    if ( v9 + 1 > v9 ) /*0x65c970*/
    {
      vtable0 = this->AbstractClass; /*0x65c976*/
      while ( 1 ) /*0x65c980*/
      {
        vtable1 = (unsigned int)((unsigned int *)this)[0]; /*0x65c980*/
        v14 = (unsigned int)vtable0; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        ((unsigned int *)this)[0] = (unsigned int)((void *)(vtable1 + 1)); /*0x65c98c*/
        do /*0x65c9d5*/
        {
          v16 = vtable1; /*0x65c995*/
          v17 = vtable1 ^ (&dword_839644)[v15++]; /*0x65c997*/
          v18 = v14 /*0x65c9cc*/
              ^ ((uint16_t)v17 * (v17 >> 16)
               + ((&dword_839690)[v15]
                ^ ((((uint16_t)v17 * (uint16_t)v17 + ~((v17 >> 16) * (v17 >> 16))) << 16)
                 | (((uint16_t)v17 * (uint16_t)v17 + ~((v17 >> 16) * (v17 >> 16))) >> 16))));
          vtable1 = v18; /*0x65c9d1*/
          v14 = v16; /*0x65c9d3*/
        }
        while ( v15 < 4 ); /*0x65c9d5*/
        v12 = v20 & v18; /*0x65c9df*/
        if ( (v20 & v18) <= v21 ) /*0x65c9e3*/
          break; /*0x65c9e3*/
        this = (gamemd::E4Recv_65C910 *)(v19); /*0x65c97c*/
      }
      v6 = v23; /*0x65c9e5*/
    }
    return v12 + v6; /*0x65c9eb*/
  }
  return result; /*0x65c9ef*/

}
}
// 0x65D510
namespace gamemd {
unsigned int sub_65D510(int a1, const char * a2, int a3, unsigned char * a4)
{
  unsigned int v4; // esi
  int v6; // ebp
  char *v7; // esi
  char v9; // [esp+Bh] [ebp-15h] BYREF
  unsigned int v10[4]; // [esp+Ch] [ebp-14h] BYREF
  char v11; // [esp+1Ch] [ebp-4h]

  v4 = 0; /*0x65d518*/
  v10[1] = 0; /*0x65d51f*/
  v10[2] = 0; /*0x65d523*/
  v10[3] = a1; /*0x65d527*/
  v11 = 0; /*0x65d52b*/
  v10[0] = (unsigned int)((void*)&FileStraw_vftable); /*0x65d530*/
  if ( a3 && a2 ) /*0x65d53c*/
  {
    v6 = 0; /*0x65d54b*/
    if ( FileStraw_Destru::Release((int)v10, (int)&v9, 1) == 1 ) /*0x65d556*/
    {
      v7 = (char *)a2; /*0x65d55a*/
      while ( v9 != 10 ) /*0x65d564*/
      {
        if ( v9 != 13 && (int)&v7[1 - (unsigned int)a2] < a3 ) /*0x65d573*/
        {
          *v7 = v9; /*0x65d575*/
          ++v6; /*0x65d577*/
          ++v7; /*0x65d578*/
        }
        if ( (*(int (**)(unsigned int *, char *, int))(v10[0] + 8))(v10, &v9, 1) != 1 ) /*0x65d58e*/
          goto LABEL_10; /*0x65d58e*/
      }
    }
    else
    {
  LABEL_10:
      *a4 = 1; /*0x65d590*/
      a2[v6] = 0; /*0x65d597*/
    }
    a2[v6] = 0; /*0x65d5a0*/
    v4 = strlen(a2); /*0x65d5ab*/
  }
  ((FileStraw *)((int)v10))->Destructor(); /*0x65d5b1*/
  return v4; /*0x65d5b8*/
}
}
// 0x65D5C0
namespace gamemd {
void int Stream_ReadLine(int a1, const char * a2, int a3, unsigned char * a4)
{
  int v6; // ebp
  char *v7; // esi
  int v8; // ecx
  char v10; // [esp+Bh] [ebp-5h] BYREF
  int v11; // [esp+Ch] [ebp-4h]

  if ( !a3 || !a2 ) /*0x65d5d3*/
    return 0; /*0x65d64f*/
  v6 = 0; /*0x65d5e2*/
  if ( (*(int (**)(int, char *, int))(*(unsigned int *)a1 + 8))(a1, &v10, 1) == 1 ) /*0x65d5ea*/
  {
    v7 = (char *)a2; /*0x65d5ee*/
    v8 = 1 - (unsigned int)a2; /*0x65d5f0*/
    v11 = 1 - (unsigned int)a2; /*0x65d5f2*/
    while ( v10 != 10 ) /*0x65d602*/
    {
      if ( v10 != 13 && (int)&v7[v8] < a3 ) /*0x65d610*/
      {
        *v7 = v10; /*0x65d612*/
        ++v6; /*0x65d614*/
        ++v7; /*0x65d615*/
      }
      if ( (*(int (**)(int, char *, int))(*(unsigned int *)a1 + 8))(a1, &v10, 1) != 1 ) /*0x65d627*/
        goto LABEL_11; /*0x65d627*/
      v8 = v11; /*0x65d5f8*/
    }
  }
  else
  {
  LABEL_11:
    *a4 = 1; /*0x65d629*/
    a2[v6] = 0; /*0x65d630*/
  }
  a2[v6] = 0; /*0x65d639*/
  return strlen(a2); /*0x65d644*/
}
}
// 0x65D8E0
namespace gamemd {
bool DeployScriptActionPlane(int a1, int edx0)
{
  int v3; // edi
  int v5; // eax
  ScriptTypeClass *v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned int *v10; // ebp
  int v11; // ecx
  bool v12; // bl
  int *Waypoint_Location; // eax
  int v14; // eax
  unsigned int *v15; // esi
  ObjectClass *v16; // edi
  Cell *v17; // ebx
  signed int v18; // ebp
  Cell *NeighbourContent; // eax
  ObjectClass *v20; // eax
  unsigned int *v22; // ebp
  int v23; // ebx
  unsigned int *v24; // eax
  int v26; // eax
  char IsWithinUsableArea; // al
  void *OwnerHouse; // eax
  int v30; // ecx
  int v31; // eax
  unsigned int *TransportWaypoint; // eax
  int v34; // ecx
  int *TransitionCount; // eax
  unsigned int *v36; // edi
  int v37; // eax
  int v38; // ebx
  void *v39; // eax
  char v40; // al
  void *v41; // [esp+0h] [ebp-34h]
  int v42; // [esp+4h] [ebp-30h]
  bool v43; // [esp+16h] [ebp-1Eh]
  ScriptActionQueue v45; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int *v46; // [esp+1Ch] [ebp-18h] BYREF
  ScriptActionQueue v47; // [esp+20h] [ebp-14h]
  int16_t v48[2]; // [esp+24h] [ebp-10h] BYREF
  unsigned int v49[3]; // [esp+28h] [ebp-Ch] BYREF

  v3 = a1; /*0x65d8e7*/
  *(unsigned int *)v48 = a2; /*0x65d8ed*/
  v47 = (ScriptActionQueue)a1; /*0x65d8f1*/
  if ( !a1 || !*(unsigned int *)(*(unsigned int *)(a1 + 228) + 156) ) /*0x65d901*/
    return 0; /*0x65d901*/
  v5 = *(unsigned int *)(a1 + 224); /*0x65d90f*/
  if ( !v5 || !v5->q0A0 ) /*0x65d919*/
  {
    if ( !v5 ) /*0x65d92c*/
    {
      v6 = (ScriptTypeClass *)RA2_OPNEW(0x234u); /*0x65d933*/
      if ( v6 ) /*0x65d93d*/
        v7 = (unsigned int *)((unsigned int)(((ScriptTypeClass *)(v6))->Constructor(0))); /*0x65d942*/
      else
        v7 = 0; /*0x65d949*/
      *(unsigned int *)(v3 + 224) = (unsigned int)(v7); /*0x65d94b*/
    }
    v8 = *(unsigned int *)(v3 + 224); /*0x65d951*/
    v9 = v8->q0A0; /*0x65d957*/
    if ( v9 < 50 ) /*0x65d960*/
    {
      *(unsigned int *)(v8 + 8 * v9 + 164) = 5; /*0x65d962*/
      *(unsigned int *)(v8 + 8 * v9 + 168) = 0; /*0x65d969*/
      ++v8->q0A0; /*0x65d970*/
    }
  }
  v43 = *(unsigned char *)(v3 + 176) != 0; /*0x65d985*/
  v10 = ConstructTeamMembers((ObjectClass *)v3); /*0x65d991*/
  v11 = v10[373]; /*0x65d995*/
  v46 = v10; /*0x65d99b*/
  *(unsigned char *)(v11 + 116) = 0; /*0x65d99f*/
  if ( !v10 ) /*0x65d9a3*/
    return 0; /*0x65dd1e*/
  v12 = a2 != -1; /*0x65d9ac*/
  v12 = v12; /*0x65d9b1*/
  if ( v12 ) /*0x65d9b5*/
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v48, *(int *)v48); /*0x65d9c7*/
  else
    Waypoint_Location = (int *)(((TechnoClass *)((TechnoClass *)v3))->GetWaypointCoords((unsigned int *)(v48))); /*0x65d9d5*/
  v14 = *Waypoint_Location; /*0x65d9de*/
  v45 = (ScriptActionQueue)v14; /*0x65d9e2*/
  if ( !v43 && IDA___PAIR32__(*(uint16_t *)&v45.__tail_0[2], v14) != dword_B04C38 ) /*0x65d9f3*/
  {
    v15 = v10; /*0x65da07*/
    do /*0x65da1e*/
    {
      if ( (*(int (**)(unsigned int *))(*v15 + 44))(v15) != 15 ) /*0x65da13*/
        goto LABEL_44; /*0x65da13*/
      v15 = (unsigned int *)v15[12]; /*0x65da19*/
    }
    while ( v15 ); /*0x65da1e*/
    *(ScriptActionQueue *)v48 = v45; /*0x65da28*/
    v16 = 0; /*0x65da37*/
    v17 = (Cell *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v48); /*0x65da39*/
    v18 = -1; /*0x65da3b*/
    do /*0x65da72*/
    {
      NeighbourContent = v17; /*0x65da41*/
      if ( v18 != -1 ) /*0x65da43*/
        NeighbourContent = (Cell *)((Cell *)(v17))->GetNeighbourContent(v18); /*0x65da48*/
      v20 = (ObjectClass *)((Cell *)(NeighbourContent))->IsBridge(); /*0x65da4f*/
      v20 = v20; /*0x65da54*/
      if ( v20 && v20->health > 0 && ProcessDataCellClass(v20) ) /*0x65da63*/
        v16 = v20; /*0x65da6c*/
      ++v18; /*0x65da6e*/
    }
    while ( v18 < 8 ); /*0x65da72*/
    if ( v16 ) /*0x65da76*/
    {
      v22 = v46; /*0x65da80*/
      v47 = v45; /*0x65da84*/
      v23 = 0; /*0x65da88*/
      while ( 1 ) /*0x65da8a*/
      {
        v24 = v22 + 12; /*0x65da8a*/
        v22 = v22; /*0x65da8d*/
        v22 = (unsigned int *)v22[12]; /*0x65da91*/
        *v24 = 0; /*0x65da93*/
        v26 = (*((int (**)(ObjectClass *))v16->vtable1 + 11))(v16); /*0x65da9b*/
        if ( v26 <= 0 ) /*0x65daa0*/
          goto LABEL_39; /*0x65daa0*/
        if ( v26 <= 2 ) /*0x65daa5*/
        {
          ((CellClass *)((CellClass *)&v16[1].bombVisible))->AddObject(v22); /*0x65dadd*/
          (*(void (**)(unsigned int *))(*v22 + 284))(v22); /*0x65dae6*/
          (*((void (**)(ObjectClass *, int, unsigned int))v16->vtable1 + 122))(v16, 16, 0); /*0x65daf4*/
          ++v23; /*0x65dafa*/
          goto LABEL_41; /*0x65dafb*/
        }
        if ( v26 == 6 ) /*0x65daaa*/
        {
          if ( (*((int (**)(ObjectClass *, unsigned int *, ScriptActionQueue))v16->vtable1 + 64))( /*0x65dabf*/
                 v16,
                 v22,
                 v47) == 2 )
          {
            (*((void (**)(ObjectClass *, int))v16->vtable1 + 157))(v16, 3); /*0x65dacd*/
            ++v23; /*0x65dad3*/
          }
          else if ( v22 ) /*0x65dac3*/
          {
            goto LABEL_40; /*0x65dac3*/
          }
        }
        else
        {
  LABEL_39:
          if ( v22 ) /*0x65daff*/
  LABEL_40:
            (*(void (**)(unsigned int *, int))(*v22 + 32))(v22, 1); /*0x65db01*/
        }
  LABEL_41:
        if ( !v22 ) /*0x65db0c*/
          return v23 != 0; /*0x65db20*/
      }
    }
    v3 = (int)v47; /*0x65db21*/
    v10 = v46; /*0x65db25*/
    v12 = v12; /*0x65db29*/
  }
  LABEL_44:
  if ( !v12 /*0x65db49*/
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               (int16_t *)&v45,
                               1),
        IDA_LOBYTE(v46) = 1,
        !IsWithinUsableArea) )
  {
    IDA_LOBYTE(v46) = 0; /*0x65db4b*/
  }
  if ( !v43 ) /*0x65db56*/
  {
    if ( MoveScriptTypeClassToWaypoint(v3, v10, (int *)&v45, (int)v46) ) /*0x65db66*/
      goto LABEL_49; /*0x65db6d*/
    return 1; /*0x65dba5*/
  }
  *(ScriptActionQueue *)v48 = v45; /*0x65dbaf*/
  v30 = *((unsigned int *)dword_A8B21C + TypeClass::FindByName(&g_INI_Key_PDPLANE)); /*0x65dbc8*/
  ++dword_A8E7AC; /*0x65dbca*/
  v31 = (*(int (**)(int, unsigned int))(*(unsigned int *)v30 + 140))(v30, v10[135]); /*0x65dbd9*/
  v31 = v31; /*0x65dbe5*/
  --dword_A8E7AC; /*0x65dbea*/
  if ( !v31 ) /*0x65dbf0*/
    return 1; /*0x65dbf0*/
  *(unsigned char *)(v31 + 980) = 1; /*0x65dbf2*/
  if ( *(unsigned char *)(v3 + 177) ) /*0x65dbf9*/
  {
    TransportWaypoint = TeamTypeClass::GetTransportWaypoint((TeamTypeClass *)v3, &v46); /*0x65dc0a*/
  }
  else
  {
    v34 = v10[135]; /*0x65dc11*/
    TransitionCount = *(int **)(v34 + 480); /*0x65dc17*/
    if ( (unsigned int)TransitionCount >= 4 ) /*0x65dc1f*/
      TransitionCount = (int *)HouseClass::GetTransitionCount((HouseClass *)v34); /*0x65dc26*/
    TransportWaypoint = CellClass::FindOpenNeighbor( /*0x65dc46*/
                          (CellClass *)&v46,
                          a3,
                          TransitionCount,
                          (int)&dword_B04C38,
                          (int)&dword_B04C38,
                          4,
                          1,
                          0,
                          v42);
  }
  v36 = (unsigned int *)*TransportWaypoint; /*0x65dc4b*/
  v37 = *(unsigned int *)v31; /*0x65dc4d*/
  v46 = v36; /*0x65dc55*/
  (*(void (**)(int, int, unsigned int))(v37 + 488))(v31, 26, 0); /*0x65dc59*/
  (*(void (**)(int, unsigned int, int))(*(unsigned int *)v31 + 1152))(v31, 0, 1); /*0x65dc67*/
  v38 = *(unsigned int *)v31; /*0x65dc6d*/
  v39 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v48); /*0x65dc79*/
  (*(void (**)(int, void *))(v38 + 968))(v31, v39); /*0x65dc81*/
  ++dword_A8E7AC; /*0x65dc95*/
  ((Coord *)((Coord *)v49))->Subtract(((int16_t)v36 << 8) + 128, (IDA_SHIWORD(v46) << 8) + 128, 0); /*0x65dcb6*/
  v40 = (*(int (**)(int, unsigned int *, unsigned int))(*(unsigned int *)v31 + 216))(v31, v49, 0); /*0x65dcc6*/
  --dword_A8E7AC; /*0x65dcda*/
  if ( v40 ) /*0x65dce0*/
  {
    *(unsigned char *)(v31 + 1737) = 1; /*0x65dce9*/
    ((CellClass *)((CellClass *)(v31 + 276)))->AddObject(v10); /*0x65dcf0*/
    (*(void (**)(int))(*(unsigned int *)v31 + 492))(v31); /*0x65dcf9*/
    v3 = (int)v47; /*0x65dcff*/
  LABEL_49:
    if ( Techno::GetOwnerHouse(v3) ) /*0x65db71*/
    {
      v41 = (void *)dword_A83D4C; /*0x65db80*/
      OwnerHouse = (void *)Techno::GetOwnerHouse(v3); /*0x65db83*/
      if ( (uint8_t)HouseClass::IsAlliedWith(OwnerHouse, v41) ) /*0x65db8a*/
        ScriptActionQueue::PushNext(&v45); /*0x65db97*/
    }
    return 1; /*0x65db97*/
  }
  (*(void (**)(int, int))(*(unsigned int *)v31 + 32))(v31, 1); /*0x65dd0e*/
  return 1; /*0x65db14*/
}
}
// 0x65E010
namespace gamemd {
void MoveScriptTypeClassToWaypoint(ScriptTypeClass * aP0, ObjectClass * aP1, int * a2, int aP1_4)
{
  int v4; // esi
  unsigned int *v5; // ebp
  char v6; // al
  unsigned int *v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int *v13; // edi
  char v14; // bl
  int v16; // edx
  unsigned int v17; // esi
  int v18; // edx
  int v19; // esi
  void *v20; // eax
  int v21; // ecx
  unsigned int *v22; // eax
  int *Coords; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // esi
  void *v31; // eax
  char v32; // al
  int v33; // ebx
  unsigned int *v34; // eax
  int *v35; // eax
  int v36; // edx
  int v37; // esi
  int v38; // eax
  int16_t v39; // dx
  int v40; // esi
  int v41; // ecx
  int16_t v42; // ax
  int v43; // ebx
  void *v44; // eax
  unsigned int *v45; // eax
  unsigned int *v46; // esi
  int16_t v48; // [esp+2Ah] [ebp-6Ah]
  int v49; // [esp+2Ch] [ebp-68h] BYREF
  unsigned int *v50; // [esp+30h] [ebp-64h]
  int v51; // [esp+34h] [ebp-60h] BYREF
  int v52; // [esp+38h] [ebp-5Ch]
  int *v54; // [esp+40h] [ebp-54h]
  int *v55; // [esp+44h] [ebp-50h]
  unsigned int v56; // [esp+48h] [ebp-4Ch]
  unsigned int v57[3]; // [esp+4Ch] [ebp-48h] BYREF
  unsigned int v58[3]; // [esp+58h] [ebp-3Ch] BYREF
  unsigned int v59[3]; // [esp+64h] [ebp-30h] BYREF
  unsigned int v60[3]; // [esp+70h] [ebp-24h] BYREF
  int v61[3]; // [esp+7Ch] [ebp-18h] BYREF
  int v62[3]; // [esp+88h] [ebp-Ch] BYREF

  v4 = aP0; /*0x65e016*/
  v5 = aP1; /*0x65e019*/
  v6 = *(unsigned char *)(aP0 + 176); /*0x65e01b*/
  v50 = (unsigned int *)aP0; /*0x65e021*/
  IDA_LOBYTE(v48) = v6 != 0; /*0x65e02e*/
  v7 = aP1; /*0x65e035*/
  if ( aP1 ) /*0x65e037*/
  {
    while ( !memcmp((const void *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 844), &stru_7E9A50, 0x10u) ) /*0x65e057*/
    {
      v7 = (unsigned int *)v7[12]; /*0x65e059*/
      if ( !v7 ) /*0x65e05e*/
      {
        v4 = (int)v50; /*0x65e060*/
        goto LABEL_5; /*0x65e060*/
      }
    }
    v4 = (int)v50; /*0x65e0c3*/
    IDA_HIBYTE(v48) = 0; /*0x65e0c7*/
  }
  else
  {
  LABEL_5:
    IDA_HIBYTE(v48) = 1; /*0x65e064*/
  }
  v52 = 0; /*0x65e072*/
  v51 = *a2; /*0x65e07e*/
  if ( v48 || (unsigned char)aP1_4 ) /*0x65e095*/
  {
    v11 = *v5; /*0x65e0e5*/
    aP1_4 = 0; /*0x65e0ee*/
    v12 = v5->vt_slot_132(); /*0x65e0fe*/
    v10 = *LayerClass::Pathfinding_Find( /*0x65e122*/
             &dword_87F7E8,
             (int)&v51,
             &a2,
             (int16_t *)&v51,
             *(unsigned int *)(v12 + 1660),
             -1,
             0,
             0,
             1,
             1,
             0,
             0,
             0,
             1,
             (int16_t *)&aP1_4,
             0,
             0);
    v51 = v10; /*0x65e124*/
  }
  else
  {
    if ( !Techno::GetOwnerHouse(v4) || (v8 = *(unsigned int *)(Techno::GetOwnerHouse(v4) + 480), v8 == -1) ) /*0x65e0b2*/
      v8 = 0; /*0x65e0b4*/
    v9 = 2 * v8; /*0x65e0b6*/
    v10 = v51; /*0x65e0b9*/
    v52 = v9; /*0x65e0bd*/
  }
  v13 = (unsigned int *)v5[12]; /*0x65e128*/
  v5[12] = 0; /*0x65e12b*/
  v14 = 0; /*0x65e132*/
  v49 = v10; /*0x65e13b*/
  v50 = v13; /*0x65e13f*/
  IDA_LOBYTE(aP1_4) = 0; /*0x65e143*/
  if ( IDA___PAIR32__(IDA_HIWORD(v51), v10) != dword_B04C38 ) /*0x65e14a*/
  {
    while ( 1 ) /*0x65e1d5*/
    {
      while ( 1 ) /*0x65e15e*/
      {
        if ( v49 == dword_B04C38 || !v5 ) /*0x65e17f*/
        {
          v14 = aP1_4; /*0x65e611*/
          goto LABEL_53; /*0x65e611*/
        }
        v52 = v52; /*0x65e185*/
        v16 = *v5; /*0x65e189*/
        IDA_LOWORD(v56) = (unsigned short)v52 << 13; /*0x65e191*/
        if ( v5->vt_slot_44() == 2 ) /*0x65e19e*/
        {
          IDA_LOWORD(v56) = ((v52 << 13) - 24577) & 0xE000; /*0x65e1af*/
          v17 = v56; /*0x65e1b4*/
          v56 = v56; /*0x65e1b8*/
        }
        else
        {
          v17 = v56; /*0x65e1be*/
        }
        ++dword_A8E7AC; /*0x65e1cf*/
        if ( !(unsigned char)v48 ) /*0x65e1d5*/
          break; /*0x65e1d5*/
        v18 = *v5; /*0x65e1e5*/
        v57[2] = 0; /*0x65e1e8*/
        v57[0] = ((int16_t)v49 << 8) + 128; /*0x65e1fb*/
        v57[1] = (IDA_SHIWORD(v49) << 8) + 128; /*0x65e209*/
        v5->vt_slot_436(v57); /*0x65e210*/
        v19 = *v5; /*0x65e216*/
        v20 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v49); /*0x65e225*/
        v5->vt_slot_1152(v20, 1); /*0x65e22d*/
        if ( !v5[413] ) /*0x65e23d*/
          WinAPI::Wrapper(-2147467261); /*0x65e260*/
        (*(void (**)(unsigned int, int, int, unsigned int))(*(unsigned int *)v5[413] + 68))( /*0x65e27b*/
          v5[413],
          ((int16_t)v49 << 8) + 128,
          (IDA_SHIWORD(v49) << 8) + 128,
          0);
        (*(void (**)(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*v5 + 1160))(v5, 0, 0, 0, 0, 0); /*0x65e28d*/
        v58[0] = v5[39]; /*0x65e29d*/
        v21 = v5[152]; /*0x65e2a1*/
        v58[1] = v5[40]; /*0x65e2ad*/
        v58[2] = v5[41]; /*0x65e2c1*/
        MapClass::RevealArea2(v58, 0, v21 + 3, 0); /*0x65e2c5*/
        v13 = v50; /*0x65e2ca*/
  LABEL_31:
        v36 = *v5; /*0x65e442*/
        IDA_LOBYTE(aP1_4) = 1; /*0x65e447*/
        if ( v5->vt_slot_44() != 2 ) /*0x65e455*/
        {
          (*(void (**)(unsigned int *, int, unsigned int))(*v5 + 488))(v5, 5, 0); /*0x65e460*/
          (*(void (**)(unsigned int *))(*v5 + 492))(v5); /*0x65e46b*/
        }
        if ( (unsigned char)v48 ) /*0x65e477*/
        {
          v37 = 0; /*0x65e47d*/
          while ( 1 ) /*0x65e486*/
          {
            v38 = v37 & 7; /*0x65e486*/
            v39 = IDA_HIWORD(v49) + IDA_HIWORD(dword_89F688[v38]); /*0x65e499*/
            IDA_LOWORD(v54) = IDA_LOWORD(dword_89F688[v38]) + v49; /*0x65e4a5*/
            IDA_HIWORD(v54) = v39; /*0x65e4b1*/
            a2 = v54; /*0x65e4c0*/
            if ( ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&a2) ) /*0x65e4c7*/
              break; /*0x65e4c7*/
            if ( ++v37 >= 8 ) /*0x65e4d4*/
            {
              v49 = dword_B04C38; /*0x65e4db*/
              goto LABEL_46; /*0x65e4df*/
            }
          }
          v49 = (int)a2; /*0x65e4ee*/
        }
  LABEL_46:
        v5 = v13; /*0x65e5ae*/
        --dword_A8E7AC; /*0x65e5b9*/
        if ( v13 ) /*0x65e5bf*/
        {
          v45 = v13 + 12; /*0x65e5c8*/
          v50 = (unsigned int *)v13[12]; /*0x65e5cb*/
          v13 = v50; /*0x65e5cf*/
          *v45 = 0; /*0x65e5d1*/
        }
      }
      if ( IDA_HIBYTE(v48) ) /*0x65e2d9*/
      {
        v22 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v49); /*0x65e2ee*/
        Coords = CellClass::GetCoords(v22, v61); /*0x65e2f5*/
        v24 = *Coords; /*0x65e2fa*/
        v25 = Coords[1]; /*0x65e2fc*/
        v26 = Coords[2]; /*0x65e2ff*/
        v59[1] = v25; /*0x65e302*/
        v27 = *v5; /*0x65e306*/
        v59[2] = v26 - 400; /*0x65e312*/
        v59[0] = v24; /*0x65e322*/
        IDA_LOBYTE(a2) = (*(int (**)(unsigned int *, unsigned int *, unsigned int))(v27 + 216))( /*0x65e332*/
                       v5,
                       v59,
                       (uint8_t)(((v17 >> 7) + 1) >> 1));
        if ( !(unsigned char)a2 ) /*0x65e339*/
          goto LABEL_39; /*0x65e339*/
        v28 = (*(int (**)(unsigned int *))(*v5 + 464))(v5); /*0x65e344*/
        v60[0] = v5[39]; /*0x65e35b*/
        v60[1] = v5[40]; /*0x65e367*/
        v29 = *v5; /*0x65e36b*/
        v60[2] = v5[41] + -256 - v28; /*0x65e373*/
        v5->vt_slot_436(v60); /*0x65e379*/
        v30 = *v5; /*0x65e37f*/
        v31 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v49); /*0x65e38e*/
        v5->vt_slot_1152(v31, 1); /*0x65e396*/
        (*(void (**)(unsigned int *, unsigned int, int))(*v5 + 1348))(v5, 0, 1072693248); /*0x65e3a8*/
        if ( !v5[413] ) /*0x65e3b8*/
          WinAPI::Wrapper(-2147467261); /*0x65e3db*/
        (*(void (**)(unsigned int, int, int, unsigned int))(*(unsigned int *)v5[413] + 68))( /*0x65e3f6*/
          v5[413],
          ((int16_t)v49 << 8) + 128,
          (IDA_SHIWORD(v49) << 8) + 128,
          0);
        v32 = (char)a2; /*0x65e3f9*/
        v13 = v50; /*0x65e400*/
      }
      else
      {
        v33 = *v5; /*0x65e40a*/
        v34 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v49); /*0x65e425*/
        v35 = CellClass::GetCoords(v34, v62); /*0x65e42c*/
        v32 = (*(int (**)(unsigned int *, int *, unsigned int))(v33 + 216))( /*0x65e434*/
                v5,
                v35,
                (uint8_t)(((v17 >> 7) + 1) >> 1));
      }
      if ( v32 ) /*0x65e43c*/
        goto LABEL_31; /*0x65e43c*/
  LABEL_39:
      v40 = 0; /*0x65e506*/
      while ( 1 ) /*0x65e50f*/
      {
        v41 = v40 & 7; /*0x65e50f*/
        v42 = IDA_HIWORD(dword_89F688[v41]); /*0x65e521*/
        IDA_LOWORD(v55) = IDA_LOWORD(dword_89F688[v41]) + v49; /*0x65e529*/
        IDA_HIWORD(v55) = IDA_HIWORD(v49) + v42; /*0x65e53b*/
        a2 = v55; /*0x65e544*/
        if ( !((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&a2) ) /*0x65e550*/
        {
          v43 = *v5; /*0x65e559*/
          v44 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2); /*0x65e570*/
          if ( !v5->vt_slot_428(v44, v40, -1, 0, 1) ) /*0x65e578*/
            break; /*0x65e578*/
        }
        if ( ++v40 >= 8 ) /*0x65e586*/
        {
          v49 = dword_B04C38; /*0x65e5a0*/
  LABEL_45:
          (*(void (**)(unsigned int *, int))(*v5 + 32))(v5, 1); /*0x65e5a4*/
          goto LABEL_46; /*0x65e5ab*/
        }
      }
      v49 = (int)a2; /*0x65e594*/
      if ( a2 == (int *)dword_B04C38 ) /*0x65e5e3*/
        goto LABEL_45; /*0x65e5e3*/
      --dword_A8E7AC; /*0x65e5f6*/
    }
  }
  if ( v5 ) /*0x65e603*/
    (*(void (**)(unsigned int *, int))(*v5 + 32))(v5, 1); /*0x65e60c*/
  LABEL_53:
  if ( v13 ) /*0x65e61a*/
  {
    while ( 1 ) /*0x65e622*/
    {
      v46 = (unsigned int *)v13[12]; /*0x65e622*/
      v50 = v46; /*0x65e62a*/
      v13[12] = 0; /*0x65e630*/
      if ( v13 ) /*0x65e636*/
        (*(void (**)(unsigned int *, int))(*v13 + 32))(v13, 1); /*0x65e63c*/
      if ( !v46 ) /*0x65e641*/
        break; /*0x65e641*/
      v13 = v50; /*0x65e61e*/
    }
  }
  return v14; /*0x65e643*/
}
}
// 0x65E660
namespace gamemd {
void SpawnSuperWeaponUnits(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // esi
  int *TransitionCount; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // ebp
  int v19; // ebx
  int v20; // eax
  unsigned int *v21; // edi
  int v23; // [esp+14h] [ebp-30h]
  int v24; // [esp+24h] [ebp-20h]
  unsigned int *v25; // [esp+28h] [ebp-1Ch]
  int v26; // [esp+2Ch] [ebp-18h]
  int v27; // [esp+34h] [ebp-10h] BYREF
  unsigned int v28[3]; // [esp+38h] [ebp-Ch] BYREF

  v10 = *((unsigned int *)dword_A8B21C + a2); /*0x65e66c*/
  v11 = 0; /*0x65e673*/
  v25 = (unsigned int *)a1; /*0x65e679*/
  v26 = v10; /*0x65e67d*/
  v24 = 0; /*0x65e681*/
  if ( a4 > 0 ) /*0x65e685*/
  {
    while ( 1 ) /*0x65e699*/
    {
      ++dword_A8E7AC; /*0x65e699*/
      v12 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v10 + 140))(v10, a1); /*0x65e6a1*/
      v13 = v12; /*0x65e6ad*/
      --dword_A8E7AC; /*0x65e6b2*/
      if ( !v12 ) /*0x65e6b8*/
        break; /*0x65e6b8*/
      *(unsigned char *)(v12 + 980) = 1; /*0x65e6be*/
      TransitionCount = *(int **)&a1->__pad_13C[164]; /*0x65e6c5*/
      if ( (unsigned int)TransitionCount >= 4 ) /*0x65e6cd*/
        TransitionCount = (int *)HouseClass::GetTransitionCount(a1); /*0x65e6d6*/
      v15 = *CellClass::FindOpenNeighbor( /*0x65e6fb*/
               (CellClass *)&v27,
               a3,
               TransitionCount,
               (int)&dword_B04C38,
               (int)&dword_B04C38,
               4,
               1,
               0,
               v23);
      (*(void (**)(int, int, unsigned int))(*(unsigned int *)v13 + 488))(v13, a5, 0); /*0x65e70c*/
      if ( a7 ) /*0x65e718*/
        (*(void (**)(int, int, int))(*(unsigned int *)v13 + 1152))(v13, a7, 1); /*0x65e721*/
      if ( a6 ) /*0x65e72d*/
        (*(void (**)(int, int))(*(unsigned int *)v13 + 968))(v13, a6); /*0x65e734*/
      v28[0] = ((int16_t)v15 << 8) + 128; /*0x65e756*/
      ++dword_A8E7AC; /*0x65e760*/
      v16 = *(unsigned int *)v13; /*0x65e766*/
      v28[1] = (IDA_SHIWORD(v15) << 8) + 128; /*0x65e76c*/
      v28[2] = 0; /*0x65e773*/
      v17 = (*(int (**)(int, unsigned int *, unsigned int))(v16 + 216))(v13, v28, 0); /*0x65e77b*/
      --dword_A8E7AC; /*0x65e78f*/
      if ( !v17 ) /*0x65e795*/
      {
        if ( v13 ) /*0x65e82e*/
          (*(void (**)(int, int))(*(unsigned int *)v13 + 32))(v13, 1); /*0x65e836*/
        return v11 - 1; /*0x65e83a*/
      }
      if ( (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13) == 2 && a8 != -1 && a9 ) /*0x65e7b6*/
      {
        *(unsigned char *)(v13 + 1737) = 1; /*0x65e7b8*/
        v18 = *((unsigned int *)dword_A8E34C + a8); /*0x65e7c5*/
        if ( v18 ) /*0x65e7ca*/
        {
          v19 = a9; /*0x65e7cc*/
          do /*0x65e7fb*/
          {
            v20 = (*(int (**)(int, unsigned int *))(*(unsigned int *)v18 + 140))(v18, v25); /*0x65e7d8*/
            v21 = (unsigned int *)v20; /*0x65e7de*/
            if ( v20 ) /*0x65e7e2*/
            {
              (*(void (**)(int))(*(unsigned int *)v20 + 212))(v20); /*0x65e7e8*/
              ((CellClass *)((CellClass *)(v13 + 276)))->AddObject(v21); /*0x65e7f5*/
            }
            --v19; /*0x65e7fa*/
          }
          while ( v19 ); /*0x65e7fb*/
          a1 = (HouseClass *)v25; /*0x65e7fd*/
        }
        v11 = v24; /*0x65e801*/
      }
      (*(void (**)(int))(*(unsigned int *)v13 + 492))(v13); /*0x65e809*/
      v24 = ++v11; /*0x65e816*/
      if ( v11 >= a4 ) /*0x65e81a*/
        return v11; /*0x65e81a*/
      v10 = v26; /*0x65e68d*/
    }
  }
  return v11; /*0x65e820*/
}
}
// 0x65E850
namespace gamemd {
void PlaceAircraftOnMap(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // ebp
  HouseClass *v11; // esi
  int *TransitionCount; // eax
  int v13; // eax
  int v14; // esi
  char v15; // al
  int v16; // eax
  int v17; // edi
  int v18; // edx
  int v19; // edx
  char v20; // al
  int v21; // ebp
  int v22; // eax
  unsigned int *v23; // edi
  int v25; // [esp+14h] [ebp-38h]
  int v26; // [esp+24h] [ebp-28h]
  int v27; // [esp+28h] [ebp-24h] BYREF
  HouseClass *v28; // [esp+2Ch] [ebp-20h]
  int v29; // [esp+30h] [ebp-1Ch] BYREF
  int v30; // [esp+34h] [ebp-18h] BYREF
  int v31; // [esp+38h] [ebp-14h]
  int v32; // [esp+3Ch] [ebp-10h] BYREF
  unsigned int v33[3]; // [esp+40h] [ebp-Ch] BYREF

  v10 = *((unsigned int *)dword_A8B21C + a2); /*0x65e85b*/
  v11 = a1; /*0x65e85e*/
  TransitionCount = *(int **)&a1->__pad_13C[164]; /*0x65e863*/
  v28 = a1; /*0x65e869*/
  v31 = v10; /*0x65e86f*/
  if ( (unsigned int)TransitionCount >= 4 ) /*0x65e873*/
    TransitionCount = (int *)HouseClass::GetTransitionCount(a1); /*0x65e87c*/
  v30 = *CellClass::FindOpenNeighbor( /*0x65e8a6*/
           (CellClass *)&v29,
           a3,
           TransitionCount,
           (int)&dword_B04C38,
           (int)&dword_B04C38,
           4,
           1,
           0,
           v25);
  v26 = 0; /*0x65e8ac*/
  if ( a4 > 0 )
  {
    while ( 1 )
    {
      ++dword_A8E7AC; /*0x65e8c6*/
      v13 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v10 + 140))(v10, v11); /*0x65e8cf*/
      v14 = v13; /*0x65e8db*/
      --dword_A8E7AC; /*0x65e8e0*/
      if ( !v13 ) /*0x65e8e6*/
        break; /*0x65e8e6*/
      v15 = *(unsigned char *)(v13 + 20) & 4; /*0x65e8f3*/
      *(unsigned int *)(v14 + 660) = a10; /*0x65e8f5*/
      *(unsigned char *)(v14 + 980) = 1; /*0x65e8ff*/
      v16 = v15 != 0 ? v14 : 0;
      if ( a10 && v16 ) /*0x65e90e*/
      {
        *(unsigned int *)(v16 + 1496) = *(unsigned int *)(a10 + 92); /*0x65e913*/
        *(unsigned int *)(a10 + 92) = v16; /*0x65e919*/
      }
      v27 = 0; /*0x65e945*/
      v17 = *LayerClass::Pathfinding_Find( /*0x65e954*/
               (Type *)&stru_87F5F0.__pad_58[416],
               (int)&v27,
               &v32,
               (int16_t *)&v30,
               4,
               -1,
               0,
               0,
               1,
               1,
               0,
               0,
               0,
               1,
               (int16_t *)&v27,
               0,
               0);
      v18 = *(unsigned int *)v14; /*0x65e956*/
      v29 = v17; /*0x65e960*/
      (*(void (**)(int, int, unsigned int))(v18 + 488))(v14, a5, 0); /*0x65e964*/
      if ( a7 ) /*0x65e970*/
        (*(void (**)(int, int, int))(*(unsigned int *)v14 + 1152))(v14, a7, 1); /*0x65e979*/
      if ( a6 ) /*0x65e985*/
        (*(void (**)(int, int))(*(unsigned int *)v14 + 968))(v14, a6); /*0x65e98c*/
      v33[0] = ((int16_t)v17 << 8) + 128; /*0x65e9ad*/
      ++dword_A8E7AC; /*0x65e9b7*/
      v19 = *(unsigned int *)v14; /*0x65e9bd*/
      v33[1] = (IDA_SHIWORD(v29) << 8) + 128; /*0x65e9c3*/
      v33[2] = 0; /*0x65e9ca*/
      v20 = (*(int (**)(int, unsigned int *, unsigned int))(v19 + 216))(v14, v33, 0); /*0x65e9ce*/
      --dword_A8E7AC; /*0x65e9e2*/
      if ( !v20 ) /*0x65e9e8*/
      {
        if ( v14 ) /*0x65ea8d*/
          (*(void (**)(int, int))(*(unsigned int *)v14 + 32))(v14, 1); /*0x65ea95*/
        return v26 - 1; /*0x65ea9f*/
      }
      if ( (*(int (**)(int))(*(unsigned int *)v14 + 44))(v14) == 2 && a8 != -1 && a9 ) /*0x65ea09*/
      {
        *(unsigned char *)(v14 + 1737) = 1; /*0x65ea0b*/
        v21 = *((unsigned int *)dword_A8E34C + a8); /*0x65ea18*/
        if ( v21 ) /*0x65ea1d*/
        {
          v29 = a9; /*0x65ea1f*/
          do /*0x65ea58*/
          {
            v22 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v21 + 140))(v21, v28); /*0x65ea2d*/
            v23 = (unsigned int *)v22; /*0x65ea33*/
            if ( v22 ) /*0x65ea37*/
            {
              (*(void (**)(int))(*(unsigned int *)v22 + 212))(v22); /*0x65ea3d*/
              ((CellClass *)((CellClass *)(v14 + 276)))->AddObject(v23); /*0x65ea4a*/
            }
            --v29; /*0x65ea54*/
          }
          while ( v29 ); /*0x65ea58*/
        }
        v10 = v31; /*0x65ea5a*/
      }
      (*(void (**)(int))(*(unsigned int *)v14 + 492))(v14); /*0x65ea62*/
      if ( ++v26 >= a4 ) /*0x65ea77*/
        return v26; /*0x65ea77*/
      v11 = v28; /*0x65e8b8*/
    }
  }
  return v26; /*0x65ea81*/
}
}
// 0x65EC30
namespace gamemd {
void* ExecuteScriptTypeClassActions(unsigned int * ecx0, int a2)
{
  int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  int v7; // eax
  int v8; // ecx
  LPVOID *v9; // edi
  LPVOID *v10; // eax
  char v11; // bl
  void *v12; // eax
  int *v13; // eax
  int v14; // ebp
  int v15; // ebx
  unsigned int *v16; // esi
  int v17; // edx
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  int v20; // eax
  unsigned int *v21; // eax
  int *v22; // eax
  char v23; // al
  LPVOID *v24; // ebp
  int (__stdcall ***Checked)(unsigned int, void *, int *); // eax
  int v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int (__stdcall ***v30)(unsigned int, void *, int *); // eax
  int v31; // esi
  int v33; // ecx
  LPVOID v35; // esi
  int EMPulseWarhead; // eax
  LPVOID *v38; // esi
  bool v39; // zf
  unsigned int *v40; // edi
  void (**v41)(LPVOID *); // eax
  unsigned int *v42; // eax
  int v43; // esi
  void *OwnerHouse; // eax
  void *v46; // [esp+40h] [ebp-C0h]
  char v47; // [esp+56h] [ebp-AAh]
  bool v48; // [esp+57h] [ebp-A9h]
  int i; // [esp+58h] [ebp-A8h] BYREF
  int v50; // [esp+5Ch] [ebp-A4h] BYREF
  LPVOID ppv; // [esp+60h] [ebp-A0h] BYREF
  int v52; // [esp+64h] [ebp-9Ch] BYREF
  int v53; // [esp+68h] [ebp-98h]
  void *v54; // [esp+6Ch] [ebp-94h]
  LPVOID *v55; // [esp+70h] [ebp-90h]
  int v56; // [esp+74h] [ebp-8Ch] BYREF
  int v57; // [esp+78h] [ebp-88h] BYREF
  LPVOID *v58; // [esp+7Ch] [ebp-84h]
  int16_t v59[2]; // [esp+80h] [ebp-80h] BYREF
  int v60; // [esp+84h] [ebp-7Ch] BYREF
  int v61; // [esp+88h] [ebp-78h] BYREF
  int v62; // [esp+8Ch] [ebp-74h]
  int v63; // [esp+90h] [ebp-70h]
  int v67[3]; // [esp+A0h] [ebp-60h] BYREF
  int v68; // [esp+ACh] [ebp-54h]
  int v69; // [esp+B0h] [ebp-50h] BYREF
  int v70; // [esp+B4h] [ebp-4Ch] BYREF
  char v71[12]; // [esp+B8h] [ebp-48h] BYREF
  char v72[12]; // [esp+C4h] [ebp-3Ch] BYREF
  char v73[12]; // [esp+D0h] [ebp-30h] BYREF
  int v74[3]; // [esp+DCh] [ebp-24h] BYREF
  char v75[12]; // [esp+E8h] [ebp-18h] BYREF
  char v76[12]; // [esp+F4h] [ebp-Ch] BYREF

  ecx0 = ecx0; /*0x65ec40*/
  if ( !ecx0 || !*(unsigned int *)(ecx0[57] + 156) ) /*0x65ec50*/
    return 0; /*0x65ec50*/
  v4 = ecx0[56]; /*0x65ec5e*/
  if ( !v4 || !v4->q0A0 ) /*0x65ec68*/
  {
    if ( !v4 ) /*0x65ec7b*/
    {
      v5 = new ScriptTypeClass; /*0x65ec82*/
      if ( v5 ) /*0x65ec8c*/
        v6 = ((ScriptTypeClass *)(v5))->Constructor(0); /*0x65ec91*/
      else
        v6 = 0; /*0x65ec98*/
      ecx0[56] = v6; /*0x65ec9a*/
    }
    v7 = ecx0[56]; /*0x65eca0*/
    v8 = v7->q0A0; /*0x65eca6*/
    if ( v8 < 50 ) /*0x65ecaf*/
    {
      *(unsigned int *)(v7 + 8 * v8 + 164) = 5; /*0x65ecb1*/
      *(unsigned int *)(v7 + 8 * v8 + 168) = 0; /*0x65ecb8*/
      ++v7->q0A0; /*0x65ecbf*/
    }
  }
  v9 = (LPVOID *)ConstructTeamMembers(ecx0); /*0x65eccc*/
  *((unsigned char *)v9[373] + 116) = 0; /*0x65ecd8*/
  if ( !v9 ) /*0x65ecdc*/
    return 0; /*0x65f304*/
  v56 = *((TechnoClass *)(ecx0))->GetWaypointCoords(&v57); /*0x65ecf3*/
  if ( a2 != -1 ) /*0x65ecf7*/
    v56 = *(unsigned int *)ScenarioClass::Get_Waypoint_Location(&v57, a2); /*0x65ed0c*/
  v10 = (LPVOID *)v9[12]; /*0x65ed10*/
  v9[12] = 0; /*0x65ed13*/
  v55 = v10; /*0x65ed16*/
  v58 = 0; /*0x65ed1a*/
  do /*0x65f275*/
  {
    v11 = 0; /*0x65ed1e*/
    v47 = 0; /*0x65ed27*/
    v48 = (*((int (**)(LPVOID *))*v9 + 11))(v9) == 1; /*0x65ed39*/
    if ( (*((int (**)(LPVOID *))*v9 + 11))(v9) == 2 ) /*0x65ed47*/
    {
      v47 = 1; /*0x65ed49*/
      v11 = 1; /*0x65ed4e*/
    }
    v12 = ((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v56); /*0x65ed5c*/
    v13 = (int *)(*(int (**)(void *, char *))(*(unsigned int *)v12 + 72))(v12, v73); /*0x65ed6d*/
    v52 = *v13; /*0x65ed72*/
    v53 = v13[1]; /*0x65ed79*/
    v54 = (void *)v13[2]; /*0x65ed86*/
    if ( v48 ) /*0x65ed8a*/
    {
      if ( !v11 ) /*0x65edc6*/
        goto LABEL_22; /*0x65edc6*/
    }
    else if ( !v11 ) /*0x65ed8e*/
    {
      v52 += (((unsigned int)v9[191] & 3) - 2) << 8; /*0x65eda9*/
      v53 += (((unsigned int)v9[191] & 0xC) - 4) << 6; /*0x65edbe*/
  LABEL_22:
      v9[191] = (char *)v9[191] - 1; /*0x65edc8*/
    }
    v14 = dword_B04C58; /*0x65edce*/
    v15 = dword_B04C5C; /*0x65edda*/
    v68 = dword_B04C60; /*0x65edea*/
    v16 = ((Coord *)(&MapClass_Instance))->To_Cell(&v52); /*0x65edf3*/
    for ( i = 0; v14 == dword_B04C58 && v15 == dword_B04C5C && v68 == dword_B04C60 && i < 255; ++i ) /*0x65edf7*/
    {
      if ( v47 ) /*0x65ee39*/
      {
        v17 = *v16; /*0x65ee3f*/
        v61 = 0; /*0x65ee41*/
        v18 = (unsigned int *)v16->vt_slot_72(v71); /*0x65ee59*/
        IDA_LOWORD(v62) = *v18 / 256; /*0x65ee70*/
        IDA_HIWORD(v62) = v18[1] / 256; /*0x65ee91*/
        v62 = v62; /*0x65ee9f*/
        v60 = *LayerClass::Pathfinding_Find( /*0x65eec2*/
                 &MapClass_Instance,
                 (int)&v61,
                 &v69,
                 (int16_t *)&v62,
                 1,
                 -1,
                 0,
                 0,
                 1,
                 1,
                 0,
                 0,
                 0,
                 1,
                 (int16_t *)&v61,
                 0,
                 0);
      }
      else
      {
        v59[0] = 0; /*0x65eed2*/
        v59[1] = 0; /*0x65eed7*/
        v19 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*v16 + 72))(v16, v75); /*0x65eee8*/
        IDA_LOWORD(v63) = *v19 / 256; /*0x65eeff*/
        IDA_HIWORD(v63) = v19[1] / 256; /*0x65ef15*/
        v63 = v63; /*0x65ef22*/
        v20 = (*((int (**)(LPVOID *))*v9 + 33))(v9); /*0x65ef38*/
        v60 = *LayerClass::Pathfinding_Find( /*0x65ef61*/
                 &MapClass_Instance,
                 (int)&v70,
                 &v70,
                 (int16_t *)&v63,
                 *(unsigned int *)(v20 + 1660),
                 -1,
                 0,
                 0,
                 1,
                 1,
                 0,
                 0,
                 0,
                 1,
                 v59,
                 0,
                 0);
      }
      v16 = ((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v60); /*0x65ef74*/
      if ( v48 || v47 ) /*0x65ef84*/
      {
        v22 = (int *)(*(int (**)(unsigned int *, char *))(*v16 + 72))(v16, v76); /*0x65efb9*/
      }
      else
      {
        v21 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*v16 + 72))(v16, v72); /*0x65ef98*/
        v22 = ObjectPlacement::CalcPosition(v16, v74, v21, 0, 0, 0); /*0x65efa6*/
      }
      v14 = *v22; /*0x65efbc*/
      v15 = v22[1]; /*0x65efbe*/
      v68 = v22[2]; /*0x65efc9*/
    }
    v52 = v14; /*0x65efe0*/
    v53 = v15; /*0x65efe4*/
    ++g_IKnowWhatImDoing; /*0x65efe8*/
    v23 = (*((int (**)(LPVOID *, int *, unsigned int))*v9 + 54))(v9, &v52, 0); /*0x65eff7*/
    --g_IKnowWhatImDoing; /*0x65f00b*/
    if ( v23 ) /*0x65f011*/
    {
      v24 = v9 + 413; /*0x65f017*/
      v50 = 0; /*0x65f01d*/
      if ( v9[413] ) /*0x65f025*/
      {
        Checked = (int (***)(unsigned int, void *, int *))Stream::GetChecked(v9 + 413); /*0x65f02d*/
        v26 = (**Checked)(Checked, &unk_819088, v67); /*0x65f041*/
        if ( v26 >= 0 ) /*0x65f045*/
        {
          v27 = v67[0]; /*0x65f05a*/
          Release2COM(&v50); /*0x65f062*/
          v50 = v27; /*0x65f067*/
        }
        else
        {
          Release2COM(&v50); /*0x65f04b*/
          v50 = 0; /*0x65f050*/
        }
        if ( v26 < 0 && v26 != -2147467262 ) /*0x65f075*/
          WinAPI::Wrapper(v26); /*0x65f078*/
      }
      ppv = 0; /*0x65f08a*/
      v28 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x65f092*/
      if ( v28 < 0 && v28 != -2147467262 ) /*0x65f0a0*/
        WinAPI::Wrapper(v28); /*0x65f0a3*/
      if ( !ppv ) /*0x65f0ae*/
        WinAPI::Wrapper(-2147467261); /*0x65f0b5*/
      (*(void (**)(LPVOID, LPVOID *))(ppv->vtable4)(ppv, v9); /*0x65f0c2*/
      v29 = 0; /*0x65f0c5*/
      i = 0; /*0x65f0cb*/
      if ( ppv ) /*0x65f0d1*/
      {
        v30 = (int (***)(unsigned int, void *, int *))Stream::GetChecked(&ppv); /*0x65f0d7*/
        v31 = (**v30)(v30, &unk_819088, &v57); /*0x65f0eb*/
        if ( v31 >= 0 ) /*0x65f0ef*/
        {
          v57 = v57; /*0x65f0fe*/
          Release2COM(&i); /*0x65f106*/
          v29 = v57; /*0x65f10b*/
        }
        else
        {
          Release2COM(&i); /*0x65f0f5*/
          v29 = 0; /*0x65f0fa*/
        }
        i = v29; /*0x65f10f*/
        if ( v31 < 0 && v31 != -2147467262 ) /*0x65f11b*/
          WinAPI::Wrapper(v31); /*0x65f11e*/
      }
      v33 = v50; /*0x65f127*/
      if ( v50 != v29 ) /*0x65f12d*/
      {
        v50 = v50; /*0x65f12f*/
        v33 = v29; /*0x65f131*/
        v50 = v29; /*0x65f135*/
        if ( v29 ) /*0x65f139*/
        {
          (*(void (**)(int))(*(unsigned int *)v29 + 4))(v29); /*0x65f13e*/
          v33 = v50; /*0x65f141*/
          v29 = i; /*0x65f145*/
        }
        if ( v50 ) /*0x65f14b*/
        {
          (*(void (**)(int))(*(unsigned int *)v50 + 8))(v50); /*0x65f150*/
          v33 = v50; /*0x65f153*/
          v29 = i; /*0x65f157*/
        }
      }
      if ( v29 ) /*0x65f15d*/
      {
        (*(void (**)(int))(*(unsigned int *)v29 + 8))(v29); /*0x65f162*/
        v33 = v50; /*0x65f165*/
      }
      if ( v33 ) /*0x65f16b*/
      {
        (*(void (**)(int, LPVOID))(*(unsigned int *)v33 + 12))(v33, *v24); /*0x65f174*/
        v35 = *v24; /*0x65f177*/
        if ( *v24 != ppv ) /*0x65f180*/
        {
          *v24 = ppv; /*0x65f182*/
          if ( ppv ) /*0x65f18b*/
            (*(void (**)(LPVOID))(ppv->vtable2)(ppv); /*0x65f190*/
          if ( v35 ) /*0x65f195*/
            (*(void (**)(LPVOID))(*(unsigned int *)v35 + 8))(v35); /*0x65f19a*/
        }
      }
      v9[162] = (LPVOID)v52; /*0x65f1a7*/
      v9[163] = (LPVOID)v53; /*0x65f1b1*/
      v9[164] = v54; /*0x65f1b8*/
      if ( !v9[413] ) /*0x65f1bb*/
        WinAPI::Wrapper(-2147467261); /*0x65f1d6*/
      (*(void (**)(LPVOID, int, int, void *))(*(unsigned int *)v9[413] + 68))(v9[413], v52, v53, v54); /*0x65f1f1*/
      *((unsigned char *)v9 + 625) = 1; /*0x65f1f4*/
      v58 = v58; /*0x65f201*/
      v58 = v9; /*0x65f205*/
      EMPulseWarhead = g_RulesClass_Instance->EMPulseWarhead; /*0x65f209*/
      v9[12] = v58; /*0x65f20f*/
      v9[161] = (LPVOID)EMPulseWarhead; /*0x65f212*/
      v9 = v55; /*0x65f218*/
      if ( v55 ) /*0x65f21e*/
      {
        v55 = (LPVOID *)v55[12]; /*0x65f226*/
        v9[12] = 0; /*0x65f22a*/
      }
      if ( ppv ) /*0x65f236*/
        (*(void (**)(LPVOID))(ppv->vtable3)(ppv); /*0x65f23b*/
      if ( v50 ) /*0x65f244*/
        (*(void (**)(int))(*(unsigned int *)v50 + 8))(v50); /*0x65f249*/
    }
    else
    {
      (*((void (**)(LPVOID *, int))*v9 + 8))(v9, 1); /*0x65f258*/
      v9 = v55; /*0x65f25b*/
      if ( !v55 ) /*0x65f261*/
        break; /*0x65f261*/
      v55 = (LPVOID *)v55[12]; /*0x65f269*/
      v9[12] = 0; /*0x65f26d*/
    }
  }
  while ( v9 ); /*0x65f275*/
  v38 = v58; /*0x65f27b*/
  v39 = v58 == 0; /*0x65f27f*/
  v40 = v58[12]; /*0x65f281*/
  v58[12] = 0; /*0x65f287*/
  if ( !v39 ) /*0x65f28d*/
  {
    while ( 1 ) /*0x65f28f*/
    {
      (*((void (**)(LPVOID *, unsigned int))*v38 + 73))(v38, 0); /*0x65f295*/
      v41 = (void (**)(LPVOID *))*v38; /*0x65f29b*/
      v38[160] = (LPVOID)3; /*0x65f29f*/
      v41[123](v38); /*0x65f2a9*/
      v38 = (LPVOID *)v40; /*0x65f2b1*/
      if ( !v40 ) /*0x65f2b3*/
        break; /*0x65f2b3*/
      v42 = v40 + 12; /*0x65f2b5*/
      v40 = (unsigned int *)v40[12]; /*0x65f2b8*/
      *v42 = 0; /*0x65f2bb*/
    }
  }
  v43 = (int)ecx0; /*0x65f2c3*/
  if ( Techno::GetOwnerHouse((int)ecx0) ) /*0x65f2c9*/
  {
    v46 = HouseClass_Player; /*0x65f2d8*/
    OwnerHouse = (void *)Techno::GetOwnerHouse(v43); /*0x65f2db*/
    if ( (uint8_t)HouseClass::IsAlliedWith(OwnerHouse, v46) ) /*0x65f2e2*/
      ScriptActionQueue::PushNext(&v56); /*0x65f2ef*/
  }
  return 1; /*0x65f2f6*/
}
}
// 0x65FA70
namespace gamemd {
int CreateTriggerClassIfFarEnough(int aP0, int a2, int aP2)
{
  double v3; // st7
  int v4; // edi
  int v5; // esi
  int LoadGame_field_0x04; // ecx
  int v7; // edx
  int result; // eax
  double v9; // [esp+0h] [ebp-20h]
  int v11; // [esp+1Ch] [ebp-4h]
  int v12; // [esp+1Ch] [ebp-4h]

  v4 = aP0; /*0x65fa7c*/
  if ( byte_7F09A4[16 * aP0] && (v5 = 0, stru_B04DA8.LoadGame_field_0x10 > 0) ) /*0x65faa1*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65faab*/
    while ( 1 ) /*0x65fab1*/
    {
      v7 = *(unsigned int *)(LoadGame_field_0x04 + 4 * v5); /*0x65fab1*/
      if ( *(unsigned int *)v7 == aP0 ) /*0x65faba*/
      {
        v11 = (int16_t)(IDA_HIWORD(aP2) - *(unsigned short *)(v7 + 34)); /*0x65fad3*/
        __asm { fild [esp+20h+var_4] } /*0x65fad7*/
        v12 = (int16_t)(aP2 - *(unsigned short *)(v7 + 32)); /*0x65fadb*/
        __asm /*0x65fadf*/
        {
          fild [esp+20h+var_4]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+20h+var_20]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v9); /*0x65faf4*/
        IDA_LOWORD(result) = Math::RoundToInt(v3); /*0x65fafc*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65fb01*/
        result = (int16_t)result; /*0x65fb07*/
        if ( (int16_t)result < dword_7F0998[4 * **(unsigned int **)(stru_B04DA8.LoadGame_field_0x04 + 4 * v5)] ) /*0x65fb18*/
          break; /*0x65fb18*/
      }
      if ( ++v5 >= stru_B04DA8.LoadGame_field_0x10 ) /*0x65fb22*/
      {
        v4 = aP0; /*0x65fb24*/
        goto LABEL_8; /*0x65fb24*/
      }
    }
    IDA_LOBYTE(result) = 0; /*0x65fb4c*/
  }
  else
  {
  LABEL_8:
    result = RA2_OPNEW(0x40u); /*0x65fb28*/
    if ( result ) /*0x65fb34*/
      result = (int)Team_Load_65FB80((ObjectClass *)result, v4, aP2); /*0x65fb3a*/
    IDA_LOBYTE(result) = 1; /*0x65fb3f*/
  }
  return result; /*0x65fb41*/
}
}
// 0x652100
namespace gamemd {
void nullsub_217()
{
  ; /*0x652100*/
}
} // namespace gamemd

// 0x652660
namespace gamemd {
int sub_652660()
{
  dword_B048B0 = 0; /*0x652662*/
  dword_B048B4 = 0; /*0x652667*/
  dword_B048B8 = 0; /*0x65266c*/
  dword_B048BC = 0; /*0x652671*/
  return 0; /*0x652676*/
}
} // namespace gamemd

// 0x652680
namespace gamemd {
void sub_652680()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65268c*/
  dbl_B048D8 = Math::Sqrt(v0 + v0); /*0x65269e*/
}
} // namespace gamemd

// 0x6526B0
namespace gamemd {
void sub_6526B0()
{
  dbl_B049F8 = dbl_B048D8 / 60.0; /*0x6526bc*/
}
} // namespace gamemd

// 0x6526D0
namespace gamemd {
void sub_6526D0()
{
  dbl_B049E0 = 1.0 / dbl_B049F8; /*0x6526dc*/
}
} // namespace gamemd

// 0x6526F0
namespace gamemd {
void sub_6526F0()
{
  dbl_B049D8 = 0.0174532925199433 * 45.0; /*0x6526fc*/
}
} // namespace gamemd

// 0x652710
namespace gamemd {
void sub_652710()
{
  dbl_B048E8 = 0.0174532925199433 * 60.0; /*0x65271c*/
}
} // namespace gamemd

// 0x652730
namespace gamemd {
void sub_652730()
{
  dbl_B048A0 = 0.0174532925199433 * 90.0; /*0x65273c*/
}
} // namespace gamemd

// 0x652750
namespace gamemd {
long long sub_652750()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B048A0 - dbl_B048E8); /*0x652762*/
  result = Math::RoundToInt(v0 * dbl_B048D8 * 0.5); /*0x652776*/
  dword_B04A34 = result; /*0x65277b*/
  return result; /*0x652780*/
}
} // namespace gamemd

// 0x652790
namespace gamemd {
void sub_652790()
{
  dbl_B048F0 = Math::ArcTan((double)dword_B04A34 * 0.00390625); /*0x6527a7*/
}
} // namespace gamemd

// 0x6527C0
namespace gamemd {
void sub_6527C0()
{
  dbl_B04970 = Math::ArcTan((double)(2 * dword_B04A34) / dbl_B048D8); /*0x6527e2*/
}
} // namespace gamemd

// 0x6527F0
namespace gamemd {
long long sub_6527F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04A34) + 0.5); /*0x65280b*/
  dword_B049F4 = result; /*0x652810*/
  return result; /*0x652816*/
}
} // namespace gamemd

// 0x652820
namespace gamemd {
int sub_652820()
{
  dword_B048C0 = 0; /*0x652822*/
  return 0; /*0x65282e*/
}
} // namespace gamemd

// 0x652830
namespace gamemd {
int sub_652830()
{
  dword_B04900 = 0; /*0x652832*/
  dword_B04904 = 0; /*0x652837*/
  dword_B04908 = 0; /*0x65283c*/
  return 0; /*0x652841*/
}
} // namespace gamemd

// 0x652850
namespace gamemd {
int sub_652850()
{
  dword_B049F0 = 0; /*0x652855*/
  dword_B049E8 = 128; /*0x65285f*/
  dword_B049EC = 128; /*0x652864*/
  return 128; /*0x652869*/
}
} // namespace gamemd

// 0x652870
namespace gamemd {
int sub_652870()
{
  GadgetClass::Construct(stru_B04A10, 0, 0, 0, 0, 159, 1); /*0x652884*/
  stru_B04A10[0] = (int)&RadarClass_RTacticalClass_vftable; /*0x65288e*/
  return atexit(sub_6528A0); /*0x65289e*/
}
} // namespace gamemd

// 0x6528A0
namespace gamemd {
void sub_6528A0()
{
  if ( (byte_B048A8 & 1) == 0 ) /*0x6528aa*/
  {
    byte_B048A8 |= 1u; /*0x6528ae*/
    ((GadgetClass *)(stru_B04A10))->Dtor(); /*0x6528b9*/
  }
}
} // namespace gamemd

// 0x6528D0
namespace gamemd {
int sub_6528D0()
{
  ShapeButtonClass::Init(stru_B04978); /*0x6528d5*/
  return atexit(sub_6528F0); /*0x6528e5*/
}
} // namespace gamemd

// 0x6528F0
namespace gamemd {
void sub_6528F0()
{
  if ( (byte_B048A8 & 2) == 0 ) /*0x6528fa*/
  {
    byte_B048A8 |= 2u; /*0x6528fe*/
    ShapeButtonClass::Destructor((int)stru_B04978); /*0x652909*/
  }
}
} // namespace gamemd

// 0x652920
namespace gamemd {
int sub_652920()
{
  ShapeButtonClass::Init(stru_B04910); /*0x652925*/
  return atexit(sub_652940); /*0x652935*/
}
} // namespace gamemd

// 0x652940
namespace gamemd {
void sub_652940()
{
  if ( (byte_B048A8 & 4) == 0 ) /*0x65294a*/
  {
    byte_B048A8 |= 4u; /*0x65294e*/
    ShapeButtonClass::Destructor((int)stru_B04910); /*0x652959*/
  }
}
} // namespace gamemd

// 0x652CD0
namespace gamemd {
void E4Recv_652CD0::sub_652CD0()
{

  *((unsigned int *)this + 1323) = 4; /*0x652cd0*/
  *((unsigned int *)this + 1343) = 25; /*0x652cda*/

}
} // namespace gamemd

// 0x653750
namespace gamemd {
void nullsub_220(int a1, int a2)
{
  ; /*0x653750*/
}
} // namespace gamemd

// 0x658E80
namespace gamemd {
void sub_658E80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x658e8c*/
  dbl_B04A78 = Math::Sqrt(v0 + v0); /*0x658e9e*/
}
} // namespace gamemd

// 0x658EB0
namespace gamemd {
void sub_658EB0()
{
  dbl_B04AC8 = dbl_B04A78 / 60.0; /*0x658ebc*/
}
} // namespace gamemd

// 0x658ED0
namespace gamemd {
void sub_658ED0()
{
  dbl_B04AB0 = 1.0 / dbl_B04AC8; /*0x658edc*/
}
} // namespace gamemd

// 0x658EF0
namespace gamemd {
void sub_658EF0()
{
  dbl_B04AA8 = 0.0174532925199433 * 45.0; /*0x658efc*/
}
} // namespace gamemd

// 0x658F10
namespace gamemd {
void sub_658F10()
{
  dbl_B04A80 = 0.0174532925199433 * 60.0; /*0x658f1c*/
}
} // namespace gamemd

// 0x658F30
namespace gamemd {
void sub_658F30()
{
  dbl_B04A40 = 0.0174532925199433 * 90.0; /*0x658f3c*/
}
} // namespace gamemd

// 0x658F50
namespace gamemd {
long long sub_658F50()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04A40 - dbl_B04A80); /*0x658f62*/
  result = Math::RoundToInt(v0 * dbl_B04A78 * 0.5); /*0x658f76*/
  dword_B04AD0 = result; /*0x658f7b*/
  return result; /*0x658f80*/
}
} // namespace gamemd

// 0x658F90
namespace gamemd {
void sub_658F90()
{
  dbl_B04A88 = Math::ArcTan((double)dword_B04AD0 * 0.00390625); /*0x658fa7*/
}
} // namespace gamemd

// 0x658FC0
namespace gamemd {
void sub_658FC0()
{
  dbl_B04AA0 = Math::ArcTan((double)(2 * dword_B04AD0) / dbl_B04A78); /*0x658fe2*/
}
} // namespace gamemd

// 0x658FF0
namespace gamemd {
long long sub_658FF0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04AD0) + 0.5); /*0x65900b*/
  dword_B04AC4 = result; /*0x659010*/
  return result; /*0x659016*/
}
} // namespace gamemd

// 0x659020
namespace gamemd {
int sub_659020()
{
  word_B04A58 = 0; /*0x659022*/
  word_B04A5A = 0; /*0x659028*/
  return 0; /*0x65902e*/
}
} // namespace gamemd

// 0x659030
namespace gamemd {
int sub_659030()
{
  dword_B04A90 = 0; /*0x659032*/
  dword_B04A94 = 0; /*0x659037*/
  dword_B04A98 = 0; /*0x65903c*/
  return 0; /*0x659041*/
}
} // namespace gamemd

// 0x659050
namespace gamemd {
int sub_659050()
{
  dword_B04AC0 = 0; /*0x659055*/
  dword_B04AB8 = 128; /*0x65905f*/
  dword_B04ABC = 128; /*0x659064*/
  return 128; /*0x659069*/
}
} // namespace gamemd

// 0x659070
namespace gamemd {
int sub_659070()
{
  dword_B04A48 = 0; /*0x659072*/
  dword_B04A4C = 0; /*0x659077*/
  dword_B04A50 = 0; /*0x65907c*/
  dword_B04A54 = 0; /*0x659081*/
  return 0; /*0x659086*/
}
} // namespace gamemd

// 0x659090
namespace gamemd {
int sub_659090()
{
  dword_B04A64 = 0; /*0x659097*/
  dword_B04A68 = 0; /*0x65909c*/
  byte_B04A6C = 1; /*0x6590a1*/
  byte_B04A6D = 0; /*0x6590a8*/
  RadBeam_Array = (int)&DynamicVectorClass_RadBeam___vftable; /*0x6590ad*/
  dword_B04A74 = 10; /*0x6590b7*/
  dword_B04A70 = 0; /*0x6590c1*/
  return atexit(sub_6590D0); /*0x6590cc*/
}
} // namespace gamemd

// 0x6590D0
namespace gamemd {
void sub_6590D0()
{
  RadBeam_Array = (int)&VectorClass_RadBeam___vftable; /*0x6590d8*/
  if ( dword_B04A64 && byte_B04A6D ) /*0x6590ec*/
  {
    RA2_OPDEL(dword_B04A64); /*0x6590ef*/
    dword_B04A64 = 0; /*0x6590f7*/
  }
  byte_B04A6D = 0; /*0x6590fd*/
  dword_B04A68 = 0; /*0x659103*/
}
} // namespace gamemd

// 0x659560
namespace gamemd {
void E4Recv_659560::sub_659560()
{

  BYTE1(((unsigned int *)this)[0]) = 0; /*0x659560*/

}
} // namespace gamemd

// 0x659570
namespace gamemd {
char E4Recv_659570::sub_659570()
{

  return BYTE1(((unsigned int *)this)[0]); /*0x659573*/

}
} // namespace gamemd

// 0x6599C0
namespace gamemd {
void E4Recv_6599C0::sub_6599C0()
{

  char *v2; // eax
  char *v3; // edx
  char *v4; // ecx
  double v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+14h] [ebp-4h]

  v2 = (char *)this->nextObject - this->occupant; /*0x6599d8*/
  v3 = (char *)this->attachedBomb - this->fallRate; /*0x6599dd*/
  v4 = (char *)this->attachedTag - this->owningHouseIndex; /*0x6599e2*/
  this->customSound_controller[3] = (int)v2; /*0x6599e6*/
  this->customSound_controller[4] = (int)v4; /*0x6599e8*/
  this->customSound = (int)v3; /*0x6599eb*/
  v7 = this->customSound * this->customSound /*0x659a09*/
     + this->customSound_controller[4] * this->customSound_controller[4]
     + this->customSound_controller[3] * this->customSound_controller[3];
  __asm /*0x659a0d*/
  {
    fild [esp+18h+var_4]
    fstp [esp+18h+var_18]; double
  }
  Math::Sqrt(v6); /*0x659a14*/
  __asm { fstp qword ptr [esi+68h] } /*0x659a19*/
  *(double *)&this->bombVisible = _RT1; /*0x659a19*/

}
} // namespace gamemd

// 0x659A30
namespace gamemd {
short E4Recv_659A30::sub_659A30()
{

  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int customSound; // ebp
  double v6; // st7
  void **p_NeedsSaveOrLink; // edx
  double *v8; // esi
  int16_t result; // ax
  char v10; // cl

  LOWORD(v2) = Math::RoundToInt(*(double *)&this->bombVisible / *(double *)&((unsigned int *)this)[0]); /*0x659a3c*/
  v3 = this->customSound_controller[3]; /*0x659a41*/
  v4 = this->customSound_controller[4]; /*0x659a44*/
  customSound = this->customSound; /*0x659a47*/
  *(unsigned int *)&this->onBridge = v2; /*0x659a4e*/
  if ( v2 ) /*0x659a54*/
  {
    v3 /= v2; /*0x659a5b*/
    v4 /= v2; /*0x659a62*/
    customSound /= v2; /*0x659a69*/
  }
  v6 = (double)this->visibilityFlags / (double)this->ambientSoundController[0]; /*0x659a6e*/
  *(unsigned int *)&this->isAliveFlag = v3; /*0x659a80*/
  this->lastLayer = v4; /*0x659a83*/
  *(unsigned int *)&this->isInLogic = customSound; /*0x659a86*/
  this->location[0] = this->occupant; /*0x659a8b*/
  this->location[1] = this->owningHouseIndex; /*0x659a90*/
  this->location[2] = this->fallRate; /*0x659a96*/
  p_NeedsSaveOrLink = &((unsigned int *)this)[0]; /*0x659a99*/
  v8 = (double *)((char *)this + 192); /*0x659a9c*/
  result = *(unsigned short *)p_NeedsSaveOrLink; /*0x659aa2*/
  v10 = *((unsigned char *)p_NeedsSaveOrLink + 2); /*0x659aa5*/
  *(v8 - 8) = v6 * *(v8 - 16); /*0x659aab*/
  *(unsigned short *)v8 = result; /*0x659aae*/
  *((unsigned char *)v8 + 2) = v10; /*0x659ab1*/
  return result; /*0x659ab4*/

}
} // namespace gamemd

// 0x65A540
namespace gamemd {
void sub_65A540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65a54c*/
  dbl_B04AF8 = Math::Sqrt(v0 + v0); /*0x65a55e*/
}
} // namespace gamemd

// 0x65A570
namespace gamemd {
void sub_65A570()
{
  dbl_B04B48 = dbl_B04AF8 / 60.0; /*0x65a57c*/
}
} // namespace gamemd

// 0x65A590
namespace gamemd {
void sub_65A590()
{
  dbl_B04B30 = 1.0 / dbl_B04B48; /*0x65a59c*/
}
} // namespace gamemd

// 0x65A5B0
namespace gamemd {
void sub_65A5B0()
{
  dbl_B04B28 = 0.0174532925199433 * 45.0; /*0x65a5bc*/
}
} // namespace gamemd

// 0x65A5D0
namespace gamemd {
void sub_65A5D0()
{
  dbl_B04B00 = 0.0174532925199433 * 60.0; /*0x65a5dc*/
}
} // namespace gamemd

// 0x65A5F0
namespace gamemd {
void sub_65A5F0()
{
  dbl_B04AD8 = 0.0174532925199433 * 90.0; /*0x65a5fc*/
}
} // namespace gamemd

// 0x65A610
namespace gamemd {
long long sub_65A610()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04AD8 - dbl_B04B00); /*0x65a622*/
  result = Math::RoundToInt(v0 * dbl_B04AF8 * 0.5); /*0x65a636*/
  dword_B04B50 = result; /*0x65a63b*/
  return result; /*0x65a640*/
}
} // namespace gamemd

// 0x65A650
namespace gamemd {
void sub_65A650()
{
  dbl_B04B08 = Math::ArcTan((double)dword_B04B50 * 0.00390625); /*0x65a667*/
}
} // namespace gamemd

// 0x65A680
namespace gamemd {
void sub_65A680()
{
  dbl_B04B20 = Math::ArcTan((double)(2 * dword_B04B50) / dbl_B04AF8); /*0x65a6a2*/
}
} // namespace gamemd

// 0x65A6B0
namespace gamemd {
long long sub_65A6B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04B50) + 0.5); /*0x65a6cb*/
  dword_B04B44 = result; /*0x65a6d0*/
  return result; /*0x65a6d6*/
}
} // namespace gamemd

// 0x65A6E0
namespace gamemd {
int sub_65A6E0()
{
  word_B04AF0 = 0; /*0x65a6e2*/
  word_B04AF2 = 0; /*0x65a6e8*/
  return 0; /*0x65a6ee*/
}
} // namespace gamemd

// 0x65A6F0
namespace gamemd {
int sub_65A6F0()
{
  dword_B04B10 = 0; /*0x65a6f2*/
  dword_B04B14 = 0; /*0x65a6f7*/
  dword_B04B18 = 0; /*0x65a6fc*/
  return 0; /*0x65a701*/
}
} // namespace gamemd

// 0x65A710
namespace gamemd {
int sub_65A710()
{
  dword_B04B40 = 0; /*0x65a715*/
  dword_B04B38 = 128; /*0x65a71f*/
  dword_B04B3C = 128; /*0x65a724*/
  return 128; /*0x65a729*/
}
} // namespace gamemd

// 0x65A730
namespace gamemd {
int sub_65A730()
{
  dword_B04AE0 = 0; /*0x65a732*/
  dword_B04AE4 = 0; /*0x65a737*/
  dword_B04AE8 = 0; /*0x65a73c*/
  dword_B04AEC = 0; /*0x65a741*/
  return 0; /*0x65a746*/
}
} // namespace gamemd

// 0x65AF50
namespace gamemd {
void sub_65AF50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65af5c*/
  dbl_B04B78 = Math::Sqrt(v0 + v0); /*0x65af6e*/
}
} // namespace gamemd

// 0x65AF80
namespace gamemd {
void sub_65AF80()
{
  dbl_B04BC8 = dbl_B04B78 / 60.0; /*0x65af8c*/
}
} // namespace gamemd

// 0x65AFA0
namespace gamemd {
void sub_65AFA0()
{
  dbl_B04BB0 = 1.0 / dbl_B04BC8; /*0x65afac*/
}
} // namespace gamemd

// 0x65AFC0
namespace gamemd {
void sub_65AFC0()
{
  dbl_B04BA8 = 0.0174532925199433 * 45.0; /*0x65afcc*/
}
} // namespace gamemd

// 0x65AFE0
namespace gamemd {
void sub_65AFE0()
{
  dbl_B04B80 = 0.0174532925199433 * 60.0; /*0x65afec*/
}
} // namespace gamemd

// 0x65B000
namespace gamemd {
void sub_65B000()
{
  dbl_B04B58 = 0.0174532925199433 * 90.0; /*0x65b00c*/
}
} // namespace gamemd

// 0x65B020
namespace gamemd {
long long sub_65B020()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04B58 - dbl_B04B80); /*0x65b032*/
  result = Math::RoundToInt(v0 * dbl_B04B78 * 0.5); /*0x65b046*/
  dword_B04BE8 = result; /*0x65b04b*/
  return result; /*0x65b050*/
}
} // namespace gamemd

// 0x65B060
namespace gamemd {
void sub_65B060()
{
  dbl_B04B88 = Math::ArcTan((double)dword_B04BE8 * 0.00390625); /*0x65b077*/
}
} // namespace gamemd

// 0x65B090
namespace gamemd {
void sub_65B090()
{
  dbl_B04BA0 = Math::ArcTan((double)(2 * dword_B04BE8) / dbl_B04B78); /*0x65b0b2*/
}
} // namespace gamemd

// 0x65B0C0
namespace gamemd {
long long sub_65B0C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04BE8) + 0.5); /*0x65b0db*/
  dword_B04BC4 = result; /*0x65b0e0*/
  return result; /*0x65b0e6*/
}
} // namespace gamemd

// 0x65B0F0
namespace gamemd {
int sub_65B0F0()
{
  word_B04B70 = 0; /*0x65b0f2*/
  word_B04B72 = 0; /*0x65b0f8*/
  return 0; /*0x65b0fe*/
}
} // namespace gamemd

// 0x65B100
namespace gamemd {
int sub_65B100()
{
  dword_B04B90 = 0; /*0x65b102*/
  dword_B04B94 = 0; /*0x65b107*/
  dword_B04B98 = 0; /*0x65b10c*/
  return 0; /*0x65b111*/
}
} // namespace gamemd

// 0x65B120
namespace gamemd {
int sub_65B120()
{
  dword_B04BC0 = 0; /*0x65b125*/
  dword_B04BB8 = 128; /*0x65b12f*/
  dword_B04BBC = 128; /*0x65b134*/
  return 128; /*0x65b139*/
}
} // namespace gamemd

// 0x65B140
namespace gamemd {
int sub_65B140()
{
  dword_B04B60 = 0; /*0x65b142*/
  dword_B04B64 = 0; /*0x65b147*/
  dword_B04B68 = 0; /*0x65b14c*/
  dword_B04B6C = 0; /*0x65b151*/
  return 0; /*0x65b156*/
}
} // namespace gamemd

// 0x65C550
namespace gamemd {
char * RAMFileClass::nullsub_0_5()
{

  return aUnknown_1; /*0x65c555*/

}
} // namespace gamemd

// 0x65C570
namespace gamemd {
int nullsub_0_7()
{
  return 0; /*0x65c572*/
}
} // namespace gamemd

// 0x65C580
namespace gamemd {
char nullsub_0_8()
{
  return 1; /*0x65c582*/
}
} // namespace gamemd

// 0x65C590
namespace gamemd {
void nullsub_0_9()
{
  ; /*0x65c590*/
}
} // namespace gamemd

// 0x65C890
namespace gamemd {
unsigned int * E4Recv_65C890::sub_65C890(int a2, int a3)
{

  this->AbstractClass = (void *)a2; /*0x65c89a*/
  ((unsigned int *)this)[0] = (void *)a3; /*0x65c89c*/
  return this; /*0x65c89f*/

}
} // namespace gamemd

// 0x65D6C0
namespace gamemd {
void sub_65D6C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65d6cc*/
  dbl_B04C40 = Math::Sqrt(v0 + v0); /*0x65d6de*/
}
} // namespace gamemd

// 0x65D6F0
namespace gamemd {
void sub_65D6F0()
{
  dbl_B04C90 = dbl_B04C40 / 60.0; /*0x65d6fc*/
}
} // namespace gamemd

// 0x65D710
namespace gamemd {
void sub_65D710()
{
  dbl_B04C78 = 1.0 / dbl_B04C90; /*0x65d71c*/
}
} // namespace gamemd

// 0x65D730
namespace gamemd {
void sub_65D730()
{
  dbl_B04C70 = 0.0174532925199433 * 45.0; /*0x65d73c*/
}
} // namespace gamemd

// 0x65D750
namespace gamemd {
void sub_65D750()
{
  dbl_B04C48 = 0.0174532925199433 * 60.0; /*0x65d75c*/
}
} // namespace gamemd

// 0x65D770
namespace gamemd {
void sub_65D770()
{
  dbl_B04C20 = 0.0174532925199433 * 90.0; /*0x65d77c*/
}
} // namespace gamemd

// 0x65D790
namespace gamemd {
long long sub_65D790()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04C20 - dbl_B04C48); /*0x65d7a2*/
  result = Math::RoundToInt(v0 * dbl_B04C40 * 0.5); /*0x65d7b6*/
  dword_B04C98 = result; /*0x65d7bb*/
  return result; /*0x65d7c0*/
}
} // namespace gamemd

// 0x65D7D0
namespace gamemd {
void sub_65D7D0()
{
  dbl_B04C50 = Math::ArcTan((double)dword_B04C98 * 0.00390625); /*0x65d7e7*/
}
} // namespace gamemd

// 0x65D800
namespace gamemd {
void sub_65D800()
{
  dbl_B04C68 = Math::ArcTan((double)(2 * dword_B04C98) / dbl_B04C40); /*0x65d822*/
}
} // namespace gamemd

// 0x65D830
namespace gamemd {
long long sub_65D830()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04C98) + 0.5); /*0x65d84b*/
  dword_B04C8C = result; /*0x65d850*/
  return result; /*0x65d856*/
}
} // namespace gamemd

// 0x65D860
namespace gamemd {
int sub_65D860()
{
  dword_B04C38 = 0; /*0x65d862*/
  return 0; /*0x65d86e*/
}
} // namespace gamemd

// 0x65D870
namespace gamemd {
int sub_65D870()
{
  dword_B04C58 = 0; /*0x65d872*/
  dword_B04C5C = 0; /*0x65d877*/
  dword_B04C60 = 0; /*0x65d87c*/
  return 0; /*0x65d881*/
}
} // namespace gamemd

// 0x65D890
namespace gamemd {
int sub_65D890()
{
  dword_B04C88 = 0; /*0x65d895*/
  dword_B04C80 = 128; /*0x65d89f*/
  dword_B04C84 = 128; /*0x65d8a4*/
  return 128; /*0x65d8a9*/
}
} // namespace gamemd

// 0x65D8B0
namespace gamemd {
int sub_65D8B0()
{
  dword_B04C28 = 0; /*0x65d8b2*/
  dword_B04C2C = 0; /*0x65d8b7*/
  dword_B04C30 = 0; /*0x65d8bc*/
  dword_B04C34 = 0; /*0x65d8c1*/
  return 0; /*0x65d8c6*/
}
} // namespace gamemd

// 0x65D8D0
namespace gamemd {
char ReturnFalse3()
{
  return 0; /*0x65d8d2*/
}
} // namespace gamemd

// 0x65E650
namespace gamemd {
char sub_65E650(int a1, int a2, int a3)
{
  return 0; /*0x65e652*/
}
} // namespace gamemd

// 0x65EAB0
namespace gamemd {
int globalHelper_05EAB0(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6)
{
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int *TransitionCount; // eax
  int v12; // edi
  int v13; // edx
  char v14; // al
  int v16; // [esp+14h] [ebp-28h]
  int v17; // [esp+24h] [ebp-18h]
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v8 = *((unsigned int *)dword_A8B21C + a2); /*0x65eabc*/
  v18 = v8; /*0x65eac7*/
  v17 = 0; /*0x65eacb*/
  if ( a4 > 0 ) /*0x65ead3*/
  {
    while ( 1 ) /*0x65eaeb*/
    {
      ++dword_A8E7AC; /*0x65eaeb*/
      v9 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v8 + 140))(v8, a1); /*0x65eaf3*/
      v10 = v9; /*0x65eaff*/
      --dword_A8E7AC; /*0x65eb04*/
      if ( !v9 ) /*0x65eb0a*/
        break; /*0x65eb0a*/
      *(unsigned char *)(v9 + 980) = 1; /*0x65eb10*/
      TransitionCount = *(int **)&a1->__pad_13C[164]; /*0x65eb17*/
      if ( (unsigned int)TransitionCount >= 4 ) /*0x65eb1f*/
        TransitionCount = (int *)HouseClass::GetTransitionCount(a1); /*0x65eb28*/
      v12 = *CellClass::FindOpenNeighbor( /*0x65eb4d*/
               (CellClass *)&v19,
               a3,
               TransitionCount,
               (int)&dword_B04C38,
               (int)&dword_B04C38,
               4,
               1,
               0,
               v16);
      (*(void (**)(int, int, unsigned int))(*(unsigned int *)v10 + 488))(v10, a5, 0); /*0x65eb5e*/
      if ( a7 ) /*0x65eb66*/
        (*(void (**)(int, int, int))(*(unsigned int *)v10 + 1152))(v10, a7, 1); /*0x65eb6f*/
      if ( a6 ) /*0x65eb7b*/
        (*(void (**)(int, int))(*(unsigned int *)v10 + 968))(v10, a6); /*0x65eb82*/
      v20[0] = ((int16_t)v12 << 8) + 128; /*0x65eba4*/
      ++dword_A8E7AC; /*0x65ebae*/
      v13 = *(unsigned int *)v10; /*0x65ebb4*/
      v20[1] = (IDA_SHIWORD(v12) << 8) + 128; /*0x65ebba*/
      v20[2] = 0; /*0x65ebc1*/
      v14 = (*(int (**)(int, unsigned int *, unsigned int))(v13 + 216))(v10, v20, 0); /*0x65ebc9*/
      --dword_A8E7AC; /*0x65ebdd*/
      if ( !v14 ) /*0x65ebe3*/
      {
        if ( v10 ) /*0x65ec14*/
          (*(void (**)(int, int))(*(unsigned int *)v10 + 32))(v10, 1); /*0x65ec1c*/
        return v17 - 1; /*0x65ec26*/
      }
      (*(void (**)(int))(*(unsigned int *)v10 + 492))(v10); /*0x65ebe9*/
      if ( ++v17 >= a4 ) /*0x65ebfe*/
        return v17; /*0x65ebfe*/
      v8 = v18; /*0x65eadf*/
    }
  }
  return v17; /*0x65ec08*/
}
} // namespace gamemd

// 0x65F310
namespace gamemd {
int sub_65F310()
{
  dword_B04CB0 = 0; /*0x65f312*/
  dword_B04CB4 = 0; /*0x65f317*/
  dword_B04CB8 = 0; /*0x65f31c*/
  dword_B04CBC = 0; /*0x65f321*/
  return 0; /*0x65f326*/
}
} // namespace gamemd

// 0x65F330
namespace gamemd {
void sub_65F330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f33c*/
  dbl_B04CC8 = Math::Sqrt(v0 + v0); /*0x65f34e*/
}
} // namespace gamemd

// 0x65F360
namespace gamemd {
void sub_65F360()
{
  dbl_B04D18 = dbl_B04CC8 / 60.0; /*0x65f36c*/
}
} // namespace gamemd

// 0x65F380
namespace gamemd {
void sub_65F380()
{
  dbl_B04D00 = 1.0 / dbl_B04D18; /*0x65f38c*/
}
} // namespace gamemd

// 0x65F3A0
namespace gamemd {
void sub_65F3A0()
{
  dbl_B04CF8 = 0.0174532925199433 * 45.0; /*0x65f3ac*/
}
} // namespace gamemd

// 0x65F3C0
namespace gamemd {
void sub_65F3C0()
{
  dbl_B04CD0 = 0.0174532925199433 * 60.0; /*0x65f3cc*/
}
} // namespace gamemd

// 0x65F3E0
namespace gamemd {
void sub_65F3E0()
{
  dbl_B04CA8 = 0.0174532925199433 * 90.0; /*0x65f3ec*/
}
} // namespace gamemd

// 0x65F400
namespace gamemd {
long long sub_65F400()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04CA8 - dbl_B04CD0); /*0x65f412*/
  result = Math::RoundToInt(v0 * dbl_B04CC8 * 0.5); /*0x65f426*/
  dword_B04D20 = result; /*0x65f42b*/
  return result; /*0x65f430*/
}
} // namespace gamemd

// 0x65F440
namespace gamemd {
void sub_65F440()
{
  dbl_B04CD8 = Math::ArcTan((double)dword_B04D20 * 0.00390625); /*0x65f457*/
}
} // namespace gamemd

// 0x65F470
namespace gamemd {
void sub_65F470()
{
  dbl_B04CF0 = Math::ArcTan((double)(2 * dword_B04D20) / dbl_B04CC8); /*0x65f492*/
}
} // namespace gamemd

// 0x65F4A0
namespace gamemd {
long long sub_65F4A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04D20) + 0.5); /*0x65f4bb*/
  dword_B04D14 = result; /*0x65f4c0*/
  return result; /*0x65f4c6*/
}
} // namespace gamemd

// 0x65F4D0
namespace gamemd {
int sub_65F4D0()
{
  word_B04CC0 = 0; /*0x65f4d2*/
  word_B04CC2 = 0; /*0x65f4d8*/
  return 0; /*0x65f4de*/
}
} // namespace gamemd

// 0x65F4E0
namespace gamemd {
int sub_65F4E0()
{
  dword_B04CE0 = 0; /*0x65f4e2*/
  dword_B04CE4 = 0; /*0x65f4e7*/
  dword_B04CE8 = 0; /*0x65f4ec*/
  return 0; /*0x65f4f1*/
}
} // namespace gamemd

// 0x65F500
namespace gamemd {
int sub_65F500()
{
  dword_B04D10 = 0; /*0x65f505*/
  dword_B04D08 = 128; /*0x65f50f*/
  dword_B04D0C = 128; /*0x65f514*/
  return 128; /*0x65f519*/
}
} // namespace gamemd

// 0x65F710
namespace gamemd {
int sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x65f72a*/
  if ( !result ) /*0x65f731*/
  {
    if ( a2 == 273 ) /*0x65f739*/
    {
      if ( GetDlgCtrlID(hWnd) == 1059 && !IDA_HIWORD(a3) ) /*0x65f77b*/
        *(unsigned int *)GetWindowLongA(hDlg, 8) = 1059; /*0x65f789*/
    }
    else if ( a2 == 1175 ) /*0x65f741*/
    {
      DlgItem = GetDlgItem(hDlg, 1767); /*0x65f749*/
      SendMessageA(DlgItem, 0x4B2u, 0, dword_B04CA0); /*0x65f75e*/
      return 0; /*0x65f76a*/
    }
    return 0; /*0x65f78f*/
  }
  return result; /*0x65f764*/
}
} // namespace gamemd

// 0x65F7A0
namespace gamemd {
void sub_65F7A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f7ac*/
  dbl_B04D70 = Math::Sqrt(v0 + v0); /*0x65f7be*/
}
} // namespace gamemd

// 0x65F7D0
namespace gamemd {
void sub_65F7D0()
{
  dbl_B04DF0 = dbl_B04D70 / 60.0; /*0x65f7dc*/
}
} // namespace gamemd

// 0x65F7F0
namespace gamemd {
void sub_65F7F0()
{
  dbl_B04DD0 = 1.0 / dbl_B04DF0; /*0x65f7fc*/
}
} // namespace gamemd

// 0x65F810
namespace gamemd {
void sub_65F810()
{
  dbl_B04DC8 = 0.0174532925199433 * 45.0; /*0x65f81c*/
}
} // namespace gamemd

// 0x65F830
namespace gamemd {
void sub_65F830()
{
  dbl_B04D80 = 0.0174532925199433 * 60.0; /*0x65f83c*/
}
} // namespace gamemd

// 0x65F850
namespace gamemd {
void sub_65F850()
{
  dbl_B04D30 = 0.0174532925199433 * 90.0; /*0x65f85c*/
}
} // namespace gamemd

// 0x65F870
namespace gamemd {
long long sub_65F870()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04D30 - dbl_B04D80); /*0x65f882*/
  result = Math::RoundToInt(v0 * dbl_B04D70 * 0.5); /*0x65f896*/
  dword_B04DF8 = result; /*0x65f89b*/
  return result; /*0x65f8a0*/
}
} // namespace gamemd

// 0x65F8B0
namespace gamemd {
void sub_65F8B0()
{
  dbl_B04D90 = Math::ArcTan((double)dword_B04DF8 * 0.00390625); /*0x65f8c7*/
}
} // namespace gamemd

// 0x65F8E0
namespace gamemd {
void sub_65F8E0()
{
  dbl_B04DC0 = Math::ArcTan((double)(2 * dword_B04DF8) / dbl_B04D70); /*0x65f902*/
}
} // namespace gamemd

// 0x65F910
namespace gamemd {
long long sub_65F910()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04DF8) + 0.5); /*0x65f92b*/
  dword_B04DEC = result; /*0x65f930*/
  return result; /*0x65f936*/
}
} // namespace gamemd

// 0x65F940
namespace gamemd {
int sub_65F940()
{
  dword_B04D68 = 0; /*0x65f942*/
  return 0; /*0x65f94e*/
}
} // namespace gamemd

// 0x65F950
namespace gamemd {
int sub_65F950()
{
  dword_B04D98 = 0; /*0x65f952*/
  dword_B04D9C = 0; /*0x65f957*/
  dword_B04DA0 = 0; /*0x65f95c*/
  return 0; /*0x65f961*/
}
} // namespace gamemd

// 0x65F970
namespace gamemd {
int sub_65F970()
{
  dword_B04DE8 = 0; /*0x65f975*/
  dword_B04DE0 = 128; /*0x65f97f*/
  dword_B04DE4 = 128; /*0x65f984*/
  return 128; /*0x65f989*/
}
} // namespace gamemd

// 0x65F990
namespace gamemd {
int sub_65F990()
{
  dword_B04D38 = 0; /*0x65f992*/
  dword_B04D3C = 0; /*0x65f997*/
  dword_B04D40 = 0; /*0x65f99c*/
  dword_B04D44 = 0; /*0x65f9a1*/
  return 0; /*0x65f9a6*/
}
} // namespace gamemd

// 0x65F9B0
namespace gamemd {
int sub_65F9B0()
{
  dword_B04DAC = 0; /*0x65f9b7*/
  dword_B04DB0 = 0; /*0x65f9bc*/
  byte_B04DB4 = 1; /*0x65f9c1*/
  byte_B04DB5 = 0; /*0x65f9c8*/
  stru_B04DA8 = (int)&off_7F0AAC; /*0x65f9cd*/
  dword_B04DBC = 10; /*0x65f9d7*/
  dword_B04DB8 = 0; /*0x65f9e1*/
  return atexit(sub_65F9F0); /*0x65f9ec*/
}
} // namespace gamemd

// 0x65F9F0
namespace gamemd {
void sub_65F9F0()
{
  if ( (byte_B04D28 & 1) == 0 ) /*0x65f9fa*/
  {
    stru_B04DA8 = (int)&VectorClass_RadarEventClass___vftable; /*0x65f9fe*/
    byte_B04D28 |= 1u; /*0x65fa11*/
    if ( dword_B04DAC ) /*0x65fa17*/
    {
      if ( byte_B04DB5 ) /*0x65fa21*/
      {
        RA2_OPDEL(dword_B04DAC); /*0x65fa24*/
        dword_B04DAC = 0; /*0x65fa2c*/
      }
    }
    byte_B04DB5 = 0; /*0x65fa36*/
    dword_B04DB0 = 0; /*0x65fa3d*/
  }
}
} // namespace gamemd

// 0x65FA50
namespace gamemd {
int sub_65FA50()
{
  word_B04D78 = 0; /*0x65fa52*/
  word_B04D7A = 0; /*0x65fa58*/
  return 0; /*0x65fa5e*/
}
} // namespace gamemd

// 0x65FB60
namespace gamemd {
void E4Recv_65FB60::sub_65FB60()
{

  FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], this); /*0x65fb66*/

}
} // namespace gamemd

// 0x65FB70
namespace gamemd {
char sub_65FB70(int a1)
{
  return byte_7F09A4[16 * a1]; /*0x65fb79*/
}
} // namespace gamemd
