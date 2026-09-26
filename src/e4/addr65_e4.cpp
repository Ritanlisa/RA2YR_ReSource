// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
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

// 0x650A90
namespace gamemd {
int Trigger_AllocateLog(int a1)
{
  int result; // eax
  int i; // esi
  __int16 *v20; // ebp
  char *Name; // eax
  __int16 *v24; // edi
  __int16 *v31; // ebp
  __int16 *v35; // edi
  __int16 *v44; // ebp
  __int16 *v48; // edi
  __int16 *v58; // edi
  if ( byte_B04880 )
  {
  int v86; // [esp+34h] [ebp-4h]
  _DWORD v85[3]; // [esp+28h] [ebp-10h] BYREF
  int v84; // [esp+24h] [ebp-14h] BYREF
  bool v39; // cc
    int v3 = 828 * a1 + 11298400;
    _DWORD * v83 = (_DWORD *)v3;
    *(_DWORD *)v3 = *(_DWORD *)Networking_CurrentFrameCRC;
    DataGlobal_00AC6664[207 * a1] = Random::State((_DWORD *)g_ScenarioClass_Instance + 134);
    DataGlobal_00AC6664[207 * a1 + 1] = g_CurrentFrame;
    int v4 = 0;
    int v5 = 828 * a1 + 11298412;
    do
    {
      *(_DWORD *)(v5 + 56) = -1;
      if ( v4 < HouseClass_Count )
      {
        *(_BYTE *)v5 = 0;
        for ( i = 0; i < Game_PlayerCount; ++i )
        {
          int v7 = *(_DWORD *)(Game_PlayerInfoArray + 4 * i);
          if ( *(_DWORD *)(v7 + 111) == v4 )
          {
            char * v8 = ToWideStringChar((char *)v7);
            strncpy((char *)v5, v8, 0x14u);
          }
        }
        if ( !*(_BYTE *)v5
          && (!_strcmpi((const void *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36), g_INI_Key_Neutral)
           || !_strcmpi((const void *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36), g_INI_Key_Special)) )
        {
          strcpy((char *)v5, (const char *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36));
          v3 = (int)v83;
        }
        char v9 = *(_BYTE *)(*((_DWORD *)HouseClass_Array + v4) + 492);
        *(_BYTE *)(v5 + 52) = 0;
        *(_BYTE *)(v5 + 20) = v9;
        strncpy(
          (char *)(v5 + 21),
          *(const char **)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 90196)) + 772),
          0x1Fu);
        *(_DWORD *)(v5 + 56) = v4;
        *(_BYTE *)(v5 + 91) = 0;
        strncpy(
          (char *)(v5 + 60),
          (const char *)(*((_DWORD *)g_SuperWeaponTypeCount
                         + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 180))
                       + 36),
          0x1Fu);
      }
      ++v4;
      v5 += 92;
    }
    while ( v4 < 8 );
    int v10 = DataGlobal_87F788;
    int v11 = g_BuildingProductionState + g_AircraftClassCount + g_BuildingClass_Count + g_HouseClass_BuildState;
    unsigned int v12 =
    do
    {
      int v13 = *v12;
      v12 += 6;
      v10 += v13;
    }
    while ( (int)v12 < (int)&DataGlobal_8A03E8 );
    if ( !*(_DWORD *)(v3 + 820) )
      *(_DWORD *)(v3 + 820) = RA2_OPNEW(*(_DWORD *)(v3 + 824));
    int v14 = 40 * v10 + 104 * v11;
    if ( (unsigned int)(v14 + 1024) > *(_DWORD *)(v3 + 824) )
    {
      RA2_OPDEL(*(void **)(v3 + 820));
      *(_DWORD *)(v3 + 824) = (v14 + 0xFFFF) & 0xFFFF0000;
      Debug::Log();
      *(_DWORD *)(v3 + 820) = RA2_OPNEW(*(_DWORD *)(v3 + 824));
    }
    int v15 = *(_DWORD *)(v3 + 820);
    int v78 = 0;
    *(_DWORD *)(v3 + 768) = v15;
    for ( *(_DWORD *)(v3 + 752) = g_BuildingClass_Count; v78 < g_BuildingClass_Count; ++v78 )
    {
      int v16 = *((_DWORD *)g_InfantryClassLimit + v78);
      int v17 = *(_DWORD *)(v16 + 156);
      int v18 = *(_DWORD *)(v16 + 160);
      v86 = *(_DWORD *)(v16 + 164);
      *(_DWORD *)v15 = v17 / 10 + ((v18 / 10) << 16);
      *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v16 + 904), &v84) >> 7) + 1) >> 1;
      *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 388))(v16);
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v16 + 1728) + 3576);
      *(_BYTE *)(v15 + 103) = Math::RoundToInt(*(double *)(v16 + 1400) * 256.0);
      char v19 = *(_BYTE *)(*(_DWORD *)(v16 + 540) + 48);
      *(_BYTE *)(v15 + 31) = 0;
      *(_BYTE *)(v15 + 32) = v19;
      strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v16 + 1728) + 36), 0x17u);
      v20 = *(__int16 **)(v16 + 1444);
      int v21 = 0;
      if ( v20 )
      {
        if ( (v20[10] & 1) != 0 )
        {
          v21 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v20 + 64))(v20);
        }
        else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v20 + 44))(v20) == 11 )
        {
          v21 = v20[18] | (v20[19] << 16);
        }
        void * v22 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v20 + 44))(v20);
        Name = AbstractType::FindName(v22);
        *(_BYTE *)(v15 + 91) = 0;
        *(_DWORD *)(v15 + 64) = v21;
        strncpy((char *)(v15 + 68), Name, 0x17u);
      }
      else
      {
        *(_DWORD *)(v15 + 64) = 0;
        *(_BYTE *)(v15 + 68) = 0;
      }
      v24 = *(__int16 **)(v16 + 692);
      int v25 = 0;
      if ( v24 )
      {
        if ( (v24[10] & 1) != 0 )
        {
          v25 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v24 + 64))(v24);
        }
        else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v24 + 44))(v24) == 11 )
        {
          v25 = v24[18] | (v24[19] << 16);
        }
        void * v26 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v24 + 44))(v24);
        char * v27 = AbstractType::FindName(v26);
        *(_BYTE *)(v15 + 63) = 0;
        *(_DWORD *)(v15 + 36) = v25;
        strncpy((char *)(v15 + 40), v27, 0x17u);
      }
      else
      {
        *(_DWORD *)(v15 + 36) = 0;
        *(_BYTE *)(v15 + 40) = 0;
      }
      v15 += 104;
    }
    int v80 = 0;
    v83[189] = g_HouseClass_BuildState;
    if ( g_HouseClass_BuildState > 0 )
    {
      do
      {
        int v28 = *((_DWORD *)g_UnitClassPool + v80);
        int v29 = *(_DWORD *)(v28 + 156);
        int v30 = *(_DWORD *)(v28 + 160);
        v86 = *(_DWORD *)(v28 + 164);
        *(_DWORD *)v15 = v29 / 10 + ((v30 / 10) << 16);
        *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v28 + 904), &v84) >> 7) + 1) >> 1;
        *(_BYTE *)(v15 + 101) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v28 + 928), v85) >> 7) + 1) >> 1;
        *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 388))(v28);
        *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v28 + 1732) + 3576);
        *(_BYTE *)(v15 + 103) = Math::RoundToInt(*(double *)(v28 + 1400) * 256.0);
        *(_BYTE *)(v15 + 32) = *(_BYTE *)(*(_DWORD *)(v28 + 540) + 48);
        if ( !*(_DWORD *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(_WORD *)(v15 + 96) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v28 + 1652) + 188))(*(_DWORD *)(v28 + 1652));
        if ( !*(_DWORD *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(_WORD *)(v15 + 98) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v28 + 1652) + 192))(*(_DWORD *)(v28 + 1652));
        if ( !*(_DWORD *)(v28 + 1652) )
          WinAPI::Wrapper(-2147467261);
        *(_DWORD *)(v15 + 92) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v28 + 1652) + 196))(*(_DWORD *)(v28 + 1652));
        *(_BYTE *)(v15 + 31) = 0;
        strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v28 + 1732) + 36), 0x17u);
        v31 = *(__int16 **)(v28 + 1444);
        int v32 = 0;
        if ( v31 )
        {
          if ( (v31[10] & 1) != 0 )
          {
            v32 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v31 + 64))(v31);
          }
          else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v31 + 44))(v31) == 11 )
          {
            v32 = v31[18] | (v31[19] << 16);
          }
          void * v33 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v31 + 44))(v31);
          char * v34 = AbstractType::FindName(v33);
          *(_BYTE *)(v15 + 91) = 0;
          *(_DWORD *)(v15 + 64) = v32;
          strncpy((char *)(v15 + 68), v34, 0x17u);
        }
        else
        {
          *(_DWORD *)(v15 + 64) = 0;
          *(_BYTE *)(v15 + 68) = 0;
        }
        v35 = *(__int16 **)(v28 + 692);
        int v36 = 0;
        if ( v35 )
        {
          if ( (v35[10] & 1) != 0 )
          {
            v36 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v35 + 64))(v35);
          }
          else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v35 + 44))(v35) == 11 )
          {
            v36 = v35[18] | (v35[19] << 16);
          }
          void * v37 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v35 + 44))(v35);
          char * v38 = AbstractType::FindName(v37);
          *(_BYTE *)(v15 + 63) = 0;
          *(_DWORD *)(v15 + 36) = v36;
          strncpy((char *)(v15 + 40), v38, 0x17u);
        }
        else
        {
          *(_DWORD *)(v15 + 36) = 0;
          *(_BYTE *)(v15 + 40) = 0;
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
        int v40 = *((_DWORD *)DataGlobal_A8E394 + v81);
        int v41 = *(_DWORD *)(v40 + 156);
        int v42 = *(_DWORD *)(v40 + 160);
        v86 = *(_DWORD *)(v40 + 164);
        *(_DWORD *)v15 = v41 / 10 + ((v42 / 10) << 16);
        *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v40 + 904), v85) >> 7) + 1) >> 1;
        *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v40 + 388))(v40);
        *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v40 + 1732) + 3576);
        *(_BYTE *)(v15 + 103) = Math::RoundToInt(*(double *)(v40 + 1400) * 256.0);
        char v43 = *(_BYTE *)(*(_DWORD *)(v40 + 540) + 48);
        *(_BYTE *)(v15 + 31) = 0;
        *(_BYTE *)(v15 + 32) = v43;
        strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v40 + 1732) + 36), 0x17u);
        v44 = *(__int16 **)(v40 + 1444);
        int v45 = 0;
        if ( v44 )
        {
          if ( (v44[10] & 1) != 0 )
          {
            v45 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v44 + 64))(v44);
          }
          else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v44 + 44))(v44) == 11 )
          {
            v45 = v44[18] | (v44[19] << 16);
          }
          void * v46 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v44 + 44))(v44);
          char * v47 = AbstractType::FindName(v46);
          *(_BYTE *)(v15 + 91) = 0;
          *(_DWORD *)(v15 + 64) = v45;
          strncpy((char *)(v15 + 68), v47, 0x17u);
        }
        else
        {
          *(_DWORD *)(v15 + 64) = 0;
          *(_BYTE *)(v15 + 68) = 0;
        }
        v48 = *(__int16 **)(v40 + 692);
        int v49 = 0;
        if ( v48 )
        {
          if ( (v48[10] & 1) != 0 )
          {
            v49 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v48 + 64))(v48);
          }
          else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v48 + 44))(v48) == 11 )
          {
            v49 = v48[18] | (v48[19] << 16);
          }
          void * v50 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v48 + 44))(v48);
          char * v51 = AbstractType::FindName(v50);
          *(_BYTE *)(v15 + 63) = 0;
          *(_DWORD *)(v15 + 36) = v49;
          strncpy((char *)(v15 + 40), v51, 0x17u);
        }
        else
        {
          *(_DWORD *)(v15 + 36) = 0;
          *(_BYTE *)(v15 + 40) = 0;
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
      int v53 = *((_DWORD *)g_BuildingClass_InstanceCount + v52);
      int v54 = *(_DWORD *)(v53 + 156);
      int v55 = *(_DWORD *)(v53 + 160);
      v86 = *(_DWORD *)(v53 + 164);
      *(_DWORD *)v15 = v54 / 10 + ((v55 / 10) << 16);
      *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v53 + 904), v85) >> 7) + 1) >> 1;
      *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 388))(v53);
      int v56 = 0;
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v53 + 1312) + 3576);
      char v57 = *(_BYTE *)(*(_DWORD *)(v53 + 540) + 48);
      *(_DWORD *)(v15 + 64) = 0;
      *(_BYTE *)(v15 + 32) = v57;
      *(_BYTE *)(v15 + 68) = 0;
      *(_BYTE *)(v15 + 31) = 0;
      strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v53 + 1312) + 36), 0x17u);
      v58 = *(__int16 **)(v53 + 692);
      if ( v58 )
      {
        if ( (v58[10] & 1) != 0 )
        {
          v56 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v58 + 64))(v58);
        }
        else if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v58 + 44))(v58) == 11 )
        {
          v56 = v58[18] | (v58[19] << 16);
        }
        void * v59 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v58 + 44))(v58);
        char * v60 = AbstractType::FindName(v59);
        *(_BYTE *)(v15 + 63) = 0;
        *(_DWORD *)(v15 + 36) = v56;
        strncpy((char *)(v15 + 40), v60, 0x17u);
      }
      else
      {
        *(_DWORD *)(v15 + 36) = 0;
        *(_BYTE *)(v15 + 40) = 0;
      }
      v15 += 104;
      ++v52;
    }
    unsigned int v61 =
    v83[187] = v78;
    _DWORD * v62 = v83 + 193;
    _DWORD * v82 = v83 + 193;
    do
    {
      v62[5] = v15;
      int v63 = 0;
      int v79 = 0;
      if ( *v61 > 0 )
      {
        do
        {
          _DWORD * v64 = *(_DWORD **)(*(v61 - 3) + 4 * v63);
          if ( (*(int (__thiscall **)(_DWORD *))(*v64 + 44))(v64) != 4
            || (*(int (__stdcall **)(_DWORD *))(v64[1] + 16))(v64 + 1) != -2 )
          {
            int v65 = v64[39];
            int v66 = v64[40];
            v86 = v64[41];
            v84 = (v66 / 10) << 16;
            *(_DWORD *)v15 = v65 / 2 + v84;
            *(_WORD *)(v15 + 36) = (*(int (__thiscall **)(_DWORD *))(*v64 + 44))(v64);
            if ( (*(int (__thiscall **)(_DWORD *))(*v64 + 44))(v64) == 43
              || (*(int (__thiscall **)(_DWORD *))(*v64 + 44))(v64) == 19 )
            {
              *(_DWORD *)(v15 + 4) = -1;
              *(_BYTE *)(v15 + 8) = 0;
            }
            else
            {
              int v67 = (*(int (__thiscall **)(_DWORD *))(*v64 + 136))(v64);
              *(_DWORD *)(v15 + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v67 + 64))(v67);
              *(_BYTE *)(v15 + 31) = 0;
              int v68 = (*(int (__thiscall **)(_DWORD *))(*v64 + 136))(v64);
              strncpy((char *)(v15 + 8), (const char *)(v68 + 36), 0x17u);
            }
            int v69 = (*(int (__thiscall **)(_DWORD *))(*v64 + 60))(v64);
            if ( v69 )
              *(_BYTE *)(v15 + 32) = *(_BYTE *)(v69 + 48);
            else
              *(_BYTE *)(v15 + 32) = -1;
            v15 += 40;
            ++v79;
          }
          ++v63;
        }
        while ( v63 < *v61 );
        v62 = v82;
      }
      v61 += 6;
      *v62++ = v79;
      v82 = v62;
    }
    while ( (int)v61 < (int)&DataGlobal_8A03E8 );
    int v70 = 0;
    int v71 = 0;
    v83[204] = v15;
    for ( result = DataGlobal_87F788; v71 < DataGlobal_87F788; ++v71 )
    {
      _DWORD * v72 = (_DWORD *)*((_DWORD *)DataGlobal_87F77C + v71);
      if ( (*(int (__thiscall **)(_DWORD *))(*v72 + 44))(v72) != 4
        || (*(int (__stdcall **)(_DWORD *))(v72[1] + 16))(v72 + 1) != -2 )
      {
        int v73 = v72[39];
        int v74 = v72[40];
        v86 = v72[41];
        v84 = (v74 / 10) << 16;
        *(_DWORD *)v15 = v73 / 2 + v84;
        *(_WORD *)(v15 + 36) = (*(int (__thiscall **)(_DWORD *))(*v72 + 44))(v72);
        if ( (*(int (__thiscall **)(_DWORD *))(*v72 + 44))(v72) == 43
          || (*(int (__thiscall **)(_DWORD *))(*v72 + 44))(v72) == 19 )
        {
          *(_DWORD *)(v15 + 4) = -1;
          *(_BYTE *)(v15 + 8) = 0;
        }
        else
        {
          int v75 = (*(int (__thiscall **)(_DWORD *))(*v72 + 136))(v72);
          *(_DWORD *)(v15 + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 64))(v75);
          *(_BYTE *)(v15 + 31) = 0;
          int v76 = (*(int (__thiscall **)(_DWORD *))(*v72 + 136))(v72);
          strncpy((char *)(v15 + 8), (const char *)(v76 + 36), 0x17u);
        }
        int v77 = (*(int (__thiscall **)(_DWORD *))(*v72 + 60))(v72);
        if ( v77 )
          *(_BYTE *)(v15 + 32) = *(_BYTE *)(v77 + 48);
        else
          *(_BYTE *)(v15 + 32) = -1;
        v15 += 40;
        ++v70;
      }
      result = DataGlobal_87F788;
    }
    v83[203] = v70;
  }
  else
  {
    result = Random::State((_DWORD *)g_ScenarioClass_Instance + 134);
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
void RenderScoreboardSidebar()
{
  int v2; // eax
  int v4; // esi
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  wchar_t *String; // eax
  int v9; // eax
  int v10; // ecx
  wchar_t *v11; // eax
  int v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // ebp
  _DWORD *v20; // eax
  const wchar_t *v21; // ecx
  _DWORD *v22; // eax
  int v23; // edx
  _DWORD *v24; // eax
  int v26; // [esp+0h] [ebp-C8h]
  int v27; // [esp+0h] [ebp-C8h]
  int v28; // [esp+0h] [ebp-C8h]
  _DWORD *v29; // [esp+4h] [ebp-C4h]
  _DWORD *v30; // [esp+4h] [ebp-C4h]
  int v31; // [esp+4h] [ebp-C4h]
  int v32; // [esp+8h] [ebp-C0h]
  int v33; // [esp+8h] [ebp-C0h]
  int v34; // [esp+Ch] [ebp-BCh]
  int v35; // [esp+Ch] [ebp-BCh]
  int v36; // [esp+Ch] [ebp-BCh]
  int v37; // [esp+10h] [ebp-B8h]
  int v39; // [esp+14h] [ebp-B4h]
  int v40; // [esp+18h] [ebp-B0h]
  int i; // [esp+20h] [ebp-A8h] BYREF
  int v42; // [esp+24h] [ebp-A4h] BYREF
  int v43; // [esp+28h] [ebp-A0h] BYREF
  int v44; // [esp+2Ch] [ebp-9Ch]
  int v45; // [esp+30h] [ebp-98h] BYREF
  int v46; // [esp+34h] [ebp-94h] BYREF
  _DWORD v47[2]; // [esp+38h] [ebp-90h] BYREF
  int v48; // [esp+40h] [ebp-88h] BYREF
  char v49[16]; // [esp+44h] [ebp-84h] BYREF
  int v50; // [esp+54h] [ebp-74h] BYREF
  wchar_t Buffer[18]; // [esp+58h] [ebp-70h] BYREF
  wchar_t v52[24]; // [esp+7Ch] [ebp-4Ch] BYREF
  char v53[12]; // [esp+ACh] [ebp-1Ch] BYREF
  char v54[16]; // [esp+B8h] [ebp-10h] BYREF

  IDA_LOBYTE(v2) = byte_884B8D; /*0x653fa0*/
  if ( byte_884B8D )
  {
    v4 = VtableStub::72F510(); /*0x653fbc*/
    i = a1[1145]; /*0x653fd4*/
    v42 = a1[1147]; /*0x653fe6*/
    v5 = (int *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)DSurface_Sidebar + 120))( /*0x653ff1*/
                  DSurface_Sidebar,
                  &v48,
                  0);
    DrawToSurfaceSHP(DSurface_Sidebar, v4, dword_B04A38, 0x20u, &v42, v5, 0, 0, 0, 1000, 0, 0, 0, 0, 0, v40); /*0x65400b*/
    v6 = a1[1149] + 2; /*0x65401c*/
    v42 = a1[1148]; /*0x65401f*/
    v43 = v6; /*0x654031*/
    v7 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x654035*/
    v29 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD, int))(*(_DWORD *)DSurface_Sidebar + 120))( /*0x654056*/
                      DSurface_Sidebar,
                      v49,
                      &v42,
                      v7,
                      0,
                      25);
    v26 = DSurface_Sidebar; /*0x654057*/
    String = GetStringCSF(aTxtNameColon, 0, aDRa2mdpostRada, 1268); /*0x654069*/
    TextRenderer::DrawText(&v45, (size_t)String, v26, v29, v32, v34, v37, v39); /*0x654074*/
    v9 = a1[1150]; /*0x654079*/
    v10 = a1[1148]; /*0x65407f*/
    v42 = v6; /*0x654088*/
    i = v9 + v10 - 2; /*0x654095*/
    v35 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x6540b0*/
    v30 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v48); /*0x6540c6*/
    v27 = DSurface_Sidebar; /*0x6540c7*/
    v11 = GetStringCSF(aTxtKillsColon, 0, aDRa2mdpostRada, 1270); /*0x6540d9*/
    TextRenderer::DrawText(&v45, (size_t)v11, v27, v30, (int)&i, v35, 0, 537); /*0x6540e4*/
    v12 = v6 + 7; /*0x6540f1*/
    v13 = *(_DWORD *)(g_SidebarConfig + 4) == 1
        ? *(unsigned __int8 *)(*(_DWORD *)(g_SidebarConfig + 372) + 14)
        : *(unsigned __int16 *)(*(_DWORD *)(g_SidebarConfig + 372) + 28);
    v14 = a1[1148]; /*0x654113*/
    i = v14 + a1[1150] - 1; /*0x654129*/
    v42 = v12; /*0x654133*/
    v43 = v14; /*0x654137*/
    v44 = v12; /*0x65413b*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Sidebar + 48))(DSurface_Sidebar, &v43, &i, v13); /*0x654146*/
    v15 = v12 + 4; /*0x65414f*/
    v2 = 0; /*0x654152*/
    for ( i = 0; v2 < HouseClass_Count; i = v2 ) /*0x65415a*/
    {
      v43 = *(_DWORD *)&HouseClass_Array->gap0[4 * v2]; /*0x65416d*/
      v16 = v43; /*0x654168*/
      if ( v43 && *(_BYTE *)(v43->MovementZones + 421) ) /*0x65417a*/
      {
        if ( v43->u8_1F5 ) /*0x654188*/
        {
          v17 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x6541a2*/
          v16 = v43; /*0x6541a7*/
          v18 = v17; /*0x6541ab*/
          v19 = 25; /*0x6541ad*/
        }
        else
        {
          v19 = 16409; /*0x6541ba*/
          v18 = *((_DWORD *, unsigned int a1, unsigned int a2)BuildingTypeClass_AnimTable + v43->u32_16054); /*0x6541bf*/
        }
        Buffer[0] = 0; /*0x6541d3*/
        swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)(v16 + 90154)); /*0x6541da*/
        if ( !wcslen(Buffer) ) /*0x6541e4*/
          wcscpy(Buffer, L"________"); /*0x6541fa*/
        if ( wcslen(Buffer) > 0x12 ) /*0x654212*/
          wcscpy(v52, L"."); /*0x654214*/
        v47[0] = a1[1148]; /*0x654229*/
        v47[1] = v15; /*0x65423b*/
        v20 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *))(*(_DWORD *)DSurface_Sidebar + 120))( /*0x654249*/
                          DSurface_Sidebar,
                          v54,
                          v47);
        TextRenderer::DrawText(&v50, (size_t)&Buffer[2], DSurface_Sidebar, v20, v18, 0, v19, a2); /*0x65425d*/
        v21 = 0; /*0x654269*/
        v22 = (_DWORD *)(v44 + 21476); /*0x65426b*/
        v44 = 20; /*0x654270*/
        do /*0x65428b*/
        {
          v23 = *v22 + v22[21]; /*0x65427b*/
          ++v22; /*0x65427d*/
          v21 = (const wchar_t *, unsigned int a2, unsigned int a1)((char *)v21 + v23); /*0x654280*/
          --v44; /*0x654287*/
        }
        while ( v44 ); /*0x65428b*/
        swprintf(&Buffer[2], (const size_t)a2d, v21); /*0x654298*/
        a2 = v19 | 0x200; /*0x6542ba*/
        v46 = a1[1150] + a1[1148] - 2; /*0x6542c5*/
        v47[0] = v15; /*0x6542c9*/
        v24 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD))(*(_DWORD *)DSurface_Sidebar + 120))( /*0x6542d7*/
                          DSurface_Sidebar,
                          v53,
                          &v46,
                          v18,
                          0);
        TextRenderer::DrawText(&v48, (size_t)Buffer, DSurface_Sidebar, v24, v28, v31, v33, v36); /*0x6542ec*/
        v2 = i; /*0x6542f1*/
        v15 += 9; /*0x6542f8*/
      }
      ++v2; /*0x654301*/
    }
  }
  return v2; /*0x654310*/
}
}
// 0x655050
namespace gamemd {
unsigned int * E4Recv_655050::sub_655050(unsigned int * v5, short * a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi

  v3 = *a3; /*0x655063*/
  v4 = a3[1]; /*0x655066*/
  v5 = v3 + *(&this->u32_20C6) - v4; /*0x65506e*/
  v6 = v3 + v4 - *(&this->u32_20C8); /*0x655075*/
  v7 = 2; /*0x655077*/
  if ( v5 == -1 ) /*0x65507c*/
  {
    v5 = 0; /*0x65507e*/
  LABEL_4:
    v7 = 1; /*0x655090*/
    goto LABEL_5; /*0x655090*/
  }
  if ( v5 == 2 * *(&this->u32_185) - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
  LABEL_5:
  *v5 = v5; /*0x655095*/
  v5[1] = v6; /*0x6550a2*/
  v5[2] = v7; /*0x6550a6*/
  v5[3] = 1; /*0x6550aa*/
  return v5; /*0x6550a5*/
}
}
// 0x655890
namespace gamemd {
int E4Recv_655890::sub_655890()
{
  return *this + 251 * this->M4; /*0x6558a3*/
}
}
// 0x658640
namespace gamemd {
void DrawPowerBarForPlayers(HWND hDlg)
{
  int v1; // edi
  int v2; // esi
  int v3; // edi
  void *v4; // esi
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v1 = -1; /*0x658650*/
  v2 = 0; /*0x658653*/
  v6 = -1; /*0x658659*/
  v7 = HouseClass_Count; /*0x65865d*/
  if ( HouseClass_Count > 0 ) /*0x658661*/
  {
    while ( 1 ) /*0x658668*/
    {
      v3 = *(_DWORD *)&HouseClass_Array->gap0[4 * v2]; /*0x658668*/
      if ( v3 ) /*0x65866d*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(*(void **)&HouseClass_Array->gap0[4 * v2]) ) /*0x658671*/
        {
          v6 = v2; /*0x65867a*/
  LABEL_6:
          TabClass::DrawPower(hDlg, (void *)v2, (void *)v3); /*0x65868d*/
          goto LABEL_7; /*0x658692*/
        }
        if ( !*(_BYTE *)(v3->q034 + 422) ) /*0x658683*/
          goto LABEL_6; /*0x65868b*/
      }
  LABEL_7:
      if ( ++v2 >= v7 ) /*0x65869e*/
      {
        v1 = v6; /*0x6586a0*/
        break; /*0x6586a0*/
      }
    }
  }
  v4 = *(void **)HouseClass_Array->gap0; /*0x6586a4*/
  TabClass::DrawPower(hDlg, 0, *(void **)&HouseClass_Array->gap0[4 * v1]); /*0x6586b4*/
  return TabClass::DrawPower(hDlg, (void *)v1, v4); /*0x6586c3*/
}
}
// 0x6586D0
namespace gamemd {
void sub_6586D0()
{
  HWND Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (HWND)CreateDialog(0x73u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Diplomacy::DlgProc, 0); /*0x6586e9*/
  g_GameActive = 1; /*0x6586eb*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x6586f2*/
  if ( Dialog ) /*0x6586f9*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x658703*/
    Dialog::Show(Dialog); /*0x65870b*/
    dwNewLong = 0; /*0x658710*/
    while ( !Dialog::PumpMessages() ) /*0x65871f*/
    {
      if ( dwNewLong ) /*0x658727*/
        goto LABEL_7; /*0x658727*/
    }
    dwNewLong = 1059; /*0x65872b*/
  LABEL_7:
    Dialog::Destroy(Dialog); /*0x658733*/
  }
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x658740*/
  g_GameActive = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x658758*/
  return MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x658763*/
}
}
// 0x6591B0
namespace gamemd {
AbstractClass * * UpdateProjectileTrails()
{
  int v0; // ecx
  char *v1; // esi
  int v2; // ebp
  int v3; // edi
  char *v4; // edx
  double v5; // st7
  double v6; // st6
  double v7; // st5
  int v8; // edi
  void *v9; // esi
  int v10; // eax
  int v11; // eax
  char v12; // al
  int v13; // esi
  _DWORD *v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *Block; // [esp+14h] [ebp-1Ch] BYREF
  double v19; // [esp+18h] [ebp-18h]
  double v20; // [esp+20h] [ebp-10h]
  double v21; // [esp+28h] [ebp-8h]

  v0 = dword_B04A70 - 1; /*0x6591c3*/
  v1 = 0; /*0x6591c6*/
  v2 = 0; /*0x6591c8*/
  Block = 0; /*0x6591cd*/
  IDA_LODWORD(v19) = 0; /*0x6591d1*/
  if ( dword_B04A70 - 1 >= 0 ) /*0x6591d5*/
  {
    v3 = dword_B04A70; /*0x6591dc*/
    v4 = (char *)dword_B04A64 + 4 * v0; /*0x6591df*/
    do /*0x6591f5*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v4 + 16) == 2 ) /*0x6591e8*/
      {
        ++v1; /*0x6591ea*/
        if ( *(_BYTE *)(*(_DWORD *)v4 + 9) ) /*0x6591eb*/
          ++v2; /*0x6591f0*/
      }
      v4 -= 4; /*0x6591f1*/
      --v3; /*0x6591f4*/
    }
    while ( v3 ); /*0x6591f5*/
    IDA_LODWORD(v19) = v2; /*0x6591f7*/
    Block = v1; /*0x6591fb*/
  }
  v5 = (double)(unsigned int)dword_ABCD44 /*0x65921d*/
     / (double)(int)dword_A8B558
     * ((double)(unsigned int)dword_ABCD44
      / (double)(int)dword_A8B558
      * ((double)(unsigned int)dword_ABCD44
       / (double)(int)dword_A8B558));
  v6 = (double)IDA_SLODWORD(v19); /*0x65921f*/
  v20 = (double)(int)Block; /*0x659227*/
  v19 = v6 / v20 - v5; /*0x659233*/
  v7 = 0.0; /*0x659237*/
  if ( v19 > 0.0 ) /*0x65924c*/
    v7 = v20 * v19; /*0x659254*/
  v8 = dword_B04A70 - 1; /*0x65925a*/
  v21 = v7 / v6; /*0x65925e*/
  v20 = 1.0 / v5; /*0x65926c*/
  if ( v0 >= 0 )
  {
    while ( 1 ) /*0x659282*/
    {
      v9 = (void *)*((_DWORD *)dword_B04A64 + v8); /*0x659282*/
      Block = v9; /*0x659285*/
      v10 = *((_DWORD *)v9 + 4); /*0x659289*/
      if ( v10 == 1 ) /*0x65928f*/
        break; /*0x65928f*/
      if ( v10 == 2 ) /*0x6592d0*/
      {
        if ( *((_BYTE *)v9 + 9) ) /*0x6592d6*/
        {
          v13 = Random::Range(Randomizer_Global, 0, 99); /*0x6592e8*/
          if ( v13 < (int)Math::RoundToInt(v21 * 100.0) ) /*0x6592fb*/
            *((_BYTE *)Block + 9) = 0; /*0x659301*/
          v9 = Block; /*0x659304*/
        }
        v12 = Weapon_Update(v9); /*0x65930a*/
        goto LABEL_23; /*0x65930a*/
      }
  LABEL_36:
      if ( --v8 < 0 ) /*0x6593d6*/
        return; /*0x6593d6*/
    }
    v11 = Math::RoundToInt(v20 * 10.0); /*0x65929b*/
    IDA_LODWORD(v19) = v11; /*0x6592a3*/
    if ( v11 >= 10 ) /*0x6592a7*/
    {
      if ( v11 > 100 ) /*0x6592b5*/
        IDA_LODWORD(v19) = 100; /*0x6592b7*/
    }
    else
    {
      IDA_LODWORD(v19) = 10; /*0x6592a9*/
    }
    *((double *)v9 + 3) = (double)IDA_SLODWORD(v19); /*0x6592bf*/
    v12 = RenderProjectileTrail((int)Block); /*0x6592c6*/
  LABEL_23:
    if ( v12 )
    {
      v14 = Block; /*0x659317*/
      v15 = *(_DWORD *)Block; /*0x65931b*/
      if ( *(_DWORD *)Block && *(void **)(v15 + 1296) == Block ) /*0x659327*/
      {
        *(_DWORD *)(v15 + 1296) = 0; /*0x659329*/
        *(_DWORD *)Block = 0; /*0x659333*/
        v14 = Block; /*0x659335*/
      }
      v16 = v14[1]; /*0x659339*/
      if ( v16
        && (*(_BYTE *)(v16 + 20) & 1) != 0
        && *(_DWORD **)((*(_BYTE *)(v16 + 20) & 1) != 0 ? v16 + 0x510 : 1296) == v14 )
      {
        *(_DWORD *)((*(_BYTE *)(v16 + 20) & 1) != 0 ? v16 + 0x510 : 1296) = 0;
        *((_DWORD *)Block + 1) = 0; /*0x659380*/
      }
      v17 = (*(int (__thiscall **)(int *, void **))(RadBeam_Array + 16))(&RadBeam_Array, &Block); /*0x659393*/
      if ( v17 != -1 && v17 < dword_B04A70 && v17 < --dword_B04A70 ) /*0x6593ae*/
      {
        do /*0x6593c6*/
        {
          ++v17; /*0x6593b6*/
          *((_DWORD *)dword_B04A64 + v17 - 1) = *((_DWORD *)dword_B04A64 + v17); /*0x6593ba*/
        }
        while ( v17 < dword_B04A70 ); /*0x6593c6*/
      }
      RA2_OPDEL(Block); /*0x6593cd*/
    }
    goto LABEL_36; /*0x6593cd*/
  }
}
}
// 0x659590
namespace gamemd {
int E4Recv_659590::sub_659590(unsigned int * a2, unsigned int * a3, short a4)
{
  char result; // al
  int v6; // esi
  int v7; // eax
  int v8[2]; // [esp+Ch] [ebp-20h] BYREF
  int v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, a2, v9); /*0x6595a8*/
  Coord::To_Screen(g_TacticalClass_Instance, a3, v8); /*0x6595bd*/
  v10[0] = DSurface_ViewBounds; /*0x6595d3*/
  v10[1] = g_Map_VisibleRect; /*0x6595dd*/
  v10[2] = g_Map_VisibleRectOffset; /*0x6595e5*/
  v10[3] = g_DSurface_WindowOffset; /*0x6595e9*/
  result = ClipLine(v9, v8, v10); /*0x6595f6*/
  if ( result ) /*0x6595fd*/
  {
    v6 = this->M12 - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
    v7 = ZCoordToScreenY(a3[2]); /*0x659612*/
    return (*(int (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x65963f*/
                                                                                     + 52))(
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
  if ( this->processTeamOrder() ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->q010 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/
}
}
// 0x65C350
namespace gamemd {
int RAMFileClass::nullsub_0_2(int a2)
{
  if ( !this->ptr_8 || this->processTeamOrder() ) /*0x65c35c*/
    return 0; /*0x65c391*/
  this->q014 = 0; /*0x65c367*/
  this->q018 = a2; /*0x65c36e*/
  this->q01C = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->q010 = 0; /*0x65c37a*/
  return 0; /*0x65c38d*/
}
}
// 0x65C3A0
namespace gamemd {
AbstractClass * * RAMFileClass::nullsub_0_3(void * a1, signed int Size)
{
  size_t v4; // edi
  char v5; // bl
  int v6; // eax

  if ( !this->ptr_8 ) /*0x65c3a6*/
    return 0; /*0x65c3a6*/
  if ( !a1 ) /*0x65c3b3*/
    return 0; /*0x65c3b3*/
  v4 = Size; /*0x65c3b5*/
  if ( !Size ) /*0x65c3bb*/
    return 0; /*0x65c3bb*/
  v5 = 0; /*0x65c3bf*/
  if ( this->processTeamOrder() ) /*0x65c3c1*/
  {
    if ( (this->u8_6 & 1) != 0 ) /*0x65c3d9*/
      goto LABEL_7; /*0x65c3d9*/
    return 0; /*0x65c418*/
  }
  this->sub_65C350(1); /*0x65c3ce*/
  v5 = 1; /*0x65c3d1*/
  LABEL_7:
  v6 = this->q014; /*0x65c3db*/
  if ( Size >= this->q010 - v6 ) /*0x65c3e5*/
    v4 = this->q010 - v6; /*0x65c3e7*/
  memcpy(a1, (const void *)(this->ptr_8 + v6), v4); /*0x65c3f1*/
  this->q014 += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    this->resetTeamState(); /*0x65c409*/
  return v4; /*0x65c40e*/
}
}
// 0x65C420
namespace gamemd {
AbstractClass * * RAMFileClass::nullsub_0_4(int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->ptr_8 || !this->processTeamOrder() ) /*0x65c42c*/
    return this->q014; /*0x65c494*/
  v4 = this->q010; /*0x65c436*/
  v5 = v4; /*0x65c43b*/
  if ( (this->u8_6 & 2) != 0 ) /*0x65c43d*/
    v5 = this->q00C; /*0x65c43f*/
  switch ( a3 ) /*0x65c449*/
  {
    case 0: /*0x65c449*/
      v6 = a2; /*0x65c469*/
      goto LABEL_11; /*0x65c469*/
    case 1: /*0x65c449*/
      this->q014 += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = v5 + a2; /*0x65c455*/
  LABEL_11:
      this->q014 = v6; /*0x65c46d*/
      break;
  }
  if ( (int)this->q014 < 0 ) /*0x65c475*/
    this->q014 = 0; /*0x65c477*/
  if ( this->q014 > v5 ) /*0x65c481*/
    this->q014 = v5; /*0x65c483*/
  result = this->q014; /*0x65c486*/
  if ( result > v4 ) /*0x65c48b*/
    this->q010 = result; /*0x65c48d*/
  return result; /*0x65c490*/
}
}
// 0x65C560
namespace gamemd {
int RAMFileClass::nullsub_0_6(int a2)
{
  return 0; /*0x65c565*/
}
}
// 0x65C5A0
namespace gamemd {
void * RAMFileClass::nullsub_0_10(char a2)
{
  char v3; // al

  v3 = this->u8_1D; /*0x65c5a3*/
  *(_DWORD *)this = (void*)&RAMFileClass_vftable; /*0x65c5a6*/
  this->q01C = 0; /*0x65c5ae*/
  if ( v3 ) /*0x65c5b2*/
  {
    RA2_OPDEL(*((void **)this + 2)); /*0x65c5b8*/
    this->ptr_8 = 0; /*0x65c5c0*/
    this->u8_1D = 0; /*0x65c5c7*/
  }
  *(_DWORD *)this = (void*)&FileClass_vftable; /*0x65c5cf*/
  if ( (a2 & 1) != 0 ) /*0x65c5d7*/
    RA2_OPDEL(); /*0x65c5da*/
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
  int v5; // ecx
  int v6; // edi
  bool v7; // zf
  bool v8; // cc
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v17; // eax
  int v18; // ebp
  int v20; // [esp+8h] [ebp-8h]
  int v22; // [esp+14h] [ebp+4h]
  int v23; // [esp+18h] [ebp+8h]

  aP1 = aP1; /*0x65c913*/
  v5 = a3; /*0x65c919*/
  v6 = aP1; /*0x65c91e*/
  v7 = aP1 == a3; /*0x65c920*/
  v8 = aP1 <= a3; /*0x65c920*/
  v23 = aP1; /*0x65c926*/
  if ( !v7 ) /*0x65c92a*/
  {
    if ( !v8 ) /*0x65c930*/
    {
      v6 = v5; /*0x65c932*/
      v5 = aP1; /*0x65c934*/
      v23 = v6; /*0x65c936*/
    }
    v9 = v5 - v6; /*0x65c93d*/
    v10 = 31; /*0x65c93f*/
    v9 = v9; /*0x65c949*/
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
      v22 = *this; /*0x65c976*/
      while ( 1 ) /*0x65c980*/
      {
        v13 = this->M4; /*0x65c980*/
        v14 = v22; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        this->M4 = v13 + 1; /*0x65c98c*/
        do /*0x65c9d5*/
        {
          v13 = v13; /*0x65c995*/
          v17 = v13 ^ dword_839644[v15++]; /*0x65c997*/
          v18 = v14 /*0x65c9cc*/
              ^ ((unsigned __int16)v17 * (v17 >> 16)
               + (dword_839690[v15]
                ^ ((((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) << 16)
                 | (((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) >> 16))));
          v13 = v18; /*0x65c9d1*/
          v14 = v13; /*0x65c9d3*/
        }
        while ( v15 < 4 ); /*0x65c9d5*/
        v12 = v20 & v18; /*0x65c9df*/
        if ( (v20 & v18) <= v9 ) /*0x65c9e3*/
          break; /*0x65c9e3*/
        this = this; /*0x65c97c*/
      }
      v6 = v23; /*0x65c9e5*/
    }
    return v12 + v6; /*0x65c9eb*/
  }
}
}
// 0x65D510
namespace gamemd {
unsigned int int sub_65D510(int a1, const char * a2, int a3, unsigned char * a4)
{
  unsigned int v4; // esi
  int v6; // ebp
  char *v7; // esi
  char v9; // [esp+Bh] [ebp-15h] BYREF
  _DWORD v10[4]; // [esp+Ch] [ebp-14h] BYREF
  char v11; // [esp+1Ch] [ebp-4h]

  v4 = 0; /*0x65d518*/
  v10[1] = 0; /*0x65d51f*/
  v10[2] = 0; /*0x65d523*/
  v10[3] = a1; /*0x65d527*/
  v11 = 0; /*0x65d52b*/
  v10[0] = (void*)&FileStraw_vftable; /*0x65d530*/
  if ( a3 && a2 ) /*0x65d53c*/
  {
    v6 = 0; /*0x65d54b*/
    if ( FileStraw_Destru::Release((int)v10, (int)&v9, 1) == 1 ) /*0x65d556*/
    {
      v7 = (char *)a2; /*0x65d55a*/
      while ( v9 != 10 ) /*0x65d564*/
      {
        if ( v9 != 13 && (int)&v7[1 - (_DWORD)a2] < a3 ) /*0x65d573*/
        {
          *v7 = v9; /*0x65d575*/
          ++v6; /*0x65d577*/
          ++v7; /*0x65d578*/
        }
        if ( (*(int (__thiscall **)(_DWORD *, char *, int))(v10[0] + 8))(v10, &v9, 1) != 1 ) /*0x65d58e*/
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
  FileStraw::Destructor((int)v10); /*0x65d5b1*/
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
  if ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 8))(a1, &v10, 1) == 1 ) /*0x65d5ea*/
  {
    v7 = (char *)a2; /*0x65d5ee*/
    v8 = 1 - (_DWORD)a2; /*0x65d5f0*/
    v11 = 1 - (_DWORD)a2; /*0x65d5f2*/
    while ( v10 != 10 ) /*0x65d602*/
    {
      if ( v10 != 13 && (int)&v7[v8] < a3 ) /*0x65d610*/
      {
        *v7 = v10; /*0x65d612*/
        ++v6; /*0x65d614*/
        ++v7; /*0x65d615*/
      }
      if ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 8))(a1, &v10, 1) != 1 ) /*0x65d627*/
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
  int v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  int v9; // ecx
  bool v10; // bl
  int *Waypoint_Location; // eax
  int v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // edi
  _DWORD *v15; // ebx
  signed int v16; // ebp
  _DWORD *NeighbourContent; // eax
  _DWORD *v18; // eax
  int v20; // ebp
  int v21; // ebx
  _DWORD *v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  bool IsCellVisible; // al
  void *OwnerHouse; // eax
  int v28; // ecx
  int v29; // eax
  int *OpenNeighbor; // eax
  unsigned int *v32; // ecx
  unsigned int TransitionCount; // eax
  int v34; // edi
  int v35; // eax
  int v36; // ebx
  void *v37; // eax
  char v38; // al
  void *v39; // [esp+0h] [ebp-34h]
  bool v40; // [esp+16h] [ebp-1Eh]
  _DWORD *v43; // [esp+1Ch] [ebp-18h] BYREF
  int v44; // [esp+20h] [ebp-14h]
  int v45; // [esp+24h] [ebp-10h] BYREF
  _DWORD v46[3]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a1; /*0x65d8e7*/
  v45 = edx0; /*0x65d8ed*/
  v44 = a1; /*0x65d8f1*/
  if ( !a1 || !*(_DWORD *)(*(_DWORD *)(a1 + 228) + 156) ) /*0x65d901*/
    return 0; /*0x65d901*/
  v4 = *(_DWORD *)(a1 + 224); /*0x65d90f*/
  if ( !v4 || !v4->q0A0 ) /*0x65d919*/
  {
    if ( !v4 ) /*0x65d92c*/
    {
      if ( RA2_OPNEW(0x234u) ) /*0x65d933*/
        v5 = ScriptTypeClass::Constructor(0); /*0x65d942*/
      else
        v5 = 0; /*0x65d949*/
      v2->q0E0 = v5; /*0x65d94b*/
    }
    v6 = v2->q0E0; /*0x65d951*/
    v7 = v6->q0A0; /*0x65d957*/
    if ( v7 < 50 ) /*0x65d960*/
    {
      *(_DWORD *)(v6 + 8 * v7 + 164) = 5; /*0x65d962*/
      *(_DWORD *)(v6 + 8 * v7 + 168) = 0; /*0x65d969*/
      ++v6->q0A0; /*0x65d970*/
    }
  }
  v40 = v2->q0B0 != 0; /*0x65d985*/
  v8 = (_DWORD *)ConstructTeamMembers(v2); /*0x65d991*/
  v9 = v8[373]; /*0x65d995*/
  v43 = v8; /*0x65d99b*/
  *(_BYTE *)(v9 + 116) = 0; /*0x65d99f*/
  if ( !v8 ) /*0x65d9a3*/
    return 0; /*0x65dd1e*/
  v10 = edx0 != -1; /*0x65d9ac*/
  v10 = v10; /*0x65d9b1*/
  if ( v10 ) /*0x65d9b5*/
    Waypoint_Location = (int *)ScenarioClass::Get_Waypoint_Location(&v45, v45); /*0x65d9c7*/
  else
    Waypoint_Location = TechnoClass::GetWaypointCoords((_DWORD *)v2, &v45); /*0x65d9d5*/
  v12 = *Waypoint_Location; /*0x65d9de*/
  v12 = v12; /*0x65d9e2*/
  if ( !v40 && IDA___PAIR32__(IDA_HIWORD(v12), v12) != dword_B04C38 ) /*0x65d9f3*/
  {
    v13 = v8; /*0x65da07*/
    do /*0x65da1e*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) != 15 ) /*0x65da13*/
        goto LABEL_44; /*0x65da13*/
      v13 = (_DWORD *)v13[12]; /*0x65da19*/
    }
    while ( v13 ); /*0x65da1e*/
    v45 = v12; /*0x65da28*/
    v14 = 0; /*0x65da37*/
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v45); /*0x65da39*/
    v16 = -1; /*0x65da3b*/
    do /*0x65da72*/
    {
      NeighbourContent = v15; /*0x65da41*/
      if ( v16 != -1 ) /*0x65da43*/
        NeighbourContent = Cell::GetNeighbourContent(v15, v16); /*0x65da48*/
      v18 = Cell::IsBridge(NeighbourContent); /*0x65da4f*/
      v18 = v18; /*0x65da54*/
      if ( v18 && (int)v18[27] > 0 && (unsigned __int8)ProcessDataCellClass(v18) ) /*0x65da63*/
        v14 = v18; /*0x65da6c*/
      ++v16; /*0x65da6e*/
    }
    while ( v16 < 8 ); /*0x65da72*/
    if ( v14 ) /*0x65da76*/
    {
      v20 = (int)v43; /*0x65da80*/
      v44 = v12; /*0x65da84*/
      v21 = 0; /*0x65da88*/
      while ( 1 ) /*0x65da8a*/
      {
        v22 = (_DWORD *)(v20 + 48); /*0x65da8a*/
        v23 = (_DWORD *)v20; /*0x65da8d*/
        v20 = *(_DWORD *)(v20 + 48); /*0x65da91*/
        *v22 = 0; /*0x65da93*/
        v24 = (*(int (__thiscall **)(_DWORD *))(*v14 + 44))(v14); /*0x65da9b*/
        if ( v24 <= 0 ) /*0x65daa0*/
          goto LABEL_39; /*0x65daa0*/
        if ( v24 <= 2 ) /*0x65daa5*/
        {
          CellClass::AddObject(v14 + 69, v23); /*0x65dadd*/
          (*(void (__thiscall **)(_DWORD *))(*v23 + 284))(v23); /*0x65dae6*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 488))(v14, 16, 0); /*0x65daf4*/
          ++v21; /*0x65dafa*/
          goto LABEL_41; /*0x65dafb*/
        }
        if ( v24 == 6 ) /*0x65daaa*/
        {
          if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v14 + 256))(v14, v23, v44) == 2 ) /*0x65dabf*/
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v14 + 628))(v14, 3); /*0x65dacd*/
            ++v21; /*0x65dad3*/
          }
          else if ( v23 ) /*0x65dac3*/
          {
            goto LABEL_40; /*0x65dac3*/
          }
        }
        else
        {
  LABEL_39:
          if ( v23 ) /*0x65daff*/
  LABEL_40:
            (*(void (__thiscall **)(_DWORD *, int))(*v23 + 32))(v23, 1); /*0x65db01*/
        }
  LABEL_41:
        if ( !v20 ) /*0x65db0c*/
          return v21 != 0; /*0x65db20*/
      }
    }
    v2 = v44; /*0x65db21*/
    v8 = v43; /*0x65db25*/
    v10 = v10; /*0x65db29*/
  }
  LABEL_44:
  if ( !v10 /*0x65db49*/
    || (IsCellVisible = LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v12, 1),
        IDA_LOBYTE(v43) = 1,
        !IsCellVisible) )
  {
    IDA_LOBYTE(v43) = 0; /*0x65db4b*/
  }
  if ( !v40 ) /*0x65db56*/
  {
    if ( (unsigned __int8)MoveScriptTypeClassToWaypoint(&v12, v43) ) /*0x65db66*/
      goto LABEL_49; /*0x65db6d*/
    return 1; /*0x65dba5*/
  }
  v45 = v12; /*0x65dbaf*/
  v28 = *((_DWORD *)g_AircraftTypeCount + TypeClass::FindByName(g_INI_Key_PDPLANE)); /*0x65dbc8*/
  ++g_IKnowWhatImDoing; /*0x65dbca*/
  v29 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v28 + 140))(v28, v8[135]); /*0x65dbd9*/
  v29 = v29; /*0x65dbe5*/
  --g_IKnowWhatImDoing; /*0x65dbea*/
  if ( !v29 ) /*0x65dbf0*/
    return 1; /*0x65dbf0*/
  *(_BYTE *)(v29 + 980) = 1; /*0x65dbf2*/
  if ( v2->u8_B1 ) /*0x65dbf9*/
  {
    OpenNeighbor = (int *)TeamTypeClass::GetTransportWaypoint(&v43); /*0x65dc0a*/
  }
  else
  {
    v32 = (unsigned int *)v8[135]; /*0x65dc11*/
    TransitionCount = v32[120]; /*0x65dc17*/
    if ( TransitionCount >= 4 ) /*0x65dc1f*/
      TransitionCount = HouseClass::GetTransitionCount(v32); /*0x65dc26*/
    OpenNeighbor = CellClass::FindOpenNeighbor( /*0x65dc46*/
                     (int *)&MapClass_Instance,
                     (int *)&v43,
                     TransitionCount,
                     (int)&dword_B04C38,
                     (int)&dword_B04C38,
                     4,
                     1,
                     0);
  }
  v34 = *OpenNeighbor; /*0x65dc4b*/
  v35 = *(_DWORD *)v29; /*0x65dc4d*/
  v43 = (_DWORD *)v34; /*0x65dc55*/
  (*(void (__thiscall **)(int, int, _DWORD))(v35 + 488))(v29, 26, 0); /*0x65dc59*/
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v29 + 1152))(v29, 0, 1); /*0x65dc67*/
  v36 = *(_DWORD *)v29; /*0x65dc6d*/
  v37 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v45); /*0x65dc79*/
  (*(void (__thiscall **)(int, void *))(v36 + 968))(v29, v37); /*0x65dc81*/
  ++g_IKnowWhatImDoing; /*0x65dc95*/
  Coord::Subtract(v46, ((__int16)v34 << 8) + 128, (IDA_SHIWORD(v43) << 8) + 128, 0); /*0x65dcb6*/
  v38 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v29 + 216))(v29, v46, 0); /*0x65dcc6*/
  --g_IKnowWhatImDoing; /*0x65dcda*/
  if ( v38 ) /*0x65dce0*/
  {
    *(_BYTE *)(v29 + 1737) = 1; /*0x65dce9*/
    CellClass::AddObject((_DWORD *)(v29 + 276), v8); /*0x65dcf0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 492))(v29); /*0x65dcf9*/
    v2 = v44; /*0x65dcff*/
  LABEL_49:
    if ( Techno::GetOwnerHouse(v2) ) /*0x65db71*/
    {
      v39 = HouseClass_Player; /*0x65db80*/
      OwnerHouse = (void *)Techno::GetOwnerHouse(v2); /*0x65db83*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v39) ) /*0x65db8a*/
        ScriptActionQueue::PushNext(&v12); /*0x65db97*/
    }
    return 1; /*0x65db97*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x65dd0e*/
  return 1; /*0x65db14*/
}
}
// 0x65E010
namespace gamemd {
void MoveScriptTypeClassToWaypoint(ScriptTypeClass * aP0, ObjectClass * aP1, int * a2, int aP1_4)
{
  int v4; // esi
  _DWORD *v5; // ebp
  char v6; // al
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edi
  char v14; // bl
  int v16; // edx
  unsigned int v17; // esi
  int v18; // edx
  int v19; // esi
  void *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
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
  _DWORD *v34; // eax
  int *v35; // eax
  int v36; // edx
  int v37; // esi
  int v38; // eax
  __int16 v39; // dx
  int v40; // esi
  int v41; // ecx
  __int16 v42; // ax
  int v43; // ebx
  void *v44; // eax
  _DWORD *v45; // eax
  _DWORD *v46; // esi
  __int16 v48; // [esp+2Ah] [ebp-6Ah]
  int v49; // [esp+2Ch] [ebp-68h] BYREF
  _DWORD *v50; // [esp+30h] [ebp-64h]
  int v51; // [esp+34h] [ebp-60h] BYREF
  int v52; // [esp+38h] [ebp-5Ch]
  int *v54; // [esp+40h] [ebp-54h]
  int *v55; // [esp+44h] [ebp-50h]
  unsigned int v56; // [esp+48h] [ebp-4Ch]
  _DWORD v57[3]; // [esp+4Ch] [ebp-48h] BYREF
  _DWORD v58[3]; // [esp+58h] [ebp-3Ch] BYREF
  _DWORD v59[3]; // [esp+64h] [ebp-30h] BYREF
  _DWORD v60[3]; // [esp+70h] [ebp-24h] BYREF
  int v61[3]; // [esp+7Ch] [ebp-18h] BYREF
  int v62[3]; // [esp+88h] [ebp-Ch] BYREF

  v4 = aP0; /*0x65e016*/
  v5 = aP1; /*0x65e019*/
  v6 = *(_BYTE *)(aP0 + 176); /*0x65e01b*/
  v50 = (_DWORD *)aP0; /*0x65e021*/
  IDA_LOBYTE(v48) = v6 != 0; /*0x65e02e*/
  v7 = aP1; /*0x65e035*/
  if ( aP1 ) /*0x65e037*/
  {
    while ( !memcmp((const void *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 844), &stru_7E9A50, 0x10u) ) /*0x65e057*/
    {
      v7 = (_DWORD *)v7[12]; /*0x65e059*/
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
  if ( v48 || (_BYTE)aP1_4 ) /*0x65e095*/
  {
    v11 = *v5; /*0x65e0e5*/
    aP1_4 = 0; /*0x65e0ee*/
    v12 = v5->vt_slot_132(); /*0x65e0fe*/
    v10 = *LayerClass::Pathfinding_Find( /*0x65e122*/
             &MapClass_Instance,
             (int)&v51,
             &a2,
             (__int16 *)&v51,
             *(_DWORD *)(v12 + 1660),
             -1,
             0,
             0,
             1,
             1,
             0,
             0,
             0,
             1,
             (__int16 *)&aP1_4,
             0,
             0);
    v51 = v10; /*0x65e124*/
  }
  else
  {
    if ( !Techno::GetOwnerHouse(v4) || (v8 = *(_DWORD *)(Techno::GetOwnerHouse(v4) + 480), v8 == -1) ) /*0x65e0b2*/
      v8 = 0; /*0x65e0b4*/
    v9 = 2 * v8; /*0x65e0b6*/
    v10 = v51; /*0x65e0b9*/
    v52 = v9; /*0x65e0bd*/
  }
  v13 = (_DWORD *)v5[12]; /*0x65e128*/
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
        IDA_LOWORD(v56) = (_WORD)v52 << 13; /*0x65e191*/
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
        ++g_IKnowWhatImDoing; /*0x65e1cf*/
        if ( !(_BYTE)v48 ) /*0x65e1d5*/
          break; /*0x65e1d5*/
        v18 = *v5; /*0x65e1e5*/
        v57[2] = 0; /*0x65e1e8*/
        v57[0] = ((__int16)v49 << 8) + 128; /*0x65e1fb*/
        v57[1] = (IDA_SHIWORD(v49) << 8) + 128; /*0x65e209*/
        v5->vt_slot_436(v57); /*0x65e210*/
        v19 = *v5; /*0x65e216*/
        v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49); /*0x65e225*/
        v5->vt_slot_1152(v20, 1); /*0x65e22d*/
        if ( !v5[413] ) /*0x65e23d*/
          WinAPI::Wrapper(-2147467261); /*0x65e260*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e27b*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (IDA_SHIWORD(v49) << 8) + 128,
          0);
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v5 + 1160))(v5, 0, 0, 0, 0, 0); /*0x65e28d*/
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
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 488))(v5, 5, 0); /*0x65e460*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 492))(v5); /*0x65e46b*/
        }
        if ( (_BYTE)v48 ) /*0x65e477*/
        {
          v37 = 0; /*0x65e47d*/
          while ( 1 ) /*0x65e486*/
          {
            v38 = v37 & 7; /*0x65e486*/
            v39 = IDA_HIWORD(v49) + IDA_HIWORD(Direction_X_Offsets[v38]); /*0x65e499*/
            IDA_LOWORD(v54) = IDA_LOWORD(Direction_X_Offsets[v38]) + v49; /*0x65e4a5*/
            IDA_HIWORD(v54) = v39; /*0x65e4b1*/
            a2 = v54; /*0x65e4c0*/
            if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) ) /*0x65e4c7*/
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
        --g_IKnowWhatImDoing; /*0x65e5b9*/
        if ( v13 ) /*0x65e5bf*/
        {
          v45 = v13 + 12; /*0x65e5c8*/
          v50 = (_DWORD *)v13[12]; /*0x65e5cb*/
          v13 = v50; /*0x65e5cf*/
          *v45 = 0; /*0x65e5d1*/
        }
      }
      if ( IDA_HIBYTE(v48) ) /*0x65e2d9*/
      {
        v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49); /*0x65e2ee*/
        Coords = CellClass::GetCoords(v22, v61); /*0x65e2f5*/
        v24 = *Coords; /*0x65e2fa*/
        v25 = Coords[1]; /*0x65e2fc*/
        v26 = Coords[2]; /*0x65e2ff*/
        v59[1] = v25; /*0x65e302*/
        v27 = *v5; /*0x65e306*/
        v59[2] = v26 - 400; /*0x65e312*/
        v59[0] = v24; /*0x65e322*/
        IDA_LOBYTE(a2) = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v27 + 216))( /*0x65e332*/
                       v5,
                       v59,
                       (unsigned __int8)(((v17 >> 7) + 1) >> 1));
        if ( !(_BYTE)a2 ) /*0x65e339*/
          goto LABEL_39; /*0x65e339*/
        v28 = (*(int (__thiscall **)(_DWORD *))(*v5 + 464))(v5); /*0x65e344*/
        v60[0] = v5[39]; /*0x65e35b*/
        v60[1] = v5[40]; /*0x65e367*/
        v29 = *v5; /*0x65e36b*/
        v60[2] = v5[41] + -256 - v28; /*0x65e373*/
        v5->vt_slot_436(v60); /*0x65e379*/
        v30 = *v5; /*0x65e37f*/
        v31 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49); /*0x65e38e*/
        v5->vt_slot_1152(v31, 1); /*0x65e396*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1348))(v5, 0, 1072693248); /*0x65e3a8*/
        if ( !v5[413] ) /*0x65e3b8*/
          WinAPI::Wrapper(-2147467261); /*0x65e3db*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e3f6*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (IDA_SHIWORD(v49) << 8) + 128,
          0);
        v32 = (char)a2; /*0x65e3f9*/
        v13 = v50; /*0x65e400*/
      }
      else
      {
        v33 = *v5; /*0x65e40a*/
        v34 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49); /*0x65e425*/
        v35 = CellClass::GetCoords(v34, v62); /*0x65e42c*/
        v32 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD))(v33 + 216))( /*0x65e434*/
                v5,
                v35,
                (unsigned __int8)(((v17 >> 7) + 1) >> 1));
      }
      if ( v32 ) /*0x65e43c*/
        goto LABEL_31; /*0x65e43c*/
  LABEL_39:
      v40 = 0; /*0x65e506*/
      while ( 1 ) /*0x65e50f*/
      {
        v41 = v40 & 7; /*0x65e50f*/
        v42 = IDA_HIWORD(Direction_X_Offsets[v41]); /*0x65e521*/
        IDA_LOWORD(v55) = IDA_LOWORD(Direction_X_Offsets[v41]) + v49; /*0x65e529*/
        IDA_HIWORD(v55) = IDA_HIWORD(v49) + v42; /*0x65e53b*/
        a2 = v55; /*0x65e544*/
        if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) ) /*0x65e550*/
        {
          v43 = *v5; /*0x65e559*/
          v44 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x65e570*/
          if ( !v5->vt_slot_428(v44, v40, -1, 0, 1) ) /*0x65e578*/
            break; /*0x65e578*/
        }
        if ( ++v40 >= 8 ) /*0x65e586*/
        {
          v49 = dword_B04C38; /*0x65e5a0*/
  LABEL_45:
          (*(void (__thiscall **)(_DWORD *, int))(*v5 + 32))(v5, 1); /*0x65e5a4*/
          goto LABEL_46; /*0x65e5ab*/
        }
      }
      v49 = (int)a2; /*0x65e594*/
      if ( a2 == (int *)dword_B04C38 ) /*0x65e5e3*/
        goto LABEL_45; /*0x65e5e3*/
      --g_IKnowWhatImDoing; /*0x65e5f6*/
    }
  }
  if ( v5 ) /*0x65e603*/
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 32))(v5, 1); /*0x65e60c*/
  LABEL_53:
  if ( v13 ) /*0x65e61a*/
  {
    while ( 1 ) /*0x65e622*/
    {
      v46 = (_DWORD *)v13[12]; /*0x65e622*/
      v50 = v46; /*0x65e62a*/
      v13[12] = 0; /*0x65e630*/
      if ( v13 ) /*0x65e636*/
        (*(void (__thiscall **)(_DWORD *, int))(*v13 + 32))(v13, 1); /*0x65e63c*/
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
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  unsigned int TransitionCount; // eax
  int v14; // edi
  int v15; // edx
  char v16; // al
  int v17; // ebp
  int v18; // ebx
  int v19; // eax
  _DWORD *v20; // edi
  int v22; // [esp+24h] [ebp-20h]
  unsigned int *v23; // [esp+28h] [ebp-1Ch]
  int v24; // [esp+2Ch] [ebp-18h]
  int v25; // [esp+34h] [ebp-10h] BYREF
  _DWORD v26[3]; // [esp+38h] [ebp-Ch] BYREF

  v9 = *((_DWORD *)g_AircraftTypeCount + a2); /*0x65e66c*/
  v10 = 0; /*0x65e673*/
  v23 = a0; /*0x65e679*/
  v24 = v9; /*0x65e67d*/
  v22 = 0; /*0x65e681*/
  if ( aP2 > 0 ) /*0x65e685*/
  {
    while ( 1 ) /*0x65e699*/
    {
      ++g_IKnowWhatImDoing; /*0x65e699*/
      v11 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v9 + 140))(v9, a0); /*0x65e6a1*/
      v12 = v11; /*0x65e6ad*/
      --g_IKnowWhatImDoing; /*0x65e6b2*/
      if ( !v11 ) /*0x65e6b8*/
        break; /*0x65e6b8*/
      *(_BYTE *)(v11 + 980) = 1; /*0x65e6be*/
      TransitionCount = a0[120]; /*0x65e6c5*/
      if ( TransitionCount >= 4 ) /*0x65e6cd*/
        TransitionCount = HouseClass::GetTransitionCount(a0); /*0x65e6d6*/
      v14 = *CellClass::FindOpenNeighbor( /*0x65e6fb*/
               (int *)&MapClass_Instance,
               &v25,
               TransitionCount,
               (int)&dword_B04C38,
               (int)&dword_B04C38,
               4,
               1,
               0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, a4, 0); /*0x65e70c*/
      if ( a6 ) /*0x65e718*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 1152))(v12, a6, 1); /*0x65e721*/
      if ( a5 ) /*0x65e72d*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, a5); /*0x65e734*/
      v26[0] = ((__int16)v14 << 8) + 128; /*0x65e756*/
      ++g_IKnowWhatImDoing; /*0x65e760*/
      v15 = *(_DWORD *)v12; /*0x65e766*/
      v26[1] = (IDA_SHIWORD(v14) << 8) + 128; /*0x65e76c*/
      v26[2] = 0; /*0x65e773*/
      v16 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v15 + 216))(v12, v26, 0); /*0x65e77b*/
      --g_IKnowWhatImDoing; /*0x65e78f*/
      if ( !v16 ) /*0x65e795*/
      {
        if ( v12 ) /*0x65e82e*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 32))(v12, 1); /*0x65e836*/
        return v10 - 1; /*0x65e83a*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2 && a7 != -1 && a8 ) /*0x65e7b6*/
      {
        *(_BYTE *)(v12 + 1737) = 1; /*0x65e7b8*/
        v17 = *((_DWORD *)Factory_ExitCellTable + a7); /*0x65e7c5*/
        if ( v17 ) /*0x65e7ca*/
        {
          v18 = a8; /*0x65e7cc*/
          do /*0x65e7fb*/
          {
            v19 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v17 + 140))(v17, v23); /*0x65e7d8*/
            v20 = (_DWORD *)v19; /*0x65e7de*/
            if ( v19 ) /*0x65e7e2*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 212))(v19); /*0x65e7e8*/
              CellClass::AddObject((_DWORD *)(v12 + 276), v20); /*0x65e7f5*/
            }
            --v18; /*0x65e7fa*/
          }
          while ( v18 ); /*0x65e7fb*/
          a0 = v23; /*0x65e7fd*/
        }
        v10 = v22; /*0x65e801*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 492))(v12); /*0x65e809*/
      v22 = ++v10; /*0x65e816*/
      if ( v10 >= aP2 ) /*0x65e81a*/
        return v10; /*0x65e81a*/
      v9 = v24; /*0x65e68d*/
    }
  }
  return v10; /*0x65e820*/
}
}
// 0x65E850
namespace gamemd {
void PlaceAircraftOnMap(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // ebp
  unsigned int *v10; // esi
  unsigned int TransitionCount; // eax
  int v12; // eax
  int v13; // esi
  char v14; // al
  int v15; // eax
  int v16; // edi
  int v17; // edx
  int v18; // edx
  char v19; // al
  int v20; // ebp
  int v21; // eax
  _DWORD *v22; // edi
  int v24; // [esp+24h] [ebp-28h]
  int v25; // [esp+28h] [ebp-24h] BYREF
  unsigned int *v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+30h] [ebp-1Ch] BYREF
  int v28; // [esp+34h] [ebp-18h] BYREF
  int v29; // [esp+38h] [ebp-14h]
  int v30; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD v31[3]; // [esp+40h] [ebp-Ch] BYREF

  v9 = *((_DWORD *)g_AircraftTypeCount + a2); /*0x65e85b*/
  v10 = a1; /*0x65e85e*/
  TransitionCount = a1[120]; /*0x65e863*/
  v26 = a1; /*0x65e869*/
  v29 = v9; /*0x65e86f*/
  if ( TransitionCount >= 4 ) /*0x65e873*/
    TransitionCount = HouseClass::GetTransitionCount(a1); /*0x65e87c*/
  v28 = *CellClass::FindOpenNeighbor( /*0x65e8a6*/
           (int *)&MapClass_Instance,
           &v27,
           TransitionCount,
           (int)&dword_B04C38,
           (int)&dword_B04C38,
           4,
           1,
           0);
  v24 = 0; /*0x65e8ac*/
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      ++g_IKnowWhatImDoing; /*0x65e8c6*/
      v12 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v9 + 140))(v9, v10); /*0x65e8cf*/
      v13 = v12; /*0x65e8db*/
      --g_IKnowWhatImDoing; /*0x65e8e0*/
      if ( !v12 ) /*0x65e8e6*/
        break; /*0x65e8e6*/
      v14 = *(_BYTE *)(v12 + 20) & 4; /*0x65e8f3*/
      *(_DWORD *)(v13 + 660) = a9; /*0x65e8f5*/
      *(_BYTE *)(v13 + 980) = 1; /*0x65e8ff*/
      v15 = v14 != 0 ? v13 : 0;
      if ( a9 && v15 ) /*0x65e90e*/
      {
        *(_DWORD *)(v15 + 1496) = *(_DWORD *)(a9 + 92); /*0x65e913*/
        *(_DWORD *)(a9 + 92) = v15; /*0x65e919*/
      }
      v25 = 0; /*0x65e945*/
      v16 = *LayerClass::Pathfinding_Find( /*0x65e954*/
               &MapClass_Instance,
               (int)&v25,
               &v30,
               (__int16 *)&v28,
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
               (__int16 *)&v25,
               0,
               0);
      v17 = *(_DWORD *)v13; /*0x65e956*/
      v27 = v16; /*0x65e960*/
      (*(void (__thiscall **)(int, int, _DWORD))(v17 + 488))(v13, a4, 0); /*0x65e964*/
      if ( a6 ) /*0x65e970*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 1152))(v13, a6, 1); /*0x65e979*/
      if ( a5 ) /*0x65e985*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 968))(v13, a5); /*0x65e98c*/
      v31[0] = ((__int16)v16 << 8) + 128; /*0x65e9ad*/
      ++g_IKnowWhatImDoing; /*0x65e9b7*/
      v18 = *(_DWORD *)v13; /*0x65e9bd*/
      v31[1] = (IDA_SHIWORD(v27) << 8) + 128; /*0x65e9c3*/
      v31[2] = 0; /*0x65e9ca*/
      v19 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v18 + 216))(v13, v31, 0); /*0x65e9ce*/
      --g_IKnowWhatImDoing; /*0x65e9e2*/
      if ( !v19 ) /*0x65e9e8*/
      {
        if ( v13 ) /*0x65ea8d*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x65ea95*/
        return v24 - 1; /*0x65ea9f*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 2 && a7 != -1 && a8 ) /*0x65ea09*/
      {
        *(_BYTE *)(v13 + 1737) = 1; /*0x65ea0b*/
        v20 = *((_DWORD *)Factory_ExitCellTable + a7); /*0x65ea18*/
        if ( v20 ) /*0x65ea1d*/
        {
          v27 = a8; /*0x65ea1f*/
          do /*0x65ea58*/
          {
            v21 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v20 + 140))(v20, v26); /*0x65ea2d*/
            v22 = (_DWORD *)v21; /*0x65ea33*/
            if ( v21 ) /*0x65ea37*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 212))(v21); /*0x65ea3d*/
              CellClass::AddObject((_DWORD *)(v13 + 276), v22); /*0x65ea4a*/
            }
            --v27; /*0x65ea54*/
          }
          while ( v27 ); /*0x65ea58*/
        }
        v9 = v29; /*0x65ea5a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 492))(v13); /*0x65ea62*/
      if ( ++v24 >= a3 ) /*0x65ea77*/
        return v24; /*0x65ea77*/
      v10 = v26; /*0x65e8b8*/
    }
  }
  return v24; /*0x65ea81*/
}
}
// 0x65EC30
namespace gamemd {
void* ExecuteScriptTypeClassActions(unsigned int * ecx0, int a2)
{
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ecx
  LPVOID *v9; // edi
  LPVOID *v10; // eax
  char v11; // bl
  void *v12; // eax
  int *v13; // eax
  int v14; // ebp
  int v15; // ebx
  _DWORD *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  char v23; // al
  LPVOID *v24; // ebp
  int (__stdcall ***Checked)(_DWORD, void *, int *); // eax
  int v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int (__stdcall ***v30)(_DWORD, void *, int *); // eax
  int v31; // esi
  int v33; // ecx
  LPVOID v35; // esi
  int EMPulseWarhead; // eax
  LPVOID *v38; // esi
  bool v39; // zf
  _DWORD *v40; // edi
  void (__thiscall **v41)(LPVOID *); // eax
  _DWORD *v42; // eax
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
  __int16 v59[2]; // [esp+80h] [ebp-80h] BYREF
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
  if ( !ecx0 || !*(_DWORD *)(ecx0[57] + 156) ) /*0x65ec50*/
    return 0; /*0x65ec50*/
  v4 = ecx0[56]; /*0x65ec5e*/
  if ( !v4 || !v4->q0A0 ) /*0x65ec68*/
  {
    if ( !v4 ) /*0x65ec7b*/
    {
      v5 = RA2_OPNEW(0x234u); /*0x65ec82*/
      if ( v5 ) /*0x65ec8c*/
        v6 = ScriptTypeClass::Constructor(v5, 0); /*0x65ec91*/
      else
        v6 = 0; /*0x65ec98*/
      ecx0[56] = v6; /*0x65ec9a*/
    }
    v7 = ecx0[56]; /*0x65eca0*/
    v8 = v7->q0A0; /*0x65eca6*/
    if ( v8 < 50 ) /*0x65ecaf*/
    {
      *(_DWORD *)(v7 + 8 * v8 + 164) = 5; /*0x65ecb1*/
      *(_DWORD *)(v7 + 8 * v8 + 168) = 0; /*0x65ecb8*/
      ++v7->q0A0; /*0x65ecbf*/
    }
  }
  v9 = (LPVOID *)ConstructTeamMembers(ecx0); /*0x65eccc*/
  *((_BYTE *)v9[373] + 116) = 0; /*0x65ecd8*/
  if ( !v9 ) /*0x65ecdc*/
    return 0; /*0x65f304*/
  v56 = *TechnoClass::GetWaypointCoords(ecx0, &v57); /*0x65ecf3*/
  if ( a2 != -1 ) /*0x65ecf7*/
    v56 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(&v57, a2); /*0x65ed0c*/
  v10 = (LPVOID *)v9[12]; /*0x65ed10*/
  v9[12] = 0; /*0x65ed13*/
  v55 = v10; /*0x65ed16*/
  v58 = 0; /*0x65ed1a*/
  do /*0x65f275*/
  {
    v11 = 0; /*0x65ed1e*/
    v47 = 0; /*0x65ed27*/
    v48 = (*((int (__thiscall **)(LPVOID *))*v9 + 11))(v9) == 1; /*0x65ed39*/
    if ( (*((int (__thiscall **)(LPVOID *))*v9 + 11))(v9) == 2 ) /*0x65ed47*/
    {
      v47 = 1; /*0x65ed49*/
      v11 = 1; /*0x65ed4e*/
    }
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v56); /*0x65ed5c*/
    v13 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v12 + 72))(v12, v73); /*0x65ed6d*/
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
    v16 = Coord::To_Cell(&MapClass_Instance, &v52); /*0x65edf3*/
    for ( i = 0; v14 == dword_B04C58 && v15 == dword_B04C5C && v68 == dword_B04C60 && i < 255; ++i ) /*0x65edf7*/
    {
      if ( v47 ) /*0x65ee39*/
      {
        v17 = *v16; /*0x65ee3f*/
        v61 = 0; /*0x65ee41*/
        v18 = (_DWORD *)v16->vt_slot_72(v71); /*0x65ee59*/
        IDA_LOWORD(v62) = *v18 / 256; /*0x65ee70*/
        IDA_HIWORD(v62) = v18[1] / 256; /*0x65ee91*/
        v62 = v62; /*0x65ee9f*/
        v60 = *LayerClass::Pathfinding_Find( /*0x65eec2*/
                 &MapClass_Instance,
                 (int)&v61,
                 &v69,
                 (__int16 *)&v62,
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
                 (__int16 *)&v61,
                 0,
                 0);
      }
      else
      {
        v59[0] = 0; /*0x65eed2*/
        v59[1] = 0; /*0x65eed7*/
        v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v16 + 72))(v16, v75); /*0x65eee8*/
        IDA_LOWORD(v63) = *v19 / 256; /*0x65eeff*/
        IDA_HIWORD(v63) = v19[1] / 256; /*0x65ef15*/
        v63 = v63; /*0x65ef22*/
        v20 = (*((int (__thiscall **)(LPVOID *))*v9 + 33))(v9); /*0x65ef38*/
        v60 = *LayerClass::Pathfinding_Find( /*0x65ef61*/
                 &MapClass_Instance,
                 (int)&v70,
                 &v70,
                 (__int16 *)&v63,
                 *(_DWORD *)(v20 + 1660),
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
      v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v60); /*0x65ef74*/
      if ( v48 || v47 ) /*0x65ef84*/
      {
        v22 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v16 + 72))(v16, v76); /*0x65efb9*/
      }
      else
      {
        v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v16 + 72))(v16, v72); /*0x65ef98*/
        v22 = ObjectPlacement::CalcPosition(v16, v74, v21, 0, 0, 0); /*0x65efa6*/
      }
      v14 = *v22; /*0x65efbc*/
      v15 = v22[1]; /*0x65efbe*/
      v68 = v22[2]; /*0x65efc9*/
    }
    v52 = v14; /*0x65efe0*/
    v53 = v15; /*0x65efe4*/
    ++g_IKnowWhatImDoing; /*0x65efe8*/
    v23 = (*((int (__thiscall **)(LPVOID *, int *, _DWORD))*v9 + 54))(v9, &v52, 0); /*0x65eff7*/
    --g_IKnowWhatImDoing; /*0x65f00b*/
    if ( v23 ) /*0x65f011*/
    {
      v24 = v9 + 413; /*0x65f017*/
      v50 = 0; /*0x65f01d*/
      if ( v9[413] ) /*0x65f025*/
      {
        Checked = (int (__stdcall ***)(_DWORD, void *, int *))Stream::GetChecked(v9 + 413); /*0x65f02d*/
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
      (*(void (__stdcall **)(LPVOID, LPVOID *))(ppv->vtable4)(ppv, v9); /*0x65f0c2*/
      v29 = 0; /*0x65f0c5*/
      i = 0; /*0x65f0cb*/
      if ( ppv ) /*0x65f0d1*/
      {
        v30 = (int (__stdcall ***)(_DWORD, void *, int *))Stream::GetChecked(&ppv); /*0x65f0d7*/
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
          (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 4))(v29); /*0x65f13e*/
          v33 = v50; /*0x65f141*/
          v29 = i; /*0x65f145*/
        }
        if ( v50 ) /*0x65f14b*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v50 + 8))(v50); /*0x65f150*/
          v33 = v50; /*0x65f153*/
          v29 = i; /*0x65f157*/
        }
      }
      if ( v29 ) /*0x65f15d*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29); /*0x65f162*/
        v33 = v50; /*0x65f165*/
      }
      if ( v33 ) /*0x65f16b*/
      {
        (*(void (__stdcall **)(int, LPVOID))(*(_DWORD *)v33 + 12))(v33, *v24); /*0x65f174*/
        v35 = *v24; /*0x65f177*/
        if ( *v24 != ppv ) /*0x65f180*/
        {
          *v24 = ppv; /*0x65f182*/
          if ( ppv ) /*0x65f18b*/
            (*(void (__stdcall **)(LPVOID))(ppv->vtable2)(ppv); /*0x65f190*/
          if ( v35 ) /*0x65f195*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v35 + 8))(v35); /*0x65f19a*/
        }
      }
      v9[162] = (LPVOID)v52; /*0x65f1a7*/
      v9[163] = (LPVOID)v53; /*0x65f1b1*/
      v9[164] = v54; /*0x65f1b8*/
      if ( !v9[413] ) /*0x65f1bb*/
        WinAPI::Wrapper(-2147467261); /*0x65f1d6*/
      (*(void (__stdcall **)(LPVOID, int, int, void *))(*(_DWORD *)v9[413] + 68))(v9[413], v52, v53, v54); /*0x65f1f1*/
      *((_BYTE *)v9 + 625) = 1; /*0x65f1f4*/
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
        (*(void (__stdcall **)(LPVOID))(ppv->vtable3)(ppv); /*0x65f23b*/
      if ( v50 ) /*0x65f244*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v50 + 8))(v50); /*0x65f249*/
    }
    else
    {
      (*((void (__thiscall **)(LPVOID *, int))*v9 + 8))(v9, 1); /*0x65f258*/
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
      (*((void (__thiscall **)(LPVOID *, _DWORD))*v38 + 73))(v38, 0); /*0x65f295*/
      v41 = (void (__thiscall **)(LPVOID *))*v38; /*0x65f29b*/
      v38[160] = (LPVOID)3; /*0x65f29f*/
      v41[123](v38); /*0x65f2a9*/
      v38 = (LPVOID *)v40; /*0x65f2b1*/
      if ( !v40 ) /*0x65f2b3*/
        break; /*0x65f2b3*/
      v42 = v40 + 12; /*0x65f2b5*/
      v40 = (_DWORD *)v40[12]; /*0x65f2b8*/
      *v42 = 0; /*0x65f2bb*/
    }
  }
  v43 = (int)ecx0; /*0x65f2c3*/
  if ( Techno::GetOwnerHouse((int)ecx0) ) /*0x65f2c9*/
  {
    v46 = HouseClass_Player; /*0x65f2d8*/
    OwnerHouse = (void *)Techno::GetOwnerHouse(v43); /*0x65f2db*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v46) ) /*0x65f2e2*/
      ScriptActionQueue::PushNext(&v56); /*0x65f2ef*/
  }
  return 1; /*0x65f2f6*/
}
}
// 0x65FA70
namespace gamemd {
void CreateTriggerClassIfFarEnough(IUnknown * aP0, int a2, IUnknown * aP2)
{
  int v3; // edi
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // edx
  double v7; // st7
  double v8; // st7
  __int16 v9; // ax

  v3 = aP0; /*0x65fa7c*/
  if ( byte_7F09A4[16 * aP0] && (v4 = 0, g_TriggerEventState > 0) ) /*0x65faa1*/
  {
    v5 = g_TriggerPool; /*0x65faab*/
    while ( 1 ) /*0x65fab1*/
    {
      v6 = v5[v4]; /*0x65fab1*/
      if ( *(_DWORD *)v6 == aP0 ) /*0x65faba*/
      {
        v7 = (double)(__int16)(IDA_HIWORD(aP2) - *(_WORD *)(v6 + 34)); /*0x65fad7*/
        v8 = Math::Sqrt((double)(__int16)(aP2 - *(_WORD *)(v6 + 32)) * (double)(__int16)(aP2 - *(_WORD *)(v6 + 32)) + v7 * v7); /*0x65faf4*/
        v9 = Math::RoundToInt(v8); /*0x65fafc*/
        v5 = g_TriggerPool; /*0x65fb01*/
        if ( v9 < dword_7F0998[4 * **((_DWORD **)g_TriggerPool + v4)] ) /*0x65fb18*/
          return 0; /*0x65fb4c*/
      }
      if ( ++v4 >= g_TriggerEventState ) /*0x65fb22*/
      {
        v3 = aP0; /*0x65fb24*/
        goto LABEL_8; /*0x65fb24*/
      }
    }
  }
  else
  {
  LABEL_8:
    if ( RA2_OPNEW(0x40u) ) /*0x65fb2a*/
      Team_Load_65FB80(v3, aP2); /*0x65fb3a*/
    return 1; /*0x65fb3f*/
  }
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
  __int64 result; // rax

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
  __int64 result; // rax

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
  GadgetClass::Construct(dword_B04A10, 0, 0, 0, 0, 159, 1); /*0x652884*/
  dword_B04A10[0] = (int)&RadarClass_RTacticalClass_vftable; /*0x65288e*/
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
    GadgetClass::Dtor(dword_B04A10); /*0x6528b9*/
  }
}
} // namespace gamemd

// 0x6528D0
namespace gamemd {
int sub_6528D0()
{
  ShapeButtonClass::Init(dword_B04978); /*0x6528d5*/
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
    ShapeButtonClass::Destructor((int)dword_B04978); /*0x652909*/
  }
}
} // namespace gamemd

// 0x652920
namespace gamemd {
int sub_652920()
{
  ShapeButtonClass::Init(dword_B04910); /*0x652925*/
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
    ShapeButtonClass::Destructor((int)dword_B04910); /*0x652959*/
  }
}
} // namespace gamemd

// 0x652CD0
namespace gamemd {
void E4Recv_652CD0::sub_652CD0()
{
  *(this + 1323) = 4; /*0x652cd0*/
  *(this + 1343) = 25; /*0x652cda*/
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
  __int64 result; // rax

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
  __int64 result; // rax

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
  *(this + 9) = 0; /*0x659560*/
}
} // namespace gamemd

// 0x659570
namespace gamemd {
char E4Recv_659570::sub_659570()
{
  return *(this + 9); /*0x659573*/
}
} // namespace gamemd

// 0x6599C0
namespace gamemd {
void E4Recv_6599C0::sub_6599C0()
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = this->nextObject - this->objectTypeFlags; /*0x6599d8*/
  v3 = this->attachedBomb - this->fallRate; /*0x6599dd*/
  v4 = *(_DWORD *)(this + 52) - *(_DWORD *)(this + 40); /*0x6599e2*/
  *(_DWORD *)(this + 92) = v2; /*0x6599e6*/
  this->q060 = v4; /*0x6599e8*/
  this->customSound = v3; /*0x6599eb*/
  *(double *)(&this->owningHouseIndex4) = Math::Sqrt((double)(this->customSound * this->customSound /*0x659a19*/
                                              + this->q060 * this->q060
                                              + this->q05C * this->q05C));
}
} // namespace gamemd

// 0x659A30
namespace gamemd {
short E4Recv_659A30::sub_659A30()
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  double v6; // st7
  __int16 *v7; // edx
  int v8; // esi
  __int16 result; // ax
  char v10; // cl

  v2 = Math::RoundToInt(*(double *)(&this->owningHouseIndex4) / *(double *)(&this->vtable34)); /*0x659a3c*/
  v3 = this->q05C; /*0x659a41*/
  v4 = this->q060; /*0x659a44*/
  v5 = this->customSound; /*0x659a47*/
  *(_DWORD *)(this + 140) = v2; /*0x659a4e*/
  if ( v2 ) /*0x659a54*/
  {
    v3 /= v2; /*0x659a5b*/
    v4 /= v2; /*0x659a62*/
    v5 /= v2; /*0x659a69*/
  }
  v6 = (double)this->visibilityFlags / (double)this->ambientSoundController; /*0x659a6e*/
  this->isAliveFlag = v3; /*0x659a80*/
  this->lastLayer = v4; /*0x659a83*/
  this->isInLogic = v5; /*0x659a86*/
  this->location = this->objectTypeFlags; /*0x659a8b*/
  this->q0A0 = this->owningHouseIndex; /*0x659a90*/
  this->q0A4 = this->fallRate; /*0x659a96*/
  v7 = (__int16 *)(&this->vtable42); /*0x659a99*/
  v8 = &this->q300; /*0x659a9c*/
  result = *v7; /*0x659aa2*/
  v10 = *((_BYTE *)v7 + 2); /*0x659aa5*/
  *(double *)(v8 - 64) = v6 * *(double *)(v8 - 128); /*0x659aab*/
  *(_WORD *)v8 = result; /*0x659aae*/
  this->v10 = v10; /*0x659ab1*/
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
  __int64 result; // rax

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
  __int64 result; // rax

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
  __int64 result; // rax

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
  __int64 result; // rax

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
  *this = a2; /*0x65c89a*/
  *(this + 1) = a3; /*0x65c89c*/
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
  __int64 result; // rax

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
  __int64 result; // rax

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
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  unsigned int TransitionCount; // eax
  int v11; // edi
  int v12; // edx
  char v13; // al
  int v15; // [esp+24h] [ebp-18h]
  int v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+2Ch] [ebp-10h] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-Ch] BYREF

  v7 = *((_DWORD *)g_AircraftTypeCount + a2); /*0x65eabc*/
  v16 = v7; /*0x65eac7*/
  v15 = 0; /*0x65eacb*/
  if ( aP2 > 0 ) /*0x65ead3*/
  {
    while ( 1 ) /*0x65eaeb*/
    {
      ++g_IKnowWhatImDoing; /*0x65eaeb*/
      v8 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v7 + 140))(v7, a0); /*0x65eaf3*/
      v9 = v8; /*0x65eaff*/
      --g_IKnowWhatImDoing; /*0x65eb04*/
      if ( !v8 ) /*0x65eb0a*/
        break; /*0x65eb0a*/
      *(_BYTE *)(v8 + 980) = 1; /*0x65eb10*/
      TransitionCount = a0[120]; /*0x65eb17*/
      if ( TransitionCount >= 4 ) /*0x65eb1f*/
        TransitionCount = HouseClass::GetTransitionCount(a0); /*0x65eb28*/
      v11 = *CellClass::FindOpenNeighbor( /*0x65eb4d*/
               (int *)&MapClass_Instance,
               &v17,
               TransitionCount,
               (int)&dword_B04C38,
               (int)&dword_B04C38,
               4,
               1,
               0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, a4, 0); /*0x65eb5e*/
      if ( a6 ) /*0x65eb66*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 1152))(v9, a6, 1); /*0x65eb6f*/
      if ( a5 ) /*0x65eb7b*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 968))(v9, a5); /*0x65eb82*/
      v18[0] = ((__int16)v11 << 8) + 128; /*0x65eba4*/
      ++g_IKnowWhatImDoing; /*0x65ebae*/
      v12 = *(_DWORD *)v9; /*0x65ebb4*/
      v18[1] = (IDA_SHIWORD(v11) << 8) + 128; /*0x65ebba*/
      v18[2] = 0; /*0x65ebc1*/
      v13 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v12 + 216))(v9, v18, 0); /*0x65ebc9*/
      --g_IKnowWhatImDoing; /*0x65ebdd*/
      if ( !v13 ) /*0x65ebe3*/
      {
        if ( v9 ) /*0x65ec14*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x65ec1c*/
        return v15 - 1; /*0x65ec26*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 492))(v9); /*0x65ebe9*/
      if ( ++v15 >= aP2 ) /*0x65ebfe*/
        return v15; /*0x65ebfe*/
      v7 = v16; /*0x65eadf*/
    }
  }
  return v15; /*0x65ec08*/
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
  __int64 result; // rax

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
  __int64 result; // rax

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
        *(_DWORD *)GetWindowLongA(hDlg, 8) = 1059; /*0x65f789*/
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
  __int64 result; // rax

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
  __int64 result; // rax

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
  g_TriggerPool = 0; /*0x65f9b7*/
  dword_B04DB0 = 0; /*0x65f9bc*/
  byte_B04DB4 = 1; /*0x65f9c1*/
  byte_B04DB5 = 0; /*0x65f9c8*/
  dword_B04DA8 = (int)&off_7F0AAC; /*0x65f9cd*/
  dword_B04DBC = 10; /*0x65f9d7*/
  g_TriggerEventState = 0; /*0x65f9e1*/
  return atexit(sub_65F9F0); /*0x65f9ec*/
}
} // namespace gamemd

// 0x65F9F0
namespace gamemd {
void sub_65F9F0()
{
  if ( (byte_B04D28 & 1) == 0 ) /*0x65f9fa*/
  {
    dword_B04DA8 = (int)&VectorClass_RadarEventClass___vftable; /*0x65f9fe*/
    byte_B04D28 |= 1u; /*0x65fa11*/
    if ( g_TriggerPool ) /*0x65fa17*/
    {
      if ( byte_B04DB5 ) /*0x65fa21*/
      {
        RA2_OPDEL(g_TriggerPool); /*0x65fa24*/
        g_TriggerPool = 0; /*0x65fa2c*/
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
  FogOfWar::RevealCell((int)&MapClass_Instance, this); /*0x65fb66*/
}
} // namespace gamemd

// 0x65FB70
namespace gamemd {
char sub_65FB70(int a1)
{
  return byte_7F09A4[16 * a1]; /*0x65fb79*/
}
} // namespace gamemd
