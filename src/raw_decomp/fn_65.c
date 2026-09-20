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


// ==== 0x006516F0  LogMultiplayToSync_MPDEBUG  this=int  sig=csp ====
void __usercall LogMultiplayToSync_MPDEBUG(CellStruct *a1@<ecx>, unsigned __int8 *a2@<edx>, CellStruct *a3@<ebp>)
{
  INIClass *v3; // edx
  ObjectClass *v4; // ebx
  FILE *v6; // eax
  MouseClass *v7; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  CellStruct *v10; // eax
  char *Name; // eax
  unsigned int v12; // eax
  int i; // edi
  CellStruct **v14; // eax
  char *v15; // edi
  CellStruct *v16; // ebp
  int *v17; // edi
  CellStruct **v18; // edi
  int v19; // ebp
  int v20; // ebp
  int v21; // edi
  bool v22; // cc
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  int v26; // eax
  int v27; // ebp
  int v28; // edi
  int v29; // eax
  int v30; // ebp
  int v31; // edi
  CellStruct *v33; // edi
  int *ebx60; // ebx
  CellStruct *v34; // ebp
  char *v35; // edi
  __int16 v36; // ax
  char *v37; // eax
  char *v38; // eax
  char v39; // al
  CellStruct *v40; // ebp
  ObjectClass *v41; // ebx
  char *v42; // edi
  __int16 v43; // ax
  char *v44; // eax
  char *v45; // eax
  char v46; // al
  int visibilityFlags; // eax
  unsigned __int8 *v48; // edi
  CellStruct *v49; // [esp-4h] [ebp-3B4h]
  CellStruct *v50; // [esp-4h] [ebp-3B4h]
  CellStruct *v51; // [esp+0h] [ebp-3B0h]
  CellStruct *v52; // [esp+0h] [ebp-3B0h]
  CellStruct *aP2; // [esp+Ch] [ebp-3A4h] BYREF
  int v54; // [esp+10h] [ebp-3A0h]
  CellStruct *v55; // [esp+14h] [ebp-39Ch]
  int v56; // [esp+18h] [ebp-398h] BYREF
  int v57; // [esp+1Ch] [ebp-394h] BYREF
  ObjectClass *v58; // [esp+24h] [ebp-38Ch]
  int v59; // [esp+28h] [ebp-388h] BYREF
  unsigned __int8 *v60; // [esp+2Ch] [ebp-384h]
  char v61[128]; // [esp+30h] [ebp-380h] BYREF
  char Destination[128]; // [esp+B0h] [ebp-300h] BYREF
  char v63[128]; // [esp+130h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+1B0h] [ebp-200h] BYREF

  v60 = a2; /*0x651701*/
  v3 = *(INIClass **)(HouseClass_Player.field_0 + 48); /*0x651709*/
  v55 = a1; /*0x65170c*/
  v4 = (ObjectClass *)(828 * (_DWORD)a1 + 11298400); /*0x65171e*/
  v58 = v4; /*0x65172d*/
  sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[13272], v3); /*0x651731*/
  Debug::Log(); /*0x651743*/
  v6 = fopen(Buffer, Mode); /*0x651755*/
  v7 = (MouseClass *)v6; /*0x65175a*/
  if ( v6 ) /*0x651761*/
  {
    fprintf((MouseClass *)v6, &stru_830620.__pad_579C[12420], v51); /*0x651788*/
    ModuleVersion = GetModuleVersion(); /*0x651790*/
    fprintf(v7, &stru_830620.__pad_579C[12404], (CellStruct *)ModuleVersion); /*0x65179c*/
    ModuleInternalVersion = GetModuleInternalVersion((int)&HouseClass_Player.__pad_5568[23084]); /*0x6517a9*/
    fprintf(v7, &stru_830620.__pad_579C[12380], (CellStruct *)ModuleInternalVersion); /*0x6517b5*/
    v61[0] = 0; /*0x6517c6*/
    Time::FormatDate(v61); /*0x6517cb*/
    String::CopyConstant(Destination); /*0x6517e1*/
    v10 = (CellStruct *)String::FormatDword(v63); /*0x6517f3*/
    fprintf(v7, (const char *const)stru_821F08.headNode, v10); /*0x6517ff*/
    v59 = 5; /*0x65180f*/
    HIBYTE(v56) = 0; /*0x65181b*/
    GetVersionString(&v59, (_BYTE *)&v56 + 3, 0, 0); /*0x651820*/
    Name = PlayerType::GetName(); /*0x65183d*/
    fprintf(v7, g_Str_Trace_CPU__s__MMX__s__Vendor_, (CellStruct *)Name); /*0x651849*/
    fprintf(v7, g_Str_Trace_Frames_, *(CellStruct **)&HouseClass_Player.__pad_5568[23248]); /*0x65185b*/
    if ( g_FrameCounter_Samples ) /*0x65186b*/
      v12 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x651874*/
    else
      v12 = 0; /*0x651878*/
    fprintf(v7, g_Str_Trace_Average_FPS_, (CellStruct *)v12); /*0x651881*/
    fprintf(v7, g_Str_Trace_Max_MaxAhead_, *(CellStruct **)&HouseClass_Player.__pad_5568[8884]); /*0x651893*/
    fprintf(v7, g_Str_Trace_Latency_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[18664]); /*0x6518a4*/
    fprintf(v7, g_Str_Trace_Game_speed_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[22700]); /*0x6518b6*/
    fprintf(v7, &stru_830620.__pad_579C[12360], *(CellStruct **)&HouseClass_Player.__pad_5568[8864]); /*0x6518c8*/
    fprintf(v7, &stru_830620.__pad_579C[13260], (CellStruct *)*(&g_MatrixTransformState + 207 * (_DWORD)a1 + 7702)); /*0x6518d7*/
    fprintf(v7, &stru_830620.__pad_579C[13248], a1); /*0x6518e6*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] ) /*0x6518f6*/
    {
      for ( i = 0; /*0x651901*/
            i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 72))(*(_DWORD *)&stru_87C374.__pad_579C[23320]);
            ++i )
      {
        v14 = (CellStruct **)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 76))( /*0x65190c*/
                               *(_DWORD *)&stru_87C374.__pad_579C[23320],
                               i);
        if ( v14 ) /*0x651911*/
        {
          aP2 = *v14; /*0x651919*/
          fprintf(v7, g_Str_Trace_Local_address___d__d__d, (CellStruct *)(unsigned __int8)aP2); /*0x651937*/
        }
      }
    }
    v49 = a3; /*0x65194f*/
    v15 = &HouseClass_Player.__pad_5568[8976]; /*0x651950*/
    do /*0x651a2e*/
    {
      if ( *(v15 - 80) ) /*0x651955*/
      {
        Network::CopyAddress((_DWORD *)v15 + 3, &aP2, (int)&v57); /*0x651970*/
        fprintf(v7, g_Str_Trace_Name_, (CellStruct *)(v15 - 80)); /*0x65197c*/
        fprintf(v7, &stru_830620.__pad_579C[12336], (CellStruct *)(unsigned __int8)v57); /*0x6519b2*/
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
    while ( (int)v15 < (int)&HouseClass_Player.__pad_5568[9808] ); /*0x651a2e*/
    v16 = 0; /*0x651a34*/
    v17 = dword_B04474; /*0x651a36*/
    do /*0x651a68*/
    {
      if ( v16 == v55 ) /*0x651a3f*/
        fprintf(v7, &stru_830620.__pad_579C[13228], v16); /*0x651a4a*/
      else
        fprintf(v7, &stru_830620.__pad_579C[12324], v16); /*0x651a56*/
      ++v17; /*0x651a5e*/
      v16 = (CellStruct *)((char *)v16 + 1); /*0x651a61*/
    }
    while ( (int)v17 < (int)&dword_B04874 ); /*0x651a68*/
    v55 = 0; /*0x651a6a*/
    v18 = (CellStruct **)&v4->ambientSoundController[2]; /*0x651a72*/
    v19 = 8; /*0x651a75*/
    do /*0x651aaa*/
    {
      if ( *v18 != (CellStruct *)-1 ) /*0x651a7f*/
      {
        v55 = *v18; /*0x651a84*/
        fprintf(v7, &stru_830620.__pad_579C[13180], (CellStruct *)(v18 - 14)); /*0x651a9e*/
      }
      v18 += 23; /*0x651aa6*/
      --v19; /*0x651aa9*/
    }
    while ( v19 ); /*0x651aaa*/
    v57 = v4[4].customSound_controller[0]; /*0x651ab8*/
    v54 = 0; /*0x651abc*/
    if ( (int)v55 > 0 ) /*0x651ac4*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651acd*/
      do /*0x651b6b*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651ad9*/
        {
          fprintf(v7, &stru_830620.__pad_579C[13124], aP2); /*0x651ae4*/
          v20 = 0; /*0x651af2*/
          if ( v4[4].ambientSoundController[1] > 0 ) /*0x651af6*/
          {
            v21 = v57 + 64; /*0x651afc*/
            do /*0x651b4f*/
            {
              if ( *(char *)(v21 - 32) == v54 ) /*0x651b07*/
                fprintf(v7, &stru_830620.__pad_579C[13036], *(CellStruct **)(v21 - 64)); /*0x651b3b*/
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
    v23 = v4[4].ambientSoundController[1]; /*0x651b71*/
    v54 = 0; /*0x651b77*/
    v57 += 104 * v23; /*0x651b92*/
    if ( (int)v55 > 0 ) /*0x651b96*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651b9f*/
      do /*0x651c50*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651bab*/
        {
          fprintf(v7, &stru_830620.__pad_579C[12984], aP2); /*0x651bba*/
          v24 = 0; /*0x651bc8*/
          if ( v4[4].ambientSoundController[2] > 0 ) /*0x651bcc*/
          {
            v25 = v57 + 92; /*0x651bd2*/
            do /*0x651c34*/
            {
              if ( *(char *)(v25 - 60) == v54 ) /*0x651bdd*/
                fprintf(v7, &stru_830620.__pad_579C[12860], *(CellStruct **)(v25 - 92)); /*0x651c20*/
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
    v26 = v4[4].ambientSoundController[2]; /*0x651c56*/
    v54 = 0; /*0x651c60*/
    v57 += 104 * v26; /*0x651c77*/
    if ( (int)v55 > 0 ) /*0x651c7b*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651c84*/
      do /*0x651d1d*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651c90*/
        {
          fprintf(v7, &stru_830620.__pad_579C[12804], aP2); /*0x651c9b*/
          v27 = 0; /*0x651ca9*/
          if ( v4[4].ambientSoundController[3] > 0 ) /*0x651cad*/
          {
            v28 = v57 + 64; /*0x651cb3*/
            do /*0x651d01*/
            {
              if ( *(char *)(v28 - 32) == v54 ) /*0x651cbe*/
                fprintf(v7, &stru_830620.__pad_579C[12724], *(CellStruct **)(v28 - 64)); /*0x651ced*/
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
    v29 = v4[4].ambientSoundController[3]; /*0x651d23*/
    v54 = 0; /*0x651d2d*/
    v57 += 104 * v29; /*0x651d44*/
    if ( (int)v55 > 0 ) /*0x651d48*/
    {
      aP2 = (CellStruct *)&v4->__pad_0[12]; /*0x651d51*/
      do /*0x651de2*/
      {
        if ( *(_DWORD *)&aP2->__pad_34[4] != -1 ) /*0x651d5d*/
        {
          fprintf(v7, &stru_830620.__pad_579C[12668], aP2); /*0x651d68*/
          v30 = 0; /*0x651d76*/
          if ( v4[4].ambientSoundController[4] > 0 ) /*0x651d7a*/
          {
            v31 = v57 + 36; /*0x651d80*/
            do /*0x651dc6*/
            {
              if ( *(char *)(v31 - 4) == v54 ) /*0x651d8b*/
                fprintf(v7, &stru_830620.__pad_579C[12604], *(CellStruct **)(v31 - 36)); /*0x651db2*/
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
      fprintf(v7, &stru_830620.__pad_579C[11544], v33); /*0x651dff*/
      v34 = 0; /*0x651e06*/
      if ( *ebx60 > 0 ) /*0x651e0d*/
      {
        aP2 = 0; /*0x651e13*/
        do /*0x651ec5*/
        {
          v35 = (char *)aP2 + ebx60[5]; /*0x651e1e*/
          fprintf(v7, &stru_830620.__pad_579C[11528], v34); /*0x651e2a*/
          v36 = *((_WORD *)v35 + 18); /*0x651e2f*/
          if ( v36 == 43 || v36 == 19 ) /*0x651e40*/
          {
            v38 = AbstractType::FindName((void *)v36); /*0x651e68*/
            fprintf(v7, &stru_830620.__pad_579C[11492], (CellStruct *)v38); /*0x651e74*/
          }
          else
          {
            v37 = AbstractType::FindName((void *)v36); /*0x651e4d*/
            fprintf(v7, &stru_830620.__pad_579C[11508], (CellStruct *)v37); /*0x651e59*/
          }
          v39 = v35[32]; /*0x651e7c*/
          if ( v39 == -1 ) /*0x651e81*/
            fprintf(v7, &stru_830620.__pad_579C[12588], v49); /*0x651ead*/
          else
            fprintf(v7, &stru_830620.__pad_579C[11152], (CellStruct *)&v58->__pad_0[92 * v39 + 12]); /*0x651e9d*/
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
    fprintf(v7, &stru_830620.__pad_579C[11416], v49); /*0x651ee6*/
    v40 = 0; /*0x651eef*/
    if ( v58[4].visibilityFlags > 0 ) /*0x651efa*/
    {
      aP2 = 0; /*0x651f00*/
      do /*0x651fb7*/
      {
        v41 = v58; /*0x651f04*/
        v42 = (char *)aP2 + *(_DWORD *)&v58[4].needsRedraw; /*0x651f0c*/
        fprintf(v7, &stru_830620.__pad_579C[11528], v40); /*0x651f1c*/
        v43 = *((_WORD *)v42 + 18); /*0x651f21*/
        if ( v43 == 43 || v43 == 19 ) /*0x651f32*/
        {
          v45 = AbstractType::FindName((void *)v43); /*0x651f5a*/
          fprintf(v7, &stru_830620.__pad_579C[11492], (CellStruct *)v45); /*0x651f66*/
        }
        else
        {
          v44 = AbstractType::FindName((void *)v43); /*0x651f3f*/
          fprintf(v7, &stru_830620.__pad_579C[11508], (CellStruct *)v44); /*0x651f4b*/
        }
        v46 = v42[32]; /*0x651f6e*/
        if ( v46 == -1 ) /*0x651f73*/
          fprintf(v7, &stru_830620.__pad_579C[12588], v50); /*0x651f9b*/
        else
          fprintf(v7, &stru_830620.__pad_579C[11152], (CellStruct *)&v41->__pad_0[92 * v46 + 12]); /*0x651f8b*/
        visibilityFlags = v41[4].visibilityFlags; /*0x651fa7*/
        v40 = (CellStruct *)((char *)v40 + 1); /*0x651fad*/
        aP2 = (CellStruct *)((char *)aP2 + 40); /*0x651fb3*/
      }
      while ( (int)v40 < visibilityFlags ); /*0x651fb7*/
    }
    fprintf(v7, &stru_830620.__pad_579C[11100], *(CellStruct **)&v58->__pad_0[4]); /*0x651fcb*/
    v48 = v60; /*0x651fd0*/
    if ( v60 ) /*0x651fda*/
    {
      fprintf(v7, &stru_830620.__pad_579C[11048], v52); /*0x651fe2*/
      fprintf(v7, &stru_830620.__pad_579C[11028], (CellStruct *)*v48); /*0x651ff2*/
      fprintf(v7, &stru_830620.__pad_579C[11008], *(CellStruct **)(v48 + 3)); /*0x652001*/
      fprintf(v7, &stru_830620.__pad_579C[10988], (CellStruct *)(char)v48[2]); /*0x652011*/
      fprintf(v7, &stru_830620.__pad_579C[10968], *(CellStruct **)(v48 + 7)); /*0x652020*/
      fprintf(v7, &stru_830620.__pad_579C[10948], (CellStruct *)*(unsigned __int16 *)(v48 + 11)); /*0x652032*/
      fprintf(v7, &stru_830620.__pad_579C[10928], (CellStruct *)v48[13]); /*0x652046*/
    }
    fclose(v7); /*0x65204f*/
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


// ==== 0x00652110  Network_Process_652110  this=int  sig=ida-proto ====
char *__fastcall sub_652110(int a1, int a2)
{
  char *result; // eax
  int v4; // ebx
  unsigned int v5; // eax

  result = (char *)MEMORY[0xA8B238][0]; /*0x652110*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x65211e*/
  {
    v4 = *(_DWORD *)(a1 + 24 * a2); /*0x652135*/
    if ( MEMORY[0xA8DBA0] ) /*0x652142*/
      v5 = ((unsigned int)MEMORY[0xA8E2D4] >> 1) /*0x652183*/
         + (*(_DWORD *)(a1 + 24 * a2 + 16) >> 1)
         - (int)Math::RoundToInt(-60.0 / ((double)(int)MEMORY[0xA8B558] / (double)(unsigned int)MEMORY[0xA8B554])) / 2;
    else
      v5 = (unsigned int)IPXManagerClass::CheckStatus(MEMORY[0xA8E9C0], a2) >> 1; /*0x652192*/
    result = (char *)MEMORY[0xA8ED84] - v5 * (unsigned int)dword_ABCD44 / 0x3C - v4; /*0x6521af*/
    MEMORY[0xA8DB7C][a2] = (int)result; /*0x6521b2*/
  }
  else
  {
    MEMORY[0xA8DB7C][a2] = 0; /*0x652120*/
  }
  return result; /*0x65212b*/
}


// ==== 0x006521C0  Network::RecordEvent  this=unknown  sig=csp ====
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

  *(_DWORD *)((char *)&a1 + 3) = MEMORY[0xA8ED84]; /*0x6521c5*/
  if ( Networking_LastEventIndex >= 128 ) /*0x6521d3*/
    return 0; /*0x65222a*/
  v27 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex]; /*0x6521eb*/
  qmemcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
  v27 += 108; /*0x6521f2*/
  *(_WORD *)v27 = a27; /*0x6521f4*/
  v27[2] = BYTE2(a27); /*0x6521f6*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x652205*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x652215*/
  ++Networking_LastEventIndex; /*0x652220*/
  return 1; /*0x652227*/
}


// ==== 0x00652230  ObjectClass::Render_Show  this=CampaignClass  sig=csp ====
char Render_Show(CCINIClass *aP0, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  char result; // al
  wchar_t *v6; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-18h]
  int v8; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] + 1; /*0x652240*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 ) /*0x652246*/
    v3 = *(_DWORD *)&HouseClass_Player.__pad_5568[8864] /*0x652255*/
       * ((unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864] + *(_DWORD *)&HouseClass_Player.__pad_5568[23248])
        / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
  *(_DWORD *)(v2 + 3) = v3; /*0x652258*/
  if ( dword_8B41F8 >= 0x4000 ) /*0x652265*/
  {
    result = HouseClass_Player.__pad_5568[8068]; /*0x6522b7*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x6522c7*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6522e4*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 8878); /*0x65230f*/
      v6 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5816], 0, &stru_830620.__pad_579C[5860], 8878); /*0x65231a*/
      Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v8); /*0x652324*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0; /*0x652335*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x652341*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0; /*0x652347*/
      HouseClass_Player.__pad_5568[22252] = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x652366*/
      {
        stru_B05488.__pad_579C[4436] = 1; /*0x65236a*/
        HouseClass_Player.__pad_5568[9741] = 1; /*0x65236f*/
        HouseClass_Player.__pad_5568[9742] = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return ToggleDisplayMode(0); /*0x65238c*/
    }
  }
  else
  {
    if ( *(_DWORD *)&word_8B41FC ) /*0x65226e*/
      v4 = *(_DWORD *)&word_8B41FC - 1; /*0x652277*/
    else
      v4 = 0x3FFF; /*0x652270*/
    *(_DWORD *)&word_8B41FC = v4; /*0x65227b*/
    qmemcpy((char *)&unk_8B4204 + 111 * v4, (const void *)v2, 0x6Fu); /*0x652290*/
    dword_A70204[*(_DWORD *)&word_8B41FC] = timeGetTime(); /*0x6522a3*/
    return ++dword_8B41F8; /*0x6522af*/
  }
  return result; /*0x6522a2*/
}


// ==== 0x006523A0  Network::SendUnreachable  this=Network  sig=csp ====
int Network_SendUnreachable()
{
  int result; // eax
  int QueueCount; // edi
  int i; // ebx
  char *v3; // esi
  char *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  DWORD Ticks; // [esp+0h] [ebp-1E4h]
  _DWORD v10[3]; // [esp+10h] [ebp-1D4h] BYREF
  _DWORD v11[11]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v12; // [esp+48h] [ebp-19Ch]
  char v13; // [esp+4Ah] [ebp-19Ah]

  Debug::Log(MEMORY[0x8391CC]); /*0x6523ab*/
  result = MEMORY[0xA8B238]; /*0x6523b0*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x6523bb*/
  {
    Network::Disconnect(MEMORY[0xA8E9C0]); /*0x6523c9*/
    QueueCount = Network::GetQueueCount((int)MEMORY[0xA8E9C0]); /*0x6523d8*/
    for ( i = 0; i < dword_B052E0; ++i ) /*0x6523e7*/
    {
      memset(v11, 0, sizeof(v11)); /*0x6523f8*/
      v12 = 0; /*0x6523fa*/
      v13 = 0; /*0x6523fc*/
      v11[0] = 47; /*0x652402*/
      strcpy((char *)&v11[1], ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x65242c*/
      v3 = (char *)Network::checkTimeout(i); /*0x65243f*/
      if ( v3 ) /*0x652443*/
      {
        v4 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x65244d*/
        if ( _strcmpi(v3, v4) ) /*0x652454*/
        {
          Debug::Log(MEMORY[0x8391A8], v3); /*0x652466*/
          v5 = (_DWORD *)Network::processAcknowledgment(v3); /*0x652474*/
          v10[0] = *v5; /*0x65247b*/
          v10[1] = v5[1]; /*0x652485*/
          v10[2] = v5[2]; /*0x652491*/
          v6 = Network::handleDisconnect(v3); /*0x652495*/
          Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v11, 47, 1, (int)v10, v6, 0); /*0x6524ae*/
        }
      }
    }
    Ticks = Timer::GetTicks(); /*0x6524d3*/
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > QueueCount ) /*0x6524e6*/
    {
      v7 = 300; /*0x6524ec*/
      if ( Ticks != -1 ) /*0x6524f3*/
      {
        v8 = Timer::GetTicks() - Ticks; /*0x6524fe*/
        if ( v8 >= 300 ) /*0x652504*/
          break; /*0x652504*/
        v7 = 300 - v8; /*0x652506*/
      }
      if ( !v7 ) /*0x65250a*/
        break; /*0x65250a*/
      Event::Dispatch(); /*0x65250c*/
    }
    result = MEMORY[0xA8B238]; /*0x65251f*/
    if ( MEMORY[0xA8B238] == 4 ) /*0x65252a*/
      return Connection::Close(MEMORY[0xA8E9C0]); /*0x652531*/
  }
  return result; /*0x652536*/
}


// ==== 0x00652540  ObjectClass::Network_Process  this=int  sig=csp ====
int __thiscall sub_652540(_DWORD *this)
{
  int v1; // eax

  v1 = *this; /*0x652540*/
  if ( *this ) /*0x652540*/
  {
    *(this + 1) = ((unsigned __int8)*(this + 1) + 1) & 0x7F; /*0x65254e*/
    *this = v1 - 1; /*0x652551*/
  }
  return *this; /*0x652555*/
}


// ==== 0x00652560  ObjectClass::Network_Process  this=int  sig=csp ====
char __thiscall sub_652560(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x652560*/
  v3 = a2; /*0x652563*/
  if ( a2 >= v2 ) /*0x652569*/
    return 0; /*0x65258c*/
  v4 = v2 - 1; /*0x65256b*/
  *(this + 4) = v4; /*0x65256e*/
  if ( a2 < v4 ) /*0x652571*/
  {
    do /*0x652584*/
    {
      ++v3; /*0x652577*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x65257b*/
    }
    while ( v3 < *(this + 4) ); /*0x652584*/
  }
  return 1; /*0x652589*/
}


// ==== 0x006525A0  ObjectClass::Network_Process_6525A0  this=int  sig=csp ====
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
  MEMORY[0xB049F8] = dbl_B048D8 / 60.0; /*0x6526bc*/
}


// ==== 0x006526D0  sub_6526D0  this=-  sig=ida-proto ====
void sub_6526D0()
{
  MEMORY[0xB049E0] = 1.0 / MEMORY[0xB049F8]; /*0x6526dc*/
}


// ==== 0x006526F0  sub_6526F0  this=-  sig=ida-proto ====
void sub_6526F0()
{
  MEMORY[0xB049D8] = 0.0174532925199433 * 45.0; /*0x6526fc*/
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
  MEMORY[0xB04A34] = result; /*0x65277b*/
  return result; /*0x652780*/
}


// ==== 0x00652790  sub_652790  this=-  sig=ida-proto ====
void sub_652790()
{
  dbl_B048F0 = Math::ArcTan((double)MEMORY[0xB04A34] * 0.00390625); /*0x6527a7*/
}


// ==== 0x006527C0  sub_6527C0  this=-  sig=ida-proto ====
void sub_6527C0()
{
  MEMORY[0xB04970] = Math::ArcTan((double)(2 * MEMORY[0xB04A34]) / dbl_B048D8); /*0x6527e2*/
}


// ==== 0x006527F0  sub_6527F0  this=-  sig=ida-proto ====
__int64 sub_6527F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB04A34]) + 0.5); /*0x65280b*/
  MEMORY[0xB049F4] = result; /*0x652810*/
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
  MEMORY[0xB04900] = 0; /*0x652832*/
  MEMORY[0xB04904] = 0; /*0x652837*/
  MEMORY[0xB04908] = 0; /*0x65283c*/
  return 0; /*0x652841*/
}


// ==== 0x00652850  sub_652850  this=-  sig=ida-proto ====
int sub_652850()
{
  MEMORY[0xB049F0] = 0; /*0x652855*/
  MEMORY[0xB049E8] = 128; /*0x65285f*/
  MEMORY[0xB049EC] = 128; /*0x652864*/
  return 128; /*0x652869*/
}


// ==== 0x00652870  sub_652870  this=-  sig=ida-proto ====
int sub_652870()
{
  GadgetClass::Construct(MEMORY[0xB04A10], 0, 0, 0, 0, 159, 1); /*0x652884*/
  MEMORY[0xB04A10][0] = (int)&vt_RadarClass_RTacticalClass; /*0x65288e*/
  return atexit(sub_6528A0); /*0x65289e*/
}


// ==== 0x006528A0  sub_6528A0  this=-  sig=ida-proto ====
void __cdecl sub_6528A0()
{
  if ( (byte_B048A8 & 1) == 0 ) /*0x6528aa*/
  {
    byte_B048A8 |= 1u; /*0x6528ae*/
    GadgetClass::Dtor(MEMORY[0xB04A10]); /*0x6528b9*/
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
  ShapeButtonClass::Init(MEMORY[0xB04978]); /*0x6528d5*/
  return atexit(sub_6528F0); /*0x6528e5*/
}


// ==== 0x006528F0  sub_6528F0  this=-  sig=ida-proto ====
void __cdecl sub_6528F0()
{
  if ( (byte_B048A8 & 2) == 0 ) /*0x6528fa*/
  {
    byte_B048A8 |= 2u; /*0x6528fe*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB04978]); /*0x652909*/
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
  ShapeButtonClass::Init(MEMORY[0xB04910]); /*0x652925*/
  return atexit(sub_652940); /*0x652935*/
}


// ==== 0x00652940  sub_652940  this=-  sig=ida-proto ====
void __cdecl sub_652940()
{
  if ( (byte_B048A8 & 4) == 0 ) /*0x65294a*/
  {
    byte_B048A8 |= 4u; /*0x65294e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB04910]); /*0x652959*/
  }
}


// ==== 0x00652960  RadarClass::Construct  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass_Constructor(_DWORD *this)
{
  int v2; // ebx
  int v3; // edx
  _DWORD *v4; // edi
  int v5; // ebp
  int v6; // edx
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]

  RadarClass::RenderSpySatellite(); /*0x652969*/
  v2 = 0; /*0x65296e*/
  this->RadarClass_field_0x11E8 = 0; /*0x652976*/
  this->RadarClass_field_0x11EC = 0; /*0x65297c*/
  this->RadarClass_field_0x11F0 = 0; /*0x652982*/
  this->RadarClass_field_0x11F4 = 0; /*0x652988*/
  this->RadarClass_field_0x11F8 = 0; /*0x65298e*/
  this->RadarClass_field_0x11FC = 0; /*0x652994*/
  this->RadarClass_field_0x1200 = 0; /*0x65299a*/
  this->RadarClass_field_0x1204 = 0; /*0x6529a0*/
  this->q120C = dword_B048B0; /*0x6529b2*/
  this->q1210 = dword_B048B4; /*0x6529bc*/
  this->q1214 = dword_B048B8; /*0x6529c5*/
  v3 = dword_B048BC; /*0x6529c8*/
  this->RadarClass_field_0x121C = 0; /*0x6529d0*/
  this->q1218 = v3; /*0x6529d6*/
  this->RadarClass_field_0x1220 = 0; /*0x6529d9*/
  VectorClass::CellConstructor(this + 1161, 0, 0); /*0x6529df*/
  this->RadarClass_field_0x1224 = &vt_DynamicVectorClass_Cell; /*0x6529e9*/
  this->q1238 = 10; /*0x6529ef*/
  this->q1234 = 0; /*0x6529f2*/
  this->RadarClass_field_0x123C = 0; /*0x6529fb*/
  this->RadarClass_field_0x1240 = 0; /*0x652a01*/
  this->RadarClass_field_0x1244 = 0; /*0x652a07*/
  this->RadarClass_field_0x1248 = 0; /*0x652a0e*/
  this->RadarClass_field_0x124C = 0; /*0x652a14*/
  this->RadarClass_field_0x1250 = 0; /*0x652a1a*/
  this->RadarClass_field_0x1254 = 0; /*0x652a20*/
  this->RadarClass_field_0x1258 = 0; /*0x652a29*/
  VectorClass::PointConstructor(0, 0); /*0x652a2f*/
  this->RadarClass_field_0x125C = &DynamicVectorClass<Point2D>::`vftable'; /*0x652a34*/
  this->q1270 = 10; /*0x652a3a*/
  this->q126C = 0; /*0x652a3d*/
  this->RadarClass_field_0x1274 = 0; /*0x652a40*/
  v4 = this + 1182; /*0x652a46*/
  v5 = 22; /*0x652a4c*/
  do /*0x652a6e*/
  {
    VectorClass::PointConstructor(0, 0); /*0x652a55*/
    *v4 = &DynamicVectorClass<Point2D>::`vftable'; /*0x652a5a*/
    v4[5] = 10; /*0x652a60*/
    v4[4] = 0; /*0x652a67*/
    v4 += 6; /*0x652a6a*/
    --v5; /*0x652a6d*/
  }
  while ( v5 ); /*0x652a6e*/
  this->RadarClass_field_0x1488 = 0; /*0x652a70*/
  this->q148C = 1; /*0x652a76*/
  this->RadarClass_field_0x1490 = 0; /*0x652a80*/
  this->RadarClass_field_0x1494 = 0; /*0x652a86*/
  this->RadarClass_field_0x1498 = 0; /*0x652a8c*/
  this->RadarClass_field_0x149C = dword_B048B0; /*0x652a9e*/
  this->q14A0 = dword_B048B4; /*0x652aaa*/
  this->RadarClass_field_0x14A4 = dword_B048B8; /*0x652ab3*/
  v6 = dword_B048BC; /*0x652ab6*/
  this->RadarClass_field_0x14AC = 0; /*0x652abc*/
  this->RadarClass_field_0x14B0 = 0; /*0x652ac2*/
  this->q14A8 = v6; /*0x652ac8*/
  this->RadarClass_field_0x14B4 = 0; /*0x652acb*/
  *((_BYTE *)this + 5308) = 0; /*0x652ad1*/
  *((_BYTE *)this + 5309) = 0; /*0x652ad7*/
  this->q14D4 = -1; /*0x652add*/
  *((_BYTE *)this + 5336) = 0; /*0x652ae7*/
  *((_BYTE *)this + 5337) = 0; /*0x652aed*/
  *((_BYTE *)this + 5338) = 0; /*0x652af3*/
  this->q14DC = dword_B048B0; /*0x652b05*/
  this->q14E0 = dword_B048B4; /*0x652b11*/
  this->q14E4 = dword_B048B8; /*0x652b1a*/
  v7 = dword_B048BC; /*0x652b1d*/
  this->RadarClass_field_0x14FC = 0; /*0x652b29*/
  this->q14E8 = v7; /*0x652b2f*/
  this->q1500 = Timer::GetTicks(); /*0x652b37*/
  this->RadarClass_field_0x1508 = 0; /*0x652b3d*/
  *this = &vt_RadarClass; /*0x652b45*/
  v8 = __2_YAPAXI_Z(0x10u); /*0x652b4b*/
  v9 = v8; /*0x652b50*/
  if ( v8 ) /*0x652b57*/
  {
    v8[1] = Radar::PixelIndex; /*0x652b63*/
    v8[2] = 256; /*0x652b6a*/
    v8[3] = 10; /*0x652b71*/
    v10 = __2_YAPAXI_Z(0x1804u); /*0x652b74*/
    if ( v10 ) /*0x652b7e*/
    {
      v11 = v10 + 1; /*0x652b80*/
      *v10 = 256; /*0x652b83*/
      v17 = v10 + 1; /*0x652b89*/
      v16 = 256; /*0x652b8d*/
      do /*0x652baa*/
      {
        RadarHashVector::Construct(0, 0); /*0x652b99*/
        v11 += 6; /*0x652ba2*/
        --v16; /*0x652ba6*/
      }
      while ( v16 ); /*0x652baa*/
      v12 = v17; /*0x652bac*/
    }
    else
    {
      v12 = 0; /*0x652bb7*/
    }
    v13 = v9[2]; /*0x652bb9*/
    *v9 = v12; /*0x652bbc*/
    v14 = 0; /*0x652bbe*/
    if ( v13 > 0 ) /*0x652bc2*/
    {
      do /*0x652bd3*/
      {
        ++v14; /*0x652bc6*/
        *(_DWORD *)(*v9 + v2 + 20) = 10; /*0x652bc7*/
        v2 += 24; /*0x652bce*/
      }
      while ( v14 < v9[2] ); /*0x652bd3*/
    }
  }
  else
  {
    v9 = 0; /*0x652bd7*/
  }
  this->RadarClass_field_0x1258 = v9; /*0x652bd9*/
  this->q1270 = 500; /*0x652be5*/
  AudioController::Init(this + 1328); /*0x652bef*/
  return this; /*0x652bf6*/
}


// ==== 0x00652C00  RadarClass::Destruct  this=RadarClass  sig=csp ====
int __thiscall RadarClass_Destructor(_DWORD *this)
{
  char *v2; // esi
  int v3; // ebp
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  *this = &vt_RadarClass; /*0x652c0c*/
  AudioFileClass::Release(this + 1328); /*0x652c12*/
  TacticalClass::FreeResources(this); /*0x652c19*/
  v2 = (char *)(this + 1314); /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = (void *)*((_DWORD *)v2 - 5); /*0x652c2b*/
    v2 -= 24; /*0x652c2e*/
    *(_DWORD *)v2 = &vt_VectorClass_Point2D; /*0x652c33*/
    if ( v4 && v2[13] ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      *((_DWORD *)v2 + 1) = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    v2[13] = 0; /*0x652c4d*/
    *((_DWORD *)v2 + 2) = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  v5 = (void *)this->RadarClass_field_0x1260; /*0x652c55*/
  this->RadarClass_field_0x125C = &vt_VectorClass_Point2D; /*0x652c5b*/
  if ( v5 && *((_BYTE *)this + 4713) ) /*0x652c69*/
  {
    __3_YAXPAX_Z(v5); /*0x652c72*/
    this->RadarClass_field_0x1260 = 0; /*0x652c7a*/
  }
  *((_BYTE *)this + 4713) = 0; /*0x652c80*/
  *(this + 1177) = 0; /*0x652c86*/
  v6 = (void *)this->RadarClass_field_0x1228; /*0x652c8c*/
  this->RadarClass_field_0x1224 = &vt_VectorClass_Cell; /*0x652c92*/
  if ( v6 && *((_BYTE *)this + 4657) ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(v6); /*0x652ca9*/
    this->RadarClass_field_0x1228 = 0; /*0x652cb1*/
  }
  *((_BYTE *)this + 4657) = 0; /*0x652cb9*/
  *(this + 1163) = 0; /*0x652cbf*/
  return MapClass::Destruct(this); /*0x652cca*/
}


// ==== 0x00652CD0  ObjectClass::method_652CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_652CD0(_DWORD *this)
{
  *(this + 1323) = 4; /*0x652cd0*/
  *(this + 1343) = 25; /*0x652cda*/
}


// ==== 0x00652CF0  RadarClass::Destru_vt05  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt05(int *this)
{
  int result; // eax

  Debug::Log(); /*0x652cf8*/
  *(this + 1152) = 140; /*0x652d07*/
  *(this + 1150) = 140; /*0x652d0d*/
  *(this + 1145) = 0; /*0x652d18*/
  *(this + 1146) = 16; /*0x652d22*/
  *(this + 1147) = 48; /*0x652d2c*/
  *(this + 1153) = 108; /*0x652d36*/
  *(this + 1151) = 108; /*0x652d3c*/
  *(this + 1149) = 49; /*0x652d42*/
  DisplayClass::LoadTypeData(this); /*0x652d4c*/
  MEMORY[0xB04A20] = *(this + 1149); /*0x652d57*/
  MEMORY[0xB04A24] = *(this + 1152); /*0x652d62*/
  MEMORY[0xB04A28] = *(this + 1153); /*0x652d73*/
  MEMORY[0xB04A30] = 223; /*0x652d79*/
  result = VocClass::FindByName(MEMORY[0x8392C0]); /*0x652d83*/
  *(this + 1333) = result; /*0x652d88*/
  return result; /*0x652d8e*/
}


// ==== 0x00652D90  RadarClass::Destru_vt50  this=RadarClass  sig=csp ====
void RadarClass::Destru_vt50()
{
  if ( MEMORY[0xB048F9] ) /*0x652d9a*/
  {
    __3_YAXPAX_Z(dword_B048E0); /*0x652da2*/
    MEMORY[0xB048F9] = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( stru_B048F8 ) /*0x652dbd*/
  {
    __3_YAXPAX_Z(dword_B048AC); /*0x652dc6*/
    stru_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/
}


// ==== 0x00652DE0  RadarClass::Destru_vt07  this=RadarClass  sig=csp ====
void __thiscall RadarClass::Destru_vt07(int this)
{
  int v2; // eax

  DisplayClass::SetSize(this); /*0x652de3*/
  Debug::Log(); /*0x652ded*/
  *(_DWORD *)(this + 5292) = 0; /*0x652dfa*/
  *(_DWORD *)(this + 5296) = 0; /*0x652e00*/
  *(_BYTE *)(this + 5309) = 0; /*0x652e06*/
  *(_BYTE *)(this + 5308) = 0; /*0x652e0c*/
  *(_DWORD *)(this + 5372) = 0; /*0x652e12*/
  *(_BYTE *)(this + 5336) = 0; /*0x652e18*/
  v2 = *(_DWORD *)(this + 4644); /*0x652e1e*/
  *(_BYTE *)(this + 5337) = 1; /*0x652e23*/
  (*(void (**)(void))(v2 + 12))(); /*0x652e2a*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4700) + 12))(this + 4700); /*0x652e39*/
  Debug::Log(); /*0x652e41*/
}


// ==== 0x00652E50  ObjectClass::resetObjectState  this=SidebarClass  sig=csp ====
int __thiscall ObjectClass::resetObjectState(int *this, SidebarClass *aP1)
{
  int v3; // eax

  v3 = *this; /*0x652e5e*/
  if ( (_BYTE)aP1 ) /*0x652e60*/
  {
    (*(void (__stdcall **)(_DWORD *))(v3 + 48))(MEMORY[0xB04978]); /*0x652e62*/
    return (*(int (__thiscall **)(int *, _DWORD *))(*this + 48))(this, MEMORY[0xB04910]); /*0x652e6e*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(v3 + 52))(MEMORY[0xB04978]); /*0x652e75*/
    return (*(int (__thiscall **)(int *, _DWORD *))(*this + 52))(this, MEMORY[0xB04910]); /*0x652e81*/
  }
}


// ==== 0x00652E90  RadarClass::Destru_vt53  this=RadarClass  sig=csp ====
int __thiscall RadarClass::Destru_vt53(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int result; // eax

  Debug::Log(); /*0x652e99*/
  (*(void (__thiscall **)(_DWORD *))(*this + 200))(this); /*0x652ea5*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x652eb1*/
  {
    this->RadarClass_field_0x11F0 = 16; /*0x652f13*/
    MEMORY[0xB04A00] = this->q11E4 + 14; /*0x652f22*/
    v2 = this->RadarClass_field_0x11E8 + 5; /*0x652f2d*/
    MEMORY[0xB04A04] = v2; /*0x652f30*/
    v3 = this->q11E4 + 86; /*0x652f3b*/
  }
  else
  {
    this->RadarClass_field_0x11F0 = 16; /*0x652ecf*/
    MEMORY[0xB04A00] = this->q11E4 + 11; /*0x652ede*/
    v2 = this->RadarClass_field_0x11E8 + 4; /*0x652ee9*/
    MEMORY[0xB04A04] = v2; /*0x652eec*/
    v3 = this->q11E4 + 83; /*0x652ef7*/
  }
  dword_B048C8 = v3; /*0x652f3e*/
  dword_B048CC = v2; /*0x652f4a*/
  MEMORY[0xB04A1C] = this->RadarClass_field_0x11F0; /*0x652f55*/
  dword_B048E0 = LoadFileSHP(MEMORY[0x8391F4], (bool *)&MEMORY[0xB048F9]); /*0x652f70*/
  dword_B048AC = LoadFileSHP(MEMORY[0x8391F8], (bool *)&stru_B048F8); /*0x652f80*/
  MEMORY[0xB04A08] = *((__int16 *)dword_B048E0 + 1); /*0x652f89*/
  MEMORY[0xB04A0C] = *((__int16 *)dword_B048E0 + 2); /*0x652f93*/
  dword_B048D0 = *((__int16 *)dword_B048AC + 1); /*0x652fa3*/
  v4 = *((__int16 *)dword_B048AC + 2); /*0x652fab*/
  MEMORY[0xB04A38] = (int)MEMORY[0xB0FA68]; /*0x652fb5*/
  dword_B048D4 = v4; /*0x652fc1*/
  result = (unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x653001*/
  this->q1208 = result /*0x653005*/
                 | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                 | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  return result; /*0x653000*/
}


// ==== 0x00653010  RadarClass::CreateScrollButtons  this=RadarClass  sig=csp ====
void SidebarClass_CreateScrollButtons()
{
  DisplayClass::ddtor(); /*0x653011*/
  if ( !MEMORY[0xA8ED6B] ) /*0x65301f*/
  {
    MEMORY[0xB0499C] = 242; /*0x65303d*/
    MEMORY[0xB049C4] = 1; /*0x653047*/
    MEMORY[0xB049C8] = MEMORY[0x87F6CC]; /*0x65304e*/
    MEMORY[0xB049A5] = 0; /*0x653053*/
    MEMORY[0xB049A8] = 0; /*0x653059*/
    MEMORY[0xB04998] = 5; /*0x65305f*/
    Rect_Point::Set(MEMORY[0xB04978], MEMORY[0xB04A00], MEMORY[0xB04A04]); /*0x653069*/
    ShapeButton::SetShape((int)MEMORY[0xB04978], (int)dword_B048E0, 0, 0); /*0x65307b*/
    VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB04978]); /*0x653085*/
    MEMORY[0xB04960] = MEMORY[0x87F6CC]; /*0x65309b*/
    MEMORY[0xB04934] = 243; /*0x6530a8*/
    MEMORY[0xB0495C] = 1; /*0x6530b2*/
    MEMORY[0xB0493D] = 0; /*0x6530b9*/
    MEMORY[0xB04940] = 0; /*0x6530bf*/
    MEMORY[0xB04930] = 5; /*0x6530c5*/
    Rect_Point::Set(MEMORY[0xB04910], dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((int)MEMORY[0xB04910], (int)dword_B048AC, 0, 0); /*0x6530e2*/
    VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB04910]); /*0x6530ec*/
  }
}


// ==== 0x00653100  RadarClass::Destru_vt16  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt16(int this, char a2)
{
  int v2; // eax
  char v3; // bl
  bool v5; // al
  char v6; // cl
  bool v7; // al
  void *v8; // edi
  int *v9; // eax
  int v10; // eax
  signed int v11; // edi
  signed int v12; // eax
  DWORD Ticks; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int *v20; // eax
  int v21; // ecx
  char v22; // al
  int v23; // edi
  int *v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // edi
  int v29; // edi
  int *v30; // eax
  int *v31; // ebp
  int v32; // eax
  int v33; // ecx
  int v34; // edi
  int v35; // ebx
  int v36; // edi
  int v37; // edx
  int *v38; // edi
  int v39; // ecx
  int v40; // esi
  int v41; // ebx
  int v42; // esi
  int v43; // edx
  int v45; // [esp+10h] [ebp-38h] BYREF
  int v46; // [esp+14h] [ebp-34h]
  int v47; // [esp+18h] [ebp-30h] BYREF
  int v48; // [esp+1Ch] [ebp-2Ch]
  int v49; // [esp+20h] [ebp-28h]
  int v50; // [esp+24h] [ebp-24h]
  char v51[16]; // [esp+28h] [ebp-20h] BYREF
  char v52[16]; // [esp+38h] [ebp-10h] BYREF

  LOBYTE(v2) = MEMORY[0xA8ED6B]; /*0x653100*/
  v3 = 0; /*0x65310a*/
  if ( MEMORY[0xA8ED6B] ) /*0x653112*/
  {
    *(_BYTE *)(this + 5338) = 0; /*0x653114*/
    *(_BYTE *)(this + 5337) = 0; /*0x65311a*/
    return v2; /*0x653127*/
  }
  v5 = *(_BYTE *)(this + 5338) == 1 || a2 == 1; /*0x653148*/
  v6 = *(_BYTE *)(this + 5337); /*0x65314a*/
  *(_BYTE *)(this + 5338) = v5; /*0x653150*/
  v7 = v6 == 1 || v5; /*0x653163*/
  *(_BYTE *)(this + 5337) = v7; /*0x653167*/
  if ( v7 ) /*0x65316d*/
  {
    v8 = MEMORY[0xB0F9E0]; /*0x653184*/
    v45 = *(_DWORD *)(this + 4580); /*0x65318b*/
    v46 = *(_DWORD *)(this + 4584); /*0x65319d*/
    v9 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], &v47); /*0x6531a8*/
    DrawToSurfaceSHP(MEMORY[0x887300], MEMORY[0x87F6CC], (int)v8, 0, &v45, v9, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6531c0*/
    ShapeButton::Draw((int)MEMORY[0xB04978], 1); /*0x6531cb*/
    ShapeButton::Draw((int)MEMORY[0xB04910], 1); /*0x6531d6*/
  }
  v10 = *(_DWORD *)(this + 5292); /*0x6531db*/
  if ( v10 != 1 ) /*0x6531e3*/
  {
    if ( !v10 ) /*0x6531eb*/
      goto LABEL_25; /*0x6531eb*/
    v11 = *(_DWORD *)(this + 5384); /*0x6531f7*/
    if ( *(_DWORD *)(this + 5376) != -1 ) /*0x653200*/
    {
      v12 = Timer::GetTicks() - *(_DWORD *)(this + 5376); /*0x65320d*/
      if ( v12 >= v11 ) /*0x653215*/
        goto LABEL_19; /*0x653215*/
      v11 -= v12; /*0x653217*/
    }
    if ( v11 ) /*0x65321b*/
      goto LABEL_25; /*0x65321b*/
LABEL_19:
    Ticks = Timer::GetTicks(); /*0x653221*/
    v14 = v48; /*0x65322a*/
    *(_DWORD *)(this + 5376) = Ticks; /*0x65322e*/
    v15 = *(_DWORD *)(this + 5292); /*0x653234*/
    *(_DWORD *)(this + 5380) = v14; /*0x65323f*/
    *(_DWORD *)(this + 5384) = 4; /*0x653245*/
    v16 = *(_DWORD *)(this + 5372); /*0x65324b*/
    v3 = 1; /*0x653254*/
    if ( v15 == 2 ) /*0x653256*/
    {
      *(_DWORD *)(this + 5372) = v16 - 1; /*0x65325b*/
      if ( v16 - 1 > 0 ) /*0x653263*/
        goto LABEL_25; /*0x653263*/
      v17 = 0; /*0x653265*/
      *(_DWORD *)(this + 5292) = 0; /*0x65326d*/
      Mixer::ReleaseChannel((int **)(this + 5312)); /*0x653273*/
    }
    else
    {
      v17 = 32; /*0x65327b*/
      *(_DWORD *)(this + 5372) = v16 + 1; /*0x653282*/
      if ( v16 + 1 < 32 ) /*0x65328a*/
        goto LABEL_25; /*0x65328a*/
      Mixer::ReleaseChannel((int **)(this + 5312)); /*0x653292*/
      *(_DWORD *)(this + 5292) = 1; /*0x653297*/
      *(_BYTE *)(this + 5338) = 1; /*0x65329d*/
    }
    *(_DWORD *)(this + 5372) = v17; /*0x6532a4*/
LABEL_25:
    if ( *(_DWORD *)(this + 5292) != 1 && (*(_BYTE *)(this + 5337) == 1 || v3) ) /*0x6532c1*/
    {
      v18 = *(_DWORD *)(this + 5372); /*0x6532c7*/
      if ( v18 >= 0 && v18 < *(__int16 *)(MEMORY[0xB04A38] + 6) ) /*0x6532e1*/
      {
        v19 = VtableStub::72F510(); /*0x6532ec*/
        v45 = *(_DWORD *)(this + 4580); /*0x653304*/
        v46 = *(_DWORD *)(this + 4588); /*0x653316*/
        v20 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], &v47); /*0x653321*/
        DrawToSurfaceSHP( /*0x653340*/
          MEMORY[0x887300],
          v19,
          MEMORY[0xB04A38],
          *(_DWORD *)(this + 5372),
          &v45,
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
        v21 = *(_DWORD *)(this + 4588); /*0x653351*/
        *(_DWORD *)(this + 4620) = *(_DWORD *)(this + 4580); /*0x653362*/
        *(_DWORD *)(this + 4624) = v21; /*0x653364*/
        *(_DWORD *)(this + 4628) = 168; /*0x653367*/
        *(_DWORD *)(this + 4632) = 110; /*0x65336a*/
      }
    }
  }
  Map_Helper_65FDD0(); /*0x65336d*/
  Radar::RenderMinimap(this); /*0x653374*/
  if ( *(_DWORD *)(this + 5292) == 1 ) /*0x65337f*/
  {
    switch ( *(_DWORD *)(this + 5296) ) /*0x653395*/
    {
      case 1: /*0x653395*/
      case 4: /*0x653395*/
        break;
      case 2: /*0x653395*/
        if ( *(_BYTE *)(this + 5337) ) /*0x65339c*/
        {
          v22 = *(_BYTE *)(this + 5338); /*0x6533aa*/
          *(_BYTE *)(this + 5337) = 0; /*0x6533b0*/
          if ( v22 ) /*0x6533b9*/
          {
            v23 = VtableStub::72F510(); /*0x6533c0*/
            v45 = *(_DWORD *)(this + 4580); /*0x6533d8*/
            v46 = *(_DWORD *)(this + 4588); /*0x6533ea*/
            v24 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v51); /*0x6533f5*/
            DrawToSurfaceSHP(MEMORY[0x887300], v23, MEMORY[0xB04A38], 0x20u, &v45, v24, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x65340f*/
            RenderScoreboardSidebar((_DWORD *)this, 1); /*0x653416*/
            goto LABEL_40; /*0x65341b*/
          }
          RenderScoreboardSidebar((_DWORD *)this, 1); /*0x653422*/
          v25 = *(_DWORD *)(this + 4592); /*0x653427*/
          v26 = *(_DWORD *)(this + 4596); /*0x65342d*/
          v27 = *(_DWORD *)(this + 4608); /*0x653433*/
          v28 = *(_DWORD *)(this + 4612); /*0x653439*/
          goto LABEL_41; /*0x65343f*/
        }
        break; /*0x65343f*/
      case 3: /*0x653395*/
        Game::ManageGameSpeed(this); /*0x653446*/
        break; /*0x65344b*/
      default:
        if ( *(_BYTE *)(this + 5337) ) /*0x653450*/
        {
          *(_BYTE *)(this + 5337) = 0; /*0x65345e*/
          v29 = VtableStub::72F510(); /*0x65346a*/
          v47 = *(_DWORD *)(this + 4580); /*0x653482*/
          v48 = *(_DWORD *)(this + 4588); /*0x653494*/
          v30 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v52); /*0x65349f*/
          DrawToSurfaceSHP(MEMORY[0x887300], v29, MEMORY[0xB04A38], 0, &v47, v30, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6534b9*/
LABEL_40:
          v25 = *(_DWORD *)(this + 4580); /*0x6534be*/
          v26 = *(_DWORD *)(this + 4588); /*0x6534c4*/
          v27 = 168; /*0x6534ca*/
          v28 = 110; /*0x6534d0*/
LABEL_41:
          *(_DWORD *)(this + 4620) = v25; /*0x6534d5*/
          *(_DWORD *)(this + 4624) = v26; /*0x6534e1*/
          *(_DWORD *)(this + 4628) = v27; /*0x6534e4*/
          *(_DWORD *)(this + 4632) = v28; /*0x6534e7*/
        }
        break; /*0x6534e7*/
    }
  }
  if ( *(_BYTE *)(this + 5338) ) /*0x6534ea*/
  {
    *(_BYTE *)(this + 5338) = 0; /*0x6534fa*/
    ShapeButton::Draw((int)MEMORY[0xB0B3A0], 1); /*0x653501*/
    ShapeButton::Draw((int)MEMORY[0xB07DF8], 1); /*0x65350c*/
  }
  if ( MEMORY[0xB049CC] ) /*0x653518*/
  {
    v31 = (int *)(this + 4620); /*0x653524*/
    if ( *(int *)(this + 4628) <= 0 || *(int *)(this + 4632) <= 0 ) /*0x653537*/
    {
      v32 = MEMORY[0xB04A00]; /*0x6535fe*/
      v33 = MEMORY[0xB04A04]; /*0x653603*/
      v37 = MEMORY[0xB04A08]; /*0x653609*/
      v36 = MEMORY[0xB04A0C]; /*0x65360f*/
    }
    else if ( MEMORY[0xB04A08] <= 0 || MEMORY[0xB04A0C] <= 0 ) /*0x653551*/
    {
      v32 = *v31; /*0x6535f1*/
      v33 = *(_DWORD *)(this + 4624); /*0x6535f3*/
      v37 = *(_DWORD *)(this + 4628); /*0x6535f6*/
      v36 = *(_DWORD *)(this + 4632); /*0x6535f9*/
    }
    else
    {
      v32 = *v31; /*0x653559*/
      v33 = *(_DWORD *)(this + 4624); /*0x65355b*/
      v34 = *(_DWORD *)(this + 4628); /*0x65355e*/
      v49 = v34; /*0x653561*/
      v50 = *(_DWORD *)(this + 4632); /*0x653568*/
      if ( v32 > MEMORY[0xB04A00] ) /*0x653574*/
      {
        v34 += v32 - MEMORY[0xB04A00]; /*0x653578*/
        v32 = MEMORY[0xB04A00]; /*0x65357a*/
        v49 = v34; /*0x65357c*/
      }
      if ( v33 > MEMORY[0xB04A04] ) /*0x653588*/
      {
        v35 = v33 - MEMORY[0xB04A04] + v50; /*0x653590*/
        v33 = MEMORY[0xB04A04]; /*0x653592*/
        v50 = v35; /*0x653598*/
      }
      if ( v32 + v34 < MEMORY[0xB04A00] + MEMORY[0xB04A08] ) /*0x6535a8*/
        v49 = MEMORY[0xB04A08] - v32 + MEMORY[0xB04A00] + 1; /*0x6535b6*/
      if ( v50 + v33 >= MEMORY[0xB04A04] + MEMORY[0xB04A0C] ) /*0x6535d1*/
        v36 = v50; /*0x6535e5*/
      else
        v36 = MEMORY[0xB04A04] - v33 + MEMORY[0xB04A0C] + 1; /*0x6535db*/
      v37 = v49; /*0x6535df*/
    }
    *v31 = v32; /*0x653615*/
    *(_DWORD *)(this + 4624) = v33; /*0x653618*/
    *(_DWORD *)(this + 4628) = v37; /*0x65361b*/
    *(_DWORD *)(this + 4632) = v36; /*0x65361e*/
    MEMORY[0xB0B518] = 1; /*0x653621*/
  }
  LOBYTE(v2) = MEMORY[0xB04964]; /*0x653628*/
  if ( MEMORY[0xB04964] ) /*0x65362f*/
  {
    v38 = (int *)(this + 4620); /*0x65363b*/
    if ( *(int *)(this + 4628) <= 0 || *(int *)(this + 4632) <= 0 ) /*0x65364e*/
    {
      v2 = dword_B048C8; /*0x653701*/
      v39 = dword_B048CC; /*0x653706*/
      v43 = dword_B048D0; /*0x65370c*/
      v42 = dword_B048D4; /*0x653712*/
    }
    else if ( dword_B048D0 <= 0 || dword_B048D4 <= 0 ) /*0x653668*/
    {
      v2 = *v38; /*0x6536f4*/
      v39 = *(_DWORD *)(this + 4624); /*0x6536f6*/
      v43 = *(_DWORD *)(this + 4628); /*0x6536f9*/
      v42 = *(_DWORD *)(this + 4632); /*0x6536fc*/
    }
    else
    {
      v2 = *v38; /*0x653670*/
      v39 = *(_DWORD *)(this + 4624); /*0x653672*/
      v40 = *(_DWORD *)(this + 4628); /*0x653675*/
      v49 = v38[2]; /*0x653678*/
      v50 = v38[3]; /*0x65367f*/
      if ( v2 > dword_B048C8 ) /*0x65368b*/
      {
        v40 += v2 - dword_B048C8; /*0x65368f*/
        v2 = dword_B048C8; /*0x653691*/
        v49 = v40; /*0x653693*/
      }
      if ( v39 > dword_B048CC ) /*0x65369f*/
      {
        v41 = v39 - dword_B048CC + v50; /*0x6536a7*/
        v39 = dword_B048CC; /*0x6536a9*/
        v50 = v41; /*0x6536ab*/
      }
      if ( v2 + v40 < dword_B048C8 + dword_B048D0 ) /*0x6536bb*/
        v49 = dword_B048D0 - v2 + dword_B048C8 + 1; /*0x6536c9*/
      v42 = v50; /*0x6536cd*/
      if ( v50 + v39 < dword_B048CC + dword_B048D4 ) /*0x6536de*/
        v42 = dword_B048D4 + dword_B048CC - v39 + 1; /*0x6536e8*/
      v43 = v49; /*0x6536ec*/
    }
    *v38 = v2; /*0x653718*/
    v38[1] = v39; /*0x65371a*/
    v38[2] = v43; /*0x65371d*/
    v38[3] = v42; /*0x653720*/
    MEMORY[0xB0B518] = 1; /*0x653723*/
  }
  return v2; /*0x653120*/
}


// ==== 0x00653750  nullsub_220  this=unknown  sig=csp ====
void __stdcall nullsub_220(int a1, int a2)
{
  ; /*0x653750*/
}


// ==== 0x00653760  RadarClass::PixelToCellCheck  this=RadarClass  sig=csp ====
_DWORD *__stdcall TacticalClass_PixelToCellCheck(_DWORD *a1, int *a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // edx
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v7[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x65376a*/
  v6[0] = *a2; /*0x65376d*/
  v6[1] = v2; /*0x653781*/
  v3 = (_DWORD *)((_DWORD *(__stdcall *)(_BYTE *, int *))TacticalClass::TransformPixel)(v7, v6); /*0x653785*/
  if ( *v3 == dword_A8ED54[120555] && v3[1] == dword_A8ED54[120556] && v3[2] == dword_A8ED54[120557] ) /*0x6537ad*/
  {
    *a1 = dword_A8ED54[120539]; /*0x653803*/
    return a1; /*0x6537f9*/
  }
  else
  {
    v4 = *Tactical::PixelToCell(MEMORY[0x87F7E8][7887], &a2, v6); /*0x6537cd*/
    *a1 = v4; /*0x6537d3*/
    return a1; /*0x6537cf*/
  }
}


// ==== 0x00653810  RadarClass::CheckResult  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult(int a1, IUnknown *aP1)
{
  _DWORD *v2; // ecx

  return DisplayClass::UpdateCellPassability(v2, (__int16 *)a1, aP1) != 0; /*0x653824*/
}


// ==== 0x00653830  RadarClass::CheckResult3  this=RadarClass  sig=csp ====
bool __stdcall Conditions::CheckResult3(MouseClass *aP0, IUnknown *aP1, char aP3)
{
  _DWORD *v3; // ecx

  return DisplayClass::vt_entry_94(v3, aP0, aP1, (MouseClass *)aP3) != 0; /*0x653849*/
}


// ==== 0x00653850  RadarClass::MouseInput  this=RadarClass  sig=csp ====
int __thiscall TacticalClass_MouseInput(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int result; // eax

  DisplayClass::Update(a2, a3); /*0x653860*/
  v4 = MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0;
  if ( *a3 >= v4 + MEMORY[0xB04A00] && *a3 < v4 + MEMORY[0xB04A00] + MEMORY[0xB04A08] ) /*0x653896*/
  {
    v5 = a3[1]; /*0x653898*/
    if ( v5 >= MEMORY[0xB04A04] && v5 < MEMORY[0xB04A0C] + MEMORY[0xB04A04] ) /*0x6538a9*/
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x6538b4*/
  }
  if ( *a3 >= v4 + MEMORY[0xB048C8] && *a3 < v4 + MEMORY[0xB048C8] + MEMORY[0xB048D0] ) /*0x6538d6*/
  {
    v6 = a3[1]; /*0x6538d8*/
    if ( v6 >= MEMORY[0xB048CC] && v6 < MEMORY[0xB048D4] + MEMORY[0xB048CC] ) /*0x6538e8*/
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x6538f3*/
  }
  if ( *a2 == 33010 ) /*0x653903*/
  {
    if ( !MEMORY[0xA8B238] /*0x653933*/
      || (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4)
      && MEMORY[0xA8B23C]
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C])
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]) )
    {
      MEMORY[0xA8EDA0] = 9; /*0x653946*/
    }
    else
    {
      MEMORY[0xA8EDA0] = 8; /*0x65393a*/
    }
  }
  else if ( *a2 == 33011 ) /*0x653957*/
  {
    MEMORY[0xA8EDA0] = 1; /*0x653959*/
  }
  if ( MEMORY[0xB45B68] > 0 ) /*0x65396a*/
  {
    v7 = this->RadarClass_field_0x14B0; /*0x65396c*/
    if ( v7 != 3 && v7 != 4 ) /*0x65397a*/
    {
      this->RadarClass_field_0x14B4 = v7; /*0x653982*/
      RadarClass::SetViewMode(4, 0); /*0x653988*/
      this->__pad_14B8 = 0; /*0x65398d*/
    }
  }
  if ( this->RadarClass_field_0x14B0 == 4 ) /*0x65399e*/
    return TacticalClass::ProcessChronoEffect(this); /*0x6539a2*/
  result = UI_Helper(); /*0x6539ae*/
  if ( !(_BYTE)result ) /*0x6539b5*/
    return ChronoScreenEffect::DecrementCounter(); /*0x6539b7*/
  return result; /*0x6539a7*/
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
  if ( (a2 & 0x22) == 0
    && (MEMORY[0x87F7E8][1324] != 3 || MEMORY[0x87F7E8][1323] != 1)
    && MEMORY[0x87F7E8][1324] == 1
    && MEMORY[0x87F7E8][1323] == 1 )
  {
    if ( (a2 & 0x55) != 0 ) /*0x653a13*/
    {
      v4 = *(_DWORD *)MEMORY[0x87F6C0][44]; /*0x653a1a*/
      v5 = *(_DWORD *)(MEMORY[0x87F6C0][44] + 4); /*0x653a1c*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 44))(MEMORY[0x87F7E8][8086]); /*0x653a32*/
      v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 48))(MEMORY[0x87F7E8][8086]); /*0x653a36*/
    }
    v6 = v4 - (LOBYTE(MEMORY[0x87F7E8][539877]) != 0 ? MEMORY[0x87F7E8][7664] : 0);
    if ( v6 >= MEMORY[0x87F7E8][1319] /*0x653a83*/
      && v6 < MEMORY[0x87F7E8][1319] + MEMORY[0x87F7E8][1321]
      && v5 >= MEMORY[0x87F7E8][1320]
      && v5 < MEMORY[0x87F7E8][1320] + MEMORY[0x87F7E8][1322] )
    {
      v31[1] = v5; /*0x653a89*/
      v31[0] = v6; /*0x653aa5*/
      v27 = 0; /*0x653aa9*/
      v28 = 0; /*0x653ab3*/
      ((void (__stdcall *)(_DWORD *, int *, void **))TacticalClass::ScreenToCellLookup)(v31, &v27, &v28); /*0x653ab7*/
      if ( v27 == dword_A8ED54[120539] ) /*0x653acd*/
      {
LABEL_74:
        COMObject::ActivateThunk(v30, 0, a3, 0); /*0x653ec3*/
        return 1; /*0x653edf*/
      }
      v32[0] = ((__int16)v27 << 8) + 128; /*0x653af5*/
      v32[1] = (SHIWORD(v27) << 8) + 128; /*0x653afd*/
      GroundHeight = 0; /*0x653b07*/
      GroundHeight = Cell::GetGroundHeight(v32); /*0x653b14*/
      if ( !Cell::IsPassable(v32) || (v29 = 1, !dword_A8ED54[233983]) ) /*0x653b33*/
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
            v13 = MEMORY[0x87F7E8][7664] / 60 + 2; /*0x653dbc*/
            v14 = MEMORY[0x87F7E8][61] - v13 / 2 - 1; /*0x653dcb*/
            v15 = MEMORY[0x87F7E8][7665] / 60 + MEMORY[0x87F7E8][61] + 1; /*0x653ddf*/
            v16 = 2 * MEMORY[0x87F7E8][62] - MEMORY[0x87F7E8][7665] / 60 + MEMORY[0x87F7E8][61] - 1; /*0x653de3*/
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
            if ( v19 > MEMORY[0x87F7E8][61] - v13 / 2 - 2 ) /*0x653e12*/
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
            v24 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords[1]; /*0x653e95*/
            v36 = Coords[2]; /*0x653e9c*/
            ((void (__stdcall *)(int *))Tactical::SetTacticalPosition)(&v34); /*0x653ea0*/
            MapClass::MarkForRedraw(MEMORY[0x87F7E8], 1); /*0x653eac*/
            if ( MEMORY[0x87F7E8][8087] ) /*0x653eb8*/
              *(_DWORD *)(MEMORY[0x87F7E8][8087] + 36) = 0x8000; /*0x653eba*/
          }
        }
        goto LABEL_74; /*0x653eba*/
      }
      if ( MEMORY[0x87F7E8][539960] ) /*0x653b97*/
      {
        if ( MEMORY[0x87F7E8][1134] ) /*0x653be5*/
        {
          if ( MEMORY[0x87F7E8][1134] != 1 ) /*0x653bf3*/
          {
            if ( MEMORY[0x87F7E8][1134] != 2 ) /*0x653c05*/
              goto LABEL_35; /*0x653c05*/
            goto LABEL_34; /*0x653c05*/
          }
LABEL_32:
          v7 = 37; /*0x653bf5*/
          goto LABEL_51; /*0x653bfa*/
        }
      }
      else if ( MEMORY[0x87F7E8][1134] ) /*0x653b9b*/
      {
        if ( MEMORY[0x87F7E8][1134] != 1 ) /*0x653b9f*/
        {
          if ( MEMORY[0x87F7E8][1134] != 2 ) /*0x653ba7*/
          {
            if ( MEMORY[0x87F7E8][1134] != 5 ) /*0x653baf*/
            {
              if ( MEMORY[0x87F7E8][1134] != 7 ) /*0x653bb7*/
              {
                if ( MEMORY[0x87F7E8][1134] != 8 ) /*0x653bbf*/
                {
                  if ( MEMORY[0x87F7E8][1134] != 9 ) /*0x653bc3*/
                  {
                    if ( MEMORY[0x87F7E8][1134] != 11 ) /*0x653bcb*/
                    {
                      if ( MEMORY[0x87F7E8][1134] != 6 ) /*0x653bd3*/
                      {
LABEL_61:
                        Mission::SetAndCall(MEMORY[0x87F7E8], 0, 1); /*0x653d62*/
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
                          TacticalClass::HandlePlayerAction((char *)MEMORY[0x87F7E8], (__int16 *)&v27, v29, v28, v7, 1); /*0x653cff*/
                        if ( (a2 & 4) != 0 && !BYTE1(dword_A8ED54[18]) ) /*0x653d14*/
                        {
                          v34 = ((__int16)v27 << 8) + 128; /*0x653d3b*/
                          v35 = (SHIWORD(v27) << 8) + 128; /*0x653d3f*/
                          v36 = 0; /*0x653d54*/
                          PlayerClass::ExecuteCommand( /*0x653d58*/
                            (char *)MEMORY[0x87F7E8],
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
            if ( MEMORY[0x87F7E8][1134] != 7 ) /*0x653c17*/
            {
              if ( MEMORY[0x87F7E8][1134] != 8 ) /*0x653c29*/
              {
                if ( MEMORY[0x87F7E8][1134] != 9 ) /*0x653c34*/
                {
                  if ( MEMORY[0x87F7E8][1134] != 11 ) /*0x653c43*/
                  {
                    if ( MEMORY[0x87F7E8][1134] == 5 ) /*0x653c52*/
                    {
                      v7 = 41; /*0x653c54*/
                    }
                    else if ( MEMORY[0x87F7E8][1134] == 6 ) /*0x653c61*/
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
    Mouse::SetCursor((int)MEMORY[0x87F7E8], 0, 0); /*0x653eeb*/
  }
  return 0; /*0x653ed5*/
}


// ==== 0x00653F50  RadarClass::DrawWrapper  this=RadarClass  sig=csp ====
void __thiscall CellClass_DrawWrapper(int *this, _DWORD *a2, int a3, char a4, char a5)
{
  CellClass::UpdateTerrainAndWaypoints(this, a2, a3, a4, a5); /*0x653f64*/
}


// ==== 0x00653F70  RadarClass::SetPositionThunk  this=RadarClass  sig=csp ====
int __stdcall TacticalClass::SetPositionThunk(MouseClass *aP0)
{
  return Tactical::SetTacticalPosition(*(int *)&stru_87C374.__pad_579C[22548], (IUnknown *)aP0); /*0x653f80*/
}


// ==== 0x00653FA0  ObjectClass::RenderScoreboardSidebar  this=RadarClass  sig=csp ====
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


// ==== 0x00654320  RadarClass::Destru_vt34  this=RadarClass  sig=csp ====
char __thiscall RadarClass::Destru_vt34(int this)
{
  int v2; // esi
  char result; // al
  int v4; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+10h] [ebp-18h]
  int v6; // [esp+14h] [ebp-14h]
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-Ch]
  char *v9; // [esp+20h] [ebp-8h]
  char v10; // [esp+24h] [ebp-4h]

  DisplayClass::Render(); /*0x654328*/
  v2 = MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0;
  MEMORY[0xB049BC] = -v2; /*0x654359*/
  Rect_Point::Set(MEMORY[0xB04978], v2 + MEMORY[0xB04A00], MEMORY[0xB04A04]); /*0x65435f*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB04978]); /*0x654369*/
  MEMORY[0xB04954] = -v2; /*0x654382*/
  Rect_Point::Set(MEMORY[0xB04910], v2 + dword_B048C8, dword_B048CC); /*0x654388*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB04910]); /*0x654392*/
  Rect_Point::Set(MEMORY[0xB04A10], v2 + *(_DWORD *)(this + 4592), *(_DWORD *)(this + 4596)); /*0x6543ac*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB04A10]); /*0x6543b6*/
  v10 = 0; /*0x6543c0*/
  v4 = 242; /*0x6543c7*/
  v9 = MEMORY[0x8393C8]; /*0x6543cf*/
  if ( MEMORY[0xA8B238][0] ) /*0x6543d7*/
    v9 = MEMORY[0x8393B4]; /*0x6543d9*/
  v5 = MEMORY[0xB04984]; /*0x6543f2*/
  v8 = MEMORY[0xB04990]; /*0x654401*/
  v6 = MEMORY[0xB04988]; /*0x65440b*/
  v7 = MEMORY[0xB0498C]; /*0x65440f*/
  HashTable::Remove((int *)MEMORY[0x887368], 242); /*0x654413*/
  CommandClass::AddAction(MEMORY[0x887368], (int)&v4); /*0x654423*/
  v5 = MEMORY[0xB0491C]; /*0x654439*/
  v6 = MEMORY[0xB04920]; /*0x654442*/
  v4 = 243; /*0x654451*/
  v9 = MEMORY[0x8393A0]; /*0x654459*/
  v7 = MEMORY[0xB04924]; /*0x654461*/
  v8 = MEMORY[0xB04928]; /*0x654465*/
  HashTable::Remove((int *)MEMORY[0x887368], 243); /*0x654469*/
  result = CommandClass::AddAction(MEMORY[0x887368], (int)&v4); /*0x654479*/
  *(_BYTE *)(this + 5338) = 1; /*0x65447e*/
  return result; /*0x654485*/
}


// ==== 0x00654490  RadarClass::ProcessCellVisibility  this=RadarClass  sig=csp ====
int __thiscall Shroud::ProcessCellVisibility(_DWORD *this, MouseClass *aP1)
{
  int v3; // edx
  int v4; // ecx
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // ecx
  int result; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // eax

  ShroudClass::UpdateVisibility(this, aP1); /*0x65449d*/
  v3 = this->VisibleRect; /*0x6544a2*/
  v4 = this->q100; /*0x6544a8*/
  this->q14A8 = 0; /*0x6544b3*/
  this->q14A0 = 10000; /*0x6544bd*/
  this->RadarClass_field_0x149C = 10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + this->q0F4 - v3; /*0x6544da*/
  v7 = this->q104; /*0x6544dc*/
  this->RadarClass_field_0x14A4 = 0; /*0x6544e7*/
  this->RadarClass_field_0x1498 = -1; /*0x6544f4*/
  this->RadarClass_field_0x1494 = (__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6); /*0x654533*/
  this->RadarClass_field_0x1490 = v6 - v5; /*0x65453e*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x654544*/
  result = LayerClass::CellIteratorNext(this); /*0x65454b*/
  v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      aP1 = *(MouseClass **)(v9 + 36); /*0x654567*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext(this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( this->RadarClass_field_0x1498 == -1 ) /*0x65457f*/
      this->RadarClass_field_0x1498 = *(__int16 *)(v9 + 36) + *(__int16 *)(v9 + 38); /*0x65458b*/
    v10 = this->RadarClass_field_0x1490; /*0x654594*/
    v11 = this->RadarClass_field_0x1498; /*0x65459a*/
    aP1 = *(MouseClass **)(v9 + 36); /*0x6545a0*/
    v12 = (__int16)aP1 + v10 - SHIWORD(aP1); /*0x6545b0*/
    v13 = (__int16)aP1 + SHIWORD(aP1) - v11; /*0x6545b2*/
    v14 = 2; /*0x6545b7*/
    if ( v12 == -1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != 2 * this->q104 - 1 ) /*0x6545ce*/
    {
LABEL_9:
      v15 = this->RadarClass_field_0x149C; /*0x6545d5*/
      if ( v12 >= v15 ) /*0x6545dd*/
      {
        if ( v14 + v12 > v15 + this->RadarClass_field_0x14A4 ) /*0x6545f4*/
          this->RadarClass_field_0x14A4 = v12 + v14 - v15; /*0x6545fa*/
      }
      else
      {
        this->RadarClass_field_0x149C = v12; /*0x6545df*/
      }
      v16 = this->q14A0; /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > this->q14A8 + v16 ) /*0x654621*/
          this->q14A8 = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        this->q14A0 = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}


// ==== 0x00654650  RadarClass::RecreateSurface  this=RadarClass  sig=csp ====
char __usercall RadarClass::RecreateSurface@<al>(int a1@<ecx>, int a2@<ebx>)
{
  CCINIClass *v3; // eax
  RadarClass *v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  CCINIClass *v9; // edx
  int v10; // ebx
  int v11; // edi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  DSurface *v13; // ebx
  int v14; // edi
  IUnknown *v15; // eax
  char *v16; // eax
  DSurface *v18; // [esp-Ch] [ebp-2Ch]
  _DWORD v19[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = *(CCINIClass **)(a1 + 5284); /*0x65465a*/
  v4 = (RadarClass *)(a1 + 5276); /*0x654660*/
  if ( (int)v3 > 0 && *(int *)(a1 + 5288) > 0 ) /*0x654671*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(a1 + 4640); /*0x654677*/
    *(_DWORD *)(a1 + 5280) = 0; /*0x65467d*/
    v4->field_0 = 0; /*0x654685*/
    if ( v5 ) /*0x654687*/
    {
      (**v5)(v5, 1); /*0x65468d*/
      *(_DWORD *)(a1 + 4640) = 0; /*0x65468f*/
    }
    if ( *(_DWORD *)(a1 + 4668) ) /*0x654695*/
    {
      __3_YAXPAX_Z(*(void **)(a1 + 4668)); /*0x6546a0*/
      *(_DWORD *)(a1 + 4668) = 0; /*0x6546a8*/
    }
    if ( *(_DWORD *)(a1 + 4724) ) /*0x6546ae*/
    {
      __3_YAXPAX_Z(*(void **)(a1 + 4724)); /*0x6546b9*/
      *(_DWORD *)(a1 + 4724) = 0; /*0x6546c1*/
    }
    GenerateImageThumbnail((float *)a1, (RadarClass *)v19, v4, v4, (RadarClass *)1); /*0x6546d3*/
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4640) + 124))(*(_DWORD *)(a1 + 4640), a2); /*0x6546e0*/
    v7 = *(_DWORD *)(a1 + 4640); /*0x6546e3*/
    *(_DWORD *)(a1 + 5284) = v6; /*0x6546e9*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 128))(v7); /*0x6546f1*/
    v9 = *(CCINIClass **)(a1 + 5284); /*0x6546f7*/
    v10 = *(_DWORD *)(a1 + 4592); /*0x6546fd*/
    *(_DWORD *)(a1 + 5288) = v8; /*0x65470b*/
    v4->field_0 = v10; /*0x654711*/
    if ( (int)v9 < 140 ) /*0x654713*/
      v4->field_0 = v10 + (140 - (int)v9) / 2; /*0x654723*/
    v11 = *(_DWORD *)(a1 + 4596); /*0x654725*/
    *(_DWORD *)(a1 + 5280) = v11; /*0x65472e*/
    if ( v8 < 108 ) /*0x654734*/
      *(_DWORD *)(a1 + 5280) = v11 + (108 - v8) / 2; /*0x654744*/
    v12 = *(void (__thiscall ****)(_DWORD, int))(a1 + 4636); /*0x65474a*/
    if ( v12 ) /*0x654752*/
    {
      (**v12)(v12, 1); /*0x654758*/
      *(_DWORD *)(a1 + 4636) = 0; /*0x65475a*/
    }
    v13 = (DSurface *)__2_YAPAXI_Z(0x24u); /*0x654767*/
    if ( v13 ) /*0x65476e*/
    {
      v19[0] = *(_DWORD *)(a1 + 4640); /*0x65477d*/
      v14 = v19[0]; /*0x654777*/
      v18 = (DSurface *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v19[0] + 128))(v19[0]); /*0x654789*/
      v15 = (IUnknown *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 124))(v14); /*0x65478e*/
      v16 = DSurface::Construct((char *)v13, v15, v18, (ObjectClass *)1, 0); /*0x654794*/
    }
    else
    {
      v16 = 0; /*0x65479b*/
    }
    *(_DWORD *)(a1 + 4636) = v16; /*0x65479d*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v16 + 24))(v16, 0); /*0x6547a8*/
    LOBYTE(v3) = RadarClass::UpdateFoundationShapesCustom((float *)a1); /*0x6547ad*/
  }
  return (char)v3; /*0x6547b3*/
}


// ==== 0x006547C0  ObjectClass::GenerateImageThumbnail  this=RadarClass  sig=csp ====
int *__thiscall GenerateImageThumbnail(float *this, RadarClass *aP1, RadarClass *aP2, RadarClass *aP3, RadarClass *aP4)
{
  RadarClass *v6; // ebx
  RadarClass *v7; // esi
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
  _DWORD *v19; // esi
  double v20; // st7
  int v21; // eax
  int v22; // ebp
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // esi
  int v27; // ebp
  int v28; // edx
  BuildingTypeClass *v29; // eax
  int v30; // esi
  BuildingTypeClass *v31; // ebp
  double v32; // st7
  int v33; // eax
  double v34; // st6
  double v35; // st5
  double v36; // st4
  RadarClass *v37; // eax
  RadarClass *v38; // esi
  RadarClass *v39; // edi
  RadarClass *v40; // edx
  BuildingTypeClass *v41; // esi
  BuildingTypeClass *v42; // eax
  int v43; // ebp
  double v44; // st3
  RadarClass *v45; // ecx
  char *v46; // ebp
  int v47; // eax
  int v48; // esi
  int v49; // edi
  double v50; // st2
  double v51; // st2
  unsigned __int8 *v52; // eax
  int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // esi
  int v57; // eax
  bool v58; // zf
  size_t v59; // esi
  void *v60; // edi
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+14h] [ebp-68h]
  BuildingTypeClass *v64; // [esp+18h] [ebp-64h]
  float v65; // [esp+1Ch] [ebp-60h]
  float v66; // [esp+20h] [ebp-5Ch]
  float v67; // [esp+24h] [ebp-58h]
  int v68; // [esp+28h] [ebp-54h]
  BuildingTypeClass *v69; // [esp+2Ch] [ebp-50h]
  int v70; // [esp+30h] [ebp-4Ch]
  char *v71; // [esp+34h] [ebp-48h]
  float v72; // [esp+38h] [ebp-44h]
  int v73; // [esp+3Ch] [ebp-40h]
  int v74; // [esp+40h] [ebp-3Ch]
  int v75; // [esp+44h] [ebp-38h]
  int v76; // [esp+48h] [ebp-34h]
  int v77; // [esp+4Ch] [ebp-30h]
  RadarClass *v78; // [esp+50h] [ebp-2Ch]
  int v79; // [esp+54h] [ebp-28h]
  int v80; // [esp+58h] [ebp-24h]
  float v81; // [esp+5Ch] [ebp-20h]
  float v82; // [esp+60h] [ebp-1Ch]
  int v83; // [esp+60h] [ebp-1Ch]
  int v84; // [esp+60h] [ebp-1Ch]
  int v85; // [esp+64h] [ebp-18h]
  RadarClass *v86; // [esp+68h] [ebp-14h]
  int i; // [esp+6Ch] [ebp-10h]
  float v88; // [esp+70h] [ebp-Ch]
  int aP2a; // [esp+84h] [ebp+8h]
  float aP3a; // [esp+88h] [ebp+Ch]
  int aP4a; // [esp+8Ch] [ebp+10h]
  RadarClass *aP4b; // [esp+8Ch] [ebp+10h]

  v6 = (RadarClass *)this; /*0x6547cd*/
  v7 = aP3; /*0x6547d0*/
  if ( (_BYTE)aP4 && ((int)aP3->field_8 <= 0 || *(int *)aP3->__pad_C <= 0) ) /*0x6547ec*/
  {
    aP3->field_0 = aP2->field_0; /*0x6547f4*/
    aP3->field_4 = aP2->field_4; /*0x6547f9*/
    aP3->field_8 = aP2->field_8; /*0x6547ff*/
    *(_DWORD *)aP3->__pad_C = *(_DWORD *)aP2->__pad_C; /*0x654805*/
  }
  if ( !this->RadarClass_field_0x123C ) /*0x654808*/
  {
    v8 = *(_DWORD *)aP2->__pad_C * (int)aP2->field_8; /*0x654815*/
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
    v6->field_123C = v13; /*0x65484b*/
    memset(v13, 0, 3 * *(_DWORD *)aP2->__pad_C * (int)aP2->field_8); /*0x654862*/
    v6->field_1240 = (int)aP2->field_8; /*0x65486e*/
    v6->field_1244 = *(_DWORD *)aP2->__pad_C; /*0x654877*/
  }
  if ( (_BYTE)aP4 ) /*0x654886*/
    RadarClass::UpdateBlips(v6, (int)aP2, &aP3->field_0); /*0x65488c*/
  v14 = v6->field_1220; /*0x654891*/
  v68 = (int)aP2->field_8; /*0x6548a0*/
  aP4a = v6->field_1488; /*0x6548a6*/
  if ( v14 ) /*0x6548ad*/
  {
    aP2a = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 124))(v14); /*0x6549a8*/
    v62 = (*(int (__thiscall **)(int))(*(_DWORD *)v6->field_1220 + 128))(v6->field_1220); /*0x6549b7*/
  }
  else
  {
    v15 = (double)v68; /*0x6548b3*/
    *(float *)&aP4a = 140.0 / v15; /*0x6548bf*/
    v16 = (double)*(int *)aP2->__pad_C; /*0x6548c6*/
    v17 = v16 * *(float *)&aP4a; /*0x6548cb*/
    if ( v17 >= 108.0 ) /*0x6548e1*/
    {
      *(float *)&aP4a = 108.0 / v16; /*0x65490a*/
      aP2a = Math::RoundToInt(v15 * *(float *)&aP4a); /*0x65491f*/
      v62 = 108; /*0x654926*/
      v18 = aP2a; /*0x65492e*/
    }
    else
    {
      v18 = 140; /*0x6548eb*/
      aP2a = 140; /*0x6548f0*/
      v82 = v17; /*0x6548d2*/
      v62 = Math::RoundToInt(v82); /*0x6548fc*/
    }
    v6->field_1488 = aP4a; /*0x654939*/
    v19 = (_DWORD *)__2_YAPAXI_Z(0x20u); /*0x654944*/
    if ( v19 ) /*0x65494b*/
    {
      v19[2] = v62; /*0x654954*/
      v19[1] = v18; /*0x65495f*/
      v19[3] = 0; /*0x654962*/
      *v19 = &XSurface_Vtable; /*0x654969*/
      v19[4] = 2; /*0x65496f*/
      Buffer::Init(v19 + 5, 0, (AbstractClass *)(2 * v18 * v62)); /*0x654976*/
      *v19 = &BSurface_Vtable; /*0x65497b*/
    }
    else
    {
      v19 = 0; /*0x654983*/
    }
    v6->field_1220 = (int)v19; /*0x654985*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 24))(v19, 0); /*0x654991*/
    v7 = aP3; /*0x654994*/
  }
  v67 = (double)(int)aP2->field_8 / (double)aP2a; /*0x6549d3*/
  v20 = (double)*(int *)aP2->__pad_C / (double)v62; /*0x6549da*/
  v66 = v20; /*0x6549de*/
  v88 = 1.0 / (v20 * v67); /*0x6549ec*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6->field_1220 + 92))(v6->field_1220, 0, 0); /*0x6549f0*/
  v22 = v7->field_0; /*0x6549f3*/
  v83 = v21; /*0x6549f5*/
  v23 = Math::RoundToInt((double)v7->field_0 * *(float *)&aP4a); /*0x654a13*/
  v75 = v23; /*0x654a1a*/
  v76 = Math::RoundToInt((double)((unsigned int)v7->field_8 + v22) * *(float *)&aP4a) + 1; /*0x654a42*/
  if ( v76 >= aP2a ) /*0x654a46*/
    v76 = aP2a; /*0x654a48*/
  v24 = (int)v7->field_4; /*0x654a4c*/
  v77 = Math::RoundToInt((double)v24 * *(float *)&aP4a); /*0x654a6c*/
  v25 = Math::RoundToInt((double)(v24 + *(_DWORD *)v7->__pad_C) * *(float *)&aP4a); /*0x654a87*/
  v26 = v62; /*0x654a8c*/
  v27 = v25 + 1; /*0x654a90*/
  if ( v25 + 1 >= v62 ) /*0x654a95*/
  {
    v74 = v62; /*0x654a9d*/
    v27 = v62; /*0x654aa1*/
  }
  else
  {
    v74 = v25 + 1; /*0x654a97*/
  }
  v81 = (double)v23 / *(float *)&aP4a; /*0x654ab4*/
  aP3a = v81; /*0x654ac0*/
  v65 = (double)v77 / *(float *)&aP4a; /*0x654ace*/
  if ( v77 < v27 ) /*0x654ad2*/
  {
    v28 = v83; /*0x654ada*/
    v84 = v27 - v77; /*0x654aea*/
    v73 = v28 + 2 * (v23 + aP2a * v77); /*0x654af1*/
    do /*0x654dff*/
    {
      v29 = (BuildingTypeClass *)Math::RoundToInt(v65); /*0x654af9*/
      v30 = v6->field_1244; /*0x654afe*/
      if ( v30 >= (int)v29 ) /*0x654b06*/
      {
        v64 = v29; /*0x654b10*/
        v31 = v29; /*0x654b14*/
      }
      else
      {
        v31 = (BuildingTypeClass *)v6->field_1244; /*0x654b08*/
        v64 = v31; /*0x654b0a*/
      }
      v32 = v65 + v66; /*0x654b1a*/
      v33 = Math::RoundToInt(v32) + 1; /*0x654b25*/
      v63 = v30; /*0x654b26*/
      if ( v30 >= v33 ) /*0x654b2c*/
        v63 = v33; /*0x654b2e*/
      if ( v23 < v76 ) /*0x654b38*/
      {
        v79 = v73; /*0x654b44*/
        v80 = v76 - v23; /*0x654b48*/
        do /*0x654dc9*/
        {
          v34 = 0.0; /*0x654b4c*/
          v35 = 0.0; /*0x654b52*/
          v36 = 0.0; /*0x654b58*/
          v37 = (RadarClass *)Math::RoundToInt(v32); /*0x654b65*/
          v38 = (RadarClass *)v6->field_1240; /*0x654b6a*/
          v86 = v38; /*0x654b72*/
          if ( (int)v38 >= (int)v37 ) /*0x654b76*/
          {
            aP4b = v37; /*0x654b83*/
            v39 = v37; /*0x654b8a*/
          }
          else
          {
            v39 = (RadarClass *)v6->field_1240; /*0x654b78*/
            aP4b = v39; /*0x654b7a*/
          }
          v40 = (RadarClass *)(Math::RoundToInt(v32) + 1); /*0x654ba0*/
          if ( (int)v38 < (int)v40 ) /*0x654ba5*/
            v40 = v38; /*0x654ba7*/
          v41 = v31; /*0x654bad*/
          v69 = v31; /*0x654bb1*/
          if ( (int)v31 < v63 ) /*0x654bb5*/
          {
            v85 = v63 - (_DWORD)v31; /*0x654bbd*/
            v42 = v31; /*0x654bc1*/
            v43 = v68; /*0x654bc3*/
            v71 = (char *)v39 + v68 * (_DWORD)v42; /*0x654bd4*/
            v70 = 3 * (_DWORD)v71; /*0x654bdf*/
            do /*0x654d1f*/
            {
              if ( v85 > 1 ) /*0x654be8*/
              {
                if ( v41 == v64 ) /*0x654bf4*/
                {
                  v44 = (double)(int)&v41->vtable0[1] - v65; /*0x654c01*/
                }
                else if ( v41 == (BuildingTypeClass *)(v63 - 1) ) /*0x654c0e*/
                {
                  v44 = v32 - (double)(int)v69; /*0x654c14*/
                }
                else
                {
                  v44 = 1.0; /*0x654c18*/
                }
              }
              else
              {
                v44 = v66; /*0x654bea*/
              }
              v45 = v39; /*0x654c1e*/
              v78 = v39; /*0x654c22*/
              if ( (int)v39 < (int)v40 ) /*0x654c26*/
              {
                v46 = v71; /*0x654c32*/
                v47 = (char *)v40 - (char *)v39; /*0x654c38*/
                v48 = (_DWORD)v86 * v6->field_1244; /*0x654c3a*/
                v49 = v70; /*0x654c3f*/
                for ( i = v47; ; v47 = i ) /*0x654c43*/
                {
                  if ( v47 > 1 ) /*0x654c50*/
                  {
                    if ( v45 == aP4b ) /*0x654c5f*/
                    {
                      v50 = (double)((int)&v45->field_0 + 1) - aP3a; /*0x654c6c*/
                    }
                    else if ( v45 == (RadarClass *)((char *)&v40[-1].field_34B8 + 3) ) /*0x654c7a*/
                    {
                      v72 = aP3a + v67; /*0x654b97*/
                      v50 = v72 - (double)(int)v78; /*0x654c80*/
                    }
                    else
                    {
                      v50 = 1.0; /*0x654c86*/
                    }
                  }
                  else
                  {
                    v50 = v67; /*0x654c52*/
                  }
                  v51 = v50 * v44 * v88; /*0x654c90*/
                  if ( (int)v46 < v48 ) /*0x654c94*/
                  {
                    v52 = (unsigned __int8 *)v6->field_123C + v49; /*0x654c98*/
                    v34 = v34 + (double)*v52 * v51; /*0x654cba*/
                    v6 = (RadarClass *)this; /*0x654cc4*/
                    v35 = v35 + (double)v52[1] * v51; /*0x654cca*/
                    v36 = v36 + (double)v52[2] * v51; /*0x654cd2*/
                  }
                  v45 = (RadarClass *)((char *)v45 + 1); /*0x654cda*/
                  v49 += 3; /*0x654cdb*/
                  ++v46; /*0x654cde*/
                  v78 = v45; /*0x654ce1*/
                  if ( (int)v45 >= (int)v40 ) /*0x654ce5*/
                    break; /*0x654ce5*/
                }
                v41 = v69; /*0x654ceb*/
                v39 = aP4b; /*0x654cef*/
                v43 = v68; /*0x654cf6*/
              }
              v70 += 3 * v68; /*0x654d0a*/
              v41 = (BuildingTypeClass *)((char *)v41 + 1); /*0x654d12*/
              v69 = v41; /*0x654d17*/
              v71 += v43; /*0x654d1b*/
            }
            while ( (int)v41 < v63 ); /*0x654d1f*/
            v31 = v64; /*0x654d25*/
          }
          v53 = Math::RoundToInt(v32); /*0x654d2f*/
          v54 = 255; /*0x654d39*/
          if ( v53 <= 255 ) /*0x654d3e*/
            v54 = v53; /*0x654d40*/
          v55 = Math::RoundToInt(v32); /*0x654d48*/
          v56 = 255; /*0x654d52*/
          if ( v55 <= 255 ) /*0x654d57*/
            v56 = v55; /*0x654d59*/
          v57 = Math::RoundToInt(v32); /*0x654d61*/
          if ( v57 > 255 ) /*0x654d6b*/
            v57 = 255; /*0x654d6d*/
          aP3a = aP3a + v67; /*0x654d84*/
          v79 += 2; /*0x654db6*/
          *(_WORD *)(v79 - 2) = (v54 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x654dbc*/
                              | (v56 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                              | (v57 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
          --v80; /*0x654dc5*/
        }
        while ( v80 ); /*0x654dc9*/
        v23 = v75; /*0x654dcf*/
      }
      aP3a = v81; /*0x654dde*/
      v65 = v32; /*0x654de5*/
      v58 = v84 == 1; /*0x654df6*/
      v73 += 2 * aP2a; /*0x654df7*/
      --v84; /*0x654dfb*/
    }
    while ( !v58 ); /*0x654dff*/
    v27 = v74; /*0x654e05*/
    v26 = v62; /*0x654e09*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v6->field_1220 + 96))(v6->field_1220); /*0x654e15*/
  v59 = aP2a * v26 / 8 + 1; /*0x654e33*/
  if ( !v6->field_1274 ) /*0x654e2a*/
  {
    v60 = (void *)__2_YAPAXI_Z(v59); /*0x654e40*/
    v6->field_1274 = (int)v60; /*0x654e49*/
    memset(v60, 0, v59); /*0x654e52*/
    v23 = v75; /*0x654e5b*/
  }
  aP1->field_0 = v23; /*0x654e74*/
  aP1->field_4 = (void *)v77; /*0x654e77*/
  aP1->field_8 = (void *)(v76 - v23); /*0x654e7a*/
  *(_DWORD *)aP1->__pad_C = v27 - v77; /*0x654e7f*/
  return &aP1->field_0; /*0x654e76*/
}


// ==== 0x00654EA0  RadarClass::UpdateBlips  this=RadarClass  sig=csp ====
int __thiscall sub_654EA0(_DWORD *this, int a2, int *a3)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  char v18; // cl
  _DWORD *v19; // eax
  int v20; // edx
  __int16 v21; // [esp+Ch] [ebp-30h] BYREF
  char v22; // [esp+Eh] [ebp-2Eh]
  __int16 v23; // [esp+10h] [ebp-2Ch] BYREF
  char v24; // [esp+12h] [ebp-2Ah]
  _DWORD *v25; // [esp+14h] [ebp-28h]
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
  LayerClass::CellIteratorReset(this); /*0x654eca*/
  v4 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x654edf*/
  result = MEMORY[0x87F8E4]; /*0x654ee1*/
  v6 = 2 * MEMORY[0x87F8E4] - MEMORY[0x87F8DC] + 1; /*0x654eeb*/
  v26 = v6; /*0x654eee*/
  if ( v4 ) /*0x654ef2*/
  {
    while ( 1 ) /*0x654f07*/
    {
      v7 = *(__int16 *)(v4 + 36); /*0x654f07*/
      v8 = *(__int16 *)(v4 + 38); /*0x654f0b*/
      v9 = v3[1318]; /*0x654f0f*/
      if ( v8 + v7 >= v9 ) /*0x654f1a*/
      {
        v10 = v7 - v8 - v6; /*0x654f28*/
        v27 = v10; /*0x654f37*/
        v28 = v7 + v8 - v9; /*0x654f3b*/
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
            v16 = 3 * v15 + v25[1167]; /*0x654fb4*/
            *(_WORD *)v16 = v23; /*0x654fbb*/
            *(_BYTE *)(v16 + 2) = v24; /*0x654fc2*/
          }
          else
          {
            if ( v10 == a3[2] + *a3 - 1 ) /*0x654fd0*/
            {
              v17 = 3 * v15 + v25[1167]; /*0x654fdf*/
              *(_WORD *)v17 = v21; /*0x654fe6*/
              v18 = v22; /*0x654fe9*/
            }
            else
            {
              v19 = v25; /*0x654fef*/
              v20 = v25[1167] + 3 * v15; /*0x654ffb*/
              *(_WORD *)v20 = v21; /*0x655001*/
              *(_BYTE *)(v20 + 2) = v22; /*0x655008*/
              v17 = v19[1167] + 3 * v15 + 3; /*0x65501a*/
              *(_WORD *)v17 = v23; /*0x65501c*/
              v18 = v24; /*0x65501f*/
            }
            *(_BYTE *)(v17 + 2) = v18; /*0x655023*/
          }
        }
      }
      result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x65502b*/
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
  if ( v5 == 2 * this->q104 - 1 ) /*0x65508e*/
    goto LABEL_4; /*0x65508e*/
LABEL_5:
  *a2 = v5; /*0x655095*/
  a2[1] = v6; /*0x6550a2*/
  a2[2] = v7; /*0x6550a6*/
  a2[3] = 1; /*0x6550aa*/
  return a2; /*0x6550a5*/
}


// ==== 0x006550C0  ObjectClass::Team_Load_6550C0  this=int  sig=csp ====
_DWORD *__thiscall sub_6550C0(int this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebp
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v9; // [esp+1Ch] [ebp+8h]

  v3 = *a3; /*0x6550c8*/
  v5 = a3[1]; /*0x6550ce*/
  v9 = *(_DWORD *)(this + 5276); /*0x6550e0*/
  v6 = Math::RoundToInt((double)(v3 + *(_DWORD *)(this + 5264) - v5) * *(float *)(this + 5256) + (double)v9); /*0x6550fd*/
  v7 = Math::RoundToInt((double)(v3 + v5 - *(_DWORD *)(this + 5272)) * *(float *)(this + 5256) + (double)*(int *)(this + 5280)); /*0x65511d*/
  if ( v6 == v9 - 1 ) /*0x655129*/
    ++v6; /*0x65512b*/
  *a2 = v6; /*0x655139*/
  a2[1] = v7; /*0x65513b*/
  a2[2] = 1; /*0x655140*/
  a2[3] = 1; /*0x655143*/
  return a2; /*0x655146*/
}


// ==== 0x006551C0  BuildingClass::AddUpgrade  this=VOID_PTR  sig=csp ====
char __thiscall BuildingClass_AddUpgrade(int this, int a2)
{
  int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  int v6; // edx

  v3 = *(_DWORD *)(this + 4660) - 1; /*0x6551cf*/
  if ( v3 < 0 ) /*0x6551d0*/
  {
LABEL_6:
    v5 = *(_DWORD *)(this + 4652); /*0x6551f5*/
    if ( *(_DWORD *)(this + 4660) < v5 /*0x65522b*/
      || ((LOBYTE(v3) = *(_BYTE *)(this + 4657), (_BYTE)v3) || !v5)
      && (v3 = *(_DWORD *)(this + 4664), v3 > 0)
      && (LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4644) + 8))(this + 4644, v5 + v3, 0),
          (_BYTE)v3) )
    {
      v3 = *(_DWORD *)(this + 4660); /*0x65522d*/
      v6 = *(_DWORD *)(this + 4648); /*0x655230*/
      *(_DWORD *)(this + 4660) = v3 + 1; /*0x655236*/
      *(_DWORD *)(v6 + 4 * v3) = *(_DWORD *)a2; /*0x65523b*/
    }
    *(_BYTE *)(this + 5337) = 1; /*0x65523e*/
  }
  else
  {
    v4 = (_WORD *)(*(_DWORD *)(this + 4648) + 4 * v3); /*0x6551db*/
    while ( *v4 != *(_WORD *)a2 || v4[1] != *(_WORD *)(a2 + 2) ) /*0x6551eb*/
    {
      --v3; /*0x6551ed*/
      v4 -= 2; /*0x6551ee*/
      if ( v3 < 0 ) /*0x6551f3*/
        goto LABEL_6; /*0x6551f3*/
    }
  }
  return v3; /*0x655245*/
}


// ==== 0x00655250  Surface::RenderRadar  this=RadarClass  sig=csp ====
int __thiscall Surface::RenderRadar(_DWORD *this)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  RadarClass *v7; // ecx
  int v8; // edx
  int *v9; // eax
  int v10; // ecx
  void *v11; // eax
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  char v15; // dl
  int v16; // ecx
  RadarClass *v17; // ecx
  int v18; // edx
  int *ImageThumbnail; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // esi
  RadarClass *v24; // edx
  char *v25; // eax
  int v26; // ecx
  int result; // eax
  RadarClass *v28; // ecx
  int *v29; // edi
  int v30; // edx
  __int16 v31; // [esp+Ch] [ebp-90h] BYREF
  char v32; // [esp+Eh] [ebp-8Eh]
  __int16 v33; // [esp+10h] [ebp-8Ch] BYREF
  char v34; // [esp+12h] [ebp-8Ah]
  int v35; // [esp+14h] [ebp-88h] BYREF
  int v36; // [esp+18h] [ebp-84h]
  RadarClass *v37; // [esp+1Ch] [ebp-80h]
  int v38; // [esp+24h] [ebp-78h]
  int v39; // [esp+28h] [ebp-74h] BYREF
  int v40; // [esp+2Ch] [ebp-70h]
  int v41; // [esp+30h] [ebp-6Ch]
  int v42; // [esp+34h] [ebp-68h]
  int v43; // [esp+38h] [ebp-64h]
  IUnknown *v44; // [esp+40h] [ebp-5Ch]
  int v45; // [esp+44h] [ebp-58h]
  int v46; // [esp+48h] [ebp-54h]
  int v47[4]; // [esp+4Ch] [ebp-50h] BYREF
  _DWORD v48[7]; // [esp+5Ch] [ebp-40h] BYREF
  char *v49; // [esp+78h] [ebp-24h]
  int v50[4]; // [esp+7Ch] [ebp-20h] BYREF
  int v51[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = 0; /*0x65525b*/
  v3 = this->q1234; /*0x65525d*/
  v36 = 0; /*0x655263*/
  v4 = v3 - 1; /*0x655267*/
  v37 = 0; /*0x655268*/
  v38 = 0; /*0x65526c*/
  v43 = v4; /*0x655270*/
  if ( v4 >= 0 ) /*0x655274*/
  {
    while ( 1 ) /*0x65528b*/
    {
      v35 = *(_DWORD *)(this->RadarClass_field_0x1228 + 4 * v4); /*0x65528b*/
      if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&v35, (TechnoClass *)1) ) /*0x655298*/
        goto LABEL_32; /*0x655298*/
      v5 = (__int16)v35 + this->RadarClass_field_0x1490 - SHIWORD(v35); /*0x6552b8*/
      v6 = 2; /*0x6552bf*/
      if ( v5 == -1 ) /*0x6552c4*/
        break; /*0x6552c4*/
      if ( v5 == 2 * this->q104 - 1 ) /*0x6552d6*/
        goto LABEL_6; /*0x6552d6*/
LABEL_7:
      v40 = (__int16)v35 + SHIWORD(v35) - this->RadarClass_field_0x1498; /*0x6552dd*/
      v41 = v6; /*0x6552e8*/
      v7 = (RadarClass *)this->RadarClass_field_0x1240; /*0x6552ec*/
      v42 = 1; /*0x6552f2*/
      v8 = this->RadarClass_field_0x1244; /*0x6552f6*/
      v47[0] = 0; /*0x6552fd*/
      v47[1] = 0; /*0x655301*/
      v47[2] = (int)v7; /*0x65530a*/
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
        v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v35); /*0x65537c*/
        v12 = v39 + v40 * this->RadarClass_field_0x1240; /*0x655390*/
        GetCellRadarColors((int)v11, (int)&v33, (int)&v31); /*0x65539e*/
        if ( v5 ) /*0x6553ab*/
        {
          if ( v41 != 1 ) /*0x6553d2*/
            goto LABEL_14; /*0x6553d2*/
          v14 = 3 * v12 + this->RadarClass_field_0x123C; /*0x6553de*/
          *(_WORD *)v14 = v33; /*0x6553e5*/
          v15 = v34; /*0x6553e8*/
        }
        else
        {
          if ( v41 == 1 ) /*0x6553b0*/
          {
            v13 = this->RadarClass_field_0x123C + 3 * v12 + 3; /*0x6553bc*/
            *(_WORD *)v13 = v31; /*0x6553c3*/
            *(_BYTE *)(v13 + 2) = v32; /*0x6553ca*/
            goto LABEL_16; /*0x6553cd*/
          }
LABEL_14:
          v16 = this->RadarClass_field_0x123C + 3 * v12; /*0x6553ee*/
          *(_WORD *)v16 = v33; /*0x6553ff*/
          *(_BYTE *)(v16 + 2) = v34; /*0x655406*/
          v14 = this->RadarClass_field_0x123C + 3 * v12 + 3; /*0x655413*/
          *(_WORD *)v14 = v31; /*0x65541a*/
          v15 = v32; /*0x65541d*/
        }
        *(_BYTE *)(v14 + 2) = v15; /*0x655421*/
LABEL_16:
        v17 = (RadarClass *)this->RadarClass_field_0x1240; /*0x655424*/
        v18 = this->RadarClass_field_0x1244; /*0x65542a*/
        v48[0] = 0; /*0x655430*/
        v48[1] = 0; /*0x655434*/
        v48[2] = v17; /*0x655439*/
        v48[3] = v18; /*0x655441*/
        ImageThumbnail = GenerateImageThumbnail( /*0x655455*/
                           (float *)this,
                           (RadarClass *)v51,
                           (RadarClass *)v48,
                           (RadarClass *)&v39,
                           0);
        v20 = *ImageThumbnail; /*0x65545e*/
        v44 = (IUnknown *)ImageThumbnail[1]; /*0x655463*/
        v21 = ImageThumbnail[2]; /*0x655467*/
        v45 = v21; /*0x65546a*/
        v22 = ImageThumbnail[3]; /*0x65546e*/
        v46 = v22; /*0x655471*/
        if ( v2 <= 0 || v38 <= 0 ) /*0x655481*/
        {
          v26 = *ImageThumbnail; /*0x655501*/
          v24 = (RadarClass *)ImageThumbnail[1]; /*0x655503*/
          v2 = ImageThumbnail[2]; /*0x655506*/
          v25 = (char *)ImageThumbnail[3]; /*0x655509*/
        }
        else if ( v21 <= 0 || v22 <= 0 ) /*0x655489*/
        {
          v26 = v36; /*0x6554f5*/
          v24 = v37; /*0x6554f9*/
          v25 = (char *)v38; /*0x6554fd*/
        }
        else
        {
          v23 = v36; /*0x65548b*/
          v24 = v37; /*0x65548f*/
          v49 = (char *)v38; /*0x655495*/
          if ( v36 > v20 ) /*0x655499*/
          {
            v2 = v36 + v2 - v20; /*0x65549d*/
            v23 = v20; /*0x65549f*/
          }
          if ( (int)v37 > (int)v44 ) /*0x6554a7*/
          {
            v24 = (RadarClass *)v44; /*0x6554b1*/
            v49 += (char *)v37 - (char *)v44; /*0x6554b3*/
          }
          if ( v2 + v23 < v20 + v45 ) /*0x6554c2*/
            v2 = v45 - v23 + v20 + 1; /*0x6554ca*/
          v25 = v49; /*0x6554d8*/
          if ( (int)v24 + (int)v49 < (int)v44 + v46 ) /*0x6554e1*/
            v25 = (char *)((char *)v44 - (char *)v24 + v46 + 1); /*0x6554ed*/
          v26 = v23; /*0x6554f1*/
        }
        v4 = v43; /*0x65550c*/
        v36 = v26; /*0x655510*/
        v37 = v24; /*0x655514*/
        v38 = (int)v25; /*0x655518*/
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
  (*(void (__thiscall **)(_DWORD *))(this->RadarClass_field_0x1224 + 12))(this + 1161); /*0x655528*/
  result = v36; /*0x655537*/
  v28 = v37; /*0x65553b*/
  v29 = this + 1170; /*0x65553f*/
  v30 = v38; /*0x655545*/
  *v29 = v36; /*0x655549*/
  v29[1] = (int)v28; /*0x65554b*/
  v29[2] = v2; /*0x65554e*/
  v29[3] = v30; /*0x655551*/
  return result; /*0x655554*/
}


// ==== 0x00655560  BuildingClass::ProcessFogCellOccupancy  this=VOID_PTR  sig=csp ====
void __thiscall BuildingClass::ProcessFogCellOccupancy(int this, TechnoClass *aP1, MouseClass *aP2, MouseClass *aP3)
{
  int v4; // eax
  RadarClass *v5; // esi
  RadarClass *v6; // edx
  MouseClass *v7; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  char *v12; // eax
  RadarClass *v13; // ebp
  int v14; // ebx
  int *v15; // esi
  int v16; // esi
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  TechnoClass **v24; // eax
  TechnoClass *v25; // ecx
  int v26; // eax
  int v27; // eax
  TechnoClass *v28; // edx
  TechnoClass **v29; // eax
  int v31; // [esp+14h] [ebp-10h] BYREF
  RadarClass *v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]

  v4 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), &v31); /*0x655578*/
  v5 = *(RadarClass **)v4; /*0x65557b*/
  v6 = (RadarClass *)aP2; /*0x65557d*/
  v7 = *(MouseClass **)(v4 + 4); /*0x655583*/
  v8 = *(_DWORD *)(v4 + 8); /*0x655586*/
  v9 = *(_DWORD *)(v4 + 12); /*0x655589*/
  if ( (int)aP2 < *(_DWORD *)v4 /*0x6555a2*/
    || (int)aP2 >= (int)((char *)v5 + v8)
    || (v10 = (int)aP3, (int)aP3 < (int)v7)
    || (int)aP3 >= (int)((char *)v7 + v9) )
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6 ) /*0x6555b0*/
      return; /*0x6555b0*/
    v6 = (RadarClass *)aP2; /*0x6555b6*/
    if ( (int)aP2 < (int)v5 ) /*0x6555bc*/
    {
      v6 = v5; /*0x6555be*/
      aP2 = (MouseClass *)v5; /*0x6555c0*/
    }
    v11 = (int)v5 + v8; /*0x6555c4*/
    if ( (int)v6 >= v11 ) /*0x6555c8*/
    {
      v6 = (RadarClass *)(v11 - 1); /*0x6555ca*/
      aP2 = (MouseClass *)(v11 - 1); /*0x6555cd*/
    }
    v10 = (int)aP3; /*0x6555d1*/
    if ( (int)aP3 < (int)v7 ) /*0x6555d7*/
    {
      v10 = (int)v7; /*0x6555d9*/
      aP3 = v7; /*0x6555db*/
    }
    v12 = (char *)v7 + v9; /*0x6555df*/
    if ( v10 >= (int)v7 + v9 ) /*0x6555e4*/
    {
      v10 = (int)(v12 - 1); /*0x6555e6*/
      aP3 = (MouseClass *)(v12 - 1); /*0x6555e9*/
    }
    aP1->reloadTimer[2] = (int)v6; /*0x6555f1*/
    aP1->currentBurstCount = v10; /*0x6555f7*/
  }
  v13 = v6; /*0x655600*/
  v14 = 0; /*0x655611*/
  v15 = *(int **)(this + 4696); /*0x655613*/
  v32 = v6; /*0x655619*/
  v33 = v10; /*0x655620*/
  v16 = *v15; /*0x655624*/
  v17 = *(_DWORD *)(v16 + 24 * (unsigned __int8)((_BYTE)v6 - 5 * v10) + 4); /*0x655626*/
  v18 = v16 + 24 * (unsigned __int8)((_BYTE)v6 - 5 * v10); /*0x65562a*/
  v19 = *(_DWORD *)(v18 + 16); /*0x65562d*/
  if ( v19 <= 0 ) /*0x655632*/
  {
LABEL_22:
    v21 = *(_DWORD *)(v18 + 8); /*0x655659*/
    if ( aP1->focus == HouseClass_Player ) /*0x65566e*/
    {
      if ( v19 < v21 /*0x655697*/
        || (*(_BYTE *)(v18 + 13) || !v21)
        && (v22 = *(_DWORD *)(v18 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v22, 0) )
      {
        v23 = *(_DWORD *)(v18 + 16); /*0x65569e*/
        if ( v23 ) /*0x6556a3*/
          memcpy((void *)(*(_DWORD *)(v18 + 4) + 16), *(const void **)(v18 + 4), 16 * v23); /*0x6556b1*/
        v24 = *(TechnoClass ***)(v18 + 4); /*0x6556b9*/
        v25 = (TechnoClass *)v33; /*0x6556bc*/
        *v24 = aP1; /*0x6556c0*/
        v24[1] = (TechnoClass *)v13; /*0x6556c2*/
        v24[2] = v25; /*0x6556c5*/
        v24[3] = aP1; /*0x6556c8*/
        ++*(_DWORD *)(v18 + 16); /*0x6556cf*/
      }
    }
    else if ( v19 < v21 /*0x6556f3*/
           || (*(_BYTE *)(v18 + 13) || !v21)
           && (v26 = *(_DWORD *)(v18 + 20), v26 > 0)
           && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v21 + v26, 0) )
    {
      v27 = *(_DWORD *)(v18 + 16); /*0x6556fa*/
      v28 = (TechnoClass *)v33; /*0x6556fd*/
      *(_DWORD *)(v18 + 16) = v27 + 1; /*0x655704*/
      v29 = (TechnoClass **)(*(_DWORD *)(v18 + 4) + 16 * v27); /*0x65570d*/
      *v29 = aP1; /*0x65570f*/
      v29[1] = (TechnoClass *)v13; /*0x655711*/
      v29[2] = v28; /*0x655714*/
      v29[3] = aP1; /*0x655717*/
    }
    FogOfWar::RevealCell(this, (IUnknown *)&aP2); /*0x655725*/
    *(_BYTE *)(this + 5337) = 1; /*0x65572a*/
  }
  else
  {
    v20 = v17 + 4; /*0x655634*/
    while ( *(TechnoClass **)(v20 - 4) != aP1 || *(RadarClass **)v20 != v6 || *(_DWORD *)(v20 + 4) != v10 ) /*0x655647*/
    {
      ++v14; /*0x65564d*/
      v20 += 16; /*0x65564e*/
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


// ==== 0x006557F0  Coord::WorldToScreen  this=int  sig=csp ====
int *__thiscall Coord::WorldToScreen(int this, MouseClass *aP1, MouseClass *aP2, char a4)
{
  int v4; // ebx
  void *v5; // esi
  int v7; // ebp
  void *v8; // eax
  int v9; // ecx
  int v10; // edi

  v4 = aP2->field_0; /*0x6557f7*/
  v5 = aP2->field_4; /*0x6557f9*/
  v7 = Math::RoundToInt((double)(aP2->field_0 + (*(_DWORD *)(this + 5264) << 8) - (int)v5) * *(float *)(this + 5256) * 0.00390625); /*0x65582b*/
  v8 = (void *)Math::RoundToInt((double)((int)v5 + v4 + -256 * *(_DWORD *)(this + 5272)) * *(float *)(this + 5256) * 0.00390625); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v7 < 0 ) /*0x655857*/
      v7 = 0; /*0x655859*/
    v9 = *(_DWORD *)(this + 5284); /*0x65585b*/
    if ( v7 >= v9 ) /*0x655863*/
      v7 = v9 - 1; /*0x655865*/
    if ( (int)v8 < 0 ) /*0x65586a*/
      v8 = 0; /*0x65586c*/
    v10 = *(_DWORD *)(this + 5288); /*0x65586e*/
    if ( (int)v8 >= v10 ) /*0x655876*/
      v8 = (void *)(v10 - 1); /*0x655878*/
  }
  aP1->field_0 = v7; /*0x655881*/
  aP1->field_4 = v8; /*0x655883*/
  return &aP1->field_0; /*0x65587f*/
}


// ==== 0x00655890  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_655890(_DWORD *this)
{
  return *this + 251 * this->vtable2; /*0x6558a3*/
}


// ==== 0x006558B0  Radar::PixelIndex  this=Radar  sig=csp ====
int __thiscall Radar_PixelIndex(_DWORD *this)
{
  return this->q004 + 251 * this->q008; /*0x6558c4*/
}


// ==== 0x006558D0  RandomMap::PlaceTileSet  this=int  sig=csp ====
_DWORD *__thiscall sub_6558D0(_DWORD *this)
{
  _DWORD *v1; // ebp
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
  result = __2_YAPAXI_Z(0x10u); /*0x6558dc*/
  v3 = result; /*0x6558e1*/
  v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    v5 = __2_YAPAXI_Z(0x1804u); /*0x65590c*/
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
        *v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x655936*/
        *v7 = &vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x65593c*/
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
    v1[1174] = v3; /*0x655974*/
  }
  else
  {
    v1[1174] = 0; /*0x655980*/
  }
  return result; /*0x65597b*/
}


// ==== 0x00655990  RadarClass::Process  this=int  sig=csp ====
int __thiscall sub_655990(_DWORD *this)
{
  int v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int result; // eax

  v1 = (int)this; /*0x655992*/
  v2 = (_DWORD *)*(this + 1174); /*0x655999*/
  if ( v2 ) /*0x6559a1*/
  {
    if ( *v2 ) /*0x6559a3*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x6559ad*/
    __3_YAXPAX_Z(v2); /*0x6559b0*/
  }
  v3 = __2_YAPAXI_Z(0x10u); /*0x6559ba*/
  v4 = v3; /*0x6559bf*/
  if ( v3 ) /*0x6559c6*/
  {
    v5 = 256; /*0x6559ca*/
    v3[1] = Radar::PixelIndex; /*0x6559d9*/
    v3[2] = 256; /*0x6559e0*/
    v3[3] = 10; /*0x6559e3*/
    v6 = __2_YAPAXI_Z(0x1804u); /*0x6559e6*/
    if ( v6 ) /*0x6559f0*/
    {
      v7 = v6 + 1; /*0x6559f2*/
      *v6 = 256; /*0x6559f5*/
      v8 = v6 + 1; /*0x6559f7*/
      do /*0x655a08*/
      {
        RadarHashVector::Construct(v8, 0, 0); /*0x6559ff*/
        v8 += 6; /*0x655a04*/
        --v5; /*0x655a07*/
      }
      while ( v5 ); /*0x655a08*/
      v9 = v7; /*0x655a0a*/
      v1 = (int)this; /*0x655a0c*/
    }
    else
    {
      v9 = 0; /*0x655a17*/
    }
    v10 = v4[2]; /*0x655a19*/
    *v4 = v9; /*0x655a1c*/
    v11 = 0; /*0x655a1e*/
    if ( v10 > 0 ) /*0x655a22*/
    {
      v12 = 0; /*0x655a24*/
      do /*0x655a35*/
      {
        ++v11; /*0x655a28*/
        *(_DWORD *)(*v4 + v12 + 20) = 10; /*0x655a29*/
        v12 += 24; /*0x655a30*/
      }
      while ( v11 < v4[2] ); /*0x655a35*/
    }
  }
  else
  {
    v4 = 0; /*0x655a3b*/
  }
  *(_DWORD *)(v1 + 4696) = v4; /*0x655a47*/
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)&MEMORY[0x87F8E4]); /*0x655a4d*/
  RadarClass::RecreateSurface(v1, v1); /*0x655a54*/
  for ( result = 0; result < MEMORY[0xA8EC88]; *(_BYTE *)(*((_DWORD *)MEMORY[0xA8EC7C] + result - 1) + 1059) = 0 ) /*0x655a65*/
    ++result; /*0x655a6d*/
  return result; /*0x655a61*/
}


// ==== 0x00655A90  TacticalClass::FreeResources  this=TacticalClass  sig=csp ====
void __thiscall sub_655A90(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // edi

  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 4636); /*0x655a96*/
  if ( v2 ) /*0x655a9e*/
  {
    (**v2)(v2, 1); /*0x655aa4*/
    *(_DWORD *)(this + 4636) = 0; /*0x655aa6*/
  }
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 4640); /*0x655aac*/
  if ( v3 ) /*0x655ab4*/
  {
    (**v3)(v3, 1); /*0x655aba*/
    *(_DWORD *)(this + 4640) = 0; /*0x655abc*/
  }
  if ( *(_DWORD *)(this + 4668) ) /*0x655ac2*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4668)); /*0x655acd*/
    *(_DWORD *)(this + 4668) = 0; /*0x655ad5*/
  }
  v4 = *(_DWORD **)(this + 4696); /*0x655adc*/
  if ( v4 ) /*0x655ae4*/
  {
    if ( *v4 ) /*0x655ae6*/
      (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x655af0*/
    __3_YAXPAX_Z(v4); /*0x655af3*/
    *(_DWORD *)(this + 4696) = 0; /*0x655afb*/
  }
  if ( *(_DWORD *)(this + 4724) ) /*0x655b01*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4724)); /*0x655b0d*/
    *(_DWORD *)(this + 4724) = 0; /*0x655b15*/
  }
}


// ==== 0x00655B20  RadarClass::InitializeHashTable  this=IUnknown  sig=csp ====
void __thiscall sub_655B20(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int i; // eax
  int v12; // [esp-8h] [ebp-18h]
  _DWORD *v13; // [esp+Ch] [ebp-4h]

  *(this + 1159) = 0; /*0x655b2a*/
  *(this + 1160) = 0; /*0x655b30*/
  *(this + 1167) = 0; /*0x655b36*/
  *(this + 1174) = 0; /*0x655b3c*/
  *(this + 1181) = 0; /*0x655b42*/
  v2 = __2_YAPAXI_Z(0x10u); /*0x655b48*/
  v3 = v2; /*0x655b4d*/
  if ( v2 ) /*0x655b54*/
  {
    v4 = 256; /*0x655b57*/
    v2[1] = Radar::PixelIndex; /*0x655b66*/
    v2[2] = 256; /*0x655b6d*/
    v2[3] = 10; /*0x655b70*/
    v5 = __2_YAPAXI_Z(0x1804u); /*0x655b73*/
    if ( v5 ) /*0x655b7d*/
    {
      *v5 = 256; /*0x655b7f*/
      v13 = v5 + 1; /*0x655b84*/
      v6 = v5 + 1; /*0x655b88*/
      do /*0x655b99*/
      {
        RadarHashVector::Construct(v6, 0, 0); /*0x655b90*/
        v6 += 6; /*0x655b95*/
        --v4; /*0x655b98*/
      }
      while ( v4 ); /*0x655b99*/
      v7 = v13; /*0x655b9b*/
    }
    else
    {
      v7 = 0; /*0x655ba6*/
    }
    v8 = v3[2]; /*0x655ba8*/
    *v3 = v7; /*0x655bab*/
    v9 = 0; /*0x655bad*/
    if ( v8 > 0 ) /*0x655bb2*/
    {
      v10 = 0; /*0x655bb4*/
      do /*0x655bc5*/
      {
        ++v9; /*0x655bb8*/
        *(_DWORD *)(*v3 + v10 + 20) = 10; /*0x655bb9*/
        v10 += 24; /*0x655bc0*/
      }
      while ( v9 < v3[2] ); /*0x655bc5*/
    }
  }
  else
  {
    v3 = 0; /*0x655bcb*/
  }
  *(this + 1174) = (int)v3; /*0x655bd7*/
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)&MEMORY[0x87F8E4]); /*0x655bdd*/
  RadarClass::RecreateSurface((int)this, (int)this); /*0x655be4*/
  for ( i = 0; i < MEMORY[0xA8EC88]; *(_BYTE *)(*((_DWORD *)MEMORY[0xA8EC7C] + i - 1) + 1059) = 0 ) /*0x655bf3*/
    ++i; /*0x655bfb*/
  if ( *(this + 1324) == 3 ) /*0x655c18*/
  {
    v12 = *(this + 1325); /*0x655c21*/
    *(this + 1323) = 5; /*0x655c24*/
    RadarClass::SetViewMode((int)this, v12, 0); /*0x655c2e*/
    RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateNormal); /*0x655c3b*/
  }
}


// ==== 0x00655C50  FogOfWar::RevealArea  this=RadarClass  sig=csp ====
int __thiscall FogOfWar::RevealArea(int this, RadarClass *aP1)
{
  IUnknown *result; // eax
  int v5; // ecx
  IUnknown *v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  IUnknown *v10; // ecx
  int v11; // eax
  int v12; // ebx
  #375 **v13; // ebp
  #375 *v14; // eax
  unsigned __int16 v15; // ax
  RadarClass *v16; // ebx
  int v17; // ebx
  #375 *v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  RadarClass *v26; // ecx
  int v27; // edx
  bool v28; // cc
  RadarClass *v29; // edi
  IUnknown *v30; // ebx
  IUnknown *v31; // ebp
  IUnknown *v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  IUnknown *v36; // [esp+18h] [ebp-28h]
  _DWORD v37[2]; // [esp+20h] [ebp-20h] BYREF
  IUnknown *GroundHeight; // [esp+28h] [ebp-18h]
  IUnknown *v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  RadarClass *aP1a; // [esp+44h] [ebp+4h]
  char aP1b; // [esp+44h] [ebp+4h]
  RadarClass *aP1c; // [esp+44h] [ebp+4h]

  result = HouseClass_Player; /*0x655c50*/
  if ( !HouseClass_Player ) /*0x655c62*/
    return (int)result; /*0x655c62*/
  result = (IUnknown *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4636) + 120))( /*0x655c75*/
                         *(_DWORD *)(this + 4636),
                         v40);
  v5 = aP1->field_0; /*0x655c7e*/
  aP1a = (RadarClass *)aP1->field_0; /*0x655c82*/
  if ( (int)aP1a < result->field_0 ) /*0x655c86*/
    return (int)result; /*0x655c86*/
  if ( v5 >= result->field_0 + result->field_8 ) /*0x655c93*/
    return (int)result; /*0x655c93*/
  v6 = (IUnknown *)aP1->field_4; /*0x655c99*/
  v7 = result->field_4; /*0x655c9c*/
  if ( (int)v6 < v7 ) /*0x655ca5*/
    return (int)result; /*0x655ca5*/
  result = (IUnknown *)(v7 + result->field_C); /*0x655cae*/
  if ( (int)v6 >= (int)result ) /*0x655cb2*/
    return (int)result; /*0x655cb2*/
  v8 = (double)(int)aP1a / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x655cc2*/
  v37[0] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = (IUnknown *)Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (aP1b = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    aP1b = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(aP1->field_0 - 5 * (int)aP1->field_4); /*0x655da7*/
  v10 = *(IUnknown **)(v9 + 16); /*0x655daa*/
  v11 = *(_DWORD *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( (int)v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = v11 + 4; /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(#375 ***)(v12 - 4); /*0x655dc4*/
    if ( *(_DWORD *)v12 != aP1->field_0 || *(void **)(v12 + 4) != aP1->field_4 ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!aP1b || (unsigned __int8)House::IsHumanPlayer(v13[135])) /*0x655e10*/
      && (!*(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(HouseClass_Player, (IUnknown *)v13)) )
    {
      if ( !*(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = v13[135]; /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(_BYTE *)(*((_DWORD *)v14 + 13) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
LABEL_25:
    v12 += 16; /*0x655e6a*/
    if ( ++v35 >= (int)v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (__thiscall **)(_DWORD, RadarClass *))(**(_DWORD **)(this + 4640) + 40))( /*0x655e93*/
              *(_DWORD *)(this + 4640),
              aP1);
      (*(void (__thiscall **)(_DWORD, RadarClass *, unsigned int))(**(_DWORD **)(this + 4636) + 36))( /*0x655f40*/
        *(_DWORD *)(this + 4636),
        aP1,
        ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) >> 1) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) >> 1) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) >> 1) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
    }
    else if ( aP1b ) /*0x65605e*/
    {
      (*(void (__stdcall **)(RadarClass *, _DWORD))(**(_DWORD **)(this + 4636) + 36))(aP1, 0); /*0x65608c*/
    }
    else
    {
      v20 = **(_DWORD **)(this + 4636); /*0x65606f*/
      v21 = (*(int (__thiscall **)(_DWORD, RadarClass *))(**(_DWORD **)(this + 4640) + 40))( /*0x656071*/
              *(_DWORD *)(this + 4640),
              aP1);
      (*(void (__thiscall **)(_DWORD, RadarClass *, int))(v20 + 36))(*(_DWORD *)(this + 4636), aP1, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = (RadarClass *)v13[135]; /*0x655f50*/
  aP1c = v16; /*0x655f5b*/
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*v13 + 49))(v13) ) /*0x655f5f*/
  {
    aP1c = (RadarClass *)(*((int (__thiscall **)(#375 **, _DWORD))*v13 + 52))(v13, 0); /*0x655f76*/
    v16 = aP1c; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = ((unsigned __int8)aP1c[1].__pad_16BB[2946] >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x655fd2*/
        | ((unsigned __int8)aP1c[1].__pad_16BB[2947] >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
        | ((unsigned __int8)v16[1].__pad_16BB[2948] >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
  else
    v17 = *(_DWORD *)(FindBuildingAnimByName(&stru_830620.__pad_579C[4368], 1) + 816); /*0x655fe5*/
  v18 = v13[93]; /*0x655feb*/
  v19 = (int)v13[95]; /*0x655ff1*/
  if ( v18 == (#375 *)-1 ) /*0x655ffa*/
  {
LABEL_37:
    if ( v19 <= 0 /*0x65603a*/
      || (v19 - 1) / *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 136) % 2 != 1
      || v13[135] != (#375 *)HouseClass_Player )
    {
      goto LABEL_41; /*0x65603a*/
    }
    (*(void (__thiscall **)(_DWORD, RadarClass *, int))(**(_DWORD **)(this + 4636) + 36))( /*0x656048*/
      *(_DWORD *)(this + 4636),
      aP1,
      ~v17);
  }
  else
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v18 < v19 ) /*0x656006*/
    {
      v19 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
LABEL_41:
    (*(void (__stdcall **)(RadarClass *, int))(**(_DWORD **)(this + 4636) + 36))(aP1, v17); /*0x65604d*/
  }
LABEL_45:
  v22 = *(_DWORD *)(this + 5276); /*0x65608f*/
  v23 = *(_DWORD *)(this + 5280); /*0x656095*/
  v24 = this + 4620; /*0x6560a0*/
  v25 = v22 + aP1->field_0; /*0x6560a6*/
  v26 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x6560a8*/
  if ( *(int *)(v24 + 8) <= 0 || *(int *)(v24 + 12) <= 0 ) /*0x6560be*/
  {
    v27 = v22 + aP1->field_0; /*0x656125*/
    v29 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x656127*/
    result = (IUnknown *)1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *(_DWORD *)v24; /*0x6560c2*/
    v28 = *(_DWORD *)v24 <= v25; /*0x6560c5*/
    v29 = *(RadarClass **)(v24 + 4); /*0x6560c7*/
    v30 = *(IUnknown **)(v24 + 8); /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = *(IUnknown **)(v24 + 12); /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 = (IUnknown *)((char *)v30 + v27 - v25); /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( (int)v29 > (int)v26 ) /*0x6560e6*/
    {
      v31 = (IUnknown *)((char *)v39 + (char *)v29 - (char *)v26); /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( (int)v30 + v27 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = (IUnknown *)(v25 - v27 + 2); /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( (int)v29 + (int)v39 < (int)&v26->field_0 + 1 ) /*0x656114*/
      v32 = (IUnknown *)((char *)v26 - (char *)v29 + 2); /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = (int)v32; /*0x656121*/
  }
  *(_DWORD *)v24 = v27; /*0x65612d*/
  *(_DWORD *)(v24 + 4) = v29; /*0x65612f*/
  *(_DWORD *)(v24 + 8) = result; /*0x656132*/
  *(_DWORD *)(v24 + 12) = v33; /*0x656135*/
  return (int)result; /*0x656138*/
}


// ==== 0x00656150  FogOfWar::RenderCell  this=FogOfWar  sig=csp ====
int __thiscall sub_656150(int this)
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

  v2 = *(_DWORD *)(this + 4636); /*0x65615f*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x65616f*/
  v4 = v3 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2); /*0x65617b*/
  v5 = *(char **)(this + 4724); /*0x65617f*/
  HIDWORD(v4) = (((BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (HIDWORD(v4) >> 2)); /*0x656194*/
  v6 = &v5[4 * (HIDWORD(v4) >> 2)]; /*0x656194*/
  v7 = BYTE4(v4) & 3; /*0x656198*/
  v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    v9 = v8 + **(_DWORD **)(this + 4696); /*0x6561ab*/
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
            + v12[1] * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636));
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        v16 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (unsigned __int8)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *((_DWORD *)MEMORY[0xB054D4] /*0x656248*/
                                   + *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(MEMORY[0x836ECC], 1); /*0x65625c*/
          }
          v18 = *(_DWORD *)(BuildingAnimByName + 816); /*0x65625e*/
          v19 = *(_DWORD *)(BuildingAnimByName + 780); /*0x656264*/
          v20 = *(_DWORD *)(v19 + 372); /*0x65626d*/
          if ( *(_DWORD *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(unsigned __int8 *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v18); /*0x656281*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(this + 4636) + 36))( /*0x65628f*/
            *(_DWORD *)(this + 4636),
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
void __thiscall FogOfWar::RevealCell(int this, IUnknown *aP1)
{
  int v3; // edx
  int v4; // eax
  _BYTE *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( aP1->field_0 >= 0 /*0x656310*/
    && aP1->field_0 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636))
    && aP1->field_4 >= 0
    && aP1->field_4 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)) )
  {
    v3 = aP1->field_0 /*0x656329*/
       + aP1->field_4 * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636));
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
        *(_DWORD *)(v9 + 8 * v8) = aP1->field_0; /*0x65638b*/
        *(_DWORD *)(v9 + 8 * v8 + 4) = aP1->field_4; /*0x656391*/
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
      v8 = *(this + 1314) + 0.5; /*0x656460*/
      if ( v8 < 1.0 ) /*0x656473*/
        v8 = 1.0; /*0x656477*/
    }
    else
    {
      v8 = (double)v4 * *(this + 1314) + 0.5; /*0x65648d*/
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


// ==== 0x00656580  Diplomacy::GetField  this=VOID_PTR  sig=csp ====
char *__thiscall Diplomacy::GetField(char *this, BuildingTypeClass *aP1)
{
  return this + 24 * aP1->Foundation + 4728; /*0x656595*/
}


// ==== 0x006565A0  CellClass::RevealFogRect  this=int  sig=csp ====
void __thiscall CellClass::RevealFogRect(int this, __int16 *a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  BuildingTypeClass *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  BuildingTypeClass **v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  IUnknown *v15; // ebx
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // ebx
  IUnknown *i; // edi
  IUnknown *v21; // [esp+10h] [ebp-34h] BYREF
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  IUnknown *v25; // [esp+20h] [ebp-24h]
  BuildingTypeClass *v26; // [esp+24h] [ebp-20h] BYREF
  int v27; // [esp+28h] [ebp-1Ch]
  IUnknown *v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  _DWORD v30[4]; // [esp+34h] [ebp-10h] BYREF
  int v31; // [esp+48h] [ebp+4h]

  if ( !*(_DWORD *)(this + 4636) ) /*0x6565b1*/
    return; /*0x6565b1*/
  v3 = *(_DWORD *)(this + 5272); /*0x6565bb*/
  v4 = a2[1]; /*0x6565c1*/
  v5 = *a2; /*0x6565c5*/
  v6 = (BuildingTypeClass *)(v5 + *(_DWORD *)(this + 5264) - v4); /*0x6565d2*/
  v7 = v5 + v4 - v3; /*0x6565d4*/
  v8 = 2; /*0x6565d9*/
  if ( v6 == (BuildingTypeClass *)-1 ) /*0x6565de*/
  {
    v6 = 0; /*0x6565e0*/
LABEL_5:
    v8 = 1; /*0x6565f2*/
    goto LABEL_6; /*0x6565f2*/
  }
  if ( v6 == (BuildingTypeClass *)(2 * *(_DWORD *)(this + 260) - 1) ) /*0x6565f0*/
    goto LABEL_5; /*0x6565f0*/
LABEL_6:
  v27 = v7; /*0x6565f7*/
  v9 = *(_DWORD *)(this + 4676); /*0x6565fb*/
  v28 = (IUnknown *)v8; /*0x656601*/
  v26 = v6; /*0x65660a*/
  v10 = *(_DWORD *)(this + 4672); /*0x65660e*/
  v24 = v9; /*0x65661a*/
  v29 = 1; /*0x656627*/
  v21 = 0; /*0x65662b*/
  v22 = 0; /*0x65662f*/
  v23 = v10; /*0x656633*/
  v11 = (BuildingTypeClass **)ClipRectIntersection(v30, (int *)&v26, (int *)&v21, 0, 0); /*0x656637*/
  v26 = *v11; /*0x65663e*/
  v27 = (int)v11[1]; /*0x656645*/
  v28 = (IUnknown *)v11[2]; /*0x65664c*/
  v12 = *(_DWORD *)(this + 4636); /*0x656650*/
  v29 = (int)v11[3]; /*0x656659*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 124))(v12); /*0x656668*/
  v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)); /*0x65666c*/
  v15 = v28; /*0x656672*/
  v21 = (IUnknown *)v14; /*0x656676*/
  if ( (int)v28 > 0 && v29 > 0 ) /*0x656686*/
  {
    v16 = Math::RoundToInt((double)(int)v26 * *(float *)(this + 5256)); /*0x656696*/
    v25 = (IUnknown *)((v16 - 1) & ((v16 - 1 < 0) - 1)); /*0x6566b4*/
    v17 = Math::RoundToInt((double)((unsigned int)v15 + (int)v26) * *(float *)(this + 5256)) + 1; /*0x6566c6*/
    if ( v17 >= v13 ) /*0x6566c8*/
      v17 = v13; /*0x6566ca*/
    v18 = Math::RoundToInt((double)v27 * *(float *)(this + 5256)); /*0x6566d6*/
    v19 = (v18 - 1) & ((v18 - 1 < 0) - 1); /*0x6566e8*/
    v31 = Math::RoundToInt((double)(v27 + v29) * *(float *)(this + 5256)) + 1; /*0x65670a*/
    if ( v31 >= (int)v21 ) /*0x65670e*/
      v31 = (int)v21; /*0x656710*/
    for ( ; v19 < v31; ++v19 ) /*0x656718*/
    {
      for ( i = v25; (int)i < v17; i = (IUnknown *)((char *)i + 1) ) /*0x656720*/
      {
        v21 = i; /*0x656729*/
        v22 = v19; /*0x65672d*/
        FogOfWar::RevealCell(this, (IUnknown *)&v21); /*0x656731*/
      }
    }
  }
}


// ==== 0x00656750  TacticalClass::ScreenToCellLookup  this=VOID_PTR  sig=csp ====
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
int __thiscall SidebarClass_Load(int this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // ebp
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // [esp+88h] [ebp-14h] BYREF
  int v20; // [esp+8Ch] [ebp-10h]
  _DWORD *v21; // [esp+90h] [ebp-Ch]
  _DWORD v22[2]; // [esp+94h] [ebp-8h] BYREF

  v2 = a2; /*0x6568a7*/
  v20 = this; /*0x6568ae*/
  result = DisplayClass::SetSurface(a2); /*0x6568b2*/
  if ( result >= 0 ) /*0x6568bb*/
  {
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x6568cc*/
    if ( result >= 0 ) /*0x6568d1*/
    {
      v21 = (_DWORD *)(this + 5312); /*0x6568dd*/
      AudioController::Init((_DWORD *)(this + 5312)); /*0x6568e1*/
      v5 = this + 4700; /*0x6568e6*/
      if ( this != -4700 ) /*0x6568ee*/
      {
        VectorClass::PointConstructor(0, 0); /*0x6568f4*/
        *(_DWORD *)v5 = &DynamicVectorClass<Point2D>::`vftable'; /*0x6568f9*/
        *(_DWORD *)(this + 4720) = 10; /*0x6568ff*/
        *(_DWORD *)(this + 4716) = 0; /*0x656906*/
      }
      v19 = 0; /*0x65690d*/
      if ( a2 <= 0 ) /*0x656913*/
      {
LABEL_14:
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x656980*/
        if ( result >= 0 ) /*0x656990*/
        {
          v10 = this + 4644; /*0x656996*/
          if ( this != -4644 ) /*0x65699e*/
          {
            VectorClass::CellConstructor((_DWORD *)(this + 4644), 0, 0); /*0x6569a4*/
            *(_DWORD *)v10 = &vt_DynamicVectorClass_Cell; /*0x6569a9*/
            *(_DWORD *)(this + 4664) = 10; /*0x6569af*/
            *(_DWORD *)(this + 4660) = 0; /*0x6569b6*/
          }
          v11 = 0; /*0x6569bd*/
          if ( a2 <= 0 ) /*0x6569c1*/
          {
LABEL_26:
            v16 = v20; /*0x656a1e*/
            v17 = 22; /*0x656a22*/
            v18 = v20 + 4736; /*0x656a29*/
            do /*0x656a56*/
            {
              if ( v18 != 8 ) /*0x656a34*/
              {
                *(_DWORD *)(v18 - 4) = 0; /*0x656a36*/
                *(_DWORD *)v18 = 0; /*0x656a39*/
                *(_BYTE *)(v18 + 4) = 1; /*0x656a3b*/
                *(_BYTE *)(v18 + 5) = 0; /*0x656a3e*/
                *(_DWORD *)(v18 - 8) = &DynamicVectorClass<Point2D>::`vftable'; /*0x656a41*/
                *(_DWORD *)(v18 + 12) = 10; /*0x656a48*/
                *(_DWORD *)(v18 + 8) = 0; /*0x656a4f*/
              }
              v18 += 24; /*0x656a52*/
              --v17; /*0x656a55*/
            }
            while ( v17 ); /*0x656a56*/
            result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v16 + 5296, 4, 0); /*0x656a65*/
            if ( result >= 0 ) /*0x656a6a*/
            {
              result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v16 + 5292, 4, 0); /*0x656a79*/
              if ( result >= 0 ) /*0x656a7e*/
              {
                result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v16 + 5300, 4, 0); /*0x656a8d*/
                if ( result >= 0 ) /*0x656a92*/
                {
                  result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v16 + 5304, 4, 0); /*0x656aa1*/
                  if ( result >= 0 ) /*0x656aa6*/
                  {
                    AudioController::Init(v21); /*0x656aac*/
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
              v12 = *(_DWORD *)(v10 + 8); /*0x6569d9*/
              if ( *(_DWORD *)(v10 + 16) < v12 /*0x6569fb*/
                || (*(_BYTE *)(v10 + 13) || !v12)
                && (v13 = *(_DWORD *)(v10 + 20), v13 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v12 + v13, 0) )
              {
                v14 = *(_DWORD *)(v10 + 16); /*0x656a02*/
                v15 = *(_DWORD *)(v10 + 4); /*0x656a05*/
                *(_DWORD *)(v10 + 16) = v14 + 1; /*0x656a0b*/
                *(_DWORD *)(v15 + 4 * v14) = v19; /*0x656a12*/
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
          v6 = *(_DWORD *)(this + 4708); /*0x65692b*/
          if ( *(_DWORD *)(this + 4716) < v6 /*0x65694d*/
            || (*(_BYTE *)(this + 4713) || !v6)
            && (v7 = *(_DWORD *)(this + 4720), v7 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 8))(this + 4700, v6 + v7, 0) )
          {
            v8 = *(_DWORD *)(this + 4716); /*0x656954*/
            v9 = *(_DWORD *)(this + 4704); /*0x656957*/
            *(_DWORD *)(this + 4716) = v8 + 1; /*0x65695d*/
            *(_DWORD *)(v9 + 8 * v8) = v22[0]; /*0x656964*/
            *(_DWORD *)(v9 + 8 * v8 + 4) = v22[1]; /*0x65696b*/
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
int __thiscall SidebarClass_Save(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx
  int v9; // eax

  v2 = a2; /*0x656ac2*/
  result = DisplayClass::GetSurface(a2); /*0x656aca*/
  if ( result >= 0 )
  {
    v5 = *(_DWORD *)v2; /*0x656add*/
    a2 = *(this + 1179); /*0x656ae9*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x656aed*/
    if ( result >= 0 )
    {
      v6 = 0; /*0x656afc*/
      if ( a2 <= 0 )
      {
LABEL_6:
        v7 = *(_DWORD *)v2; /*0x656b27*/
        a2 = *(this + 1165); /*0x656b39*/
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 16))(v2, &a2, 4, 0); /*0x656b3d*/
        if ( result >= 0 )
        {
          v8 = 0; /*0x656b4c*/
          if ( a2 <= 0 )
          {
LABEL_10:
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this + 1324, 4, 0); /*0x656b73*/
            if ( result >= 0 )
            {
              result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this + 1323, 4, 0); /*0x656b96*/
              if ( result >= 0 )
              {
                result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this + 1325, 4, 0); /*0x656bab*/
                if ( result >= 0 )
                {
                  v9 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this + 1326, 4, 0); /*0x656bc0*/
                  return v9 >= 0 ? 0 : v9;
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x656b63*/
            {
              result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))( /*0x656b63*/
                         v2,
                         *(this + 1162) + 4 * v8,
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
          result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, *(this + 1176) + 8 * v6, 8, 0); /*0x656b13*/
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


// ==== 0x00656BE0  RadarClass::Toggle  this=int  sig=csp ====
void __thiscall RadarClass::Toggle(int this, char a2, MouseClass *aP2)
{
  int v4; // eax

  if ( a2 != 1 ) /*0x656be9*/
  {
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c4e*/
    *(_DWORD *)(this + 5292) = 2; /*0x656c57*/
    if ( (_BYTE)aP2 ) /*0x656c63*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1780), 0x2000, 1.0, 0); /*0x656c7d*/
    goto LABEL_9; /*0x656c7d*/
  }
  v4 = *(_DWORD *)(this + 5292); /*0x656beb*/
  if ( !v4 || v4 == 2 ) /*0x656bf8*/
  {
    *(_DWORD *)(this + 5292) = 3; /*0x656c04*/
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x656c0e*/
    if ( (_BYTE)aP2 ) /*0x656c19*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1776), 0x2000, 1.0, 0); /*0x656c32*/
LABEL_9:
    Debug::Log(); /*0x656c82*/
  }
}


// ==== 0x00656CB0  RadarClass::SetViewMode  this=IUnknown  sig=csp ====
void __thiscall RadarClass::SetViewMode(int this, int a2, MouseClass *aP2)
{
  int v4; // edi
  MouseClass *v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !MEMORY[0xA8B238] || !HouseClass_Player->__pad_1D8[29] || (v4 = 1, !MEMORY[0xA8B538]) ) /*0x656cd8*/
    v4 = a2; /*0x656cda*/
  v5 = *(MouseClass **)(this + 5296); /*0x656cde*/
  if ( v5 != (MouseClass *)v4 ) /*0x656ce6*/
  {
    if ( (v5 == (MouseClass *)3 || v5 == (MouseClass *)4 && v4 != 3) && *(_DWORD *)(this + 5292) != 5 ) /*0x656d06*/
    {
      *(_DWORD *)(this + 5300) = v4; /*0x656d08*/
      return; /*0x656d10*/
    }
    if ( !v4 ) /*0x656d18*/
    {
      LOBYTE(v5) = v5 == (MouseClass *)1; /*0x656da7*/
      RadarClass::Toggle(this, 0, v5); /*0x656dad*/
LABEL_23:
      *(_DWORD *)(this + 5296) = v4; /*0x656db2*/
      return; /*0x656db2*/
    }
    if ( v4 != 1 ) /*0x656d1f*/
    {
      if ( v4 != 4 ) /*0x656d24*/
      {
        v6 = *(_DWORD *)(this + 5292); /*0x656d2a*/
        if ( v6 != 1 && v6 != 5 ) /*0x656d38*/
        {
          RadarClass::Toggle(this, 1, 0); /*0x656d40*/
          *(_DWORD *)(this + 5296) = v4; /*0x656d45*/
          return; /*0x656d4d*/
        }
        goto LABEL_20; /*0x656d38*/
      }
      goto LABEL_23; /*0x656d24*/
    }
    v7 = *(_DWORD *)(this + 5292); /*0x656d50*/
    if ( (v7 == 1 || v7 == 5) && *(_BYTE *)(this + 5336) == 1 ) /*0x656d67*/
    {
LABEL_20:
      *(_DWORD *)(this + 5296) = v4; /*0x656d69*/
      *(_DWORD *)(this + 5292) = 4; /*0x656d6f*/
      *(_DWORD *)(this + 5372) = 25; /*0x656d75*/
      return; /*0x656d81*/
    }
    RadarClass::Toggle(this, *(_BYTE *)(this + 5336), aP2); /*0x656d92*/
    *(_DWORD *)(this + 5296) = 1; /*0x656d97*/
  }
}


// ==== 0x00656DE0  HouseClass::updateAlliedStatus  this=VOID_PTR  sig=csp ====
char __thiscall sub_656DE0(_BYTE *this)
{
  return *(this + 5336); /*0x656de6*/
}


// ==== 0x00656DF0  HouseClass::SetRadarVisibility  this=int  sig=csp ====
void __thiscall HouseClass::SetRadarVisibility(int this, char a2)
{
  if ( *(_BYTE *)(this + 5336) != a2 ) /*0x656dfe*/
  {
    *(_BYTE *)(this + 5336) = a2; /*0x656e02*/
    Debug::Log(); /*0x656e1a*/
    if ( *(_DWORD *)(this + 5296) == 1 ) /*0x656e2d*/
      RadarClass::Toggle(this, a2, (MouseClass *)1); /*0x656e32*/
    else
      RadarClass::SetViewMode(this, 1, (MouseClass *)1); /*0x656e40*/
  }
}


// ==== 0x00656E50  RadarClass::IsActiveMode  this=VOID_PTR  sig=csp ====
int __thiscall RadarClass_IsActiveMode(_DWORD *this)
{
  int result; // eax

  if ( *(this + 1324) != 2 ) /*0x656e57*/
    return 0; /*0x656e57*/
  result = 1; /*0x656e5f*/
  if ( *(this + 1323) != 1 ) /*0x656e66*/
    return 0; /*0x656e68*/
  return result; /*0x656e6a*/
}


// ==== 0x00656E90  RadarClass::SetFlag  this=VOID_PTR  sig=csp ====
BOOL __thiscall RadarClass_SetFlag(_BYTE *this, char a2)
{
  char v2; // dl
  BOOL result; // eax

  v2 = *(this + 5338); /*0x656e90*/
  result = 1; /*0x656e96*/
  *(this + 5337) = 1; /*0x656e9d*/
  if ( !v2 ) /*0x656ea3*/
    result = a2 != 0; /*0x656ead*/
  *(this + 5338) = result; /*0x656eaf*/
  return result; /*0x656eb5*/
}


// ==== 0x00656EC0  Radar::RenderMinimap  this=RadarClass  sig=csp ====
char __thiscall Radar::RenderMinimap(int this)
{
  int v2; // ebx
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
  double v13; // st7
  _DWORD *v14; // ebp
  int v15; // eax
  double v16; // st6
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int i; // ebp
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  int j; // ebp
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int *v31; // ebp
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // edx
  bool v37; // cc
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  bool v45; // sf
  int v46; // ebx
  int v47; // ecx
  int k; // ebp
  int *v49; // eax
  int v50; // ebp
  int *v51; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // ebp
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // edi
  int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // edi
  int v64; // ecx
  int v65; // edi
  int v66; // edi
  int v67; // ebp
  int v68; // ebp
  int v69; // edi
  int v70; // ecx
  int *v71; // edi
  int *v72; // ebp
  int v73; // ecx
  int v74; // edi
  int v75; // ebp
  int v76; // eax
  int v77; // edx
  int v78; // eax
  int v79; // ecx
  int v80; // edi
  int v81; // ebp
  int v82; // eax
  int v83; // ecx
  int v84; // edx
  char v86; // [esp+40h] [ebp-46h]
  char v87; // [esp+41h] [ebp-45h]
  int v88; // [esp+42h] [ebp-44h] BYREF
  int v89; // [esp+4Ah] [ebp-3Ch]
  int v90; // [esp+4Eh] [ebp-38h]
  int v91; // [esp+52h] [ebp-34h] BYREF
  ConvertClass *v92; // [esp+56h] [ebp-30h]
  int v93; // [esp+5Ah] [ebp-2Ch]
  int v94; // [esp+5Eh] [ebp-28h]
  int v95; // [esp+62h] [ebp-24h]
  _BYTE v96[32]; // [esp+66h] [ebp-20h] BYREF

  v2 = this + 4620; /*0x656ec9*/
  v95 = this + 4620; /*0x656ed1*/
  *(_DWORD *)&v96[16] = *(_DWORD *)(this + 4620); /*0x656ed7*/
  *(_DWORD *)&v96[20] = *(_DWORD *)(this + 4624); /*0x656ede*/
  *(_DWORD *)&v96[24] = *(_DWORD *)(this + 4628); /*0x656ee5*/
  v3 = *(_DWORD *)(this + 5296); /*0x656ee9*/
  *(_DWORD *)&v96[28] = *(_DWORD *)(v2 + 12); /*0x656ef9*/
  if ( v3 != 1 || (v86 = 1, *(_DWORD *)(this + 5292) != 1) ) /*0x656f0b*/
    v86 = 0; /*0x656f0d*/
  v91 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] / 2; /*0x656f28*/
  v92 = (ConvertClass *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] /*0x656f3e*/
                       + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] / 2);
  v4 = (__int16 *)Tactical::PixelToCell( /*0x656f4e*/
                    *(int *)&MEMORY[0x87F8E4].__pad_5568[9432],
                    (AbstractClass *)v96,
                    (IUnknown *)&v91);
  v5 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v4); /*0x656f59*/
  v6 = *(_DWORD *)(this + 5264); /*0x656f61*/
  v91 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v91); /*0x656f71*/
  v8 = (__int16)v91; /*0x656f76*/
  v9 = (int *)(this + 5276); /*0x656f7b*/
  v10 = (__int16)v91 + v6 - SHIWORD(v91); /*0x656f81*/
  v91 = *(int *)(this + 5276); /*0x656f83*/
  v88 = v10; /*0x656f87*/
  *(_DWORD *)v96 = v8; /*0x656f8b*/
  v11 = Math::RoundToInt((double)v10 * *(float *)(this + 5256) + (double)v91); /*0x656f9d*/
  v12 = v7 - *(_DWORD *)(this + 5272); /*0x656fac*/
  v88 = v11; /*0x656fae*/
  *(_DWORD *)v96 += v12; /*0x656fb4*/
  *(_DWORD *)v96 = Math::RoundToInt((double)*(int *)v96 * *(float *)(this + 5256) + (double)*(int *)(this + 5280)); /*0x656fd1*/
  if ( v88 == v91 - 1 ) /*0x656fdc*/
    ++v88; /*0x656fdf*/
  v13 = 60.0 / *(float *)(this + 5256); /*0x656fe9*/
  v14 = (_DWORD *)(this + 5340); /*0x656ff3*/
  v94 = 1; /*0x657000*/
  *(_DWORD *)(this + 5340) = v88; /*0x657004*/
  *(_DWORD *)(this + 5344) = *(_DWORD *)v96; /*0x65700a*/
  *(_DWORD *)(this + 5348) = 1; /*0x65700d*/
  *(_DWORD *)(this + 5352) = 1; /*0x657010*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540]; /*0x65701c*/
  v15 = Math::RoundToInt(v13); /*0x65702c*/
  v16 = 30.0 / *(float *)(this + 5256); /*0x657037*/
  *(_DWORD *)(this + 5348) = v15; /*0x65703d*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x65704c*/
  *(float *)&v91 = v16; /*0x657050*/
  *(_DWORD *)(this + 5352) = Math::RoundToInt(v13); /*0x657061*/
  v88 = Math::RoundToInt(v13); /*0x657074*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x657082*/
  v17 = Math::RoundToInt((double)(2 * *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544]) / *(float *)&v91 * 0.5); /*0x657094*/
  *(_DWORD *)(this + 5340) -= v88; /*0x6570a2*/
  *(_DWORD *)(this + 5344) -= v17; /*0x6570aa*/
  v18 = *(_DWORD *)(this + 5340); /*0x6570ad*/
  v19 = *v9; /*0x6570b0*/
  if ( v18 >= *v9 ) /*0x6570b4*/
  {
    v91 = *(int *)(this + 5284); /*0x6570c1*/
    if ( v18 + *(_DWORD *)(this + 5348) >= v19 + v91 ) /*0x6570d5*/
      *v14 = v91 - *(_DWORD *)(this + 5348) + v19 - 1; /*0x6570e7*/
  }
  else
  {
    *v14 = v19; /*0x6570b6*/
  }
  v20 = *(_DWORD *)(this + 5344); /*0x6570ea*/
  v21 = *(_DWORD *)(this + 5280); /*0x6570f0*/
  if ( v20 >= v21 ) /*0x6570f8*/
  {
    v22 = *(_DWORD *)(this + 5288); /*0x657108*/
    if ( v20 + *(_DWORD *)(this + 5352) >= v22 + *(_DWORD *)(this + 5280) ) /*0x65711a*/
      *(_DWORD *)(this + 5344) = v22 - *(_DWORD *)(this + 5352) + *(_DWORD *)(this + 5280) - 1; /*0x65712e*/
  }
  else
  {
    *(_DWORD *)(this + 5344) = v21; /*0x6570fa*/
  }
  if ( *(_BYTE *)(this + 5338) ) /*0x657134*/
  {
    *(_DWORD *)(this + 5356) = *v14; /*0x657148*/
    *(_DWORD *)(this + 5360) = *(_DWORD *)(this + 5344); /*0x65714d*/
    *(_DWORD *)(this + 5364) = *(_DWORD *)(this + 5348); /*0x657153*/
    *(_DWORD *)(this + 5368) = *(_DWORD *)(this + 5352); /*0x657159*/
  }
  if ( *(_BYTE *)(this + 5337) /*0x6571bc*/
    || *(_DWORD *)(this + 5356) != *v14
    || *(_DWORD *)(this + 5360) != *(_DWORD *)(this + 5344)
    || *(_DWORD *)(this + 5364) != *(_DWORD *)(this + 5348)
    || *(_DWORD *)(this + 5368) != *(_DWORD *)(this + 5352)
    || !Render_Render_660530()
    || *(int *)(this + 4716) > 0
    || *(int *)(this + 4660) > 0
    || HouseClass::ProcessData(dword_89C3B0) )
  {
    if ( v86 ) /*0x6571cf*/
      *(_BYTE *)(this + 5337) = 0; /*0x6571d1*/
    Surface::RenderRadar((_DWORD *)this); /*0x6571da*/
    v87 = 0; /*0x6571ea*/
    if ( *(_DWORD *)(this + 5356) != *v14 /*0x657216*/
      || *(_DWORD *)(this + 5360) != *(_DWORD *)(this + 5344)
      || *(_DWORD *)(this + 5364) != *(_DWORD *)(this + 5348)
      || *(_DWORD *)(this + 5368) != *(_DWORD *)(this + 5352) )
    {
      for ( i = 0; i < *(_DWORD *)(this + 5368); ++i ) /*0x657226*/
      {
        v24 = *(_DWORD *)(this + 5280); /*0x657236*/
        v25 = i + *(_DWORD *)(this + 5360); /*0x65723e*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 5356) - *v9; /*0x657240*/
        *(_DWORD *)&v96[4] = v25 - v24; /*0x65724d*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657251*/
        v26 = i + *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x65727c*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 5364) + *(_DWORD *)(this + 5356) - 1 - *v9; /*0x65727e*/
        *(_DWORD *)&v96[4] = v26; /*0x657285*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657289*/
      }
      for ( j = 0; j < *(_DWORD *)(this + 5364); ++j ) /*0x6572a3*/
      {
        v28 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572bd*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x6572bf*/
        *(_DWORD *)v96 = v28; /*0x6572c3*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x6572ce*/
        v29 = *(_DWORD *)(this + 5280); /*0x6572eb*/
        v30 = *(_DWORD *)(this + 5360) + *(_DWORD *)(this + 5368) - 1; /*0x6572f1*/
        *(_DWORD *)v96 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572f5*/
        *(_DWORD *)&v96[4] = v30 - v29; /*0x6572ff*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657306*/
      }
      v2 = v95; /*0x657316*/
      v87 = 1; /*0x65731a*/
    }
    v31 = (int *)(this + 4680); /*0x657325*/
    if ( *(int *)(this + 4688) > 0 && *(int *)(this + 4692) > 0 ) /*0x657338*/
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)(this + 4636) + 8))( /*0x657353*/
        *(_DWORD *)(this + 4636),
        this + 4680,
        *(_DWORD *)(this + 4640),
        this + 4680,
        0,
        1);
      v32 = *(_DWORD *)(this + 5280); /*0x65735b*/
      v33 = *v9 + *v31; /*0x65735e*/
      v34 = *(_DWORD *)(this + 4684); /*0x657360*/
      *(_DWORD *)v96 = v33; /*0x657363*/
      v35 = v32 + v34; /*0x657367*/
      v36 = *(_DWORD *)(this + 4692); /*0x657369*/
      v37 = *(_DWORD *)(v2 + 8) <= 0; /*0x65736c*/
      *(_DWORD *)&v96[4] = v35; /*0x657370*/
      v38 = *(_DWORD *)(this + 4688); /*0x657374*/
      v90 = v36; /*0x657377*/
      v89 = v38; /*0x65737b*/
      if ( v37 || *(int *)(v2 + 12) <= 0 ) /*0x657389*/
      {
        v42 = v90; /*0x657478*/
      }
      else if ( v38 <= 0 || v36 <= 0 ) /*0x657399*/
      {
        v33 = *(_DWORD *)v2; /*0x65745f*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(v2 + 4); /*0x657464*/
        v38 = *(_DWORD *)(v2 + 8); /*0x657468*/
        v42 = *(_DWORD *)(v2 + 12); /*0x65746b*/
      }
      else
      {
        v91 = *(int *)v2; /*0x6573a3*/
        v92 = *(ConvertClass **)(v2 + 4); /*0x6573aa*/
        v39 = *(_DWORD *)(v2 + 8); /*0x6573ae*/
        v93 = v39; /*0x6573b1*/
        v94 = *(_DWORD *)(v2 + 12); /*0x6573b8*/
        if ( v91 > v33 ) /*0x6573c2*/
        {
          v40 = v91 - v33; /*0x6573c4*/
          v91 = v33; /*0x6573c6*/
          v93 = v40 + v39; /*0x6573cc*/
        }
        if ( (int)v92 > *(int *)&v96[4] ) /*0x6573da*/
        {
          v94 += (int)&v92->__pad_0[-*(_DWORD *)&v96[4]]; /*0x6573e4*/
          v92 = *(ConvertClass **)&v96[4]; /*0x6573ec*/
        }
        if ( v91 + v93 < v89 + v33 ) /*0x657403*/
          v93 = v89 - v91 + *(_DWORD *)v96 + 1; /*0x657413*/
        if ( (int)&v92->__pad_0[v94] >= *(_DWORD *)&v96[4] + v90 ) /*0x65742d*/
        {
          v42 = v94; /*0x65744b*/
          v33 = v91; /*0x65744f*/
          *(_DWORD *)&v96[4] = v92; /*0x657453*/
          v38 = v93; /*0x657457*/
        }
        else
        {
          v41 = *(_DWORD *)&v96[4]; /*0x657433*/
          *(_DWORD *)&v96[4] = v92; /*0x657439*/
          v38 = v93; /*0x65743d*/
          v42 = v90 - (_DWORD)v92 + v41 + 1; /*0x657441*/
          v33 = v91; /*0x657445*/
        }
      }
      *(_DWORD *)v2 = v33; /*0x65747c*/
      *(_DWORD *)(v2 + 4) = *(_DWORD *)&v96[4]; /*0x657482*/
      v88 = *v31; /*0x657488*/
      v43 = v88; /*0x657485*/
      *(_DWORD *)(v2 + 8) = v38; /*0x65748c*/
      v44 = v43 + *(_DWORD *)(this + 4688); /*0x657495*/
      v45 = -*(_DWORD *)(this + 4688) < 0; /*0x657497*/
      *(_DWORD *)(v2 + 12) = v42; /*0x657499*/
      if ( v45 != __OFSUB__(v43, v44) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v46 = *(_DWORD *)(this + 4684); /*0x65749e*/
          if ( v46 < v46 + *(_DWORD *)(this + 4692) ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              *(_DWORD *)v96 = v88; /*0x6574bb*/
              *(_DWORD *)&v96[4] = v46; /*0x6574bf*/
              FogOfWar::RevealArea(this, (RadarClass *)v96); /*0x6574c3*/
              ++v46; /*0x6574d4*/
            }
            while ( v46 < *(_DWORD *)(this + 4684) + *(_DWORD *)(this + 4692) ); /*0x6574d9*/
          }
          v47 = *(_DWORD *)(this + 4688) + *v31; /*0x6574e9*/
          ++v88; /*0x6574eb*/
        }
        while ( v88 < v47 ); /*0x6574f1*/
      }
      *v31 = 0; /*0x6574f9*/
      *(_DWORD *)(this + 4684) = 0; /*0x6574fe*/
      *(_DWORD *)(this + 4688) = 0; /*0x657501*/
      *(_DWORD *)(this + 4692) = 0; /*0x657504*/
      v2 = v95; /*0x657507*/
    }
    for ( k = *(_DWORD *)(this + 4716) - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea(this, (RadarClass *)(*(_DWORD *)(this + 4704) + 8 * k)); /*0x657520*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4700) + 12))(this + 4700); /*0x657534*/
    Render_Render_660000(); /*0x657537*/
    v49 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4636) + 120))( /*0x657549*/
                   *(_DWORD *)(this + 4636),
                   v96);
    HouseClass::Render(dword_89C3B0, *(_DWORD *)(this + 4636), *v49, v49[1], v49[2], v49[3]); /*0x657573*/
    if ( v86 ) /*0x65757e*/
    {
      if ( *(_BYTE *)(this + 5338) ) /*0x657584*/
      {
        v50 = VtableStub::72F510(); /*0x657595*/
        *(_DWORD *)v2 = *v9; /*0x65759b*/
        *(_DWORD *)(v2 + 4) = *(_DWORD *)(this + 5280); /*0x6575a0*/
        *(_DWORD *)(v2 + 8) = *(_DWORD *)(this + 5284); /*0x6575a6*/
        *(_DWORD *)(v2 + 12) = *(_DWORD *)(this + 5288); /*0x6575af*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 4580); /*0x6575ba*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 4588); /*0x6575d7*/
        v51 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 120))( /*0x6575e2*/
                       *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396],
                       &v88);
        DrawToSurfaceSHP( /*0x6575fc*/
          *(int *)&MEMORY[0x87F8E4].__pad_5568[9396],
          v50,
          (int)MEMORY[0xB04A38],
          0x20u,
          (int *)v96,
          v51,
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
      }
      if ( *(int *)(v2 + 8) > 0 && *(int *)(v2 + 12) > 0 ) /*0x65760d*/
      {
        v52 = *(_DWORD *)(v2 + 8); /*0x65761e*/
        v53 = *(_DWORD *)(v2 + 4) - *(_DWORD *)(this + 5280); /*0x657621*/
        v54 = *(_DWORD *)(v2 + 12); /*0x657623*/
        *(_DWORD *)v96 = *(_DWORD *)v2 - *v9; /*0x657626*/
        *(_DWORD *)&v96[4] = v53; /*0x657630*/
        v55 = *(_DWORD *)(this + 4636); /*0x65763d*/
        *(_DWORD *)&v96[8] = v52; /*0x657643*/
        *(_DWORD *)&v96[12] = v54; /*0x657647*/
        (*(void (__thiscall **)(_DWORD, int, int, _BYTE *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] /*0x65764f*/
                                                                       + 8))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396],
          v2,
          v55,
          v96,
          0,
          1);
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 88))( /*0x657668*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396],
        this + 5340,
        *(_DWORD *)(this + 4616));
      v56 = *v9; /*0x65766b*/
      v57 = *(_DWORD *)(this + 5280); /*0x65766d*/
      v58 = *(_DWORD *)(this + 5284); /*0x657670*/
      v59 = *(_DWORD *)(this + 5288); /*0x657673*/
      v91 = v56 - 1; /*0x657678*/
      v60 = *(_DWORD *)(this + 4616); /*0x65767c*/
      v92 = (ConvertClass *)(v57 - 1); /*0x657682*/
      v93 = v58 + 2; /*0x657693*/
      v94 = v59 + 2; /*0x657697*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 88))( /*0x6576a2*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396],
        &v91,
        v60);
    }
    if ( !v87 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *(int *)(this + 5364) <= 0 || *(int *)(this + 5368) <= 0 ) /*0x6576ca*/
    {
      v71 = (int *)v2; /*0x65775f*/
    }
    else
    {
      if ( *(int *)(v2 + 8) > 0 && *(int *)(v2 + 12) > 0 ) /*0x6576e0*/
      {
        v61 = *(_DWORD *)(this + 5356); /*0x6576e4*/
        v62 = *(_DWORD *)(this + 5360); /*0x6576e6*/
        v63 = *(_DWORD *)(this + 5364); /*0x6576e9*/
        *(_DWORD *)&v96[8] = v63; /*0x6576ec*/
        *(_DWORD *)&v96[12] = *(_DWORD *)(this + 5368); /*0x6576f3*/
        v64 = *(_DWORD *)v2; /*0x6576f7*/
        if ( v61 > *(_DWORD *)v2 ) /*0x6576fb*/
        {
          v65 = v61 - v64 + v63; /*0x6576ff*/
          v61 = *(_DWORD *)v2; /*0x657701*/
          *(_DWORD *)&v96[8] = v65; /*0x657703*/
        }
        v66 = *(_DWORD *)(v2 + 4); /*0x657707*/
        if ( v62 > v66 ) /*0x65770c*/
        {
          v67 = v62 - v66 + *(_DWORD *)&v96[12]; /*0x657714*/
          v62 = *(_DWORD *)(v2 + 4); /*0x657716*/
          *(_DWORD *)&v96[12] = v67; /*0x657718*/
        }
        if ( v61 + *(_DWORD *)&v96[8] < v64 + *(_DWORD *)(v2 + 8) ) /*0x657729*/
          *(_DWORD *)&v96[8] = v64 - v61 + *(_DWORD *)(v2 + 8) + 1; /*0x657734*/
        v68 = *(_DWORD *)(v2 + 4) + *(_DWORD *)(v2 + 12); /*0x65773e*/
        v69 = *(_DWORD *)&v96[12]; /*0x657741*/
        if ( *(_DWORD *)&v96[12] + v62 < v68 ) /*0x65774a*/
          v69 = v68 - v62 + 1; /*0x65774f*/
        v70 = *(_DWORD *)&v96[8]; /*0x657751*/
        v93 = *(_DWORD *)&v96[8]; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v71 = (int *)(this + 5356); /*0x65775b*/
    }
    v61 = *v71; /*0x657761*/
    v62 = v71[1]; /*0x657763*/
    v70 = v71[2]; /*0x657766*/
    v93 = v70; /*0x657769*/
    v69 = v71[3]; /*0x65776d*/
LABEL_84:
    v37 = *(_DWORD *)(this + 5348) <= 0; /*0x657770*/
    v72 = (int *)(this + 5340); /*0x657777*/
    v94 = v69; /*0x65777d*/
    if ( !v37 && *(int *)(this + 5352) > 0 ) /*0x65778b*/
    {
      if ( v70 <= 0 || v69 <= 0 ) /*0x65779b*/
      {
        v61 = *v72; /*0x657823*/
        v62 = *(_DWORD *)(this + 5344); /*0x657826*/
        v70 = *(_DWORD *)(this + 5348); /*0x657829*/
        v69 = *(_DWORD *)(this + 5352); /*0x65782c*/
      }
      else
      {
        v73 = *v72; /*0x6577a1*/
        v37 = *v72 <= v61; /*0x6577a4*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 5344); /*0x6577a9*/
        *(_DWORD *)&v96[8] = *(_DWORD *)(this + 5348); /*0x6577b0*/
        *(_DWORD *)&v96[12] = *(_DWORD *)(this + 5352); /*0x6577b7*/
        if ( !v37 ) /*0x6577bb*/
        {
          v74 = v73 - v61 + *(_DWORD *)&v96[8]; /*0x6577c3*/
          v73 = v61; /*0x6577c5*/
          *(_DWORD *)&v96[8] = v74; /*0x6577c7*/
        }
        if ( *(int *)&v96[4] > v62 ) /*0x6577d1*/
        {
          v75 = *(_DWORD *)&v96[4] - v62 + *(_DWORD *)&v96[12]; /*0x6577d9*/
          *(_DWORD *)&v96[4] = v62; /*0x6577db*/
          *(_DWORD *)&v96[12] = v75; /*0x6577df*/
        }
        if ( v73 + *(_DWORD *)&v96[8] < v61 + v93 ) /*0x6577f1*/
          *(_DWORD *)&v96[8] = v61 - v73 + v93 + 1; /*0x6577fd*/
        v69 = *(_DWORD *)&v96[12]; /*0x657805*/
        v76 = v62 + v94; /*0x657809*/
        v62 = *(_DWORD *)&v96[4]; /*0x65780b*/
        if ( *(_DWORD *)&v96[12] + *(_DWORD *)&v96[4] < v76 ) /*0x657814*/
          v69 = v76 - *(_DWORD *)&v96[4] + 1; /*0x657819*/
        v61 = v73; /*0x65781b*/
        v70 = *(_DWORD *)&v96[8]; /*0x65781d*/
      }
    }
    *(_DWORD *)v2 = v61; /*0x657831*/
    *(_DWORD *)(v2 + 4) = v62; /*0x657834*/
    *(_DWORD *)(v2 + 8) = v70; /*0x657837*/
    *(_DWORD *)(v2 + 12) = v69; /*0x65783a*/
LABEL_99:
    v77 = *(_DWORD *)(this + 5344); /*0x65783d*/
    v78 = *(_DWORD *)(this + 5348); /*0x657849*/
    *(_DWORD *)(this + 5356) = *(_DWORD *)(this + 5340); /*0x65784f*/
    v79 = *(_DWORD *)(this + 5352); /*0x657855*/
    *(_DWORD *)(this + 5360) = v77; /*0x65785b*/
    *(_DWORD *)(this + 5364) = v78; /*0x657861*/
    *(_DWORD *)(this + 5368) = v79; /*0x657867*/
    Render_Render_6603B0(); /*0x65786d*/
  }
  if ( *(_DWORD *)(this + 4724) ) /*0x657872*/
  {
    *(_DWORD *)v96 = *(_DWORD *)(this + 4636); /*0x657884*/
    v80 = *(_DWORD *)v96; /*0x657882*/
    v81 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v96 + 128))(*(_DWORD *)v96); /*0x657896*/
    memset(*(void **)(this + 4724), 0, v81 * (*(int (__thiscall **)(int))(*(_DWORD *)v80 + 124))(v80) / 8 + 1); /*0x6578b7*/
  }
  LOBYTE(v82) = v86; /*0x6578c0*/
  if ( !v86 ) /*0x6578c6*/
  {
    v83 = *(_DWORD *)&v96[20]; /*0x6578cc*/
    v84 = *(_DWORD *)&v96[24]; /*0x6578d0*/
    *(_DWORD *)v2 = *(_DWORD *)&v96[16]; /*0x6578d4*/
    v82 = *(_DWORD *)&v96[28]; /*0x6578d6*/
    *(_DWORD *)(v2 + 4) = v83; /*0x6578da*/
    *(_DWORD *)(v2 + 8) = v84; /*0x6578dd*/
    *(_DWORD *)(v2 + 12) = v82; /*0x6578e0*/
  }
  return v82; /*0x6578e3*/
}


// ==== 0x006578F0  TacticalClass::ProcessChronoEffect  this=TacticalClass  sig=csp ====
void __thiscall sub_6578F0(int this)
{
  int v2; // eax
  int v3; // eax
  int **v4; // esi
  _DWORD *v5; // eax

  v2 = *(_DWORD *)(this + 5304); /*0x6578f3*/
  if ( v2 ) /*0x6578fc*/
  {
    v3 = v2 - 1; /*0x657902*/
    if ( v3 ) /*0x657903*/
    {
      if ( v3 != 1 ) /*0x657906*/
        return; /*0x657906*/
      if ( g_AsyncIOState ) /*0x657913*/
      {
        if ( !sub_408410() ) /*0x65791c*/
          return; /*0x65791c*/
        if ( g_AsyncIOState ) /*0x657929*/
        {
          ChronoScreenEffect::DecrementCounter(); /*0x65792b*/
          Map_Process(); /*0x657930*/
        }
      }
      RadarClass::SetViewMode(this, 3, 0); /*0x65793b*/
      v4 = (int **)(this + 5312); /*0x657940*/
      Mixer::ReleaseChannel(v4); /*0x657948*/
      v5 = (_DWORD *)PlayVocClass(MEMORY[0x8871E0]->?[1], 0x2000, 1.0, 0); /*0x657966*/
      SetAudioSource((int)v4, v5, 0); /*0x65796f*/
      RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateMovie); /*0x65797e*/
    }
    else if ( globalHelper_0532A0(*(std::codecvt_base **)(this + 5332)) ) /*0x657989*/
    {
      if ( g_AsyncIOState ) /*0x657999*/
        sub_408390(); /*0x65799b*/
      *(_DWORD *)(this + 5304) = 2; /*0x6579a0*/
    }
  }
  else
  {
    ThemeClass::ClearQueues(); /*0x6579ac*/
    UpdateThemeManager(*(_DWORD *)(this + 5332), 0, 3); /*0x6579bb*/
    Map_Process_753570(); /*0x6579c0*/
    *(_DWORD *)(this + 5304) = 1; /*0x6579c5*/
  }
}


// ==== 0x006579E0  Game::ManageGameSpeed  this=RadarClass  sig=csp ====
unsigned __int8 __thiscall ManageGameSpeed(int this)
{
  _BYTE *v2; // ecx
  char v3; // al
  bool v4; // bl
  int v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  unsigned __int8 result; // al
  bool v15; // zf
  char v16; // [esp+12h] [ebp-1Eh]
  unsigned __int8 v17; // [esp+13h] [ebp-1Dh]
  _BYTE *v18; // [esp+14h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v20[16]; // [esp+20h] [ebp-10h] BYREF

  v2 = 0; /*0x6579ef*/
  v3 = *(_BYTE *)(this + 5309); /*0x6579f1*/
  v18 = 0; /*0x6579f7*/
  v4 = g_AsyncIOState > 0; /*0x6579fd*/
  v17 = 0; /*0x657a02*/
  if ( !v3 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    Audio::IsPlaying(); /*0x657a0c*/
    v2 = v18; /*0x657a11*/
  }
  if ( *(_BYTE *)(this + 5338) == 1 && !*(_BYTE *)(this + 5309) ) /*0x657a22*/
  {
    v5 = VtableStub::72F510(); /*0x657a35*/
    v19[0] = *(_DWORD *)(this + 4580); /*0x657a4d*/
    v19[1] = *(_DWORD *)(this + 4588); /*0x657a5f*/
    v6 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v20); /*0x657a6a*/
    DrawToSurfaceSHP(MEMORY[0x887300], v5, MEMORY[0xB04A38], 0x20u, v19, v6, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v7 = *(_DWORD *)(this + 4588); /*0x657a95*/
    *(_DWORD *)(this + 4620) = *(_DWORD *)(this + 4580); /*0x657aab*/
    *(_DWORD *)(this + 4624) = v7; /*0x657aae*/
    *(_DWORD *)(this + 4628) = 168; /*0x657ab1*/
    *(_DWORD *)(this + 4632) = 110; /*0x657ab4*/
    Debug::Log(); /*0x657ab7*/
    v2 = v18; /*0x657abc*/
  }
  if ( !v4 ) /*0x657ac5*/
  {
    v16 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  if ( g_AsyncIOState <= 0 || (v2 = *(_BYTE **)AsyncIO_Instance, (v18 = *(_BYTE **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v16 = 1; /*0x657cb4*/
LABEL_13:
    if ( v2 ) /*0x657b40*/
    {
      v10 = (*(int (__thiscall **)(int *, _BYTE **))(dword_B45B58 + 16))(&dword_B45B58, &v18); /*0x657b52*/
      if ( v10 != -1 && v10 < g_AsyncIOState && v10 < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++v10; /*0x657b75*/
          *((_DWORD *)AsyncIO_Instance + v10 - 1) = *((_DWORD *)AsyncIO_Instance + v10); /*0x657b79*/
        }
        while ( v10 < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v18 ) /*0x657b8d*/
        (**(void (__thiscall ***)(_BYTE *, int))v18)(v18, 1); /*0x657b93*/
    }
    v4 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel((int **)(this + 5312)); /*0x657bb9*/
      v11 = (_DWORD *)PlayVocClass(MEMORY[0x8871E0]->?[1], 0x2000, 1.0, 0); /*0x657bd8*/
      SetAudioSource(this + 5312, v11, 0); /*0x657be1*/
      *(_DWORD *)(this + 5292) = 4; /*0x657be6*/
      *(_DWORD *)(this + 5372) = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 4))(v2) == 1 ) /*0x657af3*/
  {
    v8 = *(_DWORD *)(this + 4588); /*0x657b01*/
    *(_DWORD *)(this + 4620) = *(_DWORD *)(this + 4580); /*0x657b12*/
    *(_DWORD *)(this + 4624) = v8; /*0x657b15*/
    *(_DWORD *)(this + 4628) = 168; /*0x657b18*/
    *(_DWORD *)(this + 4632) = 110; /*0x657b1b*/
  }
  v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 20))(v18); /*0x657b24*/
  v2 = v18; /*0x657b27*/
  v16 = v9; /*0x657b2d*/
  v17 = v18[4]; /*0x657b34*/
  if ( v9 == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
LABEL_22:
  *(_BYTE *)(this + 5337) = 0; /*0x657bfa*/
  if ( !v4 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v12 = *(_DWORD *)(this + 5300); /*0x657c0f*/
    *(_DWORD *)(this + 5292) = 5; /*0x657c1a*/
    RadarClass::SetViewMode(this, v12, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v17 = 0; /*0x657c37*/
    Mixer::ReleaseChannel((int **)(this + 5312)); /*0x657c3d*/
    v13 = (_DWORD *)PlayVocClass(MEMORY[0x8871E0]->?[2], 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource(this + 5312, v13, 0); /*0x657c64*/
    RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateNormal); /*0x657c71*/
    *(_BYTE *)(this + 5337) = 1; /*0x657c76*/
  }
  result = v17; /*0x657c81*/
  v15 = *(_BYTE *)(this + 5308) == v17; /*0x657c90*/
  *(_BYTE *)(this + 5309) = v16 == 0; /*0x657c92*/
  if ( !v15 ) /*0x657c98*/
  {
    if ( v17 ) /*0x657c9c*/
    {
      result = (unsigned __int8)SetScenarioClassTimer(0); /*0x657ca0*/
      *(_BYTE *)(this + 5308) = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned __int8)ScenarioClass::ProcessIntroTimer(); /*0x657cc8*/
      *(_BYTE *)(this + 5308) = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/
}


// ==== 0x00657CE0  FogOfWar::Render  this=FogOfWar  sig=csp ====
int __thiscall FogOfWar::Render(int **this)
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
  _DWORD v11[6]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[8]; // [esp+2Ch] [ebp-8h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    v7 = (*(int (__thiscall **)(_DWORD))(**(this + 1159) + 124))(*(this + 1159)); /*0x657d4e*/
    result = (*(int (__thiscall **)(_DWORD))(**(this + 1159) + 128))(*(this + 1159)); /*0x657d52*/
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
          FogOfWar::RevealArea((int)this, (RadarClass *)v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    v2 = *(this + 1159); /*0x657cf2*/
    v3 = *v2; /*0x657d06*/
    v4 = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**(this + 1160) + 120))(*(this + 1160), v11, 0, 1); /*0x657d0d*/
    v5 = (*(int (__thiscall **)(int *, _BYTE *, _DWORD, int))(*v2 + 120))(v2, v12, *(this + 1160), v4); /*0x657d21*/
    (*(void (__thiscall **)(_DWORD, int))(v3 + 8))(*(this + 1159), v5); /*0x657d2b*/
    return FogOfWar::RenderCell((int)this); /*0x657d30*/
  }
  return result; /*0x657d35*/
}


// ==== 0x00657DA0  Diplomacy::DlgProc  this=unknown  sig=csp ====
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
        DlgItem = GetDlgItem(hDlg, *(int *)((char *)&MEMORY[0x8391FC] + i)); /*0x657dfb*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x657e10*/
        v8 = GetDlgItem(hDlg, *(int *)((char *)&MEMORY[0x83921C] + i)); /*0x657e1a*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x657e29*/
      }
      v40 = 0; /*0x657e3e*/
      v39 = 0; /*0x657e43*/
      v33 = HouseClass_Count; /*0x657e48*/
      v32 = 1; /*0x657e4c*/
      v38 = 0; /*0x657e54*/
      do /*0x65807d*/
      {
        v9 = GetDlgItem(hDlg, MEMORY[0x839240][v38]); /*0x657e6a*/
        hWnd = GetDlgItem(hDlg, MEMORY[0x839260][v38]); /*0x657e84*/
        v10 = v32; /*0x657e8b*/
        v31 = v32; /*0x657e8d*/
        if ( v32 == *((_DWORD *)HouseClass_Player + 12) ) /*0x657e91*/
        {
          v31 = 0; /*0x657e93*/
          v10 = 0; /*0x657e9b*/
        }
        if ( v10 < v33 /*0x657ec1*/
          && (v11 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v10], (hDlga = (#375 *)v11) != 0)
          && *(_BYTE *)(*(_DWORD *)(v11 + 52) + 421) )
        {
          if ( !BYTE1(MEMORY[0x8871E0][1].InfantryBrute) /*0x657ef9*/
            || (#375 *)MEMORY[0xAC1198] == HouseClass_Player
            || MEMORY[0xA8B244] == 2 )
          {
            ShowWindow(v9, 0); /*0x657f73*/
          }
          else
          {
            Diplomacy_Helper(v9); /*0x657eff*/
            IsAlliedWith = HouseClass::IsAlliedWith(HouseClass_Player, hDlga); /*0x657f16*/
            SendMessageA(v9, 0xF1u, IsAlliedWith, 0); /*0x657f2b*/
            HouseClass::IsAlliedWith(hDlga, HouseClass_Player); /*0x657f3c*/
            globalHelper_003DD0(v9); /*0x657f45*/
            v40 = 1; /*0x657f4f*/
            if ( MEMORY[0xA8B538] || !(unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f5c*/
              EnableWindow(v9, 0); /*0x657f68*/
          }
          if ( (unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f79*/
          {
            if ( MEMORY[0xA8B538] ) /*0x657f97*/
            {
              SendMessageA(hWnd, 0xF1u, 1u, 0); /*0x657fcc*/
              EnableWindow(hWnd, 0); /*0x657fd5*/
            }
            else
            {
              SendMessageA(hWnd, 0xF1u, *((unsigned __int8 *)&MEMORY[0xA8D108] + v31), 0); /*0x657fb0*/
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
          hDlgc = GetDlgItem(hDlg, MEMORY[0x839200][v38]); /*0x658015*/
          EnableWindow(hDlgc, 0); /*0x658019*/
          ShowWindow(hDlgc, 0); /*0x658026*/
          EnableWindow(v9, 0); /*0x65802b*/
          ShowWindow(v9, 0); /*0x658034*/
          EnableWindow(hWnd, 0); /*0x65803d*/
          ShowWindow(hWnd, 0); /*0x658046*/
          v13 = GetDlgItem(hDlg, MEMORY[0x839220][v38]); /*0x658056*/
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
        if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x6580c8*/
        {
          ShowWindow(v17, 5); /*0x6580d4*/
          if ( MEMORY[0xA8B238][0] == 3 ) /*0x6580de*/
          {
            SendMessageA(v17, 0xF1u, (unsigned __int8)MEMORY[0xA8D110], 0); /*0x6580ef*/
          }
          else if ( MEMORY[0xA8B238][0] == 4 ) /*0x6580f4*/
          {
            SendMessageA(v17, 0xF1u, BYTE1(MEMORY[0xA8D110]), 0); /*0x658106*/
          }
        }
        else
        {
          ShowWindow(v17, 0); /*0x6580cd*/
        }
      }
      DrawPowerBarForPlayers(hDlg); /*0x658112*/
      if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x658124*/
      {
        v18 = GetDlgItem(hDlg, 1062); /*0x658134*/
        v19 = WideString::GetOrEmpty_Alt((wchar_t **)(MEMORY[0xA8B23C] + 32)); /*0x658139*/
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
  v22 = &MEMORY[0x83923C]; /*0x6581e1*/
  while ( *v22 != DlgCtrlID ) /*0x6581e8*/
  {
    if ( (int)++v22 >= (int)&MEMORY[0x83925C] ) /*0x6581f3*/
    {
      v23 = &MEMORY[0x83925C]; /*0x6581f5*/
      while ( *v23 != DlgCtrlID ) /*0x6581fc*/
      {
        if ( (int)++v23 >= (int)MEMORY[0x83927C] ) /*0x658207*/
        {
          if ( DlgCtrlID == 1840 ) /*0x6582d8*/
          {
            v29 = HIWORD(a3); /*0x6582da*/
            if ( HIWORD(a3) <= 1u ) /*0x6582e0*/
            {
              if ( MEMORY[0xA8B238][0] == 3 ) /*0x6582ee*/
              {
                LOBYTE(MEMORY[0xA8D110]) = v29 == 1; /*0x6582f9*/
                return 0; /*0x658305*/
              }
              if ( MEMORY[0xA8B238][0] == 4 ) /*0x65830b*/
                BYTE1(MEMORY[0xA8D110]) = v29 == 1; /*0x658313*/
            }
          }
          return 0; /*0x658313*/
        }
      }
      if ( HIWORD(a3) != 1 && HIWORD(a3) ) /*0x65828e*/
        return 0; /*0x65828e*/
      v27 = &MEMORY[0x83925C]; /*0x658298*/
      v28 = 0; /*0x6582a0*/
      while ( *v27 != DlgCtrlID ) /*0x6582a4*/
      {
        ++v27; /*0x6582a6*/
        ++v28; /*0x6582a9*/
        if ( (int)v27 >= (int)MEMORY[0x83927C] ) /*0x6582b0*/
        {
          v28 = -1; /*0x6582b2*/
          break; /*0x6582b2*/
        }
      }
      if ( v28 == *((_DWORD *)HouseClass_Player + 12) ) /*0x6582bd*/
        v28 = 0; /*0x6582bf*/
      *((_BYTE *)&MEMORY[0xA8D108] + v28) = HIWORD(a3) == 1; /*0x6582c3*/
      return 0; /*0x6582d0*/
    }
  }
  if ( HIWORD(a3) > 1u ) /*0x658214*/
    return 0; /*0x658214*/
  v24 = 0; /*0x65821e*/
  v25 = &MEMORY[0x83923C]; /*0x658220*/
  while ( *v25 != DlgCtrlID ) /*0x658227*/
  {
    ++v25; /*0x658229*/
    ++v24; /*0x65822c*/
    if ( (int)v25 >= (int)&MEMORY[0x83925C] ) /*0x658233*/
    {
      v26 = -1; /*0x658235*/
      goto LABEL_60; /*0x658235*/
    }
  }
  v26 = v24; /*0x65824e*/
LABEL_60:
  if ( v26 == *((_DWORD *)HouseClass_Player + 12) ) /*0x658241*/
    v26 = 0; /*0x658243*/
  if ( HIWORD(a3) ) /*0x65820e*/
    SendMessageA(a4, 0xF1u, 0, 0); /*0x658261*/
  else
    SendMessageA(a4, 0xF1u, 1u, 0); /*0x65824c*/
  SquadClass::ProcessMove(v26); /*0x658269*/
  return 0; /*0x658178*/
}


// ==== 0x00658330  TabClass::DrawPower  this=int  sig=csp ====
LRESULT __stdcall TabClass::DrawPower(HWND hDlg, void *a1, AbstractClass *aP2)
{
  int v3; // ebp
  int v4; // edi
  int BuildingAnimByName; // eax
  int v6; // eax
  LPARAM v7; // esi
  HWND DlgItem; // edi
  int ResourceIDHardcodedCSF; // eax
  wchar_t *v10; // eax
  int uniqueId; // edx
  HWND Default; // eax
  wchar_t *v13; // eax
  unsigned __int8 IsAlliedWith; // al
  HWND eax18; // eax
  IUnknown *v15; // edi
  const wchar_t *v17; // eax
  int *p_abstractFlags; // ebx
  int v19; // ecx
  int edx22; // edx
  wchar_t *v20; // edi
  HWND v23; // eax
  HWND v24; // eax
  CampaignScore *v25; // [esp+0h] [ebp-E8h]
  wchar_t *hWnd; // [esp+10h] [ebp-D8h] BYREF
  __int16 v27; // [esp+14h] [ebp-D4h]
  unsigned __int8 v28; // [esp+16h] [ebp-D2h]
  int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF

  v3 = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13408]; /*0x658346*/
  v4 = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13376]; /*0x65834f*/
  nIDDlgItem = v3; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( aP2 && *(_BYTE *)(aP2[1].uniqueId + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)&aP2[2504].__pad_0[10]); /*0x658386*/
    if ( aP2 == (AbstractClass *)*(&g_MatrixTransformState + 2274) ) /*0x658395*/
    {
      BuildingAnimByName = FindBuildingAnimByName((AbstractClass *)&stru_830620.__pad_579C[4368], 1); /*0x6583a1*/
    }
    else if ( BYTE1(aP2[13].NeedsSaveOrLink) ) /*0x6583a8*/
    {
      BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x6583bc*/
    }
    else
    {
      BuildingAnimByName = *(_DWORD *)(stru_B05488.field_4C + 4 * aP2[2505].uniqueId); /*0x6583cf*/
    }
    v6 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&hWnd); /*0x6583dd*/
    v27 = *(_WORD *)v6; /*0x6583e6*/
    v28 = *(_BYTE *)(v6 + 2); /*0x6583ee*/
    v7 = (unsigned __int8)v27 | ((HIBYTE(v27) | (v28 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem(hDlg, v4); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v7); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(a1); /*0x658452*/
    v10 = (wchar_t *)GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x658460*/
    uniqueId = aP2[1].uniqueId; /*0x658466*/
    hWnd = v10; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(void **)(uniqueId + 180)); /*0x658473*/
    if ( aP2 == (AbstractClass *)*(&g_MatrixTransformState + 2274) ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((void *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate((HWND)hWnd, Default); /*0x658490*/
    if ( *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13440] != -1 ) /*0x65849f*/
    {
      v13 = (wchar_t *)GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13440]); /*0x6584ae*/
      hWnd = v13; /*0x6584ba*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x6584c0*/
      {
        EnableWindow((HWND)v13, 0); /*0x6584c5*/
        v13 = hWnd; /*0x6584cb*/
      }
      if ( BYTE1(aP2[13].NeedsSaveOrLink) ) /*0x6584cf*/
      {
        ShowWindow((HWND)v13, 0); /*0x6584dc*/
      }
      else
      {
        LOBYTE(v27) = HouseClass::IsAlliedWith((void *)HouseClass_Player.field_0, (IUnknown *)aP2); /*0x6584f4*/
        SendMessageA((HWND)hWnd, 0xF1u, (unsigned __int8)v27, 0); /*0x65850b*/
      }
      IsAlliedWith = HouseClass::IsAlliedWith(aP2, (IUnknown *)HouseClass_Player.field_0); /*0x658515*/
      globalHelper_003DD0((HWND)hWnd, IsAlliedWith); /*0x658520*/
    }
    if ( aP2[16].__pad_0[8] ) /*0x658525*/
    {
      eax18 = GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13472]); /*0x65853f*/
      ShowWindow(eax18, 0); /*0x658548*/
    }
    else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x658557*/
    {
      v15 = (IUnknown *)GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13472]); /*0x658571*/
      SendMessageA((HWND)v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow((HWND)v15, 0); /*0x658580*/
    }
    v17 = 0; /*0x658586*/
    p_abstractFlags = &aP2[596].abstractFlags; /*0x658588*/
    v19 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      edx22 = *p_abstractFlags + p_abstractFlags[21]; /*0x658598*/
      ++p_abstractFlags; /*0x65859a*/
      v17 = (const wchar_t *)((char *)v17 + edx22); /*0x65859d*/
      --v19; /*0x65859f*/
    }
    while ( v19 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v17, v25); /*0x6585ad*/
    v20 = (wchar_t *)GetDlgItem(hDlg, nIDDlgItem); /*0x6585c9*/
    SendMessageA((HWND)v20, 0x498u, 0, v7); /*0x6585d3*/
    return SendMessageA((HWND)v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v23 = GetDlgItem(hDlg, v4); /*0x658600*/
    SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v24 = GetDlgItem(hDlg, v3); /*0x658619*/
    return SendMessageA(v24, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }
}


// ==== 0x00658640  ObjectClass::DrawPowerBarForPlayers  this=int  sig=csp ====
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


// ==== 0x006586D0  ObjectClass::ShowDiplomacyDialog  this=ObjectClass  sig=csp ====
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


// ==== 0x00658770  RadarClass::Destru_vt33  this=RadarClass  sig=csp ====
wchar_t *__thiscall RadarClass::Destru_vt33(_DWORD *this, int a2)
{
  return DisplayClass::Draw(this, a2); /*0x65877a*/
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
RadarClass *__thiscall RadarClass::Destru_vt04(_DWORD *Block, char a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax

  *Block = &vt_RadarClass; /*0x6587ac*/
  AudioFileClass::Release(Block + 1328); /*0x6587b2*/
  TacticalClass::FreeResources((int)Block); /*0x6587b9*/
  v3 = Block + 1314; /*0x6587be*/
  v4 = 22; /*0x6587c4*/
  do /*0x6587f3*/
  {
    v5 = (void *)*(v3 - 5); /*0x6587cb*/
    v3 -= 6; /*0x6587ce*/
    *v3 = &vt_VectorClass_Point2D; /*0x6587d3*/
    if ( v5 && *((_BYTE *)v3 + 13) ) /*0x6587db*/
    {
      __3_YAXPAX_Z(v5); /*0x6587e1*/
      v3[1] = 0; /*0x6587e9*/
    }
    --v4; /*0x6587ec*/
    *((_BYTE *)v3 + 13) = 0; /*0x6587ed*/
    v3[2] = 0; /*0x6587f0*/
  }
  while ( v4 ); /*0x6587f3*/
  v6 = (void *)*(Block + 1176); /*0x6587f5*/
  *(Block + 1175) = &vt_VectorClass_Point2D; /*0x6587fb*/
  if ( v6 && *((_BYTE *)Block + 4713) ) /*0x658809*/
  {
    __3_YAXPAX_Z(v6); /*0x658812*/
    *(Block + 1176) = 0; /*0x65881a*/
  }
  *((_BYTE *)Block + 4713) = 0; /*0x658820*/
  *(Block + 1177) = 0; /*0x658826*/
  v7 = (void *)*(Block + 1162); /*0x65882c*/
  *(Block + 1161) = &vt_VectorClass_Cell; /*0x658832*/
  if ( v7 && *((_BYTE *)Block + 4657) ) /*0x658840*/
  {
    __3_YAXPAX_Z(v7); /*0x658849*/
    *(Block + 1162) = 0; /*0x658851*/
  }
  *((_BYTE *)Block + 4657) = 0; /*0x658859*/
  *(Block + 1163) = 0; /*0x65885f*/
  MapClass::Destruct((char *)Block); /*0x658865*/
  if ( (a2 & 1) != 0 ) /*0x65886f*/
    __3_YAXPAX_Z(Block); /*0x658872*/
  return (RadarClass *)Block; /*0x65887c*/
}


// ==== 0x00658890  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Clear  this=DynamicVector  sig=csp ====
void __thiscall RadarHashVector::sub_658890(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x658896*/
  *(_DWORD *)(this + 16) = 0; /*0x658899*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6588a0*/
  {
    __3_YAXPAX_Z(v2); /*0x6588a6*/
    *(_DWORD *)(this + 4) = 0; /*0x6588ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6588b1*/
  *(_DWORD *)(this + 8) = 0; /*0x6588b4*/
}


// ==== 0x006588C0  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall RadarHashVector::sub_6588C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6588c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x6588d5*/
  else
    return 0; /*0x6588c7*/
}


// ==== 0x006588E0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 16 * a3); /*0x6588ea*/
  *a2 = *v3; /*0x6588f2*/
  a2[1] = v3[1]; /*0x6588f7*/
  a2[2] = v3[2]; /*0x6588fd*/
  a2[3] = v3[3]; /*0x658903*/
  return a2; /*0x658906*/
}


// ==== 0x00658910  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x65891b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x658920*/
  {
    v3 = 0; /*0x658922*/
    if ( v2 <= 0 ) /*0x658926*/
      return 1; /*0x658960*/
    v4 = *(_DWORD *)(a2 + 4); /*0x658928*/
    v5 = (_DWORD *)*(this + 1); /*0x65892b*/
    v6 = (_DWORD *)(v4 + 4); /*0x65892e*/
    v7 = v4 - (_DWORD)v5; /*0x658931*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] ) /*0x65894d*/
    {
      ++v3; /*0x65894f*/
      v6 += 4; /*0x658950*/
      v5 += 4; /*0x658953*/
      if ( v3 >= v2 ) /*0x658958*/
        return 1; /*0x658958*/
    }
  }
  return 0; /*0x65895a*/
}


// ==== 0x00658970  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Release  this=VectorClass  sig=csp ====
char __thiscall RadarHashVector::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x658972*/
  if ( a2 ) /*0x65897e*/
  {
    v5 = a3; /*0x658984*/
    *((_BYTE *)this + 12) = 0; /*0x658988*/
    if ( a3 ) /*0x65898d*/
    {
      if ( a2 - 1 >= 0 ) /*0x6589c7*/
      {
        v9 = a3 + 4; /*0x6589c9*/
        v10 = a2; /*0x6589cc*/
        do /*0x6589d9*/
        {
          *(v9 - 1) = 0; /*0x6589cd*/
          *v9 = 0; /*0x6589d0*/
          v9[1] = 0; /*0x6589d2*/
          v9 += 4; /*0x6589d5*/
          --v10; /*0x6589d8*/
        }
        while ( v10 ); /*0x6589d9*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x658995*/
      if ( v6 ) /*0x65899f*/
      {
        if ( a2 - 1 >= 0 ) /*0x6589a6*/
        {
          v7 = v6 + 4; /*0x6589a8*/
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
        v5 = v6; /*0x6589ba*/
      }
      else
      {
        v5 = 0; /*0x6589be*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x6589dd*/
    if ( v5 ) /*0x6589e1*/
    {
      if ( this->Items ) /*0x6589ec*/
      {
        v12 = this->Capacity; /*0x6589f1*/
        if ( a2 < v12 ) /*0x6589f6*/
          v12 = a2; /*0x6589f8*/
        if ( v12 > 0 ) /*0x6589fc*/
        {
          v13 = 0; /*0x6589fe*/
          do /*0x658a24*/
          {
            v14 = (_DWORD *)(this->Items + v13); /*0x658a05*/
            v15 = &v5[v13]; /*0x658a07*/
            v13 += 16; /*0x658a0a*/
            --v12; /*0x658a0d*/
            *(_DWORD *)v15 = *v14; /*0x658a10*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x658a15*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x658a1b*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x658a21*/
          }
          while ( v12 ); /*0x658a24*/
          v3 = a2; /*0x658a26*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x658a2c*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x658a35*/
          this->Items = 0; /*0x658a3d*/
        }
      }
      this->Items = v5; /*0x658a48*/
      this->Capacity = v3; /*0x658a4e*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x658a51*/
      return 1; /*0x658a57*/
    }
    else
    {
      return 0; /*0x6589e6*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x658a61*/
    return 1; /*0x658a67*/
  }
}


// ==== 0x00658A70  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall RadarHashVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x658a7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x658a83*/
    *(_DWORD *)(this + 4) = 0; /*0x658a8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x658a8e*/
  *(_DWORD *)(this + 8) = 0; /*0x658a91*/
}


// ==== 0x00658AA0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Read  this=VectorClass  sig=csp ====
int __thiscall RadarHashVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x658aa0*/
    return 0; /*0x658aae*/
  v3 = *(_DWORD *)(this + 8); /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( v3 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= v3 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/
}


// ==== 0x00658AF0  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall RadarHashVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x658af0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/
}


// ==== 0x00658B10  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::ComputeHashIndex  this=DynamicVector  sig=csp ====
char __thiscall RadarHashVector::sub_658B10(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    *((_BYTE *)this + 12) = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *(v9 - 1) = 0; /*0x658b6d*/
          *v9 = 0; /*0x658b70*/
          v9[1] = 0; /*0x658b72*/
          v9 += 4; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = v6 + 4; /*0x658b48*/
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
        v5 = v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( this->Items ) /*0x658b87*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x658b8c*/
      if ( a2 < v11 ) /*0x658b91*/
        v11 = a2; /*0x658b93*/
      if ( v11 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (_DWORD *)(this->Items + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --v11; /*0x658ba8*/
          *(_DWORD *)v14 = *v13; /*0x658bab*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( v11 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x658bd0*/
        this->Items = 0; /*0x658bd8*/
      }
    }
    this->Items = v5; /*0x658be3*/
    this->DynamicVector_field_0x8 = v3; /*0x658be9*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x658bf5*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x658bf8*/
  if ( v15 < this->DynamicVector_field_0x10 ) /*0x658c00*/
    this->DynamicVector_field_0x10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}


// ==== 0x00658C20  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall RadarHashVector::sub_658C20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( v2 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= v2 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/
}


// ==== 0x00658C60  _DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::Destructor  this=DynamicVector  sig=csp ====
char *__thiscall RadarHashVector::Destructor(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x658c6a*/
  {
    v3 = *(Block - 1); /*0x658c6c*/
    v4 = Block - 1; /*0x658c70*/
    v5 = 3 * v3; /*0x658c73*/
    v6 = v3 - 1; /*0x658c76*/
    v7 = Block + 2 * v5; /*0x658c77*/
    if ( v6 >= 0 ) /*0x658c7a*/
    {
      v8 = v6 + 1; /*0x658c7d*/
      do /*0x658caa*/
      {
        v9 = (void *)*(v7 - 5); /*0x658c82*/
        v7 -= 6; /*0x658c85*/
        *v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658c8a*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x658c92*/
        {
          __3_YAXPAX_Z(v9); /*0x658c98*/
          v7[1] = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        *((_BYTE *)v7 + 13) = 0; /*0x658ca4*/
        v7[2] = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      __3_YAXPAX_Z(v4); /*0x658cb5*/
    return (char *)v4; /*0x658cbd*/
  }
  else
  {
    v11 = (void *)*(Block + 1); /*0x658cc5*/
    *Block = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658ccc*/
    if ( v11 && *((_BYTE *)Block + 13) ) /*0x658cd4*/
    {
      __3_YAXPAX_Z(v11); /*0x658cda*/
      *(Block + 1) = 0; /*0x658ce2*/
    }
    *((_BYTE *)Block + 13) = 0; /*0x658ce9*/
    *(Block + 2) = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      __3_YAXPAX_Z(Block); /*0x658cf4*/
    return (char *)Block; /*0x658cfc*/
  }
}


// ==== 0x00658D10  _VectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall RadarHashVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x658d13*/
  *Block = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658d16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x658d20*/
  {
    __3_YAXPAX_Z(v3); /*0x658d28*/
    *(Block + 1) = 0; /*0x658d30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x658d3b*/
  *(Block + 2) = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    __3_YAXPAX_Z(Block); /*0x658d4b*/
  return (VectorClass *)Block; /*0x658d55*/
}


// ==== 0x00658D60  VectorClass::PointConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::PointConstructor(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  int v5; // eax

  this->Items = 0; /*0x658d6a*/
  this->Capacity = aP1; /*0x658d71*/
  *((_BYTE *)this + 12) = 1; /*0x658d74*/
  *((_BYTE *)this + 13) = 0; /*0x658d78*/
  *this = &vt_VectorClass_Point2D; /*0x658d7c*/
  if ( aP1 ) /*0x658d82*/
  {
    if ( aP2 ) /*0x658d8a*/
    {
      this->Items = aP2; /*0x658d8d*/
      return this; /*0x658d98*/
    }
    v5 = __2_YAPAXI_Z(8 * (_DWORD)aP1); /*0x658da3*/
    if ( v5 ) /*0x658dad*/
    {
      this->Items = v5; /*0x658db0*/
      *((_BYTE *)this + 13) = 1; /*0x658db7*/
      return this; /*0x658dbf*/
    }
    *((_BYTE *)this + 13) = 1; /*0x658dc4*/
    this->Items = 0; /*0x658dc8*/
  }
  return this; /*0x658d96*/
}


// ==== 0x00658DE0  RadarHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarHashVector::Construct(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  void **v4; // eax
  MapClass *v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  MapClass *v8; // edx

  this->Items = 0; /*0x658ded*/
  this->Capacity = aP1; /*0x658df0*/
  *((_BYTE *)this + 12) = 1; /*0x658df3*/
  *((_BYTE *)this + 13) = 0; /*0x658df7*/
  *this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658dfa*/
  if ( aP1 ) /*0x658e00*/
  {
    if ( aP2 ) /*0x658e08*/
    {
      if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x658e0f*/
      {
        v4 = &aP2->field_4; /*0x658e11*/
        v5 = aP1; /*0x658e14*/
        do /*0x658e21*/
        {
          *(v4 - 1) = 0; /*0x658e15*/
          *v4 = 0; /*0x658e18*/
          v4[1] = 0; /*0x658e1a*/
          v4 += 4; /*0x658e1d*/
          v5 = (MapClass *)((char *)v5 - 1); /*0x658e20*/
        }
        while ( v5 ); /*0x658e21*/
      }
      this->Items = aP2; /*0x658e23*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x658e3f*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658e41*/
          v8 = aP1; /*0x658e44*/
          do /*0x658e51*/
          {
            *(v7 - 1) = 0; /*0x658e45*/
            *v7 = 0; /*0x658e48*/
            v7[1] = 0; /*0x658e4a*/
            v7 += 4; /*0x658e4d*/
            v8 = (MapClass *)((char *)v8 - 1); /*0x658e50*/
          }
          while ( v8 ); /*0x658e51*/
        }
      }
      else
      {
        v6 = 0; /*0x658e55*/
      }
      this->Items = v6; /*0x658e57*/
      *((_BYTE *)this + 13) = 1; /*0x658e5a*/
    }
  }
  *this = &vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658e5e*/
  *(this + 5) = 10; /*0x658e64*/
  this->q010 = 0; /*0x658e6b*/
  return this; /*0x658e70*/
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
  MEMORY[0xB04A40] = 0.0174532925199433 * 90.0; /*0x658f3c*/
}


// ==== 0x00658F50  sub_658F50  this=-  sig=ida-proto ====
__int64 sub_658F50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB04A40] - dbl_B04A80); /*0x658f62*/
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
  MEMORY[0xB04A58] = 0; /*0x659022*/
  MEMORY[0xB04A5A] = 0; /*0x659028*/
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
  MEMORY[0xB04A48] = 0; /*0x659072*/
  MEMORY[0xB04A4C] = 0; /*0x659077*/
  MEMORY[0xB04A50] = 0; /*0x65907c*/
  MEMORY[0xB04A54] = 0; /*0x659081*/
  return 0; /*0x659086*/
}


// ==== 0x00659090  sub_659090  this=-  sig=ida-proto ====
int sub_659090()
{
  MEMORY[0xB04A64] = 0; /*0x659097*/
  MEMORY[0xB04A68] = 0; /*0x65909c*/
  MEMORY[0xB04A6C] = 1; /*0x6590a1*/
  MEMORY[0xB04A6D] = 0; /*0x6590a8*/
  MEMORY[0xB04A60] = (int)&vt_DynamicVectorClass_RadBeam; /*0x6590ad*/
  unk_B04A74 = 10; /*0x6590b7*/
  MEMORY[0xB04A70] = 0; /*0x6590c1*/
  return atexit(sub_6590D0); /*0x6590cc*/
}


// ==== 0x006590D0  sub_6590D0  this=-  sig=ida-proto ====
void __cdecl sub_6590D0()
{
  MEMORY[0xB04A60] = (int)&vt_VectorClass_RadBeam; /*0x6590d8*/
  if ( MEMORY[0xB04A64] && MEMORY[0xB04A6D] ) /*0x6590ec*/
  {
    __3_YAXPAX_Z(MEMORY[0xB04A64]); /*0x6590ef*/
    MEMORY[0xB04A64] = 0; /*0x6590f7*/
  }
  MEMORY[0xB04A6D] = 0; /*0x6590fd*/
  MEMORY[0xB04A68] = 0; /*0x659103*/
}


// ==== 0x00659110  RadBeam::Create  this=int  sig=csp ====
double *__thiscall RadBeam::Create(rc_ptr_base *this)
{
  _DWORD *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (_DWORD *)__2_YAPAXI_Z(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( MEMORY[0xB04A70] < MEMORY[0xB04A68] /*0x65916a*/
    || (MEMORY[0xB04A6D] || !MEMORY[0xB04A68])
    && unk_B04A74 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xB04A60]->field_8)(
         &MEMORY[0xB04A60],
         MEMORY[0xB04A68] + unk_B04A74,
         0) )
  {
    v4 = MEMORY[0xB04A70]++; /*0x659177*/
    *(_DWORD *)&MEMORY[0xB04A64]->__pad_0[4 * v4] = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (rc_ptr_base *)1 ? 20 : 10);
  return inited; /*0x6591a1*/
}


// ==== 0x006591B0  ObjectClass::UpdateProjectileTrails  this=ObjectClass  sig=csp ====
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


// ==== 0x006593F0  RadBeam::InitState  this=int  sig=csp ====
_DWORD *__thiscall RadBeam::InitState(_DWORD *this, rc_ptr_base *aP1)
{
  *(this + 6) = 0; /*0x6593fe*/
  *this = 0; /*0x659401*/
  *(this + 1) = 0; /*0x659403*/
  *((_BYTE *)this + 8) = 0; /*0x659406*/
  *((_BYTE *)this + 9) = 1; /*0x659409*/
  *(this + 3) = 0; /*0x65940c*/
  *(this + 4) = aP1; /*0x65940f*/
  *(this + 7) = 0; /*0x659412*/
  *((_BYTE *)this + 32) = 0; /*0x659415*/
  *((_BYTE *)this + 33) = 0; /*0x659418*/
  *((_BYTE *)this + 34) = 0; /*0x65941b*/
  *(this + 9) = 0; /*0x65941e*/
  *(this + 10) = 0; /*0x659421*/
  *(this + 11) = 0; /*0x659424*/
  *(this + 12) = 0; /*0x659427*/
  *(this + 13) = 0; /*0x65942a*/
  *(this + 14) = 0; /*0x65942d*/
  *(this + 16) = 0; /*0x659430*/
  *(this + 18) = 0; /*0x659433*/
  *(this + 15) = 0; /*0x659436*/
  *(this + 17) = 0; /*0x659439*/
  *(this + 19) = 0; /*0x65943c*/
  *(this + 20) = 0; /*0x65943f*/
  *(this + 21) = 1; /*0x659442*/
  *((_BYTE *)this + 88) = 0; /*0x659445*/
  *(this + 31) = 0; /*0x659448*/
  *((_BYTE *)this + 192) = 0; /*0x65944b*/
  *((_BYTE *)this + 193) = 0; /*0x659451*/
  *((_BYTE *)this + 194) = 0; /*0x659457*/
  return this; /*0x65945d*/
}


// ==== 0x00659470  TechnoClass::drawSelectionBox  this=int  sig=csp ====
char __thiscall TechnoClass::drawSelectionBox(char *this, int a2)
{
  char *v2; // ecx
  char result; // al

  v2 = this + 32; /*0x659474*/
  *(_WORD *)v2 = *(_WORD *)a2; /*0x65947a*/
  result = *(_BYTE *)(a2 + 2); /*0x65947d*/
  v2[2] = result; /*0x659480*/
  return result; /*0x659483*/
}


// ==== 0x00659490  TechnoClass::drawHealthBar  this=int  sig=csp ====
int __thiscall sub_659490(_DWORD *this, int a2)
{
  *(this + 3) = a2; /*0x659494*/
  return a2; /*0x659497*/
}


// ==== 0x006594A0  TechnoClass::drawPipScale  this=int  sig=csp ====
int __thiscall sub_6594A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 9; /*0x6594a4*/
  *v2 = *a2; /*0x6594a9*/
  v2[1] = a2[1]; /*0x6594ae*/
  result = a2[2]; /*0x6594b1*/
  v2[2] = result; /*0x6594b4*/
  return result; /*0x6594b7*/
}


// ==== 0x006594C0  TechnoClass::drawSpawnPips  this=int  sig=csp ====
int __thiscall sub_6594C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 12; /*0x6594c4*/
  *v2 = *a2; /*0x6594c9*/
  v2[1] = a2[1]; /*0x6594ce*/
  result = a2[2]; /*0x6594d1*/
  v2[2] = result; /*0x6594d4*/
  return result; /*0x6594d7*/
}


// ==== 0x006594E0  TechnoClass::drawAmmoPips  this=int  sig=csp ====
int __thiscall sub_6594E0(_DWORD *this, int a2)
{
  *(this + 15) = a2; /*0x6594e4*/
  return a2; /*0x6594e7*/
}


// ==== 0x006594F0  TechnoClass::drawTiberiumPips  this=int  sig=csp ====
int __thiscall sub_6594F0(_DWORD *this, int a2, int a3)
{
  *(this + 16) = a2; /*0x6594f8*/
  *(this + 17) = a3; /*0x6594fb*/
  return a2; /*0x6594fe*/
}


// ==== 0x00659510  ObjectClass::SpreadRadiationAreaEffect_Helper  this=int  sig=csp ====
int __thiscall sub_659510(_DWORD *this, int a2, int a3)
{
  *(this + 18) = a2; /*0x659518*/
  *(this + 19) = a3; /*0x65951b*/
  return a2; /*0x65951e*/
}


// ==== 0x00659530  ObjectClass::SpreadRadiationAreaEffect_Helper  this=int  sig=csp ====
int __thiscall sub_659530(_DWORD *this, int a2)
{
  *(this + 20) = a2; /*0x659534*/
  return a2; /*0x659537*/
}


// ==== 0x00659540  TechnoClass::drawMindControlPips  this=int  sig=csp ====
int __thiscall sub_659540(_DWORD *this, int a2)
{
  *(this + 21) = a2; /*0x659544*/
  return a2; /*0x659547*/
}


// ==== 0x00659550  TechnoClass::drawPassengerPips  this=int  sig=csp ====
char __thiscall sub_659550(_BYTE *this, char a2)
{
  *(this + 88) = a2; /*0x659554*/
  return a2; /*0x659557*/
}


// ==== 0x00659560  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_659560(_BYTE *this)
{
  *(this + 9) = 0; /*0x659560*/
}


// ==== 0x00659570  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_659570(_BYTE *this)
{
  return *(this + 9); /*0x659573*/
}


// ==== 0x00659590  ObjectClass::method  this=ObjectClass  sig=csp ====
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
    v6 = this->vtable4 - ZCoordToScreenY(a2[2]) - 2; /*0x65960f*/
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


// ==== 0x00659650  ObjectClass::RenderProjectileTrail  this=ObjectClass  sig=csp ====
bool __thiscall RenderProjectileTrail(int this)
{
  int v1; // ebp
  _DWORD *v3; // eax
  int *v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // ebp
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v26; // edx
  int v27; // eax
  int v28; // [esp+20h] [ebp-28h]
  int v29[2]; // [esp+24h] [ebp-24h] BYREF
  int v30; // [esp+2Ch] [ebp-1Ch] BYREF
  int v31; // [esp+30h] [ebp-18h]
  int v32; // [esp+34h] [ebp-14h]
  int v33[4]; // [esp+38h] [ebp-10h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  v1 = (int)&savedregs; /*0x659651*/
  if ( !*(_BYTE *)(this + 8) ) /*0x65965f*/
  {
    *(_BYTE *)(this + 8) = 1; /*0x659666*/
    v3 = Coord::Subtract( /*0x65968c*/
           &v30,
           *(_DWORD *)(this + 48) - *(_DWORD *)(this + 36),
           *(_DWORD *)(this + 52) - *(_DWORD *)(this + 40),
           *(_DWORD *)(this + 56) - *(_DWORD *)(this + 44));
    *(_DWORD *)(this + 92) = *v3; /*0x659698*/
    *(_DWORD *)(this + 96) = v3[1]; /*0x65969d*/
    *(_DWORD *)(this + 100) = v3[2]; /*0x6596a3*/
    *(double *)(this + 104) = Math::Sqrt((double)(*(_DWORD *)(this + 100) * *(_DWORD *)(this + 100) /*0x6596d1*/
                                                + *(_DWORD *)(this + 96) * *(_DWORD *)(this + 96)
                                                + *(_DWORD *)(this + 92) * *(_DWORD *)(this + 92)));
  }
  if ( *(_BYTE *)(this + 88) ) /*0x6596d7*/
  {
    v4 = *(int **)(this + 4); /*0x6596e2*/
    if ( v4 ) /*0x6596e7*/
    {
      v5 = *v4; /*0x6596f0*/
      if ( (v4[5] & 2) != 0 ) /*0x6596f4*/
        v6 = (_DWORD *)(*(int (__stdcall **)(int *))(v5 + 164))(&v30); /*0x659705*/
      else
        v6 = (_DWORD *)(*(int (__stdcall **)(int *))(v5 + 88))(&v30); /*0x6596fb*/
      v7 = v6[1]; /*0x65970d*/
      v8 = v6[2]; /*0x659710*/
      *(_DWORD *)(this + 48) = *v6; /*0x659718*/
      *(_DWORD *)(this + 52) = v7; /*0x65971a*/
      *(_DWORD *)(this + 56) = v8; /*0x65971d*/
      v1 = *(_DWORD *)(this + 40); /*0x659729*/
      v9 = Coord::Subtract( /*0x659741*/
             &v30,
             *(_DWORD *)(this + 48) - *(_DWORD *)(this + 36),
             *(_DWORD *)(this + 52) - v1,
             *(_DWORD *)(this + 56) - *(_DWORD *)(this + 44));
      *(_DWORD *)(this + 92) = *v9; /*0x65974d*/
      *(_DWORD *)(this + 96) = v9[1]; /*0x659752*/
      *(_DWORD *)(this + 100) = v9[2]; /*0x659758*/
      *(double *)(this + 104) = Math::Sqrt((double)(*(_DWORD *)(this + 100) * *(_DWORD *)(this + 100) /*0x659786*/
                                                  + *(_DWORD *)(this + 96) * *(_DWORD *)(this + 96)
                                                  + *(_DWORD *)(this + 92) * *(_DWORD *)(this + 92)));
    }
  }
  if ( *(_BYTE *)(this + 9) ) /*0x65978c*/
  {
    v10 = Math::RoundToInt(*(double *)(this + 104) / *(double *)(this + 24)); /*0x65979d*/
    v11 = *(_DWORD *)(this + 96); /*0x6597a5*/
    v30 = *(_DWORD *)(this + 92); /*0x6597a8*/
    v12 = *(_DWORD *)(this + 100); /*0x6597ac*/
    v31 = v11; /*0x6597af*/
    *(_DWORD *)(this + 140) = v10; /*0x6597b8*/
    v32 = v12; /*0x6597be*/
    Render_Render_65A1B0(v10); /*0x6597c2*/
    v13 = (double)*(int *)(this + 124) / (double)*(int *)(this + 60); /*0x6597ca*/
    v14 = v30; /*0x6597cd*/
    v15 = v31; /*0x6597d1*/
    *(_DWORD *)(this + 136) = 0; /*0x6597e1*/
    *(_DWORD *)(this + 144) = v14; /*0x6597eb*/
    v16 = v32; /*0x6597ed*/
    *(_DWORD *)(this + 148) = v15; /*0x6597f1*/
    *(_DWORD *)(this + 152) = v16; /*0x6597f7*/
    *(_DWORD *)(this + 156) = *(_DWORD *)(this + 36); /*0x6597fe*/
    v17 = *(_DWORD *)(this + 44); /*0x659803*/
    *(_DWORD *)(this + 160) = *(_DWORD *)(this + 40); /*0x659806*/
    *(_DWORD *)(this + 164) = v17; /*0x65980c*/
    *(_WORD *)(this + 192) = *(_WORD *)(this + 32); /*0x659818*/
    *(_BYTE *)(this + 194) = *(_BYTE *)(this + 34); /*0x65981e*/
    *(double *)(this + 128) = v13 * *(double *)(this + 64); /*0x659824*/
    if ( *(double *)(this + 104) > 0.0 ) /*0x659838*/
    {
      do /*0x659962*/
      {
        ProjectileTrail::ComputeRenderData(this); /*0x659840*/
        LOWORD(v1) = (unsigned __int8)(*(_BYTE *)(this + 194) >> MEMORY[0x8A0DDC]); /*0x65985f*/
        LOWORD(v18) = (unsigned __int8)(*(_BYTE *)(this + 193) >> MEMORY[0x8A0DE4]); /*0x659876*/
        v19 = v18 << MEMORY[0x8A0DE0]; /*0x65987e*/
        v20 = v19 | (v1 << MEMORY[0x8A0DD8]); /*0x65988e*/
        LOWORD(v19) = (unsigned __int8)(*(_BYTE *)(this + 192) >> MEMORY[0x8A0DD4]); /*0x659893*/
        v1 = (v19 << MEMORY[0x8A0DD0]) | v20; /*0x6598a3*/
        Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(this + 156), &v30); /*0x6598a5*/
        Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(this + 168), v29); /*0x6598bc*/
        v33[0] = MEMORY[0x886FA0]; /*0x6598d2*/
        v33[1] = MEMORY[0x886FA4]; /*0x6598dc*/
        v33[2] = MEMORY[0x886FA8]; /*0x6598e4*/
        v33[3] = MEMORY[0x886FAC]; /*0x6598e8*/
        if ( ClipLine(&v30, v29, v33) ) /*0x6598f5*/
        {
          v21 = *(_DWORD *)(this + 12) - ZCoordToScreenY(*(_DWORD *)(this + 164)) - 2; /*0x659911*/
          v22 = ZCoordToScreenY(*(_DWORD *)(this + 176)); /*0x659914*/
          (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887314] + 52))( /*0x65993f*/
            MEMORY[0x887314],
            &MEMORY[0x886FA0],
            &v30,
            v29,
            (__int16)v1,
            v21,
            -2 - v22,
            0);
        }
        v28 = *(_DWORD *)(this + 136) + 1; /*0x659949*/
        *(_DWORD *)(this + 136) = v28; /*0x65994d*/
      }
      while ( (double)v28 * *(double *)(this + 24) < *(double *)(this + 104) ); /*0x659962*/
    }
  }
  if ( *(_BYTE *)(this + 88) ) /*0x659968*/
  {
    v23 = *(_DWORD *)(this + 84); /*0x65996f*/
    v24 = v23 + *(_DWORD *)(this + 124); /*0x659975*/
    *(_DWORD *)(this + 124) = v24; /*0x659979*/
    if ( v24 <= 0 || v24 >= *(_DWORD *)(this + 60) ) /*0x659983*/
    {
      *(_DWORD *)(this + 84) = -v23; /*0x659987*/
      if ( *(int *)(this + 124) < 0 ) /*0x65998f*/
        *(_DWORD *)(this + 124) = 0; /*0x659991*/
    }
    return 0; /*0x659998*/
  }
  else
  {
    v26 = *(_DWORD *)(this + 60); /*0x6599a5*/
    v27 = *(_DWORD *)(this + 124) + 1; /*0x6599ab*/
    *(_DWORD *)(this + 124) = v27; /*0x6599ad*/
    return v27 >= v26; /*0x6599b6*/
  }
}


// ==== 0x006599C0  ObjectClass::method_6599C0  this=ObjectClass  sig=csp ====
void __thiscall sub_6599C0(int this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = *(_DWORD *)(this + 48) - *(_DWORD *)(this + 36); /*0x6599d8*/
  v3 = *(_DWORD *)(this + 56) - *(_DWORD *)(this + 44); /*0x6599dd*/
  v4 = *(_DWORD *)(this + 52) - *(_DWORD *)(this + 40); /*0x6599e2*/
  *(_DWORD *)(this + 92) = v2; /*0x6599e6*/
  *(_DWORD *)(this + 96) = v4; /*0x6599e8*/
  *(_DWORD *)(this + 100) = v3; /*0x6599eb*/
  *(double *)(this + 104) = Math::Sqrt((double)(*(_DWORD *)(this + 100) * *(_DWORD *)(this + 100) /*0x659a19*/
                                              + *(_DWORD *)(this + 96) * *(_DWORD *)(this + 96)
                                              + *(_DWORD *)(this + 92) * *(_DWORD *)(this + 92)));
}


// ==== 0x00659A30  ObjectClass::method_659A30  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_659A30(int this)
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

  v2 = Math::RoundToInt(*(double *)(this + 104) / *(double *)(this + 24)); /*0x659a3c*/
  v3 = *(_DWORD *)(this + 92); /*0x659a41*/
  v4 = *(_DWORD *)(this + 96); /*0x659a44*/
  v5 = *(_DWORD *)(this + 100); /*0x659a47*/
  *(_DWORD *)(this + 140) = v2; /*0x659a4e*/
  if ( v2 ) /*0x659a54*/
  {
    v3 /= v2; /*0x659a5b*/
    v4 /= v2; /*0x659a62*/
    v5 /= v2; /*0x659a69*/
  }
  v6 = (double)*(int *)(this + 124) / (double)*(int *)(this + 60); /*0x659a6e*/
  *(_DWORD *)(this + 144) = v3; /*0x659a80*/
  *(_DWORD *)(this + 148) = v4; /*0x659a83*/
  *(_DWORD *)(this + 152) = v5; /*0x659a86*/
  *(_DWORD *)(this + 156) = *(_DWORD *)(this + 36); /*0x659a8b*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(this + 40); /*0x659a90*/
  *(_DWORD *)(this + 164) = *(_DWORD *)(this + 44); /*0x659a96*/
  v7 = (__int16 *)(this + 32); /*0x659a99*/
  v8 = this + 192; /*0x659a9c*/
  result = *v7; /*0x659aa2*/
  v10 = *((_BYTE *)v7 + 2); /*0x659aa5*/
  *(double *)(v8 - 64) = v6 * *(double *)(v8 - 128); /*0x659aab*/
  *(_WORD *)v8 = result; /*0x659aae*/
  *(_BYTE *)(v8 + 2) = v10; /*0x659ab1*/
  return result; /*0x659ab4*/
}


// ==== 0x00659AC0  ProjectileTrail::ComputeRenderData  this=ProjectileTrail  sig=csp ====
__int64 __thiscall ProjectileTrail::ComputeRenderData(int this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  double v13; // st7
  __int64 result; // rax
  double v15; // [esp+18h] [ebp-10h]
  double v16; // [esp+18h] [ebp-10h]
  double v17; // [esp+20h] [ebp-8h]

  if ( *(double *)(this + 104) >= 360.0 ) /*0x659adb*/
    v2 = *(double *)(this + 104); /*0x659ae5*/
  else
    v2 = 360.0; /*0x659add*/
  v15 = v2 + v2; /*0x659aed*/
  v3 = Math::SinCos(MEMORY[0x839530] * (v15 * ((double)*(int *)(this + 136) / (double)*(int *)(this + 140)))) /*0x659b19*/
     * *(double *)(this + 128);
  v4 = Math::RoundToInt(v3); /*0x659b23*/
  v5 = v4 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x659b4b*/
  v6 = v4 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x659b50*/
  *(_DWORD *)(this + 156) = v4 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x659b58*/
  *(_DWORD *)(this + 160) = v5; /*0x659b5e*/
  *(_DWORD *)(this + 164) = v6; /*0x659b61*/
  *(_DWORD *)(this + 164) = Math::RoundToInt(v3); /*0x659b71*/
  v7 = Math::SinCos(MEMORY[0x839530] * ((double)(*(_DWORD *)(this + 136) + 1) / (double)*(int *)(this + 140) * v15)) /*0x659bac*/
     * *(double *)(this + 128);
  v8 = Math::RoundToInt(v7); /*0x659bb9*/
  v9 = v8 * *(_DWORD *)(this + 152); /*0x659bd6*/
  v10 = *(_DWORD *)(this + 36) + v8 * *(_DWORD *)(this + 144); /*0x659bdc*/
  v11 = v8 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x659be1*/
  v12 = v9 + *(_DWORD *)(this + 44); /*0x659be6*/
  *(_DWORD *)(this + 168) = v10; /*0x659bee*/
  *(_DWORD *)(this + 172) = v11; /*0x659bf4*/
  *(_DWORD *)(this + 176) = v12; /*0x659bf7*/
  *(_DWORD *)(this + 176) = Math::RoundToInt(v7); /*0x659c07*/
  v13 = (double)(int)abs32(Math::RoundToInt(v7)) * 0.5 / *(double *)(this + 64) + 0.5; /*0x659c31*/
  *(double *)(this + 184) = v13; /*0x659c37*/
  v16 = (double)*(unsigned __int8 *)(this + 33) * v13; /*0x659c51*/
  v17 = (double)*(unsigned __int8 *)(this + 34) * v13; /*0x659c5f*/
  *(_BYTE *)(this + 192) = Math::RoundToInt(v13); /*0x659c74*/
  *(_BYTE *)(this + 193) = Math::RoundToInt(v16); /*0x659c83*/
  result = Math::RoundToInt(v17); /*0x659c89*/
  *(_BYTE *)(this + 194) = result; /*0x659c8e*/
  return result; /*0x659c94*/
}


// ==== 0x00659CA0  ObjectClass::Weapon_Update  this=ObjectClass  sig=csp ====
bool __usercall sub_659CA0@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  __int64 v4; // rax
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v13[2]; // [esp+8h] [ebp-20h] BYREF
  int v14[2]; // [esp+10h] [ebp-18h] BYREF
  int v15[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !*(_BYTE *)(a1 + 8) ) /*0x659ca7*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x659cae*/
    Weapon_Update_Update(a1); /*0x659cb2*/
  }
  if ( *(_BYTE *)(a1 + 9) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0(a1); /*0x659cc4*/
    v3 = *(_DWORD *)(a1 + 140); /*0x659cc9*/
    *(_DWORD *)(a1 + 136) = 0; /*0x659ccf*/
    if ( v3 > 0 ) /*0x659cdb*/
    {
      do /*0x659e01*/
      {
        v4 = Weapon_Update_Update_659FF0(a1); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a1 + 194) >> MEMORY[0x8A0DDC]); /*0x659d13*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 193) >> MEMORY[0x8A0DE4]); /*0x659d28*/
        LODWORD(v4) = (_DWORD)v4 << MEMORY[0x8A0DE0]; /*0x659d30*/
        v5 = v4 | (a2 << MEMORY[0x8A0DD8]); /*0x659d40*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 192) >> MEMORY[0x8A0DD4]); /*0x659d45*/
        a2 = ((_DWORD)v4 << MEMORY[0x8A0DD0]) | v5; /*0x659d55*/
        Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(a1 + 156), v14); /*0x659d57*/
        Coord::To_Screen(MEMORY[0x887324], (_DWORD *)(a1 + 168), v13); /*0x659d68*/
        v15[1] = MEMORY[0x886FA4]; /*0x659d7e*/
        v15[0] = MEMORY[0x886FA0]; /*0x659d86*/
        v15[2] = MEMORY[0x886FA8]; /*0x659d8f*/
        v15[3] = MEMORY[0x886FAC]; /*0x659d9c*/
        if ( ClipLine(v14, v13, v15) ) /*0x659da0*/
        {
          v6 = *(_DWORD *)(a1 + 12) - ZCoordToScreenY(*(_DWORD *)(a1 + 164)) - 2; /*0x659db9*/
          v7 = ZCoordToScreenY(*(_DWORD *)(a1 + 176)); /*0x659dbc*/
          (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887314] + 52))( /*0x659de7*/
            MEMORY[0x887314],
            &MEMORY[0x886FA0],
            v14,
            v13,
            (__int16)a2,
            v6,
            -2 - v7,
            0);
        }
        v8 = *(_DWORD *)(a1 + 140); /*0x659df0*/
        v9 = *(_DWORD *)(a1 + 136) + 1; /*0x659df7*/
        *(_DWORD *)(a1 + 136) = v9; /*0x659df9*/
      }
      while ( v9 < v8 ); /*0x659e01*/
    }
  }
  v10 = *(_DWORD *)(a1 + 60); /*0x659e0c*/
  v11 = *(_DWORD *)(a1 + 124) + 1; /*0x659e12*/
  *(_DWORD *)(a1 + 124) = v11; /*0x659e14*/
  return v11 >= v10; /*0x659e19*/
}


// ==== 0x00659E30  ObjectClass::Weapon_Update_Update  this=ObjectClass  sig=csp ====
int __thiscall sub_659E30(int this)
{
  int v2; // ebp
  int v3; // edx
  int *v4; // edi
  int v5; // ecx
  double v6; // st7
  int result; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  _DWORD *v12; // esi

  v2 = *(_DWORD *)(this + 36); /*0x659e46*/
  v3 = *(_DWORD *)(this + 56) - *(_DWORD *)(this + 44); /*0x659e49*/
  v4 = (int *)(this + 92); /*0x659e4b*/
  v5 = *(_DWORD *)(this + 52) - *(_DWORD *)(this + 40); /*0x659e4e*/
  *(_DWORD *)(this + 92) = *(_DWORD *)(this + 48) - v2; /*0x659e57*/
  *(_DWORD *)(this + 96) = v5; /*0x659e59*/
  *(_DWORD *)(this + 100) = v3; /*0x659e5c*/
  v6 = Math::Sqrt((double)(*(_DWORD *)(this + 100) * *(_DWORD *)(this + 100) /*0x659e85*/
                         + *(_DWORD *)(this + 96) * *(_DWORD *)(this + 96)
                         + *(_DWORD *)(this + 92) * *(_DWORD *)(this + 92)));
  *(double *)(this + 104) = v6; /*0x659e8a*/
  result = Math::RoundToInt(v6 / *(double *)(this + 24)); /*0x659e93*/
  v8 = *v4; /*0x659e98*/
  v9 = *(_DWORD *)(this + 96); /*0x659e9a*/
  v10 = *(_DWORD *)(this + 100); /*0x659e9d*/
  v11 = result; /*0x659ea0*/
  *(_DWORD *)(this + 140) = result; /*0x659ea4*/
  if ( result ) /*0x659eaa*/
  {
    v8 /= result; /*0x659eb1*/
    v9 /= result; /*0x659eb8*/
    result = v10 / result; /*0x659ebd*/
    v10 /= v11; /*0x659ebf*/
  }
  v12 = (_DWORD *)(this + 112); /*0x659ec1*/
  *v12 = v8; /*0x659ec4*/
  v12[1] = v9; /*0x659ec7*/
  v12[2] = v10; /*0x659eca*/
  return result; /*0x659ec6*/
}


// ==== 0x00659EE0  ObjectClass::Weapon_Update_Update_659EE0  this=ObjectClass  sig=csp ====
int __thiscall sub_659EE0(int this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  int result; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  int v14; // ecx
  _DWORD *v15; // esi
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 60); /*0x659ee9*/
  v3 = *(_DWORD *)(this + 124); /*0x659eec*/
  v4 = 2 * v3; /*0x659efc*/
  if ( v3 >= v2 / 2 ) /*0x659eff*/
    v5 = (double)(v2 - v4 % v2); /*0x659f14*/
  else
    v5 = (double)v4; /*0x659f05*/
  v16 = v3 * *(_DWORD *)(this + 80); /*0x659f24*/
  *(double *)(this + 128) = v5 / (double)v2 * *(double *)(this + 64); /*0x659f2b*/
  v6 = Math::RoundToInt((double)v16 * *(double *)(this + 72)); /*0x659f3a*/
  v7 = v6 * *(_DWORD *)(this + 116) + *(_DWORD *)(this + 96); /*0x659f5f*/
  v8 = v6 * *(_DWORD *)(this + 120) + *(_DWORD *)(this + 100); /*0x659f64*/
  *(_DWORD *)(this + 92) += v6 * *(_DWORD *)(this + 112); /*0x659f68*/
  *(_DWORD *)(this + 96) = v7; /*0x659f6a*/
  *(_DWORD *)(this + 100) = v8; /*0x659f6d*/
  v9 = Math::Sqrt((double)(*(_DWORD *)(this + 100) * *(_DWORD *)(this + 100) /*0x659f96*/
                         + *(_DWORD *)(this + 96) * *(_DWORD *)(this + 96)
                         + *(_DWORD *)(this + 92) * *(_DWORD *)(this + 92)));
  *(double *)(this + 104) = v9; /*0x659f9b*/
  result = Math::RoundToInt(v9 / *(double *)(this + 24)); /*0x659fa4*/
  v11 = *(_DWORD *)(this + 92); /*0x659fa9*/
  v12 = *(_DWORD *)(this + 96); /*0x659fab*/
  v13 = *(_DWORD *)(this + 100); /*0x659fae*/
  v14 = result; /*0x659fb1*/
  *(_DWORD *)(this + 140) = result; /*0x659fb5*/
  if ( result ) /*0x659fbb*/
  {
    v11 /= result; /*0x659fc2*/
    v12 /= result; /*0x659fc9*/
    result = v13 / result; /*0x659fce*/
    v13 /= v14; /*0x659fd0*/
  }
  v15 = (_DWORD *)(this + 144); /*0x659fd2*/
  *v15 = v11; /*0x659fd8*/
  v15[1] = v12; /*0x659fdb*/
  v15[2] = v13; /*0x659fde*/
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

  v2 = Math::SinCos(MEMORY[0x839530] * ((double)*(int *)(this + 136) / (double)*(int *)(this + 140) * 180.0)) /*0x65a02c*/
     * *(double *)(this + 128);
  v3 = Math::RoundToInt(v2); /*0x65a036*/
  v4 = v3 * *(_DWORD *)(this + 148) + *(_DWORD *)(this + 40); /*0x65a05e*/
  v5 = v3 * *(_DWORD *)(this + 152) + *(_DWORD *)(this + 44); /*0x65a063*/
  *(_DWORD *)(this + 156) = v3 * *(_DWORD *)(this + 144) + *(_DWORD *)(this + 36); /*0x65a06b*/
  *(_DWORD *)(this + 160) = v4; /*0x65a071*/
  *(_DWORD *)(this + 164) = v5; /*0x65a074*/
  *(_DWORD *)(this + 164) = Math::RoundToInt(v2); /*0x65a084*/
  v6 = Math::SinCos(MEMORY[0x839530] * ((double)(*(_DWORD *)(this + 136) + 1) / (double)*(int *)(this + 140) * 180.0)) /*0x65a0c1*/
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


// ==== 0x0065A1B0  ObjectClass::Render_Render_65A1B0  this=VOID_PTR  sig=csp ====
int *__thiscall Render_Render_65A1B0(int *this, BuildingTypeClass *aP1)
{
  if ( aP1 ) /*0x65a1b7*/
  {
    *this /= (int)aP1; /*0x65a1be*/
    *(this + 1) /= (int)aP1; /*0x65a1c6*/
    *(this + 2) /= (int)aP1; /*0x65a1cf*/
  }
  return this; /*0x65a1d4*/
}


// ==== 0x0065A1E0  _DynamicVectorClass_PAVRadBeam::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::sub_65A1E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x65a1e6*/
  *(_DWORD *)(this + 16) = 0; /*0x65a1e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x65a1f0*/
  {
    __3_YAXPAX_Z(v2); /*0x65a1f6*/
    *(_DWORD *)(this + 4) = 0; /*0x65a1fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x65a201*/
  *(_DWORD *)(this + 8) = 0; /*0x65a204*/
}


// ==== 0x0065A210  _DynamicVectorClass_PAVRadBeam::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::sub_65A210(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x65a210*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x65a225*/
  else
    return 0; /*0x65a217*/
}


// ==== 0x0065A230  _VectorClass_PAVRadBeam::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x65a23a*/
}


// ==== 0x0065A240  _VectorClass_PAVRadBeam::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x65a242*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x65a24d*/
  {
    v3 = 0; /*0x65a24f*/
    if ( v2 <= 0 ) /*0x65a253*/
      return 1; /*0x65a273*/
    v4 = (_DWORD *)*(this + 1); /*0x65a255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65a25b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65a264*/
    {
      ++v3; /*0x65a266*/
      ++v4; /*0x65a267*/
      if ( v3 >= v2 ) /*0x65a26c*/
        return 1; /*0x65a26c*/
    }
  }
  return 0; /*0x65a26e*/
}


// ==== 0x0065A280  _VectorClass_PAVRadBeam::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x65a28c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x65a296*/
    if ( a3 ) /*0x65a29c*/
      v4 = a3; /*0x65a2b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x65a2ae*/
    *((_BYTE *)this + 12) = 1; /*0x65a2b6*/
    if ( v4 ) /*0x65a2ba*/
    {
      if ( this->Items ) /*0x65a2c5*/
      {
        v6 = this->Capacity; /*0x65a2cc*/
        if ( a2 < v6 ) /*0x65a2d1*/
          v6 = a2; /*0x65a2d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x65a2d9*/
          ++i; /*0x65a2de*/
        if ( *((_BYTE *)this + 13) ) /*0x65a2eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x65a2f6*/
          this->Items = 0; /*0x65a2fe*/
        }
      }
      this->Items = v4; /*0x65a307*/
      this->Capacity = a2; /*0x65a30f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x65a312*/
      return 1; /*0x65a318*/
    }
    else
    {
      return 0; /*0x65a2bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x65a322*/
    return 1; /*0x65a328*/
  }
}


// ==== 0x0065A330  _VectorClass_PAVRadBeam::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadBeam::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x65a33d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x65a343*/
    *(_DWORD *)(this + 4) = 0; /*0x65a34b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x65a34e*/
  *(_DWORD *)(this + 8) = 0; /*0x65a351*/
}


// ==== 0x0065A360  _VectorClass_PAVRadBeam::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x65a360*/
    return 0; /*0x65a368*/
  v3 = *(_DWORD *)(this + 8); /*0x65a36e*/
  result = 0; /*0x65a371*/
  if ( v3 <= 0 ) /*0x65a375*/
    return -1; /*0x65a38c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x65a37b*/
  {
    if ( ++result >= v3 ) /*0x65a38a*/
      return -1; /*0x65a38a*/
  }
  return result; /*0x65a36a*/
}


// ==== 0x0065A3A0  _VectorClass_PAVRadBeam::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadBeam::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x65a3a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x65a3b5*/
  else
    return 0; /*0x65a3a7*/
}


// ==== 0x0065A3C0  _DynamicVectorClass_PAVRadBeam::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadBeam::sub_65A3C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65a3cc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x65a3d2*/
    if ( a3 ) /*0x65a3d8*/
      v4 = a3; /*0x65a3ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x65a3ea*/
    *((_BYTE *)this + 12) = 1; /*0x65a3f2*/
    if ( !v4 ) /*0x65a3f6*/
      return 0; /*0x65a46a*/
    if ( this->Items ) /*0x65a3f8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x65a3ff*/
      if ( a2 < v5 ) /*0x65a404*/
        v5 = a2; /*0x65a406*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x65a40c*/
        ++i; /*0x65a411*/
      if ( *((_BYTE *)this + 13) ) /*0x65a41e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x65a429*/
        this->Items = 0; /*0x65a431*/
      }
    }
    this->Items = v4; /*0x65a43a*/
    this->DynamicVector_field_0x8 = a2; /*0x65a442*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x65a445*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x65a44e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x65a451*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x65a459*/
    this->DynamicVector_field_0x10 = v7; /*0x65a45b*/
  return 1; /*0x65a45e*/
}


// ==== 0x0065A470  _DynamicVectorClass_PAVRadBeam::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadBeam::sub_65A470(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x65a470*/
  result = 0; /*0x65a473*/
  if ( v2 <= 0 ) /*0x65a478*/
    return -1; /*0x65a48f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x65a47e*/
  {
    if ( ++result >= v2 ) /*0x65a48d*/
      return -1; /*0x65a48d*/
  }
  return result; /*0x65a492*/
}


// ==== 0x0065A4A0  _VectorClass_PAVRadBeam::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_RadBeam::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x65a4a3*/
  *Block = &vt_VectorClass_RadBeam; /*0x65a4a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x65a4b0*/
  {
    __3_YAXPAX_Z(v3); /*0x65a4b8*/
    *(Block + 1) = 0; /*0x65a4c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x65a4cb*/
  *(Block + 2) = 0; /*0x65a4d1*/
  if ( (a2 & 1) != 0 ) /*0x65a4d8*/
    __3_YAXPAX_Z(Block); /*0x65a4db*/
  return (VectorClass *)Block; /*0x65a4e5*/
}


// ==== 0x0065A4F0  _DynamicVectorClass_PAVRadBeam::Constructor_VectorClass_RadBeam___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_RadBeam::Constructor_VectorClass_RadBeam___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x65a4f3*/
  *Block = &vt_VectorClass_RadBeam; /*0x65a4f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x65a500*/
  {
    __3_YAXPAX_Z(v3); /*0x65a508*/
    *(Block + 1) = 0; /*0x65a510*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x65a51b*/
  *(Block + 2) = 0; /*0x65a521*/
  if ( (a2 & 1) != 0 ) /*0x65a528*/
    __3_YAXPAX_Z(Block); /*0x65a52b*/
  return (DynamicVector *)Block; /*0x65a535*/
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
_DWORD *__thiscall RadioClass::RadioClass(_DWORD *this)
{
  RadioClass::Constructor((int)this); /*0x65a753*/
  this->q0E4 = 0; /*0x65a75a*/
  this->q0E8 = 1; /*0x65a764*/
  *((_BYTE *)this + 236) = 1; /*0x65a76e*/
  *((_BYTE *)this + 237) = 0; /*0x65a775*/
  this->radioLinks = &vt_VectorClass_TechnoClass; /*0x65a77c*/
  this->q0E4 = __2_YAPAXI_Z(4u); /*0x65a78b*/
  *((_BYTE *)this + 237) = 1; /*0x65a791*/
  *this = &RadioClass::`vftable'; /*0x65a798*/
  this->vtable2 = &RadioClass::`vftable'; /*0x65a79e*/
  this->vtable3 = &RadioClass::`vftable'; /*0x65a7a5*/
  this->vtable4 = &vt_RadioClass; /*0x65a7ac*/
  *(_DWORD *)this->q0E4 = 0; /*0x65a7be*/
  *(this + 53) = 0; /*0x65a7c4*/
  this->q0D8 = 0; /*0x65a7ca*/
  this->q0DC = 0; /*0x65a7d2*/
  return this; /*0x65a7d8*/
}


// ==== 0x0065A7E0  RadioClass::Helper_65A7E0  this=RadioClass  sig=csp ====
_DWORD *__thiscall Helper_65A7E0(_DWORD *this, TechnoClass *aP1)
{
  ObjectClass::Init(this, (AbstractClass *)aP1); /*0x65a7e8*/
  this->radioLinks = &vt_VectorClass_TechnoClass; /*0x65a7ed*/
  *this = &RadioClass::`vftable'; /*0x65a7f7*/
  this->vtable2 = &RadioClass::`vftable'; /*0x65a7fd*/
  this->vtable3 = &RadioClass::`vftable'; /*0x65a804*/
  this->vtable4 = &vt_RadioClass; /*0x65a80b*/
  return this; /*0x65a814*/
}


// ==== 0x0065A820  ObjectClass::ProcessGroupInput  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ProcessGroupInput(int this, RadioClass *aP1, int a3, TechnoClass *aP3)
{
  int v5; // eax
  int v6; // ecx
  BaseClass *v7; // ecx
  int v8; // edi
  RadioClass **i; // eax
  BaseClass *v11; // edx
  int v12; // eax
  RadioClass **v13; // ecx
  BaseClass *v14; // edx
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
    v7 = *(BaseClass **)(this + 232); /*0x65a854*/
    v8 = 0; /*0x65a85a*/
    if ( (int)v7 > 0 ) /*0x65a85e*/
    {
      for ( i = *(RadioClass ***)(this + 228); aP1 != *i; ++i ) /*0x65a860*/
      {
        if ( ++v8 >= (int)v7 ) /*0x65a870*/
          return ObjectClass::ProcessInputKey((#374 *)this); /*0x65a870*/
      }
      ObjectClass::ProcessInputKey((#374 *)this); /*0x65a890*/
      *(_DWORD *)(*(_DWORD *)(this + 228) + 4 * v8) = 0; /*0x65a8a0*/
      return 1; /*0x65a8aa*/
    }
    return ObjectClass::ProcessInputKey((#374 *)this); /*0x65a883*/
  }
  if ( a3 != 2 || !*(_DWORD *)(this + 108) ) /*0x65a8b2*/
    return ObjectClass::ProcessInputKey((#374 *)this); /*0x65a8b7*/
  if ( !Object::IsAlliedWithObjectHouse((_DWORD *)aP1[2].customSound_controller[1], (IUnknown *)this) ) /*0x65a8c4*/
    return 10; /*0x65a8d5*/
  if ( this /*0x65a8e9*/
    && (*(_BYTE *)(this + 20) & 1) != 0
    && !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (IUnknown *)aP1) )
  {
    return 10; /*0x65a8e9*/
  }
  if ( aP1 ) /*0x65a8ff*/
  {
    v11 = *(BaseClass **)(this + 232); /*0x65a901*/
    v12 = 0; /*0x65a907*/
    if ( (int)v11 > 0 ) /*0x65a90b*/
    {
      v13 = *(RadioClass ***)(this + 228); /*0x65a90d*/
      while ( *v13 != aP1 ) /*0x65a915*/
      {
        ++v12; /*0x65a917*/
        ++v13; /*0x65a918*/
        if ( v12 >= (int)v11 ) /*0x65a91d*/
          goto LABEL_23; /*0x65a91d*/
      }
      if ( v12 != -1 ) /*0x65a94e*/
        return 1; /*0x65a958*/
    }
  }
LABEL_23:
  v14 = *(BaseClass **)(this + 232); /*0x65a91f*/
  v15 = 0; /*0x65a925*/
  if ( (int)v14 <= 0 ) /*0x65a929*/
    return 10; /*0x65a8fa*/
  v16 = *(_DWORD **)(this + 228); /*0x65a92b*/
  for ( j = v16; *j; ++j ) /*0x65a931*/
  {
    if ( ++v15 >= (int)v14 ) /*0x65a93e*/
      return 10; /*0x65a948*/
  }
  v16[v15] = aP1; /*0x65a95b*/
  return 1; /*0x65a880*/
}


// ==== 0x0065A970  RadioClass::RemoveElement  this=RadioClass  sig=csp ====
int __thiscall VectorClass::RemoveElement(#377 *this)
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
    v1 = (int *)**((_DWORD **)this + 57); /*0x65a984*/
    if ( !v1 ) /*0x65a988*/
      return 0; /*0x65a990*/
  }
  if ( v17 == 3 ) /*0x65a99a*/
  {
    v4 = this->q0E8; /*0x65a99c*/
    v5 = 0; /*0x65a9a2*/
    if ( v4 > 0 ) /*0x65a9a6*/
    {
      do /*0x65a9c7*/
      {
        v6 = this->q0E4; /*0x65a9a8*/
        v7 = *(int **)(v6 + 4 * v5); /*0x65a9ae*/
        v8 = (_DWORD *)(v6 + 4 * v5); /*0x65a9b1*/
        if ( v7 == v1 ) /*0x65a9b6*/
          *v8 = 0; /*0x65a9b8*/
        ++v5; /*0x65a9c4*/
      }
      while ( v5 < this->q0E8 ); /*0x65a9c7*/
    }
    goto LABEL_9; /*0x65a9c7*/
  }
  if ( v17 != 2 ) /*0x65a9eb*/
  {
LABEL_9:
    v9 = *v1; /*0x65a9c9*/
    v10 = AbstractClass::IsTechnoType(this); /*0x65a9d3*/
    return (*(int (__thiscall **)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18); /*0x65a9e5*/
  }
  v11 = this->q0E8; /*0x65a9ed*/
  v12 = -1; /*0x65a9f3*/
  v13 = 0; /*0x65a9f6*/
  if ( v11 > 0 ) /*0x65a9fa*/
  {
    v14 = (int **)this->q0E4; /*0x65a9fc*/
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
  (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 632))(this, 3, **((_DWORD **)this + 57)); /*0x65aa1f*/
  v12 = 0; /*0x65aa34*/
LABEL_20:
  v15 = *v1; /*0x65aa36*/
  v16 = AbstractClass::IsTechnoType(this); /*0x65aa41*/
  if ( (*(int (__thiscall **)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 ) /*0x65aa52*/
  {
    *(_DWORD *)(this->q0E4 + 4 * v12) = v1; /*0x65aa5a*/
    return 1; /*0x65aa66*/
  }
  return 10; /*0x65a98a*/
}


// ==== 0x0065AA80  RadioClass::ProcessCmd  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ProcessCmd(#374 *this)
{
  if ( !*((_BYTE *)this + 129) ) /*0x65aa83*/
    (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 640))(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy(this); /*0x65aa9e*/
}


// ==== 0x0065AAA0  ObjectClass::ThunkTo636  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo636(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*(int (__thiscall **)(#377 *, int, void *, int))(*(_DWORD *)this + 636))(this, v2, &MEMORY[0xA8EC30], v3); /*0x65aab7*/
}


// ==== 0x0065AAC0  RadioClass::ExecuteAction  this=RadioClass  sig=csp ====
int __thiscall RadioClass::ExecuteAction(int this, TimerStruct *aP1, IUnknown *aP2)
{
  BaseClass *result; // eax
  int i; // ecx
  int v6; // eax
  TimerStruct *v7; // edx
  _DWORD *v8; // eax

  Object::Unlink((#374 *)this); /*0x65aacf*/
  result = *(BaseClass **)(this + 232); /*0x65aad4*/
  for ( i = 0; i < (int)result; ++i ) /*0x65aade*/
  {
    v6 = *(_DWORD *)(this + 228); /*0x65aae0*/
    v7 = *(TimerStruct **)(v6 + 4 * i); /*0x65aae6*/
    v8 = (_DWORD *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == aP1 ) /*0x65aaee*/
    {
      if ( (_BYTE)aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = *(BaseClass **)(this + 232); /*0x65aafa*/
  }
  return (int)result; /*0x65ab05*/
}


// ==== 0x0065AB10  RadioClass::PowerDrainUpdate  this=RadioClass  sig=csp ====
int __thiscall RadioClass::PowerDrainUpdate(int *this, AbstractClass *aP1)
{
  BaseClass *result; // eax
  int i; // edi
  int v5; // eax
  int v6; // ecx

  AbstractClass::COMStub_13((int)this, aP1); /*0x65ab1a*/
  Power::TimerProcess(aP1); /*0x65ab28*/
  result = (BaseClass *)*(this + 58); /*0x65ab2d*/
  for ( i = 0; i < (int)result; ++i ) /*0x65ab37*/
  {
    v5 = *(_DWORD *)(*(this + 57) + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(aP1); /*0x65ab53*/
      v6 = *(_DWORD *)(*(this + 57) + 4 * i); /*0x65ab5e*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x65ab63*/
      Power::TimerProcess(aP1); /*0x65ab69*/
    }
    result = (BaseClass *)*(this + 58); /*0x65ab6e*/
  }
  return (int)result; /*0x65ab79*/
}


// ==== 0x0065AB80  RadioClass::LoadState  this=RadioClass  sig=csp ====
int __thiscall RadioClass::LoadState(void *this, ObjectClass *aP1, ObjectClass *aP2)
{
  ObjectClass *v3; // ebp
  ObjectClass *v4; // edi
  int result; // eax
  void **p_attachedTag; // esi
  int v7; // esi
  ObjectClass *v8; // eax
  int v9; // esi

  v3 = aP1; /*0x65ab81*/
  v4 = aP2; /*0x65ab87*/
  result = BuildingClass::SaveLoad_Register((#374 *)this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    p_attachedTag = &v3[1].attachedTag; /*0x65ab9a*/
    if ( v3 != (ObjectClass *)-224 ) /*0x65aba2*/
    {
      v3[1].attachedBomb = 0; /*0x65aba4*/
      v3[1].ambientSoundController[0] = 0; /*0x65abab*/
      LOBYTE(v3[1].ambientSoundController[1]) = 1; /*0x65abb2*/
      BYTE1(v3[1].ambientSoundController[1]) = 0; /*0x65abb6*/
      *p_attachedTag = &vt_VectorClass_TechnoClass; /*0x65abba*/
    }
    result = (*(int (__stdcall **)(ObjectClass *, ObjectClass **, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x65abcc*/
               v4,
               &aP2,
               4,
               0);
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*((void (__thiscall **)(void **, ObjectClass *, _DWORD))*p_attachedTag + 2))(&v3[1].attachedTag, aP2, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = aP2; /*0x65abe3*/
      if ( (int)aP2 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( (int)v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB077F8].__pad_14B0[13416], (int *)v3[1].attachedBomb + v9++); /*0x65ac29*/
          while ( v9 < (int)aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (__stdcall **)(ObjectClass *, ObjectClass **, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x65abf7*/
                     v4,
                     &aP1,
                     4,
                     0);
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *((_DWORD *)v3[1].attachedBomb + v7) = aP1; /*0x65ac08*/
          v8 = aP2; /*0x65ac0b*/
          if ( ++v7 >= (int)aP2 ) /*0x65ac12*/
            goto LABEL_8; /*0x65ac12*/
        }
      }
    }
  }
  return result; /*0x65ac37*/
}


// ==== 0x0065AC40  RadioClass::SaveState  this=RadioClass  sig=csp ====
int __stdcall RadioClass::SaveState(int *a0, RadioClass *aP1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebx

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)a0, (ObjectTypeClass *)aP1, (ObjectTypeClass *)aP2); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *(_DWORD *)aP1->__pad_0; /*0x65ac61*/
    aP2 = a0[58]; /*0x65ac6d*/
    result = (*(int (__stdcall **)(RadioClass *, int *, int, _DWORD))(v4 + 16))(aP1, &aP2, 4, 0); /*0x65ac71*/
    if ( result >= 0 ) /*0x65ac76*/
    {
      v5 = 0; /*0x65ac7c*/
      if ( aP2 <= 0 ) /*0x65ac80*/
      {
        return 0; /*0x65aca3*/
      }
      else
      {
        while ( 1 ) /*0x65ac93*/
        {
          result = (*(int (__stdcall **)(RadioClass *, int, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 16))( /*0x65ac93*/
                     aP1,
                     a0[57] + 4 * v5,
                     4,
                     0);
          if ( result < 0 ) /*0x65ac98*/
            break; /*0x65ac98*/
          if ( ++v5 >= aP2 ) /*0x65aca1*/
            return 0; /*0x65aca1*/
        }
      }
    }
  }
  return result; /*0x65aca5*/
}


// ==== 0x0065ACB0  ObjectClass::ThunkTo159x4  this=RadioClass  sig=csp ====
int __thiscall ObjectClass::ThunkTo159x4(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( **((_DWORD **)this + 57) ) /*0x65acb6*/
    return (*(int (__thiscall **)(#377 *, int, void *, _DWORD))(*(_DWORD *)this + 636))( /*0x65acc9*/
             this,
             v2,
             &MEMORY[0xA8EC30],
             **((_DWORD **)this + 57));
  else
    return 0; /*0x65acd2*/
}


// ==== 0x0065ACE0  RadioClass::UpdateObjects  this=RadioClass  sig=csp ====
int __thiscall TacticalClass::UpdateObjects(#377 *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x65ace4*/
  result = this->q0E8; /*0x65ace6*/
  if ( result > 0 ) /*0x65acee*/
  {
    do /*0x65ad1c*/
    {
      if ( *(_DWORD *)(this->q0E4 + 4 * v2) ) /*0x65acfb*/
        (*(void (__thiscall **)(#377 *, int, void *, _DWORD))(*(_DWORD *)this + 636))( /*0x65ad0d*/
          this,
          v4,
          &MEMORY[0xA8EC30],
          *(_DWORD *)(this->q0E4 + 4 * v2));
      result = this->q0E8; /*0x65ad13*/
      ++v2; /*0x65ad19*/
    }
    while ( v2 < result ); /*0x65ad1c*/
  }
  return result; /*0x65ad1f*/
}


// ==== 0x0065AD30  Team::GetMember  this=IUnknown  sig=csp ====
int __thiscall Team::GetMember(_DWORD *this, AbstractClass *aP1)
{
  return *(_DWORD *)(this->q0E4 + 4 * (_DWORD)aP1); /*0x65ad3d*/
}


// ==== 0x0065AD40  Array::Get  this=TechnoClass  sig=csp ====
int __thiscall Array_Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 57) + 4 * a2); /*0x65ad4d*/
}


// ==== 0x0065AD50  Array::Contains  this=AbstractClass  sig=csp ====
bool __thiscall Array::Contains(int *this, IUnknown *aP1)
{
  int v2; // edx
  int v3; // eax
  IUnknown **v4; // ecx

  if ( aP1 && (v2 = *(this + 58), v3 = 0, v2 > 0) ) /*0x65ad63*/
  {
    v4 = (IUnknown **)*(this + 57); /*0x65ad65*/
    while ( *v4 != aP1 ) /*0x65ad6d*/
    {
      ++v3; /*0x65ad6f*/
      ++v4; /*0x65ad70*/
      if ( v3 >= v2 ) /*0x65ad75*/
        goto LABEL_6; /*0x65ad75*/
    }
  }
  else
  {
LABEL_6:
    v3 = -1; /*0x65ad77*/
  }
  return v3 != -1; /*0x65ad84*/
}


// ==== 0x0065AD90  RadioClass::FindLinkIndex  this=int  sig=csp ====
int __thiscall RadioClass::FindLinkIndex(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = *(this + 58); /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (_DWORD *)*(this + 57); *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/
}


// ==== 0x0065ADC0  RadioClass::HasFreeLink  this=TechnoClass  sig=csp ====
char __thiscall RadioClass::HasFreeLink(int *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = *(this + 58); /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (_DWORD *)*(this + 57); *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/
}


// ==== 0x0065ADF0  Array::ContainsValue  this=IUnknown  sig=csp ====
char __thiscall Array::ContainsValue(int *this, IUnknown *aP1)
{
  int v2; // esi
  int v3; // edx
  IUnknown **i; // ecx

  v2 = *(this + 58); /*0x65adf1*/
  v3 = 0; /*0x65adf7*/
  if ( v2 <= 0 ) /*0x65adfc*/
    return 0; /*0x65ae1a*/
  for ( i = (IUnknown **)*(this + 57); *i && *i != aP1; ++i ) /*0x65adfe*/
  {
    if ( ++v3 >= v2 ) /*0x65ae18*/
      return 0; /*0x65ae18*/
  }
  return 1; /*0x65ae1a*/
}


// ==== 0x0065AE30  Team::AllMembersValid  this=IUnknown  sig=csp ====
char __thiscall Team_AllMembersValid(int *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = *(this + 58); /*0x65ae30*/
  v2 = 0; /*0x65ae36*/
  if ( v1 <= 0 ) /*0x65ae3a*/
    return 0; /*0x65ae4f*/
  for ( i = (_DWORD *)*(this + 57); !*i; ++i ) /*0x65ae3c*/
  {
    if ( ++v2 >= v1 ) /*0x65ae4d*/
      return 0; /*0x65ae4d*/
  }
  return 1; /*0x65ae51*/
}


// ==== 0x0065AE60  RadioClass::SetLinkCount  this=AbstractClass  sig=csp ====
void __thiscall RadioClass::SetLinkCount(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = this->q0E8; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(this->q0E0 + 8))(this + 56, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(_DWORD *)(this->q0E4 + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}


// ==== 0x0065AEB0  RadioClass::ProcessEvent  this=RadioClass  sig=csp ====
RadioClass *__thiscall RadioClass::ProcessEvent(_DWORD *Block, char a2)
{
  void *v3; // eax

  *Block = &RadioClass::`vftable'; /*0x65aeb3*/
  *(Block + 1) = &RadioClass::`vftable'; /*0x65aeb9*/
  *(Block + 2) = &RadioClass::`vftable'; /*0x65aec0*/
  *(Block + 3) = &vt_RadioClass; /*0x65aec7*/
  v3 = (void *)*(Block + 57); /*0x65aece*/
  *(Block + 56) = &vt_VectorClass_TechnoClass; /*0x65aed4*/
  if ( v3 && *((_BYTE *)Block + 237) ) /*0x65aee2*/
  {
    __3_YAXPAX_Z(v3); /*0x65aeed*/
    *(Block + 57) = 0; /*0x65aef5*/
  }
  *((_BYTE *)Block + 237) = 0; /*0x65aeff*/
  *(Block + 58) = 0; /*0x65af06*/
  *Block = &MissionClass::`vftable'; /*0x65af12*/
  *(Block + 1) = &MissionClass::`vftable'; /*0x65af18*/
  *(Block + 2) = &MissionClass::`vftable'; /*0x65af1f*/
  *(Block + 3) = &vt_MissionClass; /*0x65af26*/
  ObjectClass::Dtor(Block); /*0x65af2d*/
  if ( (a2 & 1) != 0 ) /*0x65af37*/
    __3_YAXPAX_Z(Block); /*0x65af3a*/
  return (RadioClass *)Block; /*0x65af44*/
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
  RadSiteClass_Array = (int)&vt_DynamicVectorClass_RadSiteClass; /*0x65b17d*/
  dword_B04BE4 = 10; /*0x65b187*/
  dword_B04BE0 = 0; /*0x65b191*/
  return atexit(sub_65B1A0); /*0x65b19c*/
}


// ==== 0x0065B1A0  sub_65B1A0  this=-  sig=ida-proto ====
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


// ==== 0x0065B1E0  RadSiteClass::RadSiteClass  this=RadSiteClass  sig=csp ====
_DWORD *__thiscall sub_65B1E0(_DWORD *this)
{
  #72 *v2; // edx
  int v3; // eax

  AbstractClass::Constructor((int)this); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  *(this + 10) = MEMORY[0xA8ED84]; /*0x65b1f3*/
  this->q030 = 0; /*0x65b1f6*/
  v2 = MEMORY[0xA8ED84]; /*0x65b1f9*/
  this->q03C = 0; /*0x65b1ff*/
  *(this + 13) = v2; /*0x65b202*/
  *((_WORD *)this + 32) = 0; /*0x65b205*/
  *((_WORD *)this + 33) = 0; /*0x65b209*/
  this->Spread = 0; /*0x65b20d*/
  this->SpreadInLeptons = 0; /*0x65b210*/
  this->RadLevel = 0; /*0x65b213*/
  this->LevelSteps = 0; /*0x65b216*/
  this->Intensity = 0; /*0x65b219*/
  this->q064 = 0; /*0x65b21c*/
  this->q068 = 0; /*0x65b21f*/
  this->RadDuration = 0; /*0x65b222*/
  this->RadTimeLeft = 0; /*0x65b225*/
  *this = &RadSiteClass::`vftable'; /*0x65b228*/
  this->vtable2 = &RadSiteClass::`vftable'; /*0x65b22e*/
  this->vtable3 = &RadSiteClass::`vftable'; /*0x65b235*/
  this->vtable4 = &RadSiteClass::`vftable'; /*0x65b23c*/
  if ( MEMORY[0xB04BE0] < MEMORY[0xB04BD8] /*0x65b277*/
    || (MEMORY[0xB04BDD] || !MEMORY[0xB04BD8])
    && MEMORY[0xB04BE4] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB04BD0] + 8))(
         &MEMORY[0xB04BD0],
         MEMORY[0xB04BD8] + MEMORY[0xB04BE4],
         0) )
  {
    v3 = MEMORY[0xB04BE0]++; /*0x65b284*/
    *((_DWORD *)MEMORY[0xB04BD4] + v3) = this; /*0x65b293*/
  }
  return this; /*0x65b298*/
}


// ==== 0x0065B2F0  RadSiteClass::Constructor  this=RadSiteClass  sig=csp ====
void __thiscall RadSiteClass::Constructor(void **this)
{
  _DWORD *v2; // eax
  AbstractClass *v3; // edx
  LightSourceClass *v4; // ecx
  int v5; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &RadSiteClass::`vftable'; /*0x65b2fc*/
  *(this + 1) = &RadSiteClass::`vftable'; /*0x65b303*/
  *(this + 2) = &RadSiteClass::`vftable'; /*0x65b30a*/
  *(this + 3) = &vt_RadSiteClass; /*0x65b311*/
  v2 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)this + 32); /*0x65b318*/
  TerrainClass::SetFieldF8(v2, 0); /*0x65b321*/
  LOBYTE(v3) = 1; /*0x65b326*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v3); /*0x65b32a*/
  v4 = (LightSourceClass *)*(this + 9); /*0x65b32f*/
  if ( v4 ) /*0x65b334*/
  {
    (*(void (__thiscall **)(LightSourceClass *, int))(*(_DWORD *)v4->__pad_0 + 32))(v4, 1); /*0x65b33a*/
    *(this + 9) = 0; /*0x65b33d*/
  }
  v6 = this; /*0x65b354*/
  v5 = ((int (__thiscall *)(DynamicVector **, void ***))RadSiteClass_Array->field_10)(&RadSiteClass_Array, &v6); /*0x65b358*/
  if ( v5 != -1 && v5 < dword_B04BE0 && v5 < --dword_B04BE0 ) /*0x65b373*/
  {
    do /*0x65b38b*/
    {
      ++v5; /*0x65b37b*/
      *(_DWORD *)&dword_B04BD4->__pad_0[4 * v5 - 4] = *(_DWORD *)&dword_B04BD4->__pad_0[4 * v5]; /*0x65b37f*/
    }
    while ( v5 < dword_B04BE0 ); /*0x65b38b*/
  }
  AbstractClass::DTOR(this); /*0x65b38f*/
}


// ==== 0x0065B3A0  RadSiteClass::StubReturn116  this=RadSiteClass  sig=csp ====
int RadSiteClass::_vt12()
{
  return 116; /*0x65b3a5*/
}


// ==== 0x0065B3B0  RadSiteClass::PowerDrainUpdate  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::PowerDrainUpdate(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x65b3ba*/
}


// ==== 0x0065B3C0  RadSiteClass::StubReturn69  this=RadSiteClass  sig=csp ====
int RadSiteClass::_vt11()
{
  return 69; /*0x65b3c5*/
}


// ==== 0x0065B3D0  RadSiteClass::SaveLoad_Prefix  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi
  IUnknown *v3; // edx

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x65b3e1*/
  if ( (int)Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x65b3f2*/
      v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x65b3f7*/
      *(_DWORD *)&aP0[1].__pad_0[12] = 0; /*0x65b3fd*/
      *(_DWORD *)&aP0[1].__pad_0[4] = v3; /*0x65b404*/
      aP0[1].uniqueId = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x65b40c*/
      aP0[1].nextArrayIndex = 0; /*0x65b40f*/
      *(_DWORD *)aP0->__pad_0 = &RadSiteClass::`vftable'; /*0x65b416*/
      *(_DWORD *)&aP0->__pad_0[4] = &RadSiteClass::`vftable'; /*0x65b41c*/
      *(_DWORD *)&aP0->__pad_0[8] = &RadSiteClass::`vftable'; /*0x65b423*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_RadSiteClass; /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x65b43a*/
  }
  return (int)Prefix_0->__pad_0; /*0x65b441*/
}


// ==== 0x0065B450  RadSiteClass::SaveLoad_Prefix_0  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x65b464*/
}


// ==== 0x0065B470  RadSiteClass::ddtor  this=RadSiteClass  sig=csp ====
int __stdcall RadSiteClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x65b476*/
    return -2147467261; /*0x65b478*/
  *a2 = 1090836288; /*0x65b486*/
  a2[1] = 299095303; /*0x65b48e*/
  a2[2] = -1610598260; /*0x65b497*/
  a2[3] = 1153315785; /*0x65b4a0*/
  return 0; /*0x65b47d*/
}


// ==== 0x0065B4B0  RadSiteClass::GetSpread  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::GetSpread(_DWORD *this)
{
  return this->Spread; /*0x65b4b3*/
}


// ==== 0x0065B4C0  RadSiteClass::SetBaseCell  this=Warhead  sig=csp ====
_DWORD *__thiscall RadSiteClass::SetBaseCell(_DWORD *this, _DWORD *a2)
{
  this->q040 = *a2; /*0x65b4c6*/
  return a2; /*0x65b4c9*/
}


// ==== 0x0065B4D0  RadSiteClass::SetSpread  this=Warhead  sig=csp ====
int __thiscall RadSiteClass::SetSpread(_DWORD *this, int a2)
{
  int result; // eax

  this->q044 = a2; /*0x65b4d4*/
  result = (a2 << 8) + 128; /*0x65b4da*/
  *(this + 18) = result; /*0x65b4df*/
  return result; /*0x65b4e2*/
}


// ==== 0x0065B4F0  RadSiteClass::SetRadLevel  this=Warhead  sig=csp ====
int __thiscall RadSiteClass::SetRadLevel(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 19) = a2; /*0x65b4f4*/
  result = a2 * MEMORY[0x8871E0][1].?; /*0x65b502*/
  *(this + 27) = result; /*0x65b505*/
  *(this + 28) = result; /*0x65b508*/
  return result; /*0x65b50b*/
}


// ==== 0x0065B510  CellClass::GetOccupiedRatio  this=CellStruct  sig=csp ====
int __thiscall sub_65B510(int *this)
{
  int v1; // esi

  v1 = *(this + 27); /*0x65b511*/
  if ( v1 > 0 ) /*0x65b516*/
    return *(this + 19) * *(this + 28) / v1; /*0x65b524*/
  else
    return 0; /*0x65b518*/
}


// ==== 0x0065B530  RadSiteClass::Add  this=int  sig=csp ====
int __thiscall RadSiteClass::Add(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax

  v3 = Math::RoundToInt((double)(int)*(this + 19) * (double)(int)*(this + 28) / (double)(int)*(this + 27)); /*0x65b548*/
  RadSiteClass::Deactivate(this); /*0x65b54a*/
  *(this + 19) = v3 + a2; /*0x65b556*/
  v4 = (v3 + a2) * MEMORY[0x8871E0][1].?; /*0x65b565*/
  *(this + 27) = v4; /*0x65b56a*/
  *(this + 28) = v4; /*0x65b56d*/
  return Warhead::ProcessDamageArea((int)this); /*0x65b575*/
}


// ==== 0x0065B580  Warhead::ProcessDamageArea  this=Warhead  sig=csp ====
int __thiscall Warhead_ProcessDamageArea(int this)
{
  double *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // ebp
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  void *v16; // eax
  int *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v21; // [esp+10h] [ebp-30h]
  int v22; // [esp+10h] [ebp-30h]
  int v23; // [esp+18h] [ebp-28h]
  int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h]
  int v26; // [esp+24h] [ebp-1Ch]
  int v27; // [esp+28h] [ebp-18h]
  int v28; // [esp+2Ch] [ebp-14h]
  int v29; // [esp+2Ch] [ebp-14h]
  int v30; // [esp+30h] [ebp-10h]
  _BYTE v31[12]; // [esp+34h] [ebp-Ch] BYREF

  v24 = *((_DWORD *)MEMORY[0x8871E0] + 1540); /*0x65b5a3*/
  v25 = *((_DWORD *)MEMORY[0x8871E0] + 1541); /*0x65b5a7*/
  *(_DWORD *)(this + 40) = MEMORY[0xA8ED84]; /*0x65b5ab*/
  *(_DWORD *)(this + 44) = v28; /*0x65b5b3*/
  *(_DWORD *)(this + 48) = v24; /*0x65b5b9*/
  *(_DWORD *)(this + 52) = MEMORY[0xA8ED84]; /*0x65b5c2*/
  *(_DWORD *)(this + 56) = v28; /*0x65b5c8*/
  *(_DWORD *)(this + 60) = v25; /*0x65b5cb*/
  v2 = (double *)MEMORY[0x8871E0]; /*0x65b5ce*/
  v3 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6194); /*0x65b5e2*/
  v4 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6193); /*0x65b5e8*/
  v5 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6192); /*0x65b5f5*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v21 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*(int *)(this + 76) * *((double *)MEMORY[0x8871E0] + 772); /*0x65b63e*/
  v26 = *(_DWORD *)(this + 72); /*0x65b679*/
  v23 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  v7 = Math::RoundToInt(v6); /*0x65b69e*/
  v8 = (double)v21 * v2[773]; /*0x65b6a0*/
  if ( v8 > 2000.0 ) /*0x65b6b3*/
    v8 = 2000.0; /*0x65b6b7*/
  v22 = Math::RoundToInt(v8); /*0x65b6c6*/
  v9 = (double)(1000 * v4 / 255) * v2[773]; /*0x65b6ca*/
  if ( v9 > 2000.0 ) /*0x65b6dd*/
    v9 = 2000.0; /*0x65b6e1*/
  v10 = Math::RoundToInt(v9); /*0x65b6f0*/
  v11 = (double)v23 * v2[773]; /*0x65b6f2*/
  if ( v11 > 2000.0 ) /*0x65b705*/
    v11 = 2000.0; /*0x65b709*/
  v12 = Math::RoundToInt(v11); /*0x65b70f*/
  v13 = *(_DWORD *)(this + 108); /*0x65b714*/
  v14 = v12; /*0x65b71b*/
  *(_DWORD *)(this + 88) = v22; /*0x65b71f*/
  *(_DWORD *)(this + 92) = v10; /*0x65b722*/
  *(_DWORD *)(this + 96) = v12; /*0x65b72a*/
  *(_DWORD *)(this + 84) = v7; /*0x65b72d*/
  *(_DWORD *)(this + 80) = v13 / v24; /*0x65b730*/
  v15 = v13 / v25; /*0x65b73a*/
  *(_DWORD *)(this + 100) = v15; /*0x65b741*/
  *(_DWORD *)(this + 104) = v7 / v15; /*0x65b749*/
  v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(this + 64)); /*0x65b750*/
  v17 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v16 + 72))(v16, v31); /*0x65b75e*/
  v27 = *v17; /*0x65b763*/
  v29 = v17[1]; /*0x65b76a*/
  v30 = v17[2]; /*0x65b776*/
  if ( *(_DWORD *)(this + 36) ) /*0x65b76e*/
  {
    TacticalClass::UpdateScrollTarget(v7, v22, v10, v14, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate(this); /*0x65b7ef*/
  }
  else
  {
    v18 = __2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v18 ) /*0x65b788*/
      v19 = LightSourceClass::Construct(v18, v27, v29, v30, v26, v7, v22, v10, v14); /*0x65b7b2*/
    else
      v19 = 0; /*0x65b7b9*/
    *(_DWORD *)(this + 36) = v19; /*0x65b7bb*/
    v19[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*(_BYTE **)(this + 36), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate(this); /*0x65b7d1*/
  }
}


// ==== 0x0065B800  RadSiteClass::Tick  this=RadSiteClass  sig=csp ====
int __thiscall RadSiteClass::_vt23(int *this)
{
  int v2; // edx
  int v3; // eax
  wchar_t *v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax
  int v11; // [esp+Ch] [ebp-8h]

  --this->referenceCount; /*0x65b80b*/
  v2 = *(this + 10); /*0x65b80e*/
  v3 = this->vtable4; /*0x65b811*/
  v4 = MEMORY[0xA8ED84]; /*0x65b814*/
  if ( v2 == -1 ) /*0x65b81d*/
  {
LABEL_4:
    if ( v3 ) /*0x65b82b*/
      goto LABEL_6; /*0x65b82b*/
    goto LABEL_5; /*0x65b82b*/
  }
  if ( (int)MEMORY[0xA8ED84] - v2 < v3 ) /*0x65b825*/
  {
    v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x65b827*/
    goto LABEL_4; /*0x65b827*/
  }
LABEL_5:
  RadSiteClass::DecreaseRadiation(this); /*0x65b82d*/
  v5 = MEMORY[0x8871E0][1].?[1]; /*0x65b843*/
  *(this + 10) = (int)MEMORY[0xA8ED84]; /*0x65b849*/
  *(this + 11) = v11; /*0x65b84c*/
  this->vtable4 = v5; /*0x65b84f*/
  v4 = MEMORY[0xA8ED84]; /*0x65b852*/
LABEL_6:
  v6 = *(this + 13); /*0x65b858*/
  v7 = *(this + 15); /*0x65b85b*/
  if ( v6 == -1 ) /*0x65b861*/
    goto LABEL_9; /*0x65b861*/
  v8 = (int)v4 - v6; /*0x65b863*/
  if ( v8 < v7 ) /*0x65b869*/
  {
    v7 -= v8; /*0x65b86b*/
LABEL_9:
    if ( v7 ) /*0x65b86f*/
      goto LABEL_11; /*0x65b86f*/
  }
  TacticalClass::UpdateScrollTarget( /*0x65b871*/
    *(this + 9),
    *(_DWORD *)(*(this + 9) + 36) - *(this + 26),
    this->referenceCount * *(this + 22) / *(this + 27),
    this->referenceCount * *(this + 23) / *(this + 27),
    this->referenceCount * this->nextArrayIndex / *(this + 27),
    0);
  v9 = MEMORY[0x8871E0][1].?[2]; /*0x65b8b9*/
  *(this + 13) = (int)MEMORY[0xA8ED84]; /*0x65b8bf*/
  *(this + 14) = v11; /*0x65b8c2*/
  *(this + 15) = v9; /*0x65b8c5*/
LABEL_11:
  result = this->referenceCount; /*0x65b8c8*/
  if ( result <= 0 ) /*0x65b8cd*/
  {
    if ( this ) /*0x65b8d1*/
      return (*(int (__thiscall **)(int *, int))(*this + 32))(this, 1); /*0x65b8d9*/
  }
  return result; /*0x65b8dc*/
}


// ==== 0x0065B8F0  RadSiteClass::GetRadLevelAt  this=RadSiteClass  sig=csp ====
double __thiscall RadSiteClass::GetRadLevelAt(int this, __int16 *a2)
{
  void *v3; // esi
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // esi
  int v10; // edx
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  double result; // st7
  int v15; // [esp+24h] [ebp-Ch] BYREF
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]
  void *v18; // [esp+34h] [ebp+4h]

  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(this + 64)); /*0x65b90b*/
  v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x65b91a*/
  v4 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v3 + 72))(v3, &v15); /*0x65b925*/
  v5 = *v4; /*0x65b928*/
  v6 = v4[1]; /*0x65b92e*/
  v7 = v4[2]; /*0x65b933*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v18 + 72))(v18, &v15); /*0x65b93b*/
  v9 = v5 - *v8; /*0x65b945*/
  v10 = v8[2]; /*0x65b94c*/
  v16 = v6 - v8[1]; /*0x65b94f*/
  v15 = v9; /*0x65b959*/
  v17 = v7 - v10; /*0x65b95d*/
  v11 = Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v16 * (double)v16); /*0x65b982*/
  v12 = Math::RoundToInt(v11); /*0x65b98a*/
  v13 = *(_DWORD *)(this + 72); /*0x65b98f*/
  result = 0.0; /*0x65b992*/
  if ( v12 <= v13 ) /*0x65b99e*/
    return (double)(v13 - v12) / (double)*(int *)(this + 72) * (double)*(int *)(this + 76); /*0x65b9b0*/
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
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(a1 + 64)); /*0x65ba38*/
        v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v18); /*0x65ba4b*/
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
        v17 = (double *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v18); /*0x65bafb*/
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


// ==== 0x0065BB50  RadSiteClass::Deactivate  this=Warhead  sig=csp ====
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

  v1 = a1[28] / MEMORY[0x8871E0][1].?[1]; /*0x65bb67*/
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
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)a1 + 32); /*0x65bbe5*/
          v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v20); /*0x65bbf8*/
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
          v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v20); /*0x65bca7*/
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
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)a1 + 32); /*0x65bd78*/
        v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v19); /*0x65bd8b*/
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
        v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v19); /*0x65be36*/
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
char __thiscall RadSiteClass::DecreaseLight(int *this)
{
  return TacticalClass::UpdateScrollTarget( /*0x65becc*/
           *(this + 9),
           *(_DWORD *)(*(this + 9) + 36) - *(this + 26),
           this->referenceCount * *(this + 22) / *(this + 27),
           this->referenceCount * *(this + 23) / *(this + 27),
           this->referenceCount * this->nextArrayIndex / *(this + 27),
           0);
}


// ==== 0x0065BED0  RadSiteClass::ProcessEvent  this=RadSiteClass  sig=csp ====
RadSiteClass *__thiscall RadSiteClass::ProcessEvent(void **Block, char a2)
{
  RadSiteClass::Constructor(Block); /*0x65bed3*/
  if ( (a2 & 1) != 0 ) /*0x65bedd*/
    __3_YAXPAX_Z(Block); /*0x65bee0*/
  return (RadSiteClass *)Block; /*0x65beea*/
}


// ==== 0x0065BEF0  _DynamicVectorClass_PAVRadSiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::sub_65BEF0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x65bef6*/
  *(_DWORD *)(this + 16) = 0; /*0x65bef9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x65bf00*/
  {
    __3_YAXPAX_Z(v2); /*0x65bf06*/
    *(_DWORD *)(this + 4) = 0; /*0x65bf0e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x65bf11*/
  *(_DWORD *)(this + 8) = 0; /*0x65bf14*/
}


// ==== 0x0065BF20  _DynamicVectorClass_PAVRadSiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::sub_65BF20(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x65bf20*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x65bf35*/
  else
    return 0; /*0x65bf27*/
}


// ==== 0x0065BF40  _VectorClass_PAVRadSiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x65bf4a*/
}


// ==== 0x0065BF50  _VectorClass_PAVRadSiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x65bf52*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x65bf5d*/
  {
    v3 = 0; /*0x65bf5f*/
    if ( v2 <= 0 ) /*0x65bf63*/
      return 1; /*0x65bf83*/
    v4 = (_DWORD *)*(this + 1); /*0x65bf65*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x65bf6b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x65bf74*/
    {
      ++v3; /*0x65bf76*/
      ++v4; /*0x65bf77*/
      if ( v3 >= v2 ) /*0x65bf7c*/
        return 1; /*0x65bf7c*/
    }
  }
  return 0; /*0x65bf7e*/
}


// ==== 0x0065BF90  _VectorClass_PAVRadSiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x65bf9c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x65bfa6*/
    if ( a3 ) /*0x65bfac*/
      v4 = a3; /*0x65bfc2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x65bfbe*/
    *((_BYTE *)this + 12) = 1; /*0x65bfc6*/
    if ( v4 ) /*0x65bfca*/
    {
      if ( this->Items ) /*0x65bfd5*/
      {
        v6 = this->Capacity; /*0x65bfdc*/
        if ( a2 < v6 ) /*0x65bfe1*/
          v6 = a2; /*0x65bfe3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x65bfe9*/
          ++i; /*0x65bfee*/
        if ( *((_BYTE *)this + 13) ) /*0x65bffb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x65c006*/
          this->Items = 0; /*0x65c00e*/
        }
      }
      this->Items = v4; /*0x65c017*/
      this->Capacity = a2; /*0x65c01f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x65c022*/
      return 1; /*0x65c028*/
    }
    else
    {
      return 0; /*0x65bfcf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x65c032*/
    return 1; /*0x65c038*/
  }
}


// ==== 0x0065C040  _VectorClass_PAVRadSiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadSiteClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x65c04d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x65c053*/
    *(_DWORD *)(this + 4) = 0; /*0x65c05b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x65c05e*/
  *(_DWORD *)(this + 8) = 0; /*0x65c061*/
}


// ==== 0x0065C070  _VectorClass_PAVRadSiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x65c070*/
    return 0; /*0x65c078*/
  v3 = *(_DWORD *)(this + 8); /*0x65c07e*/
  result = 0; /*0x65c081*/
  if ( v3 <= 0 ) /*0x65c085*/
    return -1; /*0x65c09c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x65c08b*/
  {
    if ( ++result >= v3 ) /*0x65c09a*/
      return -1; /*0x65c09a*/
  }
  return result; /*0x65c07a*/
}


// ==== 0x0065C0B0  _VectorClass_PAVRadSiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadSiteClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x65c0b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x65c0c5*/
  else
    return 0; /*0x65c0b7*/
}


// ==== 0x0065C0D0  _DynamicVectorClass_PAVRadSiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_RadSiteClass::sub_65C0D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x65c0dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x65c0e2*/
    if ( a3 ) /*0x65c0e8*/
      v4 = a3; /*0x65c0fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x65c0fa*/
    *((_BYTE *)this + 12) = 1; /*0x65c102*/
    if ( !v4 ) /*0x65c106*/
      return 0; /*0x65c17a*/
    if ( this->Items ) /*0x65c108*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x65c10f*/
      if ( a2 < v5 ) /*0x65c114*/
        v5 = a2; /*0x65c116*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x65c11c*/
        ++i; /*0x65c121*/
      if ( *((_BYTE *)this + 13) ) /*0x65c12e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x65c139*/
        this->Items = 0; /*0x65c141*/
      }
    }
    this->Items = v4; /*0x65c14a*/
    this->DynamicVector_field_0x8 = a2; /*0x65c152*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x65c155*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x65c15e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x65c161*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x65c169*/
    this->DynamicVector_field_0x10 = v7; /*0x65c16b*/
  return 1; /*0x65c16e*/
}


// ==== 0x0065C180  _DynamicVectorClass_PAVRadSiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_RadSiteClass::sub_65C180(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x65c180*/
  result = 0; /*0x65c183*/
  if ( v2 <= 0 ) /*0x65c188*/
    return -1; /*0x65c19f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x65c18e*/
  {
    if ( ++result >= v2 ) /*0x65c19d*/
      return -1; /*0x65c19d*/
  }
  return result; /*0x65c1a2*/
}


// ==== 0x0065C1B0  _VectorClass_PAVRadSiteClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_RadSiteClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x65c1b3*/
  *Block = &vt_VectorClass_RadSiteClass; /*0x65c1b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x65c1c0*/
  {
    __3_YAXPAX_Z(v3); /*0x65c1c8*/
    *(Block + 1) = 0; /*0x65c1d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x65c1db*/
  *(Block + 2) = 0; /*0x65c1e1*/
  if ( (a2 & 1) != 0 ) /*0x65c1e8*/
    __3_YAXPAX_Z(Block); /*0x65c1eb*/
  return (VectorClass *)Block; /*0x65c1f5*/
}


// ==== 0x0065C200  _DynamicVectorClass_PAVRadSiteClass::Constructor_VectorClass_RadSiteClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_RadSiteClass::Constructor_VectorClass_RadSiteClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x65c203*/
  *Block = &vt_VectorClass_RadSiteClass; /*0x65c206*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x65c210*/
  {
    __3_YAXPAX_Z(v3); /*0x65c218*/
    *(Block + 1) = 0; /*0x65c220*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x65c22b*/
  *(Block + 2) = 0; /*0x65c231*/
  if ( (a2 & 1) != 0 ) /*0x65c238*/
    __3_YAXPAX_Z(Block); /*0x65c23b*/
  return (DynamicVector *)Block; /*0x65c245*/
}


// ==== 0x0065C250  RAMFileClass::WinMain_Helper_65C250  this=RAMFileClass  sig=csp ====
_BYTE *__thiscall WinMain_Helper_65C250(RAMFileClass *this, int a2, MixFileClass *aP2)
{
  this->__pad_0[4] = 0; /*0x65c25f*/
  this->field_8 = a2; /*0x65c262*/
  this->field_C = (int)aP2; /*0x65c265*/
  this->field_10 = (int)aP2; /*0x65c268*/
  this->q014 = 0; /*0x65c26b*/
  this->q018 = 1; /*0x65c26e*/
  *((_BYTE *)this + 28) = 0; /*0x65c275*/
  *((_BYTE *)this + 29) = 0; /*0x65c278*/
  *(_DWORD *)this->__pad_0 = &vt_RAMFileClass; /*0x65c27b*/
  if ( !a2 && (int)aP2 > 0 ) /*0x65c285*/
  {
    this->field_8 = __2_YAPAXI_Z((size_t)aP2); /*0x65c290*/
    *((_BYTE *)this + 29) = 1; /*0x65c293*/
  }
  return this->__pad_0; /*0x65c299*/
}


// ==== 0x0065C2A0  RAMFileClass::WinMain_Helper_65C2A0  this=RAMFileClass  sig=csp ====
void __thiscall WinMain_Helper_65C2A0(RAMFileClass *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 29); /*0x65c2a3*/
  *(_DWORD *)this->__pad_0 = &vt_RAMFileClass; /*0x65c2a6*/
  *((_BYTE *)this + 28) = 0; /*0x65c2ae*/
  if ( v2 ) /*0x65c2b2*/
  {
    __3_YAXPAX_Z((void *)this->field_8); /*0x65c2b8*/
    this->field_8 = 0; /*0x65c2c0*/
    *((_BYTE *)this + 29) = 0; /*0x65c2c7*/
  }
  *(_DWORD *)this->__pad_0 = &vt_FileClass; /*0x65c2cb*/
}


// ==== 0x0065C2E0  RAMFileClass::checkTeamMembership  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamMembership(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c2e5*/
    return 0; /*0x65c2fa*/
  this->field_10 = 0; /*0x65c2ec*/
  return 1; /*0x65c2f8*/
}


// ==== 0x0065C300  RAMFileClass::nullsub_0_1  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_1(RAMFileClass *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c305*/
    return 0; /*0x65c31a*/
  this->field_10 = 0; /*0x65c30c*/
  return 1; /*0x65c318*/
}


// ==== 0x0065C320  RAMFileClass::updateTeamState  this=RAMFileClass  sig=csp ====
char __thiscall AbstractClass::updateTeamState(RAMFileClass *this)
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
  if ( !this->field_8 || (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c35c*/
    return 0; /*0x65c391*/
  this->q014 = 0; /*0x65c367*/
  this->q018 = a2; /*0x65c36e*/
  *((_BYTE *)this + 28) = 1; /*0x65c374*/
  if ( a2 == 2 ) /*0x65c378*/
    this->field_10 = 0; /*0x65c37a*/
  return (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x65c38d*/
}


// ==== 0x0065C3A0  RAMFileClass::nullsub_0_3  this=RAMFileClass  sig=csp ====
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
  v6 = this->q014; /*0x65c3db*/
  if ( Size >= this->field_10 - v6 ) /*0x65c3e5*/
    v4 = this->field_10 - v6; /*0x65c3e7*/
  memcpy(a1, (const void *)(this->field_8 + v6), v4); /*0x65c3f1*/
  this->q014 += v4; /*0x65c400*/
  if ( v5 ) /*0x65c403*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c409*/
  return v4; /*0x65c40e*/
}


// ==== 0x0065C420  RAMFileClass::nullsub_0_4  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_4(RAMFileClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int result; // eax

  if ( !this->field_8 || !(*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c42c*/
    return this->q014; /*0x65c494*/
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
      this->q014 += a2; /*0x65c463*/
      break;
    case 2: /*0x65c449*/
      v6 = v5 + a2; /*0x65c455*/
LABEL_11:
      this->q014 = v6; /*0x65c46d*/
      break;
  }
  if ( *((int *)this + 5) < 0 ) /*0x65c475*/
    this->q014 = 0; /*0x65c477*/
  if ( this->q014 > v5 ) /*0x65c481*/
    this->q014 = v5; /*0x65c483*/
  result = this->q014; /*0x65c486*/
  if ( result > v4 ) /*0x65c48b*/
    this->field_10 = result; /*0x65c48d*/
  return result; /*0x65c490*/
}


// ==== 0x0065C4A0  RAMFileClass::checkTeamObjective  this=RAMFileClass  sig=csp ====
int __thiscall AbstractClass::checkTeamObjective(RAMFileClass *this)
{
  return this->field_10; /*0x65c4a3*/
}


// ==== 0x0065C4B0  RAMFileClass::validateTeamConfig  this=RAMFileClass  sig=csp ====
size_t __thiscall AbstractClass::validateTeamConfig(RAMFileClass *this, void *Src, signed int Size)
{
  size_t v4; // edi
  char v5; // bl
  int v6; // edx
  int v7; // ecx
  int v8; // edx

  if ( !this->field_8 ) /*0x65c4b6*/
    return 0; /*0x65c4b6*/
  if ( !Src ) /*0x65c4c3*/
    return 0; /*0x65c4c3*/
  v4 = Size; /*0x65c4c5*/
  if ( !Size ) /*0x65c4cb*/
    return 0; /*0x65c4cb*/
  v5 = 0; /*0x65c4cf*/
  if ( (*(unsigned __int8 (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 24))(this) ) /*0x65c4d1*/
  {
    if ( (*((_BYTE *)this + 24) & 2) != 0 ) /*0x65c4e9*/
      goto LABEL_7; /*0x65c4e9*/
    return 0; /*0x65c537*/
  }
  (*(void (__thiscall **)(RAMFileClass *, int))(*(_DWORD *)this->__pad_0 + 28))(this, 2); /*0x65c4de*/
  v5 = 1; /*0x65c4e1*/
LABEL_7:
  v6 = this->q014; /*0x65c4eb*/
  if ( Size >= this->field_C - v6 ) /*0x65c4f5*/
    v4 = this->field_C - v6; /*0x65c4f7*/
  memcpy((void *)(this->field_8 + this->q014), Src, v4); /*0x65c504*/
  v7 = this->field_10; /*0x65c50c*/
  v8 = v4 + this->q014; /*0x65c50f*/
  this->q014 = v8; /*0x65c516*/
  if ( v8 > v7 ) /*0x65c51b*/
    this->field_10 = v8; /*0x65c51d*/
  if ( v5 ) /*0x65c522*/
    (*(void (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 52))(this); /*0x65c528*/
  return v4; /*0x65c52d*/
}


// ==== 0x0065C540  RAMFileClass::resetTeamState  this=RAMFileClass  sig=csp ====
void __thiscall AbstractClass::resetTeamState(RAMFileClass *this)
{
  *((_BYTE *)this + 28) = 0; /*0x65c540*/
}


// ==== 0x0065C550  RAMFileClass::nullsub_0_5  this=RAMFileClass  sig=csp ====
char *__thiscall nullsub_0_5(RAMFileClass *this)
{
  return &stru_830620.__pad_579C[14464]; /*0x65c555*/
}


// ==== 0x0065C560  RAMFileClass::nullsub_0_6  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_6(RAMFileClass *this, int a2)
{
  return (*(int (__thiscall **)(RAMFileClass *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x65c565*/
}


// ==== 0x0065C570  RAMFileClass::nullsub_0_7  this=RAMFileClass  sig=csp ====
int __thiscall nullsub_0_7(RAMFileClass *this)
{
  return 0; /*0x65c572*/
}


// ==== 0x0065C580  RAMFileClass::nullsub_0_8  this=RAMFileClass  sig=csp ====
char __thiscall nullsub_0_8(RAMFileClass *this)
{
  return 1; /*0x65c582*/
}


// ==== 0x0065C590  RAMFileClass::nullsub_0_9  this=RAMFileClass  sig=csp ====
void __thiscall nullsub_0_9(RAMFileClass *this)
{
  ; /*0x65c590*/
}


// ==== 0x0065C5A0  RAMFileClass::nullsub_0_10  this=RAMFileClass  sig=csp ====
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


// ==== 0x0065C5F0  FileClass::StubReturnFalse  this=FileClass  sig=csp ====
int FileClass::_vt14()
{
  return 0; /*0x65c5f2*/
}


// ==== 0x0065C600  FileClass::Stub  this=FileClass  sig=csp ====
char __stdcall FileClass::_vt15(int a1)
{
  return 0; /*0x65c602*/
}


// ==== 0x0065C610  FileClass::processAITrigger  this=FileClass  sig=csp ====
FileClass *__thiscall AbstractClass::processAITrigger(_DWORD *Block, char a2)
{
  *Block = &vt_FileClass; /*0x65c619*/
  if ( (a2 & 1) != 0 ) /*0x65c61f*/
    __3_YAXPAX_Z(Block); /*0x65c622*/
  return (FileClass *)Block; /*0x65c62c*/
}


// ==== 0x0065C630  ObjectClass::unknown_libname_28  this=VOID_PTR  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_28(_DWORD *this, int a2)
{
  *this = a2; /*0x65c636*/
  return this; /*0x65c638*/
}


// ==== 0x0065C6D0  ObjectClass::SeedInitRNG  this=float  sig=csp ====
_DWORD *__thiscall SeedInitRNG(_DWORD *this, IUnknown *aP1)
{
  int v2; // eax
  IUnknown *v3; // ebp
  int v4; // esi
  int v5; // ebx
  IUnknown *v6; // eax
  int v7; // edx
  int v8; // ecx
  ScenarioClass *v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x65c6d3*/
  *(this + 1) = 0; /*0x65c6da*/
  *(this + 2) = 103; /*0x65c6dd*/
  v10 = (ScenarioClass *)&CONTAINING_RECORD(this, ScenarioClass, nextScenario)->nextScenario[3]; /*0x65c6ea*/
  v11 = 250; /*0x65c6ee*/
  while ( 1 ) /*0x65c6fc*/
  {
    v3 = aP1; /*0x65c6fc*/
    v4 = v2; /*0x65c700*/
    v5 = 0; /*0x65c703*/
    v13 = v2 + 1; /*0x65c705*/
    do /*0x65c74f*/
    {
      v6 = (IUnknown *)v4; /*0x65c70f*/
      v7 = v4 ^ *(_DWORD *)&stru_830620.__pad_579C[v5 + 14472]; /*0x65c711*/
      v5 += 4; /*0x65c713*/
      v8 = (unsigned int)v3 /*0x65c746*/
         ^ ((unsigned __int16)v7 * (v7 >> 16)
          + (*(_DWORD *)&stru_830620.__pad_579C[v5 + 14548]
           ^ ((((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) << 16)
            | (((unsigned __int16)v7 * (unsigned __int16)v7 + ~((v7 >> 16) * (v7 >> 16))) >> 16))));
      v4 = v8; /*0x65c74b*/
      v3 = v6; /*0x65c74d*/
    }
    while ( v5 < 16 ); /*0x65c74f*/
    v10->nextScenario[0] = v8; /*0x65c755*/
    v10 = (ScenarioClass *)((char *)v10 + 4); /*0x65c75a*/
    if ( !--v11 ) /*0x65c767*/
      break; /*0x65c767*/
    v2 = v13; /*0x65c6f8*/
  }
  *(_BYTE *)this = 0; /*0x65c770*/
  return this; /*0x65c76d*/
}


// ==== 0x0065C780  Random::State  this=VOID_PTR  sig=csp ====
int __thiscall Random_State(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  int v3; // esi

  if ( *(_BYTE *)this ) /*0x65c780*/
    return 0; /*0x65c785*/
  *(this + *(this + 1) + 3) ^= *(this + *(this + 2) + 3); /*0x65c79d*/
  v2 = *(this + 1); /*0x65c79f*/
  result = *(this + v2++ + 3); /*0x65c7a5*/
  v3 = *(this + 2) + 1; /*0x65c7aa*/
  *(this + 1) = v2; /*0x65c7b1*/
  *(this + 2) = v3; /*0x65c7b4*/
  if ( v2 >= 250 ) /*0x65c7b7*/
    *(this + 1) = 0; /*0x65c7b9*/
  if ( v3 >= 250 ) /*0x65c7c7*/
    *(this + 2) = 0; /*0x65c7c9*/
  return result; /*0x65c787*/
}


// ==== 0x0065C7E0  Random::Range  this=VOID_PTR  sig=csp ====
int __thiscall Random::Range(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  IUnknown *result; // eax
  IUnknown *v5; // ecx
  IUnknown *v6; // ebx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int i; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // ecx

  result = aP1; /*0x65c7e0*/
  v5 = aP2; /*0x65c7e6*/
  v6 = aP1; /*0x65c7ed*/
  if ( aP1 != aP2 ) /*0x65c7ef*/
  {
    if ( (int)aP1 > (int)aP2 ) /*0x65c7f5*/
    {
      v6 = aP2; /*0x65c7f7*/
      v5 = aP1; /*0x65c7f9*/
    }
    v7 = (char *)v5 - (char *)v6; /*0x65c7ff*/
    v8 = (char *)v5 - (char *)v6 >= 0; /*0x65c801*/
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
      if ( *(_BYTE *)this ) /*0x65c82e*/
      {
        v12 = 0; /*0x65c833*/
      }
      else
      {
        *(this + *(this + 1) + 3) ^= *(this + *(this + 2) + 3); /*0x65c84b*/
        v13 = *(this + 1); /*0x65c84d*/
        v14 = *(this + v13++ + 3); /*0x65c853*/
        v15 = *(this + 2) + 1; /*0x65c858*/
        *(this + 1) = v13; /*0x65c85e*/
        *(this + 2) = v15; /*0x65c861*/
        if ( v13 >= 250 ) /*0x65c864*/
          *(this + 1) = 0; /*0x65c866*/
        if ( v15 >= 250 ) /*0x65c873*/
          *(this + 2) = 0; /*0x65c875*/
        v12 = v14; /*0x65c87c*/
      }
    }
    return (int)v6 + v10; /*0x65c886*/
  }
  return (int)result; /*0x65c889*/
}


// ==== 0x0065C890  ObjectClass::method_65C890  this=int  sig=csp ====
_DWORD *__thiscall sub_65C890(_DWORD *this, int a2, int a3)
{
  *this = a2; /*0x65c89a*/
  *(this + 1) = a3; /*0x65c89c*/
  return this; /*0x65c89f*/
}


// ==== 0x0065C8B0  RandomStraw::AdvanceState  this=int  sig=csp ====
int __thiscall sub_65C8B0(int *this)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx

  result = *(this + 1); /*0x65c8b0*/
  v2 = *this; /*0x65c8ba*/
  *(this + 1) = result + 1; /*0x65c8bc*/
  v3 = 0; /*0x65c8bf*/
  do /*0x65c907*/
  {
    v4 = result; /*0x65c8c7*/
    v5 = result ^ MEMORY[0x839644][v3++]; /*0x65c8c9*/
    result = v2 /*0x65c903*/
           ^ ((unsigned __int16)v5 * (v5 >> 16)
            + (MEMORY[0x839690][v3]
             ^ ((((unsigned __int16)v5 * (unsigned __int16)v5 + ~((v5 >> 16) * (v5 >> 16))) << 16)
              | (((unsigned __int16)v5 * (unsigned __int16)v5 + ~((v5 >> 16) * (v5 >> 16))) >> 16))));
    v2 = v4; /*0x65c905*/
  }
  while ( v3 < 4 ); /*0x65c907*/
  return result; /*0x65c909*/
}


// ==== 0x0065C910  ObjectClass::method_65C910  this=ObjectClass  sig=csp ====
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
        v13 = this->vtable2; /*0x65c980*/
        v14 = aP1a; /*0x65c983*/
        v15 = 0; /*0x65c987*/
        this->vtable2 = v13 + 1; /*0x65c98c*/
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


// ==== 0x0065CA00  RawFileClass::Dtor  this=RawFileClass  sig=csp ====
void __thiscall RawFileClass_Dtor(int *this)
{
  int v2; // edi
  DWORD LastError; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *this = (int)&vt_RawFileClass; /*0x65ca03*/
  if ( (unsigned __int8)RawFileClass::Write() ) /*0x65ca09*/
  {
    if ( !CloseHandle((HANDLE)*(this + 5)) ) /*0x65ca17*/
    {
      v2 = *this; /*0x65ca25*/
      v4 = *(this + 6); /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v2 + 64))(this, LastError, 0, v4); /*0x65ca32*/
    }
    *(this + 5) = -1; /*0x65ca36*/
  }
  if ( *((_BYTE *)this + 32) && *(this + 6) ) /*0x65ca44*/
  {
    free((void *)*(this + 6)); /*0x65ca4c*/
    *(this + 6) = 0; /*0x65ca54*/
    *((_BYTE *)this + 32) = 0; /*0x65ca5b*/
  }
  *this = (int)&vt_FileClass; /*0x65ca5f*/
}


// ==== 0x0065CA70  RawFileClass::StubReturnFalse  this=RawFileClass  sig=csp ====
void __stdcall BufferIOFileClass::StubReturnFalse(int a1, int a2, int a3)
{
  ; /*0x65ca70*/
}


// ==== 0x0065CA80  RawFileClass::Construct  this=RawFileClass  sig=csp ====
_DWORD *__thiscall RawFileClass::Construct(_DWORD *this, RawFileClass *aP1)
{
  this->FileName = -1; /*0x65ca87*/
  *(this + 5) = -1; /*0x65ca8a*/
  *((_BYTE *)this + 4) = 0; /*0x65ca91*/
  this->FileSize = 0; /*0x65ca94*/
  this->Handle = 0; /*0x65ca97*/
  *(this + 6) = aP1; /*0x65ca9a*/
  *((_WORD *)this + 14) = 0; /*0x65ca9d*/
  *((_WORD *)this + 15) = 0; /*0x65caa1*/
  *((_BYTE *)this + 32) = 0; /*0x65caa5*/
  *this = &vt_RawFileClass; /*0x65caa8*/
  return this; /*0x65caae*/
}


// ==== 0x0065CAC0  RawFileClass::SetName  this=RawFileClass  sig=csp ====
char *__thiscall FileClass_SetName(_DWORD *this, char *Source)
{
  void *v3; // eax
  char *result; // eax

  v3 = (void *)*(this + 6); /*0x65cac4*/
  if ( v3 && *((_BYTE *)this + 32) ) /*0x65cacb*/
  {
    free(v3); /*0x65cad3*/
    *(this + 6) = 0; /*0x65cadb*/
    *((_BYTE *)this + 32) = 0; /*0x65cae2*/
  }
  if ( !Source ) /*0x65caec*/
    return 0; /*0x65caef*/
  this->Handle = 0; /*0x65caf6*/
  this->FileName = -1; /*0x65cafd*/
  result = _strdup(Source); /*0x65cb04*/
  *(this + 6) = result; /*0x65cb0c*/
  if ( result ) /*0x65cb11*/
  {
    *((_BYTE *)this + 32) = 1; /*0x65cb26*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, char *))(*this + 64))(this, 12, 0, Source); /*0x65cb1c*/
    return 0; /*0x65cb20*/
  }
  return result; /*0x65caee*/
}


// ==== 0x0065CB30  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall RawFileClass::_vt08(void *this, int a2, int a3)
{
  (*(void (__thiscall **)(void *, int))(this->FileSize)(this, a2); /*0x65cb3c*/
  return (*(int (__thiscall **)(void *, int))(this->q01C)(this, a3); /*0x65cb4b*/
}


// ==== 0x0065CB50  RawFileClass::Open2  this=RawFileClass  sig=csp ====
BOOL __thiscall FileClass_Open2(const CHAR **this, const CHAR *a2)
{
  const CHAR *v3; // eax
  const CHAR *FileA; // eax

  (*((void (__thiscall **)(const CHAR **))*this + 13))(this); /*0x65cb55*/
  v3 = *(this + 6); /*0x65cb58*/
  if ( !v3 ) /*0x65cb5d*/
  {
    (*((void (__thiscall **)(const CHAR **, int, _DWORD, _DWORD))*this + 16))(this, 2, 0, 0); /*0x65cb67*/
    return 0; /*0x65cb6d*/
  }
  *(this + 2) = a2; /*0x65cb74*/
  if ( a2 == (const CHAR *)1 ) /*0x65cb78*/
  {
    FileA = (const CHAR *)CreateFileA(v3, 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x65cbbb*/
  }
  else if ( a2 == (const CHAR *)2 ) /*0x65cb7b*/
  {
    FileA = (const CHAR *)CreateFileA(v3, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x65cba6*/
  }
  else
  {
    if ( a2 != (const CHAR *)3 ) /*0x65cb7e*/
      goto LABEL_10; /*0x65cb7e*/
    FileA = (const CHAR *)CreateFileA(v3, 0xC0000000, 0, 0, 4u, 0x80u, 0); /*0x65cb92*/
  }
  *(this + 5) = FileA; /*0x65cbc1*/
LABEL_10:
  if ( *(this + 3) || this->FilePointer != (const CHAR *)-1 ) /*0x65cbcf*/
    (*((void (__thiscall **)(const CHAR **, _DWORD, _DWORD))*this + 10))(this, 0, 0); /*0x65cbd9*/
  return *(this + 5) + 1 != 0; /*0x65cb6c*/
}


// ==== 0x0065CBF0  RawFileClass::Open  this=RawFileClass  sig=csp ====
char __thiscall FileClass_Open(int *this, int a2)
{
  int v4; // edi
  HANDLE FileA; // eax
  DWORD LastError; // eax
  int v7; // [esp-4h] [ebp-Ch]

  if ( !*(this + 6) ) /*0x65cbf4*/
    return 0; /*0x65cbff*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cc06*/
    return 1; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    FileA = CreateFileA((LPCSTR)*(this + 6), 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x65cc59*/
    *(this + 5) = (int)FileA; /*0x65cc62*/
    if ( FileA == (HANDLE)-1 ) /*0x65cc65*/
      return 0; /*0x65cc6b*/
    if ( CloseHandle(FileA) ) /*0x65cc6f*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *this; /*0x65cc7c*/
    v7 = *(this + 6); /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(1); /*0x65cc1d*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cc26*/
  {
    if ( CloseHandle((HANDLE)*(this + 5)) ) /*0x65cc31*/
    {
LABEL_13:
      *(this + 5) = -1; /*0x65cc8d*/
      return 1; /*0x65cc8d*/
    }
    v4 = *this; /*0x65cc3e*/
    v7 = *(this + 6); /*0x65cc40*/
LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v7); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
  return 1; /*0x65cbfb*/
}


// ==== 0x0065CCA0  RawFileClass::CloseHandle  this=RawFileClass  sig=csp ====
int __thiscall FileClass_CloseHandle(HANDLE *this)
{
  int result; // eax
  int (__thiscall **v3)(HANDLE *, DWORD, _DWORD, int); // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  result = (*((int (__thiscall **)(HANDLE *))*this + 6))(this); /*0x65cca5*/
  if ( (_BYTE)result ) /*0x65ccaa*/
  {
    result = CloseHandle(*(this + 5)); /*0x65ccb0*/
    if ( !result ) /*0x65ccb8*/
    {
      v3 = (int (__thiscall **)(HANDLE *, DWORD, _DWORD, int))*this; /*0x65ccbe*/
      v5 = (int)*(this + 6); /*0x65ccc0*/
      LastError = GetLastError(); /*0x65ccc2*/
      result = v3[16](this, LastError, 0, v5); /*0x65cccb*/
    }
    *(this + 5) = (HANDLE)-1; /*0x65cccf*/
  }
  return result; /*0x65ccd6*/
}


// ==== 0x0065CCE0  RawFileClass::Read  this=RawFileClass  sig=csp ====
DWORD __thiscall FileClass::Read(_DWORD *this, BufferIOFileClass *aP1, AbstractClass *aP2)
{
  DWORD v4; // ebx
  DWORD result; // eax
  int v6; // eax
  AbstractClass *v7; // edi
  int v9; // ebx
  DWORD LastError; // eax
  void *v11; // [esp-1Ch] [ebp-2Ch]
  int v12; // [esp-Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]
  DWORD nNumberOfBytesToRead; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x65cce7*/
  NumberOfBytesRead = 0; /*0x65cce9*/
  v14 = 0; /*0x65cced*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 24))(this) ) /*0x65ccf3*/
  {
    result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1); /*0x65cd00*/
    if ( !result ) /*0x65cd05*/
      return result; /*0x65cd05*/
    v14 = 1; /*0x65cd0f*/
  }
  if ( this->FileName == -1 ) /*0x65cd1e*/
  {
    v7 = aP2; /*0x65cd3b*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 40))(this, 0, 1); /*0x65cd27*/
    v7 = aP2; /*0x65cd2d*/
    if ( (int)aP2 >= this->FileName - v6 ) /*0x65cd35*/
      v7 = (AbstractClass *)(this->FileName - v6); /*0x65cd37*/
  }
  while ( (int)v7 > 0 ) /*0x65cd41*/
  {
    v11 = (void *)*(this + 5); /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, aP1, (DWORD)v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
    {
      aP1 = (BufferIOFileClass *)((char *)aP1 + NumberOfBytesRead); /*0x65cd98*/
      v7 = (AbstractClass *)((char *)v7 - NumberOfBytesRead); /*0x65cd9a*/
      v4 += NumberOfBytesRead; /*0x65cd9c*/
      if ( !NumberOfBytesRead ) /*0x65cda0*/
        break; /*0x65cda0*/
    }
    else
    {
      aP1 = (BufferIOFileClass *)((char *)aP1 + NumberOfBytesRead); /*0x65cd6b*/
      v7 = (AbstractClass *)((char *)v7 - NumberOfBytesRead); /*0x65cd6d*/
      v4 += NumberOfBytesRead; /*0x65cd6f*/
      nNumberOfBytesToRead = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      v9 = *this; /*0x65cd81*/
      v12 = *(this + 6); /*0x65cd83*/
      LastError = GetLastError(); /*0x65cd86*/
      (*(void (__thiscall **)(_DWORD *, DWORD, int, int))(v9 + 64))(this, LastError, 1, v12); /*0x65cd8f*/
      v4 = nNumberOfBytesToRead; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    (*(void (__thiscall **)(_DWORD *))(*this + 52))(this); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/
}


// ==== 0x0065CDD0  RawFileClass::Write2  this=RawFileClass  sig=csp ====
DWORD __thiscall FileClass::Write2(int *this, LPCVOID lpBuffer, IUnknown *aP2)
{
  DWORD result; // eax
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
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cde8*/
  {
    result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 2); /*0x65cdf5*/
    if ( !result ) /*0x65cdfa*/
      return result; /*0x65cdfa*/
    v16 = 1; /*0x65ce03*/
  }
  if ( !WriteFile((HANDLE)*(this + 5), lpBuffer, (DWORD)aP2, &NumberOfBytesWritten, 0) ) /*0x65ce22*/
  {
    v5 = *this; /*0x65ce35*/
    v14 = *(this + 6); /*0x65ce37*/
    LastError = GetLastError(); /*0x65ce3a*/
    (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v5 + 64))(this, LastError, 0, v14); /*0x65ce3f*/
  }
  if ( this->FilePointer == -1 ) /*0x65ce46*/
    goto LABEL_19; /*0x65ce46*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65ce51*/
  {
    v7 = SetFilePointer((HANDLE)*(this + 5), 0, 0, 1u); /*0x65ce79*/
    if ( v7 != -1 ) /*0x65ce7e*/
      goto LABEL_12; /*0x65ce7e*/
    v8 = *this; /*0x65ce83*/
    v13 = *(this + 6); /*0x65ce85*/
    v9 = GetLastError(); /*0x65ce88*/
    (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v8 + 64))(this, v9, 0, v13); /*0x65ce8d*/
  }
  else
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65ce6a*/
  }
  v7 = 0; /*0x65ce90*/
LABEL_12:
  if ( v7 > this->FilePointer + *(this + 3) ) /*0x65ce9d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cea3*/
    {
      v10 = SetFilePointer((HANDLE)*(this + 5), 0, 0, 1u); /*0x65cec5*/
      if ( v10 != -1 ) /*0x65ceca*/
      {
LABEL_18:
        this->FilePointer = v10 - *(this + 3); /*0x65cede*/
        goto LABEL_19; /*0x65cee1*/
      }
      v11 = *this; /*0x65cecf*/
      v15 = *(this + 6); /*0x65ced1*/
      v12 = GetLastError(); /*0x65ced4*/
      (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v11 + 64))(this, v12, 0, v15); /*0x65ced9*/
    }
    else
    {
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65ceb6*/
    }
    v10 = 0; /*0x65cedc*/
    goto LABEL_18; /*0x65cedc*/
  }
LABEL_19:
  if ( v16 ) /*0x65ceec*/
    (*(void (__thiscall **)(int *))(*this + 52))(this); /*0x65cef2*/
  return NumberOfBytesWritten; /*0x65cdfc*/
}


// ==== 0x0065CF00  RawFileClass::Seek  this=RawFileClass  sig=csp ====
int __thiscall FileClass_Seek(int *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  LONG v4; // ecx
  DWORD v5; // edi
  LONG v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  int v9; // edi
  DWORD v10; // eax
  LONG v11; // edi
  int result; // eax
  DWORD v13; // eax
  int v14; // edi
  DWORD v15; // eax
  int v16; // ecx
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

  v4 = this->FilePointer; /*0x65cf04*/
  if ( v4 != -1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = v4 + *(this + 3) + lDistanceToMove; /*0x65cf2d*/
      }
      else
      {
        v6 = lDistanceToMove; /*0x65cf40*/
      }
    }
    else
    {
      v7 = lDistanceToMove; /*0x65cf31*/
      if ( lDistanceToMove > v4 ) /*0x65cf37*/
        v7 = v4; /*0x65cf39*/
      v6 = *(this + 3) + v7; /*0x65cf3b*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cf48*/
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
      v8 = SetFilePointer((HANDLE)*(this + 5), v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
LABEL_20:
        v11 = *(this + 3); /*0x65cfa8*/
        result = v8 - v11; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65cfb3*/
        {
          v13 = SetFilePointer((HANDLE)*(this + 5), v11, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
LABEL_26:
            v11 = *(this + 3); /*0x65cff1*/
            result = v13 - v11; /*0x65cff4*/
LABEL_27:
            v16 = this->FilePointer; /*0x65cff6*/
            if ( result > v16 ) /*0x65cffb*/
            {
              v17 = v16 + v11; /*0x65cfff*/
              if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65d003*/
              {
                v18 = SetFilePointer((HANDLE)*(this + 5), v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  v19 = *this; /*0x65d03a*/
                  v26 = *(this + 6); /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v19 + 64))(this, LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - *(this + 3); /*0x65d04d*/
              }
              else
              {
                (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65d016*/
                return -*(this + 3); /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          v14 = *this; /*0x65cfde*/
          v25 = *(this + 6); /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v14 + 64))(this, v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65cfc6*/
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      v9 = *this; /*0x65cf95*/
      v24 = *(this + 6); /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v9 + 64))(this, v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65cf61*/
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65d05f*/
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
    result = SetFilePointer((HANDLE)*(this + 5), lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      v22 = *this; /*0x65d0b3*/
      v27 = *(this + 6); /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v22 + 64))(this, v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 9, 0, *(this + 6)); /*0x65d072*/
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/
}


// ==== 0x0065D0D0  RawFileClass::GetFileSize  this=RawFileClass  sig=csp ====
int __thiscall CCFileClass_GetFileSize(int *this)
{
  DWORD FileSize; // edi
  int result; // eax
  int v4; // ebx
  DWORD LastError; // eax
  int v6; // [esp-8h] [ebp-10h]

  FileSize = 0; /*0x65d0d4*/
  result = this->FilePointer; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x65d0e0*/
    {
      FileSize = GetFileSize((HANDLE)*(this + 5), 0); /*0x65d0f2*/
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        v4 = *this; /*0x65d0fd*/
        v6 = *(this + 6); /*0x65d0ff*/
        LastError = GetLastError(); /*0x65d102*/
        (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v4 + 64))(this, LastError, 0, v6); /*0x65d10b*/
        result = -1 - *(this + 3); /*0x65d113*/
        this->FilePointer = result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( (*(int (__thiscall **)(int *, int))(*this + 28))(this, 1) ) /*0x65d122*/
    {
      FileSize = (*(int (__thiscall **)(int *))(*this + 44))(this); /*0x65d130*/
      (*(void (__thiscall **)(int *))(*this + 52))(this); /*0x65d136*/
    }
    result = FileSize - *(this + 3); /*0x65d13e*/
    this->FilePointer = result; /*0x65d140*/
  }
  return result; /*0x65d119*/
}


// ==== 0x0065D150  RawFileClass::Close  this=RawFileClass  sig=csp ====
int __thiscall FileClass_Close(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 52))(this); /*0x65d155*/
  if ( !(*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->FileName != -1 ) /*0x65d169*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 40))(this, 0, 0); /*0x65d173*/
  (*(void (__thiscall **)(_DWORD *))(*this + 52))(this); /*0x65d17a*/
  return 1; /*0x65d182*/
}


// ==== 0x0065D190  RawFileClass::Delete  this=RawFileClass  sig=csp ====
int __thiscall FileClass_Delete(LPCSTR *this)
{
  LPCSTR v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  (*((void (__thiscall **)(LPCSTR *))*this + 13))(this); /*0x65d195*/
  if ( *(this + 6) ) /*0x65d198*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(LPCSTR *, _DWORD))*this + 5))(this, 0) ) /*0x65d1b6*/
    {
      if ( DeleteFileA(*(this + 6)) ) /*0x65d1c5*/
      {
        return 1; /*0x65d1e8*/
      }
      else
      {
        v3 = *this; /*0x65d1d3*/
        v5 = (int)*(this + 6); /*0x65d1d5*/
        LastError = GetLastError(); /*0x65d1d7*/
        (*((void (__thiscall **)(LPCSTR *, DWORD, _DWORD, int))v3 + 16))(this, LastError, 0, v5); /*0x65d1e0*/
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
    (*((void (__thiscall **)(LPCSTR *, int, _DWORD, _DWORD))*this + 16))(this, 2, 0, 0); /*0x65d1a9*/
    return 0; /*0x65d1ac*/
  }
}


// ==== 0x0065D1F0  RawFileClass::GetDosTimestamp  this=RawFileClass  sig=csp ====
int __thiscall FileClass_GetDosTimestamp(HANDLE *this)
{
  WORD FatDate[2]; // [esp+0h] [ebp-3Ch] BYREF
  WORD FatTime[2]; // [esp+4h] [ebp-38h] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+8h] [ebp-34h] BYREF

  if ( !GetFileInformationByHandle(*(this + 5), &FileInformation) ) /*0x65d1fc*/
    return 0; /*0x65d237*/
  FileTimeToDosDateTime(&FileInformation.ftLastWriteTime, FatDate, FatTime); /*0x65d215*/
  return FatTime[0] | (FatDate[0] << 16); /*0x65d233*/
}


// ==== 0x0065D240  RawFileClass::SetTime  this=RawFileClass  sig=csp ====
bool __thiscall FileClass_SetTime(HANDLE *this, int wFatTime)
{
  void *v3; // eax
  struct _FILETIME FileTime; // [esp+4h] [ebp-3Ch] BYREF
  struct _BY_HANDLE_FILE_INFORMATION FileInformation; // [esp+Ch] [ebp-34h] BYREF

  v3 = *(this + 5); /*0x65d246*/
  return v3 != (void *)-1 /*0x65d293*/
      && GetFileInformationByHandle(v3, &FileInformation)
      && DosDateTimeToFileTime(HIWORD(wFatTime), wFatTime, &FileTime)
      && SetFileTime(*(this + 5), &FileInformation.ftCreationTime, &FileTime, &FileTime);
}


// ==== 0x0065D2B0  FileClass::GetFileSizeOp  this=CCFileClass  sig=csp ====
void __thiscall FileClass::GetFileSizeOp(int *this, int a2, CCFileClass *aP2)
{
  CCFileClass *FileSize; // eax
  CCFileClass *v5; // ecx
  int v6; // edx

  if ( a2 )
  {
    FileSize = (CCFileClass *)CCFileClass::GetFileSize(this); /*0x65d2cd*/
    v5 = (CCFileClass *)*(this + 3); /*0x65d2d2*/
    this->FilePointer = (int)FileSize; /*0x65d2d5*/
    *(this + 3) = (int)&v5->__pad_0[a2]; /*0x65d2da*/
    if ( aP2 != (CCFileClass *)-1 ) /*0x65d2e4*/
    {
      if ( (int)FileSize >= (int)aP2 ) /*0x65d2e8*/
        FileSize = aP2; /*0x65d2ea*/
      this->FilePointer = (int)FileSize; /*0x65d2ec*/
    }
    v6 = *this; /*0x65d2f2*/
    this->FilePointer = this->FilePointer <= 0 ? 0 : this->FilePointer;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(v6 + 24))(this) ) /*0x65d303*/
      FileClass::Seek(this, 0, 0); /*0x65d310*/
  }
  else
  {
    *(this + 3) = 0; /*0x65d2bc*/
    this->FilePointer = -1; /*0x65d2bf*/
  }
}


// ==== 0x0065D3A0  RawFileClass::QueryInterface  this=RawFileClass  sig=csp ====
RawFileClass *__thiscall RawFileClass::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  *Block = &vt_RawFileClass; /*0x65d3a3*/
  if ( RawFileClass::Write(Block) ) /*0x65d3a9*/
  {
    if ( !CloseHandle((HANDLE)*(Block + 5)) ) /*0x65d3b7*/
    {
      v3 = *Block; /*0x65d3c5*/
      v6 = *(Block + 6); /*0x65d3c7*/
      LastError = GetLastError(); /*0x65d3c9*/
      (*(void (__thiscall **)(_DWORD *, DWORD, _DWORD, int))(v3 + 64))(Block, LastError, 0, v6); /*0x65d3d2*/
    }
    *(Block + 5) = -1; /*0x65d3d6*/
  }
  if ( *((_BYTE *)Block + 32) && *(Block + 6) ) /*0x65d3e4*/
  {
    free((void *)*(Block + 6)); /*0x65d3ec*/
    *(Block + 6) = 0; /*0x65d3f4*/
    *((_BYTE *)Block + 32) = 0; /*0x65d3fb*/
  }
  *Block = &vt_FileClass; /*0x65d403*/
  if ( (a2 & 1) != 0 ) /*0x65d40b*/
    __3_YAXPAX_Z(Block); /*0x65d40e*/
  return (RawFileClass *)Block; /*0x65d418*/
}


// ==== 0x0065D420  RawFileClass::Write  this=RawFileClass  sig=csp ====
BOOL __thiscall RawFileClass::_vt06(_DWORD *this)
{
  return *(this + 5) != -1; /*0x65d42b*/
}


// ==== 0x0065D430  ComPtr::Constructor  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Constructor(rc_ptr_base *this)
{
  *((_DWORD *)this + 1) = 0; /*0x65d432*/
  this->vfptr = &rc_ptr_base::`vftable'; /*0x65d439*/
  return &this->vfptr; /*0x65d43f*/
}


// ==== 0x0065D460  ComPtr::Release  this=rc_ptr_base  sig=csp ====
_DWORD *__thiscall ComPtr::Release(rc_ptr_base *this)
{
  rc_ptr_base *result; // eax
  int v2; // ecx

  result = this; /*0x65d460*/
  v2 = *((_DWORD *)this + 1); /*0x65d462*/
  result->vfptr = &rc_ptr_base::`vftable'; /*0x65d465*/
  if ( v2 ) /*0x65d46d*/
  {
    result[1].vfptr = 0; /*0x65d46f*/
    return (*(_DWORD *(__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x65d478*/
  }
  return &result->vfptr; /*0x65d47b*/
}


// ==== 0x0065D480  ComPtr::Set  this=rc_ptr_base  sig=csp ====
int __thiscall ComPtr::Set(rc_ptr_base *this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( a2 != *((_DWORD *)this + 1) ) /*0x65d48b*/
  {
    if ( a2 ) /*0x65d48f*/
      ++*(_DWORD *)(a2 + 4); /*0x65d491*/
    v3 = *((_DWORD *)this + 1); /*0x65d494*/
    if ( v3 ) /*0x65d499*/
    {
      *((_DWORD *)this + 1) = 0; /*0x65d49b*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x65d4a4*/
    }
    *((_DWORD *)this + 1) = a2; /*0x65d4a7*/
  }
  return result; /*0x65d4aa*/
}


// ==== 0x0065D4D0  AbstractClass::checkAICondition  this=rc_ptr_base  sig=csp ====
int *__thiscall AbstractClass::checkAICondition(rc_ptr_base *this, char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 1); /*0x65d4d3*/
  this->vfptr = &rc_ptr_base::`vftable'; /*0x65d4d6*/
  if ( v3 ) /*0x65d4de*/
  {
    *((_DWORD *)this + 1) = 0; /*0x65d4e0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x65d4e9*/
  }
  if ( (a2 & 1) != 0 ) /*0x65d4f1*/
    __3_YAXPAX_Z(this); /*0x65d4f4*/
  return (int *)this; /*0x65d4fe*/
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


// ==== 0x0065D5C0  ReadStreamLine  this=VOID_PTR  sig=csp ====
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


// ==== 0x0065D660  ReferenceCounted::Constructor  this=ReferenceCounted  sig=csp ====
void __thiscall ReferenceCounted_Constructor(_DWORD *this)
{
  *this = &ReferenceCounted::`vftable'; /*0x65d660*/
}


// ==== 0x0065D670  ReferenceCounted::ReleaseRef  this=ReferenceCounted  sig=csp ====
int __thiscall COMClass_ReleaseRef(int (__thiscall ***this)(void *, int))
{
  int result; // eax

  result = (int)*(this + 1) - 1; /*0x65d673*/
  *(this + 1) = (int (__thiscall **)(void *, int))result; /*0x65d674*/
  if ( !result ) /*0x65d677*/
  {
    if ( this ) /*0x65d67b*/
      return (**this)(this, 1); /*0x65d681*/
  }
  return result; /*0x65d683*/
}


// ==== 0x0065D690  ReferenceCounted::RetZero_eax_35  this=ReferenceCounted  sig=csp ====
char __stdcall VtableStub::RetZero_eax_35(int a1)
{
  return 0; /*0x65d692*/
}


// ==== 0x0065D6A0  ReferenceCounted::initInterface  this=ReferenceCounted  sig=csp ====
ReferenceCounted *__thiscall COMClass::initInterface(_DWORD *Block, char a2)
{
  *Block = &vt_ReferenceCounted; /*0x65d6a9*/
  if ( (a2 & 1) != 0 ) /*0x65d6af*/
    __3_YAXPAX_Z(Block); /*0x65d6b2*/
  return (ReferenceCounted *)Block; /*0x65d6bc*/
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


// ==== 0x0065D8E0  DeployScriptActionPlane  this=int  sig=ida-proto ====
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


// ==== 0x0065DD30  ObjectClass::ConstructTeamMembers  this=ObjectClass  sig=csp ====
AbstractClass *__thiscall ConstructTeamMembers(int this)
{
  TeamClass *v2; // esi
  AbstractClass *OwnerHouse; // eax
  TeamClass *v4; // eax
  TeamClass *v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  TechnoClass *v15; // esi
  int v16; // edi
  TechnoClass *v17; // esi
  int v18; // eax
  int v19; // eax
  IUnknown *v20; // edx
  AbstractClass *result; // eax
  TechnoClass *v22; // ecx
  float aP1; // [esp+4h] [ebp-34h]
  char v24; // [esp+1Dh] [ebp-1Bh]
  char v25; // [esp+1Eh] [ebp-1Ah]
  char v26; // [esp+1Fh] [ebp-19h]
  IUnknown *v27; // [esp+20h] [ebp-18h]
  TechnoClass *v28; // [esp+24h] [ebp-14h]
  int v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]

  v2 = (TeamClass *)__2_YAPAXI_Z(0xA0u); /*0x65dd43*/
  if ( v2 ) /*0x65dd4a*/
  {
    OwnerHouse = (AbstractClass *)Techno::GetOwnerHouse(this); /*0x65dd50*/
    v4 = (TeamClass *)MissionClass::Construct((int)v2, (AbstractClass *)this, OwnerHouse, 0); /*0x65dd59*/
    v5 = v4; /*0x65dd5e*/
    if ( v4 ) /*0x65dd62*/
    {
      v4->unknown77 = 1; /*0x65dd64*/
      v4->TeamClass_field_7A = 0; /*0x65dd68*/
    }
  }
  else
  {
    v5 = 0; /*0x65dda0*/
  }
  v6 = *(_DWORD *)(this + 224); /*0x65dd6c*/
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
  v10 = *(_DWORD *)(this + 228); /*0x65ddb4*/
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
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65de28*/
      v17 = (TechnoClass *)(*(int (__thiscall **)(int, void *))(*(_DWORD *)v16 + 140))(v16, v5->owner); /*0x65de42*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65de47*/
      if ( !v17 ) /*0x65de4d*/
        goto LABEL_36; /*0x65de4d*/
      if ( *(int *)(v16 + 2048) > 0 && *(_BYTE *)(this + 165) ) /*0x65de61*/
      {
        aP1 = (float)*(int *)(v16 + 2048); /*0x65de78*/
        Float::Accumulate(&v17->tiltSidewaysAngle, aP1, 0); /*0x65de7b*/
      }
      v18 = *(_DWORD *)(this + 160); /*0x65de82*/
      if ( v18 ) /*0x65de8b*/
      {
        v19 = v18 - 2; /*0x65de8d*/
        if ( v19 ) /*0x65de90*/
        {
          if ( v19 == 1 ) /*0x65de93*/
            Timer::SetFlag(&v17->initialOwner, 1); /*0x65de9d*/
        }
        else
        {
          Power::ChangedHouse(&v17->initialOwner, 1); /*0x65deac*/
        }
      }
      else
      {
        Team_Create_750060(&v17->initialOwner, 1); /*0x65debb*/
      }
      if ( v5 ) /*0x65dec2*/
      {
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65decf*/
        TeamClass::AddMember((int)v5, (IUnknown *)v17, 0); /*0x65ded4*/
        --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65dedf*/
        BYTE1(v17[1].firepowerMultiplier[1]) = 1; /*0x65dee4*/
      }
      if ( *(int *)(v16 + 1504) <= 0 || !*(_BYTE *)(this + 165) ) /*0x65def5*/
        goto LABEL_35; /*0x65def5*/
      if ( v26 ) /*0x65df05*/
      {
        if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v17->__pad_0 + 44))(v17) != 2 ) /*0x65df15*/
          goto LABEL_35; /*0x65df15*/
      }
      else if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v17->__pad_0 + 44))(v17) != 1 ) /*0x65dfbc*/
      {
        goto LABEL_35; /*0x65dfbc*/
      }
      if ( !*(_BYTE *)(v16 + 3278) && v24 ) /*0x65dfd2*/
      {
LABEL_35:
        v20 = v27; /*0x65df1b*/
        v27 = (IUnknown *)v17; /*0x65df1f*/
        v17->nextObject = v20; /*0x65df23*/
        goto LABEL_36; /*0x65df23*/
      }
      v22 = v28; /*0x65dfd8*/
      v28 = v17; /*0x65dfdc*/
      v17->nextObject = v22; /*0x65dfe0*/
LABEL_36:
      v14 = v29; /*0x65df26*/
      ++v30; /*0x65df3e*/
    }
    while ( v30 < *(_DWORD *)(*(_DWORD *)(this + 228) + 8 * v29 + 164) ); /*0x65df42*/
    v15 = v28; /*0x65df48*/
LABEL_38:
    v10 = *(_DWORD *)(this + 228); /*0x65df4c*/
    v29 = ++v14; /*0x65df53*/
  }
  while ( v14 < *(_DWORD *)(v10 + 156) ); /*0x65df5d*/
  result = (AbstractClass *)v27; /*0x65df63*/
  if ( v15 ) /*0x65df69*/
  {
    if ( !v27 ) /*0x65df6d*/
      return (AbstractClass *)v15; /*0x65df6d*/
    if ( !*(_BYTE *)(this + 165) ) /*0x65df73*/
      return (AbstractClass *)v15; /*0x65df73*/
    CellClass::AddObject(&v15->inAirFlag, v27); /*0x65df88*/
    if ( !v25 || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v15->__pad_0 + 44))(v15) != 2 ) /*0x65df9f*/
      return (AbstractClass *)v15; /*0x65e004*/
    LOBYTE(v15->barrelRecoil[6]) = 1; /*0x65dfa1*/
    return (AbstractClass *)v15; /*0x65dfb1*/
  }
  if ( v27 ) /*0x65dfea*/
    return result; /*0x65dfea*/
LABEL_50:
  if ( v5 ) /*0x65dfee*/
    (*(void (__thiscall **)(TeamClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x65dff7*/
  return 0; /*0x65dfaa*/
}


// ==== 0x0065E010  MoveScriptTypeClassToWaypoint  this=ObjectClass  sig=csp ====
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


// ==== 0x0065E650  sub_65E650  this=unknown  sig=csp ====
char __stdcall sub_65E650(int a1, int a2, int a3)
{
  return 0; /*0x65e652*/
}


// ==== 0x0065E660  SpawnSuperWeaponUnits  this=VOID_PTR  sig=csp ====
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


// ==== 0x0065E850  PlaceAircraftOnMap  this=int  sig=csp ====
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


// ==== 0x0065EAB0  globalHelper_05EAB0  this=VOID_PTR  sig=csp ====
int __fastcall globalHelper_05EAB0(unsigned int *a0, int a2, IUnknown *aP2, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  MouseClass *TransitionCount; // eax
  int v11; // edi
  int v12; // edx
  char v13; // al
  MouseClass *v15; // [esp+24h] [ebp-18h]
  int v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+2Ch] [ebp-10h] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * a2); /*0x65eabc*/
  v16 = v7; /*0x65eac7*/
  v15 = 0; /*0x65eacb*/
  if ( (int)aP2 > 0 ) /*0x65ead3*/
  {
    while ( 1 ) /*0x65eaeb*/
    {
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65eaeb*/
      v8 = (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v7 + 140))(v7, a0); /*0x65eaf3*/
      v9 = v8; /*0x65eaff*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65eb04*/
      if ( !v8 ) /*0x65eb0a*/
        break; /*0x65eb0a*/
      *(_BYTE *)(v8 + 980) = 1; /*0x65eb10*/
      TransitionCount = (MouseClass *)a0[120]; /*0x65eb17*/
      if ( (unsigned int)TransitionCount >= 4 ) /*0x65eb1f*/
        TransitionCount = (MouseClass *)HouseClass::GetTransitionCount(a0); /*0x65eb28*/
      v11 = *CellClass::FindOpenNeighbor( /*0x65eb4d*/
               (int *)&stru_87C374.__pad_14B0[8132],
               (MouseClass *)&v17,
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
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65ebae*/
      v12 = *(_DWORD *)v9; /*0x65ebb4*/
      v18[1] = (SHIWORD(v11) << 8) + 128; /*0x65ebba*/
      v18[2] = 0; /*0x65ebc1*/
      v13 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v12 + 216))(v9, v18, 0); /*0x65ebc9*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x65ebdd*/
      if ( !v13 ) /*0x65ebe3*/
      {
        if ( v9 ) /*0x65ec14*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x65ec1c*/
        return (int)&v15[-1].__tail_1600D[2]; /*0x65ec26*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 492))(v9); /*0x65ebe9*/
      v15 = (MouseClass *)((char *)v15 + 1); /*0x65ebfa*/
      if ( (int)v15 >= (int)aP2 ) /*0x65ebfe*/
        return (int)v15; /*0x65ebfe*/
      v7 = v16; /*0x65eadf*/
    }
  }
  return (int)v15; /*0x65ec08*/
}


// ==== 0x0065EC30  ExecuteScriptTypeClassActions  this=VOID_PTR  sig=csp ====
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
int __thiscall sub_65F520(unsigned __int8 *this)
{
  unsigned __int8 *v2; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  HWND Dialog; // esi
  char v7; // [esp+Bh] [ebp-1C9h]
  LONG dwNewLong; // [esp+Ch] [ebp-1C8h] BYREF
  void *v9[3]; // [esp+10h] [ebp-1C4h] BYREF
  void **v10; // [esp+1Ch] [ebp-1B8h] BYREF
  _DWORD v11[6]; // [esp+38h] [ebp-19Ch] BYREF
  char v12; // [esp+50h] [ebp-184h]
  _DWORD v13[22]; // [esp+68h] [ebp-16Ch] BYREF
  _BYTE v14[12]; // [esp+C0h] [ebp-114h] BYREF
  int v15; // [esp+CCh] [ebp-108h]
  wchar_t Destination[128]; // [esp+D4h] [ebp-100h] BYREF

  v7 = MEMORY[0xA8ED5C]; /*0x65f535*/
  MEMORY[0xA8ED5C] = 0; /*0x65f539*/
  CCFileClass::Construct3((int)v13); /*0x65f53f*/
  v9[1] = 0; /*0x65f548*/
  v9[2] = 0; /*0x65f54c*/
  GenericList::Constructor(&v10); /*0x65f550*/
  v10 = &vt_List_INIClass_INISection; /*0x65f559*/
  Node::Init(v11); /*0x65f561*/
  v11[5] = 0; /*0x65f56a*/
  v12 = 0; /*0x65f56e*/
  v9[0] = &CCINIClass_Vtable; /*0x65f572*/
  CCFileClass::Reset(v13); /*0x65f57a*/
  FileClass::SetFileName(v13, MEMORY[0x839710]); /*0x65f58a*/
  if ( CCFileClass::Open(v13, 0) ) /*0x65f594*/
  {
    CCINIClass::Load(v9, (int)v13, 0, 0); /*0x65f5ac*/
    v2 = this + 4700; /*0x65f5b6*/
    if ( MEMORY[0x839714] ) /*0x65f5be*/
      v3 = HashTableSection::FindSection((int)v9, v2, (unsigned __int8 *)MEMORY[0x839714]); /*0x65f5d2*/
    else
      v3 = INIClass::BinarySearchSection((int)v9, v2); /*0x65f5c5*/
    if ( v3 ) /*0x65f5de*/
    {
      INIClass::GetString( /*0x65f5fe*/
        (unsigned __int8 ***)v9,
        v2,
        (unsigned __int8 *)MEMORY[0x839714],
        &MEMORY[0x889F64],
        (char *)Destination,
        256);
      StringCSF = GetStringCSF(Destination, 0, MEMORY[0x839740], 135); /*0x65f616*/
    }
    else
    {
      StringCSF = GetStringCSF(MEMORY[0x839734], 0, MEMORY[0x839740], 138); /*0x65f629*/
    }
    dword_B04CA0 = (LPARAM)StringCSF; /*0x65f639*/
    Dialog = (HWND)CreateDialog(0x10Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_65F710, 0); /*0x65f649*/
    MEMORY[0xA8ED9C] = 1; /*0x65f64b*/
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x65f652*/
    if ( Dialog ) /*0x65f659*/
    {
      SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x65f663*/
      Dialog::Show(Dialog); /*0x65f66b*/
      dwNewLong = 0; /*0x65f670*/
      while ( !Dialog::PumpMessages() ) /*0x65f67b*/
      {
        if ( dwNewLong ) /*0x65f681*/
          goto LABEL_14; /*0x65f681*/
      }
      dwNewLong = 1059; /*0x65f685*/
LABEL_14:
      Dialog::Destroy(Dialog); /*0x65f68d*/
    }
    Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x65f69a*/
    MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x65f6ac*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x65f6b7*/
  }
  MEMORY[0xA8ED5C] = v7; /*0x65f6c4*/
  HashTable::DestroyHashTableINIClass(v9); /*0x65f6ca*/
  v13[0] = &vt_CCFileClass; /*0x65f6d6*/
  v15 = 0; /*0x65f6de*/
  Vector::Clear((int)v14); /*0x65f6e5*/
  v13[0] = &off_7E1668; /*0x65f6ee*/
  return BufferIOFileClass::Dtor(v13); /*0x65f6fb*/
}


// ==== 0x0065F710  sub_65F710  this=unknown  sig=csp ====
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
  g_TriggerPool = 0; /*0x65f9b7*/
  dword_B04DB0 = 0; /*0x65f9bc*/
  byte_B04DB4 = 1; /*0x65f9c1*/
  byte_B04DB5 = 0; /*0x65f9c8*/
  dword_B04DA8 = (int)&off_7F0AAC; /*0x65f9cd*/
  dword_B04DBC = 10; /*0x65f9d7*/
  g_TriggerEventState = 0; /*0x65f9e1*/
  return atexit(sub_65F9F0); /*0x65f9ec*/
}


// ==== 0x0065F9F0  sub_65F9F0  this=-  sig=ida-proto ====
void __cdecl sub_65F9F0()
{
  if ( (byte_B04D28 & 1) == 0 ) /*0x65f9fa*/
  {
    dword_B04DA8 = (int)&vt_VectorClass_RadarEventClass; /*0x65f9fe*/
    byte_B04D28 |= 1u; /*0x65fa11*/
    if ( g_TriggerPool ) /*0x65fa17*/
    {
      if ( byte_B04DB5 ) /*0x65fa21*/
      {
        __3_YAXPAX_Z(g_TriggerPool); /*0x65fa24*/
        g_TriggerPool = 0; /*0x65fa2c*/
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


// ==== 0x0065FA70  CreateTriggerClassIfFarEnough  this=int  sig=csp ====
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


// ==== 0x0065FB60  ObjectClass::method_65FB60  this=ObjectClass  sig=csp ====
void __thiscall sub_65FB60(IUnknown *this)
{
  FogOfWar::RevealCell((int)&MEMORY[0x87F7E8], this); /*0x65fb66*/
}


// ==== 0x0065FB70  sub_65FB70  this=-  sig=ida-proto ====
char __fastcall sub_65FB70(int a1)
{
  return byte_7F09A4[16 * a1]; /*0x65fb79*/
}


// ==== 0x0065FB80  ObjectClass::Team_Load_65FB80  this=int  sig=csp ====
_DWORD *__thiscall Team_Load_65FB80(_DWORD *this, int a2, IUnknown *aP2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int *_6550C0; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v22[4]; // [esp+Ch] [ebp-10h] BYREF
  int v23; // [esp+20h] [ebp+4h]

  *this = a2; /*0x65fb8c*/
  *(this + 4) = 1061752795; /*0x65fb8e*/
  v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 132); /*0x65fb9b*/
  *(this + 6) = 0; /*0x65fba1*/
  *(this + 5) = v4; /*0x65fba8*/
  v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 120); /*0x65fbb4*/
  *(this + 8) = aP2; /*0x65fbb7*/
  *(this + 7) = v5; /*0x65fbba*/
  *(this + 9) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x65fbc2*/
  *(this + 11) = 0; /*0x65fbc5*/
  *(this + 12) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x65fbd4*/
  *(this + 14) = 0; /*0x65fbd7*/
  *((_BYTE *)this + 60) = 1; /*0x65fbde*/
  *((_BYTE *)this + 61) = 1; /*0x65fbe1*/
  v6 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[324]; /*0x65fbe4*/
  v7 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[328]; /*0x65fbea*/
  _6550C0 = Team_Load_6550C0((int)&MEMORY[0x87F7E8], v22, (__int16 *)&aP2); /*0x65fbff*/
  v9 = *_6550C0; /*0x65fc04*/
  v10 = _6550C0[1] - v7; /*0x65fc0b*/
  *(this + 1) = v9 - v6; /*0x65fc0d*/
  *(this + 2) = v10; /*0x65fc10*/
  v11 = *(this + 1); /*0x65fc13*/
  v12 = v10; /*0x65fc1c*/
  v13 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[336] - v10; /*0x65fc23*/
  v14 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[332] - v11; /*0x65fc25*/
  v15 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[332] - v11; /*0x65fc29*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[332] - v11 <= v13 ) /*0x65fc2b*/
    v15 = v13; /*0x65fc2d*/
  if ( v12 <= v15 ) /*0x65fc31*/
  {
    v16 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[332] - v11; /*0x65fc39*/
    if ( v14 <= v13 ) /*0x65fc3b*/
      v16 = v13; /*0x65fc3d*/
  }
  else
  {
    v16 = v12; /*0x65fc33*/
  }
  if ( v11 <= v16 ) /*0x65fc41*/
  {
    v17 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[332] - v11; /*0x65fc4b*/
    if ( v14 <= v13 ) /*0x65fc4d*/
      v17 = v13; /*0x65fc4f*/
    if ( v12 <= v17 ) /*0x65fc53*/
    {
      v23 = v14; /*0x65fc5d*/
      if ( v14 <= v13 ) /*0x65fc61*/
        v23 = v13; /*0x65fc63*/
    }
    else
    {
      v23 = v12; /*0x65fc55*/
    }
  }
  else
  {
    v23 = *(this + 1); /*0x65fc43*/
  }
  *((float *)this + 3) = (float)v23; /*0x65fc6b*/
  v19 = g_TriggerEventState; /*0x65fc87*/
  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x65fc8d*/
  v18 = dword_B04D88; /*0x65fc82*/
  dword_B04D48[dword_B04D88] = (int)aP2; /*0x65fc92*/
  dword_B04DD8 = v18; /*0x65fc99*/
  if ( v19 < dword_B04DB0 /*0x65fcce*/
    || (byte_B04DB5 || !dword_B04DB0)
    && dword_B04DBC > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_B04DA8->field_8)(
         &dword_B04DA8,
         dword_B04DB0 + dword_B04DBC,
         0) )
  {
    v20 = g_TriggerEventState++; /*0x65fcdb*/
    *(_DWORD *)&g_TriggerPool->__pad_0[4 * v20] = this; /*0x65fcea*/
  }
  return this; /*0x65fcef*/
}


// ==== 0x0065FD50  ObjectClass::WinMainSetup_Setup_65FD50  this=ObjectClass  sig=csp ====
void sub_65FD50()
{
  int i; // edi
  void *v1; // esi
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  for ( i = g_TriggerEventState - 1; i >= 0; --i ) /*0x65fd5c*/
  {
    v1 = (void *)*((_DWORD *)g_TriggerPool + i); /*0x65fd65*/
    if ( v1 ) /*0x65fd6a*/
    {
      v3 = *((_DWORD *)g_TriggerPool + i); /*0x65fd7b*/
      v2 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v3); /*0x65fd7f*/
      if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState ) /*0x65fd9a*/
      {
        do /*0x65fdb2*/
        {
          ++v2; /*0x65fda2*/
          *((_DWORD *)g_TriggerPool + v2 - 1) = *((_DWORD *)g_TriggerPool + v2); /*0x65fda6*/
        }
        while ( v2 < g_TriggerEventState ); /*0x65fdb2*/
      }
      __3_YAXPAX_Z(v1); /*0x65fdb5*/
    }
  }
}


// ==== 0x0065FDD0  Map_Helper_65FDD0  this=VOID_PTR  sig=ida-proto ====
int sub_65FDD0()
{
  int result; // eax
  int i; // esi

  result = g_TriggerEventState; /*0x65fdd0*/
  for ( i = 0; i < g_TriggerEventState; ++i ) /*0x65fdda*/
  {
    Map_Helper_65FE00(*((_BYTE **)g_TriggerPool + i)); /*0x65fde4*/
    result = g_TriggerEventState; /*0x65fde9*/
  }
  return result; /*0x65fdf3*/
}


// ==== 0x0065FE00  ObjectClass::Map_Helper_65FE00  this=ObjectClass  sig=csp ====
void __thiscall sub_65FE00(_BYTE *this)
{
  int v2; // edx
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // eax
  double v10; // st7
  double v11; // st7
  char v13; // c0
  float FlashFrameTime; // [esp+4h] [ebp-10h]
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+4h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-8h]

  if ( !this->q03D ) /*0x65fe0b*/
    return; /*0x65fe0b*/
  if ( !*(this + 60) ) /*0x65fe11*/
  {
    v2 = this->nextObject; /*0x65fe18*/
    v3 = this->attachedBomb; /*0x65fe1b*/
    if ( v2 != -1 ) /*0x65fe21*/
    {
      if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x65fe2d*/
      {
LABEL_7:
        this->q03D = 0; /*0x65fe35*/
        goto LABEL_8; /*0x65fe35*/
      }
      v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x65fe2f*/
    }
    if ( !v3 ) /*0x65fe33*/
      goto LABEL_7; /*0x65fe33*/
  }
LABEL_8:
  Map_Helper_660540((int)this); /*0x65fe39*/
  v4 = *((float *)this + 3) - *(float *)&MEMORY[0x8871E0]->InfantryExplode; /*0x65fe48*/
  FlashFrameTime = (float)MEMORY[0x8871E0]->NukeTakeOff; /*0x65fe51*/
  if ( v4 <= FlashFrameTime ) /*0x65fe5e*/
    v4 = FlashFrameTime; /*0x65fe62*/
  *((float *)this + 3) = v4; /*0x65fe66*/
  v5 = *((float *)this + 4) + 0.7853981633974483; /*0x65fe6c*/
  v15 = v5 - (double)(int)Math::RoundToInt(v4) * 1.570796326794897; /*0x65fe94*/
  if ( *(this + 60) ) /*0x65fe83*/
  {
    if ( fabs(v4 - (double)MEMORY[0x8871E0]->NukeTakeOff) >= 0.01 ) /*0x65feb9*/
    {
      *((float *)this + 4) = *((float *)this + 5) + *((float *)this + 4); /*0x65ff63*/
    }
    else if ( v15 >= (double)*((float *)this + 5) ) /*0x65fecb*/
    {
      *((float *)this + 4) = *((float *)this + 5) + *((float *)this + 4); /*0x65ff20*/
      v10 = *(float *)&MEMORY[0x8871E0]->FlamingInfantry * 0.33333334; /*0x65ff2e*/
      v16 = *((float *)this + 5) - *(float *)&MEMORY[0x8871E0]->FlamingInfantry * 0.02; /*0x65ff43*/
      if ( v10 <= v16 ) /*0x65ff50*/
        v10 = v16; /*0x65ff54*/
      *((float *)this + 5) = v10; /*0x65ff58*/
    }
    else
    {
      v6 = v15 + *((float *)this + 4); /*0x65fed1*/
      v7 = 4 * *(_DWORD *)this; /*0x65fed7*/
      *(this + 60) = 0; /*0x65feda*/
      *((float *)this + 4) = v6; /*0x65fee1*/
      v8 = dword_7F099C[v7]; /*0x65feea*/
      this->nextObject = MEMORY[0xA8ED84]; /*0x65fef0*/
      this->attachedTag = v17; /*0x65fef6*/
      this->attachedBomb = v8; /*0x65fef9*/
      v9 = dword_7F09A0[v7]; /*0x65ff02*/
      this->objectTypeFlags = MEMORY[0xA8ED84]; /*0x65ff0c*/
      this->owningHouseIndex = v17; /*0x65ff12*/
      this->fallRate = v9; /*0x65ff15*/
    }
  }
  if ( *((float *)this + 4) > 6.283185307179586 ) /*0x65ff78*/
    *((float *)this + 4) = *((float *)this + 4) - 6.283185307179586; /*0x65ff83*/
  v11 = *((float *)this + 7) + *((float *)this + 6); /*0x65ff89*/
  *((float *)this + 6) = v11; /*0x65ff92*/
  if ( v13 && *((float *)this + 7) < 0.0 ) /*0x65ffaa*/
  {
    *((float *)this + 7) = -*((float *)this + 7); /*0x65ffb3*/
    this->nextArrayIndex = 0; /*0x65ffb6*/
  }
  else if ( v11 > 1.0 && *((float *)this + 7) > 0.0 ) /*0x65ffdd*/
  {
    *((float *)this + 7) = -*((float *)this + 7); /*0x65ffe4*/
    this->nextArrayIndex = 1065353216; /*0x65ffe7*/
  }
}

