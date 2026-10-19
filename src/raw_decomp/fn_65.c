// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00650A90  AllocateTriggerLog  this=-  sig=ida-proto ====
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
  ... [21186 chars total]



// ==== 0x006516F0  LogMultiplayToSync_MPDEBUG  this=-  sig=csp ====
void __fastcall LogMultiplayToSync_MPDEBUG(int a1, unsigned __int8 *a2)
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
    HIBYTE(v57) = 0; /*0x65181b*/
    GetVersionString(&v60, (_BYTE *)&v57 + 3, 0, 0); /*0x651820*/
    v10 = (char *)&off_821F08; /*0x65182b*/
    if ( !HIBYTE(v57) ) /*0x651830*/
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
            BYTE1(v54),
            BYTE2(v54),
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
        fprintf(v6, "Address: %d.%d.%d.%d\n", (unsigned __int8)v58, BYTE1(v58), BYTE2(v58), HIBYTE(v58));
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



// ==== 0x00652100  nullsub_217  this=-  sig=ida-proto ====
void nullsub_217()
{
  ; /*0x652100*/
}



// ==== 0x00652110  Network_Process_652110  this=-  sig=ida-proto ====
char *__fastcall Network_Process_652110(int a1, int a2)
{
  char *result; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax

  result = *(char **)&dword_A8B238; /*0x652110*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x65211e*/
  {
    v4 = *(_DWORD *)(a1 + 24 * a2); /*0x652135*/
    v5 = a1 + 24 * a2; /*0x652138*/
    if ( byte_A8DBA0 ) /*0x652142*/
    {
      LOWORD(v6) = Math::RoundToInt(-60.0 / ((double)(int)dword_A8B558 / (double)(unsigned int)dword_A8B554)); /*0x652168*/
      v7 = (dword_A8E2D4 >> 1) + (*(_DWORD *)(v5 + 16) >> 1) - v6 / 2; /*0x652183*/
    }
    else
    {
      v7 = (unsigned int)IPXManagerClass::CheckStatus(&unk_A8E9C0, a2) >> 1; /*0x652192*/
    }
    result = (char *)(*(_DWORD *)&stru_A8EB00.?[416] - v7 * *(_DWORD *)&g_MissionQueueFrame.waypoints[282] / 0x3C - v4); /*0x6521af*/
    dword_A8DB7C[a2] = result; /*0x6521b2*/
  }
  else
  {
    dword_A8DB7C[a2] = 0; /*0x652120*/
  }
  return result; /*0x65212b*/
}



// ==== 0x006521C0  Network::RecordEvent  this=Network  sig=csp ====
char __stdcall Network_RecordEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  char *v27; // edi

  *(_DWORD *)((char *)&a1 + 3) = dword_A8ED84; /*0x6521c5*/
  if ( dword_A802C8 >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &byte_A802D4[111 * dword_A802D0]; /*0x6521eb*/
  qmemcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
  v27 += 108; /*0x6521f2*/
  *(_WORD *)v27 = a27; /*0x6521f4*/
  v27[2] = BYTE2(a27); /*0x6521f6*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x652205*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x652215*/
  ++dword_A802C8; /*0x652220*/
  return 1; /*0x652227*/
}



// ==== 0x00652230  ObjectClass::Render_Show  this=AbstractClass  sig=csp ====
char __thiscall Render_Show(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  char result; // al
  int *v5; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-18h]
  int v7; // [esp+0h] [ebp-8h]

  v2 = (unsigned int)dword_A8ED84 + 1; /*0x652240*/
  if ( dword_A8B24C == 2 ) /*0x652246*/
    v2 = dword_A8B554 * (((unsigned int)dword_A8ED84 + dword_A8B554) / dword_A8B554); /*0x652255*/
  *(_DWORD *)(this + 3) = v2; /*0x652258*/
  if ( dword_8B41F8 >= 0x4000 ) /*0x652265*/
  {
    result = dword_A8B238[0]; /*0x6522b7*/
    if ( dword_A8B238[0] && dword_A8B238[0] != 5 ) /*0x6522c7*/
    {
      if ( dword_A8B238[0] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++dword_A8DAB4; /*0x6522e4*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Queue_CPP, 8878); /*0x65230f*/
      v5 = (int *)GetStringCSF(g_Str_TXT_QUEUE_FULL, 0, g_Str_File_Queue_CPP, 8878); /*0x65231a*/
      Dialog::ShowMessageBox(v5, StringCSF, 0, 0, 0, v7); /*0x652324*/
      dword_A8B8B8 = 0; /*0x652335*/
      --dword_A8DAB4; /*0x652341*/
      dword_A8B8BC = 0; /*0x652347*/
      byte_A8E9A0 = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( dword_A8B238[0] == 4 ) /*0x652366*/
      {
        byte_B0BD78 = 1; /*0x65236a*/
        byte_A8B8C1 = 1; /*0x65236f*/
        byte_A8B8C2 = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return ToggleDisplayMode(0); /*0x65238c*/
    }
  }
  else
  {
    if ( dword_8B41FC ) /*0x65226e*/
      v3 = dword_8B41FC - 1; /*0x652277*/
    else
      v3 = 0x3FFF; /*0x652270*/
    dword_8B41FC = v3; /*0x65227b*/
    qmemcpy(&byte_8B4204[111 * v3], (const void *)this, 0x6Fu); /*0x652290*/
    dword_A70204[dword_8B41FC] = timeGetTime(); /*0x6522a3*/
    return ++dword_8B41F8; /*0x6522af*/
  }
  return result; /*0x6522a2*/
}



// ==== 0x006523A0  Network::SendUnreachable  this=Network  sig=csp ====
int Network::SendUnreachable(Network *this)
{
  int result; // eax
  int QueueCount; // edi
  int i; // ebx
  void *v4; // esi
  char *v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int Ticks; // [esp+0h] [ebp-1E4h]
  int v11[3]; // [esp+10h] [ebp-1D4h] BYREF
  int v12[11]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v13; // [esp+48h] [ebp-19Ch]
  char v14; // [esp+4Ah] [ebp-19Ah]

  Debug::Log(); /*0x6523ab*/
  result = *(_DWORD *)&dword_A8B238; /*0x6523b0*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6523bb*/
  {
    Network::Disconnect((Network *)&unk_A8E9C0); /*0x6523c9*/
    QueueCount = Network::GetQueueCount(&unk_A8E9C0); /*0x6523d8*/
    for ( i = 0; i < *(int *)&stru_B052C0.__pad_0[32]; ++i ) /*0x6523e7*/
    {
      memset(v12, 0, sizeof(v12)); /*0x6523f8*/
      v13 = 0; /*0x6523fa*/
      v14 = 0; /*0x6523fc*/
      v12[0] = 47; /*0x652402*/
      strcpy((char *)&v12[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x65242c*/
      v4 = (void *)Network::checkTimeout((Network *)&stru_B052C0.__pad_0[16], i); /*0x65243f*/
      if ( v4 ) /*0x652443*/
      {
        v5 = ToWideStringChar((char *)*dword_A8DA78); /*0x65244d*/
        if ( _strcmpi((char *)v4, v5) ) /*0x652454*/
        {
          Debug::Log(); /*0x652466*/
          v6 = (int *)Network::processAcknowledgment((Network *)&stru_B052C0.__pad_0[16], v4); /*0x652474*/
          v11[0] = *v6; /*0x65247b*/
          v11[1] = v6[1]; /*0x652485*/
          v11[2] = v6[2]; /*0x652491*/
          LOWORD(v7) = Network::handleDisconnect((Network *)&stru_B052C0.__pad_0[16], v4); /*0x652495*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)v12, 47, 1, (int)v11, v7, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = Timer::GetTicks(); /*0x6524d3*/
    while ( Network::GetQueueCount(&unk_A8E9C0) > QueueCount ) /*0x6524e6*/
    {
      v8 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x6524fe*/
        if ( v9 >= 300 ) /*0x652504*/
          break; /*0x652504*/
        v8 = 300 - v9; /*0x652506*/
      }
      if ( !v8 ) /*0x65250a*/
        break; /*0x65250a*/
      Event::Dispatch(); /*0x65250c*/
    }
    result = *(_DWORD *)&dword_A8B238; /*0x65251f*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x65252a*/
      return Connection::Close((Connection *)&unk_A8E9C0); /*0x652531*/
  }
  return result; /*0x652536*/
}



// ==== 0x00652540  ObjectClass::Network_Process  this=ObjectClass  sig=csp ====
int __thiscall Network_Process_652540(ObjectClass *this)
{
  char *vtable0; // eax

  vtable0 = (char *)this->AbstractClass; /*0x652540*/
  if ( this->AbstractClass ) /*0x652540*/
  {
    this->? = (void *)(((unsigned __int8)this->? + 1) & 0x7F); /*0x65254e*/
    this->AbstractClass = vtable0 - 1; /*0x652551*/
  }
  return (int)this->AbstractClass; /*0x652555*/
}



// ==== 0x00652560  ObjectClass::Network_Process  this=ObjectClass  sig=csp ====
char __thiscall Network_Process_652560(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x652560*/
  v3 = a2; /*0x652563*/
  if ( a2 >= uniqueId ) /*0x652569*/
    return 0; /*0x65258c*/
  v4 = uniqueId - 1; /*0x65256b*/
  this->? = v4; /*0x65256e*/
  if ( a2 < v4 ) /*0x652571*/
  {
    do /*0x652584*/
    {
      ++v3; /*0x652577*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x65257b*/
    }
    while ( v3 < this->? ); /*0x652584*/
  }
  return 1; /*0x652589*/
}



// ==== 0x006525A0  ObjectClass::Network_Process_6525A0  this=ObjectClass  sig=csp ====
char __thiscall sub_6525A0(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x6525ac*/
    return 0; /*0x6525ac*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x6525c0*/
  if ( !v3 ) /*0x6525c7*/
    return 0; /*0x652620*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x6525d5*/
  {
    v5 = 8 * i; /*0x6525d9*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x6525e2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x6525e7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x6525fb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x652606*/
  *(_DWORD *)this = v3; /*0x652608*/
  *(_DWORD *)(this + 8) = v7; /*0x65260a*/
  *(_DWORD *)(this + 16) = 0; /*0x65260d*/
  return 1; /*0x652614*/
}



// ==== 0x00652630  sub_652630  this=-  sig=ida-proto ====
int __cdecl sub_652630(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x652640*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x00652660  sub_652660  this=-  sig=ida-proto ====
int sub_652660()
{
  dword_B048B0 = 0; /*0x652662*/
  dword_B048B4 = 0; /*0x652667*/
  dword_B048B8 = 0; /*0x65266c*/
  dword_B048BC = 0; /*0x652671*/
  return 0; /*0x652676*/
}



// ==== 0x00652680  sub_652680  this=-  sig=ida-proto ====
void sub_652680()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65268c*/
  dbl_B048D8 = Math::Sqrt(v0 + v0); /*0x65269e*/
}



// ==== 0x006526B0  sub_6526B0  this=-  sig=ida-proto ====
void sub_6526B0()
{
  dbl_B049F8 = dbl_B048D8 / 60.0; /*0x6526bc*/
}



// ==== 0x006526D0  sub_6526D0  this=-  sig=ida-proto ====
void sub_6526D0()
{
  dbl_B049E0 = 1.0 / dbl_B049F8; /*0x6526dc*/
}



// ==== 0x006526F0  sub_6526F0  this=-  sig=ida-proto ====
void sub_6526F0()
{
  dbl_B049D8 = 0.0174532925199433 * 45.0; /*0x6526fc*/
}



// ==== 0x00652710  sub_652710  this=-  sig=ida-proto ====
void sub_652710()
{
  dbl_B048E8 = 0.0174532925199433 * 60.0; /*0x65271c*/
}



// ==== 0x00652730  sub_652730  this=-  sig=ida-proto ====
void sub_652730()
{
  dbl_B048A0 = 0.0174532925199433 * 90.0; /*0x65273c*/
}



// ==== 0x00652750  sub_652750  this=-  sig=ida-proto ====
__int64 sub_652750()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B048A0 - dbl_B048E8); /*0x652762*/
  result = Math::RoundToInt(v0 * dbl_B048D8 * 0.5); /*0x652776*/
  dword_B04A34 = result; /*0x65277b*/
  return result; /*0x652780*/
}



// ==== 0x00652790  sub_652790  this=-  sig=ida-proto ====
void sub_652790()
{
  dbl_B048F0 = Math::ArcTan((double)dword_B04A34 * 0.00390625); /*0x6527a7*/
}



// ==== 0x006527C0  sub_6527C0  this=-  sig=ida-proto ====
void sub_6527C0()
{
  dbl_B04970 = Math::ArcTan((double)(2 * dword_B04A34) / dbl_B048D8); /*0x6527e2*/
}



// ==== 0x006527F0  sub_6527F0  this=-  sig=ida-proto ====
__int64 sub_6527F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04A34) + 0.5); /*0x65280b*/
  dword_B049F4 = result; /*0x652810*/
  return result; /*0x652816*/
}



// ==== 0x00652820  sub_652820  this=-  sig=ida-proto ====
int sub_652820()
{
  dword_B048C0 = 0; /*0x652822*/
  return 0; /*0x65282e*/
}



// ==== 0x00652830  sub_652830  this=-  sig=ida-proto ====
int sub_652830()
{
  dword_B04900 = 0; /*0x652832*/
  dword_B04904 = 0; /*0x652837*/
  dword_B04908 = 0; /*0x65283c*/
  return 0; /*0x652841*/
}



// ==== 0x00652850  sub_652850  this=-  sig=ida-proto ====
int sub_652850()
{
  dword_B049F0 = 0; /*0x652855*/
  dword_B049E8 = 128; /*0x65285f*/
  dword_B049EC = 128; /*0x652864*/
  return 128; /*0x652869*/
}



// ==== 0x00652870  sub_652870  this=-  sig=ida-proto ====
int sub_652870()
{
  GadgetClass::Construct(stru_B04A10, 0, 0, 0, 0, 159, 1); /*0x652884*/
  stru_B04A10[0] = (int)&RadarClass::RTacticalClass::`vftable'; /*0x65288e*/
  return atexit(sub_6528A0); /*0x65289e*/
}



// ==== 0x006528A0  sub_6528A0  this=-  sig=ida-proto ====
void __cdecl sub_6528A0()
{
  if ( (byte_B048A8 & 1) == 0 ) /*0x6528aa*/
  {
    byte_B048A8 |= 1u; /*0x6528ae*/
    GadgetClass::Dtor(stru_B04A10); /*0x6528b9*/
  }
}



// ==== 0x006528C0  ScreenEffect::StubReturnFalse  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturnFalse()
{
  ; /*0x6528c0*/
}



// ==== 0x006528D0  sub_6528D0  this=-  sig=ida-proto ====
int sub_6528D0()
{
  ShapeButtonClass::Init(stru_B04978); /*0x6528d5*/
  return atexit(sub_6528F0); /*0x6528e5*/
}



// ==== 0x006528F0  sub_6528F0  this=-  sig=ida-proto ====
void __cdecl sub_6528F0()
{
  if ( (byte_B048A8 & 2) == 0 ) /*0x6528fa*/
  {
    byte_B048A8 |= 2u; /*0x6528fe*/
    ShapeButtonClass::Destructor((int)stru_B04978); /*0x652909*/
  }
}



// ==== 0x00652910  ScreenEffect::StubReturnVoid  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturnVoid()
{
  ; /*0x652910*/
}



// ==== 0x00652920  sub_652920  this=-  sig=ida-proto ====
int sub_652920()
{
  ShapeButtonClass::Init(stru_B04910); /*0x652925*/
  return atexit(sub_652940); /*0x652935*/
}



// ==== 0x00652940  sub_652940  this=-  sig=ida-proto ====
void __cdecl sub_652940()
{
  if ( (byte_B048A8 & 4) == 0 ) /*0x65294a*/
  {
    byte_B048A8 |= 4u; /*0x65294e*/
    ShapeButtonClass::Destructor((int)stru_B04910); /*0x652959*/
  }
}



// ==== 0x00652960  RadarClass::Construct  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::Construct(RadarClass *this)
{
  int v2; // ebx
  int v3; // edx
  VectorClass *p_RadarClass_field_0x1278; // edi
  int v5; // ebp
  int v6; // edx
  int v7; // edx
  MapClass *v8; // eax
  MapClass *v9; // edi
  _DWORD *v10; // eax
  RadarHashVector *v11; // ebp
  void *v12; // eax
  int MapClass_field_0x8; // ecx
  int v14; // eax
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]

  RadarClass::RenderSpySatellite(this); /*0x652969*/
  v2 = 0; /*0x65296e*/
  this->RadarClass_field_0x11E8 = 0; /*0x652976*/
  this->RadarClass_field_0x11EC = 0; /*0x65297c*/
  this->RadarClass_field_0x11F0 = 0; /*0x652982*/
  this->RadarClass_field_0x11F4 = 0; /*0x652988*/
  this->RadarClass_field_0x11F8 = 0; /*0x65298e*/
  this->RadarClass_field_0x11FC = 0; /*0x652994*/
  this->RadarClass_field_0x1200 = 0; /*0x65299a*/
  this->RadarClass_field_0x1204 = 0; /*0x6529a0*/
  *(_DWORD *)&this->__pad_1208[4] = dword_B048B0; /*0x6529b2*/
  *(_DWORD *)&this->__pad_1208[8] = dword_B048B4; /*0x6529bc*/
  *(_DWORD *)&this->__pad_1208[12] = dword_B048B8; /*0x6529c5*/
  v3 = dword_B048BC; /*0x6529c8*/
  this->RadarClass_field_0x121C = 0; /*0x6529d0*/
  *(_DWORD *)&this->__pad_1208[16] = v3; /*0x6529d6*/
  this->RadarClass_field_0x1220 = 0; /*0x6529d9*/
  VectorClass::CellConstructor((VectorClass *)&this->RadarClass_field_0x1224, 0, 0); /*0x6529df*/
  this->RadarClass_field_0x1224 = (VectorClass *)&DynamicVectorClass<Cell>::`vftable'; /*0x6529e9*/
  *(_DWORD *)&this->__pad_122C[12] = 10; /*0x6529ef*/
  *(_DWORD *)&this->__pad_122C[8] = 0; /*0x6529f2*/
  this->RadarClass_field_0x123C = 0; /*0x6529fb*/
  this->RadarClass_field_0x1240 = 0; /*0x652a01*/
  this->RadarClass_field_0x1244 = 0; /*0x652a07*/
  this->RadarClass_field_0x1248 = 0; /*0x652a0e*/
  this->RadarClass_field_0x124C = 0; /*0x652a14*/
  this->RadarClass_field_0x1250 = 0; /*0x652a1a*/
  this->RadarClass_field_0x1254 = 0; /*0x652a20*/
  this->RadarClass_field_0x1258 = 0; /*0x652a29*/
  VectorClass::PointConstructor((VectorClass *)&this->RadarClass_field_0x125C, 0, 0); /*0x652a2f*/
  this->RadarClass_field_0x125C = (VectorClass *)&DynamicVectorClass<Point2D>::`vftable'; /*0x652a34*/
  *(_DWORD *)&this->__pad_1264[12] = 10; /*0x652a3a*/
  *(_DWORD *)&this->__pad_1264[8] = 0; /*0x652a3d*/
  this->RadarClass_field_0x1274 = 0; /*0x652a40*/
  p_RadarClass_field_0x1278 = (VectorClass *)&this->RadarClass_field_0x1278; /*0x652a46*/
  v5 = 22; /*0x652a4c*/
  do /*0x652a6e*/
  {
    VectorClass::PointConstructor(p_RadarClass_field_0x1278, 0, 0); /*0x652a55*/
    p_RadarClass_field_0x1278->vtable0 = &DynamicVectorClass<Point2D>::`vftable'; /*0x652a5a*/
    p_RadarClass_field_0x1278[1].Items = (void *)10; /*0x652a60*/
    p_RadarClass_field_0x1278[1].vtable0 = 0; /*0x652a67*/
    p_RadarClass_field_0x1278 = (VectorClass *)((char *)p_RadarClass_field_0x1278 + 24); /*0x652a6a*/
    --v5; /*0x652a6d*/
  }
  while ( v5 ); /*0x652a6e*/
  this->RadarClass_field_0x1488 = 0; /*0x652a70*/
  *(_DWORD *)this->__pad_148C = 1; /*0x652a76*/
  this->RadarClass_field_0x1490 = 0; /*0x652a80*/
  this->RadarClass_field_0x1494 = 0; /*0x652a86*/
  this->RadarClass_field_0x1498 = 0; /*0x652a8c*/
  this->RadarClass_field_0x149C = (RadarClass *)dword_B048B0; /*0x652a9e*/
  *(_DWORD *)this->__pad_14A0 = dword_B048B4; /*0x652aaa*/
  this->RadarClass_field_0x14A4 = (CampaignClass *)dword_B048B8; /*0x652ab3*/
  v6 = dword_B048BC; /*0x652ab6*/
  this->RadarClass_field_0x14AC = 0; /*0x652abc*/
  this->RadarClass_field_0x14B0 = 0; /*0x652ac2*/
  *(_DWORD *)this->__pad_14A8 = v6; /*0x652ac8*/
  this->RadarClass_field_0x14B4 = 0; /*0x652acb*/
  this->__pad_14B8[4] = 0; /*0x652ad1*/
  this->__pad_14B8[5] = 0; /*0x652ad7*/
  *(_DWORD *)&this->__pad_14C4[16] = -1; /*0x652add*/
  this->__pad_14C4[20] = 0; /*0x652ae7*/
  this->RadarClass_field_0x14D9[0] = 0; /*0x652aed*/
  this->RadarClass_field_0x14D9[1] = 0; /*0x652af3*/
  *(_DWORD *)&this->RadarClass_field_0x14D9[3] = dword_B048B0; /*0x652b05*/
  *(_DWORD *)&this->__pad_14DD[3] = dword_B048B4; /*0x652b11*/
  *(_DWORD *)&this->__pad_14DD[7] = dword_B048B8; /*0x652b1a*/
  v7 = dword_B048BC; /*0x652b1d*/
  this->RadarClass_field_0x14FC = 0; /*0x652b29*/
  *(_DWORD *)&this->__pad_14DD[11] = v7; /*0x652b2f*/
  *(_DWORD *)this->__pad_1500 = Timer::GetTicks(); /*0x652b37*/
  this->RadarClass_field_0x1508 = 0; /*0x652b3d*/
  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x652b45*/
  v8 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x652b4b*/
  v9 = v8; /*0x652b50*/
  if ( v8 ) /*0x652b57*/
  {
    v8->MapClass_field_0x4 = Radar::PixelIndex; /*0x652b63*/
    v8->MapClass_field_0x8 = (void *)256; /*0x652b6a*/
    v8->MapClass_field_0xC = (void *)10; /*0x652b71*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x652b74*/
    if ( v10 ) /*0x652b7e*/
    {
      v11 = (RadarHashVector *)(v10 + 1); /*0x652b80*/
      *v10 = 256; /*0x652b83*/
      v17 = v10 + 1; /*0x652b89*/
      v16 = 256; /*0x652b8d*/
      do /*0x652baa*/
      {
        RadarHashVector::Construct(v11, 0, 0); /*0x652b99*/
        v11 = (RadarHashVector *)((char *)v11 + 24); /*0x652ba2*/
        --v16; /*0x652ba6*/
      }
      while ( v16 ); /*0x652baa*/
      v12 = v17; /*0x652bac*/
    }
    else
    {
      v12 = 0; /*0x652bb7*/
    }
    MapClass_field_0x8 = (int)v9->MapClass_field_0x8; /*0x652bb9*/
    v9->MapClass_field_0x0 = v12; /*0x652bbc*/
    v14 = 0; /*0x652bbe*/
    if ( MapClass_field_0x8 > 0 ) /*0x652bc2*/
    {
      do /*0x652bd3*/
      {
        ++v14; /*0x652bc6*/
        *(_DWORD *)((char *)v9->MapClass_field_0x0 + v2 + 20) = 10; /*0x652bc7*/
        v2 += 24; /*0x652bce*/
      }
      while ( v14 < (int)v9->MapClass_field_0x8 ); /*0x652bd3*/
    }
  }
  else
  {
    v9 = 0; /*0x652bd7*/
  }
  this->RadarClass_field_0x1258 = v9; /*0x652bd9*/
  *(_DWORD *)&this->__pad_1264[12] = 500; /*0x652be5*/
  AudioController::Init((AudioController *)&this->RadarClass_field_0x14C0); /*0x652bef*/
  return &this->RadarClass_field_0x0; /*0x652bf6*/
}



// ==== 0x00652C00  RadarClass::Destruct  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destruct(RadarClass *this)
{
  MapClass **p_RadarClass_field_0x1488; // esi
  int v3; // ebp
  void *v4; // eax
  CampaignClass *RadarClass_field_0x1260; // eax
  CampaignClass *RadarClass_field_0x1228; // eax
  int result; // eax

  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x652c0c*/
  AudioFileClass::Release((AudioFileClass *)&this->RadarClass_field_0x14C0); /*0x652c12*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x652c19*/
  p_RadarClass_field_0x1488 = &this->RadarClass_field_0x1488; /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = *(p_RadarClass_field_0x1488 - 5); /*0x652c2b*/
    p_RadarClass_field_0x1488 -= 6; /*0x652c2e*/
    *p_RadarClass_field_0x1488 = (MapClass *)&VectorClass<Point2D>::`vftable'; /*0x652c33*/
    if ( v4 && *((_BYTE *)p_RadarClass_field_0x1488 + 13) ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      p_RadarClass_field_0x1488[1] = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    *((_BYTE *)p_RadarClass_field_0x1488 + 13) = 0; /*0x652c4d*/
    p_RadarClass_field_0x1488[2] = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x652c55*/
  this->RadarClass_field_0x125C = (VectorClass *)&VectorClass<Point2D>::`vftable'; /*0x652c5b*/
  if ( RadarClass_field_0x1260 && this->__pad_1264[5] ) /*0x652c69*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x652c72*/
    this->RadarClass_field_0x1260 = 0; /*0x652c7a*/
  }
  this->__pad_1264[5] = 0; /*0x652c80*/
  *(_DWORD *)this->__pad_1264 = 0; /*0x652c86*/
  RadarClass_field_0x1228 = this->RadarClass_field_0x1228; /*0x652c8c*/
  this->RadarClass_field_0x1224 = (VectorClass *)&VectorClass<Cell>::`vftable'; /*0x652c92*/
  if ( RadarClass_field_0x1228 && this->__pad_122C[5] ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x652ca9*/
    this->RadarClass_field_0x1228 = 0; /*0x652cb1*/
  }
  this->__pad_122C[5] = 0; /*0x652cb9*/
  *(_DWORD *)this->__pad_122C = 0; /*0x652cbf*/
  MapClass::Destruct((char *)this); /*0x652cc5*/
  return result; /*0x652cca*/
}



// ==== 0x00652CD0  ObjectClass::method_652CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_652CD0(ObjectClass *this)
{
  *((_DWORD *)this + 1323) = 4; /*0x652cd0*/
  *((_DWORD *)this + 1343) = 25; /*0x652cda*/
}



// ==== 0x00652CF0  RadarClass::Destru_vt05  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt05(RadarClass *this)
{
  int result; // eax

  Debug::Log(); /*0x652cf8*/
  this->RadarClass_field_0x1200 = (MapClass *)140; /*0x652d07*/
  this->RadarClass_field_0x11F8 = (MapClass *)140; /*0x652d0d*/
  *(_DWORD *)&this->__pad_6F8[2796] = 0; /*0x652d18*/
  this->RadarClass_field_0x11E8 = (MapClass *)16; /*0x652d22*/
  this->RadarClass_field_0x11EC = (MapClass *)48; /*0x652d2c*/
  this->RadarClass_field_0x1204 = (MapClass *)108; /*0x652d36*/
  this->RadarClass_field_0x11FC = (MapClass *)108; /*0x652d3c*/
  this->RadarClass_field_0x11F4 = (GadgetClass *)49; /*0x652d42*/
  DisplayClass::LoadTypeData((DisplayClass *)this); /*0x652d4c*/
  stru_B04A10.Height = (int)this->RadarClass_field_0x11F4->__pad_0; /*0x652d57*/
  *(_DWORD *)&stru_B04A10.Visible = this->RadarClass_field_0x1200; /*0x652d62*/
  stru_B04A10.ID = (int)this->RadarClass_field_0x1204; /*0x652d73*/
  dword_B04A30 = 223; /*0x652d79*/
  result = VocClass::FindByName(&stru_8392C0); /*0x652d83*/
  *(_DWORD *)&this->__pad_14C4[16] = result; /*0x652d88*/
  return result; /*0x652d8e*/
}



// ==== 0x00652D90  RadarClass::Destru_vt50  this=RadarClass  sig=csp ====
void RadarClass::Destru_vt50(RadarClass *this)
{
  if ( byte_B048F9 ) /*0x652d9a*/
  {
    __3_YAXPAX_Z(dword_B048E0); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    __3_YAXPAX_Z(dword_B048AC); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/
}



// ==== 0x00652DE0  RadarClass::Destru_vt07  this=RadarClass  sig=csp ====
void __thiscall RadarClass::Destru_vt07(RadarClass *this)
{
  VectorClass *RadarClass_field_0x1224; // eax

  DisplayClass::SetSize((DisplayClass *)this); /*0x652de3*/
  Debug::Log(); /*0x652ded*/
  this->RadarClass_field_0x14AC = 0; /*0x652dfa*/
  this->RadarClass_field_0x14B0 = 0; /*0x652e00*/
  this->__pad_14B8[5] = 0; /*0x652e06*/
  this->__pad_14B8[4] = 0; /*0x652e0c*/
  this->RadarClass_field_0x14FC = 0; /*0x652e12*/
  this->__pad_14C4[20] = 0; /*0x652e18*/
  RadarClass_field_0x1224 = this->RadarClass_field_0x1224; /*0x652e1e*/
  this->RadarClass_field_0x14D9[0] = 1; /*0x652e23*/
  (*(void (**)(void))&RadarClass_field_0x1224->IsInitialized)(); /*0x652e2a*/
  (*(void (__thiscall **)(VectorClass **))&this->RadarClass_field_0x125C->IsInitialized)(&this->RadarClass_field_0x125C); /*0x652e39*/
  Debug::Log(); /*0x652e41*/
}



// ==== 0x00652E50  ObjectClass::resetObjectState  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::resetObjectState(ObjectClass *this, char a2)
{
  void (__stdcall **vtable0)(GadgetClass *); // eax

  vtable0 = (void (__stdcall **)(GadgetClass *))this->AbstractClass; /*0x652e5e*/
  if ( a2 ) /*0x652e60*/
  {
    vtable0[12](&stru_B04978); /*0x652e62*/
    return (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B04910); /*0x652e6e*/
  }
  else
  {
    vtable0[13](&stru_B04978); /*0x652e75*/
    return (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 13))(this, &stru_B04910); /*0x652e81*/
  }
}



// ==== 0x00652E90  RadarClass::Destru_vt53  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt53(RadarClass *this)
{
  void **p_MapClass_field_0x4; // eax
  int v3; // ecx
  int v4; // eax
  int result; // eax

  Debug::Log(); /*0x652e99*/
  (*((void (__thiscall **)(RadarClass *))this->RadarClass_field_0x0 + 50))(this); /*0x652ea5*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x652eb1*/
  {
    this->RadarClass_field_0x11F0 = (MapClass *)16; /*0x652f13*/
    dword_B04A00 = *(_DWORD *)&this->__pad_6F8[2796] + 14; /*0x652f22*/
    p_MapClass_field_0x4 = (void **)((char *)&this->RadarClass_field_0x11E8->MapClass_field_0x4 + 1); /*0x652f2d*/
    dword_B04A04 = (int)p_MapClass_field_0x4; /*0x652f30*/
    v3 = *(_DWORD *)&this->__pad_6F8[2796] + 86; /*0x652f3b*/
  }
  else
  {
    this->RadarClass_field_0x11F0 = (MapClass *)16; /*0x652ecf*/
    dword_B04A00 = *(_DWORD *)&this->__pad_6F8[2796] + 11; /*0x652ede*/
    p_MapClass_field_0x4 = &this->RadarClass_field_0x11E8->MapClass_field_0x4; /*0x652ee9*/
    dword_B04A04 = (int)p_MapClass_field_0x4; /*0x652eec*/
    v3 = *(_DWORD *)&this->__pad_6F8[2796] + 83; /*0x652ef7*/
  }
  dword_B048C8 = v3; /*0x652f3e*/
  dword_B048CC = (int)p_MapClass_field_0x4; /*0x652f4a*/
  stru_B04A10.Width = (int)this->RadarClass_field_0x11F0; /*0x652f55*/
  dword_B048E0 = LoadFileSHP(off_8391F4, (bool *)&byte_B048F9); /*0x652f70*/
  dword_B048AC = LoadFileSHP(off_8391F8, (bool *)&byte_B048F8); /*0x652f80*/
  dword_B04A08 = *((__int16 *)dword_B048E0 + 1); /*0x652f89*/
  dword_B04A0C = *((__int16 *)dword_B048E0 + 2); /*0x652f93*/
  dword_B048D0 = *((__int16 *)dword_B048AC + 1); /*0x652fa3*/
  v4 = *((__int16 *)dword_B048AC + 2); /*0x652fab*/
  dword_B04A38 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[696]; /*0x652fb5*/
  dword_B048D4 = v4; /*0x652fc1*/
  result = (unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red; /*0x653001*/
  *(_DWORD *)this->__pad_1208 = result /*0x653005*/
                              | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
                              | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
  return result; /*0x653000*/
}



// ==== 0x00653010  RadarClass::CreateScrollButtons  this=RadarClass  sig=csp ====
void SidebarClass::CreateScrollButtons(RadarClass *this)
{
  DisplayClass *v1; // ecx

  DisplayClass::ddtor(v1); /*0x653011*/
  if ( !stru_A8EB00.?[391] ) /*0x65301f*/
  {
    dword_B0499C = 242; /*0x65303d*/
    byte_B049C4 = 1; /*0x653047*/
    dword_B049C8 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x65304e*/
    byte_B049A5 = 0; /*0x653053*/
    dword_B049A8 = 0; /*0x653059*/
    dword_B04998 = 5; /*0x65305f*/
    Rect_Point::Set(&stru_B04978, dword_B04A00, dword_B04A04); /*0x653069*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04978, (int)dword_B048E0, 0, 0); /*0x65307b*/
    VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04978); /*0x653085*/
    dword_B04960 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x65309b*/
    dword_B04934 = 243; /*0x6530a8*/
    byte_B0495C = 1; /*0x6530b2*/
    byte_B0493D = 0; /*0x6530b9*/
    dword_B04940 = 0; /*0x6530bf*/
    dword_B04930 = 5; /*0x6530c5*/
    Rect_Point::Set(&stru_B04910, dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04910, (int)dword_B048AC, 0, 0); /*0x6530e2*/
    VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04910); /*0x6530ec*/
  }
}



// ==== 0x00653100  RadarClass::Destru_vt16  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt16(RadarClass *this, char a2)
{
  int v2; // eax
  char v3; // bl
  bool v5; // al
  char v6; // cl
  bool v7; // al
  int v8; // edi
  int *v9; // eax
  void *RadarClass_field_0x14AC; // eax
  MapClass *RadarClass_field_0x1508; // edi
  int v12; // eax
  int Ticks; // eax
  MapClass *v14; // edx
  void *v15; // eax
  MapClass *RadarClass_field_0x14FC; // ecx
  int v17; // edi
  MapClass *v18; // eax
  int v19; // edi
  int *v20; // eax
  MapClass *RadarClass_field_0x11EC; // ecx
  char v22; // al
  int v23; // edi
  int *v24; // eax
  MapClass *RadarClass_field_0x11F0; // eax
  void *RadarClass_field_0x11F4; // ecx
  int RadarClass_field_0x1200; // edx
  int RadarClass_field_0x1204; // edi
  int v29; // edi
  int *v30; // eax
  char *v31; // ebp
  int v32; // eax
  int v33; // ecx
  int v34; // edi
  int v35; // ebx
  int v36; // edi
  int v37; // edx
  char *v38; // edi
  int v39; // ecx
  int v40; // esi
  int v41; // ebx
  int v42; // esi
  int v43; // edx
  ObjectClass *v45; // [esp+0h] [ebp-48h]
  int v46; // [esp+10h] [ebp-38h] BYREF
  MapClass *RadarClass_field_0x11E8; // [esp+14h] [ebp-34h]
  int v48; // [esp+18h] [ebp-30h] BYREF
  MapClass *v49; // [esp+1Ch] [ebp-2Ch]
  int v50; // [esp+20h] [ebp-28h]
  int v51; // [esp+24h] [ebp-24h]
  char v52[16]; // [esp+28h] [ebp-20h] BYREF
  char v53[16]; // [esp+38h] [ebp-10h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x653100*/
  v3 = 0; /*0x65310a*/
  if ( stru_A8EB00.?[391] ) /*0x653112*/
  {
    this->RadarClass_field_0x14D9[1] = 0; /*0x653114*/
    this->RadarClass_field_0x14D9[0] = 0; /*0x65311a*/
    return v2; /*0x653127*/
  }
  v5 = this->RadarClass_field_0x14D9[1] == 1 || a2 == 1; /*0x653148*/
  v6 = this->RadarClass_field_0x14D9[0]; /*0x65314a*/
  this->RadarClass_field_0x14D9[1] = v5; /*0x653150*/
  v7 = v6 == 1 || v5; /*0x653163*/
  this->RadarClass_field_0x14D9[0] = v7; /*0x653167*/
  if ( v7 ) /*0x65316d*/
  {
    v8 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[560]; /*0x653184*/
    v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x65318b*/
    RadarClass_field_0x11E8 = this->RadarClass_field_0x11E8; /*0x65319d*/
    v9 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6531a8*/
                  DSurface_Sidebar,
                  &v48);
    DrawToSurfaceSHP( /*0x6531c0*/
      (int)DSurface_Sidebar,
      *(int *)&stru_87F5F0.__pad_58[132],
      v8,
      0,
      &v46,
      v9,
      0,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    ShapeButton::Draw((ShapeButtonClass *)&stru_B04978, 1); /*0x6531cb*/
    ShapeButton::Draw((ShapeButtonClass *)&stru_B04910, 1); /*0x6531d6*/
  }
  RadarClass_field_0x14AC = this->RadarClass_field_0x14AC; /*0x6531db*/
  if ( RadarClass_field_0x14AC != (void *)1 ) /*0x6531e3*/
  {
    if ( !RadarClass_field_0x14AC ) /*0x6531eb*/
      goto LABEL_25; /*0x6531eb*/
    RadarClass_field_0x1508 = this->RadarClass_field_0x1508; /*0x6531f7*/
    if ( *(_DWORD *)this->__pad_1500 != -1 ) /*0x653200*/
    {
      v12 = Timer::GetTicks() - *(_DWORD *)this->__pad_1500; /*0x65320d*/
      if ( v12 >= (int)RadarClass_field_0x1508 ) /*0x653215*/
        goto LABEL_19; /*0x653215*/
      RadarClass_field_0x1508 = (MapClass *)((char *)RadarClass_field_0x1508 - v12); /*0x653217*/
    }
    if ( RadarClass_field_0x1508 ) /*0x65321b*/
      goto LABEL_25; /*0x65321b*/
LABEL_19:
    Ticks = Timer::GetTicks(); /*0x653221*/
    v14 = v49; /*0x65322a*/
    *(_DWORD *)this->__pad_1500 = Ticks; /*0x65322e*/
    v15 = this->RadarClass_field_0x14AC; /*0x653234*/
    *(_DWORD *)&this->__pad_1500[4] = v14; /*0x65323f*/
    this->RadarClass_field_0x1508 = (MapClass *)4; /*0x653245*/
    RadarClass_field_0x14FC = this->RadarClass_field_0x14FC; /*0x65324b*/
    v3 = 1; /*0x653254*/
    if ( v15 == (void *)2 ) /*0x653256*/
    {
      this->RadarClass_field_0x14FC = (MapClass *)((char *)RadarClass_field_0x14FC - 1); /*0x65325b*/
      if ( (int)&RadarClass_field_0x14FC[-1].MapClass_field_0x16C0 + 3 > 0 ) /*0x653263*/
        goto LABEL_25; /*0x653263*/
      v17 = 0; /*0x653265*/
      this->RadarClass_field_0x14AC = 0; /*0x65326d*/
      Mixer::ReleaseChannel((Mixer *)&this->RadarClass_field_0x14C0); /*0x653273*/
    }
    else
    {
      v17 = 32; /*0x65327b*/
      this->RadarClass_field_0x14FC = (MapClass *)((char *)&RadarClass_field_0x14FC->MapClass_field_0x0 + 1); /*0x653282*/
      if ( (int)&RadarClass_field_0x14FC->MapClass_field_0x0 + 1 < 32 ) /*0x65328a*/
        goto LABEL_25; /*0x65328a*/
      Mixer::ReleaseChannel((Mixer *)&this->RadarClass_field_0x14C0); /*0x653292*/
      this->RadarClass_field_0x14AC = (void *)1; /*0x653297*/
      this->RadarClass_field_0x14D9[1] = 1; /*0x65329d*/
    }
    this->RadarClass_field_0x14FC = (MapClass *)v17; /*0x6532a4*/
LABEL_25:
    if ( this->RadarClass_field_0x14AC != (void *)1 && (this->RadarClass_field_0x14D9[0] == 1 || v3) ) /*0x6532c1*/
    {
      v18 = this->RadarClass_field_0x14FC; /*0x6532c7*/
      if ( (int)v18 >= 0 && (int)v18 < *(__int16 *)(dword_B04A38 + 6) ) /*0x6532e1*/
      {
        v19 = VtableStub::72F510(); /*0x6532ec*/
        v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653304*/
        RadarClass_field_0x11E8 = this->RadarClass_field_0x11EC; /*0x653316*/
        v20 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x653321*/
                       DSurface_Sidebar,
                       &v48);
        DrawToSurfaceSHP( /*0x653340*/
          (int)DSurface_Sidebar,
          v19,
          dword_B04A38,
          (unsigned int)this->RadarClass_field_0x14FC,
          &v46,
          v20,
          0,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        RadarClass_field_0x11EC = this->RadarClass_field_0x11EC; /*0x653351*/
        *(_DWORD *)&this->__pad_1208[4] = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653362*/
        *(_DWORD *)&this->__pad_1208[8] = RadarClass_field_0x11EC; /*0x653364*/
        *(_DWORD *)&this->__pad_1208[12] = 168; /*0x653367*/
        *(_DWORD *)&this->__pad_1208[16] = 110; /*0x65336a*/
      }
    }
  }
  Map_Helper_65FDD0(); /*0x65336d*/
  Radar::RenderMinimap((Radar *)this); /*0x653374*/
  if ( this->RadarClass_field_0x14AC == (void *)1 ) /*0x65337f*/
  {
    switch ( (unsigned int)this->RadarClass_field_0x14B0 ) /*0x653395*/
    {
      case 1u: /*0x653395*/
      case 4u: /*0x653395*/
        break;
      case 2u: /*0x653395*/
        if ( this->RadarClass_field_0x14D9[0] ) /*0x65339c*/
        {
          v22 = this->RadarClass_field_0x14D9[1]; /*0x6533aa*/
          this->RadarClass_field_0x14D9[0] = 0; /*0x6533b0*/
          if ( v22 ) /*0x6533b9*/
          {
            v23 = VtableStub::72F510(); /*0x6533c0*/
            v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x6533d8*/
            RadarClass_field_0x11E8 = this->RadarClass_field_0x11EC; /*0x6533ea*/
            v24 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6533f5*/
                           DSurface_Sidebar,
                           v52);
            DrawToSurfaceSHP( /*0x65340f*/
              (int)DSurface_Sidebar,
              v23,
              dword_B04A38,
              0x20u,
              &v46,
              v24,
              0,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            RenderScoreboardSidebar(v45, 1); /*0x653416*/
            goto LABEL_40; /*0x65341b*/
          }
          RenderScoreboardSidebar(v45, 1); /*0x653422*/
          RadarClass_field_0x11F0 = this->RadarClass_field_0x11F0; /*0x653427*/
          RadarClass_field_0x11F4 = this->RadarClass_field_0x11F4; /*0x65342d*/
          RadarClass_field_0x1200 = (int)this->RadarClass_field_0x1200; /*0x653433*/
          RadarClass_field_0x1204 = (int)this->RadarClass_field_0x1204; /*0x653439*/
          goto LABEL_41; /*0x65343f*/
        }
        break; /*0x65343f*/
      case 3u: /*0x653395*/
        Game::ManageGameSpeed((Game *)this); /*0x653446*/
        break; /*0x65344b*/
      default:
        if ( this->RadarClass_field_0x14D9[0] ) /*0x653450*/
        {
          this->RadarClass_field_0x14D9[0] = 0; /*0x65345e*/
          v29 = VtableStub::72F510(); /*0x65346a*/
          v48 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653482*/
          v49 = this->RadarClass_field_0x11EC; /*0x653494*/
          v30 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x65349f*/
                         DSurface_Sidebar,
                         v53);
          DrawToSurfaceSHP((int)DSurface_Sidebar, v29, dword_B04A38, 0, &v48, v30, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6534b9*/
LABEL_40:
          RadarClass_field_0x11F0 = *(MapClass **)&this->__pad_6F8[2796]; /*0x6534be*/
          RadarClass_field_0x11F4 = this->RadarClass_field_0x11EC; /*0x6534c4*/
          RadarClass_field_0x1200 = 168; /*0x6534ca*/
          RadarClass_field_0x1204 = 110; /*0x6534d0*/
LABEL_41:
          *(_DWORD *)&this->__pad_1208[4] = RadarClass_field_0x11F0; /*0x6534d5*/
          *(_DWORD *)&this->__pad_1208[8] = RadarClass_field_0x11F4; /*0x6534e1*/
          *(_DWORD *)&this->__pad_1208[12] = RadarClass_field_0x1200; /*0x6534e4*/
          *(_DWORD *)&this->__pad_1208[16] = RadarClass_field_0x1204; /*0x6534e7*/
        }
        break; /*0x6534e7*/
    }
  }
  if ( this->RadarClass_field_0x14D9[1] ) /*0x6534ea*/
  {
    this->RadarClass_field_0x14D9[1] = 0; /*0x6534fa*/
    ShapeButton::Draw(&stru_B0B3A0, 1); /*0x653501*/
    ShapeButton::Draw(&stru_B07DF8, 1); /*0x65350c*/
  }
  if ( byte_B049CC ) /*0x653518*/
  {
    v31 = &this->__pad_1208[4]; /*0x653524*/
    if ( *(int *)&this->__pad_1208[12] <= 0 || *(int *)&this->__pad_1208[16] <= 0 ) /*0x653537*/
    {
      v32 = dword_B04A00; /*0x6535fe*/
      v33 = dword_B04A04; /*0x653603*/
      v37 = dword_B04A08; /*0x653609*/
      v36 = dword_B04A0C; /*0x65360f*/
    }
    else if ( dword_B04A08 <= 0 || dword_B04A0C <= 0 ) /*0x653551*/
    {
      v32 = *(_DWORD *)v31; /*0x6535f1*/
      v33 = *(_DWORD *)&this->__pad_1208[8]; /*0x6535f3*/
      v37 = *(_DWORD *)&this->__pad_1208[12]; /*0x6535f6*/
      v36 = *(_DWORD *)&this->__pad_1208[16]; /*0x6535f9*/
    }
    else
    {
      v32 = *(_DWORD *)v31; /*0x653559*/
      v33 = *(_DWORD *)&this->__pad_1208[8]; /*0x65355b*/
      v34 = *(_DWORD *)&this->__pad_1208[12]; /*0x65355e*/
      v50 = v34; /*0x653561*/
      v51 = *(_DWORD *)&this->__pad_1208[16]; /*0x653568*/
      if ( v32 > dword_B04A00 ) /*0x653574*/
      {
        v34 += v32 - dword_B04A00; /*0x653578*/
        v32 = dword_B04A00; /*0x65357a*/
        v50 = v34; /*0x65357c*/
      }
      if ( v33 > dword_B04A04 ) /*0x653588*/
      {
        v35 = v33 - dword_B04A04 + v51; /*0x653590*/
        v33 = dword_B04A04; /*0x653592*/
        v51 = v35; /*0x653598*/
      }
      if ( v32 + v34 < dword_B04A00 + dword_B04A08 ) /*0x6535a8*/
        v50 = dword_B04A08 - v32 + dword_B04A00 + 1; /*0x6535b6*/
      if ( v51 + v33 >= dword_B04A04 + dword_B04A0C ) /*0x6535d1*/
        v36 = v51; /*0x6535e5*/
      else
        v36 = dword_B04A04 - v33 + dword_B04A0C + 1; /*0x6535db*/
      v37 = v50; /*0x6535df*/
    }
    *(_DWORD *)v31 = v32; /*0x653615*/
    *(_DWORD *)&this->__pad_1208[8] = v33; /*0x653618*/
    *(_DWORD *)&this->__pad_1208[12] = v37; /*0x65361b*/
    *(_DWORD *)&this->__pad_1208[16] = v36; /*0x65361e*/
    g_TooltipActive = 1; /*0x653621*/
  }
  LOBYTE(v2) = byte_B04964; /*0x653628*/
  if ( byte_B04964 ) /*0x65362f*/
  {
    v38 = &this->__pad_1208[4]; /*0x65363b*/
    if ( *(int *)&this->__pad_1208[12] <= 0 || *(int *)&this->__pad_1208[16] <= 0 ) /*0x65364e*/
    {
      v2 = dword_B048C8; /*0x653701*/
      v39 = dword_B048CC; /*0x653706*/
      v43 = dword_B048D0; /*0x65370c*/
      v42 = dword_B048D4; /*0x653712*/
    }
    else if ( dword_B048D0 <= 0 || dword_B048D4 <= 0 ) /*0x653668*/
    {
      v2 = *(_DWORD *)v38; /*0x6536f4*/
      v39 = *(_DWORD *)&this->__pad_1208[8]; /*0x6536f6*/
      v43 = *(_DWORD *)&this->__pad_1208[12]; /*0x6536f9*/
      v42 = *(_DWORD *)&this->__pad_1208[16]; /*0x6536fc*/
    }
    else
    {
      v2 = *(_DWORD *)v38; /*0x653670*/
      v39 = *(_DWORD *)&this->__pad_1208[8]; /*0x653672*/
      v40 = *(_DWORD *)&this->__pad_1208[12]; /*0x653675*/
      v50 = *((_DWORD *)v38 + 2); /*0x653678*/
      v51 = *((_DWORD *)v38 + 3); /*0x65367f*/
      if ( v2 > dword_B048C8 ) /*0x65368b*/
      {
        v40 += v2 - dword_B048C8; /*0x65368f*/
        v2 = dword_B048C8; /*0x653691*/
        v50 = v40; /*0x653693*/
      }
      if ( v39 > dword_B048CC ) /*0x65369f*/
      {
        v41 = v39 - dword_B048CC + v51; /*0x6536a7*/
        v39 = dword_B048CC; /*0x6536a9*/
        v51 = v41; /*0x6536ab*/
      }
      if ( v2 + v40 < dword_B048C8 + dword_B048D0 ) /*0x6536bb*/
        v50 = dword_B048D0 - v2 + dword_B048C8 + 1; /*0x6536c9*/
      v42 = v51; /*0x6536cd*/
      if ( v51 + v39 < dword_B048CC + dword_B048D4 ) /*0x6536de*/
        v42 = dword_B048D4 + dword_B048CC - v39 + 1; /*0x6536e8*/
      v43 = v50; /*0x6536ec*/
    }
    *(_DWORD *)v38 = v2; /*0x653718*/
    *((_DWORD *)v38 + 1) = v39; /*0x65371a*/
    *((_DWORD *)v38 + 2) = v43; /*0x65371d*/
    *((_DWORD *)v38 + 3) = v42; /*0x653720*/
    g_TooltipActive = 1; /*0x653723*/
  }
  return v2; /*0x653120*/
}



// ==== 0x00653750  nullsub_220  this=-  sig=csp ====
void __stdcall nullsub_220(int a1, int a2)
{
  ; /*0x653750*/
}



// ==== 0x00653760  RadarClass::PixelToCellCheck  this=RadarClass  sig=csp ====
_DWORD *__stdcall TacticalClass::PixelToCellCheck(RadarClass *this, int *a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  void *v4; // edx
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x65376a*/
  v6[0] = *a2; /*0x65376d*/
  v6[1] = v2; /*0x653781*/
  v3 = TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v7, v6); /*0x653785*/
  if ( *v3 == dword_B04900 && v3[1] == dword_B04904 && v3[2] == dword_B04908 ) /*0x6537ad*/
  {
    this->RadarClass_field_0x0 = (void *)dword_B048C0; /*0x653803*/
    return &this->RadarClass_field_0x0; /*0x6537f9*/
  }
  else
  {
    v4 = (void *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, v6); /*0x6537cd*/
    this->RadarClass_field_0x0 = v4; /*0x6537d3*/
    return &this->RadarClass_field_0x0; /*0x6537cf*/
  }
}



// ==== 0x00653810  RadarClass::CheckResult  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult(RadarClass *this, int a2)
{
  DisplayClass *v2; // ecx

  return DisplayClass::UpdateCellPassability(v2, (__int16 *)this, a2) != 0; /*0x653824*/
}



// ==== 0x00653830  RadarClass::CheckResult3  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult3(RadarClass *this, int a2, char a3)
{
  DisplayClass *v3; // ecx

  return DisplayClass::g_var_72f2d5(v3, (__int16 *)this, a2, a3) != 0; /*0x653849*/
}



// ==== 0x00653850  RadarClass::MouseInput  this=RadarClass  sig=csp ====
void __thiscall TacticalClass::MouseInput(RadarClass *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  MapClass *RadarClass_field_0x14B0; // eax

  DisplayClass::Update((DisplayClass *)this, (int)a2, (int)a3); /*0x653860*/
  v4 = LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0;
  if ( *a3 >= v4 + dword_B04A00 && *a3 < v4 + dword_B04A00 + dword_B04A08 ) /*0x653896*/
  {
    v5 = a3[1]; /*0x653898*/
    if ( v5 >= dword_B04A04 && v5 < dword_B04A0C + dword_B04A04 ) /*0x6538a9*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538b4*/
  }
  if ( *a3 >= v4 + dword_B048C8 && *a3 < v4 + dword_B048C8 + dword_B048D0 ) /*0x6538d6*/
  {
    v6 = a3[1]; /*0x6538d8*/
    if ( v6 >= dword_B048CC && v6 < dword_B048D4 + dword_B048CC ) /*0x6538e8*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538f3*/
  }
  if ( *a2 == 33010 ) /*0x653903*/
  {
    if ( !*(_DWORD *)&dword_A8B238 /*0x653933*/
      || (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4)
      && dword_A8B23C
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C)
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C) )
    {
      *(_DWORD *)&stru_A8EB00.?[444] = 9; /*0x653946*/
    }
    else
    {
      *(_DWORD *)&stru_A8EB00.?[444] = 8; /*0x65393a*/
    }
  }
  else if ( *a2 == 33011 ) /*0x653957*/
  {
    *(_DWORD *)&stru_A8EB00.?[444] = 1; /*0x653959*/
  }
  if ( g_AsyncIOState > 0 ) /*0x65396a*/
  {
    RadarClass_field_0x14B0 = this->RadarClass_field_0x14B0; /*0x65396c*/
    if ( RadarClass_field_0x14B0 != (MapClass *)3 && RadarClass_field_0x14B0 != (MapClass *)4 ) /*0x65397a*/
    {
      this->RadarClass_field_0x14B4 = RadarClass_field_0x14B0; /*0x653982*/
      RadarClass::SetViewMode((int *)this, 4, 0); /*0x653988*/
      *(_DWORD *)this->__pad_14B8 = 0; /*0x65398d*/
    }
  }
  if ( this->RadarClass_field_0x14B0 == (MapClass *)4 ) /*0x65399e*/
  {
    TacticalClass::ProcessChronoEffect((TacticalClass *)this); /*0x6539a2*/
  }
  else if ( !UI_Helper() ) /*0x6539ae*/
  {
    ChronoScreenEffect::DecrementCounter(); /*0x6539b7*/
  }
}



// ==== 0x006539D0  RTacticalClass@RadarClass::ProcessMouseClick  this=RTacticalClass@RadarClass  sig=csp ====
int __thiscall TacticalClass::ProcessMouseClick(_BYTE *this, char a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int ClosestEnemy; // eax
  int v9; // eax
  int v10; // eax
  __int16 v11; // di
  __int16 v12; // si
  int v13; // kr0C_4
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // bx
  int v22; // eax
  __int16 v23; // ax
  _DWORD *v24; // eax
  int *Coords; // eax
  int v27; // [esp+10h] [ebp-3Ch] BYREF
  void *v28; // [esp+14h] [ebp-38h] BYREF
  char v29; // [esp+18h] [ebp-34h]
  _BYTE *v30; // [esp+1Ch] [ebp-30h]
  _DWORD v31[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37[3]; // [esp+40h] [ebp-Ch] BYREF

  v30 = this; /*0x6539dc*/
  if ( (a2 & 0x22) == 0 && (dword_880C98 != 3 || dword_880C94 != 1) && dword_880C98 == 1 && dword_880C94 == 1 )
  {
    if ( (a2 & 0x55) != 0 ) /*0x653a13*/
    {
      v4 = *(_DWORD *)dword_87F770; /*0x653a1a*/
      v5 = *((_DWORD *)dword_87F770 + 1); /*0x653a1c*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 44))(dword_887640); /*0x653a32*/
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 48))(dword_887640); /*0x653a36*/
    }
    v6 = v4 - (byte_A8EB7C != 0 ? dword_886FA8 : 0);
    if ( v6 >= dword_880C84 /*0x653a83*/
      && v6 < dword_880C84 + dword_880C8C
      && v5 >= dword_880C88
      && v5 < dword_880C88 + dword_880C90 )
    {
      v31[1] = v5; /*0x653a89*/
      v31[0] = v6; /*0x653aa5*/
      v27 = 0; /*0x653aa9*/
      v28 = 0; /*0x653ab3*/
      TacticalClass::ScreenToCellLookup(v31, &v27, &v28); /*0x653ab7*/
      if ( v27 == dword_B048C0 ) /*0x653acd*/
      {
LABEL_74:
        COMObject::ActivateThunk(v30, 0, a3, 0); /*0x653ec3*/
        return 1; /*0x653edf*/
      }
      v32[0] = ((__int16)v27 << 8) + 128; /*0x653af5*/
      v32[1] = (SHIWORD(v27) << 8) + 128; /*0x653afd*/
      GroundHeight = 0; /*0x653b07*/
      GroundHeight = Cell::GetGroundHeight(v32); /*0x653b14*/
      if ( !Cell::IsPassable(v32) || (v29 = 1, !g_hWnd) ) /*0x653b33*/
        v29 = 0; /*0x653b35*/
      if ( (a2 & 0x50) != 0 ) /*0x653b8b*/
      {
LABEL_62:
        if ( (a2 & 0x11) != 0 ) /*0x653d74*/
        {
          v11 = HIWORD(v27); /*0x653d7f*/
          v12 = v27; /*0x653d7f*/
          if ( v27 ) /*0x653d87*/
          {
            v13 = dword_886FA8 / 60 + 2; /*0x653dbc*/
            v14 = dword_87F8DC - v13 / 2 - 1; /*0x653dcb*/
            v15 = dword_886FAC / 60 + dword_87F8DC + 1; /*0x653ddf*/
            v16 = 2 * dword_87F8E0 - dword_886FAC / 60 + dword_87F8DC - 1; /*0x653de3*/
            v17 = SHIWORD(v27) - (__int16)v27; /*0x653ded*/
            if ( v17 > v14 ) /*0x653df1*/
            {
              v18 = v17 - v14; /*0x653df3*/
              v11 = HIWORD(v27) - v18; /*0x653df5*/
              v12 = v18 + v27; /*0x653df8*/
              HIWORD(v27) -= v18; /*0x653dfb*/
              LOWORD(v27) = v18 + v27; /*0x653e00*/
            }
            v19 = v12 - v11; /*0x653e0b*/
            if ( v19 > dword_87F8DC - v13 / 2 - 2 ) /*0x653e12*/
            {
              v20 = v19 - v14 + 1; /*0x653e16*/
              v11 += v20; /*0x653e17*/
              v12 -= v20; /*0x653e1a*/
              HIWORD(v27) = v11; /*0x653e1d*/
              LOWORD(v27) = v12; /*0x653e22*/
            }
            if ( v11 + v12 < v15 ) /*0x653e32*/
            {
              v21 = v15 - v11 - v12; /*0x653e36*/
              v12 += v21; /*0x653e38*/
              v11 += v21; /*0x653e3b*/
              LOWORD(v27) = v12; /*0x653e3e*/
              HIWORD(v27) = v11; /*0x653e43*/
            }
            v22 = v12 + v11; /*0x653e4e*/
            if ( v22 > v16 ) /*0x653e52*/
            {
              v23 = v22 - v16; /*0x653e54*/
              LOWORD(v27) = v12 - v23; /*0x653e5c*/
              HIWORD(v27) = v11 - v23; /*0x653e61*/
            }
            v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords[1]; /*0x653e95*/
            v36 = Coords[2]; /*0x653e9c*/
            Tactical::SetTacticalPosition(&v34); /*0x653ea0*/
            MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x653eac*/
            if ( g_ZBufferDescriptor ) /*0x653eb8*/
              *((_DWORD *)g_ZBufferDescriptor + 9) = 0x8000; /*0x653eba*/
          }
        }
        goto LABEL_74; /*0x653eba*/
      }
      if ( dword_A8ECC8 ) /*0x653b97*/
      {
        if ( dword_8809A0 ) /*0x653be5*/
        {
          if ( dword_8809A0 != 1 ) /*0x653bf3*/
          {
            if ( dword_8809A0 != 2 ) /*0x653c05*/
              goto LABEL_35; /*0x653c05*/
            goto LABEL_34; /*0x653c05*/
          }
LABEL_32:
          v7 = 37; /*0x653bf5*/
          goto LABEL_51; /*0x653bfa*/
        }
      }
      else if ( dword_8809A0 ) /*0x653b9b*/
      {
        if ( dword_8809A0 != 1 ) /*0x653b9f*/
        {
          if ( dword_8809A0 != 2 ) /*0x653ba7*/
          {
            if ( dword_8809A0 != 5 ) /*0x653baf*/
            {
              if ( dword_8809A0 != 7 ) /*0x653bb7*/
              {
                if ( dword_8809A0 != 8 ) /*0x653bbf*/
                {
                  if ( dword_8809A0 != 9 ) /*0x653bc3*/
                  {
                    if ( dword_8809A0 != 11 ) /*0x653bcb*/
                    {
                      if ( dword_8809A0 != 6 ) /*0x653bd3*/
                      {
LABEL_61:
                        Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x653d62*/
                        goto LABEL_62; /*0x653d6a*/
                      }
                      v7 = 65; /*0x653bd9*/
LABEL_51:
                      switch ( v7 ) /*0x653cb3*/
                      {
                        case 1: /*0x653cb3*/
                        case 2: /*0x653cb3*/
                        case 3: /*0x653cb3*/
                        case 5: /*0x653cb3*/
                        case 6: /*0x653cb3*/
                        case 9: /*0x653cb3*/
                        case 16: /*0x653cb3*/
                        case 20: /*0x653cb3*/
                        case 26: /*0x653cb3*/
                        case 38: /*0x653cb3*/
                        case 41: /*0x653cb3*/
                        case 65: /*0x653cb3*/
                        case 66: /*0x653cb3*/
                        case 67: /*0x653cb3*/
                        case 72: /*0x653cb3*/
                          break;
                        default:
                          v7 = 0; /*0x653cba*/
                          v28 = 0; /*0x653cbc*/
                          break; /*0x653cbc*/
                      }
                      if ( (!FactoryClass::GetFlag() || UI_Process_639DA0() == -1) && v7 ) /*0x653cd9*/
                      {
                        if ( (a2 & 8) != 0 ) /*0x653ce6*/
                          TacticalClass::HandlePlayerAction((char *)&dword_87F7E8, (__int16 *)&v27, v29, v28, v7, 1); /*0x653cff*/
                        if ( (a2 & 4) != 0 && !byte_A8ED9D ) /*0x653d14*/
                        {
                          v34 = ((__int16)v27 << 8) + 128; /*0x653d3b*/
                          v35 = (SHIWORD(v27) << 8) + 128; /*0x653d3f*/
                          v36 = 0; /*0x653d54*/
                          PlayerClass::ExecuteCommand( /*0x653d58*/
                            (char *)&dword_87F7E8,
                            (int)&v34,
                            (__int16 *)&v27,
                            (#375 **)v28,
                            v7,
                            1);
                        }
                        goto LABEL_74; /*0x653d5d*/
                      }
                      goto LABEL_61; /*0x653cd9*/
                    }
                    goto LABEL_42; /*0x653bcb*/
                  }
                  goto LABEL_40; /*0x653bc3*/
                }
                goto LABEL_38; /*0x653bbf*/
              }
              goto LABEL_36; /*0x653bb7*/
            }
LABEL_35:
            if ( dword_8809A0 != 7 ) /*0x653c17*/
            {
              if ( dword_8809A0 != 8 ) /*0x653c29*/
              {
                if ( dword_8809A0 != 9 ) /*0x653c34*/
                {
                  if ( dword_8809A0 != 11 ) /*0x653c43*/
                  {
                    if ( dword_8809A0 == 5 ) /*0x653c52*/
                    {
                      v7 = 41; /*0x653c54*/
                    }
                    else if ( dword_8809A0 == 6 ) /*0x653c61*/
                    {
                      v7 = 65; /*0x653c63*/
                    }
                    else
                    {
                      if ( v28 ) /*0x653c70*/
                      {
                        ClosestEnemy = FindRadarClosestEnemy(0, (int)v28); /*0x653c74*/
                        v9 = (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))( /*0x653c83*/
                               ClosestEnemy,
                               v28,
                               0);
                      }
                      else
                      {
                        v10 = FindRadarClosestEnemy((__int16 *)&v27, 0); /*0x653c8e*/
                        v9 = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v10 + 112))(v10, &v27, 0, 0); /*0x653c9e*/
                      }
                      v7 = v9; /*0x653ca1*/
                    }
                    goto LABEL_51; /*0x653c59*/
                  }
LABEL_42:
                  v7 = 72; /*0x653c45*/
                  goto LABEL_51; /*0x653c4a*/
                }
LABEL_40:
                v7 = 68; /*0x653c36*/
                goto LABEL_51; /*0x653c3b*/
              }
LABEL_38:
              v7 = 67; /*0x653c2b*/
              goto LABEL_51; /*0x653c30*/
            }
LABEL_36:
            v7 = 66; /*0x653c19*/
            goto LABEL_51; /*0x653c1e*/
          }
LABEL_34:
          v7 = 38; /*0x653c07*/
          goto LABEL_51; /*0x653c0c*/
        }
        goto LABEL_32; /*0x653b9f*/
      }
      v7 = 20; /*0x653be7*/
      goto LABEL_51; /*0x653bec*/
    }
    Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x653eeb*/
  }
  return 0; /*0x653ed5*/
}



// ==== 0x00653F50  RadarClass::DrawWrapper  this=RadarClass  sig=csp ====
void __thiscall CellClass::DrawWrapper(RadarClass *this, _DWORD *a2, int jj, char a4, char a5)
{
  CellClass::UpdateTerrainAndWaypoints((MapClass *)this, a2, jj, a4, a5); /*0x653f64*/
}



// ==== 0x00653F70  RadarClass::SetPositionThunk  this=RadarClass  sig=csp ====
int __stdcall TacticalClass::SetPositionThunk(RadarClass *this)
{
  return Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, (int *)this); /*0x653f80*/
}



// ==== 0x00653FA0  ObjectClass::RenderScoreboardSidebar  this=TOP  sig=csp ====
char __usercall RenderScoreboardSidebar@<al>(ObjectClass *this, int a2@<ebp>)
{
  _DWORD *v2; // ecx
  int v3; // eax
  _DWORD *v4; // edi
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
  _DWORD *v21; // eax
  const wchar_t *v22; // ecx
  _DWORD *v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  DSurface *v27; // [esp+0h] [ebp-C8h]
  DSurface *v28; // [esp+0h] [ebp-C8h]
  int v29; // [esp+0h] [ebp-C8h]
  _DWORD *v30; // [esp+4h] [ebp-C4h]
  _DWORD *v31; // [esp+4h] [ebp-C4h]
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
  _DWORD v48[2]; // [esp+38h] [ebp-90h] BYREF
  int v49; // [esp+40h] [ebp-88h] BYREF
  char v50[16]; // [esp+44h] [ebp-84h] BYREF
  int v51; // [esp+54h] [ebp-74h] BYREF
  wchar_t Buffer[18]; // [esp+58h] [ebp-70h] BYREF
  wchar_t v53[24]; // [esp+7Ch] [ebp-4Ch] BYREF
  char v54[12]; // [esp+ACh] [ebp-1Ch] BYREF
  char v55[16]; // [esp+B8h] [ebp-10h] BYREF

  LOBYTE(v3) = byte_884B8D; /*0x653fa0*/
  v4 = v2; /*0x653faf*/
  if ( byte_884B8D )
  {
    v5 = VtableStub::72F510(); /*0x653fbc*/
    i = v4[1145]; /*0x653fd4*/
    v43 = v4[1147]; /*0x653fe6*/
    v6 = (int *)(*((int (__thiscall **)(DSurface *, int *, _DWORD))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x653ff1*/
                  DSurface_Sidebar,
                  &v49,
                  0);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v5, dword_B04A38, 0x20u, &v43, v6, 0, 0, 0, 1000, 0, 0, 0, 0, 0, v41); /*0x65400b*/
    v7 = v4[1149] + 2; /*0x65401c*/
    v43 = v4[1148]; /*0x65401f*/
    v44 = v7; /*0x654031*/
    BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x654035*/
    v30 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, int *, int, _DWORD, int))DSurface_Sidebar->DSurface_field_0x0 /*0x654056*/
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
    v31 = (_DWORD *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6540c6*/
                      DSurface_Sidebar,
                      &v49);
    v28 = DSurface_Sidebar; /*0x6540c7*/
    v12 = GetStringCSF((wchar_t *)&stru_8392C0.ActiveBufferCount, 0, (const char *)&stru_8392C0.SampleIndex[5], 1270); /*0x6540d9*/
    TextRenderer::DrawText(&v46, (size_t)v12, (int)v28, v31, (int)&i, v36, 0, 537); /*0x6540e4*/
    v13 = v7 + 7; /*0x6540f1*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 4) == 1
        ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 372) + 14)
        : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 372) + 28);
    v15 = v4[1148]; /*0x654113*/
    i = v15 + v4[1150] - 1; /*0x654129*/
    v43 = v13; /*0x654133*/
    v44 = v15; /*0x654137*/
    v45 = v13; /*0x65413b*/
    (*((void (__thiscall **)(DSurface *, int *, int *, int))DSurface_Sidebar->DSurface_field_0x0 + 12))( /*0x654146*/
      DSurface_Sidebar,
      &v44,
      &i,
      v14);
    v16 = v13 + 4; /*0x65414f*/
    v3 = 0; /*0x654152*/
    for ( i = 0; v3 < stru_A80220.?; i = v3 ) /*0x65415a*/
    {
      v44 = *((_DWORD *)stru_A80220.? + v3); /*0x65416d*/
      v17 = v44; /*0x654168*/
      if ( v44 && *(_BYTE *)(*(_DWORD *)(v44 + 52) + 421) ) /*0x65417a*/
      {
        if ( *(_BYTE *)(v44 + 501) ) /*0x654188*/
        {
          v18 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6541a2*/
          v17 = v44; /*0x6541a7*/
          v19 = v18; /*0x6541ab*/
          v20 = 25; /*0x6541ad*/
        }
        else
        {
          v20 = 16409; /*0x6541ba*/
          v19 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v44 + 90196)); /*0x6541bf*/
        }
        Buffer[0] = 0; /*0x6541d3*/
        swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)(v17 + 90154)); /*0x6541da*/
        if ( !wcslen(Buffer) ) /*0x6541e4*/
          wcscpy(Buffer, (const wchar_t *)&stru_8392C0.VocClass_field_94); /*0x6541fa*/
        if ( (unsigned int)wcslen(Buffer) > 0x12 ) /*0x654212*/
          wcscpy(v53, L"."); /*0x654214*/
        v48[0] = v4[1148]; /*0x654229*/
        v48[1] = v16; /*0x65423b*/
        v21 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, _DWORD *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x654249*/
                          DSurface_Sidebar,
                          v55,
                          v48);
        TextRenderer::DrawText(&v51, (size_t)&Buffer[2], (int)DSurface_Sidebar, v21, v19, 0, v20, a2); /*0x65425d*/
        v22 = 0; /*0x654269*/
        v23 = (_DWORD *)(v45 + 21476); /*0x65426b*/
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
        a2 = v20 | 0x200; /*0x6542ba*/
        v47 = v4[1150] + v4[1148] - 2; /*0x6542c5*/
        v48[0] = v16; /*0x6542c9*/
        v25 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, int *, int, _DWORD))DSurface_Sidebar->DSurface_field_0x0 /*0x6542d7*/
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



// ==== 0x00654320  RadarClass::Destru_vt34  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt34(RadarClass *this)
{
  int v2; // esi
  char result; // al
  DisplayClass *v4; // [esp+0h] [ebp-28h]
  int v5; // [esp+Ch] [ebp-1Ch] BYREF
  int Width; // [esp+10h] [ebp-18h]
  int Height; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  int ID; // [esp+1Ch] [ebp-Ch]
  int *v10; // [esp+20h] [ebp-8h]
  char v11; // [esp+24h] [ebp-4h]

  DisplayClass::Render(v4); /*0x654328*/
  v2 = LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0;
  dword_B049BC = -v2; /*0x654359*/
  Rect_Point::Set(&stru_B04978, v2 + dword_B04A00, dword_B04A04); /*0x65435f*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04978); /*0x654369*/
  dword_B04954 = -v2; /*0x654382*/
  Rect_Point::Set(&stru_B04910, v2 + dword_B048C8, dword_B048CC); /*0x654388*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04910); /*0x654392*/
  Rect_Point::Set(&stru_B04A10, (int)this->RadarClass_field_0x11F0 + v2, (int)this->RadarClass_field_0x11F4->__pad_0); /*0x6543ac*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04A10); /*0x6543b6*/
  v11 = 0; /*0x6543c0*/
  v5 = 242; /*0x6543c7*/
  v10 = &stru_8392C0.SampleIndex[21]; /*0x6543cf*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x6543d7*/
    v10 = &stru_8392C0.SampleIndex[16]; /*0x6543d9*/
  Width = stru_B04978.Width; /*0x6543f2*/
  ID = stru_B04978.ID; /*0x654401*/
  Height = stru_B04978.Height; /*0x65440b*/
  v8 = *(_DWORD *)&stru_B04978.Visible; /*0x65440f*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 242); /*0x654413*/
  CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v5); /*0x654423*/
  Width = stru_B04910.Width; /*0x654439*/
  Height = stru_B04910.Height; /*0x654442*/
  v5 = 243; /*0x654451*/
  v10 = &stru_8392C0.SampleIndex[11]; /*0x654459*/
  v8 = *(_DWORD *)&stru_B04910.Visible; /*0x654461*/
  ID = stru_B04910.ID; /*0x654465*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 243); /*0x654469*/
  result = CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v5); /*0x654479*/
  this->RadarClass_field_0x14D9[1] = 1; /*0x65447e*/
  return result; /*0x654485*/
}



// ==== 0x00654490  RadarClass::ProcessCellVisibility  this=RadarClass  sig=csp ====
int __thiscall Shroud::ProcessCellVisibility(RadarClass *this, int *a2)
{
  int v3; // edx
  int v4; // ecx
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // ecx
  int result; // eax
  int v9; // edi
  MapClass *RadarClass_field_0x1490; // eax
  MapClass *RadarClass_field_0x1498; // ebp
  RadarClass *v12; // eax
  int v13; // ecx
  int v14; // edx
  RadarClass *RadarClass_field_0x149C; // edi
  int v16; // eax

  ShroudClass::UpdateVisibility((MapClass *)this, a2); /*0x65449d*/
  v3 = *(_DWORD *)&this->__pad_C0[60]; /*0x6544a2*/
  v4 = *(_DWORD *)&this->__pad_C0[64]; /*0x6544a8*/
  *(_DWORD *)this->__pad_14A8 = 0; /*0x6544b3*/
  *(_DWORD *)this->__pad_14A0 = 10000; /*0x6544bd*/
  this->RadarClass_field_0x149C = (RadarClass *)10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *(_DWORD *)&this->__pad_C0[52] - v3; /*0x6544da*/
  v7 = *(_DWORD *)&this->__pad_C0[68]; /*0x6544dc*/
  this->RadarClass_field_0x14A4 = 0; /*0x6544e7*/
  this->RadarClass_field_0x1498 = (MapClass *)-1; /*0x6544f4*/
  this->RadarClass_field_0x1494 = (MapClass *)((__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6)); /*0x654533*/
  this->RadarClass_field_0x1490 = (MapClass *)(v6 - v5); /*0x65453e*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x654544*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65454b*/
  v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      a2 = *(int **)(v9 + 36); /*0x654567*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( this->RadarClass_field_0x1498 == (MapClass *)-1 ) /*0x65457f*/
      this->RadarClass_field_0x1498 = (MapClass *)(*(__int16 *)(v9 + 36) + *(__int16 *)(v9 + 38)); /*0x65458b*/
    RadarClass_field_0x1490 = this->RadarClass_field_0x1490; /*0x654594*/
    RadarClass_field_0x1498 = this->RadarClass_field_0x1498; /*0x65459a*/
    a2 = *(int **)(v9 + 36); /*0x6545a0*/
    v12 = (RadarClass *)((char *)RadarClass_field_0x1490 + (__int16)a2 - SHIWORD(a2)); /*0x6545b0*/
    v13 = (__int16)a2 + SHIWORD(a2) - (_DWORD)RadarClass_field_0x1498; /*0x6545b2*/
    v14 = 2; /*0x6545b7*/
    if ( v12 == (RadarClass *)-1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != (RadarClass *)(2 * *(_DWORD *)&this->__pad_C0[68] - 1) ) /*0x6545ce*/
    {
LABEL_9:
      RadarClass_field_0x149C = this->RadarClass_field_0x149C; /*0x6545d5*/
      if ( (int)v12 >= (int)RadarClass_field_0x149C ) /*0x6545dd*/
      {
        if ( (int)v12 + v14 > (int)((int)RadarClass_field_0x149C + (unsigned int)this->RadarClass_field_0x14A4) ) /*0x6545f4*/
          this->RadarClass_field_0x14A4 = (CampaignClass *)((char *)v12 + v14 - (_DWORD)RadarClass_field_0x149C); /*0x6545fa*/
      }
      else
      {
        this->RadarClass_field_0x149C = v12; /*0x6545df*/
      }
      v16 = *(_DWORD *)this->__pad_14A0; /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *(_DWORD *)this->__pad_14A8 + v16 ) /*0x654621*/
          *(_DWORD *)this->__pad_14A8 = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *(_DWORD *)this->__pad_14A0 = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}



// ==== 0x00654650  RadarClass::RecreateSurface  this=RadarClass  sig=csp ====
int __usercall RadarClass::RecreateSurface@<eax>(RadarClass *this, int a2@<ebx>)
{
  _DWORD *v2; // ecx
  float *v3; // esi
  int result; // eax
  int *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  void (__thiscall ***v13)(_DWORD, int); // ecx
  char *v14; // ebx
  int v15; // edi
  int v16; // eax
  char *v17; // eax
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = (float *)v2; /*0x654655*/
  result = v2[1321]; /*0x65465a*/
  v5 = v2 + 1319; /*0x654660*/
  if ( result > 0 && (int)v2[1322] > 0 ) /*0x654671*/
  {
    v6 = (void (__thiscall ***)(_DWORD, int))v2[1160]; /*0x654677*/
    v3[1320] = 0.0; /*0x65467d*/
    *v5 = 0; /*0x654685*/
    if ( v6 ) /*0x654687*/
    {
      (**v6)(v6, 1); /*0x65468d*/
      v3[1160] = 0.0; /*0x65468f*/
    }
    if ( *((_DWORD *)v3 + 1167) ) /*0x654695*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1167)); /*0x6546a0*/
      v3[1167] = 0.0; /*0x6546a8*/
    }
    if ( *((_DWORD *)v3 + 1181) ) /*0x6546ae*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1181)); /*0x6546b9*/
      v3[1181] = 0.0; /*0x6546c1*/
    }
    GenerateImageThumbnail(v3, v19, v5, v5, 1); /*0x6546d3*/
    v7 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)v3 + 1160) + 124))(*((_DWORD *)v3 + 1160), a2); /*0x6546e0*/
    v8 = *((_DWORD *)v3 + 1160); /*0x6546e3*/
    *((_DWORD *)v3 + 1321) = v7; /*0x6546e9*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6546f1*/
    v10 = *((_DWORD *)v3 + 1321); /*0x6546f7*/
    v11 = *((_DWORD *)v3 + 1148); /*0x6546fd*/
    *((_DWORD *)v3 + 1322) = v9; /*0x65470b*/
    *v5 = v11; /*0x654711*/
    if ( v10 < 140 ) /*0x654713*/
      *v5 = v11 + (140 - v10) / 2; /*0x654723*/
    v12 = *((_DWORD *)v3 + 1149); /*0x654725*/
    *((_DWORD *)v3 + 1320) = v12; /*0x65472e*/
    if ( v9 < 108 ) /*0x654734*/
      *((_DWORD *)v3 + 1320) = v12 + (108 - v9) / 2; /*0x654744*/
    v13 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 1159); /*0x65474a*/
    if ( v13 ) /*0x654752*/
    {
      (**v13)(v13, 1); /*0x654758*/
      v3[1159] = 0.0; /*0x65475a*/
    }
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x654767*/
    if ( v14 ) /*0x65476e*/
    {
      v19[0] = (int)v3[1160]; /*0x65477d*/
      v15 = v19[0]; /*0x654777*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v19[0] + 128))(v19[0]); /*0x654789*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 124))(v15); /*0x65478e*/
      v17 = DSurface::Construct(v14, v16, v18, 1, 0); /*0x654794*/
    }
    else
    {
      v17 = 0; /*0x65479b*/
    }
    *((_DWORD *)v3 + 1159) = v17; /*0x65479d*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 24))(v17, 0); /*0x6547a8*/
    LOBYTE(result) = RadarClass::UpdateFoundationShapesCustom(v3); /*0x6547ad*/
  }
  return result; /*0x6547b3*/
}



// ==== 0x006547C0  ObjectClass::GenerateImageThumbnail  this=RadarClass  sig=csp ====
int *__thiscall GenerateImageThumbnail(float *this, int *a2, int *a3, int *a4, char a5)
{
  float *v6; // ebx
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  _BYTE *v11; // ecx
  int v12; // edx
  void *v13; // edi
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  double v22; // st7
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // esi
  int v36; // ebp
  double v37; // st7
  int v38; // eax
  int v39; // eax
  double v40; // st6
  double v41; // st5
  double v42; // st4
  int v43; // eax
  int v44; // esi
  int v45; // edi
  int v46; // eax
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int v50; // ebp
  double v51; // st3
  int v52; // ecx
  int v53; // ebp
  int v54; // eax
  int v55; // esi
  int v56; // edi
  double v57; // st2
  double v58; // st2
  unsigned __int8 *v59; // eax
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  bool v65; // zf
  size_t v66; // esi
  void *v67; // edi
  int v69; // [esp+10h] [ebp-6Ch]
  int v70; // [esp+14h] [ebp-68h]
  int v71; // [esp+18h] [ebp-64h]
  float v72; // [esp+1Ch] [ebp-60h]
  float v73; // [esp+20h] [ebp-5Ch]
  float v74; // [esp+24h] [ebp-58h]
  int v75; // [esp+28h] [ebp-54h]
  int v76; // [esp+2Ch] [ebp-50h]
  int v77; // [esp+30h] [ebp-4Ch]
  int v78; // [esp+34h] [ebp-48h]
  float v79; // [esp+38h] [ebp-44h]
  int v80; // [esp+3Ch] [ebp-40h]
  int v81; // [esp+40h] [ebp-3Ch]
  int v82; // [esp+44h] [ebp-38h]
  int v83; // [esp+48h] [ebp-34h]
  int v84; // [esp+4Ch] [ebp-30h]
  int v85; // [esp+50h] [ebp-2Ch]
  int v86; // [esp+54h] [ebp-28h]
  int v87; // [esp+58h] [ebp-24h]
  float v88; // [esp+5Ch] [ebp-20h]
  float v89; // [esp+60h] [ebp-1Ch]
  int v90; // [esp+60h] [ebp-1Ch]
  int v91; // [esp+60h] [ebp-1Ch]
  int v92; // [esp+64h] [ebp-18h]
  int v93; // [esp+68h] [ebp-14h]
  int i; // [esp+6Ch] [ebp-10h]
  float v95; // [esp+70h] [ebp-Ch]
  int v97; // [esp+84h] [ebp+8h]
  float v98; // [esp+88h] [ebp+Ch]
  float v99; // [esp+8Ch] [ebp+10h]
  int v100; // [esp+8Ch] [ebp+10h]

  v6 = this; /*0x6547cd*/
  v7 = a4; /*0x6547d0*/
  if ( a5 && (a4[2] <= 0 || a4[3] <= 0) ) /*0x6547ec*/
  {
    *a4 = *a3; /*0x6547f4*/
    a4[1] = a3[1]; /*0x6547f9*/
    a4[2] = a3[2]; /*0x6547ff*/
    a4[3] = a3[3]; /*0x654805*/
  }
  if ( !this->q48F ) /*0x654808*/
  {
    v8 = a3[3] * a3[2]; /*0x654815*/
    v9 = __2_YAPAXI_Z(3 * v8); /*0x65481d*/
    if ( v9 ) /*0x654827*/
    {
      v10 = v8 - 1; /*0x654829*/
      if ( v10 >= 0 ) /*0x65482c*/
      {
        v11 = (_BYTE *)(v9 + 2); /*0x65482e*/
        v12 = v10 + 1; /*0x654831*/
        do /*0x654843*/
        {
          *(v11 - 2) = 0; /*0x654834*/
          *(v11 - 1) = 0; /*0x654838*/
          *v11 = 0; /*0x65483c*/
          v11 += 3; /*0x65483f*/
          --v12; /*0x654842*/
        }
        while ( v12 ); /*0x654843*/
      }
      v13 = (void *)v9; /*0x654845*/
    }
    else
    {
      v13 = 0; /*0x654849*/
    }
    *((_DWORD *)v6 + 1167) = v13; /*0x65484b*/
    memset(v13, 0, 3 * a3[3] * a3[2]); /*0x654862*/
    *((_DWORD *)v6 + 1168) = a3[2]; /*0x65486e*/
    *((_DWORD *)v6 + 1169) = a3[3]; /*0x654877*/
  }
  if ( a5 ) /*0x654886*/
    RadarClass::UpdateBlips((RadarClass *)v6, (int)a3, a4); /*0x65488c*/
  v14 = *((_DWORD *)v6 + 1160); /*0x654891*/
  v75 = a3[2]; /*0x6548a0*/
  v99 = v6[1314]; /*0x6548a6*/
  if ( v14 ) /*0x6548ad*/
  {
    v97 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 124))(v14); /*0x6549a8*/
    v69 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v6 + 1160) + 128))(*((_DWORD *)v6 + 1160)); /*0x6549b7*/
  }
  else
  {
    v15 = (double)v75; /*0x6548b3*/
    v99 = 140.0 / v15; /*0x6548bf*/
    v16 = (double)a3[3]; /*0x6548c6*/
    v17 = v16 * v99; /*0x6548cb*/
    if ( v17 >= 108.0 ) /*0x6548e1*/
    {
      v99 = 108.0 / v16; /*0x65490a*/
      LOWORD(v20) = Math::RoundToInt(v15 * v99); /*0x65491a*/
      v97 = v20; /*0x65491f*/
      v69 = 108; /*0x654926*/
      v18 = v20; /*0x65492e*/
    }
    else
    {
      v18 = 140; /*0x6548eb*/
      v97 = 140; /*0x6548f0*/
      v89 = v17; /*0x6548d2*/
      LOWORD(v19) = Math::RoundToInt(v89); /*0x6548f7*/
      v69 = v19; /*0x6548fc*/
    }
    v6[1314] = v99; /*0x654939*/
    v21 = __2_YAPAXI_Z(0x20u); /*0x654944*/
    if ( v21 ) /*0x65494b*/
    {
      *(_DWORD *)(v21 + 8) = v69; /*0x654954*/
      *(_DWORD *)(v21 + 4) = v18; /*0x65495f*/
      *(_DWORD *)(v21 + 12) = 0; /*0x654962*/
      *(_DWORD *)v21 = &XSurface_Vtable; /*0x654969*/
      *(_DWORD *)(v21 + 16) = 2; /*0x65496f*/
      Buffer::Init((Buffer *)(v21 + 20), 0, 2 * v18 * v69); /*0x654976*/
      *(_DWORD *)v21 = &BSurface_Vtable; /*0x65497b*/
    }
    else
    {
      v21 = 0; /*0x654983*/
    }
    *((_DWORD *)v6 + 1160) = v21; /*0x654985*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 24))(v21, 0); /*0x654991*/
    v7 = a4; /*0x654994*/
  }
  v74 = (double)a3[2] / (double)v97; /*0x6549d3*/
  v22 = (double)a3[3] / (double)v69; /*0x6549da*/
  v73 = v22; /*0x6549de*/
  v95 = 1.0 / (v22 * v74); /*0x6549ec*/
  v23 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v6 + 1160) + 92))(*((_DWORD *)v6 + 1160), 0, 0); /*0x6549f0*/
  v24 = *v7; /*0x6549f3*/
  v90 = v23; /*0x6549f5*/
  LOWORD(v25) = Math::RoundToInt((double)*v7 * v99); /*0x654a0e*/
  v26 = v25; /*0x654a13*/
  v82 = v25; /*0x654a1a*/
  LOWORD(v27) = Math::RoundToInt((double)(v24 + v7[2]) * v99); /*0x654a33*/
  v83 = v27 + 1; /*0x654a42*/
  if ( v27 + 1 >= v97 ) /*0x654a46*/
    v83 = v97; /*0x654a48*/
  v28 = v7[1]; /*0x654a4c*/
  LOWORD(v29) = Math::RoundToInt((double)v28 * v99); /*0x654a64*/
  v84 = v29; /*0x654a6c*/
  LOWORD(v30) = Math::RoundToInt((double)(v28 + v7[3]) * v99); /*0x654a87*/
  v31 = v69; /*0x654a8c*/
  v32 = v30 + 1; /*0x654a90*/
  if ( v30 + 1 >= v69 ) /*0x654a95*/
  {
    v81 = v69; /*0x654a9d*/
    v32 = v69; /*0x654aa1*/
  }
  else
  {
    v81 = v30 + 1; /*0x654a97*/
  }
  v88 = (double)v82 / v99; /*0x654ab4*/
  v98 = v88; /*0x654ac0*/
  v72 = (double)v84 / v99; /*0x654ace*/
  if ( v84 < v32 ) /*0x654ad2*/
  {
    v33 = v90; /*0x654ada*/
    v91 = v32 - v84; /*0x654aea*/
    v80 = v33 + 2 * (v26 + v97 * v84); /*0x654af1*/
    do /*0x654dff*/
    {
      LOWORD(v34) = Math::RoundToInt(v72); /*0x654af9*/
      v35 = *((_DWORD *)v6 + 1169); /*0x654afe*/
      if ( v35 >= v34 ) /*0x654b06*/
      {
        v71 = v34; /*0x654b10*/
        v36 = v34; /*0x654b14*/
      }
      else
      {
        v36 = *((_DWORD *)v6 + 1169); /*0x654b08*/
        v71 = v36; /*0x654b0a*/
      }
      v37 = v72 + v73; /*0x654b1a*/
      LOWORD(v38) = Math::RoundToInt(v37); /*0x654b20*/
      v39 = v38 + 1; /*0x654b25*/
      v70 = v35; /*0x654b26*/
      if ( v35 >= v39 ) /*0x654b2c*/
        v70 = v39; /*0x654b2e*/
      if ( v26 < v83 ) /*0x654b38*/
      {
        v86 = v80; /*0x654b44*/
        v87 = v83 - v26; /*0x654b48*/
        do /*0x654dc9*/
        {
          v40 = 0.0; /*0x654b4c*/
          v41 = 0.0; /*0x654b52*/
          v42 = 0.0; /*0x654b58*/
          LOWORD(v43) = Math::RoundToInt(v37); /*0x654b65*/
          v44 = *((_DWORD *)v6 + 1168); /*0x654b6a*/
          v93 = v44; /*0x654b72*/
          if ( v44 >= v43 ) /*0x654b76*/
          {
            v100 = v43; /*0x654b83*/
            v45 = v43; /*0x654b8a*/
          }
          else
          {
            v45 = *((_DWORD *)v6 + 1168); /*0x654b78*/
            v100 = v45; /*0x654b7a*/
          }
          LOWORD(v46) = Math::RoundToInt(v37); /*0x654b9b*/
          v47 = v46 + 1; /*0x654ba0*/
          if ( v44 < v46 + 1 ) /*0x654ba5*/
            v47 = v44; /*0x654ba7*/
          v48 = v36; /*0x654bad*/
          v76 = v36; /*0x654bb1*/
          if ( v36 < v70 ) /*0x654bb5*/
          {
            v92 = v70 - v36; /*0x654bbd*/
            v49 = v36; /*0x654bc1*/
            v50 = v75; /*0x654bc3*/
            v78 = v45 + v75 * v49; /*0x654bd4*/
            v77 = 3 * v78; /*0x654bdf*/
            do /*0x654d1f*/
            {
              if ( v92 > 1 ) /*0x654be8*/
              {
                if ( v48 == v71 ) /*0x654bf4*/
                {
                  v51 = (double)(v48 + 1) - v72; /*0x654c01*/
                }
                else if ( v48 == v70 - 1 ) /*0x654c0e*/
                {
                  v51 = v37 - (double)v76; /*0x654c14*/
                }
                else
                {
                  v51 = 1.0; /*0x654c18*/
                }
              }
              else
              {
                v51 = v73; /*0x654bea*/
              }
              v52 = v45; /*0x654c1e*/
              v85 = v45; /*0x654c22*/
              if ( v45 < v47 ) /*0x654c26*/
              {
                v53 = v78; /*0x654c32*/
                v54 = v47 - v45; /*0x654c38*/
                v55 = v93 * *((_DWORD *)v6 + 1169); /*0x654c3a*/
                v56 = v77; /*0x654c3f*/
                for ( i = v54; ; v54 = i ) /*0x654c43*/
                {
                  if ( v54 > 1 ) /*0x654c50*/
                  {
                    if ( v52 == v100 ) /*0x654c5f*/
                    {
                      v57 = (double)(v52 + 1) - v98; /*0x654c6c*/
                    }
                    else if ( v52 == v47 - 1 ) /*0x654c7a*/
                    {
                      v79 = v98 + v74; /*0x654b97*/
                      v57 = v79 - (double)v85; /*0x654c80*/
                    }
                    else
                    {
                      v57 = 1.0; /*0x654c86*/
                    }
                  }
                  else
                  {
                    v57 = v74; /*0x654c52*/
                  }
                  v58 = v57 * v51 * v95; /*0x654c90*/
                  if ( v53 < v55 ) /*0x654c94*/
                  {
                    v59 = (unsigned __int8 *)(*((_DWORD *)v6 + 1167) + v56); /*0x654c98*/
                    v40 = v40 + (double)*v59 * v58; /*0x654cba*/
                    v6 = this; /*0x654cc4*/
                    v41 = v41 + (double)v59[1] * v58; /*0x654cca*/
                    v42 = v42 + (double)v59[2] * v58; /*0x654cd2*/
                  }
                  ++v52; /*0x654cda*/
                  v56 += 3; /*0x654cdb*/
                  ++v53; /*0x654cde*/
                  v85 = v52; /*0x654ce1*/
                  if ( v52 >= v47 ) /*0x654ce5*/
                    break; /*0x654ce5*/
                }
                v48 = v76; /*0x654ceb*/
                v45 = v100; /*0x654cef*/
                v50 = v75; /*0x654cf6*/
              }
              v77 += 3 * v75; /*0x654d0a*/
              v76 = ++v48; /*0x654d17*/
              v78 += v50; /*0x654d1b*/
            }
            while ( v48 < v70 ); /*0x654d1f*/
            v36 = v71; /*0x654d25*/
          }
          LOWORD(v60) = Math::RoundToInt(v37); /*0x654d2f*/
          v61 = 255; /*0x654d39*/
          if ( v60 <= 255 ) /*0x654d3e*/
            v61 = v60; /*0x654d40*/
          LOWORD(v62) = Math::RoundToInt(v37); /*0x654d48*/
          v63 = 255; /*0x654d52*/
          if ( v62 <= 255 ) /*0x654d57*/
            v63 = v62; /*0x654d59*/
          LOWORD(v64) = Math::RoundToInt(v37); /*0x654d61*/
          if ( v64 > 255 ) /*0x654d6b*/
            v64 = 255; /*0x654d6d*/
          v98 = v98 + v74; /*0x654d84*/
          v86 += 2; /*0x654db6*/
          *(_WORD *)(v86 - 2) = (v61 >> g_BitMask_Red << g_BitShift_Blue) /*0x654dbc*/
                              | (v63 >> g_BitMask_Blue << g_BitMask_Green)
                              | (v64 >> g_BitShift_Green_0 << g_BitShift_Red);
          --v87; /*0x654dc5*/
        }
        while ( v87 ); /*0x654dc9*/
        v26 = v82; /*0x654dcf*/
      }
      v98 = v88; /*0x654dde*/
      v72 = v37; /*0x654de5*/
      v65 = v91 == 1; /*0x654df6*/
      v80 += 2 * v97; /*0x654df7*/
      --v91; /*0x654dfb*/
    }
    while ( !v65 ); /*0x654dff*/
    v32 = v81; /*0x654e05*/
    v31 = v69; /*0x654e09*/
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v6 + 1160) + 96))(*((_DWORD *)v6 + 1160)); /*0x654e15*/
  v66 = v97 * v31 / 8 + 1; /*0x654e33*/
  if ( !*((_DWORD *)v6 + 1181) ) /*0x654e2a*/
  {
    v67 = (void *)__2_YAPAXI_Z(v66); /*0x654e40*/
    *((_DWORD *)v6 + 1181) = v67; /*0x654e49*/
    memset(v67, 0, v66); /*0x654e52*/
    v26 = v82; /*0x654e5b*/
  }
  *a2 = v26; /*0x654e74*/
  a2[1] = v84; /*0x654e77*/
  a2[2] = v83 - v26; /*0x654e7a*/
  a2[3] = v32 - v84; /*0x654e7f*/
  return a2; /*0x654e76*/
}



// ==== 0x00654EA0  RadarClass::UpdateBlips  this=RadarClass  sig=csp ====
int __thiscall RadarClass::UpdateBlips(RadarClass *this, int a2, int *a3)
{
  RadarClass *v3; // esi
  int v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  MapClass *RadarClass_field_0x1498; // edx
  int v10; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  char v18; // cl
  RadarClass *v19; // eax
  int v20; // edx
  __int16 v21; // [esp+Ch] [ebp-30h] BYREF
  char v22; // [esp+Eh] [ebp-2Eh]
  __int16 v23; // [esp+10h] [ebp-2Ch] BYREF
  char v24; // [esp+12h] [ebp-2Ah]
  RadarClass *v25; // [esp+14h] [ebp-28h]
  int v26; // [esp+18h] [ebp-24h]
  int v27; // [esp+1Ch] [ebp-20h] BYREF
  int v28; // [esp+20h] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-18h]
  int v30; // [esp+28h] [ebp-14h]
  int v31[4]; // [esp+2Ch] [ebp-10h] BYREF

  v3 = this; /*0x654ea5*/
  v25 = this; /*0x654ea8*/
  v21 = 0; /*0x654eac*/
  v22 = 0; /*0x654eb6*/
  v23 = 0; /*0x654ebb*/
  v24 = 0; /*0x654ec5*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x654eca*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x654edf*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x654ee1*/
  v6 = 2 * *(_DWORD *)&stru_87F5F0.__pad_58[668] - *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x654eeb*/
  v26 = v6; /*0x654eee*/
  if ( v4 ) /*0x654ef2*/
  {
    while ( 1 ) /*0x654f07*/
    {
      v7 = *(__int16 *)(v4 + 36); /*0x654f07*/
      v8 = *(__int16 *)(v4 + 38); /*0x654f0b*/
      RadarClass_field_0x1498 = v3->RadarClass_field_0x1498; /*0x654f0f*/
      if ( v8 + v7 >= (int)RadarClass_field_0x1498 ) /*0x654f1a*/
      {
        v10 = v7 - v8 - v6; /*0x654f28*/
        v27 = v10; /*0x654f37*/
        v28 = v7 + v8 - (_DWORD)RadarClass_field_0x1498; /*0x654f3b*/
        v29 = 2; /*0x654f3f*/
        v30 = 1; /*0x654f47*/
        v11 = ClipRectIntersection(v31, &v27, a3, 0, 0); /*0x654f4f*/
        v12 = *v11; /*0x654f56*/
        v27 = *v11; /*0x654f58*/
        v13 = v11[1]; /*0x654f5c*/
        v28 = v13; /*0x654f5f*/
        v29 = v11[2]; /*0x654f66*/
        v14 = v11[3]; /*0x654f6a*/
        v30 = v14; /*0x654f6f*/
        if ( v29 > 0 && v14 > 0 ) /*0x654f7b*/
        {
          v15 = v12 + v13 * *(_DWORD *)(a2 + 8); /*0x654f8b*/
          GetCellRadarColors(v4, (int)&v21, (int)&v23); /*0x654f99*/
          if ( v10 == *a3 - 1 ) /*0x654fa5*/
          {
            v16 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654fb4*/
            *(_WORD *)v16 = v23; /*0x654fbb*/
            *(_BYTE *)(v16 + 2) = v24; /*0x654fc2*/
          }
          else
          {
            if ( v10 == a3[2] + *a3 - 1 ) /*0x654fd0*/
            {
              v17 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654fdf*/
              *(_WORD *)v17 = v21; /*0x654fe6*/
              v18 = v22; /*0x654fe9*/
            }
            else
            {
              v19 = v25; /*0x654fef*/
              v20 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654ffb*/
              *(_WORD *)v20 = v21; /*0x655001*/
              *(_BYTE *)(v20 + 2) = v22; /*0x655008*/
              v17 = (int)v19->RadarClass_field_0x123C + 3 * v15 + 3; /*0x65501a*/
              *(_WORD *)v17 = v23; /*0x65501c*/
              v18 = v24; /*0x65501f*/
            }
            *(_BYTE *)(v17 + 2) = v18; /*0x655023*/
          }
        }
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x65502b*/
      v4 = result; /*0x655030*/
      if ( !result ) /*0x655034*/
        break; /*0x655034*/
      v3 = v25; /*0x654eff*/
      v6 = v26; /*0x654f03*/
    }
  }
  return result; /*0x65503b*/
}



// ==== 0x00655050  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_655050(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi

  v3 = *a3; /*0x655063*/
  v4 = a3[1]; /*0x655066*/
  v5 = v3 + *((_DWORD *)this + 1316) - v4; /*0x65506e*/
  v6 = v3 + v4 - *((_DWORD *)this + 1318); /*0x655075*/
  v7 = 2; /*0x655077*/
  if ( v5 == -1 ) /*0x65507c*/
  {
    v5 = 0; /*0x65507e*/
LABEL_4:
    v7 = 1; /*0x655090*/
    goto LABEL_5; /*0x655090*/
  }
  if ( v5 == 2 * this->u32_41 - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
LABEL_5:
  *a2 = v5; /*0x655095*/
  a2[1] = v6; /*0x6550a2*/
  a2[2] = v7; /*0x6550a6*/
  a2[3] = 1; /*0x6550aa*/
  return a2; /*0x6550a5*/
}



// ==== 0x006550C0  ObjectClass::Team_Load_6550C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Load_6550C0(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebp
  int v5; // edi
  __int16 *v6; // eax
  __int16 *v7; // ebx
  int v8; // eax
  __int16 *v10; // [esp+1Ch] [ebp+8h]

  v3 = *a3; /*0x6550c8*/
  v5 = a3[1]; /*0x6550ce*/
  v10 = (__int16 *)*((_DWORD *)this + 1319); /*0x6550e0*/
  LOWORD(v6) = Math::RoundToInt((double)(v3 + *((_DWORD *)this + 1316) - v5) * *((float *)this + 1314) + (double)(int)v10); /*0x6550f8*/
  v7 = v6; /*0x6550fd*/
  LOWORD(v8) = Math::RoundToInt((double)(v3 + v5 - *((_DWORD *)this + 1318)) * *((float *)this + 1314) + (double)*((int *)this + 1320)); /*0x65511d*/
  if ( v7 == (__int16 *)((char *)v10 - 1) ) /*0x655129*/
    v7 = (__int16 *)((char *)v7 + 1); /*0x65512b*/
  *a2 = v7; /*0x655139*/
  a2[1] = v8; /*0x65513b*/
  a2[2] = 1; /*0x655140*/
  a2[3] = 1; /*0x655143*/
  return a2; /*0x655146*/
}



// ==== 0x006551C0  BuildingClass::AddUpgrade  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AddUpgrade(int *this, int a2)
{
  int result; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  int v6; // edx

  result = *(this + 1165) - 1; /*0x6551cf*/
  if ( result < 0 ) /*0x6551d0*/
  {
LABEL_6:
    v5 = *(this + 1163); /*0x6551f5*/
    result = *(this + 1165); /*0x6551fb*/
    if ( result < v5 /*0x65522b*/
      || ((LOBYTE(result) = *((_BYTE *)this + 4657), (_BYTE)result) || !v5)
      && (result = *(this + 1166), result > 0)
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(*(this + 1161) + 8))(this + 1161, v5 + result, 0),
          (_BYTE)result) )
    {
      result = *(this + 1165); /*0x65522d*/
      v6 = *(this + 1162); /*0x655230*/
      *(this + 1165) = result + 1; /*0x655236*/
      *(_DWORD *)(v6 + 4 * result) = *(_DWORD *)a2; /*0x65523b*/
    }
    *((_BYTE *)this + 5337) = 1; /*0x65523e*/
  }
  else
  {
    v4 = (_WORD *)(*(this + 1162) + 4 * result); /*0x6551db*/
    while ( *v4 != *(_WORD *)a2 || v4[1] != *(_WORD *)(a2 + 2) ) /*0x6551eb*/
    {
      --result; /*0x6551ed*/
      v4 -= 2; /*0x6551ee*/
      if ( result < 0 ) /*0x6551f3*/
        goto LABEL_6; /*0x6551f3*/
    }
  }
  return result; /*0x655245*/
}



// ==== 0x00655250  Surface::RenderRadar  this=Surface  sig=csp ====
int __thiscall Surface::RenderRadar(XSurface *this)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int *v9; // eax
  int v10; // ecx
  void *v11; // eax
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  char v15; // dl
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int result; // eax
  int v28; // ecx
  int *v29; // edi
  int v30; // edx
  __int16 v31; // [esp+Ch] [ebp-90h] BYREF
  char v32; // [esp+Eh] [ebp-8Eh]
  __int16 v33; // [esp+10h] [ebp-8Ch] BYREF
  char v34; // [esp+12h] [ebp-8Ah]
  __int16 v35[2]; // [esp+14h] [ebp-88h] BYREF
  int v36; // [esp+18h] [ebp-84h]
  int v37; // [esp+1Ch] [ebp-80h]
  int v38; // [esp+24h] [ebp-78h]
  int v39; // [esp+28h] [ebp-74h] BYREF
  int v40; // [esp+2Ch] [ebp-70h]
  int v41; // [esp+30h] [ebp-6Ch]
  int v42; // [esp+34h] [ebp-68h]
  int v43; // [esp+38h] [ebp-64h]
  int v44; // [esp+40h] [ebp-5Ch]
  int v45; // [esp+44h] [ebp-58h]
  int v46; // [esp+48h] [ebp-54h]
  int v47[4]; // [esp+4Ch] [ebp-50h] BYREF
  int v48[7]; // [esp+5Ch] [ebp-40h] BYREF
  int v49; // [esp+78h] [ebp-24h]
  int v50[4]; // [esp+7Ch] [ebp-20h] BYREF
  int v51[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = 0; /*0x65525b*/
  v3 = *((_DWORD *)this + 1165); /*0x65525d*/
  v36 = 0; /*0x655263*/
  v4 = v3 - 1; /*0x655267*/
  v37 = 0; /*0x655268*/
  v38 = 0; /*0x65526c*/
  v43 = v4; /*0x655270*/
  if ( v4 >= 0 ) /*0x655274*/
  {
    while ( 1 ) /*0x65528b*/
    {
      *(_DWORD *)v35 = *(_DWORD *)(*((_DWORD *)this + 1162) + 4 * v4); /*0x65528b*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v35, 1) ) /*0x655298*/
        goto LABEL_32; /*0x655298*/
      v5 = v35[0] + *((_DWORD *)this + 1316) - v35[1]; /*0x6552b8*/
      v6 = 2; /*0x6552bf*/
      if ( v5 == -1 ) /*0x6552c4*/
        break; /*0x6552c4*/
      if ( v5 == 2 * *((_DWORD *)this + 65) - 1 ) /*0x6552d6*/
        goto LABEL_6; /*0x6552d6*/
LABEL_7:
      v40 = v35[0] + v35[1] - *((_DWORD *)this + 1318); /*0x6552dd*/
      v41 = v6; /*0x6552e8*/
      v7 = *((_DWORD *)this + 1168); /*0x6552ec*/
      v42 = 1; /*0x6552f2*/
      v8 = *((_DWORD *)this + 1169); /*0x6552f6*/
      v47[0] = 0; /*0x6552fd*/
      v47[1] = 0; /*0x655301*/
      v47[2] = v7; /*0x65530a*/
      v47[3] = v8; /*0x65530e*/
      v39 = v5; /*0x65531e*/
      v9 = ClipRectIntersection(v50, &v39, v47, 0, 0); /*0x655322*/
      v39 = *v9; /*0x65532b*/
      v40 = v9[1]; /*0x655332*/
      v41 = v9[2]; /*0x655339*/
      v10 = v9[3]; /*0x65533d*/
      v42 = v10; /*0x655342*/
      if ( v41 > 0 && v10 > 0 ) /*0x65534e*/
      {
        v33 = 0; /*0x655358*/
        v34 = 0; /*0x655368*/
        v31 = 0; /*0x65536d*/
        v32 = 0; /*0x655377*/
        v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v35); /*0x65537c*/
        v12 = v39 + v40 * *((_DWORD *)this + 1168); /*0x655390*/
        GetCellRadarColors((int)v11, (int)&v33, (int)&v31); /*0x65539e*/
        if ( v5 ) /*0x6553ab*/
        {
          if ( v41 != 1 ) /*0x6553d2*/
            goto LABEL_14; /*0x6553d2*/
          v14 = 3 * v12 + *((_DWORD *)this + 1167); /*0x6553de*/
          *(_WORD *)v14 = v33; /*0x6553e5*/
          v15 = v34; /*0x6553e8*/
        }
        else
        {
          if ( v41 == 1 ) /*0x6553b0*/
          {
            v13 = *((_DWORD *)this + 1167) + 3 * v12 + 3; /*0x6553bc*/
            *(_WORD *)v13 = v31; /*0x6553c3*/
            *(_BYTE *)(v13 + 2) = v32; /*0x6553ca*/
            goto LABEL_16; /*0x6553cd*/
          }
LABEL_14:
          v16 = *((_DWORD *)this + 1167) + 3 * v12; /*0x6553ee*/
          *(_WORD *)v16 = v33; /*0x6553ff*/
          *(_BYTE *)(v16 + 2) = v34; /*0x655406*/
          v14 = *((_DWORD *)this + 1167) + 3 * v12 + 3; /*0x655413*/
          *(_WORD *)v14 = v31; /*0x65541a*/
          v15 = v32; /*0x65541d*/
        }
        *(_BYTE *)(v14 + 2) = v15; /*0x655421*/
LABEL_16:
        v17 = *((_DWORD *)this + 1168); /*0x655424*/
        v18 = *((_DWORD *)this + 1169); /*0x65542a*/
        v48[0] = 0; /*0x655430*/
        v48[1] = 0; /*0x655434*/
        v48[2] = v17; /*0x655439*/
        v48[3] = v18; /*0x655441*/
        v19 = GenerateImageThumbnail((float *)this->__pad_0, v51, v48, &v39, 0); /*0x655455*/
        v20 = *v19; /*0x65545e*/
        v44 = v19[1]; /*0x655463*/
        v21 = v19[2]; /*0x655467*/
        v45 = v21; /*0x65546a*/
        v22 = v19[3]; /*0x65546e*/
        v46 = v22; /*0x655471*/
        if ( v2 <= 0 || v38 <= 0 ) /*0x655481*/
        {
          v26 = *v19; /*0x655501*/
          v24 = v19[1]; /*0x655503*/
          v2 = v19[2]; /*0x655506*/
          v25 = v19[3]; /*0x655509*/
        }
        else if ( v21 <= 0 || v22 <= 0 ) /*0x655489*/
        {
          v26 = v36; /*0x6554f5*/
          v24 = v37; /*0x6554f9*/
          v25 = v38; /*0x6554fd*/
        }
        else
        {
          v23 = v36; /*0x65548b*/
          v24 = v37; /*0x65548f*/
          v49 = v38; /*0x655495*/
          if ( v36 > v20 ) /*0x655499*/
          {
            v2 = v36 + v2 - v20; /*0x65549d*/
            v23 = v20; /*0x65549f*/
          }
          if ( v37 > v44 ) /*0x6554a7*/
          {
            v24 = v44; /*0x6554b1*/
            v49 += v37 - v44; /*0x6554b3*/
          }
          if ( v2 + v23 < v20 + v45 ) /*0x6554c2*/
            v2 = v45 - v23 + v20 + 1; /*0x6554ca*/
          v25 = v49; /*0x6554d8*/
          if ( v49 + v24 < v44 + v46 ) /*0x6554e1*/
            v25 = v44 - v24 + v46 + 1; /*0x6554ed*/
          v26 = v23; /*0x6554f1*/
        }
        v4 = v43; /*0x65550c*/
        v36 = v26; /*0x655510*/
        v37 = v24; /*0x655514*/
        v38 = v25; /*0x655518*/
      }
LABEL_32:
      v43 = --v4; /*0x65551d*/
      if ( v4 < 0 ) /*0x655521*/
        goto LABEL_33; /*0x655521*/
    }
    v5 = 0; /*0x6552c6*/
LABEL_6:
    v6 = 1; /*0x6552d8*/
    goto LABEL_7; /*0x6552d8*/
  }
LABEL_33:
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 1161) + 12))((char *)this + 4644); /*0x655528*/
  result = v36; /*0x655537*/
  v28 = v37; /*0x65553b*/
  v29 = (int *)this + 1170; /*0x65553f*/
  v30 = v38; /*0x655545*/
  *v29 = v36; /*0x655549*/
  v29[1] = v28; /*0x65554b*/
  v29[2] = v2; /*0x65554e*/
  v29[3] = v30; /*0x655551*/
  return result; /*0x655554*/
}



// ==== 0x00655560  BuildingClass::ProcessFogCellOccupancy  this=BuildingClass  sig=csp ====
void __thiscall sub_655560(int this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int *v15; // esi
  int v16; // esi
  int v17; // edi
  int v18; // esi
  int v19; // eax
  _DWORD *v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // edx
  _DWORD *v29; // eax
  int v31; // [esp+14h] [ebp-10h] BYREF
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]

  v4 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), &v31); /*0x655578*/
  v5 = *v4; /*0x65557b*/
  v6 = a3; /*0x65557d*/
  v7 = v4[1]; /*0x655583*/
  v8 = v4[2]; /*0x655586*/
  v9 = v4[3]; /*0x655589*/
  if ( a3 < *v4 || a3 >= v8 + v5 || (v10 = a4, a4 < v7) || a4 >= v7 + v9 ) /*0x6555a2*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x6555b0*/
      return; /*0x6555b0*/
    v6 = a3; /*0x6555b6*/
    if ( a3 < v5 ) /*0x6555bc*/
    {
      v6 = v5; /*0x6555be*/
      a3 = v5; /*0x6555c0*/
    }
    v11 = v8 + v5; /*0x6555c4*/
    if ( v6 >= v11 ) /*0x6555c8*/
    {
      v6 = v11 - 1; /*0x6555ca*/
      a3 = v11 - 1; /*0x6555cd*/
    }
    v10 = a4; /*0x6555d1*/
    if ( a4 < v7 ) /*0x6555d7*/
    {
      v10 = v7; /*0x6555d9*/
      a4 = v7; /*0x6555db*/
    }
    v12 = v7 + v9; /*0x6555df*/
    if ( v10 >= v7 + v9 ) /*0x6555e4*/
    {
      v10 = v12 - 1; /*0x6555e6*/
      a4 = v12 - 1; /*0x6555e9*/
    }
    *(_DWORD *)(a2 + 520) = v6; /*0x6555f1*/
    *(_DWORD *)(a2 + 524) = v10; /*0x6555f7*/
  }
  v13 = v6; /*0x655600*/
  v14 = 0; /*0x655611*/
  v15 = *(int **)(this + 4696); /*0x655613*/
  v32 = v6; /*0x655619*/
  v33 = v10; /*0x655620*/
  v16 = *v15; /*0x655624*/
  v17 = *(_DWORD *)(v16 + 24 * (unsigned __int8)(v6 - 5 * v10) + 4); /*0x655626*/
  v18 = v16 + 24 * (unsigned __int8)(v6 - 5 * v10); /*0x65562a*/
  v19 = *(_DWORD *)(v18 + 16); /*0x65562d*/
  if ( v19 <= 0 ) /*0x655632*/
  {
LABEL_22:
    v21 = *(_DWORD *)(v18 + 8); /*0x655659*/
    if ( *(#375 **)(a2 + 540) == dword_A83D4C ) /*0x65566e*/
    {
      if ( v19 < v21 /*0x655697*/
        || (*(_BYTE *)(v18 + 13) || !v21)
        && (v22 = *(_DWORD *)(v18 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v22, 0) )
      {
        v23 = *(_DWORD *)(v18 + 16); /*0x65569e*/
        if ( v23 ) /*0x6556a3*/
          memcpy((void *)(*(_DWORD *)(v18 + 4) + 16), *(const void **)(v18 + 4), 16 * v23); /*0x6556b1*/
        v24 = *(_DWORD **)(v18 + 4); /*0x6556b9*/
        v25 = v33; /*0x6556bc*/
        *v24 = a2; /*0x6556c0*/
        v24[1] = v13; /*0x6556c2*/
        v24[2] = v25; /*0x6556c5*/
        v24[3] = a2; /*0x6556c8*/
        ++*(_DWORD *)(v18 + 16); /*0x6556cf*/
      }
    }
    else if ( v19 < v21 /*0x6556f3*/
           || (*(_BYTE *)(v18 + 13) || !v21)
           && (v26 = *(_DWORD *)(v18 + 20), v26 > 0)
           && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v26, 0) )
    {
      v27 = *(_DWORD *)(v18 + 16); /*0x6556fa*/
      v28 = v33; /*0x6556fd*/
      *(_DWORD *)(v18 + 16) = v27 + 1; /*0x655704*/
      v29 = (_DWORD *)(*(_DWORD *)(v18 + 4) + 16 * v27); /*0x65570d*/
      *v29 = a2; /*0x65570f*/
      v29[1] = v13; /*0x655711*/
      v29[2] = v28; /*0x655714*/
      v29[3] = a2; /*0x655717*/
    }
    FogOfWar::RevealCell(this, &a3); /*0x655725*/
    *(_BYTE *)(this + 5337) = 1; /*0x65572a*/
  }
  else
  {
    v20 = (_DWORD *)(v17 + 4); /*0x655634*/
    while ( *(v20 - 1) != a2 || *v20 != v6 || v20[1] != v10 ) /*0x655647*/
    {
      ++v14; /*0x65564d*/
      v20 += 4; /*0x65564e*/
      if ( v14 >= v19 ) /*0x655653*/
      {
        v13 = v32; /*0x655655*/
        goto LABEL_22; /*0x655655*/
      }
    }
  }
}



// ==== 0x00655740  BuildingClass::RemoveGapCellCoverage  this=IUnknown  sig=csp ====
void __thiscall sub_655740(int this, int a2, int a3, int a4)
{
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ebx
  _DWORD *v14; // ecx
  _DWORD v15[4]; // [esp+8h] [ebp-10h] BYREF

  v5 = **(_DWORD **)(this + 4696); /*0x655763*/
  v15[1] = a3; /*0x655765*/
  v15[2] = a4; /*0x65576c*/
  v6 = (_DWORD *)(v5 + 24 * (unsigned __int8)(a3 - 5 * a4)); /*0x655770*/
  v15[0] = a2; /*0x655777*/
  v15[3] = a2; /*0x65577b*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 16))(v6, v15); /*0x655788*/
  if ( v7 != -1 ) /*0x65578e*/
  {
    v8 = v6[4]; /*0x655790*/
    if ( v7 < v8 ) /*0x655795*/
    {
      v9 = v8 - 1; /*0x655797*/
      v10 = v7; /*0x655798*/
      v6[4] = v9; /*0x65579c*/
      if ( v7 < v9 ) /*0x65579f*/
      {
        v11 = 16 * v7; /*0x6557a3*/
        do /*0x6557ce*/
        {
          v12 = v6[1]; /*0x6557a6*/
          v13 = (_DWORD *)(v11 + v12 + 16); /*0x6557a9*/
          v14 = (_DWORD *)(v11 + v12); /*0x6557ad*/
          ++v10; /*0x6557af*/
          v11 += 16; /*0x6557b0*/
          *v14 = *v13; /*0x6557b5*/
          v14[1] = v13[1]; /*0x6557ba*/
          v14[2] = v13[2]; /*0x6557c0*/
          v14[3] = v13[3]; /*0x6557c6*/
        }
        while ( v10 < v6[4] ); /*0x6557ce*/
      }
      FogOfWar::RevealCell(this, &a3); /*0x6557d9*/
      *(_BYTE *)(this + 5337) = 1; /*0x6557de*/
    }
  }
}



// ==== 0x006557F0  Coord::WorldToScreen  this=Coord  sig=csp ====
int *__thiscall Coord::WorldToScreen(Coord *this, int *a2, int *a3, char a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // edi

  v4 = *a3; /*0x6557f7*/
  v5 = a3[1]; /*0x6557f9*/
  LOWORD(v7) = Math::RoundToInt((double)(*a3 + (*((_DWORD *)this + 1316) << 8) - v5) * *((float *)this + 1314) * 0.00390625); /*0x655820*/
  v8 = v7; /*0x65582b*/
  LOWORD(v9) = Math::RoundToInt((double)(v4 + v5 - (*((_DWORD *)this + 1318) << 8)) * *((float *)this + 1314) * 0.00390625); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v8 < 0 ) /*0x655857*/
      v8 = 0; /*0x655859*/
    v10 = *((_DWORD *)this + 1321); /*0x65585b*/
    if ( v8 >= v10 ) /*0x655863*/
      v8 = v10 - 1; /*0x655865*/
    if ( v9 < 0 ) /*0x65586a*/
      v9 = 0; /*0x65586c*/
    v11 = *((_DWORD *)this + 1322); /*0x65586e*/
    if ( v9 >= v11 ) /*0x655876*/
      v9 = v11 - 1; /*0x655878*/
  }
  *a2 = v8; /*0x655881*/
  a2[1] = v9; /*0x655883*/
  return a2; /*0x65587f*/
}



// ==== 0x00655890  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_655890(ObjectClass *this)
{
  return (int)this->AbstractClass + 251 * (int)this->?; /*0x6558a3*/
}



// ==== 0x006558B0  Radar::PixelIndex  this=Radar  sig=csp ====
int __thiscall Radar::PixelIndex(Radar *this)
{
  return *(_DWORD *)&this->Radar_field_0x2[2] + 251 * *(_DWORD *)&this->Radar_field_0x6[2]; /*0x6558c4*/
}



// ==== 0x006558D0  RandomMap::PlaceTileSet  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::PlaceTileSet(RandomMap *this)
{
  RandomMap *v1; // ebp
  _DWORD *result; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx

  v1 = this; /*0x6558d4*/
  result = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x6558dc*/
  v3 = result; /*0x6558e1*/
  v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    v5 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x65590c*/
    if ( v5 ) /*0x655916*/
    {
      v6 = v5 + 1; /*0x655918*/
      *v5 = 256; /*0x65591b*/
      v7 = v5 + 1; /*0x655921*/
      v8 = 256; /*0x655923*/
      do /*0x65594c*/
      {
        v7[1] = 0; /*0x65592a*/
        v7[2] = 0; /*0x65592d*/
        *((_BYTE *)v7 + 12) = 1; /*0x655930*/
        *((_BYTE *)v7 + 13) = 0; /*0x655933*/
        *v7 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x655936*/
        *v7 = &DynamicVectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x65593c*/
        v7[5] = 10; /*0x655942*/
        v7[4] = 0; /*0x655945*/
        v7 += 6; /*0x655948*/
        --v8; /*0x65594b*/
      }
      while ( v8 ); /*0x65594c*/
      v9 = v6; /*0x65594e*/
      v1 = this; /*0x655950*/
    }
    else
    {
      v9 = 0; /*0x655956*/
    }
    v10 = v3[2]; /*0x655958*/
    *v3 = v9; /*0x65595b*/
    result = 0; /*0x65595d*/
    if ( v10 > 0 ) /*0x655961*/
    {
      do /*0x655972*/
      {
        result = (_DWORD *)((char *)result + 1); /*0x655965*/
        *(_DWORD *)(v4 + *v3 + 20) = 10; /*0x655966*/
        v4 += 24; /*0x65596d*/
      }
      while ( (int)result < v3[2] ); /*0x655972*/
    }
    *(_DWORD *)&v1[8].__pad_4C[396] = v3; /*0x655974*/
  }
  else
  {
    *(_DWORD *)&v1[8].__pad_4C[396] = 0; /*0x655980*/
  }
  return result; /*0x65597b*/
}



// ==== 0x00655990  RadarClass::Process  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Process(RadarClass *this)
{
  RadarClass *v1; // ebx
  MapClass *RadarClass_field_0x1258; // esi
  MapClass *v3; // eax
  MapClass *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  RadarHashVector *v8; // edi
  _DWORD *v9; // eax
  int MapClass_field_0x8; // ecx
  int v11; // eax
  int v12; // ecx
  int result; // eax
  RadarClass *v14; // [esp+0h] [ebp-Ch]

  v1 = this; /*0x655992*/
  RadarClass_field_0x1258 = this->RadarClass_field_0x1258; /*0x655999*/
  if ( RadarClass_field_0x1258 ) /*0x6559a1*/
  {
    if ( RadarClass_field_0x1258->MapClass_field_0x0 ) /*0x6559a3*/
      (**(void (__thiscall ***)(void *, int))RadarClass_field_0x1258->MapClass_field_0x0)( /*0x6559ad*/
        RadarClass_field_0x1258->MapClass_field_0x0,
        3);
    __3_YAXPAX_Z(RadarClass_field_0x1258); /*0x6559b0*/
  }
  v3 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x6559ba*/
  v4 = v3; /*0x6559bf*/
  if ( v3 ) /*0x6559c6*/
  {
    v5 = 256; /*0x6559ca*/
    v3->MapClass_field_0x4 = Radar::PixelIndex; /*0x6559d9*/
    v3->MapClass_field_0x8 = (void *)256; /*0x6559e0*/
    v3->MapClass_field_0xC = (void *)10; /*0x6559e3*/
    v6 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x6559e6*/
    if ( v6 ) /*0x6559f0*/
    {
      v7 = v6 + 1; /*0x6559f2*/
      *v6 = 256; /*0x6559f5*/
      v8 = (RadarHashVector *)(v6 + 1); /*0x6559f7*/
      do /*0x655a08*/
      {
        RadarHashVector::Construct(v8, 0, 0); /*0x6559ff*/
        v8 = (RadarHashVector *)((char *)v8 + 24); /*0x655a04*/
        --v5; /*0x655a07*/
      }
      while ( v5 ); /*0x655a08*/
      v9 = v7; /*0x655a0a*/
      v1 = this; /*0x655a0c*/
    }
    else
    {
      v9 = 0; /*0x655a17*/
    }
    MapClass_field_0x8 = (int)v4->MapClass_field_0x8; /*0x655a19*/
    v4->MapClass_field_0x0 = v9; /*0x655a1c*/
    v11 = 0; /*0x655a1e*/
    if ( MapClass_field_0x8 > 0 ) /*0x655a22*/
    {
      v12 = 0; /*0x655a24*/
      do /*0x655a35*/
      {
        ++v11; /*0x655a28*/
        *(_DWORD *)((char *)v4->MapClass_field_0x0 + v12 + 20) = 10; /*0x655a29*/
        v12 += 24; /*0x655a30*/
      }
      while ( v11 < (int)v4->MapClass_field_0x8 ); /*0x655a35*/
    }
  }
  else
  {
    v4 = 0; /*0x655a3b*/
  }
  v1->RadarClass_field_0x1258 = v4; /*0x655a47*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x655a4d*/
  RadarClass::RecreateSurface(v14, (int)v1); /*0x655a54*/
  for ( result = 0; /*0x655a65*/
        result < *(int *)&stru_A8EB00.?[164];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result - 4) + 1059) = 0 )
  {
    ++result; /*0x655a6d*/
  }
  return result; /*0x655a61*/
}



// ==== 0x00655A90  TacticalClass::FreeResources  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::FreeResources(TacticalClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // edi

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1159); /*0x655a96*/
  if ( v2 ) /*0x655a9e*/
  {
    (**v2)(v2, 1); /*0x655aa4*/
    *((_DWORD *)this + 1159) = 0; /*0x655aa6*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1160); /*0x655aac*/
  if ( v3 ) /*0x655ab4*/
  {
    (**v3)(v3, 1); /*0x655aba*/
    *((_DWORD *)this + 1160) = 0; /*0x655abc*/
  }
  if ( *((_DWORD *)this + 1167) ) /*0x655ac2*/
  {
    __3_YAXPAX_Z(*((void **)this + 1167)); /*0x655acd*/
    *((_DWORD *)this + 1167) = 0; /*0x655ad5*/
  }
  v4 = (_DWORD *)*((_DWORD *)this + 1174); /*0x655adc*/
  if ( v4 ) /*0x655ae4*/
  {
    if ( *v4 ) /*0x655ae6*/
      (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x655af0*/
    __3_YAXPAX_Z(v4); /*0x655af3*/
    *((_DWORD *)this + 1174) = 0; /*0x655afb*/
  }
  if ( *((_DWORD *)this + 1181) ) /*0x655b01*/
  {
    __3_YAXPAX_Z(*((void **)this + 1181)); /*0x655b0d*/
    *((_DWORD *)this + 1181) = 0; /*0x655b15*/
  }
}



// ==== 0x00655B20  RadarClass::InitializeHashTable  this=RadarClass  sig=csp ====
void __thiscall RadarClass::InitializeHashTable(RadarClass *this)
{
  MapClass *v2; // eax
  MapClass *v3; // esi
  int v4; // ebp
  _DWORD *v5; // eax
  RadarHashVector *v6; // edi
  void *v7; // eax
  int MapClass_field_0x8; // ecx
  int v9; // eax
  int v10; // ecx
  int i; // eax
  MapClass *RadarClass_field_0x14B4; // [esp-8h] [ebp-18h]
  RadarClass *v13; // [esp+0h] [ebp-10h]
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  this->RadarClass_field_0x121C = 0; /*0x655b2a*/
  this->RadarClass_field_0x1220 = 0; /*0x655b30*/
  this->RadarClass_field_0x123C = 0; /*0x655b36*/
  this->RadarClass_field_0x1258 = 0; /*0x655b3c*/
  this->RadarClass_field_0x1274 = 0; /*0x655b42*/
  v2 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x655b48*/
  v3 = v2; /*0x655b4d*/
  if ( v2 ) /*0x655b54*/
  {
    v4 = 256; /*0x655b57*/
    v2->MapClass_field_0x4 = Radar::PixelIndex; /*0x655b66*/
    v2->MapClass_field_0x8 = (void *)256; /*0x655b6d*/
    v2->MapClass_field_0xC = (void *)10; /*0x655b70*/
    v5 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x655b73*/
    if ( v5 ) /*0x655b7d*/
    {
      *v5 = 256; /*0x655b7f*/
      v14 = v5 + 1; /*0x655b84*/
      v6 = (RadarHashVector *)(v5 + 1); /*0x655b88*/
      do /*0x655b99*/
      {
        RadarHashVector::Construct(v6, 0, 0); /*0x655b90*/
        v6 = (RadarHashVector *)((char *)v6 + 24); /*0x655b95*/
        --v4; /*0x655b98*/
      }
      while ( v4 ); /*0x655b99*/
      v7 = v14; /*0x655b9b*/
    }
    else
    {
      v7 = 0; /*0x655ba6*/
    }
    MapClass_field_0x8 = (int)v3->MapClass_field_0x8; /*0x655ba8*/
    v3->MapClass_field_0x0 = v7; /*0x655bab*/
    v9 = 0; /*0x655bad*/
    if ( MapClass_field_0x8 > 0 ) /*0x655bb2*/
    {
      v10 = 0; /*0x655bb4*/
      do /*0x655bc5*/
      {
        ++v9; /*0x655bb8*/
        *(_DWORD *)((char *)v3->MapClass_field_0x0 + v10 + 20) = 10; /*0x655bb9*/
        v10 += 24; /*0x655bc0*/
      }
      while ( v9 < (int)v3->MapClass_field_0x8 ); /*0x655bc5*/
    }
  }
  else
  {
    v3 = 0; /*0x655bcb*/
  }
  this->RadarClass_field_0x1258 = v3; /*0x655bd7*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x655bdd*/
  RadarClass::RecreateSurface(v13, (int)this); /*0x655be4*/
  for ( i = 0; /*0x655bf3*/
        i < *(int *)&stru_A8EB00.?[164];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i - 4) + 1059) = 0 )
  {
    ++i; /*0x655bfb*/
  }
  if ( this->RadarClass_field_0x14B0 == (MapClass *)3 ) /*0x655c18*/
  {
    RadarClass_field_0x14B4 = this->RadarClass_field_0x14B4; /*0x655c21*/
    this->RadarClass_field_0x14AC = (void *)5; /*0x655c24*/
    RadarClass::SetViewMode((int *)this, (int)RadarClass_field_0x14B4, 0); /*0x655c2e*/
    RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x655c3b*/
  }
}



// ==== 0x00655C50  FogOfWar::RevealArea  this=RadarClass  sig=csp ====
int __thiscall FogOfWar_RevealArea(int this, int *a2)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // ebp
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  bool v28; // cc
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  int v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  int v36; // [esp+18h] [ebp-28h]
  _DWORD v37[2]; // [esp+20h] [ebp-20h] BYREF
  int GroundHeight; // [esp+28h] [ebp-18h]
  int v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  int v41; // [esp+44h] [ebp+4h]
  char v42; // [esp+44h] [ebp+4h]
  int v43; // [esp+44h] [ebp+4h]

  result = (int)dword_A83D4C; /*0x655c50*/
  if ( !dword_A83D4C ) /*0x655c62*/
    return result; /*0x655c62*/
  result = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), v40); /*0x655c75*/
  v5 = *a2; /*0x655c7e*/
  v41 = *a2; /*0x655c82*/
  if ( v41 < *(_DWORD *)result ) /*0x655c86*/
    return result; /*0x655c86*/
  if ( v5 >= *(_DWORD *)result + *(_DWORD *)(result + 8) ) /*0x655c93*/
    return result; /*0x655c93*/
  v6 = a2[1]; /*0x655c99*/
  v7 = *(_DWORD *)(result + 4); /*0x655c9c*/
  if ( v6 < v7 ) /*0x655ca5*/
    return result; /*0x655ca5*/
  result = v7 + *(_DWORD *)(result + 12); /*0x655cae*/
  if ( v6 >= result ) /*0x655cb2*/
    return result; /*0x655cb2*/
  v8 = (double)v41 / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x655cc2*/
  v37[0] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (v42 = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    v42 = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !(unsigned __int8)FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(*a2 - 5 * a2[1]); /*0x655da7*/
  v10 = *(_DWORD *)(v9 + 16); /*0x655daa*/
  v11 = *(_DWORD *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = (_DWORD *)(v11 + 4); /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(v12 - 1); /*0x655dc4*/
    if ( *v12 != *a2 || v12[1] != a2[1] ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!v42 || (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540))) /*0x655e10*/
      && (!*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(dword_A83D4C, v13)) )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = *(_DWORD *)(v13 + 540); /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v14 + 52) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
LABEL_25:
    v12 += 4; /*0x655e6a*/
    if ( ++v35 >= v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), a2); /*0x655e93*/
      (*(void (__thiscall **)(_DWORD, int *, unsigned int))(**(_DWORD **)(this + 4636) + 36))( /*0x655f40*/
        *(_DWORD *)(this + 4636),
        a2,
        ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Red) << g_BitShift_Green_0) >> 1) >> g_BitShift_Green_0 << g_BitShift_Red)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitMask_Green) << g_BitMask_Blue) >> 1) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Blue) << g_BitMask_Red) >> 1) >> g_BitMask_Red << g_BitShift_Blue));
    }
    else if ( v42 ) /*0x65605e*/
    {
      (*(void (__stdcall **)(int *, _DWORD))(**(_DWORD **)(this + 4636) + 36))(a2, 0); /*0x65608c*/
    }
    else
    {
      v20 = **(_DWORD **)(this + 4636); /*0x65606f*/
      v21 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), a2); /*0x656071*/
      (*(void (__thiscall **)(_DWORD, int *, int))(v20 + 36))(*(_DWORD *)(this + 4636), a2, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = *(_DWORD *)(v13 + 540); /*0x655f50*/
  v43 = v16; /*0x655f5b*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 196))(v13) ) /*0x655f5f*/
  {
    v43 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 208))(v13, 0); /*0x655f76*/
    v16 = v43; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = (*(unsigned __int8 *)(v43 + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x655fd2*/
        | (*(unsigned __int8 *)(v43 + 22266) >> g_BitMask_Blue << g_BitMask_Green)
        | (*(unsigned __int8 *)(v16 + 22267) >> g_BitMask_Red << g_BitShift_Blue);
  else
    v17 = *(_DWORD *)(FindBuildingAnimByName(g_INI_Key_LightGrey, 1) + 816); /*0x655fe5*/
  v18 = *(_DWORD *)(v13 + 372); /*0x655feb*/
  v19 = *(_DWORD *)(v13 + 380); /*0x655ff1*/
  if ( v18 == -1 ) /*0x655ffa*/
  {
LABEL_37:
    if ( v19 <= 0 || (v19 - 1) / *((_DWORD *)dword_8871E0 + 34) % 2 != 1 || *(#375 **)(v13 + 540) != dword_A83D4C ) /*0x65603a*/
      goto LABEL_41; /*0x65603a*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 4636) + 36))(*(_DWORD *)(this + 4636), a2, ~v17); /*0x656048*/
  }
  else
  {
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x656006*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
LABEL_41:
    (*(void (__stdcall **)(int *, int))(**(_DWORD **)(this + 4636) + 36))(a2, v17); /*0x65604d*/
  }
LABEL_45:
  v22 = *(_DWORD *)(this + 5276); /*0x65608f*/
  v23 = *(_DWORD *)(this + 5280); /*0x656095*/
  v24 = (int *)(this + 4620); /*0x6560a0*/
  v25 = v22 + *a2; /*0x6560a6*/
  v26 = a2[1] + v23; /*0x6560a8*/
  if ( v24[2] <= 0 || v24[3] <= 0 ) /*0x6560be*/
  {
    v27 = v22 + *a2; /*0x656125*/
    v29 = a2[1] + v23; /*0x656127*/
    result = 1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *v24; /*0x6560c2*/
    v28 = *v24 <= v25; /*0x6560c5*/
    v29 = v24[1]; /*0x6560c7*/
    v30 = v24[2]; /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = v24[3]; /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 += v27 - v25; /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( v29 > v26 ) /*0x6560e6*/
    {
      v31 = v29 - v26 + v39; /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( v27 + v30 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = v25 - v27 + 2; /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( v39 + v29 < v26 + 1 ) /*0x656114*/
      v32 = v26 - v29 + 2; /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = v32; /*0x656121*/
  }
  *v24 = v27; /*0x65612d*/
  v24[1] = v29; /*0x65612f*/
  v24[2] = result; /*0x656132*/
  v24[3] = v33; /*0x656135*/
  return result; /*0x656138*/
}



// ==== 0x00656150  FogOfWar::RenderCell  this=FogOfWar  sig=csp ====
int __thiscall FogOfWar::RenderCell(FogOfWar *this)
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rax
  char *v5; // edi
  char *v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  int v14; // edx
  int v15; // eax
  _BYTE *v16; // edx
  int BuildingAnimByName; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v2 = this->q487; /*0x65615f*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x65616f*/
  v4 = v3 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2); /*0x65617b*/
  v5 = (char *)this->u32_1274; /*0x65617f*/
  HIDWORD(v4) = (((BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (HIDWORD(v4) >> 2)); /*0x656194*/
  v6 = &v5[4 * (HIDWORD(v4) >> 2)]; /*0x656194*/
  v7 = BYTE4(v4) & 3; /*0x656198*/
  v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    v9 = v8 + **((_DWORD **)this + 1174); /*0x6561ab*/
    v10 = *(_DWORD *)(v9 + 16); /*0x6561ad*/
    result = *(_DWORD *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      v12 = (_DWORD *)(result + 4); /*0x6561bb*/
      v22 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        v13 = (_DWORD *)*(v12 - 1); /*0x6561c8*/
        v14 = *v12 /*0x6561d8*/
            + v12[1] * (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 124))(this->q487);
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        v16 = (_BYTE *)(this->u32_1274 + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (unsigned __int8)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x656248*/
                                             + 4
                                             * *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(
                                                             v13,
                                                             0)
                                                         + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x65625c*/
          }
          v18 = *(_DWORD *)(BuildingAnimByName + 816); /*0x65625e*/
          v19 = *(_DWORD *)(BuildingAnimByName + 780); /*0x656264*/
          v20 = *(_DWORD *)(v19 + 372); /*0x65626d*/
          if ( *(_DWORD *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(unsigned __int8 *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v18); /*0x656281*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**((_DWORD **)this + 1159) + 36))( /*0x65628f*/
            this->q487,
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v22; /*0x656299*/
      }
      while ( v22 ); /*0x65629e*/
      v8 = v23; /*0x6562a4*/
    }
    v8 += 24; /*0x6562a8*/
    v23 = v8; /*0x6562b1*/
  }
  while ( v8 < 6144 ); /*0x6562b5*/
  return result; /*0x6562bb*/
}



// ==== 0x006562D0  FogOfWar::RevealCell  this=IUnknown  sig=csp ====
void __thiscall FogOfWar_RevealCell(int this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _BYTE *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( (int)*a2 >= 0 /*0x656310*/
    && *a2 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636))
    && (int)a2[1] >= 0
    && a2[1] < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)) )
  {
    v3 = *a2 + a2[1] * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636)); /*0x656329*/
    v4 = 1 << (v3 & 7); /*0x656333*/
    v5 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (unsigned __int8)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      v6 = *(_DWORD *)(this + 4708); /*0x656351*/
      if ( *(_DWORD *)(this + 4716) < v6 /*0x656376*/
        || (*(_BYTE *)(this + 4713) || !v6)
        && (v7 = *(_DWORD *)(this + 4720), v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4700) + 8))(this + 4700, v6 + v7, 0) )
      {
        v8 = *(_DWORD *)(this + 4716); /*0x65637d*/
        v9 = *(_DWORD *)(this + 4704); /*0x656380*/
        *(_DWORD *)(this + 4716) = v8 + 1; /*0x656386*/
        *(_DWORD *)(v9 + 8 * v8) = *a2; /*0x65638b*/
        *(_DWORD *)(v9 + 8 * v8 + 4) = a2[1]; /*0x656391*/
      }
      *(_BYTE *)(this + 5337) = 1; /*0x656395*/
    }
  }
}



// ==== 0x006563B0  RadarClass::UpdateFoundationShapesCustom  this=RadarClass  sig=csp ====
char __thiscall RadarClass::UpdateFoundationShapesCustom(float *this)
{
  float *v1; // ebp
  int v2; // ebx
  float *v3; // esi
  int v4; // edi
  double v5; // st7
  int v6; // ebp
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // ebx
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v1 = this; /*0x6563b5*/
  v2 = 0; /*0x6563b7*/
  v3 = this + 1182; /*0x6563bf*/
  v22 = 0; /*0x6563c5*/
  while ( 1 ) /*0x6563d3*/
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 12))(v3); /*0x6563d3*/
    v4 = *(int *)((char *)dword_819310 + v2); /*0x6563dc*/
    if ( *(int *)((char *)dword_8192B8 + v2) == 1 ) /*0x6563ed*/
    {
      v5 = v1[1314] + 0.5; /*0x6563f5*/
      if ( v5 < 1.0 ) /*0x656408*/
        v5 = 1.0; /*0x65640c*/
      v6 = Math::RoundToInt(v5); /*0x656417*/
      v19 = v6; /*0x656419*/
    }
    else
    {
      v7 = (double)*(int *)((char *)dword_8192B8 + v2) * v1[1314] + 0.5; /*0x656429*/
      if ( v7 < 2.0 ) /*0x65643c*/
        v7 = 2.0; /*0x656440*/
      v19 = Math::RoundToInt(v7); /*0x65644b*/
      v6 = v19; /*0x65644f*/
    }
    if ( v4 == 1 ) /*0x656454*/
    {
      v8 = this->q1488 + 0.5; /*0x656460*/
      if ( v8 < 1.0 ) /*0x656473*/
        v8 = 1.0; /*0x656477*/
    }
    else
    {
      v8 = (double)v4 * this->q1488 + 0.5; /*0x65648d*/
      if ( v8 < 2.0 ) /*0x6564a0*/
        v8 = 2.0; /*0x6564a4*/
    }
    v9 = Math::RoundToInt(v8); /*0x6564aa*/
    v10 = v9; /*0x6564af*/
    v11 = 0; /*0x6564b1*/
    v20 = v9; /*0x6564b3*/
    v12 = v9 + v6 - 1; /*0x6564b7*/
    v23 = v12; /*0x6564bd*/
    if ( v12 > 0 ) /*0x6564c1*/
    {
      v21 = 0; /*0x6564c7*/
      while ( 1 ) /*0x6564d1*/
      {
        if ( v11 >= v10 ) /*0x6564d3*/
          v9 = v11 - 2 * v10 + 2; /*0x6564e4*/
        else
          v9 = v21; /*0x6564d5*/
        if ( v11 >= v6 ) /*0x6564e9*/
          v13 = 2 * v6 - v11 - 2; /*0x6564f5*/
        else
          v13 = v11; /*0x6564eb*/
        v14 = v9; /*0x6564fa*/
        if ( v9 <= v13 ) /*0x6564fc*/
        {
          do /*0x656540*/
          {
            v15 = *((_DWORD *)v3 + 2); /*0x6564fe*/
            if ( *((_DWORD *)v3 + 4) < v15 /*0x656528*/
              || ((LOBYTE(v9) = *((_BYTE *)v3 + 13), (_BYTE)v9) || !v15)
              && (v9 = *((_DWORD *)v3 + 5), v9 > 0)
              && (LOBYTE(v9) = (*(int (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v15 + v9, 0),
                  (_BYTE)v9) )
            {
              v9 = *((_DWORD *)v3 + 4); /*0x65652a*/
              v16 = *((_DWORD *)v3 + 1); /*0x65652d*/
              *((_DWORD *)v3 + 4) = v9 + 1; /*0x656533*/
              *(_DWORD *)(v16 + 8 * v9) = v14; /*0x656536*/
              *(_DWORD *)(v16 + 8 * v9 + 4) = v11; /*0x656539*/
            }
            ++v14; /*0x65653d*/
          }
          while ( v14 <= v13 ); /*0x656540*/
          v10 = v20; /*0x656542*/
          v12 = v23; /*0x656546*/
        }
        ++v11; /*0x65654e*/
        --v21; /*0x656552*/
        if ( v11 >= v12 ) /*0x656556*/
          break; /*0x656556*/
        v6 = v19; /*0x6564cd*/
      }
      v2 = v22; /*0x65655c*/
    }
    v2 += 4; /*0x656560*/
    v3 += 6; /*0x656563*/
    v22 = v2; /*0x656569*/
    if ( v2 >= 88 ) /*0x65656d*/
      break; /*0x65656d*/
    v1 = this; /*0x6563cb*/
  }
  return v9; /*0x656573*/
}



// ==== 0x00656580  Diplomacy::GetField  this=Diplomacy  sig=csp ====
char *__thiscall Diplomacy::GetField(char *this, int a2)
{
  return this + 24 * *(_DWORD *)(a2 + 3824) + 4728; /*0x656595*/
}



// ==== 0x006565A0  CellClass::RevealFogRect  this=CellClass  sig=csp ====
void __thiscall sub_6565A0(int this, __int16 *a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // ebx
  int i; // edi
  int v21; // [esp+10h] [ebp-34h] BYREF
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h] BYREF
  int v27; // [esp+28h] [ebp-1Ch]
  int v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  _DWORD v30[4]; // [esp+34h] [ebp-10h] BYREF
  int v31; // [esp+48h] [ebp+4h]

  if ( !*(_DWORD *)(this + 4636) ) /*0x6565b1*/
    return; /*0x6565b1*/
  v3 = *(_DWORD *)(this + 5272); /*0x6565bb*/
  v4 = a2[1]; /*0x6565c1*/
  v5 = *a2; /*0x6565c5*/
  v6 = v5 + *(_DWORD *)(this + 5264) - v4; /*0x6565d2*/
  v7 = v5 + v4 - v3; /*0x6565d4*/
  v8 = 2; /*0x6565d9*/
  if ( v6 == -1 ) /*0x6565de*/
  {
    v6 = 0; /*0x6565e0*/
LABEL_5:
    v8 = 1; /*0x6565f2*/
    goto LABEL_6; /*0x6565f2*/
  }
  if ( v6 == 2 * *(_DWORD *)(this + 260) - 1 ) /*0x6565f0*/
    goto LABEL_5; /*0x6565f0*/
LABEL_6:
  v27 = v7; /*0x6565f7*/
  v9 = *(_DWORD *)(this + 4676); /*0x6565fb*/
  v28 = v8; /*0x656601*/
  v26 = v6; /*0x65660a*/
  v10 = *(_DWORD *)(this + 4672); /*0x65660e*/
  v24 = v9; /*0x65661a*/
  v29 = 1; /*0x656627*/
  v21 = 0; /*0x65662b*/
  v22 = 0; /*0x65662f*/
  v23 = v10; /*0x656633*/
  v11 = ClipRectIntersection(v30, &v26, &v21, 0, 0); /*0x656637*/
  v26 = *v11; /*0x65663e*/
  v27 = v11[1]; /*0x656645*/
  v28 = v11[2]; /*0x65664c*/
  v12 = *(_DWORD *)(this + 4636); /*0x656650*/
  v29 = v11[3]; /*0x656659*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 124))(v12); /*0x656668*/
  v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)); /*0x65666c*/
  v15 = v28; /*0x656672*/
  v21 = v14; /*0x656676*/
  if ( v28 > 0 && v29 > 0 ) /*0x656686*/
  {
    v16 = Math::RoundToInt((double)v26 * *(float *)(this + 5256)); /*0x656696*/
    v25 = (v16 - 1) & ((v16 - 1 < 0) - 1); /*0x6566b4*/
    v17 = Math::RoundToInt((double)(v26 + v15) * *(float *)(this + 5256)) + 1; /*0x6566c6*/
    if ( v17 >= v13 ) /*0x6566c8*/
      v17 = v13; /*0x6566ca*/
    v18 = Math::RoundToInt((double)v27 * *(float *)(this + 5256)); /*0x6566d6*/
    v19 = (v18 - 1) & ((v18 - 1 < 0) - 1); /*0x6566e8*/
    v31 = Math::RoundToInt((double)(v27 + v29) * *(float *)(this + 5256)) + 1; /*0x65670a*/
    if ( v31 >= v21 ) /*0x65670e*/
      v31 = v21; /*0x656710*/
    for ( ; v19 < v31; ++v19 ) /*0x656718*/
    {
      for ( i = v25; i < v17; ++i ) /*0x656720*/
      {
        v21 = i; /*0x656729*/
        v22 = v19; /*0x65672d*/
        FogOfWar::RevealCell(this, &v21); /*0x656731*/
      }
    }
  }
}



// ==== 0x00656750  TacticalClass::ScreenToCellLookup  this=TacticalClass  sig=csp ====
int __thiscall sub_656750(int this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int result; // eax
  double v13; // st7
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *retaddr; // [esp+24h] [ebp+0h]
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+30h] [ebp+Ch]

  v4 = *a2 - *(_DWORD *)(this + 5276); /*0x65676c*/
  v5 = a2[1] - *(_DWORD *)(this + 5280); /*0x65676e*/
  v6 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(v4 - 5 * v5); /*0x656795*/
  v7 = *(_DWORD *)(v6 + 16); /*0x656798*/
  *a4 = 0; /*0x65679b*/
  v8 = v7 - 1; /*0x6567a1*/
  if ( v8 >= 0 ) /*0x6567a4*/
  {
    v9 = (_DWORD *)(*(_DWORD *)(v6 + 4) + 16 * v8); /*0x6567ae*/
    v10 = v9 + 1; /*0x6567b0*/
    while ( 1 ) /*0x6567b5*/
    {
      v14[0] = *v9; /*0x6567b5*/
      if ( *v10 == v4 && v10[1] == v5 ) /*0x6567c2*/
        break; /*0x6567c2*/
      --v8; /*0x6567c4*/
      v9 -= 4; /*0x6567c5*/
      v10 -= 4; /*0x6567c8*/
      if ( v8 < 0 ) /*0x6567cd*/
        goto LABEL_8; /*0x6567cd*/
    }
    *a4 = v14[0]; /*0x6567d9*/
  }
LABEL_8:
  if ( *a4 ) /*0x6567e2*/
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD))(*(_DWORD *)*a4 + 76))(*a4, v14, 0); /*0x6567f4*/
    LOWORD(v16) = *v11 / 256; /*0x656807*/
    HIWORD(v16) = v11[1] / 256; /*0x65681f*/
    *retaddr = v16; /*0x656828*/
    return v16; /*0x656824*/
  }
  else
  {
    v13 = (double)v4 / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x65683a*/
    LOWORD(v17) = Math::RoundToInt(v13); /*0x656867*/
    result = Math::RoundToInt(v13); /*0x656878*/
    HIWORD(v17) = result; /*0x656881*/
    *a3 = v17; /*0x65688c*/
  }
  return result; /*0x65682a*/
}



// ==== 0x006568A0  RadarClass::Load  this=RadarClass  sig=csp ====
int __thiscall SidebarClass::Load(RadarClass *this, int a2)
{
  int v2; // edi
  int result; // eax
  VectorClass **p_RadarClass_field_0x125C; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  CampaignClass *RadarClass_field_0x1260; // edx
  VectorClass **p_RadarClass_field_0x1224; // esi
  int v11; // ebp
  VectorClass *v12; // ecx
  int v13; // eax
  VectorClass *v14; // eax
  VectorClass *v15; // edx
  RadarClass *v16; // esi
  int v17; // ecx
  char *v18; // eax
  int v19; // [esp+88h] [ebp-14h] BYREF
  RadarClass *v20; // [esp+8Ch] [ebp-10h]
  AudioController *p_RadarClass_field_0x14C0; // [esp+90h] [ebp-Ch]
  _DWORD v22[2]; // [esp+94h] [ebp-8h] BYREF

  v2 = a2; /*0x6568a7*/
  v20 = this; /*0x6568ae*/
  result = DisplayClass::SetSurface((DisplayClass *)a2); /*0x6568b2*/
  if ( result >= 0 ) /*0x6568bb*/
  {
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x6568cc*/
    if ( result >= 0 ) /*0x6568d1*/
    {
      p_RadarClass_field_0x14C0 = (AudioController *)&this->RadarClass_field_0x14C0; /*0x6568dd*/
      AudioController::Init((AudioController *)&this->RadarClass_field_0x14C0); /*0x6568e1*/
      p_RadarClass_field_0x125C = &this->RadarClass_field_0x125C; /*0x6568e6*/
      if ( this != (RadarClass *)-4700 ) /*0x6568ee*/
      {
        VectorClass::PointConstructor((VectorClass *)&this->RadarClass_field_0x125C, 0, 0); /*0x6568f4*/
        *p_RadarClass_field_0x125C = (VectorClass *)&DynamicVectorClass<Point2D>::`vftable'; /*0x6568f9*/
        *(_DWORD *)&this->__pad_1264[12] = 10; /*0x6568ff*/
        *(_DWORD *)&this->__pad_1264[8] = 0; /*0x656906*/
      }
      v19 = 0; /*0x65690d*/
      if ( a2 <= 0 ) /*0x656913*/
      {
LABEL_14:
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x656980*/
        if ( result >= 0 ) /*0x656990*/
        {
          p_RadarClass_field_0x1224 = &this->RadarClass_field_0x1224; /*0x656996*/
          if ( this != (RadarClass *)-4644 ) /*0x65699e*/
          {
            VectorClass::CellConstructor((VectorClass *)&this->RadarClass_field_0x1224, 0, 0); /*0x6569a4*/
            *p_RadarClass_field_0x1224 = (VectorClass *)&DynamicVectorClass<Cell>::`vftable'; /*0x6569a9*/
            *(_DWORD *)&this->__pad_122C[12] = 10; /*0x6569af*/
            *(_DWORD *)&this->__pad_122C[8] = 0; /*0x6569b6*/
          }
          v11 = 0; /*0x6569bd*/
          if ( a2 <= 0 ) /*0x6569c1*/
          {
LABEL_26:
            v16 = v20; /*0x656a1e*/
            v17 = 22; /*0x656a22*/
            v18 = &v20->__pad_127C[4]; /*0x656a29*/
            do /*0x656a56*/
            {
              if ( v18 != (char *)8 ) /*0x656a34*/
              {
                *((_DWORD *)v18 - 1) = 0; /*0x656a36*/
                *(_DWORD *)v18 = 0; /*0x656a39*/
                v18[4] = 1; /*0x656a3b*/
                v18[5] = 0; /*0x656a3e*/
                *((_DWORD *)v18 - 2) = &DynamicVectorClass<Point2D>::`vftable'; /*0x656a41*/
                *((_DWORD *)v18 + 3) = 10; /*0x656a48*/
                *((_DWORD *)v18 + 2) = 0; /*0x656a4f*/
              }
              v18 += 24; /*0x656a52*/
              --v17; /*0x656a55*/
            }
            while ( v17 ); /*0x656a56*/
            result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a65*/
                       v2,
                       &v16->RadarClass_field_0x14B0,
                       4,
                       0);
            if ( result >= 0 ) /*0x656a6a*/
            {
              result = (*(int (__stdcall **)(int, void **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a79*/
                         v2,
                         &v16->RadarClass_field_0x14AC,
                         4,
                         0);
              if ( result >= 0 ) /*0x656a7e*/
              {
                result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a8d*/
                           v2,
                           &v16->RadarClass_field_0x14B4,
                           4,
                           0);
                if ( result >= 0 ) /*0x656a92*/
                {
                  result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656aa1*/
                             v2,
                             v16->__pad_14B8,
                             4,
                             0);
                  if ( result >= 0 ) /*0x656aa6*/
                  {
                    AudioController::Init(p_RadarClass_field_0x14C0); /*0x656aac*/
                    return 0; /*0x656ab1*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x6569ce*/
            {
              result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v19, 4, 0); /*0x6569ce*/
              if ( result < 0 ) /*0x6569d3*/
                break; /*0x6569d3*/
              v12 = p_RadarClass_field_0x1224[2]; /*0x6569d9*/
              if ( (int)p_RadarClass_field_0x1224[4] < (int)v12 /*0x6569fb*/
                || (*((_BYTE *)p_RadarClass_field_0x1224 + 13) || !v12)
                && (v13 = (int)p_RadarClass_field_0x1224[5], v13 > 0)
                && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))(*p_RadarClass_field_0x1224)->Capacity)(
                     p_RadarClass_field_0x1224,
                     (int)v12 + v13,
                     0) )
              {
                v14 = p_RadarClass_field_0x1224[4]; /*0x656a02*/
                v15 = p_RadarClass_field_0x1224[1]; /*0x656a05*/
                p_RadarClass_field_0x1224[4] = (VectorClass *)((char *)&v14->vtable0 + 1); /*0x656a0b*/
                *((_DWORD *)&v15->vtable0 + (_DWORD)v14) = v19; /*0x656a12*/
              }
              if ( ++v11 >= a2 ) /*0x656a1c*/
                goto LABEL_26; /*0x656a1c*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x656920*/
        {
          result = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 8, 0); /*0x656920*/
          if ( result < 0 ) /*0x656925*/
            break; /*0x656925*/
          v6 = *(_DWORD *)this->__pad_1264; /*0x65692b*/
          if ( *(_DWORD *)&this->__pad_1264[8] < v6 /*0x65694d*/
            || (this->__pad_1264[5] || !v6)
            && (v7 = *(_DWORD *)&this->__pad_1264[12], v7 > 0)
            && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))(*p_RadarClass_field_0x125C)->Capacity)(
                 &this->RadarClass_field_0x125C,
                 v6 + v7,
                 0) )
          {
            v8 = *(_DWORD *)&this->__pad_1264[8]; /*0x656954*/
            RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x656957*/
            *(_DWORD *)&this->__pad_1264[8] = v8 + 1; /*0x65695d*/
            *((_DWORD *)&RadarClass_field_0x1260->AbstractClass + 2 * v8) = v22[0]; /*0x656964*/
            *((_DWORD *)&RadarClass_field_0x1260->? + 2 * v8) = v22[1]; /*0x65696b*/
          }
          if ( ++v19 >= a2 ) /*0x65697e*/
            goto LABEL_14; /*0x65697e*/
        }
      }
    }
  }
  return result; /*0x656ab3*/
}



// ==== 0x00656AC0  RadarClass::Save  this=RadarClass  sig=csp ====
int __thiscall SidebarClass::Save(RadarClass *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx
  int v9; // eax

  v2 = a2; /*0x656ac2*/
  result = DisplayClass::GetSurface((DisplayClass *)a2); /*0x656aca*/
  if ( result >= 0 )
  {
    v5 = *(_DWORD *)v2; /*0x656add*/
    a2 = *(_DWORD *)&this->__pad_1264[8]; /*0x656ae9*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x656aed*/
    if ( result >= 0 )
    {
      v6 = 0; /*0x656afc*/
      if ( a2 <= 0 )
      {
LABEL_6:
        v7 = *(_DWORD *)v2; /*0x656b27*/
        a2 = *(_DWORD *)&this->__pad_122C[8]; /*0x656b39*/
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 16))(v2, &a2, 4, 0); /*0x656b3d*/
        if ( result >= 0 )
        {
          v8 = 0; /*0x656b4c*/
          if ( a2 <= 0 )
          {
LABEL_10:
            result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b73*/
                       v2,
                       &this->RadarClass_field_0x14B0,
                       4,
                       0);
            if ( result >= 0 )
            {
              result = (*(int (__stdcall **)(int, void **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b96*/
                         v2,
                         &this->RadarClass_field_0x14AC,
                         4,
                         0);
              if ( result >= 0 )
              {
                result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656bab*/
                           v2,
                           &this->RadarClass_field_0x14B4,
                           4,
                           0);
                if ( result >= 0 )
                {
                  v9 = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this->__pad_14B8, 4, 0); /*0x656bc0*/
                  return v9 >= 0 ? 0 : v9;
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x656b63*/
            {
              result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b63*/
                         v2,
                         (char *)&this->RadarClass_field_0x1228->AbstractClass + 4 * v8,
                         4,
                         0);
              if ( result < 0 ) /*0x656b68*/
                break; /*0x656b68*/
              if ( ++v8 >= a2 ) /*0x656b71*/
                goto LABEL_10; /*0x656b71*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x656b13*/
        {
          result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b13*/
                     v2,
                     (char *)this->RadarClass_field_0x1260 + 8 * v6,
                     8,
                     0);
          if ( result < 0 ) /*0x656b18*/
            break; /*0x656b18*/
          if ( ++v6 >= a2 ) /*0x656b25*/
            goto LABEL_6; /*0x656b25*/
        }
      }
    }
  }
  return result; /*0x656bcd*/
}



// ==== 0x00656BE0  RadarClass::Toggle  this=RadarClass  sig=csp ====
void __thiscall sub_656BE0(int this, char a2, char a3)
{
  int v4; // eax

  if ( a2 != 1 ) /*0x656be9*/
  {
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c4e*/
    *(_DWORD *)(this + 5292) = 2; /*0x656c57*/
    if ( a3 ) /*0x656c63*/
      PlayVocClass(*((_DWORD *)dword_8871E0 + 445), 0x2000, 1.0, 0); /*0x656c7d*/
    goto LABEL_9; /*0x656c7d*/
  }
  v4 = *(_DWORD *)(this + 5292); /*0x656beb*/
  if ( !v4 || v4 == 2 ) /*0x656bf8*/
  {
    *(_DWORD *)(this + 5292) = 3; /*0x656c04*/
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c0e*/
    if ( a3 ) /*0x656c19*/
      PlayVocClass(*((_DWORD *)dword_8871E0 + 444), 0x2000, 1.0, 0); /*0x656c32*/
LABEL_9:
    Debug::Log(); /*0x656c82*/
  }
}



// ==== 0x00656CB0  RadarClass::SetViewMode  this=IUnknown  sig=csp ====
int __thiscall RadarClass::SetViewMode(int *this, int a2, char a3)
{
  int v4; // edi
  int result; // eax

  if ( !dword_A8B238[0] || !*((_BYTE *)dword_A83D4C + 501) || (v4 = 1, !dword_A8B538) ) /*0x656cd8*/
    v4 = a2; /*0x656cda*/
  result = this->q52C; /*0x656cde*/
  if ( result != v4 ) /*0x656ce6*/
  {
    if ( (result == 3 || result == 4 && v4 != 3) && this->q52B != 5 ) /*0x656d06*/
    {
      this->q52D = v4; /*0x656d08*/
      return result; /*0x656d10*/
    }
    if ( !v4 ) /*0x656d18*/
    {
      RadarClass::Toggle((int)this, 0, result == 1); /*0x656dad*/
LABEL_23:
      this->q52C = v4; /*0x656db2*/
      return result; /*0x656db2*/
    }
    if ( v4 != 1 ) /*0x656d1f*/
    {
      if ( v4 != 4 ) /*0x656d24*/
      {
        result = this->q52B; /*0x656d2a*/
        if ( result != 1 && result != 5 ) /*0x656d38*/
        {
          RadarClass::Toggle((int)this, 1, 0); /*0x656d40*/
          this->q52C = v4; /*0x656d45*/
          return result; /*0x656d4d*/
        }
        goto LABEL_20; /*0x656d38*/
      }
      goto LABEL_23; /*0x656d24*/
    }
    result = this->q52B; /*0x656d50*/
    if ( (result == 1 || result == 5) && this->u32_14D8 == 1 ) /*0x656d67*/
    {
LABEL_20:
      this->q52C = v4; /*0x656d69*/
      this->q52B = 4; /*0x656d6f*/
      *(this + 1343) = 25; /*0x656d75*/
      return result; /*0x656d81*/
    }
    RadarClass::Toggle((int)this, this->u32_14D8, a3); /*0x656d92*/
    this->q52C = 1; /*0x656d97*/
  }
  return result; /*0x656d0e*/
}



// ==== 0x00656DE0  HouseClass::updateAlliedStatus  this=HouseClass  sig=csp ====
char __thiscall HouseClass::updateAlliedStatus(HouseClass *this)
{
  return this->builtAircraftTypes[104]; /*0x656de6*/
}



// ==== 0x00656DF0  HouseClass::SetRadarVisibility  this=HouseClass  sig=csp ====
void __thiscall HouseClass::SetRadarVisibility(int this, char a2)
{
  if ( *(_BYTE *)(this + 5336) != a2 ) /*0x656dfe*/
  {
    *(_BYTE *)(this + 5336) = a2; /*0x656e02*/
    Debug::Log(); /*0x656e1a*/
    if ( *(_DWORD *)(this + 5296) == 1 ) /*0x656e2d*/
      RadarClass::Toggle(this, a2, 1); /*0x656e32*/
    else
      RadarClass::SetViewMode((int *)this, 1, 1); /*0x656e40*/
  }
}



// ==== 0x00656E50  RadarClass::IsActiveMode  this=RadarClass  sig=csp ====
int __thiscall RadarClass::IsActiveMode(RadarClass *this)
{
  int result; // eax

  if ( this->RadarClass_field_0x14B0 != (MapClass *)2 ) /*0x656e57*/
    return 0; /*0x656e57*/
  result = 1; /*0x656e5f*/
  if ( this->RadarClass_field_0x14AC != (void *)1 ) /*0x656e66*/
    return 0; /*0x656e68*/
  return result; /*0x656e6a*/
}



// ==== 0x00656E90  RadarClass::SetFlag  this=RadarClass  sig=csp ====
int __thiscall RadarClass::SetFlag(RadarClass *this, char a2)
{
  char v2; // dl
  int result; // eax

  v2 = this->RadarClass_field_0x14D9[1]; /*0x656e90*/
  result = 1; /*0x656e96*/
  this->RadarClass_field_0x14D9[0] = 1; /*0x656e9d*/
  if ( !v2 ) /*0x656ea3*/
    result = a2 != 0; /*0x656ead*/
  this->RadarClass_field_0x14D9[1] = result; /*0x656eaf*/
  return result; /*0x656eb5*/
}



// ==== 0x00656EC0  Radar::RenderMinimap  this=RadarClass  sig=csp ====
char __thiscall Radar::RenderMinimap(Radar *this)
{
  int *v2; // ebx
  int v3; // ecx
  __int16 *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  double v14; // st7
  int *v15; // ebp
  int v16; // eax
  double v17; // st6
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int i; // ebp
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int j; // ebp
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  bool v40; // cc
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  bool v48; // sf
  int v49; // ebx
  int v50; // ecx
  int k; // ebp
  int *v52; // eax
  int v53; // ebp
  int *v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // ebp
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // edi
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // edi
  int v67; // ecx
  int v68; // edi
  int v69; // edi
  int v70; // ebp
  int v71; // ebp
  int v72; // edi
  int v73; // ecx
  int *v74; // edi
  int *v75; // ebp
  int v76; // ecx
  int v77; // edi
  int v78; // ebp
  int v79; // eax
  int v80; // edx
  int v81; // eax
  int v82; // ecx
  int v83; // edi
  int v84; // ebp
  int v85; // eax
  int v86; // ecx
  int v87; // edx
  ObjectClass *v89; // [esp+2Eh] [ebp-58h]
  ObjectClass *v90; // [esp+2Eh] [ebp-58h]
  char v91; // [esp+40h] [ebp-46h]
  char v92; // [esp+41h] [ebp-45h]
  int v93; // [esp+42h] [ebp-44h] BYREF
  int v94; // [esp+4Ah] [ebp-3Ch]
  int v95; // [esp+4Eh] [ebp-38h]
  int v96; // [esp+52h] [ebp-34h] BYREF
  int v97; // [esp+56h] [ebp-30h]
  int v98; // [esp+5Ah] [ebp-2Ch]
  int v99; // [esp+5Eh] [ebp-28h]
  int *v100; // [esp+62h] [ebp-24h]
  int v101; // [esp+66h] [ebp-20h] BYREF
  int v102; // [esp+6Ah] [ebp-1Ch]
  int v103; // [esp+6Eh] [ebp-18h]
  int v104; // [esp+72h] [ebp-14h]
  int v105; // [esp+76h] [ebp-10h]
  int v106; // [esp+7Ah] [ebp-Ch]
  int v107; // [esp+7Eh] [ebp-8h]
  int v108; // [esp+82h] [ebp-4h]

  v2 = (int *)((char *)this + 4620); /*0x656ec9*/
  v100 = (int *)((char *)this + 4620); /*0x656ed1*/
  v105 = this->q120C; /*0x656ed7*/
  v106 = this->q1210; /*0x656ede*/
  v107 = this->q1214; /*0x656ee5*/
  v3 = this->q52C; /*0x656ee9*/
  v108 = v2[3]; /*0x656ef9*/
  if ( v3 != 1 || (v91 = 1, this->q52B != 1) ) /*0x656f0b*/
    v91 = 0; /*0x656f0d*/
  v96 = DSurface_ViewBounds.field_0 + dword_886FA8 / 2; /*0x656f28*/
  v97 = dword_886FA4 + dword_886FAC / 2; /*0x656f3e*/
  v4 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &v101, &v96); /*0x656f4e*/
  v5 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v4); /*0x656f59*/
  v6 = this->q524; /*0x656f61*/
  v96 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v96); /*0x656f71*/
  v8 = (__int16)v96; /*0x656f76*/
  v9 = (int *)((char *)this + 5276); /*0x656f7b*/
  v10 = (__int16)v96 + v6 - SHIWORD(v96); /*0x656f81*/
  v96 = *((int *)this + 1319); /*0x656f83*/
  v93 = v10; /*0x656f87*/
  v101 = v8; /*0x656f8b*/
  LOWORD(v11) = Math::RoundToInt((double)v10 * *((float *)this + 1314) + (double)v96); /*0x656f9d*/
  v12 = v7 - this->q1498; /*0x656fac*/
  v93 = v11; /*0x656fae*/
  v101 += v12; /*0x656fb4*/
  LOWORD(v13) = Math::RoundToInt((double)v101 * *((float *)this + 1314) + (double)*((int *)this + 1320)); /*0x656fc8*/
  v101 = v13; /*0x656fd1*/
  if ( v93 == v96 - 1 ) /*0x656fdc*/
    ++v93; /*0x656fdf*/
  v14 = 60.0 / *((float *)this + 1314); /*0x656fe9*/
  v15 = (int *)((char *)this + 5340); /*0x656ff3*/
  v99 = 1; /*0x657000*/
  this->q14DC = v93; /*0x657004*/
  this->q538 = v101; /*0x65700a*/
  this->q14E4 = 1; /*0x65700d*/
  this->q14E8 = 1; /*0x657010*/
  v101 = 2 * dword_886FA8; /*0x65701c*/
  LOWORD(v16) = Math::RoundToInt(v14); /*0x65702c*/
  v17 = 30.0 / *((float *)this + 1314); /*0x657037*/
  this->q14E4 = v16; /*0x65703d*/
  v101 = 2 * dword_886FAC; /*0x65704c*/
  *(float *)&v96 = v17; /*0x657050*/
  LOWORD(v18) = Math::RoundToInt(v14); /*0x65705c*/
  this->q14E8 = v18; /*0x657061*/
  LOWORD(v19) = Math::RoundToInt(v14); /*0x65706f*/
  v93 = v19; /*0x657074*/
  v101 = 2 * dword_886FAC; /*0x657082*/
  LOWORD(v20) = Math::RoundToInt((double)(2 * dword_886FAC) / *(float *)&v96 * 0.5); /*0x657094*/
  this->q14DC -= v93; /*0x6570a2*/
  this->q538 -= v20; /*0x6570aa*/
  v21 = this->q14DC; /*0x6570ad*/
  v22 = *v9; /*0x6570b0*/
  if ( v21 >= *v9 ) /*0x6570b4*/
  {
    v96 = *((int *)this + 1321); /*0x6570c1*/
    if ( v21 + this->q14E4 >= v22 + v96 ) /*0x6570d5*/
      *v15 = v96 - this->q14E4 + v22 - 1; /*0x6570e7*/
  }
  else
  {
    *v15 = v22; /*0x6570b6*/
  }
  v23 = this->q538; /*0x6570ea*/
  v24 = this->q528; /*0x6570f0*/
  if ( v23 >= v24 ) /*0x6570f8*/
  {
    v25 = this->q14A8; /*0x657108*/
    if ( v23 + this->q14E8 >= v25 + this->q528 ) /*0x65711a*/
      this->q538 = v25 - this->q14E8 + this->q528 - 1; /*0x65712e*/
  }
  else
  {
    this->q538 = v24; /*0x6570fa*/
  }
  if ( this->u32_14DA ) /*0x657134*/
  {
    this->q14EC = *v15; /*0x657148*/
    this->__pad_53C = this->q538; /*0x65714d*/
    this->u32_14F4 = this->q14E4; /*0x657153*/
    this->u32_14F8 = this->q14E8; /*0x657159*/
  }
  if ( this->u32_14D9 /*0x6571bc*/
    || this->q14EC != *v15
    || this->__pad_53C != this->q538
    || this->u32_14F4 != this->q14E4
    || this->u32_14F8 != this->q14E8
    || !Render_Render_660530()
    || *((int *)this + 1179) > 0
    || *((int *)this + 1165) > 0
    || HouseClass::ProcessData((HouseClass *)&g_VisibilitySystem) )
  {
    if ( v91 ) /*0x6571cf*/
      this->u32_14D9 = 0; /*0x6571d1*/
    Surface::RenderRadar((XSurface *)this); /*0x6571da*/
    v92 = 0; /*0x6571ea*/
    if ( this->q14EC != *v15 /*0x657216*/
      || this->__pad_53C != this->q538
      || this->u32_14F4 != this->q14E4
      || this->u32_14F8 != this->q14E8 )
    {
      for ( i = 0; i < this->u32_14F8; ++i ) /*0x657226*/
      {
        v27 = this->q528; /*0x657236*/
        v28 = i + this->__pad_53C; /*0x65723e*/
        v101 = this->q14EC - *v9; /*0x657240*/
        v102 = v28 - v27; /*0x65724d*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657251*/
        v29 = i + this->__pad_53C - this->q528; /*0x65727c*/
        v101 = this->u32_14F4 + this->q14EC - 1 - *v9; /*0x65727e*/
        v102 = v29; /*0x657285*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657289*/
      }
      for ( j = 0; j < this->u32_14F4; ++j ) /*0x6572a3*/
      {
        v31 = j + this->q14EC - *v9; /*0x6572bd*/
        v102 = this->__pad_53C - this->q528; /*0x6572bf*/
        v101 = v31; /*0x6572c3*/
        FogOfWar::RevealCell((int)this, &v101); /*0x6572ce*/
        v32 = this->q528; /*0x6572eb*/
        v33 = this->__pad_53C + this->u32_14F8 - 1; /*0x6572f1*/
        v101 = j + this->q14EC - *v9; /*0x6572f5*/
        v102 = v33 - v32; /*0x6572ff*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657306*/
      }
      v2 = v100; /*0x657316*/
      v92 = 1; /*0x65731a*/
    }
    v34 = (int *)((char *)this + 4680); /*0x657325*/
    if ( *((int *)this + 1172) > 0 && *((int *)this + 1173) > 0 ) /*0x657338*/
    {
      (*(void (__thiscall **)(_DWORD, char *, _DWORD, char *, _DWORD, int))(**((_DWORD **)this + 1159) + 8))( /*0x657353*/
        this->q487,
        (char *)this + 4680,
        this->q488,
        (char *)this + 4680,
        0,
        1);
      v35 = this->q528; /*0x65735b*/
      v36 = *v9 + *v34; /*0x65735e*/
      v37 = this->q493; /*0x657360*/
      v101 = v36; /*0x657363*/
      v38 = v35 + v37; /*0x657367*/
      v39 = this->q1254; /*0x657369*/
      v40 = v2[2] <= 0; /*0x65736c*/
      v102 = v38; /*0x657370*/
      v41 = this->q1250; /*0x657374*/
      v95 = v39; /*0x657377*/
      v94 = v41; /*0x65737b*/
      if ( v40 || v2[3] <= 0 ) /*0x657389*/
      {
        v45 = v95; /*0x657478*/
      }
      else if ( v41 <= 0 || v39 <= 0 ) /*0x657399*/
      {
        v36 = *v2; /*0x65745f*/
        v102 = v2[1]; /*0x657464*/
        v41 = v2[2]; /*0x657468*/
        v45 = v2[3]; /*0x65746b*/
      }
      else
      {
        v96 = *v2; /*0x6573a3*/
        v97 = v2[1]; /*0x6573aa*/
        v42 = v2[2]; /*0x6573ae*/
        v98 = v42; /*0x6573b1*/
        v99 = v2[3]; /*0x6573b8*/
        if ( v96 > v36 ) /*0x6573c2*/
        {
          v43 = v96 - v36; /*0x6573c4*/
          v96 = v36; /*0x6573c6*/
          v98 = v43 + v42; /*0x6573cc*/
        }
        if ( v97 > v102 ) /*0x6573da*/
        {
          v99 += v97 - v102; /*0x6573e4*/
          v97 = v102; /*0x6573ec*/
        }
        if ( v96 + v98 < v94 + v36 ) /*0x657403*/
          v98 = v94 - v96 + v101 + 1; /*0x657413*/
        if ( v97 + v99 >= v102 + v95 ) /*0x65742d*/
        {
          v45 = v99; /*0x65744b*/
          v36 = v96; /*0x65744f*/
          v102 = v97; /*0x657453*/
          v41 = v98; /*0x657457*/
        }
        else
        {
          v44 = v102; /*0x657433*/
          v102 = v97; /*0x657439*/
          v41 = v98; /*0x65743d*/
          v45 = v95 - v97 + v44 + 1; /*0x657441*/
          v36 = v96; /*0x657445*/
        }
      }
      *v2 = v36; /*0x65747c*/
      v2[1] = v102; /*0x657482*/
      v93 = *v34; /*0x657488*/
      v46 = v93; /*0x657485*/
      v2[2] = v41; /*0x65748c*/
      v47 = v46 + this->q1250; /*0x657495*/
      v48 = -this->q1250 < 0; /*0x657497*/
      v2[3] = v45; /*0x657499*/
      if ( v48 != __OFSUB__(v46, v47) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v49 = this->q493; /*0x65749e*/
          if ( v49 < v49 + this->q1254 ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              v101 = v93; /*0x6574bb*/
              v102 = v49; /*0x6574bf*/
              FogOfWar::RevealArea((int)this, &v101); /*0x6574c3*/
              ++v49; /*0x6574d4*/
            }
            while ( v49 < this->q493 + this->q1254 ); /*0x6574d9*/
          }
          v50 = this->q1250 + *v34; /*0x6574e9*/
          ++v93; /*0x6574eb*/
        }
        while ( v93 < v50 ); /*0x6574f1*/
      }
      *v34 = 0; /*0x6574f9*/
      this->q493 = 0; /*0x6574fe*/
      this->q1250 = 0; /*0x657501*/
      this->q1254 = 0; /*0x657504*/
      v2 = v100; /*0x657507*/
    }
    for ( k = this->q126C - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea((int)this, (int *)(this->ptr_1260 + 8 * k)); /*0x657520*/
    (*(void (__thiscall **)(char *))(this->q125C + 12))((char *)this + 4700); /*0x657534*/
    Render_Render_660000(v89); /*0x657537*/
    v52 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 1159) + 120))( /*0x657549*/
                   this->q487,
                   &v101);
    HouseClass::Render((HouseClass *)&g_VisibilitySystem, this->q487, *v52, v52[1], v52[2], v52[3]); /*0x657573*/
    if ( v91 ) /*0x65757e*/
    {
      if ( this->u32_14DA ) /*0x657584*/
      {
        v53 = VtableStub::72F510(); /*0x657595*/
        *v2 = *v9; /*0x65759b*/
        v2[1] = this->q528; /*0x6575a0*/
        v2[2] = this->q14A4; /*0x6575a6*/
        v2[3] = this->q14A8; /*0x6575af*/
        v101 = this->q11E4; /*0x6575ba*/
        v102 = this->q11EC; /*0x6575d7*/
        v54 = (int *)(*(int (__thiscall **)(DSurface *, int *))(DSurface_Sidebar->DSurface_field_0x0 + 120))( /*0x6575e2*/
                       DSurface_Sidebar,
                       &v93);
        DrawToSurfaceSHP((int)DSurface_Sidebar, v53, dword_B04A38, 0x20u, &v101, v54, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6575fc*/
      }
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x65760d*/
      {
        v55 = v2[2]; /*0x65761e*/
        v56 = v2[1] - this->q528; /*0x657621*/
        v57 = v2[3]; /*0x657623*/
        v101 = *v2 - *v9; /*0x657626*/
        v102 = v56; /*0x657630*/
        v58 = this->q487; /*0x65763d*/
        v103 = v55; /*0x657643*/
        v104 = v57; /*0x657647*/
        (*(void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))(DSurface_Sidebar->DSurface_field_0x0 + 8))( /*0x65764f*/
          DSurface_Sidebar,
          v2,
          v58,
          &v101,
          0,
          1);
      }
      (*(void (__thiscall **)(DSurface *, char *, _DWORD))(DSurface_Sidebar->DSurface_field_0x0 + 88))( /*0x657668*/
        DSurface_Sidebar,
        (char *)this + 5340,
        this->q1208);
      v59 = *v9; /*0x65766b*/
      v60 = this->q528; /*0x65766d*/
      v61 = this->q14A4; /*0x657670*/
      v62 = this->q14A8; /*0x657673*/
      v96 = v59 - 1; /*0x657678*/
      v63 = this->q1208; /*0x65767c*/
      v97 = v60 - 1; /*0x657682*/
      v98 = v61 + 2; /*0x657693*/
      v99 = v62 + 2; /*0x657697*/
      (*(void (__thiscall **)(DSurface *, int *, int))(DSurface_Sidebar->DSurface_field_0x0 + 88))( /*0x6576a2*/
        DSurface_Sidebar,
        &v96,
        v63);
    }
    if ( !v92 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *((int *)this + 1341) <= 0 || *((int *)this + 1342) <= 0 ) /*0x6576ca*/
    {
      v74 = v2; /*0x65775f*/
    }
    else
    {
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x6576e0*/
      {
        v64 = this->q14EC; /*0x6576e4*/
        v65 = this->__pad_53C; /*0x6576e6*/
        v66 = this->u32_14F4; /*0x6576e9*/
        v103 = v66; /*0x6576ec*/
        v104 = this->u32_14F8; /*0x6576f3*/
        v67 = *v2; /*0x6576f7*/
        if ( v64 > *v2 ) /*0x6576fb*/
        {
          v68 = v64 - v67 + v66; /*0x6576ff*/
          v64 = *v2; /*0x657701*/
          v103 = v68; /*0x657703*/
        }
        v69 = v2[1]; /*0x657707*/
        if ( v65 > v69 ) /*0x65770c*/
        {
          v70 = v65 - v69 + v104; /*0x657714*/
          v65 = v2[1]; /*0x657716*/
          v104 = v70; /*0x657718*/
        }
        if ( v64 + v103 < v67 + v2[2] ) /*0x657729*/
          v103 = v67 - v64 + v2[2] + 1; /*0x657734*/
        v71 = v2[1] + v2[3]; /*0x65773e*/
        v72 = v104; /*0x657741*/
        if ( v104 + v65 < v71 ) /*0x65774a*/
          v72 = v71 - v65 + 1; /*0x65774f*/
        v73 = v103; /*0x657751*/
        v98 = v103; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v74 = (int *)((char *)this + 5356); /*0x65775b*/
    }
    v64 = *v74; /*0x657761*/
    v65 = v74[1]; /*0x657763*/
    v73 = v74[2]; /*0x657766*/
    v98 = v73; /*0x657769*/
    v72 = v74[3]; /*0x65776d*/
LABEL_84:
    v40 = this->q14E4 <= 0; /*0x657770*/
    v75 = (int *)((char *)this + 5340); /*0x657777*/
    v99 = v72; /*0x65777d*/
    if ( !v40 && *((int *)this + 1338) > 0 ) /*0x65778b*/
    {
      if ( v73 <= 0 || v72 <= 0 ) /*0x65779b*/
      {
        v64 = *v75; /*0x657823*/
        v65 = this->q538; /*0x657826*/
        v73 = this->q14E4; /*0x657829*/
        v72 = this->q14E8; /*0x65782c*/
      }
      else
      {
        v76 = *v75; /*0x6577a1*/
        v40 = *v75 <= v64; /*0x6577a4*/
        v102 = this->q538; /*0x6577a9*/
        v103 = this->q14E4; /*0x6577b0*/
        v104 = this->q14E8; /*0x6577b7*/
        if ( !v40 ) /*0x6577bb*/
        {
          v77 = v76 - v64 + v103; /*0x6577c3*/
          v76 = v64; /*0x6577c5*/
          v103 = v77; /*0x6577c7*/
        }
        if ( v102 > v65 ) /*0x6577d1*/
        {
          v78 = v102 - v65 + v104; /*0x6577d9*/
          v102 = v65; /*0x6577db*/
          v104 = v78; /*0x6577df*/
        }
        if ( v76 + v103 < v64 + v98 ) /*0x6577f1*/
          v103 = v64 - v76 + v98 + 1; /*0x6577fd*/
        v72 = v104; /*0x657805*/
        v79 = v65 + v99; /*0x657809*/
        v65 = v102; /*0x65780b*/
        if ( v104 + v102 < v79 ) /*0x657814*/
          v72 = v79 - v102 + 1; /*0x657819*/
        v64 = v76; /*0x65781b*/
        v73 = v103; /*0x65781d*/
      }
    }
    *v2 = v64; /*0x657831*/
    v2[1] = v65; /*0x657834*/
    v2[2] = v73; /*0x657837*/
    v2[3] = v72; /*0x65783a*/
LABEL_99:
    v80 = this->q538; /*0x65783d*/
    v81 = this->q14E4; /*0x657849*/
    this->q14EC = this->q14DC; /*0x65784f*/
    v82 = this->q14E8; /*0x657855*/
    this->__pad_53C = v80; /*0x65785b*/
    this->u32_14F4 = v81; /*0x657861*/
    this->u32_14F8 = v82; /*0x657867*/
    Render_Render_6603B0(v90); /*0x65786d*/
  }
  if ( this->q49D ) /*0x657872*/
  {
    v101 = this->q487; /*0x657884*/
    v83 = v101; /*0x657882*/
    v84 = (*(int (__thiscall **)(int))(*(_DWORD *)v101 + 128))(v101); /*0x657896*/
    memset(*((void **)this + 1181), 0, v84 * (*(int (__thiscall **)(int))(*(_DWORD *)v83 + 124))(v83) / 8 + 1); /*0x6578b7*/
  }
  LOBYTE(v85) = v91; /*0x6578c0*/
  if ( !v91 ) /*0x6578c6*/
  {
    v86 = v106; /*0x6578cc*/
    v87 = v107; /*0x6578d0*/
    *v2 = v105; /*0x6578d4*/
    v85 = v108; /*0x6578d6*/
    v2[1] = v86; /*0x6578da*/
    v2[2] = v87; /*0x6578dd*/
    v2[3] = v85; /*0x6578e0*/
  }
  return v85; /*0x6578e3*/
}



// ==== 0x006578F0  TacticalClass::ProcessChronoEffect  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::ProcessChronoEffect(TacticalClass *this)
{
  int v2; // eax
  int v3; // eax
  Mixer *v4; // esi
  _DWORD *v5; // eax
  ObjectClass *v6; // [esp+0h] [ebp-4h]

  v2 = *((_DWORD *)this + 1326); /*0x6578f3*/
  if ( v2 ) /*0x6578fc*/
  {
    v3 = v2 - 1; /*0x657902*/
    if ( v3 ) /*0x657903*/
    {
      if ( v3 != 1 ) /*0x657906*/
        return; /*0x657906*/
      if ( g_AsyncIOState ) /*0x657913*/
      {
        if ( !sub_408410(v6) ) /*0x65791c*/
          return; /*0x65791c*/
        if ( g_AsyncIOState ) /*0x657929*/
        {
          ChronoScreenEffect::DecrementCounter(); /*0x65792b*/
          Map_Process(); /*0x657930*/
        }
      }
      RadarClass::SetViewMode((int *)this, 3, 0); /*0x65793b*/
      v4 = (Mixer *)((char *)this + 5312); /*0x657940*/
      Mixer::ReleaseChannel(v4); /*0x657948*/
      v5 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1784), 0x2000, 1.0, 0); /*0x657966*/
      SetAudioSource((int)v4, v5, 0); /*0x65796f*/
      RadarClass::SetGlobal(*(RadarClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4)); /*0x65797e*/
    }
    else if ( globalHelper_0532A0(*((std::codecvt_base **)this + 1333)) ) /*0x657989*/
    {
      if ( g_AsyncIOState ) /*0x657999*/
        sub_408390(); /*0x65799b*/
      *((_DWORD *)this + 1326) = 2; /*0x6579a0*/
    }
  }
  else
  {
    ThemeClass::ClearQueues(); /*0x6579ac*/
    UpdateThemeManager(*((_DWORD *)this + 1333), 0, 3); /*0x6579bb*/
    Map_Process_753570(); /*0x6579c0*/
    *((_DWORD *)this + 1326) = 1; /*0x6579c5*/
  }
}



// ==== 0x006579E0  Game::ManageGameSpeed  this=RadarClass  sig=csp ====
unsigned int __thiscall Game::ManageGameSpeed(Game *this)
{
  unsigned int result; // eax
  _BYTE *v3; // ecx
  char v4; // al
  bool v5; // bl
  int v6; // edi
  int *v7; // eax
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  bool v13; // zf
  ScenarioClass *v14; // [esp+0h] [ebp-30h]
  char v15; // [esp+12h] [ebp-1Eh]
  unsigned __int8 v16; // [esp+13h] [ebp-1Dh]
  _BYTE *v17; // [esp+14h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v19[16]; // [esp+20h] [ebp-10h] BYREF

  v3 = 0; /*0x6579ef*/
  v4 = this->q14BD; /*0x6579f1*/
  v17 = 0; /*0x6579f7*/
  v5 = g_AsyncIOState > 0; /*0x6579fd*/
  v16 = 0; /*0x657a02*/
  if ( !v4 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    result = Audio::IsPlaying(); /*0x657a0c*/
    v3 = v17; /*0x657a11*/
  }
  if ( this->u32_14DA == 1 && !this->q14BD ) /*0x657a22*/
  {
    v6 = VtableStub::72F510(); /*0x657a35*/
    v18[0] = this->q11E4; /*0x657a4d*/
    v18[1] = this->q11EC; /*0x657a5f*/
    v7 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x657a6a*/
                  DSurface_Sidebar,
                  v19);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v6, dword_B04A38, 0x20u, v18, v7, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v8 = this->q11EC; /*0x657a95*/
    this->q120C = this->q11E4; /*0x657aab*/
    this->q1210 = v8; /*0x657aae*/
    this->q1214 = 168; /*0x657ab1*/
    this->q1218 = 110; /*0x657ab4*/
    result = Debug::Log(); /*0x657ab7*/
    v3 = v17; /*0x657abc*/
  }
  if ( !v5 ) /*0x657ac5*/
  {
    v15 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  result = g_AsyncIOState; /*0x657acb*/
  if ( g_AsyncIOState <= 0 || (v3 = *(_BYTE **)AsyncIO_Instance, (v17 = *(_BYTE **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v15 = 1; /*0x657cb4*/
LABEL_13:
    if ( v3 ) /*0x657b40*/
    {
      result = (*(int (__thiscall **)(int *, _BYTE **))(dword_B45B58 + 16))(&dword_B45B58, &v17); /*0x657b52*/
      if ( result != -1 && (int)result < g_AsyncIOState && (int)result < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++result; /*0x657b75*/
          *((_DWORD *)AsyncIO_Instance + result - 1) = *((_DWORD *)AsyncIO_Instance + result); /*0x657b79*/
        }
        while ( (int)result < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v17 ) /*0x657b8d*/
        result = (**(int (__thiscall ***)(_BYTE *, int))v17)(v17, 1); /*0x657b93*/
    }
    v5 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel((Mixer *)this + 1328); /*0x657bb9*/
      v10 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1784), 0x2000, 1.0, 0); /*0x657bd8*/
      result = SetAudioSource((int)this + 5312, v10, 0); /*0x657be1*/
      this->q52B = 4; /*0x657be6*/
      this->q14FC = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 4))(v3) == 1 ) /*0x657af3*/
  {
    v9 = this->q11EC; /*0x657b01*/
    this->q120C = this->q11E4; /*0x657b12*/
    this->q1210 = v9; /*0x657b15*/
    this->q1214 = 168; /*0x657b18*/
    this->q1218 = 110; /*0x657b1b*/
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 20))(v17); /*0x657b24*/
  v3 = v17; /*0x657b27*/
  v15 = result; /*0x657b2d*/
  v16 = v17[4]; /*0x657b34*/
  if ( (_BYTE)result == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
LABEL_22:
  this->u32_14D9 = 0; /*0x657bfa*/
  if ( !v5 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v11 = this->q52D; /*0x657c0f*/
    this->q52B = 5; /*0x657c1a*/
    RadarClass::SetViewMode((int *)this->__pad_0, v11, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v16 = 0; /*0x657c37*/
    Mixer::ReleaseChannel((Mixer *)this + 1328); /*0x657c3d*/
    v12 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1788), 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource((int)this + 5312, v12, 0); /*0x657c64*/
    result = RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x657c71*/
    this->u32_14D9 = 1; /*0x657c76*/
  }
  LOBYTE(result) = v16; /*0x657c81*/
  v13 = this->q14BC == v16; /*0x657c90*/
  this->q14BD = v15 == 0; /*0x657c92*/
  if ( !v13 ) /*0x657c98*/
  {
    if ( v16 ) /*0x657c9c*/
    {
      result = (unsigned int)SetScenarioClassTimer(0); /*0x657ca0*/
      this->q14BC = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned int)ScenarioClass::ProcessIntroTimer(v14); /*0x657cc8*/
      this->q14BC = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/
}



// ==== 0x00657CE0  FogOfWar::Render  this=FogOfWar  sig=csp ====
int __thiscall FogOfWar::Render(FogOfWar *this)
{
  int *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int i; // [esp+10h] [ebp-24h]
  int v11[6]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[8]; // [esp+2Ch] [ebp-8h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 124))(this->q487); /*0x657d4e*/
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 128))(this->q487); /*0x657d52*/
    v8 = 0; /*0x657d58*/
    for ( i = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      v9 = 0; /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea((int)this, v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    v2 = (int *)this->q487; /*0x657cf2*/
    v3 = *v2; /*0x657d06*/
    v4 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, int))(**((_DWORD **)this + 1160) + 120))( /*0x657d0d*/
           this->q488,
           v11,
           0,
           1);
    v5 = (*(int (__thiscall **)(int *, _BYTE *, _DWORD, int))(*v2 + 120))(v2, v12, this->q488, v4); /*0x657d21*/
    (*(void (__thiscall **)(_DWORD, int))(v3 + 8))(this->q487, v5); /*0x657d2b*/
    return FogOfWar::RenderCell(this); /*0x657d30*/
  }
  return result; /*0x657d35*/
}



// ==== 0x00657DA0  Diplomacy::DlgProc  this=Diplomacy  sig=csp ====
int __stdcall Diplomacy_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  int i; // ebx
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // ebp
  int v10; // eax
  int v11; // eax
  int ResourceID_Hardcoded; // eax
  HWND v13; // ebp
  bool v14; // cc
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // ebp
  HWND v18; // ebx
  wchar_t *v19; // eax
  HWND v20; // eax
  int DlgCtrlID; // eax
  int *v22; // ecx
  int *v23; // ecx
  int v24; // edx
  int *v25; // ecx
  int v26; // esi
  int *v27; // ecx
  int v28; // edx
  unsigned int v29; // edi
  HWND hWnd; // [esp+10h] [ebp-14h]
  int v31; // [esp+14h] [ebp-10h]
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  unsigned __int8 IsAlliedWith; // [esp+20h] [ebp-4h]
  #375 *hDlga; // [esp+28h] [ebp+4h]
  HWND hDlgb; // [esp+28h] [ebp+4h]
  HWND hDlgc; // [esp+28h] [ebp+4h]
  int v38; // [esp+2Ch] [ebp+8h]
  char v39; // [esp+30h] [ebp+Ch]
  char v40; // [esp+34h] [ebp+10h]

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)a4); /*0x657dbd*/
  if ( result ) /*0x657dc4*/
    return result; /*0x657dc4*/
  if ( a2 != 273 ) /*0x657dd1*/
  {
    if ( a2 == 275 ) /*0x657dda*/
    {
      DrawPowerBarForPlayers(hDlg); /*0x65818a*/
      InvalidateRect(hDlg, 0, 1); /*0x658194*/
      return 0; /*0x6581a3*/
    }
    if ( a2 == 1175 ) /*0x657de5*/
    {
      for ( i = 0; i < 32; i += 4 ) /*0x657df1*/
      {
        DlgItem = GetDlgItem(hDlg, *(int *)((char *)&dword_8391FC + i)); /*0x657dfb*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x657e10*/
        v8 = GetDlgItem(hDlg, *(int *)((char *)&dword_83921C + i)); /*0x657e1a*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x657e29*/
      }
      v40 = 0; /*0x657e3e*/
      v39 = 0; /*0x657e43*/
      v33 = dword_A80238; /*0x657e48*/
      v32 = 1; /*0x657e4c*/
      v38 = 0; /*0x657e54*/
      do /*0x65807d*/
      {
        v9 = GetDlgItem(hDlg, dword_839240[v38]); /*0x657e6a*/
        hWnd = GetDlgItem(hDlg, dword_839260[v38]); /*0x657e84*/
        v10 = v32; /*0x657e8b*/
        v31 = v32; /*0x657e8d*/
        if ( v32 == *((_DWORD *)dword_A83D4C + 12) ) /*0x657e91*/
        {
          v31 = 0; /*0x657e93*/
          v10 = 0; /*0x657e9b*/
        }
        if ( v10 < v33 /*0x657ec1*/
          && (v11 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v10], (hDlga = (#375 *)v11) != 0)
          && *(_BYTE *)(*(_DWORD *)(v11 + 52) + 421) )
        {
          if ( !BYTE1(dword_8871E0[1].InfantryBrute) || (#375 *)HouseClass_Observer == dword_A83D4C || dword_A8B244 == 2 ) /*0x657ef9*/
          {
            ShowWindow(v9, 0); /*0x657f73*/
          }
          else
          {
            Diplomacy_Helper(v9); /*0x657eff*/
            IsAlliedWith = HouseClass::IsAlliedWith(dword_A83D4C, hDlga); /*0x657f16*/
            SendMessageA(v9, 0xF1u, IsAlliedWith, 0); /*0x657f2b*/
            HouseClass::IsAlliedWith(hDlga, dword_A83D4C); /*0x657f3c*/
            globalHelper_003DD0(v9); /*0x657f45*/
            v40 = 1; /*0x657f4f*/
            if ( dword_A8B538 || !(unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f5c*/
              EnableWindow(v9, 0); /*0x657f68*/
          }
          if ( (unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f79*/
          {
            if ( dword_A8B538 ) /*0x657f97*/
            {
              SendMessageA(hWnd, 0xF1u, 1u, 0); /*0x657fcc*/
              EnableWindow(hWnd, 0); /*0x657fd5*/
            }
            else
            {
              SendMessageA(hWnd, 0xF1u, *((unsigned __int8 *)&byte_A8D108 + v31), 0); /*0x657fb0*/
            }
            v39 = 1; /*0x657fb6*/
          }
          else
          {
            ShowWindow(hWnd, 0); /*0x657f89*/
          }
        }
        else
        {
          ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v32); /*0x657fe5*/
          hDlgb = GetDlgItem(hDlg, ResourceID_Hardcoded); /*0x657ff1*/
          EnableWindow(hDlgb, 0); /*0x657ff5*/
          ShowWindow(hDlgb, 0); /*0x658002*/
          hDlgc = GetDlgItem(hDlg, dword_839200[v38]); /*0x658015*/
          EnableWindow(hDlgc, 0); /*0x658019*/
          ShowWindow(hDlgc, 0); /*0x658026*/
          EnableWindow(v9, 0); /*0x65802b*/
          ShowWindow(v9, 0); /*0x658034*/
          EnableWindow(hWnd, 0); /*0x65803d*/
          ShowWindow(hWnd, 0); /*0x658046*/
          v13 = GetDlgItem(hDlg, dword_839220[v38]); /*0x658056*/
          EnableWindow(v13, 0); /*0x65805b*/
          ShowWindow(v13, 0); /*0x658064*/
        }
        v14 = v38 * 4 + 4 < 28; /*0x658072*/
        ++v32; /*0x658075*/
        ++v38; /*0x658079*/
      }
      while ( v14 ); /*0x65807d*/
      if ( !v40 ) /*0x658089*/
      {
        v15 = GetDlgItem(hDlg, 1431); /*0x658091*/
        ShowWindow(v15, 0); /*0x658096*/
      }
      if ( !v39 ) /*0x65809e*/
      {
        v16 = GetDlgItem(hDlg, 1061); /*0x6580a6*/
        ShowWindow(v16, 0); /*0x6580ab*/
      }
      v17 = GetDlgItem(hDlg, 1840); /*0x6580b5*/
      if ( v17 ) /*0x6580b9*/
      {
        if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x6580c8*/
        {
          ShowWindow(v17, 5); /*0x6580d4*/
          if ( dword_A8B238[0] == 3 ) /*0x6580de*/
          {
            SendMessageA(v17, 0xF1u, (unsigned __int8)dword_A8D110, 0); /*0x6580ef*/
          }
          else if ( dword_A8B238[0] == 4 ) /*0x6580f4*/
          {
            SendMessageA(v17, 0xF1u, BYTE1(dword_A8D110), 0); /*0x658106*/
          }
        }
        else
        {
          ShowWindow(v17, 0); /*0x6580cd*/
        }
      }
      DrawPowerBarForPlayers(hDlg); /*0x658112*/
      if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x658124*/
      {
        v18 = GetDlgItem(hDlg, 1062); /*0x658134*/
        v19 = WideString::GetOrEmpty_Alt((wchar_t **)(dword_A8B23C + 32)); /*0x658139*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v19); /*0x658147*/
      }
      v20 = GetDlgItem(hDlg, 1819); /*0x658153*/
      SendMessageA(v20, 0x4B2u, 0, 11055906); /*0x658162*/
      SetTimer(hDlg, 0, 0xFAu, 0); /*0x658172*/
      return 0; /*0x658181*/
    }
    return 0; /*0x658319*/
  }
  DlgCtrlID = GetDlgCtrlID(a4); /*0x6581a7*/
  if ( DlgCtrlID == 1059 ) /*0x6581b2*/
  {
    if ( !HIWORD(a3) ) /*0x6581b4*/
    {
      KillTimer(hDlg, 0); /*0x6581c0*/
      *(_DWORD *)GetWindowLongA(hDlg, 8) = 1059; /*0x6581d1*/
      return 0; /*0x6581de*/
    }
    return 0; /*0x6581b7*/
  }
  v22 = &dword_83923C; /*0x6581e1*/
  while ( *v22 != DlgCtrlID ) /*0x6581e8*/
  {
    if ( (int)++v22 >= (int)&dword_83925C ) /*0x6581f3*/
    {
      v23 = &dword_83925C; /*0x6581f5*/
      while ( *v23 != DlgCtrlID ) /*0x6581fc*/
      {
        if ( (int)++v23 >= (int)g_Str_File_OPTBTN_SHP ) /*0x658207*/
        {
          if ( DlgCtrlID == 1840 ) /*0x6582d8*/
          {
            v29 = HIWORD(a3); /*0x6582da*/
            if ( HIWORD(a3) <= 1u ) /*0x6582e0*/
            {
              if ( dword_A8B238[0] == 3 ) /*0x6582ee*/
              {
                LOBYTE(dword_A8D110) = v29 == 1; /*0x6582f9*/
                return 0; /*0x658305*/
              }
              if ( dword_A8B238[0] == 4 ) /*0x65830b*/
                BYTE1(dword_A8D110) = v29 == 1; /*0x658313*/
            }
          }
          return 0; /*0x658313*/
        }
      }
      if ( HIWORD(a3) != 1 && HIWORD(a3) ) /*0x65828e*/
        return 0; /*0x65828e*/
      v27 = &dword_83925C; /*0x658298*/
      v28 = 0; /*0x6582a0*/
      while ( *v27 != DlgCtrlID ) /*0x6582a4*/
      {
        ++v27; /*0x6582a6*/
        ++v28; /*0x6582a9*/
        if ( (int)v27 >= (int)g_Str_File_OPTBTN_SHP ) /*0x6582b0*/
        {
          v28 = -1; /*0x6582b2*/
          break; /*0x6582b2*/
        }
      }
      if ( v28 == *((_DWORD *)dword_A83D4C + 12) ) /*0x6582bd*/
        v28 = 0; /*0x6582bf*/
      *((_BYTE *)&byte_A8D108 + v28) = HIWORD(a3) == 1; /*0x6582c3*/
      return 0; /*0x6582d0*/
    }
  }
  if ( HIWORD(a3) > 1u ) /*0x658214*/
    return 0; /*0x658214*/
  v24 = 0; /*0x65821e*/
  v25 = &dword_83923C; /*0x658220*/
  while ( *v25 != DlgCtrlID ) /*0x658227*/
  {
    ++v25; /*0x658229*/
    ++v24; /*0x65822c*/
    if ( (int)v25 >= (int)&dword_83925C ) /*0x658233*/
    {
      v26 = -1; /*0x658235*/
      goto LABEL_60; /*0x658235*/
    }
  }
  v26 = v24; /*0x65824e*/
LABEL_60:
  if ( v26 == *((_DWORD *)dword_A83D4C + 12) ) /*0x658241*/
    v26 = 0; /*0x658243*/
  if ( HIWORD(a3) ) /*0x65820e*/
    SendMessageA(a4, 0xF1u, 0, 0); /*0x658261*/
  else
    SendMessageA(a4, 0xF1u, 1u, 0); /*0x65824c*/
  SquadClass::ProcessMove(v26); /*0x658269*/
  return 0; /*0x658178*/
}



// ==== 0x00658330  TabClass::DrawPower  this=TabClass  sig=csp ====
LRESULT __thiscall TabClass::DrawPower(TabClass *this, void *hDlg)
{
  int v2; // ebp
  int v3; // edi
  Color *BuildingAnimByName; // eax
  int v5; // eax
  LPARAM v6; // esi
  HWND DlgItem; // edi
  int ResourceIDHardcodedCSF; // eax
  HWND v9; // eax
  int v10; // edx
  HWND Default; // eax
  HWND v12; // eax
  unsigned __int8 IsAlliedWith; // al
  HWND v14; // eax
  HWND v15; // edi
  const wchar_t *v16; // eax
  _DWORD *v17; // ebx
  int v18; // ecx
  int v19; // edx
  HWND v20; // edi
  HWND v22; // eax
  HWND v23; // eax
  HWND hWnd; // [esp+10h] [ebp-D8h] BYREF
  __int16 v25; // [esp+14h] [ebp-D4h]
  unsigned __int8 v26; // [esp+16h] [ebp-D2h]
  int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF
  ObjectClass *v29; // [esp+F0h] [ebp+8h]
  #375 *other; // [esp+F4h] [ebp+Ch]

  v2 = *(&dword_83921C + (_DWORD)v29); /*0x658346*/
  v3 = *(&dword_8391FC + (_DWORD)v29); /*0x65834f*/
  nIDDlgItem = v2; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( other && *(_BYTE *)(*((_DWORD *)other + 13) + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)other + 45077); /*0x658386*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x658395*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6583a1*/
    }
    else if ( *((_BYTE *)other + 501) ) /*0x6583a8*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(aGrey, 1); /*0x6583bc*/
    }
    else
    {
      BuildingAnimByName = (Color *)*((_DWORD *)dword_B054D4 + *((_DWORD *)other + 22549)); /*0x6583cf*/
    }
    v5 = Color::ConvertToRGB(BuildingAnimByName + 194, (int)&hWnd); /*0x6583dd*/
    v25 = *(_WORD *)v5; /*0x6583e6*/
    v26 = *(_BYTE *)(v5 + 2); /*0x6583ee*/
    v6 = (unsigned __int8)v25 | ((HIBYTE(v25) | (v26 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem((HWND)hDlg, v3); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v6); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v29); /*0x658452*/
    v9 = GetDlgItem((HWND)hDlg, ResourceIDHardcodedCSF); /*0x658460*/
    v10 = *((_DWORD *)other + 13); /*0x658466*/
    hWnd = v9; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(BuildingType **)(v10 + 180)); /*0x658473*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((BuildingType *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate(hWnd, Default); /*0x658490*/
    if ( *(&dword_83923C + (_DWORD)v29) != -1 ) /*0x65849f*/
    {
      v12 = GetDlgItem((HWND)hDlg, *(&dword_83923C + (_DWORD)v29)); /*0x6584ae*/
      hWnd = v12; /*0x6584ba*/
      if ( dword_A8B538[0] ) /*0x6584c0*/
      {
        EnableWindow(v12, 0); /*0x6584c5*/
        v12 = hWnd; /*0x6584cb*/
      }
      if ( *((_BYTE *)other + 501) ) /*0x6584cf*/
      {
        ShowWindow(v12, 0); /*0x6584dc*/
      }
      else
      {
        LOBYTE(v25) = HouseClass::IsAlliedWith((HouseClass *)dword_A83D4C); /*0x6584f4*/
        SendMessageA(hWnd, 0xF1u, (unsigned __int8)v25, 0); /*0x65850b*/
      }
      IsAlliedWith = HouseClass::IsAlliedWith((HouseClass *)other); /*0x658515*/
      globalHelper_003DD0(hWnd, IsAlliedWith); /*0x658520*/
    }
    if ( *((_BYTE *)other + 584) ) /*0x658525*/
    {
      v14 = GetDlgItem((HWND)hDlg, *(&dword_83925C + (_DWORD)v29)); /*0x65853f*/
      ShowWindow(v14, 0); /*0x658548*/
    }
    else if ( dword_A8B538[0] ) /*0x658557*/
    {
      v15 = GetDlgItem((HWND)hDlg, *(&dword_83925C + (_DWORD)v29)); /*0x658571*/
      SendMessageA(v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow(v15, 0); /*0x658580*/
    }
    v16 = 0; /*0x658586*/
    v17 = (_DWORD *)((char *)other + 21476); /*0x658588*/
    v18 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      v19 = *v17 + v17[21]; /*0x658598*/
      ++v17; /*0x65859a*/
      v16 = (const wchar_t *)((char *)v16 + v19); /*0x65859d*/
      --v18; /*0x65859f*/
    }
    while ( v18 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)g_Str_Fmt_PctD, v16); /*0x6585ad*/
    v20 = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x6585c9*/
    SendMessageA(v20, 0x498u, 0, v6); /*0x6585d3*/
    return SendMessageA(v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v22 = GetDlgItem((HWND)hDlg, v3); /*0x658600*/
    SendMessageA(v22, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v23 = GetDlgItem((HWND)hDlg, v2); /*0x658619*/
    return SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }
}



// ==== 0x00658640  ObjectClass::DrawPowerBarForPlayers  this=ObjectClass  sig=csp ====
int __stdcall DrawPowerBarForPlayers(ObjectClass *this)
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
    v4 = *(&dword_A8022C->vtable0 + v2); /*0x658668*/
    if ( v4 /*0x658683*/
      && ((unsigned __int8)House::IsHumanPlayer(*((House **)&dword_A8022C->vtable0 + v2))
       || !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422)) )
    {
      TabClass::DrawPower(v3, this); /*0x658692*/
    }
  }
  TabClass::DrawPower(v3, this); /*0x6586b4*/
  return TabClass::DrawPower(v3, this); /*0x6586c3*/
}



// ==== 0x006586D0  ObjectClass::ShowDiplomacyDialog  this=ObjectClass  sig=csp ====
int ShowDiplomacyDialog(ObjectClass *this)
{
  Dialog *Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (Dialog *)CreateDialog(0x73u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Diplomacy::DlgProc, 0); /*0x6586e9*/
  stru_A8EB00.?[440] = 1; /*0x6586eb*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6586f2*/
  if ( Dialog ) /*0x6586f9*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x658703*/
    Dialog::Show(Dialog); /*0x65870b*/
    dwNewLong = 0; /*0x658710*/
    while ( !(unsigned __int8)Dialog::PumpMessages() ) /*0x65871f*/
    {
      if ( dwNewLong ) /*0x658727*/
        goto LABEL_7; /*0x658727*/
    }
    dwNewLong = 1059; /*0x65872b*/
LABEL_7:
    Dialog::Destroy(Dialog); /*0x658733*/
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x658740*/
  stru_A8EB00.?[440] = BYTE2(dword_A8B230[381].vtable3); /*0x658758*/
  return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x658763*/
}



// ==== 0x00658770  RadarClass::Destru_vt33  this=RadarClass  sig=csp ====
wchar_t *__thiscall RadarClass::Destru_vt33(RadarClass *this, int a2)
{
  return DisplayClass::Draw((DisplayClass *)this, a2); /*0x65877a*/
}



// ==== 0x00658780  RTacticalClass@RadarClass::renderOverlay  this=RTacticalClass@RadarClass  sig=csp ====
_DWORD *__thiscall TacticalClass::sub_658780(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x658783*/
  if ( (a2 & 1) != 0 ) /*0x65878d*/
    __3_YAXPAX_Z(Block); /*0x658790*/
  return Block; /*0x65879a*/
}



// ==== 0x006587A0  RadarClass::Destru_vt04  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::Destru_vt04(RadarClass *this, char a2)
{
  MapClass **p_RadarClass_field_0x1488; // esi
  int v4; // ebp
  void *v5; // eax
  CampaignClass *RadarClass_field_0x1260; // eax
  CampaignClass *RadarClass_field_0x1228; // eax

  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x6587ac*/
  AudioFileClass::Release((AudioFileClass *)&this->RadarClass_field_0x14C0); /*0x6587b2*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x6587b9*/
  p_RadarClass_field_0x1488 = &this->RadarClass_field_0x1488; /*0x6587be*/
  v4 = 22; /*0x6587c4*/
  do /*0x6587f3*/
  {
    v5 = *(p_RadarClass_field_0x1488 - 5); /*0x6587cb*/
    p_RadarClass_field_0x1488 -= 6; /*0x6587ce*/
    *p_RadarClass_field_0x1488 = (MapClass *)&VectorClass<Point2D>::`vftable'; /*0x6587d3*/
    if ( v5 && *((_BYTE *)p_RadarClass_field_0x1488 + 13) ) /*0x6587db*/
    {
      __3_YAXPAX_Z(v5); /*0x6587e1*/
      p_RadarClass_field_0x1488[1] = 0; /*0x6587e9*/
    }
    --v4; /*0x6587ec*/
    *((_BYTE *)p_RadarClass_field_0x1488 + 13) = 0; /*0x6587ed*/
    p_RadarClass_field_0x1488[2] = 0; /*0x6587f0*/
  }
  while ( v4 ); /*0x6587f3*/
  RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x6587f5*/
  this->RadarClass_field_0x125C = (VectorClass *)&VectorClass<Point2D>::`vftable'; /*0x6587fb*/
  if ( RadarClass_field_0x1260 && this->__pad_1264[5] ) /*0x658809*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x658812*/
    this->RadarClass_field_0x1260 = 0; /*0x65881a*/
  }
  this->__pad_1264[5] = 0; /*0x658820*/
  *(_DWORD *)this->__pad_1264 = 0; /*0x658826*/
  RadarClass_field_0x1228 = this->RadarClass_field_0x1228; /*0x65882c*/
  this->RadarClass_field_0x1224 = (VectorClass *)&VectorClass<Cell>::`vftable'; /*0x658832*/
  if ( RadarClass_field_0x1228 && this->__pad_122C[5] ) /*0x658840*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x658849*/
    this->RadarClass_field_0x1228 = 0; /*0x658851*/
  }
  this->__pad_122C[5] = 0; /*0x658859*/
  *(_DWORD *)this->__pad_122C = 0; /*0x65885f*/
  MapClass::Destruct((char *)this); /*0x658865*/
  if ( (a2 & 1) != 0 ) /*0x65886f*/
    __3_YAXPAX_Z(this); /*0x658872*/
  return &this->RadarClass_field_0x0; /*0x65887c*/
}



// ==== 0x00658890  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Clear  this=DynamicVector  sig=csp ====
void __thiscall RadarHashVector::Clear(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x658896*/
  this->m_10 = 0; /*0x658899*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6588a0*/
  {
    __3_YAXPAX_Z(v2); /*0x6588a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6588ae*/
  }
  BYTE1(this->m_C) = 0; /*0x6588b1*/
  this->m_8 = 0; /*0x6588b4*/
}



// ==== 0x006588C0  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall RadarHashVector::GetCount(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6588c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x6588d5*/
  else
    return 0; /*0x6588c7*/
}



// ==== 0x006588E0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::Seek(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 16 * a3); /*0x6588ea*/
  *a2 = *v3; /*0x6588f2*/
  a2[1] = v3[1]; /*0x6588f7*/
  a2[2] = v3[2]; /*0x6588fd*/
  a2[3] = v3[3]; /*0x658903*/
  return a2; /*0x658906*/
}



// ==== 0x00658910  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::AddRef(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x65891b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x658920*/
  {
    v3 = 0; /*0x658922*/
    if ( m_8 <= 0 ) /*0x658926*/
      return 1; /*0x658960*/
    v4 = *(_DWORD *)(a2 + 4); /*0x658928*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x65892b*/
    v6 = (_DWORD *)(v4 + 4); /*0x65892e*/
    v7 = v4 - (_DWORD)v5; /*0x658931*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] ) /*0x65894d*/
    {
      ++v3; /*0x65894f*/
      v6 += 4; /*0x658950*/
      v5 += 4; /*0x658953*/
      if ( v3 >= m_8 ) /*0x658958*/
        return 1; /*0x658958*/
    }
  }
  return 0; /*0x65895a*/
}



// ==== 0x00658970  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Release  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::Release(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x658972*/
  if ( a2 ) /*0x65897e*/
  {
    v5 = a3; /*0x658984*/
    LOBYTE(this->m_C) = 0; /*0x658988*/
    if ( a3 ) /*0x65898d*/
    {
      if ( a2 - 1 >= 0 ) /*0x6589c7*/
      {
        v9 = a3 + 4; /*0x6589c9*/
        v10 = a2; /*0x6589cc*/
        do /*0x6589d9*/
        {
          *((_DWORD *)v9 - 1) = 0; /*0x6589cd*/
          *(_DWORD *)v9 = 0; /*0x6589d0*/
          *((_DWORD *)v9 + 1) = 0; /*0x6589d2*/
          v9 += 16; /*0x6589d5*/
          --v10; /*0x6589d8*/
        }
        while ( v10 ); /*0x6589d9*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658995*/
      if ( v6 ) /*0x65899f*/
      {
        if ( a2 - 1 >= 0 ) /*0x6589a6*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x6589a8*/
          v8 = a2; /*0x6589ab*/
          do /*0x6589b8*/
          {
            *(v7 - 1) = 0; /*0x6589ac*/
            *v7 = 0; /*0x6589af*/
            v7[1] = 0; /*0x6589b1*/
            v7 += 4; /*0x6589b4*/
            --v8; /*0x6589b7*/
          }
          while ( v8 ); /*0x6589b8*/
        }
        v5 = (char *)v6; /*0x6589ba*/
      }
      else
      {
        v5 = 0; /*0x6589be*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6589dd*/
    if ( v5 ) /*0x6589e1*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6589ec*/
      {
        m_8 = this->m_8; /*0x6589f1*/
        if ( a2 < m_8 ) /*0x6589f6*/
          m_8 = a2; /*0x6589f8*/
        if ( m_8 > 0 ) /*0x6589fc*/
        {
          v13 = 0; /*0x6589fe*/
          do /*0x658a24*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x658a05*/
            v15 = &v5[v13]; /*0x658a07*/
            v13 += 16; /*0x658a0a*/
            --m_8; /*0x658a0d*/
            *(_DWORD *)v15 = *v14; /*0x658a10*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x658a15*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x658a1b*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x658a21*/
          }
          while ( m_8 ); /*0x658a24*/
          v3 = a2; /*0x658a26*/
        }
        if ( BYTE1(this->m_C) ) /*0x658a2c*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658a35*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x658a3d*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x658a48*/
      this->m_8 = v3; /*0x658a4e*/
      BYTE1(this->m_C) = a3 == 0; /*0x658a51*/
      return 1; /*0x658a57*/
    }
    else
    {
      return 0; /*0x6589e6*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(_DWORD *)this->__pad_0 /*0x658a61*/
                                                                                            + 12))(this);
    return 1; /*0x658a67*/
  }
}



// ==== 0x00658A70  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall RadarHashVector::ddtor(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x658a7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658a83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x658a8b*/
  }
  BYTE1(this->m_C) = 0; /*0x658a8e*/
  this->m_8 = 0; /*0x658a91*/
}



// ==== 0x00658AA0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Read  this=VectorClass  sig=csp ====
int __thiscall RadarHashVector::Read(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x658aa0*/
    return 0; /*0x658aae*/
  m_8 = this->m_8; /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( m_8 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= m_8 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/
}



// ==== 0x00658AF0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall RadarHashVector::Write(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x658af0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/
}



// ==== 0x00658B10  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ComputeHashIndex  this=DynamicVector  sig=csp ====
char __thiscall RadarHashVector::ComputeHashIndex(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    LOBYTE(this->m_C) = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *((_DWORD *)v9 - 1) = 0; /*0x658b6d*/
          *(_DWORD *)v9 = 0; /*0x658b70*/
          *((_DWORD *)v9 + 1) = 0; /*0x658b72*/
          v9 += 16; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658b48*/
          v8 = a2; /*0x658b4b*/
          do /*0x658b58*/
          {
            *(v7 - 1) = 0; /*0x658b4c*/
            *v7 = 0; /*0x658b4f*/
            v7[1] = 0; /*0x658b51*/
            v7 += 4; /*0x658b54*/
            --v8; /*0x658b57*/
          }
          while ( v8 ); /*0x658b58*/
        }
        v5 = (char *)v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x658b87*/
    {
      m_8 = this->m_8; /*0x658b8c*/
      if ( a2 < m_8 ) /*0x658b91*/
        m_8 = a2; /*0x658b93*/
      if ( m_8 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --m_8; /*0x658ba8*/
          *(_DWORD *)v14 = *v13; /*0x658bab*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( m_8 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( BYTE1(this->m_C) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658bd0*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x658bd8*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x658be3*/
    this->m_8 = v3; /*0x658be9*/
    BYTE1(this->m_C) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x658bf5*/
  }
  v15 = this->m_8; /*0x658bf8*/
  if ( v15 < this->m_10 ) /*0x658c00*/
    this->m_10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}



// ==== 0x00658C20  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall RadarHashVector::FindItemIndex(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( m_10 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= m_10 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/
}



// ==== 0x00658C60  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Destructor  this=DynamicVector  sig=csp ====
char *__thiscall RadarHashVector::Destructor(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x658c6a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x658c6c*/
    v4 = (char *)this - 4; /*0x658c70*/
    v5 = 3 * v3; /*0x658c73*/
    v6 = v3 - 1; /*0x658c76*/
    v7 = &this->__pad_0[8 * v5]; /*0x658c77*/
    if ( v6 >= 0 ) /*0x658c7a*/
    {
      v8 = v6 + 1; /*0x658c7d*/
      do /*0x658caa*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x658c82*/
        v7 -= 24; /*0x658c85*/
        *(_DWORD *)v7 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658c8a*/
        if ( v9 && v7[13] ) /*0x658c92*/
        {
          __3_YAXPAX_Z(v9); /*0x658c98*/
          *((_DWORD *)v7 + 1) = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        v7[13] = 0; /*0x658ca4*/
        *((_DWORD *)v7 + 2) = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      __3_YAXPAX_Z(v4); /*0x658cb5*/
    return v4; /*0x658cbd*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x658cc5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658ccc*/
    if ( v11 && BYTE1(this->m_C) ) /*0x658cd4*/
    {
      __3_YAXPAX_Z(v11); /*0x658cda*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x658ce2*/
    }
    BYTE1(this->m_C) = 0; /*0x658ce9*/
    this->m_8 = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      __3_YAXPAX_Z(this); /*0x658cf4*/
    return this->__pad_0; /*0x658cfc*/
  }
}



// ==== 0x00658D10  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::QueryInterface(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x658d13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658d16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x658d20*/
  {
    __3_YAXPAX_Z(v3); /*0x658d28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x658d30*/
  }
  BYTE1(this->m_C) = 0; /*0x658d3b*/
  this->m_8 = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    __3_YAXPAX_Z(this); /*0x658d4b*/
  return this->__pad_0; /*0x658d55*/
}



// ==== 0x00658D60  VectorClass::PointConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::PointConstructor(VectorClass *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x658d6a*/
  this->Capacity = a2; /*0x658d71*/
  this->IsInitialized = 1; /*0x658d74*/
  this->IsAllocated = 0; /*0x658d78*/
  this->vtable0 = &VectorClass<Point2D>::`vftable'; /*0x658d7c*/
  if ( a2 ) /*0x658d82*/
  {
    if ( a3 ) /*0x658d8a*/
    {
      this->Items = (void *)a3; /*0x658d8d*/
      return &this->vtable0; /*0x658d98*/
    }
    v5 = (void *)__2_YAPAXI_Z(8 * a2); /*0x658da3*/
    if ( v5 ) /*0x658dad*/
    {
      this->Items = v5; /*0x658db0*/
      this->IsAllocated = 1; /*0x658db7*/
      return &this->vtable0; /*0x658dbf*/
    }
    this->IsAllocated = 1; /*0x658dc4*/
    this->Items = 0; /*0x658dc8*/
  }
  return &this->vtable0; /*0x658d96*/
}



// ==== 0x00658DE0  RadarHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::Construct(RadarHashVector *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx

  this->RadarHashVector_field_0x04 = 0; /*0x658ded*/
  this->RadarHashVector_field_0x08 = a2; /*0x658df0*/
  LOBYTE(this->RadarHashVector_field_0x0C) = 1; /*0x658df3*/
  BYTE1(this->RadarHashVector_field_0x0C) = 0; /*0x658df7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658dfa*/
  if ( a2 ) /*0x658e00*/
  {
    if ( a3 ) /*0x658e08*/
    {
      if ( a2 - 1 >= 0 ) /*0x658e0f*/
      {
        v4 = (_DWORD *)(a3 + 4); /*0x658e11*/
        v5 = a2; /*0x658e14*/
        do /*0x658e21*/
        {
          *(v4 - 1) = 0; /*0x658e15*/
          *v4 = 0; /*0x658e18*/
          v4[1] = 0; /*0x658e1a*/
          v4 += 4; /*0x658e1d*/
          --v5; /*0x658e20*/
        }
        while ( v5 ); /*0x658e21*/
      }
      this->RadarHashVector_field_0x04 = a3; /*0x658e23*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( a2 - 1 >= 0 ) /*0x658e3f*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658e41*/
          v8 = a2; /*0x658e44*/
          do /*0x658e51*/
          {
            *(v7 - 1) = 0; /*0x658e45*/
            *v7 = 0; /*0x658e48*/
            v7[1] = 0; /*0x658e4a*/
            v7 += 4; /*0x658e4d*/
            --v8; /*0x658e50*/
          }
          while ( v8 ); /*0x658e51*/
        }
      }
      else
      {
        v6 = 0; /*0x658e55*/
      }
      this->RadarHashVector_field_0x04 = v6; /*0x658e57*/
      BYTE1(this->RadarHashVector_field_0x0C) = 1; /*0x658e5a*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658e5e*/
  this->RadarHashVector_field_0x14 = 10; /*0x658e64*/
  this->RadarHashVector_field_0x10 = 0; /*0x658e6b*/
  return this->__pad_0; /*0x658e70*/
}



// ==== 0x00658E80  sub_658E80  this=-  sig=ida-proto ====
void sub_658E80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x658e8c*/
  dbl_B04A78 = Math::Sqrt(v0 + v0); /*0x658e9e*/
}



// ==== 0x00658EB0  sub_658EB0  this=-  sig=ida-proto ====
void sub_658EB0()
{
  dbl_B04AC8 = dbl_B04A78 / 60.0; /*0x658ebc*/
}



// ==== 0x00658ED0  sub_658ED0  this=-  sig=ida-proto ====
void sub_658ED0()
{
  dbl_B04AB0 = 1.0 / dbl_B04AC8; /*0x658edc*/
}



// ==== 0x00658EF0  sub_658EF0  this=-  sig=ida-proto ====
void sub_658EF0()
{
  dbl_B04AA8 = 0.0174532925199433 * 45.0; /*0x658efc*/
}



// ==== 0x00658F10  sub_658F10  this=-  sig=ida-proto ====
void sub_658F10()
{
  dbl_B04A80 = 0.0174532925199433 * 60.0; /*0x658f1c*/
}



// ==== 0x00658F30  sub_658F30  this=-  sig=ida-proto ====
void sub_658F30()
{
  dbl_B04A40 = 0.0174532925199433 * 90.0; /*0x658f3c*/
}



// ==== 0x00658F50  sub_658F50  this=-  sig=ida-proto ====
__int64 sub_658F50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04A40 - dbl_B04A80); /*0x658f62*/
  result = Math::RoundToInt(v0 * dbl_B04A78 * 0.5); /*0x658f76*/
  dword_B04AD0 = result; /*0x658f7b*/
  return result; /*0x658f80*/
}



// ==== 0x00658F90  sub_658F90  this=-  sig=ida-proto ====
void sub_658F90()
{
  dbl_B04A88 = Math::ArcTan((double)dword_B04AD0 * 0.00390625); /*0x658fa7*/
}



// ==== 0x00658FC0  sub_658FC0  this=-  sig=ida-proto ====
void sub_658FC0()
{
  dbl_B04AA0 = Math::ArcTan((double)(2 * dword_B04AD0) / dbl_B04A78); /*0x658fe2*/
}



// ==== 0x00658FF0  sub_658FF0  this=-  sig=ida-proto ====
__int64 sub_658FF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04AD0) + 0.5); /*0x65900b*/
  dword_B04AC4 = result; /*0x659010*/
  return result; /*0x659016*/
}



// ==== 0x00659020  sub_659020  this=-  sig=ida-proto ====
int sub_659020()
{
  word_B04A58 = 0; /*0x659022*/
  word_B04A5A = 0; /*0x659028*/
  return 0; /*0x65902e*/
}



// ==== 0x00659030  sub_659030  this=-  sig=ida-proto ====
int sub_659030()
{
  dword_B04A90 = 0; /*0x659032*/
  dword_B04A94 = 0; /*0x659037*/
  dword_B04A98 = 0; /*0x65903c*/
  return 0; /*0x659041*/
}



// ==== 0x00659050  sub_659050  this=-  sig=ida-proto ====
int sub_659050()
{
  dword_B04AC0 = 0; /*0x659055*/
  dword_B04AB8 = 128; /*0x65905f*/
  dword_B04ABC = 128; /*0x659064*/
  return 128; /*0x659069*/
}



// ==== 0x00659070  sub_659070  this=-  sig=ida-proto ====
int sub_659070()
{
  dword_B04A48 = 0; /*0x659072*/
  dword_B04A4C = 0; /*0x659077*/
  dword_B04A50 = 0; /*0x65907c*/
  dword_B04A54 = 0; /*0x659081*/
  return 0; /*0x659086*/
}



// ==== 0x00659090  sub_659090  this=-  sig=ida-proto ====
int sub_659090()
{
  dword_B04A64 = 0; /*0x659097*/
  dword_B04A68 = 0; /*0x65909c*/
  byte_B04A6C = 1; /*0x6590a1*/
  byte_B04A6D = 0; /*0x6590a8*/
  RadBeam_Array = (int)&DynamicVectorClass<RadBeam *>::`vftable'; /*0x6590ad*/
  dword_B04A74 = 10; /*0x6590b7*/
  dword_B04A70 = 0; /*0x6590c1*/
  return atexit(sub_6590D0); /*0x6590cc*/
}



// ==== 0x006590D0  sub_6590D0  this=-  sig=ida-proto ====
void __cdecl sub_6590D0()
{
  RadBeam_Array = (int)&VectorClass<RadBeam *>::`vftable'; /*0x6590d8*/
  if ( dword_B04A64 && byte_B04A6D ) /*0x6590ec*/
  {
    __3_YAXPAX_Z(dword_B04A64); /*0x6590ef*/
    dword_B04A64 = 0; /*0x6590f7*/
  }
  byte_B04A6D = 0; /*0x6590fd*/
  dword_B04A68 = 0; /*0x659103*/
}



// ==== 0x00659110  RadBeam::Create  this=RadBeam  sig=csp ====
int __thiscall RadBeam::Create(RadBeam *this)
{
  RadBeam *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (RadBeam *)__2_YAPAXI_Z(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, (int)this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( dword_B04A70 < dword_B04A68 /*0x65916a*/
    || (byte_B04A6D || !dword_B04A68)
    && dword_B04A74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadBeam_Array + 8))(
         &RadBeam_Array,
         dword_B04A68 + dword_B04A74,
         0) )
  {
    v4 = dword_B04A70++; /*0x659177*/
    *((_DWORD *)dword_B04A64 + v4) = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (RadBeam *)1 ? 20 : 10);
  return (int)inited; /*0x6591a1*/
}



// ==== 0x006591B0  ObjectClass::UpdateProjectileTrails  this=ObjectClass  sig=csp ====
void UpdateProjectileTrails(TechnoClass *this)
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
  _DWORD *v16; // edx
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
  LODWORD(v22) = 0; /*0x6591d1*/
  if ( dword_B04A70 - 1 >= 0 ) /*0x6591d5*/
  {
    v4 = dword_B04A70; /*0x6591dc*/
    v5 = (char *)dword_B04A64 + 4 * v1; /*0x6591df*/
    do /*0x6591f5*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v5 + 16) == 2 ) /*0x6591e8*/
      {
        ++v2; /*0x6591ea*/
        if ( *(_BYTE *)(*(_DWORD *)v5 + 9) ) /*0x6591eb*/
          ++v3; /*0x6591f0*/
      }
      v5 -= 4; /*0x6591f1*/
      --v4; /*0x6591f4*/
    }
    while ( v4 ); /*0x6591f5*/
    LODWORD(v22) = v3; /*0x6591f7*/
    Block = v2; /*0x6591fb*/
  }
  v6 = (double)(unsigned int)dword_ABCD44 /*0x65921d*/
     / (double)(int)dword_A8B558
     * ((double)(unsigned int)dword_ABCD44
      / (double)(int)dword_A8B558
      * ((double)(unsigned int)dword_ABCD44
       / (double)(int)dword_A8B558));
  v7 = (double)SLODWORD(v22); /*0x65921f*/
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
      v10 = *((_DWORD *)dword_B04A64 + v9); /*0x659282*/
      Block = (void *)v10; /*0x659285*/
      v11 = *(_DWORD *)(v10 + 16); /*0x659289*/
      if ( v11 == 1 ) /*0x65928f*/
        break; /*0x65928f*/
      if ( v11 == 2 ) /*0x6592d0*/
      {
        if ( *(_BYTE *)(v10 + 9) ) /*0x6592d6*/
        {
          v14 = Random::Range(&Randomizer_Global, 0, 99); /*0x6592e8*/
          LOWORD(v15) = Math::RoundToInt(v24 * 100.0); /*0x6592f4*/
          if ( v14 < v15 ) /*0x6592fb*/
            *((_BYTE *)Block + 9) = 0; /*0x659301*/
        }
        v13 = Weapon_Update(v20, 0); /*0x65930a*/
        goto LABEL_22; /*0x65930a*/
      }
LABEL_35:
      if ( --v9 < 0 ) /*0x6593d6*/
        return; /*0x6593d6*/
    }
    LOWORD(v12) = Math::RoundToInt(v23 * 10.0); /*0x65929b*/
    LODWORD(v22) = v12; /*0x6592a3*/
    if ( v12 >= 10 ) /*0x6592a7*/
    {
      if ( v12 > 100 ) /*0x6592b5*/
        LODWORD(v22) = 100; /*0x6592b7*/
    }
    else
    {
      LODWORD(v22) = 10; /*0x6592a9*/
    }
    *(double *)(v10 + 24) = (double)SLODWORD(v22); /*0x6592bf*/
    v13 = RenderProjectileTrail((ObjectClass *)Block); /*0x6592c6*/
LABEL_22:
    if ( v13 )
    {
      v16 = Block; /*0x659317*/
      v17 = *(_DWORD *)Block; /*0x65931b*/
      if ( *(_DWORD *)Block && *(void **)(v17 + 1296) == Block ) /*0x659327*/
      {
        *(_DWORD *)(v17 + 1296) = 0; /*0x659329*/
        *(_DWORD *)Block = 0; /*0x659333*/
        v16 = Block; /*0x659335*/
      }
      v18 = v16[1]; /*0x659339*/
      if ( v18
        && (*(_BYTE *)(v18 + 20) & 1) != 0
        && *(_DWORD **)((*(_BYTE *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) == v16 )
      {
        *(_DWORD *)((*(_BYTE *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) = 0;
        *((_DWORD *)Block + 1) = 0; /*0x659380*/
      }
      v19 = (*(int (__thiscall **)(int *, void **))(RadBeam_Array + 16))(&RadBeam_Array, &Block); /*0x659393*/
      if ( v19 != -1 && v19 < dword_B04A70 && v19 < --dword_B04A70 ) /*0x6593ae*/
      {
        do /*0x6593c6*/
        {
          ++v19; /*0x6593b6*/
          *((_DWORD *)dword_B04A64 + v19 - 1) = *((_DWORD *)dword_B04A64 + v19); /*0x6593ba*/
        }
        while ( v19 < dword_B04A70 ); /*0x6593c6*/
      }
      __3_YAXPAX_Z(Block); /*0x6593cd*/
    }
    goto LABEL_35; /*0x6593cd*/
  }
}



// ==== 0x006593F0  RadBeam::InitState  this=RadBeam  sig=csp ====
_DWORD *__thiscall RadBeam::InitState(RadBeam *this, int a2)
{
  this->? = 0; /*0x6593fe*/
  this->AbstractClass = 0; /*0x659401*/
  this->? = 0; /*0x659403*/
  LOBYTE(this->?) = 0; /*0x659406*/
  BYTE1(this->?) = 1; /*0x659409*/
  this->? = 0; /*0x65940c*/
  this->? = a2; /*0x65940f*/
  this->? = 0; /*0x659412*/
  LOBYTE(this->?) = 0; /*0x659415*/
  BYTE1(this->?) = 0; /*0x659418*/
  BYTE2(this->?) = 0; /*0x65941b*/
  this->range[0] = 0; /*0x65941e*/
  this->range[1] = 0; /*0x659421*/
  this->data[0] = 0; /*0x659424*/
  this->data[1] = 0; /*0x659427*/
  this->data[2] = 0; /*0x65942a*/
  this->data[3] = 0; /*0x65942d*/
  this->data[5] = 0; /*0x659430*/
  this->data[7] = 0; /*0x659433*/
  this->data[4] = 0; /*0x659436*/
  this->data[6] = 0; /*0x659439*/
  this->data[8] = 0; /*0x65943c*/
  this->data[9] = 0; /*0x65943f*/
  this->data[10] = 1; /*0x659442*/
  LOBYTE(this->data[11]) = 0; /*0x659445*/
  this->data[20] = 0; /*0x659448*/
  LOBYTE(this->data[37]) = 0; /*0x65944b*/
  BYTE1(this->data[37]) = 0; /*0x659451*/
  BYTE2(this->data[37]) = 0; /*0x659457*/
  return &this->AbstractClass; /*0x65945d*/
}



// ==== 0x00659470  TechnoClass::drawSelectionBox  this=ObjectClass  sig=csp ====
char __thiscall sub_659470(char *this, int a2)
{
  char *v2; // ecx
  char result; // al

  v2 = this + 32; /*0x659474*/
  *(_WORD *)v2 = *(_WORD *)a2; /*0x65947a*/
  result = *(_BYTE *)(a2 + 2); /*0x65947d*/
  v2[2] = result; /*0x659480*/
  return result; /*0x659483*/
}



// ==== 0x00659490  TechnoClass::drawHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawHealthBar(TechnoClass *this, int a2)
{
  this->? = (void *)a2; /*0x659494*/
  return a2; /*0x659497*/
}



// ==== 0x006594A0  TechnoClass::drawPipScale  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawPipScale(TechnoClass *this, _DWORD *a2)
{
  int *p_occupant; // ecx
  int result; // eax

  p_occupant = &this->?; /*0x6594a4*/
  *p_occupant = *a2; /*0x6594a9*/
  p_occupant[1] = a2[1]; /*0x6594ae*/
  result = a2[2]; /*0x6594b1*/
  p_occupant[2] = result; /*0x6594b4*/
  return result; /*0x6594b7*/
}



// ==== 0x006594C0  TechnoClass::drawSpawnPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawSpawnPips(TechnoClass *this, _DWORD *a2)
{
  ObjectClass **p_nextObject; // ecx
  int result; // eax

  p_nextObject = &this->?; /*0x6594c4*/
  *p_nextObject = (ObjectClass *)*a2; /*0x6594c9*/
  p_nextObject[1] = (ObjectClass *)a2[1]; /*0x6594ce*/
  result = a2[2]; /*0x6594d1*/
  p_nextObject[2] = (ObjectClass *)result; /*0x6594d4*/
  return result; /*0x6594d7*/
}



// ==== 0x006594E0  TechnoClass::drawAmmoPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawAmmoPips(TechnoClass *this, int a2)
{
  this->?[0] = a2; /*0x6594e4*/
  return a2; /*0x6594e7*/
}



// ==== 0x006594F0  TechnoClass::drawTiberiumPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawTiberiumPips(TechnoClass *this, int a2, int a3)
{
  this->?[1] = a2; /*0x6594f8*/
  this->?[2] = a3; /*0x6594fb*/
  return a2; /*0x6594fe*/
}



// ==== 0x00659510  ObjectClass::SpreadRadiationAreaEffect_Helper  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect_Helper(ObjectClass *this, int a2, int a3)
{
  this->ambientSoundController[3] = a2; /*0x659518*/
  this->ambientSoundController[4] = a3; /*0x65951b*/
  return a2; /*0x65951e*/
}



// ==== 0x00659530  ObjectClass::SpreadRadiationAreaEffect_Helper  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect_Helper_659530(ObjectClass *this, int a2)
{
  this->customSound_controller[0] = a2; /*0x659534*/
  return a2; /*0x659537*/
}



// ==== 0x00659540  TechnoClass::drawMindControlPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawMindControlPips(TechnoClass *this, int a2)
{
  this->?[1] = a2; /*0x659544*/
  return a2; /*0x659547*/
}



// ==== 0x00659550  TechnoClass::drawPassengerPips  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::drawPassengerPips(TechnoClass *this, char a2)
{
  LOBYTE(this->?[2]) = a2; /*0x659554*/
  return a2; /*0x659557*/
}



// ==== 0x00659560  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_659560(ObjectClass *this)
{
  BYTE1(this->?) = 0; /*0x659560*/
}



// ==== 0x00659570  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_659570(ObjectClass *this)
{
  return BYTE1(this->?); /*0x659573*/
}



// ==== 0x00659590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_659590(ObjectClass *this, _DWORD *a2, _DWORD *a3, __int16 a4)
{
  char result; // al
  char *v6; // esi
  int v7; // eax
  int v8[2]; // [esp+Ch] [ebp-20h] BYREF
  int v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a2, v9); /*0x6595a8*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a3, v8); /*0x6595bd*/
  v10[0] = DSurface_ViewBounds.field_0; /*0x6595d3*/
  v10[1] = (int)DSurface_ViewBounds.field_4; /*0x6595dd*/
  v10[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6595e5*/
  v10[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6595e9*/
  result = ClipLine(v9, v8, v10); /*0x6595f6*/
  if ( result ) /*0x6595fd*/
  {
    v6 = (char *)this->? - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
    v7 = ZCoordToScreenY(a3[2]); /*0x659612*/
    return (*(char (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, char *, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65963f*/
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



// ==== 0x00659650  ObjectClass::RenderProjectileTrail  this=ObjectClass  sig=csp ====
bool __thiscall RenderProjectileTrail(ObjectClass *this)
{
  double v1; // st7
  int owningHouseIndex; // ebp
  int *v4; // eax
  _BYTE *vtable1; // ecx
  int v7; // edx
  ObjectClass **v8; // eax
  TagClass *v9; // edx
  BombClass *v10; // edi
  int *v11; // eax
  int v13; // eax
  int v14; // ecx
  int customSound; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int fallRate; // edx
  __int64 v22; // rax
  int v23; // ebp
  int v24; // edi
  int v25; // eax
  int v27; // eax
  int v28; // edi
  int v30; // edx
  int v31; // eax
  double v32; // [esp+8h] [ebp-40h]
  double v33; // [esp+8h] [ebp-40h]
  int v34; // [esp+20h] [ebp-28h]
  int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+20h] [ebp-28h]
  int v37[2]; // [esp+24h] [ebp-24h] BYREF
  int v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h]
  int v41[4]; // [esp+38h] [ebp-10h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  owningHouseIndex = (int)&savedregs; /*0x659651*/
  _ESI = this; /*0x65965c*/
  if ( !LOBYTE(this->?) ) /*0x65965f*/
  {
    LOBYTE(this->?) = 1; /*0x659666*/
    v4 = Coord::Subtract( /*0x65968c*/
           (Coord *)&v38,
           (int)this->nextObject - this->occupant,
           (int)this->attachedTag - this->owningHouseIndex,
           (int)this->attachedBomb - this->fallRate);
    _ESI->customSound_controller[3] = *v4; /*0x659698*/
    _ESI->customSound_controller[4] = v4[1]; /*0x65969d*/
    _ESI->customSound = v4[2]; /*0x6596a3*/
    v34 = _ESI->customSound * _ESI->customSound /*0x6596c1*/
        + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
        + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
    __asm /*0x6596c5*/
    {
      fild [esp+40h+var_28]
      fstp [esp+40h+var_40]; double
    }
    Math::Sqrt(v32); /*0x6596cc*/
    __asm { fstp qword ptr [esi+68h] } /*0x6596d1*/
    *(double *)&_ESI->bombVisible = _RT1; /*0x6596d1*/
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x6596d7*/
  {
    vtable1 = _ESI->?; /*0x6596e2*/
    if ( vtable1 ) /*0x6596e7*/
    {
      v7 = *(_DWORD *)vtable1; /*0x6596f0*/
      if ( (vtable1[20] & 2) != 0 ) /*0x6596f4*/
        v8 = (ObjectClass **)(*(int (__stdcall **)(int *))(v7 + 164))(&v38); /*0x659705*/
      else
        v8 = (ObjectClass **)(*(int (__stdcall **)(int *))(v7 + 88))(&v38); /*0x6596fb*/
      v9 = (TagClass *)v8[1]; /*0x65970d*/
      v10 = (BombClass *)v8[2]; /*0x659710*/
      _ESI->nextObject = *v8; /*0x659718*/
      _ESI->attachedTag = v9; /*0x65971a*/
      _ESI->attachedBomb = v10; /*0x65971d*/
      owningHouseIndex = _ESI->owningHouseIndex; /*0x659729*/
      v11 = Coord::Subtract( /*0x659741*/
              (Coord *)&v38,
              (int)_ESI->nextObject - _ESI->occupant,
              (int)_ESI->attachedTag - owningHouseIndex,
              (int)_ESI->attachedBomb - _ESI->fallRate);
      _ESI->customSound_controller[3] = *v11; /*0x65974d*/
      _ESI->customSound_controller[4] = v11[1]; /*0x659752*/
      _ESI->customSound = v11[2]; /*0x659758*/
      v35 = _ESI->customSound * _ESI->customSound /*0x659776*/
          + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
          + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
      __asm /*0x65977a*/
      {
        fild [esp+40h+var_28]
        fstp [esp+40h+var_40]; double
      }
      Math::Sqrt(v33); /*0x659781*/
      __asm { fstp qword ptr [esi+68h] } /*0x659786*/
      *(double *)&_ESI->bombVisible = _RT1; /*0x659786*/
    }
  }
  if ( BYTE1(_ESI->?) ) /*0x65978c*/
  {
    __asm /*0x659797*/
    {
      fld qword ptr [esi+68h]
      fdiv qword ptr [esi+18h]
    }
    LOWORD(v13) = Math::RoundToInt(v1); /*0x65979d*/
    v14 = _ESI->customSound_controller[4]; /*0x6597a5*/
    v38 = _ESI->customSound_controller[3]; /*0x6597a8*/
    customSound = _ESI->customSound; /*0x6597ac*/
    v39 = v14; /*0x6597af*/
    *(_DWORD *)&_ESI->onBridge = v13; /*0x6597b8*/
    v40 = customSound; /*0x6597be*/
    Render_Render_65A1B0((ObjectClass *)&v38, v13); /*0x6597c2*/
    __asm /*0x6597c7*/
    {
      fild dword ptr [esi+7Ch]
      fidiv dword ptr [esi+3Ch]
    }
    v16 = v38; /*0x6597cd*/
    v17 = v39; /*0x6597d1*/
    _ESI->parachute = 0; /*0x6597e1*/
    *(_DWORD *)&_ESI->isAliveFlag = v16; /*0x6597eb*/
    v18 = v40; /*0x6597ed*/
    _ESI->lastLayer = v17; /*0x6597f1*/
    *(_DWORD *)&_ESI->isInLogic = v18; /*0x6597f7*/
    _ESI->location[0] = _ESI->occupant; /*0x6597fe*/
    fallRate = _ESI->fallRate; /*0x659803*/
    _ESI->location[1] = _ESI->owningHouseIndex; /*0x659806*/
    _ESI->location[2] = fallRate; /*0x65980c*/
    LOWORD(_ESI[1].?) = _ESI->?; /*0x659818*/
    BYTE2(_ESI[1].?) = BYTE2(_ESI->?); /*0x65981e*/
    __asm /*0x659821*/
    {
      fmul qword ptr [esi+40h]
      fstp qword ptr [esi+80h]
    }
    *(double *)&_ESI->needsRedraw = _RT1; /*0x659824*/
    __asm /*0x65982a*/
    {
      fld ds:dbl_7E2800
      fcomp qword ptr [esi+68h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x659838*/
    {
      do /*0x659962*/
      {
        v22 = ProjectileTrail::ComputeRenderData((ProjectileTrail *)_ESI); /*0x659840*/
        LOWORD(owningHouseIndex) = (unsigned __int8)(BYTE2(_ESI[1].?) >> g_BitMask_Red); /*0x65985f*/
        WORD2(v22) = (unsigned __int8)(BYTE1(_ESI[1].?) >> g_BitMask_Blue); /*0x659876*/
        HIDWORD(v22) <<= g_BitMask_Green; /*0x65987e*/
        v23 = HIDWORD(v22) | (owningHouseIndex << g_BitShift_Blue); /*0x65988e*/
        WORD2(v22) = (unsigned __int8)(LOBYTE(_ESI[1].?) >> g_BitShift_Green_0); /*0x659893*/
        owningHouseIndex = (HIDWORD(v22) << g_BitShift_Red) | v23; /*0x6598a3*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, _ESI->location, &v38); /*0x6598a5*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_ESI->lineTrailer, v37); /*0x6598bc*/
        v41[0] = DSurface_ViewBounds.field_0; /*0x6598d2*/
        v41[1] = (int)DSurface_ViewBounds.field_4; /*0x6598dc*/
        v41[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6598e4*/
        v41[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6598e8*/
        if ( (unsigned __int8)ClipLine(&v38, v37, v41) ) /*0x6598f5*/
        {
          v24 = (int)_ESI->? - ZCoordToScreenY(_ESI->location[2]) - 2; /*0x659911*/
          v25 = ZCoordToScreenY((int)_ESI[1].?); /*0x659914*/
          (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65993f*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v38,
            v37,
            (__int16)owningHouseIndex,
            v24,
            -2 - v25,
            0);
        }
        v36 = (int)&_ESI->parachute->AnimClass_field_0x0 + 1; /*0x659949*/
        _ESI->parachute = (AnimClass *)v36; /*0x65994d*/
        __asm /*0x659953*/
        {
          fild [esp+38h+var_28]
          fmul qword ptr [esi+18h]
          fcomp qword ptr [esi+68h]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x659962*/
    }
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x659968*/
  {
    v27 = _ESI->customSound_controller[1]; /*0x65996f*/
    v28 = v27 + _ESI->visibilityFlags; /*0x659975*/
    _ESI->visibilityFlags = v28; /*0x659979*/
    if ( v28 <= 0 || v28 >= _ESI->ambientSoundController[0] ) /*0x659983*/
    {
      _ESI->customSound_controller[1] = -v27; /*0x659987*/
      if ( _ESI->visibilityFlags < 0 ) /*0x65998f*/
        _ESI->visibilityFlags = 0; /*0x659991*/
    }
    return 0; /*0x659998*/
  }
  else
  {
    v30 = _ESI->ambientSoundController[0]; /*0x6599a5*/
    v31 = _ESI->visibilityFlags + 1; /*0x6599ab*/
    _ESI->visibilityFlags = v31; /*0x6599ad*/
    return v31 >= v30; /*0x6599b6*/
  }
}



// ==== 0x006599C0  ObjectClass::method_6599C0  this=ObjectClass  sig=csp ====
void __thiscall sub_6599C0(ObjectClass *this)
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



// ==== 0x00659A30  ObjectClass::method_659A30  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_659A30(ObjectClass *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int customSound; // ebp
  double v6; // st7
  void **p_NeedsSaveOrLink; // edx
  double *v8; // esi
  __int16 result; // ax
  char v10; // cl

  LOWORD(v2) = Math::RoundToInt(*(double *)&this->bombVisible / *(double *)&this->?); /*0x659a3c*/
  v3 = this->customSound_controller[3]; /*0x659a41*/
  v4 = this->customSound_controller[4]; /*0x659a44*/
  customSound = this->customSound; /*0x659a47*/
  *(_DWORD *)&this->onBridge = v2; /*0x659a4e*/
  if ( v2 ) /*0x659a54*/
  {
    v3 /= v2; /*0x659a5b*/
    v4 /= v2; /*0x659a62*/
    customSound /= v2; /*0x659a69*/
  }
  v6 = (double)this->visibilityFlags / (double)this->ambientSoundController[0]; /*0x659a6e*/
  *(_DWORD *)&this->isAliveFlag = v3; /*0x659a80*/
  this->lastLayer = v4; /*0x659a83*/
  *(_DWORD *)&this->isInLogic = customSound; /*0x659a86*/
  this->location[0] = this->occupant; /*0x659a8b*/
  this->location[1] = this->owningHouseIndex; /*0x659a90*/
  this->location[2] = this->fallRate; /*0x659a96*/
  p_NeedsSaveOrLink = &this->?; /*0x659a99*/
  v8 = (double *)((char *)this + 192); /*0x659a9c*/
  result = *(_WORD *)p_NeedsSaveOrLink; /*0x659aa2*/
  v10 = *((_BYTE *)p_NeedsSaveOrLink + 2); /*0x659aa5*/
  *(v8 - 8) = v6 * *(v8 - 16); /*0x659aab*/
  *(_WORD *)v8 = result; /*0x659aae*/
  *((_BYTE *)v8 + 2) = v10; /*0x659ab1*/
  return result; /*0x659ab4*/
}



// ==== 0x00659AC0  ProjectileTrail::ComputeRenderData  this=ProjectileTrail  sig=csp ====
__int64 __thiscall ProjectileTrail::ComputeRenderData(ProjectileTrail *this)
{
  double v1; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  ProjectileTrail v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  ProjectileTrail v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  int v18; // kr00_4
  double v19; // [esp+0h] [ebp-28h]
  double v20; // [esp+0h] [ebp-28h]
  double v21; // [esp+10h] [ebp-18h]
  double v22; // [esp+10h] [ebp-18h]

  _ESI = this; /*0x659aca*/
  __asm /*0x659acd*/
  {
    fld qword ptr [esi+68h]
    fcomp ds:dbl_7F04C0
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x659adb*/
    __asm { fld ds:dbl_7F04C0 } /*0x659add*/
  else
    __asm { fld qword ptr [esi+68h] } /*0x659ae5*/
  __asm { fadd st, st } /*0x659ae8*/
  __asm
  {
    fst [esp+28h+var_10]
    fild dword ptr [esi+88h]
    fstp [esp+28h+var_18]
    fild dword ptr [esi+8Ch]
    fdivr [esp+28h+var_18]
    fmulp st(1), st
    fld dbl_839530
    fmul st, st(1)
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::SinCos(v19); /*0x659b14*/
  __asm /*0x659b19*/
  {
    fmul qword ptr [esi+80h]
    fld [esp+28h+var_18]
  }
  LOWORD(v4) = Math::RoundToInt(v1); /*0x659b23*/
  v5 = v4 * *(_DWORD *)&_ESI[37] + *(_DWORD *)&_ESI[10]; /*0x659b4b*/
  v6 = v4 * *(_DWORD *)&_ESI[38] + *(_DWORD *)&_ESI[11]; /*0x659b50*/
  _ESI[39] = (ProjectileTrail)(v4 * *(_DWORD *)&_ESI[36] + *(_DWORD *)&_ESI[9]); /*0x659b58*/
  _ESI[40] = (ProjectileTrail)v5; /*0x659b5e*/
  _ESI[41] = (ProjectileTrail)v6; /*0x659b61*/
  __asm /*0x659b64*/
  {
    fild dword ptr [esi+0A4h]
    fadd st, st(1)
  }
  *(_WORD *)v7.__tail_0 = Math::RoundToInt(v1); /*0x659b6c*/
  _ESI[41] = v7; /*0x659b71*/
  __asm { fstp st } /*0x659b7e*/
  LODWORD(v21) = *(_DWORD *)&_ESI[34] + 1; /*0x659b80*/
  __asm /*0x659b84*/
  {
    fild dword ptr [esp+28h+var_18]
    fstp [esp+28h+var_18]
    fild dword ptr [esi+8Ch]
    fdivr [esp+28h+var_18]
    fmul [esp+28h+var_10]
    fld dbl_839530
    fmul st, st(1)
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::SinCos(v20); /*0x659ba7*/
  __asm /*0x659bac*/
  {
    fmul qword ptr [esi+80h]
    fld [esp+28h+var_18]
  }
  LOWORD(v8) = Math::RoundToInt(v1); /*0x659bb9*/
  v9 = v8 * *(_DWORD *)&_ESI[38]; /*0x659bd6*/
  v10 = *(_DWORD *)&_ESI[9] + v8 * *(_DWORD *)&_ESI[36]; /*0x659bdc*/
  v11 = v8 * *(_DWORD *)&_ESI[37] + *(_DWORD *)&_ESI[10]; /*0x659be1*/
  v12 = v9 + *(_DWORD *)&_ESI[11]; /*0x659be6*/
  _ESI[42] = (ProjectileTrail)v10; /*0x659bee*/
  _ESI[43] = (ProjectileTrail)v11; /*0x659bf4*/
  _ESI[44] = (ProjectileTrail)v12; /*0x659bf7*/
  __asm /*0x659bfa*/
  {
    fild dword ptr [esi+0B0h]
    fadd st, st(1)
  }
  *(_WORD *)v13.__tail_0 = Math::RoundToInt(v1); /*0x659c02*/
  _ESI[44] = v13; /*0x659c07*/
  LOWORD(v14) = Math::RoundToInt(v1); /*0x659c0d*/
  LODWORD(v22) = abs32(v14); /*0x659c19*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x659c1f*/
  v15 = (unsigned __int8)_ESI[8].__tail_0[0]; /*0x659c25*/
  __asm /*0x659c28*/
  {
    fmul ds:dbl_7E1738
    fdiv qword ptr [esi+40h]
    fadd ds:dbl_7E1738
    fst qword ptr [esi+0B8h]
  }
  *(double *)_ESI[46].__tail_0 = _RT1; /*0x659c37*/
  LODWORD(v22) = (unsigned __int8)_ESI[8].__tail_0[1]; /*0x659c43*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x659c47*/
  LODWORD(v22) = (unsigned __int8)_ESI[8].__tail_0[2]; /*0x659c4b*/
  __asm /*0x659c4f*/
  {
    fmul st, st(1)
    fstp [esp+20h+var_10]
    fild dword ptr [esp+20h+var_18]
  }
  LODWORD(v22) = v15; /*0x659c59*/
  __asm /*0x659c5d*/
  {
    fmul st, st(1)
    fstp [esp+20h+var_8]
    fild dword ptr [esp+20h+var_18]
    fmul st, st(1)
  }
  __asm
  {
    fstp st
    fld [esp+20h+var_10]
  }
  _ESI[48].__tail_0[0] = Math::RoundToInt(v1); /*0x659c74*/
  __asm { fld [esp+20h+var_8] } /*0x659c7f*/
  _ESI[48].__tail_0[1] = Math::RoundToInt(v1); /*0x659c83*/
  v18 = Math::RoundToInt(v1); /*0x659c89*/
  WORD2(result) = HIWORD(v18); /*0x659c89*/
  LOWORD(result) = v18; /*0x659c89*/
  _ESI[48].__tail_0[2] = v18; /*0x659c8e*/
  return result; /*0x659c94*/
}



// ==== 0x00659CA0  ObjectClass::Weapon_Update  this=ObjectClass  sig=csp ====
bool __usercall Weapon_Update@<al>(ObjectClass *this, int a2@<ebx>)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  __int64 updated; // rax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14[2]; // [esp+8h] [ebp-20h] BYREF
  int v15[2]; // [esp+10h] [ebp-18h] BYREF
  int v16[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = v2; /*0x659ca5*/
  if ( !*(_BYTE *)(v2 + 8) ) /*0x659ca7*/
  {
    *(_BYTE *)(v2 + 8) = 1; /*0x659cae*/
    Weapon_Update_Update((ObjectClass *)v2); /*0x659cb2*/
  }
  if ( *(_BYTE *)(v3 + 9) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0((ObjectClass *)v3); /*0x659cc4*/
    v4 = *(_DWORD *)(v3 + 140); /*0x659cc9*/
    *(_DWORD *)(v3 + 136) = 0; /*0x659ccf*/
    if ( v4 > 0 ) /*0x659cdb*/
    {
      do /*0x659e01*/
      {
        updated = Weapon_Update_Update_659FF0(v3); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(v3 + 194) >> g_BitMask_Red); /*0x659d13*/
        LOWORD(updated) = (unsigned __int8)(*(_BYTE *)(v3 + 193) >> g_BitMask_Blue); /*0x659d28*/
        LODWORD(updated) = (_DWORD)updated << g_BitMask_Green; /*0x659d30*/
        v6 = updated | (a2 << g_BitShift_Blue); /*0x659d40*/
        LOWORD(updated) = (unsigned __int8)(*(_BYTE *)(v3 + 192) >> g_BitShift_Green_0); /*0x659d45*/
        a2 = ((_DWORD)updated << g_BitShift_Red) | v6; /*0x659d55*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)(v3 + 156), v15); /*0x659d57*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)(v3 + 168), v14); /*0x659d68*/
        v16[1] = (int)DSurface_ViewBounds.field_4; /*0x659d7e*/
        v16[0] = DSurface_ViewBounds.field_0; /*0x659d86*/
        v16[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x659d8f*/
        v16[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x659d9c*/
        if ( (unsigned __int8)ClipLine(v15, v14, v16) ) /*0x659da0*/
        {
          v7 = *(_DWORD *)(v3 + 12) - ZCoordToScreenY(*(_DWORD *)(v3 + 164)) - 2; /*0x659db9*/
          v8 = ZCoordToScreenY(*(_DWORD *)(v3 + 176)); /*0x659dbc*/
          (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x659de7*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            v15,
            v14,
            (__int16)a2,
            v7,
            -2 - v8,
            0);
        }
        v9 = *(_DWORD *)(v3 + 140); /*0x659df0*/
        v10 = *(_DWORD *)(v3 + 136) + 1; /*0x659df7*/
        *(_DWORD *)(v3 + 136) = v10; /*0x659df9*/
      }
      while ( v10 < v9 ); /*0x659e01*/
    }
  }
  v11 = *(_DWORD *)(v3 + 60); /*0x659e0c*/
  v12 = *(_DWORD *)(v3 + 124) + 1; /*0x659e12*/
  *(_DWORD *)(v3 + 124) = v12; /*0x659e14*/
  return v12 >= v11; /*0x659e19*/
}



// ==== 0x00659E30  ObjectClass::Weapon_Update_Update  this=ObjectClass  sig=csp ====
int __thiscall Weapon_Update_Update(ObjectClass *this)
{
  double v1; // st7
  int occupant; // ebp
  char *v4; // edx
  int *v5; // edi
  char *v6; // ecx
  int result; // eax
  int v9; // edi
  int v10; // ebx
  int customSound; // ebp
  int v12; // ecx
  int *p_estimatedHealth; // esi
  double v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-4h]

  _ESI = this; /*0x659e34*/
  occupant = this->occupant; /*0x659e46*/
  v4 = (char *)this->attachedBomb - this->fallRate; /*0x659e49*/
  v5 = &this->customSound_controller[3]; /*0x659e4b*/
  v6 = (char *)this->attachedTag - this->owningHouseIndex; /*0x659e4e*/
  _ESI->customSound_controller[3] = (int)_ESI->nextObject - occupant; /*0x659e57*/
  _ESI->customSound_controller[4] = (int)v6; /*0x659e59*/
  _ESI->customSound = (int)v4; /*0x659e5c*/
  v15 = _ESI->customSound * _ESI->customSound /*0x659e7a*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659e7e*/
  {
    fild [esp+1Ch+var_4]
    fstp [esp+1Ch+var_1C]; double
  }
  Math::Sqrt(v14); /*0x659e85*/
  __asm { fst qword ptr [esi+68h] } /*0x659e8a*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659e8a*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659e8d*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659e93*/
  v9 = *v5; /*0x659e98*/
  v10 = _ESI->customSound_controller[4]; /*0x659e9a*/
  customSound = _ESI->customSound; /*0x659e9d*/
  v12 = result; /*0x659ea0*/
  *(_DWORD *)&_ESI->onBridge = result; /*0x659ea4*/
  if ( result ) /*0x659eaa*/
  {
    v9 /= result; /*0x659eb1*/
    v10 /= result; /*0x659eb8*/
    result = customSound / result; /*0x659ebd*/
    customSound /= v12; /*0x659ebf*/
  }
  p_estimatedHealth = &_ESI->estimatedHealth; /*0x659ec1*/
  *p_estimatedHealth = v9; /*0x659ec4*/
  p_estimatedHealth[1] = v10; /*0x659ec7*/
  p_estimatedHealth[2] = customSound; /*0x659eca*/
  return result; /*0x659ec6*/
}



// ==== 0x00659EE0  ObjectClass::Weapon_Update_Update_659EE0  this=ObjectClass  sig=csp ====
int __thiscall Weapon_Update_Update_659EE0(ObjectClass *this)
{
  double v1; // st7
  int v3; // edi
  int visibilityFlags; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v11; // edi
  int v12; // ebx
  int customSound; // ebp
  int v14; // ecx
  char *p_isAliveFlag; // esi
  double v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+1Ch] [ebp-4h]

  _ESI = this; /*0x659ee6*/
  v3 = this->ambientSoundController[0]; /*0x659ee9*/
  visibilityFlags = this->visibilityFlags; /*0x659eec*/
  v19 = v3; /*0x659ef1*/
  if ( visibilityFlags >= v3 / 2 ) /*0x659eff*/
  {
    v18 = v3 - 2 * visibilityFlags % v3; /*0x659f10*/
    __asm { fild [esp+18h+var_8] } /*0x659f14*/
  }
  else
  {
    v17 = 2 * visibilityFlags; /*0x659f01*/
    __asm { fild [esp+18h+var_8] } /*0x659f05*/
  }
  __asm { fild [esp+18h+var_4] } /*0x659f18*/
  __asm { fdivr st, st(1) }
  v20 = visibilityFlags * _ESI->customSound_controller[0]; /*0x659f24*/
  __asm /*0x659f28*/
  {
    fmul qword ptr [esi+40h]
    fstp qword ptr [esi+80h]
  }
  *(double *)&_ESI->needsRedraw = _RT1; /*0x659f2b*/
  __asm /*0x659f31*/
  {
    fstp st
    fild [esp+18h+var_4]
    fmul qword ptr [esi+48h]
  }
  LOWORD(v6) = Math::RoundToInt(v1); /*0x659f3a*/
  v7 = v6 * *(_DWORD *)&_ESI->isOnMap + _ESI->customSound_controller[4]; /*0x659f5f*/
  v8 = v6 * _ESI->spawnStatus + _ESI->customSound; /*0x659f64*/
  _ESI->customSound_controller[3] += v6 * _ESI->estimatedHealth; /*0x659f68*/
  _ESI->customSound_controller[4] = v7; /*0x659f6a*/
  _ESI->customSound = v8; /*0x659f6d*/
  v21 = _ESI->customSound * _ESI->customSound /*0x659f8b*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659f8f*/
  {
    fild [esp+20h+var_4]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v16); /*0x659f96*/
  __asm { fst qword ptr [esi+68h] } /*0x659f9b*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659f9b*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659f9e*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659fa4*/
  v11 = _ESI->customSound_controller[3]; /*0x659fa9*/
  v12 = _ESI->customSound_controller[4]; /*0x659fab*/
  customSound = _ESI->customSound; /*0x659fae*/
  v14 = result; /*0x659fb1*/
  *(_DWORD *)&_ESI->onBridge = result; /*0x659fb5*/
  if ( result ) /*0x659fbb*/
  {
    v11 /= result; /*0x659fc2*/
    v12 /= result; /*0x659fc9*/
    result = customSound / result; /*0x659fce*/
    customSound /= v14; /*0x659fd0*/
  }
  p_isAliveFlag = &_ESI->isAliveFlag; /*0x659fd2*/
  *(_DWORD *)p_isAliveFlag = v11; /*0x659fd8*/
  *((_DWORD *)p_isAliveFlag + 1) = v12; /*0x659fdb*/
  *((_DWORD *)p_isAliveFlag + 2) = customSound; /*0x659fde*/
  return result; /*0x659fda*/
}



// ==== 0x00659FF0  ObjectClass::Weapon_Update_Update_659FF0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_659FF0(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  __int64 result; // rax
  double v12; // [esp+18h] [ebp-10h]
  double v13; // [esp+20h] [ebp-8h]

  v2 = Math::SinCos(dbl_839530 * ((double)*(int *)(this + 136) / (double)*(int *)(this + 140) * 180.0)) /*0x65a02c*/
     * *(double *)(this + 128);
  v3 = Math::RoundToInt(v2); /*0x65a036*/
  v4 = v3 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x65a05e*/
  v5 = v3 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x65a063*/
  *(_DWORD *)(this + 156) = v3 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x65a06b*/
  *(_DWORD *)(this + 160) = v4; /*0x65a071*/
  *(_DWORD *)(this + 164) = v5; /*0x65a074*/
  *(_DWORD *)(this + 164) = Math::RoundToInt(v2); /*0x65a084*/
  v6 = Math::SinCos(dbl_839530 * ((double)(*(_DWORD *)(this + 136) + 1) / (double)*(int *)(this + 140) * 180.0)) /*0x65a0c1*/
     * *(double *)(this + 128);
  v7 = Math::RoundToInt(v6); /*0x65a0ce*/
  v8 = v7 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x65a0f6*/
  v9 = v7 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x65a0fb*/
  *(_DWORD *)(this + 168) = v7 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x65a103*/
  *(_DWORD *)(this + 172) = v8; /*0x65a109*/
  *(_DWORD *)(this + 176) = v9; /*0x65a10c*/
  *(_DWORD *)(this + 176) = Math::RoundToInt(v6); /*0x65a11c*/
  v10 = (double)(int)abs32(Math::RoundToInt(v6)) * 0.5 / *(double *)(this + 64) + 0.5; /*0x65a146*/
  *(double *)(this + 184) = v10; /*0x65a14c*/
  v12 = (double)*(unsigned __int8 *)(this + 33) * v10; /*0x65a166*/
  v13 = (double)*(unsigned __int8 *)(this + 34) * v10; /*0x65a174*/
  *(_BYTE *)(this + 192) = Math::RoundToInt(v10); /*0x65a189*/
  *(_BYTE *)(this + 193) = Math::RoundToInt(v12); /*0x65a198*/
  result = Math::RoundToInt(v13); /*0x65a19e*/
  *(_BYTE *)(this + 194) = result; /*0x65a1a3*/
  return result; /*0x65a1a9*/
}



// ==== 0x0065A1B0  ObjectClass::Render_Render_65A1B0  this=ObjectClass  sig=csp ====
int *__thiscall Render_Render_65A1B0(ObjectClass *this, int a2)
{
  if ( a2 ) /*0x65a1b7*/
  {
    this->AbstractClass = (void *)((int)this->AbstractClass / a2); /*0x65a1be*/
    this->? = (void *)((int)this->? / a2); /*0x65a1c6*/
    this->? = (void *)((int)this->? / a2); /*0x65a1cf*/
  }
  return (int *)this; /*0x65a1d4*/
}



// ==== 0x0065A1E0  _DynamicVectorClass_PAVRadBeam::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::Destroy(_DynamicVectorClass_PAVRadBeam *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65a1e6*/
  this->m_10 = 0; /*0x65a1e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x65a1f0*/
  {
    __3_YAXPAX_Z(v2); /*0x65a1f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a1fe*/
  }
  BYTE1(this->m_C) = 0; /*0x65a201*/
  this->m_8 = 0; /*0x65a204*/
}



// ==== 0x0065A210  _DynamicVectorClass_PAVRadBeam::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::GetItemIndex(_DynamicVectorClass_PAVRadBeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65a210*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65a225*/
  else
    return 0; /*0x65a217*/
}



// ==== 0x0065A230  _VectorClass_PAVRadBeam::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::Get(_VectorClass_PAVRadBeam *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x65a23a*/
}



// ==== 0x0065A240  _VectorClass_PAVRadBeam::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::Add(_VectorClass_PAVRadBeam *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x65a242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x65a24d*/
  {
    v3 = 0; /*0x65a24f*/
    if ( m_8 <= 0 ) /*0x65a253*/
      return 1; /*0x65a273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x65a255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65a25b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65a264*/
    {
      ++v3; /*0x65a266*/
      ++v4; /*0x65a267*/
      if ( v3 >= m_8 ) /*0x65a26c*/
        return 1; /*0x65a26c*/
    }
  }
  return 0; /*0x65a26e*/
}



// ==== 0x0065A280  _VectorClass_PAVRadBeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::Release(_VectorClass_PAVRadBeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65a28c*/
  {
    LOBYTE(this->m_C) = 0; /*0x65a296*/
    if ( a3 ) /*0x65a29c*/
      v4 = a3; /*0x65a2b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65a2ae*/
    LOBYTE(this->m_C) = 1; /*0x65a2b6*/
    if ( v4 ) /*0x65a2ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x65a2c5*/
      {
        m_8 = this->m_8; /*0x65a2cc*/
        if ( a2 < m_8 ) /*0x65a2d1*/
          m_8 = a2; /*0x65a2d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65a2d9*/
          ++i; /*0x65a2de*/
        if ( BYTE1(this->m_C) ) /*0x65a2eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a2f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x65a2fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x65a307*/
      this->m_8 = a2; /*0x65a30f*/
      BYTE1(this->m_C) = a3 == 0; /*0x65a312*/
      return 1; /*0x65a318*/
    }
    else
    {
      return 0; /*0x65a2bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadBeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65a322*/
    return 1; /*0x65a328*/
  }
}



// ==== 0x0065A330  _VectorClass_PAVRadBeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::Remove(_VectorClass_PAVRadBeam *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x65a33d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a343*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a34b*/
  }
  BYTE1(this->m_C) = 0; /*0x65a34e*/
  this->m_8 = 0; /*0x65a351*/
}



// ==== 0x0065A360  _VectorClass_PAVRadBeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::GetSize(_VectorClass_PAVRadBeam *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x65a360*/
    return 0; /*0x65a368*/
  m_8 = this->m_8; /*0x65a36e*/
  result = 0; /*0x65a371*/
  if ( m_8 <= 0 ) /*0x65a375*/
    return -1; /*0x65a38c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65a37b*/
  {
    if ( ++result >= m_8 ) /*0x65a38a*/
      return -1; /*0x65a38a*/
  }
  return result; /*0x65a36a*/
}



// ==== 0x0065A3A0  _VectorClass_PAVRadBeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::GetCapacity(_VectorClass_PAVRadBeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65a3a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65a3b5*/
  else
    return 0; /*0x65a3a7*/
}



// ==== 0x0065A3C0  _DynamicVectorClass_PAVRadBeam::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::SetCapacity(_DynamicVectorClass_PAVRadBeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65a3cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x65a3d2*/
    if ( a3 ) /*0x65a3d8*/
      v4 = a3; /*0x65a3ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65a3ea*/
    LOBYTE(this->m_C) = 1; /*0x65a3f2*/
    if ( !v4 ) /*0x65a3f6*/
      return 0; /*0x65a46a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x65a3f8*/
    {
      m_8 = this->m_8; /*0x65a3ff*/
      if ( a2 < m_8 ) /*0x65a404*/
        m_8 = a2; /*0x65a406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65a40c*/
        ++i; /*0x65a411*/
      if ( BYTE1(this->m_C) ) /*0x65a41e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x65a431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x65a43a*/
    this->m_8 = a2; /*0x65a442*/
    BYTE1(this->m_C) = a3 == 0; /*0x65a445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVRadBeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65a44e*/
  }
  v7 = this->m_8; /*0x65a451*/
  if ( v7 < this->m_10 ) /*0x65a459*/
    this->m_10 = v7; /*0x65a45b*/
  return 1; /*0x65a45e*/
}



// ==== 0x0065A470  _DynamicVectorClass_PAVRadBeam::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::FindItemIndex(_DynamicVectorClass_PAVRadBeam *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x65a470*/
  result = 0; /*0x65a473*/
  if ( m_10 <= 0 ) /*0x65a478*/
    return -1; /*0x65a48f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65a47e*/
  {
    if ( ++result >= m_10 ) /*0x65a48d*/
      return -1; /*0x65a48d*/
  }
  return result; /*0x65a492*/
}



// ==== 0x0065A4A0  _VectorClass_PAVRadBeam::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadBeam::QueryInterface(_VectorClass_PAVRadBeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65a4a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadBeam *>::`vftable'; /*0x65a4a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65a4b0*/
  {
    __3_YAXPAX_Z(v3); /*0x65a4b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a4c0*/
  }
  BYTE1(this->m_C) = 0; /*0x65a4cb*/
  this->m_8 = 0; /*0x65a4d1*/
  if ( (a2 & 1) != 0 ) /*0x65a4d8*/
    __3_YAXPAX_Z(this); /*0x65a4db*/
  return this->__pad_0; /*0x65a4e5*/
}



// ==== 0x0065A4F0  _DynamicVectorClass_PAVRadBeam::Constructor_VectorClass_RadBeam___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(
        _DynamicVectorClass_PAVRadBeam *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65a4f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadBeam *>::`vftable'; /*0x65a4f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65a500*/
  {
    __3_YAXPAX_Z(v3); /*0x65a508*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a510*/
  }
  BYTE1(this->m_C) = 0; /*0x65a51b*/
  this->m_8 = 0; /*0x65a521*/
  if ( (a2 & 1) != 0 ) /*0x65a528*/
    __3_YAXPAX_Z(this); /*0x65a52b*/
  return this->__pad_0; /*0x65a535*/
}



// ==== 0x0065A540  sub_65A540  this=-  sig=ida-proto ====
void sub_65A540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65a54c*/
  dbl_B04AF8 = Math::Sqrt(v0 + v0); /*0x65a55e*/
}



// ==== 0x0065A570  sub_65A570  this=-  sig=ida-proto ====
void sub_65A570()
{
  dbl_B04B48 = dbl_B04AF8 / 60.0; /*0x65a57c*/
}



// ==== 0x0065A590  sub_65A590  this=-  sig=ida-proto ====
void sub_65A590()
{
  dbl_B04B30 = 1.0 / dbl_B04B48; /*0x65a59c*/
}



// ==== 0x0065A5B0  sub_65A5B0  this=-  sig=ida-proto ====
void sub_65A5B0()
{
  dbl_B04B28 = 0.0174532925199433 * 45.0; /*0x65a5bc*/
}



// ==== 0x0065A5D0  sub_65A5D0  this=-  sig=ida-proto ====
void sub_65A5D0()
{
  dbl_B04B00 = 0.0174532925199433 * 60.0; /*0x65a5dc*/
}



// ==== 0x0065A5F0  sub_65A5F0  this=-  sig=ida-proto ====
void sub_65A5F0()
{
  dbl_B04AD8 = 0.0174532925199433 * 90.0; /*0x65a5fc*/
}



// ==== 0x0065A610  sub_65A610  this=-  sig=ida-proto ====
__int64 sub_65A610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04AD8 - dbl_B04B00); /*0x65a622*/
  result = Math::RoundToInt(v0 * dbl_B04AF8 * 0.5); /*0x65a636*/
  dword_B04B50 = result; /*0x65a63b*/
  return result; /*0x65a640*/
}



// ==== 0x0065A650  sub_65A650  this=-  sig=ida-proto ====
void sub_65A650()
{
  dbl_B04B08 = Math::ArcTan((double)dword_B04B50 * 0.00390625); /*0x65a667*/
}



// ==== 0x0065A680  sub_65A680  this=-  sig=ida-proto ====
void sub_65A680()
{
  dbl_B04B20 = Math::ArcTan((double)(2 * dword_B04B50) / dbl_B04AF8); /*0x65a6a2*/
}



// ==== 0x0065A6B0  sub_65A6B0  this=-  sig=ida-proto ====
__int64 sub_65A6B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04B50) + 0.5); /*0x65a6cb*/
  dword_B04B44 = result; /*0x65a6d0*/
  return result; /*0x65a6d6*/
}



// ==== 0x0065A6E0  sub_65A6E0  this=-  sig=ida-proto ====
int sub_65A6E0()
{
  word_B04AF0 = 0; /*0x65a6e2*/
  word_B04AF2 = 0; /*0x65a6e8*/
  return 0; /*0x65a6ee*/
}



// ==== 0x0065A6F0  sub_65A6F0  this=-  sig=ida-proto ====
int sub_65A6F0()
{
  dword_B04B10 = 0; /*0x65a6f2*/
  dword_B04B14 = 0; /*0x65a6f7*/
  dword_B04B18 = 0; /*0x65a6fc*/
  return 0; /*0x65a701*/
}



// ==== 0x0065A710  sub_65A710  this=-  sig=ida-proto ====
int sub_65A710()
{
  dword_B04B40 = 0; /*0x65a715*/
  dword_B04B38 = 128; /*0x65a71f*/
  dword_B04B3C = 128; /*0x65a724*/
  return 128; /*0x65a729*/
}



// ==== 0x0065A730  sub_65A730  this=-  sig=ida-proto ====
int sub_65A730()
{
  dword_B04AE0 = 0; /*0x65a732*/
  dword_B04AE4 = 0; /*0x65a737*/
  dword_B04AE8 = 0; /*0x65a73c*/
  dword_B04AEC = 0; /*0x65a741*/
  return 0; /*0x65a746*/
}



// ==== 0x0065A750  RadioClass::Release  this=RadioClass  sig=csp ====
_DWORD *__thiscall RadioClass::Release(RadioClass *this)
{
  RadioClass::Constructor((int)this); /*0x65a753*/
  this->radioLinks[1] = 0; /*0x65a75a*/
  this->radioLinks[2] = 1; /*0x65a764*/
  LOBYTE(this->radioLinks[3]) = 1; /*0x65a76e*/
  BYTE1(this->radioLinks[3]) = 0; /*0x65a775*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65a77c*/
  this->radioLinks[1] = __2_YAPAXI_Z(4u); /*0x65a78b*/
  BYTE1(this->radioLinks[3]) = 1; /*0x65a791*/
  this->MissionClass = &RadioClass::`vftable'; /*0x65a798*/
  this->? = &RadioClass::`vftable'; /*0x65a79e*/
  this->? = &RadioClass::`vftable'; /*0x65a7a5*/
  this->? = &RadioClass::`vftable'; /*0x65a7ac*/
  *(_DWORD *)this->radioLinks[1] = 0; /*0x65a7be*/
  this->lastCommands[0] = 0; /*0x65a7c4*/
  this->lastCommands[1] = 0; /*0x65a7ca*/
  this->lastCommands[2] = 0; /*0x65a7d2*/
  return &this->MissionClass; /*0x65a7d8*/
}



// ==== 0x0065A7E0  RadioClass::Helper_65A7E0  this=RadioClass  sig=csp ====
_DWORD *__thiscall Helper_65A7E0(RadioClass *this, int a2)
{
  ObjectClass::Init((ObjectClass *)this, a2); /*0x65a7e8*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65a7ed*/
  this->MissionClass = &RadioClass::`vftable'; /*0x65a7f7*/
  this->? = &RadioClass::`vftable'; /*0x65a7fd*/
  this->? = &RadioClass::`vftable'; /*0x65a804*/
  this->? = &RadioClass::`vftable'; /*0x65a80b*/
  return &this->MissionClass; /*0x65a814*/
}



// ==== 0x0065A820  ObjectClass::ProcessGroupInput  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ProcessGroupInput(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  _DWORD *i; // eax
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *j; // ecx

  v5 = *(_DWORD *)(this + 212); /*0x65a829*/
  if ( a3 != v5 ) /*0x65a831*/
  {
    v6 = *(_DWORD *)(this + 216); /*0x65a833*/
    *(_DWORD *)(this + 216) = v5; /*0x65a839*/
    *(_DWORD *)(this + 220) = v6; /*0x65a83f*/
    *(_DWORD *)(this + 212) = a3; /*0x65a845*/
  }
  if ( a3 == 3 ) /*0x65a852*/
  {
    v7 = *(_DWORD *)(this + 232); /*0x65a854*/
    v8 = 0; /*0x65a85a*/
    if ( v7 > 0 ) /*0x65a85e*/
    {
      for ( i = *(_DWORD **)(this + 228); a2 != *i; ++i ) /*0x65a860*/
      {
        if ( ++v8 >= v7 ) /*0x65a870*/
          return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a870*/
      }
      ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a890*/
      *(_DWORD *)(*(_DWORD *)(this + 228) + 4 * v8) = 0; /*0x65a8a0*/
      return 1; /*0x65a8aa*/
    }
    return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a883*/
  }
  if ( a3 != 2 || !*(_DWORD *)(this + 108) ) /*0x65a8b2*/
    return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a8b7*/
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(a2 + 540), this) ) /*0x65a8c4*/
    return 10; /*0x65a8d5*/
  if ( this /*0x65a8e9*/
    && (*(_BYTE *)(this + 20) & 1) != 0
    && !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this + 540), a2) )
  {
    return 10; /*0x65a8e9*/
  }
  if ( a2 ) /*0x65a8ff*/
  {
    v11 = *(_DWORD *)(this + 232); /*0x65a901*/
    v12 = 0; /*0x65a907*/
    if ( v11 > 0 ) /*0x65a90b*/
    {
      v13 = *(_DWORD **)(this + 228); /*0x65a90d*/
      while ( *v13 != a2 ) /*0x65a915*/
      {
        ++v12; /*0x65a917*/
        ++v13; /*0x65a918*/
        if ( v12 >= v11 ) /*0x65a91d*/
          goto LABEL_23; /*0x65a91d*/
      }
      if ( v12 != -1 ) /*0x65a94e*/
        return 1; /*0x65a958*/
    }
  }
LABEL_23:
  v14 = *(_DWORD *)(this + 232); /*0x65a91f*/
  v15 = 0; /*0x65a925*/
  if ( v14 <= 0 ) /*0x65a929*/
    return 10; /*0x65a8fa*/
  v16 = *(_DWORD **)(this + 228); /*0x65a92b*/
  for ( j = v16; *j; ++j ) /*0x65a931*/
  {
    if ( ++v15 >= v14 ) /*0x65a93e*/
      return 10; /*0x65a948*/
  }
  v16[v15] = a2; /*0x65a95b*/
  return 1; /*0x65a880*/
}



// ==== 0x0065A970  RadioClass::RemoveElement  this=RadioClass  sig=csp ====
int __thiscall VectorClass::RemoveElement(RadioClass *this)
{
  int *v1; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  void *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int **v14; // ecx
  int v15; // ebp
  void *v16; // eax
  int v17; // [esp+14h] [ebp+4h]
  int v18; // [esp+18h] [ebp+8h]
  int *v19; // [esp+1Ch] [ebp+Ch]

  v1 = v19; /*0x65a974*/
  if ( !v19 ) /*0x65a97c*/
  {
    v1 = *(int **)this->radioLinks[1]; /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  if ( v17 == 3 ) /*0x65a99a*/
  {
    v4 = this->radioLinks[2]; /*0x65a99c*/
    v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        v6 = this->radioLinks[1]; /*0x65a9a8*/
        v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        v8 = (_DWORD *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < this->radioLinks[2] ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
LABEL_9:
    v9 = *v1; /*0x65a9c9*/
    v10 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65a9d3*/
    return (*(int (__thiscall **)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18); /*0x65a9e5*/
  }
  v11 = this->radioLinks[2]; /*0x65a9ed*/
  v12 = -1; /*0x65a9f3*/
  v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)this->radioLinks[1]; /*0x65a9fc*/
    while ( 1 ) /*0x65aa02*/
    {
      if ( v12 == -1 && !*v14 ) /*0x65aa07*/
        v12 = v13; /*0x65aa0c*/
      if ( *v14 == v1 ) /*0x65aa10*/
        return 1; /*0x65aa10*/
      ++v13; /*0x65aa12*/
      ++v14; /*0x65aa13*/
      if ( v13 >= v11 ) /*0x65aa18*/
      {
        if ( v12 != -1 ) /*0x65aa1d*/
          goto LABEL_20; /*0x65aa1d*/
        break; /*0x65aa1d*/
      }
    }
  }
  (*((void (__thiscall **)(RadioClass *, int, _DWORD))this->MissionClass + 158))( /*0x65aa1f*/
    this,
    3,
    *(_DWORD *)this->radioLinks[1]);
  v12 = 0; /*0x65aa34*/
LABEL_20:
  v15 = *v1; /*0x65aa36*/
  v16 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65aa41*/
  if ( (*(int (__thiscall **)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(_DWORD *)(this->radioLinks[1] + 4 * v12) = v1; /*0x65aa5a*/
    return 1; /*0x65aa66*/
  }
  return 10; /*0x65a98a*/
}



// ==== 0x0065AA80  RadioClass::ProcessCmd  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ProcessCmd(RadioClass *this)
{
  if ( !this->? ) /*0x65aa83*/
    (*((void (__thiscall **)(RadioClass *, int))this->MissionClass + 160))(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy((ObjectClass *)this); /*0x65aa9e*/
}



// ==== 0x0065AAA0  ObjectClass::ThunkTo636  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo636(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*((int (__thiscall **)(ObjectClass *, int, _BYTE *, int))this->AbstractClass + 159))( /*0x65aab7*/
           this,
           v2,
           &stru_A8EB00.?[76],
           v3);
}



// ==== 0x0065AAC0  RadioClass::ExecuteAction  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ExecuteAction(RadioClass *this, int a2, char a3)
{
  int result; // eax
  int i; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax

  Object::Unlink((ObjectClass *)this); /*0x65aacf*/
  result = this->radioLinks[2]; /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = this->radioLinks[1]; /*0x65aae0*/
    v7 = *(_DWORD *)(v6 + 4 * i); /*0x65aae6*/
    v8 = (_DWORD *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == a2 ) /*0x65aaee*/
    {
      if ( a3 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = this->radioLinks[2]; /*0x65aafa*/
  }
  return result; /*0x65ab05*/
}



// ==== 0x0065AB10  RadioClass::PowerDrainUpdate  this=RadioClass  sig=csp ====
int __thiscall RadioClass::PowerDrainUpdate(RadioClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  AbstractClass::COMStub_13((int)this, a2); /*0x65ab1a*/
  Power::TimerProcess(this->radioLinks[2]); /*0x65ab28*/
  result = this->radioLinks[2]; /*0x65ab2d*/
  for ( i = 0; i < result; ++i ) /*0x65ab37*/
  {
    v5 = *(_DWORD *)(this->radioLinks[1] + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(v6); /*0x65ab53*/
      v7 = *(_DWORD *)(this->radioLinks[1] + 4 * i); /*0x65ab5e*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7); /*0x65ab63*/
      Power::TimerProcess(v8); /*0x65ab69*/
    }
    result = this->radioLinks[2]; /*0x65ab6e*/
  }
  return result; /*0x65ab79*/
}



// ==== 0x0065AB80  RadioClass::LoadState  this=RadioClass  sig=csp ====
int __thiscall RadioClass::LoadState(RadioClass *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int result; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi

  v3 = a2; /*0x65ab81*/
  v4 = a3; /*0x65ab87*/
  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    v6 = v3 + 224; /*0x65ab9a*/
    if ( v3 != -224 ) /*0x65aba2*/
    {
      *(_DWORD *)(v3 + 228) = 0; /*0x65aba4*/
      *(_DWORD *)(v3 + 232) = 0; /*0x65abab*/
      *(_BYTE *)(v3 + 236) = 1; /*0x65abb2*/
      *(_BYTE *)(v3 + 237) = 0; /*0x65abb6*/
      *(_DWORD *)v6 = &VectorClass<TechnoClass *>::`vftable'; /*0x65abba*/
    }
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a3, 4, 0); /*0x65abcc*/
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v3 + 224, a3, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = a3; /*0x65abe3*/
      if ( a3 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking( /*0x65ac29*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v3 + 228) + 4 * v9++));
          while ( v9 < a3 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x65abf7*/
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *(_DWORD *)(*(_DWORD *)(v3 + 228) + 4 * v7) = a2; /*0x65ac08*/
          v8 = a3; /*0x65ac0b*/
          if ( ++v7 >= a3 ) /*0x65ac12*/
            goto LABEL_8; /*0x65ac12*/
        }
      }
    }
  }
  return result; /*0x65ac37*/
}



// ==== 0x0065AC40  RadioClass::SaveState  this=RadioClass  sig=csp ====
int __stdcall RadioClass::SaveState(RadioClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *a2; /*0x65ac61*/
    a3 = this->radioLinks[2]; /*0x65ac6d*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x65ac71*/
    if ( result >= 0 ) /*0x65ac76*/
    {
      v5 = 0; /*0x65ac7c*/
      if ( a3 <= 0 ) /*0x65ac80*/
      {
        return 0; /*0x65aca3*/
      }
      else
      {
        while ( 1 ) /*0x65ac93*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->radioLinks[1] + 4 * v5, 4, 0); /*0x65ac93*/
          if ( result < 0 ) /*0x65ac98*/
            break; /*0x65ac98*/
          if ( ++v5 >= a3 ) /*0x65aca1*/
            return 0; /*0x65aca1*/
        }
      }
    }
  }
  return result; /*0x65aca5*/
}



// ==== 0x0065ACB0  ObjectClass::ThunkTo159x4  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo159x4(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( **((_DWORD **)this + 57) ) /*0x65acb6*/
    return (*((int (__thiscall **)(ObjectClass *, int, _BYTE *, _DWORD))this->AbstractClass + 159))( /*0x65acc9*/
             this,
             v2,
             &stru_A8EB00.?[76],
             **((_DWORD **)this + 57));
  else
    return 0; /*0x65acd2*/
}



// ==== 0x0065ACE0  RadioClass::UpdateObjects  this=RadioClass  sig=csp ====
int __thiscall TacticalClass::UpdateObjects(RadioClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x65ace4*/
  result = this->radioLinks[2]; /*0x65ace6*/
  if ( result > 0 ) /*0x65acee*/
  {
    do /*0x65ad1c*/
    {
      if ( *(_DWORD *)(this->radioLinks[1] + 4 * v2) ) /*0x65acfb*/
        (*((void (__thiscall **)(RadioClass *, int, _BYTE *, _DWORD))this->MissionClass + 159))( /*0x65ad0d*/
          this,
          v4,
          &stru_A8EB00.?[76],
          *(_DWORD *)(this->radioLinks[1] + 4 * v2));
      result = this->radioLinks[2]; /*0x65ad13*/
      ++v2; /*0x65ad19*/
    }
    while ( v2 < result ); /*0x65ad1c*/
  }
  return result; /*0x65ad1f*/
}



// ==== 0x0065AD30  Team::GetMember  this=IUnknown  sig=csp ====
int __thiscall Team::GetMember(Team *this, int a2)
{
  return *((_DWORD *)this->field_E4 + a2); /*0x65ad3d*/
}



// ==== 0x0065AD40  Array::Get  this=Array  sig=csp ====
int __thiscall Array::Get(Array *this, int a2)
{
  return *((_DWORD *)this->Array_field_0xE4 + a2); /*0x65ad4d*/
}



// ==== 0x0065AD50  Array::Contains  this=Array  sig=csp ====
int __thiscall Array::Contains(Array *this, int a2)
{
  void *Array_field_0xE8; // edx
  int result; // eax
  _DWORD *Array_field_0xE4; // ecx

  if ( a2 && (Array_field_0xE8 = this->Array_field_0xE8, result = 0, (int)Array_field_0xE8 > 0) ) /*0x65ad63*/
  {
    Array_field_0xE4 = this->Array_field_0xE4; /*0x65ad65*/
    while ( *Array_field_0xE4 != a2 ) /*0x65ad6d*/
    {
      ++result; /*0x65ad6f*/
      ++Array_field_0xE4; /*0x65ad70*/
      if ( result >= (int)Array_field_0xE8 ) /*0x65ad75*/
        goto LABEL_6; /*0x65ad75*/
    }
  }
  else
  {
LABEL_6:
    result = -1; /*0x65ad77*/
  }
  LOBYTE(result) = result != -1; /*0x65ad82*/
  return result; /*0x65ad84*/
}



// ==== 0x0065AD90  RadioClass::FindLinkIndex  this=RadioClass  sig=csp ====
int __thiscall RadioClass::FindLinkIndex(RadioClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = this->radioLinks[2]; /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (_DWORD *)this->radioLinks[1]; *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/
}



// ==== 0x0065ADC0  RadioClass::HasFreeLink  this=RadioClass  sig=csp ====
char __thiscall RadioClass::HasFreeLink(RadioClass *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = this->radioLinks[2]; /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (_DWORD *)this->radioLinks[1]; *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/
}



// ==== 0x0065ADF0  Array::ContainsValue  this=Array  sig=csp ====
int __thiscall Array::ContainsValue(Array *this, int a2)
{
  int result; // eax
  void *Array_field_0xE8; // esi
  int v4; // edx
  int *Array_field_0xE4; // ecx

  Array_field_0xE8 = this->Array_field_0xE8; /*0x65adf1*/
  v4 = 0; /*0x65adf7*/
  if ( (int)Array_field_0xE8 <= 0 ) /*0x65adfc*/
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x65ae1a*/
  }
  else
  {
    Array_field_0xE4 = (int *)this->Array_field_0xE4; /*0x65adfe*/
    while ( 1 ) /*0x65ae08*/
    {
      result = *Array_field_0xE4; /*0x65ae08*/
      if ( !*Array_field_0xE4 || result == a2 ) /*0x65ae10*/
        break; /*0x65ae10*/
      ++v4; /*0x65ae12*/
      ++Array_field_0xE4; /*0x65ae13*/
      if ( v4 >= (int)Array_field_0xE8 ) /*0x65ae18*/
        goto LABEL_6; /*0x65ae18*/
    }
    LOBYTE(result) = 1; /*0x65ae22*/
  }
  return result; /*0x65ae1a*/
}



// ==== 0x0065AE30  Team::AllMembersValid  this=IUnknown  sig=csp ====
int __thiscall Team::AllMembersValid(Team *this)
{
  void *v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = this->field_E8; /*0x65ae30*/
  result = 0; /*0x65ae36*/
  if ( (int)v1 <= 0 ) /*0x65ae3a*/
  {
LABEL_5:
    LOBYTE(result) = 0; /*0x65ae4f*/
  }
  else
  {
    v3 = this->field_E4; /*0x65ae3c*/
    while ( !*v3 ) /*0x65ae45*/
    {
      ++result; /*0x65ae47*/
      ++v3; /*0x65ae48*/
      if ( result >= (int)v1 ) /*0x65ae4d*/
        goto LABEL_5; /*0x65ae4d*/
    }
    LOBYTE(result) = 1; /*0x65ae52*/
  }
  return result; /*0x65ae51*/
}



// ==== 0x0065AE60  RadioClass::SetLinkCount  this=RadioClass  sig=csp ====
void __thiscall RadioClass::SetLinkCount(RadioClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = this->radioLinks[2]; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD))(this->radioLinks[0] + 8))(this->radioLinks, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(_DWORD *)(this->radioLinks[1] + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}



// ==== 0x0065AEB0  RadioClass::ProcessEvent  this=RadioClass  sig=csp ====
_DWORD *__thiscall RadioClass::ProcessEvent(RadioClass *this, char a2)
{
  void *v3; // eax

  this->MissionClass = &RadioClass::`vftable'; /*0x65aeb3*/
  this->? = &RadioClass::`vftable'; /*0x65aeb9*/
  this->? = &RadioClass::`vftable'; /*0x65aec0*/
  this->? = &RadioClass::`vftable'; /*0x65aec7*/
  v3 = (void *)this->radioLinks[1]; /*0x65aece*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65aed4*/
  if ( v3 && BYTE1(this->radioLinks[3]) ) /*0x65aee2*/
  {
    __3_YAXPAX_Z(v3); /*0x65aeed*/
    this->radioLinks[1] = 0; /*0x65aef5*/
  }
  BYTE1(this->radioLinks[3]) = 0; /*0x65aeff*/
  this->radioLinks[2] = 0; /*0x65af06*/
  this->MissionClass = &MissionClass::`vftable'; /*0x65af12*/
  this->? = &MissionClass::`vftable'; /*0x65af18*/
  this->? = &MissionClass::`vftable'; /*0x65af1f*/
  this->? = &MissionClass::`vftable'; /*0x65af26*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x65af2d*/
  if ( (a2 & 1) != 0 ) /*0x65af37*/
    __3_YAXPAX_Z(this); /*0x65af3a*/
  return &this->MissionClass; /*0x65af44*/
}



// ==== 0x0065AF50  sub_65AF50  this=-  sig=ida-proto ====
void sub_65AF50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65af5c*/
  dbl_B04B78 = Math::Sqrt(v0 + v0); /*0x65af6e*/
}



// ==== 0x0065AF80  sub_65AF80  this=-  sig=ida-proto ====
void sub_65AF80()
{
  dbl_B04BC8 = dbl_B04B78 / 60.0; /*0x65af8c*/
}



// ==== 0x0065AFA0  sub_65AFA0  this=-  sig=ida-proto ====
void sub_65AFA0()
{
  dbl_B04BB0 = 1.0 / dbl_B04BC8; /*0x65afac*/
}



// ==== 0x0065AFC0  sub_65AFC0  this=-  sig=ida-proto ====
void sub_65AFC0()
{
  dbl_B04BA8 = 0.0174532925199433 * 45.0; /*0x65afcc*/
}



// ==== 0x0065AFE0  sub_65AFE0  this=-  sig=ida-proto ====
void sub_65AFE0()
{
  dbl_B04B80 = 0.0174532925199433 * 60.0; /*0x65afec*/
}



// ==== 0x0065B000  sub_65B000  this=-  sig=ida-proto ====
void sub_65B000()
{
  dbl_B04B58 = 0.0174532925199433 * 90.0; /*0x65b00c*/
}



// ==== 0x0065B020  sub_65B020  this=-  sig=ida-proto ====
__int64 sub_65B020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04B58 - dbl_B04B80); /*0x65b032*/
  result = Math::RoundToInt(v0 * dbl_B04B78 * 0.5); /*0x65b046*/
  dword_B04BE8 = result; /*0x65b04b*/
  return result; /*0x65b050*/
}



// ==== 0x0065B060  sub_65B060  this=-  sig=ida-proto ====
void sub_65B060()
{
  dbl_B04B88 = Math::ArcTan((double)dword_B04BE8 * 0.00390625); /*0x65b077*/
}



// ==== 0x0065B090  sub_65B090  this=-  sig=ida-proto ====
void sub_65B090()
{
  dbl_B04BA0 = Math::ArcTan((double)(2 * dword_B04BE8) / dbl_B04B78); /*0x65b0b2*/
}



// ==== 0x0065B0C0  sub_65B0C0  this=-  sig=ida-proto ====
__int64 sub_65B0C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04BE8) + 0.5); /*0x65b0db*/
  dword_B04BC4 = result; /*0x65b0e0*/
  return result; /*0x65b0e6*/
}



// ==== 0x0065B0F0  sub_65B0F0  this=-  sig=ida-proto ====
int sub_65B0F0()
{
  word_B04B70 = 0; /*0x65b0f2*/
  word_B04B72 = 0; /*0x65b0f8*/
  return 0; /*0x65b0fe*/
}



// ==== 0x0065B100  sub_65B100  this=-  sig=ida-proto ====
int sub_65B100()
{
  dword_B04B90 = 0; /*0x65b102*/
  dword_B04B94 = 0; /*0x65b107*/
  dword_B04B98 = 0; /*0x65b10c*/
  return 0; /*0x65b111*/
}



// ==== 0x0065B120  sub_65B120  this=-  sig=ida-proto ====
int sub_65B120()
{
  dword_B04BC0 = 0; /*0x65b125*/
  dword_B04BB8 = 128; /*0x65b12f*/
  dword_B04BBC = 128; /*0x65b134*/
  return 128; /*0x65b139*/
}



// ==== 0x0065B140  sub_65B140  this=-  sig=ida-proto ====
int sub_65B140()
{
  dword_B04B60 = 0; /*0x65b142*/
  dword_B04B64 = 0; /*0x65b147*/
  dword_B04B68 = 0; /*0x65b14c*/
  dword_B04B6C = 0; /*0x65b151*/
  return 0; /*0x65b156*/
}



// ==== 0x0065B160  sub_65B160  this=-  sig=ida-proto ====
int sub_65B160()
{
  dword_B04BD4 = 0; /*0x65b167*/
  dword_B04BD8 = 0; /*0x65b16c*/
  byte_B04BDC = 1; /*0x65b171*/
  byte_B04BDD = 0; /*0x65b178*/
  RadSiteClass_Array = (int)&DynamicVectorClass<RadSiteClass *>::`vftable'; /*0x65b17d*/
  dword_B04BE4 = 10; /*0x65b187*/
  dword_B04BE0 = 0; /*0x65b191*/
  return atexit(sub_65B1A0); /*0x65b19c*/
}



// ==== 0x0065B1A0  sub_65B1A0  this=-  sig=ida-proto ====
void __cdecl sub_65B1A0()
{
  RadSiteClass_Array = (int)&VectorClass<RadSiteClass *>::`vftable'; /*0x65b1a8*/
  if ( dword_B04BD4 && byte_B04BDD ) /*0x65b1bc*/
  {
    __3_YAXPAX_Z(dword_B04BD4); /*0x65b1bf*/
    dword_B04BD4 = 0; /*0x65b1c7*/
  }
  byte_B04BDD = 0; /*0x65b1cd*/
  dword_B04BD8 = 0; /*0x65b1d3*/
}



// ==== 0x0065B1E0  RadSiteClass::RadSiteClass  this=RadSiteClass  sig=csp ====
_DWORD *__thiscall RadSiteClass::RadSiteClass(RadSiteClass *this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  this->RadLevelTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b1f3*/
  this->RadLevelTimer[2] = 0; /*0x65b1f6*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b1f9*/
  this->RadLightTimer[2] = 0; /*0x65b1ff*/
  this->RadLightTimer[0] = v2; /*0x65b202*/
  LOWORD(this->BaseCell[0]) = 0; /*0x65b205*/
  HIWORD(this->BaseCell[0]) = 0; /*0x65b209*/
  this->Spread = 0; /*0x65b20d*/
  this->SpreadInLeptons = 0; /*0x65b210*/
  this->RadLevel = 0; /*0x65b213*/
  this->LevelSteps = 0; /*0x65b216*/
  this->Intensity = 0; /*0x65b219*/
  this->IntensitySteps = 0; /*0x65b21c*/
  this->IntensityDecrement = 0; /*0x65b21f*/
  this->RadDuration = 0; /*0x65b222*/
  this->RadTimeLeft = 0; /*0x65b225*/
  this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b228*/
  this->? = &RadSiteClass::`vftable'; /*0x65b22e*/
  this->? = &RadSiteClass::`vftable'; /*0x65b235*/
  this->? = &RadSiteClass::`vftable'; /*0x65b23c*/
  if ( dword_B04BE0 < dword_B04BD8 /*0x65b277*/
    || (byte_B04BDD || !dword_B04BD8)
    && dword_B04BE4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadSiteClass_Array + 8))(
         &RadSiteClass_Array,
         dword_B04BD8 + dword_B04BE4,
         0) )
  {
    v3 = dword_B04BE0++; /*0x65b284*/
    *((_DWORD *)dword_B04BD4 + v3) = this; /*0x65b293*/
  }
  return &this->AbstractClass; /*0x65b298*/
}



// ==== 0x0065B2F0  RadSiteClass::Constructor  this=RadSiteClass  sig=csp ====
void __thiscall RadSiteClass::Constructor(RadSiteClass *this)
{
  TerrainClass *v2; // eax
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  int v5; // eax
  RadSiteClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b2fc*/
  this->? = &RadSiteClass::`vftable'; /*0x65b303*/
  this->? = &RadSiteClass::`vftable'; /*0x65b30a*/
  this->? = &RadSiteClass::`vftable'; /*0x65b311*/
  v2 = (TerrainClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->BaseCell); /*0x65b318*/
  TerrainClass::SetFieldF8(v2, 0); /*0x65b321*/
  LOBYTE(v3) = 1; /*0x65b326*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, v3); /*0x65b32a*/
  LightSource = this->LightSource; /*0x65b32f*/
  if ( LightSource ) /*0x65b334*/
  {
    (*((void (__thiscall **)(LightSourceClass *, int))LightSource->AbstractClass + 8))(LightSource, 1); /*0x65b33a*/
    this->LightSource = 0; /*0x65b33d*/
  }
  v6 = this; /*0x65b354*/
  v5 = (*(int (__thiscall **)(int *, RadSiteClass **))(RadSiteClass_Array + 16))(&RadSiteClass_Array, &v6); /*0x65b358*/
  if ( v5 != -1 && v5 < dword_B04BE0 && v5 < --dword_B04BE0 ) /*0x65b373*/
  {
    do /*0x65b38b*/
    {
      ++v5; /*0x65b37b*/
      *((_DWORD *)dword_B04BD4 + v5 - 1) = *((_DWORD *)dword_B04BD4 + v5); /*0x65b37f*/
    }
    while ( v5 < dword_B04BE0 ); /*0x65b38b*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x65b38f*/
}



// ==== 0x0065B3A0  RadSiteClass::StubReturn116  this=RadSiteClass  sig=csp ====
int RadSiteClass::StubReturn116(RadSiteClass *this)
{
  return 116; /*0x65b3a5*/
}



// ==== 0x0065B3B0  RadSiteClass::PowerDrainUpdate  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::PowerDrainUpdate(RadSiteClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x65b3ba*/
}



// ==== 0x0065B3C0  RadSiteClass::StubReturn69  this=RadSiteClass  sig=csp ====
int RadSiteClass::StubReturn69(RadSiteClass *this)
{
  return 69; /*0x65b3c5*/
}



// ==== 0x0065B3D0  RadSiteClass::SaveLoad_Prefix  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix(RadSiteClass *this, int a2)
{
  int Prefix_0; // edi
  int v3; // edx

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( this ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x65b3f2*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b3f7*/
      this->RadLevelTimer[2] = 0; /*0x65b3fd*/
      this->RadLevelTimer[0] = v3; /*0x65b404*/
      this->RadLightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b40c*/
      this->RadLightTimer[2] = 0; /*0x65b40f*/
      this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b416*/
      this->? = &RadSiteClass::`vftable'; /*0x65b41c*/
      this->? = &RadSiteClass::`vftable'; /*0x65b423*/
      this->? = &RadSiteClass::`vftable'; /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->LightSource); /*0x65b43a*/
  }
  return Prefix_0; /*0x65b441*/
}



// ==== 0x0065B450  RadSiteClass::SaveLoad_Prefix_0  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix_0(RadSiteClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x65b464*/
}



// ==== 0x0065B470  RadSiteClass::ddtor  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::ddtor(RadSiteClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x65b476*/
    return -2147467261; /*0x65b478*/
  *a2 = 1090836288; /*0x65b486*/
  a2[1] = 299095303; /*0x65b48e*/
  a2[2] = -1610598260; /*0x65b497*/
  a2[3] = unk_7E98CC; /*0x65b4a0*/
  return 0; /*0x65b47d*/
}



// ==== 0x0065B4B0  RadSiteClass::GetSpread  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::GetSpread(RadSiteClass *this)
{
  return this->Spread; /*0x65b4b3*/
}



// ==== 0x0065B4C0  RadSiteClass::SetBaseCell  this=RadSiteClass  sig=csp ====
_DWORD *__thiscall RadSiteClass::SetBaseCell(RadSiteClass *this, _DWORD *a2)
{
  this->BaseCell[0] = *a2; /*0x65b4c6*/
  return a2; /*0x65b4c9*/
}



// ==== 0x0065B4D0  RadSiteClass::SetSpread  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::SetSpread(RadSiteClass *this, int a2)
{
  int result; // eax

  this->Spread = a2; /*0x65b4d4*/
  result = (a2 << 8) + 128; /*0x65b4da*/
  this->SpreadInLeptons = result; /*0x65b4df*/
  return result; /*0x65b4e2*/
}



// ==== 0x0065B4F0  RadSiteClass::SetRadLevel  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::SetRadLevel(RadSiteClass *this, int a2)
{
  int result; // eax

  this->RadLevel = a2; /*0x65b4f4*/
  result = a2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b502*/
  this->RadDuration = result; /*0x65b505*/
  this->RadTimeLeft = result; /*0x65b508*/
  return result; /*0x65b50b*/
}



// ==== 0x0065B510  CellClass::GetOccupiedRatio  this=CellClass  sig=csp ====
int __thiscall CellClass::GetOccupiedRatio(CellClass *this)
{
  int CellClass_field_6C; // esi

  CellClass_field_6C = this->CellClass_field_6C; /*0x65b511*/
  if ( CellClass_field_6C > 0 ) /*0x65b516*/
    return this->CellClass_field_4C * this->unknown70 / CellClass_field_6C; /*0x65b524*/
  else
    return 0; /*0x65b518*/
}



// ==== 0x0065B530  RadSiteClass::Add  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::Add(RadSiteClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax

  LOWORD(v3) = Math::RoundToInt((double)this->RadLevel * (double)this->RadTimeLeft / (double)this->RadDuration); /*0x65b541*/
  v4 = v3; /*0x65b548*/
  RadSiteClass::Deactivate(this); /*0x65b54a*/
  this->RadLevel = v4 + a2; /*0x65b556*/
  v5 = (v4 + a2) * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b565*/
  this->RadDuration = v5; /*0x65b56a*/
  this->RadTimeLeft = v5; /*0x65b56d*/
  return Warhead::ProcessDamageArea((Warhead *)this); /*0x65b575*/
}



// ==== 0x0065B580  Warhead::ProcessDamageArea  this=Warhead  sig=csp ====
int __thiscall Warhead::ProcessDamageArea(Warhead *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ebp
  double v14; // st7
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  void *v19; // eax
  int *v20; // eax
  int v21; // ecx
  LightSourceClass *v22; // eax
  _DWORD *v23; // eax
  int v25; // [esp+10h] [ebp-30h]
  int v26; // [esp+10h] [ebp-30h]
  int v27; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+20h] [ebp-20h]
  int v30; // [esp+24h] [ebp-1Ch]
  int v31; // [esp+28h] [ebp-18h]
  int v32; // [esp+2Ch] [ebp-14h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  _BYTE v35[12]; // [esp+34h] [ebp-Ch] BYREF

  v28 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6160); /*0x65b5a3*/
  v29 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6164); /*0x65b5a7*/
  this->u32_A0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b5ab*/
  this->u32_2C = v32; /*0x65b5b3*/
  this->u32_C = v28; /*0x65b5b9*/
  this->q034 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b5c2*/
  this->u32_38 = v32; /*0x65b5c8*/
  this->u8_3C = v29; /*0x65b5cb*/
  v2 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x65b5ce*/
  v3 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x65b5e2*/
  v4 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6193); /*0x65b5e8*/
  v5 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x65b5f5*/
  if ( dword_A8B230[130].uniqueId == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v25 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*((int *)this + 19) * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6176); /*0x65b63e*/
  v30 = this->q048; /*0x65b679*/
  v27 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  LOWORD(v7) = Math::RoundToInt(v6); /*0x65b695*/
  v8 = v7; /*0x65b69e*/
  v9 = (double)v25 * *(double *)(v2 + 6184); /*0x65b6a0*/
  if ( v9 > 2000.0 ) /*0x65b6b3*/
    v9 = 2000.0; /*0x65b6b7*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x65b6bd*/
  v26 = v10; /*0x65b6c6*/
  v11 = (double)(1000 * v4 / 255) * *(double *)(v2 + 6184); /*0x65b6ca*/
  if ( v11 > 2000.0 ) /*0x65b6dd*/
    v11 = 2000.0; /*0x65b6e1*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x65b6e7*/
  v13 = v12; /*0x65b6f0*/
  v14 = (double)v27 * *(double *)(v2 + 6184); /*0x65b6f2*/
  if ( v14 > 2000.0 ) /*0x65b705*/
    v14 = 2000.0; /*0x65b709*/
  LOWORD(v15) = Math::RoundToInt(v14); /*0x65b70f*/
  v16 = this->q01B; /*0x65b714*/
  v17 = v15; /*0x65b71b*/
  this->u32_58 = v26; /*0x65b71f*/
  this->u32_5C = v13; /*0x65b722*/
  this->u32_60 = v15; /*0x65b72a*/
  this->q054 = v8; /*0x65b72d*/
  this->u32_14 = v16 / v28; /*0x65b730*/
  v18 = v16 / v29; /*0x65b73a*/
  this->u32_64 = v18; /*0x65b741*/
  this->u32_68 = v8 / v18; /*0x65b749*/
  v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 32); /*0x65b750*/
  v20 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v19 + 72))(v19, v35); /*0x65b75e*/
  v31 = *v20; /*0x65b763*/
  v33 = v20[1]; /*0x65b76a*/
  v21 = this->u32_24; /*0x65b76e*/
  v34 = v20[2]; /*0x65b776*/
  if ( v21 ) /*0x65b77a*/
  {
    TacticalClass::UpdateScrollTarget(v21, v8, v26, v13, v17, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate((int)this); /*0x65b7ef*/
  }
  else
  {
    v22 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v22 ) /*0x65b788*/
      v23 = LightSourceClass::Construct(v22, v31, v33, v34, v30, v8, v26, v13, v17); /*0x65b7b2*/
    else
      v23 = 0; /*0x65b7b9*/
    this->u32_24 = v23; /*0x65b7bb*/
    v23[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*((Trigger **)this + 9), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate((int)this); /*0x65b7d1*/
  }
}



// ==== 0x0065B800  RadSiteClass::Tick  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::Tick(RadSiteClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax
  int v11; // [esp+Ch] [ebp-8h]

  --this->RadTimeLeft; /*0x65b80b*/
  v2 = this->RadLevelTimer[0]; /*0x65b80e*/
  v3 = this->RadLevelTimer[2]; /*0x65b811*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b814*/
  if ( v2 == -1 ) /*0x65b81d*/
  {
LABEL_4:
    if ( v3 ) /*0x65b82b*/
      goto LABEL_6; /*0x65b82b*/
    goto LABEL_5; /*0x65b82b*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 < v3 ) /*0x65b825*/
  {
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x65b827*/
    goto LABEL_4; /*0x65b827*/
  }
LABEL_5:
  RadSiteClass::DecreaseRadiation(this); /*0x65b82d*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6160); /*0x65b843*/
  this->RadLevelTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b849*/
  this->RadLevelTimer[1] = v11; /*0x65b84c*/
  this->RadLevelTimer[2] = v5; /*0x65b84f*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b852*/
LABEL_6:
  v6 = this->RadLightTimer[0]; /*0x65b858*/
  v7 = this->RadLightTimer[2]; /*0x65b85b*/
  if ( v6 == -1 ) /*0x65b861*/
    goto LABEL_9; /*0x65b861*/
  v8 = v4 - v6; /*0x65b863*/
  if ( v8 < v7 ) /*0x65b869*/
  {
    v7 -= v8; /*0x65b86b*/
LABEL_9:
    if ( v7 ) /*0x65b86f*/
      goto LABEL_11; /*0x65b86f*/
  }
  TacticalClass::UpdateScrollTarget( /*0x65b871*/
    (int)this->LightSource,
    this->LightSource->LightIntensity - this->IntensityDecrement,
    this->RadTimeLeft * this->Tint[0] / this->RadDuration,
    this->RadTimeLeft * this->Tint[1] / this->RadDuration,
    this->RadTimeLeft * this->Tint[2] / this->RadDuration,
    0);
  v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6164); /*0x65b8b9*/
  this->RadLightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b8bf*/
  this->RadLightTimer[1] = v11; /*0x65b8c2*/
  this->RadLightTimer[2] = v9; /*0x65b8c5*/
LABEL_11:
  result = this->RadTimeLeft; /*0x65b8c8*/
  if ( result <= 0 ) /*0x65b8cd*/
  {
    if ( this ) /*0x65b8d1*/
      return (*((int (__thiscall **)(RadSiteClass *, int))this->AbstractClass + 8))(this, 1); /*0x65b8d9*/
  }
  return result; /*0x65b8dc*/
}



// ==== 0x0065B8F0  RadSiteClass::GetRadLevelAt  this=RadSiteClass  sig=csp ====
double __thiscall RadSiteClass::GetRadLevelAt(RadSiteClass *this, __int16 *a2)
{
  double v2; // st7
  void *v4; // esi
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int SpreadInLeptons; // ecx
  double result; // st7
  int v15; // [esp+24h] [ebp-Ch] BYREF
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]
  __int16 *v18; // [esp+34h] [ebp+4h]

  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->BaseCell); /*0x65b90b*/
  v18 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x65b91a*/
  v5 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v4 + 72))(v4, &v15); /*0x65b925*/
  v6 = *v5; /*0x65b928*/
  v7 = v5[1]; /*0x65b92e*/
  v8 = v5[2]; /*0x65b933*/
  v9 = (_DWORD *)(*(int (__thiscall **)(__int16 *, int *))(*(_DWORD *)v18 + 72))(v18, &v15); /*0x65b93b*/
  v10 = v6 - *v9; /*0x65b945*/
  v11 = v9[2]; /*0x65b94c*/
  v16 = v7 - v9[1]; /*0x65b94f*/
  v15 = v10; /*0x65b959*/
  v17 = v8 - v11; /*0x65b95d*/
  Math::Sqrt((double)v10 * (double)v10 + (double)(v8 - v11) * (double)(v8 - v11) + (double)v16 * (double)v16); /*0x65b982*/
  LOWORD(v12) = Math::RoundToInt(v2); /*0x65b98a*/
  SpreadInLeptons = this->SpreadInLeptons; /*0x65b98f*/
  result = 0.0; /*0x65b992*/
  if ( v12 <= SpreadInLeptons ) /*0x65b99e*/
    return (double)(SpreadInLeptons - v12) / (double)this->SpreadInLeptons * (double)this->RadLevel; /*0x65b9b0*/
  return result; /*0x65b9b3*/
}



// ==== 0x0065B9C0  RadSiteClass::Radiate  this=Warhead  sig=ida-proto ====
int __fastcall RadSiteClass::Radiate(int a1)
{
  int v1; // esi
  int v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // esi
  void *v6; // esi
  void *v7; // ebp
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // eax
  double *v17; // eax
  __int16 v18[2]; // [esp+24h] [ebp-4Ch] BYREF
  int v19; // [esp+28h] [ebp-48h]
  int v20; // [esp+2Ch] [ebp-44h]
  int i; // [esp+30h] [ebp-40h]
  int v22; // [esp+34h] [ebp-3Ch]
  double v23; // [esp+38h] [ebp-38h]
  int v24; // [esp+40h] [ebp-30h]
  int v25; // [esp+44h] [ebp-2Ch]
  int v26; // [esp+48h] [ebp-28h]
  int v27; // [esp+4Ch] [ebp-24h]
  int v28; // [esp+50h] [ebp-20h]
  int v29; // [esp+54h] [ebp-1Ch]
  char v30[12]; // [esp+58h] [ebp-18h] BYREF
  char v31[12]; // [esp+64h] [ebp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 68); /*0x65b9d4*/
  v2 = *(__int16 *)(a1 + 64) - v1; /*0x65b9d7*/
  result = *(__int16 *)(a1 + 66) - v1; /*0x65b9d9*/
  v20 = a1; /*0x65b9dc*/
  v4 = v2 + 2 * v1 + 1; /*0x65b9e0*/
  v5 = result + 2 * v1 + 1; /*0x65b9e4*/
  v26 = v2; /*0x65b9ea*/
  v22 = v4; /*0x65b9ee*/
  v25 = v5; /*0x65b9f2*/
  for ( i = result; i < v5; ++i ) /*0x65b9fa*/
  {
    v19 = v2; /*0x65ba04*/
    if ( v2 < v22 ) /*0x65ba0a*/
    {
      while ( 1 ) /*0x65ba20*/
      {
        v18[0] = v19; /*0x65ba20*/
        v18[1] = i; /*0x65ba2e*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(a1 + 64)); /*0x65ba38*/
        v7 = CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65ba4b*/
        v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v30); /*0x65ba54*/
        v9 = *v8; /*0x65ba57*/
        v10 = v8[1]; /*0x65ba5e*/
        v11 = v8[2]; /*0x65ba61*/
        v12 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v31); /*0x65ba69*/
        v13 = v12[1]; /*0x65ba75*/
        v27 = v9 - *v12; /*0x65ba78*/
        v14 = v12[2]; /*0x65ba7e*/
        v28 = v10 - v13; /*0x65ba81*/
        v29 = v11 - v14; /*0x65ba8b*/
        v15 = Math::Sqrt((double)v27 * (double)v27 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v28 /*0x65bab0*/
                                                                                               * (double)v28);
        v16 = Math::RoundToInt(v15); /*0x65bab8*/
        v23 = 0.0; /*0x65bac1*/
        v24 = *(_DWORD *)(v20 + 72); /*0x65bad6*/
        if ( v16 <= v24 ) /*0x65bada*/
        {
          LODWORD(v23) = v24 - v16; /*0x65bade*/
          v23 = (double)(v24 - v16) / (double)v24 * (double)*(int *)(v20 + 76); /*0x65baed*/
        }
        v17 = (double *)CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65bafb*/
        CellClass::RadLevel_Increase(v17, v23); /*0x65bb0c*/
        if ( ++v19 >= v22 ) /*0x65bb20*/
          break; /*0x65bb20*/
        a1 = v20; /*0x65ba12*/
      }
      v5 = v25; /*0x65bb26*/
      v2 = v26; /*0x65bb2a*/
      a1 = v20; /*0x65bb2e*/
    }
    result = i + 1; /*0x65bb36*/
  }
  return result; /*0x65bb43*/
}



// ==== 0x0065BB50  RadSiteClass::Deactivate  this=RadSiteClass  sig=csp ====
int __fastcall RadSiteClass::Deactivate(_DWORD *a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  int v4; // edx
  int result; // eax
  int v6; // esi
  void *v7; // esi
  void *v8; // ebp
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  int v17; // eax
  double v18; // st7
  void *v19; // eax
  __int16 v20[2]; // [esp+24h] [ebp-5Ch] BYREF
  int v21; // [esp+28h] [ebp-58h]
  _DWORD *v22; // [esp+2Ch] [ebp-54h]
  int v23; // [esp+30h] [ebp-50h]
  int v24; // [esp+34h] [ebp-4Ch]
  int v25; // [esp+38h] [ebp-48h]
  int v26; // [esp+3Ch] [ebp-44h]
  double v27; // [esp+40h] [ebp-40h]
  unsigned __int64 v28; // [esp+48h] [ebp-38h]
  double v29; // [esp+50h] [ebp-30h]
  int v30; // [esp+5Ch] [ebp-24h]
  int v31; // [esp+60h] [ebp-20h]
  int v32; // [esp+64h] [ebp-1Ch]
  char v33[12]; // [esp+68h] [ebp-18h] BYREF
  char v34[12]; // [esp+74h] [ebp-Ch] BYREF

  v1 = a1[28] / dword_8871E0[1].?[1]; /*0x65bb67*/
  v2 = *((__int16 *)a1 + 32); /*0x65bb6d*/
  v3 = a1[17]; /*0x65bb71*/
  v22 = a1; /*0x65bb74*/
  v4 = v2 - v3; /*0x65bb78*/
  v24 = v4 + 2 * v3 + 1; /*0x65bb82*/
  v25 = v1 + 1; /*0x65bb87*/
  result = *((__int16 *)a1 + 33) - v3; /*0x65bb8f*/
  v23 = result; /*0x65bb91*/
  v6 = result + 2 * v3 + 1; /*0x65bb95*/
  v28 = __PAIR64__(v4, v6); /*0x65bb9b*/
  if ( result < v6 ) /*0x65bb9f*/
  {
    do /*0x65bce9*/
    {
      v21 = v4; /*0x65bba9*/
      if ( v4 < v24 ) /*0x65bbaf*/
      {
        v29 = (double)v25; /*0x65bbb9*/
        while ( 1 ) /*0x65bbcd*/
        {
          v20[0] = v21; /*0x65bbcd*/
          v20[1] = v23; /*0x65bbdb*/
          v7 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)a1 + 32); /*0x65bbe5*/
          v8 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bbf8*/
          v9 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v33); /*0x65bc01*/
          v10 = *v9; /*0x65bc04*/
          v11 = v9[1]; /*0x65bc0b*/
          v12 = v9[2]; /*0x65bc0e*/
          v13 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v8 + 72))(v8, v34); /*0x65bc16*/
          v14 = v13[1]; /*0x65bc22*/
          v30 = v10 - *v13; /*0x65bc25*/
          v15 = v13[2]; /*0x65bc2b*/
          v31 = v11 - v14; /*0x65bc2e*/
          v32 = v12 - v15; /*0x65bc38*/
          v16 = Math::Sqrt((double)v30 * (double)v30 + (double)(v12 - v15) * (double)(v12 - v15) + (double)v31 /*0x65bc5d*/
                                                                                                 * (double)v31);
          v17 = Math::RoundToInt(v16); /*0x65bc65*/
          v18 = 0.0; /*0x65bc6e*/
          LODWORD(v27) = v22[18]; /*0x65bc79*/
          if ( v17 <= SLODWORD(v27) ) /*0x65bc7d*/
          {
            v26 = LODWORD(v27) - v17; /*0x65bc83*/
            v18 = (double)(LODWORD(v27) - v17) / (double)SLODWORD(v27) * (double)(int)v22[19]; /*0x65bc8f*/
          }
          v27 = v18 / (double)(int)v22[20] * v29; /*0x65bca3*/
          v19 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bca7*/
          CellClass::RadLevel_Decrease((int)v19, v27); /*0x65bcb8*/
          if ( ++v21 >= v24 ) /*0x65bccc*/
            break; /*0x65bccc*/
          a1 = v22; /*0x65bbbf*/
        }
        v4 = HIDWORD(v28); /*0x65bcd6*/
        v6 = v28; /*0x65bcd6*/
        a1 = v22; /*0x65bcda*/
      }
      result = ++v23; /*0x65bce2*/
    }
    while ( v23 < v6 ); /*0x65bce9*/
  }
  return result; /*0x65bcef*/
}



// ==== 0x0065BD00  RadSiteClass::DecreaseRadiation  this=RadSiteClass  sig=csp ====
int __fastcall RadSiteClass::DecreaseRadiation(_DWORD *a1)
{
  int v1; // esi
  int v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // esi
  void *v6; // esi
  void *v7; // ebp
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // eax
  double v17; // st7
  void *v18; // eax
  __int16 v19[2]; // [esp+20h] [ebp-50h] BYREF
  int v20; // [esp+24h] [ebp-4Ch]
  _DWORD *v21; // [esp+28h] [ebp-48h]
  int i; // [esp+2Ch] [ebp-44h]
  int v23; // [esp+30h] [ebp-40h]
  int v24; // [esp+34h] [ebp-3Ch]
  double v25; // [esp+38h] [ebp-38h]
  int v26; // [esp+44h] [ebp-2Ch]
  int v27; // [esp+48h] [ebp-28h]
  int v28; // [esp+4Ch] [ebp-24h]
  int v29; // [esp+50h] [ebp-20h]
  int v30; // [esp+54h] [ebp-1Ch]
  char v31[12]; // [esp+58h] [ebp-18h] BYREF
  char v32[12]; // [esp+64h] [ebp-Ch] BYREF

  v1 = a1[17]; /*0x65bd14*/
  v2 = *((__int16 *)a1 + 32) - v1; /*0x65bd17*/
  result = *((__int16 *)a1 + 33) - v1; /*0x65bd19*/
  v21 = a1; /*0x65bd1c*/
  v4 = v2 + 2 * v1 + 1; /*0x65bd20*/
  v5 = result + 2 * v1 + 1; /*0x65bd24*/
  v27 = v2; /*0x65bd2a*/
  v23 = v4; /*0x65bd2e*/
  v26 = v5; /*0x65bd32*/
  for ( i = result; i < v5; ++i ) /*0x65bd3a*/
  {
    v20 = v2; /*0x65bd44*/
    if ( v2 < v23 ) /*0x65bd4a*/
    {
      while ( 1 ) /*0x65bd60*/
      {
        v19[0] = v20; /*0x65bd60*/
        v19[1] = i; /*0x65bd6e*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)a1 + 32); /*0x65bd78*/
        v7 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65bd8b*/
        v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v31); /*0x65bd94*/
        v9 = *v8; /*0x65bd97*/
        v10 = v8[1]; /*0x65bd9e*/
        v11 = v8[2]; /*0x65bda1*/
        v12 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v32); /*0x65bda9*/
        v13 = v12[1]; /*0x65bdb5*/
        v28 = v9 - *v12; /*0x65bdb8*/
        v14 = v12[2]; /*0x65bdbe*/
        v29 = v10 - v13; /*0x65bdc1*/
        v30 = v11 - v14; /*0x65bdcb*/
        v15 = Math::Sqrt((double)v28 * (double)v28 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v29 /*0x65bdf0*/
                                                                                               * (double)v29);
        v16 = Math::RoundToInt(v15); /*0x65bdf8*/
        v17 = 0.0; /*0x65be01*/
        LODWORD(v25) = v21[18]; /*0x65be0c*/
        if ( v16 <= SLODWORD(v25) ) /*0x65be10*/
        {
          v24 = LODWORD(v25) - v16; /*0x65be16*/
          v17 = (double)(LODWORD(v25) - v16) / (double)SLODWORD(v25) * (double)(int)v21[19]; /*0x65be22*/
        }
        v25 = v17 / (double)(int)v21[20]; /*0x65be32*/
        v18 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65be36*/
        CellClass::RadLevel_Decrease((int)v18, v25); /*0x65be47*/
        if ( ++v20 >= v23 ) /*0x65be5b*/
          break; /*0x65be5b*/
        a1 = v21; /*0x65bd52*/
      }
      v5 = v26; /*0x65be61*/
      v2 = v27; /*0x65be65*/
      a1 = v21; /*0x65be69*/
    }
    result = i + 1; /*0x65be71*/
  }
  return result; /*0x65be7e*/
}



// ==== 0x0065BE90  RadSiteClass::DecreaseLight  this=RadSiteClass  sig=csp ====
char __thiscall RadSiteClass::DecreaseLight(RadSiteClass *this)
{
  return TacticalClass::UpdateScrollTarget( /*0x65becc*/
           (int)this->LightSource,
           this->LightSource->LightIntensity - this->IntensityDecrement,
           this->RadTimeLeft * this->Tint[0] / this->RadDuration,
           this->RadTimeLeft * this->Tint[1] / this->RadDuration,
           this->RadTimeLeft * this->Tint[2] / this->RadDuration,
           0);
}



// ==== 0x0065BED0  RadSiteClass::ProcessEvent  this=RadSiteClass  sig=csp ====
void **__thiscall RadSiteClass::ProcessEvent(RadSiteClass *this, char a2)
{
  RadSiteClass::Constructor(this); /*0x65bed3*/
  if ( (a2 & 1) != 0 ) /*0x65bedd*/
    __3_YAXPAX_Z(this); /*0x65bee0*/
  return &this->AbstractClass; /*0x65beea*/
}



// ==== 0x0065BEF0  _DynamicVectorClass_PAVRadSiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::Destroy(_DynamicVectorClass_PAVRadSiteClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65bef6*/
  this->m_10 = 0; /*0x65bef9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x65bf00*/
  {
    __3_YAXPAX_Z(v2); /*0x65bf06*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65bf0e*/
  }
  BYTE1(this->m_C) = 0; /*0x65bf11*/
  this->m_8 = 0; /*0x65bf14*/
}



// ==== 0x0065BF20  _DynamicVectorClass_PAVRadSiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::GetItemIndex(_DynamicVectorClass_PAVRadSiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65bf20*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65bf35*/
  else
    return 0; /*0x65bf27*/
}



// ==== 0x0065BF40  _VectorClass_PAVRadSiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::Get(_VectorClass_PAVRadSiteClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x65bf4a*/
}



// ==== 0x0065BF50  _VectorClass_PAVRadSiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::Add(_VectorClass_PAVRadSiteClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x65bf52*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x65bf5d*/
  {
    v3 = 0; /*0x65bf5f*/
    if ( m_8 <= 0 ) /*0x65bf63*/
      return 1; /*0x65bf83*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x65bf65*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65bf6b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65bf74*/
    {
      ++v3; /*0x65bf76*/
      ++v4; /*0x65bf77*/
      if ( v3 >= m_8 ) /*0x65bf7c*/
        return 1; /*0x65bf7c*/
    }
  }
  return 0; /*0x65bf7e*/
}



// ==== 0x0065BF90  _VectorClass_PAVRadSiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::Release(_VectorClass_PAVRadSiteClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65bf9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x65bfa6*/
    if ( a3 ) /*0x65bfac*/
      v4 = a3; /*0x65bfc2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65bfbe*/
    LOBYTE(this->m_C) = 1; /*0x65bfc6*/
    if ( v4 ) /*0x65bfca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x65bfd5*/
      {
        m_8 = this->m_8; /*0x65bfdc*/
        if ( a2 < m_8 ) /*0x65bfe1*/
          m_8 = a2; /*0x65bfe3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65bfe9*/
          ++i; /*0x65bfee*/
        if ( BYTE1(this->m_C) ) /*0x65bffb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c006*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x65c00e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x65c017*/
      this->m_8 = a2; /*0x65c01f*/
      BYTE1(this->m_C) = a3 == 0; /*0x65c022*/
      return 1; /*0x65c028*/
    }
    else
    {
      return 0; /*0x65bfcf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadSiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65c032*/
    return 1; /*0x65c038*/
  }
}



// ==== 0x0065C040  _VectorClass_PAVRadSiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::Remove(_VectorClass_PAVRadSiteClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x65c04d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c053*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c05b*/
  }
  BYTE1(this->m_C) = 0; /*0x65c05e*/
  this->m_8 = 0; /*0x65c061*/
}



// ==== 0x0065C070  _VectorClass_PAVRadSiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::GetSize(_VectorClass_PAVRadSiteClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x65c070*/
    return 0; /*0x65c078*/
  m_8 = this->m_8; /*0x65c07e*/
  result = 0; /*0x65c081*/
  if ( m_8 <= 0 ) /*0x65c085*/
    return -1; /*0x65c09c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65c08b*/
  {
    if ( ++result >= m_8 ) /*0x65c09a*/
      return -1; /*0x65c09a*/
  }
  return result; /*0x65c07a*/
}



// ==== 0x0065C0B0  _VectorClass_PAVRadSiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::GetCapacity(_VectorClass_PAVRadSiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65c0b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65c0c5*/
  else
    return 0; /*0x65c0b7*/
}



// ==== 0x0065C0D0  _DynamicVectorClass_PAVRadSiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::SetCapacity(
        _DynamicVectorClass_PAVRadSiteClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65c0dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x65c0e2*/
    if ( a3 ) /*0x65c0e8*/
      v4 = a3; /*0x65c0fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65c0fa*/
    LOBYTE(this->m_C) = 1; /*0x65c102*/
    if ( !v4 ) /*0x65c106*/
      return 0; /*0x65c17a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x65c108*/
    {
      m_8 = this->m_8; /*0x65c10f*/
      if ( a2 < m_8 ) /*0x65c114*/
        m_8 = a2; /*0x65c116*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65c11c*/
        ++i; /*0x65c121*/
      if ( BYTE1(this->m_C) ) /*0x65c12e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c139*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x65c141*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x65c14a*/
    this->m_8 = a2; /*0x65c152*/
    BYTE1(this->m_C) = a3 == 0; /*0x65c155*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVRadSiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65c15e*/
  }
  v7 = this->m_8; /*0x65c161*/
  if ( v7 < this->m_10 ) /*0x65c169*/
    this->m_10 = v7; /*0x65c16b*/
  return 1; /*0x65c16e*/
}



// ==== 0x0065C180  _DynamicVectorClass_PAVRadSiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::FindItemIndex(_DynamicVectorClass_PAVRadSiteClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x65c180*/
  result = 0; /*0x65c183*/
  if ( m_10 <= 0 ) /*0x65c188*/
    return -1; /*0x65c19f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65c18e*/
  {
    if ( ++result >= m_10 ) /*0x65c19d*/
      return -1; /*0x65c19d*/
  }
  return result; /*0x65c1a2*/
}



// ==== 0x0065C1B0  _VectorClass_PAVRadSiteClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadSiteClass::QueryInterface(_VectorClass_PAVRadSiteClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65c1b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadSiteClass *>::`vftable'; /*0x65c1b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65c1c0*/
  {
    __3_YAXPAX_Z(v3); /*0x65c1c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c1d0*/
  }
  BYTE1(this->m_C) = 0; /*0x65c1db*/
  this->m_8 = 0; /*0x65c1e1*/
  if ( (a2 & 1) != 0 ) /*0x65c1e8*/
    __3_YAXPAX_Z(this); /*0x65c1eb*/
  return this->__pad_0; /*0x65c1f5*/
}



// ==== 0x0065C200  _DynamicVectorClass_PAVRadSiteClass::Constructor_VectorClass_RadSiteClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(
        _DynamicVectorClass_PAVRadSiteClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65c203*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadSiteClass *>::`vftable'; /*0x65c206*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65c210*/
  {
    __3_YAXPAX_Z(v3); /*0x65c218*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c220*/
  }
  BYTE1(this->m_C) = 0; /*0x65c22b*/
  this->m_8 = 0; /*0x65c231*/
  if ( (a2 & 1) != 0 ) /*0x65c238*/
    __3_YAXPAX_Z(this); /*0x65c23b*/
  return this->__pad_0; /*0x65c245*/
}



// ==== 0x0065C250  RAMFileClass::WinMain_Helper_65C250  this=RAMFileClass  sig=csp ====
_BYTE *__thiscall WinMain_Helper_65C250(RAMFileClass *this, int a2, int Size)
{
  this->__pad_0[4] = 0; /*0x65c25f*/
  this->RAMFileClass_field_0x8 = (AbstractClass *)a2; /*0x65c262*/
  this->RAMFileClass_field_0xC = (AbstractClass *)Size; /*0x65c265*/
  this->RAMFileClass_field_0x10 = (AbstractClass *)Size; /*0x65c268*/
  *((_DWORD *)this + 5) = 0; /*0x65c26b*/
  this->u8_6 = 1; /*0x65c26e*/
  *((_BYTE *)this + 28) = 0; /*0x65c275*/
  *((_BYTE *)this + 29) = 0; /*0x65c278*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c27b*/
  if ( !a2 && Size > 0 ) /*0x65c285*/
  {
    this->RAMFileClass_field_0x8 = (AbstractClass *)__2_YAPAXI_Z(Size); /*0x65c290*/
    *((_BYTE *)this + 29) = 1; /*0x65c293*/
  }
  return this->__pad_0; /*0x65c299*/
}



// ==== 0x0065C2A0  RAMFileClass::WinMain_Helper_65C2A0  this=RAMFileClass  sig=csp ====
void __thiscall WinMain_Helper_65C2A0(RAMFileClass *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 29); /*0x65c2a3*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c2a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c2ae*/
  if ( v2 ) /*0x65c2b2*/
  {
    __3_YAXPAX_Z(this->RAMFileClass_field_0x8); /*0x65c2b8*/
    this->RAMFileClass_field_0x8 = 0; /*0x65c2c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c2c7*/
  }
  *(_DWORD *)this->__pad_0 = &FileClass::`vftable'; /*0x65c2cb*/
}



// ==== 0x0065C2E0  RAMFileClass::checkTeamMembership  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamMembership(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c2e5*/
    return 0; /*0x65c2fa*/
  this->RAMFileClass_field_0x10 = 0; /*0x65c2ec*/
  return 1; /*0x65c2f8*/
}



// ==== 0x0065C300  RAMFileClass::nullsub_0_1  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_1(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->RAMFileClass_field_0x10 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/
}



// ==== 0x0065C320  RAMFileClass::updateTeamState  this=RAMFileClass  sig=csp ====
char __stdcall AbstractClass::updateTeamState(RAMFileClass *this)
{
  return 1; /*0x65c322*/
}



// ==== 0x0065C330  RAMFileClass::processTeamOrder  this=RAMFileClass  sig=csp ====
char __thiscall AbstractClass::processTeamOrder(RAMFileClass *this)
{
  return *((_BYTE *)this + 28); /*0x65c333*/
}



// ==== 0x0065C340  RAMFileClass::dispatchTeamEvent  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::dispatchTeamEvent(RAMFileClass *this, int a2, int a3)
{
  return (*(int (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, a3); /*0x65c34a*/
}



// ==== 0x0065C350  RAMFileClass::nullsub_0_2  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_2(RAMFileClass *this, int a2)
{
  if ( !this->RAMFileClass_field_0x8 /*0x65c35c*/
    || (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) )
  {
    return 0; /*0x65c391*/
  }
  *((_DWORD *)this + 5) = 0; /*0x65c367*/
  this->u8_6 = a2; /*0x65c36e*/
  *((_BYTE *)this + 28) = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->RAMFileClass_field_0x10 = 0; /*0x65c37a*/
  return (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x65c38d*/
}



// ==== 0x0065C3A0  RAMFileClass::nullsub_0_3  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_3(RAMFileClass *this, void *a2, signed int Size)
{
  signed int v4; // edi
  char v5; // bl
  int v6; // eax

  if ( !this->RAMFileClass_field_0x8 ) /*0x65c3a6*/
    return 0; /*0x65c3a6*/
  if ( !a2 ) /*0x65c3b3*/
    return 0; /*0x65c3b3*/
  v4 = Size; /*0x65c3b5*/
  if ( !Size ) /*0x65c3bb*/
    return 0; /*0x65c3bb*/
  v5 = 0; /*0x65c3bf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c3c1*/
  {
    if ( (this->u8_6 & 1) != 0 ) /*0x65c3d9*/
      goto LABEL_7; /*0x65c3d9*/
    return 0; /*0x65c418*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 1); /*0x65c3ce*/
  v5 = 1; /*0x65c3d1*/
LABEL_7:
  v6 = *((_DWORD *)this + 5); /*0x65c3db*/
  if ( Size >= (int)this->RAMFileClass_field_0x10 - v6 ) /*0x65c3e5*/
    v4 = (signed int)this->RAMFileClass_field_0x10 - v6; /*0x65c3e7*/
  memcpy(a2, (char *)this->RAMFileClass_field_0x8 + v6, v4); /*0x65c3f1*/
  *((_DWORD *)this + 5) += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c409*/
  return v4; /*0x65c40e*/
}



// ==== 0x0065C420  RAMFileClass::nullsub_0_4  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_4(RAMFileClass *this, int a2, int a3)
{
  AbstractClass *RAMFileClass_field_0x10; // edx
  AbstractClass *RAMFileClass_field_0xC; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->RAMFileClass_field_0x8 /*0x65c42c*/
    || !(*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) )
  {
    return *((_DWORD *)this + 5); /*0x65c494*/
  }
  RAMFileClass_field_0x10 = this->RAMFileClass_field_0x10; /*0x65c436*/
  RAMFileClass_field_0xC = RAMFileClass_field_0x10; /*0x65c43b*/
  if ( (this->u8_6 & 2) != 0 ) /*0x65c43d*/
    RAMFileClass_field_0xC = this->RAMFileClass_field_0xC; /*0x65c43f*/
  switch ( a3 ) /*0x65c449*/
  {
    case 0: /*0x65c449*/
      v6 = a2; /*0x65c469*/
      goto LABEL_11; /*0x65c469*/
    case 1: /*0x65c449*/
      *((_DWORD *)this + 5) += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = (int)RAMFileClass_field_0xC + a2; /*0x65c455*/
LABEL_11:
      *((_DWORD *)this + 5) = v6; /*0x65c46d*/
      break;
  }
  if ( *((int *)this + 5) < 0 ) /*0x65c475*/
    *((_DWORD *)this + 5) = 0; /*0x65c477*/
  if ( *((_DWORD *)this + 5) > (int)RAMFileClass_field_0xC ) /*0x65c481*/
    *((_DWORD *)this + 5) = RAMFileClass_field_0xC; /*0x65c483*/
  result = *((_DWORD *)this + 5); /*0x65c486*/
  if ( result > (int)RAMFileClass_field_0x10 ) /*0x65c48b*/
    this->RAMFileClass_field_0x10 = (AbstractClass *)result; /*0x65c48d*/
  return result; /*0x65c490*/
}



// ==== 0x0065C4A0  RAMFileClass::checkTeamObjective  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamObjective(RAMFileClass *this)
{
  return (int)this->RAMFileClass_field_0x10; /*0x65c4a3*/
}



// ==== 0x0065C4B0  RAMFileClass::validateTeamConfig  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::validateTeamConfig(RAMFileClass *this, void *Src, signed int Size)
{
  char *v4; // edi
  char v5; // bl
  int v6; // edx
  AbstractClass *RAMFileClass_field_0x10; // ecx
  AbstractClass *v8; // edx

  if ( !this->RAMFileClass_field_0x8 ) /*0x65c4b6*/
    return 0; /*0x65c4b6*/
  if ( !Src ) /*0x65c4c3*/
    return 0; /*0x65c4c3*/
  v4 = (char *)Size; /*0x65c4c5*/
  if ( !Size ) /*0x65c4cb*/
    return 0; /*0x65c4cb*/
  v5 = 0; /*0x65c4cf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c4d1*/
  {
    if ( (this->u8_6 & 2) != 0 ) /*0x65c4e9*/
      goto LABEL_7; /*0x65c4e9*/
    return 0; /*0x65c537*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 2); /*0x65c4de*/
  v5 = 1; /*0x65c4e1*/
LABEL_7:
  v6 = *((_DWORD *)this + 5); /*0x65c4eb*/
  if ( Size >= (int)this->RAMFileClass_field_0xC - v6 ) /*0x65c4f5*/
    v4 = (char *)this->RAMFileClass_field_0xC - v6; /*0x65c4f7*/
  memcpy((char *)this->RAMFileClass_field_0x8 + *((_DWORD *)this + 5), Src, (size_t)v4); /*0x65c504*/
  RAMFileClass_field_0x10 = this->RAMFileClass_field_0x10; /*0x65c50c*/
  v8 = (AbstractClass *)&v4[*((_DWORD *)this + 5)]; /*0x65c50f*/
  *((_DWORD *)this + 5) = v8; /*0x65c516*/
  if ( (int)v8 > (int)RAMFileClass_field_0x10 ) /*0x65c51b*/
    this->RAMFileClass_field_0x10 = v8; /*0x65c51d*/
  if ( v5 ) /*0x65c522*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c528*/
  return (int)v4; /*0x65c52d*/
}



// ==== 0x0065C540  RAMFileClass::resetTeamState  this=RAMFileClass  sig=csp ====
void __thiscall AbstractClass::resetTeamState(RAMFileClass *this)
{
  *((_BYTE *)this + 28) = 0; /*0x65c540*/
}



// ==== 0x0065C550  RAMFileClass::nullsub_0_5  this=RAMFileClass  sig=csp ====
char *nullsub_0_5(RAMFileClass *this)
{
  return aUnknown_1; /*0x65c555*/
}



// ==== 0x0065C560  RAMFileClass::nullsub_0_6  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_6(RAMFileClass *this, int a2)
{
  return (*(int (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x65c565*/
}



// ==== 0x0065C570  RAMFileClass::nullsub_0_7  this=RAMFileClass  sig=csp ====
int nullsub_0_7(RAMFileClass *this)
{
  return 0; /*0x65c572*/
}



// ==== 0x0065C580  RAMFileClass::nullsub_0_8  this=RAMFileClass  sig=csp ====
char __stdcall nullsub_0_8(RAMFileClass *this)
{
  return 1; /*0x65c582*/
}



// ==== 0x0065C590  RAMFileClass::nullsub_0_9  this=RAMFileClass  sig=csp ====
void __stdcall nullsub_0_9(RAMFileClass *this, int a2, int a3)
{
  ; /*0x65c590*/
}



// ==== 0x0065C5A0  RAMFileClass::nullsub_0_10  this=RAMFileClass  sig=csp ====
void *__thiscall nullsub_0_10(RAMFileClass *this, char a2)
{
  char v3; // al

  v3 = *((_BYTE *)this + 29); /*0x65c5a3*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c5a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c5ae*/
  if ( v3 ) /*0x65c5b2*/
  {
    __3_YAXPAX_Z(this->RAMFileClass_field_0x8); /*0x65c5b8*/
    this->RAMFileClass_field_0x8 = 0; /*0x65c5c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c5c7*/
  }
  *(_DWORD *)this->__pad_0 = &FileClass::`vftable'; /*0x65c5cf*/
  if ( (a2 & 1) != 0 ) /*0x65c5d7*/
    __3_YAXPAX_Z(this); /*0x65c5da*/
  return this; /*0x65c5e4*/
}



// ==== 0x0065C5F0  FileClass::StubReturnFalse  this=FileClass  sig=csp ====
int FileClass::StubReturnFalse(FileClass *this)
{
  return 0; /*0x65c5f2*/
}



// ==== 0x0065C600  FileClass::Stub  this=FileClass  sig=csp ====
char __stdcall FileClass::Stub(FileClass *this)
{
  return 0; /*0x65c602*/
}



// ==== 0x0065C610  FileClass::processAITrigger  this=FileClass  sig=csp ====
_DWORD *__thiscall AbstractClass::processAITrigger(FileClass *this, char a2)
{
  *this = (FileClass)&FileClass::`vftable'; /*0x65c619*/
  if ( (a2 & 1) != 0 ) /*0x65c61f*/
    __3_YAXPAX_Z(this); /*0x65c622*/
  return this; /*0x65c62c*/
}



// ==== 0x0065C630  ObjectClass::unknown_libname_28  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_28(_DWORD *this, int a2)
{
  *this = a2; /*0x65c636*/
  return this; /*0x65c638*/
}



// ==== 0x0065C6D0  ObjectClass::SeedInitRNG  this=ObjectClass  sig=csp ====
_DWORD *__thiscall SeedInitRNG(ObjectClass *this, int a2)
{
  int v2; // eax
  int v3; // ebp
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  void **p_vtable3; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x65c6d3*/
  this->? = 0; /*0x65c6da*/
  this->? = (void *)103; /*0x65c6dd*/
  p_vtable3 = &this->?; /*0x65c6ea*/
  v11 = 250; /*0x65c6ee*/
  while ( 1 ) /*0x65c6fc*/
  {
    v3 = a2; /*0x65c6fc*/
    v4 = v2; /*0x65c700*/
    v5 = 0; /*0x65c703*/
    v13 = v2 + 1; /*0x65c705*/
    do /*0x65c74f*/
    {
      v6 = v4; /*0x65c70f*/
      v7 = v4 ^ dword_839644[v5++]; /*0x65c711*/
      v8 = v3 /*0x65c746*/
         ^ ((unsigned __int16)v7 * (v7 >> 16)
          + (dword_839690[v5]
           ^ ((((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) << 16)
            | (((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) >> 16))));
      v4 = v8; /*0x65c74b*/
      v3 = v6; /*0x65c74d*/
    }
    while ( v5 < 4 ); /*0x65c74f*/
    *p_vtable3++ = (void *)v8; /*0x65c755*/
    if ( !--v11 ) /*0x65c767*/
      break; /*0x65c767*/
    v2 = v13; /*0x65c6f8*/
  }
  LOBYTE(this->AbstractClass) = 0; /*0x65c770*/
  return &this->AbstractClass; /*0x65c76d*/
}



// ==== 0x0065C780  Random::State  this=Random  sig=csp ====
int __thiscall Random::State(Random *this)
{
  int result; // eax
  int Random_field_0x04; // edx
  int v3; // esi

  if ( this->__pad_0[0] ) /*0x65c780*/
    return 0; /*0x65c785*/
  *(&this->Random_field_0x0C + this->Random_field_0x04) ^= *(&this->Random_field_0x0C + this->Random_field_0x08); /*0x65c79d*/
  Random_field_0x04 = this->Random_field_0x04; /*0x65c79f*/
  result = *(&this->Random_field_0x0C + Random_field_0x04++); /*0x65c7a5*/
  v3 = this->Random_field_0x08 + 1; /*0x65c7aa*/
  this->Random_field_0x04 = Random_field_0x04; /*0x65c7b1*/
  this->Random_field_0x08 = v3; /*0x65c7b4*/
  if ( Random_field_0x04 >= 250 ) /*0x65c7b7*/
    this->Random_field_0x04 = 0; /*0x65c7b9*/
  if ( v3 >= 250 ) /*0x65c7c7*/
    this->Random_field_0x08 = 0; /*0x65c7c9*/
  return result; /*0x65c787*/
}



// ==== 0x0065C7E0  Random::Range  this=Random  sig=csp ====
int __thiscall Random::Range(Random *this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int i; // ebp
  int v12; // eax
  int Random_field_0x04; // eax
  int v14; // esi
  int v15; // ecx

  result = a2; /*0x65c7e0*/
  v5 = a3; /*0x65c7e6*/
  v6 = a2; /*0x65c7ed*/
  if ( a2 != a3 ) /*0x65c7ef*/
  {
    if ( a2 > a3 ) /*0x65c7f5*/
    {
      v6 = a3; /*0x65c7f7*/
      v5 = a2; /*0x65c7f9*/
    }
    v7 = v5 - v6; /*0x65c7ff*/
    v8 = v5 - v6 >= 0; /*0x65c801*/
    v9 = 31; /*0x65c807*/
    if ( v8 ) /*0x65c80c*/
    {
      do /*0x65c81c*/
      {
        if ( v9 <= 0 ) /*0x65c810*/
          break; /*0x65c810*/
        --v9; /*0x65c812*/
      }
      while ( ((1 << v9) & v7) == 0 ); /*0x65c81c*/
    }
    v10 = v7 + 1; /*0x65c824*/
    for ( i = ~(-1 << (v9 + 1)); v10 > v7; v10 = i & v12 ) /*0x65c82b*/
    {
      if ( this->__pad_0[0] ) /*0x65c82e*/
      {
        v12 = 0; /*0x65c833*/
      }
      else
      {
        *(&this->Random_field_0x0C + this->Random_field_0x04) ^= *(&this->Random_field_0x0C + this->Random_field_0x08); /*0x65c84b*/
        Random_field_0x04 = this->Random_field_0x04; /*0x65c84d*/
        v14 = *(&this->Random_field_0x0C + Random_field_0x04++); /*0x65c853*/
        v15 = this->Random_field_0x08 + 1; /*0x65c858*/
        this->Random_field_0x04 = Random_field_0x04; /*0x65c85e*/
        this->Random_field_0x08 = v15; /*0x65c861*/
        if ( Random_field_0x04 >= 250 ) /*0x65c864*/
          this->Random_field_0x04 = 0; /*0x65c866*/
        if ( v15 >= 250 ) /*0x65c873*/
          this->Random_field_0x08 = 0; /*0x65c875*/
        v12 = v14; /*0x65c87c*/
      }
    }
    return v6 + v10; /*0x65c886*/
  }
  return result; /*0x65c889*/
}



// ==== 0x0065C890  ObjectClass::method_65C890  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_65C890(ObjectClass *this, int a2, int a3)
{
  this->AbstractClass = (void *)a2; /*0x65c89a*/
  this->? = (void *)a3; /*0x65c89c*/
  return &this->AbstractClass; /*0x65c89f*/
}



// ==== 0x0065C8B0  RandomStraw::AdvanceState  this=RandomStraw  sig=csp ====
int __thiscall RandomStraw::AdvanceState(RandomStraw *this)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  unsigned __int16 v6; // dx

  result = this->RandomStraw_field_0x04; /*0x65c8b0*/
  v2 = *(_DWORD *)this->__pad_0; /*0x65c8ba*/
  this->RandomStraw_field_0x04 = result + 1; /*0x65c8bc*/
  v3 = 0; /*0x65c8bf*/
  do /*0x65c907*/
  {
    v4 = result; /*0x65c8c7*/
    v5 = result ^ dword_839644[v3++]; /*0x65c8c9*/
    v6 = v5; /*0x65c8ce*/
    v5 >>= 16; /*0x65c8d0*/
    result = v2 ^ (v6 * v5 + (dword_839690[v3] ^ (((v6 * v6 + ~(v5 * v5)) << 16) | ((v6 * v6 + ~(v5 * v5)) >> 16)))); /*0x65c903*/
    v2 = v4; /*0x65c905*/
  }
  while ( v3 < 4 ); /*0x65c907*/
  return result; /*0x65c909*/
}



// ==== 0x0065C910  ObjectClass::method_65C910  this=ObjectClass  sig=csp ====
int __thiscall sub_65C910(ObjectClass *this, int a2, int a3)
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

  result = a2; /*0x65c913*/
  v5 = a3; /*0x65c919*/
  v6 = a2; /*0x65c91e*/
  v7 = a2 == a3; /*0x65c920*/
  v8 = a2 <= a3; /*0x65c920*/
  v19 = this; /*0x65c922*/
  v23 = a2; /*0x65c926*/
  if ( !v7 ) /*0x65c92a*/
  {
    if ( !v8 ) /*0x65c930*/
    {
      v6 = v5; /*0x65c932*/
      v5 = a2; /*0x65c934*/
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
        vtable1 = (unsigned int)this->?; /*0x65c980*/
        v14 = (unsigned int)vtable0; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        this->? = (void *)(vtable1 + 1); /*0x65c98c*/
        do /*0x65c9d5*/
        {
          v16 = vtable1; /*0x65c995*/
          v17 = vtable1 ^ dword_839644[v15++]; /*0x65c997*/
          v18 = v14 /*0x65c9cc*/
              ^ ((unsigned __int16)v17 * (v17 >> 16)
               + (dword_839690[v15]
                ^ ((((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) << 16)
                 | (((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) >> 16))));
          vtable1 = v18; /*0x65c9d1*/
          v14 = v16; /*0x65c9d3*/
        }
        while ( v15 < 4 ); /*0x65c9d5*/
        v12 = v20 & v18; /*0x65c9df*/
        if ( (v20 & v18) <= v21 ) /*0x65c9e3*/
          break; /*0x65c9e3*/
        this = v19; /*0x65c97c*/
      }
      v6 = v23; /*0x65c9e5*/
    }
    return v12 + v6; /*0x65c9eb*/
  }
  return result; /*0x65c9ef*/
}



// ==== 0x0065CA00  RawFileClass::Dtor  this=RawFileClass  sig=csp ====
int __thiscall RawFileClass::Dtor(BufferIOFileClass *this)
{
  int result; // eax
  FileClass v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65ca03*/
  result = RawFileClass::Write(this); /*0x65ca09*/
  if ( (_BYTE)result ) /*0x65ca11*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65ca17*/
    if ( !result ) /*0x65ca1f*/
    {
      v3 = this->FileClass; /*0x65ca25*/
      v5 = *(_DWORD *)this->FileNameAllocated; /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      result = (*(int (__thiscall **)(BufferIOFileClass *, DWORD, _DWORD, int))(*(_DWORD *)&v3 + 64))( /*0x65ca32*/
                 this,
                 LastError,
                 0,
                 v5);
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca36*/
  }
  LOBYTE(result) = this->CacheReadAhead[0]; /*0x65ca3d*/
  if ( (_BYTE)result ) /*0x65ca42*/
  {
    result = *(_DWORD *)this->FileNameAllocated; /*0x65ca44*/
    if ( result ) /*0x65ca49*/
    {
      result = free(*(void **)this->FileNameAllocated); /*0x65ca4c*/
      *(_DWORD *)this->FileNameAllocated = 0; /*0x65ca54*/
      this->CacheReadAhead[0] = 0; /*0x65ca5b*/
    }
  }
  this->FileClass = (FileClass)&FileClass::`vftable'; /*0x65ca5f*/
  return result; /*0x65ca65*/
}



// ==== 0x0065CA70  RawFileClass::StubReturnFalse  this=RawFileClass  sig=csp ====
void __stdcall BufferIOFileClass::StubReturnFalse(RawFileClass *this, int a2, int a3)
{
  ; /*0x65ca70*/
}



// ==== 0x0065CA80  RawFileClass::Construct  this=RawFileClass  sig=csp ====
_DWORD *__thiscall RawFileClass::Construct(BufferIOFileClass *this, int a2)
{
  this->FileName = -1; /*0x65ca87*/
  *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
  LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
  this->FileSize = 0; /*0x65ca94*/
  this->Handle = 0; /*0x65ca97*/
  *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
  *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
  *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
  this->CacheReadAhead[0] = 0; /*0x65caa5*/
  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
  return &this->FileClass; /*0x65caae*/
}



// ==== 0x0065CAC0  RawFileClass::SetName  this=RawFileClass  sig=csp ====
char *__thiscall FileClass::SetName(BufferIOFileClass *this, char *Source)
{
  void *v3; // eax
  char *result; // eax

  v3 = *(void **)this->FileNameAllocated; /*0x65cac4*/
  if ( v3 && this->CacheReadAhead[0] ) /*0x65cacb*/
  {
    free(v3); /*0x65cad3*/
    *(_DWORD *)this->FileNameAllocated = 0; /*0x65cadb*/
    this->CacheReadAhead[0] = 0; /*0x65cae2*/
  }
  if ( !Source ) /*0x65caec*/
    return 0; /*0x65caef*/
  this->Handle = 0; /*0x65caf6*/
  this->FileName = -1; /*0x65cafd*/
  result = _strdup(Source); /*0x65cb04*/
  *(_DWORD *)this->FileNameAllocated = result; /*0x65cb0c*/
  if ( result ) /*0x65cb11*/
  {
    this->CacheReadAhead[0] = 1; /*0x65cb26*/
  }
  else
  {
    (*(void (__thiscall **)(BufferIOFileClass *, int, _DWORD, char *))(*(_DWORD *)&this->FileClass + 64))( /*0x65cb1c*/
      this,
      12,
      0,
      Source);
    return 0; /*0x65cb20*/
  }
  return result; /*0x65caee*/
}



// ==== 0x0065CB30  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall RawFileClass::Close(RawFileClass *this, int a2, int a3)
{
  (*(void (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 8))(this, a2); /*0x65cb3c*/
  return (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, a3); /*0x65cb4b*/
}



// ==== 0x0065CB50  RawFileClass::Open2  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Open2(RawFileClass *this, const CHAR *a2)
{
  const CHAR *v3; // eax
  HANDLE FileA; // eax

  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cb55*/
  v3 = *(const CHAR **)&this->FileNameAllocated; /*0x65cb58*/
  if ( !v3 ) /*0x65cb5d*/
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))(this, 2, 0, 0); /*0x65cb67*/
    return 0; /*0x65cb6d*/
  }
  this->FileSize = (int)a2; /*0x65cb74*/
  if ( a2 == (const CHAR *)1 ) /*0x65cb78*/
  {
    FileA = CreateFileA(v3, 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x65cbbb*/
  }
  else if ( a2 == (const CHAR *)2 ) /*0x65cb7b*/
  {
    FileA = CreateFileA(v3, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x65cba6*/
  }
  else
  {
    if ( a2 != (const CHAR *)3 ) /*0x65cb7e*/
      goto LABEL_10; /*0x65cb7e*/
    FileA = CreateFileA(v3, 0xC0000000, 0, 0, 4u, 0x80u, 0); /*0x65cb92*/
  }
  *(_DWORD *)this->FileTimeDateLo = FileA; /*0x65cbc1*/
LABEL_10:
  if ( this->Handle || this->FileName != (void *)-1 ) /*0x65cbcf*/
    (*(void (__thiscall **)(RawFileClass *, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 40))(this, 0, 0); /*0x65cbd9*/
  return *(_DWORD *)this->FileTimeDateLo != -1; /*0x65cb6c*/
}



// ==== 0x0065CBF0  RawFileClass::Open  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Open(RawFileClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  result = *(_DWORD *)&this->FileNameAllocated; /*0x65cbf4*/
  if ( !result ) /*0x65cbf9*/
  {
    LOBYTE(result) = 0; /*0x65cbfc*/
    return result; /*0x65cbff*/
  }
  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cc06*/
  if ( (_BYTE)result ) /*0x65cc0b*/
    goto LABEL_14; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    result = (int)CreateFileA(*(LPCSTR *)&this->FileNameAllocated, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x65cc59*/
    *(_DWORD *)this->FileTimeDateLo = result; /*0x65cc62*/
    if ( result == -1 ) /*0x65cc65*/
    {
      LOBYTE(result) = 0; /*0x65cc68*/
      return result; /*0x65cc6b*/
    }
    result = CloseHandle((HANDLE)result); /*0x65cc6f*/
    if ( result ) /*0x65cc77*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *(_DWORD *)this->FileClass; /*0x65cc7c*/
    v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(this, (const CHAR *)1); /*0x65cc1d*/
  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cc26*/
  if ( (_BYTE)result ) /*0x65cc2b*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65cc31*/
    if ( result ) /*0x65cc39*/
    {
LABEL_13:
      *(_DWORD *)this->FileTimeDateLo = -1; /*0x65cc8d*/
      goto LABEL_14; /*0x65cc8d*/
    }
    v4 = *(_DWORD *)this->FileClass; /*0x65cc3e*/
    v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65cc40*/
LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    result = (*(int (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v6); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
LABEL_14:
  LOBYTE(result) = 1; /*0x65cc94*/
  return result; /*0x65cbfb*/
}



// ==== 0x0065CCA0  RawFileClass::CloseHandle  this=RawFileClass  sig=csp ====
int __thiscall FileClass::CloseHandle(RawFileClass *this)
{
  int result; // eax
  int v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cca5*/
  if ( (_BYTE)result ) /*0x65ccaa*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65ccb0*/
    if ( !result ) /*0x65ccb8*/
    {
      v3 = *(_DWORD *)this->FileClass; /*0x65ccbe*/
      v5 = *(_DWORD *)&this->FileNameAllocated; /*0x65ccc0*/
      LastError = GetLastError(); /*0x65ccc2*/
      result = (*(int (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v3 + 64))(this, LastError, 0, v5); /*0x65cccb*/
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65cccf*/
  }
  return result; /*0x65ccd6*/
}



// ==== 0x0065CCE0  RawFileClass::Read  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Read(RawFileClass *this, char *lpBuffer, signed int nNumberOfBytesToRead)
{
  DWORD v4; // ebx
  int result; // eax
  int v6; // eax
  char *v7; // edi
  int v9; // ebx
  DWORD LastError; // eax
  void *v11; // [esp-1Ch] [ebp-2Ch]
  int v12; // [esp-Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]
  DWORD nNumberOfBytesToReada; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x65cce7*/
  NumberOfBytesRead = 0; /*0x65cce9*/
  v14 = 0; /*0x65cced*/
  if ( !(*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65ccf3*/
  {
    result = (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 1); /*0x65cd00*/
    if ( !result ) /*0x65cd05*/
      return result; /*0x65cd05*/
    v14 = 1; /*0x65cd0f*/
  }
  if ( this->FileName == (void *)-1 ) /*0x65cd1e*/
  {
    v7 = (char *)nNumberOfBytesToRead; /*0x65cd3b*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(RawFileClass *, _DWORD, int))(*(_DWORD *)this->FileClass + 40))(this, 0, 1); /*0x65cd27*/
    v7 = (char *)nNumberOfBytesToRead; /*0x65cd2d*/
    if ( nNumberOfBytesToRead >= (int)this->FileName - v6 ) /*0x65cd35*/
      v7 = (char *)this->FileName - v6; /*0x65cd37*/
  }
  while ( (int)v7 > 0 ) /*0x65cd41*/
  {
    v11 = *(void **)this->FileTimeDateLo; /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, lpBuffer, (DWORD)v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
    {
      lpBuffer += NumberOfBytesRead; /*0x65cd98*/
      v7 -= NumberOfBytesRead; /*0x65cd9a*/
      v4 += NumberOfBytesRead; /*0x65cd9c*/
      if ( !NumberOfBytesRead ) /*0x65cda0*/
        break; /*0x65cda0*/
    }
    else
    {
      lpBuffer += NumberOfBytesRead; /*0x65cd6b*/
      v7 -= NumberOfBytesRead; /*0x65cd6d*/
      v4 += NumberOfBytesRead; /*0x65cd6f*/
      nNumberOfBytesToReada = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      v9 = *(_DWORD *)this->FileClass; /*0x65cd81*/
      v12 = *(_DWORD *)&this->FileNameAllocated; /*0x65cd83*/
      LastError = GetLastError(); /*0x65cd86*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, int, int))(v9 + 64))(this, LastError, 1, v12); /*0x65cd8f*/
      v4 = nNumberOfBytesToReada; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/
}



// ==== 0x0065CDD0  RawFileClass::Write2  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Write2(RawFileClass *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  int v5; // edi
  DWORD LastError; // eax
  signed int v7; // eax
  int v8; // ebp
  DWORD v9; // eax
  DWORD v10; // eax
  int v11; // edi
  DWORD v12; // eax
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+28h] [ebp-8h]
  DWORD NumberOfBytesWritten; // [esp+2Ch] [ebp-4h] BYREF

  NumberOfBytesWritten = 0; /*0x65cdd6*/
  v16 = 0; /*0x65cdde*/
  if ( !(*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cde8*/
  {
    result = (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 2); /*0x65cdf5*/
    if ( !result ) /*0x65cdfa*/
      return result; /*0x65cdfa*/
    v16 = 1; /*0x65ce03*/
  }
  if ( !WriteFile(*(HANDLE *)this->FileTimeDateLo, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, 0) ) /*0x65ce22*/
  {
    v5 = *(_DWORD *)this->FileClass; /*0x65ce35*/
    v14 = *(_DWORD *)&this->FileNameAllocated; /*0x65ce37*/
    LastError = GetLastError(); /*0x65ce3a*/
    (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v5 + 64))(this, LastError, 0, v14); /*0x65ce3f*/
  }
  if ( this->FileName == (void *)-1 ) /*0x65ce46*/
    goto LABEL_19; /*0x65ce46*/
  if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65ce51*/
  {
    v7 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, 0, 0, 1u); /*0x65ce79*/
    if ( v7 != -1 ) /*0x65ce7e*/
      goto LABEL_12; /*0x65ce7e*/
    v8 = *(_DWORD *)this->FileClass; /*0x65ce83*/
    v13 = *(_DWORD *)&this->FileNameAllocated; /*0x65ce85*/
    v9 = GetLastError(); /*0x65ce88*/
    (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v8 + 64))(this, v9, 0, v13); /*0x65ce8d*/
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65ce6a*/
      this,
      9,
      0,
      *(_DWORD *)&this->FileNameAllocated);
  }
  v7 = 0; /*0x65ce90*/
LABEL_12:
  if ( v7 > (int)((int)this->FileName + (unsigned int)this->Handle) ) /*0x65ce9d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cea3*/
    {
      v10 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, 0, 0, 1u); /*0x65cec5*/
      if ( v10 != -1 ) /*0x65ceca*/
      {
LABEL_18:
        this->FileName = (void *)(v10 - (unsigned int)this->Handle); /*0x65cede*/
        goto LABEL_19; /*0x65cee1*/
      }
      v11 = *(_DWORD *)this->FileClass; /*0x65cecf*/
      v15 = *(_DWORD *)&this->FileNameAllocated; /*0x65ced1*/
      v12 = GetLastError(); /*0x65ced4*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v11 + 64))(this, v12, 0, v15); /*0x65ced9*/
    }
    else
    {
      (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65ceb6*/
        this,
        9,
        0,
        *(_DWORD *)&this->FileNameAllocated);
    }
    v10 = 0; /*0x65cedc*/
    goto LABEL_18; /*0x65cedc*/
  }
LABEL_19:
  if ( v16 ) /*0x65ceec*/
    (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cef2*/
  return NumberOfBytesWritten; /*0x65cdfc*/
}



// ==== 0x0065CF00  RawFileClass::Seek  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Seek(RawFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  char *FileName; // ecx
  DWORD v5; // edi
  char *v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  int v9; // edi
  DWORD v10; // eax
  void *Handle; // edi
  int result; // eax
  DWORD v13; // eax
  int v14; // edi
  DWORD v15; // eax
  void *v16; // ecx
  LONG v17; // edi
  DWORD v18; // eax
  int v19; // edi
  DWORD LastError; // eax
  DWORD v21; // edi
  int v22; // edi
  DWORD v23; // eax
  int v24; // [esp-Ch] [ebp-14h]
  int v25; // [esp-Ch] [ebp-14h]
  int v26; // [esp-Ch] [ebp-14h]
  int v27; // [esp-4h] [ebp-Ch]

  FileName = (char *)this->FileName; /*0x65cf04*/
  if ( FileName != (char *)-1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = &FileName[(unsigned int)this->Handle + lDistanceToMove]; /*0x65cf2d*/
      }
      else
      {
        v6 = (char *)lDistanceToMove; /*0x65cf40*/
      }
    }
    else
    {
      v7 = lDistanceToMove; /*0x65cf31*/
      if ( lDistanceToMove > (int)FileName ) /*0x65cf37*/
        v7 = (LONG)FileName; /*0x65cf39*/
      v6 = (char *)this->Handle + v7; /*0x65cf3b*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cf48*/
    {
      if ( v5 ) /*0x65cf6b*/
      {
        if ( v5 == 1 ) /*0x65cf6e*/
        {
          v5 = 1; /*0x65cf7a*/
        }
        else if ( v5 == 2 ) /*0x65cf71*/
        {
          v5 = 2; /*0x65cf73*/
        }
      }
      else
      {
        v5 = 0; /*0x65cf81*/
      }
      v8 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
LABEL_20:
        Handle = this->Handle; /*0x65cfa8*/
        result = v8 - (_DWORD)Handle; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cfb3*/
        {
          v13 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)Handle, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
LABEL_26:
            Handle = this->Handle; /*0x65cff1*/
            result = v13 - (_DWORD)Handle; /*0x65cff4*/
LABEL_27:
            v16 = this->FileName; /*0x65cff6*/
            if ( result > (int)v16 ) /*0x65cffb*/
            {
              v17 = (LONG)Handle + (_DWORD)v16; /*0x65cfff*/
              if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d003*/
              {
                v18 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  v19 = *(_DWORD *)this->FileClass; /*0x65d03a*/
                  v26 = *(_DWORD *)&this->FileNameAllocated; /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v19 + 64))(this, LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - (unsigned int)this->Handle; /*0x65d04d*/
              }
              else
              {
                (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65d016*/
                  this,
                  9,
                  0,
                  *(_DWORD *)&this->FileNameAllocated);
                return -(int)this->Handle; /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          v14 = *(_DWORD *)this->FileClass; /*0x65cfde*/
          v25 = *(_DWORD *)&this->FileNameAllocated; /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v14 + 64))(this, v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65cfc6*/
            this,
            9,
            0,
            *(_DWORD *)&this->FileNameAllocated);
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      v9 = *(_DWORD *)this->FileClass; /*0x65cf95*/
      v24 = *(_DWORD *)&this->FileNameAllocated; /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v9 + 64))(this, v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65cf61*/
        this,
        9,
        0,
        *(_DWORD *)&this->FileNameAllocated);
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d05f*/
  {
    if ( dwMoveMethod ) /*0x65d081*/
    {
      if ( dwMoveMethod == 1 ) /*0x65d084*/
      {
        v21 = 1; /*0x65d090*/
      }
      else if ( dwMoveMethod == 2 ) /*0x65d087*/
      {
        v21 = 2; /*0x65d089*/
      }
    }
    else
    {
      v21 = 0; /*0x65d097*/
    }
    result = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      v22 = *(_DWORD *)this->FileClass; /*0x65d0b3*/
      v27 = *(_DWORD *)&this->FileNameAllocated; /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v22 + 64))(this, v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65d072*/
      this,
      9,
      0,
      *(_DWORD *)&this->FileNameAllocated);
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/
}



// ==== 0x0065D0D0  RawFileClass::GetFileSize  this=RawFileClass  sig=csp ====
int __thiscall CCFileClass::GetFileSize(RawFileClass *this)
{
  DWORD FileSize; // edi
  int result; // eax
  int v4; // ebx
  DWORD LastError; // eax
  int v6; // [esp-8h] [ebp-10h]

  FileSize = 0; /*0x65d0d4*/
  result = (int)this->FileName; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d0e0*/
    {
      FileSize = GetFileSize(*(HANDLE *)this->FileTimeDateLo, 0); /*0x65d0f2*/
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        v4 = *(_DWORD *)this->FileClass; /*0x65d0fd*/
        v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65d0ff*/
        LastError = GetLastError(); /*0x65d102*/
        (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v6); /*0x65d10b*/
        result = -1 - (unsigned int)this->Handle; /*0x65d113*/
        this->FileName = (void *)result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 1) ) /*0x65d122*/
    {
      FileSize = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 44))(this); /*0x65d130*/
      (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d136*/
    }
    result = FileSize - (unsigned int)this->Handle; /*0x65d13e*/
    this->FileName = (void *)result; /*0x65d140*/
  }
  return result; /*0x65d119*/
}



// ==== 0x0065D150  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Close(RawFileClass *this)
{
  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d155*/
  if ( !(*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->FileName != (void *)-1 ) /*0x65d169*/
    (*(void (__thiscall **)(RawFileClass *, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 40))(this, 0, 0); /*0x65d173*/
  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d17a*/
  return 1; /*0x65d182*/
}



// ==== 0x0065D190  RawFileClass::Delete  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Delete(RawFileClass *this)
{
  int v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d195*/
  if ( *(_DWORD *)&this->FileNameAllocated ) /*0x65d198*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *, _DWORD))(*(_DWORD *)this->FileClass + 20))(this, 0) ) /*0x65d1b6*/
    {
      if ( DeleteFileA(*(LPCSTR *)&this->FileNameAllocated) ) /*0x65d1c5*/
      {
        return 1; /*0x65d1e8*/
      }
      else
      {
        v3 = *(_DWORD *)this->FileClass; /*0x65d1d3*/
        v5 = *(_DWORD *)&this->FileNameAllocated; /*0x65d1d5*/
        LastError = GetLastError(); /*0x65d1d7*/
        (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v3 + 64))(this, LastError, 0, v5); /*0x65d1e0*/
        return 0; /*0x65d1e4*/
      }
    }
    else
    {
      return 0; /*0x65d1bd*/
    }
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))(this, 2, 0, 0); /*0x65d1a9*/
    return 0; /*0x65d1ac*/
  }
}



// ==== 0x0065D1F0  RawFileClass::GetDosTimestamp  this=RawFileClass  sig=csp ====
int __thiscall FileClass::GetDosTimestamp(RawFileClass *this)
{
  WORD FatDate[2]; // [esp+0h] [ebp-3Ch] BYREF
  WORD FatTime[2]; // [esp+4h] [ebp-38h] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+8h] [ebp-34h] BYREF

  if ( !GetFileInformationByHandle(*(HANDLE *)this->FileTimeDateLo, &FileInformation) ) /*0x65d1fc*/
    return 0; /*0x65d237*/
  FileTimeToDosDateTime(&FileInformation.ftLastWriteTime, FatDate, FatTime); /*0x65d215*/
  return FatTime[0] | (FatDate[0] << 16); /*0x65d233*/
}



// ==== 0x0065D240  RawFileClass::SetTime  this=RawFileClass  sig=csp ====
bool __thiscall FileClass::SetTime(RawFileClass *this, int wFatTime)
{
  void *v3; // eax
  struct _FILETIME FileTime; // [esp+4h] [ebp-3Ch] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+Ch] [ebp-34h] BYREF

  v3 = *(void **)this->FileTimeDateLo; /*0x65d246*/
  return v3 != (void *)-1 /*0x65d293*/
      && GetFileInformationByHandle(v3, &FileInformation)
      && DosDateTimeToFileTime(HIWORD(wFatTime), wFatTime, &FileTime)
      && SetFileTime(*(HANDLE *)this->FileTimeDateLo, &FileInformation.ftCreationTime, &FileTime, &FileTime);
}



// ==== 0x0065D2B0  FileClass::GetFileSizeOp  this=FileClass  sig=csp ====
void __thiscall FileClass::GetFileSizeOp(RawFileClass *this, int a2, int a3)
{
  int FileSize; // eax
  int Handle; // ecx
  FileClass v6; // edx

  if ( a2 ) /*0x65d2ba*/
  {
    FileSize = CCFileClass::GetFileSize(this); /*0x65d2cd*/
    Handle = this->Handle; /*0x65d2d2*/
    this->FileName = FileSize; /*0x65d2d5*/
    this->Handle = a2 + Handle; /*0x65d2da*/
    if ( a3 != -1 ) /*0x65d2e4*/
    {
      if ( FileSize >= a3 ) /*0x65d2e8*/
        FileSize = a3; /*0x65d2ea*/
      this->FileName = FileSize; /*0x65d2ec*/
    }
    v6 = this->FileClass; /*0x65d2f2*/
    this->FileName &= (this->FileName <= 0) - 1; /*0x65d300*/
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)&v6 + 24))(this) ) /*0x65d303*/
      FileClass::Seek(this, 0, 0); /*0x65d310*/
  }
  else
  {
    this->Handle = 0; /*0x65d2bc*/
    this->FileName = -1; /*0x65d2bf*/
  }
}



// ==== 0x0065D3A0  RawFileClass::QueryInterface  this=RawFileClass  sig=csp ====
_DWORD *__thiscall RawFileClass::QueryInterface(BufferIOFileClass *this, char a2)
{
  FileClass v3; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65d3a3*/
  if ( RawFileClass::Write(this) ) /*0x65d3a9*/
  {
    if ( !CloseHandle(*(HANDLE *)this->FileTimeDateLo) ) /*0x65d3b7*/
    {
      v3 = this->FileClass; /*0x65d3c5*/
      v6 = *(_DWORD *)this->FileNameAllocated; /*0x65d3c7*/
      LastError = GetLastError(); /*0x65d3c9*/
      (*(void (__thiscall **)(BufferIOFileClass *, DWORD, _DWORD, int))(*(_DWORD *)&v3 + 64))(this, LastError, 0, v6); /*0x65d3d2*/
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65d3d6*/
  }
  if ( this->CacheReadAhead[0] && *(_DWORD *)this->FileNameAllocated ) /*0x65d3e4*/
  {
    free(*(void **)this->FileNameAllocated); /*0x65d3ec*/
    *(_DWORD *)this->FileNameAllocated = 0; /*0x65d3f4*/
    this->CacheReadAhead[0] = 0; /*0x65d3fb*/
  }
  this->FileClass = (FileClass)&FileClass::`vftable'; /*0x65d403*/
  if ( (a2 & 1) != 0 ) /*0x65d40b*/
    __3_YAXPAX_Z(this); /*0x65d40e*/
  return &this->FileClass; /*0x65d418*/
}



// ==== 0x0065D420  RawFileClass::Write  this=RawFileClass  sig=csp ====
BOOL __thiscall RawFileClass::Write(RawFileClass *this)
{
  return *(_DWORD *)this->FileTimeDateLo != -1; /*0x65d42b*/
}



// ==== 0x0065D430  ComPtr::Constructor  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Constructor(ComPtr *this)
{
  this->ComPtr_field_0x04 = 0; /*0x65d432*/
  *(_DWORD *)this->__pad_0 = &rc_ptr_base::`vftable'; /*0x65d439*/
  return this->__pad_0; /*0x65d43f*/
}



// ==== 0x0065D460  ComPtr::Release  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Release(ComPtr *this)
{
  _DWORD *result; // eax
  int ComPtr_field_0x04; // ecx

  result = this->__pad_0; /*0x65d460*/
  ComPtr_field_0x04 = this->ComPtr_field_0x04; /*0x65d462*/
  *result = &rc_ptr_base::`vftable'; /*0x65d465*/
  if ( ComPtr_field_0x04 ) /*0x65d46d*/
  {
    result[1] = 0; /*0x65d46f*/
    return (*(_DWORD *(__thiscall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x65d478*/
  }
  return result; /*0x65d47b*/
}



// ==== 0x0065D480  ComPtr::Set  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Set(ComPtr *this, int a2)
{
  int ComPtr_field_0x04; // ecx
  int result; // eax

  if ( a2 != this->ComPtr_field_0x04 ) /*0x65d48b*/
  {
    if ( a2 ) /*0x65d48f*/
      ++*(_DWORD *)(a2 + 4); /*0x65d491*/
    ComPtr_field_0x04 = this->ComPtr_field_0x04; /*0x65d494*/
    if ( ComPtr_field_0x04 ) /*0x65d499*/
    {
      this->ComPtr_field_0x04 = 0; /*0x65d49b*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x65d4a4*/
    }
    this->ComPtr_field_0x04 = a2; /*0x65d4a7*/
  }
  return result; /*0x65d4aa*/
}



// ==== 0x0065D4D0  AbstractClass::checkAICondition  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall AbstractClass::checkAICondition(AbstractClass *this, char a2)
{
  void *vtable1; // ecx

  vtable1 = this->vtable1; /*0x65d4d3*/
  this->vtable0 = &rc_ptr_base::`vftable'; /*0x65d4d6*/
  if ( vtable1 ) /*0x65d4de*/
  {
    this->vtable1 = 0; /*0x65d4e0*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)vtable1 + 8))(vtable1); /*0x65d4e9*/
  }
  if ( (a2 & 1) != 0 ) /*0x65d4f1*/
    __3_YAXPAX_Z(this); /*0x65d4f4*/
  return &this->vtable0; /*0x65d4fe*/
}



// ==== 0x0065D510  sub_65D510  this=-  sig=ida-proto ====
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
  v10[0] = &FileStraw::`vftable'; /*0x65d530*/
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



// ==== 0x0065D5C0  ReadStreamLine  this=-  sig=csp ====
int __fastcall ReadStreamLine(int a1, const char *a2, int a3, _BYTE *a4)
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



// ==== 0x0065D660  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
void __thiscall ReferenceCounted::Constructor(ReferenceCounted *this)
{
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x65d660*/
}



// ==== 0x0065D670  ReferenceCounted::ReleaseRef  this=ReferenceCounted  sig=csp ====
int __thiscall COMClass::ReleaseRef(ReferenceCounted *this)
{
  int result; // eax

  result = *((_DWORD *)this + 1) - 1; /*0x65d673*/
  *((_DWORD *)this + 1) = result; /*0x65d674*/
  if ( !result ) /*0x65d677*/
  {
    if ( this ) /*0x65d67b*/
      return (**(int (__thiscall ***)(ReferenceCounted *, int))this)(this, 1); /*0x65d681*/
  }
  return result; /*0x65d683*/
}



// ==== 0x0065D690  ReferenceCounted::RetZero_eax_35  this=ReferenceCounted  sig=csp ====
char __stdcall VtableStub::RetZero_eax_35(ReferenceCounted *this)
{
  return 0; /*0x65d692*/
}



// ==== 0x0065D6A0  ReferenceCounted::initInterface  this=ReferenceCounted  sig=csp ====
_DWORD *__thiscall COMClass::initInterface(ReferenceCounted *this, char a2)
{
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x65d6a9*/
  if ( (a2 & 1) != 0 ) /*0x65d6af*/
    __3_YAXPAX_Z(this); /*0x65d6b2*/
  return this; /*0x65d6bc*/
}



// ==== 0x0065D6C0  sub_65D6C0  this=-  sig=ida-proto ====
void sub_65D6C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65d6cc*/
  dbl_B04C40 = Math::Sqrt(v0 + v0); /*0x65d6de*/
}



// ==== 0x0065D6F0  sub_65D6F0  this=-  sig=ida-proto ====
void sub_65D6F0()
{
  dbl_B04C90 = dbl_B04C40 / 60.0; /*0x65d6fc*/
}



// ==== 0x0065D710  sub_65D710  this=-  sig=ida-proto ====
void sub_65D710()
{
  dbl_B04C78 = 1.0 / dbl_B04C90; /*0x65d71c*/
}



// ==== 0x0065D730  sub_65D730  this=-  sig=ida-proto ====
void sub_65D730()
{
  dbl_B04C70 = 0.0174532925199433 * 45.0; /*0x65d73c*/
}



// ==== 0x0065D750  sub_65D750  this=-  sig=ida-proto ====
void sub_65D750()
{
  dbl_B04C48 = 0.0174532925199433 * 60.0; /*0x65d75c*/
}



// ==== 0x0065D770  sub_65D770  this=-  sig=ida-proto ====
void sub_65D770()
{
  dbl_B04C20 = 0.0174532925199433 * 90.0; /*0x65d77c*/
}



// ==== 0x0065D790  sub_65D790  this=-  sig=ida-proto ====
__int64 sub_65D790()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04C20 - dbl_B04C48); /*0x65d7a2*/
  result = Math::RoundToInt(v0 * dbl_B04C40 * 0.5); /*0x65d7b6*/
  dword_B04C98 = result; /*0x65d7bb*/
  return result; /*0x65d7c0*/
}



// ==== 0x0065D7D0  sub_65D7D0  this=-  sig=ida-proto ====
void sub_65D7D0()
{
  dbl_B04C50 = Math::ArcTan((double)dword_B04C98 * 0.00390625); /*0x65d7e7*/
}



// ==== 0x0065D800  sub_65D800  this=-  sig=ida-proto ====
void sub_65D800()
{
  dbl_B04C68 = Math::ArcTan((double)(2 * dword_B04C98) / dbl_B04C40); /*0x65d822*/
}



// ==== 0x0065D830  sub_65D830  this=-  sig=ida-proto ====
__int64 sub_65D830()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04C98) + 0.5); /*0x65d84b*/
  dword_B04C8C = result; /*0x65d850*/
  return result; /*0x65d856*/
}



// ==== 0x0065D860  sub_65D860  this=-  sig=ida-proto ====
int sub_65D860()
{
  dword_B04C38 = 0; /*0x65d862*/
  return 0; /*0x65d86e*/
}



// ==== 0x0065D870  sub_65D870  this=-  sig=ida-proto ====
int sub_65D870()
{
  dword_B04C58 = 0; /*0x65d872*/
  dword_B04C5C = 0; /*0x65d877*/
  dword_B04C60 = 0; /*0x65d87c*/
  return 0; /*0x65d881*/
}



// ==== 0x0065D890  sub_65D890  this=-  sig=ida-proto ====
int sub_65D890()
{
  dword_B04C88 = 0; /*0x65d895*/
  dword_B04C80 = 128; /*0x65d89f*/
  dword_B04C84 = 128; /*0x65d8a4*/
  return 128; /*0x65d8a9*/
}



// ==== 0x0065D8B0  sub_65D8B0  this=-  sig=ida-proto ====
int sub_65D8B0()
{
  dword_B04C28 = 0; /*0x65d8b2*/
  dword_B04C2C = 0; /*0x65d8b7*/
  dword_B04C30 = 0; /*0x65d8bc*/
  dword_B04C34 = 0; /*0x65d8c1*/
  return 0; /*0x65d8c6*/
}



// ==== 0x0065D8D0  ReturnFalse3  this=-  sig=ida-proto ====
char ReturnFalse3()
{
  return 0; /*0x65d8d2*/
}



// ==== 0x0065D8E0  DeployScriptActionPlane  this=TeamTypeClass  sig=ida-proto ====
bool __usercall DeployScriptActionPlane@<al>(int a1@<ecx>, int a2@<edx>, double a3@<st0>)
{
  int v3; // edi
  int v5; // eax
  ScriptTypeClass *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  int v11; // ecx
  bool v12; // bl
  int *Waypoint_Location; // eax
  int v14; // eax
  _DWORD *v15; // esi
  ObjectClass *v16; // edi
  Cell *v17; // ebx
  signed int v18; // ebp
  Cell *NeighbourContent; // eax
  ObjectClass *v20; // eax
  ObjectClass *v21; // esi
  _DWORD *v22; // ebp
  int v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  int v26; // eax
  char IsWithinUsableArea; // al
  #375 *OwnerHouse; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // esi
  _DWORD *TransportWaypoint; // eax
  int v34; // ecx
  int *TransitionCount; // eax
  _DWORD *v36; // edi
  int v37; // eax
  int v38; // ebx
  void *v39; // eax
  char v40; // al
  #375 *v41; // [esp+0h] [ebp-34h]
  int v42; // [esp+4h] [ebp-30h]
  bool v43; // [esp+16h] [ebp-1Eh]
  bool v44; // [esp+17h] [ebp-1Dh]
  ScriptActionQueue v45; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD *v46; // [esp+1Ch] [ebp-18h] BYREF
  ScriptActionQueue v47; // [esp+20h] [ebp-14h]
  __int16 v48[2]; // [esp+24h] [ebp-10h] BYREF
  _DWORD v49[3]; // [esp+28h] [ebp-Ch] BYREF

  v3 = a1; /*0x65d8e7*/
  *(_DWORD *)v48 = a2; /*0x65d8ed*/
  v47 = (ScriptActionQueue)a1; /*0x65d8f1*/
  if ( !a1 || !*(_DWORD *)(*(_DWORD *)(a1 + 228) + 156) ) /*0x65d901*/
    return 0; /*0x65d901*/
  v5 = *(_DWORD *)(a1 + 224); /*0x65d90f*/
  if ( !v5 || !*(_DWORD *)(v5 + 160) ) /*0x65d919*/
  {
    if ( !v5 ) /*0x65d92c*/
    {
      v6 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x65d933*/
      if ( v6 ) /*0x65d93d*/
        v7 = ScriptTypeClass::Constructor(v6, 0); /*0x65d942*/
      else
        v7 = 0; /*0x65d949*/
      *(_DWORD *)(v3 + 224) = v7; /*0x65d94b*/
    }
    v8 = *(_DWORD *)(v3 + 224); /*0x65d951*/
    v9 = *(_DWORD *)(v8 + 160); /*0x65d957*/
    if ( v9 < 50 ) /*0x65d960*/
    {
      *(_DWORD *)(v8 + 8 * v9 + 164) = 5; /*0x65d962*/
      *(_DWORD *)(v8 + 8 * v9 + 168) = 0; /*0x65d969*/
      ++*(_DWORD *)(v8 + 160); /*0x65d970*/
    }
  }
  v43 = *(_BYTE *)(v3 + 176) != 0; /*0x65d985*/
  v10 = ConstructTeamMembers((ObjectClass *)v3); /*0x65d991*/
  v11 = v10[373]; /*0x65d995*/
  v46 = v10; /*0x65d99b*/
  *(_BYTE *)(v11 + 116) = 0; /*0x65d99f*/
  if ( !v10 ) /*0x65d9a3*/
    return 0; /*0x65dd1e*/
  v12 = a2 != -1; /*0x65d9ac*/
  v44 = v12; /*0x65d9b1*/
  if ( v12 ) /*0x65d9b5*/
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v48, *(int *)v48); /*0x65d9c7*/
  else
    Waypoint_Location = TechnoClass::GetWaypointCoords((TechnoClass *)v3, v48); /*0x65d9d5*/
  v14 = *Waypoint_Location; /*0x65d9de*/
  v45 = (ScriptActionQueue)v14; /*0x65d9e2*/
  if ( !v43 && __PAIR32__(*(unsigned __int16 *)&v45.__tail_0[2], v14) != dword_B04C38 ) /*0x65d9f3*/
  {
    v15 = v10; /*0x65da07*/
    do /*0x65da1e*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v15 + 44))(v15) != 15 ) /*0x65da13*/
        goto LABEL_44; /*0x65da13*/
      v15 = (_DWORD *)v15[12]; /*0x65da19*/
    }
    while ( v15 ); /*0x65da1e*/
    *(ScriptActionQueue *)v48 = v45; /*0x65da28*/
    v16 = 0; /*0x65da37*/
    v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x65da39*/
    v18 = -1; /*0x65da3b*/
    do /*0x65da72*/
    {
      NeighbourContent = v17; /*0x65da41*/
      if ( v18 != -1 ) /*0x65da43*/
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(v17, v18); /*0x65da48*/
      v20 = (ObjectClass *)Cell::IsBridge(NeighbourContent); /*0x65da4f*/
      v21 = v20; /*0x65da54*/
      if ( v20 && v20->health > 0 && ProcessDataCellClass(v20) ) /*0x65da63*/
        v16 = v21; /*0x65da6c*/
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
        v25 = v22; /*0x65da8d*/
        v22 = (_DWORD *)v22[12]; /*0x65da91*/
        *v24 = 0; /*0x65da93*/
        v26 = (*((int (__thiscall **)(ObjectClass *))v16->AbstractClass + 11))(v16); /*0x65da9b*/
        if ( v26 <= 0 ) /*0x65daa0*/
          goto LABEL_39; /*0x65daa0*/
        if ( v26 <= 2 ) /*0x65daa5*/
        {
          CellClass::AddObject((CellClass *)&v16[1].bombVisible, v25); /*0x65dadd*/
          (*(void (__thiscall **)(_DWORD *))(*v25 + 284))(v25); /*0x65dae6*/
          (*((void (__thiscall **)(ObjectClass *, int, _DWORD))v16->AbstractClass + 122))(v16, 16, 0); /*0x65daf4*/
          ++v23; /*0x65dafa*/
          goto LABEL_41; /*0x65dafb*/
        }
        if ( v26 == 6 ) /*0x65daaa*/
        {
          if ( (*((int (__thiscall **)(ObjectClass *, _DWORD *, ScriptActionQueue))v16->AbstractClass + 64))( /*0x65dabf*/
                 v16,
                 v25,
                 v47) == 2 )
          {
            (*((void (__thiscall **)(ObjectClass *, int))v16->AbstractClass + 157))(v16, 3); /*0x65dacd*/
            ++v23; /*0x65dad3*/
          }
          else if ( v25 ) /*0x65dac3*/
          {
            goto LABEL_40; /*0x65dac3*/
          }
        }
        else
        {
LABEL_39:
          if ( v25 ) /*0x65daff*/
LABEL_40:
            (*(void (__thiscall **)(_DWORD *, int))(*v25 + 32))(v25, 1); /*0x65db01*/
        }
LABEL_41:
        if ( !v22 ) /*0x65db0c*/
          return v23 != 0; /*0x65db20*/
      }
    }
    v3 = (int)v47; /*0x65db21*/
    v10 = v46; /*0x65db25*/
    v12 = v44; /*0x65db29*/
  }
LABEL_44:
  if ( !v12 /*0x65db49*/
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               (__int16 *)&v45,
                               1),
        LOBYTE(v46) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(v46) = 0; /*0x65db4b*/
  }
  if ( !v43 ) /*0x65db56*/
  {
    if ( MoveScriptTypeClassToWaypoint(v3, v10, (int *)&v45, (int)v46) ) /*0x65db66*/
      goto LABEL_49; /*0x65db6d*/
    return 1; /*0x65dba5*/
  }
  *(ScriptActionQueue *)v48 = v45; /*0x65dbaf*/
  v30 = *((_DWORD *)dword_A8B21C + TypeClass::FindByName(&g_INI_Key_PDPLANE)); /*0x65dbc8*/
  ++dword_A8E7AC; /*0x65dbca*/
  v31 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v30 + 140))(v30, v10[135]); /*0x65dbd9*/
  v32 = v31; /*0x65dbe5*/
  --dword_A8E7AC; /*0x65dbea*/
  if ( !v31 ) /*0x65dbf0*/
    return 1; /*0x65dbf0*/
  *(_BYTE *)(v31 + 980) = 1; /*0x65dbf2*/
  if ( *(_BYTE *)(v3 + 177) ) /*0x65dbf9*/
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
  v36 = (_DWORD *)*TransportWaypoint; /*0x65dc4b*/
  v37 = *(_DWORD *)v32; /*0x65dc4d*/
  v46 = v36; /*0x65dc55*/
  (*(void (__thiscall **)(int, int, _DWORD))(v37 + 488))(v32, 26, 0); /*0x65dc59*/
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v32 + 1152))(v32, 0, 1); /*0x65dc67*/
  v38 = *(_DWORD *)v32; /*0x65dc6d*/
  v39 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x65dc79*/
  (*(void (__thiscall **)(int, void *))(v38 + 968))(v32, v39); /*0x65dc81*/
  ++dword_A8E7AC; /*0x65dc95*/
  Coord::Subtract((Coord *)v49, ((__int16)v36 << 8) + 128, (SHIWORD(v46) << 8) + 128, 0); /*0x65dcb6*/
  v40 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v32 + 216))(v32, v49, 0); /*0x65dcc6*/
  --dword_A8E7AC; /*0x65dcda*/
  if ( v40 ) /*0x65dce0*/
  {
    *(_BYTE *)(v32 + 1737) = 1; /*0x65dce9*/
    CellClass::AddObject((CellClass *)(v32 + 276), v10); /*0x65dcf0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 492))(v32); /*0x65dcf9*/
    v3 = (int)v47; /*0x65dcff*/
LABEL_49:
    if ( Techno::GetOwnerHouse(v3) ) /*0x65db71*/
    {
      v41 = (#375 *)dword_A83D4C; /*0x65db80*/
      OwnerHouse = (#375 *)Techno::GetOwnerHouse(v3); /*0x65db83*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v41) ) /*0x65db8a*/
        ScriptActionQueue::PushNext(&v45); /*0x65db97*/
    }
    return 1; /*0x65db97*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 32))(v32, 1); /*0x65dd0e*/
  return 1; /*0x65db14*/
}



// ==== 0x0065DD30  ObjectClass::ConstructTeamMembers  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructTeamMembers(ObjectClass *this)
{
  int v2; // esi
  int OwnerHouse; // eax
  int v4; // eax
  ObjectClass *v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // edx
  _DWORD *result; // eax
  int v22; // ecx
  float v23; // [esp+4h] [ebp-34h]
  char v24; // [esp+1Dh] [ebp-1Bh]
  char v25; // [esp+1Eh] [ebp-1Ah]
  char v26; // [esp+1Fh] [ebp-19h]
  _DWORD *v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h]
  int v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]
  int v31; // [esp+30h] [ebp-8h]

  v2 = __2_YAPAXI_Z(0xA0u); /*0x65dd43*/
  if ( v2 ) /*0x65dd4a*/
  {
    OwnerHouse = Techno::GetOwnerHouse((int)this); /*0x65dd50*/
    v4 = MissionClass::Construct(v2, (int)this, OwnerHouse, 0); /*0x65dd59*/
    v5 = (ObjectClass *)v4; /*0x65dd5e*/
    if ( v4 ) /*0x65dd62*/
    {
      *(_BYTE *)(v4 + 119) = 1; /*0x65dd64*/
      *(_BYTE *)(v4 + 122) = 0; /*0x65dd68*/
    }
  }
  else
  {
    v5 = 0; /*0x65dda0*/
  }
  v6 = this->attachedBomb; /*0x65dd6c*/
  v7 = 0; /*0x65dd72*/
  v25 = 0; /*0x65dd74*/
  v8 = *(_DWORD *)(v6 + 160); /*0x65dd79*/
  if ( v8 > 0 ) /*0x65dd81*/
  {
    v9 = (_DWORD *)(v6 + 164); /*0x65dd83*/
    while ( *v9 != 8 ) /*0x65dd94*/
    {
      ++v7; /*0x65dd96*/
      v9 += 2; /*0x65dd97*/
      if ( v7 >= v8 ) /*0x65dd9c*/
        goto LABEL_11; /*0x65dd9c*/
    }
    v25 = 1; /*0x65dda4*/
  }
LABEL_11:
  v26 = Team_Create(v5); /*0x65dda9*/
  v10 = this->u32_39; /*0x65ddb4*/
  v11 = 0; /*0x65ddba*/
  v24 = 0; /*0x65ddbc*/
  v12 = *(_DWORD *)(v10 + 156); /*0x65ddc1*/
  if ( v12 > 0 ) /*0x65ddc9*/
  {
    v13 = v10 + 168; /*0x65ddcb*/
    while ( !*(_BYTE *)(*(_DWORD *)v13 + 3278) ) /*0x65ddda*/
    {
      ++v11; /*0x65dddc*/
      v13 += 8; /*0x65dddd*/
      if ( v11 >= v12 ) /*0x65dde2*/
        goto LABEL_17; /*0x65dde2*/
    }
    v24 = 1; /*0x65dde6*/
  }
LABEL_17:
  v14 = 0; /*0x65ddeb*/
  v15 = 0; /*0x65dded*/
  v28 = 0; /*0x65ddf1*/
  v27 = 0; /*0x65ddf5*/
  v29 = 0; /*0x65ddf9*/
  if ( v12 <= 0 ) /*0x65ddfd*/
    goto LABEL_50; /*0x65ddfd*/
  do /*0x65df5d*/
  {
    v16 = *(_DWORD *)(v10 + 8 * v14 + 168); /*0x65de0a*/
    v30 = 0; /*0x65de13*/
    if ( *(int *)(v10 + 8 * v14 + 164) <= 0 ) /*0x65de1b*/
      goto LABEL_38; /*0x65de1b*/
    do /*0x65df42*/
    {
      ++dword_A8E7AC; /*0x65de28*/
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 140))(v16, v5->fallRate); /*0x65de42*/
      --dword_A8E7AC; /*0x65de47*/
      if ( !v17 ) /*0x65de4d*/
        goto LABEL_36; /*0x65de4d*/
      v31 = *(_DWORD *)(v16 + 2048); /*0x65de5b*/
      if ( v31 > 0 && BYTE1(this->location[2]) ) /*0x65de61*/
      {
        __asm { fild [esp+2Ch+var_8] } /*0x65de6b*/
        __asm { fstp [esp+34h+var_34]; float }
        Float::Accumulate((int *)(v17 + 828), v23, 0); /*0x65de7b*/
        __asm { fstp st } /*0x65de80*/
      }
      v18 = this->location[1]; /*0x65de82*/
      if ( v18 ) /*0x65de8b*/
      {
        v19 = v18 - 2; /*0x65de8d*/
        if ( v19 ) /*0x65de90*/
        {
          if ( v19 == 1 ) /*0x65de93*/
            Timer::SetFlag((Timer *)(v17 + 336), 1); /*0x65de9d*/
        }
        else
        {
          Power::ChangedHouse((Power *)(v17 + 336), 1); /*0x65deac*/
        }
      }
      else
      {
        Team_Create_750060((ObjectClass *)(v17 + 336), 1); /*0x65debb*/
      }
      if ( v5 ) /*0x65dec2*/
      {
        ++dword_A8E7AC; /*0x65decf*/
        TeamClass::AddMember((int *)v5, v17, 0); /*0x65ded4*/
        --dword_A8E7AC; /*0x65dedf*/
        *(_BYTE *)(v17 + 1673) = 1; /*0x65dee4*/
      }
      if ( *(int *)(v16 + 1504) <= 0 || !BYTE1(this->location[2]) ) /*0x65def5*/
        goto LABEL_35; /*0x65def5*/
      if ( v26 ) /*0x65df05*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) != 2 ) /*0x65df15*/
          goto LABEL_35; /*0x65df15*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) != 1 ) /*0x65dfbc*/
      {
        goto LABEL_35; /*0x65dfbc*/
      }
      if ( !*(_BYTE *)(v16 + 3278) && v24 ) /*0x65dfd2*/
      {
LABEL_35:
        v20 = v27; /*0x65df1b*/
        v27 = (_DWORD *)v17; /*0x65df1f*/
        *(_DWORD *)(v17 + 48) = v20; /*0x65df23*/
        goto LABEL_36; /*0x65df23*/
      }
      v22 = v28; /*0x65dfd8*/
      v28 = v17; /*0x65dfdc*/
      *(_DWORD *)(v17 + 48) = v22; /*0x65dfe0*/
LABEL_36:
      v14 = v29; /*0x65df26*/
      ++v30; /*0x65df3e*/
    }
    while ( v30 < *(_DWORD *)(this->u32_39 + 8 * v29 + 164) ); /*0x65df42*/
    v15 = v28; /*0x65df48*/
LABEL_38:
    v10 = this->u32_39; /*0x65df4c*/
    v29 = ++v14; /*0x65df53*/
  }
  while ( v14 < *(_DWORD *)(v10 + 156) ); /*0x65df5d*/
  result = v27; /*0x65df63*/
  if ( v15 ) /*0x65df69*/
  {
    if ( !v27 ) /*0x65df6d*/
      return (_DWORD *)v15; /*0x65df6d*/
    if ( !BYTE1(this->location[2]) ) /*0x65df73*/
      return (_DWORD *)v15; /*0x65df73*/
    CellClass::AddObject((CellClass *)(v15 + 276), v27); /*0x65df88*/
    if ( !v25 || (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) != 2 ) /*0x65df9f*/
      return (_DWORD *)v15; /*0x65e004*/
    *(_BYTE *)(v15 + 980) = 1; /*0x65dfa1*/
    return (_DWORD *)v15; /*0x65dfb1*/
  }
  if ( v27 ) /*0x65dfea*/
    return result; /*0x65dfea*/
LABEL_50:
  if ( v5 ) /*0x65dfee*/
    (*((void (__thiscall **)(ObjectClass *, int))v5->AbstractClass + 8))(v5, 1); /*0x65dff7*/
  return 0; /*0x65dfaa*/
}



// ==== 0x0065E010  MoveScriptTypeClassToWaypoint  this=ObjectClass  sig=csp ====
char __fastcall ScriptTypeClass_MoveToWaypoint(int a1, _DWORD *a2, int *a3, int a4)
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
  __int16 v15; // si
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

  v4 = a1; /*0x65e016*/
  v5 = a2; /*0x65e019*/
  v6 = *(_BYTE *)(a1 + 176); /*0x65e01b*/
  v50 = (_DWORD *)a1; /*0x65e021*/
  LOBYTE(v48) = v6 != 0; /*0x65e02e*/
  v7 = a2; /*0x65e035*/
  if ( a2 ) /*0x65e037*/
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
    HIBYTE(v48) = 0; /*0x65e0c7*/
  }
  else
  {
LABEL_5:
    HIBYTE(v48) = 1; /*0x65e064*/
  }
  v52 = 0; /*0x65e072*/
  v51 = *a3; /*0x65e07e*/
  if ( v48 || (_BYTE)a4 ) /*0x65e095*/
  {
    v11 = *v5; /*0x65e0e5*/
    a4 = 0; /*0x65e0ee*/
    v12 = (*(int (__thiscall **)(_DWORD *))(v11 + 132))(v5); /*0x65e0fe*/
    v10 = *LayerClass::Pathfinding_Find( /*0x65e122*/
             &dword_87F7E8,
             (int)&v51,
             &a3,
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
             (__int16 *)&a4,
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
  LOBYTE(a4) = 0; /*0x65e143*/
  if ( __PAIR32__(HIWORD(v51), v10) != dword_B04C38 ) /*0x65e14a*/
  {
    while ( 1 ) /*0x65e1d5*/
    {
      while ( 1 ) /*0x65e15e*/
      {
        if ( v49 == dword_B04C38 || !v5 ) /*0x65e17f*/
        {
          v14 = a4; /*0x65e611*/
          goto LABEL_53; /*0x65e611*/
        }
        v15 = v52; /*0x65e185*/
        v16 = *v5; /*0x65e189*/
        LOWORD(v53) = (_WORD)v52 << 13; /*0x65e191*/
        if ( (*(int (__thiscall **)(_DWORD *))(v16 + 44))(v5) == 2 ) /*0x65e19e*/
        {
          LOWORD(v56) = ((v15 << 13) - 24577) & 0xE000; /*0x65e1af*/
          v17 = v56; /*0x65e1b4*/
          v53 = v56; /*0x65e1b8*/
        }
        else
        {
          v17 = v53; /*0x65e1be*/
        }
        ++dword_A8E7AC; /*0x65e1cf*/
        if ( !(_BYTE)v48 ) /*0x65e1d5*/
          break; /*0x65e1d5*/
        v18 = *v5; /*0x65e1e5*/
        v57[2] = 0; /*0x65e1e8*/
        v57[0] = ((__int16)v49 << 8) + 128; /*0x65e1fb*/
        v57[1] = (SHIWORD(v49) << 8) + 128; /*0x65e209*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(v18 + 436))(v5, v57); /*0x65e210*/
        v19 = *v5; /*0x65e216*/
        v20 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e225*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v19 + 1152))(v5, v20, 1); /*0x65e22d*/
        if ( !v5[413] ) /*0x65e23d*/
          WinAPI::Wrapper(-2147467261); /*0x65e260*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e27b*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
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
        LOBYTE(a4) = 1; /*0x65e447*/
        if ( (*(int (__thiscall **)(_DWORD *))(v36 + 44))(v5) != 2 ) /*0x65e455*/
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
            v39 = HIWORD(v49) + HIWORD(dword_89F688[v38]); /*0x65e499*/
            LOWORD(v54) = LOWORD(dword_89F688[v38]) + v49; /*0x65e4a5*/
            HIWORD(v54) = v39; /*0x65e4b1*/
            a3 = v54; /*0x65e4c0*/
            if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3) ) /*0x65e4c7*/
              break; /*0x65e4c7*/
            if ( ++v37 >= 8 ) /*0x65e4d4*/
            {
              v49 = dword_B04C38; /*0x65e4db*/
              goto LABEL_46; /*0x65e4df*/
            }
          }
          v49 = (int)a3; /*0x65e4ee*/
        }
LABEL_46:
        v5 = v13; /*0x65e5ae*/
        --dword_A8E7AC; /*0x65e5b9*/
        if ( v13 ) /*0x65e5bf*/
        {
          v45 = v13 + 12; /*0x65e5c8*/
          v50 = (_DWORD *)v13[12]; /*0x65e5cb*/
          v13 = v50; /*0x65e5cf*/
          *v45 = 0; /*0x65e5d1*/
        }
      }
      if ( HIBYTE(v48) ) /*0x65e2d9*/
      {
        v22 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e2ee*/
        Coords = CellClass::GetCoords(v22, v61); /*0x65e2f5*/
        v24 = *Coords; /*0x65e2fa*/
        v25 = Coords[1]; /*0x65e2fc*/
        v26 = Coords[2]; /*0x65e2ff*/
        v59[1] = v25; /*0x65e302*/
        v27 = *v5; /*0x65e306*/
        v59[2] = v26 - 400; /*0x65e312*/
        v59[0] = v24; /*0x65e322*/
        LOBYTE(a3) = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v27 + 216))( /*0x65e332*/
                       v5,
                       v59,
                       (unsigned __int8)(((v17 >> 7) + 1) >> 1));
        if ( !(_BYTE)a3 ) /*0x65e339*/
          goto LABEL_39; /*0x65e339*/
        v28 = (*(int (__thiscall **)(_DWORD *))(*v5 + 464))(v5); /*0x65e344*/
        v60[0] = v5[39]; /*0x65e35b*/
        v60[1] = v5[40]; /*0x65e367*/
        v29 = *v5; /*0x65e36b*/
        v60[2] = v5[41] + -256 - v28; /*0x65e373*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(v29 + 436))(v5, v60); /*0x65e379*/
        v30 = *v5; /*0x65e37f*/
        v31 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e38e*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v30 + 1152))(v5, v31, 1); /*0x65e396*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1348))(v5, 0, 1072693248); /*0x65e3a8*/
        if ( !v5[413] ) /*0x65e3b8*/
          WinAPI::Wrapper(-2147467261); /*0x65e3db*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e3f6*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
          0);
        v32 = (char)a3; /*0x65e3f9*/
        v13 = v50; /*0x65e400*/
      }
      else
      {
        v33 = *v5; /*0x65e40a*/
        v34 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e425*/
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
        v42 = HIWORD(dword_89F688[v41]); /*0x65e521*/
        LOWORD(v55) = LOWORD(dword_89F688[v41]) + v49; /*0x65e529*/
        HIWORD(v55) = HIWORD(v49) + v42; /*0x65e53b*/
        a3 = v55; /*0x65e544*/
        if ( !LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3) ) /*0x65e550*/
        {
          v43 = *v5; /*0x65e559*/
          v44 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3); /*0x65e570*/
          if ( !(*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v43 + 428))(v5, v44, v40, -1, 0, 1) ) /*0x65e578*/
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
      v49 = (int)a3; /*0x65e594*/
      if ( a3 == (int *)dword_B04C38 ) /*0x65e5e3*/
        goto LABEL_45; /*0x65e5e3*/
      --dword_A8E7AC; /*0x65e5f6*/
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



// ==== 0x0065E650  sub_65E650  this=-  sig=csp ====
char __stdcall sub_65E650(int a1, int a2, int a3)
{
  return 0; /*0x65e652*/
}



// ==== 0x0065E660  SpawnSuperWeaponUnits  this=-  sig=csp ====
int __userpurge SpawnSuperWeaponUnits@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
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
  _DWORD *v21; // edi
  int v23; // [esp+14h] [ebp-30h]
  int v24; // [esp+24h] [ebp-20h]
  unsigned int *v25; // [esp+28h] [ebp-1Ch]
  int v26; // [esp+2Ch] [ebp-18h]
  int v27; // [esp+34h] [ebp-10h] BYREF
  _DWORD v28[3]; // [esp+38h] [ebp-Ch] BYREF

  v10 = *((_DWORD *)dword_A8B21C + a2); /*0x65e66c*/
  v11 = 0; /*0x65e673*/
  v25 = (unsigned int *)a1; /*0x65e679*/
  v26 = v10; /*0x65e67d*/
  v24 = 0; /*0x65e681*/
  if ( a4 > 0 ) /*0x65e685*/
  {
    while ( 1 ) /*0x65e699*/
    {
      ++dword_A8E7AC; /*0x65e699*/
      v12 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v10 + 140))(v10, a1); /*0x65e6a1*/
      v13 = v12; /*0x65e6ad*/
      --dword_A8E7AC; /*0x65e6b2*/
      if ( !v12 ) /*0x65e6b8*/
        break; /*0x65e6b8*/
      *(_BYTE *)(v12 + 980) = 1; /*0x65e6be*/
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
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, a5, 0); /*0x65e70c*/
      if ( a7 ) /*0x65e718*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 1152))(v13, a7, 1); /*0x65e721*/
      if ( a6 ) /*0x65e72d*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 968))(v13, a6); /*0x65e734*/
      v28[0] = ((__int16)v15 << 8) + 128; /*0x65e756*/
      ++dword_A8E7AC; /*0x65e760*/
      v16 = *(_DWORD *)v13; /*0x65e766*/
      v28[1] = (SHIWORD(v15) << 8) + 128; /*0x65e76c*/
      v28[2] = 0; /*0x65e773*/
      v17 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v16 + 216))(v13, v28, 0); /*0x65e77b*/
      --dword_A8E7AC; /*0x65e78f*/
      if ( !v17 ) /*0x65e795*/
      {
        if ( v13 ) /*0x65e82e*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x65e836*/
        return v11 - 1; /*0x65e83a*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 2 && a8 != -1 && a9 ) /*0x65e7b6*/
      {
        *(_BYTE *)(v13 + 1737) = 1; /*0x65e7b8*/
        v18 = *((_DWORD *)dword_A8E34C + a8); /*0x65e7c5*/
        if ( v18 ) /*0x65e7ca*/
        {
          v19 = a9; /*0x65e7cc*/
          do /*0x65e7fb*/
          {
            v20 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v18 + 140))(v18, v25); /*0x65e7d8*/
            v21 = (_DWORD *)v20; /*0x65e7de*/
            if ( v20 ) /*0x65e7e2*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 212))(v20); /*0x65e7e8*/
              CellClass::AddObject((CellClass *)(v13 + 276), v21); /*0x65e7f5*/
            }
            --v19; /*0x65e7fa*/
          }
          while ( v19 ); /*0x65e7fb*/
          a1 = (HouseClass *)v25; /*0x65e7fd*/
        }
        v11 = v24; /*0x65e801*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 492))(v13); /*0x65e809*/
      v24 = ++v11; /*0x65e816*/
      if ( v11 >= a4 ) /*0x65e81a*/
        return v11; /*0x65e81a*/
      v10 = v26; /*0x65e68d*/
    }
  }
  return v11; /*0x65e820*/
}



// ==== 0x0065E850  PlaceAircraftOnMap  this=-  sig=csp ====
int __userpurge PlaceAircraftOnMap@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
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
  _DWORD *v23; // edi
  int v25; // [esp+14h] [ebp-38h]
  int v26; // [esp+24h] [ebp-28h]
  int v27; // [esp+28h] [ebp-24h] BYREF
  HouseClass *v28; // [esp+2Ch] [ebp-20h]
  int v29; // [esp+30h] [ebp-1Ch] BYREF
  int v30; // [esp+34h] [ebp-18h] BYREF
  int v31; // [esp+38h] [ebp-14h]
  int v32; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD v33[3]; // [esp+40h] [ebp-Ch] BYREF

  v10 = *((_DWORD *)dword_A8B21C + a2); /*0x65e85b*/
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
      v13 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v10 + 140))(v10, v11); /*0x65e8cf*/
      v14 = v13; /*0x65e8db*/
      --dword_A8E7AC; /*0x65e8e0*/
      if ( !v13 ) /*0x65e8e6*/
        break; /*0x65e8e6*/
      v15 = *(_BYTE *)(v13 + 20) & 4; /*0x65e8f3*/
      *(_DWORD *)(v14 + 660) = a10; /*0x65e8f5*/
      *(_BYTE *)(v14 + 980) = 1; /*0x65e8ff*/
      v16 = v15 != 0 ? v14 : 0;
      if ( a10 && v16 ) /*0x65e90e*/
      {
        *(_DWORD *)(v16 + 1496) = *(_DWORD *)(a10 + 92); /*0x65e913*/
        *(_DWORD *)(a10 + 92) = v16; /*0x65e919*/
      }
      v27 = 0; /*0x65e945*/
      v17 = *LayerClass::Pathfinding_Find( /*0x65e954*/
               (Type *)&stru_87F5F0.__pad_58[416],
               (int)&v27,
               &v32,
               (__int16 *)&v30,
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
               (__int16 *)&v27,
               0,
               0);
      v18 = *(_DWORD *)v14; /*0x65e956*/
      v29 = v17; /*0x65e960*/
      (*(void (__thiscall **)(int, int, _DWORD))(v18 + 488))(v14, a5, 0); /*0x65e964*/
      if ( a7 ) /*0x65e970*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 1152))(v14, a7, 1); /*0x65e979*/
      if ( a6 ) /*0x65e985*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 968))(v14, a6); /*0x65e98c*/
      v33[0] = ((__int16)v17 << 8) + 128; /*0x65e9ad*/
      ++dword_A8E7AC; /*0x65e9b7*/
      v19 = *(_DWORD *)v14; /*0x65e9bd*/
      v33[1] = (SHIWORD(v29) << 8) + 128; /*0x65e9c3*/
      v33[2] = 0; /*0x65e9ca*/
      v20 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v19 + 216))(v14, v33, 0); /*0x65e9ce*/
      --dword_A8E7AC; /*0x65e9e2*/
      if ( !v20 ) /*0x65e9e8*/
      {
        if ( v14 ) /*0x65ea8d*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 32))(v14, 1); /*0x65ea95*/
        return v26 - 1; /*0x65ea9f*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 2 && a8 != -1 && a9 ) /*0x65ea09*/
      {
        *(_BYTE *)(v14 + 1737) = 1; /*0x65ea0b*/
        v21 = *((_DWORD *)dword_A8E34C + a8); /*0x65ea18*/
        if ( v21 ) /*0x65ea1d*/
        {
          v29 = a9; /*0x65ea1f*/
          do /*0x65ea58*/
          {
            v22 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v21 + 140))(v21, v28); /*0x65ea2d*/
            v23 = (_DWORD *)v22; /*0x65ea33*/
            if ( v22 ) /*0x65ea37*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 212))(v22); /*0x65ea3d*/
              CellClass::AddObject((CellClass *)(v14 + 276), v23); /*0x65ea4a*/
            }
            --v29; /*0x65ea54*/
          }
          while ( v29 ); /*0x65ea58*/
        }
        v10 = v31; /*0x65ea5a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 492))(v14); /*0x65ea62*/
      if ( ++v26 >= a4 ) /*0x65ea77*/
        return v26; /*0x65ea77*/
      v11 = v28; /*0x65e8b8*/
    }
  }
  return v26; /*0x65ea81*/
}



// ==== 0x0065EAB0  globalHelper_05EAB0  this=-  sig=csp ====
int __userpurge globalHelper_05EAB0@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7)
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
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v8 = *((_DWORD *)dword_A8B21C + a2); /*0x65eabc*/
  v18 = v8; /*0x65eac7*/
  v17 = 0; /*0x65eacb*/
  if ( a4 > 0 ) /*0x65ead3*/
  {
    while ( 1 ) /*0x65eaeb*/
    {
      ++dword_A8E7AC; /*0x65eaeb*/
      v9 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v8 + 140))(v8, a1); /*0x65eaf3*/
      v10 = v9; /*0x65eaff*/
      --dword_A8E7AC; /*0x65eb04*/
      if ( !v9 ) /*0x65eb0a*/
        break; /*0x65eb0a*/
      *(_BYTE *)(v9 + 980) = 1; /*0x65eb10*/
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
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 488))(v10, a5, 0); /*0x65eb5e*/
      if ( a7 ) /*0x65eb66*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 1152))(v10, a7, 1); /*0x65eb6f*/
      if ( a6 ) /*0x65eb7b*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 968))(v10, a6); /*0x65eb82*/
      v20[0] = ((__int16)v12 << 8) + 128; /*0x65eba4*/
      ++dword_A8E7AC; /*0x65ebae*/
      v13 = *(_DWORD *)v10; /*0x65ebb4*/
      v20[1] = (SHIWORD(v12) << 8) + 128; /*0x65ebba*/
      v20[2] = 0; /*0x65ebc1*/
      v14 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v13 + 216))(v10, v20, 0); /*0x65ebc9*/
      --dword_A8E7AC; /*0x65ebdd*/
      if ( !v14 ) /*0x65ebe3*/
      {
        if ( v10 ) /*0x65ec14*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x65ec1c*/
        return v17 - 1; /*0x65ec26*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 492))(v10); /*0x65ebe9*/
      if ( ++v17 >= a4 ) /*0x65ebfe*/
        return v17; /*0x65ebfe*/
      v8 = v18; /*0x65eadf*/
    }
  }
  return v17; /*0x65ec08*/
}



// ==== 0x0065EC30  ExecuteScriptTypeClassActions  this=-  sig=csp ====
char __fastcall ExecuteScriptTypeClassActions(ObjectClass *a1, int a2)
{
  TagClass *attachedTag; // eax
  ScriptTypeClass *v5; // eax
  TagClass *v6; // eax
  TagClass *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  char v11; // bl
  void *v12; // eax
  _DWORD *v13; // eax
  int v14; // ebp
  int v15; // ebx
  ObjectPlacement *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  char v23; // al
  _DWORD *v24; // ebp
  int (__stdcall ***Checked)(_DWORD, int *, _BYTE *); // eax
  int v26; // esi
  int v27; // ebx
  int InstanceCOM; // eax
  int v29; // eax
  int (__stdcall ***v30)(_DWORD, int *, _BYTE *); // eax
  int v31; // esi
  int v32; // ebx
  int v33; // ecx
  int v34; // esi
  int v35; // esi
  int v36; // ecx
  int v37; // eax
  _DWORD *v38; // esi
  bool v39; // zf
  _DWORD *v40; // edi
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // esi
  #375 *OwnerHouse; // eax
  #375 *v46; // [esp+40h] [ebp-C0h]
  char v47; // [esp+56h] [ebp-AAh]
  bool v48; // [esp+57h] [ebp-A9h]
  _BYTE v49[168]; // [esp+58h] [ebp-A8h] BYREF

  *(_DWORD *)&v49[64] = a1; /*0x65ec40*/
  if ( !a1 || !a1[1].attachedBomb[1].audioController[4] ) /*0x65ec50*/
    return 0; /*0x65ec50*/
  attachedTag = a1[1].attachedTag; /*0x65ec5e*/
  if ( !attachedTag || !attachedTag[2].defaultCoords[0] ) /*0x65ec68*/
  {
    if ( !attachedTag ) /*0x65ec7b*/
    {
      v5 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x65ec82*/
      if ( v5 ) /*0x65ec8c*/
        v6 = (TagClass *)ScriptTypeClass::Constructor(v5, 0); /*0x65ec91*/
      else
        v6 = 0; /*0x65ec98*/
      a1[1].attachedTag = v6; /*0x65ec9a*/
    }
    v7 = a1[1].attachedTag; /*0x65eca0*/
    v8 = v7[2].defaultCoords[0]; /*0x65eca6*/
    if ( v8 < 50 ) /*0x65ecaf*/
    {
      v7[2].defaultCoords[2 * v8 + 1] = 5; /*0x65ecb1*/
      *((_DWORD *)&v7[3].AbstractClass + 2 * v8) = 0; /*0x65ecb8*/
      ++v7[2].defaultCoords[0]; /*0x65ecbf*/
    }
  }
  v9 = ConstructTeamMembers(a1); /*0x65eccc*/
  *(_BYTE *)(v9[373] + 116) = 0; /*0x65ecd8*/
  if ( !v9 ) /*0x65ecdc*/
    return 0; /*0x65f304*/
  *(_DWORD *)&v49[28] = *TechnoClass::GetWaypointCoords((TechnoClass *)a1, &v49[32]); /*0x65ecf3*/
  if ( a2 != -1 ) /*0x65ecf7*/
    *(_DWORD *)&v49[28] = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v49[32], a2); /*0x65ed0c*/
  v10 = v9[12]; /*0x65ed10*/
  v9[12] = 0; /*0x65ed13*/
  *(_DWORD *)&v49[24] = v10; /*0x65ed16*/
  *(_DWORD *)&v49[36] = 0; /*0x65ed1a*/
  do /*0x65f275*/
  {
    v11 = 0; /*0x65ed1e*/
    v47 = 0; /*0x65ed27*/
    v48 = (*(int (__thiscall **)(_DWORD *))(*v9 + 44))(v9) == 1; /*0x65ed39*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 44))(v9) == 2 ) /*0x65ed47*/
    {
      v47 = 1; /*0x65ed49*/
      v11 = 1; /*0x65ed4e*/
    }
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v49[28]); /*0x65ed5c*/
    v13 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, &v49[120]); /*0x65ed6d*/
    *(_DWORD *)&v49[12] = *v13; /*0x65ed72*/
    *(_DWORD *)&v49[16] = v13[1]; /*0x65ed79*/
    *(_DWORD *)&v49[20] = v13[2]; /*0x65ed86*/
    if ( v48 ) /*0x65ed8a*/
    {
      if ( !v11 ) /*0x65edc6*/
        goto LABEL_22; /*0x65edc6*/
    }
    else if ( !v11 ) /*0x65ed8e*/
    {
      *(_DWORD *)&v49[12] += ((v9[191] & 3) - 2) << 8; /*0x65eda9*/
      *(_DWORD *)&v49[16] += ((v9[191] & 0xC) - 4) << 6; /*0x65edbe*/
LABEL_22:
      --v9[191]; /*0x65edc8*/
    }
    v14 = dword_B04C58; /*0x65edce*/
    v15 = dword_B04C5C; /*0x65edda*/
    *(_DWORD *)&v49[84] = dword_B04C60; /*0x65edea*/
    v16 = (ObjectPlacement *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49[12]); /*0x65edf3*/
    *(_DWORD *)v49 = 0; /*0x65edf7*/
    while ( v14 == dword_B04C58 && v15 == dword_B04C5C && *(_DWORD *)&v49[84] == dword_B04C60 && *(int *)v49 < 255 ) /*0x65ee2d*/
    {
      if ( v47 ) /*0x65ee39*/
      {
        v17 = *(_DWORD *)v16->__pad_0; /*0x65ee3f*/
        *(_DWORD *)&v49[48] = 0; /*0x65ee41*/
        v18 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(v17 + 72))(v16, &v49[96]); /*0x65ee59*/
        *(_WORD *)&v49[52] = *v18 / 256; /*0x65ee70*/
        *(_WORD *)&v49[54] = v18[1] / 256; /*0x65ee91*/
        *(_DWORD *)&v49[60] = *(_DWORD *)&v49[52]; /*0x65ee9f*/
        *(_DWORD *)&v49[44] = *LayerClass::Pathfinding_Find( /*0x65eec2*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&v49[48],
                                 &v49[88],
                                 (__int16 *)&v49[60],
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
                                 (__int16 *)&v49[48],
                                 0,
                                 0);
      }
      else
      {
        *(_WORD *)&v49[40] = 0; /*0x65eed2*/
        *(_WORD *)&v49[42] = 0; /*0x65eed7*/
        v19 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))( /*0x65eee8*/
                          v16,
                          &v49[144]);
        *(_WORD *)&v49[56] = *v19 / 256; /*0x65eeff*/
        *(_WORD *)&v49[58] = v19[1] / 256; /*0x65ef15*/
        *(_DWORD *)&v49[68] = *(_DWORD *)&v49[56]; /*0x65ef22*/
        v20 = (*(int (__thiscall **)(_DWORD *))(*v9 + 132))(v9); /*0x65ef38*/
        *(_DWORD *)&v49[44] = *LayerClass::Pathfinding_Find( /*0x65ef61*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&v49[92],
                                 &v49[92],
                                 (__int16 *)&v49[68],
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
                                 (__int16 *)&v49[40],
                                 0,
                                 0);
      }
      v16 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v49[44]); /*0x65ef74*/
      if ( v48 || v47 ) /*0x65ef84*/
      {
        v22 = (int *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))(v16, &v49[156]); /*0x65efb9*/
      }
      else
      {
        v21 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))( /*0x65ef98*/
                          v16,
                          &v49[108]);
        v22 = ObjectPlacement::CalcPosition(v16, (int *)&v49[132], v21, 0, 0, 0); /*0x65efa6*/
      }
      v14 = *v22; /*0x65efbc*/
      v15 = v22[1]; /*0x65efbe*/
      *(_DWORD *)&v49[84] = v22[2]; /*0x65efc9*/
      ++*(_DWORD *)v49; /*0x65efcd*/
    }
    *(_DWORD *)&v49[12] = v14; /*0x65efe0*/
    *(_DWORD *)&v49[16] = v15; /*0x65efe4*/
    ++dword_A8E7AC; /*0x65efe8*/
    v23 = (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*v9 + 216))(v9, &v49[12], 0); /*0x65eff7*/
    --dword_A8E7AC; /*0x65f00b*/
    if ( v23 ) /*0x65f011*/
    {
      v24 = v9 + 413; /*0x65f017*/
      *(_DWORD *)&v49[4] = 0; /*0x65f01d*/
      if ( v9[413] ) /*0x65f025*/
      {
        Checked = (int (__stdcall ***)(_DWORD, int *, _BYTE *))Stream::GetChecked((Stream *)(v9 + 413)); /*0x65f02d*/
        v26 = (**Checked)(Checked, &stru_818E00.?[17], &v49[72]); /*0x65f041*/
        if ( v26 >= 0 ) /*0x65f045*/
        {
          v27 = *(_DWORD *)&v49[72]; /*0x65f05a*/
          Release2COM((ObjectClass *)&v49[4]); /*0x65f062*/
          *(_DWORD *)&v49[4] = v27; /*0x65f067*/
        }
        else
        {
          Release2COM((ObjectClass *)&v49[4]); /*0x65f04b*/
          *(_DWORD *)&v49[4] = 0; /*0x65f050*/
        }
        if ( v26 < 0 && v26 != -2147467262 ) /*0x65f075*/
          WinAPI::Wrapper(v26); /*0x65f078*/
      }
      *(_DWORD *)&v49[8] = 0; /*0x65f08a*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&v49[8], (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x65f092*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x65f0a0*/
        WinAPI::Wrapper(InstanceCOM); /*0x65f0a3*/
      if ( !*(_DWORD *)&v49[8] ) /*0x65f0ae*/
        WinAPI::Wrapper(-2147467261); /*0x65f0b5*/
      (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)&v49[8] + 12))(*(_DWORD *)&v49[8], v9); /*0x65f0c2*/
      v29 = 0; /*0x65f0c5*/
      *(_DWORD *)v49 = 0; /*0x65f0cb*/
      if ( *(_DWORD *)&v49[8] ) /*0x65f0d1*/
      {
        v30 = (int (__stdcall ***)(_DWORD, int *, _BYTE *))Stream::GetChecked((Stream *)&v49[8]); /*0x65f0d7*/
        v31 = (**v30)(v30, &stru_818E00.?[17], &v49[32]); /*0x65f0eb*/
        if ( v31 >= 0 ) /*0x65f0ef*/
        {
          v32 = *(_DWORD *)&v49[32]; /*0x65f0fe*/
          Release2COM((ObjectClass *)v49); /*0x65f106*/
          v29 = v32; /*0x65f10b*/
        }
        else
        {
          Release2COM((ObjectClass *)v49); /*0x65f0f5*/
          v29 = 0; /*0x65f0fa*/
        }
        *(_DWORD *)v49 = v29; /*0x65f10f*/
        if ( v31 < 0 && v31 != -2147467262 ) /*0x65f11b*/
          WinAPI::Wrapper(v31); /*0x65f11e*/
      }
      v33 = *(_DWORD *)&v49[4]; /*0x65f127*/
      if ( *(_DWORD *)&v49[4] != v29 ) /*0x65f12d*/
      {
        v34 = *(_DWORD *)&v49[4]; /*0x65f12f*/
        v33 = v29; /*0x65f131*/
        *(_DWORD *)&v49[4] = v29; /*0x65f135*/
        if ( v29 ) /*0x65f139*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 4))(v29); /*0x65f13e*/
          v33 = *(_DWORD *)&v49[4]; /*0x65f141*/
          v29 = *(_DWORD *)v49; /*0x65f145*/
        }
        if ( v34 ) /*0x65f14b*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x65f150*/
          v33 = *(_DWORD *)&v49[4]; /*0x65f153*/
          v29 = *(_DWORD *)v49; /*0x65f157*/
        }
      }
      if ( v29 ) /*0x65f15d*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29); /*0x65f162*/
        v33 = *(_DWORD *)&v49[4]; /*0x65f165*/
      }
      if ( v33 ) /*0x65f16b*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v33 + 12))(v33, *v24); /*0x65f174*/
        v35 = *v24; /*0x65f177*/
        if ( *v24 != *(_DWORD *)&v49[8] ) /*0x65f180*/
        {
          *v24 = *(_DWORD *)&v49[8]; /*0x65f182*/
          if ( *(_DWORD *)&v49[8] ) /*0x65f18b*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[8] + 4))(*(_DWORD *)&v49[8]); /*0x65f190*/
          if ( v35 ) /*0x65f195*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35); /*0x65f19a*/
        }
      }
      v9[162] = *(_DWORD *)&v49[12]; /*0x65f1a7*/
      v9[163] = *(_DWORD *)&v49[16]; /*0x65f1b1*/
      v9[164] = *(_DWORD *)&v49[20]; /*0x65f1b8*/
      if ( !v9[413] ) /*0x65f1bb*/
        WinAPI::Wrapper(-2147467261); /*0x65f1d6*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9[413] + 68))( /*0x65f1f1*/
        v9[413],
        *(_DWORD *)&v49[12],
        *(_DWORD *)&v49[16],
        *(_DWORD *)&v49[20]);
      *((_BYTE *)v9 + 625) = 1; /*0x65f1f4*/
      v36 = *(_DWORD *)&v49[36]; /*0x65f201*/
      *(_DWORD *)&v49[36] = v9; /*0x65f205*/
      v37 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3056); /*0x65f209*/
      v9[12] = v36; /*0x65f20f*/
      v9[161] = v37; /*0x65f212*/
      v9 = *(_DWORD **)&v49[24]; /*0x65f218*/
      if ( *(_DWORD *)&v49[24] ) /*0x65f21e*/
      {
        *(_DWORD *)&v49[24] = *(_DWORD *)(*(_DWORD *)&v49[24] + 48); /*0x65f226*/
        v9[12] = 0; /*0x65f22a*/
      }
      if ( *(_DWORD *)&v49[8] ) /*0x65f236*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[8] + 8))(*(_DWORD *)&v49[8]); /*0x65f23b*/
      if ( *(_DWORD *)&v49[4] ) /*0x65f244*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[4] + 8))(*(_DWORD *)&v49[4]); /*0x65f249*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v9 + 32))(v9, 1); /*0x65f258*/
      v9 = *(_DWORD **)&v49[24]; /*0x65f25b*/
      if ( !*(_DWORD *)&v49[24] ) /*0x65f261*/
        break; /*0x65f261*/
      *(_DWORD *)&v49[24] = *(_DWORD *)(*(_DWORD *)&v49[24] + 48); /*0x65f269*/
      v9[12] = 0; /*0x65f26d*/
    }
  }
  while ( v9 ); /*0x65f275*/
  v38 = *(_DWORD **)&v49[36]; /*0x65f27b*/
  v39 = *(_DWORD *)&v49[36] == 0; /*0x65f27f*/
  v40 = *(_DWORD **)(*(_DWORD *)&v49[36] + 48); /*0x65f281*/
  *(_DWORD *)(*(_DWORD *)&v49[36] + 48) = 0; /*0x65f287*/
  if ( !v39 ) /*0x65f28d*/
  {
    while ( 1 ) /*0x65f28f*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v38 + 292))(v38, 0); /*0x65f295*/
      v41 = *v38; /*0x65f29b*/
      v38[160] = 3; /*0x65f29f*/
      (*(void (__thiscall **)(_DWORD *))(v41 + 492))(v38); /*0x65f2a9*/
      v38 = v40; /*0x65f2b1*/
      if ( !v40 ) /*0x65f2b3*/
        break; /*0x65f2b3*/
      v42 = v40 + 12; /*0x65f2b5*/
      v40 = (_DWORD *)v40[12]; /*0x65f2b8*/
      *v42 = 0; /*0x65f2bb*/
    }
  }
  v43 = *(_DWORD *)&v49[64]; /*0x65f2c3*/
  if ( Techno::GetOwnerHouse(*(int *)&v49[64]) ) /*0x65f2c9*/
  {
    v46 = (#375 *)dword_A83D4C; /*0x65f2d8*/
    OwnerHouse = (#375 *)Techno::GetOwnerHouse(v43); /*0x65f2db*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v46) ) /*0x65f2e2*/
      ScriptActionQueue::PushNext((ScriptActionQueue *)&v49[28]); /*0x65f2ef*/
  }
  return 1; /*0x65f2f6*/
}



// ==== 0x0065F310  sub_65F310  this=-  sig=ida-proto ====
int sub_65F310()
{
  dword_B04CB0 = 0; /*0x65f312*/
  dword_B04CB4 = 0; /*0x65f317*/
  dword_B04CB8 = 0; /*0x65f31c*/
  dword_B04CBC = 0; /*0x65f321*/
  return 0; /*0x65f326*/
}



// ==== 0x0065F330  sub_65F330  this=-  sig=ida-proto ====
void sub_65F330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f33c*/
  dbl_B04CC8 = Math::Sqrt(v0 + v0); /*0x65f34e*/
}



// ==== 0x0065F360  sub_65F360  this=-  sig=ida-proto ====
void sub_65F360()
{
  dbl_B04D18 = dbl_B04CC8 / 60.0; /*0x65f36c*/
}



// ==== 0x0065F380  sub_65F380  this=-  sig=ida-proto ====
void sub_65F380()
{
  dbl_B04D00 = 1.0 / dbl_B04D18; /*0x65f38c*/
}



// ==== 0x0065F3A0  sub_65F3A0  this=-  sig=ida-proto ====
void sub_65F3A0()
{
  dbl_B04CF8 = 0.0174532925199433 * 45.0; /*0x65f3ac*/
}



// ==== 0x0065F3C0  sub_65F3C0  this=-  sig=ida-proto ====
void sub_65F3C0()
{
  dbl_B04CD0 = 0.0174532925199433 * 60.0; /*0x65f3cc*/
}



// ==== 0x0065F3E0  sub_65F3E0  this=-  sig=ida-proto ====
void sub_65F3E0()
{
  dbl_B04CA8 = 0.0174532925199433 * 90.0; /*0x65f3ec*/
}



// ==== 0x0065F400  sub_65F400  this=-  sig=ida-proto ====
__int64 sub_65F400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04CA8 - dbl_B04CD0); /*0x65f412*/
  result = Math::RoundToInt(v0 * dbl_B04CC8 * 0.5); /*0x65f426*/
  dword_B04D20 = result; /*0x65f42b*/
  return result; /*0x65f430*/
}



// ==== 0x0065F440  sub_65F440  this=-  sig=ida-proto ====
void sub_65F440()
{
  dbl_B04CD8 = Math::ArcTan((double)dword_B04D20 * 0.00390625); /*0x65f457*/
}



// ==== 0x0065F470  sub_65F470  this=-  sig=ida-proto ====
void sub_65F470()
{
  dbl_B04CF0 = Math::ArcTan((double)(2 * dword_B04D20) / dbl_B04CC8); /*0x65f492*/
}



// ==== 0x0065F4A0  sub_65F4A0  this=-  sig=ida-proto ====
__int64 sub_65F4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04D20) + 0.5); /*0x65f4bb*/
  dword_B04D14 = result; /*0x65f4c0*/
  return result; /*0x65f4c6*/
}



// ==== 0x0065F4D0  sub_65F4D0  this=-  sig=ida-proto ====
int sub_65F4D0()
{
  word_B04CC0 = 0; /*0x65f4d2*/
  word_B04CC2 = 0; /*0x65f4d8*/
  return 0; /*0x65f4de*/
}



// ==== 0x0065F4E0  sub_65F4E0  this=-  sig=ida-proto ====
int sub_65F4E0()
{
  dword_B04CE0 = 0; /*0x65f4e2*/
  dword_B04CE4 = 0; /*0x65f4e7*/
  dword_B04CE8 = 0; /*0x65f4ec*/
  return 0; /*0x65f4f1*/
}



// ==== 0x0065F500  sub_65F500  this=-  sig=ida-proto ====
int sub_65F500()
{
  dword_B04D10 = 0; /*0x65f505*/
  dword_B04D08 = 128; /*0x65f50f*/
  dword_B04D0C = 128; /*0x65f514*/
  return 128; /*0x65f519*/
}



// ==== 0x0065F520  ScenarioClass::ShowMissionBriefing  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ShowMissionBriefing(ScenarioClass *this)
{
  int *fileName; // esi
  int Section; // eax
  wchar_t *StringCSF; // eax
  Dialog *Dialog; // esi
  char v7; // [esp+Bh] [ebp-1C9h]
  LONG dwNewLong; // [esp+Ch] [ebp-1C8h] BYREF
  CCINIClass v9; // [esp+10h] [ebp-1C4h] BYREF
  CCFileClass v10; // [esp+68h] [ebp-16Ch] BYREF
  int v11[3]; // [esp+C0h] [ebp-114h] BYREF
  int v12; // [esp+CCh] [ebp-108h]
  wchar_t Destination[128]; // [esp+D4h] [ebp-100h] BYREF

  v7 = stru_A8EB00.?[376]; /*0x65f535*/
  stru_A8EB00.?[376] = 0; /*0x65f539*/
  CCFileClass::Construct3((int)&v10); /*0x65f53f*/
  v9.?[0] = 0; /*0x65f548*/
  v9.?[1] = 0; /*0x65f54c*/
  GenericList::Constructor((GenericList *)&v9.?[2]); /*0x65f550*/
  v9.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x65f559*/
  Node::Init((Node *)&v9.?[8]); /*0x65f561*/
  v9.? = 0; /*0x65f56a*/
  v9.ownsFile = 0; /*0x65f56e*/
  *(_DWORD *)v9.INIClass = &CCINIClass_Vtable; /*0x65f572*/
  CCFileClass::Reset(&v10); /*0x65f57a*/
  FileClass::SetFileName(&v10, off_839710); /*0x65f58a*/
  if ( (unsigned __int8)CCFileClass::Open(&v10, 0) ) /*0x65f594*/
  {
    CCINIClass::Load(&v9, (int)&v10, 0, 0); /*0x65f5ac*/
    fileName = this->fileName; /*0x65f5b6*/
    if ( off_839714 ) /*0x65f5be*/
      Section = HashTableSection::FindSection((int *)v9.INIClass, (unsigned __int8 *)fileName, off_839714); /*0x65f5d2*/
    else
      Section = INIClass::BinarySearchSection((int)&v9, (unsigned __int8 *)fileName); /*0x65f5c5*/
    if ( Section ) /*0x65f5de*/
    {
      INIClass::GetString( /*0x65f5fe*/
        (INIClass *)&v9,
        (unsigned __int8 *)fileName,
        off_839714,
        &g_INI_DefaultBuffer,
        (char *)Destination,
        256);
      StringCSF = GetStringCSF(Destination, 0, aDRa2mdpostRest, 135); /*0x65f616*/
    }
    else
    {
      StringCSF = GetStringCSF(aBriefError, 0, aDRa2mdpostRest, 138); /*0x65f629*/
    }
    dword_B04CA0 = (LPARAM)StringCSF; /*0x65f639*/
    Dialog = (Dialog *)CreateDialog(0x10Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_65F710, 0); /*0x65f649*/
    stru_A8EB00.?[440] = 1; /*0x65f64b*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x65f652*/
    if ( Dialog ) /*0x65f659*/
    {
      SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x65f663*/
      Dialog::Show(Dialog); /*0x65f66b*/
      dwNewLong = 0; /*0x65f670*/
      while ( !(unsigned __int8)Dialog::PumpMessages() ) /*0x65f67b*/
      {
        if ( dwNewLong ) /*0x65f681*/
          goto LABEL_14; /*0x65f681*/
      }
      dwNewLong = 1059; /*0x65f685*/
LABEL_14:
      Dialog::Destroy(Dialog); /*0x65f68d*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x65f69a*/
    stru_A8EB00.?[440] = BYTE2(dword_A8B230[381].vtable3); /*0x65f6ac*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x65f6b7*/
  }
  stru_A8EB00.?[376] = v7; /*0x65f6c4*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x65f6ca*/
  *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x65f6d6*/
  v12 = 0; /*0x65f6de*/
  Vector::Clear((int)v11); /*0x65f6e5*/
  *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x65f6ee*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x65f6fb*/
}



// ==== 0x0065F710  sub_65F710  this=-  sig=csp ====
int __stdcall sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x65f72a*/
  if ( !result ) /*0x65f731*/
  {
    if ( a2 == 273 ) /*0x65f739*/
    {
      if ( GetDlgCtrlID(hWnd) == 1059 && !HIWORD(a3) ) /*0x65f77b*/
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



// ==== 0x0065F7A0  sub_65F7A0  this=-  sig=ida-proto ====
void sub_65F7A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f7ac*/
  dbl_B04D70 = Math::Sqrt(v0 + v0); /*0x65f7be*/
}



// ==== 0x0065F7D0  sub_65F7D0  this=-  sig=ida-proto ====
void sub_65F7D0()
{
  dbl_B04DF0 = dbl_B04D70 / 60.0; /*0x65f7dc*/
}



// ==== 0x0065F7F0  sub_65F7F0  this=-  sig=ida-proto ====
void sub_65F7F0()
{
  dbl_B04DD0 = 1.0 / dbl_B04DF0; /*0x65f7fc*/
}



// ==== 0x0065F810  sub_65F810  this=-  sig=ida-proto ====
void sub_65F810()
{
  dbl_B04DC8 = 0.0174532925199433 * 45.0; /*0x65f81c*/
}



// ==== 0x0065F830  sub_65F830  this=-  sig=ida-proto ====
void sub_65F830()
{
  dbl_B04D80 = 0.0174532925199433 * 60.0; /*0x65f83c*/
}



// ==== 0x0065F850  sub_65F850  this=-  sig=ida-proto ====
void sub_65F850()
{
  dbl_B04D30 = 0.0174532925199433 * 90.0; /*0x65f85c*/
}



// ==== 0x0065F870  sub_65F870  this=-  sig=ida-proto ====
__int64 sub_65F870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04D30 - dbl_B04D80); /*0x65f882*/
  result = Math::RoundToInt(v0 * dbl_B04D70 * 0.5); /*0x65f896*/
  dword_B04DF8 = result; /*0x65f89b*/
  return result; /*0x65f8a0*/
}



// ==== 0x0065F8B0  sub_65F8B0  this=-  sig=ida-proto ====
void sub_65F8B0()
{
  dbl_B04D90 = Math::ArcTan((double)dword_B04DF8 * 0.00390625); /*0x65f8c7*/
}



// ==== 0x0065F8E0  sub_65F8E0  this=-  sig=ida-proto ====
void sub_65F8E0()
{
  dbl_B04DC0 = Math::ArcTan((double)(2 * dword_B04DF8) / dbl_B04D70); /*0x65f902*/
}



// ==== 0x0065F910  sub_65F910  this=-  sig=ida-proto ====
__int64 sub_65F910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04DF8) + 0.5); /*0x65f92b*/
  dword_B04DEC = result; /*0x65f930*/
  return result; /*0x65f936*/
}



// ==== 0x0065F940  sub_65F940  this=-  sig=ida-proto ====
int sub_65F940()
{
  dword_B04D68 = 0; /*0x65f942*/
  return 0; /*0x65f94e*/
}



// ==== 0x0065F950  sub_65F950  this=-  sig=ida-proto ====
int sub_65F950()
{
  dword_B04D98 = 0; /*0x65f952*/
  dword_B04D9C = 0; /*0x65f957*/
  dword_B04DA0 = 0; /*0x65f95c*/
  return 0; /*0x65f961*/
}



// ==== 0x0065F970  sub_65F970  this=-  sig=ida-proto ====
int sub_65F970()
{
  dword_B04DE8 = 0; /*0x65f975*/
  dword_B04DE0 = 128; /*0x65f97f*/
  dword_B04DE4 = 128; /*0x65f984*/
  return 128; /*0x65f989*/
}



// ==== 0x0065F990  sub_65F990  this=-  sig=ida-proto ====
int sub_65F990()
{
  dword_B04D38 = 0; /*0x65f992*/
  dword_B04D3C = 0; /*0x65f997*/
  dword_B04D40 = 0; /*0x65f99c*/
  dword_B04D44 = 0; /*0x65f9a1*/
  return 0; /*0x65f9a6*/
}



// ==== 0x0065F9B0  sub_65F9B0  this=-  sig=ida-proto ====
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



// ==== 0x0065F9F0  sub_65F9F0  this=-  sig=ida-proto ====
void __cdecl sub_65F9F0()
{
  if ( (byte_B04D28 & 1) == 0 ) /*0x65f9fa*/
  {
    stru_B04DA8 = (int)&VectorClass<RadarEventClass *>::`vftable'; /*0x65f9fe*/
    byte_B04D28 |= 1u; /*0x65fa11*/
    if ( dword_B04DAC ) /*0x65fa17*/
    {
      if ( byte_B04DB5 ) /*0x65fa21*/
      {
        __3_YAXPAX_Z(dword_B04DAC); /*0x65fa24*/
        dword_B04DAC = 0; /*0x65fa2c*/
      }
    }
    byte_B04DB5 = 0; /*0x65fa36*/
    dword_B04DB0 = 0; /*0x65fa3d*/
  }
}



// ==== 0x0065FA50  sub_65FA50  this=-  sig=ida-proto ====
int sub_65FA50()
{
  word_B04D78 = 0; /*0x65fa52*/
  word_B04D7A = 0; /*0x65fa58*/
  return 0; /*0x65fa5e*/
}



// ==== 0x0065FA60  ScreenEffect::StubReturn  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturn()
{
  ; /*0x65fa60*/
}



// ==== 0x0065FA70  CreateTriggerClassIfFarEnough  this=RandomStruct  sig=csp ====
int __fastcall CreateTriggerClassIfFarEnough(int a1, int a2, int a3)
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

  v4 = a1; /*0x65fa7c*/
  if ( byte_7F09A4[16 * a1] && (v5 = 0, stru_B04DA8.LoadGame_field_0x10 > 0) ) /*0x65faa1*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65faab*/
    while ( 1 ) /*0x65fab1*/
    {
      v7 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v5); /*0x65fab1*/
      if ( *(_DWORD *)v7 == a1 ) /*0x65faba*/
      {
        v11 = (__int16)(HIWORD(a3) - *(_WORD *)(v7 + 34)); /*0x65fad3*/
        __asm { fild [esp+20h+var_4] } /*0x65fad7*/
        v12 = (__int16)(a3 - *(_WORD *)(v7 + 32)); /*0x65fadb*/
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
        LOWORD(result) = Math::RoundToInt(v3); /*0x65fafc*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65fb01*/
        result = (__int16)result; /*0x65fb07*/
        if ( (__int16)result < dword_7F0998[4 * **(_DWORD **)(stru_B04DA8.LoadGame_field_0x04 + 4 * v5)] ) /*0x65fb18*/
          break; /*0x65fb18*/
      }
      if ( ++v5 >= stru_B04DA8.LoadGame_field_0x10 ) /*0x65fb22*/
      {
        v4 = a1; /*0x65fb24*/
        goto LABEL_8; /*0x65fb24*/
      }
    }
    LOBYTE(result) = 0; /*0x65fb4c*/
  }
  else
  {
LABEL_8:
    result = __2_YAPAXI_Z(0x40u); /*0x65fb28*/
    if ( result ) /*0x65fb34*/
      result = (int)Team_Load_65FB80((ObjectClass *)result, v4, a3); /*0x65fb3a*/
    LOBYTE(result) = 1; /*0x65fb3f*/
  }
  return result; /*0x65fb41*/
}



// ==== 0x0065FB60  ObjectClass::method_65FB60  this=ObjectClass  sig=csp ====
void __thiscall sub_65FB60(ObjectClass *this)
{
  FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], this); /*0x65fb66*/
}



// ==== 0x0065FB70  sub_65FB70  this=-  sig=ida-proto ====
char __fastcall sub_65FB70(int a1)
{
  return byte_7F09A4[16 * a1]; /*0x65fb79*/
}



// ==== 0x0065FB80  ObjectClass::Team_Load_65FB80  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Load_65FB80(ObjectClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int *_6550C0; // eax
  int v9; // ecx
  void *v10; // eax
  void *vtable1; // edi
  void *v12; // edx
  void *v13; // eax
  void *v14; // ecx
  int v15; // ebp
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  int LoadGame_field_0x10; // ecx
  int v20; // eax
  _DWORD v22[4]; // [esp+Ch] [ebp-10h] BYREF
  void *v23; // [esp+20h] [ebp+4h]

  this->AbstractClass = (void *)a2; /*0x65fb8c*/
  this->? = 1061752795; /*0x65fb8e*/
  v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132); /*0x65fb9b*/
  this->? = 0; /*0x65fba1*/
  this->? = v4; /*0x65fba8*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 120); /*0x65fbb4*/
  this->? = (void *)a3; /*0x65fbb7*/
  this->? = v5; /*0x65fbba*/
  this->occupant = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65fbc2*/
  this->fallRate = 0; /*0x65fbc5*/
  this->nextObject = *(ObjectClass **)&stru_A8EB00.?[416]; /*0x65fbd4*/
  this->attachedBomb = 0; /*0x65fbd7*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x65fbde*/
  BYTE1(this->ambientSoundController[0]) = 1; /*0x65fbe1*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x65fbe4*/
  v7 = *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x65fbea*/
  _6550C0 = Team_Load_6550C0((ObjectClass *)&stru_87F5F0.__pad_58[416], v22, (__int16 *)&a3); /*0x65fbff*/
  v9 = *_6550C0; /*0x65fc04*/
  v10 = (void *)(_6550C0[1] - v7); /*0x65fc0b*/
  this->? = (void *)(v9 - v6); /*0x65fc0d*/
  this->? = v10; /*0x65fc10*/
  vtable1 = this->?; /*0x65fc13*/
  v12 = v10; /*0x65fc1c*/
  v13 = (void *)(*(_DWORD *)&stru_87F5F0.__pad_E12[2190] - (_DWORD)v10); /*0x65fc23*/
  v14 = (void *)(*(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1); /*0x65fc25*/
  v15 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc29*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (int)vtable1 <= (int)v13 ) /*0x65fc2b*/
    v15 = (int)v13; /*0x65fc2d*/
  if ( (int)v12 <= v15 ) /*0x65fc31*/
  {
    v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc39*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc3b*/
      v16 = (int)v13; /*0x65fc3d*/
  }
  else
  {
    v16 = (int)v12; /*0x65fc33*/
  }
  if ( (int)vtable1 <= v16 ) /*0x65fc41*/
  {
    v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc4b*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc4d*/
      v17 = (int)v13; /*0x65fc4f*/
    if ( (int)v12 <= v17 ) /*0x65fc53*/
    {
      v23 = v14; /*0x65fc5d*/
      if ( (int)v14 <= (int)v13 ) /*0x65fc61*/
        v23 = v13; /*0x65fc63*/
    }
    else
    {
      v23 = v12; /*0x65fc55*/
    }
  }
  else
  {
    v23 = this->?; /*0x65fc43*/
  }
  *(float *)&this->? = (float)(int)v23; /*0x65fc6b*/
  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x65fc87*/
  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x65fc8d*/
  v18 = dword_B04D88; /*0x65fc82*/
  dword_B04D48[dword_B04D88] = a3; /*0x65fc92*/
  dword_B04DD8 = v18; /*0x65fc99*/
  if ( LoadGame_field_0x10 < stru_B04DA8.LoadGame_field_0x08 /*0x65fcce*/
    || (BYTE1(stru_B04DA8.LoadGame_field_0x0C) || !stru_B04DA8.LoadGame_field_0x08)
    && stru_B04DA8.LoadGame_field_0x14 > 0
    && (*(unsigned __int8 (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)stru_B04DA8.__pad_0 + 8))(
         &stru_B04DA8,
         stru_B04DA8.LoadGame_field_0x08 + stru_B04DA8.LoadGame_field_0x14,
         0) )
  {
    v20 = stru_B04DA8.LoadGame_field_0x10++; /*0x65fcdb*/
    *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v20) = this; /*0x65fcea*/
  }
  return &this->AbstractClass; /*0x65fcef*/
}



// ==== 0x0065FD50  ObjectClass::WinMainSetup_Setup_65FD50  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_65FD50(ObjectClass *this)
{
  int i; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = stru_B04DA8.LoadGame_field_0x10 - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    v2 = *(void **)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd65*/
    if ( v2 ) /*0x65fd6a*/
    {
      v4 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd7b*/
      v3 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v4); /*0x65fd7f*/
      if ( v3 != -1 && v3 < stru_B04DA8.LoadGame_field_0x10 ) /*0x65fd8f*/
      {
        --stru_B04DA8.LoadGame_field_0x10; /*0x65fd94*/
        for ( ; /*0x65fd9a*/
              v3 < stru_B04DA8.LoadGame_field_0x10;
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x65fda2*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x65fdb5*/
    }
  }
}



// ==== 0x0065FDD0  Map_Helper_65FDD0  this=-  sig=ida-proto ====
int sub_65FDD0()
{
  int result; // eax
  int i; // esi

  result = dword_B04DB8; /*0x65fdd0*/
  for ( i = 0; i < dword_B04DB8; ++i ) /*0x65fdda*/
  {
    Map_Helper_65FE00(*((_BYTE **)dword_B04DAC + i)); /*0x65fde4*/
    result = dword_B04DB8; /*0x65fde9*/
  }
  return result; /*0x65fdf3*/
}



// ==== 0x0065FE00  ObjectClass::Map_Helper_65FE00  this=ObjectClass  sig=csp ====
void __thiscall Map_Helper_65FE00(ObjectClass *this)
{
  ObjectClass *nextObject; // edx
  BombClass *attachedBomb; // eax
  double v4; // st7
  double v5; // st6
  int v6; // eax
  double v7; // st7
  int v8; // eax
  BombClass *v9; // edx
  int v10; // eax
  double v11; // st7
  double v12; // st7
  char v14; // c0
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+4h] [ebp-10h]
  float v17; // [esp+4h] [ebp-10h]
  TagClass *v18; // [esp+Ch] [ebp-8h]

  if ( !BYTE1(this->ambientSoundController[0]) ) /*0x65fe0b*/
    return; /*0x65fe0b*/
  if ( !LOBYTE(this->ambientSoundController[0]) ) /*0x65fe11*/
  {
    nextObject = this->nextObject; /*0x65fe18*/
    attachedBomb = this->attachedBomb; /*0x65fe1b*/
    if ( nextObject != (ObjectClass *)-1 ) /*0x65fe21*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)nextObject >= (int)attachedBomb ) /*0x65fe2d*/
      {
LABEL_7:
        BYTE1(this->ambientSoundController[0]) = 0; /*0x65fe35*/
        goto LABEL_8; /*0x65fe35*/
      }
      attachedBomb = (BombClass *)((char *)attachedBomb - (*(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)nextObject)); /*0x65fe2f*/
    }
    if ( !attachedBomb ) /*0x65fe33*/
      goto LABEL_7; /*0x65fe33*/
  }
LABEL_8:
  Map_Helper_660540(this); /*0x65fe39*/
  v4 = *(float *)&this->? - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 128); /*0x65fe48*/
  v15 = (float)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 124); /*0x65fe51*/
  if ( v4 <= v15 ) /*0x65fe5e*/
    v4 = v15; /*0x65fe62*/
  *(float *)&this->? = v4; /*0x65fe66*/
  v5 = *(float *)&this->? + 0.7853981633974483; /*0x65fe6c*/
  LOWORD(v6) = Math::RoundToInt(v4); /*0x65fe7a*/
  v16 = v5 - (double)v6 * 1.570796326794897; /*0x65fe94*/
  if ( LOBYTE(this->ambientSoundController[0]) ) /*0x65fe83*/
  {
    if ( fabs(v4 - (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 124)) >= 0.01 ) /*0x65feb9*/
    {
      *(float *)&this->? = *(float *)&this->? + *(float *)&this->?; /*0x65ff63*/
    }
    else if ( v16 >= (double)*(float *)&this->? ) /*0x65fecb*/
    {
      *(float *)&this->? = *(float *)&this->? + *(float *)&this->?; /*0x65ff20*/
      v11 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132) * 0.33333334; /*0x65ff2e*/
      v17 = *(float *)&this->? - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132) * 0.02; /*0x65ff43*/
      if ( v11 <= v17 ) /*0x65ff50*/
        v11 = v17; /*0x65ff54*/
      *(float *)&this->? = v11; /*0x65ff58*/
    }
    else
    {
      v7 = v16 + *(float *)&this->?; /*0x65fed1*/
      v8 = 4 * (int)this->AbstractClass; /*0x65fed7*/
      LOBYTE(this->ambientSoundController[0]) = 0; /*0x65feda*/
      *(float *)&this->? = v7; /*0x65fee1*/
      v9 = (BombClass *)dword_7F099C[v8]; /*0x65feea*/
      this->nextObject = *(ObjectClass **)&stru_A8EB00.?[416]; /*0x65fef0*/
      this->attachedTag = v18; /*0x65fef6*/
      this->attachedBomb = v9; /*0x65fef9*/
      v10 = dword_7F09A0[v8]; /*0x65ff02*/
      this->occupant = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65ff0c*/
      this->owningHouseIndex = (int)v18; /*0x65ff12*/
      this->fallRate = v10; /*0x65ff15*/
    }
  }
  if ( *(float *)&this->? > 6.283185307179586 ) /*0x65ff78*/
    *(float *)&this->? = *(float *)&this->? - 6.283185307179586; /*0x65ff83*/
  v12 = *(float *)&this->? + *(float *)&this->?; /*0x65ff89*/
  *(float *)&this->? = v12; /*0x65ff92*/
  if ( v14 && *(float *)&this->? < 0.0 ) /*0x65ffaa*/
  {
    *(float *)&this->? = -*(float *)&this->?; /*0x65ffb3*/
    this->? = 0; /*0x65ffb6*/
  }
  else if ( v12 > 1.0 && *(float *)&this->? > 0.0 ) /*0x65ffdd*/
  {
    *(float *)&this->? = -*(float *)&this->?; /*0x65ffe4*/
    this->? = 1065353216; /*0x65ffe7*/
  }
}



// ==== 0x00650A90  AllocateTriggerLog  this=-  sig=ida-proto ====
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
  ... [21186 chars total]



// ==== 0x006516F0  LogMultiplayToSync_MPDEBUG  this=-  sig=csp ====
void __fastcall LogMultiplayToSync_MPDEBUG(int a1, unsigned __int8 *a2)
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
    HIBYTE(v57) = 0; /*0x65181b*/
    GetVersionString(&v60, (_BYTE *)&v57 + 3, 0, 0); /*0x651820*/
    v10 = (char *)&off_821F08; /*0x65182b*/
    if ( !HIBYTE(v57) ) /*0x651830*/
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
            BYTE1(v54),
            BYTE2(v54),
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
        fprintf(v6, "Address: %d.%d.%d.%d\n", (unsigned __int8)v58, BYTE1(v58), BYTE2(v58), HIBYTE(v58));
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



// ==== 0x00652100  nullsub_217  this=-  sig=ida-proto ====
void nullsub_217()
{
  ; /*0x652100*/
}



// ==== 0x00652110  Network_Process_652110  this=-  sig=ida-proto ====
char *__fastcall Network_Process_652110(int a1, int a2)
{
  char *result; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax

  result = *(char **)&dword_A8B238; /*0x652110*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x65211e*/
  {
    v4 = *(_DWORD *)(a1 + 24 * a2); /*0x652135*/
    v5 = a1 + 24 * a2; /*0x652138*/
    if ( byte_A8DBA0 ) /*0x652142*/
    {
      LOWORD(v6) = Math::RoundToInt(-60.0 / ((double)(int)dword_A8B558 / (double)(unsigned int)dword_A8B554)); /*0x652168*/
      v7 = (dword_A8E2D4 >> 1) + (*(_DWORD *)(v5 + 16) >> 1) - v6 / 2; /*0x652183*/
    }
    else
    {
      v7 = (unsigned int)IPXManagerClass::CheckStatus(&unk_A8E9C0, a2) >> 1; /*0x652192*/
    }
    result = (char *)(*(_DWORD *)&stru_A8EB00.?[416] - v7 * *(_DWORD *)&g_MissionQueueFrame.waypoints[282] / 0x3C - v4); /*0x6521af*/
    dword_A8DB7C[a2] = result; /*0x6521b2*/
  }
  else
  {
    dword_A8DB7C[a2] = 0; /*0x652120*/
  }
  return result; /*0x65212b*/
}



// ==== 0x006521C0  Network::RecordEvent  this=Network  sig=csp ====
char __stdcall Network_RecordEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  char *v27; // edi

  *(_DWORD *)((char *)&a1 + 3) = dword_A8ED84; /*0x6521c5*/
  if ( dword_A802C8 >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &byte_A802D4[111 * dword_A802D0]; /*0x6521eb*/
  qmemcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
  v27 += 108; /*0x6521f2*/
  *(_WORD *)v27 = a27; /*0x6521f4*/
  v27[2] = BYTE2(a27); /*0x6521f6*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x652205*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x652215*/
  ++dword_A802C8; /*0x652220*/
  return 1; /*0x652227*/
}



// ==== 0x00652230  ObjectClass::Render_Show  this=AbstractClass  sig=csp ====
char __thiscall Render_Show(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  char result; // al
  int *v5; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-18h]
  int v7; // [esp+0h] [ebp-8h]

  v2 = (unsigned int)dword_A8ED84 + 1; /*0x652240*/
  if ( dword_A8B24C == 2 ) /*0x652246*/
    v2 = dword_A8B554 * (((unsigned int)dword_A8ED84 + dword_A8B554) / dword_A8B554); /*0x652255*/
  *(_DWORD *)(this + 3) = v2; /*0x652258*/
  if ( dword_8B41F8 >= 0x4000 ) /*0x652265*/
  {
    result = dword_A8B238[0]; /*0x6522b7*/
    if ( dword_A8B238[0] && dword_A8B238[0] != 5 ) /*0x6522c7*/
    {
      if ( dword_A8B238[0] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++dword_A8DAB4; /*0x6522e4*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Queue_CPP, 8878); /*0x65230f*/
      v5 = (int *)GetStringCSF(g_Str_TXT_QUEUE_FULL, 0, g_Str_File_Queue_CPP, 8878); /*0x65231a*/
      Dialog::ShowMessageBox(v5, StringCSF, 0, 0, 0, v7); /*0x652324*/
      dword_A8B8B8 = 0; /*0x652335*/
      --dword_A8DAB4; /*0x652341*/
      dword_A8B8BC = 0; /*0x652347*/
      byte_A8E9A0 = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( dword_A8B238[0] == 4 ) /*0x652366*/
      {
        byte_B0BD78 = 1; /*0x65236a*/
        byte_A8B8C1 = 1; /*0x65236f*/
        byte_A8B8C2 = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return ToggleDisplayMode(0); /*0x65238c*/
    }
  }
  else
  {
    if ( dword_8B41FC ) /*0x65226e*/
      v3 = dword_8B41FC - 1; /*0x652277*/
    else
      v3 = 0x3FFF; /*0x652270*/
    dword_8B41FC = v3; /*0x65227b*/
    qmemcpy(&byte_8B4204[111 * v3], (const void *)this, 0x6Fu); /*0x652290*/
    dword_A70204[dword_8B41FC] = timeGetTime(); /*0x6522a3*/
    return ++dword_8B41F8; /*0x6522af*/
  }
  return result; /*0x6522a2*/
}



// ==== 0x006523A0  Network::SendUnreachable  this=Network  sig=csp ====
int Network::SendUnreachable(Network *this)
{
  int result; // eax
  int QueueCount; // edi
  int i; // ebx
  void *v4; // esi
  char *v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int Ticks; // [esp+0h] [ebp-1E4h]
  int v11[3]; // [esp+10h] [ebp-1D4h] BYREF
  int v12[11]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v13; // [esp+48h] [ebp-19Ch]
  char v14; // [esp+4Ah] [ebp-19Ah]

  Debug::Log(); /*0x6523ab*/
  result = *(_DWORD *)&dword_A8B238; /*0x6523b0*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6523bb*/
  {
    Network::Disconnect((Network *)&unk_A8E9C0); /*0x6523c9*/
    QueueCount = Network::GetQueueCount(&unk_A8E9C0); /*0x6523d8*/
    for ( i = 0; i < *(int *)&stru_B052C0.__pad_0[32]; ++i ) /*0x6523e7*/
    {
      memset(v12, 0, sizeof(v12)); /*0x6523f8*/
      v13 = 0; /*0x6523fa*/
      v14 = 0; /*0x6523fc*/
      v12[0] = 47; /*0x652402*/
      strcpy((char *)&v12[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x65242c*/
      v4 = (void *)Network::checkTimeout((Network *)&stru_B052C0.__pad_0[16], i); /*0x65243f*/
      if ( v4 ) /*0x652443*/
      {
        v5 = ToWideStringChar((char *)*dword_A8DA78); /*0x65244d*/
        if ( _strcmpi((char *)v4, v5) ) /*0x652454*/
        {
          Debug::Log(); /*0x652466*/
          v6 = (int *)Network::processAcknowledgment((Network *)&stru_B052C0.__pad_0[16], v4); /*0x652474*/
          v11[0] = *v6; /*0x65247b*/
          v11[1] = v6[1]; /*0x652485*/
          v11[2] = v6[2]; /*0x652491*/
          LOWORD(v7) = Network::handleDisconnect((Network *)&stru_B052C0.__pad_0[16], v4); /*0x652495*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)v12, 47, 1, (int)v11, v7, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = Timer::GetTicks(); /*0x6524d3*/
    while ( Network::GetQueueCount(&unk_A8E9C0) > QueueCount ) /*0x6524e6*/
    {
      v8 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x6524fe*/
        if ( v9 >= 300 ) /*0x652504*/
          break; /*0x652504*/
        v8 = 300 - v9; /*0x652506*/
      }
      if ( !v8 ) /*0x65250a*/
        break; /*0x65250a*/
      Event::Dispatch(); /*0x65250c*/
    }
    result = *(_DWORD *)&dword_A8B238; /*0x65251f*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x65252a*/
      return Connection::Close((Connection *)&unk_A8E9C0); /*0x652531*/
  }
  return result; /*0x652536*/
}



// ==== 0x00652540  ObjectClass::Network_Process  this=ObjectClass  sig=csp ====
int __thiscall Network_Process_652540(ObjectClass *this)
{
  char *vtable0; // eax

  vtable0 = (char *)this->AbstractClass; /*0x652540*/
  if ( this->AbstractClass ) /*0x652540*/
  {
    this->? = (void *)(((unsigned __int8)this->? + 1) & 0x7F); /*0x65254e*/
    this->AbstractClass = vtable0 - 1; /*0x652551*/
  }
  return (int)this->AbstractClass; /*0x652555*/
}



// ==== 0x00652560  ObjectClass::Network_Process  this=ObjectClass  sig=csp ====
char __thiscall Network_Process_652560(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x652560*/
  v3 = a2; /*0x652563*/
  if ( a2 >= uniqueId ) /*0x652569*/
    return 0; /*0x65258c*/
  v4 = uniqueId - 1; /*0x65256b*/
  this->? = v4; /*0x65256e*/
  if ( a2 < v4 ) /*0x652571*/
  {
    do /*0x652584*/
    {
      ++v3; /*0x652577*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x65257b*/
    }
    while ( v3 < this->? ); /*0x652584*/
  }
  return 1; /*0x652589*/
}



// ==== 0x006525A0  ObjectClass::Network_Process_6525A0  this=ObjectClass  sig=csp ====
char __thiscall sub_6525A0(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x6525ac*/
    return 0; /*0x6525ac*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x6525c0*/
  if ( !v3 ) /*0x6525c7*/
    return 0; /*0x652620*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x6525d5*/
  {
    v5 = 8 * i; /*0x6525d9*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x6525e2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x6525e7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x6525fb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x652606*/
  *(_DWORD *)this = v3; /*0x652608*/
  *(_DWORD *)(this + 8) = v7; /*0x65260a*/
  *(_DWORD *)(this + 16) = 0; /*0x65260d*/
  return 1; /*0x652614*/
}



// ==== 0x00652630  sub_652630  this=-  sig=ida-proto ====
int __cdecl sub_652630(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x652640*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x00652660  sub_652660  this=-  sig=ida-proto ====
int sub_652660()
{
  dword_B048B0 = 0; /*0x652662*/
  dword_B048B4 = 0; /*0x652667*/
  dword_B048B8 = 0; /*0x65266c*/
  dword_B048BC = 0; /*0x652671*/
  return 0; /*0x652676*/
}



// ==== 0x00652680  sub_652680  this=-  sig=ida-proto ====
void sub_652680()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65268c*/
  dbl_B048D8 = Math::Sqrt(v0 + v0); /*0x65269e*/
}



// ==== 0x006526B0  sub_6526B0  this=-  sig=ida-proto ====
void sub_6526B0()
{
  dbl_B049F8 = dbl_B048D8 / 60.0; /*0x6526bc*/
}



// ==== 0x006526D0  sub_6526D0  this=-  sig=ida-proto ====
void sub_6526D0()
{
  dbl_B049E0 = 1.0 / dbl_B049F8; /*0x6526dc*/
}



// ==== 0x006526F0  sub_6526F0  this=-  sig=ida-proto ====
void sub_6526F0()
{
  dbl_B049D8 = 0.0174532925199433 * 45.0; /*0x6526fc*/
}



// ==== 0x00652710  sub_652710  this=-  sig=ida-proto ====
void sub_652710()
{
  dbl_B048E8 = 0.0174532925199433 * 60.0; /*0x65271c*/
}



// ==== 0x00652730  sub_652730  this=-  sig=ida-proto ====
void sub_652730()
{
  dbl_B048A0 = 0.0174532925199433 * 90.0; /*0x65273c*/
}



// ==== 0x00652750  sub_652750  this=-  sig=ida-proto ====
__int64 sub_652750()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B048A0 - dbl_B048E8); /*0x652762*/
  result = Math::RoundToInt(v0 * dbl_B048D8 * 0.5); /*0x652776*/
  dword_B04A34 = result; /*0x65277b*/
  return result; /*0x652780*/
}



// ==== 0x00652790  sub_652790  this=-  sig=ida-proto ====
void sub_652790()
{
  dbl_B048F0 = Math::ArcTan((double)dword_B04A34 * 0.00390625); /*0x6527a7*/
}



// ==== 0x006527C0  sub_6527C0  this=-  sig=ida-proto ====
void sub_6527C0()
{
  dbl_B04970 = Math::ArcTan((double)(2 * dword_B04A34) / dbl_B048D8); /*0x6527e2*/
}



// ==== 0x006527F0  sub_6527F0  this=-  sig=ida-proto ====
__int64 sub_6527F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04A34) + 0.5); /*0x65280b*/
  dword_B049F4 = result; /*0x652810*/
  return result; /*0x652816*/
}



// ==== 0x00652820  sub_652820  this=-  sig=ida-proto ====
int sub_652820()
{
  dword_B048C0 = 0; /*0x652822*/
  return 0; /*0x65282e*/
}



// ==== 0x00652830  sub_652830  this=-  sig=ida-proto ====
int sub_652830()
{
  dword_B04900 = 0; /*0x652832*/
  dword_B04904 = 0; /*0x652837*/
  dword_B04908 = 0; /*0x65283c*/
  return 0; /*0x652841*/
}



// ==== 0x00652850  sub_652850  this=-  sig=ida-proto ====
int sub_652850()
{
  dword_B049F0 = 0; /*0x652855*/
  dword_B049E8 = 128; /*0x65285f*/
  dword_B049EC = 128; /*0x652864*/
  return 128; /*0x652869*/
}



// ==== 0x00652870  sub_652870  this=-  sig=ida-proto ====
int sub_652870()
{
  GadgetClass::Construct(stru_B04A10, 0, 0, 0, 0, 159, 1); /*0x652884*/
  stru_B04A10[0] = (int)&RadarClass::RTacticalClass::`vftable'; /*0x65288e*/
  return atexit(sub_6528A0); /*0x65289e*/
}



// ==== 0x006528A0  sub_6528A0  this=-  sig=ida-proto ====
void __cdecl sub_6528A0()
{
  if ( (byte_B048A8 & 1) == 0 ) /*0x6528aa*/
  {
    byte_B048A8 |= 1u; /*0x6528ae*/
    GadgetClass::Dtor(stru_B04A10); /*0x6528b9*/
  }
}



// ==== 0x006528C0  ScreenEffect::StubReturnFalse  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturnFalse()
{
  ; /*0x6528c0*/
}



// ==== 0x006528D0  sub_6528D0  this=-  sig=ida-proto ====
int sub_6528D0()
{
  ShapeButtonClass::Init(stru_B04978); /*0x6528d5*/
  return atexit(sub_6528F0); /*0x6528e5*/
}



// ==== 0x006528F0  sub_6528F0  this=-  sig=ida-proto ====
void __cdecl sub_6528F0()
{
  if ( (byte_B048A8 & 2) == 0 ) /*0x6528fa*/
  {
    byte_B048A8 |= 2u; /*0x6528fe*/
    ShapeButtonClass::Destructor((int)stru_B04978); /*0x652909*/
  }
}



// ==== 0x00652910  ScreenEffect::StubReturnVoid  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturnVoid()
{
  ; /*0x652910*/
}



// ==== 0x00652920  sub_652920  this=-  sig=ida-proto ====
int sub_652920()
{
  ShapeButtonClass::Init(stru_B04910); /*0x652925*/
  return atexit(sub_652940); /*0x652935*/
}



// ==== 0x00652940  sub_652940  this=-  sig=ida-proto ====
void __cdecl sub_652940()
{
  if ( (byte_B048A8 & 4) == 0 ) /*0x65294a*/
  {
    byte_B048A8 |= 4u; /*0x65294e*/
    ShapeButtonClass::Destructor((int)stru_B04910); /*0x652959*/
  }
}



// ==== 0x00652960  RadarClass::Construct  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::Construct(RadarClass *this)
{
  int v2; // ebx
  int v3; // edx
  VectorClass *p_RadarClass_field_0x1278; // edi
  int v5; // ebp
  int v6; // edx
  int v7; // edx
  MapClass *v8; // eax
  MapClass *v9; // edi
  _DWORD *v10; // eax
  RadarHashVector *v11; // ebp
  void *v12; // eax
  int MapClass_field_0x8; // ecx
  int v14; // eax
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]

  RadarClass::RenderSpySatellite(this); /*0x652969*/
  v2 = 0; /*0x65296e*/
  this->RadarClass_field_0x11E8 = 0; /*0x652976*/
  this->RadarClass_field_0x11EC = 0; /*0x65297c*/
  this->RadarClass_field_0x11F0 = 0; /*0x652982*/
  this->RadarClass_field_0x11F4 = 0; /*0x652988*/
  this->RadarClass_field_0x11F8 = 0; /*0x65298e*/
  this->RadarClass_field_0x11FC = 0; /*0x652994*/
  this->RadarClass_field_0x1200 = 0; /*0x65299a*/
  this->RadarClass_field_0x1204 = 0; /*0x6529a0*/
  *(_DWORD *)&this->__pad_1208[4] = dword_B048B0; /*0x6529b2*/
  *(_DWORD *)&this->__pad_1208[8] = dword_B048B4; /*0x6529bc*/
  *(_DWORD *)&this->__pad_1208[12] = dword_B048B8; /*0x6529c5*/
  v3 = dword_B048BC; /*0x6529c8*/
  this->RadarClass_field_0x121C = 0; /*0x6529d0*/
  *(_DWORD *)&this->__pad_1208[16] = v3; /*0x6529d6*/
  this->RadarClass_field_0x1220 = 0; /*0x6529d9*/
  VectorClass::CellConstructor((VectorClass *)&this->RadarClass_field_0x1224, 0, 0); /*0x6529df*/
  this->RadarClass_field_0x1224 = (VectorClass *)&DynamicVectorClass<Cell>::`vftable'; /*0x6529e9*/
  *(_DWORD *)&this->__pad_122C[12] = 10; /*0x6529ef*/
  *(_DWORD *)&this->__pad_122C[8] = 0; /*0x6529f2*/
  this->RadarClass_field_0x123C = 0; /*0x6529fb*/
  this->RadarClass_field_0x1240 = 0; /*0x652a01*/
  this->RadarClass_field_0x1244 = 0; /*0x652a07*/
  this->RadarClass_field_0x1248 = 0; /*0x652a0e*/
  this->RadarClass_field_0x124C = 0; /*0x652a14*/
  this->RadarClass_field_0x1250 = 0; /*0x652a1a*/
  this->RadarClass_field_0x1254 = 0; /*0x652a20*/
  this->RadarClass_field_0x1258 = 0; /*0x652a29*/
  VectorClass::PointConstructor((VectorClass *)&this->RadarClass_field_0x125C, 0, 0); /*0x652a2f*/
  this->RadarClass_field_0x125C = (VectorClass *)&DynamicVectorClass<Point2D>::`vftable'; /*0x652a34*/
  *(_DWORD *)&this->__pad_1264[12] = 10; /*0x652a3a*/
  *(_DWORD *)&this->__pad_1264[8] = 0; /*0x652a3d*/
  this->RadarClass_field_0x1274 = 0; /*0x652a40*/
  p_RadarClass_field_0x1278 = (VectorClass *)&this->RadarClass_field_0x1278; /*0x652a46*/
  v5 = 22; /*0x652a4c*/
  do /*0x652a6e*/
  {
    VectorClass::PointConstructor(p_RadarClass_field_0x1278, 0, 0); /*0x652a55*/
    p_RadarClass_field_0x1278->vtable0 = &DynamicVectorClass<Point2D>::`vftable'; /*0x652a5a*/
    p_RadarClass_field_0x1278[1].Items = (void *)10; /*0x652a60*/
    p_RadarClass_field_0x1278[1].vtable0 = 0; /*0x652a67*/
    p_RadarClass_field_0x1278 = (VectorClass *)((char *)p_RadarClass_field_0x1278 + 24); /*0x652a6a*/
    --v5; /*0x652a6d*/
  }
  while ( v5 ); /*0x652a6e*/
  this->RadarClass_field_0x1488 = 0; /*0x652a70*/
  *(_DWORD *)this->__pad_148C = 1; /*0x652a76*/
  this->RadarClass_field_0x1490 = 0; /*0x652a80*/
  this->RadarClass_field_0x1494 = 0; /*0x652a86*/
  this->RadarClass_field_0x1498 = 0; /*0x652a8c*/
  this->RadarClass_field_0x149C = (RadarClass *)dword_B048B0; /*0x652a9e*/
  *(_DWORD *)this->__pad_14A0 = dword_B048B4; /*0x652aaa*/
  this->RadarClass_field_0x14A4 = (CampaignClass *)dword_B048B8; /*0x652ab3*/
  v6 = dword_B048BC; /*0x652ab6*/
  this->RadarClass_field_0x14AC = 0; /*0x652abc*/
  this->RadarClass_field_0x14B0 = 0; /*0x652ac2*/
  *(_DWORD *)this->__pad_14A8 = v6; /*0x652ac8*/
  this->RadarClass_field_0x14B4 = 0; /*0x652acb*/
  this->__pad_14B8[4] = 0; /*0x652ad1*/
  this->__pad_14B8[5] = 0; /*0x652ad7*/
  *(_DWORD *)&this->__pad_14C4[16] = -1; /*0x652add*/
  this->__pad_14C4[20] = 0; /*0x652ae7*/
  this->RadarClass_field_0x14D9[0] = 0; /*0x652aed*/
  this->RadarClass_field_0x14D9[1] = 0; /*0x652af3*/
  *(_DWORD *)&this->RadarClass_field_0x14D9[3] = dword_B048B0; /*0x652b05*/
  *(_DWORD *)&this->__pad_14DD[3] = dword_B048B4; /*0x652b11*/
  *(_DWORD *)&this->__pad_14DD[7] = dword_B048B8; /*0x652b1a*/
  v7 = dword_B048BC; /*0x652b1d*/
  this->RadarClass_field_0x14FC = 0; /*0x652b29*/
  *(_DWORD *)&this->__pad_14DD[11] = v7; /*0x652b2f*/
  *(_DWORD *)this->__pad_1500 = Timer::GetTicks(); /*0x652b37*/
  this->RadarClass_field_0x1508 = 0; /*0x652b3d*/
  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x652b45*/
  v8 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x652b4b*/
  v9 = v8; /*0x652b50*/
  if ( v8 ) /*0x652b57*/
  {
    v8->MapClass_field_0x4 = Radar::PixelIndex; /*0x652b63*/
    v8->MapClass_field_0x8 = (void *)256; /*0x652b6a*/
    v8->MapClass_field_0xC = (void *)10; /*0x652b71*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x652b74*/
    if ( v10 ) /*0x652b7e*/
    {
      v11 = (RadarHashVector *)(v10 + 1); /*0x652b80*/
      *v10 = 256; /*0x652b83*/
      v17 = v10 + 1; /*0x652b89*/
      v16 = 256; /*0x652b8d*/
      do /*0x652baa*/
      {
        RadarHashVector::Construct(v11, 0, 0); /*0x652b99*/
        v11 = (RadarHashVector *)((char *)v11 + 24); /*0x652ba2*/
        --v16; /*0x652ba6*/
      }
      while ( v16 ); /*0x652baa*/
      v12 = v17; /*0x652bac*/
    }
    else
    {
      v12 = 0; /*0x652bb7*/
    }
    MapClass_field_0x8 = (int)v9->MapClass_field_0x8; /*0x652bb9*/
    v9->MapClass_field_0x0 = v12; /*0x652bbc*/
    v14 = 0; /*0x652bbe*/
    if ( MapClass_field_0x8 > 0 ) /*0x652bc2*/
    {
      do /*0x652bd3*/
      {
        ++v14; /*0x652bc6*/
        *(_DWORD *)((char *)v9->MapClass_field_0x0 + v2 + 20) = 10; /*0x652bc7*/
        v2 += 24; /*0x652bce*/
      }
      while ( v14 < (int)v9->MapClass_field_0x8 ); /*0x652bd3*/
    }
  }
  else
  {
    v9 = 0; /*0x652bd7*/
  }
  this->RadarClass_field_0x1258 = v9; /*0x652bd9*/
  *(_DWORD *)&this->__pad_1264[12] = 500; /*0x652be5*/
  AudioController::Init((AudioController *)&this->RadarClass_field_0x14C0); /*0x652bef*/
  return &this->RadarClass_field_0x0; /*0x652bf6*/
}



// ==== 0x00652C00  RadarClass::Destruct  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destruct(RadarClass *this)
{
  MapClass **p_RadarClass_field_0x1488; // esi
  int v3; // ebp
  void *v4; // eax
  CampaignClass *RadarClass_field_0x1260; // eax
  CampaignClass *RadarClass_field_0x1228; // eax
  int result; // eax

  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x652c0c*/
  AudioFileClass::Release((AudioFileClass *)&this->RadarClass_field_0x14C0); /*0x652c12*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x652c19*/
  p_RadarClass_field_0x1488 = &this->RadarClass_field_0x1488; /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = *(p_RadarClass_field_0x1488 - 5); /*0x652c2b*/
    p_RadarClass_field_0x1488 -= 6; /*0x652c2e*/
    *p_RadarClass_field_0x1488 = (MapClass *)&VectorClass<Point2D>::`vftable'; /*0x652c33*/
    if ( v4 && *((_BYTE *)p_RadarClass_field_0x1488 + 13) ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      p_RadarClass_field_0x1488[1] = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    *((_BYTE *)p_RadarClass_field_0x1488 + 13) = 0; /*0x652c4d*/
    p_RadarClass_field_0x1488[2] = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x652c55*/
  this->RadarClass_field_0x125C = (VectorClass *)&VectorClass<Point2D>::`vftable'; /*0x652c5b*/
  if ( RadarClass_field_0x1260 && this->__pad_1264[5] ) /*0x652c69*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x652c72*/
    this->RadarClass_field_0x1260 = 0; /*0x652c7a*/
  }
  this->__pad_1264[5] = 0; /*0x652c80*/
  *(_DWORD *)this->__pad_1264 = 0; /*0x652c86*/
  RadarClass_field_0x1228 = this->RadarClass_field_0x1228; /*0x652c8c*/
  this->RadarClass_field_0x1224 = (VectorClass *)&VectorClass<Cell>::`vftable'; /*0x652c92*/
  if ( RadarClass_field_0x1228 && this->__pad_122C[5] ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x652ca9*/
    this->RadarClass_field_0x1228 = 0; /*0x652cb1*/
  }
  this->__pad_122C[5] = 0; /*0x652cb9*/
  *(_DWORD *)this->__pad_122C = 0; /*0x652cbf*/
  MapClass::Destruct((char *)this); /*0x652cc5*/
  return result; /*0x652cca*/
}



// ==== 0x00652CD0  ObjectClass::method_652CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_652CD0(ObjectClass *this)
{
  *((_DWORD *)this + 1323) = 4; /*0x652cd0*/
  *((_DWORD *)this + 1343) = 25; /*0x652cda*/
}



// ==== 0x00652CF0  RadarClass::Destru_vt05  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt05(RadarClass *this)
{
  int result; // eax

  Debug::Log(); /*0x652cf8*/
  this->RadarClass_field_0x1200 = (MapClass *)140; /*0x652d07*/
  this->RadarClass_field_0x11F8 = (MapClass *)140; /*0x652d0d*/
  *(_DWORD *)&this->__pad_6F8[2796] = 0; /*0x652d18*/
  this->RadarClass_field_0x11E8 = (MapClass *)16; /*0x652d22*/
  this->RadarClass_field_0x11EC = (MapClass *)48; /*0x652d2c*/
  this->RadarClass_field_0x1204 = (MapClass *)108; /*0x652d36*/
  this->RadarClass_field_0x11FC = (MapClass *)108; /*0x652d3c*/
  this->RadarClass_field_0x11F4 = (GadgetClass *)49; /*0x652d42*/
  DisplayClass::LoadTypeData((DisplayClass *)this); /*0x652d4c*/
  stru_B04A10.Height = (int)this->RadarClass_field_0x11F4->__pad_0; /*0x652d57*/
  *(_DWORD *)&stru_B04A10.Visible = this->RadarClass_field_0x1200; /*0x652d62*/
  stru_B04A10.ID = (int)this->RadarClass_field_0x1204; /*0x652d73*/
  dword_B04A30 = 223; /*0x652d79*/
  result = VocClass::FindByName(&stru_8392C0); /*0x652d83*/
  *(_DWORD *)&this->__pad_14C4[16] = result; /*0x652d88*/
  return result; /*0x652d8e*/
}



// ==== 0x00652D90  RadarClass::Destru_vt50  this=RadarClass  sig=csp ====
void RadarClass::Destru_vt50(RadarClass *this)
{
  if ( byte_B048F9 ) /*0x652d9a*/
  {
    __3_YAXPAX_Z(dword_B048E0); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    __3_YAXPAX_Z(dword_B048AC); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/
}



// ==== 0x00652DE0  RadarClass::Destru_vt07  this=RadarClass  sig=csp ====
void __thiscall RadarClass::Destru_vt07(RadarClass *this)
{
  VectorClass *RadarClass_field_0x1224; // eax

  DisplayClass::SetSize((DisplayClass *)this); /*0x652de3*/
  Debug::Log(); /*0x652ded*/
  this->RadarClass_field_0x14AC = 0; /*0x652dfa*/
  this->RadarClass_field_0x14B0 = 0; /*0x652e00*/
  this->__pad_14B8[5] = 0; /*0x652e06*/
  this->__pad_14B8[4] = 0; /*0x652e0c*/
  this->RadarClass_field_0x14FC = 0; /*0x652e12*/
  this->__pad_14C4[20] = 0; /*0x652e18*/
  RadarClass_field_0x1224 = this->RadarClass_field_0x1224; /*0x652e1e*/
  this->RadarClass_field_0x14D9[0] = 1; /*0x652e23*/
  (*(void (**)(void))&RadarClass_field_0x1224->IsInitialized)(); /*0x652e2a*/
  (*(void (__thiscall **)(VectorClass **))&this->RadarClass_field_0x125C->IsInitialized)(&this->RadarClass_field_0x125C); /*0x652e39*/
  Debug::Log(); /*0x652e41*/
}



// ==== 0x00652E50  ObjectClass::resetObjectState  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::resetObjectState(ObjectClass *this, char a2)
{
  void (__stdcall **vtable0)(GadgetClass *); // eax

  vtable0 = (void (__stdcall **)(GadgetClass *))this->AbstractClass; /*0x652e5e*/
  if ( a2 ) /*0x652e60*/
  {
    vtable0[12](&stru_B04978); /*0x652e62*/
    return (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B04910); /*0x652e6e*/
  }
  else
  {
    vtable0[13](&stru_B04978); /*0x652e75*/
    return (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 13))(this, &stru_B04910); /*0x652e81*/
  }
}



// ==== 0x00652E90  RadarClass::Destru_vt53  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt53(RadarClass *this)
{
  void **p_MapClass_field_0x4; // eax
  int v3; // ecx
  int v4; // eax
  int result; // eax

  Debug::Log(); /*0x652e99*/
  (*((void (__thiscall **)(RadarClass *))this->RadarClass_field_0x0 + 50))(this); /*0x652ea5*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x652eb1*/
  {
    this->RadarClass_field_0x11F0 = (MapClass *)16; /*0x652f13*/
    dword_B04A00 = *(_DWORD *)&this->__pad_6F8[2796] + 14; /*0x652f22*/
    p_MapClass_field_0x4 = (void **)((char *)&this->RadarClass_field_0x11E8->MapClass_field_0x4 + 1); /*0x652f2d*/
    dword_B04A04 = (int)p_MapClass_field_0x4; /*0x652f30*/
    v3 = *(_DWORD *)&this->__pad_6F8[2796] + 86; /*0x652f3b*/
  }
  else
  {
    this->RadarClass_field_0x11F0 = (MapClass *)16; /*0x652ecf*/
    dword_B04A00 = *(_DWORD *)&this->__pad_6F8[2796] + 11; /*0x652ede*/
    p_MapClass_field_0x4 = &this->RadarClass_field_0x11E8->MapClass_field_0x4; /*0x652ee9*/
    dword_B04A04 = (int)p_MapClass_field_0x4; /*0x652eec*/
    v3 = *(_DWORD *)&this->__pad_6F8[2796] + 83; /*0x652ef7*/
  }
  dword_B048C8 = v3; /*0x652f3e*/
  dword_B048CC = (int)p_MapClass_field_0x4; /*0x652f4a*/
  stru_B04A10.Width = (int)this->RadarClass_field_0x11F0; /*0x652f55*/
  dword_B048E0 = LoadFileSHP(off_8391F4, (bool *)&byte_B048F9); /*0x652f70*/
  dword_B048AC = LoadFileSHP(off_8391F8, (bool *)&byte_B048F8); /*0x652f80*/
  dword_B04A08 = *((__int16 *)dword_B048E0 + 1); /*0x652f89*/
  dword_B04A0C = *((__int16 *)dword_B048E0 + 2); /*0x652f93*/
  dword_B048D0 = *((__int16 *)dword_B048AC + 1); /*0x652fa3*/
  v4 = *((__int16 *)dword_B048AC + 2); /*0x652fab*/
  dword_B04A38 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[696]; /*0x652fb5*/
  dword_B048D4 = v4; /*0x652fc1*/
  result = (unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[620] >> g_BitShift_Green_0 << g_BitShift_Red; /*0x653001*/
  *(_DWORD *)this->__pad_1208 = result /*0x653005*/
                              | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
                              | ((unsigned __int8)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
  return result; /*0x653000*/
}



// ==== 0x00653010  RadarClass::CreateScrollButtons  this=RadarClass  sig=csp ====
void SidebarClass::CreateScrollButtons(RadarClass *this)
{
  DisplayClass *v1; // ecx

  DisplayClass::ddtor(v1); /*0x653011*/
  if ( !stru_A8EB00.?[391] ) /*0x65301f*/
  {
    dword_B0499C = 242; /*0x65303d*/
    byte_B049C4 = 1; /*0x653047*/
    dword_B049C8 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x65304e*/
    byte_B049A5 = 0; /*0x653053*/
    dword_B049A8 = 0; /*0x653059*/
    dword_B04998 = 5; /*0x65305f*/
    Rect_Point::Set(&stru_B04978, dword_B04A00, dword_B04A04); /*0x653069*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04978, (int)dword_B048E0, 0, 0); /*0x65307b*/
    VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04978); /*0x653085*/
    dword_B04960 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x65309b*/
    dword_B04934 = 243; /*0x6530a8*/
    byte_B0495C = 1; /*0x6530b2*/
    byte_B0493D = 0; /*0x6530b9*/
    dword_B04940 = 0; /*0x6530bf*/
    dword_B04930 = 5; /*0x6530c5*/
    Rect_Point::Set(&stru_B04910, dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04910, (int)dword_B048AC, 0, 0); /*0x6530e2*/
    VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04910); /*0x6530ec*/
  }
}



// ==== 0x00653100  RadarClass::Destru_vt16  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt16(RadarClass *this, char a2)
{
  int v2; // eax
  char v3; // bl
  bool v5; // al
  char v6; // cl
  bool v7; // al
  int v8; // edi
  int *v9; // eax
  void *RadarClass_field_0x14AC; // eax
  MapClass *RadarClass_field_0x1508; // edi
  int v12; // eax
  int Ticks; // eax
  MapClass *v14; // edx
  void *v15; // eax
  MapClass *RadarClass_field_0x14FC; // ecx
  int v17; // edi
  MapClass *v18; // eax
  int v19; // edi
  int *v20; // eax
  MapClass *RadarClass_field_0x11EC; // ecx
  char v22; // al
  int v23; // edi
  int *v24; // eax
  MapClass *RadarClass_field_0x11F0; // eax
  void *RadarClass_field_0x11F4; // ecx
  int RadarClass_field_0x1200; // edx
  int RadarClass_field_0x1204; // edi
  int v29; // edi
  int *v30; // eax
  char *v31; // ebp
  int v32; // eax
  int v33; // ecx
  int v34; // edi
  int v35; // ebx
  int v36; // edi
  int v37; // edx
  char *v38; // edi
  int v39; // ecx
  int v40; // esi
  int v41; // ebx
  int v42; // esi
  int v43; // edx
  ObjectClass *v45; // [esp+0h] [ebp-48h]
  int v46; // [esp+10h] [ebp-38h] BYREF
  MapClass *RadarClass_field_0x11E8; // [esp+14h] [ebp-34h]
  int v48; // [esp+18h] [ebp-30h] BYREF
  MapClass *v49; // [esp+1Ch] [ebp-2Ch]
  int v50; // [esp+20h] [ebp-28h]
  int v51; // [esp+24h] [ebp-24h]
  char v52[16]; // [esp+28h] [ebp-20h] BYREF
  char v53[16]; // [esp+38h] [ebp-10h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x653100*/
  v3 = 0; /*0x65310a*/
  if ( stru_A8EB00.?[391] ) /*0x653112*/
  {
    this->RadarClass_field_0x14D9[1] = 0; /*0x653114*/
    this->RadarClass_field_0x14D9[0] = 0; /*0x65311a*/
    return v2; /*0x653127*/
  }
  v5 = this->RadarClass_field_0x14D9[1] == 1 || a2 == 1; /*0x653148*/
  v6 = this->RadarClass_field_0x14D9[0]; /*0x65314a*/
  this->RadarClass_field_0x14D9[1] = v5; /*0x653150*/
  v7 = v6 == 1 || v5; /*0x653163*/
  this->RadarClass_field_0x14D9[0] = v7; /*0x653167*/
  if ( v7 ) /*0x65316d*/
  {
    v8 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[560]; /*0x653184*/
    v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x65318b*/
    RadarClass_field_0x11E8 = this->RadarClass_field_0x11E8; /*0x65319d*/
    v9 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6531a8*/
                  DSurface_Sidebar,
                  &v48);
    DrawToSurfaceSHP( /*0x6531c0*/
      (int)DSurface_Sidebar,
      *(int *)&stru_87F5F0.__pad_58[132],
      v8,
      0,
      &v46,
      v9,
      0,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    ShapeButton::Draw((ShapeButtonClass *)&stru_B04978, 1); /*0x6531cb*/
    ShapeButton::Draw((ShapeButtonClass *)&stru_B04910, 1); /*0x6531d6*/
  }
  RadarClass_field_0x14AC = this->RadarClass_field_0x14AC; /*0x6531db*/
  if ( RadarClass_field_0x14AC != (void *)1 ) /*0x6531e3*/
  {
    if ( !RadarClass_field_0x14AC ) /*0x6531eb*/
      goto LABEL_25; /*0x6531eb*/
    RadarClass_field_0x1508 = this->RadarClass_field_0x1508; /*0x6531f7*/
    if ( *(_DWORD *)this->__pad_1500 != -1 ) /*0x653200*/
    {
      v12 = Timer::GetTicks() - *(_DWORD *)this->__pad_1500; /*0x65320d*/
      if ( v12 >= (int)RadarClass_field_0x1508 ) /*0x653215*/
        goto LABEL_19; /*0x653215*/
      RadarClass_field_0x1508 = (MapClass *)((char *)RadarClass_field_0x1508 - v12); /*0x653217*/
    }
    if ( RadarClass_field_0x1508 ) /*0x65321b*/
      goto LABEL_25; /*0x65321b*/
LABEL_19:
    Ticks = Timer::GetTicks(); /*0x653221*/
    v14 = v49; /*0x65322a*/
    *(_DWORD *)this->__pad_1500 = Ticks; /*0x65322e*/
    v15 = this->RadarClass_field_0x14AC; /*0x653234*/
    *(_DWORD *)&this->__pad_1500[4] = v14; /*0x65323f*/
    this->RadarClass_field_0x1508 = (MapClass *)4; /*0x653245*/
    RadarClass_field_0x14FC = this->RadarClass_field_0x14FC; /*0x65324b*/
    v3 = 1; /*0x653254*/
    if ( v15 == (void *)2 ) /*0x653256*/
    {
      this->RadarClass_field_0x14FC = (MapClass *)((char *)RadarClass_field_0x14FC - 1); /*0x65325b*/
      if ( (int)&RadarClass_field_0x14FC[-1].MapClass_field_0x16C0 + 3 > 0 ) /*0x653263*/
        goto LABEL_25; /*0x653263*/
      v17 = 0; /*0x653265*/
      this->RadarClass_field_0x14AC = 0; /*0x65326d*/
      Mixer::ReleaseChannel((Mixer *)&this->RadarClass_field_0x14C0); /*0x653273*/
    }
    else
    {
      v17 = 32; /*0x65327b*/
      this->RadarClass_field_0x14FC = (MapClass *)((char *)&RadarClass_field_0x14FC->MapClass_field_0x0 + 1); /*0x653282*/
      if ( (int)&RadarClass_field_0x14FC->MapClass_field_0x0 + 1 < 32 ) /*0x65328a*/
        goto LABEL_25; /*0x65328a*/
      Mixer::ReleaseChannel((Mixer *)&this->RadarClass_field_0x14C0); /*0x653292*/
      this->RadarClass_field_0x14AC = (void *)1; /*0x653297*/
      this->RadarClass_field_0x14D9[1] = 1; /*0x65329d*/
    }
    this->RadarClass_field_0x14FC = (MapClass *)v17; /*0x6532a4*/
LABEL_25:
    if ( this->RadarClass_field_0x14AC != (void *)1 && (this->RadarClass_field_0x14D9[0] == 1 || v3) ) /*0x6532c1*/
    {
      v18 = this->RadarClass_field_0x14FC; /*0x6532c7*/
      if ( (int)v18 >= 0 && (int)v18 < *(__int16 *)(dword_B04A38 + 6) ) /*0x6532e1*/
      {
        v19 = VtableStub::72F510(); /*0x6532ec*/
        v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653304*/
        RadarClass_field_0x11E8 = this->RadarClass_field_0x11EC; /*0x653316*/
        v20 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x653321*/
                       DSurface_Sidebar,
                       &v48);
        DrawToSurfaceSHP( /*0x653340*/
          (int)DSurface_Sidebar,
          v19,
          dword_B04A38,
          (unsigned int)this->RadarClass_field_0x14FC,
          &v46,
          v20,
          0,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        RadarClass_field_0x11EC = this->RadarClass_field_0x11EC; /*0x653351*/
        *(_DWORD *)&this->__pad_1208[4] = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653362*/
        *(_DWORD *)&this->__pad_1208[8] = RadarClass_field_0x11EC; /*0x653364*/
        *(_DWORD *)&this->__pad_1208[12] = 168; /*0x653367*/
        *(_DWORD *)&this->__pad_1208[16] = 110; /*0x65336a*/
      }
    }
  }
  Map_Helper_65FDD0(); /*0x65336d*/
  Radar::RenderMinimap((Radar *)this); /*0x653374*/
  if ( this->RadarClass_field_0x14AC == (void *)1 ) /*0x65337f*/
  {
    switch ( (unsigned int)this->RadarClass_field_0x14B0 ) /*0x653395*/
    {
      case 1u: /*0x653395*/
      case 4u: /*0x653395*/
        break;
      case 2u: /*0x653395*/
        if ( this->RadarClass_field_0x14D9[0] ) /*0x65339c*/
        {
          v22 = this->RadarClass_field_0x14D9[1]; /*0x6533aa*/
          this->RadarClass_field_0x14D9[0] = 0; /*0x6533b0*/
          if ( v22 ) /*0x6533b9*/
          {
            v23 = VtableStub::72F510(); /*0x6533c0*/
            v46 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x6533d8*/
            RadarClass_field_0x11E8 = this->RadarClass_field_0x11EC; /*0x6533ea*/
            v24 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6533f5*/
                           DSurface_Sidebar,
                           v52);
            DrawToSurfaceSHP( /*0x65340f*/
              (int)DSurface_Sidebar,
              v23,
              dword_B04A38,
              0x20u,
              &v46,
              v24,
              0,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            RenderScoreboardSidebar(v45, 1); /*0x653416*/
            goto LABEL_40; /*0x65341b*/
          }
          RenderScoreboardSidebar(v45, 1); /*0x653422*/
          RadarClass_field_0x11F0 = this->RadarClass_field_0x11F0; /*0x653427*/
          RadarClass_field_0x11F4 = this->RadarClass_field_0x11F4; /*0x65342d*/
          RadarClass_field_0x1200 = (int)this->RadarClass_field_0x1200; /*0x653433*/
          RadarClass_field_0x1204 = (int)this->RadarClass_field_0x1204; /*0x653439*/
          goto LABEL_41; /*0x65343f*/
        }
        break; /*0x65343f*/
      case 3u: /*0x653395*/
        Game::ManageGameSpeed((Game *)this); /*0x653446*/
        break; /*0x65344b*/
      default:
        if ( this->RadarClass_field_0x14D9[0] ) /*0x653450*/
        {
          this->RadarClass_field_0x14D9[0] = 0; /*0x65345e*/
          v29 = VtableStub::72F510(); /*0x65346a*/
          v48 = *(_DWORD *)&this->__pad_6F8[2796]; /*0x653482*/
          v49 = this->RadarClass_field_0x11EC; /*0x653494*/
          v30 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x65349f*/
                         DSurface_Sidebar,
                         v53);
          DrawToSurfaceSHP((int)DSurface_Sidebar, v29, dword_B04A38, 0, &v48, v30, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6534b9*/
LABEL_40:
          RadarClass_field_0x11F0 = *(MapClass **)&this->__pad_6F8[2796]; /*0x6534be*/
          RadarClass_field_0x11F4 = this->RadarClass_field_0x11EC; /*0x6534c4*/
          RadarClass_field_0x1200 = 168; /*0x6534ca*/
          RadarClass_field_0x1204 = 110; /*0x6534d0*/
LABEL_41:
          *(_DWORD *)&this->__pad_1208[4] = RadarClass_field_0x11F0; /*0x6534d5*/
          *(_DWORD *)&this->__pad_1208[8] = RadarClass_field_0x11F4; /*0x6534e1*/
          *(_DWORD *)&this->__pad_1208[12] = RadarClass_field_0x1200; /*0x6534e4*/
          *(_DWORD *)&this->__pad_1208[16] = RadarClass_field_0x1204; /*0x6534e7*/
        }
        break; /*0x6534e7*/
    }
  }
  if ( this->RadarClass_field_0x14D9[1] ) /*0x6534ea*/
  {
    this->RadarClass_field_0x14D9[1] = 0; /*0x6534fa*/
    ShapeButton::Draw(&stru_B0B3A0, 1); /*0x653501*/
    ShapeButton::Draw(&stru_B07DF8, 1); /*0x65350c*/
  }
  if ( byte_B049CC ) /*0x653518*/
  {
    v31 = &this->__pad_1208[4]; /*0x653524*/
    if ( *(int *)&this->__pad_1208[12] <= 0 || *(int *)&this->__pad_1208[16] <= 0 ) /*0x653537*/
    {
      v32 = dword_B04A00; /*0x6535fe*/
      v33 = dword_B04A04; /*0x653603*/
      v37 = dword_B04A08; /*0x653609*/
      v36 = dword_B04A0C; /*0x65360f*/
    }
    else if ( dword_B04A08 <= 0 || dword_B04A0C <= 0 ) /*0x653551*/
    {
      v32 = *(_DWORD *)v31; /*0x6535f1*/
      v33 = *(_DWORD *)&this->__pad_1208[8]; /*0x6535f3*/
      v37 = *(_DWORD *)&this->__pad_1208[12]; /*0x6535f6*/
      v36 = *(_DWORD *)&this->__pad_1208[16]; /*0x6535f9*/
    }
    else
    {
      v32 = *(_DWORD *)v31; /*0x653559*/
      v33 = *(_DWORD *)&this->__pad_1208[8]; /*0x65355b*/
      v34 = *(_DWORD *)&this->__pad_1208[12]; /*0x65355e*/
      v50 = v34; /*0x653561*/
      v51 = *(_DWORD *)&this->__pad_1208[16]; /*0x653568*/
      if ( v32 > dword_B04A00 ) /*0x653574*/
      {
        v34 += v32 - dword_B04A00; /*0x653578*/
        v32 = dword_B04A00; /*0x65357a*/
        v50 = v34; /*0x65357c*/
      }
      if ( v33 > dword_B04A04 ) /*0x653588*/
      {
        v35 = v33 - dword_B04A04 + v51; /*0x653590*/
        v33 = dword_B04A04; /*0x653592*/
        v51 = v35; /*0x653598*/
      }
      if ( v32 + v34 < dword_B04A00 + dword_B04A08 ) /*0x6535a8*/
        v50 = dword_B04A08 - v32 + dword_B04A00 + 1; /*0x6535b6*/
      if ( v51 + v33 >= dword_B04A04 + dword_B04A0C ) /*0x6535d1*/
        v36 = v51; /*0x6535e5*/
      else
        v36 = dword_B04A04 - v33 + dword_B04A0C + 1; /*0x6535db*/
      v37 = v50; /*0x6535df*/
    }
    *(_DWORD *)v31 = v32; /*0x653615*/
    *(_DWORD *)&this->__pad_1208[8] = v33; /*0x653618*/
    *(_DWORD *)&this->__pad_1208[12] = v37; /*0x65361b*/
    *(_DWORD *)&this->__pad_1208[16] = v36; /*0x65361e*/
    g_TooltipActive = 1; /*0x653621*/
  }
  LOBYTE(v2) = byte_B04964; /*0x653628*/
  if ( byte_B04964 ) /*0x65362f*/
  {
    v38 = &this->__pad_1208[4]; /*0x65363b*/
    if ( *(int *)&this->__pad_1208[12] <= 0 || *(int *)&this->__pad_1208[16] <= 0 ) /*0x65364e*/
    {
      v2 = dword_B048C8; /*0x653701*/
      v39 = dword_B048CC; /*0x653706*/
      v43 = dword_B048D0; /*0x65370c*/
      v42 = dword_B048D4; /*0x653712*/
    }
    else if ( dword_B048D0 <= 0 || dword_B048D4 <= 0 ) /*0x653668*/
    {
      v2 = *(_DWORD *)v38; /*0x6536f4*/
      v39 = *(_DWORD *)&this->__pad_1208[8]; /*0x6536f6*/
      v43 = *(_DWORD *)&this->__pad_1208[12]; /*0x6536f9*/
      v42 = *(_DWORD *)&this->__pad_1208[16]; /*0x6536fc*/
    }
    else
    {
      v2 = *(_DWORD *)v38; /*0x653670*/
      v39 = *(_DWORD *)&this->__pad_1208[8]; /*0x653672*/
      v40 = *(_DWORD *)&this->__pad_1208[12]; /*0x653675*/
      v50 = *((_DWORD *)v38 + 2); /*0x653678*/
      v51 = *((_DWORD *)v38 + 3); /*0x65367f*/
      if ( v2 > dword_B048C8 ) /*0x65368b*/
      {
        v40 += v2 - dword_B048C8; /*0x65368f*/
        v2 = dword_B048C8; /*0x653691*/
        v50 = v40; /*0x653693*/
      }
      if ( v39 > dword_B048CC ) /*0x65369f*/
      {
        v41 = v39 - dword_B048CC + v51; /*0x6536a7*/
        v39 = dword_B048CC; /*0x6536a9*/
        v51 = v41; /*0x6536ab*/
      }
      if ( v2 + v40 < dword_B048C8 + dword_B048D0 ) /*0x6536bb*/
        v50 = dword_B048D0 - v2 + dword_B048C8 + 1; /*0x6536c9*/
      v42 = v51; /*0x6536cd*/
      if ( v51 + v39 < dword_B048CC + dword_B048D4 ) /*0x6536de*/
        v42 = dword_B048D4 + dword_B048CC - v39 + 1; /*0x6536e8*/
      v43 = v50; /*0x6536ec*/
    }
    *(_DWORD *)v38 = v2; /*0x653718*/
    *((_DWORD *)v38 + 1) = v39; /*0x65371a*/
    *((_DWORD *)v38 + 2) = v43; /*0x65371d*/
    *((_DWORD *)v38 + 3) = v42; /*0x653720*/
    g_TooltipActive = 1; /*0x653723*/
  }
  return v2; /*0x653120*/
}



// ==== 0x00653750  nullsub_220  this=-  sig=csp ====
void __stdcall nullsub_220(int a1, int a2)
{
  ; /*0x653750*/
}



// ==== 0x00653760  RadarClass::PixelToCellCheck  this=RadarClass  sig=csp ====
_DWORD *__stdcall TacticalClass::PixelToCellCheck(RadarClass *this, int *a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  void *v4; // edx
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x65376a*/
  v6[0] = *a2; /*0x65376d*/
  v6[1] = v2; /*0x653781*/
  v3 = TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v7, v6); /*0x653785*/
  if ( *v3 == dword_B04900 && v3[1] == dword_B04904 && v3[2] == dword_B04908 ) /*0x6537ad*/
  {
    this->RadarClass_field_0x0 = (void *)dword_B048C0; /*0x653803*/
    return &this->RadarClass_field_0x0; /*0x6537f9*/
  }
  else
  {
    v4 = (void *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, v6); /*0x6537cd*/
    this->RadarClass_field_0x0 = v4; /*0x6537d3*/
    return &this->RadarClass_field_0x0; /*0x6537cf*/
  }
}



// ==== 0x00653810  RadarClass::CheckResult  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult(RadarClass *this, int a2)
{
  DisplayClass *v2; // ecx

  return DisplayClass::UpdateCellPassability(v2, (__int16 *)this, a2) != 0; /*0x653824*/
}



// ==== 0x00653830  RadarClass::CheckResult3  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult3(RadarClass *this, int a2, char a3)
{
  DisplayClass *v3; // ecx

  return DisplayClass::g_var_72f2d5(v3, (__int16 *)this, a2, a3) != 0; /*0x653849*/
}



// ==== 0x00653850  RadarClass::MouseInput  this=RadarClass  sig=csp ====
void __thiscall TacticalClass::MouseInput(RadarClass *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  MapClass *RadarClass_field_0x14B0; // eax

  DisplayClass::Update((DisplayClass *)this, (int)a2, (int)a3); /*0x653860*/
  v4 = LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0;
  if ( *a3 >= v4 + dword_B04A00 && *a3 < v4 + dword_B04A00 + dword_B04A08 ) /*0x653896*/
  {
    v5 = a3[1]; /*0x653898*/
    if ( v5 >= dword_B04A04 && v5 < dword_B04A0C + dword_B04A04 ) /*0x6538a9*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538b4*/
  }
  if ( *a3 >= v4 + dword_B048C8 && *a3 < v4 + dword_B048C8 + dword_B048D0 ) /*0x6538d6*/
  {
    v6 = a3[1]; /*0x6538d8*/
    if ( v6 >= dword_B048CC && v6 < dword_B048D4 + dword_B048CC ) /*0x6538e8*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538f3*/
  }
  if ( *a2 == 33010 ) /*0x653903*/
  {
    if ( !*(_DWORD *)&dword_A8B238 /*0x653933*/
      || (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4)
      && dword_A8B23C
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C)
      && (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C) )
    {
      *(_DWORD *)&stru_A8EB00.?[444] = 9; /*0x653946*/
    }
    else
    {
      *(_DWORD *)&stru_A8EB00.?[444] = 8; /*0x65393a*/
    }
  }
  else if ( *a2 == 33011 ) /*0x653957*/
  {
    *(_DWORD *)&stru_A8EB00.?[444] = 1; /*0x653959*/
  }
  if ( g_AsyncIOState > 0 ) /*0x65396a*/
  {
    RadarClass_field_0x14B0 = this->RadarClass_field_0x14B0; /*0x65396c*/
    if ( RadarClass_field_0x14B0 != (MapClass *)3 && RadarClass_field_0x14B0 != (MapClass *)4 ) /*0x65397a*/
    {
      this->RadarClass_field_0x14B4 = RadarClass_field_0x14B0; /*0x653982*/
      RadarClass::SetViewMode((int *)this, 4, 0); /*0x653988*/
      *(_DWORD *)this->__pad_14B8 = 0; /*0x65398d*/
    }
  }
  if ( this->RadarClass_field_0x14B0 == (MapClass *)4 ) /*0x65399e*/
  {
    TacticalClass::ProcessChronoEffect((TacticalClass *)this); /*0x6539a2*/
  }
  else if ( !UI_Helper() ) /*0x6539ae*/
  {
    ChronoScreenEffect::DecrementCounter(); /*0x6539b7*/
  }
}



// ==== 0x006539D0  RTacticalClass@RadarClass::ProcessMouseClick  this=RTacticalClass@RadarClass  sig=csp ====
int __thiscall TacticalClass::ProcessMouseClick(_BYTE *this, char a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int ClosestEnemy; // eax
  int v9; // eax
  int v10; // eax
  __int16 v11; // di
  __int16 v12; // si
  int v13; // kr0C_4
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // bx
  int v22; // eax
  __int16 v23; // ax
  _DWORD *v24; // eax
  int *Coords; // eax
  int v27; // [esp+10h] [ebp-3Ch] BYREF
  void *v28; // [esp+14h] [ebp-38h] BYREF
  char v29; // [esp+18h] [ebp-34h]
  _BYTE *v30; // [esp+1Ch] [ebp-30h]
  _DWORD v31[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37[3]; // [esp+40h] [ebp-Ch] BYREF

  v30 = this; /*0x6539dc*/
  if ( (a2 & 0x22) == 0 && (dword_880C98 != 3 || dword_880C94 != 1) && dword_880C98 == 1 && dword_880C94 == 1 )
  {
    if ( (a2 & 0x55) != 0 ) /*0x653a13*/
    {
      v4 = *(_DWORD *)dword_87F770; /*0x653a1a*/
      v5 = *((_DWORD *)dword_87F770 + 1); /*0x653a1c*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 44))(dword_887640); /*0x653a32*/
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 48))(dword_887640); /*0x653a36*/
    }
    v6 = v4 - (byte_A8EB7C != 0 ? dword_886FA8 : 0);
    if ( v6 >= dword_880C84 /*0x653a83*/
      && v6 < dword_880C84 + dword_880C8C
      && v5 >= dword_880C88
      && v5 < dword_880C88 + dword_880C90 )
    {
      v31[1] = v5; /*0x653a89*/
      v31[0] = v6; /*0x653aa5*/
      v27 = 0; /*0x653aa9*/
      v28 = 0; /*0x653ab3*/
      TacticalClass::ScreenToCellLookup(v31, &v27, &v28); /*0x653ab7*/
      if ( v27 == dword_B048C0 ) /*0x653acd*/
      {
LABEL_74:
        COMObject::ActivateThunk(v30, 0, a3, 0); /*0x653ec3*/
        return 1; /*0x653edf*/
      }
      v32[0] = ((__int16)v27 << 8) + 128; /*0x653af5*/
      v32[1] = (SHIWORD(v27) << 8) + 128; /*0x653afd*/
      GroundHeight = 0; /*0x653b07*/
      GroundHeight = Cell::GetGroundHeight(v32); /*0x653b14*/
      if ( !Cell::IsPassable(v32) || (v29 = 1, !g_hWnd) ) /*0x653b33*/
        v29 = 0; /*0x653b35*/
      if ( (a2 & 0x50) != 0 ) /*0x653b8b*/
      {
LABEL_62:
        if ( (a2 & 0x11) != 0 ) /*0x653d74*/
        {
          v11 = HIWORD(v27); /*0x653d7f*/
          v12 = v27; /*0x653d7f*/
          if ( v27 ) /*0x653d87*/
          {
            v13 = dword_886FA8 / 60 + 2; /*0x653dbc*/
            v14 = dword_87F8DC - v13 / 2 - 1; /*0x653dcb*/
            v15 = dword_886FAC / 60 + dword_87F8DC + 1; /*0x653ddf*/
            v16 = 2 * dword_87F8E0 - dword_886FAC / 60 + dword_87F8DC - 1; /*0x653de3*/
            v17 = SHIWORD(v27) - (__int16)v27; /*0x653ded*/
            if ( v17 > v14 ) /*0x653df1*/
            {
              v18 = v17 - v14; /*0x653df3*/
              v11 = HIWORD(v27) - v18; /*0x653df5*/
              v12 = v18 + v27; /*0x653df8*/
              HIWORD(v27) -= v18; /*0x653dfb*/
              LOWORD(v27) = v18 + v27; /*0x653e00*/
            }
            v19 = v12 - v11; /*0x653e0b*/
            if ( v19 > dword_87F8DC - v13 / 2 - 2 ) /*0x653e12*/
            {
              v20 = v19 - v14 + 1; /*0x653e16*/
              v11 += v20; /*0x653e17*/
              v12 -= v20; /*0x653e1a*/
              HIWORD(v27) = v11; /*0x653e1d*/
              LOWORD(v27) = v12; /*0x653e22*/
            }
            if ( v11 + v12 < v15 ) /*0x653e32*/
            {
              v21 = v15 - v11 - v12; /*0x653e36*/
              v12 += v21; /*0x653e38*/
              v11 += v21; /*0x653e3b*/
              LOWORD(v27) = v12; /*0x653e3e*/
              HIWORD(v27) = v11; /*0x653e43*/
            }
            v22 = v12 + v11; /*0x653e4e*/
            if ( v22 > v16 ) /*0x653e52*/
            {
              v23 = v22 - v16; /*0x653e54*/
              LOWORD(v27) = v12 - v23; /*0x653e5c*/
              HIWORD(v27) = v11 - v23; /*0x653e61*/
            }
            v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords[1]; /*0x653e95*/
            v36 = Coords[2]; /*0x653e9c*/
            Tactical::SetTacticalPosition(&v34); /*0x653ea0*/
            MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x653eac*/
            if ( g_ZBufferDescriptor ) /*0x653eb8*/
              *((_DWORD *)g_ZBufferDescriptor + 9) = 0x8000; /*0x653eba*/
          }
        }
        goto LABEL_74; /*0x653eba*/
      }
      if ( dword_A8ECC8 ) /*0x653b97*/
      {
        if ( dword_8809A0 ) /*0x653be5*/
        {
          if ( dword_8809A0 != 1 ) /*0x653bf3*/
          {
            if ( dword_8809A0 != 2 ) /*0x653c05*/
              goto LABEL_35; /*0x653c05*/
            goto LABEL_34; /*0x653c05*/
          }
LABEL_32:
          v7 = 37; /*0x653bf5*/
          goto LABEL_51; /*0x653bfa*/
        }
      }
      else if ( dword_8809A0 ) /*0x653b9b*/
      {
        if ( dword_8809A0 != 1 ) /*0x653b9f*/
        {
          if ( dword_8809A0 != 2 ) /*0x653ba7*/
          {
            if ( dword_8809A0 != 5 ) /*0x653baf*/
            {
              if ( dword_8809A0 != 7 ) /*0x653bb7*/
              {
                if ( dword_8809A0 != 8 ) /*0x653bbf*/
                {
                  if ( dword_8809A0 != 9 ) /*0x653bc3*/
                  {
                    if ( dword_8809A0 != 11 ) /*0x653bcb*/
                    {
                      if ( dword_8809A0 != 6 ) /*0x653bd3*/
                      {
LABEL_61:
                        Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x653d62*/
                        goto LABEL_62; /*0x653d6a*/
                      }
                      v7 = 65; /*0x653bd9*/
LABEL_51:
                      switch ( v7 ) /*0x653cb3*/
                      {
                        case 1: /*0x653cb3*/
                        case 2: /*0x653cb3*/
                        case 3: /*0x653cb3*/
                        case 5: /*0x653cb3*/
                        case 6: /*0x653cb3*/
                        case 9: /*0x653cb3*/
                        case 16: /*0x653cb3*/
                        case 20: /*0x653cb3*/
                        case 26: /*0x653cb3*/
                        case 38: /*0x653cb3*/
                        case 41: /*0x653cb3*/
                        case 65: /*0x653cb3*/
                        case 66: /*0x653cb3*/
                        case 67: /*0x653cb3*/
                        case 72: /*0x653cb3*/
                          break;
                        default:
                          v7 = 0; /*0x653cba*/
                          v28 = 0; /*0x653cbc*/
                          break; /*0x653cbc*/
                      }
                      if ( (!FactoryClass::GetFlag() || UI_Process_639DA0() == -1) && v7 ) /*0x653cd9*/
                      {
                        if ( (a2 & 8) != 0 ) /*0x653ce6*/
                          TacticalClass::HandlePlayerAction((char *)&dword_87F7E8, (__int16 *)&v27, v29, v28, v7, 1); /*0x653cff*/
                        if ( (a2 & 4) != 0 && !byte_A8ED9D ) /*0x653d14*/
                        {
                          v34 = ((__int16)v27 << 8) + 128; /*0x653d3b*/
                          v35 = (SHIWORD(v27) << 8) + 128; /*0x653d3f*/
                          v36 = 0; /*0x653d54*/
                          PlayerClass::ExecuteCommand( /*0x653d58*/
                            (char *)&dword_87F7E8,
                            (int)&v34,
                            (__int16 *)&v27,
                            (#375 **)v28,
                            v7,
                            1);
                        }
                        goto LABEL_74; /*0x653d5d*/
                      }
                      goto LABEL_61; /*0x653cd9*/
                    }
                    goto LABEL_42; /*0x653bcb*/
                  }
                  goto LABEL_40; /*0x653bc3*/
                }
                goto LABEL_38; /*0x653bbf*/
              }
              goto LABEL_36; /*0x653bb7*/
            }
LABEL_35:
            if ( dword_8809A0 != 7 ) /*0x653c17*/
            {
              if ( dword_8809A0 != 8 ) /*0x653c29*/
              {
                if ( dword_8809A0 != 9 ) /*0x653c34*/
                {
                  if ( dword_8809A0 != 11 ) /*0x653c43*/
                  {
                    if ( dword_8809A0 == 5 ) /*0x653c52*/
                    {
                      v7 = 41; /*0x653c54*/
                    }
                    else if ( dword_8809A0 == 6 ) /*0x653c61*/
                    {
                      v7 = 65; /*0x653c63*/
                    }
                    else
                    {
                      if ( v28 ) /*0x653c70*/
                      {
                        ClosestEnemy = FindRadarClosestEnemy(0, (int)v28); /*0x653c74*/
                        v9 = (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))( /*0x653c83*/
                               ClosestEnemy,
                               v28,
                               0);
                      }
                      else
                      {
                        v10 = FindRadarClosestEnemy((__int16 *)&v27, 0); /*0x653c8e*/
                        v9 = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v10 + 112))(v10, &v27, 0, 0); /*0x653c9e*/
                      }
                      v7 = v9; /*0x653ca1*/
                    }
                    goto LABEL_51; /*0x653c59*/
                  }
LABEL_42:
                  v7 = 72; /*0x653c45*/
                  goto LABEL_51; /*0x653c4a*/
                }
LABEL_40:
                v7 = 68; /*0x653c36*/
                goto LABEL_51; /*0x653c3b*/
              }
LABEL_38:
              v7 = 67; /*0x653c2b*/
              goto LABEL_51; /*0x653c30*/
            }
LABEL_36:
            v7 = 66; /*0x653c19*/
            goto LABEL_51; /*0x653c1e*/
          }
LABEL_34:
          v7 = 38; /*0x653c07*/
          goto LABEL_51; /*0x653c0c*/
        }
        goto LABEL_32; /*0x653b9f*/
      }
      v7 = 20; /*0x653be7*/
      goto LABEL_51; /*0x653bec*/
    }
    Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x653eeb*/
  }
  return 0; /*0x653ed5*/
}



// ==== 0x00653F50  RadarClass::DrawWrapper  this=RadarClass  sig=csp ====
void __thiscall CellClass::DrawWrapper(RadarClass *this, _DWORD *a2, int jj, char a4, char a5)
{
  CellClass::UpdateTerrainAndWaypoints((MapClass *)this, a2, jj, a4, a5); /*0x653f64*/
}



// ==== 0x00653F70  RadarClass::SetPositionThunk  this=RadarClass  sig=csp ====
int __stdcall TacticalClass::SetPositionThunk(RadarClass *this)
{
  return Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, (int *)this); /*0x653f80*/
}



// ==== 0x00653FA0  ObjectClass::RenderScoreboardSidebar  this=TOP  sig=csp ====
char __usercall RenderScoreboardSidebar@<al>(ObjectClass *this, int a2@<ebp>)
{
  _DWORD *v2; // ecx
  int v3; // eax
  _DWORD *v4; // edi
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
  _DWORD *v21; // eax
  const wchar_t *v22; // ecx
  _DWORD *v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  DSurface *v27; // [esp+0h] [ebp-C8h]
  DSurface *v28; // [esp+0h] [ebp-C8h]
  int v29; // [esp+0h] [ebp-C8h]
  _DWORD *v30; // [esp+4h] [ebp-C4h]
  _DWORD *v31; // [esp+4h] [ebp-C4h]
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
  _DWORD v48[2]; // [esp+38h] [ebp-90h] BYREF
  int v49; // [esp+40h] [ebp-88h] BYREF
  char v50[16]; // [esp+44h] [ebp-84h] BYREF
  int v51; // [esp+54h] [ebp-74h] BYREF
  wchar_t Buffer[18]; // [esp+58h] [ebp-70h] BYREF
  wchar_t v53[24]; // [esp+7Ch] [ebp-4Ch] BYREF
  char v54[12]; // [esp+ACh] [ebp-1Ch] BYREF
  char v55[16]; // [esp+B8h] [ebp-10h] BYREF

  LOBYTE(v3) = byte_884B8D; /*0x653fa0*/
  v4 = v2; /*0x653faf*/
  if ( byte_884B8D )
  {
    v5 = VtableStub::72F510(); /*0x653fbc*/
    i = v4[1145]; /*0x653fd4*/
    v43 = v4[1147]; /*0x653fe6*/
    v6 = (int *)(*((int (__thiscall **)(DSurface *, int *, _DWORD))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x653ff1*/
                  DSurface_Sidebar,
                  &v49,
                  0);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v5, dword_B04A38, 0x20u, &v43, v6, 0, 0, 0, 1000, 0, 0, 0, 0, 0, v41); /*0x65400b*/
    v7 = v4[1149] + 2; /*0x65401c*/
    v43 = v4[1148]; /*0x65401f*/
    v44 = v7; /*0x654031*/
    BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x654035*/
    v30 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, int *, int, _DWORD, int))DSurface_Sidebar->DSurface_field_0x0 /*0x654056*/
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
    v31 = (_DWORD *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6540c6*/
                      DSurface_Sidebar,
                      &v49);
    v28 = DSurface_Sidebar; /*0x6540c7*/
    v12 = GetStringCSF((wchar_t *)&stru_8392C0.ActiveBufferCount, 0, (const char *)&stru_8392C0.SampleIndex[5], 1270); /*0x6540d9*/
    TextRenderer::DrawText(&v46, (size_t)v12, (int)v28, v31, (int)&i, v36, 0, 537); /*0x6540e4*/
    v13 = v7 + 7; /*0x6540f1*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 4) == 1
        ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 372) + 14)
        : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[132] + 372) + 28);
    v15 = v4[1148]; /*0x654113*/
    i = v15 + v4[1150] - 1; /*0x654129*/
    v43 = v13; /*0x654133*/
    v44 = v15; /*0x654137*/
    v45 = v13; /*0x65413b*/
    (*((void (__thiscall **)(DSurface *, int *, int *, int))DSurface_Sidebar->DSurface_field_0x0 + 12))( /*0x654146*/
      DSurface_Sidebar,
      &v44,
      &i,
      v14);
    v16 = v13 + 4; /*0x65414f*/
    v3 = 0; /*0x654152*/
    for ( i = 0; v3 < stru_A80220.?; i = v3 ) /*0x65415a*/
    {
      v44 = *((_DWORD *)stru_A80220.? + v3); /*0x65416d*/
      v17 = v44; /*0x654168*/
      if ( v44 && *(_BYTE *)(*(_DWORD *)(v44 + 52) + 421) ) /*0x65417a*/
      {
        if ( *(_BYTE *)(v44 + 501) ) /*0x654188*/
        {
          v18 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6541a2*/
          v17 = v44; /*0x6541a7*/
          v19 = v18; /*0x6541ab*/
          v20 = 25; /*0x6541ad*/
        }
        else
        {
          v20 = 16409; /*0x6541ba*/
          v19 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v44 + 90196)); /*0x6541bf*/
        }
        Buffer[0] = 0; /*0x6541d3*/
        swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)(v17 + 90154)); /*0x6541da*/
        if ( !wcslen(Buffer) ) /*0x6541e4*/
          wcscpy(Buffer, (const wchar_t *)&stru_8392C0.VocClass_field_94); /*0x6541fa*/
        if ( (unsigned int)wcslen(Buffer) > 0x12 ) /*0x654212*/
          wcscpy(v53, L"."); /*0x654214*/
        v48[0] = v4[1148]; /*0x654229*/
        v48[1] = v16; /*0x65423b*/
        v21 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, _DWORD *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x654249*/
                          DSurface_Sidebar,
                          v55,
                          v48);
        TextRenderer::DrawText(&v51, (size_t)&Buffer[2], (int)DSurface_Sidebar, v21, v19, 0, v20, a2); /*0x65425d*/
        v22 = 0; /*0x654269*/
        v23 = (_DWORD *)(v45 + 21476); /*0x65426b*/
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
        a2 = v20 | 0x200; /*0x6542ba*/
        v47 = v4[1150] + v4[1148] - 2; /*0x6542c5*/
        v48[0] = v16; /*0x6542c9*/
        v25 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *, int *, int, _DWORD))DSurface_Sidebar->DSurface_field_0x0 /*0x6542d7*/
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



// ==== 0x00654320  RadarClass::Destru_vt34  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt34(RadarClass *this)
{
  int v2; // esi
  char result; // al
  DisplayClass *v4; // [esp+0h] [ebp-28h]
  int v5; // [esp+Ch] [ebp-1Ch] BYREF
  int Width; // [esp+10h] [ebp-18h]
  int Height; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  int ID; // [esp+1Ch] [ebp-Ch]
  int *v10; // [esp+20h] [ebp-8h]
  char v11; // [esp+24h] [ebp-4h]

  DisplayClass::Render(v4); /*0x654328*/
  v2 = LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0;
  dword_B049BC = -v2; /*0x654359*/
  Rect_Point::Set(&stru_B04978, v2 + dword_B04A00, dword_B04A04); /*0x65435f*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04978); /*0x654369*/
  dword_B04954 = -v2; /*0x654382*/
  Rect_Point::Set(&stru_B04910, v2 + dword_B048C8, dword_B048CC); /*0x654388*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04910); /*0x654392*/
  Rect_Point::Set(&stru_B04A10, (int)this->RadarClass_field_0x11F0 + v2, (int)this->RadarClass_field_0x11F4->__pad_0); /*0x6543ac*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B04A10); /*0x6543b6*/
  v11 = 0; /*0x6543c0*/
  v5 = 242; /*0x6543c7*/
  v10 = &stru_8392C0.SampleIndex[21]; /*0x6543cf*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x6543d7*/
    v10 = &stru_8392C0.SampleIndex[16]; /*0x6543d9*/
  Width = stru_B04978.Width; /*0x6543f2*/
  ID = stru_B04978.ID; /*0x654401*/
  Height = stru_B04978.Height; /*0x65440b*/
  v8 = *(_DWORD *)&stru_B04978.Visible; /*0x65440f*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 242); /*0x654413*/
  CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v5); /*0x654423*/
  Width = stru_B04910.Width; /*0x654439*/
  Height = stru_B04910.Height; /*0x654442*/
  v5 = 243; /*0x654451*/
  v10 = &stru_8392C0.SampleIndex[11]; /*0x654459*/
  v8 = *(_DWORD *)&stru_B04910.Visible; /*0x654461*/
  ID = stru_B04910.ID; /*0x654465*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 243); /*0x654469*/
  result = CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v5); /*0x654479*/
  this->RadarClass_field_0x14D9[1] = 1; /*0x65447e*/
  return result; /*0x654485*/
}



// ==== 0x00654490  RadarClass::ProcessCellVisibility  this=RadarClass  sig=csp ====
int __thiscall Shroud::ProcessCellVisibility(RadarClass *this, int *a2)
{
  int v3; // edx
  int v4; // ecx
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // ecx
  int result; // eax
  int v9; // edi
  MapClass *RadarClass_field_0x1490; // eax
  MapClass *RadarClass_field_0x1498; // ebp
  RadarClass *v12; // eax
  int v13; // ecx
  int v14; // edx
  RadarClass *RadarClass_field_0x149C; // edi
  int v16; // eax

  ShroudClass::UpdateVisibility((MapClass *)this, a2); /*0x65449d*/
  v3 = *(_DWORD *)&this->__pad_C0[60]; /*0x6544a2*/
  v4 = *(_DWORD *)&this->__pad_C0[64]; /*0x6544a8*/
  *(_DWORD *)this->__pad_14A8 = 0; /*0x6544b3*/
  *(_DWORD *)this->__pad_14A0 = 10000; /*0x6544bd*/
  this->RadarClass_field_0x149C = (RadarClass *)10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *(_DWORD *)&this->__pad_C0[52] - v3; /*0x6544da*/
  v7 = *(_DWORD *)&this->__pad_C0[68]; /*0x6544dc*/
  this->RadarClass_field_0x14A4 = 0; /*0x6544e7*/
  this->RadarClass_field_0x1498 = (MapClass *)-1; /*0x6544f4*/
  this->RadarClass_field_0x1494 = (MapClass *)((__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6)); /*0x654533*/
  this->RadarClass_field_0x1490 = (MapClass *)(v6 - v5); /*0x65453e*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x654544*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65454b*/
  v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      a2 = *(int **)(v9 + 36); /*0x654567*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( this->RadarClass_field_0x1498 == (MapClass *)-1 ) /*0x65457f*/
      this->RadarClass_field_0x1498 = (MapClass *)(*(__int16 *)(v9 + 36) + *(__int16 *)(v9 + 38)); /*0x65458b*/
    RadarClass_field_0x1490 = this->RadarClass_field_0x1490; /*0x654594*/
    RadarClass_field_0x1498 = this->RadarClass_field_0x1498; /*0x65459a*/
    a2 = *(int **)(v9 + 36); /*0x6545a0*/
    v12 = (RadarClass *)((char *)RadarClass_field_0x1490 + (__int16)a2 - SHIWORD(a2)); /*0x6545b0*/
    v13 = (__int16)a2 + SHIWORD(a2) - (_DWORD)RadarClass_field_0x1498; /*0x6545b2*/
    v14 = 2; /*0x6545b7*/
    if ( v12 == (RadarClass *)-1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != (RadarClass *)(2 * *(_DWORD *)&this->__pad_C0[68] - 1) ) /*0x6545ce*/
    {
LABEL_9:
      RadarClass_field_0x149C = this->RadarClass_field_0x149C; /*0x6545d5*/
      if ( (int)v12 >= (int)RadarClass_field_0x149C ) /*0x6545dd*/
      {
        if ( (int)v12 + v14 > (int)((int)RadarClass_field_0x149C + (unsigned int)this->RadarClass_field_0x14A4) ) /*0x6545f4*/
          this->RadarClass_field_0x14A4 = (CampaignClass *)((char *)v12 + v14 - (_DWORD)RadarClass_field_0x149C); /*0x6545fa*/
      }
      else
      {
        this->RadarClass_field_0x149C = v12; /*0x6545df*/
      }
      v16 = *(_DWORD *)this->__pad_14A0; /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *(_DWORD *)this->__pad_14A8 + v16 ) /*0x654621*/
          *(_DWORD *)this->__pad_14A8 = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *(_DWORD *)this->__pad_14A0 = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}



// ==== 0x00654650  RadarClass::RecreateSurface  this=RadarClass  sig=csp ====
int __usercall RadarClass::RecreateSurface@<eax>(RadarClass *this, int a2@<ebx>)
{
  _DWORD *v2; // ecx
  float *v3; // esi
  int result; // eax
  int *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  void (__thiscall ***v13)(_DWORD, int); // ecx
  char *v14; // ebx
  int v15; // edi
  int v16; // eax
  char *v17; // eax
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = (float *)v2; /*0x654655*/
  result = v2[1321]; /*0x65465a*/
  v5 = v2 + 1319; /*0x654660*/
  if ( result > 0 && (int)v2[1322] > 0 ) /*0x654671*/
  {
    v6 = (void (__thiscall ***)(_DWORD, int))v2[1160]; /*0x654677*/
    v3[1320] = 0.0; /*0x65467d*/
    *v5 = 0; /*0x654685*/
    if ( v6 ) /*0x654687*/
    {
      (**v6)(v6, 1); /*0x65468d*/
      v3[1160] = 0.0; /*0x65468f*/
    }
    if ( *((_DWORD *)v3 + 1167) ) /*0x654695*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1167)); /*0x6546a0*/
      v3[1167] = 0.0; /*0x6546a8*/
    }
    if ( *((_DWORD *)v3 + 1181) ) /*0x6546ae*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1181)); /*0x6546b9*/
      v3[1181] = 0.0; /*0x6546c1*/
    }
    GenerateImageThumbnail(v3, v19, v5, v5, 1); /*0x6546d3*/
    v7 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)v3 + 1160) + 124))(*((_DWORD *)v3 + 1160), a2); /*0x6546e0*/
    v8 = *((_DWORD *)v3 + 1160); /*0x6546e3*/
    *((_DWORD *)v3 + 1321) = v7; /*0x6546e9*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6546f1*/
    v10 = *((_DWORD *)v3 + 1321); /*0x6546f7*/
    v11 = *((_DWORD *)v3 + 1148); /*0x6546fd*/
    *((_DWORD *)v3 + 1322) = v9; /*0x65470b*/
    *v5 = v11; /*0x654711*/
    if ( v10 < 140 ) /*0x654713*/
      *v5 = v11 + (140 - v10) / 2; /*0x654723*/
    v12 = *((_DWORD *)v3 + 1149); /*0x654725*/
    *((_DWORD *)v3 + 1320) = v12; /*0x65472e*/
    if ( v9 < 108 ) /*0x654734*/
      *((_DWORD *)v3 + 1320) = v12 + (108 - v9) / 2; /*0x654744*/
    v13 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 1159); /*0x65474a*/
    if ( v13 ) /*0x654752*/
    {
      (**v13)(v13, 1); /*0x654758*/
      v3[1159] = 0.0; /*0x65475a*/
    }
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x654767*/
    if ( v14 ) /*0x65476e*/
    {
      v19[0] = (int)v3[1160]; /*0x65477d*/
      v15 = v19[0]; /*0x654777*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v19[0] + 128))(v19[0]); /*0x654789*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 124))(v15); /*0x65478e*/
      v17 = DSurface::Construct(v14, v16, v18, 1, 0); /*0x654794*/
    }
    else
    {
      v17 = 0; /*0x65479b*/
    }
    *((_DWORD *)v3 + 1159) = v17; /*0x65479d*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v17 + 24))(v17, 0); /*0x6547a8*/
    LOBYTE(result) = RadarClass::UpdateFoundationShapesCustom(v3); /*0x6547ad*/
  }
  return result; /*0x6547b3*/
}



// ==== 0x006547C0  ObjectClass::GenerateImageThumbnail  this=RadarClass  sig=csp ====
int *__thiscall GenerateImageThumbnail(float *this, int *a2, int *a3, int *a4, char a5)
{
  float *v6; // ebx
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  _BYTE *v11; // ecx
  int v12; // edx
  void *v13; // edi
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  double v22; // st7
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // esi
  int v36; // ebp
  double v37; // st7
  int v38; // eax
  int v39; // eax
  double v40; // st6
  double v41; // st5
  double v42; // st4
  int v43; // eax
  int v44; // esi
  int v45; // edi
  int v46; // eax
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int v50; // ebp
  double v51; // st3
  int v52; // ecx
  int v53; // ebp
  int v54; // eax
  int v55; // esi
  int v56; // edi
  double v57; // st2
  double v58; // st2
  unsigned __int8 *v59; // eax
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  bool v65; // zf
  size_t v66; // esi
  void *v67; // edi
  int v69; // [esp+10h] [ebp-6Ch]
  int v70; // [esp+14h] [ebp-68h]
  int v71; // [esp+18h] [ebp-64h]
  float v72; // [esp+1Ch] [ebp-60h]
  float v73; // [esp+20h] [ebp-5Ch]
  float v74; // [esp+24h] [ebp-58h]
  int v75; // [esp+28h] [ebp-54h]
  int v76; // [esp+2Ch] [ebp-50h]
  int v77; // [esp+30h] [ebp-4Ch]
  int v78; // [esp+34h] [ebp-48h]
  float v79; // [esp+38h] [ebp-44h]
  int v80; // [esp+3Ch] [ebp-40h]
  int v81; // [esp+40h] [ebp-3Ch]
  int v82; // [esp+44h] [ebp-38h]
  int v83; // [esp+48h] [ebp-34h]
  int v84; // [esp+4Ch] [ebp-30h]
  int v85; // [esp+50h] [ebp-2Ch]
  int v86; // [esp+54h] [ebp-28h]
  int v87; // [esp+58h] [ebp-24h]
  float v88; // [esp+5Ch] [ebp-20h]
  float v89; // [esp+60h] [ebp-1Ch]
  int v90; // [esp+60h] [ebp-1Ch]
  int v91; // [esp+60h] [ebp-1Ch]
  int v92; // [esp+64h] [ebp-18h]
  int v93; // [esp+68h] [ebp-14h]
  int i; // [esp+6Ch] [ebp-10h]
  float v95; // [esp+70h] [ebp-Ch]
  int v97; // [esp+84h] [ebp+8h]
  float v98; // [esp+88h] [ebp+Ch]
  float v99; // [esp+8Ch] [ebp+10h]
  int v100; // [esp+8Ch] [ebp+10h]

  v6 = this; /*0x6547cd*/
  v7 = a4; /*0x6547d0*/
  if ( a5 && (a4[2] <= 0 || a4[3] <= 0) ) /*0x6547ec*/
  {
    *a4 = *a3; /*0x6547f4*/
    a4[1] = a3[1]; /*0x6547f9*/
    a4[2] = a3[2]; /*0x6547ff*/
    a4[3] = a3[3]; /*0x654805*/
  }
  if ( !this->q48F ) /*0x654808*/
  {
    v8 = a3[3] * a3[2]; /*0x654815*/
    v9 = __2_YAPAXI_Z(3 * v8); /*0x65481d*/
    if ( v9 ) /*0x654827*/
    {
      v10 = v8 - 1; /*0x654829*/
      if ( v10 >= 0 ) /*0x65482c*/
      {
        v11 = (_BYTE *)(v9 + 2); /*0x65482e*/
        v12 = v10 + 1; /*0x654831*/
        do /*0x654843*/
        {
          *(v11 - 2) = 0; /*0x654834*/
          *(v11 - 1) = 0; /*0x654838*/
          *v11 = 0; /*0x65483c*/
          v11 += 3; /*0x65483f*/
          --v12; /*0x654842*/
        }
        while ( v12 ); /*0x654843*/
      }
      v13 = (void *)v9; /*0x654845*/
    }
    else
    {
      v13 = 0; /*0x654849*/
    }
    *((_DWORD *)v6 + 1167) = v13; /*0x65484b*/
    memset(v13, 0, 3 * a3[3] * a3[2]); /*0x654862*/
    *((_DWORD *)v6 + 1168) = a3[2]; /*0x65486e*/
    *((_DWORD *)v6 + 1169) = a3[3]; /*0x654877*/
  }
  if ( a5 ) /*0x654886*/
    RadarClass::UpdateBlips((RadarClass *)v6, (int)a3, a4); /*0x65488c*/
  v14 = *((_DWORD *)v6 + 1160); /*0x654891*/
  v75 = a3[2]; /*0x6548a0*/
  v99 = v6[1314]; /*0x6548a6*/
  if ( v14 ) /*0x6548ad*/
  {
    v97 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 124))(v14); /*0x6549a8*/
    v69 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v6 + 1160) + 128))(*((_DWORD *)v6 + 1160)); /*0x6549b7*/
  }
  else
  {
    v15 = (double)v75; /*0x6548b3*/
    v99 = 140.0 / v15; /*0x6548bf*/
    v16 = (double)a3[3]; /*0x6548c6*/
    v17 = v16 * v99; /*0x6548cb*/
    if ( v17 >= 108.0 ) /*0x6548e1*/
    {
      v99 = 108.0 / v16; /*0x65490a*/
      LOWORD(v20) = Math::RoundToInt(v15 * v99); /*0x65491a*/
      v97 = v20; /*0x65491f*/
      v69 = 108; /*0x654926*/
      v18 = v20; /*0x65492e*/
    }
    else
    {
      v18 = 140; /*0x6548eb*/
      v97 = 140; /*0x6548f0*/
      v89 = v17; /*0x6548d2*/
      LOWORD(v19) = Math::RoundToInt(v89); /*0x6548f7*/
      v69 = v19; /*0x6548fc*/
    }
    v6[1314] = v99; /*0x654939*/
    v21 = __2_YAPAXI_Z(0x20u); /*0x654944*/
    if ( v21 ) /*0x65494b*/
    {
      *(_DWORD *)(v21 + 8) = v69; /*0x654954*/
      *(_DWORD *)(v21 + 4) = v18; /*0x65495f*/
      *(_DWORD *)(v21 + 12) = 0; /*0x654962*/
      *(_DWORD *)v21 = &XSurface_Vtable; /*0x654969*/
      *(_DWORD *)(v21 + 16) = 2; /*0x65496f*/
      Buffer::Init((Buffer *)(v21 + 20), 0, 2 * v18 * v69); /*0x654976*/
      *(_DWORD *)v21 = &BSurface_Vtable; /*0x65497b*/
    }
    else
    {
      v21 = 0; /*0x654983*/
    }
    *((_DWORD *)v6 + 1160) = v21; /*0x654985*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 24))(v21, 0); /*0x654991*/
    v7 = a4; /*0x654994*/
  }
  v74 = (double)a3[2] / (double)v97; /*0x6549d3*/
  v22 = (double)a3[3] / (double)v69; /*0x6549da*/
  v73 = v22; /*0x6549de*/
  v95 = 1.0 / (v22 * v74); /*0x6549ec*/
  v23 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v6 + 1160) + 92))(*((_DWORD *)v6 + 1160), 0, 0); /*0x6549f0*/
  v24 = *v7; /*0x6549f3*/
  v90 = v23; /*0x6549f5*/
  LOWORD(v25) = Math::RoundToInt((double)*v7 * v99); /*0x654a0e*/
  v26 = v25; /*0x654a13*/
  v82 = v25; /*0x654a1a*/
  LOWORD(v27) = Math::RoundToInt((double)(v24 + v7[2]) * v99); /*0x654a33*/
  v83 = v27 + 1; /*0x654a42*/
  if ( v27 + 1 >= v97 ) /*0x654a46*/
    v83 = v97; /*0x654a48*/
  v28 = v7[1]; /*0x654a4c*/
  LOWORD(v29) = Math::RoundToInt((double)v28 * v99); /*0x654a64*/
  v84 = v29; /*0x654a6c*/
  LOWORD(v30) = Math::RoundToInt((double)(v28 + v7[3]) * v99); /*0x654a87*/
  v31 = v69; /*0x654a8c*/
  v32 = v30 + 1; /*0x654a90*/
  if ( v30 + 1 >= v69 ) /*0x654a95*/
  {
    v81 = v69; /*0x654a9d*/
    v32 = v69; /*0x654aa1*/
  }
  else
  {
    v81 = v30 + 1; /*0x654a97*/
  }
  v88 = (double)v82 / v99; /*0x654ab4*/
  v98 = v88; /*0x654ac0*/
  v72 = (double)v84 / v99; /*0x654ace*/
  if ( v84 < v32 ) /*0x654ad2*/
  {
    v33 = v90; /*0x654ada*/
    v91 = v32 - v84; /*0x654aea*/
    v80 = v33 + 2 * (v26 + v97 * v84); /*0x654af1*/
    do /*0x654dff*/
    {
      LOWORD(v34) = Math::RoundToInt(v72); /*0x654af9*/
      v35 = *((_DWORD *)v6 + 1169); /*0x654afe*/
      if ( v35 >= v34 ) /*0x654b06*/
      {
        v71 = v34; /*0x654b10*/
        v36 = v34; /*0x654b14*/
      }
      else
      {
        v36 = *((_DWORD *)v6 + 1169); /*0x654b08*/
        v71 = v36; /*0x654b0a*/
      }
      v37 = v72 + v73; /*0x654b1a*/
      LOWORD(v38) = Math::RoundToInt(v37); /*0x654b20*/
      v39 = v38 + 1; /*0x654b25*/
      v70 = v35; /*0x654b26*/
      if ( v35 >= v39 ) /*0x654b2c*/
        v70 = v39; /*0x654b2e*/
      if ( v26 < v83 ) /*0x654b38*/
      {
        v86 = v80; /*0x654b44*/
        v87 = v83 - v26; /*0x654b48*/
        do /*0x654dc9*/
        {
          v40 = 0.0; /*0x654b4c*/
          v41 = 0.0; /*0x654b52*/
          v42 = 0.0; /*0x654b58*/
          LOWORD(v43) = Math::RoundToInt(v37); /*0x654b65*/
          v44 = *((_DWORD *)v6 + 1168); /*0x654b6a*/
          v93 = v44; /*0x654b72*/
          if ( v44 >= v43 ) /*0x654b76*/
          {
            v100 = v43; /*0x654b83*/
            v45 = v43; /*0x654b8a*/
          }
          else
          {
            v45 = *((_DWORD *)v6 + 1168); /*0x654b78*/
            v100 = v45; /*0x654b7a*/
          }
          LOWORD(v46) = Math::RoundToInt(v37); /*0x654b9b*/
          v47 = v46 + 1; /*0x654ba0*/
          if ( v44 < v46 + 1 ) /*0x654ba5*/
            v47 = v44; /*0x654ba7*/
          v48 = v36; /*0x654bad*/
          v76 = v36; /*0x654bb1*/
          if ( v36 < v70 ) /*0x654bb5*/
          {
            v92 = v70 - v36; /*0x654bbd*/
            v49 = v36; /*0x654bc1*/
            v50 = v75; /*0x654bc3*/
            v78 = v45 + v75 * v49; /*0x654bd4*/
            v77 = 3 * v78; /*0x654bdf*/
            do /*0x654d1f*/
            {
              if ( v92 > 1 ) /*0x654be8*/
              {
                if ( v48 == v71 ) /*0x654bf4*/
                {
                  v51 = (double)(v48 + 1) - v72; /*0x654c01*/
                }
                else if ( v48 == v70 - 1 ) /*0x654c0e*/
                {
                  v51 = v37 - (double)v76; /*0x654c14*/
                }
                else
                {
                  v51 = 1.0; /*0x654c18*/
                }
              }
              else
              {
                v51 = v73; /*0x654bea*/
              }
              v52 = v45; /*0x654c1e*/
              v85 = v45; /*0x654c22*/
              if ( v45 < v47 ) /*0x654c26*/
              {
                v53 = v78; /*0x654c32*/
                v54 = v47 - v45; /*0x654c38*/
                v55 = v93 * *((_DWORD *)v6 + 1169); /*0x654c3a*/
                v56 = v77; /*0x654c3f*/
                for ( i = v54; ; v54 = i ) /*0x654c43*/
                {
                  if ( v54 > 1 ) /*0x654c50*/
                  {
                    if ( v52 == v100 ) /*0x654c5f*/
                    {
                      v57 = (double)(v52 + 1) - v98; /*0x654c6c*/
                    }
                    else if ( v52 == v47 - 1 ) /*0x654c7a*/
                    {
                      v79 = v98 + v74; /*0x654b97*/
                      v57 = v79 - (double)v85; /*0x654c80*/
                    }
                    else
                    {
                      v57 = 1.0; /*0x654c86*/
                    }
                  }
                  else
                  {
                    v57 = v74; /*0x654c52*/
                  }
                  v58 = v57 * v51 * v95; /*0x654c90*/
                  if ( v53 < v55 ) /*0x654c94*/
                  {
                    v59 = (unsigned __int8 *)(*((_DWORD *)v6 + 1167) + v56); /*0x654c98*/
                    v40 = v40 + (double)*v59 * v58; /*0x654cba*/
                    v6 = this; /*0x654cc4*/
                    v41 = v41 + (double)v59[1] * v58; /*0x654cca*/
                    v42 = v42 + (double)v59[2] * v58; /*0x654cd2*/
                  }
                  ++v52; /*0x654cda*/
                  v56 += 3; /*0x654cdb*/
                  ++v53; /*0x654cde*/
                  v85 = v52; /*0x654ce1*/
                  if ( v52 >= v47 ) /*0x654ce5*/
                    break; /*0x654ce5*/
                }
                v48 = v76; /*0x654ceb*/
                v45 = v100; /*0x654cef*/
                v50 = v75; /*0x654cf6*/
              }
              v77 += 3 * v75; /*0x654d0a*/
              v76 = ++v48; /*0x654d17*/
              v78 += v50; /*0x654d1b*/
            }
            while ( v48 < v70 ); /*0x654d1f*/
            v36 = v71; /*0x654d25*/
          }
          LOWORD(v60) = Math::RoundToInt(v37); /*0x654d2f*/
          v61 = 255; /*0x654d39*/
          if ( v60 <= 255 ) /*0x654d3e*/
            v61 = v60; /*0x654d40*/
          LOWORD(v62) = Math::RoundToInt(v37); /*0x654d48*/
          v63 = 255; /*0x654d52*/
          if ( v62 <= 255 ) /*0x654d57*/
            v63 = v62; /*0x654d59*/
          LOWORD(v64) = Math::RoundToInt(v37); /*0x654d61*/
          if ( v64 > 255 ) /*0x654d6b*/
            v64 = 255; /*0x654d6d*/
          v98 = v98 + v74; /*0x654d84*/
          v86 += 2; /*0x654db6*/
          *(_WORD *)(v86 - 2) = (v61 >> g_BitMask_Red << g_BitShift_Blue) /*0x654dbc*/
                              | (v63 >> g_BitMask_Blue << g_BitMask_Green)
                              | (v64 >> g_BitShift_Green_0 << g_BitShift_Red);
          --v87; /*0x654dc5*/
        }
        while ( v87 ); /*0x654dc9*/
        v26 = v82; /*0x654dcf*/
      }
      v98 = v88; /*0x654dde*/
      v72 = v37; /*0x654de5*/
      v65 = v91 == 1; /*0x654df6*/
      v80 += 2 * v97; /*0x654df7*/
      --v91; /*0x654dfb*/
    }
    while ( !v65 ); /*0x654dff*/
    v32 = v81; /*0x654e05*/
    v31 = v69; /*0x654e09*/
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v6 + 1160) + 96))(*((_DWORD *)v6 + 1160)); /*0x654e15*/
  v66 = v97 * v31 / 8 + 1; /*0x654e33*/
  if ( !*((_DWORD *)v6 + 1181) ) /*0x654e2a*/
  {
    v67 = (void *)__2_YAPAXI_Z(v66); /*0x654e40*/
    *((_DWORD *)v6 + 1181) = v67; /*0x654e49*/
    memset(v67, 0, v66); /*0x654e52*/
    v26 = v82; /*0x654e5b*/
  }
  *a2 = v26; /*0x654e74*/
  a2[1] = v84; /*0x654e77*/
  a2[2] = v83 - v26; /*0x654e7a*/
  a2[3] = v32 - v84; /*0x654e7f*/
  return a2; /*0x654e76*/
}



// ==== 0x00654EA0  RadarClass::UpdateBlips  this=RadarClass  sig=csp ====
int __thiscall RadarClass::UpdateBlips(RadarClass *this, int a2, int *a3)
{
  RadarClass *v3; // esi
  int v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  MapClass *RadarClass_field_0x1498; // edx
  int v10; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  char v18; // cl
  RadarClass *v19; // eax
  int v20; // edx
  __int16 v21; // [esp+Ch] [ebp-30h] BYREF
  char v22; // [esp+Eh] [ebp-2Eh]
  __int16 v23; // [esp+10h] [ebp-2Ch] BYREF
  char v24; // [esp+12h] [ebp-2Ah]
  RadarClass *v25; // [esp+14h] [ebp-28h]
  int v26; // [esp+18h] [ebp-24h]
  int v27; // [esp+1Ch] [ebp-20h] BYREF
  int v28; // [esp+20h] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-18h]
  int v30; // [esp+28h] [ebp-14h]
  int v31[4]; // [esp+2Ch] [ebp-10h] BYREF

  v3 = this; /*0x654ea5*/
  v25 = this; /*0x654ea8*/
  v21 = 0; /*0x654eac*/
  v22 = 0; /*0x654eb6*/
  v23 = 0; /*0x654ebb*/
  v24 = 0; /*0x654ec5*/
  LayerClass::CellIteratorReset((LayerClass *)this); /*0x654eca*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x654edf*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x654ee1*/
  v6 = 2 * *(_DWORD *)&stru_87F5F0.__pad_58[668] - *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x654eeb*/
  v26 = v6; /*0x654eee*/
  if ( v4 ) /*0x654ef2*/
  {
    while ( 1 ) /*0x654f07*/
    {
      v7 = *(__int16 *)(v4 + 36); /*0x654f07*/
      v8 = *(__int16 *)(v4 + 38); /*0x654f0b*/
      RadarClass_field_0x1498 = v3->RadarClass_field_0x1498; /*0x654f0f*/
      if ( v8 + v7 >= (int)RadarClass_field_0x1498 ) /*0x654f1a*/
      {
        v10 = v7 - v8 - v6; /*0x654f28*/
        v27 = v10; /*0x654f37*/
        v28 = v7 + v8 - (_DWORD)RadarClass_field_0x1498; /*0x654f3b*/
        v29 = 2; /*0x654f3f*/
        v30 = 1; /*0x654f47*/
        v11 = ClipRectIntersection(v31, &v27, a3, 0, 0); /*0x654f4f*/
        v12 = *v11; /*0x654f56*/
        v27 = *v11; /*0x654f58*/
        v13 = v11[1]; /*0x654f5c*/
        v28 = v13; /*0x654f5f*/
        v29 = v11[2]; /*0x654f66*/
        v14 = v11[3]; /*0x654f6a*/
        v30 = v14; /*0x654f6f*/
        if ( v29 > 0 && v14 > 0 ) /*0x654f7b*/
        {
          v15 = v12 + v13 * *(_DWORD *)(a2 + 8); /*0x654f8b*/
          GetCellRadarColors(v4, (int)&v21, (int)&v23); /*0x654f99*/
          if ( v10 == *a3 - 1 ) /*0x654fa5*/
          {
            v16 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654fb4*/
            *(_WORD *)v16 = v23; /*0x654fbb*/
            *(_BYTE *)(v16 + 2) = v24; /*0x654fc2*/
          }
          else
          {
            if ( v10 == a3[2] + *a3 - 1 ) /*0x654fd0*/
            {
              v17 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654fdf*/
              *(_WORD *)v17 = v21; /*0x654fe6*/
              v18 = v22; /*0x654fe9*/
            }
            else
            {
              v19 = v25; /*0x654fef*/
              v20 = (int)v25->RadarClass_field_0x123C + 3 * v15; /*0x654ffb*/
              *(_WORD *)v20 = v21; /*0x655001*/
              *(_BYTE *)(v20 + 2) = v22; /*0x655008*/
              v17 = (int)v19->RadarClass_field_0x123C + 3 * v15 + 3; /*0x65501a*/
              *(_WORD *)v17 = v23; /*0x65501c*/
              v18 = v24; /*0x65501f*/
            }
            *(_BYTE *)(v17 + 2) = v18; /*0x655023*/
          }
        }
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x65502b*/
      v4 = result; /*0x655030*/
      if ( !result ) /*0x655034*/
        break; /*0x655034*/
      v3 = v25; /*0x654eff*/
      v6 = v26; /*0x654f03*/
    }
  }
  return result; /*0x65503b*/
}



// ==== 0x00655050  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_655050(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi

  v3 = *a3; /*0x655063*/
  v4 = a3[1]; /*0x655066*/
  v5 = v3 + *((_DWORD *)this + 1316) - v4; /*0x65506e*/
  v6 = v3 + v4 - *((_DWORD *)this + 1318); /*0x655075*/
  v7 = 2; /*0x655077*/
  if ( v5 == -1 ) /*0x65507c*/
  {
    v5 = 0; /*0x65507e*/
LABEL_4:
    v7 = 1; /*0x655090*/
    goto LABEL_5; /*0x655090*/
  }
  if ( v5 == 2 * this->u32_41 - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
LABEL_5:
  *a2 = v5; /*0x655095*/
  a2[1] = v6; /*0x6550a2*/
  a2[2] = v7; /*0x6550a6*/
  a2[3] = 1; /*0x6550aa*/
  return a2; /*0x6550a5*/
}



// ==== 0x006550C0  ObjectClass::Team_Load_6550C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Load_6550C0(ObjectClass *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebp
  int v5; // edi
  __int16 *v6; // eax
  __int16 *v7; // ebx
  int v8; // eax
  __int16 *v10; // [esp+1Ch] [ebp+8h]

  v3 = *a3; /*0x6550c8*/
  v5 = a3[1]; /*0x6550ce*/
  v10 = (__int16 *)*((_DWORD *)this + 1319); /*0x6550e0*/
  LOWORD(v6) = Math::RoundToInt((double)(v3 + *((_DWORD *)this + 1316) - v5) * *((float *)this + 1314) + (double)(int)v10); /*0x6550f8*/
  v7 = v6; /*0x6550fd*/
  LOWORD(v8) = Math::RoundToInt((double)(v3 + v5 - *((_DWORD *)this + 1318)) * *((float *)this + 1314) + (double)*((int *)this + 1320)); /*0x65511d*/
  if ( v7 == (__int16 *)((char *)v10 - 1) ) /*0x655129*/
    v7 = (__int16 *)((char *)v7 + 1); /*0x65512b*/
  *a2 = v7; /*0x655139*/
  a2[1] = v8; /*0x65513b*/
  a2[2] = 1; /*0x655140*/
  a2[3] = 1; /*0x655143*/
  return a2; /*0x655146*/
}



// ==== 0x006551C0  BuildingClass::AddUpgrade  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AddUpgrade(int *this, int a2)
{
  int result; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  int v6; // edx

  result = *(this + 1165) - 1; /*0x6551cf*/
  if ( result < 0 ) /*0x6551d0*/
  {
LABEL_6:
    v5 = *(this + 1163); /*0x6551f5*/
    result = *(this + 1165); /*0x6551fb*/
    if ( result < v5 /*0x65522b*/
      || ((LOBYTE(result) = *((_BYTE *)this + 4657), (_BYTE)result) || !v5)
      && (result = *(this + 1166), result > 0)
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(*(this + 1161) + 8))(this + 1161, v5 + result, 0),
          (_BYTE)result) )
    {
      result = *(this + 1165); /*0x65522d*/
      v6 = *(this + 1162); /*0x655230*/
      *(this + 1165) = result + 1; /*0x655236*/
      *(_DWORD *)(v6 + 4 * result) = *(_DWORD *)a2; /*0x65523b*/
    }
    *((_BYTE *)this + 5337) = 1; /*0x65523e*/
  }
  else
  {
    v4 = (_WORD *)(*(this + 1162) + 4 * result); /*0x6551db*/
    while ( *v4 != *(_WORD *)a2 || v4[1] != *(_WORD *)(a2 + 2) ) /*0x6551eb*/
    {
      --result; /*0x6551ed*/
      v4 -= 2; /*0x6551ee*/
      if ( result < 0 ) /*0x6551f3*/
        goto LABEL_6; /*0x6551f3*/
    }
  }
  return result; /*0x655245*/
}



// ==== 0x00655250  Surface::RenderRadar  this=Surface  sig=csp ====
int __thiscall Surface::RenderRadar(XSurface *this)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int *v9; // eax
  int v10; // ecx
  void *v11; // eax
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  char v15; // dl
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int result; // eax
  int v28; // ecx
  int *v29; // edi
  int v30; // edx
  __int16 v31; // [esp+Ch] [ebp-90h] BYREF
  char v32; // [esp+Eh] [ebp-8Eh]
  __int16 v33; // [esp+10h] [ebp-8Ch] BYREF
  char v34; // [esp+12h] [ebp-8Ah]
  __int16 v35[2]; // [esp+14h] [ebp-88h] BYREF
  int v36; // [esp+18h] [ebp-84h]
  int v37; // [esp+1Ch] [ebp-80h]
  int v38; // [esp+24h] [ebp-78h]
  int v39; // [esp+28h] [ebp-74h] BYREF
  int v40; // [esp+2Ch] [ebp-70h]
  int v41; // [esp+30h] [ebp-6Ch]
  int v42; // [esp+34h] [ebp-68h]
  int v43; // [esp+38h] [ebp-64h]
  int v44; // [esp+40h] [ebp-5Ch]
  int v45; // [esp+44h] [ebp-58h]
  int v46; // [esp+48h] [ebp-54h]
  int v47[4]; // [esp+4Ch] [ebp-50h] BYREF
  int v48[7]; // [esp+5Ch] [ebp-40h] BYREF
  int v49; // [esp+78h] [ebp-24h]
  int v50[4]; // [esp+7Ch] [ebp-20h] BYREF
  int v51[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = 0; /*0x65525b*/
  v3 = *((_DWORD *)this + 1165); /*0x65525d*/
  v36 = 0; /*0x655263*/
  v4 = v3 - 1; /*0x655267*/
  v37 = 0; /*0x655268*/
  v38 = 0; /*0x65526c*/
  v43 = v4; /*0x655270*/
  if ( v4 >= 0 ) /*0x655274*/
  {
    while ( 1 ) /*0x65528b*/
    {
      *(_DWORD *)v35 = *(_DWORD *)(*((_DWORD *)this + 1162) + 4 * v4); /*0x65528b*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v35, 1) ) /*0x655298*/
        goto LABEL_32; /*0x655298*/
      v5 = v35[0] + *((_DWORD *)this + 1316) - v35[1]; /*0x6552b8*/
      v6 = 2; /*0x6552bf*/
      if ( v5 == -1 ) /*0x6552c4*/
        break; /*0x6552c4*/
      if ( v5 == 2 * *((_DWORD *)this + 65) - 1 ) /*0x6552d6*/
        goto LABEL_6; /*0x6552d6*/
LABEL_7:
      v40 = v35[0] + v35[1] - *((_DWORD *)this + 1318); /*0x6552dd*/
      v41 = v6; /*0x6552e8*/
      v7 = *((_DWORD *)this + 1168); /*0x6552ec*/
      v42 = 1; /*0x6552f2*/
      v8 = *((_DWORD *)this + 1169); /*0x6552f6*/
      v47[0] = 0; /*0x6552fd*/
      v47[1] = 0; /*0x655301*/
      v47[2] = v7; /*0x65530a*/
      v47[3] = v8; /*0x65530e*/
      v39 = v5; /*0x65531e*/
      v9 = ClipRectIntersection(v50, &v39, v47, 0, 0); /*0x655322*/
      v39 = *v9; /*0x65532b*/
      v40 = v9[1]; /*0x655332*/
      v41 = v9[2]; /*0x655339*/
      v10 = v9[3]; /*0x65533d*/
      v42 = v10; /*0x655342*/
      if ( v41 > 0 && v10 > 0 ) /*0x65534e*/
      {
        v33 = 0; /*0x655358*/
        v34 = 0; /*0x655368*/
        v31 = 0; /*0x65536d*/
        v32 = 0; /*0x655377*/
        v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v35); /*0x65537c*/
        v12 = v39 + v40 * *((_DWORD *)this + 1168); /*0x655390*/
        GetCellRadarColors((int)v11, (int)&v33, (int)&v31); /*0x65539e*/
        if ( v5 ) /*0x6553ab*/
        {
          if ( v41 != 1 ) /*0x6553d2*/
            goto LABEL_14; /*0x6553d2*/
          v14 = 3 * v12 + *((_DWORD *)this + 1167); /*0x6553de*/
          *(_WORD *)v14 = v33; /*0x6553e5*/
          v15 = v34; /*0x6553e8*/
        }
        else
        {
          if ( v41 == 1 ) /*0x6553b0*/
          {
            v13 = *((_DWORD *)this + 1167) + 3 * v12 + 3; /*0x6553bc*/
            *(_WORD *)v13 = v31; /*0x6553c3*/
            *(_BYTE *)(v13 + 2) = v32; /*0x6553ca*/
            goto LABEL_16; /*0x6553cd*/
          }
LABEL_14:
          v16 = *((_DWORD *)this + 1167) + 3 * v12; /*0x6553ee*/
          *(_WORD *)v16 = v33; /*0x6553ff*/
          *(_BYTE *)(v16 + 2) = v34; /*0x655406*/
          v14 = *((_DWORD *)this + 1167) + 3 * v12 + 3; /*0x655413*/
          *(_WORD *)v14 = v31; /*0x65541a*/
          v15 = v32; /*0x65541d*/
        }
        *(_BYTE *)(v14 + 2) = v15; /*0x655421*/
LABEL_16:
        v17 = *((_DWORD *)this + 1168); /*0x655424*/
        v18 = *((_DWORD *)this + 1169); /*0x65542a*/
        v48[0] = 0; /*0x655430*/
        v48[1] = 0; /*0x655434*/
        v48[2] = v17; /*0x655439*/
        v48[3] = v18; /*0x655441*/
        v19 = GenerateImageThumbnail((float *)this->__pad_0, v51, v48, &v39, 0); /*0x655455*/
        v20 = *v19; /*0x65545e*/
        v44 = v19[1]; /*0x655463*/
        v21 = v19[2]; /*0x655467*/
        v45 = v21; /*0x65546a*/
        v22 = v19[3]; /*0x65546e*/
        v46 = v22; /*0x655471*/
        if ( v2 <= 0 || v38 <= 0 ) /*0x655481*/
        {
          v26 = *v19; /*0x655501*/
          v24 = v19[1]; /*0x655503*/
          v2 = v19[2]; /*0x655506*/
          v25 = v19[3]; /*0x655509*/
        }
        else if ( v21 <= 0 || v22 <= 0 ) /*0x655489*/
        {
          v26 = v36; /*0x6554f5*/
          v24 = v37; /*0x6554f9*/
          v25 = v38; /*0x6554fd*/
        }
        else
        {
          v23 = v36; /*0x65548b*/
          v24 = v37; /*0x65548f*/
          v49 = v38; /*0x655495*/
          if ( v36 > v20 ) /*0x655499*/
          {
            v2 = v36 + v2 - v20; /*0x65549d*/
            v23 = v20; /*0x65549f*/
          }
          if ( v37 > v44 ) /*0x6554a7*/
          {
            v24 = v44; /*0x6554b1*/
            v49 += v37 - v44; /*0x6554b3*/
          }
          if ( v2 + v23 < v20 + v45 ) /*0x6554c2*/
            v2 = v45 - v23 + v20 + 1; /*0x6554ca*/
          v25 = v49; /*0x6554d8*/
          if ( v49 + v24 < v44 + v46 ) /*0x6554e1*/
            v25 = v44 - v24 + v46 + 1; /*0x6554ed*/
          v26 = v23; /*0x6554f1*/
        }
        v4 = v43; /*0x65550c*/
        v36 = v26; /*0x655510*/
        v37 = v24; /*0x655514*/
        v38 = v25; /*0x655518*/
      }
LABEL_32:
      v43 = --v4; /*0x65551d*/
      if ( v4 < 0 ) /*0x655521*/
        goto LABEL_33; /*0x655521*/
    }
    v5 = 0; /*0x6552c6*/
LABEL_6:
    v6 = 1; /*0x6552d8*/
    goto LABEL_7; /*0x6552d8*/
  }
LABEL_33:
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 1161) + 12))((char *)this + 4644); /*0x655528*/
  result = v36; /*0x655537*/
  v28 = v37; /*0x65553b*/
  v29 = (int *)this + 1170; /*0x65553f*/
  v30 = v38; /*0x655545*/
  *v29 = v36; /*0x655549*/
  v29[1] = v28; /*0x65554b*/
  v29[2] = v2; /*0x65554e*/
  v29[3] = v30; /*0x655551*/
  return result; /*0x655554*/
}



// ==== 0x00655560  BuildingClass::ProcessFogCellOccupancy  this=BuildingClass  sig=csp ====
void __thiscall sub_655560(int this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int *v15; // esi
  int v16; // esi
  int v17; // edi
  int v18; // esi
  int v19; // eax
  _DWORD *v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // edx
  _DWORD *v29; // eax
  int v31; // [esp+14h] [ebp-10h] BYREF
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]

  v4 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), &v31); /*0x655578*/
  v5 = *v4; /*0x65557b*/
  v6 = a3; /*0x65557d*/
  v7 = v4[1]; /*0x655583*/
  v8 = v4[2]; /*0x655586*/
  v9 = v4[3]; /*0x655589*/
  if ( a3 < *v4 || a3 >= v8 + v5 || (v10 = a4, a4 < v7) || a4 >= v7 + v9 ) /*0x6555a2*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x6555b0*/
      return; /*0x6555b0*/
    v6 = a3; /*0x6555b6*/
    if ( a3 < v5 ) /*0x6555bc*/
    {
      v6 = v5; /*0x6555be*/
      a3 = v5; /*0x6555c0*/
    }
    v11 = v8 + v5; /*0x6555c4*/
    if ( v6 >= v11 ) /*0x6555c8*/
    {
      v6 = v11 - 1; /*0x6555ca*/
      a3 = v11 - 1; /*0x6555cd*/
    }
    v10 = a4; /*0x6555d1*/
    if ( a4 < v7 ) /*0x6555d7*/
    {
      v10 = v7; /*0x6555d9*/
      a4 = v7; /*0x6555db*/
    }
    v12 = v7 + v9; /*0x6555df*/
    if ( v10 >= v7 + v9 ) /*0x6555e4*/
    {
      v10 = v12 - 1; /*0x6555e6*/
      a4 = v12 - 1; /*0x6555e9*/
    }
    *(_DWORD *)(a2 + 520) = v6; /*0x6555f1*/
    *(_DWORD *)(a2 + 524) = v10; /*0x6555f7*/
  }
  v13 = v6; /*0x655600*/
  v14 = 0; /*0x655611*/
  v15 = *(int **)(this + 4696); /*0x655613*/
  v32 = v6; /*0x655619*/
  v33 = v10; /*0x655620*/
  v16 = *v15; /*0x655624*/
  v17 = *(_DWORD *)(v16 + 24 * (unsigned __int8)(v6 - 5 * v10) + 4); /*0x655626*/
  v18 = v16 + 24 * (unsigned __int8)(v6 - 5 * v10); /*0x65562a*/
  v19 = *(_DWORD *)(v18 + 16); /*0x65562d*/
  if ( v19 <= 0 ) /*0x655632*/
  {
LABEL_22:
    v21 = *(_DWORD *)(v18 + 8); /*0x655659*/
    if ( *(#375 **)(a2 + 540) == dword_A83D4C ) /*0x65566e*/
    {
      if ( v19 < v21 /*0x655697*/
        || (*(_BYTE *)(v18 + 13) || !v21)
        && (v22 = *(_DWORD *)(v18 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v22, 0) )
      {
        v23 = *(_DWORD *)(v18 + 16); /*0x65569e*/
        if ( v23 ) /*0x6556a3*/
          memcpy((void *)(*(_DWORD *)(v18 + 4) + 16), *(const void **)(v18 + 4), 16 * v23); /*0x6556b1*/
        v24 = *(_DWORD **)(v18 + 4); /*0x6556b9*/
        v25 = v33; /*0x6556bc*/
        *v24 = a2; /*0x6556c0*/
        v24[1] = v13; /*0x6556c2*/
        v24[2] = v25; /*0x6556c5*/
        v24[3] = a2; /*0x6556c8*/
        ++*(_DWORD *)(v18 + 16); /*0x6556cf*/
      }
    }
    else if ( v19 < v21 /*0x6556f3*/
           || (*(_BYTE *)(v18 + 13) || !v21)
           && (v26 = *(_DWORD *)(v18 + 20), v26 > 0)
           && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v26, 0) )
    {
      v27 = *(_DWORD *)(v18 + 16); /*0x6556fa*/
      v28 = v33; /*0x6556fd*/
      *(_DWORD *)(v18 + 16) = v27 + 1; /*0x655704*/
      v29 = (_DWORD *)(*(_DWORD *)(v18 + 4) + 16 * v27); /*0x65570d*/
      *v29 = a2; /*0x65570f*/
      v29[1] = v13; /*0x655711*/
      v29[2] = v28; /*0x655714*/
      v29[3] = a2; /*0x655717*/
    }
    FogOfWar::RevealCell(this, &a3); /*0x655725*/
    *(_BYTE *)(this + 5337) = 1; /*0x65572a*/
  }
  else
  {
    v20 = (_DWORD *)(v17 + 4); /*0x655634*/
    while ( *(v20 - 1) != a2 || *v20 != v6 || v20[1] != v10 ) /*0x655647*/
    {
      ++v14; /*0x65564d*/
      v20 += 4; /*0x65564e*/
      if ( v14 >= v19 ) /*0x655653*/
      {
        v13 = v32; /*0x655655*/
        goto LABEL_22; /*0x655655*/
      }
    }
  }
}



// ==== 0x00655740  BuildingClass::RemoveGapCellCoverage  this=IUnknown  sig=csp ====
void __thiscall sub_655740(int this, int a2, int a3, int a4)
{
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ebx
  _DWORD *v14; // ecx
  _DWORD v15[4]; // [esp+8h] [ebp-10h] BYREF

  v5 = **(_DWORD **)(this + 4696); /*0x655763*/
  v15[1] = a3; /*0x655765*/
  v15[2] = a4; /*0x65576c*/
  v6 = (_DWORD *)(v5 + 24 * (unsigned __int8)(a3 - 5 * a4)); /*0x655770*/
  v15[0] = a2; /*0x655777*/
  v15[3] = a2; /*0x65577b*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 16))(v6, v15); /*0x655788*/
  if ( v7 != -1 ) /*0x65578e*/
  {
    v8 = v6[4]; /*0x655790*/
    if ( v7 < v8 ) /*0x655795*/
    {
      v9 = v8 - 1; /*0x655797*/
      v10 = v7; /*0x655798*/
      v6[4] = v9; /*0x65579c*/
      if ( v7 < v9 ) /*0x65579f*/
      {
        v11 = 16 * v7; /*0x6557a3*/
        do /*0x6557ce*/
        {
          v12 = v6[1]; /*0x6557a6*/
          v13 = (_DWORD *)(v11 + v12 + 16); /*0x6557a9*/
          v14 = (_DWORD *)(v11 + v12); /*0x6557ad*/
          ++v10; /*0x6557af*/
          v11 += 16; /*0x6557b0*/
          *v14 = *v13; /*0x6557b5*/
          v14[1] = v13[1]; /*0x6557ba*/
          v14[2] = v13[2]; /*0x6557c0*/
          v14[3] = v13[3]; /*0x6557c6*/
        }
        while ( v10 < v6[4] ); /*0x6557ce*/
      }
      FogOfWar::RevealCell(this, &a3); /*0x6557d9*/
      *(_BYTE *)(this + 5337) = 1; /*0x6557de*/
    }
  }
}



// ==== 0x006557F0  Coord::WorldToScreen  this=Coord  sig=csp ====
int *__thiscall Coord::WorldToScreen(Coord *this, int *a2, int *a3, char a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // edi

  v4 = *a3; /*0x6557f7*/
  v5 = a3[1]; /*0x6557f9*/
  LOWORD(v7) = Math::RoundToInt((double)(*a3 + (*((_DWORD *)this + 1316) << 8) - v5) * *((float *)this + 1314) * 0.00390625); /*0x655820*/
  v8 = v7; /*0x65582b*/
  LOWORD(v9) = Math::RoundToInt((double)(v4 + v5 - (*((_DWORD *)this + 1318) << 8)) * *((float *)this + 1314) * 0.00390625); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v8 < 0 ) /*0x655857*/
      v8 = 0; /*0x655859*/
    v10 = *((_DWORD *)this + 1321); /*0x65585b*/
    if ( v8 >= v10 ) /*0x655863*/
      v8 = v10 - 1; /*0x655865*/
    if ( v9 < 0 ) /*0x65586a*/
      v9 = 0; /*0x65586c*/
    v11 = *((_DWORD *)this + 1322); /*0x65586e*/
    if ( v9 >= v11 ) /*0x655876*/
      v9 = v11 - 1; /*0x655878*/
  }
  *a2 = v8; /*0x655881*/
  a2[1] = v9; /*0x655883*/
  return a2; /*0x65587f*/
}



// ==== 0x00655890  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_655890(ObjectClass *this)
{
  return (int)this->AbstractClass + 251 * (int)this->?; /*0x6558a3*/
}



// ==== 0x006558B0  Radar::PixelIndex  this=Radar  sig=csp ====
int __thiscall Radar::PixelIndex(Radar *this)
{
  return *(_DWORD *)&this->Radar_field_0x2[2] + 251 * *(_DWORD *)&this->Radar_field_0x6[2]; /*0x6558c4*/
}



// ==== 0x006558D0  RandomMap::PlaceTileSet  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::PlaceTileSet(RandomMap *this)
{
  RandomMap *v1; // ebp
  _DWORD *result; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx

  v1 = this; /*0x6558d4*/
  result = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x6558dc*/
  v3 = result; /*0x6558e1*/
  v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    v5 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x65590c*/
    if ( v5 ) /*0x655916*/
    {
      v6 = v5 + 1; /*0x655918*/
      *v5 = 256; /*0x65591b*/
      v7 = v5 + 1; /*0x655921*/
      v8 = 256; /*0x655923*/
      do /*0x65594c*/
      {
        v7[1] = 0; /*0x65592a*/
        v7[2] = 0; /*0x65592d*/
        *((_BYTE *)v7 + 12) = 1; /*0x655930*/
        *((_BYTE *)v7 + 13) = 0; /*0x655933*/
        *v7 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x655936*/
        *v7 = &DynamicVectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x65593c*/
        v7[5] = 10; /*0x655942*/
        v7[4] = 0; /*0x655945*/
        v7 += 6; /*0x655948*/
        --v8; /*0x65594b*/
      }
      while ( v8 ); /*0x65594c*/
      v9 = v6; /*0x65594e*/
      v1 = this; /*0x655950*/
    }
    else
    {
      v9 = 0; /*0x655956*/
    }
    v10 = v3[2]; /*0x655958*/
    *v3 = v9; /*0x65595b*/
    result = 0; /*0x65595d*/
    if ( v10 > 0 ) /*0x655961*/
    {
      do /*0x655972*/
      {
        result = (_DWORD *)((char *)result + 1); /*0x655965*/
        *(_DWORD *)(v4 + *v3 + 20) = 10; /*0x655966*/
        v4 += 24; /*0x65596d*/
      }
      while ( (int)result < v3[2] ); /*0x655972*/
    }
    *(_DWORD *)&v1[8].__pad_4C[396] = v3; /*0x655974*/
  }
  else
  {
    *(_DWORD *)&v1[8].__pad_4C[396] = 0; /*0x655980*/
  }
  return result; /*0x65597b*/
}



// ==== 0x00655990  RadarClass::Process  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Process(RadarClass *this)
{
  RadarClass *v1; // ebx
  MapClass *RadarClass_field_0x1258; // esi
  MapClass *v3; // eax
  MapClass *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  RadarHashVector *v8; // edi
  _DWORD *v9; // eax
  int MapClass_field_0x8; // ecx
  int v11; // eax
  int v12; // ecx
  int result; // eax
  RadarClass *v14; // [esp+0h] [ebp-Ch]

  v1 = this; /*0x655992*/
  RadarClass_field_0x1258 = this->RadarClass_field_0x1258; /*0x655999*/
  if ( RadarClass_field_0x1258 ) /*0x6559a1*/
  {
    if ( RadarClass_field_0x1258->MapClass_field_0x0 ) /*0x6559a3*/
      (**(void (__thiscall ***)(void *, int))RadarClass_field_0x1258->MapClass_field_0x0)( /*0x6559ad*/
        RadarClass_field_0x1258->MapClass_field_0x0,
        3);
    __3_YAXPAX_Z(RadarClass_field_0x1258); /*0x6559b0*/
  }
  v3 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x6559ba*/
  v4 = v3; /*0x6559bf*/
  if ( v3 ) /*0x6559c6*/
  {
    v5 = 256; /*0x6559ca*/
    v3->MapClass_field_0x4 = Radar::PixelIndex; /*0x6559d9*/
    v3->MapClass_field_0x8 = (void *)256; /*0x6559e0*/
    v3->MapClass_field_0xC = (void *)10; /*0x6559e3*/
    v6 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x6559e6*/
    if ( v6 ) /*0x6559f0*/
    {
      v7 = v6 + 1; /*0x6559f2*/
      *v6 = 256; /*0x6559f5*/
      v8 = (RadarHashVector *)(v6 + 1); /*0x6559f7*/
      do /*0x655a08*/
      {
        RadarHashVector::Construct(v8, 0, 0); /*0x6559ff*/
        v8 = (RadarHashVector *)((char *)v8 + 24); /*0x655a04*/
        --v5; /*0x655a07*/
      }
      while ( v5 ); /*0x655a08*/
      v9 = v7; /*0x655a0a*/
      v1 = this; /*0x655a0c*/
    }
    else
    {
      v9 = 0; /*0x655a17*/
    }
    MapClass_field_0x8 = (int)v4->MapClass_field_0x8; /*0x655a19*/
    v4->MapClass_field_0x0 = v9; /*0x655a1c*/
    v11 = 0; /*0x655a1e*/
    if ( MapClass_field_0x8 > 0 ) /*0x655a22*/
    {
      v12 = 0; /*0x655a24*/
      do /*0x655a35*/
      {
        ++v11; /*0x655a28*/
        *(_DWORD *)((char *)v4->MapClass_field_0x0 + v12 + 20) = 10; /*0x655a29*/
        v12 += 24; /*0x655a30*/
      }
      while ( v11 < (int)v4->MapClass_field_0x8 ); /*0x655a35*/
    }
  }
  else
  {
    v4 = 0; /*0x655a3b*/
  }
  v1->RadarClass_field_0x1258 = v4; /*0x655a47*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x655a4d*/
  RadarClass::RecreateSurface(v14, (int)v1); /*0x655a54*/
  for ( result = 0; /*0x655a65*/
        result < *(int *)&stru_A8EB00.?[164];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result - 4) + 1059) = 0 )
  {
    ++result; /*0x655a6d*/
  }
  return result; /*0x655a61*/
}



// ==== 0x00655A90  TacticalClass::FreeResources  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::FreeResources(TacticalClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // edi

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1159); /*0x655a96*/
  if ( v2 ) /*0x655a9e*/
  {
    (**v2)(v2, 1); /*0x655aa4*/
    *((_DWORD *)this + 1159) = 0; /*0x655aa6*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1160); /*0x655aac*/
  if ( v3 ) /*0x655ab4*/
  {
    (**v3)(v3, 1); /*0x655aba*/
    *((_DWORD *)this + 1160) = 0; /*0x655abc*/
  }
  if ( *((_DWORD *)this + 1167) ) /*0x655ac2*/
  {
    __3_YAXPAX_Z(*((void **)this + 1167)); /*0x655acd*/
    *((_DWORD *)this + 1167) = 0; /*0x655ad5*/
  }
  v4 = (_DWORD *)*((_DWORD *)this + 1174); /*0x655adc*/
  if ( v4 ) /*0x655ae4*/
  {
    if ( *v4 ) /*0x655ae6*/
      (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x655af0*/
    __3_YAXPAX_Z(v4); /*0x655af3*/
    *((_DWORD *)this + 1174) = 0; /*0x655afb*/
  }
  if ( *((_DWORD *)this + 1181) ) /*0x655b01*/
  {
    __3_YAXPAX_Z(*((void **)this + 1181)); /*0x655b0d*/
    *((_DWORD *)this + 1181) = 0; /*0x655b15*/
  }
}



// ==== 0x00655B20  RadarClass::InitializeHashTable  this=RadarClass  sig=csp ====
void __thiscall RadarClass::InitializeHashTable(RadarClass *this)
{
  MapClass *v2; // eax
  MapClass *v3; // esi
  int v4; // ebp
  _DWORD *v5; // eax
  RadarHashVector *v6; // edi
  void *v7; // eax
  int MapClass_field_0x8; // ecx
  int v9; // eax
  int v10; // ecx
  int i; // eax
  MapClass *RadarClass_field_0x14B4; // [esp-8h] [ebp-18h]
  RadarClass *v13; // [esp+0h] [ebp-10h]
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  this->RadarClass_field_0x121C = 0; /*0x655b2a*/
  this->RadarClass_field_0x1220 = 0; /*0x655b30*/
  this->RadarClass_field_0x123C = 0; /*0x655b36*/
  this->RadarClass_field_0x1258 = 0; /*0x655b3c*/
  this->RadarClass_field_0x1274 = 0; /*0x655b42*/
  v2 = (MapClass *)__2_YAPAXI_Z(0x10u); /*0x655b48*/
  v3 = v2; /*0x655b4d*/
  if ( v2 ) /*0x655b54*/
  {
    v4 = 256; /*0x655b57*/
    v2->MapClass_field_0x4 = Radar::PixelIndex; /*0x655b66*/
    v2->MapClass_field_0x8 = (void *)256; /*0x655b6d*/
    v2->MapClass_field_0xC = (void *)10; /*0x655b70*/
    v5 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x655b73*/
    if ( v5 ) /*0x655b7d*/
    {
      *v5 = 256; /*0x655b7f*/
      v14 = v5 + 1; /*0x655b84*/
      v6 = (RadarHashVector *)(v5 + 1); /*0x655b88*/
      do /*0x655b99*/
      {
        RadarHashVector::Construct(v6, 0, 0); /*0x655b90*/
        v6 = (RadarHashVector *)((char *)v6 + 24); /*0x655b95*/
        --v4; /*0x655b98*/
      }
      while ( v4 ); /*0x655b99*/
      v7 = v14; /*0x655b9b*/
    }
    else
    {
      v7 = 0; /*0x655ba6*/
    }
    MapClass_field_0x8 = (int)v3->MapClass_field_0x8; /*0x655ba8*/
    v3->MapClass_field_0x0 = v7; /*0x655bab*/
    v9 = 0; /*0x655bad*/
    if ( MapClass_field_0x8 > 0 ) /*0x655bb2*/
    {
      v10 = 0; /*0x655bb4*/
      do /*0x655bc5*/
      {
        ++v9; /*0x655bb8*/
        *(_DWORD *)((char *)v3->MapClass_field_0x0 + v10 + 20) = 10; /*0x655bb9*/
        v10 += 24; /*0x655bc0*/
      }
      while ( v9 < (int)v3->MapClass_field_0x8 ); /*0x655bc5*/
    }
  }
  else
  {
    v3 = 0; /*0x655bcb*/
  }
  this->RadarClass_field_0x1258 = v3; /*0x655bd7*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x655bdd*/
  RadarClass::RecreateSurface(v13, (int)this); /*0x655be4*/
  for ( i = 0; /*0x655bf3*/
        i < *(int *)&stru_A8EB00.?[164];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i - 4) + 1059) = 0 )
  {
    ++i; /*0x655bfb*/
  }
  if ( this->RadarClass_field_0x14B0 == (MapClass *)3 ) /*0x655c18*/
  {
    RadarClass_field_0x14B4 = this->RadarClass_field_0x14B4; /*0x655c21*/
    this->RadarClass_field_0x14AC = (void *)5; /*0x655c24*/
    RadarClass::SetViewMode((int *)this, (int)RadarClass_field_0x14B4, 0); /*0x655c2e*/
    RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x655c3b*/
  }
}



// ==== 0x00655C50  FogOfWar::RevealArea  this=RadarClass  sig=csp ====
int __thiscall FogOfWar_RevealArea(int this, int *a2)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // ebp
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  bool v28; // cc
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  int v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  int v36; // [esp+18h] [ebp-28h]
  _DWORD v37[2]; // [esp+20h] [ebp-20h] BYREF
  int GroundHeight; // [esp+28h] [ebp-18h]
  int v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  int v41; // [esp+44h] [ebp+4h]
  char v42; // [esp+44h] [ebp+4h]
  int v43; // [esp+44h] [ebp+4h]

  result = (int)dword_A83D4C; /*0x655c50*/
  if ( !dword_A83D4C ) /*0x655c62*/
    return result; /*0x655c62*/
  result = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), v40); /*0x655c75*/
  v5 = *a2; /*0x655c7e*/
  v41 = *a2; /*0x655c82*/
  if ( v41 < *(_DWORD *)result ) /*0x655c86*/
    return result; /*0x655c86*/
  if ( v5 >= *(_DWORD *)result + *(_DWORD *)(result + 8) ) /*0x655c93*/
    return result; /*0x655c93*/
  v6 = a2[1]; /*0x655c99*/
  v7 = *(_DWORD *)(result + 4); /*0x655c9c*/
  if ( v6 < v7 ) /*0x655ca5*/
    return result; /*0x655ca5*/
  result = v7 + *(_DWORD *)(result + 12); /*0x655cae*/
  if ( v6 >= result ) /*0x655cb2*/
    return result; /*0x655cb2*/
  v8 = (double)v41 / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x655cc2*/
  v37[0] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (v42 = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    v42 = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !(unsigned __int8)FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(*a2 - 5 * a2[1]); /*0x655da7*/
  v10 = *(_DWORD *)(v9 + 16); /*0x655daa*/
  v11 = *(_DWORD *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = (_DWORD *)(v11 + 4); /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(v12 - 1); /*0x655dc4*/
    if ( *v12 != *a2 || v12[1] != a2[1] ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!v42 || (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540))) /*0x655e10*/
      && (!*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(dword_A83D4C, v13)) )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = *(_DWORD *)(v13 + 540); /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v14 + 52) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
LABEL_25:
    v12 += 4; /*0x655e6a*/
    if ( ++v35 >= v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), a2); /*0x655e93*/
      (*(void (__thiscall **)(_DWORD, int *, unsigned int))(**(_DWORD **)(this + 4636) + 36))( /*0x655f40*/
        *(_DWORD *)(this + 4636),
        a2,
        ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Red) << g_BitShift_Green_0) >> 1) >> g_BitShift_Green_0 << g_BitShift_Red)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitMask_Green) << g_BitMask_Blue) >> 1) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Blue) << g_BitMask_Red) >> 1) >> g_BitMask_Red << g_BitShift_Blue));
    }
    else if ( v42 ) /*0x65605e*/
    {
      (*(void (__stdcall **)(int *, _DWORD))(**(_DWORD **)(this + 4636) + 36))(a2, 0); /*0x65608c*/
    }
    else
    {
      v20 = **(_DWORD **)(this + 4636); /*0x65606f*/
      v21 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), a2); /*0x656071*/
      (*(void (__thiscall **)(_DWORD, int *, int))(v20 + 36))(*(_DWORD *)(this + 4636), a2, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = *(_DWORD *)(v13 + 540); /*0x655f50*/
  v43 = v16; /*0x655f5b*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 196))(v13) ) /*0x655f5f*/
  {
    v43 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 208))(v13, 0); /*0x655f76*/
    v16 = v43; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = (*(unsigned __int8 *)(v43 + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x655fd2*/
        | (*(unsigned __int8 *)(v43 + 22266) >> g_BitMask_Blue << g_BitMask_Green)
        | (*(unsigned __int8 *)(v16 + 22267) >> g_BitMask_Red << g_BitShift_Blue);
  else
    v17 = *(_DWORD *)(FindBuildingAnimByName(g_INI_Key_LightGrey, 1) + 816); /*0x655fe5*/
  v18 = *(_DWORD *)(v13 + 372); /*0x655feb*/
  v19 = *(_DWORD *)(v13 + 380); /*0x655ff1*/
  if ( v18 == -1 ) /*0x655ffa*/
  {
LABEL_37:
    if ( v19 <= 0 || (v19 - 1) / *((_DWORD *)dword_8871E0 + 34) % 2 != 1 || *(#375 **)(v13 + 540) != dword_A83D4C ) /*0x65603a*/
      goto LABEL_41; /*0x65603a*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 4636) + 36))(*(_DWORD *)(this + 4636), a2, ~v17); /*0x656048*/
  }
  else
  {
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x656006*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
LABEL_41:
    (*(void (__stdcall **)(int *, int))(**(_DWORD **)(this + 4636) + 36))(a2, v17); /*0x65604d*/
  }
LABEL_45:
  v22 = *(_DWORD *)(this + 5276); /*0x65608f*/
  v23 = *(_DWORD *)(this + 5280); /*0x656095*/
  v24 = (int *)(this + 4620); /*0x6560a0*/
  v25 = v22 + *a2; /*0x6560a6*/
  v26 = a2[1] + v23; /*0x6560a8*/
  if ( v24[2] <= 0 || v24[3] <= 0 ) /*0x6560be*/
  {
    v27 = v22 + *a2; /*0x656125*/
    v29 = a2[1] + v23; /*0x656127*/
    result = 1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *v24; /*0x6560c2*/
    v28 = *v24 <= v25; /*0x6560c5*/
    v29 = v24[1]; /*0x6560c7*/
    v30 = v24[2]; /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = v24[3]; /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 += v27 - v25; /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( v29 > v26 ) /*0x6560e6*/
    {
      v31 = v29 - v26 + v39; /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( v27 + v30 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = v25 - v27 + 2; /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( v39 + v29 < v26 + 1 ) /*0x656114*/
      v32 = v26 - v29 + 2; /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = v32; /*0x656121*/
  }
  *v24 = v27; /*0x65612d*/
  v24[1] = v29; /*0x65612f*/
  v24[2] = result; /*0x656132*/
  v24[3] = v33; /*0x656135*/
  return result; /*0x656138*/
}



// ==== 0x00656150  FogOfWar::RenderCell  this=FogOfWar  sig=csp ====
int __thiscall FogOfWar::RenderCell(FogOfWar *this)
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rax
  char *v5; // edi
  char *v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  int v14; // edx
  int v15; // eax
  _BYTE *v16; // edx
  int BuildingAnimByName; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v2 = this->q487; /*0x65615f*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x65616f*/
  v4 = v3 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2); /*0x65617b*/
  v5 = (char *)this->u32_1274; /*0x65617f*/
  HIDWORD(v4) = (((BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (HIDWORD(v4) >> 2)); /*0x656194*/
  v6 = &v5[4 * (HIDWORD(v4) >> 2)]; /*0x656194*/
  v7 = BYTE4(v4) & 3; /*0x656198*/
  v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    v9 = v8 + **((_DWORD **)this + 1174); /*0x6561ab*/
    v10 = *(_DWORD *)(v9 + 16); /*0x6561ad*/
    result = *(_DWORD *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      v12 = (_DWORD *)(result + 4); /*0x6561bb*/
      v22 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        v13 = (_DWORD *)*(v12 - 1); /*0x6561c8*/
        v14 = *v12 /*0x6561d8*/
            + v12[1] * (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 124))(this->q487);
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        v16 = (_BYTE *)(this->u32_1274 + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (unsigned __int8)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x656248*/
                                             + 4
                                             * *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(
                                                             v13,
                                                             0)
                                                         + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x65625c*/
          }
          v18 = *(_DWORD *)(BuildingAnimByName + 816); /*0x65625e*/
          v19 = *(_DWORD *)(BuildingAnimByName + 780); /*0x656264*/
          v20 = *(_DWORD *)(v19 + 372); /*0x65626d*/
          if ( *(_DWORD *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(unsigned __int8 *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v18); /*0x656281*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**((_DWORD **)this + 1159) + 36))( /*0x65628f*/
            this->q487,
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v22; /*0x656299*/
      }
      while ( v22 ); /*0x65629e*/
      v8 = v23; /*0x6562a4*/
    }
    v8 += 24; /*0x6562a8*/
    v23 = v8; /*0x6562b1*/
  }
  while ( v8 < 6144 ); /*0x6562b5*/
  return result; /*0x6562bb*/
}



// ==== 0x006562D0  FogOfWar::RevealCell  this=IUnknown  sig=csp ====
void __thiscall FogOfWar_RevealCell(int this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _BYTE *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( (int)*a2 >= 0 /*0x656310*/
    && *a2 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636))
    && (int)a2[1] >= 0
    && a2[1] < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)) )
  {
    v3 = *a2 + a2[1] * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636)); /*0x656329*/
    v4 = 1 << (v3 & 7); /*0x656333*/
    v5 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (unsigned __int8)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      v6 = *(_DWORD *)(this + 4708); /*0x656351*/
      if ( *(_DWORD *)(this + 4716) < v6 /*0x656376*/
        || (*(_BYTE *)(this + 4713) || !v6)
        && (v7 = *(_DWORD *)(this + 4720), v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4700) + 8))(this + 4700, v6 + v7, 0) )
      {
        v8 = *(_DWORD *)(this + 4716); /*0x65637d*/
        v9 = *(_DWORD *)(this + 4704); /*0x656380*/
        *(_DWORD *)(this + 4716) = v8 + 1; /*0x656386*/
        *(_DWORD *)(v9 + 8 * v8) = *a2; /*0x65638b*/
        *(_DWORD *)(v9 + 8 * v8 + 4) = a2[1]; /*0x656391*/
      }
      *(_BYTE *)(this + 5337) = 1; /*0x656395*/
    }
  }
}



// ==== 0x006563B0  RadarClass::UpdateFoundationShapesCustom  this=RadarClass  sig=csp ====
char __thiscall RadarClass::UpdateFoundationShapesCustom(float *this)
{
  float *v1; // ebp
  int v2; // ebx
  float *v3; // esi
  int v4; // edi
  double v5; // st7
  int v6; // ebp
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // ebx
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v1 = this; /*0x6563b5*/
  v2 = 0; /*0x6563b7*/
  v3 = this + 1182; /*0x6563bf*/
  v22 = 0; /*0x6563c5*/
  while ( 1 ) /*0x6563d3*/
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 12))(v3); /*0x6563d3*/
    v4 = *(int *)((char *)dword_819310 + v2); /*0x6563dc*/
    if ( *(int *)((char *)dword_8192B8 + v2) == 1 ) /*0x6563ed*/
    {
      v5 = v1[1314] + 0.5; /*0x6563f5*/
      if ( v5 < 1.0 ) /*0x656408*/
        v5 = 1.0; /*0x65640c*/
      v6 = Math::RoundToInt(v5); /*0x656417*/
      v19 = v6; /*0x656419*/
    }
    else
    {
      v7 = (double)*(int *)((char *)dword_8192B8 + v2) * v1[1314] + 0.5; /*0x656429*/
      if ( v7 < 2.0 ) /*0x65643c*/
        v7 = 2.0; /*0x656440*/
      v19 = Math::RoundToInt(v7); /*0x65644b*/
      v6 = v19; /*0x65644f*/
    }
    if ( v4 == 1 ) /*0x656454*/
    {
      v8 = this->q1488 + 0.5; /*0x656460*/
      if ( v8 < 1.0 ) /*0x656473*/
        v8 = 1.0; /*0x656477*/
    }
    else
    {
      v8 = (double)v4 * this->q1488 + 0.5; /*0x65648d*/
      if ( v8 < 2.0 ) /*0x6564a0*/
        v8 = 2.0; /*0x6564a4*/
    }
    v9 = Math::RoundToInt(v8); /*0x6564aa*/
    v10 = v9; /*0x6564af*/
    v11 = 0; /*0x6564b1*/
    v20 = v9; /*0x6564b3*/
    v12 = v9 + v6 - 1; /*0x6564b7*/
    v23 = v12; /*0x6564bd*/
    if ( v12 > 0 ) /*0x6564c1*/
    {
      v21 = 0; /*0x6564c7*/
      while ( 1 ) /*0x6564d1*/
      {
        if ( v11 >= v10 ) /*0x6564d3*/
          v9 = v11 - 2 * v10 + 2; /*0x6564e4*/
        else
          v9 = v21; /*0x6564d5*/
        if ( v11 >= v6 ) /*0x6564e9*/
          v13 = 2 * v6 - v11 - 2; /*0x6564f5*/
        else
          v13 = v11; /*0x6564eb*/
        v14 = v9; /*0x6564fa*/
        if ( v9 <= v13 ) /*0x6564fc*/
        {
          do /*0x656540*/
          {
            v15 = *((_DWORD *)v3 + 2); /*0x6564fe*/
            if ( *((_DWORD *)v3 + 4) < v15 /*0x656528*/
              || ((LOBYTE(v9) = *((_BYTE *)v3 + 13), (_BYTE)v9) || !v15)
              && (v9 = *((_DWORD *)v3 + 5), v9 > 0)
              && (LOBYTE(v9) = (*(int (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v15 + v9, 0),
                  (_BYTE)v9) )
            {
              v9 = *((_DWORD *)v3 + 4); /*0x65652a*/
              v16 = *((_DWORD *)v3 + 1); /*0x65652d*/
              *((_DWORD *)v3 + 4) = v9 + 1; /*0x656533*/
              *(_DWORD *)(v16 + 8 * v9) = v14; /*0x656536*/
              *(_DWORD *)(v16 + 8 * v9 + 4) = v11; /*0x656539*/
            }
            ++v14; /*0x65653d*/
          }
          while ( v14 <= v13 ); /*0x656540*/
          v10 = v20; /*0x656542*/
          v12 = v23; /*0x656546*/
        }
        ++v11; /*0x65654e*/
        --v21; /*0x656552*/
        if ( v11 >= v12 ) /*0x656556*/
          break; /*0x656556*/
        v6 = v19; /*0x6564cd*/
      }
      v2 = v22; /*0x65655c*/
    }
    v2 += 4; /*0x656560*/
    v3 += 6; /*0x656563*/
    v22 = v2; /*0x656569*/
    if ( v2 >= 88 ) /*0x65656d*/
      break; /*0x65656d*/
    v1 = this; /*0x6563cb*/
  }
  return v9; /*0x656573*/
}



// ==== 0x00656580  Diplomacy::GetField  this=Diplomacy  sig=csp ====
char *__thiscall Diplomacy::GetField(char *this, int a2)
{
  return this + 24 * *(_DWORD *)(a2 + 3824) + 4728; /*0x656595*/
}



// ==== 0x006565A0  CellClass::RevealFogRect  this=CellClass  sig=csp ====
void __thiscall sub_6565A0(int this, __int16 *a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // ebx
  int i; // edi
  int v21; // [esp+10h] [ebp-34h] BYREF
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h] BYREF
  int v27; // [esp+28h] [ebp-1Ch]
  int v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  _DWORD v30[4]; // [esp+34h] [ebp-10h] BYREF
  int v31; // [esp+48h] [ebp+4h]

  if ( !*(_DWORD *)(this + 4636) ) /*0x6565b1*/
    return; /*0x6565b1*/
  v3 = *(_DWORD *)(this + 5272); /*0x6565bb*/
  v4 = a2[1]; /*0x6565c1*/
  v5 = *a2; /*0x6565c5*/
  v6 = v5 + *(_DWORD *)(this + 5264) - v4; /*0x6565d2*/
  v7 = v5 + v4 - v3; /*0x6565d4*/
  v8 = 2; /*0x6565d9*/
  if ( v6 == -1 ) /*0x6565de*/
  {
    v6 = 0; /*0x6565e0*/
LABEL_5:
    v8 = 1; /*0x6565f2*/
    goto LABEL_6; /*0x6565f2*/
  }
  if ( v6 == 2 * *(_DWORD *)(this + 260) - 1 ) /*0x6565f0*/
    goto LABEL_5; /*0x6565f0*/
LABEL_6:
  v27 = v7; /*0x6565f7*/
  v9 = *(_DWORD *)(this + 4676); /*0x6565fb*/
  v28 = v8; /*0x656601*/
  v26 = v6; /*0x65660a*/
  v10 = *(_DWORD *)(this + 4672); /*0x65660e*/
  v24 = v9; /*0x65661a*/
  v29 = 1; /*0x656627*/
  v21 = 0; /*0x65662b*/
  v22 = 0; /*0x65662f*/
  v23 = v10; /*0x656633*/
  v11 = ClipRectIntersection(v30, &v26, &v21, 0, 0); /*0x656637*/
  v26 = *v11; /*0x65663e*/
  v27 = v11[1]; /*0x656645*/
  v28 = v11[2]; /*0x65664c*/
  v12 = *(_DWORD *)(this + 4636); /*0x656650*/
  v29 = v11[3]; /*0x656659*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 124))(v12); /*0x656668*/
  v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)); /*0x65666c*/
  v15 = v28; /*0x656672*/
  v21 = v14; /*0x656676*/
  if ( v28 > 0 && v29 > 0 ) /*0x656686*/
  {
    v16 = Math::RoundToInt((double)v26 * *(float *)(this + 5256)); /*0x656696*/
    v25 = (v16 - 1) & ((v16 - 1 < 0) - 1); /*0x6566b4*/
    v17 = Math::RoundToInt((double)(v26 + v15) * *(float *)(this + 5256)) + 1; /*0x6566c6*/
    if ( v17 >= v13 ) /*0x6566c8*/
      v17 = v13; /*0x6566ca*/
    v18 = Math::RoundToInt((double)v27 * *(float *)(this + 5256)); /*0x6566d6*/
    v19 = (v18 - 1) & ((v18 - 1 < 0) - 1); /*0x6566e8*/
    v31 = Math::RoundToInt((double)(v27 + v29) * *(float *)(this + 5256)) + 1; /*0x65670a*/
    if ( v31 >= v21 ) /*0x65670e*/
      v31 = v21; /*0x656710*/
    for ( ; v19 < v31; ++v19 ) /*0x656718*/
    {
      for ( i = v25; i < v17; ++i ) /*0x656720*/
      {
        v21 = i; /*0x656729*/
        v22 = v19; /*0x65672d*/
        FogOfWar::RevealCell(this, &v21); /*0x656731*/
      }
    }
  }
}



// ==== 0x00656750  TacticalClass::ScreenToCellLookup  this=TacticalClass  sig=csp ====
int __thiscall sub_656750(int this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int result; // eax
  double v13; // st7
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *retaddr; // [esp+24h] [ebp+0h]
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+30h] [ebp+Ch]

  v4 = *a2 - *(_DWORD *)(this + 5276); /*0x65676c*/
  v5 = a2[1] - *(_DWORD *)(this + 5280); /*0x65676e*/
  v6 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(v4 - 5 * v5); /*0x656795*/
  v7 = *(_DWORD *)(v6 + 16); /*0x656798*/
  *a4 = 0; /*0x65679b*/
  v8 = v7 - 1; /*0x6567a1*/
  if ( v8 >= 0 ) /*0x6567a4*/
  {
    v9 = (_DWORD *)(*(_DWORD *)(v6 + 4) + 16 * v8); /*0x6567ae*/
    v10 = v9 + 1; /*0x6567b0*/
    while ( 1 ) /*0x6567b5*/
    {
      v14[0] = *v9; /*0x6567b5*/
      if ( *v10 == v4 && v10[1] == v5 ) /*0x6567c2*/
        break; /*0x6567c2*/
      --v8; /*0x6567c4*/
      v9 -= 4; /*0x6567c5*/
      v10 -= 4; /*0x6567c8*/
      if ( v8 < 0 ) /*0x6567cd*/
        goto LABEL_8; /*0x6567cd*/
    }
    *a4 = v14[0]; /*0x6567d9*/
  }
LABEL_8:
  if ( *a4 ) /*0x6567e2*/
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD))(*(_DWORD *)*a4 + 76))(*a4, v14, 0); /*0x6567f4*/
    LOWORD(v16) = *v11 / 256; /*0x656807*/
    HIWORD(v16) = v11[1] / 256; /*0x65681f*/
    *retaddr = v16; /*0x656828*/
    return v16; /*0x656824*/
  }
  else
  {
    v13 = (double)v4 / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x65683a*/
    LOWORD(v17) = Math::RoundToInt(v13); /*0x656867*/
    result = Math::RoundToInt(v13); /*0x656878*/
    HIWORD(v17) = result; /*0x656881*/
    *a3 = v17; /*0x65688c*/
  }
  return result; /*0x65682a*/
}



// ==== 0x006568A0  RadarClass::Load  this=RadarClass  sig=csp ====
int __thiscall SidebarClass::Load(RadarClass *this, int a2)
{
  int v2; // edi
  int result; // eax
  VectorClass **p_RadarClass_field_0x125C; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  CampaignClass *RadarClass_field_0x1260; // edx
  VectorClass **p_RadarClass_field_0x1224; // esi
  int v11; // ebp
  VectorClass *v12; // ecx
  int v13; // eax
  VectorClass *v14; // eax
  VectorClass *v15; // edx
  RadarClass *v16; // esi
  int v17; // ecx
  char *v18; // eax
  int v19; // [esp+88h] [ebp-14h] BYREF
  RadarClass *v20; // [esp+8Ch] [ebp-10h]
  AudioController *p_RadarClass_field_0x14C0; // [esp+90h] [ebp-Ch]
  _DWORD v22[2]; // [esp+94h] [ebp-8h] BYREF

  v2 = a2; /*0x6568a7*/
  v20 = this; /*0x6568ae*/
  result = DisplayClass::SetSurface((DisplayClass *)a2); /*0x6568b2*/
  if ( result >= 0 ) /*0x6568bb*/
  {
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x6568cc*/
    if ( result >= 0 ) /*0x6568d1*/
    {
      p_RadarClass_field_0x14C0 = (AudioController *)&this->RadarClass_field_0x14C0; /*0x6568dd*/
      AudioController::Init((AudioController *)&this->RadarClass_field_0x14C0); /*0x6568e1*/
      p_RadarClass_field_0x125C = &this->RadarClass_field_0x125C; /*0x6568e6*/
      if ( this != (RadarClass *)-4700 ) /*0x6568ee*/
      {
        VectorClass::PointConstructor((VectorClass *)&this->RadarClass_field_0x125C, 0, 0); /*0x6568f4*/
        *p_RadarClass_field_0x125C = (VectorClass *)&DynamicVectorClass<Point2D>::`vftable'; /*0x6568f9*/
        *(_DWORD *)&this->__pad_1264[12] = 10; /*0x6568ff*/
        *(_DWORD *)&this->__pad_1264[8] = 0; /*0x656906*/
      }
      v19 = 0; /*0x65690d*/
      if ( a2 <= 0 ) /*0x656913*/
      {
LABEL_14:
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x656980*/
        if ( result >= 0 ) /*0x656990*/
        {
          p_RadarClass_field_0x1224 = &this->RadarClass_field_0x1224; /*0x656996*/
          if ( this != (RadarClass *)-4644 ) /*0x65699e*/
          {
            VectorClass::CellConstructor((VectorClass *)&this->RadarClass_field_0x1224, 0, 0); /*0x6569a4*/
            *p_RadarClass_field_0x1224 = (VectorClass *)&DynamicVectorClass<Cell>::`vftable'; /*0x6569a9*/
            *(_DWORD *)&this->__pad_122C[12] = 10; /*0x6569af*/
            *(_DWORD *)&this->__pad_122C[8] = 0; /*0x6569b6*/
          }
          v11 = 0; /*0x6569bd*/
          if ( a2 <= 0 ) /*0x6569c1*/
          {
LABEL_26:
            v16 = v20; /*0x656a1e*/
            v17 = 22; /*0x656a22*/
            v18 = &v20->__pad_127C[4]; /*0x656a29*/
            do /*0x656a56*/
            {
              if ( v18 != (char *)8 ) /*0x656a34*/
              {
                *((_DWORD *)v18 - 1) = 0; /*0x656a36*/
                *(_DWORD *)v18 = 0; /*0x656a39*/
                v18[4] = 1; /*0x656a3b*/
                v18[5] = 0; /*0x656a3e*/
                *((_DWORD *)v18 - 2) = &DynamicVectorClass<Point2D>::`vftable'; /*0x656a41*/
                *((_DWORD *)v18 + 3) = 10; /*0x656a48*/
                *((_DWORD *)v18 + 2) = 0; /*0x656a4f*/
              }
              v18 += 24; /*0x656a52*/
              --v17; /*0x656a55*/
            }
            while ( v17 ); /*0x656a56*/
            result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a65*/
                       v2,
                       &v16->RadarClass_field_0x14B0,
                       4,
                       0);
            if ( result >= 0 ) /*0x656a6a*/
            {
              result = (*(int (__stdcall **)(int, void **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a79*/
                         v2,
                         &v16->RadarClass_field_0x14AC,
                         4,
                         0);
              if ( result >= 0 ) /*0x656a7e*/
              {
                result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656a8d*/
                           v2,
                           &v16->RadarClass_field_0x14B4,
                           4,
                           0);
                if ( result >= 0 ) /*0x656a92*/
                {
                  result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 12))( /*0x656aa1*/
                             v2,
                             v16->__pad_14B8,
                             4,
                             0);
                  if ( result >= 0 ) /*0x656aa6*/
                  {
                    AudioController::Init(p_RadarClass_field_0x14C0); /*0x656aac*/
                    return 0; /*0x656ab1*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x6569ce*/
            {
              result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v19, 4, 0); /*0x6569ce*/
              if ( result < 0 ) /*0x6569d3*/
                break; /*0x6569d3*/
              v12 = p_RadarClass_field_0x1224[2]; /*0x6569d9*/
              if ( (int)p_RadarClass_field_0x1224[4] < (int)v12 /*0x6569fb*/
                || (*((_BYTE *)p_RadarClass_field_0x1224 + 13) || !v12)
                && (v13 = (int)p_RadarClass_field_0x1224[5], v13 > 0)
                && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))(*p_RadarClass_field_0x1224)->Capacity)(
                     p_RadarClass_field_0x1224,
                     (int)v12 + v13,
                     0) )
              {
                v14 = p_RadarClass_field_0x1224[4]; /*0x656a02*/
                v15 = p_RadarClass_field_0x1224[1]; /*0x656a05*/
                p_RadarClass_field_0x1224[4] = (VectorClass *)((char *)&v14->vtable0 + 1); /*0x656a0b*/
                *((_DWORD *)&v15->vtable0 + (_DWORD)v14) = v19; /*0x656a12*/
              }
              if ( ++v11 >= a2 ) /*0x656a1c*/
                goto LABEL_26; /*0x656a1c*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x656920*/
        {
          result = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 8, 0); /*0x656920*/
          if ( result < 0 ) /*0x656925*/
            break; /*0x656925*/
          v6 = *(_DWORD *)this->__pad_1264; /*0x65692b*/
          if ( *(_DWORD *)&this->__pad_1264[8] < v6 /*0x65694d*/
            || (this->__pad_1264[5] || !v6)
            && (v7 = *(_DWORD *)&this->__pad_1264[12], v7 > 0)
            && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))(*p_RadarClass_field_0x125C)->Capacity)(
                 &this->RadarClass_field_0x125C,
                 v6 + v7,
                 0) )
          {
            v8 = *(_DWORD *)&this->__pad_1264[8]; /*0x656954*/
            RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x656957*/
            *(_DWORD *)&this->__pad_1264[8] = v8 + 1; /*0x65695d*/
            *((_DWORD *)&RadarClass_field_0x1260->AbstractClass + 2 * v8) = v22[0]; /*0x656964*/
            *((_DWORD *)&RadarClass_field_0x1260->? + 2 * v8) = v22[1]; /*0x65696b*/
          }
          if ( ++v19 >= a2 ) /*0x65697e*/
            goto LABEL_14; /*0x65697e*/
        }
      }
    }
  }
  return result; /*0x656ab3*/
}



// ==== 0x00656AC0  RadarClass::Save  this=RadarClass  sig=csp ====
int __thiscall SidebarClass::Save(RadarClass *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx
  int v9; // eax

  v2 = a2; /*0x656ac2*/
  result = DisplayClass::GetSurface((DisplayClass *)a2); /*0x656aca*/
  if ( result >= 0 )
  {
    v5 = *(_DWORD *)v2; /*0x656add*/
    a2 = *(_DWORD *)&this->__pad_1264[8]; /*0x656ae9*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x656aed*/
    if ( result >= 0 )
    {
      v6 = 0; /*0x656afc*/
      if ( a2 <= 0 )
      {
LABEL_6:
        v7 = *(_DWORD *)v2; /*0x656b27*/
        a2 = *(_DWORD *)&this->__pad_122C[8]; /*0x656b39*/
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 16))(v2, &a2, 4, 0); /*0x656b3d*/
        if ( result >= 0 )
        {
          v8 = 0; /*0x656b4c*/
          if ( a2 <= 0 )
          {
LABEL_10:
            result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b73*/
                       v2,
                       &this->RadarClass_field_0x14B0,
                       4,
                       0);
            if ( result >= 0 )
            {
              result = (*(int (__stdcall **)(int, void **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b96*/
                         v2,
                         &this->RadarClass_field_0x14AC,
                         4,
                         0);
              if ( result >= 0 )
              {
                result = (*(int (__stdcall **)(int, MapClass **, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656bab*/
                           v2,
                           &this->RadarClass_field_0x14B4,
                           4,
                           0);
                if ( result >= 0 )
                {
                  v9 = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this->__pad_14B8, 4, 0); /*0x656bc0*/
                  return v9 >= 0 ? 0 : v9;
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x656b63*/
            {
              result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b63*/
                         v2,
                         (char *)&this->RadarClass_field_0x1228->AbstractClass + 4 * v8,
                         4,
                         0);
              if ( result < 0 ) /*0x656b68*/
                break; /*0x656b68*/
              if ( ++v8 >= a2 ) /*0x656b71*/
                goto LABEL_10; /*0x656b71*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x656b13*/
        {
          result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b13*/
                     v2,
                     (char *)this->RadarClass_field_0x1260 + 8 * v6,
                     8,
                     0);
          if ( result < 0 ) /*0x656b18*/
            break; /*0x656b18*/
          if ( ++v6 >= a2 ) /*0x656b25*/
            goto LABEL_6; /*0x656b25*/
        }
      }
    }
  }
  return result; /*0x656bcd*/
}



// ==== 0x00656BE0  RadarClass::Toggle  this=RadarClass  sig=csp ====
void __thiscall sub_656BE0(int this, char a2, char a3)
{
  int v4; // eax

  if ( a2 != 1 ) /*0x656be9*/
  {
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c4e*/
    *(_DWORD *)(this + 5292) = 2; /*0x656c57*/
    if ( a3 ) /*0x656c63*/
      PlayVocClass(*((_DWORD *)dword_8871E0 + 445), 0x2000, 1.0, 0); /*0x656c7d*/
    goto LABEL_9; /*0x656c7d*/
  }
  v4 = *(_DWORD *)(this + 5292); /*0x656beb*/
  if ( !v4 || v4 == 2 ) /*0x656bf8*/
  {
    *(_DWORD *)(this + 5292) = 3; /*0x656c04*/
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c0e*/
    if ( a3 ) /*0x656c19*/
      PlayVocClass(*((_DWORD *)dword_8871E0 + 444), 0x2000, 1.0, 0); /*0x656c32*/
LABEL_9:
    Debug::Log(); /*0x656c82*/
  }
}



// ==== 0x00656CB0  RadarClass::SetViewMode  this=IUnknown  sig=csp ====
int __thiscall RadarClass::SetViewMode(int *this, int a2, char a3)
{
  int v4; // edi
  int result; // eax

  if ( !dword_A8B238[0] || !*((_BYTE *)dword_A83D4C + 501) || (v4 = 1, !dword_A8B538) ) /*0x656cd8*/
    v4 = a2; /*0x656cda*/
  result = this->q52C; /*0x656cde*/
  if ( result != v4 ) /*0x656ce6*/
  {
    if ( (result == 3 || result == 4 && v4 != 3) && this->q52B != 5 ) /*0x656d06*/
    {
      this->q52D = v4; /*0x656d08*/
      return result; /*0x656d10*/
    }
    if ( !v4 ) /*0x656d18*/
    {
      RadarClass::Toggle((int)this, 0, result == 1); /*0x656dad*/
LABEL_23:
      this->q52C = v4; /*0x656db2*/
      return result; /*0x656db2*/
    }
    if ( v4 != 1 ) /*0x656d1f*/
    {
      if ( v4 != 4 ) /*0x656d24*/
      {
        result = this->q52B; /*0x656d2a*/
        if ( result != 1 && result != 5 ) /*0x656d38*/
        {
          RadarClass::Toggle((int)this, 1, 0); /*0x656d40*/
          this->q52C = v4; /*0x656d45*/
          return result; /*0x656d4d*/
        }
        goto LABEL_20; /*0x656d38*/
      }
      goto LABEL_23; /*0x656d24*/
    }
    result = this->q52B; /*0x656d50*/
    if ( (result == 1 || result == 5) && this->u32_14D8 == 1 ) /*0x656d67*/
    {
LABEL_20:
      this->q52C = v4; /*0x656d69*/
      this->q52B = 4; /*0x656d6f*/
      *(this + 1343) = 25; /*0x656d75*/
      return result; /*0x656d81*/
    }
    RadarClass::Toggle((int)this, this->u32_14D8, a3); /*0x656d92*/
    this->q52C = 1; /*0x656d97*/
  }
  return result; /*0x656d0e*/
}



// ==== 0x00656DE0  HouseClass::updateAlliedStatus  this=HouseClass  sig=csp ====
char __thiscall HouseClass::updateAlliedStatus(HouseClass *this)
{
  return this->builtAircraftTypes[104]; /*0x656de6*/
}



// ==== 0x00656DF0  HouseClass::SetRadarVisibility  this=HouseClass  sig=csp ====
void __thiscall HouseClass::SetRadarVisibility(int this, char a2)
{
  if ( *(_BYTE *)(this + 5336) != a2 ) /*0x656dfe*/
  {
    *(_BYTE *)(this + 5336) = a2; /*0x656e02*/
    Debug::Log(); /*0x656e1a*/
    if ( *(_DWORD *)(this + 5296) == 1 ) /*0x656e2d*/
      RadarClass::Toggle(this, a2, 1); /*0x656e32*/
    else
      RadarClass::SetViewMode((int *)this, 1, 1); /*0x656e40*/
  }
}



// ==== 0x00656E50  RadarClass::IsActiveMode  this=RadarClass  sig=csp ====
int __thiscall RadarClass::IsActiveMode(RadarClass *this)
{
  int result; // eax

  if ( this->RadarClass_field_0x14B0 != (MapClass *)2 ) /*0x656e57*/
    return 0; /*0x656e57*/
  result = 1; /*0x656e5f*/
  if ( this->RadarClass_field_0x14AC != (void *)1 ) /*0x656e66*/
    return 0; /*0x656e68*/
  return result; /*0x656e6a*/
}



// ==== 0x00656E90  RadarClass::SetFlag  this=RadarClass  sig=csp ====
int __thiscall RadarClass::SetFlag(RadarClass *this, char a2)
{
  char v2; // dl
  int result; // eax

  v2 = this->RadarClass_field_0x14D9[1]; /*0x656e90*/
  result = 1; /*0x656e96*/
  this->RadarClass_field_0x14D9[0] = 1; /*0x656e9d*/
  if ( !v2 ) /*0x656ea3*/
    result = a2 != 0; /*0x656ead*/
  this->RadarClass_field_0x14D9[1] = result; /*0x656eaf*/
  return result; /*0x656eb5*/
}



// ==== 0x00656EC0  Radar::RenderMinimap  this=RadarClass  sig=csp ====
char __thiscall Radar::RenderMinimap(Radar *this)
{
  int *v2; // ebx
  int v3; // ecx
  __int16 *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  double v14; // st7
  int *v15; // ebp
  int v16; // eax
  double v17; // st6
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int i; // ebp
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int j; // ebp
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  bool v40; // cc
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  bool v48; // sf
  int v49; // ebx
  int v50; // ecx
  int k; // ebp
  int *v52; // eax
  int v53; // ebp
  int *v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // ebp
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // edi
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // edi
  int v67; // ecx
  int v68; // edi
  int v69; // edi
  int v70; // ebp
  int v71; // ebp
  int v72; // edi
  int v73; // ecx
  int *v74; // edi
  int *v75; // ebp
  int v76; // ecx
  int v77; // edi
  int v78; // ebp
  int v79; // eax
  int v80; // edx
  int v81; // eax
  int v82; // ecx
  int v83; // edi
  int v84; // ebp
  int v85; // eax
  int v86; // ecx
  int v87; // edx
  ObjectClass *v89; // [esp+2Eh] [ebp-58h]
  ObjectClass *v90; // [esp+2Eh] [ebp-58h]
  char v91; // [esp+40h] [ebp-46h]
  char v92; // [esp+41h] [ebp-45h]
  int v93; // [esp+42h] [ebp-44h] BYREF
  int v94; // [esp+4Ah] [ebp-3Ch]
  int v95; // [esp+4Eh] [ebp-38h]
  int v96; // [esp+52h] [ebp-34h] BYREF
  int v97; // [esp+56h] [ebp-30h]
  int v98; // [esp+5Ah] [ebp-2Ch]
  int v99; // [esp+5Eh] [ebp-28h]
  int *v100; // [esp+62h] [ebp-24h]
  int v101; // [esp+66h] [ebp-20h] BYREF
  int v102; // [esp+6Ah] [ebp-1Ch]
  int v103; // [esp+6Eh] [ebp-18h]
  int v104; // [esp+72h] [ebp-14h]
  int v105; // [esp+76h] [ebp-10h]
  int v106; // [esp+7Ah] [ebp-Ch]
  int v107; // [esp+7Eh] [ebp-8h]
  int v108; // [esp+82h] [ebp-4h]

  v2 = (int *)((char *)this + 4620); /*0x656ec9*/
  v100 = (int *)((char *)this + 4620); /*0x656ed1*/
  v105 = this->q120C; /*0x656ed7*/
  v106 = this->q1210; /*0x656ede*/
  v107 = this->q1214; /*0x656ee5*/
  v3 = this->q52C; /*0x656ee9*/
  v108 = v2[3]; /*0x656ef9*/
  if ( v3 != 1 || (v91 = 1, this->q52B != 1) ) /*0x656f0b*/
    v91 = 0; /*0x656f0d*/
  v96 = DSurface_ViewBounds.field_0 + dword_886FA8 / 2; /*0x656f28*/
  v97 = dword_886FA4 + dword_886FAC / 2; /*0x656f3e*/
  v4 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &v101, &v96); /*0x656f4e*/
  v5 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v4); /*0x656f59*/
  v6 = this->q524; /*0x656f61*/
  v96 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v96); /*0x656f71*/
  v8 = (__int16)v96; /*0x656f76*/
  v9 = (int *)((char *)this + 5276); /*0x656f7b*/
  v10 = (__int16)v96 + v6 - SHIWORD(v96); /*0x656f81*/
  v96 = *((int *)this + 1319); /*0x656f83*/
  v93 = v10; /*0x656f87*/
  v101 = v8; /*0x656f8b*/
  LOWORD(v11) = Math::RoundToInt((double)v10 * *((float *)this + 1314) + (double)v96); /*0x656f9d*/
  v12 = v7 - this->q1498; /*0x656fac*/
  v93 = v11; /*0x656fae*/
  v101 += v12; /*0x656fb4*/
  LOWORD(v13) = Math::RoundToInt((double)v101 * *((float *)this + 1314) + (double)*((int *)this + 1320)); /*0x656fc8*/
  v101 = v13; /*0x656fd1*/
  if ( v93 == v96 - 1 ) /*0x656fdc*/
    ++v93; /*0x656fdf*/
  v14 = 60.0 / *((float *)this + 1314); /*0x656fe9*/
  v15 = (int *)((char *)this + 5340); /*0x656ff3*/
  v99 = 1; /*0x657000*/
  this->q14DC = v93; /*0x657004*/
  this->q538 = v101; /*0x65700a*/
  this->q14E4 = 1; /*0x65700d*/
  this->q14E8 = 1; /*0x657010*/
  v101 = 2 * dword_886FA8; /*0x65701c*/
  LOWORD(v16) = Math::RoundToInt(v14); /*0x65702c*/
  v17 = 30.0 / *((float *)this + 1314); /*0x657037*/
  this->q14E4 = v16; /*0x65703d*/
  v101 = 2 * dword_886FAC; /*0x65704c*/
  *(float *)&v96 = v17; /*0x657050*/
  LOWORD(v18) = Math::RoundToInt(v14); /*0x65705c*/
  this->q14E8 = v18; /*0x657061*/
  LOWORD(v19) = Math::RoundToInt(v14); /*0x65706f*/
  v93 = v19; /*0x657074*/
  v101 = 2 * dword_886FAC; /*0x657082*/
  LOWORD(v20) = Math::RoundToInt((double)(2 * dword_886FAC) / *(float *)&v96 * 0.5); /*0x657094*/
  this->q14DC -= v93; /*0x6570a2*/
  this->q538 -= v20; /*0x6570aa*/
  v21 = this->q14DC; /*0x6570ad*/
  v22 = *v9; /*0x6570b0*/
  if ( v21 >= *v9 ) /*0x6570b4*/
  {
    v96 = *((int *)this + 1321); /*0x6570c1*/
    if ( v21 + this->q14E4 >= v22 + v96 ) /*0x6570d5*/
      *v15 = v96 - this->q14E4 + v22 - 1; /*0x6570e7*/
  }
  else
  {
    *v15 = v22; /*0x6570b6*/
  }
  v23 = this->q538; /*0x6570ea*/
  v24 = this->q528; /*0x6570f0*/
  if ( v23 >= v24 ) /*0x6570f8*/
  {
    v25 = this->q14A8; /*0x657108*/
    if ( v23 + this->q14E8 >= v25 + this->q528 ) /*0x65711a*/
      this->q538 = v25 - this->q14E8 + this->q528 - 1; /*0x65712e*/
  }
  else
  {
    this->q538 = v24; /*0x6570fa*/
  }
  if ( this->u32_14DA ) /*0x657134*/
  {
    this->q14EC = *v15; /*0x657148*/
    this->__pad_53C = this->q538; /*0x65714d*/
    this->u32_14F4 = this->q14E4; /*0x657153*/
    this->u32_14F8 = this->q14E8; /*0x657159*/
  }
  if ( this->u32_14D9 /*0x6571bc*/
    || this->q14EC != *v15
    || this->__pad_53C != this->q538
    || this->u32_14F4 != this->q14E4
    || this->u32_14F8 != this->q14E8
    || !Render_Render_660530()
    || *((int *)this + 1179) > 0
    || *((int *)this + 1165) > 0
    || HouseClass::ProcessData((HouseClass *)&g_VisibilitySystem) )
  {
    if ( v91 ) /*0x6571cf*/
      this->u32_14D9 = 0; /*0x6571d1*/
    Surface::RenderRadar((XSurface *)this); /*0x6571da*/
    v92 = 0; /*0x6571ea*/
    if ( this->q14EC != *v15 /*0x657216*/
      || this->__pad_53C != this->q538
      || this->u32_14F4 != this->q14E4
      || this->u32_14F8 != this->q14E8 )
    {
      for ( i = 0; i < this->u32_14F8; ++i ) /*0x657226*/
      {
        v27 = this->q528; /*0x657236*/
        v28 = i + this->__pad_53C; /*0x65723e*/
        v101 = this->q14EC - *v9; /*0x657240*/
        v102 = v28 - v27; /*0x65724d*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657251*/
        v29 = i + this->__pad_53C - this->q528; /*0x65727c*/
        v101 = this->u32_14F4 + this->q14EC - 1 - *v9; /*0x65727e*/
        v102 = v29; /*0x657285*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657289*/
      }
      for ( j = 0; j < this->u32_14F4; ++j ) /*0x6572a3*/
      {
        v31 = j + this->q14EC - *v9; /*0x6572bd*/
        v102 = this->__pad_53C - this->q528; /*0x6572bf*/
        v101 = v31; /*0x6572c3*/
        FogOfWar::RevealCell((int)this, &v101); /*0x6572ce*/
        v32 = this->q528; /*0x6572eb*/
        v33 = this->__pad_53C + this->u32_14F8 - 1; /*0x6572f1*/
        v101 = j + this->q14EC - *v9; /*0x6572f5*/
        v102 = v33 - v32; /*0x6572ff*/
        FogOfWar::RevealCell((int)this, &v101); /*0x657306*/
      }
      v2 = v100; /*0x657316*/
      v92 = 1; /*0x65731a*/
    }
    v34 = (int *)((char *)this + 4680); /*0x657325*/
    if ( *((int *)this + 1172) > 0 && *((int *)this + 1173) > 0 ) /*0x657338*/
    {
      (*(void (__thiscall **)(_DWORD, char *, _DWORD, char *, _DWORD, int))(**((_DWORD **)this + 1159) + 8))( /*0x657353*/
        this->q487,
        (char *)this + 4680,
        this->q488,
        (char *)this + 4680,
        0,
        1);
      v35 = this->q528; /*0x65735b*/
      v36 = *v9 + *v34; /*0x65735e*/
      v37 = this->q493; /*0x657360*/
      v101 = v36; /*0x657363*/
      v38 = v35 + v37; /*0x657367*/
      v39 = this->q1254; /*0x657369*/
      v40 = v2[2] <= 0; /*0x65736c*/
      v102 = v38; /*0x657370*/
      v41 = this->q1250; /*0x657374*/
      v95 = v39; /*0x657377*/
      v94 = v41; /*0x65737b*/
      if ( v40 || v2[3] <= 0 ) /*0x657389*/
      {
        v45 = v95; /*0x657478*/
      }
      else if ( v41 <= 0 || v39 <= 0 ) /*0x657399*/
      {
        v36 = *v2; /*0x65745f*/
        v102 = v2[1]; /*0x657464*/
        v41 = v2[2]; /*0x657468*/
        v45 = v2[3]; /*0x65746b*/
      }
      else
      {
        v96 = *v2; /*0x6573a3*/
        v97 = v2[1]; /*0x6573aa*/
        v42 = v2[2]; /*0x6573ae*/
        v98 = v42; /*0x6573b1*/
        v99 = v2[3]; /*0x6573b8*/
        if ( v96 > v36 ) /*0x6573c2*/
        {
          v43 = v96 - v36; /*0x6573c4*/
          v96 = v36; /*0x6573c6*/
          v98 = v43 + v42; /*0x6573cc*/
        }
        if ( v97 > v102 ) /*0x6573da*/
        {
          v99 += v97 - v102; /*0x6573e4*/
          v97 = v102; /*0x6573ec*/
        }
        if ( v96 + v98 < v94 + v36 ) /*0x657403*/
          v98 = v94 - v96 + v101 + 1; /*0x657413*/
        if ( v97 + v99 >= v102 + v95 ) /*0x65742d*/
        {
          v45 = v99; /*0x65744b*/
          v36 = v96; /*0x65744f*/
          v102 = v97; /*0x657453*/
          v41 = v98; /*0x657457*/
        }
        else
        {
          v44 = v102; /*0x657433*/
          v102 = v97; /*0x657439*/
          v41 = v98; /*0x65743d*/
          v45 = v95 - v97 + v44 + 1; /*0x657441*/
          v36 = v96; /*0x657445*/
        }
      }
      *v2 = v36; /*0x65747c*/
      v2[1] = v102; /*0x657482*/
      v93 = *v34; /*0x657488*/
      v46 = v93; /*0x657485*/
      v2[2] = v41; /*0x65748c*/
      v47 = v46 + this->q1250; /*0x657495*/
      v48 = -this->q1250 < 0; /*0x657497*/
      v2[3] = v45; /*0x657499*/
      if ( v48 != __OFSUB__(v46, v47) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v49 = this->q493; /*0x65749e*/
          if ( v49 < v49 + this->q1254 ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              v101 = v93; /*0x6574bb*/
              v102 = v49; /*0x6574bf*/
              FogOfWar::RevealArea((int)this, &v101); /*0x6574c3*/
              ++v49; /*0x6574d4*/
            }
            while ( v49 < this->q493 + this->q1254 ); /*0x6574d9*/
          }
          v50 = this->q1250 + *v34; /*0x6574e9*/
          ++v93; /*0x6574eb*/
        }
        while ( v93 < v50 ); /*0x6574f1*/
      }
      *v34 = 0; /*0x6574f9*/
      this->q493 = 0; /*0x6574fe*/
      this->q1250 = 0; /*0x657501*/
      this->q1254 = 0; /*0x657504*/
      v2 = v100; /*0x657507*/
    }
    for ( k = this->q126C - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea((int)this, (int *)(this->ptr_1260 + 8 * k)); /*0x657520*/
    (*(void (__thiscall **)(char *))(this->q125C + 12))((char *)this + 4700); /*0x657534*/
    Render_Render_660000(v89); /*0x657537*/
    v52 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 1159) + 120))( /*0x657549*/
                   this->q487,
                   &v101);
    HouseClass::Render((HouseClass *)&g_VisibilitySystem, this->q487, *v52, v52[1], v52[2], v52[3]); /*0x657573*/
    if ( v91 ) /*0x65757e*/
    {
      if ( this->u32_14DA ) /*0x657584*/
      {
        v53 = VtableStub::72F510(); /*0x657595*/
        *v2 = *v9; /*0x65759b*/
        v2[1] = this->q528; /*0x6575a0*/
        v2[2] = this->q14A4; /*0x6575a6*/
        v2[3] = this->q14A8; /*0x6575af*/
        v101 = this->q11E4; /*0x6575ba*/
        v102 = this->q11EC; /*0x6575d7*/
        v54 = (int *)(*(int (__thiscall **)(DSurface *, int *))(DSurface_Sidebar->DSurface_field_0x0 + 120))( /*0x6575e2*/
                       DSurface_Sidebar,
                       &v93);
        DrawToSurfaceSHP((int)DSurface_Sidebar, v53, dword_B04A38, 0x20u, &v101, v54, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6575fc*/
      }
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x65760d*/
      {
        v55 = v2[2]; /*0x65761e*/
        v56 = v2[1] - this->q528; /*0x657621*/
        v57 = v2[3]; /*0x657623*/
        v101 = *v2 - *v9; /*0x657626*/
        v102 = v56; /*0x657630*/
        v58 = this->q487; /*0x65763d*/
        v103 = v55; /*0x657643*/
        v104 = v57; /*0x657647*/
        (*(void (__thiscall **)(DSurface *, int *, int, int *, _DWORD, int))(DSurface_Sidebar->DSurface_field_0x0 + 8))( /*0x65764f*/
          DSurface_Sidebar,
          v2,
          v58,
          &v101,
          0,
          1);
      }
      (*(void (__thiscall **)(DSurface *, char *, _DWORD))(DSurface_Sidebar->DSurface_field_0x0 + 88))( /*0x657668*/
        DSurface_Sidebar,
        (char *)this + 5340,
        this->q1208);
      v59 = *v9; /*0x65766b*/
      v60 = this->q528; /*0x65766d*/
      v61 = this->q14A4; /*0x657670*/
      v62 = this->q14A8; /*0x657673*/
      v96 = v59 - 1; /*0x657678*/
      v63 = this->q1208; /*0x65767c*/
      v97 = v60 - 1; /*0x657682*/
      v98 = v61 + 2; /*0x657693*/
      v99 = v62 + 2; /*0x657697*/
      (*(void (__thiscall **)(DSurface *, int *, int))(DSurface_Sidebar->DSurface_field_0x0 + 88))( /*0x6576a2*/
        DSurface_Sidebar,
        &v96,
        v63);
    }
    if ( !v92 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *((int *)this + 1341) <= 0 || *((int *)this + 1342) <= 0 ) /*0x6576ca*/
    {
      v74 = v2; /*0x65775f*/
    }
    else
    {
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x6576e0*/
      {
        v64 = this->q14EC; /*0x6576e4*/
        v65 = this->__pad_53C; /*0x6576e6*/
        v66 = this->u32_14F4; /*0x6576e9*/
        v103 = v66; /*0x6576ec*/
        v104 = this->u32_14F8; /*0x6576f3*/
        v67 = *v2; /*0x6576f7*/
        if ( v64 > *v2 ) /*0x6576fb*/
        {
          v68 = v64 - v67 + v66; /*0x6576ff*/
          v64 = *v2; /*0x657701*/
          v103 = v68; /*0x657703*/
        }
        v69 = v2[1]; /*0x657707*/
        if ( v65 > v69 ) /*0x65770c*/
        {
          v70 = v65 - v69 + v104; /*0x657714*/
          v65 = v2[1]; /*0x657716*/
          v104 = v70; /*0x657718*/
        }
        if ( v64 + v103 < v67 + v2[2] ) /*0x657729*/
          v103 = v67 - v64 + v2[2] + 1; /*0x657734*/
        v71 = v2[1] + v2[3]; /*0x65773e*/
        v72 = v104; /*0x657741*/
        if ( v104 + v65 < v71 ) /*0x65774a*/
          v72 = v71 - v65 + 1; /*0x65774f*/
        v73 = v103; /*0x657751*/
        v98 = v103; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v74 = (int *)((char *)this + 5356); /*0x65775b*/
    }
    v64 = *v74; /*0x657761*/
    v65 = v74[1]; /*0x657763*/
    v73 = v74[2]; /*0x657766*/
    v98 = v73; /*0x657769*/
    v72 = v74[3]; /*0x65776d*/
LABEL_84:
    v40 = this->q14E4 <= 0; /*0x657770*/
    v75 = (int *)((char *)this + 5340); /*0x657777*/
    v99 = v72; /*0x65777d*/
    if ( !v40 && *((int *)this + 1338) > 0 ) /*0x65778b*/
    {
      if ( v73 <= 0 || v72 <= 0 ) /*0x65779b*/
      {
        v64 = *v75; /*0x657823*/
        v65 = this->q538; /*0x657826*/
        v73 = this->q14E4; /*0x657829*/
        v72 = this->q14E8; /*0x65782c*/
      }
      else
      {
        v76 = *v75; /*0x6577a1*/
        v40 = *v75 <= v64; /*0x6577a4*/
        v102 = this->q538; /*0x6577a9*/
        v103 = this->q14E4; /*0x6577b0*/
        v104 = this->q14E8; /*0x6577b7*/
        if ( !v40 ) /*0x6577bb*/
        {
          v77 = v76 - v64 + v103; /*0x6577c3*/
          v76 = v64; /*0x6577c5*/
          v103 = v77; /*0x6577c7*/
        }
        if ( v102 > v65 ) /*0x6577d1*/
        {
          v78 = v102 - v65 + v104; /*0x6577d9*/
          v102 = v65; /*0x6577db*/
          v104 = v78; /*0x6577df*/
        }
        if ( v76 + v103 < v64 + v98 ) /*0x6577f1*/
          v103 = v64 - v76 + v98 + 1; /*0x6577fd*/
        v72 = v104; /*0x657805*/
        v79 = v65 + v99; /*0x657809*/
        v65 = v102; /*0x65780b*/
        if ( v104 + v102 < v79 ) /*0x657814*/
          v72 = v79 - v102 + 1; /*0x657819*/
        v64 = v76; /*0x65781b*/
        v73 = v103; /*0x65781d*/
      }
    }
    *v2 = v64; /*0x657831*/
    v2[1] = v65; /*0x657834*/
    v2[2] = v73; /*0x657837*/
    v2[3] = v72; /*0x65783a*/
LABEL_99:
    v80 = this->q538; /*0x65783d*/
    v81 = this->q14E4; /*0x657849*/
    this->q14EC = this->q14DC; /*0x65784f*/
    v82 = this->q14E8; /*0x657855*/
    this->__pad_53C = v80; /*0x65785b*/
    this->u32_14F4 = v81; /*0x657861*/
    this->u32_14F8 = v82; /*0x657867*/
    Render_Render_6603B0(v90); /*0x65786d*/
  }
  if ( this->q49D ) /*0x657872*/
  {
    v101 = this->q487; /*0x657884*/
    v83 = v101; /*0x657882*/
    v84 = (*(int (__thiscall **)(int))(*(_DWORD *)v101 + 128))(v101); /*0x657896*/
    memset(*((void **)this + 1181), 0, v84 * (*(int (__thiscall **)(int))(*(_DWORD *)v83 + 124))(v83) / 8 + 1); /*0x6578b7*/
  }
  LOBYTE(v85) = v91; /*0x6578c0*/
  if ( !v91 ) /*0x6578c6*/
  {
    v86 = v106; /*0x6578cc*/
    v87 = v107; /*0x6578d0*/
    *v2 = v105; /*0x6578d4*/
    v85 = v108; /*0x6578d6*/
    v2[1] = v86; /*0x6578da*/
    v2[2] = v87; /*0x6578dd*/
    v2[3] = v85; /*0x6578e0*/
  }
  return v85; /*0x6578e3*/
}



// ==== 0x006578F0  TacticalClass::ProcessChronoEffect  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::ProcessChronoEffect(TacticalClass *this)
{
  int v2; // eax
  int v3; // eax
  Mixer *v4; // esi
  _DWORD *v5; // eax
  ObjectClass *v6; // [esp+0h] [ebp-4h]

  v2 = *((_DWORD *)this + 1326); /*0x6578f3*/
  if ( v2 ) /*0x6578fc*/
  {
    v3 = v2 - 1; /*0x657902*/
    if ( v3 ) /*0x657903*/
    {
      if ( v3 != 1 ) /*0x657906*/
        return; /*0x657906*/
      if ( g_AsyncIOState ) /*0x657913*/
      {
        if ( !sub_408410(v6) ) /*0x65791c*/
          return; /*0x65791c*/
        if ( g_AsyncIOState ) /*0x657929*/
        {
          ChronoScreenEffect::DecrementCounter(); /*0x65792b*/
          Map_Process(); /*0x657930*/
        }
      }
      RadarClass::SetViewMode((int *)this, 3, 0); /*0x65793b*/
      v4 = (Mixer *)((char *)this + 5312); /*0x657940*/
      Mixer::ReleaseChannel(v4); /*0x657948*/
      v5 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1784), 0x2000, 1.0, 0); /*0x657966*/
      SetAudioSource((int)v4, v5, 0); /*0x65796f*/
      RadarClass::SetGlobal(*(RadarClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4)); /*0x65797e*/
    }
    else if ( globalHelper_0532A0(*((std::codecvt_base **)this + 1333)) ) /*0x657989*/
    {
      if ( g_AsyncIOState ) /*0x657999*/
        sub_408390(); /*0x65799b*/
      *((_DWORD *)this + 1326) = 2; /*0x6579a0*/
    }
  }
  else
  {
    ThemeClass::ClearQueues(); /*0x6579ac*/
    UpdateThemeManager(*((_DWORD *)this + 1333), 0, 3); /*0x6579bb*/
    Map_Process_753570(); /*0x6579c0*/
    *((_DWORD *)this + 1326) = 1; /*0x6579c5*/
  }
}



// ==== 0x006579E0  Game::ManageGameSpeed  this=RadarClass  sig=csp ====
unsigned int __thiscall Game::ManageGameSpeed(Game *this)
{
  unsigned int result; // eax
  _BYTE *v3; // ecx
  char v4; // al
  bool v5; // bl
  int v6; // edi
  int *v7; // eax
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  bool v13; // zf
  ScenarioClass *v14; // [esp+0h] [ebp-30h]
  char v15; // [esp+12h] [ebp-1Eh]
  unsigned __int8 v16; // [esp+13h] [ebp-1Dh]
  _BYTE *v17; // [esp+14h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v19[16]; // [esp+20h] [ebp-10h] BYREF

  v3 = 0; /*0x6579ef*/
  v4 = this->q14BD; /*0x6579f1*/
  v17 = 0; /*0x6579f7*/
  v5 = g_AsyncIOState > 0; /*0x6579fd*/
  v16 = 0; /*0x657a02*/
  if ( !v4 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    result = Audio::IsPlaying(); /*0x657a0c*/
    v3 = v17; /*0x657a11*/
  }
  if ( this->u32_14DA == 1 && !this->q14BD ) /*0x657a22*/
  {
    v6 = VtableStub::72F510(); /*0x657a35*/
    v18[0] = this->q11E4; /*0x657a4d*/
    v18[1] = this->q11EC; /*0x657a5f*/
    v7 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x657a6a*/
                  DSurface_Sidebar,
                  v19);
    DrawToSurfaceSHP((int)DSurface_Sidebar, v6, dword_B04A38, 0x20u, v18, v7, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v8 = this->q11EC; /*0x657a95*/
    this->q120C = this->q11E4; /*0x657aab*/
    this->q1210 = v8; /*0x657aae*/
    this->q1214 = 168; /*0x657ab1*/
    this->q1218 = 110; /*0x657ab4*/
    result = Debug::Log(); /*0x657ab7*/
    v3 = v17; /*0x657abc*/
  }
  if ( !v5 ) /*0x657ac5*/
  {
    v15 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  result = g_AsyncIOState; /*0x657acb*/
  if ( g_AsyncIOState <= 0 || (v3 = *(_BYTE **)AsyncIO_Instance, (v17 = *(_BYTE **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v15 = 1; /*0x657cb4*/
LABEL_13:
    if ( v3 ) /*0x657b40*/
    {
      result = (*(int (__thiscall **)(int *, _BYTE **))(dword_B45B58 + 16))(&dword_B45B58, &v17); /*0x657b52*/
      if ( result != -1 && (int)result < g_AsyncIOState && (int)result < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++result; /*0x657b75*/
          *((_DWORD *)AsyncIO_Instance + result - 1) = *((_DWORD *)AsyncIO_Instance + result); /*0x657b79*/
        }
        while ( (int)result < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v17 ) /*0x657b8d*/
        result = (**(int (__thiscall ***)(_BYTE *, int))v17)(v17, 1); /*0x657b93*/
    }
    v5 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel((Mixer *)this + 1328); /*0x657bb9*/
      v10 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1784), 0x2000, 1.0, 0); /*0x657bd8*/
      result = SetAudioSource((int)this + 5312, v10, 0); /*0x657be1*/
      this->q52B = 4; /*0x657be6*/
      this->q14FC = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 4))(v3) == 1 ) /*0x657af3*/
  {
    v9 = this->q11EC; /*0x657b01*/
    this->q120C = this->q11E4; /*0x657b12*/
    this->q1210 = v9; /*0x657b15*/
    this->q1214 = 168; /*0x657b18*/
    this->q1218 = 110; /*0x657b1b*/
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 20))(v17); /*0x657b24*/
  v3 = v17; /*0x657b27*/
  v15 = result; /*0x657b2d*/
  v16 = v17[4]; /*0x657b34*/
  if ( (_BYTE)result == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
LABEL_22:
  this->u32_14D9 = 0; /*0x657bfa*/
  if ( !v5 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v11 = this->q52D; /*0x657c0f*/
    this->q52B = 5; /*0x657c1a*/
    RadarClass::SetViewMode((int *)this->__pad_0, v11, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v16 = 0; /*0x657c37*/
    Mixer::ReleaseChannel((Mixer *)this + 1328); /*0x657c3d*/
    v12 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1788), 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource((int)this + 5312, v12, 0); /*0x657c64*/
    result = RadarClass::SetGlobal(**(RadarClass ***)&DSurface_ViewBounds.__pad_FC[324]); /*0x657c71*/
    this->u32_14D9 = 1; /*0x657c76*/
  }
  LOBYTE(result) = v16; /*0x657c81*/
  v13 = this->q14BC == v16; /*0x657c90*/
  this->q14BD = v15 == 0; /*0x657c92*/
  if ( !v13 ) /*0x657c98*/
  {
    if ( v16 ) /*0x657c9c*/
    {
      result = (unsigned int)SetScenarioClassTimer(0); /*0x657ca0*/
      this->q14BC = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned int)ScenarioClass::ProcessIntroTimer(v14); /*0x657cc8*/
      this->q14BC = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/
}



// ==== 0x00657CE0  FogOfWar::Render  this=FogOfWar  sig=csp ====
int __thiscall FogOfWar::Render(FogOfWar *this)
{
  int *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int i; // [esp+10h] [ebp-24h]
  int v11[6]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[8]; // [esp+2Ch] [ebp-8h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 124))(this->q487); /*0x657d4e*/
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1159) + 128))(this->q487); /*0x657d52*/
    v8 = 0; /*0x657d58*/
    for ( i = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      v9 = 0; /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea((int)this, v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    v2 = (int *)this->q487; /*0x657cf2*/
    v3 = *v2; /*0x657d06*/
    v4 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, int))(**((_DWORD **)this + 1160) + 120))( /*0x657d0d*/
           this->q488,
           v11,
           0,
           1);
    v5 = (*(int (__thiscall **)(int *, _BYTE *, _DWORD, int))(*v2 + 120))(v2, v12, this->q488, v4); /*0x657d21*/
    (*(void (__thiscall **)(_DWORD, int))(v3 + 8))(this->q487, v5); /*0x657d2b*/
    return FogOfWar::RenderCell(this); /*0x657d30*/
  }
  return result; /*0x657d35*/
}



// ==== 0x00657DA0  Diplomacy::DlgProc  this=Diplomacy  sig=csp ====
int __stdcall Diplomacy_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  int i; // ebx
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // ebp
  int v10; // eax
  int v11; // eax
  int ResourceID_Hardcoded; // eax
  HWND v13; // ebp
  bool v14; // cc
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // ebp
  HWND v18; // ebx
  wchar_t *v19; // eax
  HWND v20; // eax
  int DlgCtrlID; // eax
  int *v22; // ecx
  int *v23; // ecx
  int v24; // edx
  int *v25; // ecx
  int v26; // esi
  int *v27; // ecx
  int v28; // edx
  unsigned int v29; // edi
  HWND hWnd; // [esp+10h] [ebp-14h]
  int v31; // [esp+14h] [ebp-10h]
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  unsigned __int8 IsAlliedWith; // [esp+20h] [ebp-4h]
  #375 *hDlga; // [esp+28h] [ebp+4h]
  HWND hDlgb; // [esp+28h] [ebp+4h]
  HWND hDlgc; // [esp+28h] [ebp+4h]
  int v38; // [esp+2Ch] [ebp+8h]
  char v39; // [esp+30h] [ebp+Ch]
  char v40; // [esp+34h] [ebp+10h]

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)a4); /*0x657dbd*/
  if ( result ) /*0x657dc4*/
    return result; /*0x657dc4*/
  if ( a2 != 273 ) /*0x657dd1*/
  {
    if ( a2 == 275 ) /*0x657dda*/
    {
      DrawPowerBarForPlayers(hDlg); /*0x65818a*/
      InvalidateRect(hDlg, 0, 1); /*0x658194*/
      return 0; /*0x6581a3*/
    }
    if ( a2 == 1175 ) /*0x657de5*/
    {
      for ( i = 0; i < 32; i += 4 ) /*0x657df1*/
      {
        DlgItem = GetDlgItem(hDlg, *(int *)((char *)&dword_8391FC + i)); /*0x657dfb*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x657e10*/
        v8 = GetDlgItem(hDlg, *(int *)((char *)&dword_83921C + i)); /*0x657e1a*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x657e29*/
      }
      v40 = 0; /*0x657e3e*/
      v39 = 0; /*0x657e43*/
      v33 = dword_A80238; /*0x657e48*/
      v32 = 1; /*0x657e4c*/
      v38 = 0; /*0x657e54*/
      do /*0x65807d*/
      {
        v9 = GetDlgItem(hDlg, dword_839240[v38]); /*0x657e6a*/
        hWnd = GetDlgItem(hDlg, dword_839260[v38]); /*0x657e84*/
        v10 = v32; /*0x657e8b*/
        v31 = v32; /*0x657e8d*/
        if ( v32 == *((_DWORD *)dword_A83D4C + 12) ) /*0x657e91*/
        {
          v31 = 0; /*0x657e93*/
          v10 = 0; /*0x657e9b*/
        }
        if ( v10 < v33 /*0x657ec1*/
          && (v11 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v10], (hDlga = (#375 *)v11) != 0)
          && *(_BYTE *)(*(_DWORD *)(v11 + 52) + 421) )
        {
          if ( !BYTE1(dword_8871E0[1].InfantryBrute) || (#375 *)HouseClass_Observer == dword_A83D4C || dword_A8B244 == 2 ) /*0x657ef9*/
          {
            ShowWindow(v9, 0); /*0x657f73*/
          }
          else
          {
            Diplomacy_Helper(v9); /*0x657eff*/
            IsAlliedWith = HouseClass::IsAlliedWith(dword_A83D4C, hDlga); /*0x657f16*/
            SendMessageA(v9, 0xF1u, IsAlliedWith, 0); /*0x657f2b*/
            HouseClass::IsAlliedWith(hDlga, dword_A83D4C); /*0x657f3c*/
            globalHelper_003DD0(v9); /*0x657f45*/
            v40 = 1; /*0x657f4f*/
            if ( dword_A8B538 || !(unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f5c*/
              EnableWindow(v9, 0); /*0x657f68*/
          }
          if ( (unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f79*/
          {
            if ( dword_A8B538 ) /*0x657f97*/
            {
              SendMessageA(hWnd, 0xF1u, 1u, 0); /*0x657fcc*/
              EnableWindow(hWnd, 0); /*0x657fd5*/
            }
            else
            {
              SendMessageA(hWnd, 0xF1u, *((unsigned __int8 *)&byte_A8D108 + v31), 0); /*0x657fb0*/
            }
            v39 = 1; /*0x657fb6*/
          }
          else
          {
            ShowWindow(hWnd, 0); /*0x657f89*/
          }
        }
        else
        {
          ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v32); /*0x657fe5*/
          hDlgb = GetDlgItem(hDlg, ResourceID_Hardcoded); /*0x657ff1*/
          EnableWindow(hDlgb, 0); /*0x657ff5*/
          ShowWindow(hDlgb, 0); /*0x658002*/
          hDlgc = GetDlgItem(hDlg, dword_839200[v38]); /*0x658015*/
          EnableWindow(hDlgc, 0); /*0x658019*/
          ShowWindow(hDlgc, 0); /*0x658026*/
          EnableWindow(v9, 0); /*0x65802b*/
          ShowWindow(v9, 0); /*0x658034*/
          EnableWindow(hWnd, 0); /*0x65803d*/
          ShowWindow(hWnd, 0); /*0x658046*/
          v13 = GetDlgItem(hDlg, dword_839220[v38]); /*0x658056*/
          EnableWindow(v13, 0); /*0x65805b*/
          ShowWindow(v13, 0); /*0x658064*/
        }
        v14 = v38 * 4 + 4 < 28; /*0x658072*/
        ++v32; /*0x658075*/
        ++v38; /*0x658079*/
      }
      while ( v14 ); /*0x65807d*/
      if ( !v40 ) /*0x658089*/
      {
        v15 = GetDlgItem(hDlg, 1431); /*0x658091*/
        ShowWindow(v15, 0); /*0x658096*/
      }
      if ( !v39 ) /*0x65809e*/
      {
        v16 = GetDlgItem(hDlg, 1061); /*0x6580a6*/
        ShowWindow(v16, 0); /*0x6580ab*/
      }
      v17 = GetDlgItem(hDlg, 1840); /*0x6580b5*/
      if ( v17 ) /*0x6580b9*/
      {
        if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x6580c8*/
        {
          ShowWindow(v17, 5); /*0x6580d4*/
          if ( dword_A8B238[0] == 3 ) /*0x6580de*/
          {
            SendMessageA(v17, 0xF1u, (unsigned __int8)dword_A8D110, 0); /*0x6580ef*/
          }
          else if ( dword_A8B238[0] == 4 ) /*0x6580f4*/
          {
            SendMessageA(v17, 0xF1u, BYTE1(dword_A8D110), 0); /*0x658106*/
          }
        }
        else
        {
          ShowWindow(v17, 0); /*0x6580cd*/
        }
      }
      DrawPowerBarForPlayers(hDlg); /*0x658112*/
      if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x658124*/
      {
        v18 = GetDlgItem(hDlg, 1062); /*0x658134*/
        v19 = WideString::GetOrEmpty_Alt((wchar_t **)(dword_A8B23C + 32)); /*0x658139*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v19); /*0x658147*/
      }
      v20 = GetDlgItem(hDlg, 1819); /*0x658153*/
      SendMessageA(v20, 0x4B2u, 0, 11055906); /*0x658162*/
      SetTimer(hDlg, 0, 0xFAu, 0); /*0x658172*/
      return 0; /*0x658181*/
    }
    return 0; /*0x658319*/
  }
  DlgCtrlID = GetDlgCtrlID(a4); /*0x6581a7*/
  if ( DlgCtrlID == 1059 ) /*0x6581b2*/
  {
    if ( !HIWORD(a3) ) /*0x6581b4*/
    {
      KillTimer(hDlg, 0); /*0x6581c0*/
      *(_DWORD *)GetWindowLongA(hDlg, 8) = 1059; /*0x6581d1*/
      return 0; /*0x6581de*/
    }
    return 0; /*0x6581b7*/
  }
  v22 = &dword_83923C; /*0x6581e1*/
  while ( *v22 != DlgCtrlID ) /*0x6581e8*/
  {
    if ( (int)++v22 >= (int)&dword_83925C ) /*0x6581f3*/
    {
      v23 = &dword_83925C; /*0x6581f5*/
      while ( *v23 != DlgCtrlID ) /*0x6581fc*/
      {
        if ( (int)++v23 >= (int)g_Str_File_OPTBTN_SHP ) /*0x658207*/
        {
          if ( DlgCtrlID == 1840 ) /*0x6582d8*/
          {
            v29 = HIWORD(a3); /*0x6582da*/
            if ( HIWORD(a3) <= 1u ) /*0x6582e0*/
            {
              if ( dword_A8B238[0] == 3 ) /*0x6582ee*/
              {
                LOBYTE(dword_A8D110) = v29 == 1; /*0x6582f9*/
                return 0; /*0x658305*/
              }
              if ( dword_A8B238[0] == 4 ) /*0x65830b*/
                BYTE1(dword_A8D110) = v29 == 1; /*0x658313*/
            }
          }
          return 0; /*0x658313*/
        }
      }
      if ( HIWORD(a3) != 1 && HIWORD(a3) ) /*0x65828e*/
        return 0; /*0x65828e*/
      v27 = &dword_83925C; /*0x658298*/
      v28 = 0; /*0x6582a0*/
      while ( *v27 != DlgCtrlID ) /*0x6582a4*/
      {
        ++v27; /*0x6582a6*/
        ++v28; /*0x6582a9*/
        if ( (int)v27 >= (int)g_Str_File_OPTBTN_SHP ) /*0x6582b0*/
        {
          v28 = -1; /*0x6582b2*/
          break; /*0x6582b2*/
        }
      }
      if ( v28 == *((_DWORD *)dword_A83D4C + 12) ) /*0x6582bd*/
        v28 = 0; /*0x6582bf*/
      *((_BYTE *)&byte_A8D108 + v28) = HIWORD(a3) == 1; /*0x6582c3*/
      return 0; /*0x6582d0*/
    }
  }
  if ( HIWORD(a3) > 1u ) /*0x658214*/
    return 0; /*0x658214*/
  v24 = 0; /*0x65821e*/
  v25 = &dword_83923C; /*0x658220*/
  while ( *v25 != DlgCtrlID ) /*0x658227*/
  {
    ++v25; /*0x658229*/
    ++v24; /*0x65822c*/
    if ( (int)v25 >= (int)&dword_83925C ) /*0x658233*/
    {
      v26 = -1; /*0x658235*/
      goto LABEL_60; /*0x658235*/
    }
  }
  v26 = v24; /*0x65824e*/
LABEL_60:
  if ( v26 == *((_DWORD *)dword_A83D4C + 12) ) /*0x658241*/
    v26 = 0; /*0x658243*/
  if ( HIWORD(a3) ) /*0x65820e*/
    SendMessageA(a4, 0xF1u, 0, 0); /*0x658261*/
  else
    SendMessageA(a4, 0xF1u, 1u, 0); /*0x65824c*/
  SquadClass::ProcessMove(v26); /*0x658269*/
  return 0; /*0x658178*/
}



// ==== 0x00658330  TabClass::DrawPower  this=TabClass  sig=csp ====
LRESULT __thiscall TabClass::DrawPower(TabClass *this, void *hDlg)
{
  int v2; // ebp
  int v3; // edi
  Color *BuildingAnimByName; // eax
  int v5; // eax
  LPARAM v6; // esi
  HWND DlgItem; // edi
  int ResourceIDHardcodedCSF; // eax
  HWND v9; // eax
  int v10; // edx
  HWND Default; // eax
  HWND v12; // eax
  unsigned __int8 IsAlliedWith; // al
  HWND v14; // eax
  HWND v15; // edi
  const wchar_t *v16; // eax
  _DWORD *v17; // ebx
  int v18; // ecx
  int v19; // edx
  HWND v20; // edi
  HWND v22; // eax
  HWND v23; // eax
  HWND hWnd; // [esp+10h] [ebp-D8h] BYREF
  __int16 v25; // [esp+14h] [ebp-D4h]
  unsigned __int8 v26; // [esp+16h] [ebp-D2h]
  int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF
  ObjectClass *v29; // [esp+F0h] [ebp+8h]
  #375 *other; // [esp+F4h] [ebp+Ch]

  v2 = *(&dword_83921C + (_DWORD)v29); /*0x658346*/
  v3 = *(&dword_8391FC + (_DWORD)v29); /*0x65834f*/
  nIDDlgItem = v2; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( other && *(_BYTE *)(*((_DWORD *)other + 13) + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)other + 45077); /*0x658386*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x658395*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6583a1*/
    }
    else if ( *((_BYTE *)other + 501) ) /*0x6583a8*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(aGrey, 1); /*0x6583bc*/
    }
    else
    {
      BuildingAnimByName = (Color *)*((_DWORD *)dword_B054D4 + *((_DWORD *)other + 22549)); /*0x6583cf*/
    }
    v5 = Color::ConvertToRGB(BuildingAnimByName + 194, (int)&hWnd); /*0x6583dd*/
    v25 = *(_WORD *)v5; /*0x6583e6*/
    v26 = *(_BYTE *)(v5 + 2); /*0x6583ee*/
    v6 = (unsigned __int8)v25 | ((HIBYTE(v25) | (v26 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem((HWND)hDlg, v3); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v6); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v29); /*0x658452*/
    v9 = GetDlgItem((HWND)hDlg, ResourceIDHardcodedCSF); /*0x658460*/
    v10 = *((_DWORD *)other + 13); /*0x658466*/
    hWnd = v9; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(BuildingType **)(v10 + 180)); /*0x658473*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((BuildingType *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate(hWnd, Default); /*0x658490*/
    if ( *(&dword_83923C + (_DWORD)v29) != -1 ) /*0x65849f*/
    {
      v12 = GetDlgItem((HWND)hDlg, *(&dword_83923C + (_DWORD)v29)); /*0x6584ae*/
      hWnd = v12; /*0x6584ba*/
      if ( dword_A8B538[0] ) /*0x6584c0*/
      {
        EnableWindow(v12, 0); /*0x6584c5*/
        v12 = hWnd; /*0x6584cb*/
      }
      if ( *((_BYTE *)other + 501) ) /*0x6584cf*/
      {
        ShowWindow(v12, 0); /*0x6584dc*/
      }
      else
      {
        LOBYTE(v25) = HouseClass::IsAlliedWith((HouseClass *)dword_A83D4C); /*0x6584f4*/
        SendMessageA(hWnd, 0xF1u, (unsigned __int8)v25, 0); /*0x65850b*/
      }
      IsAlliedWith = HouseClass::IsAlliedWith((HouseClass *)other); /*0x658515*/
      globalHelper_003DD0(hWnd, IsAlliedWith); /*0x658520*/
    }
    if ( *((_BYTE *)other + 584) ) /*0x658525*/
    {
      v14 = GetDlgItem((HWND)hDlg, *(&dword_83925C + (_DWORD)v29)); /*0x65853f*/
      ShowWindow(v14, 0); /*0x658548*/
    }
    else if ( dword_A8B538[0] ) /*0x658557*/
    {
      v15 = GetDlgItem((HWND)hDlg, *(&dword_83925C + (_DWORD)v29)); /*0x658571*/
      SendMessageA(v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow(v15, 0); /*0x658580*/
    }
    v16 = 0; /*0x658586*/
    v17 = (_DWORD *)((char *)other + 21476); /*0x658588*/
    v18 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      v19 = *v17 + v17[21]; /*0x658598*/
      ++v17; /*0x65859a*/
      v16 = (const wchar_t *)((char *)v16 + v19); /*0x65859d*/
      --v18; /*0x65859f*/
    }
    while ( v18 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)g_Str_Fmt_PctD, v16); /*0x6585ad*/
    v20 = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x6585c9*/
    SendMessageA(v20, 0x498u, 0, v6); /*0x6585d3*/
    return SendMessageA(v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v22 = GetDlgItem((HWND)hDlg, v3); /*0x658600*/
    SendMessageA(v22, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v23 = GetDlgItem((HWND)hDlg, v2); /*0x658619*/
    return SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }
}



// ==== 0x00658640  ObjectClass::DrawPowerBarForPlayers  this=ObjectClass  sig=csp ====
int __stdcall DrawPowerBarForPlayers(ObjectClass *this)
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
    v4 = *(&dword_A8022C->vtable0 + v2); /*0x658668*/
    if ( v4 /*0x658683*/
      && ((unsigned __int8)House::IsHumanPlayer(*((House **)&dword_A8022C->vtable0 + v2))
       || !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422)) )
    {
      TabClass::DrawPower(v3, this); /*0x658692*/
    }
  }
  TabClass::DrawPower(v3, this); /*0x6586b4*/
  return TabClass::DrawPower(v3, this); /*0x6586c3*/
}



// ==== 0x006586D0  ObjectClass::ShowDiplomacyDialog  this=ObjectClass  sig=csp ====
int ShowDiplomacyDialog(ObjectClass *this)
{
  Dialog *Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  Dialog = (Dialog *)CreateDialog(0x73u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Diplomacy::DlgProc, 0); /*0x6586e9*/
  stru_A8EB00.?[440] = 1; /*0x6586eb*/
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x6586f2*/
  if ( Dialog ) /*0x6586f9*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x658703*/
    Dialog::Show(Dialog); /*0x65870b*/
    dwNewLong = 0; /*0x658710*/
    while ( !(unsigned __int8)Dialog::PumpMessages() ) /*0x65871f*/
    {
      if ( dwNewLong ) /*0x658727*/
        goto LABEL_7; /*0x658727*/
    }
    dwNewLong = 1059; /*0x65872b*/
LABEL_7:
    Dialog::Destroy(Dialog); /*0x658733*/
  }
  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x658740*/
  stru_A8EB00.?[440] = BYTE2(dword_A8B230[381].vtable3); /*0x658758*/
  return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x658763*/
}



// ==== 0x00658770  RadarClass::Destru_vt33  this=RadarClass  sig=csp ====
wchar_t *__thiscall RadarClass::Destru_vt33(RadarClass *this, int a2)
{
  return DisplayClass::Draw((DisplayClass *)this, a2); /*0x65877a*/
}



// ==== 0x00658780  RTacticalClass@RadarClass::renderOverlay  this=RTacticalClass@RadarClass  sig=csp ====
_DWORD *__thiscall TacticalClass::sub_658780(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x658783*/
  if ( (a2 & 1) != 0 ) /*0x65878d*/
    __3_YAXPAX_Z(Block); /*0x658790*/
  return Block; /*0x65879a*/
}



// ==== 0x006587A0  RadarClass::Destru_vt04  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::Destru_vt04(RadarClass *this, char a2)
{
  MapClass **p_RadarClass_field_0x1488; // esi
  int v4; // ebp
  void *v5; // eax
  CampaignClass *RadarClass_field_0x1260; // eax
  CampaignClass *RadarClass_field_0x1228; // eax

  this->RadarClass_field_0x0 = &RadarClass::`vftable'; /*0x6587ac*/
  AudioFileClass::Release((AudioFileClass *)&this->RadarClass_field_0x14C0); /*0x6587b2*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x6587b9*/
  p_RadarClass_field_0x1488 = &this->RadarClass_field_0x1488; /*0x6587be*/
  v4 = 22; /*0x6587c4*/
  do /*0x6587f3*/
  {
    v5 = *(p_RadarClass_field_0x1488 - 5); /*0x6587cb*/
    p_RadarClass_field_0x1488 -= 6; /*0x6587ce*/
    *p_RadarClass_field_0x1488 = (MapClass *)&VectorClass<Point2D>::`vftable'; /*0x6587d3*/
    if ( v5 && *((_BYTE *)p_RadarClass_field_0x1488 + 13) ) /*0x6587db*/
    {
      __3_YAXPAX_Z(v5); /*0x6587e1*/
      p_RadarClass_field_0x1488[1] = 0; /*0x6587e9*/
    }
    --v4; /*0x6587ec*/
    *((_BYTE *)p_RadarClass_field_0x1488 + 13) = 0; /*0x6587ed*/
    p_RadarClass_field_0x1488[2] = 0; /*0x6587f0*/
  }
  while ( v4 ); /*0x6587f3*/
  RadarClass_field_0x1260 = this->RadarClass_field_0x1260; /*0x6587f5*/
  this->RadarClass_field_0x125C = (VectorClass *)&VectorClass<Point2D>::`vftable'; /*0x6587fb*/
  if ( RadarClass_field_0x1260 && this->__pad_1264[5] ) /*0x658809*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x658812*/
    this->RadarClass_field_0x1260 = 0; /*0x65881a*/
  }
  this->__pad_1264[5] = 0; /*0x658820*/
  *(_DWORD *)this->__pad_1264 = 0; /*0x658826*/
  RadarClass_field_0x1228 = this->RadarClass_field_0x1228; /*0x65882c*/
  this->RadarClass_field_0x1224 = (VectorClass *)&VectorClass<Cell>::`vftable'; /*0x658832*/
  if ( RadarClass_field_0x1228 && this->__pad_122C[5] ) /*0x658840*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x658849*/
    this->RadarClass_field_0x1228 = 0; /*0x658851*/
  }
  this->__pad_122C[5] = 0; /*0x658859*/
  *(_DWORD *)this->__pad_122C = 0; /*0x65885f*/
  MapClass::Destruct((char *)this); /*0x658865*/
  if ( (a2 & 1) != 0 ) /*0x65886f*/
    __3_YAXPAX_Z(this); /*0x658872*/
  return &this->RadarClass_field_0x0; /*0x65887c*/
}



// ==== 0x00658890  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Clear  this=DynamicVector  sig=csp ====
void __thiscall RadarHashVector::Clear(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x658896*/
  this->m_10 = 0; /*0x658899*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6588a0*/
  {
    __3_YAXPAX_Z(v2); /*0x6588a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6588ae*/
  }
  BYTE1(this->m_C) = 0; /*0x6588b1*/
  this->m_8 = 0; /*0x6588b4*/
}



// ==== 0x006588C0  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall RadarHashVector::GetCount(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6588c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x6588d5*/
  else
    return 0; /*0x6588c7*/
}



// ==== 0x006588E0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::Seek(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        _DWORD *a2,
        int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 16 * a3); /*0x6588ea*/
  *a2 = *v3; /*0x6588f2*/
  a2[1] = v3[1]; /*0x6588f7*/
  a2[2] = v3[2]; /*0x6588fd*/
  a2[3] = v3[3]; /*0x658903*/
  return a2; /*0x658906*/
}



// ==== 0x00658910  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::AddRef(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x65891b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x658920*/
  {
    v3 = 0; /*0x658922*/
    if ( m_8 <= 0 ) /*0x658926*/
      return 1; /*0x658960*/
    v4 = *(_DWORD *)(a2 + 4); /*0x658928*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x65892b*/
    v6 = (_DWORD *)(v4 + 4); /*0x65892e*/
    v7 = v4 - (_DWORD)v5; /*0x658931*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] ) /*0x65894d*/
    {
      ++v3; /*0x65894f*/
      v6 += 4; /*0x658950*/
      v5 += 4; /*0x658953*/
      if ( v3 >= m_8 ) /*0x658958*/
        return 1; /*0x658958*/
    }
  }
  return 0; /*0x65895a*/
}



// ==== 0x00658970  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Release  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::Release(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x658972*/
  if ( a2 ) /*0x65897e*/
  {
    v5 = a3; /*0x658984*/
    LOBYTE(this->m_C) = 0; /*0x658988*/
    if ( a3 ) /*0x65898d*/
    {
      if ( a2 - 1 >= 0 ) /*0x6589c7*/
      {
        v9 = a3 + 4; /*0x6589c9*/
        v10 = a2; /*0x6589cc*/
        do /*0x6589d9*/
        {
          *((_DWORD *)v9 - 1) = 0; /*0x6589cd*/
          *(_DWORD *)v9 = 0; /*0x6589d0*/
          *((_DWORD *)v9 + 1) = 0; /*0x6589d2*/
          v9 += 16; /*0x6589d5*/
          --v10; /*0x6589d8*/
        }
        while ( v10 ); /*0x6589d9*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658995*/
      if ( v6 ) /*0x65899f*/
      {
        if ( a2 - 1 >= 0 ) /*0x6589a6*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x6589a8*/
          v8 = a2; /*0x6589ab*/
          do /*0x6589b8*/
          {
            *(v7 - 1) = 0; /*0x6589ac*/
            *v7 = 0; /*0x6589af*/
            v7[1] = 0; /*0x6589b1*/
            v7 += 4; /*0x6589b4*/
            --v8; /*0x6589b7*/
          }
          while ( v8 ); /*0x6589b8*/
        }
        v5 = (char *)v6; /*0x6589ba*/
      }
      else
      {
        v5 = 0; /*0x6589be*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6589dd*/
    if ( v5 ) /*0x6589e1*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6589ec*/
      {
        m_8 = this->m_8; /*0x6589f1*/
        if ( a2 < m_8 ) /*0x6589f6*/
          m_8 = a2; /*0x6589f8*/
        if ( m_8 > 0 ) /*0x6589fc*/
        {
          v13 = 0; /*0x6589fe*/
          do /*0x658a24*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x658a05*/
            v15 = &v5[v13]; /*0x658a07*/
            v13 += 16; /*0x658a0a*/
            --m_8; /*0x658a0d*/
            *(_DWORD *)v15 = *v14; /*0x658a10*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x658a15*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x658a1b*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x658a21*/
          }
          while ( m_8 ); /*0x658a24*/
          v3 = a2; /*0x658a26*/
        }
        if ( BYTE1(this->m_C) ) /*0x658a2c*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658a35*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x658a3d*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x658a48*/
      this->m_8 = v3; /*0x658a4e*/
      BYTE1(this->m_C) = a3 == 0; /*0x658a51*/
      return 1; /*0x658a57*/
    }
    else
    {
      return 0; /*0x6589e6*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(_DWORD *)this->__pad_0 /*0x658a61*/
                                                                                            + 12))(this);
    return 1; /*0x658a67*/
  }
}



// ==== 0x00658A70  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall RadarHashVector::ddtor(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x658a7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658a83*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x658a8b*/
  }
  BYTE1(this->m_C) = 0; /*0x658a8e*/
  this->m_8 = 0; /*0x658a91*/
}



// ==== 0x00658AA0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Read  this=VectorClass  sig=csp ====
int __thiscall RadarHashVector::Read(_VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x658aa0*/
    return 0; /*0x658aae*/
  m_8 = this->m_8; /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( m_8 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= m_8 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/
}



// ==== 0x00658AF0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall RadarHashVector::Write(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x658af0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/
}



// ==== 0x00658B10  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ComputeHashIndex  this=DynamicVector  sig=csp ====
char __thiscall RadarHashVector::ComputeHashIndex(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    LOBYTE(this->m_C) = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *((_DWORD *)v9 - 1) = 0; /*0x658b6d*/
          *(_DWORD *)v9 = 0; /*0x658b70*/
          *((_DWORD *)v9 + 1) = 0; /*0x658b72*/
          v9 += 16; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658b48*/
          v8 = a2; /*0x658b4b*/
          do /*0x658b58*/
          {
            *(v7 - 1) = 0; /*0x658b4c*/
            *v7 = 0; /*0x658b4f*/
            v7[1] = 0; /*0x658b51*/
            v7 += 4; /*0x658b54*/
            --v8; /*0x658b57*/
          }
          while ( v8 ); /*0x658b58*/
        }
        v5 = (char *)v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x658b87*/
    {
      m_8 = this->m_8; /*0x658b8c*/
      if ( a2 < m_8 ) /*0x658b91*/
        m_8 = a2; /*0x658b93*/
      if ( m_8 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --m_8; /*0x658ba8*/
          *(_DWORD *)v14 = *v13; /*0x658bab*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( m_8 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( BYTE1(this->m_C) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658bd0*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x658bd8*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x658be3*/
    this->m_8 = v3; /*0x658be9*/
    BYTE1(this->m_C) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x658bf5*/
  }
  v15 = this->m_8; /*0x658bf8*/
  if ( v15 < this->m_10 ) /*0x658c00*/
    this->m_10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}



// ==== 0x00658C20  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall RadarHashVector::FindItemIndex(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( m_10 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= m_10 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/
}



// ==== 0x00658C60  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Destructor  this=DynamicVector  sig=csp ====
char *__thiscall RadarHashVector::Destructor(
        _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x658c6a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x658c6c*/
    v4 = (char *)this - 4; /*0x658c70*/
    v5 = 3 * v3; /*0x658c73*/
    v6 = v3 - 1; /*0x658c76*/
    v7 = &this->__pad_0[8 * v5]; /*0x658c77*/
    if ( v6 >= 0 ) /*0x658c7a*/
    {
      v8 = v6 + 1; /*0x658c7d*/
      do /*0x658caa*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x658c82*/
        v7 -= 24; /*0x658c85*/
        *(_DWORD *)v7 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658c8a*/
        if ( v9 && v7[13] ) /*0x658c92*/
        {
          __3_YAXPAX_Z(v9); /*0x658c98*/
          *((_DWORD *)v7 + 1) = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        v7[13] = 0; /*0x658ca4*/
        *((_DWORD *)v7 + 2) = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      __3_YAXPAX_Z(v4); /*0x658cb5*/
    return v4; /*0x658cbd*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x658cc5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658ccc*/
    if ( v11 && BYTE1(this->m_C) ) /*0x658cd4*/
    {
      __3_YAXPAX_Z(v11); /*0x658cda*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x658ce2*/
    }
    BYTE1(this->m_C) = 0; /*0x658ce9*/
    this->m_8 = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      __3_YAXPAX_Z(this); /*0x658cf4*/
    return this->__pad_0; /*0x658cfc*/
  }
}



// ==== 0x00658D10  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::QueryInterface(
        _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x658d13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658d16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x658d20*/
  {
    __3_YAXPAX_Z(v3); /*0x658d28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x658d30*/
  }
  BYTE1(this->m_C) = 0; /*0x658d3b*/
  this->m_8 = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    __3_YAXPAX_Z(this); /*0x658d4b*/
  return this->__pad_0; /*0x658d55*/
}



// ==== 0x00658D60  VectorClass::PointConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::PointConstructor(VectorClass *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x658d6a*/
  this->Capacity = a2; /*0x658d71*/
  this->IsInitialized = 1; /*0x658d74*/
  this->IsAllocated = 0; /*0x658d78*/
  this->vtable0 = &VectorClass<Point2D>::`vftable'; /*0x658d7c*/
  if ( a2 ) /*0x658d82*/
  {
    if ( a3 ) /*0x658d8a*/
    {
      this->Items = (void *)a3; /*0x658d8d*/
      return &this->vtable0; /*0x658d98*/
    }
    v5 = (void *)__2_YAPAXI_Z(8 * a2); /*0x658da3*/
    if ( v5 ) /*0x658dad*/
    {
      this->Items = v5; /*0x658db0*/
      this->IsAllocated = 1; /*0x658db7*/
      return &this->vtable0; /*0x658dbf*/
    }
    this->IsAllocated = 1; /*0x658dc4*/
    this->Items = 0; /*0x658dc8*/
  }
  return &this->vtable0; /*0x658d96*/
}



// ==== 0x00658DE0  RadarHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::Construct(RadarHashVector *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx

  this->RadarHashVector_field_0x04 = 0; /*0x658ded*/
  this->RadarHashVector_field_0x08 = a2; /*0x658df0*/
  LOBYTE(this->RadarHashVector_field_0x0C) = 1; /*0x658df3*/
  BYTE1(this->RadarHashVector_field_0x0C) = 0; /*0x658df7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658dfa*/
  if ( a2 ) /*0x658e00*/
  {
    if ( a3 ) /*0x658e08*/
    {
      if ( a2 - 1 >= 0 ) /*0x658e0f*/
      {
        v4 = (_DWORD *)(a3 + 4); /*0x658e11*/
        v5 = a2; /*0x658e14*/
        do /*0x658e21*/
        {
          *(v4 - 1) = 0; /*0x658e15*/
          *v4 = 0; /*0x658e18*/
          v4[1] = 0; /*0x658e1a*/
          v4 += 4; /*0x658e1d*/
          --v5; /*0x658e20*/
        }
        while ( v5 ); /*0x658e21*/
      }
      this->RadarHashVector_field_0x04 = a3; /*0x658e23*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( a2 - 1 >= 0 ) /*0x658e3f*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658e41*/
          v8 = a2; /*0x658e44*/
          do /*0x658e51*/
          {
            *(v7 - 1) = 0; /*0x658e45*/
            *v7 = 0; /*0x658e48*/
            v7[1] = 0; /*0x658e4a*/
            v7 += 4; /*0x658e4d*/
            --v8; /*0x658e50*/
          }
          while ( v8 ); /*0x658e51*/
        }
      }
      else
      {
        v6 = 0; /*0x658e55*/
      }
      this->RadarHashVector_field_0x04 = v6; /*0x658e57*/
      BYTE1(this->RadarHashVector_field_0x0C) = 1; /*0x658e5a*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable'; /*0x658e5e*/
  this->RadarHashVector_field_0x14 = 10; /*0x658e64*/
  this->RadarHashVector_field_0x10 = 0; /*0x658e6b*/
  return this->__pad_0; /*0x658e70*/
}



// ==== 0x00658E80  sub_658E80  this=-  sig=ida-proto ====
void sub_658E80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x658e8c*/
  dbl_B04A78 = Math::Sqrt(v0 + v0); /*0x658e9e*/
}



// ==== 0x00658EB0  sub_658EB0  this=-  sig=ida-proto ====
void sub_658EB0()
{
  dbl_B04AC8 = dbl_B04A78 / 60.0; /*0x658ebc*/
}



// ==== 0x00658ED0  sub_658ED0  this=-  sig=ida-proto ====
void sub_658ED0()
{
  dbl_B04AB0 = 1.0 / dbl_B04AC8; /*0x658edc*/
}



// ==== 0x00658EF0  sub_658EF0  this=-  sig=ida-proto ====
void sub_658EF0()
{
  dbl_B04AA8 = 0.0174532925199433 * 45.0; /*0x658efc*/
}



// ==== 0x00658F10  sub_658F10  this=-  sig=ida-proto ====
void sub_658F10()
{
  dbl_B04A80 = 0.0174532925199433 * 60.0; /*0x658f1c*/
}



// ==== 0x00658F30  sub_658F30  this=-  sig=ida-proto ====
void sub_658F30()
{
  dbl_B04A40 = 0.0174532925199433 * 90.0; /*0x658f3c*/
}



// ==== 0x00658F50  sub_658F50  this=-  sig=ida-proto ====
__int64 sub_658F50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04A40 - dbl_B04A80); /*0x658f62*/
  result = Math::RoundToInt(v0 * dbl_B04A78 * 0.5); /*0x658f76*/
  dword_B04AD0 = result; /*0x658f7b*/
  return result; /*0x658f80*/
}



// ==== 0x00658F90  sub_658F90  this=-  sig=ida-proto ====
void sub_658F90()
{
  dbl_B04A88 = Math::ArcTan((double)dword_B04AD0 * 0.00390625); /*0x658fa7*/
}



// ==== 0x00658FC0  sub_658FC0  this=-  sig=ida-proto ====
void sub_658FC0()
{
  dbl_B04AA0 = Math::ArcTan((double)(2 * dword_B04AD0) / dbl_B04A78); /*0x658fe2*/
}



// ==== 0x00658FF0  sub_658FF0  this=-  sig=ida-proto ====
__int64 sub_658FF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04AD0) + 0.5); /*0x65900b*/
  dword_B04AC4 = result; /*0x659010*/
  return result; /*0x659016*/
}



// ==== 0x00659020  sub_659020  this=-  sig=ida-proto ====
int sub_659020()
{
  word_B04A58 = 0; /*0x659022*/
  word_B04A5A = 0; /*0x659028*/
  return 0; /*0x65902e*/
}



// ==== 0x00659030  sub_659030  this=-  sig=ida-proto ====
int sub_659030()
{
  dword_B04A90 = 0; /*0x659032*/
  dword_B04A94 = 0; /*0x659037*/
  dword_B04A98 = 0; /*0x65903c*/
  return 0; /*0x659041*/
}



// ==== 0x00659050  sub_659050  this=-  sig=ida-proto ====
int sub_659050()
{
  dword_B04AC0 = 0; /*0x659055*/
  dword_B04AB8 = 128; /*0x65905f*/
  dword_B04ABC = 128; /*0x659064*/
  return 128; /*0x659069*/
}



// ==== 0x00659070  sub_659070  this=-  sig=ida-proto ====
int sub_659070()
{
  dword_B04A48 = 0; /*0x659072*/
  dword_B04A4C = 0; /*0x659077*/
  dword_B04A50 = 0; /*0x65907c*/
  dword_B04A54 = 0; /*0x659081*/
  return 0; /*0x659086*/
}



// ==== 0x00659090  sub_659090  this=-  sig=ida-proto ====
int sub_659090()
{
  dword_B04A64 = 0; /*0x659097*/
  dword_B04A68 = 0; /*0x65909c*/
  byte_B04A6C = 1; /*0x6590a1*/
  byte_B04A6D = 0; /*0x6590a8*/
  RadBeam_Array = (int)&DynamicVectorClass<RadBeam *>::`vftable'; /*0x6590ad*/
  dword_B04A74 = 10; /*0x6590b7*/
  dword_B04A70 = 0; /*0x6590c1*/
  return atexit(sub_6590D0); /*0x6590cc*/
}



// ==== 0x006590D0  sub_6590D0  this=-  sig=ida-proto ====
void __cdecl sub_6590D0()
{
  RadBeam_Array = (int)&VectorClass<RadBeam *>::`vftable'; /*0x6590d8*/
  if ( dword_B04A64 && byte_B04A6D ) /*0x6590ec*/
  {
    __3_YAXPAX_Z(dword_B04A64); /*0x6590ef*/
    dword_B04A64 = 0; /*0x6590f7*/
  }
  byte_B04A6D = 0; /*0x6590fd*/
  dword_B04A68 = 0; /*0x659103*/
}



// ==== 0x00659110  RadBeam::Create  this=RadBeam  sig=csp ====
int __thiscall RadBeam::Create(RadBeam *this)
{
  RadBeam *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (RadBeam *)__2_YAPAXI_Z(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, (int)this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( dword_B04A70 < dword_B04A68 /*0x65916a*/
    || (byte_B04A6D || !dword_B04A68)
    && dword_B04A74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadBeam_Array + 8))(
         &RadBeam_Array,
         dword_B04A68 + dword_B04A74,
         0) )
  {
    v4 = dword_B04A70++; /*0x659177*/
    *((_DWORD *)dword_B04A64 + v4) = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (RadBeam *)1 ? 20 : 10);
  return (int)inited; /*0x6591a1*/
}



// ==== 0x006591B0  ObjectClass::UpdateProjectileTrails  this=ObjectClass  sig=csp ====
void UpdateProjectileTrails(TechnoClass *this)
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
  _DWORD *v16; // edx
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
  LODWORD(v22) = 0; /*0x6591d1*/
  if ( dword_B04A70 - 1 >= 0 ) /*0x6591d5*/
  {
    v4 = dword_B04A70; /*0x6591dc*/
    v5 = (char *)dword_B04A64 + 4 * v1; /*0x6591df*/
    do /*0x6591f5*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v5 + 16) == 2 ) /*0x6591e8*/
      {
        ++v2; /*0x6591ea*/
        if ( *(_BYTE *)(*(_DWORD *)v5 + 9) ) /*0x6591eb*/
          ++v3; /*0x6591f0*/
      }
      v5 -= 4; /*0x6591f1*/
      --v4; /*0x6591f4*/
    }
    while ( v4 ); /*0x6591f5*/
    LODWORD(v22) = v3; /*0x6591f7*/
    Block = v2; /*0x6591fb*/
  }
  v6 = (double)(unsigned int)dword_ABCD44 /*0x65921d*/
     / (double)(int)dword_A8B558
     * ((double)(unsigned int)dword_ABCD44
      / (double)(int)dword_A8B558
      * ((double)(unsigned int)dword_ABCD44
       / (double)(int)dword_A8B558));
  v7 = (double)SLODWORD(v22); /*0x65921f*/
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
      v10 = *((_DWORD *)dword_B04A64 + v9); /*0x659282*/
      Block = (void *)v10; /*0x659285*/
      v11 = *(_DWORD *)(v10 + 16); /*0x659289*/
      if ( v11 == 1 ) /*0x65928f*/
        break; /*0x65928f*/
      if ( v11 == 2 ) /*0x6592d0*/
      {
        if ( *(_BYTE *)(v10 + 9) ) /*0x6592d6*/
        {
          v14 = Random::Range(&Randomizer_Global, 0, 99); /*0x6592e8*/
          LOWORD(v15) = Math::RoundToInt(v24 * 100.0); /*0x6592f4*/
          if ( v14 < v15 ) /*0x6592fb*/
            *((_BYTE *)Block + 9) = 0; /*0x659301*/
        }
        v13 = Weapon_Update(v20, 0); /*0x65930a*/
        goto LABEL_22; /*0x65930a*/
      }
LABEL_35:
      if ( --v9 < 0 ) /*0x6593d6*/
        return; /*0x6593d6*/
    }
    LOWORD(v12) = Math::RoundToInt(v23 * 10.0); /*0x65929b*/
    LODWORD(v22) = v12; /*0x6592a3*/
    if ( v12 >= 10 ) /*0x6592a7*/
    {
      if ( v12 > 100 ) /*0x6592b5*/
        LODWORD(v22) = 100; /*0x6592b7*/
    }
    else
    {
      LODWORD(v22) = 10; /*0x6592a9*/
    }
    *(double *)(v10 + 24) = (double)SLODWORD(v22); /*0x6592bf*/
    v13 = RenderProjectileTrail((ObjectClass *)Block); /*0x6592c6*/
LABEL_22:
    if ( v13 )
    {
      v16 = Block; /*0x659317*/
      v17 = *(_DWORD *)Block; /*0x65931b*/
      if ( *(_DWORD *)Block && *(void **)(v17 + 1296) == Block ) /*0x659327*/
      {
        *(_DWORD *)(v17 + 1296) = 0; /*0x659329*/
        *(_DWORD *)Block = 0; /*0x659333*/
        v16 = Block; /*0x659335*/
      }
      v18 = v16[1]; /*0x659339*/
      if ( v18
        && (*(_BYTE *)(v18 + 20) & 1) != 0
        && *(_DWORD **)((*(_BYTE *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) == v16 )
      {
        *(_DWORD *)((*(_BYTE *)(v18 + 20) & 1) != 0 ? v18 + 0x510 : 1296) = 0;
        *((_DWORD *)Block + 1) = 0; /*0x659380*/
      }
      v19 = (*(int (__thiscall **)(int *, void **))(RadBeam_Array + 16))(&RadBeam_Array, &Block); /*0x659393*/
      if ( v19 != -1 && v19 < dword_B04A70 && v19 < --dword_B04A70 ) /*0x6593ae*/
      {
        do /*0x6593c6*/
        {
          ++v19; /*0x6593b6*/
          *((_DWORD *)dword_B04A64 + v19 - 1) = *((_DWORD *)dword_B04A64 + v19); /*0x6593ba*/
        }
        while ( v19 < dword_B04A70 ); /*0x6593c6*/
      }
      __3_YAXPAX_Z(Block); /*0x6593cd*/
    }
    goto LABEL_35; /*0x6593cd*/
  }
}



// ==== 0x006593F0  RadBeam::InitState  this=RadBeam  sig=csp ====
_DWORD *__thiscall RadBeam::InitState(RadBeam *this, int a2)
{
  this->? = 0; /*0x6593fe*/
  this->AbstractClass = 0; /*0x659401*/
  this->? = 0; /*0x659403*/
  LOBYTE(this->?) = 0; /*0x659406*/
  BYTE1(this->?) = 1; /*0x659409*/
  this->? = 0; /*0x65940c*/
  this->? = a2; /*0x65940f*/
  this->? = 0; /*0x659412*/
  LOBYTE(this->?) = 0; /*0x659415*/
  BYTE1(this->?) = 0; /*0x659418*/
  BYTE2(this->?) = 0; /*0x65941b*/
  this->range[0] = 0; /*0x65941e*/
  this->range[1] = 0; /*0x659421*/
  this->data[0] = 0; /*0x659424*/
  this->data[1] = 0; /*0x659427*/
  this->data[2] = 0; /*0x65942a*/
  this->data[3] = 0; /*0x65942d*/
  this->data[5] = 0; /*0x659430*/
  this->data[7] = 0; /*0x659433*/
  this->data[4] = 0; /*0x659436*/
  this->data[6] = 0; /*0x659439*/
  this->data[8] = 0; /*0x65943c*/
  this->data[9] = 0; /*0x65943f*/
  this->data[10] = 1; /*0x659442*/
  LOBYTE(this->data[11]) = 0; /*0x659445*/
  this->data[20] = 0; /*0x659448*/
  LOBYTE(this->data[37]) = 0; /*0x65944b*/
  BYTE1(this->data[37]) = 0; /*0x659451*/
  BYTE2(this->data[37]) = 0; /*0x659457*/
  return &this->AbstractClass; /*0x65945d*/
}



// ==== 0x00659470  TechnoClass::drawSelectionBox  this=ObjectClass  sig=csp ====
char __thiscall sub_659470(char *this, int a2)
{
  char *v2; // ecx
  char result; // al

  v2 = this + 32; /*0x659474*/
  *(_WORD *)v2 = *(_WORD *)a2; /*0x65947a*/
  result = *(_BYTE *)(a2 + 2); /*0x65947d*/
  v2[2] = result; /*0x659480*/
  return result; /*0x659483*/
}



// ==== 0x00659490  TechnoClass::drawHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawHealthBar(TechnoClass *this, int a2)
{
  this->? = (void *)a2; /*0x659494*/
  return a2; /*0x659497*/
}



// ==== 0x006594A0  TechnoClass::drawPipScale  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawPipScale(TechnoClass *this, _DWORD *a2)
{
  int *p_occupant; // ecx
  int result; // eax

  p_occupant = &this->?; /*0x6594a4*/
  *p_occupant = *a2; /*0x6594a9*/
  p_occupant[1] = a2[1]; /*0x6594ae*/
  result = a2[2]; /*0x6594b1*/
  p_occupant[2] = result; /*0x6594b4*/
  return result; /*0x6594b7*/
}



// ==== 0x006594C0  TechnoClass::drawSpawnPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawSpawnPips(TechnoClass *this, _DWORD *a2)
{
  ObjectClass **p_nextObject; // ecx
  int result; // eax

  p_nextObject = &this->?; /*0x6594c4*/
  *p_nextObject = (ObjectClass *)*a2; /*0x6594c9*/
  p_nextObject[1] = (ObjectClass *)a2[1]; /*0x6594ce*/
  result = a2[2]; /*0x6594d1*/
  p_nextObject[2] = (ObjectClass *)result; /*0x6594d4*/
  return result; /*0x6594d7*/
}



// ==== 0x006594E0  TechnoClass::drawAmmoPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawAmmoPips(TechnoClass *this, int a2)
{
  this->?[0] = a2; /*0x6594e4*/
  return a2; /*0x6594e7*/
}



// ==== 0x006594F0  TechnoClass::drawTiberiumPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawTiberiumPips(TechnoClass *this, int a2, int a3)
{
  this->?[1] = a2; /*0x6594f8*/
  this->?[2] = a3; /*0x6594fb*/
  return a2; /*0x6594fe*/
}



// ==== 0x00659510  ObjectClass::SpreadRadiationAreaEffect_Helper  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect_Helper(ObjectClass *this, int a2, int a3)
{
  this->ambientSoundController[3] = a2; /*0x659518*/
  this->ambientSoundController[4] = a3; /*0x65951b*/
  return a2; /*0x65951e*/
}



// ==== 0x00659530  ObjectClass::SpreadRadiationAreaEffect_Helper  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect_Helper_659530(ObjectClass *this, int a2)
{
  this->customSound_controller[0] = a2; /*0x659534*/
  return a2; /*0x659537*/
}



// ==== 0x00659540  TechnoClass::drawMindControlPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::drawMindControlPips(TechnoClass *this, int a2)
{
  this->?[1] = a2; /*0x659544*/
  return a2; /*0x659547*/
}



// ==== 0x00659550  TechnoClass::drawPassengerPips  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::drawPassengerPips(TechnoClass *this, char a2)
{
  LOBYTE(this->?[2]) = a2; /*0x659554*/
  return a2; /*0x659557*/
}



// ==== 0x00659560  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_659560(ObjectClass *this)
{
  BYTE1(this->?) = 0; /*0x659560*/
}



// ==== 0x00659570  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_659570(ObjectClass *this)
{
  return BYTE1(this->?); /*0x659573*/
}



// ==== 0x00659590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_659590(ObjectClass *this, _DWORD *a2, _DWORD *a3, __int16 a4)
{
  char result; // al
  char *v6; // esi
  int v7; // eax
  int v8[2]; // [esp+Ch] [ebp-20h] BYREF
  int v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a2, v9); /*0x6595a8*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, a3, v8); /*0x6595bd*/
  v10[0] = DSurface_ViewBounds.field_0; /*0x6595d3*/
  v10[1] = (int)DSurface_ViewBounds.field_4; /*0x6595dd*/
  v10[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6595e5*/
  v10[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6595e9*/
  result = ClipLine(v9, v8, v10); /*0x6595f6*/
  if ( result ) /*0x6595fd*/
  {
    v6 = (char *)this->? - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
    v7 = ZCoordToScreenY(a3[2]); /*0x659612*/
    return (*(char (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, char *, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65963f*/
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



// ==== 0x00659650  ObjectClass::RenderProjectileTrail  this=ObjectClass  sig=csp ====
bool __thiscall RenderProjectileTrail(ObjectClass *this)
{
  double v1; // st7
  int owningHouseIndex; // ebp
  int *v4; // eax
  _BYTE *vtable1; // ecx
  int v7; // edx
  ObjectClass **v8; // eax
  TagClass *v9; // edx
  BombClass *v10; // edi
  int *v11; // eax
  int v13; // eax
  int v14; // ecx
  int customSound; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int fallRate; // edx
  __int64 v22; // rax
  int v23; // ebp
  int v24; // edi
  int v25; // eax
  int v27; // eax
  int v28; // edi
  int v30; // edx
  int v31; // eax
  double v32; // [esp+8h] [ebp-40h]
  double v33; // [esp+8h] [ebp-40h]
  int v34; // [esp+20h] [ebp-28h]
  int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+20h] [ebp-28h]
  int v37[2]; // [esp+24h] [ebp-24h] BYREF
  int v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h]
  int v41[4]; // [esp+38h] [ebp-10h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  owningHouseIndex = (int)&savedregs; /*0x659651*/
  _ESI = this; /*0x65965c*/
  if ( !LOBYTE(this->?) ) /*0x65965f*/
  {
    LOBYTE(this->?) = 1; /*0x659666*/
    v4 = Coord::Subtract( /*0x65968c*/
           (Coord *)&v38,
           (int)this->nextObject - this->occupant,
           (int)this->attachedTag - this->owningHouseIndex,
           (int)this->attachedBomb - this->fallRate);
    _ESI->customSound_controller[3] = *v4; /*0x659698*/
    _ESI->customSound_controller[4] = v4[1]; /*0x65969d*/
    _ESI->customSound = v4[2]; /*0x6596a3*/
    v34 = _ESI->customSound * _ESI->customSound /*0x6596c1*/
        + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
        + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
    __asm /*0x6596c5*/
    {
      fild [esp+40h+var_28]
      fstp [esp+40h+var_40]; double
    }
    Math::Sqrt(v32); /*0x6596cc*/
    __asm { fstp qword ptr [esi+68h] } /*0x6596d1*/
    *(double *)&_ESI->bombVisible = _RT1; /*0x6596d1*/
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x6596d7*/
  {
    vtable1 = _ESI->?; /*0x6596e2*/
    if ( vtable1 ) /*0x6596e7*/
    {
      v7 = *(_DWORD *)vtable1; /*0x6596f0*/
      if ( (vtable1[20] & 2) != 0 ) /*0x6596f4*/
        v8 = (ObjectClass **)(*(int (__stdcall **)(int *))(v7 + 164))(&v38); /*0x659705*/
      else
        v8 = (ObjectClass **)(*(int (__stdcall **)(int *))(v7 + 88))(&v38); /*0x6596fb*/
      v9 = (TagClass *)v8[1]; /*0x65970d*/
      v10 = (BombClass *)v8[2]; /*0x659710*/
      _ESI->nextObject = *v8; /*0x659718*/
      _ESI->attachedTag = v9; /*0x65971a*/
      _ESI->attachedBomb = v10; /*0x65971d*/
      owningHouseIndex = _ESI->owningHouseIndex; /*0x659729*/
      v11 = Coord::Subtract( /*0x659741*/
              (Coord *)&v38,
              (int)_ESI->nextObject - _ESI->occupant,
              (int)_ESI->attachedTag - owningHouseIndex,
              (int)_ESI->attachedBomb - _ESI->fallRate);
      _ESI->customSound_controller[3] = *v11; /*0x65974d*/
      _ESI->customSound_controller[4] = v11[1]; /*0x659752*/
      _ESI->customSound = v11[2]; /*0x659758*/
      v35 = _ESI->customSound * _ESI->customSound /*0x659776*/
          + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
          + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
      __asm /*0x65977a*/
      {
        fild [esp+40h+var_28]
        fstp [esp+40h+var_40]; double
      }
      Math::Sqrt(v33); /*0x659781*/
      __asm { fstp qword ptr [esi+68h] } /*0x659786*/
      *(double *)&_ESI->bombVisible = _RT1; /*0x659786*/
    }
  }
  if ( BYTE1(_ESI->?) ) /*0x65978c*/
  {
    __asm /*0x659797*/
    {
      fld qword ptr [esi+68h]
      fdiv qword ptr [esi+18h]
    }
    LOWORD(v13) = Math::RoundToInt(v1); /*0x65979d*/
    v14 = _ESI->customSound_controller[4]; /*0x6597a5*/
    v38 = _ESI->customSound_controller[3]; /*0x6597a8*/
    customSound = _ESI->customSound; /*0x6597ac*/
    v39 = v14; /*0x6597af*/
    *(_DWORD *)&_ESI->onBridge = v13; /*0x6597b8*/
    v40 = customSound; /*0x6597be*/
    Render_Render_65A1B0((ObjectClass *)&v38, v13); /*0x6597c2*/
    __asm /*0x6597c7*/
    {
      fild dword ptr [esi+7Ch]
      fidiv dword ptr [esi+3Ch]
    }
    v16 = v38; /*0x6597cd*/
    v17 = v39; /*0x6597d1*/
    _ESI->parachute = 0; /*0x6597e1*/
    *(_DWORD *)&_ESI->isAliveFlag = v16; /*0x6597eb*/
    v18 = v40; /*0x6597ed*/
    _ESI->lastLayer = v17; /*0x6597f1*/
    *(_DWORD *)&_ESI->isInLogic = v18; /*0x6597f7*/
    _ESI->location[0] = _ESI->occupant; /*0x6597fe*/
    fallRate = _ESI->fallRate; /*0x659803*/
    _ESI->location[1] = _ESI->owningHouseIndex; /*0x659806*/
    _ESI->location[2] = fallRate; /*0x65980c*/
    LOWORD(_ESI[1].?) = _ESI->?; /*0x659818*/
    BYTE2(_ESI[1].?) = BYTE2(_ESI->?); /*0x65981e*/
    __asm /*0x659821*/
    {
      fmul qword ptr [esi+40h]
      fstp qword ptr [esi+80h]
    }
    *(double *)&_ESI->needsRedraw = _RT1; /*0x659824*/
    __asm /*0x65982a*/
    {
      fld ds:dbl_7E2800
      fcomp qword ptr [esi+68h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x659838*/
    {
      do /*0x659962*/
      {
        v22 = ProjectileTrail::ComputeRenderData((ProjectileTrail *)_ESI); /*0x659840*/
        LOWORD(owningHouseIndex) = (unsigned __int8)(BYTE2(_ESI[1].?) >> g_BitMask_Red); /*0x65985f*/
        WORD2(v22) = (unsigned __int8)(BYTE1(_ESI[1].?) >> g_BitMask_Blue); /*0x659876*/
        HIDWORD(v22) <<= g_BitMask_Green; /*0x65987e*/
        v23 = HIDWORD(v22) | (owningHouseIndex << g_BitShift_Blue); /*0x65988e*/
        WORD2(v22) = (unsigned __int8)(LOBYTE(_ESI[1].?) >> g_BitShift_Green_0); /*0x659893*/
        owningHouseIndex = (HIDWORD(v22) << g_BitShift_Red) | v23; /*0x6598a3*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, _ESI->location, &v38); /*0x6598a5*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_ESI->lineTrailer, v37); /*0x6598bc*/
        v41[0] = DSurface_ViewBounds.field_0; /*0x6598d2*/
        v41[1] = (int)DSurface_ViewBounds.field_4; /*0x6598dc*/
        v41[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6598e4*/
        v41[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6598e8*/
        if ( (unsigned __int8)ClipLine(&v38, v37, v41) ) /*0x6598f5*/
        {
          v24 = (int)_ESI->? - ZCoordToScreenY(_ESI->location[2]) - 2; /*0x659911*/
          v25 = ZCoordToScreenY((int)_ESI[1].?); /*0x659914*/
          (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65993f*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v38,
            v37,
            (__int16)owningHouseIndex,
            v24,
            -2 - v25,
            0);
        }
        v36 = (int)&_ESI->parachute->AnimClass_field_0x0 + 1; /*0x659949*/
        _ESI->parachute = (AnimClass *)v36; /*0x65994d*/
        __asm /*0x659953*/
        {
          fild [esp+38h+var_28]
          fmul qword ptr [esi+18h]
          fcomp qword ptr [esi+68h]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x659962*/
    }
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x659968*/
  {
    v27 = _ESI->customSound_controller[1]; /*0x65996f*/
    v28 = v27 + _ESI->visibilityFlags; /*0x659975*/
    _ESI->visibilityFlags = v28; /*0x659979*/
    if ( v28 <= 0 || v28 >= _ESI->ambientSoundController[0] ) /*0x659983*/
    {
      _ESI->customSound_controller[1] = -v27; /*0x659987*/
      if ( _ESI->visibilityFlags < 0 ) /*0x65998f*/
        _ESI->visibilityFlags = 0; /*0x659991*/
    }
    return 0; /*0x659998*/
  }
  else
  {
    v30 = _ESI->ambientSoundController[0]; /*0x6599a5*/
    v31 = _ESI->visibilityFlags + 1; /*0x6599ab*/
    _ESI->visibilityFlags = v31; /*0x6599ad*/
    return v31 >= v30; /*0x6599b6*/
  }
}



// ==== 0x006599C0  ObjectClass::method_6599C0  this=ObjectClass  sig=csp ====
void __thiscall sub_6599C0(ObjectClass *this)
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



// ==== 0x00659A30  ObjectClass::method_659A30  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_659A30(ObjectClass *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int customSound; // ebp
  double v6; // st7
  void **p_NeedsSaveOrLink; // edx
  double *v8; // esi
  __int16 result; // ax
  char v10; // cl

  LOWORD(v2) = Math::RoundToInt(*(double *)&this->bombVisible / *(double *)&this->?); /*0x659a3c*/
  v3 = this->customSound_controller[3]; /*0x659a41*/
  v4 = this->customSound_controller[4]; /*0x659a44*/
  customSound = this->customSound; /*0x659a47*/
  *(_DWORD *)&this->onBridge = v2; /*0x659a4e*/
  if ( v2 ) /*0x659a54*/
  {
    v3 /= v2; /*0x659a5b*/
    v4 /= v2; /*0x659a62*/
    customSound /= v2; /*0x659a69*/
  }
  v6 = (double)this->visibilityFlags / (double)this->ambientSoundController[0]; /*0x659a6e*/
  *(_DWORD *)&this->isAliveFlag = v3; /*0x659a80*/
  this->lastLayer = v4; /*0x659a83*/
  *(_DWORD *)&this->isInLogic = customSound; /*0x659a86*/
  this->location[0] = this->occupant; /*0x659a8b*/
  this->location[1] = this->owningHouseIndex; /*0x659a90*/
  this->location[2] = this->fallRate; /*0x659a96*/
  p_NeedsSaveOrLink = &this->?; /*0x659a99*/
  v8 = (double *)((char *)this + 192); /*0x659a9c*/
  result = *(_WORD *)p_NeedsSaveOrLink; /*0x659aa2*/
  v10 = *((_BYTE *)p_NeedsSaveOrLink + 2); /*0x659aa5*/
  *(v8 - 8) = v6 * *(v8 - 16); /*0x659aab*/
  *(_WORD *)v8 = result; /*0x659aae*/
  *((_BYTE *)v8 + 2) = v10; /*0x659ab1*/
  return result; /*0x659ab4*/
}



// ==== 0x00659AC0  ProjectileTrail::ComputeRenderData  this=ProjectileTrail  sig=csp ====
__int64 __thiscall ProjectileTrail::ComputeRenderData(ProjectileTrail *this)
{
  double v1; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  ProjectileTrail v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  ProjectileTrail v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  int v18; // kr00_4
  double v19; // [esp+0h] [ebp-28h]
  double v20; // [esp+0h] [ebp-28h]
  double v21; // [esp+10h] [ebp-18h]
  double v22; // [esp+10h] [ebp-18h]

  _ESI = this; /*0x659aca*/
  __asm /*0x659acd*/
  {
    fld qword ptr [esi+68h]
    fcomp ds:dbl_7F04C0
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x659adb*/
    __asm { fld ds:dbl_7F04C0 } /*0x659add*/
  else
    __asm { fld qword ptr [esi+68h] } /*0x659ae5*/
  __asm { fadd st, st } /*0x659ae8*/
  __asm
  {
    fst [esp+28h+var_10]
    fild dword ptr [esi+88h]
    fstp [esp+28h+var_18]
    fild dword ptr [esi+8Ch]
    fdivr [esp+28h+var_18]
    fmulp st(1), st
    fld dbl_839530
    fmul st, st(1)
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::SinCos(v19); /*0x659b14*/
  __asm /*0x659b19*/
  {
    fmul qword ptr [esi+80h]
    fld [esp+28h+var_18]
  }
  LOWORD(v4) = Math::RoundToInt(v1); /*0x659b23*/
  v5 = v4 * *(_DWORD *)&_ESI[37] + *(_DWORD *)&_ESI[10]; /*0x659b4b*/
  v6 = v4 * *(_DWORD *)&_ESI[38] + *(_DWORD *)&_ESI[11]; /*0x659b50*/
  _ESI[39] = (ProjectileTrail)(v4 * *(_DWORD *)&_ESI[36] + *(_DWORD *)&_ESI[9]); /*0x659b58*/
  _ESI[40] = (ProjectileTrail)v5; /*0x659b5e*/
  _ESI[41] = (ProjectileTrail)v6; /*0x659b61*/
  __asm /*0x659b64*/
  {
    fild dword ptr [esi+0A4h]
    fadd st, st(1)
  }
  *(_WORD *)v7.__tail_0 = Math::RoundToInt(v1); /*0x659b6c*/
  _ESI[41] = v7; /*0x659b71*/
  __asm { fstp st } /*0x659b7e*/
  LODWORD(v21) = *(_DWORD *)&_ESI[34] + 1; /*0x659b80*/
  __asm /*0x659b84*/
  {
    fild dword ptr [esp+28h+var_18]
    fstp [esp+28h+var_18]
    fild dword ptr [esi+8Ch]
    fdivr [esp+28h+var_18]
    fmul [esp+28h+var_10]
    fld dbl_839530
    fmul st, st(1)
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::SinCos(v20); /*0x659ba7*/
  __asm /*0x659bac*/
  {
    fmul qword ptr [esi+80h]
    fld [esp+28h+var_18]
  }
  LOWORD(v8) = Math::RoundToInt(v1); /*0x659bb9*/
  v9 = v8 * *(_DWORD *)&_ESI[38]; /*0x659bd6*/
  v10 = *(_DWORD *)&_ESI[9] + v8 * *(_DWORD *)&_ESI[36]; /*0x659bdc*/
  v11 = v8 * *(_DWORD *)&_ESI[37] + *(_DWORD *)&_ESI[10]; /*0x659be1*/
  v12 = v9 + *(_DWORD *)&_ESI[11]; /*0x659be6*/
  _ESI[42] = (ProjectileTrail)v10; /*0x659bee*/
  _ESI[43] = (ProjectileTrail)v11; /*0x659bf4*/
  _ESI[44] = (ProjectileTrail)v12; /*0x659bf7*/
  __asm /*0x659bfa*/
  {
    fild dword ptr [esi+0B0h]
    fadd st, st(1)
  }
  *(_WORD *)v13.__tail_0 = Math::RoundToInt(v1); /*0x659c02*/
  _ESI[44] = v13; /*0x659c07*/
  LOWORD(v14) = Math::RoundToInt(v1); /*0x659c0d*/
  LODWORD(v22) = abs32(v14); /*0x659c19*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x659c1f*/
  v15 = (unsigned __int8)_ESI[8].__tail_0[0]; /*0x659c25*/
  __asm /*0x659c28*/
  {
    fmul ds:dbl_7E1738
    fdiv qword ptr [esi+40h]
    fadd ds:dbl_7E1738
    fst qword ptr [esi+0B8h]
  }
  *(double *)_ESI[46].__tail_0 = _RT1; /*0x659c37*/
  LODWORD(v22) = (unsigned __int8)_ESI[8].__tail_0[1]; /*0x659c43*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x659c47*/
  LODWORD(v22) = (unsigned __int8)_ESI[8].__tail_0[2]; /*0x659c4b*/
  __asm /*0x659c4f*/
  {
    fmul st, st(1)
    fstp [esp+20h+var_10]
    fild dword ptr [esp+20h+var_18]
  }
  LODWORD(v22) = v15; /*0x659c59*/
  __asm /*0x659c5d*/
  {
    fmul st, st(1)
    fstp [esp+20h+var_8]
    fild dword ptr [esp+20h+var_18]
    fmul st, st(1)
  }
  __asm
  {
    fstp st
    fld [esp+20h+var_10]
  }
  _ESI[48].__tail_0[0] = Math::RoundToInt(v1); /*0x659c74*/
  __asm { fld [esp+20h+var_8] } /*0x659c7f*/
  _ESI[48].__tail_0[1] = Math::RoundToInt(v1); /*0x659c83*/
  v18 = Math::RoundToInt(v1); /*0x659c89*/
  WORD2(result) = HIWORD(v18); /*0x659c89*/
  LOWORD(result) = v18; /*0x659c89*/
  _ESI[48].__tail_0[2] = v18; /*0x659c8e*/
  return result; /*0x659c94*/
}



// ==== 0x00659CA0  ObjectClass::Weapon_Update  this=ObjectClass  sig=csp ====
bool __usercall Weapon_Update@<al>(ObjectClass *this, int a2@<ebx>)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  __int64 updated; // rax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14[2]; // [esp+8h] [ebp-20h] BYREF
  int v15[2]; // [esp+10h] [ebp-18h] BYREF
  int v16[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = v2; /*0x659ca5*/
  if ( !*(_BYTE *)(v2 + 8) ) /*0x659ca7*/
  {
    *(_BYTE *)(v2 + 8) = 1; /*0x659cae*/
    Weapon_Update_Update((ObjectClass *)v2); /*0x659cb2*/
  }
  if ( *(_BYTE *)(v3 + 9) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0((ObjectClass *)v3); /*0x659cc4*/
    v4 = *(_DWORD *)(v3 + 140); /*0x659cc9*/
    *(_DWORD *)(v3 + 136) = 0; /*0x659ccf*/
    if ( v4 > 0 ) /*0x659cdb*/
    {
      do /*0x659e01*/
      {
        updated = Weapon_Update_Update_659FF0(v3); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(v3 + 194) >> g_BitMask_Red); /*0x659d13*/
        LOWORD(updated) = (unsigned __int8)(*(_BYTE *)(v3 + 193) >> g_BitMask_Blue); /*0x659d28*/
        LODWORD(updated) = (_DWORD)updated << g_BitMask_Green; /*0x659d30*/
        v6 = updated | (a2 << g_BitShift_Blue); /*0x659d40*/
        LOWORD(updated) = (unsigned __int8)(*(_BYTE *)(v3 + 192) >> g_BitShift_Green_0); /*0x659d45*/
        a2 = ((_DWORD)updated << g_BitShift_Red) | v6; /*0x659d55*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)(v3 + 156), v15); /*0x659d57*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)(v3 + 168), v14); /*0x659d68*/
        v16[1] = (int)DSurface_ViewBounds.field_4; /*0x659d7e*/
        v16[0] = DSurface_ViewBounds.field_0; /*0x659d86*/
        v16[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x659d8f*/
        v16[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x659d9c*/
        if ( (unsigned __int8)ClipLine(v15, v14, v16) ) /*0x659da0*/
        {
          v7 = *(_DWORD *)(v3 + 12) - ZCoordToScreenY(*(_DWORD *)(v3 + 164)) - 2; /*0x659db9*/
          v8 = ZCoordToScreenY(*(_DWORD *)(v3 + 176)); /*0x659dbc*/
          (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x659de7*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            v15,
            v14,
            (__int16)a2,
            v7,
            -2 - v8,
            0);
        }
        v9 = *(_DWORD *)(v3 + 140); /*0x659df0*/
        v10 = *(_DWORD *)(v3 + 136) + 1; /*0x659df7*/
        *(_DWORD *)(v3 + 136) = v10; /*0x659df9*/
      }
      while ( v10 < v9 ); /*0x659e01*/
    }
  }
  v11 = *(_DWORD *)(v3 + 60); /*0x659e0c*/
  v12 = *(_DWORD *)(v3 + 124) + 1; /*0x659e12*/
  *(_DWORD *)(v3 + 124) = v12; /*0x659e14*/
  return v12 >= v11; /*0x659e19*/
}



// ==== 0x00659E30  ObjectClass::Weapon_Update_Update  this=ObjectClass  sig=csp ====
int __thiscall Weapon_Update_Update(ObjectClass *this)
{
  double v1; // st7
  int occupant; // ebp
  char *v4; // edx
  int *v5; // edi
  char *v6; // ecx
  int result; // eax
  int v9; // edi
  int v10; // ebx
  int customSound; // ebp
  int v12; // ecx
  int *p_estimatedHealth; // esi
  double v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-4h]

  _ESI = this; /*0x659e34*/
  occupant = this->occupant; /*0x659e46*/
  v4 = (char *)this->attachedBomb - this->fallRate; /*0x659e49*/
  v5 = &this->customSound_controller[3]; /*0x659e4b*/
  v6 = (char *)this->attachedTag - this->owningHouseIndex; /*0x659e4e*/
  _ESI->customSound_controller[3] = (int)_ESI->nextObject - occupant; /*0x659e57*/
  _ESI->customSound_controller[4] = (int)v6; /*0x659e59*/
  _ESI->customSound = (int)v4; /*0x659e5c*/
  v15 = _ESI->customSound * _ESI->customSound /*0x659e7a*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659e7e*/
  {
    fild [esp+1Ch+var_4]
    fstp [esp+1Ch+var_1C]; double
  }
  Math::Sqrt(v14); /*0x659e85*/
  __asm { fst qword ptr [esi+68h] } /*0x659e8a*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659e8a*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659e8d*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659e93*/
  v9 = *v5; /*0x659e98*/
  v10 = _ESI->customSound_controller[4]; /*0x659e9a*/
  customSound = _ESI->customSound; /*0x659e9d*/
  v12 = result; /*0x659ea0*/
  *(_DWORD *)&_ESI->onBridge = result; /*0x659ea4*/
  if ( result ) /*0x659eaa*/
  {
    v9 /= result; /*0x659eb1*/
    v10 /= result; /*0x659eb8*/
    result = customSound / result; /*0x659ebd*/
    customSound /= v12; /*0x659ebf*/
  }
  p_estimatedHealth = &_ESI->estimatedHealth; /*0x659ec1*/
  *p_estimatedHealth = v9; /*0x659ec4*/
  p_estimatedHealth[1] = v10; /*0x659ec7*/
  p_estimatedHealth[2] = customSound; /*0x659eca*/
  return result; /*0x659ec6*/
}



// ==== 0x00659EE0  ObjectClass::Weapon_Update_Update_659EE0  this=ObjectClass  sig=csp ====
int __thiscall Weapon_Update_Update_659EE0(ObjectClass *this)
{
  double v1; // st7
  int v3; // edi
  int visibilityFlags; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v11; // edi
  int v12; // ebx
  int customSound; // ebp
  int v14; // ecx
  char *p_isAliveFlag; // esi
  double v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+1Ch] [ebp-4h]

  _ESI = this; /*0x659ee6*/
  v3 = this->ambientSoundController[0]; /*0x659ee9*/
  visibilityFlags = this->visibilityFlags; /*0x659eec*/
  v19 = v3; /*0x659ef1*/
  if ( visibilityFlags >= v3 / 2 ) /*0x659eff*/
  {
    v18 = v3 - 2 * visibilityFlags % v3; /*0x659f10*/
    __asm { fild [esp+18h+var_8] } /*0x659f14*/
  }
  else
  {
    v17 = 2 * visibilityFlags; /*0x659f01*/
    __asm { fild [esp+18h+var_8] } /*0x659f05*/
  }
  __asm { fild [esp+18h+var_4] } /*0x659f18*/
  __asm { fdivr st, st(1) }
  v20 = visibilityFlags * _ESI->customSound_controller[0]; /*0x659f24*/
  __asm /*0x659f28*/
  {
    fmul qword ptr [esi+40h]
    fstp qword ptr [esi+80h]
  }
  *(double *)&_ESI->needsRedraw = _RT1; /*0x659f2b*/
  __asm /*0x659f31*/
  {
    fstp st
    fild [esp+18h+var_4]
    fmul qword ptr [esi+48h]
  }
  LOWORD(v6) = Math::RoundToInt(v1); /*0x659f3a*/
  v7 = v6 * *(_DWORD *)&_ESI->isOnMap + _ESI->customSound_controller[4]; /*0x659f5f*/
  v8 = v6 * _ESI->spawnStatus + _ESI->customSound; /*0x659f64*/
  _ESI->customSound_controller[3] += v6 * _ESI->estimatedHealth; /*0x659f68*/
  _ESI->customSound_controller[4] = v7; /*0x659f6a*/
  _ESI->customSound = v8; /*0x659f6d*/
  v21 = _ESI->customSound * _ESI->customSound /*0x659f8b*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659f8f*/
  {
    fild [esp+20h+var_4]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v16); /*0x659f96*/
  __asm { fst qword ptr [esi+68h] } /*0x659f9b*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659f9b*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659f9e*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659fa4*/
  v11 = _ESI->customSound_controller[3]; /*0x659fa9*/
  v12 = _ESI->customSound_controller[4]; /*0x659fab*/
  customSound = _ESI->customSound; /*0x659fae*/
  v14 = result; /*0x659fb1*/
  *(_DWORD *)&_ESI->onBridge = result; /*0x659fb5*/
  if ( result ) /*0x659fbb*/
  {
    v11 /= result; /*0x659fc2*/
    v12 /= result; /*0x659fc9*/
    result = customSound / result; /*0x659fce*/
    customSound /= v14; /*0x659fd0*/
  }
  p_isAliveFlag = &_ESI->isAliveFlag; /*0x659fd2*/
  *(_DWORD *)p_isAliveFlag = v11; /*0x659fd8*/
  *((_DWORD *)p_isAliveFlag + 1) = v12; /*0x659fdb*/
  *((_DWORD *)p_isAliveFlag + 2) = customSound; /*0x659fde*/
  return result; /*0x659fda*/
}



// ==== 0x00659FF0  ObjectClass::Weapon_Update_Update_659FF0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_659FF0(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  __int64 result; // rax
  double v12; // [esp+18h] [ebp-10h]
  double v13; // [esp+20h] [ebp-8h]

  v2 = Math::SinCos(dbl_839530 * ((double)*(int *)(this + 136) / (double)*(int *)(this + 140) * 180.0)) /*0x65a02c*/
     * *(double *)(this + 128);
  v3 = Math::RoundToInt(v2); /*0x65a036*/
  v4 = v3 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x65a05e*/
  v5 = v3 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x65a063*/
  *(_DWORD *)(this + 156) = v3 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x65a06b*/
  *(_DWORD *)(this + 160) = v4; /*0x65a071*/
  *(_DWORD *)(this + 164) = v5; /*0x65a074*/
  *(_DWORD *)(this + 164) = Math::RoundToInt(v2); /*0x65a084*/
  v6 = Math::SinCos(dbl_839530 * ((double)(*(_DWORD *)(this + 136) + 1) / (double)*(int *)(this + 140) * 180.0)) /*0x65a0c1*/
     * *(double *)(this + 128);
  v7 = Math::RoundToInt(v6); /*0x65a0ce*/
  v8 = v7 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x65a0f6*/
  v9 = v7 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x65a0fb*/
  *(_DWORD *)(this + 168) = v7 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x65a103*/
  *(_DWORD *)(this + 172) = v8; /*0x65a109*/
  *(_DWORD *)(this + 176) = v9; /*0x65a10c*/
  *(_DWORD *)(this + 176) = Math::RoundToInt(v6); /*0x65a11c*/
  v10 = (double)(int)abs32(Math::RoundToInt(v6)) * 0.5 / *(double *)(this + 64) + 0.5; /*0x65a146*/
  *(double *)(this + 184) = v10; /*0x65a14c*/
  v12 = (double)*(unsigned __int8 *)(this + 33) * v10; /*0x65a166*/
  v13 = (double)*(unsigned __int8 *)(this + 34) * v10; /*0x65a174*/
  *(_BYTE *)(this + 192) = Math::RoundToInt(v10); /*0x65a189*/
  *(_BYTE *)(this + 193) = Math::RoundToInt(v12); /*0x65a198*/
  result = Math::RoundToInt(v13); /*0x65a19e*/
  *(_BYTE *)(this + 194) = result; /*0x65a1a3*/
  return result; /*0x65a1a9*/
}



// ==== 0x0065A1B0  ObjectClass::Render_Render_65A1B0  this=ObjectClass  sig=csp ====
int *__thiscall Render_Render_65A1B0(ObjectClass *this, int a2)
{
  if ( a2 ) /*0x65a1b7*/
  {
    this->AbstractClass = (void *)((int)this->AbstractClass / a2); /*0x65a1be*/
    this->? = (void *)((int)this->? / a2); /*0x65a1c6*/
    this->? = (void *)((int)this->? / a2); /*0x65a1cf*/
  }
  return (int *)this; /*0x65a1d4*/
}



// ==== 0x0065A1E0  _DynamicVectorClass_PAVRadBeam::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::Destroy(_DynamicVectorClass_PAVRadBeam *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65a1e6*/
  this->m_10 = 0; /*0x65a1e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x65a1f0*/
  {
    __3_YAXPAX_Z(v2); /*0x65a1f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a1fe*/
  }
  BYTE1(this->m_C) = 0; /*0x65a201*/
  this->m_8 = 0; /*0x65a204*/
}



// ==== 0x0065A210  _DynamicVectorClass_PAVRadBeam::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::GetItemIndex(_DynamicVectorClass_PAVRadBeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65a210*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65a225*/
  else
    return 0; /*0x65a217*/
}



// ==== 0x0065A230  _VectorClass_PAVRadBeam::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::Get(_VectorClass_PAVRadBeam *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x65a23a*/
}



// ==== 0x0065A240  _VectorClass_PAVRadBeam::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::Add(_VectorClass_PAVRadBeam *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x65a242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x65a24d*/
  {
    v3 = 0; /*0x65a24f*/
    if ( m_8 <= 0 ) /*0x65a253*/
      return 1; /*0x65a273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x65a255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65a25b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65a264*/
    {
      ++v3; /*0x65a266*/
      ++v4; /*0x65a267*/
      if ( v3 >= m_8 ) /*0x65a26c*/
        return 1; /*0x65a26c*/
    }
  }
  return 0; /*0x65a26e*/
}



// ==== 0x0065A280  _VectorClass_PAVRadBeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::Release(_VectorClass_PAVRadBeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65a28c*/
  {
    LOBYTE(this->m_C) = 0; /*0x65a296*/
    if ( a3 ) /*0x65a29c*/
      v4 = a3; /*0x65a2b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65a2ae*/
    LOBYTE(this->m_C) = 1; /*0x65a2b6*/
    if ( v4 ) /*0x65a2ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x65a2c5*/
      {
        m_8 = this->m_8; /*0x65a2cc*/
        if ( a2 < m_8 ) /*0x65a2d1*/
          m_8 = a2; /*0x65a2d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65a2d9*/
          ++i; /*0x65a2de*/
        if ( BYTE1(this->m_C) ) /*0x65a2eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a2f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x65a2fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x65a307*/
      this->m_8 = a2; /*0x65a30f*/
      BYTE1(this->m_C) = a3 == 0; /*0x65a312*/
      return 1; /*0x65a318*/
    }
    else
    {
      return 0; /*0x65a2bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadBeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65a322*/
    return 1; /*0x65a328*/
  }
}



// ==== 0x0065A330  _VectorClass_PAVRadBeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::Remove(_VectorClass_PAVRadBeam *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x65a33d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a343*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a34b*/
  }
  BYTE1(this->m_C) = 0; /*0x65a34e*/
  this->m_8 = 0; /*0x65a351*/
}



// ==== 0x0065A360  _VectorClass_PAVRadBeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::GetSize(_VectorClass_PAVRadBeam *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x65a360*/
    return 0; /*0x65a368*/
  m_8 = this->m_8; /*0x65a36e*/
  result = 0; /*0x65a371*/
  if ( m_8 <= 0 ) /*0x65a375*/
    return -1; /*0x65a38c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65a37b*/
  {
    if ( ++result >= m_8 ) /*0x65a38a*/
      return -1; /*0x65a38a*/
  }
  return result; /*0x65a36a*/
}



// ==== 0x0065A3A0  _VectorClass_PAVRadBeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::GetCapacity(_VectorClass_PAVRadBeam *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65a3a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65a3b5*/
  else
    return 0; /*0x65a3a7*/
}



// ==== 0x0065A3C0  _DynamicVectorClass_PAVRadBeam::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::SetCapacity(_DynamicVectorClass_PAVRadBeam *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65a3cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x65a3d2*/
    if ( a3 ) /*0x65a3d8*/
      v4 = a3; /*0x65a3ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65a3ea*/
    LOBYTE(this->m_C) = 1; /*0x65a3f2*/
    if ( !v4 ) /*0x65a3f6*/
      return 0; /*0x65a46a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x65a3f8*/
    {
      m_8 = this->m_8; /*0x65a3ff*/
      if ( a2 < m_8 ) /*0x65a404*/
        m_8 = a2; /*0x65a406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65a40c*/
        ++i; /*0x65a411*/
      if ( BYTE1(this->m_C) ) /*0x65a41e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65a429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x65a431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x65a43a*/
    this->m_8 = a2; /*0x65a442*/
    BYTE1(this->m_C) = a3 == 0; /*0x65a445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVRadBeam *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65a44e*/
  }
  v7 = this->m_8; /*0x65a451*/
  if ( v7 < this->m_10 ) /*0x65a459*/
    this->m_10 = v7; /*0x65a45b*/
  return 1; /*0x65a45e*/
}



// ==== 0x0065A470  _DynamicVectorClass_PAVRadBeam::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::FindItemIndex(_DynamicVectorClass_PAVRadBeam *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x65a470*/
  result = 0; /*0x65a473*/
  if ( m_10 <= 0 ) /*0x65a478*/
    return -1; /*0x65a48f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65a47e*/
  {
    if ( ++result >= m_10 ) /*0x65a48d*/
      return -1; /*0x65a48d*/
  }
  return result; /*0x65a492*/
}



// ==== 0x0065A4A0  _VectorClass_PAVRadBeam::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadBeam::QueryInterface(_VectorClass_PAVRadBeam *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65a4a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadBeam *>::`vftable'; /*0x65a4a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65a4b0*/
  {
    __3_YAXPAX_Z(v3); /*0x65a4b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a4c0*/
  }
  BYTE1(this->m_C) = 0; /*0x65a4cb*/
  this->m_8 = 0; /*0x65a4d1*/
  if ( (a2 & 1) != 0 ) /*0x65a4d8*/
    __3_YAXPAX_Z(this); /*0x65a4db*/
  return this->__pad_0; /*0x65a4e5*/
}



// ==== 0x0065A4F0  _DynamicVectorClass_PAVRadBeam::Constructor_VectorClass_RadBeam___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(
        _DynamicVectorClass_PAVRadBeam *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65a4f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadBeam *>::`vftable'; /*0x65a4f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65a500*/
  {
    __3_YAXPAX_Z(v3); /*0x65a508*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65a510*/
  }
  BYTE1(this->m_C) = 0; /*0x65a51b*/
  this->m_8 = 0; /*0x65a521*/
  if ( (a2 & 1) != 0 ) /*0x65a528*/
    __3_YAXPAX_Z(this); /*0x65a52b*/
  return this->__pad_0; /*0x65a535*/
}



// ==== 0x0065A540  sub_65A540  this=-  sig=ida-proto ====
void sub_65A540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65a54c*/
  dbl_B04AF8 = Math::Sqrt(v0 + v0); /*0x65a55e*/
}



// ==== 0x0065A570  sub_65A570  this=-  sig=ida-proto ====
void sub_65A570()
{
  dbl_B04B48 = dbl_B04AF8 / 60.0; /*0x65a57c*/
}



// ==== 0x0065A590  sub_65A590  this=-  sig=ida-proto ====
void sub_65A590()
{
  dbl_B04B30 = 1.0 / dbl_B04B48; /*0x65a59c*/
}



// ==== 0x0065A5B0  sub_65A5B0  this=-  sig=ida-proto ====
void sub_65A5B0()
{
  dbl_B04B28 = 0.0174532925199433 * 45.0; /*0x65a5bc*/
}



// ==== 0x0065A5D0  sub_65A5D0  this=-  sig=ida-proto ====
void sub_65A5D0()
{
  dbl_B04B00 = 0.0174532925199433 * 60.0; /*0x65a5dc*/
}



// ==== 0x0065A5F0  sub_65A5F0  this=-  sig=ida-proto ====
void sub_65A5F0()
{
  dbl_B04AD8 = 0.0174532925199433 * 90.0; /*0x65a5fc*/
}



// ==== 0x0065A610  sub_65A610  this=-  sig=ida-proto ====
__int64 sub_65A610()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04AD8 - dbl_B04B00); /*0x65a622*/
  result = Math::RoundToInt(v0 * dbl_B04AF8 * 0.5); /*0x65a636*/
  dword_B04B50 = result; /*0x65a63b*/
  return result; /*0x65a640*/
}



// ==== 0x0065A650  sub_65A650  this=-  sig=ida-proto ====
void sub_65A650()
{
  dbl_B04B08 = Math::ArcTan((double)dword_B04B50 * 0.00390625); /*0x65a667*/
}



// ==== 0x0065A680  sub_65A680  this=-  sig=ida-proto ====
void sub_65A680()
{
  dbl_B04B20 = Math::ArcTan((double)(2 * dword_B04B50) / dbl_B04AF8); /*0x65a6a2*/
}



// ==== 0x0065A6B0  sub_65A6B0  this=-  sig=ida-proto ====
__int64 sub_65A6B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04B50) + 0.5); /*0x65a6cb*/
  dword_B04B44 = result; /*0x65a6d0*/
  return result; /*0x65a6d6*/
}



// ==== 0x0065A6E0  sub_65A6E0  this=-  sig=ida-proto ====
int sub_65A6E0()
{
  word_B04AF0 = 0; /*0x65a6e2*/
  word_B04AF2 = 0; /*0x65a6e8*/
  return 0; /*0x65a6ee*/
}



// ==== 0x0065A6F0  sub_65A6F0  this=-  sig=ida-proto ====
int sub_65A6F0()
{
  dword_B04B10 = 0; /*0x65a6f2*/
  dword_B04B14 = 0; /*0x65a6f7*/
  dword_B04B18 = 0; /*0x65a6fc*/
  return 0; /*0x65a701*/
}



// ==== 0x0065A710  sub_65A710  this=-  sig=ida-proto ====
int sub_65A710()
{
  dword_B04B40 = 0; /*0x65a715*/
  dword_B04B38 = 128; /*0x65a71f*/
  dword_B04B3C = 128; /*0x65a724*/
  return 128; /*0x65a729*/
}



// ==== 0x0065A730  sub_65A730  this=-  sig=ida-proto ====
int sub_65A730()
{
  dword_B04AE0 = 0; /*0x65a732*/
  dword_B04AE4 = 0; /*0x65a737*/
  dword_B04AE8 = 0; /*0x65a73c*/
  dword_B04AEC = 0; /*0x65a741*/
  return 0; /*0x65a746*/
}



// ==== 0x0065A750  RadioClass::Release  this=RadioClass  sig=csp ====
_DWORD *__thiscall RadioClass::Release(RadioClass *this)
{
  RadioClass::Constructor((int)this); /*0x65a753*/
  this->radioLinks[1] = 0; /*0x65a75a*/
  this->radioLinks[2] = 1; /*0x65a764*/
  LOBYTE(this->radioLinks[3]) = 1; /*0x65a76e*/
  BYTE1(this->radioLinks[3]) = 0; /*0x65a775*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65a77c*/
  this->radioLinks[1] = __2_YAPAXI_Z(4u); /*0x65a78b*/
  BYTE1(this->radioLinks[3]) = 1; /*0x65a791*/
  this->MissionClass = &RadioClass::`vftable'; /*0x65a798*/
  this->? = &RadioClass::`vftable'; /*0x65a79e*/
  this->? = &RadioClass::`vftable'; /*0x65a7a5*/
  this->? = &RadioClass::`vftable'; /*0x65a7ac*/
  *(_DWORD *)this->radioLinks[1] = 0; /*0x65a7be*/
  this->lastCommands[0] = 0; /*0x65a7c4*/
  this->lastCommands[1] = 0; /*0x65a7ca*/
  this->lastCommands[2] = 0; /*0x65a7d2*/
  return &this->MissionClass; /*0x65a7d8*/
}



// ==== 0x0065A7E0  RadioClass::Helper_65A7E0  this=RadioClass  sig=csp ====
_DWORD *__thiscall Helper_65A7E0(RadioClass *this, int a2)
{
  ObjectClass::Init((ObjectClass *)this, a2); /*0x65a7e8*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65a7ed*/
  this->MissionClass = &RadioClass::`vftable'; /*0x65a7f7*/
  this->? = &RadioClass::`vftable'; /*0x65a7fd*/
  this->? = &RadioClass::`vftable'; /*0x65a804*/
  this->? = &RadioClass::`vftable'; /*0x65a80b*/
  return &this->MissionClass; /*0x65a814*/
}



// ==== 0x0065A820  ObjectClass::ProcessGroupInput  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ProcessGroupInput(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  _DWORD *i; // eax
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *j; // ecx

  v5 = *(_DWORD *)(this + 212); /*0x65a829*/
  if ( a3 != v5 ) /*0x65a831*/
  {
    v6 = *(_DWORD *)(this + 216); /*0x65a833*/
    *(_DWORD *)(this + 216) = v5; /*0x65a839*/
    *(_DWORD *)(this + 220) = v6; /*0x65a83f*/
    *(_DWORD *)(this + 212) = a3; /*0x65a845*/
  }
  if ( a3 == 3 ) /*0x65a852*/
  {
    v7 = *(_DWORD *)(this + 232); /*0x65a854*/
    v8 = 0; /*0x65a85a*/
    if ( v7 > 0 ) /*0x65a85e*/
    {
      for ( i = *(_DWORD **)(this + 228); a2 != *i; ++i ) /*0x65a860*/
      {
        if ( ++v8 >= v7 ) /*0x65a870*/
          return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a870*/
      }
      ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a890*/
      *(_DWORD *)(*(_DWORD *)(this + 228) + 4 * v8) = 0; /*0x65a8a0*/
      return 1; /*0x65a8aa*/
    }
    return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a883*/
  }
  if ( a3 != 2 || !*(_DWORD *)(this + 108) ) /*0x65a8b2*/
    return ObjectClass::ProcessInputKey((ObjectClass *)this); /*0x65a8b7*/
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(a2 + 540), this) ) /*0x65a8c4*/
    return 10; /*0x65a8d5*/
  if ( this /*0x65a8e9*/
    && (*(_BYTE *)(this + 20) & 1) != 0
    && !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this + 540), a2) )
  {
    return 10; /*0x65a8e9*/
  }
  if ( a2 ) /*0x65a8ff*/
  {
    v11 = *(_DWORD *)(this + 232); /*0x65a901*/
    v12 = 0; /*0x65a907*/
    if ( v11 > 0 ) /*0x65a90b*/
    {
      v13 = *(_DWORD **)(this + 228); /*0x65a90d*/
      while ( *v13 != a2 ) /*0x65a915*/
      {
        ++v12; /*0x65a917*/
        ++v13; /*0x65a918*/
        if ( v12 >= v11 ) /*0x65a91d*/
          goto LABEL_23; /*0x65a91d*/
      }
      if ( v12 != -1 ) /*0x65a94e*/
        return 1; /*0x65a958*/
    }
  }
LABEL_23:
  v14 = *(_DWORD *)(this + 232); /*0x65a91f*/
  v15 = 0; /*0x65a925*/
  if ( v14 <= 0 ) /*0x65a929*/
    return 10; /*0x65a8fa*/
  v16 = *(_DWORD **)(this + 228); /*0x65a92b*/
  for ( j = v16; *j; ++j ) /*0x65a931*/
  {
    if ( ++v15 >= v14 ) /*0x65a93e*/
      return 10; /*0x65a948*/
  }
  v16[v15] = a2; /*0x65a95b*/
  return 1; /*0x65a880*/
}



// ==== 0x0065A970  RadioClass::RemoveElement  this=RadioClass  sig=csp ====
int __thiscall VectorClass::RemoveElement(RadioClass *this)
{
  int *v1; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  void *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int **v14; // ecx
  int v15; // ebp
  void *v16; // eax
  int v17; // [esp+14h] [ebp+4h]
  int v18; // [esp+18h] [ebp+8h]
  int *v19; // [esp+1Ch] [ebp+Ch]

  v1 = v19; /*0x65a974*/
  if ( !v19 ) /*0x65a97c*/
  {
    v1 = *(int **)this->radioLinks[1]; /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  if ( v17 == 3 ) /*0x65a99a*/
  {
    v4 = this->radioLinks[2]; /*0x65a99c*/
    v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        v6 = this->radioLinks[1]; /*0x65a9a8*/
        v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        v8 = (_DWORD *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < this->radioLinks[2] ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
LABEL_9:
    v9 = *v1; /*0x65a9c9*/
    v10 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65a9d3*/
    return (*(int (__thiscall **)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18); /*0x65a9e5*/
  }
  v11 = this->radioLinks[2]; /*0x65a9ed*/
  v12 = -1; /*0x65a9f3*/
  v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)this->radioLinks[1]; /*0x65a9fc*/
    while ( 1 ) /*0x65aa02*/
    {
      if ( v12 == -1 && !*v14 ) /*0x65aa07*/
        v12 = v13; /*0x65aa0c*/
      if ( *v14 == v1 ) /*0x65aa10*/
        return 1; /*0x65aa10*/
      ++v13; /*0x65aa12*/
      ++v14; /*0x65aa13*/
      if ( v13 >= v11 ) /*0x65aa18*/
      {
        if ( v12 != -1 ) /*0x65aa1d*/
          goto LABEL_20; /*0x65aa1d*/
        break; /*0x65aa1d*/
      }
    }
  }
  (*((void (__thiscall **)(RadioClass *, int, _DWORD))this->MissionClass + 158))( /*0x65aa1f*/
    this,
    3,
    *(_DWORD *)this->radioLinks[1]);
  v12 = 0; /*0x65aa34*/
LABEL_20:
  v15 = *v1; /*0x65aa36*/
  v16 = AbstractClass::IsTechnoType((AbstractClass *)this); /*0x65aa41*/
  if ( (*(int (__thiscall **)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(_DWORD *)(this->radioLinks[1] + 4 * v12) = v1; /*0x65aa5a*/
    return 1; /*0x65aa66*/
  }
  return 10; /*0x65a98a*/
}



// ==== 0x0065AA80  RadioClass::ProcessCmd  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ProcessCmd(RadioClass *this)
{
  if ( !this->? ) /*0x65aa83*/
    (*((void (__thiscall **)(RadioClass *, int))this->MissionClass + 160))(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy((ObjectClass *)this); /*0x65aa9e*/
}



// ==== 0x0065AAA0  ObjectClass::ThunkTo636  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo636(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*((int (__thiscall **)(ObjectClass *, int, _BYTE *, int))this->AbstractClass + 159))( /*0x65aab7*/
           this,
           v2,
           &stru_A8EB00.?[76],
           v3);
}



// ==== 0x0065AAC0  RadioClass::ExecuteAction  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ExecuteAction(RadioClass *this, int a2, char a3)
{
  int result; // eax
  int i; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax

  Object::Unlink((ObjectClass *)this); /*0x65aacf*/
  result = this->radioLinks[2]; /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = this->radioLinks[1]; /*0x65aae0*/
    v7 = *(_DWORD *)(v6 + 4 * i); /*0x65aae6*/
    v8 = (_DWORD *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == a2 ) /*0x65aaee*/
    {
      if ( a3 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = this->radioLinks[2]; /*0x65aafa*/
  }
  return result; /*0x65ab05*/
}



// ==== 0x0065AB10  RadioClass::PowerDrainUpdate  this=RadioClass  sig=csp ====
int __thiscall RadioClass::PowerDrainUpdate(RadioClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  AbstractClass::COMStub_13((int)this, a2); /*0x65ab1a*/
  Power::TimerProcess(this->radioLinks[2]); /*0x65ab28*/
  result = this->radioLinks[2]; /*0x65ab2d*/
  for ( i = 0; i < result; ++i ) /*0x65ab37*/
  {
    v5 = *(_DWORD *)(this->radioLinks[1] + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(v6); /*0x65ab53*/
      v7 = *(_DWORD *)(this->radioLinks[1] + 4 * i); /*0x65ab5e*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7); /*0x65ab63*/
      Power::TimerProcess(v8); /*0x65ab69*/
    }
    result = this->radioLinks[2]; /*0x65ab6e*/
  }
  return result; /*0x65ab79*/
}



// ==== 0x0065AB80  RadioClass::LoadState  this=RadioClass  sig=csp ====
int __thiscall RadioClass::LoadState(RadioClass *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int result; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi

  v3 = a2; /*0x65ab81*/
  v4 = a3; /*0x65ab87*/
  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    v6 = v3 + 224; /*0x65ab9a*/
    if ( v3 != -224 ) /*0x65aba2*/
    {
      *(_DWORD *)(v3 + 228) = 0; /*0x65aba4*/
      *(_DWORD *)(v3 + 232) = 0; /*0x65abab*/
      *(_BYTE *)(v3 + 236) = 1; /*0x65abb2*/
      *(_BYTE *)(v3 + 237) = 0; /*0x65abb6*/
      *(_DWORD *)v6 = &VectorClass<TechnoClass *>::`vftable'; /*0x65abba*/
    }
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a3, 4, 0); /*0x65abcc*/
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v3 + 224, a3, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = a3; /*0x65abe3*/
      if ( a3 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking( /*0x65ac29*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(v3 + 228) + 4 * v9++));
          while ( v9 < a3 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x65abf7*/
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *(_DWORD *)(*(_DWORD *)(v3 + 228) + 4 * v7) = a2; /*0x65ac08*/
          v8 = a3; /*0x65ac0b*/
          if ( ++v7 >= a3 ) /*0x65ac12*/
            goto LABEL_8; /*0x65ac12*/
        }
      }
    }
  }
  return result; /*0x65ac37*/
}



// ==== 0x0065AC40  RadioClass::SaveState  this=RadioClass  sig=csp ====
int __stdcall RadioClass::SaveState(RadioClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *a2; /*0x65ac61*/
    a3 = this->radioLinks[2]; /*0x65ac6d*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x65ac71*/
    if ( result >= 0 ) /*0x65ac76*/
    {
      v5 = 0; /*0x65ac7c*/
      if ( a3 <= 0 ) /*0x65ac80*/
      {
        return 0; /*0x65aca3*/
      }
      else
      {
        while ( 1 ) /*0x65ac93*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->radioLinks[1] + 4 * v5, 4, 0); /*0x65ac93*/
          if ( result < 0 ) /*0x65ac98*/
            break; /*0x65ac98*/
          if ( ++v5 >= a3 ) /*0x65aca1*/
            return 0; /*0x65aca1*/
        }
      }
    }
  }
  return result; /*0x65aca5*/
}



// ==== 0x0065ACB0  ObjectClass::ThunkTo159x4  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo159x4(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( **((_DWORD **)this + 57) ) /*0x65acb6*/
    return (*((int (__thiscall **)(ObjectClass *, int, _BYTE *, _DWORD))this->AbstractClass + 159))( /*0x65acc9*/
             this,
             v2,
             &stru_A8EB00.?[76],
             **((_DWORD **)this + 57));
  else
    return 0; /*0x65acd2*/
}



// ==== 0x0065ACE0  RadioClass::UpdateObjects  this=RadioClass  sig=csp ====
int __thiscall TacticalClass::UpdateObjects(RadioClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x65ace4*/
  result = this->radioLinks[2]; /*0x65ace6*/
  if ( result > 0 ) /*0x65acee*/
  {
    do /*0x65ad1c*/
    {
      if ( *(_DWORD *)(this->radioLinks[1] + 4 * v2) ) /*0x65acfb*/
        (*((void (__thiscall **)(RadioClass *, int, _BYTE *, _DWORD))this->MissionClass + 159))( /*0x65ad0d*/
          this,
          v4,
          &stru_A8EB00.?[76],
          *(_DWORD *)(this->radioLinks[1] + 4 * v2));
      result = this->radioLinks[2]; /*0x65ad13*/
      ++v2; /*0x65ad19*/
    }
    while ( v2 < result ); /*0x65ad1c*/
  }
  return result; /*0x65ad1f*/
}



// ==== 0x0065AD30  Team::GetMember  this=IUnknown  sig=csp ====
int __thiscall Team::GetMember(Team *this, int a2)
{
  return *((_DWORD *)this->field_E4 + a2); /*0x65ad3d*/
}



// ==== 0x0065AD40  Array::Get  this=Array  sig=csp ====
int __thiscall Array::Get(Array *this, int a2)
{
  return *((_DWORD *)this->Array_field_0xE4 + a2); /*0x65ad4d*/
}



// ==== 0x0065AD50  Array::Contains  this=Array  sig=csp ====
int __thiscall Array::Contains(Array *this, int a2)
{
  void *Array_field_0xE8; // edx
  int result; // eax
  _DWORD *Array_field_0xE4; // ecx

  if ( a2 && (Array_field_0xE8 = this->Array_field_0xE8, result = 0, (int)Array_field_0xE8 > 0) ) /*0x65ad63*/
  {
    Array_field_0xE4 = this->Array_field_0xE4; /*0x65ad65*/
    while ( *Array_field_0xE4 != a2 ) /*0x65ad6d*/
    {
      ++result; /*0x65ad6f*/
      ++Array_field_0xE4; /*0x65ad70*/
      if ( result >= (int)Array_field_0xE8 ) /*0x65ad75*/
        goto LABEL_6; /*0x65ad75*/
    }
  }
  else
  {
LABEL_6:
    result = -1; /*0x65ad77*/
  }
  LOBYTE(result) = result != -1; /*0x65ad82*/
  return result; /*0x65ad84*/
}



// ==== 0x0065AD90  RadioClass::FindLinkIndex  this=RadioClass  sig=csp ====
int __thiscall RadioClass::FindLinkIndex(RadioClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = this->radioLinks[2]; /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (_DWORD *)this->radioLinks[1]; *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/
}



// ==== 0x0065ADC0  RadioClass::HasFreeLink  this=RadioClass  sig=csp ====
char __thiscall RadioClass::HasFreeLink(RadioClass *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = this->radioLinks[2]; /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (_DWORD *)this->radioLinks[1]; *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/
}



// ==== 0x0065ADF0  Array::ContainsValue  this=Array  sig=csp ====
int __thiscall Array::ContainsValue(Array *this, int a2)
{
  int result; // eax
  void *Array_field_0xE8; // esi
  int v4; // edx
  int *Array_field_0xE4; // ecx

  Array_field_0xE8 = this->Array_field_0xE8; /*0x65adf1*/
  v4 = 0; /*0x65adf7*/
  if ( (int)Array_field_0xE8 <= 0 ) /*0x65adfc*/
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x65ae1a*/
  }
  else
  {
    Array_field_0xE4 = (int *)this->Array_field_0xE4; /*0x65adfe*/
    while ( 1 ) /*0x65ae08*/
    {
      result = *Array_field_0xE4; /*0x65ae08*/
      if ( !*Array_field_0xE4 || result == a2 ) /*0x65ae10*/
        break; /*0x65ae10*/
      ++v4; /*0x65ae12*/
      ++Array_field_0xE4; /*0x65ae13*/
      if ( v4 >= (int)Array_field_0xE8 ) /*0x65ae18*/
        goto LABEL_6; /*0x65ae18*/
    }
    LOBYTE(result) = 1; /*0x65ae22*/
  }
  return result; /*0x65ae1a*/
}



// ==== 0x0065AE30  Team::AllMembersValid  this=IUnknown  sig=csp ====
int __thiscall Team::AllMembersValid(Team *this)
{
  void *v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = this->field_E8; /*0x65ae30*/
  result = 0; /*0x65ae36*/
  if ( (int)v1 <= 0 ) /*0x65ae3a*/
  {
LABEL_5:
    LOBYTE(result) = 0; /*0x65ae4f*/
  }
  else
  {
    v3 = this->field_E4; /*0x65ae3c*/
    while ( !*v3 ) /*0x65ae45*/
    {
      ++result; /*0x65ae47*/
      ++v3; /*0x65ae48*/
      if ( result >= (int)v1 ) /*0x65ae4d*/
        goto LABEL_5; /*0x65ae4d*/
    }
    LOBYTE(result) = 1; /*0x65ae52*/
  }
  return result; /*0x65ae51*/
}



// ==== 0x0065AE60  RadioClass::SetLinkCount  this=RadioClass  sig=csp ====
void __thiscall RadioClass::SetLinkCount(RadioClass *this, int a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = this->radioLinks[2]; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD))(this->radioLinks[0] + 8))(this->radioLinks, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(_DWORD *)(this->radioLinks[1] + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}



// ==== 0x0065AEB0  RadioClass::ProcessEvent  this=RadioClass  sig=csp ====
_DWORD *__thiscall RadioClass::ProcessEvent(RadioClass *this, char a2)
{
  void *v3; // eax

  this->MissionClass = &RadioClass::`vftable'; /*0x65aeb3*/
  this->? = &RadioClass::`vftable'; /*0x65aeb9*/
  this->? = &RadioClass::`vftable'; /*0x65aec0*/
  this->? = &RadioClass::`vftable'; /*0x65aec7*/
  v3 = (void *)this->radioLinks[1]; /*0x65aece*/
  this->radioLinks[0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x65aed4*/
  if ( v3 && BYTE1(this->radioLinks[3]) ) /*0x65aee2*/
  {
    __3_YAXPAX_Z(v3); /*0x65aeed*/
    this->radioLinks[1] = 0; /*0x65aef5*/
  }
  BYTE1(this->radioLinks[3]) = 0; /*0x65aeff*/
  this->radioLinks[2] = 0; /*0x65af06*/
  this->MissionClass = &MissionClass::`vftable'; /*0x65af12*/
  this->? = &MissionClass::`vftable'; /*0x65af18*/
  this->? = &MissionClass::`vftable'; /*0x65af1f*/
  this->? = &MissionClass::`vftable'; /*0x65af26*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x65af2d*/
  if ( (a2 & 1) != 0 ) /*0x65af37*/
    __3_YAXPAX_Z(this); /*0x65af3a*/
  return &this->MissionClass; /*0x65af44*/
}



// ==== 0x0065AF50  sub_65AF50  this=-  sig=ida-proto ====
void sub_65AF50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65af5c*/
  dbl_B04B78 = Math::Sqrt(v0 + v0); /*0x65af6e*/
}



// ==== 0x0065AF80  sub_65AF80  this=-  sig=ida-proto ====
void sub_65AF80()
{
  dbl_B04BC8 = dbl_B04B78 / 60.0; /*0x65af8c*/
}



// ==== 0x0065AFA0  sub_65AFA0  this=-  sig=ida-proto ====
void sub_65AFA0()
{
  dbl_B04BB0 = 1.0 / dbl_B04BC8; /*0x65afac*/
}



// ==== 0x0065AFC0  sub_65AFC0  this=-  sig=ida-proto ====
void sub_65AFC0()
{
  dbl_B04BA8 = 0.0174532925199433 * 45.0; /*0x65afcc*/
}



// ==== 0x0065AFE0  sub_65AFE0  this=-  sig=ida-proto ====
void sub_65AFE0()
{
  dbl_B04B80 = 0.0174532925199433 * 60.0; /*0x65afec*/
}



// ==== 0x0065B000  sub_65B000  this=-  sig=ida-proto ====
void sub_65B000()
{
  dbl_B04B58 = 0.0174532925199433 * 90.0; /*0x65b00c*/
}



// ==== 0x0065B020  sub_65B020  this=-  sig=ida-proto ====
__int64 sub_65B020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04B58 - dbl_B04B80); /*0x65b032*/
  result = Math::RoundToInt(v0 * dbl_B04B78 * 0.5); /*0x65b046*/
  dword_B04BE8 = result; /*0x65b04b*/
  return result; /*0x65b050*/
}



// ==== 0x0065B060  sub_65B060  this=-  sig=ida-proto ====
void sub_65B060()
{
  dbl_B04B88 = Math::ArcTan((double)dword_B04BE8 * 0.00390625); /*0x65b077*/
}



// ==== 0x0065B090  sub_65B090  this=-  sig=ida-proto ====
void sub_65B090()
{
  dbl_B04BA0 = Math::ArcTan((double)(2 * dword_B04BE8) / dbl_B04B78); /*0x65b0b2*/
}



// ==== 0x0065B0C0  sub_65B0C0  this=-  sig=ida-proto ====
__int64 sub_65B0C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04BE8) + 0.5); /*0x65b0db*/
  dword_B04BC4 = result; /*0x65b0e0*/
  return result; /*0x65b0e6*/
}



// ==== 0x0065B0F0  sub_65B0F0  this=-  sig=ida-proto ====
int sub_65B0F0()
{
  word_B04B70 = 0; /*0x65b0f2*/
  word_B04B72 = 0; /*0x65b0f8*/
  return 0; /*0x65b0fe*/
}



// ==== 0x0065B100  sub_65B100  this=-  sig=ida-proto ====
int sub_65B100()
{
  dword_B04B90 = 0; /*0x65b102*/
  dword_B04B94 = 0; /*0x65b107*/
  dword_B04B98 = 0; /*0x65b10c*/
  return 0; /*0x65b111*/
}



// ==== 0x0065B120  sub_65B120  this=-  sig=ida-proto ====
int sub_65B120()
{
  dword_B04BC0 = 0; /*0x65b125*/
  dword_B04BB8 = 128; /*0x65b12f*/
  dword_B04BBC = 128; /*0x65b134*/
  return 128; /*0x65b139*/
}



// ==== 0x0065B140  sub_65B140  this=-  sig=ida-proto ====
int sub_65B140()
{
  dword_B04B60 = 0; /*0x65b142*/
  dword_B04B64 = 0; /*0x65b147*/
  dword_B04B68 = 0; /*0x65b14c*/
  dword_B04B6C = 0; /*0x65b151*/
  return 0; /*0x65b156*/
}



// ==== 0x0065B160  sub_65B160  this=-  sig=ida-proto ====
int sub_65B160()
{
  dword_B04BD4 = 0; /*0x65b167*/
  dword_B04BD8 = 0; /*0x65b16c*/
  byte_B04BDC = 1; /*0x65b171*/
  byte_B04BDD = 0; /*0x65b178*/
  RadSiteClass_Array = (int)&DynamicVectorClass<RadSiteClass *>::`vftable'; /*0x65b17d*/
  dword_B04BE4 = 10; /*0x65b187*/
  dword_B04BE0 = 0; /*0x65b191*/
  return atexit(sub_65B1A0); /*0x65b19c*/
}



// ==== 0x0065B1A0  sub_65B1A0  this=-  sig=ida-proto ====
void __cdecl sub_65B1A0()
{
  RadSiteClass_Array = (int)&VectorClass<RadSiteClass *>::`vftable'; /*0x65b1a8*/
  if ( dword_B04BD4 && byte_B04BDD ) /*0x65b1bc*/
  {
    __3_YAXPAX_Z(dword_B04BD4); /*0x65b1bf*/
    dword_B04BD4 = 0; /*0x65b1c7*/
  }
  byte_B04BDD = 0; /*0x65b1cd*/
  dword_B04BD8 = 0; /*0x65b1d3*/
}



// ==== 0x0065B1E0  RadSiteClass::RadSiteClass  this=RadSiteClass  sig=csp ====
_DWORD *__thiscall RadSiteClass::RadSiteClass(RadSiteClass *this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  this->RadLevelTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b1f3*/
  this->RadLevelTimer[2] = 0; /*0x65b1f6*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b1f9*/
  this->RadLightTimer[2] = 0; /*0x65b1ff*/
  this->RadLightTimer[0] = v2; /*0x65b202*/
  LOWORD(this->BaseCell[0]) = 0; /*0x65b205*/
  HIWORD(this->BaseCell[0]) = 0; /*0x65b209*/
  this->Spread = 0; /*0x65b20d*/
  this->SpreadInLeptons = 0; /*0x65b210*/
  this->RadLevel = 0; /*0x65b213*/
  this->LevelSteps = 0; /*0x65b216*/
  this->Intensity = 0; /*0x65b219*/
  this->IntensitySteps = 0; /*0x65b21c*/
  this->IntensityDecrement = 0; /*0x65b21f*/
  this->RadDuration = 0; /*0x65b222*/
  this->RadTimeLeft = 0; /*0x65b225*/
  this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b228*/
  this->? = &RadSiteClass::`vftable'; /*0x65b22e*/
  this->? = &RadSiteClass::`vftable'; /*0x65b235*/
  this->? = &RadSiteClass::`vftable'; /*0x65b23c*/
  if ( dword_B04BE0 < dword_B04BD8 /*0x65b277*/
    || (byte_B04BDD || !dword_B04BD8)
    && dword_B04BE4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadSiteClass_Array + 8))(
         &RadSiteClass_Array,
         dword_B04BD8 + dword_B04BE4,
         0) )
  {
    v3 = dword_B04BE0++; /*0x65b284*/
    *((_DWORD *)dword_B04BD4 + v3) = this; /*0x65b293*/
  }
  return &this->AbstractClass; /*0x65b298*/
}



// ==== 0x0065B2F0  RadSiteClass::Constructor  this=RadSiteClass  sig=csp ====
void __thiscall RadSiteClass::Constructor(RadSiteClass *this)
{
  TerrainClass *v2; // eax
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  int v5; // eax
  RadSiteClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b2fc*/
  this->? = &RadSiteClass::`vftable'; /*0x65b303*/
  this->? = &RadSiteClass::`vftable'; /*0x65b30a*/
  this->? = &RadSiteClass::`vftable'; /*0x65b311*/
  v2 = (TerrainClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->BaseCell); /*0x65b318*/
  TerrainClass::SetFieldF8(v2, 0); /*0x65b321*/
  LOBYTE(v3) = 1; /*0x65b326*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, v3); /*0x65b32a*/
  LightSource = this->LightSource; /*0x65b32f*/
  if ( LightSource ) /*0x65b334*/
  {
    (*((void (__thiscall **)(LightSourceClass *, int))LightSource->AbstractClass + 8))(LightSource, 1); /*0x65b33a*/
    this->LightSource = 0; /*0x65b33d*/
  }
  v6 = this; /*0x65b354*/
  v5 = (*(int (__thiscall **)(int *, RadSiteClass **))(RadSiteClass_Array + 16))(&RadSiteClass_Array, &v6); /*0x65b358*/
  if ( v5 != -1 && v5 < dword_B04BE0 && v5 < --dword_B04BE0 ) /*0x65b373*/
  {
    do /*0x65b38b*/
    {
      ++v5; /*0x65b37b*/
      *((_DWORD *)dword_B04BD4 + v5 - 1) = *((_DWORD *)dword_B04BD4 + v5); /*0x65b37f*/
    }
    while ( v5 < dword_B04BE0 ); /*0x65b38b*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x65b38f*/
}



// ==== 0x0065B3A0  RadSiteClass::StubReturn116  this=RadSiteClass  sig=csp ====
int RadSiteClass::StubReturn116(RadSiteClass *this)
{
  return 116; /*0x65b3a5*/
}



// ==== 0x0065B3B0  RadSiteClass::PowerDrainUpdate  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::PowerDrainUpdate(RadSiteClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x65b3ba*/
}



// ==== 0x0065B3C0  RadSiteClass::StubReturn69  this=RadSiteClass  sig=csp ====
int RadSiteClass::StubReturn69(RadSiteClass *this)
{
  return 69; /*0x65b3c5*/
}



// ==== 0x0065B3D0  RadSiteClass::SaveLoad_Prefix  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix(RadSiteClass *this, int a2)
{
  int Prefix_0; // edi
  int v3; // edx

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( this ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x65b3f2*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b3f7*/
      this->RadLevelTimer[2] = 0; /*0x65b3fd*/
      this->RadLevelTimer[0] = v3; /*0x65b404*/
      this->RadLightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b40c*/
      this->RadLightTimer[2] = 0; /*0x65b40f*/
      this->AbstractClass = &RadSiteClass::`vftable'; /*0x65b416*/
      this->? = &RadSiteClass::`vftable'; /*0x65b41c*/
      this->? = &RadSiteClass::`vftable'; /*0x65b423*/
      this->? = &RadSiteClass::`vftable'; /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->LightSource); /*0x65b43a*/
  }
  return Prefix_0; /*0x65b441*/
}



// ==== 0x0065B450  RadSiteClass::SaveLoad_Prefix_0  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix_0(RadSiteClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x65b464*/
}



// ==== 0x0065B470  RadSiteClass::ddtor  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::ddtor(RadSiteClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x65b476*/
    return -2147467261; /*0x65b478*/
  *a2 = 1090836288; /*0x65b486*/
  a2[1] = 299095303; /*0x65b48e*/
  a2[2] = -1610598260; /*0x65b497*/
  a2[3] = unk_7E98CC; /*0x65b4a0*/
  return 0; /*0x65b47d*/
}



// ==== 0x0065B4B0  RadSiteClass::GetSpread  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::GetSpread(RadSiteClass *this)
{
  return this->Spread; /*0x65b4b3*/
}



// ==== 0x0065B4C0  RadSiteClass::SetBaseCell  this=RadSiteClass  sig=csp ====
_DWORD *__thiscall RadSiteClass::SetBaseCell(RadSiteClass *this, _DWORD *a2)
{
  this->BaseCell[0] = *a2; /*0x65b4c6*/
  return a2; /*0x65b4c9*/
}



// ==== 0x0065B4D0  RadSiteClass::SetSpread  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::SetSpread(RadSiteClass *this, int a2)
{
  int result; // eax

  this->Spread = a2; /*0x65b4d4*/
  result = (a2 << 8) + 128; /*0x65b4da*/
  this->SpreadInLeptons = result; /*0x65b4df*/
  return result; /*0x65b4e2*/
}



// ==== 0x0065B4F0  RadSiteClass::SetRadLevel  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::SetRadLevel(RadSiteClass *this, int a2)
{
  int result; // eax

  this->RadLevel = a2; /*0x65b4f4*/
  result = a2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b502*/
  this->RadDuration = result; /*0x65b505*/
  this->RadTimeLeft = result; /*0x65b508*/
  return result; /*0x65b50b*/
}



// ==== 0x0065B510  CellClass::GetOccupiedRatio  this=CellClass  sig=csp ====
int __thiscall CellClass::GetOccupiedRatio(CellClass *this)
{
  int CellClass_field_6C; // esi

  CellClass_field_6C = this->CellClass_field_6C; /*0x65b511*/
  if ( CellClass_field_6C > 0 ) /*0x65b516*/
    return this->CellClass_field_4C * this->unknown70 / CellClass_field_6C; /*0x65b524*/
  else
    return 0; /*0x65b518*/
}



// ==== 0x0065B530  RadSiteClass::Add  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::Add(RadSiteClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax

  LOWORD(v3) = Math::RoundToInt((double)this->RadLevel * (double)this->RadTimeLeft / (double)this->RadDuration); /*0x65b541*/
  v4 = v3; /*0x65b548*/
  RadSiteClass::Deactivate(this); /*0x65b54a*/
  this->RadLevel = v4 + a2; /*0x65b556*/
  v5 = (v4 + a2) * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b565*/
  this->RadDuration = v5; /*0x65b56a*/
  this->RadTimeLeft = v5; /*0x65b56d*/
  return Warhead::ProcessDamageArea((Warhead *)this); /*0x65b575*/
}



// ==== 0x0065B580  Warhead::ProcessDamageArea  this=Warhead  sig=csp ====
int __thiscall Warhead::ProcessDamageArea(Warhead *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ebp
  double v14; // st7
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  void *v19; // eax
  int *v20; // eax
  int v21; // ecx
  LightSourceClass *v22; // eax
  _DWORD *v23; // eax
  int v25; // [esp+10h] [ebp-30h]
  int v26; // [esp+10h] [ebp-30h]
  int v27; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+20h] [ebp-20h]
  int v30; // [esp+24h] [ebp-1Ch]
  int v31; // [esp+28h] [ebp-18h]
  int v32; // [esp+2Ch] [ebp-14h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  _BYTE v35[12]; // [esp+34h] [ebp-Ch] BYREF

  v28 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6160); /*0x65b5a3*/
  v29 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6164); /*0x65b5a7*/
  this->u32_A0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b5ab*/
  this->u32_2C = v32; /*0x65b5b3*/
  this->u32_C = v28; /*0x65b5b9*/
  this->q034 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b5c2*/
  this->u32_38 = v32; /*0x65b5c8*/
  this->u8_3C = v29; /*0x65b5cb*/
  v2 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x65b5ce*/
  v3 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x65b5e2*/
  v4 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6193); /*0x65b5e8*/
  v5 = *(unsigned __int8 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x65b5f5*/
  if ( dword_A8B230[130].uniqueId == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v25 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*((int *)this + 19) * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6176); /*0x65b63e*/
  v30 = this->q048; /*0x65b679*/
  v27 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  LOWORD(v7) = Math::RoundToInt(v6); /*0x65b695*/
  v8 = v7; /*0x65b69e*/
  v9 = (double)v25 * *(double *)(v2 + 6184); /*0x65b6a0*/
  if ( v9 > 2000.0 ) /*0x65b6b3*/
    v9 = 2000.0; /*0x65b6b7*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x65b6bd*/
  v26 = v10; /*0x65b6c6*/
  v11 = (double)(1000 * v4 / 255) * *(double *)(v2 + 6184); /*0x65b6ca*/
  if ( v11 > 2000.0 ) /*0x65b6dd*/
    v11 = 2000.0; /*0x65b6e1*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x65b6e7*/
  v13 = v12; /*0x65b6f0*/
  v14 = (double)v27 * *(double *)(v2 + 6184); /*0x65b6f2*/
  if ( v14 > 2000.0 ) /*0x65b705*/
    v14 = 2000.0; /*0x65b709*/
  LOWORD(v15) = Math::RoundToInt(v14); /*0x65b70f*/
  v16 = this->q01B; /*0x65b714*/
  v17 = v15; /*0x65b71b*/
  this->u32_58 = v26; /*0x65b71f*/
  this->u32_5C = v13; /*0x65b722*/
  this->u32_60 = v15; /*0x65b72a*/
  this->q054 = v8; /*0x65b72d*/
  this->u32_14 = v16 / v28; /*0x65b730*/
  v18 = v16 / v29; /*0x65b73a*/
  this->u32_64 = v18; /*0x65b741*/
  this->u32_68 = v8 / v18; /*0x65b749*/
  v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 32); /*0x65b750*/
  v20 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v19 + 72))(v19, v35); /*0x65b75e*/
  v31 = *v20; /*0x65b763*/
  v33 = v20[1]; /*0x65b76a*/
  v21 = this->u32_24; /*0x65b76e*/
  v34 = v20[2]; /*0x65b776*/
  if ( v21 ) /*0x65b77a*/
  {
    TacticalClass::UpdateScrollTarget(v21, v8, v26, v13, v17, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate((int)this); /*0x65b7ef*/
  }
  else
  {
    v22 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v22 ) /*0x65b788*/
      v23 = LightSourceClass::Construct(v22, v31, v33, v34, v30, v8, v26, v13, v17); /*0x65b7b2*/
    else
      v23 = 0; /*0x65b7b9*/
    this->u32_24 = v23; /*0x65b7bb*/
    v23[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*((Trigger **)this + 9), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate((int)this); /*0x65b7d1*/
  }
}



// ==== 0x0065B800  RadSiteClass::Tick  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::Tick(RadSiteClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax
  int v11; // [esp+Ch] [ebp-8h]

  --this->RadTimeLeft; /*0x65b80b*/
  v2 = this->RadLevelTimer[0]; /*0x65b80e*/
  v3 = this->RadLevelTimer[2]; /*0x65b811*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b814*/
  if ( v2 == -1 ) /*0x65b81d*/
  {
LABEL_4:
    if ( v3 ) /*0x65b82b*/
      goto LABEL_6; /*0x65b82b*/
    goto LABEL_5; /*0x65b82b*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 < v3 ) /*0x65b825*/
  {
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x65b827*/
    goto LABEL_4; /*0x65b827*/
  }
LABEL_5:
  RadSiteClass::DecreaseRadiation(this); /*0x65b82d*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6160); /*0x65b843*/
  this->RadLevelTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b849*/
  this->RadLevelTimer[1] = v11; /*0x65b84c*/
  this->RadLevelTimer[2] = v5; /*0x65b84f*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b852*/
LABEL_6:
  v6 = this->RadLightTimer[0]; /*0x65b858*/
  v7 = this->RadLightTimer[2]; /*0x65b85b*/
  if ( v6 == -1 ) /*0x65b861*/
    goto LABEL_9; /*0x65b861*/
  v8 = v4 - v6; /*0x65b863*/
  if ( v8 < v7 ) /*0x65b869*/
  {
    v7 -= v8; /*0x65b86b*/
LABEL_9:
    if ( v7 ) /*0x65b86f*/
      goto LABEL_11; /*0x65b86f*/
  }
  TacticalClass::UpdateScrollTarget( /*0x65b871*/
    (int)this->LightSource,
    this->LightSource->LightIntensity - this->IntensityDecrement,
    this->RadTimeLeft * this->Tint[0] / this->RadDuration,
    this->RadTimeLeft * this->Tint[1] / this->RadDuration,
    this->RadTimeLeft * this->Tint[2] / this->RadDuration,
    0);
  v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6164); /*0x65b8b9*/
  this->RadLightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65b8bf*/
  this->RadLightTimer[1] = v11; /*0x65b8c2*/
  this->RadLightTimer[2] = v9; /*0x65b8c5*/
LABEL_11:
  result = this->RadTimeLeft; /*0x65b8c8*/
  if ( result <= 0 ) /*0x65b8cd*/
  {
    if ( this ) /*0x65b8d1*/
      return (*((int (__thiscall **)(RadSiteClass *, int))this->AbstractClass + 8))(this, 1); /*0x65b8d9*/
  }
  return result; /*0x65b8dc*/
}



// ==== 0x0065B8F0  RadSiteClass::GetRadLevelAt  this=RadSiteClass  sig=csp ====
double __thiscall RadSiteClass::GetRadLevelAt(RadSiteClass *this, __int16 *a2)
{
  double v2; // st7
  void *v4; // esi
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int SpreadInLeptons; // ecx
  double result; // st7
  int v15; // [esp+24h] [ebp-Ch] BYREF
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]
  __int16 *v18; // [esp+34h] [ebp+4h]

  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->BaseCell); /*0x65b90b*/
  v18 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x65b91a*/
  v5 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v4 + 72))(v4, &v15); /*0x65b925*/
  v6 = *v5; /*0x65b928*/
  v7 = v5[1]; /*0x65b92e*/
  v8 = v5[2]; /*0x65b933*/
  v9 = (_DWORD *)(*(int (__thiscall **)(__int16 *, int *))(*(_DWORD *)v18 + 72))(v18, &v15); /*0x65b93b*/
  v10 = v6 - *v9; /*0x65b945*/
  v11 = v9[2]; /*0x65b94c*/
  v16 = v7 - v9[1]; /*0x65b94f*/
  v15 = v10; /*0x65b959*/
  v17 = v8 - v11; /*0x65b95d*/
  Math::Sqrt((double)v10 * (double)v10 + (double)(v8 - v11) * (double)(v8 - v11) + (double)v16 * (double)v16); /*0x65b982*/
  LOWORD(v12) = Math::RoundToInt(v2); /*0x65b98a*/
  SpreadInLeptons = this->SpreadInLeptons; /*0x65b98f*/
  result = 0.0; /*0x65b992*/
  if ( v12 <= SpreadInLeptons ) /*0x65b99e*/
    return (double)(SpreadInLeptons - v12) / (double)this->SpreadInLeptons * (double)this->RadLevel; /*0x65b9b0*/
  return result; /*0x65b9b3*/
}



// ==== 0x0065B9C0  RadSiteClass::Radiate  this=Warhead  sig=ida-proto ====
int __fastcall RadSiteClass::Radiate(int a1)
{
  int v1; // esi
  int v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // esi
  void *v6; // esi
  void *v7; // ebp
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // eax
  double *v17; // eax
  __int16 v18[2]; // [esp+24h] [ebp-4Ch] BYREF
  int v19; // [esp+28h] [ebp-48h]
  int v20; // [esp+2Ch] [ebp-44h]
  int i; // [esp+30h] [ebp-40h]
  int v22; // [esp+34h] [ebp-3Ch]
  double v23; // [esp+38h] [ebp-38h]
  int v24; // [esp+40h] [ebp-30h]
  int v25; // [esp+44h] [ebp-2Ch]
  int v26; // [esp+48h] [ebp-28h]
  int v27; // [esp+4Ch] [ebp-24h]
  int v28; // [esp+50h] [ebp-20h]
  int v29; // [esp+54h] [ebp-1Ch]
  char v30[12]; // [esp+58h] [ebp-18h] BYREF
  char v31[12]; // [esp+64h] [ebp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 68); /*0x65b9d4*/
  v2 = *(__int16 *)(a1 + 64) - v1; /*0x65b9d7*/
  result = *(__int16 *)(a1 + 66) - v1; /*0x65b9d9*/
  v20 = a1; /*0x65b9dc*/
  v4 = v2 + 2 * v1 + 1; /*0x65b9e0*/
  v5 = result + 2 * v1 + 1; /*0x65b9e4*/
  v26 = v2; /*0x65b9ea*/
  v22 = v4; /*0x65b9ee*/
  v25 = v5; /*0x65b9f2*/
  for ( i = result; i < v5; ++i ) /*0x65b9fa*/
  {
    v19 = v2; /*0x65ba04*/
    if ( v2 < v22 ) /*0x65ba0a*/
    {
      while ( 1 ) /*0x65ba20*/
      {
        v18[0] = v19; /*0x65ba20*/
        v18[1] = i; /*0x65ba2e*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(a1 + 64)); /*0x65ba38*/
        v7 = CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65ba4b*/
        v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v30); /*0x65ba54*/
        v9 = *v8; /*0x65ba57*/
        v10 = v8[1]; /*0x65ba5e*/
        v11 = v8[2]; /*0x65ba61*/
        v12 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v31); /*0x65ba69*/
        v13 = v12[1]; /*0x65ba75*/
        v27 = v9 - *v12; /*0x65ba78*/
        v14 = v12[2]; /*0x65ba7e*/
        v28 = v10 - v13; /*0x65ba81*/
        v29 = v11 - v14; /*0x65ba8b*/
        v15 = Math::Sqrt((double)v27 * (double)v27 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v28 /*0x65bab0*/
                                                                                               * (double)v28);
        v16 = Math::RoundToInt(v15); /*0x65bab8*/
        v23 = 0.0; /*0x65bac1*/
        v24 = *(_DWORD *)(v20 + 72); /*0x65bad6*/
        if ( v16 <= v24 ) /*0x65bada*/
        {
          LODWORD(v23) = v24 - v16; /*0x65bade*/
          v23 = (double)(v24 - v16) / (double)v24 * (double)*(int *)(v20 + 76); /*0x65baed*/
        }
        v17 = (double *)CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65bafb*/
        CellClass::RadLevel_Increase(v17, v23); /*0x65bb0c*/
        if ( ++v19 >= v22 ) /*0x65bb20*/
          break; /*0x65bb20*/
        a1 = v20; /*0x65ba12*/
      }
      v5 = v25; /*0x65bb26*/
      v2 = v26; /*0x65bb2a*/
      a1 = v20; /*0x65bb2e*/
    }
    result = i + 1; /*0x65bb36*/
  }
  return result; /*0x65bb43*/
}



// ==== 0x0065BB50  RadSiteClass::Deactivate  this=RadSiteClass  sig=csp ====
int __fastcall RadSiteClass::Deactivate(_DWORD *a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  int v4; // edx
  int result; // eax
  int v6; // esi
  void *v7; // esi
  void *v8; // ebp
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  int v17; // eax
  double v18; // st7
  void *v19; // eax
  __int16 v20[2]; // [esp+24h] [ebp-5Ch] BYREF
  int v21; // [esp+28h] [ebp-58h]
  _DWORD *v22; // [esp+2Ch] [ebp-54h]
  int v23; // [esp+30h] [ebp-50h]
  int v24; // [esp+34h] [ebp-4Ch]
  int v25; // [esp+38h] [ebp-48h]
  int v26; // [esp+3Ch] [ebp-44h]
  double v27; // [esp+40h] [ebp-40h]
  unsigned __int64 v28; // [esp+48h] [ebp-38h]
  double v29; // [esp+50h] [ebp-30h]
  int v30; // [esp+5Ch] [ebp-24h]
  int v31; // [esp+60h] [ebp-20h]
  int v32; // [esp+64h] [ebp-1Ch]
  char v33[12]; // [esp+68h] [ebp-18h] BYREF
  char v34[12]; // [esp+74h] [ebp-Ch] BYREF

  v1 = a1[28] / dword_8871E0[1].?[1]; /*0x65bb67*/
  v2 = *((__int16 *)a1 + 32); /*0x65bb6d*/
  v3 = a1[17]; /*0x65bb71*/
  v22 = a1; /*0x65bb74*/
  v4 = v2 - v3; /*0x65bb78*/
  v24 = v4 + 2 * v3 + 1; /*0x65bb82*/
  v25 = v1 + 1; /*0x65bb87*/
  result = *((__int16 *)a1 + 33) - v3; /*0x65bb8f*/
  v23 = result; /*0x65bb91*/
  v6 = result + 2 * v3 + 1; /*0x65bb95*/
  v28 = __PAIR64__(v4, v6); /*0x65bb9b*/
  if ( result < v6 ) /*0x65bb9f*/
  {
    do /*0x65bce9*/
    {
      v21 = v4; /*0x65bba9*/
      if ( v4 < v24 ) /*0x65bbaf*/
      {
        v29 = (double)v25; /*0x65bbb9*/
        while ( 1 ) /*0x65bbcd*/
        {
          v20[0] = v21; /*0x65bbcd*/
          v20[1] = v23; /*0x65bbdb*/
          v7 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)a1 + 32); /*0x65bbe5*/
          v8 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bbf8*/
          v9 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v33); /*0x65bc01*/
          v10 = *v9; /*0x65bc04*/
          v11 = v9[1]; /*0x65bc0b*/
          v12 = v9[2]; /*0x65bc0e*/
          v13 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v8 + 72))(v8, v34); /*0x65bc16*/
          v14 = v13[1]; /*0x65bc22*/
          v30 = v10 - *v13; /*0x65bc25*/
          v15 = v13[2]; /*0x65bc2b*/
          v31 = v11 - v14; /*0x65bc2e*/
          v32 = v12 - v15; /*0x65bc38*/
          v16 = Math::Sqrt((double)v30 * (double)v30 + (double)(v12 - v15) * (double)(v12 - v15) + (double)v31 /*0x65bc5d*/
                                                                                                 * (double)v31);
          v17 = Math::RoundToInt(v16); /*0x65bc65*/
          v18 = 0.0; /*0x65bc6e*/
          LODWORD(v27) = v22[18]; /*0x65bc79*/
          if ( v17 <= SLODWORD(v27) ) /*0x65bc7d*/
          {
            v26 = LODWORD(v27) - v17; /*0x65bc83*/
            v18 = (double)(LODWORD(v27) - v17) / (double)SLODWORD(v27) * (double)(int)v22[19]; /*0x65bc8f*/
          }
          v27 = v18 / (double)(int)v22[20] * v29; /*0x65bca3*/
          v19 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bca7*/
          CellClass::RadLevel_Decrease((int)v19, v27); /*0x65bcb8*/
          if ( ++v21 >= v24 ) /*0x65bccc*/
            break; /*0x65bccc*/
          a1 = v22; /*0x65bbbf*/
        }
        v4 = HIDWORD(v28); /*0x65bcd6*/
        v6 = v28; /*0x65bcd6*/
        a1 = v22; /*0x65bcda*/
      }
      result = ++v23; /*0x65bce2*/
    }
    while ( v23 < v6 ); /*0x65bce9*/
  }
  return result; /*0x65bcef*/
}



// ==== 0x0065BD00  RadSiteClass::DecreaseRadiation  this=RadSiteClass  sig=csp ====
int __fastcall RadSiteClass::DecreaseRadiation(_DWORD *a1)
{
  int v1; // esi
  int v2; // edx
  int result; // eax
  int v4; // edi
  int v5; // esi
  void *v6; // esi
  void *v7; // ebp
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // eax
  double v17; // st7
  void *v18; // eax
  __int16 v19[2]; // [esp+20h] [ebp-50h] BYREF
  int v20; // [esp+24h] [ebp-4Ch]
  _DWORD *v21; // [esp+28h] [ebp-48h]
  int i; // [esp+2Ch] [ebp-44h]
  int v23; // [esp+30h] [ebp-40h]
  int v24; // [esp+34h] [ebp-3Ch]
  double v25; // [esp+38h] [ebp-38h]
  int v26; // [esp+44h] [ebp-2Ch]
  int v27; // [esp+48h] [ebp-28h]
  int v28; // [esp+4Ch] [ebp-24h]
  int v29; // [esp+50h] [ebp-20h]
  int v30; // [esp+54h] [ebp-1Ch]
  char v31[12]; // [esp+58h] [ebp-18h] BYREF
  char v32[12]; // [esp+64h] [ebp-Ch] BYREF

  v1 = a1[17]; /*0x65bd14*/
  v2 = *((__int16 *)a1 + 32) - v1; /*0x65bd17*/
  result = *((__int16 *)a1 + 33) - v1; /*0x65bd19*/
  v21 = a1; /*0x65bd1c*/
  v4 = v2 + 2 * v1 + 1; /*0x65bd20*/
  v5 = result + 2 * v1 + 1; /*0x65bd24*/
  v27 = v2; /*0x65bd2a*/
  v23 = v4; /*0x65bd2e*/
  v26 = v5; /*0x65bd32*/
  for ( i = result; i < v5; ++i ) /*0x65bd3a*/
  {
    v20 = v2; /*0x65bd44*/
    if ( v2 < v23 ) /*0x65bd4a*/
    {
      while ( 1 ) /*0x65bd60*/
      {
        v19[0] = v20; /*0x65bd60*/
        v19[1] = i; /*0x65bd6e*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)a1 + 32); /*0x65bd78*/
        v7 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65bd8b*/
        v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v31); /*0x65bd94*/
        v9 = *v8; /*0x65bd97*/
        v10 = v8[1]; /*0x65bd9e*/
        v11 = v8[2]; /*0x65bda1*/
        v12 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v7 + 72))(v7, v32); /*0x65bda9*/
        v13 = v12[1]; /*0x65bdb5*/
        v28 = v9 - *v12; /*0x65bdb8*/
        v14 = v12[2]; /*0x65bdbe*/
        v29 = v10 - v13; /*0x65bdc1*/
        v30 = v11 - v14; /*0x65bdcb*/
        v15 = Math::Sqrt((double)v28 * (double)v28 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v29 /*0x65bdf0*/
                                                                                               * (double)v29);
        v16 = Math::RoundToInt(v15); /*0x65bdf8*/
        v17 = 0.0; /*0x65be01*/
        LODWORD(v25) = v21[18]; /*0x65be0c*/
        if ( v16 <= SLODWORD(v25) ) /*0x65be10*/
        {
          v24 = LODWORD(v25) - v16; /*0x65be16*/
          v17 = (double)(LODWORD(v25) - v16) / (double)SLODWORD(v25) * (double)(int)v21[19]; /*0x65be22*/
        }
        v25 = v17 / (double)(int)v21[20]; /*0x65be32*/
        v18 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65be36*/
        CellClass::RadLevel_Decrease((int)v18, v25); /*0x65be47*/
        if ( ++v20 >= v23 ) /*0x65be5b*/
          break; /*0x65be5b*/
        a1 = v21; /*0x65bd52*/
      }
      v5 = v26; /*0x65be61*/
      v2 = v27; /*0x65be65*/
      a1 = v21; /*0x65be69*/
    }
    result = i + 1; /*0x65be71*/
  }
  return result; /*0x65be7e*/
}



// ==== 0x0065BE90  RadSiteClass::DecreaseLight  this=RadSiteClass  sig=csp ====
char __thiscall RadSiteClass::DecreaseLight(RadSiteClass *this)
{
  return TacticalClass::UpdateScrollTarget( /*0x65becc*/
           (int)this->LightSource,
           this->LightSource->LightIntensity - this->IntensityDecrement,
           this->RadTimeLeft * this->Tint[0] / this->RadDuration,
           this->RadTimeLeft * this->Tint[1] / this->RadDuration,
           this->RadTimeLeft * this->Tint[2] / this->RadDuration,
           0);
}



// ==== 0x0065BED0  RadSiteClass::ProcessEvent  this=RadSiteClass  sig=csp ====
void **__thiscall RadSiteClass::ProcessEvent(RadSiteClass *this, char a2)
{
  RadSiteClass::Constructor(this); /*0x65bed3*/
  if ( (a2 & 1) != 0 ) /*0x65bedd*/
    __3_YAXPAX_Z(this); /*0x65bee0*/
  return &this->AbstractClass; /*0x65beea*/
}



// ==== 0x0065BEF0  _DynamicVectorClass_PAVRadSiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::Destroy(_DynamicVectorClass_PAVRadSiteClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x65bef6*/
  this->m_10 = 0; /*0x65bef9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x65bf00*/
  {
    __3_YAXPAX_Z(v2); /*0x65bf06*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65bf0e*/
  }
  BYTE1(this->m_C) = 0; /*0x65bf11*/
  this->m_8 = 0; /*0x65bf14*/
}



// ==== 0x0065BF20  _DynamicVectorClass_PAVRadSiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::GetItemIndex(_DynamicVectorClass_PAVRadSiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65bf20*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65bf35*/
  else
    return 0; /*0x65bf27*/
}



// ==== 0x0065BF40  _VectorClass_PAVRadSiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::Get(_VectorClass_PAVRadSiteClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x65bf4a*/
}



// ==== 0x0065BF50  _VectorClass_PAVRadSiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::Add(_VectorClass_PAVRadSiteClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x65bf52*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x65bf5d*/
  {
    v3 = 0; /*0x65bf5f*/
    if ( m_8 <= 0 ) /*0x65bf63*/
      return 1; /*0x65bf83*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x65bf65*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65bf6b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65bf74*/
    {
      ++v3; /*0x65bf76*/
      ++v4; /*0x65bf77*/
      if ( v3 >= m_8 ) /*0x65bf7c*/
        return 1; /*0x65bf7c*/
    }
  }
  return 0; /*0x65bf7e*/
}



// ==== 0x0065BF90  _VectorClass_PAVRadSiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::Release(_VectorClass_PAVRadSiteClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x65bf9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x65bfa6*/
    if ( a3 ) /*0x65bfac*/
      v4 = a3; /*0x65bfc2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65bfbe*/
    LOBYTE(this->m_C) = 1; /*0x65bfc6*/
    if ( v4 ) /*0x65bfca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x65bfd5*/
      {
        m_8 = this->m_8; /*0x65bfdc*/
        if ( a2 < m_8 ) /*0x65bfe1*/
          m_8 = a2; /*0x65bfe3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65bfe9*/
          ++i; /*0x65bfee*/
        if ( BYTE1(this->m_C) ) /*0x65bffb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c006*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x65c00e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x65c017*/
      this->m_8 = a2; /*0x65c01f*/
      BYTE1(this->m_C) = a3 == 0; /*0x65c022*/
      return 1; /*0x65c028*/
    }
    else
    {
      return 0; /*0x65bfcf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadSiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65c032*/
    return 1; /*0x65c038*/
  }
}



// ==== 0x0065C040  _VectorClass_PAVRadSiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::Remove(_VectorClass_PAVRadSiteClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x65c04d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c053*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c05b*/
  }
  BYTE1(this->m_C) = 0; /*0x65c05e*/
  this->m_8 = 0; /*0x65c061*/
}



// ==== 0x0065C070  _VectorClass_PAVRadSiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::GetSize(_VectorClass_PAVRadSiteClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x65c070*/
    return 0; /*0x65c078*/
  m_8 = this->m_8; /*0x65c07e*/
  result = 0; /*0x65c081*/
  if ( m_8 <= 0 ) /*0x65c085*/
    return -1; /*0x65c09c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65c08b*/
  {
    if ( ++result >= m_8 ) /*0x65c09a*/
      return -1; /*0x65c09a*/
  }
  return result; /*0x65c07a*/
}



// ==== 0x0065C0B0  _VectorClass_PAVRadSiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::GetCapacity(_VectorClass_PAVRadSiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x65c0b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x65c0c5*/
  else
    return 0; /*0x65c0b7*/
}



// ==== 0x0065C0D0  _DynamicVectorClass_PAVRadSiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::SetCapacity(
        _DynamicVectorClass_PAVRadSiteClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65c0dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x65c0e2*/
    if ( a3 ) /*0x65c0e8*/
      v4 = a3; /*0x65c0fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x65c0fa*/
    LOBYTE(this->m_C) = 1; /*0x65c102*/
    if ( !v4 ) /*0x65c106*/
      return 0; /*0x65c17a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x65c108*/
    {
      m_8 = this->m_8; /*0x65c10f*/
      if ( a2 < m_8 ) /*0x65c114*/
        m_8 = a2; /*0x65c116*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x65c11c*/
        ++i; /*0x65c121*/
      if ( BYTE1(this->m_C) ) /*0x65c12e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x65c139*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x65c141*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x65c14a*/
    this->m_8 = a2; /*0x65c152*/
    BYTE1(this->m_C) = a3 == 0; /*0x65c155*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVRadSiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x65c15e*/
  }
  v7 = this->m_8; /*0x65c161*/
  if ( v7 < this->m_10 ) /*0x65c169*/
    this->m_10 = v7; /*0x65c16b*/
  return 1; /*0x65c16e*/
}



// ==== 0x0065C180  _DynamicVectorClass_PAVRadSiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::FindItemIndex(_DynamicVectorClass_PAVRadSiteClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x65c180*/
  result = 0; /*0x65c183*/
  if ( m_10 <= 0 ) /*0x65c188*/
    return -1; /*0x65c19f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x65c18e*/
  {
    if ( ++result >= m_10 ) /*0x65c19d*/
      return -1; /*0x65c19d*/
  }
  return result; /*0x65c1a2*/
}



// ==== 0x0065C1B0  _VectorClass_PAVRadSiteClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadSiteClass::QueryInterface(_VectorClass_PAVRadSiteClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65c1b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadSiteClass *>::`vftable'; /*0x65c1b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65c1c0*/
  {
    __3_YAXPAX_Z(v3); /*0x65c1c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c1d0*/
  }
  BYTE1(this->m_C) = 0; /*0x65c1db*/
  this->m_8 = 0; /*0x65c1e1*/
  if ( (a2 & 1) != 0 ) /*0x65c1e8*/
    __3_YAXPAX_Z(this); /*0x65c1eb*/
  return this->__pad_0; /*0x65c1f5*/
}



// ==== 0x0065C200  _DynamicVectorClass_PAVRadSiteClass::Constructor_VectorClass_RadSiteClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(
        _DynamicVectorClass_PAVRadSiteClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x65c203*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadSiteClass *>::`vftable'; /*0x65c206*/
  if ( v3 && BYTE1(this->m_C) ) /*0x65c210*/
  {
    __3_YAXPAX_Z(v3); /*0x65c218*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x65c220*/
  }
  BYTE1(this->m_C) = 0; /*0x65c22b*/
  this->m_8 = 0; /*0x65c231*/
  if ( (a2 & 1) != 0 ) /*0x65c238*/
    __3_YAXPAX_Z(this); /*0x65c23b*/
  return this->__pad_0; /*0x65c245*/
}



// ==== 0x0065C250  RAMFileClass::WinMain_Helper_65C250  this=RAMFileClass  sig=csp ====
_BYTE *__thiscall WinMain_Helper_65C250(RAMFileClass *this, int a2, int Size)
{
  this->__pad_0[4] = 0; /*0x65c25f*/
  this->RAMFileClass_field_0x8 = (AbstractClass *)a2; /*0x65c262*/
  this->RAMFileClass_field_0xC = (AbstractClass *)Size; /*0x65c265*/
  this->RAMFileClass_field_0x10 = (AbstractClass *)Size; /*0x65c268*/
  *((_DWORD *)this + 5) = 0; /*0x65c26b*/
  this->u8_6 = 1; /*0x65c26e*/
  *((_BYTE *)this + 28) = 0; /*0x65c275*/
  *((_BYTE *)this + 29) = 0; /*0x65c278*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c27b*/
  if ( !a2 && Size > 0 ) /*0x65c285*/
  {
    this->RAMFileClass_field_0x8 = (AbstractClass *)__2_YAPAXI_Z(Size); /*0x65c290*/
    *((_BYTE *)this + 29) = 1; /*0x65c293*/
  }
  return this->__pad_0; /*0x65c299*/
}



// ==== 0x0065C2A0  RAMFileClass::WinMain_Helper_65C2A0  this=RAMFileClass  sig=csp ====
void __thiscall WinMain_Helper_65C2A0(RAMFileClass *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 29); /*0x65c2a3*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c2a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c2ae*/
  if ( v2 ) /*0x65c2b2*/
  {
    __3_YAXPAX_Z(this->RAMFileClass_field_0x8); /*0x65c2b8*/
    this->RAMFileClass_field_0x8 = 0; /*0x65c2c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c2c7*/
  }
  *(_DWORD *)this->__pad_0 = &FileClass::`vftable'; /*0x65c2cb*/
}



// ==== 0x0065C2E0  RAMFileClass::checkTeamMembership  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamMembership(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c2e5*/
    return 0; /*0x65c2fa*/
  this->RAMFileClass_field_0x10 = 0; /*0x65c2ec*/
  return 1; /*0x65c2f8*/
}



// ==== 0x0065C300  RAMFileClass::nullsub_0_1  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_1(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->RAMFileClass_field_0x10 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/
}



// ==== 0x0065C320  RAMFileClass::updateTeamState  this=RAMFileClass  sig=csp ====
char __stdcall AbstractClass::updateTeamState(RAMFileClass *this)
{
  return 1; /*0x65c322*/
}



// ==== 0x0065C330  RAMFileClass::processTeamOrder  this=RAMFileClass  sig=csp ====
char __thiscall AbstractClass::processTeamOrder(RAMFileClass *this)
{
  return *((_BYTE *)this + 28); /*0x65c333*/
}



// ==== 0x0065C340  RAMFileClass::dispatchTeamEvent  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::dispatchTeamEvent(RAMFileClass *this, int a2, int a3)
{
  return (*(int (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, a3); /*0x65c34a*/
}



// ==== 0x0065C350  RAMFileClass::nullsub_0_2  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_2(RAMFileClass *this, int a2)
{
  if ( !this->RAMFileClass_field_0x8 /*0x65c35c*/
    || (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) )
  {
    return 0; /*0x65c391*/
  }
  *((_DWORD *)this + 5) = 0; /*0x65c367*/
  this->u8_6 = a2; /*0x65c36e*/
  *((_BYTE *)this + 28) = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->RAMFileClass_field_0x10 = 0; /*0x65c37a*/
  return (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x65c38d*/
}



// ==== 0x0065C3A0  RAMFileClass::nullsub_0_3  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_3(RAMFileClass *this, void *a2, signed int Size)
{
  signed int v4; // edi
  char v5; // bl
  int v6; // eax

  if ( !this->RAMFileClass_field_0x8 ) /*0x65c3a6*/
    return 0; /*0x65c3a6*/
  if ( !a2 ) /*0x65c3b3*/
    return 0; /*0x65c3b3*/
  v4 = Size; /*0x65c3b5*/
  if ( !Size ) /*0x65c3bb*/
    return 0; /*0x65c3bb*/
  v5 = 0; /*0x65c3bf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c3c1*/
  {
    if ( (this->u8_6 & 1) != 0 ) /*0x65c3d9*/
      goto LABEL_7; /*0x65c3d9*/
    return 0; /*0x65c418*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 1); /*0x65c3ce*/
  v5 = 1; /*0x65c3d1*/
LABEL_7:
  v6 = *((_DWORD *)this + 5); /*0x65c3db*/
  if ( Size >= (int)this->RAMFileClass_field_0x10 - v6 ) /*0x65c3e5*/
    v4 = (signed int)this->RAMFileClass_field_0x10 - v6; /*0x65c3e7*/
  memcpy(a2, (char *)this->RAMFileClass_field_0x8 + v6, v4); /*0x65c3f1*/
  *((_DWORD *)this + 5) += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c409*/
  return v4; /*0x65c40e*/
}



// ==== 0x0065C420  RAMFileClass::nullsub_0_4  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_4(RAMFileClass *this, int a2, int a3)
{
  AbstractClass *RAMFileClass_field_0x10; // edx
  AbstractClass *RAMFileClass_field_0xC; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->RAMFileClass_field_0x8 /*0x65c42c*/
    || !(*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) )
  {
    return *((_DWORD *)this + 5); /*0x65c494*/
  }
  RAMFileClass_field_0x10 = this->RAMFileClass_field_0x10; /*0x65c436*/
  RAMFileClass_field_0xC = RAMFileClass_field_0x10; /*0x65c43b*/
  if ( (this->u8_6 & 2) != 0 ) /*0x65c43d*/
    RAMFileClass_field_0xC = this->RAMFileClass_field_0xC; /*0x65c43f*/
  switch ( a3 ) /*0x65c449*/
  {
    case 0: /*0x65c449*/
      v6 = a2; /*0x65c469*/
      goto LABEL_11; /*0x65c469*/
    case 1: /*0x65c449*/
      *((_DWORD *)this + 5) += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = (int)RAMFileClass_field_0xC + a2; /*0x65c455*/
LABEL_11:
      *((_DWORD *)this + 5) = v6; /*0x65c46d*/
      break;
  }
  if ( *((int *)this + 5) < 0 ) /*0x65c475*/
    *((_DWORD *)this + 5) = 0; /*0x65c477*/
  if ( *((_DWORD *)this + 5) > (int)RAMFileClass_field_0xC ) /*0x65c481*/
    *((_DWORD *)this + 5) = RAMFileClass_field_0xC; /*0x65c483*/
  result = *((_DWORD *)this + 5); /*0x65c486*/
  if ( result > (int)RAMFileClass_field_0x10 ) /*0x65c48b*/
    this->RAMFileClass_field_0x10 = (AbstractClass *)result; /*0x65c48d*/
  return result; /*0x65c490*/
}



// ==== 0x0065C4A0  RAMFileClass::checkTeamObjective  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamObjective(RAMFileClass *this)
{
  return (int)this->RAMFileClass_field_0x10; /*0x65c4a3*/
}



// ==== 0x0065C4B0  RAMFileClass::validateTeamConfig  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::validateTeamConfig(RAMFileClass *this, void *Src, signed int Size)
{
  char *v4; // edi
  char v5; // bl
  int v6; // edx
  AbstractClass *RAMFileClass_field_0x10; // ecx
  AbstractClass *v8; // edx

  if ( !this->RAMFileClass_field_0x8 ) /*0x65c4b6*/
    return 0; /*0x65c4b6*/
  if ( !Src ) /*0x65c4c3*/
    return 0; /*0x65c4c3*/
  v4 = (char *)Size; /*0x65c4c5*/
  if ( !Size ) /*0x65c4cb*/
    return 0; /*0x65c4cb*/
  v5 = 0; /*0x65c4cf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c4d1*/
  {
    if ( (this->u8_6 & 2) != 0 ) /*0x65c4e9*/
      goto LABEL_7; /*0x65c4e9*/
    return 0; /*0x65c537*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 2); /*0x65c4de*/
  v5 = 1; /*0x65c4e1*/
LABEL_7:
  v6 = *((_DWORD *)this + 5); /*0x65c4eb*/
  if ( Size >= (int)this->RAMFileClass_field_0xC - v6 ) /*0x65c4f5*/
    v4 = (char *)this->RAMFileClass_field_0xC - v6; /*0x65c4f7*/
  memcpy((char *)this->RAMFileClass_field_0x8 + *((_DWORD *)this + 5), Src, (size_t)v4); /*0x65c504*/
  RAMFileClass_field_0x10 = this->RAMFileClass_field_0x10; /*0x65c50c*/
  v8 = (AbstractClass *)&v4[*((_DWORD *)this + 5)]; /*0x65c50f*/
  *((_DWORD *)this + 5) = v8; /*0x65c516*/
  if ( (int)v8 > (int)RAMFileClass_field_0x10 ) /*0x65c51b*/
    this->RAMFileClass_field_0x10 = v8; /*0x65c51d*/
  if ( v5 ) /*0x65c522*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c528*/
  return (int)v4; /*0x65c52d*/
}



// ==== 0x0065C540  RAMFileClass::resetTeamState  this=RAMFileClass  sig=csp ====
void __thiscall AbstractClass::resetTeamState(RAMFileClass *this)
{
  *((_BYTE *)this + 28) = 0; /*0x65c540*/
}



// ==== 0x0065C550  RAMFileClass::nullsub_0_5  this=RAMFileClass  sig=csp ====
char *nullsub_0_5(RAMFileClass *this)
{
  return aUnknown_1; /*0x65c555*/
}



// ==== 0x0065C560  RAMFileClass::nullsub_0_6  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_6(RAMFileClass *this, int a2)
{
  return (*(int (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x65c565*/
}



// ==== 0x0065C570  RAMFileClass::nullsub_0_7  this=RAMFileClass  sig=csp ====
int nullsub_0_7(RAMFileClass *this)
{
  return 0; /*0x65c572*/
}



// ==== 0x0065C580  RAMFileClass::nullsub_0_8  this=RAMFileClass  sig=csp ====
char __stdcall nullsub_0_8(RAMFileClass *this)
{
  return 1; /*0x65c582*/
}



// ==== 0x0065C590  RAMFileClass::nullsub_0_9  this=RAMFileClass  sig=csp ====
void __stdcall nullsub_0_9(RAMFileClass *this, int a2, int a3)
{
  ; /*0x65c590*/
}



// ==== 0x0065C5A0  RAMFileClass::nullsub_0_10  this=RAMFileClass  sig=csp ====
void *__thiscall nullsub_0_10(RAMFileClass *this, char a2)
{
  char v3; // al

  v3 = *((_BYTE *)this + 29); /*0x65c5a3*/
  *(_DWORD *)this->__pad_0 = &RAMFileClass::`vftable'; /*0x65c5a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c5ae*/
  if ( v3 ) /*0x65c5b2*/
  {
    __3_YAXPAX_Z(this->RAMFileClass_field_0x8); /*0x65c5b8*/
    this->RAMFileClass_field_0x8 = 0; /*0x65c5c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c5c7*/
  }
  *(_DWORD *)this->__pad_0 = &FileClass::`vftable'; /*0x65c5cf*/
  if ( (a2 & 1) != 0 ) /*0x65c5d7*/
    __3_YAXPAX_Z(this); /*0x65c5da*/
  return this; /*0x65c5e4*/
}



// ==== 0x0065C5F0  FileClass::StubReturnFalse  this=FileClass  sig=csp ====
int FileClass::StubReturnFalse(FileClass *this)
{
  return 0; /*0x65c5f2*/
}



// ==== 0x0065C600  FileClass::Stub  this=FileClass  sig=csp ====
char __stdcall FileClass::Stub(FileClass *this)
{
  return 0; /*0x65c602*/
}



// ==== 0x0065C610  FileClass::processAITrigger  this=FileClass  sig=csp ====
_DWORD *__thiscall AbstractClass::processAITrigger(FileClass *this, char a2)
{
  *this = (FileClass)&FileClass::`vftable'; /*0x65c619*/
  if ( (a2 & 1) != 0 ) /*0x65c61f*/
    __3_YAXPAX_Z(this); /*0x65c622*/
  return this; /*0x65c62c*/
}



// ==== 0x0065C630  ObjectClass::unknown_libname_28  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_28(_DWORD *this, int a2)
{
  *this = a2; /*0x65c636*/
  return this; /*0x65c638*/
}



// ==== 0x0065C6D0  ObjectClass::SeedInitRNG  this=ObjectClass  sig=csp ====
_DWORD *__thiscall SeedInitRNG(ObjectClass *this, int a2)
{
  int v2; // eax
  int v3; // ebp
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  void **p_vtable3; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x65c6d3*/
  this->? = 0; /*0x65c6da*/
  this->? = (void *)103; /*0x65c6dd*/
  p_vtable3 = &this->?; /*0x65c6ea*/
  v11 = 250; /*0x65c6ee*/
  while ( 1 ) /*0x65c6fc*/
  {
    v3 = a2; /*0x65c6fc*/
    v4 = v2; /*0x65c700*/
    v5 = 0; /*0x65c703*/
    v13 = v2 + 1; /*0x65c705*/
    do /*0x65c74f*/
    {
      v6 = v4; /*0x65c70f*/
      v7 = v4 ^ dword_839644[v5++]; /*0x65c711*/
      v8 = v3 /*0x65c746*/
         ^ ((unsigned __int16)v7 * (v7 >> 16)
          + (dword_839690[v5]
           ^ ((((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) << 16)
            | (((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) >> 16))));
      v4 = v8; /*0x65c74b*/
      v3 = v6; /*0x65c74d*/
    }
    while ( v5 < 4 ); /*0x65c74f*/
    *p_vtable3++ = (void *)v8; /*0x65c755*/
    if ( !--v11 ) /*0x65c767*/
      break; /*0x65c767*/
    v2 = v13; /*0x65c6f8*/
  }
  LOBYTE(this->AbstractClass) = 0; /*0x65c770*/
  return &this->AbstractClass; /*0x65c76d*/
}



// ==== 0x0065C780  Random::State  this=Random  sig=csp ====
int __thiscall Random::State(Random *this)
{
  int result; // eax
  int Random_field_0x04; // edx
  int v3; // esi

  if ( this->__pad_0[0] ) /*0x65c780*/
    return 0; /*0x65c785*/
  *(&this->Random_field_0x0C + this->Random_field_0x04) ^= *(&this->Random_field_0x0C + this->Random_field_0x08); /*0x65c79d*/
  Random_field_0x04 = this->Random_field_0x04; /*0x65c79f*/
  result = *(&this->Random_field_0x0C + Random_field_0x04++); /*0x65c7a5*/
  v3 = this->Random_field_0x08 + 1; /*0x65c7aa*/
  this->Random_field_0x04 = Random_field_0x04; /*0x65c7b1*/
  this->Random_field_0x08 = v3; /*0x65c7b4*/
  if ( Random_field_0x04 >= 250 ) /*0x65c7b7*/
    this->Random_field_0x04 = 0; /*0x65c7b9*/
  if ( v3 >= 250 ) /*0x65c7c7*/
    this->Random_field_0x08 = 0; /*0x65c7c9*/
  return result; /*0x65c787*/
}



// ==== 0x0065C7E0  Random::Range  this=Random  sig=csp ====
int __thiscall Random::Range(Random *this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int i; // ebp
  int v12; // eax
  int Random_field_0x04; // eax
  int v14; // esi
  int v15; // ecx

  result = a2; /*0x65c7e0*/
  v5 = a3; /*0x65c7e6*/
  v6 = a2; /*0x65c7ed*/
  if ( a2 != a3 ) /*0x65c7ef*/
  {
    if ( a2 > a3 ) /*0x65c7f5*/
    {
      v6 = a3; /*0x65c7f7*/
      v5 = a2; /*0x65c7f9*/
    }
    v7 = v5 - v6; /*0x65c7ff*/
    v8 = v5 - v6 >= 0; /*0x65c801*/
    v9 = 31; /*0x65c807*/
    if ( v8 ) /*0x65c80c*/
    {
      do /*0x65c81c*/
      {
        if ( v9 <= 0 ) /*0x65c810*/
          break; /*0x65c810*/
        --v9; /*0x65c812*/
      }
      while ( ((1 << v9) & v7) == 0 ); /*0x65c81c*/
    }
    v10 = v7 + 1; /*0x65c824*/
    for ( i = ~(-1 << (v9 + 1)); v10 > v7; v10 = i & v12 ) /*0x65c82b*/
    {
      if ( this->__pad_0[0] ) /*0x65c82e*/
      {
        v12 = 0; /*0x65c833*/
      }
      else
      {
        *(&this->Random_field_0x0C + this->Random_field_0x04) ^= *(&this->Random_field_0x0C + this->Random_field_0x08); /*0x65c84b*/
        Random_field_0x04 = this->Random_field_0x04; /*0x65c84d*/
        v14 = *(&this->Random_field_0x0C + Random_field_0x04++); /*0x65c853*/
        v15 = this->Random_field_0x08 + 1; /*0x65c858*/
        this->Random_field_0x04 = Random_field_0x04; /*0x65c85e*/
        this->Random_field_0x08 = v15; /*0x65c861*/
        if ( Random_field_0x04 >= 250 ) /*0x65c864*/
          this->Random_field_0x04 = 0; /*0x65c866*/
        if ( v15 >= 250 ) /*0x65c873*/
          this->Random_field_0x08 = 0; /*0x65c875*/
        v12 = v14; /*0x65c87c*/
      }
    }
    return v6 + v10; /*0x65c886*/
  }
  return result; /*0x65c889*/
}



// ==== 0x0065C890  ObjectClass::method_65C890  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_65C890(ObjectClass *this, int a2, int a3)
{
  this->AbstractClass = (void *)a2; /*0x65c89a*/
  this->? = (void *)a3; /*0x65c89c*/
  return &this->AbstractClass; /*0x65c89f*/
}



// ==== 0x0065C8B0  RandomStraw::AdvanceState  this=RandomStraw  sig=csp ====
int __thiscall RandomStraw::AdvanceState(RandomStraw *this)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  unsigned __int16 v6; // dx

  result = this->RandomStraw_field_0x04; /*0x65c8b0*/
  v2 = *(_DWORD *)this->__pad_0; /*0x65c8ba*/
  this->RandomStraw_field_0x04 = result + 1; /*0x65c8bc*/
  v3 = 0; /*0x65c8bf*/
  do /*0x65c907*/
  {
    v4 = result; /*0x65c8c7*/
    v5 = result ^ dword_839644[v3++]; /*0x65c8c9*/
    v6 = v5; /*0x65c8ce*/
    v5 >>= 16; /*0x65c8d0*/
    result = v2 ^ (v6 * v5 + (dword_839690[v3] ^ (((v6 * v6 + ~(v5 * v5)) << 16) | ((v6 * v6 + ~(v5 * v5)) >> 16)))); /*0x65c903*/
    v2 = v4; /*0x65c905*/
  }
  while ( v3 < 4 ); /*0x65c907*/
  return result; /*0x65c909*/
}



// ==== 0x0065C910  ObjectClass::method_65C910  this=ObjectClass  sig=csp ====
int __thiscall sub_65C910(ObjectClass *this, int a2, int a3)
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

  result = a2; /*0x65c913*/
  v5 = a3; /*0x65c919*/
  v6 = a2; /*0x65c91e*/
  v7 = a2 == a3; /*0x65c920*/
  v8 = a2 <= a3; /*0x65c920*/
  v19 = this; /*0x65c922*/
  v23 = a2; /*0x65c926*/
  if ( !v7 ) /*0x65c92a*/
  {
    if ( !v8 ) /*0x65c930*/
    {
      v6 = v5; /*0x65c932*/
      v5 = a2; /*0x65c934*/
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
        vtable1 = (unsigned int)this->?; /*0x65c980*/
        v14 = (unsigned int)vtable0; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        this->? = (void *)(vtable1 + 1); /*0x65c98c*/
        do /*0x65c9d5*/
        {
          v16 = vtable1; /*0x65c995*/
          v17 = vtable1 ^ dword_839644[v15++]; /*0x65c997*/
          v18 = v14 /*0x65c9cc*/
              ^ ((unsigned __int16)v17 * (v17 >> 16)
               + (dword_839690[v15]
                ^ ((((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) << 16)
                 | (((unsigned __int16)v17 * (unsigned __int16)v17 + ~((v17 >> 16) * (v17 >> 16))) >> 16))));
          vtable1 = v18; /*0x65c9d1*/
          v14 = v16; /*0x65c9d3*/
        }
        while ( v15 < 4 ); /*0x65c9d5*/
        v12 = v20 & v18; /*0x65c9df*/
        if ( (v20 & v18) <= v21 ) /*0x65c9e3*/
          break; /*0x65c9e3*/
        this = v19; /*0x65c97c*/
      }
      v6 = v23; /*0x65c9e5*/
    }
    return v12 + v6; /*0x65c9eb*/
  }
  return result; /*0x65c9ef*/
}



// ==== 0x0065CA00  RawFileClass::Dtor  this=RawFileClass  sig=csp ====
int __thiscall RawFileClass::Dtor(BufferIOFileClass *this)
{
  int result; // eax
  FileClass v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65ca03*/
  result = RawFileClass::Write(this); /*0x65ca09*/
  if ( (_BYTE)result ) /*0x65ca11*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65ca17*/
    if ( !result ) /*0x65ca1f*/
    {
      v3 = this->FileClass; /*0x65ca25*/
      v5 = *(_DWORD *)this->FileNameAllocated; /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      result = (*(int (__thiscall **)(BufferIOFileClass *, DWORD, _DWORD, int))(*(_DWORD *)&v3 + 64))( /*0x65ca32*/
                 this,
                 LastError,
                 0,
                 v5);
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca36*/
  }
  LOBYTE(result) = this->CacheReadAhead[0]; /*0x65ca3d*/
  if ( (_BYTE)result ) /*0x65ca42*/
  {
    result = *(_DWORD *)this->FileNameAllocated; /*0x65ca44*/
    if ( result ) /*0x65ca49*/
    {
      result = free(*(void **)this->FileNameAllocated); /*0x65ca4c*/
      *(_DWORD *)this->FileNameAllocated = 0; /*0x65ca54*/
      this->CacheReadAhead[0] = 0; /*0x65ca5b*/
    }
  }
  this->FileClass = (FileClass)&FileClass::`vftable'; /*0x65ca5f*/
  return result; /*0x65ca65*/
}



// ==== 0x0065CA70  RawFileClass::StubReturnFalse  this=RawFileClass  sig=csp ====
void __stdcall BufferIOFileClass::StubReturnFalse(RawFileClass *this, int a2, int a3)
{
  ; /*0x65ca70*/
}



// ==== 0x0065CA80  RawFileClass::Construct  this=RawFileClass  sig=csp ====
_DWORD *__thiscall RawFileClass::Construct(BufferIOFileClass *this, int a2)
{
  this->FileName = -1; /*0x65ca87*/
  *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
  LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
  this->FileSize = 0; /*0x65ca94*/
  this->Handle = 0; /*0x65ca97*/
  *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
  *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
  *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
  this->CacheReadAhead[0] = 0; /*0x65caa5*/
  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
  return &this->FileClass; /*0x65caae*/
}



// ==== 0x0065CAC0  RawFileClass::SetName  this=RawFileClass  sig=csp ====
char *__thiscall FileClass::SetName(BufferIOFileClass *this, char *Source)
{
  void *v3; // eax
  char *result; // eax

  v3 = *(void **)this->FileNameAllocated; /*0x65cac4*/
  if ( v3 && this->CacheReadAhead[0] ) /*0x65cacb*/
  {
    free(v3); /*0x65cad3*/
    *(_DWORD *)this->FileNameAllocated = 0; /*0x65cadb*/
    this->CacheReadAhead[0] = 0; /*0x65cae2*/
  }
  if ( !Source ) /*0x65caec*/
    return 0; /*0x65caef*/
  this->Handle = 0; /*0x65caf6*/
  this->FileName = -1; /*0x65cafd*/
  result = _strdup(Source); /*0x65cb04*/
  *(_DWORD *)this->FileNameAllocated = result; /*0x65cb0c*/
  if ( result ) /*0x65cb11*/
  {
    this->CacheReadAhead[0] = 1; /*0x65cb26*/
  }
  else
  {
    (*(void (__thiscall **)(BufferIOFileClass *, int, _DWORD, char *))(*(_DWORD *)&this->FileClass + 64))( /*0x65cb1c*/
      this,
      12,
      0,
      Source);
    return 0; /*0x65cb20*/
  }
  return result; /*0x65caee*/
}



// ==== 0x0065CB30  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall RawFileClass::Close(RawFileClass *this, int a2, int a3)
{
  (*(void (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 8))(this, a2); /*0x65cb3c*/
  return (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, a3); /*0x65cb4b*/
}



// ==== 0x0065CB50  RawFileClass::Open2  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Open2(RawFileClass *this, const CHAR *a2)
{
  const CHAR *v3; // eax
  HANDLE FileA; // eax

  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cb55*/
  v3 = *(const CHAR **)&this->FileNameAllocated; /*0x65cb58*/
  if ( !v3 ) /*0x65cb5d*/
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))(this, 2, 0, 0); /*0x65cb67*/
    return 0; /*0x65cb6d*/
  }
  this->FileSize = (int)a2; /*0x65cb74*/
  if ( a2 == (const CHAR *)1 ) /*0x65cb78*/
  {
    FileA = CreateFileA(v3, 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x65cbbb*/
  }
  else if ( a2 == (const CHAR *)2 ) /*0x65cb7b*/
  {
    FileA = CreateFileA(v3, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x65cba6*/
  }
  else
  {
    if ( a2 != (const CHAR *)3 ) /*0x65cb7e*/
      goto LABEL_10; /*0x65cb7e*/
    FileA = CreateFileA(v3, 0xC0000000, 0, 0, 4u, 0x80u, 0); /*0x65cb92*/
  }
  *(_DWORD *)this->FileTimeDateLo = FileA; /*0x65cbc1*/
LABEL_10:
  if ( this->Handle || this->FileName != (void *)-1 ) /*0x65cbcf*/
    (*(void (__thiscall **)(RawFileClass *, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 40))(this, 0, 0); /*0x65cbd9*/
  return *(_DWORD *)this->FileTimeDateLo != -1; /*0x65cb6c*/
}



// ==== 0x0065CBF0  RawFileClass::Open  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Open(RawFileClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  result = *(_DWORD *)&this->FileNameAllocated; /*0x65cbf4*/
  if ( !result ) /*0x65cbf9*/
  {
    LOBYTE(result) = 0; /*0x65cbfc*/
    return result; /*0x65cbff*/
  }
  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cc06*/
  if ( (_BYTE)result ) /*0x65cc0b*/
    goto LABEL_14; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    result = (int)CreateFileA(*(LPCSTR *)&this->FileNameAllocated, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x65cc59*/
    *(_DWORD *)this->FileTimeDateLo = result; /*0x65cc62*/
    if ( result == -1 ) /*0x65cc65*/
    {
      LOBYTE(result) = 0; /*0x65cc68*/
      return result; /*0x65cc6b*/
    }
    result = CloseHandle((HANDLE)result); /*0x65cc6f*/
    if ( result ) /*0x65cc77*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *(_DWORD *)this->FileClass; /*0x65cc7c*/
    v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(this, (const CHAR *)1); /*0x65cc1d*/
  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cc26*/
  if ( (_BYTE)result ) /*0x65cc2b*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65cc31*/
    if ( result ) /*0x65cc39*/
    {
LABEL_13:
      *(_DWORD *)this->FileTimeDateLo = -1; /*0x65cc8d*/
      goto LABEL_14; /*0x65cc8d*/
    }
    v4 = *(_DWORD *)this->FileClass; /*0x65cc3e*/
    v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65cc40*/
LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    result = (*(int (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v6); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
LABEL_14:
  LOBYTE(result) = 1; /*0x65cc94*/
  return result; /*0x65cbfb*/
}



// ==== 0x0065CCA0  RawFileClass::CloseHandle  this=RawFileClass  sig=csp ====
int __thiscall FileClass::CloseHandle(RawFileClass *this)
{
  int result; // eax
  int v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  result = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this); /*0x65cca5*/
  if ( (_BYTE)result ) /*0x65ccaa*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65ccb0*/
    if ( !result ) /*0x65ccb8*/
    {
      v3 = *(_DWORD *)this->FileClass; /*0x65ccbe*/
      v5 = *(_DWORD *)&this->FileNameAllocated; /*0x65ccc0*/
      LastError = GetLastError(); /*0x65ccc2*/
      result = (*(int (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v3 + 64))(this, LastError, 0, v5); /*0x65cccb*/
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65cccf*/
  }
  return result; /*0x65ccd6*/
}



// ==== 0x0065CCE0  RawFileClass::Read  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Read(RawFileClass *this, char *lpBuffer, signed int nNumberOfBytesToRead)
{
  DWORD v4; // ebx
  int result; // eax
  int v6; // eax
  char *v7; // edi
  int v9; // ebx
  DWORD LastError; // eax
  void *v11; // [esp-1Ch] [ebp-2Ch]
  int v12; // [esp-Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]
  DWORD nNumberOfBytesToReada; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x65cce7*/
  NumberOfBytesRead = 0; /*0x65cce9*/
  v14 = 0; /*0x65cced*/
  if ( !(*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65ccf3*/
  {
    result = (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 1); /*0x65cd00*/
    if ( !result ) /*0x65cd05*/
      return result; /*0x65cd05*/
    v14 = 1; /*0x65cd0f*/
  }
  if ( this->FileName == (void *)-1 ) /*0x65cd1e*/
  {
    v7 = (char *)nNumberOfBytesToRead; /*0x65cd3b*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(RawFileClass *, _DWORD, int))(*(_DWORD *)this->FileClass + 40))(this, 0, 1); /*0x65cd27*/
    v7 = (char *)nNumberOfBytesToRead; /*0x65cd2d*/
    if ( nNumberOfBytesToRead >= (int)this->FileName - v6 ) /*0x65cd35*/
      v7 = (char *)this->FileName - v6; /*0x65cd37*/
  }
  while ( (int)v7 > 0 ) /*0x65cd41*/
  {
    v11 = *(void **)this->FileTimeDateLo; /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, lpBuffer, (DWORD)v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
    {
      lpBuffer += NumberOfBytesRead; /*0x65cd98*/
      v7 -= NumberOfBytesRead; /*0x65cd9a*/
      v4 += NumberOfBytesRead; /*0x65cd9c*/
      if ( !NumberOfBytesRead ) /*0x65cda0*/
        break; /*0x65cda0*/
    }
    else
    {
      lpBuffer += NumberOfBytesRead; /*0x65cd6b*/
      v7 -= NumberOfBytesRead; /*0x65cd6d*/
      v4 += NumberOfBytesRead; /*0x65cd6f*/
      nNumberOfBytesToReada = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      v9 = *(_DWORD *)this->FileClass; /*0x65cd81*/
      v12 = *(_DWORD *)&this->FileNameAllocated; /*0x65cd83*/
      LastError = GetLastError(); /*0x65cd86*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, int, int))(v9 + 64))(this, LastError, 1, v12); /*0x65cd8f*/
      v4 = nNumberOfBytesToReada; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/
}



// ==== 0x0065CDD0  RawFileClass::Write2  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Write2(RawFileClass *this, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  int v5; // edi
  DWORD LastError; // eax
  signed int v7; // eax
  int v8; // ebp
  DWORD v9; // eax
  DWORD v10; // eax
  int v11; // edi
  DWORD v12; // eax
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+28h] [ebp-8h]
  DWORD NumberOfBytesWritten; // [esp+2Ch] [ebp-4h] BYREF

  NumberOfBytesWritten = 0; /*0x65cdd6*/
  v16 = 0; /*0x65cdde*/
  if ( !(*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cde8*/
  {
    result = (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 2); /*0x65cdf5*/
    if ( !result ) /*0x65cdfa*/
      return result; /*0x65cdfa*/
    v16 = 1; /*0x65ce03*/
  }
  if ( !WriteFile(*(HANDLE *)this->FileTimeDateLo, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, 0) ) /*0x65ce22*/
  {
    v5 = *(_DWORD *)this->FileClass; /*0x65ce35*/
    v14 = *(_DWORD *)&this->FileNameAllocated; /*0x65ce37*/
    LastError = GetLastError(); /*0x65ce3a*/
    (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v5 + 64))(this, LastError, 0, v14); /*0x65ce3f*/
  }
  if ( this->FileName == (void *)-1 ) /*0x65ce46*/
    goto LABEL_19; /*0x65ce46*/
  if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65ce51*/
  {
    v7 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, 0, 0, 1u); /*0x65ce79*/
    if ( v7 != -1 ) /*0x65ce7e*/
      goto LABEL_12; /*0x65ce7e*/
    v8 = *(_DWORD *)this->FileClass; /*0x65ce83*/
    v13 = *(_DWORD *)&this->FileNameAllocated; /*0x65ce85*/
    v9 = GetLastError(); /*0x65ce88*/
    (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v8 + 64))(this, v9, 0, v13); /*0x65ce8d*/
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65ce6a*/
      this,
      9,
      0,
      *(_DWORD *)&this->FileNameAllocated);
  }
  v7 = 0; /*0x65ce90*/
LABEL_12:
  if ( v7 > (int)((int)this->FileName + (unsigned int)this->Handle) ) /*0x65ce9d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cea3*/
    {
      v10 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, 0, 0, 1u); /*0x65cec5*/
      if ( v10 != -1 ) /*0x65ceca*/
      {
LABEL_18:
        this->FileName = (void *)(v10 - (unsigned int)this->Handle); /*0x65cede*/
        goto LABEL_19; /*0x65cee1*/
      }
      v11 = *(_DWORD *)this->FileClass; /*0x65cecf*/
      v15 = *(_DWORD *)&this->FileNameAllocated; /*0x65ced1*/
      v12 = GetLastError(); /*0x65ced4*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v11 + 64))(this, v12, 0, v15); /*0x65ced9*/
    }
    else
    {
      (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65ceb6*/
        this,
        9,
        0,
        *(_DWORD *)&this->FileNameAllocated);
    }
    v10 = 0; /*0x65cedc*/
    goto LABEL_18; /*0x65cedc*/
  }
LABEL_19:
  if ( v16 ) /*0x65ceec*/
    (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65cef2*/
  return NumberOfBytesWritten; /*0x65cdfc*/
}



// ==== 0x0065CF00  RawFileClass::Seek  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Seek(RawFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  char *FileName; // ecx
  DWORD v5; // edi
  char *v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  int v9; // edi
  DWORD v10; // eax
  void *Handle; // edi
  int result; // eax
  DWORD v13; // eax
  int v14; // edi
  DWORD v15; // eax
  void *v16; // ecx
  LONG v17; // edi
  DWORD v18; // eax
  int v19; // edi
  DWORD LastError; // eax
  DWORD v21; // edi
  int v22; // edi
  DWORD v23; // eax
  int v24; // [esp-Ch] [ebp-14h]
  int v25; // [esp-Ch] [ebp-14h]
  int v26; // [esp-Ch] [ebp-14h]
  int v27; // [esp-4h] [ebp-Ch]

  FileName = (char *)this->FileName; /*0x65cf04*/
  if ( FileName != (char *)-1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = &FileName[(unsigned int)this->Handle + lDistanceToMove]; /*0x65cf2d*/
      }
      else
      {
        v6 = (char *)lDistanceToMove; /*0x65cf40*/
      }
    }
    else
    {
      v7 = lDistanceToMove; /*0x65cf31*/
      if ( lDistanceToMove > (int)FileName ) /*0x65cf37*/
        v7 = (LONG)FileName; /*0x65cf39*/
      v6 = (char *)this->Handle + v7; /*0x65cf3b*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cf48*/
    {
      if ( v5 ) /*0x65cf6b*/
      {
        if ( v5 == 1 ) /*0x65cf6e*/
        {
          v5 = 1; /*0x65cf7a*/
        }
        else if ( v5 == 2 ) /*0x65cf71*/
        {
          v5 = 2; /*0x65cf73*/
        }
      }
      else
      {
        v5 = 0; /*0x65cf81*/
      }
      v8 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
LABEL_20:
        Handle = this->Handle; /*0x65cfa8*/
        result = v8 - (_DWORD)Handle; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65cfb3*/
        {
          v13 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)Handle, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
LABEL_26:
            Handle = this->Handle; /*0x65cff1*/
            result = v13 - (_DWORD)Handle; /*0x65cff4*/
LABEL_27:
            v16 = this->FileName; /*0x65cff6*/
            if ( result > (int)v16 ) /*0x65cffb*/
            {
              v17 = (LONG)Handle + (_DWORD)v16; /*0x65cfff*/
              if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d003*/
              {
                v18 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  v19 = *(_DWORD *)this->FileClass; /*0x65d03a*/
                  v26 = *(_DWORD *)&this->FileNameAllocated; /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v19 + 64))(this, LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - (unsigned int)this->Handle; /*0x65d04d*/
              }
              else
              {
                (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65d016*/
                  this,
                  9,
                  0,
                  *(_DWORD *)&this->FileNameAllocated);
                return -(int)this->Handle; /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          v14 = *(_DWORD *)this->FileClass; /*0x65cfde*/
          v25 = *(_DWORD *)&this->FileNameAllocated; /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v14 + 64))(this, v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65cfc6*/
            this,
            9,
            0,
            *(_DWORD *)&this->FileNameAllocated);
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      v9 = *(_DWORD *)this->FileClass; /*0x65cf95*/
      v24 = *(_DWORD *)&this->FileNameAllocated; /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v9 + 64))(this, v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65cf61*/
        this,
        9,
        0,
        *(_DWORD *)&this->FileNameAllocated);
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d05f*/
  {
    if ( dwMoveMethod ) /*0x65d081*/
    {
      if ( dwMoveMethod == 1 ) /*0x65d084*/
      {
        v21 = 1; /*0x65d090*/
      }
      else if ( dwMoveMethod == 2 ) /*0x65d087*/
      {
        v21 = 2; /*0x65d089*/
      }
    }
    else
    {
      v21 = 0; /*0x65d097*/
    }
    result = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      v22 = *(_DWORD *)this->FileClass; /*0x65d0b3*/
      v27 = *(_DWORD *)&this->FileNameAllocated; /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v22 + 64))(this, v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))( /*0x65d072*/
      this,
      9,
      0,
      *(_DWORD *)&this->FileNameAllocated);
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/
}



// ==== 0x0065D0D0  RawFileClass::GetFileSize  this=RawFileClass  sig=csp ====
int __thiscall CCFileClass::GetFileSize(RawFileClass *this)
{
  DWORD FileSize; // edi
  int result; // eax
  int v4; // ebx
  DWORD LastError; // eax
  int v6; // [esp-8h] [ebp-10h]

  FileSize = 0; /*0x65d0d4*/
  result = (int)this->FileName; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 24))(this) ) /*0x65d0e0*/
    {
      FileSize = GetFileSize(*(HANDLE *)this->FileTimeDateLo, 0); /*0x65d0f2*/
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        v4 = *(_DWORD *)this->FileClass; /*0x65d0fd*/
        v6 = *(_DWORD *)&this->FileNameAllocated; /*0x65d0ff*/
        LastError = GetLastError(); /*0x65d102*/
        (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v6); /*0x65d10b*/
        result = -1 - (unsigned int)this->Handle; /*0x65d113*/
        this->FileName = (void *)result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( (*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 1) ) /*0x65d122*/
    {
      FileSize = (*(int (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 44))(this); /*0x65d130*/
      (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d136*/
    }
    result = FileSize - (unsigned int)this->Handle; /*0x65d13e*/
    this->FileName = (void *)result; /*0x65d140*/
  }
  return result; /*0x65d119*/
}



// ==== 0x0065D150  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Close(RawFileClass *this)
{
  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d155*/
  if ( !(*(int (__thiscall **)(RawFileClass *, int))(*(_DWORD *)this->FileClass + 28))(this, 2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->FileName != (void *)-1 ) /*0x65d169*/
    (*(void (__thiscall **)(RawFileClass *, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 40))(this, 0, 0); /*0x65d173*/
  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d17a*/
  return 1; /*0x65d182*/
}



// ==== 0x0065D190  RawFileClass::Delete  this=RawFileClass  sig=csp ====
int __thiscall FileClass::Delete(RawFileClass *this)
{
  int v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  (*(void (__thiscall **)(RawFileClass *))(*(_DWORD *)this->FileClass + 52))(this); /*0x65d195*/
  if ( *(_DWORD *)&this->FileNameAllocated ) /*0x65d198*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *, _DWORD))(*(_DWORD *)this->FileClass + 20))(this, 0) ) /*0x65d1b6*/
    {
      if ( DeleteFileA(*(LPCSTR *)&this->FileNameAllocated) ) /*0x65d1c5*/
      {
        return 1; /*0x65d1e8*/
      }
      else
      {
        v3 = *(_DWORD *)this->FileClass; /*0x65d1d3*/
        v5 = *(_DWORD *)&this->FileNameAllocated; /*0x65d1d5*/
        LastError = GetLastError(); /*0x65d1d7*/
        (*(void (__thiscall **)(RawFileClass *, DWORD, _DWORD, int))(v3 + 64))(this, LastError, 0, v5); /*0x65d1e0*/
        return 0; /*0x65d1e4*/
      }
    }
    else
    {
      return 0; /*0x65d1bd*/
    }
  }
  else
  {
    (*(void (__thiscall **)(RawFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->FileClass + 64))(this, 2, 0, 0); /*0x65d1a9*/
    return 0; /*0x65d1ac*/
  }
}



// ==== 0x0065D1F0  RawFileClass::GetDosTimestamp  this=RawFileClass  sig=csp ====
int __thiscall FileClass::GetDosTimestamp(RawFileClass *this)
{
  WORD FatDate[2]; // [esp+0h] [ebp-3Ch] BYREF
  WORD FatTime[2]; // [esp+4h] [ebp-38h] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+8h] [ebp-34h] BYREF

  if ( !GetFileInformationByHandle(*(HANDLE *)this->FileTimeDateLo, &FileInformation) ) /*0x65d1fc*/
    return 0; /*0x65d237*/
  FileTimeToDosDateTime(&FileInformation.ftLastWriteTime, FatDate, FatTime); /*0x65d215*/
  return FatTime[0] | (FatDate[0] << 16); /*0x65d233*/
}



// ==== 0x0065D240  RawFileClass::SetTime  this=RawFileClass  sig=csp ====
bool __thiscall FileClass::SetTime(RawFileClass *this, int wFatTime)
{
  void *v3; // eax
  struct _FILETIME FileTime; // [esp+4h] [ebp-3Ch] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+Ch] [ebp-34h] BYREF

  v3 = *(void **)this->FileTimeDateLo; /*0x65d246*/
  return v3 != (void *)-1 /*0x65d293*/
      && GetFileInformationByHandle(v3, &FileInformation)
      && DosDateTimeToFileTime(HIWORD(wFatTime), wFatTime, &FileTime)
      && SetFileTime(*(HANDLE *)this->FileTimeDateLo, &FileInformation.ftCreationTime, &FileTime, &FileTime);
}



// ==== 0x0065D2B0  FileClass::GetFileSizeOp  this=FileClass  sig=csp ====
void __thiscall FileClass::GetFileSizeOp(RawFileClass *this, int a2, int a3)
{
  int FileSize; // eax
  int Handle; // ecx
  FileClass v6; // edx

  if ( a2 ) /*0x65d2ba*/
  {
    FileSize = CCFileClass::GetFileSize(this); /*0x65d2cd*/
    Handle = this->Handle; /*0x65d2d2*/
    this->FileName = FileSize; /*0x65d2d5*/
    this->Handle = a2 + Handle; /*0x65d2da*/
    if ( a3 != -1 ) /*0x65d2e4*/
    {
      if ( FileSize >= a3 ) /*0x65d2e8*/
        FileSize = a3; /*0x65d2ea*/
      this->FileName = FileSize; /*0x65d2ec*/
    }
    v6 = this->FileClass; /*0x65d2f2*/
    this->FileName &= (this->FileName <= 0) - 1; /*0x65d300*/
    if ( (*(unsigned __int8 (__thiscall **)(RawFileClass *))(*(_DWORD *)&v6 + 24))(this) ) /*0x65d303*/
      FileClass::Seek(this, 0, 0); /*0x65d310*/
  }
  else
  {
    this->Handle = 0; /*0x65d2bc*/
    this->FileName = -1; /*0x65d2bf*/
  }
}



// ==== 0x0065D3A0  RawFileClass::QueryInterface  this=RawFileClass  sig=csp ====
_DWORD *__thiscall RawFileClass::QueryInterface(BufferIOFileClass *this, char a2)
{
  FileClass v3; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65d3a3*/
  if ( RawFileClass::Write(this) ) /*0x65d3a9*/
  {
    if ( !CloseHandle(*(HANDLE *)this->FileTimeDateLo) ) /*0x65d3b7*/
    {
      v3 = this->FileClass; /*0x65d3c5*/
      v6 = *(_DWORD *)this->FileNameAllocated; /*0x65d3c7*/
      LastError = GetLastError(); /*0x65d3c9*/
      (*(void (__thiscall **)(BufferIOFileClass *, DWORD, _DWORD, int))(*(_DWORD *)&v3 + 64))(this, LastError, 0, v6); /*0x65d3d2*/
    }
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65d3d6*/
  }
  if ( this->CacheReadAhead[0] && *(_DWORD *)this->FileNameAllocated ) /*0x65d3e4*/
  {
    free(*(void **)this->FileNameAllocated); /*0x65d3ec*/
    *(_DWORD *)this->FileNameAllocated = 0; /*0x65d3f4*/
    this->CacheReadAhead[0] = 0; /*0x65d3fb*/
  }
  this->FileClass = (FileClass)&FileClass::`vftable'; /*0x65d403*/
  if ( (a2 & 1) != 0 ) /*0x65d40b*/
    __3_YAXPAX_Z(this); /*0x65d40e*/
  return &this->FileClass; /*0x65d418*/
}



// ==== 0x0065D420  RawFileClass::Write  this=RawFileClass  sig=csp ====
BOOL __thiscall RawFileClass::Write(RawFileClass *this)
{
  return *(_DWORD *)this->FileTimeDateLo != -1; /*0x65d42b*/
}



// ==== 0x0065D430  ComPtr::Constructor  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Constructor(ComPtr *this)
{
  this->ComPtr_field_0x04 = 0; /*0x65d432*/
  *(_DWORD *)this->__pad_0 = &rc_ptr_base::`vftable'; /*0x65d439*/
  return this->__pad_0; /*0x65d43f*/
}



// ==== 0x0065D460  ComPtr::Release  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Release(ComPtr *this)
{
  _DWORD *result; // eax
  int ComPtr_field_0x04; // ecx

  result = this->__pad_0; /*0x65d460*/
  ComPtr_field_0x04 = this->ComPtr_field_0x04; /*0x65d462*/
  *result = &rc_ptr_base::`vftable'; /*0x65d465*/
  if ( ComPtr_field_0x04 ) /*0x65d46d*/
  {
    result[1] = 0; /*0x65d46f*/
    return (*(_DWORD *(__thiscall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x65d478*/
  }
  return result; /*0x65d47b*/
}



// ==== 0x0065D480  ComPtr::Set  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Set(ComPtr *this, int a2)
{
  int ComPtr_field_0x04; // ecx
  int result; // eax

  if ( a2 != this->ComPtr_field_0x04 ) /*0x65d48b*/
  {
    if ( a2 ) /*0x65d48f*/
      ++*(_DWORD *)(a2 + 4); /*0x65d491*/
    ComPtr_field_0x04 = this->ComPtr_field_0x04; /*0x65d494*/
    if ( ComPtr_field_0x04 ) /*0x65d499*/
    {
      this->ComPtr_field_0x04 = 0; /*0x65d49b*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x65d4a4*/
    }
    this->ComPtr_field_0x04 = a2; /*0x65d4a7*/
  }
  return result; /*0x65d4aa*/
}



// ==== 0x0065D4D0  AbstractClass::checkAICondition  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall AbstractClass::checkAICondition(AbstractClass *this, char a2)
{
  void *vtable1; // ecx

  vtable1 = this->vtable1; /*0x65d4d3*/
  this->vtable0 = &rc_ptr_base::`vftable'; /*0x65d4d6*/
  if ( vtable1 ) /*0x65d4de*/
  {
    this->vtable1 = 0; /*0x65d4e0*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)vtable1 + 8))(vtable1); /*0x65d4e9*/
  }
  if ( (a2 & 1) != 0 ) /*0x65d4f1*/
    __3_YAXPAX_Z(this); /*0x65d4f4*/
  return &this->vtable0; /*0x65d4fe*/
}



// ==== 0x0065D510  sub_65D510  this=-  sig=ida-proto ====
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
  v10[0] = &FileStraw::`vftable'; /*0x65d530*/
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



// ==== 0x0065D5C0  ReadStreamLine  this=-  sig=csp ====
int __fastcall ReadStreamLine(int a1, const char *a2, int a3, _BYTE *a4)
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



// ==== 0x0065D660  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
void __thiscall ReferenceCounted::Constructor(ReferenceCounted *this)
{
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x65d660*/
}



// ==== 0x0065D670  ReferenceCounted::ReleaseRef  this=ReferenceCounted  sig=csp ====
int __thiscall COMClass::ReleaseRef(ReferenceCounted *this)
{
  int result; // eax

  result = *((_DWORD *)this + 1) - 1; /*0x65d673*/
  *((_DWORD *)this + 1) = result; /*0x65d674*/
  if ( !result ) /*0x65d677*/
  {
    if ( this ) /*0x65d67b*/
      return (**(int (__thiscall ***)(ReferenceCounted *, int))this)(this, 1); /*0x65d681*/
  }
  return result; /*0x65d683*/
}



// ==== 0x0065D690  ReferenceCounted::RetZero_eax_35  this=ReferenceCounted  sig=csp ====
char __stdcall VtableStub::RetZero_eax_35(ReferenceCounted *this)
{
  return 0; /*0x65d692*/
}



// ==== 0x0065D6A0  ReferenceCounted::initInterface  this=ReferenceCounted  sig=csp ====
_DWORD *__thiscall COMClass::initInterface(ReferenceCounted *this, char a2)
{
  *this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x65d6a9*/
  if ( (a2 & 1) != 0 ) /*0x65d6af*/
    __3_YAXPAX_Z(this); /*0x65d6b2*/
  return this; /*0x65d6bc*/
}



// ==== 0x0065D6C0  sub_65D6C0  this=-  sig=ida-proto ====
void sub_65D6C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65d6cc*/
  dbl_B04C40 = Math::Sqrt(v0 + v0); /*0x65d6de*/
}



// ==== 0x0065D6F0  sub_65D6F0  this=-  sig=ida-proto ====
void sub_65D6F0()
{
  dbl_B04C90 = dbl_B04C40 / 60.0; /*0x65d6fc*/
}



// ==== 0x0065D710  sub_65D710  this=-  sig=ida-proto ====
void sub_65D710()
{
  dbl_B04C78 = 1.0 / dbl_B04C90; /*0x65d71c*/
}



// ==== 0x0065D730  sub_65D730  this=-  sig=ida-proto ====
void sub_65D730()
{
  dbl_B04C70 = 0.0174532925199433 * 45.0; /*0x65d73c*/
}



// ==== 0x0065D750  sub_65D750  this=-  sig=ida-proto ====
void sub_65D750()
{
  dbl_B04C48 = 0.0174532925199433 * 60.0; /*0x65d75c*/
}



// ==== 0x0065D770  sub_65D770  this=-  sig=ida-proto ====
void sub_65D770()
{
  dbl_B04C20 = 0.0174532925199433 * 90.0; /*0x65d77c*/
}



// ==== 0x0065D790  sub_65D790  this=-  sig=ida-proto ====
__int64 sub_65D790()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04C20 - dbl_B04C48); /*0x65d7a2*/
  result = Math::RoundToInt(v0 * dbl_B04C40 * 0.5); /*0x65d7b6*/
  dword_B04C98 = result; /*0x65d7bb*/
  return result; /*0x65d7c0*/
}



// ==== 0x0065D7D0  sub_65D7D0  this=-  sig=ida-proto ====
void sub_65D7D0()
{
  dbl_B04C50 = Math::ArcTan((double)dword_B04C98 * 0.00390625); /*0x65d7e7*/
}



// ==== 0x0065D800  sub_65D800  this=-  sig=ida-proto ====
void sub_65D800()
{
  dbl_B04C68 = Math::ArcTan((double)(2 * dword_B04C98) / dbl_B04C40); /*0x65d822*/
}



// ==== 0x0065D830  sub_65D830  this=-  sig=ida-proto ====
__int64 sub_65D830()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04C98) + 0.5); /*0x65d84b*/
  dword_B04C8C = result; /*0x65d850*/
  return result; /*0x65d856*/
}



// ==== 0x0065D860  sub_65D860  this=-  sig=ida-proto ====
int sub_65D860()
{
  dword_B04C38 = 0; /*0x65d862*/
  return 0; /*0x65d86e*/
}



// ==== 0x0065D870  sub_65D870  this=-  sig=ida-proto ====
int sub_65D870()
{
  dword_B04C58 = 0; /*0x65d872*/
  dword_B04C5C = 0; /*0x65d877*/
  dword_B04C60 = 0; /*0x65d87c*/
  return 0; /*0x65d881*/
}



// ==== 0x0065D890  sub_65D890  this=-  sig=ida-proto ====
int sub_65D890()
{
  dword_B04C88 = 0; /*0x65d895*/
  dword_B04C80 = 128; /*0x65d89f*/
  dword_B04C84 = 128; /*0x65d8a4*/
  return 128; /*0x65d8a9*/
}



// ==== 0x0065D8B0  sub_65D8B0  this=-  sig=ida-proto ====
int sub_65D8B0()
{
  dword_B04C28 = 0; /*0x65d8b2*/
  dword_B04C2C = 0; /*0x65d8b7*/
  dword_B04C30 = 0; /*0x65d8bc*/
  dword_B04C34 = 0; /*0x65d8c1*/
  return 0; /*0x65d8c6*/
}



// ==== 0x0065D8D0  ReturnFalse3  this=-  sig=ida-proto ====
char ReturnFalse3()
{
  return 0; /*0x65d8d2*/
}



// ==== 0x0065D8E0  DeployScriptActionPlane  this=TeamTypeClass  sig=ida-proto ====
bool __usercall DeployScriptActionPlane@<al>(int a1@<ecx>, int a2@<edx>, double a3@<st0>)
{
  int v3; // edi
  int v5; // eax
  ScriptTypeClass *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  int v11; // ecx
  bool v12; // bl
  int *Waypoint_Location; // eax
  int v14; // eax
  _DWORD *v15; // esi
  ObjectClass *v16; // edi
  Cell *v17; // ebx
  signed int v18; // ebp
  Cell *NeighbourContent; // eax
  ObjectClass *v20; // eax
  ObjectClass *v21; // esi
  _DWORD *v22; // ebp
  int v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  int v26; // eax
  char IsWithinUsableArea; // al
  #375 *OwnerHouse; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // esi
  _DWORD *TransportWaypoint; // eax
  int v34; // ecx
  int *TransitionCount; // eax
  _DWORD *v36; // edi
  int v37; // eax
  int v38; // ebx
  void *v39; // eax
  char v40; // al
  #375 *v41; // [esp+0h] [ebp-34h]
  int v42; // [esp+4h] [ebp-30h]
  bool v43; // [esp+16h] [ebp-1Eh]
  bool v44; // [esp+17h] [ebp-1Dh]
  ScriptActionQueue v45; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD *v46; // [esp+1Ch] [ebp-18h] BYREF
  ScriptActionQueue v47; // [esp+20h] [ebp-14h]
  __int16 v48[2]; // [esp+24h] [ebp-10h] BYREF
  _DWORD v49[3]; // [esp+28h] [ebp-Ch] BYREF

  v3 = a1; /*0x65d8e7*/
  *(_DWORD *)v48 = a2; /*0x65d8ed*/
  v47 = (ScriptActionQueue)a1; /*0x65d8f1*/
  if ( !a1 || !*(_DWORD *)(*(_DWORD *)(a1 + 228) + 156) ) /*0x65d901*/
    return 0; /*0x65d901*/
  v5 = *(_DWORD *)(a1 + 224); /*0x65d90f*/
  if ( !v5 || !*(_DWORD *)(v5 + 160) ) /*0x65d919*/
  {
    if ( !v5 ) /*0x65d92c*/
    {
      v6 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x65d933*/
      if ( v6 ) /*0x65d93d*/
        v7 = ScriptTypeClass::Constructor(v6, 0); /*0x65d942*/
      else
        v7 = 0; /*0x65d949*/
      *(_DWORD *)(v3 + 224) = v7; /*0x65d94b*/
    }
    v8 = *(_DWORD *)(v3 + 224); /*0x65d951*/
    v9 = *(_DWORD *)(v8 + 160); /*0x65d957*/
    if ( v9 < 50 ) /*0x65d960*/
    {
      *(_DWORD *)(v8 + 8 * v9 + 164) = 5; /*0x65d962*/
      *(_DWORD *)(v8 + 8 * v9 + 168) = 0; /*0x65d969*/
      ++*(_DWORD *)(v8 + 160); /*0x65d970*/
    }
  }
  v43 = *(_BYTE *)(v3 + 176) != 0; /*0x65d985*/
  v10 = ConstructTeamMembers((ObjectClass *)v3); /*0x65d991*/
  v11 = v10[373]; /*0x65d995*/
  v46 = v10; /*0x65d99b*/
  *(_BYTE *)(v11 + 116) = 0; /*0x65d99f*/
  if ( !v10 ) /*0x65d9a3*/
    return 0; /*0x65dd1e*/
  v12 = a2 != -1; /*0x65d9ac*/
  v44 = v12; /*0x65d9b1*/
  if ( v12 ) /*0x65d9b5*/
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v48, *(int *)v48); /*0x65d9c7*/
  else
    Waypoint_Location = TechnoClass::GetWaypointCoords((TechnoClass *)v3, v48); /*0x65d9d5*/
  v14 = *Waypoint_Location; /*0x65d9de*/
  v45 = (ScriptActionQueue)v14; /*0x65d9e2*/
  if ( !v43 && __PAIR32__(*(unsigned __int16 *)&v45.__tail_0[2], v14) != dword_B04C38 ) /*0x65d9f3*/
  {
    v15 = v10; /*0x65da07*/
    do /*0x65da1e*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v15 + 44))(v15) != 15 ) /*0x65da13*/
        goto LABEL_44; /*0x65da13*/
      v15 = (_DWORD *)v15[12]; /*0x65da19*/
    }
    while ( v15 ); /*0x65da1e*/
    *(ScriptActionQueue *)v48 = v45; /*0x65da28*/
    v16 = 0; /*0x65da37*/
    v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x65da39*/
    v18 = -1; /*0x65da3b*/
    do /*0x65da72*/
    {
      NeighbourContent = v17; /*0x65da41*/
      if ( v18 != -1 ) /*0x65da43*/
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(v17, v18); /*0x65da48*/
      v20 = (ObjectClass *)Cell::IsBridge(NeighbourContent); /*0x65da4f*/
      v21 = v20; /*0x65da54*/
      if ( v20 && v20->health > 0 && ProcessDataCellClass(v20) ) /*0x65da63*/
        v16 = v21; /*0x65da6c*/
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
        v25 = v22; /*0x65da8d*/
        v22 = (_DWORD *)v22[12]; /*0x65da91*/
        *v24 = 0; /*0x65da93*/
        v26 = (*((int (__thiscall **)(ObjectClass *))v16->AbstractClass + 11))(v16); /*0x65da9b*/
        if ( v26 <= 0 ) /*0x65daa0*/
          goto LABEL_39; /*0x65daa0*/
        if ( v26 <= 2 ) /*0x65daa5*/
        {
          CellClass::AddObject((CellClass *)&v16[1].bombVisible, v25); /*0x65dadd*/
          (*(void (__thiscall **)(_DWORD *))(*v25 + 284))(v25); /*0x65dae6*/
          (*((void (__thiscall **)(ObjectClass *, int, _DWORD))v16->AbstractClass + 122))(v16, 16, 0); /*0x65daf4*/
          ++v23; /*0x65dafa*/
          goto LABEL_41; /*0x65dafb*/
        }
        if ( v26 == 6 ) /*0x65daaa*/
        {
          if ( (*((int (__thiscall **)(ObjectClass *, _DWORD *, ScriptActionQueue))v16->AbstractClass + 64))( /*0x65dabf*/
                 v16,
                 v25,
                 v47) == 2 )
          {
            (*((void (__thiscall **)(ObjectClass *, int))v16->AbstractClass + 157))(v16, 3); /*0x65dacd*/
            ++v23; /*0x65dad3*/
          }
          else if ( v25 ) /*0x65dac3*/
          {
            goto LABEL_40; /*0x65dac3*/
          }
        }
        else
        {
LABEL_39:
          if ( v25 ) /*0x65daff*/
LABEL_40:
            (*(void (__thiscall **)(_DWORD *, int))(*v25 + 32))(v25, 1); /*0x65db01*/
        }
LABEL_41:
        if ( !v22 ) /*0x65db0c*/
          return v23 != 0; /*0x65db20*/
      }
    }
    v3 = (int)v47; /*0x65db21*/
    v10 = v46; /*0x65db25*/
    v12 = v44; /*0x65db29*/
  }
LABEL_44:
  if ( !v12 /*0x65db49*/
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               (__int16 *)&v45,
                               1),
        LOBYTE(v46) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(v46) = 0; /*0x65db4b*/
  }
  if ( !v43 ) /*0x65db56*/
  {
    if ( MoveScriptTypeClassToWaypoint(v3, v10, (int *)&v45, (int)v46) ) /*0x65db66*/
      goto LABEL_49; /*0x65db6d*/
    return 1; /*0x65dba5*/
  }
  *(ScriptActionQueue *)v48 = v45; /*0x65dbaf*/
  v30 = *((_DWORD *)dword_A8B21C + TypeClass::FindByName(&g_INI_Key_PDPLANE)); /*0x65dbc8*/
  ++dword_A8E7AC; /*0x65dbca*/
  v31 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v30 + 140))(v30, v10[135]); /*0x65dbd9*/
  v32 = v31; /*0x65dbe5*/
  --dword_A8E7AC; /*0x65dbea*/
  if ( !v31 ) /*0x65dbf0*/
    return 1; /*0x65dbf0*/
  *(_BYTE *)(v31 + 980) = 1; /*0x65dbf2*/
  if ( *(_BYTE *)(v3 + 177) ) /*0x65dbf9*/
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
  v36 = (_DWORD *)*TransportWaypoint; /*0x65dc4b*/
  v37 = *(_DWORD *)v32; /*0x65dc4d*/
  v46 = v36; /*0x65dc55*/
  (*(void (__thiscall **)(int, int, _DWORD))(v37 + 488))(v32, 26, 0); /*0x65dc59*/
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v32 + 1152))(v32, 0, 1); /*0x65dc67*/
  v38 = *(_DWORD *)v32; /*0x65dc6d*/
  v39 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x65dc79*/
  (*(void (__thiscall **)(int, void *))(v38 + 968))(v32, v39); /*0x65dc81*/
  ++dword_A8E7AC; /*0x65dc95*/
  Coord::Subtract((Coord *)v49, ((__int16)v36 << 8) + 128, (SHIWORD(v46) << 8) + 128, 0); /*0x65dcb6*/
  v40 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v32 + 216))(v32, v49, 0); /*0x65dcc6*/
  --dword_A8E7AC; /*0x65dcda*/
  if ( v40 ) /*0x65dce0*/
  {
    *(_BYTE *)(v32 + 1737) = 1; /*0x65dce9*/
    CellClass::AddObject((CellClass *)(v32 + 276), v10); /*0x65dcf0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 492))(v32); /*0x65dcf9*/
    v3 = (int)v47; /*0x65dcff*/
LABEL_49:
    if ( Techno::GetOwnerHouse(v3) ) /*0x65db71*/
    {
      v41 = (#375 *)dword_A83D4C; /*0x65db80*/
      OwnerHouse = (#375 *)Techno::GetOwnerHouse(v3); /*0x65db83*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v41) ) /*0x65db8a*/
        ScriptActionQueue::PushNext(&v45); /*0x65db97*/
    }
    return 1; /*0x65db97*/
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 32))(v32, 1); /*0x65dd0e*/
  return 1; /*0x65db14*/
}



// ==== 0x0065DD30  ObjectClass::ConstructTeamMembers  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ConstructTeamMembers(ObjectClass *this)
{
  int v2; // esi
  int OwnerHouse; // eax
  int v4; // eax
  ObjectClass *v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // edx
  _DWORD *result; // eax
  int v22; // ecx
  float v23; // [esp+4h] [ebp-34h]
  char v24; // [esp+1Dh] [ebp-1Bh]
  char v25; // [esp+1Eh] [ebp-1Ah]
  char v26; // [esp+1Fh] [ebp-19h]
  _DWORD *v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h]
  int v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]
  int v31; // [esp+30h] [ebp-8h]

  v2 = __2_YAPAXI_Z(0xA0u); /*0x65dd43*/
  if ( v2 ) /*0x65dd4a*/
  {
    OwnerHouse = Techno::GetOwnerHouse((int)this); /*0x65dd50*/
    v4 = MissionClass::Construct(v2, (int)this, OwnerHouse, 0); /*0x65dd59*/
    v5 = (ObjectClass *)v4; /*0x65dd5e*/
    if ( v4 ) /*0x65dd62*/
    {
      *(_BYTE *)(v4 + 119) = 1; /*0x65dd64*/
      *(_BYTE *)(v4 + 122) = 0; /*0x65dd68*/
    }
  }
  else
  {
    v5 = 0; /*0x65dda0*/
  }
  v6 = this->attachedBomb; /*0x65dd6c*/
  v7 = 0; /*0x65dd72*/
  v25 = 0; /*0x65dd74*/
  v8 = *(_DWORD *)(v6 + 160); /*0x65dd79*/
  if ( v8 > 0 ) /*0x65dd81*/
  {
    v9 = (_DWORD *)(v6 + 164); /*0x65dd83*/
    while ( *v9 != 8 ) /*0x65dd94*/
    {
      ++v7; /*0x65dd96*/
      v9 += 2; /*0x65dd97*/
      if ( v7 >= v8 ) /*0x65dd9c*/
        goto LABEL_11; /*0x65dd9c*/
    }
    v25 = 1; /*0x65dda4*/
  }
LABEL_11:
  v26 = Team_Create(v5); /*0x65dda9*/
  v10 = this->u32_39; /*0x65ddb4*/
  v11 = 0; /*0x65ddba*/
  v24 = 0; /*0x65ddbc*/
  v12 = *(_DWORD *)(v10 + 156); /*0x65ddc1*/
  if ( v12 > 0 ) /*0x65ddc9*/
  {
    v13 = v10 + 168; /*0x65ddcb*/
    while ( !*(_BYTE *)(*(_DWORD *)v13 + 3278) ) /*0x65ddda*/
    {
      ++v11; /*0x65dddc*/
      v13 += 8; /*0x65dddd*/
      if ( v11 >= v12 ) /*0x65dde2*/
        goto LABEL_17; /*0x65dde2*/
    }
    v24 = 1; /*0x65dde6*/
  }
LABEL_17:
  v14 = 0; /*0x65ddeb*/
  v15 = 0; /*0x65dded*/
  v28 = 0; /*0x65ddf1*/
  v27 = 0; /*0x65ddf5*/
  v29 = 0; /*0x65ddf9*/
  if ( v12 <= 0 ) /*0x65ddfd*/
    goto LABEL_50; /*0x65ddfd*/
  do /*0x65df5d*/
  {
    v16 = *(_DWORD *)(v10 + 8 * v14 + 168); /*0x65de0a*/
    v30 = 0; /*0x65de13*/
    if ( *(int *)(v10 + 8 * v14 + 164) <= 0 ) /*0x65de1b*/
      goto LABEL_38; /*0x65de1b*/
    do /*0x65df42*/
    {
      ++dword_A8E7AC; /*0x65de28*/
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 140))(v16, v5->fallRate); /*0x65de42*/
      --dword_A8E7AC; /*0x65de47*/
      if ( !v17 ) /*0x65de4d*/
        goto LABEL_36; /*0x65de4d*/
      v31 = *(_DWORD *)(v16 + 2048); /*0x65de5b*/
      if ( v31 > 0 && BYTE1(this->location[2]) ) /*0x65de61*/
      {
        __asm { fild [esp+2Ch+var_8] } /*0x65de6b*/
        __asm { fstp [esp+34h+var_34]; float }
        Float::Accumulate((int *)(v17 + 828), v23, 0); /*0x65de7b*/
        __asm { fstp st } /*0x65de80*/
      }
      v18 = this->location[1]; /*0x65de82*/
      if ( v18 ) /*0x65de8b*/
      {
        v19 = v18 - 2; /*0x65de8d*/
        if ( v19 ) /*0x65de90*/
        {
          if ( v19 == 1 ) /*0x65de93*/
            Timer::SetFlag((Timer *)(v17 + 336), 1); /*0x65de9d*/
        }
        else
        {
          Power::ChangedHouse((Power *)(v17 + 336), 1); /*0x65deac*/
        }
      }
      else
      {
        Team_Create_750060((ObjectClass *)(v17 + 336), 1); /*0x65debb*/
      }
      if ( v5 ) /*0x65dec2*/
      {
        ++dword_A8E7AC; /*0x65decf*/
        TeamClass::AddMember((int *)v5, v17, 0); /*0x65ded4*/
        --dword_A8E7AC; /*0x65dedf*/
        *(_BYTE *)(v17 + 1673) = 1; /*0x65dee4*/
      }
      if ( *(int *)(v16 + 1504) <= 0 || !BYTE1(this->location[2]) ) /*0x65def5*/
        goto LABEL_35; /*0x65def5*/
      if ( v26 ) /*0x65df05*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) != 2 ) /*0x65df15*/
          goto LABEL_35; /*0x65df15*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) != 1 ) /*0x65dfbc*/
      {
        goto LABEL_35; /*0x65dfbc*/
      }
      if ( !*(_BYTE *)(v16 + 3278) && v24 ) /*0x65dfd2*/
      {
LABEL_35:
        v20 = v27; /*0x65df1b*/
        v27 = (_DWORD *)v17; /*0x65df1f*/
        *(_DWORD *)(v17 + 48) = v20; /*0x65df23*/
        goto LABEL_36; /*0x65df23*/
      }
      v22 = v28; /*0x65dfd8*/
      v28 = v17; /*0x65dfdc*/
      *(_DWORD *)(v17 + 48) = v22; /*0x65dfe0*/
LABEL_36:
      v14 = v29; /*0x65df26*/
      ++v30; /*0x65df3e*/
    }
    while ( v30 < *(_DWORD *)(this->u32_39 + 8 * v29 + 164) ); /*0x65df42*/
    v15 = v28; /*0x65df48*/
LABEL_38:
    v10 = this->u32_39; /*0x65df4c*/
    v29 = ++v14; /*0x65df53*/
  }
  while ( v14 < *(_DWORD *)(v10 + 156) ); /*0x65df5d*/
  result = v27; /*0x65df63*/
  if ( v15 ) /*0x65df69*/
  {
    if ( !v27 ) /*0x65df6d*/
      return (_DWORD *)v15; /*0x65df6d*/
    if ( !BYTE1(this->location[2]) ) /*0x65df73*/
      return (_DWORD *)v15; /*0x65df73*/
    CellClass::AddObject((CellClass *)(v15 + 276), v27); /*0x65df88*/
    if ( !v25 || (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) != 2 ) /*0x65df9f*/
      return (_DWORD *)v15; /*0x65e004*/
    *(_BYTE *)(v15 + 980) = 1; /*0x65dfa1*/
    return (_DWORD *)v15; /*0x65dfb1*/
  }
  if ( v27 ) /*0x65dfea*/
    return result; /*0x65dfea*/
LABEL_50:
  if ( v5 ) /*0x65dfee*/
    (*((void (__thiscall **)(ObjectClass *, int))v5->AbstractClass + 8))(v5, 1); /*0x65dff7*/
  return 0; /*0x65dfaa*/
}



// ==== 0x0065E010  MoveScriptTypeClassToWaypoint  this=ObjectClass  sig=csp ====
char __fastcall ScriptTypeClass_MoveToWaypoint(int a1, _DWORD *a2, int *a3, int a4)
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
  __int16 v15; // si
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

  v4 = a1; /*0x65e016*/
  v5 = a2; /*0x65e019*/
  v6 = *(_BYTE *)(a1 + 176); /*0x65e01b*/
  v50 = (_DWORD *)a1; /*0x65e021*/
  LOBYTE(v48) = v6 != 0; /*0x65e02e*/
  v7 = a2; /*0x65e035*/
  if ( a2 ) /*0x65e037*/
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
    HIBYTE(v48) = 0; /*0x65e0c7*/
  }
  else
  {
LABEL_5:
    HIBYTE(v48) = 1; /*0x65e064*/
  }
  v52 = 0; /*0x65e072*/
  v51 = *a3; /*0x65e07e*/
  if ( v48 || (_BYTE)a4 ) /*0x65e095*/
  {
    v11 = *v5; /*0x65e0e5*/
    a4 = 0; /*0x65e0ee*/
    v12 = (*(int (__thiscall **)(_DWORD *))(v11 + 132))(v5); /*0x65e0fe*/
    v10 = *LayerClass::Pathfinding_Find( /*0x65e122*/
             &dword_87F7E8,
             (int)&v51,
             &a3,
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
             (__int16 *)&a4,
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
  LOBYTE(a4) = 0; /*0x65e143*/
  if ( __PAIR32__(HIWORD(v51), v10) != dword_B04C38 ) /*0x65e14a*/
  {
    while ( 1 ) /*0x65e1d5*/
    {
      while ( 1 ) /*0x65e15e*/
      {
        if ( v49 == dword_B04C38 || !v5 ) /*0x65e17f*/
        {
          v14 = a4; /*0x65e611*/
          goto LABEL_53; /*0x65e611*/
        }
        v15 = v52; /*0x65e185*/
        v16 = *v5; /*0x65e189*/
        LOWORD(v53) = (_WORD)v52 << 13; /*0x65e191*/
        if ( (*(int (__thiscall **)(_DWORD *))(v16 + 44))(v5) == 2 ) /*0x65e19e*/
        {
          LOWORD(v56) = ((v15 << 13) - 24577) & 0xE000; /*0x65e1af*/
          v17 = v56; /*0x65e1b4*/
          v53 = v56; /*0x65e1b8*/
        }
        else
        {
          v17 = v53; /*0x65e1be*/
        }
        ++dword_A8E7AC; /*0x65e1cf*/
        if ( !(_BYTE)v48 ) /*0x65e1d5*/
          break; /*0x65e1d5*/
        v18 = *v5; /*0x65e1e5*/
        v57[2] = 0; /*0x65e1e8*/
        v57[0] = ((__int16)v49 << 8) + 128; /*0x65e1fb*/
        v57[1] = (SHIWORD(v49) << 8) + 128; /*0x65e209*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(v18 + 436))(v5, v57); /*0x65e210*/
        v19 = *v5; /*0x65e216*/
        v20 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e225*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v19 + 1152))(v5, v20, 1); /*0x65e22d*/
        if ( !v5[413] ) /*0x65e23d*/
          WinAPI::Wrapper(-2147467261); /*0x65e260*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e27b*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
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
        LOBYTE(a4) = 1; /*0x65e447*/
        if ( (*(int (__thiscall **)(_DWORD *))(v36 + 44))(v5) != 2 ) /*0x65e455*/
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
            v39 = HIWORD(v49) + HIWORD(dword_89F688[v38]); /*0x65e499*/
            LOWORD(v54) = LOWORD(dword_89F688[v38]) + v49; /*0x65e4a5*/
            HIWORD(v54) = v39; /*0x65e4b1*/
            a3 = v54; /*0x65e4c0*/
            if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3) ) /*0x65e4c7*/
              break; /*0x65e4c7*/
            if ( ++v37 >= 8 ) /*0x65e4d4*/
            {
              v49 = dword_B04C38; /*0x65e4db*/
              goto LABEL_46; /*0x65e4df*/
            }
          }
          v49 = (int)a3; /*0x65e4ee*/
        }
LABEL_46:
        v5 = v13; /*0x65e5ae*/
        --dword_A8E7AC; /*0x65e5b9*/
        if ( v13 ) /*0x65e5bf*/
        {
          v45 = v13 + 12; /*0x65e5c8*/
          v50 = (_DWORD *)v13[12]; /*0x65e5cb*/
          v13 = v50; /*0x65e5cf*/
          *v45 = 0; /*0x65e5d1*/
        }
      }
      if ( HIBYTE(v48) ) /*0x65e2d9*/
      {
        v22 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e2ee*/
        Coords = CellClass::GetCoords(v22, v61); /*0x65e2f5*/
        v24 = *Coords; /*0x65e2fa*/
        v25 = Coords[1]; /*0x65e2fc*/
        v26 = Coords[2]; /*0x65e2ff*/
        v59[1] = v25; /*0x65e302*/
        v27 = *v5; /*0x65e306*/
        v59[2] = v26 - 400; /*0x65e312*/
        v59[0] = v24; /*0x65e322*/
        LOBYTE(a3) = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v27 + 216))( /*0x65e332*/
                       v5,
                       v59,
                       (unsigned __int8)(((v17 >> 7) + 1) >> 1));
        if ( !(_BYTE)a3 ) /*0x65e339*/
          goto LABEL_39; /*0x65e339*/
        v28 = (*(int (__thiscall **)(_DWORD *))(*v5 + 464))(v5); /*0x65e344*/
        v60[0] = v5[39]; /*0x65e35b*/
        v60[1] = v5[40]; /*0x65e367*/
        v29 = *v5; /*0x65e36b*/
        v60[2] = v5[41] + -256 - v28; /*0x65e373*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(v29 + 436))(v5, v60); /*0x65e379*/
        v30 = *v5; /*0x65e37f*/
        v31 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e38e*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v30 + 1152))(v5, v31, 1); /*0x65e396*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1348))(v5, 0, 1072693248); /*0x65e3a8*/
        if ( !v5[413] ) /*0x65e3b8*/
          WinAPI::Wrapper(-2147467261); /*0x65e3db*/
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v5[413] + 68))( /*0x65e3f6*/
          v5[413],
          ((__int16)v49 << 8) + 128,
          (SHIWORD(v49) << 8) + 128,
          0);
        v32 = (char)a3; /*0x65e3f9*/
        v13 = v50; /*0x65e400*/
      }
      else
      {
        v33 = *v5; /*0x65e40a*/
        v34 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v49); /*0x65e425*/
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
        v42 = HIWORD(dword_89F688[v41]); /*0x65e521*/
        LOWORD(v55) = LOWORD(dword_89F688[v41]) + v49; /*0x65e529*/
        HIWORD(v55) = HIWORD(v49) + v42; /*0x65e53b*/
        a3 = v55; /*0x65e544*/
        if ( !LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3) ) /*0x65e550*/
        {
          v43 = *v5; /*0x65e559*/
          v44 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3); /*0x65e570*/
          if ( !(*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v43 + 428))(v5, v44, v40, -1, 0, 1) ) /*0x65e578*/
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
      v49 = (int)a3; /*0x65e594*/
      if ( a3 == (int *)dword_B04C38 ) /*0x65e5e3*/
        goto LABEL_45; /*0x65e5e3*/
      --dword_A8E7AC; /*0x65e5f6*/
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



// ==== 0x0065E650  sub_65E650  this=-  sig=csp ====
char __stdcall sub_65E650(int a1, int a2, int a3)
{
  return 0; /*0x65e652*/
}



// ==== 0x0065E660  SpawnSuperWeaponUnits  this=-  sig=csp ====
int __userpurge SpawnSuperWeaponUnits@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
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
  _DWORD *v21; // edi
  int v23; // [esp+14h] [ebp-30h]
  int v24; // [esp+24h] [ebp-20h]
  unsigned int *v25; // [esp+28h] [ebp-1Ch]
  int v26; // [esp+2Ch] [ebp-18h]
  int v27; // [esp+34h] [ebp-10h] BYREF
  _DWORD v28[3]; // [esp+38h] [ebp-Ch] BYREF

  v10 = *((_DWORD *)dword_A8B21C + a2); /*0x65e66c*/
  v11 = 0; /*0x65e673*/
  v25 = (unsigned int *)a1; /*0x65e679*/
  v26 = v10; /*0x65e67d*/
  v24 = 0; /*0x65e681*/
  if ( a4 > 0 ) /*0x65e685*/
  {
    while ( 1 ) /*0x65e699*/
    {
      ++dword_A8E7AC; /*0x65e699*/
      v12 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v10 + 140))(v10, a1); /*0x65e6a1*/
      v13 = v12; /*0x65e6ad*/
      --dword_A8E7AC; /*0x65e6b2*/
      if ( !v12 ) /*0x65e6b8*/
        break; /*0x65e6b8*/
      *(_BYTE *)(v12 + 980) = 1; /*0x65e6be*/
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
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, a5, 0); /*0x65e70c*/
      if ( a7 ) /*0x65e718*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 1152))(v13, a7, 1); /*0x65e721*/
      if ( a6 ) /*0x65e72d*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 968))(v13, a6); /*0x65e734*/
      v28[0] = ((__int16)v15 << 8) + 128; /*0x65e756*/
      ++dword_A8E7AC; /*0x65e760*/
      v16 = *(_DWORD *)v13; /*0x65e766*/
      v28[1] = (SHIWORD(v15) << 8) + 128; /*0x65e76c*/
      v28[2] = 0; /*0x65e773*/
      v17 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v16 + 216))(v13, v28, 0); /*0x65e77b*/
      --dword_A8E7AC; /*0x65e78f*/
      if ( !v17 ) /*0x65e795*/
      {
        if ( v13 ) /*0x65e82e*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x65e836*/
        return v11 - 1; /*0x65e83a*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 2 && a8 != -1 && a9 ) /*0x65e7b6*/
      {
        *(_BYTE *)(v13 + 1737) = 1; /*0x65e7b8*/
        v18 = *((_DWORD *)dword_A8E34C + a8); /*0x65e7c5*/
        if ( v18 ) /*0x65e7ca*/
        {
          v19 = a9; /*0x65e7cc*/
          do /*0x65e7fb*/
          {
            v20 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v18 + 140))(v18, v25); /*0x65e7d8*/
            v21 = (_DWORD *)v20; /*0x65e7de*/
            if ( v20 ) /*0x65e7e2*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 212))(v20); /*0x65e7e8*/
              CellClass::AddObject((CellClass *)(v13 + 276), v21); /*0x65e7f5*/
            }
            --v19; /*0x65e7fa*/
          }
          while ( v19 ); /*0x65e7fb*/
          a1 = (HouseClass *)v25; /*0x65e7fd*/
        }
        v11 = v24; /*0x65e801*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 492))(v13); /*0x65e809*/
      v24 = ++v11; /*0x65e816*/
      if ( v11 >= a4 ) /*0x65e81a*/
        return v11; /*0x65e81a*/
      v10 = v26; /*0x65e68d*/
    }
  }
  return v11; /*0x65e820*/
}



// ==== 0x0065E850  PlaceAircraftOnMap  this=-  sig=csp ====
int __userpurge PlaceAircraftOnMap@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
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
  _DWORD *v23; // edi
  int v25; // [esp+14h] [ebp-38h]
  int v26; // [esp+24h] [ebp-28h]
  int v27; // [esp+28h] [ebp-24h] BYREF
  HouseClass *v28; // [esp+2Ch] [ebp-20h]
  int v29; // [esp+30h] [ebp-1Ch] BYREF
  int v30; // [esp+34h] [ebp-18h] BYREF
  int v31; // [esp+38h] [ebp-14h]
  int v32; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD v33[3]; // [esp+40h] [ebp-Ch] BYREF

  v10 = *((_DWORD *)dword_A8B21C + a2); /*0x65e85b*/
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
      v13 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v10 + 140))(v10, v11); /*0x65e8cf*/
      v14 = v13; /*0x65e8db*/
      --dword_A8E7AC; /*0x65e8e0*/
      if ( !v13 ) /*0x65e8e6*/
        break; /*0x65e8e6*/
      v15 = *(_BYTE *)(v13 + 20) & 4; /*0x65e8f3*/
      *(_DWORD *)(v14 + 660) = a10; /*0x65e8f5*/
      *(_BYTE *)(v14 + 980) = 1; /*0x65e8ff*/
      v16 = v15 != 0 ? v14 : 0;
      if ( a10 && v16 ) /*0x65e90e*/
      {
        *(_DWORD *)(v16 + 1496) = *(_DWORD *)(a10 + 92); /*0x65e913*/
        *(_DWORD *)(a10 + 92) = v16; /*0x65e919*/
      }
      v27 = 0; /*0x65e945*/
      v17 = *LayerClass::Pathfinding_Find( /*0x65e954*/
               (Type *)&stru_87F5F0.__pad_58[416],
               (int)&v27,
               &v32,
               (__int16 *)&v30,
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
               (__int16 *)&v27,
               0,
               0);
      v18 = *(_DWORD *)v14; /*0x65e956*/
      v29 = v17; /*0x65e960*/
      (*(void (__thiscall **)(int, int, _DWORD))(v18 + 488))(v14, a5, 0); /*0x65e964*/
      if ( a7 ) /*0x65e970*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 1152))(v14, a7, 1); /*0x65e979*/
      if ( a6 ) /*0x65e985*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 968))(v14, a6); /*0x65e98c*/
      v33[0] = ((__int16)v17 << 8) + 128; /*0x65e9ad*/
      ++dword_A8E7AC; /*0x65e9b7*/
      v19 = *(_DWORD *)v14; /*0x65e9bd*/
      v33[1] = (SHIWORD(v29) << 8) + 128; /*0x65e9c3*/
      v33[2] = 0; /*0x65e9ca*/
      v20 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v19 + 216))(v14, v33, 0); /*0x65e9ce*/
      --dword_A8E7AC; /*0x65e9e2*/
      if ( !v20 ) /*0x65e9e8*/
      {
        if ( v14 ) /*0x65ea8d*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 32))(v14, 1); /*0x65ea95*/
        return v26 - 1; /*0x65ea9f*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 2 && a8 != -1 && a9 ) /*0x65ea09*/
      {
        *(_BYTE *)(v14 + 1737) = 1; /*0x65ea0b*/
        v21 = *((_DWORD *)dword_A8E34C + a8); /*0x65ea18*/
        if ( v21 ) /*0x65ea1d*/
        {
          v29 = a9; /*0x65ea1f*/
          do /*0x65ea58*/
          {
            v22 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v21 + 140))(v21, v28); /*0x65ea2d*/
            v23 = (_DWORD *)v22; /*0x65ea33*/
            if ( v22 ) /*0x65ea37*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 212))(v22); /*0x65ea3d*/
              CellClass::AddObject((CellClass *)(v14 + 276), v23); /*0x65ea4a*/
            }
            --v29; /*0x65ea54*/
          }
          while ( v29 ); /*0x65ea58*/
        }
        v10 = v31; /*0x65ea5a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 492))(v14); /*0x65ea62*/
      if ( ++v26 >= a4 ) /*0x65ea77*/
        return v26; /*0x65ea77*/
      v11 = v28; /*0x65e8b8*/
    }
  }
  return v26; /*0x65ea81*/
}



// ==== 0x0065EAB0  globalHelper_05EAB0  this=-  sig=csp ====
int __userpurge globalHelper_05EAB0@<eax>(
        HouseClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7)
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
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v8 = *((_DWORD *)dword_A8B21C + a2); /*0x65eabc*/
  v18 = v8; /*0x65eac7*/
  v17 = 0; /*0x65eacb*/
  if ( a4 > 0 ) /*0x65ead3*/
  {
    while ( 1 ) /*0x65eaeb*/
    {
      ++dword_A8E7AC; /*0x65eaeb*/
      v9 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v8 + 140))(v8, a1); /*0x65eaf3*/
      v10 = v9; /*0x65eaff*/
      --dword_A8E7AC; /*0x65eb04*/
      if ( !v9 ) /*0x65eb0a*/
        break; /*0x65eb0a*/
      *(_BYTE *)(v9 + 980) = 1; /*0x65eb10*/
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
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 488))(v10, a5, 0); /*0x65eb5e*/
      if ( a7 ) /*0x65eb66*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 1152))(v10, a7, 1); /*0x65eb6f*/
      if ( a6 ) /*0x65eb7b*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 968))(v10, a6); /*0x65eb82*/
      v20[0] = ((__int16)v12 << 8) + 128; /*0x65eba4*/
      ++dword_A8E7AC; /*0x65ebae*/
      v13 = *(_DWORD *)v10; /*0x65ebb4*/
      v20[1] = (SHIWORD(v12) << 8) + 128; /*0x65ebba*/
      v20[2] = 0; /*0x65ebc1*/
      v14 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v13 + 216))(v10, v20, 0); /*0x65ebc9*/
      --dword_A8E7AC; /*0x65ebdd*/
      if ( !v14 ) /*0x65ebe3*/
      {
        if ( v10 ) /*0x65ec14*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x65ec1c*/
        return v17 - 1; /*0x65ec26*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 492))(v10); /*0x65ebe9*/
      if ( ++v17 >= a4 ) /*0x65ebfe*/
        return v17; /*0x65ebfe*/
      v8 = v18; /*0x65eadf*/
    }
  }
  return v17; /*0x65ec08*/
}



// ==== 0x0065EC30  ExecuteScriptTypeClassActions  this=-  sig=csp ====
char __fastcall ExecuteScriptTypeClassActions(ObjectClass *a1, int a2)
{
  TagClass *attachedTag; // eax
  ScriptTypeClass *v5; // eax
  TagClass *v6; // eax
  TagClass *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  char v11; // bl
  void *v12; // eax
  _DWORD *v13; // eax
  int v14; // ebp
  int v15; // ebx
  ObjectPlacement *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  char v23; // al
  _DWORD *v24; // ebp
  int (__stdcall ***Checked)(_DWORD, int *, _BYTE *); // eax
  int v26; // esi
  int v27; // ebx
  int InstanceCOM; // eax
  int v29; // eax
  int (__stdcall ***v30)(_DWORD, int *, _BYTE *); // eax
  int v31; // esi
  int v32; // ebx
  int v33; // ecx
  int v34; // esi
  int v35; // esi
  int v36; // ecx
  int v37; // eax
  _DWORD *v38; // esi
  bool v39; // zf
  _DWORD *v40; // edi
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // esi
  #375 *OwnerHouse; // eax
  #375 *v46; // [esp+40h] [ebp-C0h]
  char v47; // [esp+56h] [ebp-AAh]
  bool v48; // [esp+57h] [ebp-A9h]
  _BYTE v49[168]; // [esp+58h] [ebp-A8h] BYREF

  *(_DWORD *)&v49[64] = a1; /*0x65ec40*/
  if ( !a1 || !a1[1].attachedBomb[1].audioController[4] ) /*0x65ec50*/
    return 0; /*0x65ec50*/
  attachedTag = a1[1].attachedTag; /*0x65ec5e*/
  if ( !attachedTag || !attachedTag[2].defaultCoords[0] ) /*0x65ec68*/
  {
    if ( !attachedTag ) /*0x65ec7b*/
    {
      v5 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x65ec82*/
      if ( v5 ) /*0x65ec8c*/
        v6 = (TagClass *)ScriptTypeClass::Constructor(v5, 0); /*0x65ec91*/
      else
        v6 = 0; /*0x65ec98*/
      a1[1].attachedTag = v6; /*0x65ec9a*/
    }
    v7 = a1[1].attachedTag; /*0x65eca0*/
    v8 = v7[2].defaultCoords[0]; /*0x65eca6*/
    if ( v8 < 50 ) /*0x65ecaf*/
    {
      v7[2].defaultCoords[2 * v8 + 1] = 5; /*0x65ecb1*/
      *((_DWORD *)&v7[3].AbstractClass + 2 * v8) = 0; /*0x65ecb8*/
      ++v7[2].defaultCoords[0]; /*0x65ecbf*/
    }
  }
  v9 = ConstructTeamMembers(a1); /*0x65eccc*/
  *(_BYTE *)(v9[373] + 116) = 0; /*0x65ecd8*/
  if ( !v9 ) /*0x65ecdc*/
    return 0; /*0x65f304*/
  *(_DWORD *)&v49[28] = *TechnoClass::GetWaypointCoords((TechnoClass *)a1, &v49[32]); /*0x65ecf3*/
  if ( a2 != -1 ) /*0x65ecf7*/
    *(_DWORD *)&v49[28] = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v49[32], a2); /*0x65ed0c*/
  v10 = v9[12]; /*0x65ed10*/
  v9[12] = 0; /*0x65ed13*/
  *(_DWORD *)&v49[24] = v10; /*0x65ed16*/
  *(_DWORD *)&v49[36] = 0; /*0x65ed1a*/
  do /*0x65f275*/
  {
    v11 = 0; /*0x65ed1e*/
    v47 = 0; /*0x65ed27*/
    v48 = (*(int (__thiscall **)(_DWORD *))(*v9 + 44))(v9) == 1; /*0x65ed39*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 44))(v9) == 2 ) /*0x65ed47*/
    {
      v47 = 1; /*0x65ed49*/
      v11 = 1; /*0x65ed4e*/
    }
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v49[28]); /*0x65ed5c*/
    v13 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, &v49[120]); /*0x65ed6d*/
    *(_DWORD *)&v49[12] = *v13; /*0x65ed72*/
    *(_DWORD *)&v49[16] = v13[1]; /*0x65ed79*/
    *(_DWORD *)&v49[20] = v13[2]; /*0x65ed86*/
    if ( v48 ) /*0x65ed8a*/
    {
      if ( !v11 ) /*0x65edc6*/
        goto LABEL_22; /*0x65edc6*/
    }
    else if ( !v11 ) /*0x65ed8e*/
    {
      *(_DWORD *)&v49[12] += ((v9[191] & 3) - 2) << 8; /*0x65eda9*/
      *(_DWORD *)&v49[16] += ((v9[191] & 0xC) - 4) << 6; /*0x65edbe*/
LABEL_22:
      --v9[191]; /*0x65edc8*/
    }
    v14 = dword_B04C58; /*0x65edce*/
    v15 = dword_B04C5C; /*0x65edda*/
    *(_DWORD *)&v49[84] = dword_B04C60; /*0x65edea*/
    v16 = (ObjectPlacement *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49[12]); /*0x65edf3*/
    *(_DWORD *)v49 = 0; /*0x65edf7*/
    while ( v14 == dword_B04C58 && v15 == dword_B04C5C && *(_DWORD *)&v49[84] == dword_B04C60 && *(int *)v49 < 255 ) /*0x65ee2d*/
    {
      if ( v47 ) /*0x65ee39*/
      {
        v17 = *(_DWORD *)v16->__pad_0; /*0x65ee3f*/
        *(_DWORD *)&v49[48] = 0; /*0x65ee41*/
        v18 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(v17 + 72))(v16, &v49[96]); /*0x65ee59*/
        *(_WORD *)&v49[52] = *v18 / 256; /*0x65ee70*/
        *(_WORD *)&v49[54] = v18[1] / 256; /*0x65ee91*/
        *(_DWORD *)&v49[60] = *(_DWORD *)&v49[52]; /*0x65ee9f*/
        *(_DWORD *)&v49[44] = *LayerClass::Pathfinding_Find( /*0x65eec2*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&v49[48],
                                 &v49[88],
                                 (__int16 *)&v49[60],
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
                                 (__int16 *)&v49[48],
                                 0,
                                 0);
      }
      else
      {
        *(_WORD *)&v49[40] = 0; /*0x65eed2*/
        *(_WORD *)&v49[42] = 0; /*0x65eed7*/
        v19 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))( /*0x65eee8*/
                          v16,
                          &v49[144]);
        *(_WORD *)&v49[56] = *v19 / 256; /*0x65eeff*/
        *(_WORD *)&v49[58] = v19[1] / 256; /*0x65ef15*/
        *(_DWORD *)&v49[68] = *(_DWORD *)&v49[56]; /*0x65ef22*/
        v20 = (*(int (__thiscall **)(_DWORD *))(*v9 + 132))(v9); /*0x65ef38*/
        *(_DWORD *)&v49[44] = *LayerClass::Pathfinding_Find( /*0x65ef61*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&v49[92],
                                 &v49[92],
                                 (__int16 *)&v49[68],
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
                                 (__int16 *)&v49[40],
                                 0,
                                 0);
      }
      v16 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v49[44]); /*0x65ef74*/
      if ( v48 || v47 ) /*0x65ef84*/
      {
        v22 = (int *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))(v16, &v49[156]); /*0x65efb9*/
      }
      else
      {
        v21 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)v16->__pad_0 + 72))( /*0x65ef98*/
                          v16,
                          &v49[108]);
        v22 = ObjectPlacement::CalcPosition(v16, (int *)&v49[132], v21, 0, 0, 0); /*0x65efa6*/
      }
      v14 = *v22; /*0x65efbc*/
      v15 = v22[1]; /*0x65efbe*/
      *(_DWORD *)&v49[84] = v22[2]; /*0x65efc9*/
      ++*(_DWORD *)v49; /*0x65efcd*/
    }
    *(_DWORD *)&v49[12] = v14; /*0x65efe0*/
    *(_DWORD *)&v49[16] = v15; /*0x65efe4*/
    ++dword_A8E7AC; /*0x65efe8*/
    v23 = (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*v9 + 216))(v9, &v49[12], 0); /*0x65eff7*/
    --dword_A8E7AC; /*0x65f00b*/
    if ( v23 ) /*0x65f011*/
    {
      v24 = v9 + 413; /*0x65f017*/
      *(_DWORD *)&v49[4] = 0; /*0x65f01d*/
      if ( v9[413] ) /*0x65f025*/
      {
        Checked = (int (__stdcall ***)(_DWORD, int *, _BYTE *))Stream::GetChecked((Stream *)(v9 + 413)); /*0x65f02d*/
        v26 = (**Checked)(Checked, &stru_818E00.?[17], &v49[72]); /*0x65f041*/
        if ( v26 >= 0 ) /*0x65f045*/
        {
          v27 = *(_DWORD *)&v49[72]; /*0x65f05a*/
          Release2COM((ObjectClass *)&v49[4]); /*0x65f062*/
          *(_DWORD *)&v49[4] = v27; /*0x65f067*/
        }
        else
        {
          Release2COM((ObjectClass *)&v49[4]); /*0x65f04b*/
          *(_DWORD *)&v49[4] = 0; /*0x65f050*/
        }
        if ( v26 < 0 && v26 != -2147467262 ) /*0x65f075*/
          WinAPI::Wrapper(v26); /*0x65f078*/
      }
      *(_DWORD *)&v49[8] = 0; /*0x65f08a*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&v49[8], (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x65f092*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x65f0a0*/
        WinAPI::Wrapper(InstanceCOM); /*0x65f0a3*/
      if ( !*(_DWORD *)&v49[8] ) /*0x65f0ae*/
        WinAPI::Wrapper(-2147467261); /*0x65f0b5*/
      (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)&v49[8] + 12))(*(_DWORD *)&v49[8], v9); /*0x65f0c2*/
      v29 = 0; /*0x65f0c5*/
      *(_DWORD *)v49 = 0; /*0x65f0cb*/
      if ( *(_DWORD *)&v49[8] ) /*0x65f0d1*/
      {
        v30 = (int (__stdcall ***)(_DWORD, int *, _BYTE *))Stream::GetChecked((Stream *)&v49[8]); /*0x65f0d7*/
        v31 = (**v30)(v30, &stru_818E00.?[17], &v49[32]); /*0x65f0eb*/
        if ( v31 >= 0 ) /*0x65f0ef*/
        {
          v32 = *(_DWORD *)&v49[32]; /*0x65f0fe*/
          Release2COM((ObjectClass *)v49); /*0x65f106*/
          v29 = v32; /*0x65f10b*/
        }
        else
        {
          Release2COM((ObjectClass *)v49); /*0x65f0f5*/
          v29 = 0; /*0x65f0fa*/
        }
        *(_DWORD *)v49 = v29; /*0x65f10f*/
        if ( v31 < 0 && v31 != -2147467262 ) /*0x65f11b*/
          WinAPI::Wrapper(v31); /*0x65f11e*/
      }
      v33 = *(_DWORD *)&v49[4]; /*0x65f127*/
      if ( *(_DWORD *)&v49[4] != v29 ) /*0x65f12d*/
      {
        v34 = *(_DWORD *)&v49[4]; /*0x65f12f*/
        v33 = v29; /*0x65f131*/
        *(_DWORD *)&v49[4] = v29; /*0x65f135*/
        if ( v29 ) /*0x65f139*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 4))(v29); /*0x65f13e*/
          v33 = *(_DWORD *)&v49[4]; /*0x65f141*/
          v29 = *(_DWORD *)v49; /*0x65f145*/
        }
        if ( v34 ) /*0x65f14b*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x65f150*/
          v33 = *(_DWORD *)&v49[4]; /*0x65f153*/
          v29 = *(_DWORD *)v49; /*0x65f157*/
        }
      }
      if ( v29 ) /*0x65f15d*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29); /*0x65f162*/
        v33 = *(_DWORD *)&v49[4]; /*0x65f165*/
      }
      if ( v33 ) /*0x65f16b*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v33 + 12))(v33, *v24); /*0x65f174*/
        v35 = *v24; /*0x65f177*/
        if ( *v24 != *(_DWORD *)&v49[8] ) /*0x65f180*/
        {
          *v24 = *(_DWORD *)&v49[8]; /*0x65f182*/
          if ( *(_DWORD *)&v49[8] ) /*0x65f18b*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[8] + 4))(*(_DWORD *)&v49[8]); /*0x65f190*/
          if ( v35 ) /*0x65f195*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35); /*0x65f19a*/
        }
      }
      v9[162] = *(_DWORD *)&v49[12]; /*0x65f1a7*/
      v9[163] = *(_DWORD *)&v49[16]; /*0x65f1b1*/
      v9[164] = *(_DWORD *)&v49[20]; /*0x65f1b8*/
      if ( !v9[413] ) /*0x65f1bb*/
        WinAPI::Wrapper(-2147467261); /*0x65f1d6*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9[413] + 68))( /*0x65f1f1*/
        v9[413],
        *(_DWORD *)&v49[12],
        *(_DWORD *)&v49[16],
        *(_DWORD *)&v49[20]);
      *((_BYTE *)v9 + 625) = 1; /*0x65f1f4*/
      v36 = *(_DWORD *)&v49[36]; /*0x65f201*/
      *(_DWORD *)&v49[36] = v9; /*0x65f205*/
      v37 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3056); /*0x65f209*/
      v9[12] = v36; /*0x65f20f*/
      v9[161] = v37; /*0x65f212*/
      v9 = *(_DWORD **)&v49[24]; /*0x65f218*/
      if ( *(_DWORD *)&v49[24] ) /*0x65f21e*/
      {
        *(_DWORD *)&v49[24] = *(_DWORD *)(*(_DWORD *)&v49[24] + 48); /*0x65f226*/
        v9[12] = 0; /*0x65f22a*/
      }
      if ( *(_DWORD *)&v49[8] ) /*0x65f236*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[8] + 8))(*(_DWORD *)&v49[8]); /*0x65f23b*/
      if ( *(_DWORD *)&v49[4] ) /*0x65f244*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v49[4] + 8))(*(_DWORD *)&v49[4]); /*0x65f249*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v9 + 32))(v9, 1); /*0x65f258*/
      v9 = *(_DWORD **)&v49[24]; /*0x65f25b*/
      if ( !*(_DWORD *)&v49[24] ) /*0x65f261*/
        break; /*0x65f261*/
      *(_DWORD *)&v49[24] = *(_DWORD *)(*(_DWORD *)&v49[24] + 48); /*0x65f269*/
      v9[12] = 0; /*0x65f26d*/
    }
  }
  while ( v9 ); /*0x65f275*/
  v38 = *(_DWORD **)&v49[36]; /*0x65f27b*/
  v39 = *(_DWORD *)&v49[36] == 0; /*0x65f27f*/
  v40 = *(_DWORD **)(*(_DWORD *)&v49[36] + 48); /*0x65f281*/
  *(_DWORD *)(*(_DWORD *)&v49[36] + 48) = 0; /*0x65f287*/
  if ( !v39 ) /*0x65f28d*/
  {
    while ( 1 ) /*0x65f28f*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v38 + 292))(v38, 0); /*0x65f295*/
      v41 = *v38; /*0x65f29b*/
      v38[160] = 3; /*0x65f29f*/
      (*(void (__thiscall **)(_DWORD *))(v41 + 492))(v38); /*0x65f2a9*/
      v38 = v40; /*0x65f2b1*/
      if ( !v40 ) /*0x65f2b3*/
        break; /*0x65f2b3*/
      v42 = v40 + 12; /*0x65f2b5*/
      v40 = (_DWORD *)v40[12]; /*0x65f2b8*/
      *v42 = 0; /*0x65f2bb*/
    }
  }
  v43 = *(_DWORD *)&v49[64]; /*0x65f2c3*/
  if ( Techno::GetOwnerHouse(*(int *)&v49[64]) ) /*0x65f2c9*/
  {
    v46 = (#375 *)dword_A83D4C; /*0x65f2d8*/
    OwnerHouse = (#375 *)Techno::GetOwnerHouse(v43); /*0x65f2db*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(OwnerHouse, v46) ) /*0x65f2e2*/
      ScriptActionQueue::PushNext((ScriptActionQueue *)&v49[28]); /*0x65f2ef*/
  }
  return 1; /*0x65f2f6*/
}



// ==== 0x0065F310  sub_65F310  this=-  sig=ida-proto ====
int sub_65F310()
{
  dword_B04CB0 = 0; /*0x65f312*/
  dword_B04CB4 = 0; /*0x65f317*/
  dword_B04CB8 = 0; /*0x65f31c*/
  dword_B04CBC = 0; /*0x65f321*/
  return 0; /*0x65f326*/
}



// ==== 0x0065F330  sub_65F330  this=-  sig=ida-proto ====
void sub_65F330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f33c*/
  dbl_B04CC8 = Math::Sqrt(v0 + v0); /*0x65f34e*/
}



// ==== 0x0065F360  sub_65F360  this=-  sig=ida-proto ====
void sub_65F360()
{
  dbl_B04D18 = dbl_B04CC8 / 60.0; /*0x65f36c*/
}



// ==== 0x0065F380  sub_65F380  this=-  sig=ida-proto ====
void sub_65F380()
{
  dbl_B04D00 = 1.0 / dbl_B04D18; /*0x65f38c*/
}



// ==== 0x0065F3A0  sub_65F3A0  this=-  sig=ida-proto ====
void sub_65F3A0()
{
  dbl_B04CF8 = 0.0174532925199433 * 45.0; /*0x65f3ac*/
}



// ==== 0x0065F3C0  sub_65F3C0  this=-  sig=ida-proto ====
void sub_65F3C0()
{
  dbl_B04CD0 = 0.0174532925199433 * 60.0; /*0x65f3cc*/
}



// ==== 0x0065F3E0  sub_65F3E0  this=-  sig=ida-proto ====
void sub_65F3E0()
{
  dbl_B04CA8 = 0.0174532925199433 * 90.0; /*0x65f3ec*/
}



// ==== 0x0065F400  sub_65F400  this=-  sig=ida-proto ====
__int64 sub_65F400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04CA8 - dbl_B04CD0); /*0x65f412*/
  result = Math::RoundToInt(v0 * dbl_B04CC8 * 0.5); /*0x65f426*/
  dword_B04D20 = result; /*0x65f42b*/
  return result; /*0x65f430*/
}



// ==== 0x0065F440  sub_65F440  this=-  sig=ida-proto ====
void sub_65F440()
{
  dbl_B04CD8 = Math::ArcTan((double)dword_B04D20 * 0.00390625); /*0x65f457*/
}



// ==== 0x0065F470  sub_65F470  this=-  sig=ida-proto ====
void sub_65F470()
{
  dbl_B04CF0 = Math::ArcTan((double)(2 * dword_B04D20) / dbl_B04CC8); /*0x65f492*/
}



// ==== 0x0065F4A0  sub_65F4A0  this=-  sig=ida-proto ====
__int64 sub_65F4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04D20) + 0.5); /*0x65f4bb*/
  dword_B04D14 = result; /*0x65f4c0*/
  return result; /*0x65f4c6*/
}



// ==== 0x0065F4D0  sub_65F4D0  this=-  sig=ida-proto ====
int sub_65F4D0()
{
  word_B04CC0 = 0; /*0x65f4d2*/
  word_B04CC2 = 0; /*0x65f4d8*/
  return 0; /*0x65f4de*/
}



// ==== 0x0065F4E0  sub_65F4E0  this=-  sig=ida-proto ====
int sub_65F4E0()
{
  dword_B04CE0 = 0; /*0x65f4e2*/
  dword_B04CE4 = 0; /*0x65f4e7*/
  dword_B04CE8 = 0; /*0x65f4ec*/
  return 0; /*0x65f4f1*/
}



// ==== 0x0065F500  sub_65F500  this=-  sig=ida-proto ====
int sub_65F500()
{
  dword_B04D10 = 0; /*0x65f505*/
  dword_B04D08 = 128; /*0x65f50f*/
  dword_B04D0C = 128; /*0x65f514*/
  return 128; /*0x65f519*/
}



// ==== 0x0065F520  ScenarioClass::ShowMissionBriefing  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::ShowMissionBriefing(ScenarioClass *this)
{
  int *fileName; // esi
  int Section; // eax
  wchar_t *StringCSF; // eax
  Dialog *Dialog; // esi
  char v7; // [esp+Bh] [ebp-1C9h]
  LONG dwNewLong; // [esp+Ch] [ebp-1C8h] BYREF
  CCINIClass v9; // [esp+10h] [ebp-1C4h] BYREF
  CCFileClass v10; // [esp+68h] [ebp-16Ch] BYREF
  int v11[3]; // [esp+C0h] [ebp-114h] BYREF
  int v12; // [esp+CCh] [ebp-108h]
  wchar_t Destination[128]; // [esp+D4h] [ebp-100h] BYREF

  v7 = stru_A8EB00.?[376]; /*0x65f535*/
  stru_A8EB00.?[376] = 0; /*0x65f539*/
  CCFileClass::Construct3((int)&v10); /*0x65f53f*/
  v9.?[0] = 0; /*0x65f548*/
  v9.?[1] = 0; /*0x65f54c*/
  GenericList::Constructor((GenericList *)&v9.?[2]); /*0x65f550*/
  v9.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x65f559*/
  Node::Init((Node *)&v9.?[8]); /*0x65f561*/
  v9.? = 0; /*0x65f56a*/
  v9.ownsFile = 0; /*0x65f56e*/
  *(_DWORD *)v9.INIClass = &CCINIClass_Vtable; /*0x65f572*/
  CCFileClass::Reset(&v10); /*0x65f57a*/
  FileClass::SetFileName(&v10, off_839710); /*0x65f58a*/
  if ( (unsigned __int8)CCFileClass::Open(&v10, 0) ) /*0x65f594*/
  {
    CCINIClass::Load(&v9, (int)&v10, 0, 0); /*0x65f5ac*/
    fileName = this->fileName; /*0x65f5b6*/
    if ( off_839714 ) /*0x65f5be*/
      Section = HashTableSection::FindSection((int *)v9.INIClass, (unsigned __int8 *)fileName, off_839714); /*0x65f5d2*/
    else
      Section = INIClass::BinarySearchSection((int)&v9, (unsigned __int8 *)fileName); /*0x65f5c5*/
    if ( Section ) /*0x65f5de*/
    {
      INIClass::GetString( /*0x65f5fe*/
        (INIClass *)&v9,
        (unsigned __int8 *)fileName,
        off_839714,
        &g_INI_DefaultBuffer,
        (char *)Destination,
        256);
      StringCSF = GetStringCSF(Destination, 0, aDRa2mdpostRest, 135); /*0x65f616*/
    }
    else
    {
      StringCSF = GetStringCSF(aBriefError, 0, aDRa2mdpostRest, 138); /*0x65f629*/
    }
    dword_B04CA0 = (LPARAM)StringCSF; /*0x65f639*/
    Dialog = (Dialog *)CreateDialog(0x10Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_65F710, 0); /*0x65f649*/
    stru_A8EB00.?[440] = 1; /*0x65f64b*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x65f652*/
    if ( Dialog ) /*0x65f659*/
    {
      SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x65f663*/
      Dialog::Show(Dialog); /*0x65f66b*/
      dwNewLong = 0; /*0x65f670*/
      while ( !(unsigned __int8)Dialog::PumpMessages() ) /*0x65f67b*/
      {
        if ( dwNewLong ) /*0x65f681*/
          goto LABEL_14; /*0x65f681*/
      }
      dwNewLong = 1059; /*0x65f685*/
LABEL_14:
      Dialog::Destroy(Dialog); /*0x65f68d*/
    }
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x65f69a*/
    stru_A8EB00.?[440] = BYTE2(dword_A8B230[381].vtable3); /*0x65f6ac*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x65f6b7*/
  }
  stru_A8EB00.?[376] = v7; /*0x65f6c4*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x65f6ca*/
  *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x65f6d6*/
  v12 = 0; /*0x65f6de*/
  Vector::Clear((int)v11); /*0x65f6e5*/
  *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x65f6ee*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x65f6fb*/
}



// ==== 0x0065F710  sub_65F710  this=-  sig=csp ====
int __stdcall sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x65f72a*/
  if ( !result ) /*0x65f731*/
  {
    if ( a2 == 273 ) /*0x65f739*/
    {
      if ( GetDlgCtrlID(hWnd) == 1059 && !HIWORD(a3) ) /*0x65f77b*/
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



// ==== 0x0065F7A0  sub_65F7A0  this=-  sig=ida-proto ====
void sub_65F7A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x65f7ac*/
  dbl_B04D70 = Math::Sqrt(v0 + v0); /*0x65f7be*/
}



// ==== 0x0065F7D0  sub_65F7D0  this=-  sig=ida-proto ====
void sub_65F7D0()
{
  dbl_B04DF0 = dbl_B04D70 / 60.0; /*0x65f7dc*/
}



// ==== 0x0065F7F0  sub_65F7F0  this=-  sig=ida-proto ====
void sub_65F7F0()
{
  dbl_B04DD0 = 1.0 / dbl_B04DF0; /*0x65f7fc*/
}



// ==== 0x0065F810  sub_65F810  this=-  sig=ida-proto ====
void sub_65F810()
{
  dbl_B04DC8 = 0.0174532925199433 * 45.0; /*0x65f81c*/
}



// ==== 0x0065F830  sub_65F830  this=-  sig=ida-proto ====
void sub_65F830()
{
  dbl_B04D80 = 0.0174532925199433 * 60.0; /*0x65f83c*/
}



// ==== 0x0065F850  sub_65F850  this=-  sig=ida-proto ====
void sub_65F850()
{
  dbl_B04D30 = 0.0174532925199433 * 90.0; /*0x65f85c*/
}



// ==== 0x0065F870  sub_65F870  this=-  sig=ida-proto ====
__int64 sub_65F870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04D30 - dbl_B04D80); /*0x65f882*/
  result = Math::RoundToInt(v0 * dbl_B04D70 * 0.5); /*0x65f896*/
  dword_B04DF8 = result; /*0x65f89b*/
  return result; /*0x65f8a0*/
}



// ==== 0x0065F8B0  sub_65F8B0  this=-  sig=ida-proto ====
void sub_65F8B0()
{
  dbl_B04D90 = Math::ArcTan((double)dword_B04DF8 * 0.00390625); /*0x65f8c7*/
}



// ==== 0x0065F8E0  sub_65F8E0  this=-  sig=ida-proto ====
void sub_65F8E0()
{
  dbl_B04DC0 = Math::ArcTan((double)(2 * dword_B04DF8) / dbl_B04D70); /*0x65f902*/
}



// ==== 0x0065F910  sub_65F910  this=-  sig=ida-proto ====
__int64 sub_65F910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04DF8) + 0.5); /*0x65f92b*/
  dword_B04DEC = result; /*0x65f930*/
  return result; /*0x65f936*/
}



// ==== 0x0065F940  sub_65F940  this=-  sig=ida-proto ====
int sub_65F940()
{
  dword_B04D68 = 0; /*0x65f942*/
  return 0; /*0x65f94e*/
}



// ==== 0x0065F950  sub_65F950  this=-  sig=ida-proto ====
int sub_65F950()
{
  dword_B04D98 = 0; /*0x65f952*/
  dword_B04D9C = 0; /*0x65f957*/
  dword_B04DA0 = 0; /*0x65f95c*/
  return 0; /*0x65f961*/
}



// ==== 0x0065F970  sub_65F970  this=-  sig=ida-proto ====
int sub_65F970()
{
  dword_B04DE8 = 0; /*0x65f975*/
  dword_B04DE0 = 128; /*0x65f97f*/
  dword_B04DE4 = 128; /*0x65f984*/
  return 128; /*0x65f989*/
}



// ==== 0x0065F990  sub_65F990  this=-  sig=ida-proto ====
int sub_65F990()
{
  dword_B04D38 = 0; /*0x65f992*/
  dword_B04D3C = 0; /*0x65f997*/
  dword_B04D40 = 0; /*0x65f99c*/
  dword_B04D44 = 0; /*0x65f9a1*/
  return 0; /*0x65f9a6*/
}



// ==== 0x0065F9B0  sub_65F9B0  this=-  sig=ida-proto ====
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



// ==== 0x0065F9F0  sub_65F9F0  this=-  sig=ida-proto ====
void __cdecl sub_65F9F0()
{
  if ( (byte_B04D28 & 1) == 0 ) /*0x65f9fa*/
  {
    stru_B04DA8 = (int)&VectorClass<RadarEventClass *>::`vftable'; /*0x65f9fe*/
    byte_B04D28 |= 1u; /*0x65fa11*/
    if ( dword_B04DAC ) /*0x65fa17*/
    {
      if ( byte_B04DB5 ) /*0x65fa21*/
      {
        __3_YAXPAX_Z(dword_B04DAC); /*0x65fa24*/
        dword_B04DAC = 0; /*0x65fa2c*/
      }
    }
    byte_B04DB5 = 0; /*0x65fa36*/
    dword_B04DB0 = 0; /*0x65fa3d*/
  }
}



// ==== 0x0065FA50  sub_65FA50  this=-  sig=ida-proto ====
int sub_65FA50()
{
  word_B04D78 = 0; /*0x65fa52*/
  word_B04D7A = 0; /*0x65fa58*/
  return 0; /*0x65fa5e*/
}



// ==== 0x0065FA60  ScreenEffect::StubReturn  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::StubReturn()
{
  ; /*0x65fa60*/
}



// ==== 0x0065FA70  CreateTriggerClassIfFarEnough  this=RandomStruct  sig=csp ====
int __fastcall CreateTriggerClassIfFarEnough(int a1, int a2, int a3)
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

  v4 = a1; /*0x65fa7c*/
  if ( byte_7F09A4[16 * a1] && (v5 = 0, stru_B04DA8.LoadGame_field_0x10 > 0) ) /*0x65faa1*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65faab*/
    while ( 1 ) /*0x65fab1*/
    {
      v7 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v5); /*0x65fab1*/
      if ( *(_DWORD *)v7 == a1 ) /*0x65faba*/
      {
        v11 = (__int16)(HIWORD(a3) - *(_WORD *)(v7 + 34)); /*0x65fad3*/
        __asm { fild [esp+20h+var_4] } /*0x65fad7*/
        v12 = (__int16)(a3 - *(_WORD *)(v7 + 32)); /*0x65fadb*/
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
        LOWORD(result) = Math::RoundToInt(v3); /*0x65fafc*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x65fb01*/
        result = (__int16)result; /*0x65fb07*/
        if ( (__int16)result < dword_7F0998[4 * **(_DWORD **)(stru_B04DA8.LoadGame_field_0x04 + 4 * v5)] ) /*0x65fb18*/
          break; /*0x65fb18*/
      }
      if ( ++v5 >= stru_B04DA8.LoadGame_field_0x10 ) /*0x65fb22*/
      {
        v4 = a1; /*0x65fb24*/
        goto LABEL_8; /*0x65fb24*/
      }
    }
    LOBYTE(result) = 0; /*0x65fb4c*/
  }
  else
  {
LABEL_8:
    result = __2_YAPAXI_Z(0x40u); /*0x65fb28*/
    if ( result ) /*0x65fb34*/
      result = (int)Team_Load_65FB80((ObjectClass *)result, v4, a3); /*0x65fb3a*/
    LOBYTE(result) = 1; /*0x65fb3f*/
  }
  return result; /*0x65fb41*/
}



// ==== 0x0065FB60  ObjectClass::method_65FB60  this=ObjectClass  sig=csp ====
void __thiscall sub_65FB60(ObjectClass *this)
{
  FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], this); /*0x65fb66*/
}



// ==== 0x0065FB70  sub_65FB70  this=-  sig=ida-proto ====
char __fastcall sub_65FB70(int a1)
{
  return byte_7F09A4[16 * a1]; /*0x65fb79*/
}



// ==== 0x0065FB80  ObjectClass::Team_Load_65FB80  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Load_65FB80(ObjectClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int *_6550C0; // eax
  int v9; // ecx
  void *v10; // eax
  void *vtable1; // edi
  void *v12; // edx
  void *v13; // eax
  void *v14; // ecx
  int v15; // ebp
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  int LoadGame_field_0x10; // ecx
  int v20; // eax
  _DWORD v22[4]; // [esp+Ch] [ebp-10h] BYREF
  void *v23; // [esp+20h] [ebp+4h]

  this->AbstractClass = (void *)a2; /*0x65fb8c*/
  this->? = 1061752795; /*0x65fb8e*/
  v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132); /*0x65fb9b*/
  this->? = 0; /*0x65fba1*/
  this->? = v4; /*0x65fba8*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 120); /*0x65fbb4*/
  this->? = (void *)a3; /*0x65fbb7*/
  this->? = v5; /*0x65fbba*/
  this->occupant = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65fbc2*/
  this->fallRate = 0; /*0x65fbc5*/
  this->nextObject = *(ObjectClass **)&stru_A8EB00.?[416]; /*0x65fbd4*/
  this->attachedBomb = 0; /*0x65fbd7*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x65fbde*/
  BYTE1(this->ambientSoundController[0]) = 1; /*0x65fbe1*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x65fbe4*/
  v7 = *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x65fbea*/
  _6550C0 = Team_Load_6550C0((ObjectClass *)&stru_87F5F0.__pad_58[416], v22, (__int16 *)&a3); /*0x65fbff*/
  v9 = *_6550C0; /*0x65fc04*/
  v10 = (void *)(_6550C0[1] - v7); /*0x65fc0b*/
  this->? = (void *)(v9 - v6); /*0x65fc0d*/
  this->? = v10; /*0x65fc10*/
  vtable1 = this->?; /*0x65fc13*/
  v12 = v10; /*0x65fc1c*/
  v13 = (void *)(*(_DWORD *)&stru_87F5F0.__pad_E12[2190] - (_DWORD)v10); /*0x65fc23*/
  v14 = (void *)(*(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1); /*0x65fc25*/
  v15 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc29*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (int)vtable1 <= (int)v13 ) /*0x65fc2b*/
    v15 = (int)v13; /*0x65fc2d*/
  if ( (int)v12 <= v15 ) /*0x65fc31*/
  {
    v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc39*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc3b*/
      v16 = (int)v13; /*0x65fc3d*/
  }
  else
  {
    v16 = (int)v12; /*0x65fc33*/
  }
  if ( (int)vtable1 <= v16 ) /*0x65fc41*/
  {
    v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[2186] - (_DWORD)vtable1; /*0x65fc4b*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc4d*/
      v17 = (int)v13; /*0x65fc4f*/
    if ( (int)v12 <= v17 ) /*0x65fc53*/
    {
      v23 = v14; /*0x65fc5d*/
      if ( (int)v14 <= (int)v13 ) /*0x65fc61*/
        v23 = v13; /*0x65fc63*/
    }
    else
    {
      v23 = v12; /*0x65fc55*/
    }
  }
  else
  {
    v23 = this->?; /*0x65fc43*/
  }
  *(float *)&this->? = (float)(int)v23; /*0x65fc6b*/
  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x65fc87*/
  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x65fc8d*/
  v18 = dword_B04D88; /*0x65fc82*/
  dword_B04D48[dword_B04D88] = a3; /*0x65fc92*/
  dword_B04DD8 = v18; /*0x65fc99*/
  if ( LoadGame_field_0x10 < stru_B04DA8.LoadGame_field_0x08 /*0x65fcce*/
    || (BYTE1(stru_B04DA8.LoadGame_field_0x0C) || !stru_B04DA8.LoadGame_field_0x08)
    && stru_B04DA8.LoadGame_field_0x14 > 0
    && (*(unsigned __int8 (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)stru_B04DA8.__pad_0 + 8))(
         &stru_B04DA8,
         stru_B04DA8.LoadGame_field_0x08 + stru_B04DA8.LoadGame_field_0x14,
         0) )
  {
    v20 = stru_B04DA8.LoadGame_field_0x10++; /*0x65fcdb*/
    *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v20) = this; /*0x65fcea*/
  }
  return &this->AbstractClass; /*0x65fcef*/
}



// ==== 0x0065FD50  ObjectClass::WinMainSetup_Setup_65FD50  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_65FD50(ObjectClass *this)
{
  int i; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = stru_B04DA8.LoadGame_field_0x10 - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    v2 = *(void **)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd65*/
    if ( v2 ) /*0x65fd6a*/
    {
      v4 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x65fd7b*/
      v3 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v4); /*0x65fd7f*/
      if ( v3 != -1 && v3 < stru_B04DA8.LoadGame_field_0x10 ) /*0x65fd8f*/
      {
        --stru_B04DA8.LoadGame_field_0x10; /*0x65fd94*/
        for ( ; /*0x65fd9a*/
              v3 < stru_B04DA8.LoadGame_field_0x10;
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x65fda2*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x65fdb5*/
    }
  }
}



// ==== 0x0065FDD0  Map_Helper_65FDD0  this=-  sig=ida-proto ====
int sub_65FDD0()
{
  int result; // eax
  int i; // esi

  result = dword_B04DB8; /*0x65fdd0*/
  for ( i = 0; i < dword_B04DB8; ++i ) /*0x65fdda*/
  {
    Map_Helper_65FE00(*((_BYTE **)dword_B04DAC + i)); /*0x65fde4*/
    result = dword_B04DB8; /*0x65fde9*/
  }
  return result; /*0x65fdf3*/
}



// ==== 0x0065FE00  ObjectClass::Map_Helper_65FE00  this=ObjectClass  sig=csp ====
void __thiscall Map_Helper_65FE00(ObjectClass *this)
{
  ObjectClass *nextObject; // edx
  BombClass *attachedBomb; // eax
  double v4; // st7
  double v5; // st6
  int v6; // eax
  double v7; // st7
  int v8; // eax
  BombClass *v9; // edx
  int v10; // eax
  double v11; // st7
  double v12; // st7
  char v14; // c0
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+4h] [ebp-10h]
  float v17; // [esp+4h] [ebp-10h]
  TagClass *v18; // [esp+Ch] [ebp-8h]

  if ( !BYTE1(this->ambientSoundController[0]) ) /*0x65fe0b*/
    return; /*0x65fe0b*/
  if ( !LOBYTE(this->ambientSoundController[0]) ) /*0x65fe11*/
  {
    nextObject = this->nextObject; /*0x65fe18*/
    attachedBomb = this->attachedBomb; /*0x65fe1b*/
    if ( nextObject != (ObjectClass *)-1 ) /*0x65fe21*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)nextObject >= (int)attachedBomb ) /*0x65fe2d*/
      {
LABEL_7:
        BYTE1(this->ambientSoundController[0]) = 0; /*0x65fe35*/
        goto LABEL_8; /*0x65fe35*/
      }
      attachedBomb = (BombClass *)((char *)attachedBomb - (*(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)nextObject)); /*0x65fe2f*/
    }
    if ( !attachedBomb ) /*0x65fe33*/
      goto LABEL_7; /*0x65fe33*/
  }
LABEL_8:
  Map_Helper_660540(this); /*0x65fe39*/
  v4 = *(float *)&this->? - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 128); /*0x65fe48*/
  v15 = (float)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 124); /*0x65fe51*/
  if ( v4 <= v15 ) /*0x65fe5e*/
    v4 = v15; /*0x65fe62*/
  *(float *)&this->? = v4; /*0x65fe66*/
  v5 = *(float *)&this->? + 0.7853981633974483; /*0x65fe6c*/
  LOWORD(v6) = Math::RoundToInt(v4); /*0x65fe7a*/
  v16 = v5 - (double)v6 * 1.570796326794897; /*0x65fe94*/
  if ( LOBYTE(this->ambientSoundController[0]) ) /*0x65fe83*/
  {
    if ( fabs(v4 - (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 124)) >= 0.01 ) /*0x65feb9*/
    {
      *(float *)&this->? = *(float *)&this->? + *(float *)&this->?; /*0x65ff63*/
    }
    else if ( v16 >= (double)*(float *)&this->? ) /*0x65fecb*/
    {
      *(float *)&this->? = *(float *)&this->? + *(float *)&this->?; /*0x65ff20*/
      v11 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132) * 0.33333334; /*0x65ff2e*/
      v17 = *(float *)&this->? - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 132) * 0.02; /*0x65ff43*/
      if ( v11 <= v17 ) /*0x65ff50*/
        v11 = v17; /*0x65ff54*/
      *(float *)&this->? = v11; /*0x65ff58*/
    }
    else
    {
      v7 = v16 + *(float *)&this->?; /*0x65fed1*/
      v8 = 4 * (int)this->AbstractClass; /*0x65fed7*/
      LOBYTE(this->ambientSoundController[0]) = 0; /*0x65feda*/
      *(float *)&this->? = v7; /*0x65fee1*/
      v9 = (BombClass *)dword_7F099C[v8]; /*0x65feea*/
      this->nextObject = *(ObjectClass **)&stru_A8EB00.?[416]; /*0x65fef0*/
      this->attachedTag = v18; /*0x65fef6*/
      this->attachedBomb = v9; /*0x65fef9*/
      v10 = dword_7F09A0[v8]; /*0x65ff02*/
      this->occupant = *(_DWORD *)&stru_A8EB00.?[416]; /*0x65ff0c*/
      this->owningHouseIndex = (int)v18; /*0x65ff12*/
      this->fallRate = v10; /*0x65ff15*/
    }
  }
  if ( *(float *)&this->? > 6.283185307179586 ) /*0x65ff78*/
    *(float *)&this->? = *(float *)&this->? - 6.283185307179586; /*0x65ff83*/
  v12 = *(float *)&this->? + *(float *)&this->?; /*0x65ff89*/
  *(float *)&this->? = v12; /*0x65ff92*/
  if ( v14 && *(float *)&this->? < 0.0 ) /*0x65ffaa*/
  {
    *(float *)&this->? = -*(float *)&this->?; /*0x65ffb3*/
    this->? = 0; /*0x65ffb6*/
  }
  else if ( v12 > 1.0 && *(float *)&this->? > 0.0 ) /*0x65ffdd*/
  {
    *(float *)&this->? = -*(float *)&this->?; /*0x65ffe4*/
    this->? = 1065353216; /*0x65ffe7*/
  }
}


