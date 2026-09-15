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

// 0x650A90
namespace gamemd {
int Trigger_AllocateLog(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Trigger_AllocateLog(int a1)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  int i; // esi
  int v7; // ecx
  char *v8; // eax
  char v9; // dl
  int v10; // ebp
  int v11; // ebx
  int *v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // esi
  int v16; // edi
  int v17; // ecx
  int v18; // edx
  char v19; // al
  __int16 *v20; // ebp
  int v21; // ebx
  void *v22; // eax
  char *Name; // eax
  __int16 *v24; // edi
  int v25; // ebx
  void *v26; // eax
  char *v27; // eax
  int v28; // edi
  int v29; // ecx
  int v30; // edx
  __int16 *v31; // ebp
  int v32; // ebx
  void *v33; // eax
  char *v34; // eax
  __int16 *v35; // edi
  int v36; // ebx
  void *v37; // eax
  char *v38; // eax
  bool v39; // cc
  int v40; // edi
  int v41; // ecx
  int v42; // edx
  char v43; // al
  __int16 *v44; // ebp
  int v45; // ebx
  void *v46; // eax
  char *v47; // eax
  __int16 *v48; // edi
  int v49; // ebx
  void *v50; // eax
  char *v51; // eax
  int v52; // ebx
  int v53; // edi
  int v54; // ecx
  int v55; // edx
  int v56; // ebp
  char v57; // al
  __int16 *v58; // edi
  void *v59; // eax
  char *v60; // eax
  int *v61; // ebx
  _DWORD *v62; // eax
  int v63; // ebp
  _DWORD *v64; // edi
  int v65; // ecx
  int v66; // edx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // ebp
  int v71; // ebx
  _DWORD *v72; // edi
  int v73; // ecx
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // [esp+18h] [ebp-20h]
  int v79; // [esp+18h] [ebp-20h]
  int v80; // [esp+1Ch] [ebp-1Ch]
  int v81; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v82; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v83; // [esp+20h] [ebp-18h]
  int v84; // [esp+24h] [ebp-14h] BYREF
  _DWORD v85[3]; // [esp+28h] [ebp-10h] BYREF
  int v86; // [esp+34h] [ebp-4h]

  if ( byte_B04880 )
  {
    v3 = 828 * a1 + 11298400;
    v83 = (_DWORD *)v3;
    *(_DWORD *)v3 = *(_DWORD *)MEMORY[0xAC51FC];
    MEMORY[0xAC6664][207 * a1] = Random::State((_DWORD *)MEMORY[0xA8B230] + 134);
    MEMORY[0xAC6664][207 * a1 + 1] = MEMORY[0xA8ED84];
    v4 = 0;
    v5 = 828 * a1 + 11298412;
    do
    {
      *(_DWORD *)(v5 + 56) = -1;
      if ( v4 < HouseClass_Count )
      {
        *(_BYTE *)v5 = 0;
        for ( i = 0; i < MEMORY[0xA8DA84]; ++i )
        {
          v7 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i);
          if ( *(_DWORD *)(v7 + 111) == v4 )
          {
            v8 = ToWideStringChar((char *)v7);
            strncpy((char *)v5, v8, 0x14u);
          }
        }
        if ( !*(_BYTE *)v5
          && (!_strcmpi((const void *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36), g_INI_Key_Neutral)
           || !_strcmpi((const void *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36), MEMORY[0x817318])) )
        {
          strcpy((char *)v5, (const char *)(*(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 52) + 36));
          v3 = (int)v83;
        }
        v9 = *(_BYTE *)(*((_DWORD *)HouseClass_Array + v4) + 492);
        *(_BYTE *)(v5 + 52) = 0;
        *(_BYTE *)(v5 + 20) = v9;
        strncpy(
          (char *)(v5 + 21),
          *(const char **)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(*((_DWORD *)HouseClass_Array + v4) + 90196)) + 772),
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
    v10 = MEMORY[0x87F788];
    v11 = MEMORY[0xA8EB50] + MEMORY[0xA8E3A0] + MEMORY[0xA83DF8] + MEMORY[0x8B4118];
    v12 = MEMORY[0x8A0370];
    do
    {
      v13 = *v12;
      v12 += 6;
      v10 += v13;
    }
    while ( (int)v12 < (int)&MEMORY[0x8A03E8] );
    if ( !*(_DWORD *)(v3 + 820) )
      *(_DWORD *)(v3 + 820) = __2_YAPAXI_Z(*(_DWORD *)(v3 + 824));
    v14 = 40 * v10 + 104 * v11;
    if ( (unsigned int)(v14 + 1024) > *(_DWORD *)(v3 + 824) )
    {
      __3_YAXPAX_Z(*(void **)(v3 + 820));
      *(_DWORD *)(v3 + 824) = (v14 + 0xFFFF) & 0xFFFF0000;
      Debug::Log();
      *(_DWORD *)(v3 + 820) = __2_YAPAXI_Z(*(_DWORD *)(v3 + 824));
    }
    v15 = *(_DWORD *)(v3 + 820);
    v78 = 0;
    *(_DWORD *)(v3 + 768) = v15;
    for ( *(_DWORD *)(v3 + 752) = MEMORY[0xA83DF8]; v78 < MEMORY[0xA83DF8]; ++v78 )
    {
      v16 = *((_DWORD *)MEMORY[0xA83DEC] + v78);
      v17 = *(_DWORD *)(v16 + 156);
      v18 = *(_DWORD *)(v16 + 160);
      v86 = *(_DWORD *)(v16 + 164);
      *(_DWORD *)v15 = v17 / 10 + ((v18 / 10) << 16);
      *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v16 + 904), &v84) >> 7) + 1) >> 1;
      *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 388))(v16);
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v16 + 1728) + 3576);
      *(_BYTE *)(v15 + 103) = Math::RoundToInt(*(double *)(v16 + 1400) * 256.0);
      v19 = *(_BYTE *)(*(_DWORD *)(v16 + 540) + 48);
      *(_BYTE *)(v15 + 31) = 0;
      *(_BYTE *)(v15 + 32) = v19;
      strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v16 + 1728) + 36), 0x17u);
      v20 = *(__int16 **)(v16 + 1444);
      v21 = 0;
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
        v22 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v20 + 44))(v20);
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
      v25 = 0;
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
        v26 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v24 + 44))(v24);
        v27 = AbstractType::FindName(v26);
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
    v80 = 0;
    v83[189] = MEMORY[0x8B4118];
    if ( MEMORY[0x8B4118] > 0 )
    {
      do
      {
        v28 = *((_DWORD *)MEMORY[0x8B410C] + v80);
        v29 = *(_DWORD *)(v28 + 156);
        v30 = *(_DWORD *)(v28 + 160);
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
        v32 = 0;
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
          v33 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v31 + 44))(v31);
          v34 = AbstractType::FindName(v33);
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
        v36 = 0;
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
          v37 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v35 + 44))(v35);
          v38 = AbstractType::FindName(v37);
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
        v39 = v80 + 1 < MEMORY[0x8B4118];
        ++v78;
        ++v80;
      }
      while ( v39 );
    }
    v81 = 0;
    v83[190] = MEMORY[0xA8E3A0];
    if ( MEMORY[0xA8E3A0] > 0 )
    {
      do
      {
        v40 = *((_DWORD *)MEMORY[0xA8E394] + v81);
        v41 = *(_DWORD *)(v40 + 156);
        v42 = *(_DWORD *)(v40 + 160);
        v86 = *(_DWORD *)(v40 + 164);
        *(_DWORD *)v15 = v41 / 10 + ((v42 / 10) << 16);
        *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v40 + 904), v85) >> 7) + 1) >> 1;
        *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v40 + 388))(v40);
        *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v40 + 1732) + 3576);
        *(_BYTE *)(v15 + 103) = Math::RoundToInt(*(double *)(v40 + 1400) * 256.0);
        v43 = *(_BYTE *)(*(_DWORD *)(v40 + 540) + 48);
        *(_BYTE *)(v15 + 31) = 0;
        *(_BYTE *)(v15 + 32) = v43;
        strncpy((char *)(v15 + 8), (const char *)(*(_DWORD *)(v40 + 1732) + 36), 0x17u);
        v44 = *(__int16 **)(v40 + 1444);
        v45 = 0;
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
          v46 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v44 + 44))(v44);
          v47 = AbstractType::FindName(v46);
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
        v49 = 0;
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
          v50 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v48 + 44))(v48);
          v51 = AbstractType::FindName(v50);
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
        v39 = v81 + 1 < MEMORY[0xA8E3A0];
        ++v78;
        ++v81;
      }
      while ( v39 );
    }
    v52 = 0;
    for ( v83[191] = MEMORY[0xA8EB50]; v52 < MEMORY[0xA8EB50]; ++v78 )
    {
      v53 = *((_DWORD *)MEMORY[0xA8EB44] + v52);
      v54 = *(_DWORD *)(v53 + 156);
      v55 = *(_DWORD *)(v53 + 160);
      v86 = *(_DWORD *)(v53 + 164);
      *(_DWORD *)v15 = v54 / 10 + ((v55 / 10) << 16);
      *(_BYTE *)(v15 + 100) = (unsigned int)((*ProgressTimer::GetValue((_WORD *)(v53 + 904), v85) >> 7) + 1) >> 1;
      *(_BYTE *)(v15 + 102) = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 388))(v53);
      v56 = 0;
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(*(_DWORD *)(v53 + 1312) + 3576);
      v57 = *(_BYTE *)(*(_DWORD *)(v53 + 540) + 48);
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
        v59 = (void *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v58 + 44))(v58);
        v60 = AbstractType::FindName(v59);
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
    v61 = MEMORY[0x8A0370];
    v83[187] = v78;
    v62 = v83 + 193;
    v82 = v83 + 193;
    do
    {
      v62[5] = v15;
      v63 = 0;
      v79 = 0;
      if ( *v61 > 0 )
      {
        do
        {
          v64 = *(_DWORD **)(*(v61 - 3) + 4 * v63);
          if ( (*(int (__thiscall **)(_DWORD *))(*v64 + 44))(v64) != 4
            || (*(int (__stdcall **)(_DWORD *))(v64[1] + 16))(v64 + 1) != -2 )
          {
            v65 = v64[39];
            v66 = v64[40];
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
              v67 = (*(int (__thiscall **)(_DWORD *))(*v64 + 136))(v64);
              *(_DWORD *)(v15 + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v67 + 64))(v67);
              *(_BYTE *)(v15 + 31) = 0;
              v68 = (*(int (__thiscall **)(_DWORD *))(*v64 + 136))(v64);
              strncpy((char *)(v15 + 8), (const char *)(v68 + 36), 0x17u);
            }
            v69 = (*(int (__thiscall **)(_DWORD *))(*v64 + 60))(v64);
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
    while ( (int)v61 < (int)&MEMORY[0x8A03E8] );
    v70 = 0;
    v71 = 0;
    v83[204] = v15;
    for ( result = MEMORY[0x87F788]; v71 < MEMORY[0x87F788]; ++v71 )
    {
      v72 = (_DWORD *)*((_DWORD *)MEMORY[0x87F77C] + v71);
      if ( (*(int (__thiscall **)(_DWORD *))(*v72 + 44))(v72) != 4
        || (*(int (__stdcall **)(_DWORD *))(v72[1] + 16))(v72 + 1) != -2 )
      {
        v73 = v72[39];
        v74 = v72[40];
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
          v75 = (*(int (__thiscall **)(_DWORD *))(*v72 + 136))(v72);
          *(_DWORD *)(v15 + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 64))(v75);
          *(_BYTE *)(v15 + 31) = 0;
          v76 = (*(int (__thiscall **)(_DWORD *))(*v72 + 136))(v72);
          strncpy((char *)(v15 + 8), (const char *)(v76 + 36), 0x17u);
        }
        v77 = (*(int (__thiscall **)(_DWORD *))(*v72 + 60))(v72);
        if ( v77 )
          *(_BYTE *)(v15 + 32) = *(_BYTE *)(v77 + 48);
        else
          *(_BYTE *)(v15 + 32) = -1;
        v15 += 40;
        ++v70;
      }
      result = MEMORY[0x87F788];
    }
    v83[203] = v70;
  }
  else
  {
    result = Random::State((_DWORD *)MEMORY[0xA8B230] + 134);
    dword_AFA26C = result;
  }
  return result;
}
}
} // namespace gamemd

// 0x652630
namespace gamemd {
int sub_652630(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_652630(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x652640*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x653FA0
namespace gamemd {
int RenderScoreboardSidebar()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall RenderScoreboardSidebar@<al>(_DWORD *a1@<ecx>, CampaignScore *a2@<ebp>, CampaignScore *a3@<ebx>)
{
  int v3; // eax
  int v5; // esi
  ConvertClass *v6; // eax
  int v7; // esi
  int BuildingAnimByName; // eax
  wchar_t *StringCSF; // eax
  int v10; // eax
  int v11; // ecx
  wchar_t *v12; // eax
  wchar_t *v13; // esi
  int v14; // edx
  int v15; // eax
  wchar_t *v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // ebp
  _DWORD *v21; // eax
  const wchar_t *v22; // ecx
  wchar_t *v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  IUnknown *v27; // [esp+0h] [ebp-C8h]
  IUnknown *v28; // [esp+0h] [ebp-C8h]
  int v29; // [esp+0h] [ebp-C8h]
  _DWORD *v30; // [esp+4h] [ebp-C4h]
  _DWORD *v31; // [esp+4h] [ebp-C4h]
  ObjectClass *v32; // [esp+4h] [ebp-C4h]
  int v33; // [esp+8h] [ebp-C0h]
  int v34; // [esp+8h] [ebp-C0h]
  ObjectClass *v35; // [esp+Ch] [ebp-BCh]
  ObjectClass *v36; // [esp+Ch] [ebp-BCh]
  int v37; // [esp+Ch] [ebp-BCh]
  int v38; // [esp+10h] [ebp-B8h]
  int v40; // [esp+10h] [ebp-B8h]
  ConvertClass *v41; // [esp+14h] [ebp-B4h]
  CampaignScore *v42; // [esp+14h] [ebp-B4h]
  ConvertClass *v43; // [esp+18h] [ebp-B0h]
  int varA8; // [esp+20h] [ebp-A8h] BYREF
  wchar_t *v45; // [esp+24h] [ebp-A4h] BYREF
  int v46; // [esp+28h] [ebp-A0h] BYREF
  wchar_t *v44; // [esp+2Ch] [ebp-9Ch]
  int a0; // [esp+30h] [ebp-98h] BYREF
  int v49; // [esp+34h] [ebp-94h] BYREF
  _DWORD v50[2]; // [esp+38h] [ebp-90h] BYREF
  int v51; // [esp+40h] [ebp-88h] BYREF
  char v52[16]; // [esp+44h] [ebp-84h] BYREF
  int v53; // [esp+54h] [ebp-74h] BYREF
  wchar_t Buffer[18]; // [esp+58h] [ebp-70h] BYREF
  wchar_t v55[24]; // [esp+7Ch] [ebp-4Ch] BYREF
  char v56[12]; // [esp+ACh] [ebp-1Ch] BYREF
  char v57[16]; // [esp+B8h] [ebp-10h] BYREF

  LOBYTE(v3) = stru_87C374.__pad_579C[12413]; /*0x653fa0*/
  if ( stru_87C374.__pad_579C[12413] )
  {
    v5 = VtableStub::72F510(); /*0x653fbc*/
    varA8 = a1[1145]; /*0x653fd4*/
    v45 = (wchar_t *)a1[1147]; /*0x653fe6*/
    v6 = (ConvertClass *)(*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 120))( /*0x653ff1*/
                           *(_DWORD *)&stru_87C374.__pad_579C[22512],
                           &v51,
                           0);
    DrawToSurfaceSHP( /*0x65400b*/
      *(int *)&stru_87C374.__pad_579C[22512],
      v5,
      *(ConvertClass **)&stru_B048F8.__pad_6[314],
      0x20u,
      (ConvertClass *)&v45,
      v6,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0,
      v43);
    v7 = a1[1149] + 2; /*0x65401c*/
    v45 = (wchar_t *)a1[1148]; /*0x65401f*/
    v46 = v7; /*0x654031*/
    BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x654035*/
    v30 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, wchar_t **, int, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22512] /*0x654056*/
                                                                                        + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22512],
                      v52,
                      &v45,
                      BuildingAnimByName,
                      0,
                      25);
    v27 = *(IUnknown **)&stru_87C374.__pad_579C[22512]; /*0x654057*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[13756], 0, &stru_830620.__pad_579C[13772], 1268); /*0x654069*/
    TextRenderer::DrawText(&a0, (size_t)StringCSF, v27, v30, v33, v35, v38, (int)v41); /*0x654074*/
    v10 = a1[1150]; /*0x654079*/
    v11 = a1[1148]; /*0x65407f*/
    v45 = (wchar_t *)v7; /*0x654088*/
    varA8 = v10 + v11 - 2; /*0x654095*/
    v36 = (ObjectClass *)FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x6540b0*/
    v31 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 120))( /*0x6540c6*/
                      *(_DWORD *)&stru_87C374.__pad_579C[22512],
                      &v51);
    v28 = *(IUnknown **)&stru_87C374.__pad_579C[22512]; /*0x6540c7*/
    v12 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[13740], 0, &stru_830620.__pad_579C[13772], 1270); /*0x6540d9*/
    TextRenderer::DrawText(&a0, (size_t)v12, v28, v31, (int)&varA8, v36, 0, 537); /*0x6540e4*/
    v13 = (wchar_t *)(v7 + 7); /*0x6540f1*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7848] + 4) == 1
        ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7848] + 372) + 14)
        : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7848] + 372) + 28);
    v15 = a1[1148]; /*0x654113*/
    varA8 = v15 + a1[1150] - 1; /*0x654129*/
    v45 = v13; /*0x654133*/
    v46 = v15; /*0x654137*/
    v44 = v13; /*0x65413b*/
    (*(void (__thiscall **)(_DWORD, int *, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 48))( /*0x654146*/
      *(_DWORD *)&stru_87C374.__pad_579C[22512],
      &v46,
      &varA8,
      v14);
    v16 = v13 + 2; /*0x65414f*/
    v3 = 0; /*0x654152*/
    varA8 = 0; /*0x654156*/
    if ( (int)HouseClass_Count > 0 ) /*0x65415a*/
    {
      v42 = a3; /*0x654160*/
      do /*0x654308*/
      {
        v46 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v3]; /*0x65416d*/
        v17 = v46; /*0x654168*/
        if ( v46 && *(_BYTE *)(*(_DWORD *)(v46 + 52) + 421) ) /*0x65417a*/
        {
          if ( *(_BYTE *)(v46 + 501) ) /*0x654188*/
          {
            v18 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x6541a2*/
            v17 = v46; /*0x6541a7*/
            v19 = v18; /*0x6541ab*/
            v20 = 25; /*0x6541ad*/
          }
          else
          {
            v20 = 16409; /*0x6541ba*/
            v19 = *(_DWORD *)(stru_B05488.field_4C + 4 * *(_DWORD *)(v46 + 90196)); /*0x6541bf*/
          }
          Buffer[0] = 0; /*0x6541d3*/
          swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)(v17 + 90154), a2); /*0x6541da*/
          if ( !wcslen(Buffer) ) /*0x6541e4*/
            wcscpy(Buffer, (const wchar_t *)&stru_830620.__pad_579C[13720]); /*0x6541fa*/
          if ( wcslen(Buffer) > 0x12 ) /*0x654212*/
            wcscpy(v55, L"."); /*0x654214*/
          v50[0] = a1[1148]; /*0x654229*/
          v50[1] = v16; /*0x65423b*/
          v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, _DWORD *))(**(_DWORD **)&stru_87C374.__pad_579C[22512] /*0x654249*/
                                                                          + 120))(
                            *(_DWORD *)&stru_87C374.__pad_579C[22512],
                            v57,
                            v50);
          TextRenderer::DrawText( /*0x65425d*/
            &v53,
            (size_t)&Buffer[2],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            v21,
            v19,
            0,
            v20,
            v40);
          v22 = 0; /*0x654269*/
          v23 = v44 + 10738; /*0x65426b*/
          v44 = (wchar_t *)20; /*0x654270*/
          do /*0x65428b*/
          {
            v24 = *(_DWORD *)v23 + *((_DWORD *)v23 + 21); /*0x65427b*/
            v23 += 2; /*0x65427d*/
            v22 = (const wchar_t *)((char *)v22 + v24); /*0x654280*/
            v44 = (wchar_t *)((char *)v44 - 1); /*0x654287*/
          }
          while ( v44 ); /*0x65428b*/
          swprintf(&Buffer[2], (const size_t)&stru_830620.__pad_579C[13712], v22, v42); /*0x654298*/
          a2 = (CampaignScore *)(v20 | 0x200); /*0x6542ba*/
          v49 = a1[1150] + a1[1148] - 2; /*0x6542c5*/
          v50[0] = v16; /*0x6542c9*/
          v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, int *, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] /*0x6542d7*/
                                                                                    + 120))(
                            *(_DWORD *)&stru_87C374.__pad_579C[22512],
                            v56,
                            &v49,
                            v19,
                            0);
          TextRenderer::DrawText( /*0x6542ec*/
            &v51,
            (size_t)Buffer,
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            v25,
            v29,
            v32,
            v34,
            v37);
          v3 = varA8; /*0x6542f1*/
          v16 = (wchar_t *)((char *)v16 + 9); /*0x6542f8*/
        }
        varA8 = ++v3; /*0x654304*/
      }
      while ( v3 < (int)HouseClass_Count ); /*0x654308*/
    }
  }
  return v3; /*0x654310*/
}
}
} // namespace gamemd

// 0x655050
namespace gamemd {
unsigned int * E4Recv_655050::sub_655050(unsigned int * a2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_655050(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi

  v3 = *a3; /*0x655063*/
  v4 = a3[1]; /*0x655066*/
  v5 = v3 + *(this + 1316) - v4; /*0x65506e*/
  v6 = v3 + v4 - *(this + 1318); /*0x655075*/
  v7 = 2; /*0x655077*/
  if ( v5 == -1 ) /*0x65507c*/
  {
    v5 = 0; /*0x65507e*/
LABEL_4:
    v7 = 1; /*0x655090*/
    goto LABEL_5; /*0x655090*/
  }
  if ( v5 == 2 * *(this + 65) - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
LABEL_5:
  *a2 = v5; /*0x655095*/
  a2[1] = v6; /*0x6550a2*/
  a2[2] = v7; /*0x6550a6*/
  a2[3] = 1; /*0x6550aa*/
  return a2; /*0x6550a5*/
}
}
} // namespace gamemd

// 0x655890
namespace gamemd {
int E4Recv_655890::sub_655890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_655890(_DWORD *this)
{
  return *this + 251 * *(this + 1); /*0x6558a3*/
}
}
} // namespace gamemd

// 0x658640
namespace gamemd {
LRESULT DrawPowerBarForPlayers(HWND hDlg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __stdcall DrawPowerBarForPlayers(HWND hDlg)
{
  int v1; // edi
  int v2; // esi
  int v3; // edi
  #375 *v4; // esi
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
      v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v2]; /*0x658668*/
      if ( v3 ) /*0x65866d*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v2]) ) /*0x658671*/
        {
          v6 = v2; /*0x65867a*/
LABEL_6:
          TabClass::DrawPower(hDlg, (void *)v2, (#375 *)v3); /*0x65868d*/
          goto LABEL_7; /*0x658692*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) ) /*0x658683*/
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
  v4 = *(#375 **)HouseClass_Array->__pad_0; /*0x6586a4*/
  TabClass::DrawPower(hDlg, 0, *(#375 **)&HouseClass_Array->__pad_0[4 * v1]); /*0x6586b4*/
  return TabClass::DrawPower(hDlg, (void *)v1, v4); /*0x6586c3*/
}
}
} // namespace gamemd

// 0x6586D0
namespace gamemd {
int sub_6586D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6586D0()
{
  HWND Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (HWND)CreateDialog(0x73u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Diplomacy::DlgProc, 0); /*0x6586e9*/
  MEMORY[0xA8ED9C] = 1; /*0x6586eb*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6586f2*/
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
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x658740*/
  MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x658758*/
  return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x658763*/
}
}
} // namespace gamemd

// 0x6591B0
namespace gamemd {
void UpdateProjectileTrails()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void UpdateProjectileTrails()
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

  v0 = MEMORY[0xB04A70] - 1; /*0x6591c3*/
  v1 = 0; /*0x6591c6*/
  v2 = 0; /*0x6591c8*/
  Block = 0; /*0x6591cd*/
  LODWORD(v19) = 0; /*0x6591d1*/
  if ( MEMORY[0xB04A70] - 1 >= 0 ) /*0x6591d5*/
  {
    v3 = MEMORY[0xB04A70]; /*0x6591dc*/
    v4 = (char *)MEMORY[0xB04A64] + 4 * v0; /*0x6591df*/
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
    LODWORD(v19) = v2; /*0x6591f7*/
    Block = v1; /*0x6591fb*/
  }
  v5 = (double)(unsigned int)dword_ABCD44 /*0x65921d*/
     / (double)(int)MEMORY[0xA8B558]
     * ((double)(unsigned int)dword_ABCD44
      / (double)(int)MEMORY[0xA8B558]
      * ((double)(unsigned int)dword_ABCD44
       / (double)(int)MEMORY[0xA8B558]));
  v6 = (double)SLODWORD(v19); /*0x65921f*/
  v20 = (double)(int)Block; /*0x659227*/
  v19 = v6 / v20 - v5; /*0x659233*/
  v7 = 0.0; /*0x659237*/
  if ( v19 > 0.0 ) /*0x65924c*/
    v7 = v20 * v19; /*0x659254*/
  v8 = MEMORY[0xB04A70] - 1; /*0x65925a*/
  v21 = v7 / v6; /*0x65925e*/
  v20 = 1.0 / v5; /*0x65926c*/
  if ( v0 >= 0 )
  {
    while ( 1 ) /*0x659282*/
    {
      v9 = (void *)*((_DWORD *)MEMORY[0xB04A64] + v8); /*0x659282*/
      Block = v9; /*0x659285*/
      v10 = *((_DWORD *)v9 + 4); /*0x659289*/
      if ( v10 == 1 ) /*0x65928f*/
        break; /*0x65928f*/
      if ( v10 == 2 ) /*0x6592d0*/
      {
        if ( *((_BYTE *)v9 + 9) ) /*0x6592d6*/
        {
          v13 = Random::Range(MEMORY[0x886B88], 0, 99); /*0x6592e8*/
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
    LODWORD(v19) = v11; /*0x6592a3*/
    if ( v11 >= 10 ) /*0x6592a7*/
    {
      if ( v11 > 100 ) /*0x6592b5*/
        LODWORD(v19) = 100; /*0x6592b7*/
    }
    else
    {
      LODWORD(v19) = 10; /*0x6592a9*/
    }
    *((double *)v9 + 3) = (double)SLODWORD(v19); /*0x6592bf*/
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
      v17 = (*(int (__thiscall **)(int *, void **))(MEMORY[0xB04A60] + 16))(&MEMORY[0xB04A60], &Block); /*0x659393*/
      if ( v17 != -1 && v17 < MEMORY[0xB04A70] && v17 < --MEMORY[0xB04A70] ) /*0x6593ae*/
      {
        do /*0x6593c6*/
        {
          ++v17; /*0x6593b6*/
          *((_DWORD *)MEMORY[0xB04A64] + v17 - 1) = *((_DWORD *)MEMORY[0xB04A64] + v17); /*0x6593ba*/
        }
        while ( v17 < MEMORY[0xB04A70] ); /*0x6593c6*/
      }
      __3_YAXPAX_Z(Block); /*0x6593cd*/
    }
    goto LABEL_36; /*0x6593cd*/
  }
}
}
} // namespace gamemd

// 0x659590
namespace gamemd {
char E4Recv_659590::sub_659590(unsigned int * a2, unsigned int * a3, short a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_659590(_DWORD *this, _DWORD *a2, _DWORD *a3, __int16 a4)
{
  char result; // al
  int v6; // esi
  int v7; // eax
  int v8[2]; // [esp+Ch] [ebp-20h] BYREF
  int v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  Coord::To_Screen(MEMORY[0x887324], a2, v9); /*0x6595a8*/
  Coord::To_Screen(MEMORY[0x887324], a3, v8); /*0x6595bd*/
  v10[0] = MEMORY[0x886FA0]; /*0x6595d3*/
  v10[1] = MEMORY[0x886FA4]; /*0x6595dd*/
  v10[2] = MEMORY[0x886FA8]; /*0x6595e5*/
  v10[3] = MEMORY[0x886FAC]; /*0x6595e9*/
  result = ClipLine(v9, v8, v10); /*0x6595f6*/
  if ( result ) /*0x6595fd*/
  {
    v6 = *(this + 3) - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
    v7 = ZCoordToScreenY(a3[2]); /*0x659612*/
    return (*(int (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887314] + 52))( /*0x65963f*/
             MEMORY[0x887314],
             &MEMORY[0x886FA0],
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
} // namespace gamemd

// 0x65B160
namespace gamemd {
int sub_65B160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_65B160()
{
  dword_B04BD4 = 0; /*0x65b167*/
  dword_B04BD8 = 0; /*0x65b16c*/
  byte_B04BDC = 1; /*0x65b171*/
  byte_B04BDD = 0; /*0x65b178*/
  RadSiteClass_Array = (int)&vt_DynamicVectorClass_RadSiteClass; /*0x65b17d*/
  dword_B04BE4 = 10; /*0x65b187*/
  dword_B04BE0 = 0; /*0x65b191*/
  return atexit(sub_65B1A0); /*0x65b19c*/
}
}
} // namespace gamemd

// 0x65B1A0
namespace gamemd {
void sub_65B1A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_65B1A0()
{
  RadSiteClass_Array = (int)&vt_VectorClass_RadSiteClass; /*0x65b1a8*/
  if ( dword_B04BD4 && byte_B04BDD ) /*0x65b1bc*/
  {
    __3_YAXPAX_Z(dword_B04BD4); /*0x65b1bf*/
    dword_B04BD4 = 0; /*0x65b1c7*/
  }
  byte_B04BDD = 0; /*0x65b1cd*/
  dword_B04BD8 = 0; /*0x65b1d3*/
}
}
} // namespace gamemd

// 0x65C300
namespace gamemd {
int RAMFileClass::nullsub_0_1()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall nullsub_0_1(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->field_10 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/
}
}
} // namespace gamemd

// 0x65C350
namespace gamemd {
int RAMFileClass::nullsub_0_2(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall nullsub_0_2(RAMFileClass *this, int a2)
{
  if ( !this->field_8 || (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c35c*/
    return 0; /*0x65c391*/
  *((_DWORD *)this + 5) = 0; /*0x65c367*/
  *((_DWORD *)this + 6) = a2; /*0x65c36e*/
  *((_BYTE *)this + 28) = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->field_10 = 0; /*0x65c37a*/
  return (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x65c38d*/
}
}
} // namespace gamemd

// 0x65C3A0
namespace gamemd {
size_t RAMFileClass::nullsub_0_3(void * a1, signed int Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
size_t __thiscall nullsub_0_3(RAMFileClass *this, void *a1, signed int Size)
{
  size_t v4; // edi
  char v5; // bl
  int v6; // eax

  if ( !this->field_8 ) /*0x65c3a6*/
    return 0; /*0x65c3a6*/
  if ( !a1 ) /*0x65c3b3*/
    return 0; /*0x65c3b3*/
  v4 = Size; /*0x65c3b5*/
  if ( !Size ) /*0x65c3bb*/
    return 0; /*0x65c3bb*/
  v5 = 0; /*0x65c3bf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c3c1*/
  {
    if ( (*((_BYTE *)this + 24) & 1) != 0 ) /*0x65c3d9*/
      goto LABEL_7; /*0x65c3d9*/
    return 0; /*0x65c418*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 1); /*0x65c3ce*/
  v5 = 1; /*0x65c3d1*/
LABEL_7:
  v6 = *((_DWORD *)this + 5); /*0x65c3db*/
  if ( Size >= this->field_10 - v6 ) /*0x65c3e5*/
    v4 = this->field_10 - v6; /*0x65c3e7*/
  memcpy(a1, (const void *)(this->field_8 + v6), v4); /*0x65c3f1*/
  *((_DWORD *)this + 5) += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c409*/
  return v4; /*0x65c40e*/
}
}
} // namespace gamemd

// 0x65C420
namespace gamemd {
int RAMFileClass::nullsub_0_4(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall nullsub_0_4(RAMFileClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->field_8 || !(*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c42c*/
    return *((_DWORD *)this + 5); /*0x65c494*/
  v4 = this->field_10; /*0x65c436*/
  v5 = v4; /*0x65c43b*/
  if ( (*((_BYTE *)this + 24) & 2) != 0 ) /*0x65c43d*/
    v5 = this->field_C; /*0x65c43f*/
  switch ( a3 ) /*0x65c449*/
  {
    case 0: /*0x65c449*/
      v6 = a2; /*0x65c469*/
      goto LABEL_11; /*0x65c469*/
    case 1: /*0x65c449*/
      *((_DWORD *)this + 5) += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = v5 + a2; /*0x65c455*/
LABEL_11:
      *((_DWORD *)this + 5) = v6; /*0x65c46d*/
      break;
  }
  if ( *((int *)this + 5) < 0 ) /*0x65c475*/
    *((_DWORD *)this + 5) = 0; /*0x65c477*/
  if ( *((_DWORD *)this + 5) > v5 ) /*0x65c481*/
    *((_DWORD *)this + 5) = v5; /*0x65c483*/
  result = *((_DWORD *)this + 5); /*0x65c486*/
  if ( result > v4 ) /*0x65c48b*/
    this->field_10 = result; /*0x65c48d*/
  return result; /*0x65c490*/
}
}
} // namespace gamemd

// 0x65C560
namespace gamemd {
int RAMFileClass::nullsub_0_6(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall nullsub_0_6(RAMFileClass *this, int a2)
{
  return (*(int (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x65c565*/
}
}
} // namespace gamemd

// 0x65C5A0
namespace gamemd {
void * RAMFileClass::nullsub_0_10(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall nullsub_0_10(RAMFileClass *this, char a2)
{
  char v3; // al

  v3 = *((_BYTE *)this + 29); /*0x65c5a3*/
  *(_DWORD *)this->__pad_0 = &vt_RAMFileClass; /*0x65c5a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c5ae*/
  if ( v3 ) /*0x65c5b2*/
  {
    __3_YAXPAX_Z((void *)this->field_8); /*0x65c5b8*/
    this->field_8 = 0; /*0x65c5c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c5c7*/
  }
  *(_DWORD *)this->__pad_0 = &vt_FileClass; /*0x65c5cf*/
  if ( (a2 & 1) != 0 ) /*0x65c5d7*/
    __3_YAXPAX_Z(this); /*0x65c5da*/
  return this; /*0x65c5e4*/
}
}
} // namespace gamemd

// 0x65C630
namespace gamemd {
int unknown_libname_28()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_28(_DWORD *this, int a2)
{
  *this = a2; /*0x65c636*/
  return this; /*0x65c638*/
}
}
} // namespace gamemd

// 0x65C910
namespace gamemd {
int E4Recv_65C910::sub_65C910(ObjectClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_65C910(_DWORD *this, ObjectClass *aP1, int a3)
{
  int result; // eax
  ObjectClass *v5; // ecx
  ObjectClass *v6; // edi
  bool v7; // zf
  bool v8; // cc
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // ecx
  ObjectClass *v14; // edi
  int v15; // esi
  ObjectClass *v16; // ebx
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]
  ObjectClass *aP1a; // [esp+14h] [ebp+4h]
  ObjectClass *v23; // [esp+18h] [ebp+8h]

  result = (int)aP1; /*0x65c913*/
  v5 = (ObjectClass *)a3; /*0x65c919*/
  v6 = aP1; /*0x65c91e*/
  v7 = aP1 == (ObjectClass *)a3; /*0x65c920*/
  v8 = (int)aP1 <= a3; /*0x65c920*/
  v19 = this; /*0x65c922*/
  v23 = aP1; /*0x65c926*/
  if ( !v7 ) /*0x65c92a*/
  {
    if ( !v8 ) /*0x65c930*/
    {
      v6 = v5; /*0x65c932*/
      v5 = aP1; /*0x65c934*/
      v23 = v6; /*0x65c936*/
    }
    v9 = (char *)v5 - (char *)v6; /*0x65c93d*/
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
      aP1a = (ObjectClass *)*this; /*0x65c976*/
      while ( 1 ) /*0x65c980*/
      {
        v13 = *(this + 1); /*0x65c980*/
        v14 = aP1a; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        *(this + 1) = v13 + 1; /*0x65c98c*/
        do /*0x65c9d5*/
        {
          v16 = (ObjectClass *)v13; /*0x65c995*/
          v17 = v13 ^ *(_DWORD *)&stru_830620.__pad_579C[v15 + 14472]; /*0x65c997*/
          v15 += 4; /*0x65c999*/
          v18 = (unsigned int)v14 /*0x65c9cc*/
              ^ ((unsigned __int16)v17 * (v17 >> 16)
               + (*(_DWORD *)&stru_830620.__pad_579C[v15 + 14548]
                ^ ((((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) << 16)
                 | (((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) >> 16))));
          v13 = v18; /*0x65c9d1*/
          v14 = v16; /*0x65c9d3*/
        }
        while ( v15 < 16 ); /*0x65c9d5*/
        v12 = v20 & v18; /*0x65c9df*/
        if ( (v20 & v18) <= v21 ) /*0x65c9e3*/
          break; /*0x65c9e3*/
        this = v19; /*0x65c97c*/
      }
      v6 = v23; /*0x65c9e5*/
    }
    return (int)&v6->__pad_0[v12]; /*0x65c9eb*/
  }
  return result; /*0x65c9ef*/
}
}
} // namespace gamemd

// 0x65D510
namespace gamemd {
unsigned int sub_65D510(int a1, const char * a2, int a3, unsigned char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __fastcall sub_65D510(int a1, const char *a2, int a3, _BYTE *a4)
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
  v10[0] = &vt_FileStraw; /*0x65d530*/
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
} // namespace gamemd

// 0x65D5C0
namespace gamemd {
unsigned int Stream_ReadLine(int a1, const char * a2, int a3, unsigned char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __fastcall Stream_ReadLine(int a1, const char *a2, int a3, _BYTE *a4)
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
} // namespace gamemd

// 0x65D8E0
namespace gamemd {
bool DeployScriptActionPlane(int a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall DeployScriptActionPlane(int a1, int edx0)
{
  ObjectClass *v2; // edi
  ScriptTypeClass *v4; // eax
  _DWORD *eax6; // eax
  ScriptTypeClass *v5; // eax
  ScriptTypeClass *v6; // eax
  int v8; // ecx
  IUnknown *v9; // ebp
  int v10; // ecx
  bool v11; // bl
  int *Waypoint_Location; // eax
  int eax16; // eax
  ScriptTypeClass *v13; // esi
  BuildingTypeClass *v15; // edi
  BuildingTypeClass *v16; // ebx
  signed int v17; // ebp
  BuildingTypeClass *NeighbourContent; // eax
  BuildingTypeClass *eax24; // eax
  BuildingTypeClass *v19; // esi
  IUnknown *v21; // ebp
  int v22; // ebx
  char *eax31a; // eax
  AbstractClass *v23; // esi
  int v25; // eax
  bool IsWithinUsableArea; // al
  void *OwnerHouse; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  IUnknown **TransportWaypoint; // eax
  int v33; // ecx
  MouseClass *TransitionCount; // eax
  IUnknown *v35; // edi
  int v36; // eax
  int v37; // ebx
  void *v38; // eax
  char v39; // al
  ScriptTypeClass *v40; // [esp+0h] [ebp-34h]
  bool v41; // [esp+16h] [ebp-1Eh]
  bool v42; // [esp+17h] [ebp-1Dh]
  int a2; // [esp+18h] [ebp-1Ch] BYREF
  IUnknown *aP1; // [esp+1Ch] [ebp-18h] BYREF
  ObjectClass *v45; // [esp+20h] [ebp-14h]
  int v46; // [esp+24h] [ebp-10h] BYREF
  _DWORD v47[3]; // [esp+28h] [ebp-Ch] BYREF

  v2 = (ObjectClass *)a1; /*0x65d8e7*/
  v46 = edx0; /*0x65d8ed*/
  v45 = (ObjectClass *)a1; /*0x65d8f1*/
  if ( !a1 || !*(_DWORD *)(*(_DWORD *)(a1 + 228) + 156) ) /*0x65d901*/
    return 0; /*0x65d901*/
  v4 = *(ScriptTypeClass **)(a1 + 224); /*0x65d90f*/
  if ( !v4 || !v4->scriptActions[28] ) /*0x65d919*/
  {
    if ( !v4 ) /*0x65d92c*/
    {
      eax6 = (_DWORD *)__2_YAPAXI_Z(0x234u); /*0x65d933*/
      if ( eax6 ) /*0x65d93d*/
        v5 = (ScriptTypeClass *)ScriptTypeClass::Constructor(eax6, 0); /*0x65d942*/
      else
        v5 = 0; /*0x65d949*/
      v2[1].attachedTag = v5; /*0x65d94b*/
    }
    v6 = (ScriptTypeClass *)v2[1].attachedTag; /*0x65d951*/
    v8 = v6->scriptActions[28]; /*0x65d957*/
    if ( v8 < 50 ) /*0x65d960*/
    {
      v6->scriptActions[2 * v8 + 29] = 5; /*0x65d962*/
      v6->scriptActions[2 * v8 + 30] = 0; /*0x65d969*/
      ++v6->scriptActions[28]; /*0x65d970*/
    }
  }
  v41 = v2[1].__pad_0[4] != 0; /*0x65d985*/
  v9 = (IUnknown *)ConstructTeamMembers((int)v2); /*0x65d991*/
  v10 = *(_DWORD *)&v9->__pad_524[176]; /*0x65d995*/
  aP1 = v9; /*0x65d99b*/
  *(_BYTE *)(v10 + 116) = 0; /*0x65d99f*/
  if ( !v9 ) /*0x65d9a3*/
    return 0; /*0x65dd1e*/
  v11 = edx0 != -1; /*0x65d9ac*/
  v42 = v11; /*0x65d9b1*/
  if ( v11 ) /*0x65d9b5*/
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location(*(char **)&HouseClass_Player.__pad_5568[8060], &v46, v46); /*0x65d9c7*/
  else
    Waypoint_Location = TechnoClass::GetWaypointCoords(v2, (AbstractClass *)&v46); /*0x65d9d5*/
  eax16 = *Waypoint_Location; /*0x65d9de*/
  a2 = eax16; /*0x65d9e2*/
  if ( !v41 && __PAIR32__(HIWORD(a2), eax16) != dword_B04C38 ) /*0x65d9f3*/
  {
    v13 = (ScriptTypeClass *)v9; /*0x65da07*/
    do /*0x65da1e*/
    {
      if ( (*(int (__thiscall **)(ScriptTypeClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13) != 15 ) /*0x65da13*/
        goto LABEL_44; /*0x65da13*/
      v13 = (ScriptTypeClass *)v13->scriptActions[0]; /*0x65da19*/
    }
    while ( v13 ); /*0x65da1e*/
    v46 = a2; /*0x65da28*/
    v15 = 0; /*0x65da37*/
    v16 = (BuildingTypeClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v46); /*0x65da39*/
    v17 = -1; /*0x65da3b*/
    do /*0x65da72*/
    {
      NeighbourContent = v16; /*0x65da41*/
      if ( v17 != -1 ) /*0x65da43*/
        NeighbourContent = (BuildingTypeClass *)Cell::GetNeighbourContent(v16, v17); /*0x65da48*/
      eax24 = (BuildingTypeClass *)Cell::IsBridge(NeighbourContent); /*0x65da4f*/
      v19 = eax24; /*0x65da54*/
      if ( eax24 && *(int *)&eax24->Name[8] > 0 && ProcessDataCellClass(eax24) ) /*0x65da63*/
        v15 = v19; /*0x65da6c*/
      ++v17; /*0x65da6e*/
    }
    while ( v17 < 8 ); /*0x65da72*/
    if ( v15 ) /*0x65da76*/
    {
      v21 = aP1; /*0x65da80*/
      v45 = (ObjectClass *)a2; /*0x65da84*/
      v22 = 0; /*0x65da88*/
      while ( 1 ) /*0x65da8a*/
      {
        eax31a = &v21->__pad_28[8]; /*0x65da8a*/
        v23 = (AbstractClass *)v21; /*0x65da8d*/
        v21 = *(IUnknown **)&v21->__pad_28[8]; /*0x65da91*/
        *(_DWORD *)eax31a = 0; /*0x65da93*/
        v25 = (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v15->vtable0 + 44))(v15); /*0x65da9b*/
        if ( v25 <= 0 ) /*0x65daa0*/
          goto LABEL_39; /*0x65daa0*/
        if ( v25 <= 2 ) /*0x65daa5*/
        {
          CellClass::AddObject(&v15->ChargerBarrels[4], (IUnknown *)v23); /*0x65dadd*/
          (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)v23->__pad_0 + 284))(v23); /*0x65dae6*/
          (*(void (__thiscall **)(BuildingTypeClass *, int, _DWORD))(*(_DWORD *)v15->vtable0 + 488))(v15, 16, 0); /*0x65daf4*/
          ++v22; /*0x65dafa*/
          goto LABEL_41; /*0x65dafb*/
        }
        if ( v25 == 6 ) /*0x65daaa*/
        {
          if ( (*(int (__thiscall **)(BuildingTypeClass *, AbstractClass *, ObjectClass *))(*(_DWORD *)v15->vtable0 + 256))( /*0x65dabf*/
                 v15,
                 v23,
                 v45) == 2 )
          {
            (*(void (__thiscall **)(BuildingTypeClass *, int))(*(_DWORD *)v15->vtable0 + 628))(v15, 3); /*0x65dacd*/
            ++v22; /*0x65dad3*/
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
            (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v23->__pad_0 + 32))(v23, 1); /*0x65db01*/
        }
LABEL_41:
        if ( !v21 ) /*0x65db0c*/
          return v22 != 0; /*0x65db20*/
      }
    }
    v2 = v45; /*0x65db21*/
    v9 = aP1; /*0x65db25*/
    v11 = v42; /*0x65db29*/
  }
LABEL_44:
  if ( !v11 /*0x65db49*/
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(
                               &stru_87C374.__pad_14B0[8132],
                               (IUnknown *)&a2,
                               (TechnoClass *)1),
        LOBYTE(aP1) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(aP1) = 0; /*0x65db4b*/
  }
  if ( !v41 ) /*0x65db56*/
  {
    if ( MoveScriptTypeClassToWaypoint((ScriptTypeClass *)v2, (ObjectClass *)v9, &a2, (int)aP1) ) /*0x65db66*/
      goto LABEL_49; /*0x65db6d*/
    return 1; /*0x65dba5*/
  }
  v46 = a2; /*0x65dbaf*/
  v29 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] /*0x65dbc8*/
                  + 4 * TypeClass::FindByName(&stru_830620.__pad_579C[14668]));
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65dbca*/
  v30 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v29 + 140))(v29, v9->field_21C); /*0x65dbd9*/
  v31 = v30; /*0x65dbe5*/
  --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65dbea*/
  if ( !v30 ) /*0x65dbf0*/
    return 1; /*0x65dbf0*/
  *(_BYTE *)(v30 + 980) = 1; /*0x65dbf2*/
  if ( v2[1].__pad_0[5] ) /*0x65dbf9*/
  {
    TransportWaypoint = (IUnknown **)TeamTypeClass::GetTransportWaypoint((int *)v2->__pad_0, &aP1); /*0x65dc0a*/
  }
  else
  {
    v33 = v9->field_21C; /*0x65dc11*/
    TransitionCount = *(MouseClass **)(v33 + 480); /*0x65dc17*/
    if ( (unsigned int)TransitionCount >= 4 ) /*0x65dc1f*/
      TransitionCount = (MouseClass *)HouseClass::GetTransitionCount((unsigned int *)v33); /*0x65dc26*/
    TransportWaypoint = (IUnknown **)CellClass::FindOpenNeighbor( /*0x65dc46*/
                                       (int *)&stru_87C374.__pad_14B0[8132],
                                       (MouseClass *)&aP1,
                                       TransitionCount,
                                       (int)&dword_B04C38,
                                       (int)&dword_B04C38,
                                       4,
                                       1,
                                       0);
  }
  v35 = *TransportWaypoint; /*0x65dc4b*/
  v36 = *(_DWORD *)v31; /*0x65dc4d*/
  aP1 = v35; /*0x65dc55*/
  (*(void (__thiscall **)(int, int, _DWORD))(v36 + 488))(v31, 26, 0); /*0x65dc59*/
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v31 + 1152))(v31, 0, 1); /*0x65dc67*/
  v37 = *(_DWORD *)v31; /*0x65dc6d*/
  v38 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v46); /*0x65dc79*/
  (*(void (__thiscall **)(int, void *))(v37 + 968))(v31, v38); /*0x65dc81*/
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65dc95*/
  Coord::Subtract(v47, (IUnknown *)(((__int16)v35 << 8) + 128), (IUnknown *)((SHIWORD(aP1) << 8) + 128), 0); /*0x65dcb6*/
  v39 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v31 + 216))(v31, v47, 0); /*0x65dcc6*/
  --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65dcda*/
  if ( v39 ) /*0x65dce0*/
  {
    *(_BYTE *)(v31 + 1737) = 1; /*0x65dce9*/
    CellClass::AddObject((_DWORD *)(v31 + 276), v9); /*0x65dcf0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 492))(v31); /*0x65dcf9*/
    v2 = v45; /*0x65dcff*/
LABEL_49:
    if ( Techno::GetOwnerHouse((int)v2) ) /*0x65db71*/
    {
      v40 = (ScriptTypeClass *)HouseClass_Player.field_0; /*0x65db80*/
      OwnerHouse = (void *)Techno::GetOwnerHouse((int)v2); /*0x65db83*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, (IUnknown *)v40) ) /*0x65db8a*/
        ScriptActionQueue::PushNext(&a2); /*0x65db97*/
    }
    return 1; /*0x65db97*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1); /*0x65dd0e*/
  return 1; /*0x65db14*/
}
}
} // namespace gamemd

// 0x65E010
namespace gamemd {
char MoveScriptTypeClassToWaypoint(ScriptTypeClass * aP0, ObjectClass * aP1, int * a2, int aP1_4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall MoveScriptTypeClassToWaypoint(ScriptTypeClass *aP0, ObjectClass *aP1, int *a2, int aP1_4)
{
  ScriptTypeClass *v4; // esi
  ObjectClass *v5; // ebp
  char v6; // al
  ObjectClass *v7; // ebx
  int v8; // eax
  int v9; // edx
  int *v10; // eax
  ScriptTypeClass *v11; // eax
  int v12; // eax
  ScriptTypeClass *nextObject; // edi
  char v14; // bl
  __int16 v15; // si
  int v16; // edx
  unsigned int v17; // esi
  int v18; // edx
  ScriptTypeClass *v19; // esi
  void *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  ObjectClass *Coords; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  ScriptTypeClass *v27; // edx
  int v28; // eax
  ScriptTypeClass *v29; // edx
  ScriptTypeClass *v30; // esi
  void *v31; // eax
  char v32; // al
  ScriptTypeClass *v33; // ebx
  _DWORD *v34; // eax
  ObjectClass *v35; // eax
  ScriptTypeClass *v36; // edx
  int v37; // esi
  int v38; // eax
  __int16 v39; // dx
  IUnknown *v40; // esi
  int v41; // ecx
  __int16 v42; // ax
  ScriptTypeClass *v43; // ebx
  void *v44; // eax
  int *scriptActions; // eax
  ScriptTypeClass *v46; // esi
  __int16 v48; // [esp+2Ah] [ebp-6Ah]
  int *v49; // [esp+2Ch] [ebp-68h] BYREF
  ScriptTypeClass *v50; // [esp+30h] [ebp-64h]
  int v51; // [esp+34h] [ebp-60h] BYREF
  int v52; // [esp+38h] [ebp-5Ch]
  unsigned int v53; // [esp+3Ch] [ebp-58h]
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
  v6 = aP0->scriptActions[32]; /*0x65e01b*/
  v50 = aP0; /*0x65e021*/
  LOBYTE(v48) = v6 != 0; /*0x65e02e*/
  v7 = aP1; /*0x65e035*/
  if ( aP1 ) /*0x65e037*/
  {
    while ( !memcmp( /*0x65e057*/
               (const void *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v7->__pad_0 + 132))(v7) + 844),
               &stru_7E9A50,
               0x10u) )
    {
      v7 = (ObjectClass *)v7->nextObject; /*0x65e059*/
      if ( !v7 ) /*0x65e05e*/
      {
        v4 = v50; /*0x65e060*/
        goto LABEL_5; /*0x65e060*/
      }
    }
    v4 = v50; /*0x65e0c3*/
    HIBYTE(v48) = 0; /*0x65e0c7*/
  }
  else
  {
LABEL_5:
    HIBYTE(v48) = 1; /*0x65e064*/
  }
  v52 = 0; /*0x65e072*/
  v51 = *a2; /*0x65e07e*/
  if ( v48 || (_BYTE)aP1_4 ) /*0x65e095*/
  {
    v11 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e0e5*/
    aP1_4 = 0; /*0x65e0ee*/
    v12 = ((int (__thiscall *)(ObjectClass *))v11->scriptActions[21])(v5); /*0x65e0fe*/
    v10 = (int *)*LayerClass::Pathfinding_Find( /*0x65e122*/
                    (IUnknown *)&stru_87C374.__pad_14B0[8132],
                    (IUnknown *)&v51,
                    (IUnknown *)&a2,
                    (IUnknown *)&v51,
                    *(IUnknown **)(v12 + 1660),
                    (IUnknown *)0xFFFFFFFF,
                    0,
                    0,
                    (IUnknown *)1,
                    (IUnknown *)1,
                    0,
                    0,
                    0,
                    (IUnknown *)1,
                    (IUnknown *)&aP1_4,
                    0,
                    0);
    v51 = (int)v10; /*0x65e124*/
  }
  else
  {
    if ( !Techno::GetOwnerHouse((int)v4) || (v8 = *(_DWORD *)(Techno::GetOwnerHouse((int)v4) + 480), v8 == -1) ) /*0x65e0b2*/
      v8 = 0; /*0x65e0b4*/
    v9 = 2 * v8; /*0x65e0b6*/
    v10 = (int *)v51; /*0x65e0b9*/
    v52 = v9; /*0x65e0bd*/
  }
  nextObject = (ScriptTypeClass *)v5->nextObject; /*0x65e128*/
  v5->nextObject = 0; /*0x65e12b*/
  v14 = 0; /*0x65e132*/
  v49 = v10; /*0x65e13b*/
  v50 = nextObject; /*0x65e13f*/
  LOBYTE(aP1_4) = 0; /*0x65e143*/
  if ( __PAIR32__(HIWORD(v51), (unsigned __int16)v10) != dword_B04C38 ) /*0x65e14a*/
  {
    while ( 1 ) /*0x65e1d5*/
    {
      while ( 1 ) /*0x65e15e*/
      {
        if ( v49 == (int *)dword_B04C38 || !v5 ) /*0x65e17f*/
        {
          v14 = aP1_4; /*0x65e611*/
          goto LABEL_53; /*0x65e611*/
        }
        v15 = v52; /*0x65e185*/
        v16 = *(_DWORD *)v5->__pad_0; /*0x65e189*/
        LOWORD(v53) = (_WORD)v52 << 13; /*0x65e191*/
        if ( (*(int (__thiscall **)(ObjectClass *))(v16 + 44))(v5) == 2 ) /*0x65e19e*/
        {
          LOWORD(v56) = ((v15 << 13) - 24577) & 0xE000; /*0x65e1af*/
          v17 = v56; /*0x65e1b4*/
          v53 = v56; /*0x65e1b8*/
        }
        else
        {
          v17 = v53; /*0x65e1be*/
        }
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e1cf*/
        if ( !(_BYTE)v48 ) /*0x65e1d5*/
          break; /*0x65e1d5*/
        v18 = *(_DWORD *)v5->__pad_0; /*0x65e1e5*/
        v57[2] = 0; /*0x65e1e8*/
        v57[0] = ((__int16)v49 << 8) + 128; /*0x65e1fb*/
        v57[1] = (SHIWORD(v49) << 8) + 128; /*0x65e209*/
        (*(void (__thiscall **)(ObjectClass *, _DWORD *))(v18 + 436))(v5, v57); /*0x65e210*/
        v19 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e216*/
        v20 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v49); /*0x65e225*/
        ((void (__thiscall *)(ObjectClass *, void *, int))v19[2].scriptActions[52])(v5, v20, 1); /*0x65e22d*/
        if ( !*(_DWORD *)&v5[9].bombVisible ) /*0x65e23d*/
          WinAPI::Wrapper(-2147467261); /*0x65e260*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)&v5[9].bombVisible + 68))( /*0x65e27b*/
          *(_DWORD *)&v5[9].bombVisible,
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
          0);
        (*(void (__thiscall **)(ObjectClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5->__pad_0 + 1160))( /*0x65e28d*/
          v5,
          0,
          0,
          0,
          0,
          0);
        v58[0] = v5->location[0]; /*0x65e29d*/
        v21 = v5[3].customSound_controller[3]; /*0x65e2a1*/
        v58[1] = v5->location[1]; /*0x65e2ad*/
        v58[2] = v5->location[2]; /*0x65e2c1*/
        MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v58, 0, (MouseClass *)(v21 + 3), 0); /*0x65e2c5*/
        nextObject = v50; /*0x65e2ca*/
LABEL_31:
        v36 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e442*/
        LOBYTE(aP1_4) = 1; /*0x65e447*/
        if ( ((int (__thiscall *)(ObjectClass *))v36->actionsCount)(v5) != 2 ) /*0x65e455*/
        {
          (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v5->__pad_0 + 488))(v5, 5, 0); /*0x65e460*/
          (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 492))(v5); /*0x65e46b*/
        }
        if ( (_BYTE)v48 ) /*0x65e477*/
        {
          v37 = 0; /*0x65e47d*/
          while ( 1 ) /*0x65e486*/
          {
            v38 = v37 & 7; /*0x65e486*/
            v39 = HIWORD(v49) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v38 + 162]; /*0x65e499*/
            LOWORD(v54) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v38 + 160] + (_WORD)v49; /*0x65e4a5*/
            HIWORD(v54) = v39; /*0x65e4b1*/
            a2 = v54; /*0x65e4c0*/
            if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2) ) /*0x65e4c7*/
              break; /*0x65e4c7*/
            if ( ++v37 >= 8 ) /*0x65e4d4*/
            {
              v49 = (int *)dword_B04C38; /*0x65e4db*/
              goto LABEL_46; /*0x65e4df*/
            }
          }
          v49 = a2; /*0x65e4ee*/
        }
LABEL_46:
        v5 = (ObjectClass *)nextObject; /*0x65e5ae*/
        --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e5b9*/
        if ( nextObject ) /*0x65e5bf*/
        {
          scriptActions = nextObject->scriptActions; /*0x65e5c8*/
          v50 = (ScriptTypeClass *)nextObject->scriptActions[0]; /*0x65e5cb*/
          nextObject = v50; /*0x65e5cf*/
          *scriptActions = 0; /*0x65e5d1*/
        }
      }
      if ( HIBYTE(v48) ) /*0x65e2d9*/
      {
        v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v49); /*0x65e2ee*/
        Coords = (ObjectClass *)CellClass::GetCoords(v22, (IUnknown *)v61); /*0x65e2f5*/
        v24 = *(_DWORD *)Coords->__pad_0; /*0x65e2fa*/
        v25 = *(_DWORD *)&Coords->__pad_0[4]; /*0x65e2fc*/
        v26 = *(_DWORD *)&Coords->__pad_0[8]; /*0x65e2ff*/
        v59[1] = v25; /*0x65e302*/
        v27 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e306*/
        v59[2] = v26 - 400; /*0x65e312*/
        v59[0] = v24; /*0x65e322*/
        LOBYTE(a2) = ((int (__thiscall *)(ObjectClass *, _DWORD *, _DWORD))v27->scriptActions[42])( /*0x65e332*/
                       v5,
                       v59,
                       (unsigned __int8)(((v17 >> 7) + 1) >> 1));
        if ( !(_BYTE)a2 ) /*0x65e339*/
          goto LABEL_39; /*0x65e339*/
        v28 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 464))(v5); /*0x65e344*/
        v60[0] = v5->location[0]; /*0x65e35b*/
        v60[1] = v5->location[1]; /*0x65e367*/
        v29 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e36b*/
        v60[2] = v5->location[2] + -256 - v28; /*0x65e373*/
        ((void (__thiscall *)(ObjectClass *, _DWORD *))v29->scriptActions[97])(v5, v60); /*0x65e379*/
        v30 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e37f*/
        v31 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v49); /*0x65e38e*/
        ((void (__thiscall *)(ObjectClass *, void *, int))v30[2].scriptActions[52])(v5, v31, 1); /*0x65e396*/
        (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)v5->__pad_0 + 1348))(v5, 0, 1072693248); /*0x65e3a8*/
        if ( !*(_DWORD *)&v5[9].bombVisible ) /*0x65e3b8*/
          WinAPI::Wrapper(-2147467261); /*0x65e3db*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)&v5[9].bombVisible + 68))( /*0x65e3f6*/
          *(_DWORD *)&v5[9].bombVisible,
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
          0);
        v32 = (char)a2; /*0x65e3f9*/
        nextObject = v50; /*0x65e400*/
      }
      else
      {
        v33 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e40a*/
        v34 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v49); /*0x65e425*/
        v35 = (ObjectClass *)CellClass::GetCoords(v34, (IUnknown *)v62); /*0x65e42c*/
        v32 = ((int (__thiscall *)(ObjectClass *, ObjectClass *, _DWORD))v33->scriptActions[42])( /*0x65e434*/
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
        v41 = (unsigned __int8)v40 & 7; /*0x65e50f*/
        v42 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v41 + 162]; /*0x65e521*/
        LOWORD(v55) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v41 + 160] + (_WORD)v49; /*0x65e529*/
        HIWORD(v55) = HIWORD(v49) + v42; /*0x65e53b*/
        a2 = v55; /*0x65e544*/
        if ( !LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2) ) /*0x65e550*/
        {
          v43 = *(ScriptTypeClass **)v5->__pad_0; /*0x65e559*/
          v44 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2); /*0x65e570*/
          if ( !((int (__thiscall *)(ObjectClass *, void *, IUnknown *, int, _DWORD, int))v43->scriptActions[95])( /*0x65e578*/
                  v5,
                  v44,
                  v40,
                  -1,
                  0,
                  1) )
            break; /*0x65e578*/
        }
        v40 = (IUnknown *)((char *)v40 + 1); /*0x65e582*/
        if ( (int)v40 >= 8 ) /*0x65e586*/
        {
          v49 = (int *)dword_B04C38; /*0x65e5a0*/
LABEL_45:
          (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x65e5a4*/
          goto LABEL_46; /*0x65e5ab*/
        }
      }
      v49 = a2; /*0x65e594*/
      if ( a2 == (int *)dword_B04C38 ) /*0x65e5e3*/
        goto LABEL_45; /*0x65e5e3*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e5f6*/
    }
  }
  if ( v5 ) /*0x65e603*/
    (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x65e60c*/
LABEL_53:
  if ( nextObject ) /*0x65e61a*/
  {
    while ( 1 ) /*0x65e622*/
    {
      v46 = (ScriptTypeClass *)nextObject->scriptActions[0]; /*0x65e622*/
      v50 = v46; /*0x65e62a*/
      nextObject->scriptActions[0] = 0; /*0x65e630*/
      if ( nextObject ) /*0x65e636*/
        (*(void (__thiscall **)(ScriptTypeClass *, int))(*(_DWORD *)nextObject->__pad_0 + 32))(nextObject, 1); /*0x65e63c*/
      if ( !v46 ) /*0x65e641*/
        break; /*0x65e641*/
      nextObject = v50; /*0x65e61e*/
    }
  }
  return v14; /*0x65e643*/
}
}
} // namespace gamemd

// 0x65E660
namespace gamemd {
int SpawnSuperWeaponUnits(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SpawnSuperWeaponUnits(unsigned int *a0, int a2, IUnknown *aP2, int a4, int a5, int a6, int a7, int a8)
{
  MouseClass *v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  MouseClass *TransitionCount; // eax
  int v14; // edi
  int v15; // edx
  char v16; // al
  int v17; // ebp
  int v18; // ebx
  AbstractClass *v19; // eax
  AbstractClass *v20; // edi
  int v22; // [esp+24h] [ebp-20h]
  unsigned int *v23; // [esp+28h] [ebp-1Ch]
  MouseClass *v24; // [esp+2Ch] [ebp-18h]
  int v25; // [esp+34h] [ebp-10h] BYREF
  _DWORD v26[3]; // [esp+38h] [ebp-Ch] BYREF

  v9 = *(MouseClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * a2); /*0x65e66c*/
  v10 = 0; /*0x65e673*/
  v23 = a0; /*0x65e679*/
  v24 = v9; /*0x65e67d*/
  v22 = 0; /*0x65e681*/
  if ( (int)aP2 > 0 ) /*0x65e685*/
  {
    while ( 1 ) /*0x65e699*/
    {
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e699*/
      v11 = (*(int (__thiscall **)(MouseClass *, unsigned int *))(v9->field_0 + 140))(v9, a0); /*0x65e6a1*/
      v12 = v11; /*0x65e6ad*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e6b2*/
      if ( !v11 ) /*0x65e6b8*/
        break; /*0x65e6b8*/
      *(_BYTE *)(v11 + 980) = 1; /*0x65e6be*/
      TransitionCount = (MouseClass *)a0[120]; /*0x65e6c5*/
      if ( (unsigned int)TransitionCount >= 4 ) /*0x65e6cd*/
        TransitionCount = (MouseClass *)HouseClass::GetTransitionCount(a0); /*0x65e6d6*/
      v14 = *CellClass::FindOpenNeighbor( /*0x65e6fb*/
               (int *)&stru_87C374.__pad_14B0[8132],
               (MouseClass *)&v25,
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
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e760*/
      v15 = *(_DWORD *)v12; /*0x65e766*/
      v26[1] = (SHIWORD(v14) << 8) + 128; /*0x65e76c*/
      v26[2] = 0; /*0x65e773*/
      v16 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v15 + 216))(v12, v26, 0); /*0x65e77b*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65e78f*/
      if ( !v16 ) /*0x65e795*/
      {
        if ( v12 ) /*0x65e82e*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 32))(v12, 1); /*0x65e836*/
        return v10 - 1; /*0x65e83a*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2 && a7 != -1 && a8 ) /*0x65e7b6*/
      {
        *(_BYTE *)(v12 + 1737) = 1; /*0x65e7b8*/
        v17 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * a7); /*0x65e7c5*/
        if ( v17 ) /*0x65e7ca*/
        {
          v18 = a8; /*0x65e7cc*/
          do /*0x65e7fb*/
          {
            v19 = (AbstractClass *)(*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v17 + 140))(v17, v23); /*0x65e7d8*/
            v20 = v19; /*0x65e7de*/
            if ( v19 ) /*0x65e7e2*/
            {
              (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)v19->__pad_0 + 212))(v19); /*0x65e7e8*/
              CellClass::AddObject((_DWORD *)(v12 + 276), (IUnknown *)v20); /*0x65e7f5*/
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
      if ( v10 >= (int)aP2 ) /*0x65e81a*/
        return v10; /*0x65e81a*/
      v9 = v24; /*0x65e68d*/
    }
  }
  return v10; /*0x65e820*/
}
}
} // namespace gamemd

// 0x65E850
namespace gamemd {
int PlaceAircraftOnMap(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PlaceAircraftOnMap(unsigned int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
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

  v9 = *((_DWORD *)MEMORY[0xA8B21C] + a2); /*0x65e85b*/
  v10 = a1; /*0x65e85e*/
  TransitionCount = a1[120]; /*0x65e863*/
  v26 = a1; /*0x65e869*/
  v29 = v9; /*0x65e86f*/
  if ( TransitionCount >= 4 ) /*0x65e873*/
    TransitionCount = HouseClass::GetTransitionCount(a1); /*0x65e87c*/
  v28 = *CellClass::FindOpenNeighbor( /*0x65e8a6*/
           (int *)&MEMORY[0x87F7E8],
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
      ++MEMORY[0xA8E7AC]; /*0x65e8c6*/
      v12 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v9 + 140))(v9, v10); /*0x65e8cf*/
      v13 = v12; /*0x65e8db*/
      --MEMORY[0xA8E7AC]; /*0x65e8e0*/
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
               &MEMORY[0x87F7E8],
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
      ++MEMORY[0xA8E7AC]; /*0x65e9b7*/
      v18 = *(_DWORD *)v13; /*0x65e9bd*/
      v31[1] = (SHIWORD(v27) << 8) + 128; /*0x65e9c3*/
      v31[2] = 0; /*0x65e9ca*/
      v19 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v18 + 216))(v13, v31, 0); /*0x65e9ce*/
      --MEMORY[0xA8E7AC]; /*0x65e9e2*/
      if ( !v19 ) /*0x65e9e8*/
      {
        if ( v13 ) /*0x65ea8d*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x65ea95*/
        return v24 - 1; /*0x65ea9f*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 2 && a7 != -1 && a8 ) /*0x65ea09*/
      {
        *(_BYTE *)(v13 + 1737) = 1; /*0x65ea0b*/
        v20 = *((_DWORD *)MEMORY[0xA8E34C] + a7); /*0x65ea18*/
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
} // namespace gamemd

// 0x65EC30
namespace gamemd {
char ExecuteScriptTypeClassActions(unsigned int * ecx0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ExecuteScriptTypeClassActions(_DWORD *ecx0, int a2)
{
  ScriptTypeClass *v4; // eax
  _DWORD *v5; // eax
  ScriptTypeClass *v6; // eax
  ScriptTypeClass *v7; // eax
  int v8; // ecx
  AbstractClass *v9; // edi
  int v10; // eax
  char v11; // bl
  void *v12; // eax
  int *v13; // eax
  int v14; // ebp
  int v15; // ebx
  IUnknown *v16; // esi
  IUnknown *v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  IUnknown *v21; // eax
  int *v22; // eax
  char v23; // al
  _DWORD *p_NeedsSaveOrLink; // ebp
  int (__stdcall ***Checked)(_DWORD, void *, int *); // eax
  int v26; // esi
  int v27; // ebx
  int InstanceCOM; // eax
  TeamTypeClass *v29; // eax
  int (__stdcall ***v30)(_DWORD, void *, AbstractClass *); // eax
  int v31; // esi
  TeamTypeClass *v32; // ebx
  int v33; // ecx
  int v34; // esi
  int v35; // esi
  int v36; // ecx
  void *v37; // eax
  int v38; // esi
  bool v39; // zf
  int v40; // edi
  IUnknown *v41; // eax
  HouseClass *v42; // eax
  ObjectClass *v43; // esi
  void *OwnerHouse; // eax
  IUnknown *v46; // [esp+40h] [ebp-C0h]
  char v47; // [esp+56h] [ebp-AAh]
  bool v48; // [esp+57h] [ebp-A9h]
  TeamTypeClass *i; // [esp+58h] [ebp-A8h] BYREF
  TeamTypeClass *v50; // [esp+5Ch] [ebp-A4h] BYREF
  ObjectClass *ppv; // [esp+60h] [ebp-A0h] BYREF
  int v52; // [esp+64h] [ebp-9Ch] BYREF
  int v53; // [esp+68h] [ebp-98h]
  int v54; // [esp+6Ch] [ebp-94h]
  int v55; // [esp+70h] [ebp-90h]
  int v56; // [esp+74h] [ebp-8Ch] BYREF
  AbstractClass aP1; // [esp+78h] [ebp-88h] BYREF
  int nextArrayIndex; // [esp+9Ch] [ebp-64h] BYREF
  int v59[3]; // [esp+A0h] [ebp-60h] BYREF
  int v60; // [esp+ACh] [ebp-54h]
  int v61; // [esp+B0h] [ebp-50h] BYREF
  int v62; // [esp+B4h] [ebp-4Ch] BYREF
  char v63[12]; // [esp+B8h] [ebp-48h] BYREF
  char v64[12]; // [esp+C4h] [ebp-3Ch] BYREF
  char v65[12]; // [esp+D0h] [ebp-30h] BYREF
  int a1[3]; // [esp+DCh] [ebp-24h] BYREF
  char v67[12]; // [esp+E8h] [ebp-18h] BYREF
  char v68[12]; // [esp+F4h] [ebp-Ch] BYREF

  aP1.NeedsSaveOrLink = ecx0; /*0x65ec40*/
  if ( !ecx0 || !*(_DWORD *)(ecx0[57] + 156) ) /*0x65ec50*/
    return 0; /*0x65ec50*/
  v4 = (ScriptTypeClass *)ecx0[56]; /*0x65ec5e*/
  if ( !v4 || !v4->scriptActions[28] ) /*0x65ec68*/
  {
    if ( !v4 ) /*0x65ec7b*/
    {
      v5 = (_DWORD *)__2_YAPAXI_Z(0x234u); /*0x65ec82*/
      if ( v5 ) /*0x65ec8c*/
        v6 = (ScriptTypeClass *)ScriptTypeClass::Constructor(v5, 0); /*0x65ec91*/
      else
        v6 = 0; /*0x65ec98*/
      ecx0[56] = v6; /*0x65ec9a*/
    }
    v7 = (ScriptTypeClass *)ecx0[56]; /*0x65eca0*/
    v8 = v7->scriptActions[28]; /*0x65eca6*/
    if ( v8 < 50 ) /*0x65ecaf*/
    {
      v7->scriptActions[2 * v8 + 29] = 5; /*0x65ecb1*/
      v7->scriptActions[2 * v8 + 30] = 0; /*0x65ecb8*/
      ++v7->scriptActions[28]; /*0x65ecbf*/
    }
  }
  v9 = ConstructTeamMembers((int)ecx0); /*0x65eccc*/
  *(_BYTE *)(v9[41].uniqueId + 116) = 0; /*0x65ecd8*/
  if ( !v9 ) /*0x65ecdc*/
    return 0; /*0x65f304*/
  v56 = *TechnoClass::GetWaypointCoords(ecx0, &aP1); /*0x65ecf3*/
  if ( a2 != -1 ) /*0x65ecf7*/
    v56 = *ScenarioClass::Get_Waypoint_Location(*(char **)&HouseClass_Player.__pad_5568[8060], &aP1, a2); /*0x65ed0c*/
  v10 = *(_DWORD *)&v9[1].__pad_0[12]; /*0x65ed10*/
  *(_DWORD *)&v9[1].__pad_0[12] = 0; /*0x65ed13*/
  v55 = v10; /*0x65ed16*/
  *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x65ed1a*/
  do /*0x65f275*/
  {
    v11 = 0; /*0x65ed1e*/
    v47 = 0; /*0x65ed27*/
    v48 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v9->__pad_0 + 44))(v9) == 1; /*0x65ed39*/
    if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v9->__pad_0 + 44))(v9) == 2 ) /*0x65ed47*/
    {
      v47 = 1; /*0x65ed49*/
      v11 = 1; /*0x65ed4e*/
    }
    v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v56); /*0x65ed5c*/
    v13 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v12 + 72))(v12, v65); /*0x65ed6d*/
    v52 = *v13; /*0x65ed72*/
    v53 = v13[1]; /*0x65ed79*/
    v54 = v13[2]; /*0x65ed86*/
    if ( v48 ) /*0x65ed8a*/
    {
      if ( !v11 ) /*0x65edc6*/
        goto LABEL_22; /*0x65edc6*/
    }
    else if ( !v11 ) /*0x65ed8e*/
    {
      v52 += ((*(_DWORD *)&v9[21].__pad_0[8] & 3) - 2) << 8; /*0x65eda9*/
      v53 += ((*(_DWORD *)&v9[21].__pad_0[8] & 0xC) - 4) << 6; /*0x65edbe*/
LABEL_22:
      --*(_DWORD *)&v9[21].__pad_0[8]; /*0x65edc8*/
    }
    v14 = dword_B04C58; /*0x65edce*/
    v15 = dword_B04C5C; /*0x65edda*/
    v60 = dword_B04C60; /*0x65edea*/
    v16 = (IUnknown *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v52); /*0x65edf3*/
    for ( i = 0; /*0x65edf7*/
          v14 == dword_B04C58 && v15 == dword_B04C5C && v60 == dword_B04C60 && (int)i < 255;
          i = (TeamTypeClass *)((char *)i + 1) )
    {
      if ( v47 ) /*0x65ee39*/
      {
        v17 = (IUnknown *)v16->field_0; /*0x65ee3f*/
        aP1.uniqueId = 0; /*0x65ee41*/
        v18 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))v17->__pad_48)(v16, v63); /*0x65ee59*/
        LOWORD(aP1.abstractFlags) = *v18 / 256; /*0x65ee70*/
        HIWORD(aP1.abstractFlags) = v18[1] / 256; /*0x65ee91*/
        aP1.referenceCount = aP1.abstractFlags; /*0x65ee9f*/
        *(_DWORD *)&aP1.__pad_0[12] = *LayerClass::Pathfinding_Find( /*0x65eec2*/
                                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                         (IUnknown *)&aP1.uniqueId,
                                         (IUnknown *)&v61,
                                         (IUnknown *)&aP1.referenceCount,
                                         (IUnknown *)1,
                                         (IUnknown *)0xFFFFFFFF,
                                         0,
                                         0,
                                         (IUnknown *)1,
                                         (IUnknown *)1,
                                         0,
                                         0,
                                         0,
                                         (IUnknown *)1,
                                         (IUnknown *)&aP1.uniqueId,
                                         0,
                                         0);
      }
      else
      {
        *(_WORD *)&aP1.__pad_0[8] = 0; /*0x65eed2*/
        *(_WORD *)&aP1.__pad_0[10] = 0; /*0x65eed7*/
        v19 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(v16->field_0 + 72))(v16, v67); /*0x65eee8*/
        LOWORD(aP1.nextArrayIndex) = *v19 / 256; /*0x65eeff*/
        HIWORD(aP1.nextArrayIndex) = v19[1] / 256; /*0x65ef15*/
        nextArrayIndex = aP1.nextArrayIndex; /*0x65ef22*/
        v20 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v9->__pad_0 + 132))(v9); /*0x65ef38*/
        *(_DWORD *)&aP1.__pad_0[12] = *LayerClass::Pathfinding_Find( /*0x65ef61*/
                                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                         (IUnknown *)&v62,
                                         (IUnknown *)&v62,
                                         (IUnknown *)&nextArrayIndex,
                                         *(IUnknown **)(v20 + 1660),
                                         (IUnknown *)0xFFFFFFFF,
                                         0,
                                         0,
                                         (IUnknown *)1,
                                         (IUnknown *)1,
                                         0,
                                         0,
                                         0,
                                         (IUnknown *)1,
                                         (IUnknown *)&aP1.__pad_0[8],
                                         0,
                                         0);
      }
      v16 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1.__pad_0[12]); /*0x65ef74*/
      if ( v48 || v47 ) /*0x65ef84*/
      {
        v22 = (int *)(*(int (__thiscall **)(IUnknown *, char *))(v16->field_0 + 72))(v16, v68); /*0x65efb9*/
      }
      else
      {
        v21 = (IUnknown *)(*(int (__thiscall **)(IUnknown *, char *))(v16->field_0 + 72))(v16, v64); /*0x65ef98*/
        v22 = ObjectPlacement::CalcPosition(v16, a1, v21, 0, 0, 0); /*0x65efa6*/
      }
      v14 = *v22; /*0x65efbc*/
      v15 = v22[1]; /*0x65efbe*/
      v60 = v22[2]; /*0x65efc9*/
    }
    v52 = v14; /*0x65efe0*/
    v53 = v15; /*0x65efe4*/
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65efe8*/
    v23 = (*(int (__thiscall **)(AbstractClass *, int *, _DWORD))(*(_DWORD *)v9->__pad_0 + 216))(v9, &v52, 0); /*0x65eff7*/
    --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65f00b*/
    if ( v23 ) /*0x65f011*/
    {
      p_NeedsSaveOrLink = &v9[45].NeedsSaveOrLink; /*0x65f017*/
      v50 = 0; /*0x65f01d*/
      if ( v9[45].NeedsSaveOrLink ) /*0x65f017*/
      {
        Checked = (int (__stdcall ***)(_DWORD, void *, int *))Stream::GetChecked(&v9[45].NeedsSaveOrLink); /*0x65f02d*/
        v26 = (**Checked)(Checked, &unk_819088, v59); /*0x65f041*/
        if ( v26 >= 0 ) /*0x65f045*/
        {
          v27 = v59[0]; /*0x65f05a*/
          Release2COM((int *)&v50); /*0x65f062*/
          v50 = (TeamTypeClass *)v27; /*0x65f067*/
        }
        else
        {
          Release2COM((int *)&v50); /*0x65f04b*/
          v50 = 0; /*0x65f050*/
        }
        if ( v26 < 0 && v26 != -2147467262 ) /*0x65f075*/
          WinAPI::Wrapper(v26); /*0x65f078*/
      }
      ppv = 0; /*0x65f08a*/
      InstanceCOM = CreateInstanceCOM((LPVOID *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x65f092*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x65f0a0*/
        WinAPI::Wrapper(InstanceCOM); /*0x65f0a3*/
      if ( !ppv ) /*0x65f0ae*/
        WinAPI::Wrapper(-2147467261); /*0x65f0b5*/
      (*(void (__stdcall **)(ObjectClass *, AbstractClass *))(*(_DWORD *)ppv->__pad_0 + 12))(ppv, v9); /*0x65f0c2*/
      v29 = 0; /*0x65f0c5*/
      i = 0; /*0x65f0cb*/
      if ( ppv ) /*0x65f0d1*/
      {
        v30 = (int (__stdcall ***)(_DWORD, void *, AbstractClass *))Stream::GetChecked(&ppv); /*0x65f0d7*/
        v31 = (**v30)(v30, &unk_819088, &aP1); /*0x65f0eb*/
        if ( v31 >= 0 ) /*0x65f0ef*/
        {
          v32 = *(TeamTypeClass **)aP1.__pad_0; /*0x65f0fe*/
          Release2COM((int *)&i); /*0x65f106*/
          v29 = v32; /*0x65f10b*/
        }
        else
        {
          Release2COM((int *)&i); /*0x65f0f5*/
          v29 = 0; /*0x65f0fa*/
        }
        i = v29; /*0x65f10f*/
        if ( v31 < 0 && v31 != -2147467262 ) /*0x65f11b*/
          WinAPI::Wrapper(v31); /*0x65f11e*/
      }
      v33 = (int)v50; /*0x65f127*/
      if ( v50 != v29 ) /*0x65f12d*/
      {
        v34 = (int)v50; /*0x65f12f*/
        v33 = (int)v29; /*0x65f131*/
        v50 = v29; /*0x65f135*/
        if ( v29 ) /*0x65f139*/
        {
          (*(void (__stdcall **)(TeamTypeClass *))(*(_DWORD *)v29->__pad_0 + 4))(v29); /*0x65f13e*/
          v33 = (int)v50; /*0x65f141*/
          v29 = i; /*0x65f145*/
        }
        if ( v34 ) /*0x65f14b*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x65f150*/
          v33 = (int)v50; /*0x65f153*/
          v29 = i; /*0x65f157*/
        }
      }
      if ( v29 ) /*0x65f15d*/
      {
        (*(void (__stdcall **)(TeamTypeClass *))(*(_DWORD *)v29->__pad_0 + 8))(v29); /*0x65f162*/
        v33 = (int)v50; /*0x65f165*/
      }
      if ( v33 ) /*0x65f16b*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v33 + 12))(v33, *p_NeedsSaveOrLink); /*0x65f174*/
        v35 = *p_NeedsSaveOrLink; /*0x65f177*/
        if ( (ObjectClass *)*p_NeedsSaveOrLink != ppv ) /*0x65f180*/
        {
          *p_NeedsSaveOrLink = ppv; /*0x65f182*/
          if ( ppv ) /*0x65f18b*/
            (*(void (__stdcall **)(ObjectClass *))(*(_DWORD *)ppv->__pad_0 + 4))(ppv); /*0x65f190*/
          if ( v35 ) /*0x65f195*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35); /*0x65f19a*/
        }
      }
      *(_DWORD *)v9[18].__pad_0 = v52; /*0x65f1a7*/
      *(_DWORD *)&v9[18].__pad_0[4] = v53; /*0x65f1b1*/
      *(_DWORD *)&v9[18].__pad_0[8] = v54; /*0x65f1b8*/
      if ( !v9[45].NeedsSaveOrLink ) /*0x65f1bb*/
        WinAPI::Wrapper(-2147467261); /*0x65f1d6*/
      (*(void (__stdcall **)(void *, int, int, int))(*(_DWORD *)v9[45].NeedsSaveOrLink + 68))( /*0x65f1f1*/
        v9[45].NeedsSaveOrLink,
        v52,
        v53,
        v54);
      v9[17].__pad_0[13] = 1; /*0x65f1f4*/
      v36 = *(_DWORD *)&aP1.__pad_0[4]; /*0x65f201*/
      *(_DWORD *)&aP1.__pad_0[4] = v9; /*0x65f205*/
      v37 = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3056); /*0x65f209*/
      *(_DWORD *)&v9[1].__pad_0[12] = v36; /*0x65f20f*/
      v9[17].NeedsSaveOrLink = v37; /*0x65f212*/
      v9 = (AbstractClass *)v55; /*0x65f218*/
      if ( v55 ) /*0x65f21e*/
      {
        v55 = *(_DWORD *)(v55 + 48); /*0x65f226*/
        *(_DWORD *)&v9[1].__pad_0[12] = 0; /*0x65f22a*/
      }
      if ( ppv ) /*0x65f236*/
        (*(void (__stdcall **)(ObjectClass *))(*(_DWORD *)ppv->__pad_0 + 8))(ppv); /*0x65f23b*/
      if ( v50 ) /*0x65f244*/
        (*(void (__stdcall **)(TeamTypeClass *))(*(_DWORD *)v50->__pad_0 + 8))(v50); /*0x65f249*/
    }
    else
    {
      (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v9->__pad_0 + 32))(v9, 1); /*0x65f258*/
      v9 = (AbstractClass *)v55; /*0x65f25b*/
      if ( !v55 ) /*0x65f261*/
        break; /*0x65f261*/
      v55 = *(_DWORD *)(v55 + 48); /*0x65f269*/
      *(_DWORD *)&v9[1].__pad_0[12] = 0; /*0x65f26d*/
    }
  }
  while ( v9 ); /*0x65f275*/
  v38 = *(_DWORD *)&aP1.__pad_0[4]; /*0x65f27b*/
  v39 = *(_DWORD *)&aP1.__pad_0[4] == 0; /*0x65f27f*/
  v40 = *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[4] + 48); /*0x65f281*/
  *(_DWORD *)(*(_DWORD *)&aP1.__pad_0[4] + 48) = 0; /*0x65f287*/
  if ( !v39 ) /*0x65f28d*/
  {
    while ( 1 ) /*0x65f28f*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v38 + 292))(v38, 0); /*0x65f295*/
      v41 = *(IUnknown **)v38; /*0x65f29b*/
      *(_DWORD *)(v38 + 640) = 3; /*0x65f29f*/
      (*(void (__thiscall **)(int))&v41->__pad_1D8[20])(v38); /*0x65f2a9*/
      v38 = v40; /*0x65f2b1*/
      if ( !v40 ) /*0x65f2b3*/
        break; /*0x65f2b3*/
      v42 = (HouseClass *)(v40 + 48); /*0x65f2b5*/
      v40 = *(_DWORD *)(v40 + 48); /*0x65f2b8*/
      *(_DWORD *)v42->__pad_0 = 0; /*0x65f2bb*/
    }
  }
  v43 = (ObjectClass *)aP1.NeedsSaveOrLink; /*0x65f2c3*/
  if ( Techno::GetOwnerHouse((int)aP1.NeedsSaveOrLink) ) /*0x65f2c9*/
  {
    v46 = (IUnknown *)HouseClass_Player.field_0; /*0x65f2d8*/
    OwnerHouse = (void *)Techno::GetOwnerHouse((int)v43); /*0x65f2db*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v46) ) /*0x65f2e2*/
      ScriptActionQueue::PushNext(&v56); /*0x65f2ef*/
  }
  return 1; /*0x65f2f6*/
}
}
} // namespace gamemd

// 0x65FA70
namespace gamemd {
char CreateTriggerClassIfFarEnough(IUnknown * aP0, int a2, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CreateTriggerClassIfFarEnough(IUnknown *aP0, int a2, IUnknown *aP2)
{
  IUnknown *v3; // edi
  int v4; // esi
  CCINIClass *v5; // ecx
  int v6; // edx
  double v7; // st7
  double v8; // st7
  __int16 v9; // ax
  _DWORD *v10; // eax

  v3 = aP0; /*0x65fa7c*/
  if ( byte_7F09A4[16 * (_DWORD)aP0] && (v4 = 0, g_TriggerEventState > 0) ) /*0x65faa1*/
  {
    v5 = g_TriggerPool; /*0x65faab*/
    while ( 1 ) /*0x65fab1*/
    {
      v6 = *(_DWORD *)&v5->__pad_0[4 * v4]; /*0x65fab1*/
      if ( *(IUnknown **)v6 == aP0 ) /*0x65faba*/
      {
        v7 = (double)(__int16)(HIWORD(aP2) - *(_WORD *)(v6 + 34)); /*0x65fad7*/
        v8 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x65faf4*/
                                           (double)(__int16)((_WORD)aP2 - *(_WORD *)(v6 + 32))
                                         * (double)(__int16)((_WORD)aP2 - *(_WORD *)(v6 + 32))
                                         + v7 * v7));
        v9 = Math::RoundToInt(v8); /*0x65fafc*/
        v5 = g_TriggerPool; /*0x65fb01*/
        if ( v9 < dword_7F0998[4 * **(_DWORD **)&g_TriggerPool->__pad_0[4 * v4]] ) /*0x65fb18*/
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
    v10 = (_DWORD *)__2_YAPAXI_Z(0x40u); /*0x65fb28*/
    if ( v10 ) /*0x65fb34*/
      Team_Load_65FB80(v10, (int)v3, aP2); /*0x65fb3a*/
    return 1; /*0x65fb3f*/
  }
}
}
} // namespace gamemd

// 0x652100
namespace gamemd {
void nullsub_217()
{
  ;
}
} // namespace gamemd

// 0x652660
namespace gamemd {
int sub_652660()
{
{
    DataGlobal_B048B0 = 0;
    DataGlobal_B048B4 = 0;
    DataGlobal_B048B8 = 0;
    DataGlobal_B048BC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x652680
namespace gamemd {
void sub_652680()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B048D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6526B0
namespace gamemd {
void sub_6526B0()
{
{
    DataGlobal_B049F8 = DataGlobal_B048D8 / 60.0;
}
}
} // namespace gamemd

// 0x6526D0
namespace gamemd {
void sub_6526D0()
{
{
    DataGlobal_B049E0 = 1.0 / DataGlobal_B049F8;
}
}
} // namespace gamemd

// 0x6526F0
namespace gamemd {
void sub_6526F0()
{
{
    DataGlobal_B049D8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x652710
namespace gamemd {
void sub_652710()
{
{
    DataGlobal_B048E8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x652730
namespace gamemd {
void sub_652730()
{
{
    DataGlobal_B048A0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x652750
namespace gamemd {
long long sub_652750()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B048A0 - DataGlobal_B048E8);
    result = Math::RoundToInt(v0 * DataGlobal_B048D8 * 0.5);
    DataGlobal_B04A34 = result;
    return result;
}
}
} // namespace gamemd

// 0x652790
namespace gamemd {
void sub_652790()
{
{
    DataGlobal_B048F0 = Math::ArcTan((double)DataGlobal_B04A34 * 0.00390625);
}
}
} // namespace gamemd

// 0x6527C0
namespace gamemd {
void sub_6527C0()
{
{
    DataGlobal_B04970 = Math::ArcTan((double)(2 * DataGlobal_B04A34) / DataGlobal_B048D8);
}
}
} // namespace gamemd

// 0x6527F0
namespace gamemd {
long long sub_6527F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04A34) + 0.5);
    DataGlobal_B049F4 = result;
    return result;
}
}
} // namespace gamemd

// 0x652820
namespace gamemd {
int sub_652820()
{
{
    DataGlobal_B048C0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x652830
namespace gamemd {
int sub_652830()
{
{
    DataGlobal_B04900 = 0;
    DataGlobal_B04904 = 0;
    DataGlobal_B04908 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x652850
namespace gamemd {
int sub_652850()
{
{
    DataGlobal_B049F0 = 0;
    DataGlobal_B049E8 = 128;
    DataGlobal_B049EC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x652870
namespace gamemd {
int sub_652870()
{
{
    GadgetClass::Construct(DataGlobal_B04A10, 0, 0, 0, 0, 159, 1);
    DataGlobal_B04A10[0] = (int)&vt_RadarClass_RTacticalClass;
    return atexit(sub_6528A0);
}
}
} // namespace gamemd

// 0x6528A0
namespace gamemd {
void sub_6528A0()
{
{
    if ( (DataGlobal_B048A8 & 1) == 0 )
  {
    DataGlobal_B048A8 |= 1u;
    GadgetClass::Dtor(DataGlobal_B04A10);
  }
}
}
} // namespace gamemd

// 0x6528D0
namespace gamemd {
int sub_6528D0()
{
{
    ShapeButtonClass::Init(DataGlobal_B04978);
    return atexit(sub_6528F0);
}
}
} // namespace gamemd

// 0x6528F0
namespace gamemd {
void sub_6528F0()
{
{
    if ( (DataGlobal_B048A8 & 2) == 0 )
  {
    DataGlobal_B048A8 |= 2u;
    ShapeButtonClass::Destructor((int)DataGlobal_B04978);
  }
}
}
} // namespace gamemd

// 0x652920
namespace gamemd {
int sub_652920()
{
{
    ShapeButtonClass::Init(DataGlobal_B04910);
    return atexit(sub_652940);
}
}
} // namespace gamemd

// 0x652940
namespace gamemd {
void sub_652940()
{
{
    if ( (DataGlobal_B048A8 & 4) == 0 )
  {
    DataGlobal_B048A8 |= 4u;
    ShapeButtonClass::Destructor((int)DataGlobal_B04910);
  }
}
}
} // namespace gamemd

// 0x652CD0
namespace gamemd {
void E4Recv_652CD0::sub_652CD0()
{
{
    this->M5292 = 4;
    this->M5372 = 25;
}
}
} // namespace gamemd

// 0x653750
namespace gamemd {
void nullsub_220(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x658E80
namespace gamemd {
void sub_658E80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04A78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x658EB0
namespace gamemd {
void sub_658EB0()
{
{
    DataGlobal_B04AC8 = DataGlobal_B04A78 / 60.0;
}
}
} // namespace gamemd

// 0x658ED0
namespace gamemd {
void sub_658ED0()
{
{
    DataGlobal_B04AB0 = 1.0 / DataGlobal_B04AC8;
}
}
} // namespace gamemd

// 0x658EF0
namespace gamemd {
void sub_658EF0()
{
{
    DataGlobal_B04AA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x658F10
namespace gamemd {
void sub_658F10()
{
{
    DataGlobal_B04A80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x658F30
namespace gamemd {
void sub_658F30()
{
{
    DataGlobal_B04A40 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x658F50
namespace gamemd {
long long sub_658F50()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04A40 - DataGlobal_B04A80);
    result = Math::RoundToInt(v0 * DataGlobal_B04A78 * 0.5);
    DataGlobal_B04AD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x658F90
namespace gamemd {
void sub_658F90()
{
{
    DataGlobal_B04A88 = Math::ArcTan((double)DataGlobal_B04AD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x658FC0
namespace gamemd {
void sub_658FC0()
{
{
    DataGlobal_B04AA0 = Math::ArcTan((double)(2 * DataGlobal_B04AD0) / DataGlobal_B04A78);
}
}
} // namespace gamemd

// 0x658FF0
namespace gamemd {
long long sub_658FF0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04AD0) + 0.5);
    DataGlobal_B04AC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x659020
namespace gamemd {
int sub_659020()
{
{
    DataGlobal_B04A58 = 0;
    DataGlobal_B04A5A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x659030
namespace gamemd {
int sub_659030()
{
{
    DataGlobal_B04A90 = 0;
    DataGlobal_B04A94 = 0;
    DataGlobal_B04A98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x659050
namespace gamemd {
int sub_659050()
{
{
    DataGlobal_B04AC0 = 0;
    DataGlobal_B04AB8 = 128;
    DataGlobal_B04ABC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x659070
namespace gamemd {
int sub_659070()
{
{
    DataGlobal_B04A48 = 0;
    DataGlobal_B04A4C = 0;
    DataGlobal_B04A50 = 0;
    DataGlobal_B04A54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x659090
namespace gamemd {
int sub_659090()
{
{
    DataGlobal_B04A64 = 0;
    DataGlobal_B04A68 = 0;
    DataGlobal_B04A6C = 1;
    DataGlobal_B04A6D = 0;
    RadBeam_Array = (int)&vt_DynamicVectorClass_RadBeam;
    DataGlobal_B04A74 = 10;
    DataGlobal_B04A70 = 0;
    return atexit(sub_6590D0);
}
}
} // namespace gamemd

// 0x6590D0
namespace gamemd {
void sub_6590D0()
{
{
    RadBeam_Array = (int)&vt_VectorClass_RadBeam;
    if ( DataGlobal_B04A64 && DataGlobal_B04A6D )
  {
    __3_YAXPAX_Z(DataGlobal_B04A64);
    DataGlobal_B04A64 = 0;
  }
    DataGlobal_B04A6D = 0;
    DataGlobal_B04A68 = 0;
}
}
} // namespace gamemd

// 0x659560
namespace gamemd {
void E4Recv_659560::sub_659560()
{
{
    this->M9 = 0;
}
}
} // namespace gamemd

// 0x659570
namespace gamemd {
char E4Recv_659570::sub_659570()
{
{
    return this->M9;
}
}
} // namespace gamemd

// 0x6599C0
namespace gamemd {
void E4Recv_6599C0::sub_6599C0()
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->M48 - this->M36;
    v3 = this->M56 - this->M44;
    v4 = this->M52 - this->M40;
    this->M92 = v2;
    this->M96 = v4;
    this->M100 = v3;
    *(double *)(this + 104) = Math::Sqrt((double)(this->M100 *(void**)this->M100 + this->M96 *(void**)this->M96 + this->M92 *(void**)this->M92));
}
}
} // namespace gamemd

// 0x659A30
namespace gamemd {
short E4Recv_659A30::sub_659A30()
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    double v6;
    short *v7;
    int v8;
    short result;
    char v10;
    v2 = Math::RoundToInt(*(double *)(this + 104) / *(double *)(this + 24));
    v3 = this->M92;
    v4 = this->M96;
    v5 = this->M100;
    this->M140 = v2;
    if ( v2 )
  {
    v3 /= v2;
    v4 /= v2;
    v5 /= v2;
  }
    v6 = (double)this->M124 / (double)this->M60;
    this->M144 = v3;
    this->M148 = v4;
    this->M152 = v5;
    this->M156 = this->M36;
    this->M160 = this->M40;
    this->M164 = this->M44;
    v7 = (short *)(this + 32);
    v8 = this + 192;
    result = *v7;
    v10 = *((char *)(v7) + 2);
    *(double *)(v8 - 64) = v6 * *(double *)(v8 - 128);
    *(short *)v8 = result;
    *(char *)(v8 + 2) = v10;
    return result;
}
}
} // namespace gamemd

// 0x65A540
namespace gamemd {
void sub_65A540()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04AF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x65A570
namespace gamemd {
void sub_65A570()
{
{
    DataGlobal_B04B48 = DataGlobal_B04AF8 / 60.0;
}
}
} // namespace gamemd

// 0x65A590
namespace gamemd {
void sub_65A590()
{
{
    DataGlobal_B04B30 = 1.0 / DataGlobal_B04B48;
}
}
} // namespace gamemd

// 0x65A5B0
namespace gamemd {
void sub_65A5B0()
{
{
    DataGlobal_B04B28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x65A5D0
namespace gamemd {
void sub_65A5D0()
{
{
    DataGlobal_B04B00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x65A5F0
namespace gamemd {
void sub_65A5F0()
{
{
    DataGlobal_B04AD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x65A610
namespace gamemd {
long long sub_65A610()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04AD8 - DataGlobal_B04B00);
    result = Math::RoundToInt(v0 * DataGlobal_B04AF8 * 0.5);
    DataGlobal_B04B50 = result;
    return result;
}
}
} // namespace gamemd

// 0x65A650
namespace gamemd {
void sub_65A650()
{
{
    DataGlobal_B04B08 = Math::ArcTan((double)DataGlobal_B04B50 * 0.00390625);
}
}
} // namespace gamemd

// 0x65A680
namespace gamemd {
void sub_65A680()
{
{
    DataGlobal_B04B20 = Math::ArcTan((double)(2 * DataGlobal_B04B50) / DataGlobal_B04AF8);
}
}
} // namespace gamemd

// 0x65A6B0
namespace gamemd {
long long sub_65A6B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04B50) + 0.5);
    DataGlobal_B04B44 = result;
    return result;
}
}
} // namespace gamemd

// 0x65A6E0
namespace gamemd {
int sub_65A6E0()
{
{
    DataGlobal_B04AF0 = 0;
    DataGlobal_B04AF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65A6F0
namespace gamemd {
int sub_65A6F0()
{
{
    DataGlobal_B04B10 = 0;
    DataGlobal_B04B14 = 0;
    DataGlobal_B04B18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65A710
namespace gamemd {
int sub_65A710()
{
{
    DataGlobal_B04B40 = 0;
    DataGlobal_B04B38 = 128;
    DataGlobal_B04B3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x65A730
namespace gamemd {
int sub_65A730()
{
{
    DataGlobal_B04AE0 = 0;
    DataGlobal_B04AE4 = 0;
    DataGlobal_B04AE8 = 0;
    DataGlobal_B04AEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65AF50
namespace gamemd {
void sub_65AF50()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04B78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x65AF80
namespace gamemd {
void sub_65AF80()
{
{
    DataGlobal_B04BC8 = DataGlobal_B04B78 / 60.0;
}
}
} // namespace gamemd

// 0x65AFA0
namespace gamemd {
void sub_65AFA0()
{
{
    DataGlobal_B04BB0 = 1.0 / DataGlobal_B04BC8;
}
}
} // namespace gamemd

// 0x65AFC0
namespace gamemd {
void sub_65AFC0()
{
{
    DataGlobal_B04BA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x65AFE0
namespace gamemd {
void sub_65AFE0()
{
{
    DataGlobal_B04B80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x65B000
namespace gamemd {
void sub_65B000()
{
{
    DataGlobal_B04B58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x65B020
namespace gamemd {
long long sub_65B020()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04B58 - DataGlobal_B04B80);
    result = Math::RoundToInt(v0 * DataGlobal_B04B78 * 0.5);
    DataGlobal_B04BE8 = result;
    return result;
}
}
} // namespace gamemd

// 0x65B060
namespace gamemd {
void sub_65B060()
{
{
    DataGlobal_B04B88 = Math::ArcTan((double)DataGlobal_B04BE8 * 0.00390625);
}
}
} // namespace gamemd

// 0x65B090
namespace gamemd {
void sub_65B090()
{
{
    DataGlobal_B04BA0 = Math::ArcTan((double)(2 * DataGlobal_B04BE8) / DataGlobal_B04B78);
}
}
} // namespace gamemd

// 0x65B0C0
namespace gamemd {
long long sub_65B0C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04BE8) + 0.5);
    DataGlobal_B04BC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x65B0F0
namespace gamemd {
int sub_65B0F0()
{
{
    DataGlobal_B04B70 = 0;
    DataGlobal_B04B72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65B100
namespace gamemd {
int sub_65B100()
{
{
    DataGlobal_B04B90 = 0;
    DataGlobal_B04B94 = 0;
    DataGlobal_B04B98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65B120
namespace gamemd {
int sub_65B120()
{
{
    DataGlobal_B04BC0 = 0;
    DataGlobal_B04BB8 = 128;
    DataGlobal_B04BBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x65B140
namespace gamemd {
int sub_65B140()
{
{
    DataGlobal_B04B60 = 0;
    DataGlobal_B04B64 = 0;
    DataGlobal_B04B68 = 0;
    DataGlobal_B04B6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65C550
namespace gamemd {
char * RAMFileClass::nullsub_0_5()
{
{
    return &DataGlobal_830620.__pad_579C[14464];
}
}
} // namespace gamemd

// 0x65C570
namespace gamemd {
int nullsub_0_7()
{
return 0;
}
} // namespace gamemd

// 0x65C580
namespace gamemd {
char nullsub_0_8()
{
return 1;
}
} // namespace gamemd

// 0x65C590
namespace gamemd {
void nullsub_0_9()
{
  ;
}
} // namespace gamemd

// 0x65C890
namespace gamemd {
unsigned int * E4Recv_65C890::sub_65C890(int a2, int a3)
{
{
    *(void**)this = a2;
    this->M4 = a3;
    return this;
}
}
} // namespace gamemd

// 0x65D6C0
namespace gamemd {
void sub_65D6C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04C40 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x65D6F0
namespace gamemd {
void sub_65D6F0()
{
{
    DataGlobal_B04C90 = DataGlobal_B04C40 / 60.0;
}
}
} // namespace gamemd

// 0x65D710
namespace gamemd {
void sub_65D710()
{
{
    DataGlobal_B04C78 = 1.0 / DataGlobal_B04C90;
}
}
} // namespace gamemd

// 0x65D730
namespace gamemd {
void sub_65D730()
{
{
    DataGlobal_B04C70 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x65D750
namespace gamemd {
void sub_65D750()
{
{
    DataGlobal_B04C48 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x65D770
namespace gamemd {
void sub_65D770()
{
{
    DataGlobal_B04C20 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x65D790
namespace gamemd {
long long sub_65D790()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04C20 - DataGlobal_B04C48);
    result = Math::RoundToInt(v0 * DataGlobal_B04C40 * 0.5);
    DataGlobal_B04C98 = result;
    return result;
}
}
} // namespace gamemd

// 0x65D7D0
namespace gamemd {
void sub_65D7D0()
{
{
    DataGlobal_B04C50 = Math::ArcTan((double)DataGlobal_B04C98 * 0.00390625);
}
}
} // namespace gamemd

// 0x65D800
namespace gamemd {
void sub_65D800()
{
{
    DataGlobal_B04C68 = Math::ArcTan((double)(2 * DataGlobal_B04C98) / DataGlobal_B04C40);
}
}
} // namespace gamemd

// 0x65D830
namespace gamemd {
long long sub_65D830()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04C98) + 0.5);
    DataGlobal_B04C8C = result;
    return result;
}
}
} // namespace gamemd

// 0x65D860
namespace gamemd {
int sub_65D860()
{
{
    DataGlobal_B04C38 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65D870
namespace gamemd {
int sub_65D870()
{
{
    DataGlobal_B04C58 = 0;
    DataGlobal_B04C5C = 0;
    DataGlobal_B04C60 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65D890
namespace gamemd {
int sub_65D890()
{
{
    DataGlobal_B04C88 = 0;
    DataGlobal_B04C80 = 128;
    DataGlobal_B04C84 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x65D8B0
namespace gamemd {
int sub_65D8B0()
{
{
    DataGlobal_B04C28 = 0;
    DataGlobal_B04C2C = 0;
    DataGlobal_B04C30 = 0;
    DataGlobal_B04C34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65D8D0
namespace gamemd {
char ReturnFalse3()
{
return 0;
}
} // namespace gamemd

// 0x65E650
namespace gamemd {
char sub_65E650(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x65EAB0
namespace gamemd {
int globalHelper_05EAB0(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6)
{
{
    int v7;
    int v8;
    int v9;
    MouseClass *TransitionCount;
    int v11;
    int v12;
    char v13;
    MouseClass *v15;
    int v16;
    int v17;
    int v18[3];
    v7 = *(int *)(*(int *)&HouseClass_Player.__pad_5568[8040] + 4 * a2);
    v16 = v7;
    v15 = 0;
    if ( (int)aP2 > 0 )
  {
    while ( 1 )
    {
    ++*(int *)&HouseClass_Player.__pad_5568[21752];
    v8 = (*(int (__thiscall **)(int, unsigned int *))(*(int *)(v7) + 140))(v7, a0);
    v9 = v8;
    --*(int *)&HouseClass_Player.__pad_5568[21752];
    if ( !v8 )
    break;
    *(char *)(v8 + 980) = 1;
    TransitionCount = (MouseClass *)*((int*)(a0) + 120);
    if ( (unsigned int)TransitionCount >= 4 )
    TransitionCount = (MouseClass *)HouseClass::GetTransitionCount(a0);
    v11 = *CellClass::FindOpenNeighbor( (int *)&DataGlobal_87C374.__pad_14B0[8132], (MouseClass *)&v17, TransitionCount, (int)&DataGlobal_B04C38, (int)&DataGlobal_B04C38, 4, 1, 0);
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 488))(v9, a4, 0);
    if ( a6 )
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 1152))(v9, a6, 1);
    if ( a5 )
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 968))(v9, a5);
    v18[0] = ((short)v11 << 8) + 128;
    ++*(int *)&HouseClass_Player.__pad_5568[21752];
    v12 = *(int *)v9;
    v18[1] = (SHIWORD(v11) << 8) + 128;
    v18[2] = 0;
    v13 = (*(int (__thiscall **)(int, int *, int))(v12 + 216))(v9, v18, 0);
    --*(int *)&HouseClass_Player.__pad_5568[21752];
    if ( !v13 )
      {
    if ( v9 )
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 32))(v9, 1);
    return (int)&v15[-1].__tail_1600D[2];
      }
    (*(void (__thiscall **)(int))(*(int *)(v9) + 492))(v9);
    v15 = (MouseClass *)((char *)(v15) + 1);
    if ( (int)v15 >= (int)aP2 )
    return (int)v15;
    v7 = v16;
    }
  }
    return (int)v15;
}
}
} // namespace gamemd

// 0x65F310
namespace gamemd {
int sub_65F310()
{
{
    DataGlobal_B04CB0 = 0;
    DataGlobal_B04CB4 = 0;
    DataGlobal_B04CB8 = 0;
    DataGlobal_B04CBC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F330
namespace gamemd {
void sub_65F330()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04CC8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x65F360
namespace gamemd {
void sub_65F360()
{
{
    DataGlobal_B04D18 = DataGlobal_B04CC8 / 60.0;
}
}
} // namespace gamemd

// 0x65F380
namespace gamemd {
void sub_65F380()
{
{
    DataGlobal_B04D00 = 1.0 / DataGlobal_B04D18;
}
}
} // namespace gamemd

// 0x65F3A0
namespace gamemd {
void sub_65F3A0()
{
{
    DataGlobal_B04CF8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x65F3C0
namespace gamemd {
void sub_65F3C0()
{
{
    DataGlobal_B04CD0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x65F3E0
namespace gamemd {
void sub_65F3E0()
{
{
    DataGlobal_B04CA8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x65F400
namespace gamemd {
long long sub_65F400()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04CA8 - DataGlobal_B04CD0);
    result = Math::RoundToInt(v0 * DataGlobal_B04CC8 * 0.5);
    DataGlobal_B04D20 = result;
    return result;
}
}
} // namespace gamemd

// 0x65F440
namespace gamemd {
void sub_65F440()
{
{
    DataGlobal_B04CD8 = Math::ArcTan((double)DataGlobal_B04D20 * 0.00390625);
}
}
} // namespace gamemd

// 0x65F470
namespace gamemd {
void sub_65F470()
{
{
    DataGlobal_B04CF0 = Math::ArcTan((double)(2 * DataGlobal_B04D20) / DataGlobal_B04CC8);
}
}
} // namespace gamemd

// 0x65F4A0
namespace gamemd {
long long sub_65F4A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04D20) + 0.5);
    DataGlobal_B04D14 = result;
    return result;
}
}
} // namespace gamemd

// 0x65F4D0
namespace gamemd {
int sub_65F4D0()
{
{
    DataGlobal_B04CC0 = 0;
    DataGlobal_B04CC2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F4E0
namespace gamemd {
int sub_65F4E0()
{
{
    DataGlobal_B04CE0 = 0;
    DataGlobal_B04CE4 = 0;
    DataGlobal_B04CE8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F500
namespace gamemd {
int sub_65F500()
{
{
    DataGlobal_B04D10 = 0;
    DataGlobal_B04D08 = 128;
    DataGlobal_B04D0C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x65F710
namespace gamemd {
int sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
{
    int result;
    HWND DlgItem;
    result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    if ( GetDlgCtrlID(hWnd) == 1059 && !HIWORD(a3) )
    *(int *)GetWindowLongA(hDlg, 8) = 1059;
    }
    else if ( a2 == 1175 )
    {
    DlgItem = GetDlgItem(hDlg, 1767);
    SendMessageA(DlgItem, 0x4B2u, 0, DataGlobal_B04CA0);
    return 0;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x65F7A0
namespace gamemd {
void sub_65F7A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04D70 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x65F7D0
namespace gamemd {
void sub_65F7D0()
{
{
    DataGlobal_B04DF0 = DataGlobal_B04D70 / 60.0;
}
}
} // namespace gamemd

// 0x65F7F0
namespace gamemd {
void sub_65F7F0()
{
{
    DataGlobal_B04DD0 = 1.0 / DataGlobal_B04DF0;
}
}
} // namespace gamemd

// 0x65F810
namespace gamemd {
void sub_65F810()
{
{
    DataGlobal_B04DC8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x65F830
namespace gamemd {
void sub_65F830()
{
{
    DataGlobal_B04D80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x65F850
namespace gamemd {
void sub_65F850()
{
{
    DataGlobal_B04D30 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x65F870
namespace gamemd {
long long sub_65F870()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04D30 - DataGlobal_B04D80);
    result = Math::RoundToInt(v0 * DataGlobal_B04D70 * 0.5);
    DataGlobal_B04DF8 = result;
    return result;
}
}
} // namespace gamemd

// 0x65F8B0
namespace gamemd {
void sub_65F8B0()
{
{
    DataGlobal_B04D90 = Math::ArcTan((double)DataGlobal_B04DF8 * 0.00390625);
}
}
} // namespace gamemd

// 0x65F8E0
namespace gamemd {
void sub_65F8E0()
{
{
    DataGlobal_B04DC0 = Math::ArcTan((double)(2 * DataGlobal_B04DF8) / DataGlobal_B04D70);
}
}
} // namespace gamemd

// 0x65F910
namespace gamemd {
long long sub_65F910()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04DF8) + 0.5);
    DataGlobal_B04DEC = result;
    return result;
}
}
} // namespace gamemd

// 0x65F940
namespace gamemd {
int sub_65F940()
{
{
    DataGlobal_B04D68 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F950
namespace gamemd {
int sub_65F950()
{
{
    DataGlobal_B04D98 = 0;
    DataGlobal_B04D9C = 0;
    DataGlobal_B04DA0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F970
namespace gamemd {
int sub_65F970()
{
{
    DataGlobal_B04DE8 = 0;
    DataGlobal_B04DE0 = 128;
    DataGlobal_B04DE4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x65F990
namespace gamemd {
int sub_65F990()
{
{
    DataGlobal_B04D38 = 0;
    DataGlobal_B04D3C = 0;
    DataGlobal_B04D40 = 0;
    DataGlobal_B04D44 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65F9B0
namespace gamemd {
int sub_65F9B0()
{
{
    g_TriggerPool = 0;
    DataGlobal_B04DB0 = 0;
    DataGlobal_B04DB4 = 1;
    DataGlobal_B04DB5 = 0;
    DataGlobal_B04DA8 = (int)&DataGlobal_7F0AAC;
    DataGlobal_B04DBC = 10;
    g_TriggerEventState = 0;
    return atexit(sub_65F9F0);
}
}
} // namespace gamemd

// 0x65F9F0
namespace gamemd {
void sub_65F9F0()
{
{
    if ( (DataGlobal_B04D28 & 1) == 0 )
  {
    DataGlobal_B04DA8 = (int)&vt_VectorClass_RadarEventClass;
    DataGlobal_B04D28 |= 1u;
    if ( g_TriggerPool )
    {
    if ( DataGlobal_B04DB5 )
      {
    __3_YAXPAX_Z(g_TriggerPool);
    g_TriggerPool = 0;
      }
    }
    DataGlobal_B04DB5 = 0;
    DataGlobal_B04DB0 = 0;
  }
}
}
} // namespace gamemd

// 0x65FA50
namespace gamemd {
int sub_65FA50()
{
{
    DataGlobal_B04D78 = 0;
    DataGlobal_B04D7A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x65FB60
namespace gamemd {
void E4Recv_65FB60::sub_65FB60()
{
{
    FogOfWar::RevealCell((int)&DataGlobal_87F7E8, this);
}
}
} // namespace gamemd

// 0x65FB70
namespace gamemd {
char sub_65FB70(int a1)
{
{
    return DataGlobal_7F09A4[16 * a1];
}
}
} // namespace gamemd
