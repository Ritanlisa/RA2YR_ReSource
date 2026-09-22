// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x6516F0
namespace gamemd {
void __usercall LogMultiplayToSync_MPDEBUG(CellStruct *a1@<ecx> a1, unsigned char *a2@<edx> a2, CellStruct *a3@<ebp> a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  INIClass *v3; // edx
  ObjectClass *v4; // ebx
  FILE *v6; // eax
  MouseClass *v7; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  CellStruct *v10; // eax
  char *Name; // eax
  int i; // edi
  CellStruct **v14; // eax
  CellStruct *v16; // ebp
  CellStruct **v18; // edi
  CellStruct *v33; // edi
  int *ebx60; // ebx
  CellStruct *v34; // ebp
  __int16 v36; // ax
  CellStruct *v40; // ebp
  ObjectClass *v41; // ebx
  __int16 v43; // ax
  int visibilityFlags; // eax
  unsigned __int8 *v48; // edi
  CellStruct *v49; // [esp-4h] [ebp-3B4h]
  CellStruct *v50; // [esp-4h] [ebp-3B4h]
  CellStruct *v51; // [esp+0h] [ebp-3B0h]
  CellStruct *v52; // [esp+0h] [ebp-3B0h]
  CellStruct *aP2; // [esp+Ch] [ebp-3A4h] BYREF
  CellStruct *v55; // [esp+14h] [ebp-39Ch]
  ObjectClass *v58; // [esp+24h] [ebp-38Ch]
  unsigned __int8 *v60; // [esp+2Ch] [ebp-384h]
  char Destination[128]; // [esp+B0h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+1B0h] [ebp-200h] BYREF

  v60 = a2; /*0x651701*/
  v3 = *(INIClass **)(HouseClass_Player.field_0 + 48); /*0x651709*/
  v55 = a1; /*0x65170c*/
  v4 = (ObjectClass *)(828 * (_DWORD)a1 + 11298400); /*0x65171e*/
  v58 = v4; /*0x65172d*/
  sprintf(Buffer, (ObjectClass *)&stru_830620[35700], v3); /*0x651731*/
  Debug::Log(); /*0x651743*/
  v6 = fopen(Buffer, Mode); /*0x651755*/
  v7 = (MouseClass *)v6; /*0x65175a*/
  if ( v6 ) /*0x651761*/
  {
  int v57; // [esp+1Ch] [ebp-394h] BYREF
  bool v22; // cc
    fprintf((MouseClass *)v6, &stru_830620[34848], v51); /*0x651788*/
    ModuleVersion = GetModuleVersion(); /*0x651790*/
    fprintf(v7, &stru_830620[34832], (CellStruct *)ModuleVersion); /*0x65179c*/
    ModuleInternalVersion = GetModuleInternalVersion((int)&HouseClass_Player[44948]); /*0x6517a9*/
    fprintf(v7, &stru_830620[34808], (CellStruct *)ModuleInternalVersion); /*0x6517b5*/
  char v61[128]; // [esp+30h] [ebp-380h] BYREF
    v61[0] = 0; /*0x6517c6*/
    Time::FormatDate(v61); /*0x6517cb*/
    String::CopyConstant(Destination); /*0x6517e1*/
  char v63[128]; // [esp+130h] [ebp-280h] BYREF
    v10 = (CellStruct *)String::FormatDword(v63); /*0x6517f3*/
    fprintf(v7, (const char *const)stru_821F08.headNode, v10); /*0x6517ff*/
    int v59 = 5; /*0x65180f*/
  int v56; // [esp+18h] [ebp-398h] BYREF
    HIBYTE(v56) = 0; /*0x65181b*/
    GetVersionString(&v59, (_BYTE *)&v56 + 3, 0, 0); /*0x651820*/
    Name = PlayerType::GetName(); /*0x65183d*/
    fprintf(v7, g_Str_Trace_CPU__s__MMX__s__Vendor_, (CellStruct *)Name); /*0x651849*/
    fprintf(v7, g_Str_Trace_Frames_, *(CellStruct **)&HouseClass_Player[45112]); /*0x65185b*/
    if ( g_FrameCounter_Samples ) /*0x65186b*/
      unsigned int v12 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x651874*/
    else
      v12 = 0; /*0x651878*/
    fprintf(v7, g_Str_Trace_Average_FPS_, (CellStruct *)v12); /*0x651881*/
    fprintf(v7, g_Str_Trace_Max_MaxAhead_, *(CellStruct **)&HouseClass_Player[30748]); /*0x651893*/
    fprintf(v7, g_Str_Trace_Latency_setting_, *(CellStruct **)&HouseClass_Player[40528]); /*0x6518a4*/
    fprintf(v7, g_Str_Trace_Game_speed_setting_, *(CellStruct **)&HouseClass_Player[44564]); /*0x6518b6*/
    fprintf(v7, &stru_830620[34788], *(CellStruct **)&HouseClass_Player[30728]); /*0x6518c8*/
    fprintf(v7, &stru_830620[35688], (CellStruct *)*(&g_MatrixTransformState + 207 * (_DWORD)a1 + 7702)); /*0x6518d7*/
    fprintf(v7, &stru_830620[35676], a1); /*0x6518e6*/
    if ( *(_DWORD *)&stru_87C374[45748] ) /*0x6518f6*/
    {
      for ( i = 0; /*0x651901*/
            i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45748] + 72))(*(_DWORD *)&stru_87C374[45748]);
            ++i )
      {
        v14 = (CellStruct **)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374[45748] + 76))( /*0x65190c*/
                               *(_DWORD *)&stru_87C374[45748],
                               i);
        if ( v14 ) /*0x651911*/
        {
          aP2 = *v14; /*0x651919*/
          fprintf(v7, g_Str_Trace_Local_address___d__d__d, (CellStruct *)(unsigned __int8)aP2); /*0x651937*/
        }
      }
    }
    v49 = a3; /*0x65194f*/
    char * v15 = &HouseClass_Player[30840]; /*0x651950*/
    do /*0x651a2e*/
    {
      if ( *(v15 - 80) ) /*0x651955*/
      {
        Network::CopyAddress((_DWORD *)v15 + 3, &aP2, (int)&v57); /*0x651970*/
        fprintf(v7, g_Str_Trace_Name_, (CellStruct *)(v15 - 80)); /*0x65197c*/
        fprintf(v7, &stru_830620[34764], (CellStruct *)(unsigned __int8)v57); /*0x6519b2*/
        fprintf(v7, g_Str_Trace_Max_avg_round_trip_, *(CellStruct **)v15); /*0x6519c0*/
        fprintf(v7, g_Str_Trace_Max_round_trip_, *((CellStruct **)v15 - 4)); /*0x6519cf*/
        fprintf(v7, g_Str_Trace_Resends_, *((CellStruct **)v15 - 3)); /*0x6519de*/
        fprintf(v7, g_Str_Trace_Frame_sync_stalls_, *((CellStruct **)v15 + 1)); /*0x6519f0*/
        fprintf(v7, g_Str_Trace_Command_cound_stalls_, *((CellStruct **)v15 + 2)); /*0x6519ff*/
        fprintf(v7, g_Str_Trace_Lost_, *((CellStruct **)v15 - 2)); /*0x651a0e*/
        fprintf(v7, g_Str_Trace_Percent_lost_, *((CellStruct **)v15 - 1)); /*0x651a1d*/
      }
      v15 += 104; /*0x651a25*/
    }
    while ( (int)v15 < (int)&HouseClass_Player[31672] ); /*0x651a2e*/
    v16 = 0; /*0x651a34*/
    int * v17 = dword_B04474; /*0x651a36*/
    do /*0x651a68*/
    {
      if ( v16 == v55 ) /*0x651a3f*/
        fprintf(v7, &stru_830620[35656], v16); /*0x651a4a*/
      else
        fprintf(v7, &stru_830620[34752], v16); /*0x651a56*/
      ++v17; /*0x651a5e*/
      v16 = (CellStruct *)((char *)v16 + 1); /*0x651a61*/
    }
    while ( (int)v17 < (int)&dword_B04874 ); /*0x651a68*/
    v55 = 0; /*0x651a6a*/
    v18 = (CellStruct **)&v4->ambientSoundController[2]; /*0x651a72*/
    int v19 = 8; /*0x651a75*/
    do /*0x651aaa*/
    {
      if ( *v18 != (CellStruct *)-1 ) /*0x651a7f*/
      {
        v55 = *v18; /*0x651a84*/
        fprintf(v7, &stru_830620[35608], (CellStruct *)(v18 - 14)); /*0x651a9e*/
      }
      v18 += 23; /*0x651aa6*/
      --v19; /*0x651aa9*/
    }
    while ( v19 ); /*0x651aaa*/
    v57 = v4[4].customSound_controller[0]; /*0x651ab8*/
    int v54 = 0; /*0x651abc*/
    if ( (int)v55 > 0 ) /*0x651ac4*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651acd*/
      do /*0x651b6b*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651ad9*/
        {
          fprintf(v7, &stru_830620[35552], aP2); /*0x651ae4*/
          int v20 = 0; /*0x651af2*/
          if ( v4[4].ambientSoundController[1] > 0 ) /*0x651af6*/
          {
            int v21 = v57 + 64; /*0x651afc*/
            do /*0x651b4f*/
            {
              if ( *(char *)(v21 - 32) == v54 ) /*0x651b07*/
                fprintf(v7, &stru_830620[35464], *(CellStruct **)(v21 - 64)); /*0x651b3b*/
              v21 += 104; /*0x651b49*/
              ++v20; /*0x651b4c*/
            }
            while ( v20 < v4[4].ambientSoundController[1] ); /*0x651b4f*/
          }
        }
        v22 = ++v54 < (int)v55; /*0x651b61*/
        aP2 = (CellStruct *)((char *)aP2 + 92); /*0x651b67*/
      }
      while ( v22 ); /*0x651b6b*/
    }
    int v23 = v4[4].ambientSoundController[1]; /*0x651b71*/
    v54 = 0; /*0x651b77*/
    v57 += 104 * v23; /*0x651b92*/
    if ( (int)v55 > 0 ) /*0x651b96*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651b9f*/
      do /*0x651c50*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651bab*/
        {
          fprintf(v7, &stru_830620[35412], aP2); /*0x651bba*/
          int v24 = 0; /*0x651bc8*/
          if ( v4[4].ambientSoundController[2] > 0 ) /*0x651bcc*/
          {
            int v25 = v57 + 92; /*0x651bd2*/
            do /*0x651c34*/
            {
              if ( *(char *)(v25 - 60) == v54 ) /*0x651bdd*/
                fprintf(v7, &stru_830620[35288], *(CellStruct **)(v25 - 92)); /*0x651c20*/
              v25 += 104; /*0x651c2e*/
              ++v24; /*0x651c31*/
            }
            while ( v24 < v4[4].ambientSoundController[2] ); /*0x651c34*/
          }
        }
        v22 = ++v54 < (int)v55; /*0x651c46*/
        aP2 = (CellStruct *)((char *)aP2 + 92); /*0x651c4c*/
      }
      while ( v22 ); /*0x651c50*/
    }
    int v26 = v4[4].ambientSoundController[2]; /*0x651c56*/
    v54 = 0; /*0x651c60*/
    v57 += 104 * v26; /*0x651c77*/
    if ( (int)v55 > 0 ) /*0x651c7b*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651c84*/
      do /*0x651d1d*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651c90*/
        {
          fprintf(v7, &stru_830620[35232], aP2); /*0x651c9b*/
          int v27 = 0; /*0x651ca9*/
          if ( v4[4].ambientSoundController[3] > 0 ) /*0x651cad*/
          {
            int v28 = v57 + 64; /*0x651cb3*/
            do /*0x651d01*/
            {
              if ( *(char *)(v28 - 32) == v54 ) /*0x651cbe*/
                fprintf(v7, &stru_830620[35152], *(CellStruct **)(v28 - 64)); /*0x651ced*/
              v28 += 104; /*0x651cfb*/
              ++v27; /*0x651cfe*/
            }
            while ( v27 < v4[4].ambientSoundController[3] ); /*0x651d01*/
          }
        }
        v22 = ++v54 < (int)v55; /*0x651d13*/
        aP2 = (CellStruct *)((char *)aP2 + 92); /*0x651d19*/
      }
      while ( v22 ); /*0x651d1d*/
    }
    int v29 = v4[4].ambientSoundController[3]; /*0x651d23*/
    v54 = 0; /*0x651d2d*/
    v57 += 104 * v29; /*0x651d44*/
    if ( (int)v55 > 0 ) /*0x651d48*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651d51*/
      do /*0x651de2*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651d5d*/
        {
          fprintf(v7, &stru_830620[35096], aP2); /*0x651d68*/
          int v30 = 0; /*0x651d76*/
          if ( v4[4].ambientSoundController[4] > 0 ) /*0x651d7a*/
          {
            int v31 = v57 + 36; /*0x651d80*/
            do /*0x651dc6*/
            {
              if ( *(char *)(v31 - 4) == v54 ) /*0x651d8b*/
                fprintf(v7, &stru_830620[35032], *(CellStruct **)(v31 - 36)); /*0x651db2*/
              v31 += 104; /*0x651dc0*/
              ++v30; /*0x651dc3*/
            }
            while ( v30 < v4[4].ambientSoundController[4] ); /*0x651dc6*/
          }
        }
        v22 = ++v54 < (int)v55; /*0x651dd8*/
        aP2 = (CellStruct *)((char *)aP2 + 92); /*0x651dde*/
      }
      while ( v22 ); /*0x651de2*/
    }
    v33 = 0; /*0x651dec*/
    v55 = 0; /*0x651dee*/
    ebx60 = &v58[4].customSound_controller[1]; /*0x651df2*/
    do /*0x651eda*/
    {
      fprintf(v7, &stru_830620[33972], v33); /*0x651dff*/
      v34 = 0; /*0x651e06*/
      if ( *ebx60 > 0 ) /*0x651e0d*/
      {
        aP2 = 0; /*0x651e13*/
        do /*0x651ec5*/
        {
          char * v35 = (char *)aP2 + ebx60[5]; /*0x651e1e*/
          fprintf(v7, &stru_830620[33956], v34); /*0x651e2a*/
          v36 = *((_WORD *)v35 + 18); /*0x651e2f*/
          if ( v36 == 43 || v36 == 19 ) /*0x651e40*/
          {
            char * v38 = AbstractType::FindName((void *)v36); /*0x651e68*/
            fprintf(v7, &stru_830620[33920], (CellStruct *)v38); /*0x651e74*/
          }
          else
          {
            char * v37 = AbstractType::FindName((void *)v36); /*0x651e4d*/
            fprintf(v7, &stru_830620[33936], (CellStruct *)v37); /*0x651e59*/
          }
          char v39 = v35[32]; /*0x651e7c*/
          if ( v39 == -1 ) /*0x651e81*/
            fprintf(v7, &stru_830620[35016], v49); /*0x651ead*/
          else
            fprintf(v7, &stru_830620[33580], (CellStruct *)&v58->__pad_0[92 * v39 + 12]); /*0x651e9d*/
          v34 = (CellStruct *)((char *)v34 + 1); /*0x651ebb*/
          v22 = (int)v34 < *ebx60; /*0x651ebf*/
          aP2 = (CellStruct *)((char *)aP2 + 40); /*0x651ec1*/
        }
        while ( v22 ); /*0x651ec5*/
        v33 = v55; /*0x651ecb*/
      }
      v33 = (CellStruct *)((char *)v33 + 1); /*0x651ecf*/
      ++ebx60; /*0x651ed0*/
      v55 = v33; /*0x651ed6*/
    }
    while ( (int)v33 < 5 ); /*0x651eda*/
    fprintf(v7, &stru_830620[33844], v49); /*0x651ee6*/
    v40 = 0; /*0x651eef*/
    if ( v58[4].visibilityFlags > 0 ) /*0x651efa*/
    {
      aP2 = 0; /*0x651f00*/
      do /*0x651fb7*/
      {
        v41 = v58; /*0x651f04*/
        char * v42 = (char *)aP2 + *(_DWORD *)&v58[4].needsRedraw; /*0x651f0c*/
        fprintf(v7, &stru_830620[33956], v40); /*0x651f1c*/
        v43 = *((_WORD *)v42 + 18); /*0x651f21*/
        if ( v43 == 43 || v43 == 19 ) /*0x651f32*/
        {
          char * v45 = AbstractType::FindName((void *)v43); /*0x651f5a*/
          fprintf(v7, &stru_830620[33920], (CellStruct *)v45); /*0x651f66*/
        }
        else
        {
          char * v44 = AbstractType::FindName((void *)v43); /*0x651f3f*/
          fprintf(v7, &stru_830620[33936], (CellStruct *)v44); /*0x651f4b*/
        }
        char v46 = v42[32]; /*0x651f6e*/
        if ( v46 == -1 ) /*0x651f73*/
          fprintf(v7, &stru_830620[35016], v50); /*0x651f9b*/
        else
          fprintf(v7, &stru_830620[33580], (CellStruct *)&v41->__pad_0[92 * v46 + 12]); /*0x651f8b*/
        visibilityFlags = v41[4].visibilityFlags; /*0x651fa7*/
        v40 = (CellStruct *)((char *)v40 + 1); /*0x651fad*/
        aP2 = (CellStruct *)((char *)aP2 + 40); /*0x651fb3*/
      }
      while ( (int)v40 < visibilityFlags ); /*0x651fb7*/
    }
    fprintf(v7, &stru_830620[33528], *(CellStruct **)&v58->__pad_0[4]); /*0x651fcb*/
    v48 = v60; /*0x651fd0*/
    if ( v60 ) /*0x651fda*/
    {
      fprintf(v7, &stru_830620[33476], v52); /*0x651fe2*/
      fprintf(v7, &stru_830620[33456], (CellStruct *)*v48); /*0x651ff2*/
      fprintf(v7, &stru_830620[33436], *(CellStruct **)(v48 + 3)); /*0x652001*/
      fprintf(v7, &stru_830620[33416], (CellStruct *)(char)v48[2]); /*0x652011*/
      fprintf(v7, &stru_830620[33396], *(CellStruct **)(v48 + 7)); /*0x652020*/
      fprintf(v7, &stru_830620[33376], (CellStruct *)*(unsigned __int16 *)(v48 + 11)); /*0x652032*/
      fprintf(v7, &stru_830620[33356], (CellStruct *)v48[13]); /*0x652046*/
    }
    fclose(v7); /*0x65204f*/
  }
  else
  {
    GetLastError(); /*0x651764*/
    Debug::Log(); /*0x651770*/
  }
}
}
} // namespace gamemd
