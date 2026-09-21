// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00530000  ObjectClass::LoadExpansionMixFiles  this=ObjectClass  sig=csp ====
char LoadExpansionMixFiles()
{
  int v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  _WORD FindFileData[160]; // [esp+10h] [ebp-140h] BYREF

  v0 = ((int (__stdcall *)(char *, _WORD *))FindFirstFileA)(aEcacheMix, FindFileData); /*0x530022*/
  if ( v0 != -1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData[0] & 0x116) == 0 ) /*0x530035*/
      {
        v1 = (_DWORD *)__2_YAPAXI_Z(40); /*0x53003d*/
        if ( v1 ) /*0x530047*/
        {
          v2 = MixFileClass::FromFile(v1, (char *)&FindFileData[22], (int)&MEMORY[0x87F7E8][7270]); /*0x53005a*/
          if ( v2 ) /*0x53005e*/
          {
            if ( MEMORY[0x87F7E8][5486] < MEMORY[0x87F7E8][5484] /*0x530097*/
              || (BYTE1(MEMORY[0x87F7E8][5485]) || !MEMORY[0x87F7E8][5484])
              && MEMORY[0x87F7E8][5487] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5482] + 8))(
                   &MEMORY[0x87F7E8][5482],
                   MEMORY[0x87F7E8][5484] + MEMORY[0x87F7E8][5487],
                   0) )
            {
              v3 = MEMORY[0x87F7E8][5486]++; /*0x5300a4*/
              *(_DWORD *)(MEMORY[0x87F7E8][5483] + 4 * v3) = v2; /*0x5300b3*/
            }
            ReturnTrue(0); /*0x5300ba*/
          }
        }
      }
    }
    while ( ((int (__stdcall *)(int, _WORD *))FindNextFileA)(v0, FindFileData) ); /*0x5300c5*/
    ((void (__stdcall *)(int))FindClose)(v0); /*0x5300d0*/
  }
  v4 = ((int (__stdcall *)(char *, _WORD *))FindFirstFileA)(aElocalMix, FindFileData); /*0x5300e2*/
  if ( v4 != -1 ) /*0x5300e7*/
  {
    do /*0x530178*/
    {
      if ( (FindFileData[0] & 0x116) == 0 ) /*0x5300f5*/
      {
        v5 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5300f9*/
        if ( v5 ) /*0x530103*/
        {
          v6 = MixFileClass::FromFile(v5, (char *)&FindFileData[22], (int)&MEMORY[0x87F7E8][7270]); /*0x530116*/
          if ( v6 ) /*0x53011a*/
          {
            if ( MEMORY[0x87F7E8][5486] < MEMORY[0x87F7E8][5484] /*0x530153*/
              || (BYTE1(MEMORY[0x87F7E8][5485]) || !MEMORY[0x87F7E8][5484])
              && MEMORY[0x87F7E8][5487] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5482] + 8))(
                   &MEMORY[0x87F7E8][5482],
                   MEMORY[0x87F7E8][5484] + MEMORY[0x87F7E8][5487],
                   0) )
            {
              v7 = MEMORY[0x87F7E8][5486]++; /*0x530160*/
              *(_DWORD *)(MEMORY[0x87F7E8][5483] + 4 * v7) = v6; /*0x53016f*/
            }
          }
        }
      }
    }
    while ( ((int (__stdcall *)(int, _WORD *))FindNextFileA)(v4, FindFileData) ); /*0x530178*/
    ((void (__stdcall *)(int))FindClose)(v4); /*0x530183*/
  }
  return 1; /*0x530189*/
}


// ==== 0x005301A0  MixFileClass::Bootstrap  this=MixFileClass  sig=csp ====
char MixFileClass::Bootstrap()
{
  int i; // edi
  _DWORD *v1; // eax
  char v2; // bl
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+10h] [ebp-68h]
  int v17[9]; // [esp+14h] [ebp-64h] BYREF
  char Buffer[64]; // [esp+38h] [ebp-40h] BYREF

  v16 = dword_81C1D0; /*0x5301b1*/
  SetSoundWarning(-2); /*0x5301b5*/
  for ( i = 99; i >= 0; --i ) /*0x5301ba*/
  {
    sprintf(Buffer, "EXPANDMD%02d.MIX", i); /*0x5301ca*/
    v1 = RawFileClass::Construct(v17, (int)Buffer); /*0x5301db*/
    v2 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 20))(v1, 0); /*0x5301ee*/
    RawFileClass::Dtor(v17); /*0x5301f0*/
    if ( v2 ) /*0x5301f7*/
    {
      v3 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5301ff*/
      if ( v3 ) /*0x530209*/
      {
        v4 = MixFileClass::FromFile(v3, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x53021c*/
        if ( v4 ) /*0x530220*/
        {
          if ( MEMORY[0x87F7E8][5486] < MEMORY[0x87F7E8][5484] /*0x530258*/
            || (BYTE1(MEMORY[0x87F7E8][5485]) || !MEMORY[0x87F7E8][5484])
            && MEMORY[0x87F7E8][5487] > 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5482] + 8))(
                 &MEMORY[0x87F7E8][5482],
                 MEMORY[0x87F7E8][5484] + MEMORY[0x87F7E8][5487],
                 0) )
          {
            v5 = MEMORY[0x87F7E8][5486]++; /*0x530265*/
            *(_DWORD *)(MEMORY[0x87F7E8][5483] + 4 * v5) = v4; /*0x530274*/
          }
          Debug::Log_0(); /*0x530281*/
        }
      }
    }
  }
  v6 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530292*/
  if ( !v6 ) /*0x53029c*/
  {
    MEMORY[0x87F7E8][5508] = 0; /*0x5302de*/
    return 0; /*0x5302de*/
  }
  MEMORY[0x87F7E8][5508] = MixFileClass::FromFile(v6, aRa2mdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5302b1*/
  if ( !MEMORY[0x87F7E8][5508] ) /*0x5302b6*/
    return 0; /*0x5302b6*/
  v7 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5302ba*/
  if ( !v7 ) /*0x5302c4*/
  {
    MEMORY[0x87F7E8][5509] = 0; /*0x5302ef*/
    return 0; /*0x5302fd*/
  }
  v8 = MixFileClass::FromFile(v7, aRa2Mix, (int)&MEMORY[0x87F7E8][7270]); /*0x5302d2*/
  MEMORY[0x87F7E8][5509] = v8; /*0x5302d7*/
  if ( !v8 ) /*0x530300*/
    return 0; /*0x530300*/
  Debug::Log_0(); /*0x530307*/
  v10 = (_DWORD *)__2_YAPAXI_Z(40); /*0x53030e*/
  if ( !v10 ) /*0x530318*/
  {
    MEMORY[0x87F7E8][5528] = 0; /*0x530375*/
    return 0; /*0x530383*/
  }
  MEMORY[0x87F7E8][5528] = MixFileClass::FromFile(v10, aCachemdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x53032d*/
  if ( !MEMORY[0x87F7E8][5528] || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((#345 *)aCachemdMix) ) /*0x53033b*/
    return 0; /*0x53033b*/
  Debug::Log_0(); /*0x530349*/
  v11 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530350*/
  if ( !v11 ) /*0x53035a*/
  {
    MEMORY[0x87F7E8][5529] = 0; /*0x530385*/
    return 0; /*0x530393*/
  }
  v12 = MixFileClass::FromFile(v11, aCacheMix_0, (int)&MEMORY[0x87F7E8][7270]); /*0x530368*/
  MEMORY[0x87F7E8][5529] = v12; /*0x53036d*/
  if ( !v12 || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((#345 *)aCacheMix_0) ) /*0x5303a3*/
    return 0; /*0x5303a3*/
  Debug::Log_0(); /*0x5303b5*/
  v13 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5303bc*/
  if ( !v13 ) /*0x5303c6*/
  {
    MEMORY[0x87F7E8][5530] = 0; /*0x53040d*/
    return 0; /*0x53041b*/
  }
  MEMORY[0x87F7E8][5530] = MixFileClass::FromFile(v13, aLocalmdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5303db*/
  if ( !MEMORY[0x87F7E8][5530] ) /*0x5303e0*/
    return 0; /*0x5303e0*/
  v14 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5303e8*/
  if ( !v14 ) /*0x5303f2*/
  {
    MEMORY[0x87F7E8][5531] = 0; /*0x53041d*/
    return 0; /*0x53042b*/
  }
  v15 = MixFileClass::FromFile(v14, aLocalMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530400*/
  MEMORY[0x87F7E8][5531] = v15; /*0x530405*/
  if ( !v15 ) /*0x53042e*/
    return 0; /*0x5302ed*/
  Debug::Log_0(); /*0x530439*/
  SetSoundWarning(v16); /*0x530445*/
  return 1; /*0x5302e4*/
}


// ==== 0x00530460  MixFile::LoadAll  this=MixFile  sig=csp ====
bool MixFile::LoadAll()
{
  _DWORD *v0; // eax
  char v1; // bl
  _DWORD *v2; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  char v11; // bl
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  char v17; // bl
  _DWORD *v18; // eax
  int v19; // esi
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // esi
  int v27; // eax
  _DWORD *v28; // eax
  char v29; // bl
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  char v32; // bl
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  char v35; // bl
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  char v38; // bl
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  char v41; // bl
  _DWORD *v42; // eax
  _DWORD *v43; // eax
  char v44; // bl
  _DWORD *v45; // eax
  char v46; // bl
  _DWORD *v47; // eax
  char v48; // bl
  _DWORD *v49; // eax
  char v50; // bl
  _DWORD *v51; // eax
  char v52; // bl
  _DWORD *v53; // eax
  char v54; // bl
  _DWORD *v55; // eax
  _DWORD *v56; // eax
  _DWORD *v57; // esi
  int v58; // eax
  _DWORD *v59; // eax
  _DWORD *v60; // eax
  _DWORD *v61; // esi
  int v62; // eax
  int v63; // esi
  _DWORD *v64; // eax
  char v65; // bl
  _DWORD *v66; // eax
  _DWORD *v67; // eax
  char v68; // bl
  _DWORD v69[22]; // [esp+38h] [ebp-198h] BYREF
  _BYTE v70[12]; // [esp+90h] [ebp-140h] BYREF
  int v71; // [esp+9Ch] [ebp-134h]
  int v72; // [esp+A4h] [ebp-12Ch]
  int v73[9]; // [esp+A8h] [ebp-128h] BYREF
  char Buffer[260]; // [esp+CCh] [ebp-104h] BYREF

  v0 = CCFileClass::Construct(v69, aConqmdMix); /*0x530473*/
  v1 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v0 + 20))(v0, 0); /*0x53048b*/
  v69[0] = &CCFileClass::`vftable'; /*0x53048d*/
  v71 = 0; /*0x530491*/
  Vector::Clear((int)v70); /*0x530495*/
  v69[0] = &off_7E1668; /*0x5304a3*/
  BufferIOFileClass::Dtor(v69); /*0x5304a7*/
  if ( v1 ) /*0x5304ae*/
  {
    v2 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5304b2*/
    if ( v2 ) /*0x5304bc*/
      MEMORY[0x87F7E8][5524] = MixFileClass::FromFile(v2, aConqmdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5304cf*/
    else
      MEMORY[0x87F7E8][5524] = 0; /*0x5304d6*/
  }
  Debug::Log_0(); /*0x5304e1*/
  if ( !MEMORY[0x87F7E8][5524] ) /*0x5304f0*/
    return 0; /*0x5304fe*/
  if ( MEMORY[0x87F7E8][5516] ) /*0x530507*/
    (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][5516])(MEMORY[0x87F7E8][5516], 1); /*0x53050d*/
  v4 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530511*/
  if ( v4 ) /*0x53051b*/
    v5 = MixFileClass::FromFile(v4, aGenermdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530529*/
  else
    v5 = 0; /*0x530530*/
  MEMORY[0x87F7E8][5516] = v5; /*0x530535*/
  ReturnTrue(0); /*0x53053a*/
  if ( MEMORY[0x87F7E8][5515] ) /*0x530547*/
    (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][5515])(MEMORY[0x87F7E8][5515], 1); /*0x53054d*/
  v6 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530551*/
  if ( v6 ) /*0x53055b*/
    v7 = MixFileClass::FromFile(v6, aGenericMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530569*/
  else
    v7 = 0; /*0x530570*/
  MEMORY[0x87F7E8][5515] = v7; /*0x530575*/
  ReturnTrue(0); /*0x53057a*/
  if ( MEMORY[0x87F7E8][5520] ) /*0x530587*/
    (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][5520])(MEMORY[0x87F7E8][5520], 1); /*0x53058d*/
  v8 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530591*/
  if ( v8 ) /*0x53059b*/
    MEMORY[0x87F7E8][5520] = MixFileClass::FromFile(v8, aIsogenmdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5305ae*/
  else
    MEMORY[0x87F7E8][5520] = 0; /*0x5305b5*/
  if ( MEMORY[0x87F7E8][5519] ) /*0x5305c3*/
    (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][5519])(MEMORY[0x87F7E8][5519], 1); /*0x5305c9*/
  v9 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5305cd*/
  if ( v9 ) /*0x5305d7*/
    MEMORY[0x87F7E8][5519] = MixFileClass::FromFile(v9, aIsogenMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5305ea*/
  else
    MEMORY[0x87F7E8][5519] = 0; /*0x5305f1*/
  v10 = CCFileClass::Construct(v69, aConquerMix); /*0x530600*/
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 20))(v10, 0); /*0x530611*/
  v69[0] = &CCFileClass::`vftable'; /*0x530613*/
  v71 = 0; /*0x530617*/
  Vector::Clear((int)v70); /*0x53061b*/
  v69[0] = &off_7E1668; /*0x530624*/
  BufferIOFileClass::Dtor(v69); /*0x530628*/
  if ( v11 ) /*0x53062f*/
  {
    v12 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530633*/
    if ( v12 ) /*0x53063d*/
      MEMORY[0x87F7E8][5525] = MixFileClass::FromFile(v12, aConquerMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530650*/
    else
      MEMORY[0x87F7E8][5525] = 0; /*0x530657*/
  }
  Debug::Log_0(); /*0x530662*/
  if ( !MEMORY[0x87F7E8][5525] ) /*0x530671*/
    return 0; /*0x53067f*/
  v13 = CCFileClass::Construct(v69, aCameomdMix); /*0x530689*/
  v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x53069a*/
  v69[0] = &CCFileClass::`vftable'; /*0x53069c*/
  v71 = 0; /*0x5306a0*/
  Vector::Clear((int)v70); /*0x5306a4*/
  v69[0] = &off_7E1668; /*0x5306ad*/
  BufferIOFileClass::Dtor(v69); /*0x5306b1*/
  if ( v14 ) /*0x5306b8*/
  {
    v15 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5306bc*/
    if ( v15 ) /*0x5306c6*/
      MEMORY[0x87F7E8][5526] = MixFileClass::FromFile(v15, aCameomdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5306d9*/
    else
      MEMORY[0x87F7E8][5526] = 0; /*0x5306e0*/
  }
  Debug::Log_0(); /*0x5306eb*/
  if ( !MEMORY[0x87F7E8][5526] ) /*0x5306fa*/
    return 0; /*0x530708*/
  v16 = CCFileClass::Construct(v69, aCameoMix); /*0x530712*/
  v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 20))(v16, 0); /*0x530723*/
  v69[0] = &CCFileClass::`vftable'; /*0x530725*/
  v71 = 0; /*0x530729*/
  Vector::Clear((int)v70); /*0x53072d*/
  v69[0] = &off_7E1668; /*0x530736*/
  BufferIOFileClass::Dtor(v69); /*0x53073a*/
  if ( v17 ) /*0x530741*/
  {
    v18 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530745*/
    if ( v18 ) /*0x53074f*/
      MEMORY[0x87F7E8][5527] = MixFileClass::FromFile(v18, aCameoMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530762*/
    else
      MEMORY[0x87F7E8][5527] = 0; /*0x530769*/
  }
  Debug::Log_0(); /*0x530774*/
  if ( !MEMORY[0x87F7E8][5527] ) /*0x530783*/
    return 0; /*0x530791*/
  v19 = Game::CheckForGameCD((void *)0x3C) + 1; /*0x5307a3*/
  v72 = v19; /*0x5307a6*/
  if ( LOBYTE(MEMORY[0x87F7E8][31470]) == 1 ) /*0x5307aa*/
  {
    strcpy(Buffer, aMapsmdMix); /*0x5307d0*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x5307e7*/
    {
      Debug::Log_0(); /*0x5307fa*/
      v20 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530801*/
      if ( v20 ) /*0x53080b*/
        MEMORY[0x87F7E8][5534] = MixFileClass::FromFile(v20, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530821*/
      else
        MEMORY[0x87F7E8][5534] = 0; /*0x530828*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53083c*/
      {
        Debug::Log_0(); /*0x53084f*/
        v21 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530856*/
        if ( v21 ) /*0x530860*/
        {
          v22 = MixFileClass::FromFile(v21, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530876*/
          if ( v22 ) /*0x53087a*/
          {
            if ( MEMORY[0x87F7E8][5492] < MEMORY[0x87F7E8][5490] /*0x5308b2*/
              || (BYTE1(MEMORY[0x87F7E8][5491]) || !MEMORY[0x87F7E8][5490])
              && MEMORY[0x87F7E8][5493] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5488] + 8))(
                   &MEMORY[0x87F7E8][5488],
                   MEMORY[0x87F7E8][5493] + MEMORY[0x87F7E8][5490],
                   0) )
            {
              v23 = MEMORY[0x87F7E8][5492]++; /*0x5308bf*/
              *(_DWORD *)(MEMORY[0x87F7E8][5489] + 4 * v23) = v22; /*0x5308ce*/
            }
          }
        }
      }
LABEL_60:
      FileFind::CloseHandle(); /*0x5308e5*/
      goto LABEL_85; /*0x5308ea*/
    }
    strcpy(Buffer, aMapsMix); /*0x53090f*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530926*/
    {
      Debug::Log_0(); /*0x530939*/
      v24 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530940*/
      if ( v24 ) /*0x53094a*/
        MEMORY[0x87F7E8][5535] = MixFileClass::FromFile(v24, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530960*/
      else
        MEMORY[0x87F7E8][5535] = 0; /*0x530967*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53097b*/
      {
        Debug::Log_0(); /*0x53098e*/
        v25 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530995*/
        if ( v25 ) /*0x53099f*/
        {
          v26 = MixFileClass::FromFile(v25, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5309b5*/
          if ( v26 ) /*0x5309b9*/
          {
            if ( MEMORY[0x87F7E8][5492] < MEMORY[0x87F7E8][5490] /*0x5309f1*/
              || (BYTE1(MEMORY[0x87F7E8][5491]) || !MEMORY[0x87F7E8][5490])
              && MEMORY[0x87F7E8][5493] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5488] + 8))(
                   &MEMORY[0x87F7E8][5488],
                   MEMORY[0x87F7E8][5493] + MEMORY[0x87F7E8][5490],
                   0) )
            {
              v27 = MEMORY[0x87F7E8][5492]++; /*0x5309fe*/
              *(_DWORD *)(MEMORY[0x87F7E8][5489] + 4 * v27) = v26; /*0x530a0d*/
            }
          }
        }
      }
      goto LABEL_60; /*0x530a1e*/
    }
  }
  else
  {
    sprintf(Buffer, "MAPSMD%02d.MIX", v19); /*0x530a3c*/
    v28 = CCFileClass::Construct(v69, Buffer); /*0x530a50*/
    v29 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v28 + 20))(v28, 0); /*0x530a61*/
    v69[0] = &CCFileClass::`vftable'; /*0x530a63*/
    v71 = 0; /*0x530a67*/
    Vector::Clear((int)v70); /*0x530a6b*/
    v69[0] = &off_7E1668; /*0x530a74*/
    BufferIOFileClass::Dtor(v69); /*0x530a7c*/
    if ( v29 ) /*0x530a83*/
    {
      v30 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530a87*/
      if ( v30 ) /*0x530a91*/
        MEMORY[0x87F7E8][5534] = MixFileClass::FromFile(v30, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530aa7*/
      else
        MEMORY[0x87F7E8][5534] = 0; /*0x530aae*/
    }
    Debug::Log_0(); /*0x530ac1*/
    sprintf(Buffer, "MAPS%02d.MIX", v19); /*0x530ad4*/
    v31 = CCFileClass::Construct(v69, Buffer); /*0x530ae8*/
    v32 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v31 + 20))(v31, 0); /*0x530af9*/
    v69[0] = &CCFileClass::`vftable'; /*0x530afb*/
    v71 = 0; /*0x530aff*/
    Vector::Clear((int)v70); /*0x530b03*/
    v69[0] = &off_7E1668; /*0x530b0c*/
    BufferIOFileClass::Dtor(v69); /*0x530b14*/
    if ( v32 ) /*0x530b1b*/
    {
      v33 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530b1f*/
      if ( v33 ) /*0x530b29*/
        MEMORY[0x87F7E8][5535] = MixFileClass::FromFile(v33, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530b3f*/
      else
        MEMORY[0x87F7E8][5535] = 0; /*0x530b46*/
    }
    Debug::Log_0(); /*0x530b59*/
  }
LABEL_85:
  if ( !MEMORY[0x87F7E8][5534] ) /*0x530b67*/
    return 0; /*0x530b75*/
  v34 = CCFileClass::Construct(v69, g_Str_File_MULTIMD_MIX); /*0x530b7f*/
  v35 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v34 + 20))(v34, 0); /*0x530b95*/
  v69[0] = &CCFileClass::`vftable'; /*0x530b97*/
  v71 = 0; /*0x530b9b*/
  Vector::Clear((int)v70); /*0x530b9f*/
  v69[0] = &off_7E1668; /*0x530bad*/
  BufferIOFileClass::Dtor(v69); /*0x530bb1*/
  if ( v35 ) /*0x530bb8*/
  {
    v36 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530bbc*/
    if ( v36 ) /*0x530bc6*/
      MEMORY[0x87F7E8][5500] = MixFileClass::FromFile(v36, g_Str_File_MULTIMD_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530bd9*/
    else
      MEMORY[0x87F7E8][5500] = 0; /*0x530be0*/
  }
  Debug::Log_0(); /*0x530beb*/
  if ( !MEMORY[0x87F7E8][5500] ) /*0x530bfa*/
    return 0; /*0x530c08*/
  v37 = CCFileClass::Construct(v69, g_Str_File_THEMEMD_MIX); /*0x530c12*/
  v38 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v37 + 20))(v37, 0); /*0x530c23*/
  v69[0] = &CCFileClass::`vftable'; /*0x530c25*/
  v71 = 0; /*0x530c29*/
  Vector::Clear((int)v70); /*0x530c2d*/
  v69[0] = &off_7E1668; /*0x530c36*/
  BufferIOFileClass::Dtor(v69); /*0x530c3a*/
  if ( v38 ) /*0x530c41*/
  {
    Debug::Log(); /*0x530c48*/
    v39 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530c4f*/
    if ( v39 ) /*0x530c59*/
    {
      MEMORY[0x87E738] = MixFileClass::FromFile(v39, g_Str_File_THEMEMD_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530c70*/
      goto LABEL_100; /*0x530c75*/
    }
  }
  else
  {
    v40 = CCFileClass::Construct(v69, g_Str_File_THEME_MIX); /*0x530c80*/
    v41 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v40 + 20))(v40, 0); /*0x530c91*/
    v69[0] = &CCFileClass::`vftable'; /*0x530c93*/
    v71 = 0; /*0x530c97*/
    Vector::Clear((int)v70); /*0x530c9b*/
    v69[0] = &off_7E1668; /*0x530ca4*/
    BufferIOFileClass::Dtor(v69); /*0x530ca8*/
    if ( !v41 ) /*0x530caf*/
      goto LABEL_100; /*0x530caf*/
    Debug::Log(); /*0x530cb6*/
    v42 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530cbd*/
    if ( v42 ) /*0x530cc7*/
    {
      MEMORY[0x87E738] = MixFileClass::FromFile(v42, g_Str_File_THEME_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530cda*/
      goto LABEL_100; /*0x530cdf*/
    }
  }
  MEMORY[0x87E738] = 0; /*0x530ce1*/
LABEL_100:
  Debug::Log_0(); /*0x530ce7*/
  LOBYTE(MEMORY[0x87F7E8][539939]) = 1; /*0x530cf9*/
  Audio::LoadWAVFiles(&MEMORY[0x87F7E8][528714]); /*0x530d00*/
  if ( LOBYTE(MEMORY[0x87F7E8][31470]) == 1 ) /*0x530d0c*/
  {
    strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530d37*/
    v43 = RawFileClass::Construct(v73, (int)aMovies01Mix); /*0x530d47*/
    v44 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v43 + 20))(v43, 0); /*0x530d5b*/
    RawFileClass::Dtor(v73); /*0x530d5d*/
    if ( v44 ) /*0x530d64*/
      strcpy(Buffer, aMoviesMix); /*0x530d86*/
    v45 = RawFileClass::Construct(v73, (int)aMixfilesMovies); /*0x530d9b*/
    v46 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v45 + 20))(v45, 0); /*0x530daf*/
    RawFileClass::Dtor(v73); /*0x530db1*/
    if ( v46 ) /*0x530db8*/
      strcpy(Buffer, aMixfilesMovies_0); /*0x530dda*/
    v47 = RawFileClass::Construct(v73, (int)aMovmd01Mix); /*0x530def*/
    v48 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v47 + 20))(v47, 0); /*0x530e03*/
    RawFileClass::Dtor(v73); /*0x530e05*/
    if ( v48 ) /*0x530e0c*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530e2e*/
    v49 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0); /*0x530e43*/
    v50 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v49 + 20))(v49, 0); /*0x530e57*/
    RawFileClass::Dtor(v73); /*0x530e59*/
    if ( v50 ) /*0x530e60*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530e82*/
    v51 = RawFileClass::Construct(v73, (int)aMovmd03Mix); /*0x530e97*/
    v52 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v51 + 20))(v51, 0); /*0x530eab*/
    RawFileClass::Dtor(v73); /*0x530ead*/
    if ( v52 ) /*0x530eb4*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530ed6*/
    v53 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0_0); /*0x530eeb*/
    v54 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v53 + 20))(v53, 0); /*0x530eff*/
    RawFileClass::Dtor(v73); /*0x530f01*/
    if ( v54 ) /*0x530f08*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530f2a*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530f41*/
    {
      Debug::Log_0(); /*0x530f54*/
      v55 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530f5b*/
      if ( v55 ) /*0x530f65*/
        MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v55, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530f7b*/
      else
        MEMORY[0x87F7E8][5521] = 0; /*0x530f82*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x530f96*/
      {
        Debug::Log_0(); /*0x530fa9*/
        v56 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530fb0*/
        if ( v56 ) /*0x530fba*/
        {
          v57 = MixFileClass::FromFile(v56, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530fd0*/
          if ( v57 ) /*0x530fd4*/
          {
            if ( MEMORY[0x87F7E8][5506] < MEMORY[0x87F7E8][5504] /*0x53100c*/
              || (BYTE1(MEMORY[0x87F7E8][5505]) || !MEMORY[0x87F7E8][5504])
              && MEMORY[0x87F7E8][5507] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5502] + 8))(
                   &MEMORY[0x87F7E8][5502],
                   MEMORY[0x87F7E8][5504] + MEMORY[0x87F7E8][5507],
                   0) )
            {
              v58 = MEMORY[0x87F7E8][5506]++; /*0x531019*/
              *(_DWORD *)(MEMORY[0x87F7E8][5503] + 4 * v58) = v57; /*0x531028*/
            }
          }
        }
      }
    }
    else
    {
      strcpy(Buffer, aMoviesMix); /*0x531069*/
      Debug::Log_0(); /*0x53107f*/
      v59 = (_DWORD *)__2_YAPAXI_Z(40); /*0x531086*/
      if ( v59 ) /*0x531090*/
        MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v59, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5310a6*/
      else
        MEMORY[0x87F7E8][5521] = 0; /*0x5310ad*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x5310c1*/
      {
        Debug::Log_0(); /*0x5310d4*/
        v60 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5310db*/
        if ( v60 ) /*0x5310e5*/
        {
          v61 = MixFileClass::FromFile(v60, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5310fb*/
          if ( v61 ) /*0x5310ff*/
          {
            if ( MEMORY[0x87F7E8][5506] < MEMORY[0x87F7E8][5504] /*0x531137*/
              || (BYTE1(MEMORY[0x87F7E8][5505]) || !MEMORY[0x87F7E8][5504])
              && MEMORY[0x87F7E8][5507] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][5502] + 8))(
                   &MEMORY[0x87F7E8][5502],
                   MEMORY[0x87F7E8][5504] + MEMORY[0x87F7E8][5507],
                   0) )
            {
              v62 = MEMORY[0x87F7E8][5506]++; /*0x531144*/
              *(_DWORD *)(MEMORY[0x87F7E8][5503] + 4 * v62) = v61; /*0x531153*/
            }
          }
        }
      }
    }
    FileFind::CloseHandle(); /*0x53103f*/
    return MEMORY[0x87F7E8][5521] != 0; /*0x531044*/
  }
  v63 = v72; /*0x531174*/
  sprintf(Buffer, "MOVMD%02d.MIX", v72); /*0x531186*/
  v64 = CCFileClass::Construct(v69, Buffer); /*0x53119a*/
  v65 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v64 + 20))(v64, 0); /*0x5311ab*/
  v69[0] = &CCFileClass::`vftable'; /*0x5311ad*/
  v71 = 0; /*0x5311b5*/
  Vector::Clear((int)v70); /*0x5311b9*/
  v69[0] = &off_7E1668; /*0x5311c2*/
  BufferIOFileClass::Dtor(v69); /*0x5311c6*/
  if ( v65 ) /*0x5311cd*/
  {
    v66 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5311d1*/
    if ( v66 ) /*0x5311db*/
      goto LABEL_147; /*0x5311db*/
    goto LABEL_148; /*0x5311db*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v63); /*0x5311f1*/
  v67 = CCFileClass::Construct(v69, Buffer); /*0x531205*/
  v68 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v67 + 20))(v67, 0); /*0x531216*/
  v69[0] = &CCFileClass::`vftable'; /*0x531218*/
  v71 = 0; /*0x531220*/
  Vector::Clear((int)v70); /*0x531224*/
  v69[0] = &off_7E1668; /*0x53122d*/
  BufferIOFileClass::Dtor(v69); /*0x531231*/
  if ( v68 ) /*0x531238*/
  {
    v66 = (_DWORD *)__2_YAPAXI_Z(40); /*0x53123c*/
    if ( v66 ) /*0x531246*/
    {
LABEL_147:
      MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v66, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x531248*/
      goto LABEL_149; /*0x531261*/
    }
LABEL_148:
    MEMORY[0x87F7E8][5521] = 0; /*0x531263*/
  }
LABEL_149:
  Debug::Log_0(); /*0x531269*/
  return MEMORY[0x87F7E8][5521] != 0; /*0x5304f2*/
}


// ==== 0x005312A0  ObjectClass::ShowLoadingScreen  this=ObjectClass  sig=csp ====
int __usercall ShowLoadingScreen@<eax>(int *a1@<ebp>, __int16 a2@<di>, int a3@<esi>)
{
  __int16 *v3; // esi
  char *EntireFile; // ebp
  int i; // edx
  char *v6; // eax
  char v7; // cl
  int *v8; // eax
  char *v9; // ecx
  int v10; // edx
  #72 *StringCSF; // edi
  int Instance; // esi
  int v13; // eax
  #72 *v14; // eax
  int v15; // edi
  int v16; // eax
  #72 *v17; // eax
  #72 *v18; // eax
  #72 *v19; // eax
  __int64 v20; // rax
  void *v21; // esi
  __int16 v24; // [esp-10h] [ebp-B8h]
  __int16 v25; // [esp-10h] [ebp-B8h]
  __int16 v26; // [esp-10h] [ebp-B8h]
  __int16 v27; // [esp-10h] [ebp-B8h]
  int v28; // [esp-10h] [ebp-B8h]
  int v31; // [esp+0h] [ebp-A8h] BYREF
  int v32; // [esp+4h] [ebp-A4h]
  int *v33; // [esp+8h] [ebp-A0h]
  int v34[2]; // [esp+Ch] [ebp-9Ch] BYREF
  __int16 v35; // [esp+14h] [ebp-94h]
  void *Block; // [esp+18h] [ebp-90h]
  int v37[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  int v38; // [esp+24h] [ebp-84h]
  int v39; // [esp+28h] [ebp-80h]
  int Rect; // [esp+2Ch] [ebp-7Ch] BYREF
  int Rect_4; // [esp+30h] [ebp-78h]
  int Rect_8; // [esp+34h] [ebp-74h]
  int Rect_12; // [esp+38h] [ebp-70h]
  _DWORD v44[22]; // [esp+3Ch] [ebp-6Ch] BYREF
  char v45[12]; // [esp+94h] [ebp-14h] BYREF
  int v46; // [esp+A0h] [ebp-8h]

  CCFileClass::Construct(v44, aGlsmdPal); /*0x5312b3*/
  v3 = 0; /*0x5312ba*/
  EntireFile = 0; /*0x5312c1*/
  Block = 0; /*0x5312c3*/
  v33 = 0; /*0x5312c7*/
  if ( CCFileClass::Open(v44, 0) ) /*0x5312cb*/
  {
    EntireFile = (char *)CCFileClass::ReadEntireFile(v44); /*0x5312e5*/
    CCFileClass::Reset(v44); /*0x5312e7*/
    for ( i = 0; i < 256; ++i ) /*0x5312ec*/
    {
      v6 = &EntireFile[2 * (i % 256) + i % 256]; /*0x531302*/
      LOBYTE(v35) = 4 * *v6; /*0x531309*/
      HIBYTE(v35) = 4 * v6[1]; /*0x531313*/
      v7 = 4 * v6[2]; /*0x53131f*/
      *(_WORD *)v6 = v35; /*0x531323*/
      v6[2] = v7; /*0x53132c*/
    }
    if ( EntireFile ) /*0x531333*/
    {
      v8 = (int *)__2_YAPAXI_Z(392); /*0x53133a*/
      if ( v8 ) /*0x531344*/
      {
        v33 = ConvertClass::Construct(v8, EntireFile, (char *)&MEMORY[0x87F7E8][6118], MEMORY[0x87F7E8][7880], 1, 0); /*0x531363*/
        if ( v33 ) /*0x531367*/
        {
          v9 = aGlssmdShp; /*0x53136e*/
          if ( MEMORY[0x87F7E8][33327] != 640 ) /*0x531378*/
            v9 = aGlslmdShp; /*0x53137a*/
          Block = (void *)SearchMIXFile(v9, 0); /*0x531386*/
          v3 = (__int16 *)Block; /*0x53138a*/
        }
      }
      else
      {
        v33 = 0; /*0x53166f*/
      }
    }
  }
  ((void (__stdcall *)(int, int *))GetClientRect)(dword_A8ED54[233983], &Rect); /*0x531398*/
  v37[0] = 0; /*0x5313a2*/
  v37[1] = 0; /*0x5313b8*/
  v38 = Rect_8 - Rect; /*0x5313bc*/
  v39 = Rect_12 - Rect_4; /*0x5313c0*/
  if ( v3 ) /*0x5313c4*/
  {
    v10 = v3[2]; /*0x5313cf*/
    v34[0] = (Rect_8 - Rect - v3[1]) / 2; /*0x5313d5*/
    v34[1] = (Rect_12 - Rect_4 - v10) / 2; /*0x5313e5*/
    DrawToSurfaceSHP((int *)MEMORY[0x87F7E8][7881], v33, (int)v3, 0, v34, v37, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x53140e*/
  }
  StringCSF = GetStringCSF((#72 *)aTxtCopyright, 0, g_Str_File_Init_CPP, 4930); /*0x53142e*/
  Instance = TextRenderer::GetInstance(); /*0x531439*/
  v31 = 0; /*0x53143e*/
  v32 = v39 - 40; /*0x531444*/
  if ( Instance ) /*0x53144d*/
  {
    v13 = Text::MeasureWidth((int)StringCSF, 0); /*0x531454*/
    v31 = v38 - v13 - 10; /*0x531461*/
  }
  TextRenderer::Printf(v34, (int)StringCSF, MEMORY[0x87F7E8][7881], v37, (int)&v31, 0xFFFF, 0, 22, a2); /*0x531485*/
  v14 = GetStringCSF((#72 *)aGuiWwbrand, 0, g_Str_File_Init_CPP, 4941); /*0x53149e*/
  v15 = (int)v14; /*0x5314a5*/
  if ( Instance ) /*0x5314a7*/
  {
    v16 = Text::MeasureWidth((int)v14, 0); /*0x5314ae*/
    v31 = v38 - v16 - 10; /*0x5314bf*/
    v32 += *(_DWORD *)(Instance + 28) + 3; /*0x5314ca*/
  }
  TextRenderer::Printf(v34, v15, MEMORY[0x87F7E8][7881], v37, (int)&v31, 0xFFFF, 0, 22, v24); /*0x5314ee*/
  v17 = GetStringCSF((#72 *)aGuiLoadingex, 0, g_Str_File_Init_CPP, 4951); /*0x531507*/
  v31 = 10; /*0x53152c*/
  v32 = 10; /*0x531530*/
  TextRenderer::Printf(v34, (int)v17, MEMORY[0x87F7E8][7881], v37, (int)&v31, 0xFFFF, 0, 22, v25); /*0x531534*/
  v18 = GetStringCSF((#72 *)aGuiTrademarkto, 0, g_Str_File_Init_CPP, 4958); /*0x53154d*/
  v31 = 10; /*0x531556*/
  v32 = v39 - 40; /*0x531565*/
  TextRenderer::Printf(v34, (int)v18, MEMORY[0x87F7E8][7881], v37, (int)&v31, 0xFFFF, 0, 22, v26); /*0x531581*/
  v19 = GetStringCSF((#72 *)aGuiTrademarkbo, 0, g_Str_File_Init_CPP, 4965); /*0x53159a*/
  v31 = 10; /*0x53159f*/
  v32 += *(_DWORD *)(Instance + 28) + 3; /*0x5315bb*/
  TextRenderer::Printf(v34, (int)v19, MEMORY[0x87F7E8][7881], v37, (int)&v31, 0xFFFF, 0, 22, v27); /*0x5315d2*/
  Frame::Present(MEMORY[0x87F7E8][7881], 10, (int)EntireFile, v15, 0, v28, a3, a1); /*0x5315e4*/
  LODWORD(v20) = Audio::Callback(); /*0x5315e9*/
  *(_QWORD *)&dword_A8ED54[653] = v20 + 5000; /*0x5315f6*/
  if ( EntireFile ) /*0x531603*/
    __3_YAXPAX_Z(EntireFile); /*0x531606*/
  v21 = Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy(Block); /*0x531618*/
    __3_YAXPAX_Z(v21); /*0x53161e*/
  }
  if ( v33 ) /*0x531630*/
    (*(void (__thiscall **)(int *, int))*v33)(v33, 1); /*0x531636*/
  v44[0] = &CCFileClass::`vftable'; /*0x53163f*/
  v46 = 0; /*0x531647*/
  Vector::Clear((int)v45); /*0x531652*/
  v44[0] = &off_7E1668; /*0x53165b*/
  return BufferIOFileClass::Dtor(v44); /*0x531668*/
}


// ==== 0x00531680  InitBulkData  this=-  sig=ida-proto ====
char InitBulkData()
{
  _DWORD *v0; // eax
  _DWORD *v2; // eax
  _DWORD v3[22]; // [esp+4h] [ebp-D8h] BYREF
  _BYTE v4[12]; // [esp+5Ch] [ebp-80h] BYREF
  int v5; // [esp+68h] [ebp-74h]
  _DWORD v6[22]; // [esp+70h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+C8h] [ebp-14h] BYREF
  int v8; // [esp+D4h] [ebp-8h]

  if ( !MEMORY[0x87F7E8][5524] /*0x5316ec*/
    || !ReturnTrue(0)
    || !MEMORY[0x87F7E8][5525]
    || !ReturnTrue(0)
    || !MEMORY[0x87F7E8][5526]
    || !ReturnTrue(0)
    || !MEMORY[0x87F7E8][5527]
    || !ReturnTrue(0) )
  {
    return 0; /*0x5318a7*/
  }
  Event::Dispatch(); /*0x5316f9*/
  Event::Dispatch(); /*0x5316fe*/
  MouseClass::LoadTypeData(MEMORY[0x87F7E8]); /*0x531708*/
  nullsub_29(&MEMORY[0x87F7E8][539870]); /*0x531712*/
  BulkData::InitMissionHashing(&MEMORY[0x87F7E8][536212]); /*0x53171c*/
  FileSystem::InitPipShapes(); /*0x531721*/
  nullsub_6(); /*0x531726*/
  FileSystem::InitPipShapes(); /*0x53172b*/
  FileSystem::InitPipShapes(); /*0x531730*/
  FileSystem::InitPipShapes(); /*0x531735*/
  InitVisceroidArt(); /*0x53173a*/
  FileSystem::InitPipShapes(); /*0x53173f*/
  FileSystem::InitPipShapes(); /*0x531744*/
  InitRotorArt(); /*0x531749*/
  nullsub_15(); /*0x53174e*/
  GenerateRangeRingTextures(); /*0x531753*/
  GenerateLightningStormGlow(); /*0x531758*/
  CCFileClass::Construct(v3, aDpodVxl); /*0x531766*/
  v0 = (_DWORD *)__2_YAPAXI_Z(28); /*0x53176d*/
  if ( !v0 ) /*0x531777*/
  {
    MEMORY[0x87F7E8][539964] = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  MEMORY[0x87F7E8][539964] = File::LoadFileVXL(v0, (int)v3, 0); /*0x531788*/
  if ( !MEMORY[0x87F7E8][539964] ) /*0x53178d*/
  {
LABEL_11:
    Debug::Log(); /*0x53178f*/
LABEL_12:
    v3[0] = &CCFileClass::`vftable'; /*0x53179c*/
    v5 = 0; /*0x5317a8*/
    Vector::Clear((int)v4); /*0x5317ac*/
    v3[0] = &off_7E1668; /*0x5317b5*/
    BufferIOFileClass::Dtor(v3); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  CCFileClass::Construct(v6, aDpodHva); /*0x5317dd*/
  v2 = (_DWORD *)__2_YAPAXI_Z(16); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    MEMORY[0x87F7E8][539965] = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  MEMORY[0x87F7E8][539965] = File::LoadFileHVA(v2, (int)v6); /*0x5317fe*/
  if ( !MEMORY[0x87F7E8][539965] ) /*0x531803*/
  {
LABEL_16:
    Debug::Log(); /*0x531805*/
    v6[0] = &CCFileClass::`vftable'; /*0x531819*/
    v8 = 0; /*0x531821*/
    Vector::Clear((int)v7); /*0x531828*/
    v6[0] = &off_7E1668; /*0x531831*/
    BufferIOFileClass::Dtor(v6); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  v6[0] = &CCFileClass::`vftable'; /*0x531852*/
  v8 = 0; /*0x53185a*/
  Vector::Clear((int)v7); /*0x531861*/
  v6[0] = &off_7E1668; /*0x53186a*/
  BufferIOFileClass::Dtor(v6); /*0x531872*/
  v3[0] = &CCFileClass::`vftable'; /*0x53187b*/
  v5 = 0; /*0x531883*/
  Vector::Clear((int)v4); /*0x531887*/
  v3[0] = &off_7E1668; /*0x531890*/
  BufferIOFileClass::Dtor(v3); /*0x531898*/
  return 1; /*0x5317c4*/
}


// ==== 0x00531A00  CreditsScreen::DlgProc  this=CreditsScreen  sig=csp ====
int __stdcall CreditsScreen_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // esi
  wchar_t *String; // eax
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // [esp-8h] [ebp-29Ch]
  char v13; // [esp+Fh] [ebp-285h] BYREF
  int v14; // [esp+10h] [ebp-284h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-280h] BYREF
  char v16[128]; // [esp+114h] [ebp-180h] BYREF
  char v17[128]; // [esp+194h] [ebp-100h] BYREF
  char Destination[128]; // [esp+214h] [ebp-80h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x531a28*/
  if ( result ) /*0x531a2f*/
    return result; /*0x531a2f*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x531a38*/
  if ( a2 == 273 ) /*0x531a44*/
  {
    if ( (_WORD)a3 && (unsigned __int16)a3 <= 2u ) /*0x531c19*/
      *WindowLongA = (unsigned __int16)a3; /*0x531c1b*/
    return 0; /*0x531c1b*/
  }
  if ( a2 != 1175 ) /*0x531a50*/
    return 0; /*0x531c1d*/
  DlgItem = GetDlgItem(hWnd, 1461); /*0x531a73*/
  String = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Init_CPP, 5680); /*0x531a75*/
  SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x531a89*/
  ModuleVersion = GetModuleVersion(); /*0x531a8b*/
  sprintf(Buffer, MEMORY[0x826954], ModuleVersion); /*0x531a9b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531ab0*/
  ModuleInternalVersion = GetModuleInternalVersion((int)&MEMORY[0xA8ECE0]); /*0x531ab7*/
  sprintf(Buffer, MEMORY[0x826940], ModuleInternalVersion); /*0x531ac7*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531adc*/
  v16[0] = 0; /*0x531aea*/
  Time::FormatDate(v16); /*0x531af2*/
  v12 = (const char *)String::CopyConstant(Destination); /*0x531b10*/
  v10 = (const char *)String::FormatDword(v17); /*0x531b1d*/
  sprintf(Buffer, MEMORY[0x826920], v10, v12, v16); /*0x531b2d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531b42*/
  v14 = 5; /*0x531b51*/
  v13 = 0; /*0x531b59*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&MEMORY[0xA8F314]); /*0x531b5e*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&MEMORY[0xA8F4A0]); /*0x531b6d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&MEMORY[0xA8F420]); /*0x531b7c*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&MEMORY[0xA8F520]); /*0x531b8b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&MEMORY[0xA8F394]); /*0x531b9a*/
  GetVersionString(&v14, &v13, 0, 0); /*0x531ba8*/
  v11 = (const char *)&stru_821F08; /*0x531bb3*/
  if ( !v13 ) /*0x531bb8*/
    v11 = g_INI_Key_No; /*0x531bba*/
  sprintf(Buffer, stru_82690C, v11, MEMORY[0x84E865]); /*0x531bcf*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531be4*/
  CreditsScreen::Init(Buffer); /*0x531bea*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531bfc*/
  return 0; /*0x531bfe*/
}


// ==== 0x00531CC0  MainMenu::Screen  this=MainMenu  sig=ida-proto ====
LONG __usercall MainMenu_Screen@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  HWND v2; // esi
  HWND DlgItem; // esi
  int v4; // ecx
  int v5; // eax
  unsigned __int16 v6; // ax
  int v7; // esi
  int v8; // esi
  const char **v9; // edi
  _BYTE v11[2]; // [esp+6h] [ebp-1Eh] BYREF
  LONG dwNewLong; // [esp+8h] [ebp-1Ch] BYREF
  HWND hWnd; // [esp+Ch] [ebp-18h]
  struct _SYSTEMTIME SystemTime; // [esp+10h] [ebp-14h] BYREF

  dwNewLong = 18; /*0x531cc7*/
  SetSoundWarning(-1); /*0x531ccf*/
  v2 = (HWND)CreateDialog(0xE2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainMenu::DlgProc, 0); /*0x531ce5*/
  hWnd = v2; /*0x531ce9*/
  if ( v2 ) /*0x531ced*/
  {
    SetWindowLongA(v2, 8, (LONG)&dwNewLong); /*0x531cfe*/
    SetDialogParent(v2, g_hWnd); /*0x531d0c*/
    Dialog::Show(v2); /*0x531d13*/
    SetFocus(g_hWnd); /*0x531d1f*/
    DlgItem = GetDlgItem(v2, 1818); /*0x531d31*/
    if ( DlgItem ) /*0x531d35*/
    {
      if ( MEMORY[0x8A00A4] > 800 ) /*0x531d41*/
        v4 = (MEMORY[0x8A00A4] - 800) / 2; /*0x531d51*/
      else
        v4 = 0; /*0x531d43*/
      if ( MEMORY[0x8A00A8] > 600 ) /*0x531d5d*/
        v5 = (MEMORY[0x8A00A8] - 600) / 2; /*0x531d6b*/
      else
        v5 = 0; /*0x531d5f*/
      SetWindowPos(DlgItem, 0, v4, v5, -1, -1, 0xDu); /*0x531d78*/
      SendMessageA(DlgItem, 0x4E3u, 1u, 0); /*0x531d8e*/
      if ( MEMORY[0x8A00A4] == 640 ) /*0x531d9a*/
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x531da1*/
      else
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x531db0*/
    }
    do /*0x531f04*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x531db2*/
        dwNewLong = 7; /*0x531dbb*/
      if ( MEMORY[0x8A00A0] ) /*0x531dca*/
      {
        MEMORY[0x8A00A0] = 0; /*0x531dd0*/
        Screen::Capture(1, 0, a1, a2); /*0x531dd7*/
        Frame::Present(0); /*0x531de6*/
      }
      if ( (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]) ) /*0x531df1*/
      {
        v6 = EventQueue::Read(MEMORY[0x87F770]); /*0x531e05*/
        a1 = v6; /*0x531e0d*/
        if ( (v6 & 0x800) == 0 ) /*0x531e16*/
        {
          a2 = (char)v6; /*0x531e1c*/
          if ( !isalnum((char)v6) || (_BYTE)a1 == 126 ) /*0x531e33*/
          {
            memset(MEMORY[0xA8F7B8], 0, sizeof(MEMORY[0xA8F7B8])); /*0x531f3e*/
          }
          else
          {
            v11[0] = a1; /*0x531e3d*/
            v11[1] = 0; /*0x531e42*/
            Debug::Log_0(v11); /*0x531e47*/
            v7 = strlen(MEMORY[0xA8F7B8]); /*0x531e5e*/
            if ( v7 >= 31 ) /*0x531e63*/
            {
              v7 = 0; /*0x531e65*/
              MEMORY[0xA8F7B8][0] = 0; /*0x531e67*/
            }
            MEMORY[0xA8F7B8][v7] = toupper((char)a1); /*0x531e77*/
            v8 = 0; /*0x531e7d*/
            v9 = (const char **)MEMORY[0x825C2C]; /*0x531e7f*/
            while ( !strstr(MEMORY[0xA8F7B8], *v9) ) /*0x531e96*/
            {
              v9 += 4; /*0x531e98*/
              ++v8; /*0x531e9b*/
              if ( (int)v9 >= (int)off_825C6C ) /*0x531ea2*/
                goto LABEL_27; /*0x531ea2*/
            }
            *(_BYTE *)*(&MEMORY[0x825C28] + 4 * v8) = *(_BYTE *)*(&MEMORY[0x825C28] + 4 * v8) == 0; /*0x531ebf*/
            memset(MEMORY[0xA8F7B8], 0, sizeof(MEMORY[0xA8F7B8])); /*0x531ec8*/
            PlayVocClass(1.0, 0); /*0x531edb*/
            MEMORY[0x8A00A0] = 0; /*0x531ee4*/
            Screen::Capture(1, 0, a1, a2); /*0x531eeb*/
            Frame::Present(0); /*0x531efa*/
          }
        }
      }
LABEL_27:
      ; /*0x531eff*/
    }
    while ( dwNewLong == 18 ); /*0x531f04*/
    Dialog::Destroy(hWnd); /*0x531f0e*/
    GetSystemTime(&SystemTime); /*0x531f18*/
    Random::AdvanceRandomBytes(SystemTime.wMilliseconds); /*0x531f28*/
  }
  else
  {
    dwNewLong = 7; /*0x531f42*/
  }
  SetFocus(g_hWnd); /*0x531f50*/
  return dwNewLong; /*0x531f5a*/
}


// ==== 0x00531F60  MainMenu::DlgProc  this=MainMenu  sig=csp ====
int __stdcall MainMenu::DlgProc(int hWnd, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *v5; // eax
  int v6; // esi
  char *ModuleInternalVersion; // eax
  int v8; // eax
  _BYTE lParam[256]; // [esp+Ch] [ebp-100h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x531f88*/
  if ( !result ) /*0x531f8f*/
  {
    v5 = (_DWORD *)((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, 8); /*0x531f98*/
    switch ( a2 ) /*0x531fa1*/
    {
      case 15: /*0x531fa1*/
        v8 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1818); /*0x5320db*/
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v8, 1264, 0, 0); /*0x5320eb*/
        break;
      case 273: /*0x531fa1*/
        if ( (unsigned __int16)a3 > 0x683u ) /*0x532033*/
        {
          if ( (unsigned __int16)a3 == 1668 ) /*0x5320a6*/
          {
            *v5 = 2; /*0x5320c2*/
            return 0; /*0x5320d2*/
          }
          if ( (unsigned __int16)a3 == 1670 ) /*0x5320ab*/
          {
            *v5 = 4; /*0x5320ae*/
            return 0; /*0x5320be*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x532035*/
          {
            case 0x683u: /*0x532035*/
              *v5 = 1; /*0x53208d*/
              return 0; /*0x53209d*/
            case 0x3EEu: /*0x532035*/
              *v5 = 6; /*0x532079*/
              return 0; /*0x532089*/
            case 0x55Cu: /*0x532035*/
              *v5 = 5; /*0x532065*/
              return 0; /*0x532075*/
            case 0x578u: /*0x532035*/
              *v5 = 3; /*0x532051*/
              return 0; /*0x532061*/
          }
        }
        break;
      case 1175: /*0x531fa1*/
        v6 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1821); /*0x531fcc*/
        ModuleInternalVersion = GetModuleInternalVersion((int)&MEMORY[0x87F7E8][539966]); /*0x531fce*/
        CharToWideString(ModuleInternalVersion); /*0x531fd5*/
        GetStringCSF((#72 *)aGuiVersion, 0, g_Str_File_Init_CPP, 5975); /*0x531fec*/
        swprintf((#72 *const)lParam, &off_826960); /*0x531ffc*/
        ((void (__stdcall *)(int, int, _DWORD, _BYTE *))SendMessageA)(v6, 1202, 0, lParam); /*0x532011*/
        return 0; /*0x532022*/
    }
    return 0; /*0x5320f1*/
  }
  return result; /*0x532017*/
}


// ==== 0x00532100  ScreenSaver::Process  this=ScreenSaver  sig=csp ====
char __usercall ScreenSaver::Process@<al>(char a1@<cl>, int a2@<ebx>, int a3@<ebp>)
{
  char result; // al
  Frame *v4; // ecx

  result = MEMORY[0x8A00A0]; /*0x532100*/
  if ( MEMORY[0x8A00A0] || a1 ) /*0x53210b*/
  {
    MEMORY[0x8A00A0] = 0; /*0x532111*/
    Screen::Capture(1, 0, a2, a3); /*0x532118*/
    LOBYTE(v4) = 0; /*0x532123*/
    return Frame::Present(v4, 0); /*0x532127*/
  }
  return result; /*0x53212c*/
}


// ==== 0x00532130  nullsub_19  this=-  sig=ida-proto ====
void nullsub_19()
{
  ; /*0x532130*/
}


// ==== 0x00532140  nullsub_151  this=-  sig=ida-proto ====
void nullsub_151()
{
  ; /*0x532140*/
}


// ==== 0x00532150  ObjectClass::InitCommands  this=ObjectClass  sig=csp ====
char InitCommands()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  int v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  int v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // esi
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // esi
  int v37; // eax
  _DWORD *v38; // eax
  _DWORD *v39; // esi
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // esi
  int v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // esi
  int v48; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // esi
  int v51; // eax
  _DWORD *v52; // eax
  _DWORD *v53; // esi
  int v54; // eax
  _DWORD *v55; // eax
  _DWORD *v56; // esi
  int v57; // eax
  _DWORD *v58; // eax
  _DWORD *v59; // esi
  int v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // esi
  int v63; // eax
  _DWORD *v64; // eax
  _DWORD *v65; // esi
  int v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // esi
  int v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // esi
  int v72; // eax
  _DWORD *v73; // eax
  _DWORD *v74; // esi
  int v75; // eax
  _DWORD *v76; // eax
  _DWORD *v77; // esi
  int v78; // eax
  _DWORD *v79; // eax
  _DWORD *v80; // esi
  int v81; // eax
  _DWORD *v82; // eax
  _DWORD *v83; // esi
  int v84; // eax
  _DWORD *v85; // eax
  _DWORD *v86; // esi
  int v87; // eax
  _DWORD *v88; // eax
  _DWORD *v89; // esi
  int v90; // eax
  _DWORD *v91; // eax
  _DWORD *v92; // esi
  int v93; // eax
  _DWORD *v94; // eax
  _DWORD *v95; // esi
  int v96; // eax
  _DWORD *v97; // eax
  _DWORD *v98; // esi
  int v99; // eax
  _DWORD *v100; // eax
  _DWORD *v101; // esi
  int v102; // eax
  _DWORD *v103; // eax
  _DWORD *v104; // esi
  int v105; // eax
  _DWORD *v106; // eax
  _DWORD *v107; // esi
  int v108; // eax
  _DWORD *v109; // eax
  _DWORD *v110; // esi
  int v111; // eax
  _DWORD *v112; // eax
  _DWORD *v113; // esi
  int v114; // eax
  _DWORD *v115; // eax
  _DWORD *v116; // esi
  int v117; // eax
  _DWORD *v118; // eax
  _DWORD *v119; // esi
  int v120; // eax
  _DWORD *v121; // eax
  _DWORD *v122; // esi
  int v123; // eax
  _DWORD *v124; // eax
  _DWORD *v125; // eax
  _DWORD *v126; // eax
  _DWORD *v127; // eax
  _DWORD *v128; // eax
  _DWORD *v129; // eax
  _DWORD *v130; // eax
  _DWORD *v131; // eax
  _DWORD *v132; // eax
  _DWORD *v133; // eax
  _DWORD *v134; // eax
  _DWORD *v135; // eax
  _DWORD *v136; // eax
  _DWORD *v137; // eax
  _DWORD *v138; // eax
  _DWORD *v139; // eax
  _DWORD *v140; // eax
  _DWORD *v141; // eax
  _DWORD *v142; // eax
  _DWORD *v143; // eax
  _DWORD *v144; // eax
  _DWORD *v145; // eax
  _DWORD *v146; // eax
  _DWORD *v147; // eax
  _DWORD *v148; // eax
  _DWORD *v149; // eax
  _DWORD *v150; // eax
  _DWORD *v151; // eax
  _DWORD *v152; // eax
  _DWORD *v153; // eax
  _DWORD *v154; // eax
  _DWORD *v155; // eax
  _DWORD *v156; // eax
  _DWORD *v157; // eax
  _DWORD *v158; // eax
  _DWORD *v159; // eax
  _DWORD *v160; // eax
  _DWORD *v161; // eax
  _DWORD *v162; // eax
  _DWORD *v163; // eax
  _DWORD *v164; // eax
  _DWORD *v165; // eax
  _DWORD *v166; // eax
  _DWORD *v167; // eax
  _DWORD *v168; // eax
  _DWORD *v169; // eax
  _DWORD *v170; // eax
  _DWORD *v172; // [esp+150h] [ebp-10h] BYREF
  _DWORD *v173; // [esp+154h] [ebp-Ch] BYREF
  _DWORD *v174; // [esp+158h] [ebp-8h] BYREF
  int v175; // [esp+15Ch] [ebp-4h] BYREF

  if ( LOBYTE(MEMORY[0x87F7E8][536627]) ) /*0x53215e*/
  {
    v0 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532166*/
    if ( v0 ) /*0x532170*/
    {
      *v0 = &MultiplayerDebugCommandClass::`vftable'; /*0x532172*/
      v1 = v0; /*0x532178*/
    }
    else
    {
      v1 = 0; /*0x53217c*/
    }
    if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5321b1*/
      || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
      && dword_87F5D8[37] > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
           &dword_87F5D8[32],
           dword_87F5D8[34] + dword_87F5D8[37],
           0) )
    {
      v2 = dword_87F5D8[36]++; /*0x5321be*/
      *(_DWORD *)(dword_87F5D8[33] + 4 * v2) = v1; /*0x5321cd*/
    }
    v3 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5321d2*/
    if ( v3 ) /*0x5321dc*/
    {
      *v3 = &MultiplayerSyncCommandClass::`vftable'; /*0x5321de*/
      v4 = v3; /*0x5321e4*/
    }
    else
    {
      v4 = 0; /*0x5321e8*/
    }
    if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53221e*/
      || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
      && dword_87F5D8[37] > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
           &dword_87F5D8[32],
           dword_87F5D8[34] + dword_87F5D8[37],
           0) )
    {
      v5 = dword_87F5D8[36]++; /*0x53222b*/
      *(_DWORD *)(dword_87F5D8[33] + 4 * v5) = v4; /*0x53223a*/
    }
  }
  v6 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53223f*/
  if ( v6 ) /*0x532249*/
  {
    *v6 = &FollowCommandClass::`vftable'; /*0x53224b*/
    v7 = v6; /*0x532251*/
  }
  else
  {
    v7 = 0; /*0x532255*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53228b*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v8 = dword_87F5D8[36]++; /*0x532298*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v8) = v7; /*0x5322a7*/
  }
  v9 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5322ac*/
  if ( v9 ) /*0x5322b6*/
  {
    *v9 = &View1CommandClass::`vftable'; /*0x5322b8*/
    v10 = v9; /*0x5322be*/
  }
  else
  {
    v10 = 0; /*0x5322c2*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5322f8*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v11 = dword_87F5D8[36]++; /*0x532305*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v11) = v10; /*0x532314*/
  }
  v12 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532319*/
  if ( v12 ) /*0x532323*/
  {
    *v12 = &View2CommandClass::`vftable'; /*0x532325*/
    v13 = v12; /*0x53232b*/
  }
  else
  {
    v13 = 0; /*0x53232f*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532365*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v14 = dword_87F5D8[36]++; /*0x532372*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v14) = v13; /*0x532381*/
  }
  v15 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532386*/
  if ( v15 ) /*0x532390*/
  {
    *v15 = &View3CommandClass::`vftable'; /*0x532392*/
    v16 = v15; /*0x532398*/
  }
  else
  {
    v16 = 0; /*0x53239c*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5323d2*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v17 = dword_87F5D8[36]++; /*0x5323df*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v17) = v16; /*0x5323ee*/
  }
  v18 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5323f3*/
  if ( v18 ) /*0x5323fd*/
  {
    *v18 = &View4CommandClass::`vftable'; /*0x5323ff*/
    v19 = v18; /*0x532405*/
  }
  else
  {
    v19 = 0; /*0x532409*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53243f*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v20 = dword_87F5D8[36]++; /*0x53244c*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v20) = v19; /*0x53245b*/
  }
  v21 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532460*/
  if ( v21 ) /*0x53246a*/
  {
    *v21 = &SetView1CommandClass::`vftable'; /*0x53246c*/
    v22 = v21; /*0x532472*/
  }
  else
  {
    v22 = 0; /*0x532476*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5324ac*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v23 = dword_87F5D8[36]++; /*0x5324b9*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v23) = v22; /*0x5324c8*/
  }
  v24 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5324cd*/
  if ( v24 ) /*0x5324d7*/
  {
    *v24 = &SetView2CommandClass::`vftable'; /*0x5324d9*/
    v25 = v24; /*0x5324df*/
  }
  else
  {
    v25 = 0; /*0x5324e3*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532519*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v26 = dword_87F5D8[36]++; /*0x532526*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v26) = v25; /*0x532535*/
  }
  v27 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53253a*/
  if ( v27 ) /*0x532544*/
  {
    *v27 = &SetView3CommandClass::`vftable'; /*0x532546*/
    v28 = v27; /*0x53254c*/
  }
  else
  {
    v28 = 0; /*0x532550*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532586*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v29 = dword_87F5D8[36]++; /*0x532593*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v29) = v28; /*0x5325a2*/
  }
  v30 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5325a7*/
  if ( v30 ) /*0x5325b1*/
  {
    *v30 = &SetView4CommandClass::`vftable'; /*0x5325b3*/
    v31 = v30; /*0x5325b9*/
  }
  else
  {
    v31 = 0; /*0x5325bd*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5325f3*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v32 = dword_87F5D8[36]++; /*0x532600*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v32) = v31; /*0x53260f*/
  }
  v33 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532614*/
  if ( v33 ) /*0x53261e*/
  {
    *v33 = &OptionsCommandClass::`vftable'; /*0x532620*/
    v173 = v33; /*0x532626*/
  }
  else
  {
    v173 = 0; /*0x53262c*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532664*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v34 = dword_87F5D8[36]++; /*0x532675*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v34) = v173; /*0x532684*/
  }
  v35 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532689*/
  if ( v35 ) /*0x532693*/
  {
    *v35 = &SidebarUpCommandClass::`vftable'; /*0x532695*/
    v36 = v35; /*0x53269b*/
  }
  else
  {
    v36 = 0; /*0x53269f*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5326d4*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v37 = dword_87F5D8[36]++; /*0x5326e1*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v37) = v36; /*0x5326f0*/
  }
  v38 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5326f5*/
  if ( v38 ) /*0x5326ff*/
  {
    *v38 = &SidebarDownCommandClass::`vftable'; /*0x532701*/
    v39 = v38; /*0x532707*/
  }
  else
  {
    v39 = 0; /*0x53270b*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532741*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v40 = dword_87F5D8[36]++; /*0x53274e*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v40) = v39; /*0x53275d*/
  }
  v41 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532762*/
  if ( v41 ) /*0x53276c*/
  {
    *v41 = &CenterREventCommandClass::`vftable'; /*0x53276e*/
    v174 = v41; /*0x532774*/
  }
  else
  {
    v174 = 0; /*0x53277a*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5327b2*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v42 = dword_87F5D8[36]++; /*0x5327c3*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v42) = v174; /*0x5327d2*/
  }
  v43 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5327d7*/
  if ( v43 ) /*0x5327e1*/
  {
    *v43 = &BeaconPlacementCommandClass::`vftable'; /*0x5327e3*/
    v44 = v43; /*0x5327e9*/
  }
  else
  {
    v44 = 0; /*0x5327ed*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532822*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v45 = dword_87F5D8[36]++; /*0x53282f*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v45) = v44; /*0x53283e*/
  }
  v46 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532843*/
  if ( v46 ) /*0x53284d*/
  {
    *v46 = &ToggleSellCommandClass::`vftable'; /*0x53284f*/
    v47 = v46; /*0x532855*/
  }
  else
  {
    v47 = 0; /*0x532859*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53288f*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v48 = dword_87F5D8[36]++; /*0x53289c*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v48) = v47; /*0x5328ab*/
  }
  v49 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5328b0*/
  if ( v49 ) /*0x5328ba*/
  {
    *v49 = &ToggleRepairCommandClass::`vftable'; /*0x5328bc*/
    v50 = v49; /*0x5328c2*/
  }
  else
  {
    v50 = 0; /*0x5328c6*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5328fc*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v51 = dword_87F5D8[36]++; /*0x532909*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v51) = v50; /*0x532918*/
  }
  v52 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53291d*/
  if ( v52 ) /*0x532927*/
  {
    *v52 = &AllianceCommandClass::`vftable'; /*0x532929*/
    v53 = v52; /*0x53292f*/
  }
  else
  {
    v53 = 0; /*0x532933*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532969*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v54 = dword_87F5D8[36]++; /*0x532976*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v54) = v53; /*0x532985*/
  }
  v55 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53298a*/
  if ( v55 ) /*0x532994*/
  {
    *v55 = &CenterBaseCommandClass::`vftable'; /*0x532996*/
    v56 = v55; /*0x53299c*/
  }
  else
  {
    v56 = 0; /*0x5329a0*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5329d6*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v57 = dword_87F5D8[36]++; /*0x5329e3*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v57) = v56; /*0x5329f2*/
  }
  v58 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5329f7*/
  if ( v58 ) /*0x532a01*/
  {
    *v58 = &CenterViewCommandClass::`vftable'; /*0x532a03*/
    v59 = v58; /*0x532a09*/
  }
  else
  {
    v59 = 0; /*0x532a0d*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532a43*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v60 = dword_87F5D8[36]++; /*0x532a50*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v60) = v59; /*0x532a5f*/
  }
  v61 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532a64*/
  if ( v61 ) /*0x532a6e*/
  {
    *v61 = &ScatterCommandClass::`vftable'; /*0x532a70*/
    v62 = v61; /*0x532a76*/
  }
  else
  {
    v62 = 0; /*0x532a7a*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532ab0*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v63 = dword_87F5D8[36]++; /*0x532abd*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v63) = v62; /*0x532acc*/
  }
  v64 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532ad1*/
  if ( v64 ) /*0x532adb*/
  {
    *v64 = &GuardCommandClass::`vftable'; /*0x532add*/
    v65 = v64; /*0x532ae3*/
  }
  else
  {
    v65 = 0; /*0x532ae7*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532b1d*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v66 = dword_87F5D8[36]++; /*0x532b2a*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v66) = v65; /*0x532b39*/
  }
  v67 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532b3e*/
  if ( v67 ) /*0x532b48*/
  {
    *v67 = &StopCommandClass::`vftable'; /*0x532b4a*/
    v68 = v67; /*0x532b50*/
  }
  else
  {
    v68 = 0; /*0x532b54*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532b8a*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v69 = dword_87F5D8[36]++; /*0x532b97*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v69) = v68; /*0x532ba6*/
  }
  v70 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532bab*/
  if ( v70 ) /*0x532bb5*/
  {
    *v70 = &AllToCheerCommandClass::`vftable'; /*0x532bb7*/
    v71 = v70; /*0x532bbd*/
  }
  else
  {
    v71 = 0; /*0x532bc1*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532bf7*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v72 = dword_87F5D8[36]++; /*0x532c04*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v72) = v71; /*0x532c13*/
  }
  v73 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532c18*/
  if ( v73 ) /*0x532c22*/
  {
    *v73 = &DeployCommandClass::`vftable'; /*0x532c24*/
    v74 = v73; /*0x532c2a*/
  }
  else
  {
    v74 = 0; /*0x532c2e*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532c64*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v75 = dword_87F5D8[36]++; /*0x532c71*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v75) = v74; /*0x532c80*/
  }
  v76 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532c85*/
  if ( v76 ) /*0x532c8f*/
  {
    *v76 = &PrevObjectCommandClass::`vftable'; /*0x532c91*/
    v77 = v76; /*0x532c97*/
  }
  else
  {
    v77 = 0; /*0x532c9b*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532cd1*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v78 = dword_87F5D8[36]++; /*0x532cde*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v78) = v77; /*0x532ced*/
  }
  v79 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532cf2*/
  if ( v79 ) /*0x532cfc*/
  {
    *v79 = &NextObjectCommandClass::`vftable'; /*0x532cfe*/
    v80 = v79; /*0x532d04*/
  }
  else
  {
    v80 = 0; /*0x532d08*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532d3e*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v81 = dword_87F5D8[36]++; /*0x532d4b*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v81) = v80; /*0x532d5a*/
  }
  v82 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532d5f*/
  if ( v82 ) /*0x532d69*/
  {
    *v82 = &PlanningModeCommandClass::`vftable'; /*0x532d6b*/
    v83 = v82; /*0x532d71*/
  }
  else
  {
    v83 = 0; /*0x532d75*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532dab*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v84 = dword_87F5D8[36]++; /*0x532db8*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v84) = v83; /*0x532dc7*/
  }
  v85 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532dcc*/
  if ( v85 ) /*0x532dd6*/
  {
    *v85 = &CombatantSelectCommandClass::`vftable'; /*0x532dd8*/
    v86 = v85; /*0x532dde*/
  }
  else
  {
    v86 = 0; /*0x532de2*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532e18*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v87 = dword_87F5D8[36]++; /*0x532e25*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v87) = v86; /*0x532e34*/
  }
  v88 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532e39*/
  if ( v88 ) /*0x532e43*/
  {
    *v88 = &TypeSelectCommandClass::`vftable'; /*0x532e45*/
    v89 = v88; /*0x532e4b*/
  }
  else
  {
    v89 = 0; /*0x532e4f*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532e85*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v90 = dword_87F5D8[36]++; /*0x532e92*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v90) = v89; /*0x532ea1*/
  }
  v91 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532ea6*/
  if ( v91 ) /*0x532eb0*/
  {
    *v91 = &HealthNavCommandClass::`vftable'; /*0x532eb2*/
    v92 = v91; /*0x532eb8*/
  }
  else
  {
    v92 = 0; /*0x532ebc*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532ef2*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v93 = dword_87F5D8[36]++; /*0x532eff*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v93) = v92; /*0x532f0e*/
  }
  v94 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532f13*/
  if ( v94 ) /*0x532f1d*/
  {
    *v94 = &VeterancyNavCommandClass::`vftable'; /*0x532f1f*/
    v95 = v94; /*0x532f25*/
  }
  else
  {
    v95 = 0; /*0x532f29*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532f5f*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v96 = dword_87F5D8[36]++; /*0x532f6c*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v96) = v95; /*0x532f7b*/
  }
  v97 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532f80*/
  if ( v97 ) /*0x532f8a*/
  {
    *v97 = &SetStructureTabCommandClass::`vftable'; /*0x532f8c*/
    v98 = v97; /*0x532f92*/
  }
  else
  {
    v98 = 0; /*0x532f96*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532fcc*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v99 = dword_87F5D8[36]++; /*0x532fd9*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v99) = v98; /*0x532fe8*/
  }
  v100 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532fed*/
  if ( v100 ) /*0x532ff7*/
  {
    *v100 = &SetDefenseTabCommandClass::`vftable'; /*0x532ff9*/
    v101 = v100; /*0x532fff*/
  }
  else
  {
    v101 = 0; /*0x533003*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533039*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v102 = dword_87F5D8[36]++; /*0x533046*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v102) = v101; /*0x533055*/
  }
  v103 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53305a*/
  if ( v103 ) /*0x533064*/
  {
    *v103 = &SetUnitTabCommandClass::`vftable'; /*0x533066*/
    v104 = v103; /*0x53306c*/
  }
  else
  {
    v104 = 0; /*0x533070*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5330a6*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v105 = dword_87F5D8[36]++; /*0x5330b3*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v105) = v104; /*0x5330c2*/
  }
  v106 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5330c7*/
  if ( v106 ) /*0x5330d1*/
  {
    *v106 = &SetInfantryTabCommandClass::`vftable'; /*0x5330d3*/
    v107 = v106; /*0x5330d9*/
  }
  else
  {
    v107 = 0; /*0x5330dd*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533113*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v108 = dword_87F5D8[36]++; /*0x533120*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v108) = v107; /*0x53312f*/
  }
  v109 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533134*/
  if ( v109 ) /*0x53313e*/
  {
    v109[1] = 1; /*0x533140*/
    *v109 = &CreateTeamCommandClass::`vftable'; /*0x533147*/
    v110 = v109; /*0x53314d*/
  }
  else
  {
    v110 = 0; /*0x533151*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533187*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v111 = dword_87F5D8[36]++; /*0x533194*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v111) = v110; /*0x5331a3*/
  }
  v112 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5331a8*/
  if ( v112 ) /*0x5331b2*/
  {
    v112[1] = 2; /*0x5331b4*/
    *v112 = &CreateTeamCommandClass::`vftable'; /*0x5331bb*/
    v113 = v112; /*0x5331c1*/
  }
  else
  {
    v113 = 0; /*0x5331c5*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5331fb*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v114 = dword_87F5D8[36]++; /*0x533208*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v114) = v113; /*0x533217*/
  }
  v115 = (_DWORD *)__2_YAPAXI_Z(8); /*0x53321c*/
  if ( v115 ) /*0x533226*/
  {
    v115[1] = 3; /*0x533228*/
    *v115 = &CreateTeamCommandClass::`vftable'; /*0x53322f*/
    v116 = v115; /*0x533235*/
  }
  else
  {
    v116 = 0; /*0x533239*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53326f*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v117 = dword_87F5D8[36]++; /*0x53327c*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v117) = v116; /*0x53328b*/
  }
  v118 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533290*/
  if ( v118 ) /*0x53329a*/
  {
    v118[1] = 4; /*0x53329c*/
    *v118 = &CreateTeamCommandClass::`vftable'; /*0x5332a3*/
    v119 = v118; /*0x5332a9*/
  }
  else
  {
    v119 = 0; /*0x5332ad*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5332e3*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v120 = dword_87F5D8[36]++; /*0x5332f0*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v120) = v119; /*0x5332ff*/
  }
  v121 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533304*/
  if ( v121 ) /*0x53330e*/
  {
    v121[1] = 5; /*0x533310*/
    *v121 = &CreateTeamCommandClass::`vftable'; /*0x533317*/
    v122 = v121; /*0x53331d*/
  }
  else
  {
    v122 = 0; /*0x533321*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533357*/
    || (BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    v123 = dword_87F5D8[36]++; /*0x533364*/
    *(_DWORD *)(dword_87F5D8[33] + 4 * v123) = v122; /*0x533373*/
  }
  v124 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533378*/
  if ( v124 ) /*0x533382*/
    v175 = (int)CreateTeamCommand::Construct(v124, 6); /*0x53338d*/
  else
    v175 = 0; /*0x533393*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5333a1*/
  v125 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5333a8*/
  if ( v125 ) /*0x5333b2*/
    v175 = (int)CreateTeamCommand::Construct(v125, 7); /*0x5333bd*/
  else
    v175 = 0; /*0x5333c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5333d1*/
  v126 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5333d8*/
  if ( v126 ) /*0x5333e2*/
    v175 = (int)CreateTeamCommand::Construct(v126, 8); /*0x5333ed*/
  else
    v175 = 0; /*0x5333f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533401*/
  v127 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533408*/
  if ( v127 ) /*0x533412*/
    v175 = (int)CreateTeamCommand::Construct(v127, 9); /*0x53341d*/
  else
    v175 = 0; /*0x533423*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533431*/
  v128 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533438*/
  if ( v128 ) /*0x533442*/
    v175 = (int)CreateTeamCommand::Construct(v128, 10); /*0x53344d*/
  else
    v175 = 0; /*0x533453*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533461*/
  v129 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533468*/
  if ( v129 ) /*0x533472*/
    v175 = (int)SelectTeamCommand::Construct(v129, 1); /*0x53347d*/
  else
    v175 = 0; /*0x533483*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533491*/
  v130 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533498*/
  if ( v130 ) /*0x5334a2*/
    v175 = (int)SelectTeamCommand::Construct(v130, 2); /*0x5334ad*/
  else
    v175 = 0; /*0x5334b3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5334c1*/
  v131 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5334c8*/
  if ( v131 ) /*0x5334d2*/
    v175 = (int)SelectTeamCommand::Construct(v131, 3); /*0x5334dd*/
  else
    v175 = 0; /*0x5334e3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5334f1*/
  v132 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5334f8*/
  if ( v132 ) /*0x533502*/
    v175 = (int)SelectTeamCommand::Construct(v132, 4); /*0x53350d*/
  else
    v175 = 0; /*0x533513*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533521*/
  v133 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533528*/
  if ( v133 ) /*0x533532*/
    v175 = (int)SelectTeamCommand::Construct(v133, 5); /*0x53353d*/
  else
    v175 = 0; /*0x533543*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533551*/
  v134 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533558*/
  if ( v134 ) /*0x533562*/
    v175 = (int)SelectTeamCommand::Construct(v134, 6); /*0x53356d*/
  else
    v175 = 0; /*0x533573*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533581*/
  v135 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533588*/
  if ( v135 ) /*0x533592*/
    v175 = (int)SelectTeamCommand::Construct(v135, 7); /*0x53359d*/
  else
    v175 = 0; /*0x5335a3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5335b1*/
  v136 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5335b8*/
  if ( v136 ) /*0x5335c2*/
    v175 = (int)SelectTeamCommand::Construct(v136, 8); /*0x5335cd*/
  else
    v175 = 0; /*0x5335d3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5335e1*/
  v137 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5335e8*/
  if ( v137 ) /*0x5335f2*/
    v175 = (int)SelectTeamCommand::Construct(v137, 9); /*0x5335fd*/
  else
    v175 = 0; /*0x533603*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533611*/
  v138 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533618*/
  if ( v138 ) /*0x533622*/
    v175 = (int)SelectTeamCommand::Construct(v138, 10); /*0x53362d*/
  else
    v175 = 0; /*0x533633*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533641*/
  v139 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533648*/
  if ( v139 ) /*0x533652*/
    v175 = (int)AddTeamCommand::Construct(v139, 1); /*0x53365d*/
  else
    v175 = 0; /*0x533663*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533671*/
  v140 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533678*/
  if ( v140 ) /*0x533682*/
    v175 = (int)AddTeamCommand::Construct(v140, 2); /*0x53368d*/
  else
    v175 = 0; /*0x533693*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5336a1*/
  v141 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5336a8*/
  if ( v141 ) /*0x5336b2*/
    v175 = (int)AddTeamCommand::Construct(v141, 3); /*0x5336bd*/
  else
    v175 = 0; /*0x5336c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5336d1*/
  v142 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5336d8*/
  if ( v142 ) /*0x5336e2*/
    v175 = (int)AddTeamCommand::Construct(v142, 4); /*0x5336ed*/
  else
    v175 = 0; /*0x5336f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533701*/
  v143 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533708*/
  if ( v143 ) /*0x533712*/
    v175 = (int)AddTeamCommand::Construct(v143, 5); /*0x53371d*/
  else
    v175 = 0; /*0x533723*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533731*/
  v144 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533738*/
  if ( v144 ) /*0x533742*/
    v175 = (int)AddTeamCommand::Construct(v144, 6); /*0x53374d*/
  else
    v175 = 0; /*0x533753*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533761*/
  v145 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533768*/
  if ( v145 ) /*0x533772*/
    v175 = (int)AddTeamCommand::Construct(v145, 7); /*0x53377d*/
  else
    v175 = 0; /*0x533783*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533791*/
  v146 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533798*/
  if ( v146 ) /*0x5337a2*/
    v175 = (int)AddTeamCommand::Construct(v146, 8); /*0x5337ad*/
  else
    v175 = 0; /*0x5337b3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5337c1*/
  v147 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5337c8*/
  if ( v147 ) /*0x5337d2*/
    v175 = (int)AddTeamCommand::Construct(v147, 9); /*0x5337dd*/
  else
    v175 = 0; /*0x5337e3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5337f1*/
  v148 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5337f8*/
  if ( v148 ) /*0x533802*/
    v175 = (int)AddTeamCommand::Construct(v148, 10); /*0x53380d*/
  else
    v175 = 0; /*0x533813*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533821*/
  v149 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533828*/
  if ( v149 ) /*0x533832*/
    v175 = (int)CenterTeamCommand::Construct(v149, 1); /*0x53383d*/
  else
    v175 = 0; /*0x533843*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533851*/
  v150 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533858*/
  if ( v150 ) /*0x533862*/
    v175 = (int)CenterTeamCommand::Construct(v150, 2); /*0x53386d*/
  else
    v175 = 0; /*0x533873*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533881*/
  v151 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533888*/
  if ( v151 ) /*0x533892*/
    v175 = (int)CenterTeamCommand::Construct(v151, 3); /*0x53389d*/
  else
    v175 = 0; /*0x5338a3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5338b1*/
  v152 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5338b8*/
  if ( v152 ) /*0x5338c2*/
    v175 = (int)CenterTeamCommand::Construct(v152, 4); /*0x5338cd*/
  else
    v175 = 0; /*0x5338d3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5338e1*/
  v153 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5338e8*/
  if ( v153 ) /*0x5338f2*/
    v175 = (int)CenterTeamCommand::Construct(v153, 5); /*0x5338fd*/
  else
    v175 = 0; /*0x533903*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533911*/
  v154 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533918*/
  if ( v154 ) /*0x533922*/
    v175 = (int)CenterTeamCommand::Construct(v154, 6); /*0x53392d*/
  else
    v175 = 0; /*0x533933*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533941*/
  v155 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533948*/
  if ( v155 ) /*0x533952*/
    v175 = (int)CenterTeamCommand::Construct(v155, 7); /*0x53395d*/
  else
    v175 = 0; /*0x533963*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533971*/
  v156 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533978*/
  if ( v156 ) /*0x533982*/
    v175 = (int)CenterTeamCommand::Construct(v156, 8); /*0x53398d*/
  else
    v175 = 0; /*0x533993*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5339a1*/
  v157 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5339a8*/
  if ( v157 ) /*0x5339b2*/
    v175 = (int)CenterTeamCommand::Construct(v157, 9); /*0x5339bd*/
  else
    v175 = 0; /*0x5339c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5339d1*/
  v158 = (_DWORD *)__2_YAPAXI_Z(8); /*0x5339d8*/
  if ( v158 ) /*0x5339e2*/
    v175 = (int)CenterTeamCommand::Construct(v158, 10); /*0x5339ed*/
  else
    v175 = 0; /*0x5339f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a01*/
  v159 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533a08*/
  if ( v159 ) /*0x533a12*/
    v175 = (int)TauntCommandClass::Construct(v159, 1); /*0x533a1d*/
  else
    v175 = 0; /*0x533a23*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a31*/
  v160 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533a38*/
  if ( v160 ) /*0x533a42*/
    v175 = (int)TauntCommandClass::Construct(v160, 2); /*0x533a4d*/
  else
    v175 = 0; /*0x533a53*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a61*/
  v161 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533a68*/
  if ( v161 ) /*0x533a72*/
    v175 = (int)TauntCommandClass::Construct(v161, 3); /*0x533a7d*/
  else
    v175 = 0; /*0x533a83*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a91*/
  v162 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533a98*/
  if ( v162 ) /*0x533aa2*/
    v175 = (int)TauntCommandClass::Construct(v162, 4); /*0x533aad*/
  else
    v175 = 0; /*0x533ab3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533ac1*/
  v163 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533ac8*/
  if ( v163 ) /*0x533ad2*/
    v175 = (int)TauntCommandClass::Construct(v163, 5); /*0x533add*/
  else
    v175 = 0; /*0x533ae3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533af1*/
  v164 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533af8*/
  if ( v164 ) /*0x533b02*/
    v175 = (int)TauntCommandClass::Construct(v164, 6); /*0x533b0d*/
  else
    v175 = 0; /*0x533b13*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b21*/
  v165 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533b28*/
  if ( v165 ) /*0x533b32*/
    v175 = (int)TauntCommandClass::Construct(v165, 7); /*0x533b3d*/
  else
    v175 = 0; /*0x533b43*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b51*/
  v166 = (_DWORD *)__2_YAPAXI_Z(8); /*0x533b58*/
  if ( v166 ) /*0x533b62*/
    v175 = (int)TauntCommandClass::Construct(v166, 8); /*0x533b6d*/
  else
    v175 = 0; /*0x533b73*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b81*/
  v167 = (_DWORD *)__2_YAPAXI_Z(4); /*0x533b88*/
  if ( v167 ) /*0x533b92*/
    v175 = (int)ScreenCaptureCommandClass::Constructor(v167); /*0x533b9b*/
  else
    v175 = 0; /*0x533ba1*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533baf*/
  v168 = (_DWORD *)__2_YAPAXI_Z(4); /*0x533bb6*/
  if ( v168 ) /*0x533bc0*/
    v175 = (int)PageUserCommandClass::PageUserCommandClass(v168); /*0x533bc9*/
  else
    v175 = 0; /*0x533bcf*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533bdd*/
  v169 = (_DWORD *)__2_YAPAXI_Z(4); /*0x533be4*/
  if ( v169 ) /*0x533bee*/
    v175 = (int)CursorPositionCommandClass::Constructor(v169); /*0x533bf7*/
  else
    v175 = 0; /*0x533bfd*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533c0b*/
  v170 = (_DWORD *)__2_YAPAXI_Z(4); /*0x533c12*/
  if ( v170 ) /*0x533c1c*/
    v172 = DeleteCommandClass::Constructor(v170); /*0x533c25*/
  else
    v172 = 0; /*0x533c2b*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v172); /*0x533c39*/
  KeyboardConfig::LoadINI(); /*0x533c3e*/
  v175 = 46; /*0x533c52*/
  if ( SortedArray::FindPair((int)&dword_87F5D8[42], &v175) ) /*0x533c56*/
  {
    v175 = 46; /*0x533c69*/
    SortedArray::RemoveByKey((int)&dword_87F5D8[42], &v175); /*0x533c6d*/
  }
  v175 = 46; /*0x533c81*/
  SortedArray::Append((int)&dword_87F5D8[42], &v175, &v172); /*0x533c85*/
  v175 = 27; /*0x533c99*/
  if ( SortedArray::FindPair((int)&dword_87F5D8[42], &v175) ) /*0x533c9d*/
  {
    v175 = 27; /*0x533cb0*/
    SortedArray::RemoveByKey((int)&dword_87F5D8[42], &v175); /*0x533cb4*/
  }
  v175 = 27; /*0x533cc8*/
  SortedArray::Append((int)&dword_87F5D8[42], &v175, &v173); /*0x533ccc*/
  v175 = 32; /*0x533ce0*/
  if ( SortedArray::FindPair((int)&dword_87F5D8[42], &v175) ) /*0x533ce4*/
  {
    v175 = 32; /*0x533cf1*/
    SortedArray::RemoveByKey((int)&dword_87F5D8[42], &v175); /*0x533cfb*/
  }
  v175 = 32; /*0x533d0f*/
  return SortedArray::Append((int)&dword_87F5D8[42], &v175, &v174); /*0x533d18*/
}


// ==== 0x00533D20  KeyboardConfig::LoadINI  this=KeyboardConfig  sig=csp ====
char KeyboardConfig_LoadINI()
{
  int v0; // esi
  const char *StringByIndex; // ebp
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  void *v8[16]; // [esp+Ch] [ebp-C4h] BYREF
  char v9; // [esp+4Ch] [ebp-84h]
  _DWORD v10[22]; // [esp+64h] [ebp-6Ch] BYREF
  _BYTE v11[12]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]

  INIClass::INIClass(v8); /*0x533d2b*/
  v9 = 0; /*0x533d3b*/
  v8[0] = &CCINIClass_Vtable; /*0x533d3f*/
  CCFileClass::Construct(v10, MEMORY[0x827B88]); /*0x533d47*/
  if ( CCINIClass::Load(v8, (int)v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F680]); /*0x533d6c*/
    v0 = 0; /*0x533d74*/
    MEMORY[0x87F680] = 0; /*0x533d7a*/
    MEMORY[0x87F684] = 0; /*0x533d85*/
    MEMORY[0x87F688] = 0; /*0x533d8b*/
    MEMORY[0x87F68C] = 0; /*0x533d91*/
    MEMORY[0x87F690] = 0; /*0x533d97*/
    for ( i = 0; i < INIClass::GetKeyCount((char *)v8, (unsigned __int8 *)g_INI_Key_Hotkey); v0 = i ) /*0x533da8*/
    {
      StringByIndex = (const char *)INIClass::GetStringByIndex((char *)v8, (unsigned __int8 *)g_INI_Key_Hotkey, v0); /*0x533dbf*/
      v2 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( MEMORY[0x87F668] > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0x87F65C] + v2) + 4))(*((_DWORD *)MEMORY[0x87F65C] + v2)),
                  StringByIndex) )
        {
          if ( ++v2 >= MEMORY[0x87F668] ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        v3 = *((_DWORD *)MEMORY[0x87F65C] + v2); /*0x533e32*/
        if ( v3 && Int_Overwrite ) /*0x533e3f*/
        {
          v4 = MEMORY[0x87F688]; /*0x533e47*/
          if ( (int)(MEMORY[0x87F684] + 1) <= MEMORY[0x87F688] ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !MEMORY[0x87F688] ) /*0x533e53*/
            v4 = 10; /*0x533e55*/
          if ( (unsigned __int8)KeyboardConfig::ReleaseBuffer(v4) ) /*0x533e60*/
          {
LABEL_13:
            *((_DWORD *)MEMORY[0x87F680] + 2 * MEMORY[0x87F684]) = Int_Overwrite; /*0x533e74*/
            *((_DWORD *)MEMORY[0x87F680] + 2 * MEMORY[0x87F684] + 1) = v3; /*0x533e83*/
            MEMORY[0x87F68C] = 0; /*0x533e8d*/
            ++MEMORY[0x87F684]; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    v10[0] = &vt_CCFileClass; /*0x533ec0*/
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    v10[0] = &off_7E1668; /*0x533ed8*/
    BufferIOFileClass::Dtor(v10); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    Debug::Log(); /*0x533efe*/
    v10[0] = &vt_CCFileClass; /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    v10[0] = &off_7E1668; /*0x533f25*/
    BufferIOFileClass::Dtor(v10); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533f36*/
    return 0; /*0x533f3b*/
  }
}


// ==== 0x00533F50  Sidebar::ScrollSidebarSkipGame  this=char*  sig=csp ====
int __thiscall Sidebar::ScrollSidebarSkipGame(const char *this)
{
  int result; // eax
  int v2; // edi

  result = MEMORY[0x87F668]; /*0x533f50*/
  v2 = 0; /*0x533f59*/
  if ( MEMORY[0x87F668] > 0 ) /*0x533f5f*/
  {
    while ( strcmp( /*0x533f9f*/
              (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0x87F65C] + v2) + 4))(*((_DWORD *)MEMORY[0x87F65C] + v2)),
              this) )
    {
      result = MEMORY[0x87F668]; /*0x533fa1*/
      if ( ++v2 >= MEMORY[0x87F668] ) /*0x533fa9*/
        return result; /*0x533fa9*/
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0x87F65C] + v2) + 32))( /*0x533fbc*/
             *((_DWORD *)MEMORY[0x87F65C] + v2),
             0);
  }
  return result; /*0x533fab*/
}


// ==== 0x00533FD0  AllocateSurfaceScreenSurfaces  this=-  sig=csp ====
char __fastcall AllocateSurfaceScreenSurfaces(int a1, ObjectClass *aP1, ObjectClass *aP2, int a4, char a5)
{
  bool v7; // bl
  char *v8; // eax
  DSurface *v9; // eax
  char *v10; // eax
  DSurface *v12; // eax
  char *eax36; // eax
  DSurface *v15; // eax
  char *v14; // eax
  char *eax50; // eax
  char *v16; // eax
  DSurface *v20; // eax
  char *v18; // eax
  DSurface *v23; // eax
  char *eax68; // eax
  DSurface *v26; // eax
  bool var1; // [esp+29h] [ebp-1h]

  Debug::Log(); /*0x533fdd*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22528] ) /*0x533fee*/
  {
    Debug::Log(); /*0x533ff5*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22528] ) /*0x534005*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22528])( /*0x53400b*/
        *(_DWORD *)&stru_87C374.__pad_579C[22528],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22528] = 0; /*0x53400d*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22524] ) /*0x534019*/
  {
    Debug::Log(); /*0x534020*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22524] ) /*0x534030*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22524])( /*0x534036*/
        *(_DWORD *)&stru_87C374.__pad_579C[22524],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22524] = 0; /*0x534038*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] ) /*0x534044*/
  {
    Debug::Log(); /*0x53404b*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] ) /*0x53405b*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22540])( /*0x534061*/
        *(_DWORD *)&stru_87C374.__pad_579C[22540],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22540] = 0; /*0x534063*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22508] ) /*0x53406f*/
  {
    Debug::Log(); /*0x534076*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22508] ) /*0x534086*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22508])( /*0x53408c*/
        *(_DWORD *)&stru_87C374.__pad_579C[22508],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22508] = 0; /*0x53408e*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22512] ) /*0x53409a*/
  {
    Debug::Log(); /*0x5340a1*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22512] ) /*0x5340b1*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22512])( /*0x5340b7*/
        *(_DWORD *)&stru_87C374.__pad_579C[22512],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[22512] = 0; /*0x5340b9*/
  }
  v7 = stru_830620.__pad_579C[44208] == 0; /*0x5340d2*/
  var1 = HouseClass_Player.__pad_5568[22754] == 0; /*0x5340d7*/
  if ( a5 && *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5340e8*/
  {
    v8 = (char *)__2_YAPAXI_Z(0x24u); /*0x5340ec*/
    if ( v8 ) /*0x5340f6*/
      v9 = (DSurface *)DSurface::Construct(v8, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), 0, 0); /*0x534104*/
    else
      v9 = 0; /*0x53410b*/
    *(_DWORD *)&stru_87C374.__pad_579C[22524] = v9; /*0x53410d*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v9->field_0 + 24))(v9, 0); /*0x534117*/
    Debug::Log(); /*0x53413e*/
  }
  if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 ) /*0x53414e*/
  {
    v10 = (char *)__2_YAPAXI_Z(0x24u); /*0x534152*/
    if ( v10 ) /*0x53415c*/
      v12 = (DSurface *)DSurface::Construct( /*0x534172*/
                          v10,
                          *(IUnknown **)&aP1->__pad_0[8],
                          *(DSurface **)&aP1->__pad_0[12],
                          (ObjectClass *)v7,
                          1);
    else
      v12 = 0; /*0x534179*/
    *(_DWORD *)&stru_87C374.__pad_579C[22540] = v12; /*0x53417b*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v12->field_0 + 24))(v12, 0); /*0x534185*/
    Debug::Log(); /*0x5341ac*/
  }
  if ( *(int *)&aP2->__pad_0[8] > 0 && *(int *)&aP2->__pad_0[12] > 0 ) /*0x5341c4*/
  {
    eax36 = (char *)__2_YAPAXI_Z(0x24u); /*0x5341c8*/
    if ( eax36 ) /*0x5341d2*/
      v15 = (DSurface *)DSurface::Construct( /*0x5341e8*/
                          eax36,
                          *(IUnknown **)&aP2->__pad_0[8],
                          *(DSurface **)&aP2->__pad_0[12],
                          (ObjectClass *)v7,
                          1);
    else
      v15 = 0; /*0x5341ef*/
    *(_DWORD *)&stru_87C374.__pad_579C[22508] = v15; /*0x5341f1*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v15->field_0 + 24))(v15, 0); /*0x5341fc*/
    Debug::Log(); /*0x534223*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] /*0x53424c*/
    && *(_DWORD *)&stru_87C374.__pad_579C[22508]
    && *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22540] + 25) != *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22508]
                                                                              + 25) )
  {
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22540] ) /*0x534256*/
      (***(void (__stdcall ****)(int))&stru_87C374.__pad_579C[22540])(1); /*0x53425c*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22508] ) /*0x534266*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[22508])( /*0x53426c*/
        *(_DWORD *)&stru_87C374.__pad_579C[22508],
        1);
    Debug::Log(); /*0x534273*/
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x53427a*/
    if ( v14 ) /*0x534286*/
      *(_DWORD *)&stru_87C374.__pad_579C[22540] = DSurface::Construct( /*0x53429b*/
                                                    v14,
                                                    *(IUnknown **)&aP1->__pad_0[8],
                                                    *(DSurface **)&aP1->__pad_0[12],
                                                    (ObjectClass *)1,
                                                    1);
    else
      *(_DWORD *)&stru_87C374.__pad_579C[22540] = 0; /*0x5342a2*/
    eax50 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342aa*/
    if ( eax50 ) /*0x5342b4*/
      *(_DWORD *)&stru_87C374.__pad_579C[22508] = DSurface::Construct( /*0x5342c9*/
                                                    eax50,
                                                    *(IUnknown **)&aP2->__pad_0[8],
                                                    *(DSurface **)&aP2->__pad_0[12],
                                                    (ObjectClass *)1,
                                                    1);
    else
      *(_DWORD *)&stru_87C374.__pad_579C[22508] = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    v16 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342eb*/
    if ( v16 ) /*0x5342f5*/
      v20 = (DSurface *)DSurface::Construct( /*0x53430f*/
                          v16,
                          *(IUnknown **)(a4 + 8),
                          *(DSurface **)(a4 + 12),
                          (ObjectClass *)var1,
                          0);
    else
      v20 = 0; /*0x534316*/
    *(_DWORD *)&stru_87C374.__pad_579C[22512] = v20; /*0x534318*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v20->field_0 + 24))(v20, 0); /*0x534323*/
    Debug::Log(); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( *(int *)(a1 + 8) <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( *(int *)(a1 + 12) > 0 ) /*0x53436a*/
    {
      v18 = (char *)__2_YAPAXI_Z(0x24u); /*0x53436e*/
      if ( v18 ) /*0x534378*/
        v23 = (DSurface *)DSurface::Construct(v18, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), 0, 0); /*0x534388*/
      else
        v23 = 0; /*0x53438f*/
      *(_DWORD *)&stru_87C374.__pad_579C[22524] = v23; /*0x534391*/
      (*(void (__thiscall **)(DSurface *, _DWORD))(v23->field_0 + 24))(v23, 0); /*0x53439c*/
      Debug::Log(); /*0x5343c3*/
    }
  }
  if ( *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5343d7*/
  {
    eax68 = (char *)__2_YAPAXI_Z(0x24u); /*0x5343db*/
    if ( eax68 ) /*0x5343e5*/
      v26 = (DSurface *)DSurface::Construct(eax68, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), (ObjectClass *)1, 0); /*0x5343f5*/
    else
      v26 = 0; /*0x5343fc*/
    *(_DWORD *)&stru_87C374.__pad_579C[22528] = v26; /*0x5343fe*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v26->field_0 + 24))(v26, 0); /*0x534409*/
    Debug::Log(); /*0x534430*/
  }
  return 1; /*0x534438*/
}


// ==== 0x00534450  Game::DestroyAllObjects  this=Game  sig=csp ====
int sub_534450()
{
  size_t i; // eax
  int v1; // ecx
  void *v2; // esi

  ++MEMORY[0xA8E7AC]; /*0x53445f*/
  MEMORY[0xB0F6A8] = 0; /*0x534465*/
  AbstractClassVector::ddtor(&MEMORY[0xB0F698]); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  for ( i = MEMORY[0xB0E844]; MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x53447c*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x534484*/
    {
      qsort(MEMORY[0xB0E840], i, 8u, CompareFunction); /*0x534494*/
      MEMORY[0xB0E850] = 0; /*0x53449c*/
      MEMORY[0xB0E84C] = 1; /*0x5344a2*/
    }
    v1 = *((_DWORD *)MEMORY[0xB0E840] + 1); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(); /*0x5344c6*/
  while ( MEMORY[0xA8ED50] ) /*0x5344d1*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ED44] + 8))(*(_DWORD *)MEMORY[0xA8ED44]); /*0x5344dd*/
  ProcessExpiredPointers(); /*0x5344e8*/
  while ( MEMORY[0xA8E370] ) /*0x5344f3*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E364] ) /*0x5344fb*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E364] + 32))(*(_DWORD *)MEMORY[0xA8E364], 1); /*0x534505*/
  }
  ProcessExpiredPointers(); /*0x534510*/
  while ( MEMORY[0xB0E730] ) /*0x53451b*/
  {
    if ( *(_DWORD *)MEMORY[0xB0E724] ) /*0x534523*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0E724] + 32))(*(_DWORD *)MEMORY[0xB0E724], 1); /*0x53452d*/
  }
  ProcessExpiredPointers(); /*0x534538*/
  while ( MEMORY[0xA8EAF8] ) /*0x534543*/
  {
    if ( *(_DWORD *)MEMORY[0xA8EAEC] ) /*0x53454a*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8EAEC] + 32))(*(_DWORD *)MEMORY[0xA8EAEC], 1); /*0x534554*/
  }
  ProcessExpiredPointers(); /*0x53455f*/
  while ( MEMORY[0x8B4148] ) /*0x53456a*/
  {
    if ( *(_DWORD *)MEMORY[0x8B413C] ) /*0x534571*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8B413C] + 32))(*(_DWORD *)MEMORY[0x8B413C], 1); /*0x53457b*/
  }
  ProcessExpiredPointers(); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(_DWORD *)unk_8B4194 ) /*0x534598*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)unk_8B4194 + 32))(*(_DWORD *)unk_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(); /*0x5345ad*/
  while ( MEMORY[0xA8EC60] ) /*0x5345b8*/
  {
    if ( *(_DWORD *)MEMORY[0xA8EC54] ) /*0x5345bf*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8EC54] + 32))(*(_DWORD *)MEMORY[0xA8EC54], 1); /*0x5345c9*/
  }
  ProcessExpiredPointers(); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(_DWORD *)dword_A8020C ) /*0x5345e6*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8020C + 32))(*(_DWORD *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(); /*0x5345fb*/
  while ( MEMORY[0xA8EC48] ) /*0x534606*/
  {
    if ( *(_DWORD *)MEMORY[0xA8EC3C] ) /*0x53460d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8EC3C] + 32))(*(_DWORD *)MEMORY[0xA8EC3C], 1); /*0x534617*/
  }
  ProcessExpiredPointers(); /*0x534622*/
  while ( MEMORY[0xA83E40] ) /*0x53462d*/
  {
    if ( *(_DWORD *)MEMORY[0xA83E34] ) /*0x534634*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA83E34] + 32))(*(_DWORD *)MEMORY[0xA83E34], 1); /*0x53463e*/
  }
  ProcessExpiredPointers(); /*0x534649*/
  while ( MEMORY[0x8B4130] ) /*0x534654*/
  {
    if ( *(_DWORD *)MEMORY[0x8B4124] ) /*0x53465b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8B4124] + 32))(*(_DWORD *)MEMORY[0x8B4124], 1); /*0x534665*/
  }
  ProcessExpiredPointers(); /*0x534670*/
  while ( MEMORY[0x8B40F8] ) /*0x53467b*/
  {
    if ( *(_DWORD *)MEMORY[0x8B40EC] ) /*0x534682*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8B40EC] + 32))(*(_DWORD *)MEMORY[0x8B40EC], 1); /*0x53468c*/
  }
  ProcessExpiredPointers(); /*0x534697*/
  while ( HouseClass_Count ) /*0x5346a2*/
  {
    if ( *(_DWORD *)HouseClass_Array ) /*0x5346a9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)HouseClass_Array + 32))(*(_DWORD *)HouseClass_Array, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(); /*0x5346be*/
  while ( MEMORY[0xA8E9B8] ) /*0x5346c9*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E9AC] ) /*0x5346d0*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E9AC] + 32))(*(_DWORD *)MEMORY[0xA8E9AC], 1); /*0x5346da*/
  }
  ProcessExpiredPointers(); /*0x5346e5*/
  while ( MEMORY[0x8872C0] ) /*0x5346f0*/
  {
    if ( *(_DWORD *)MEMORY[0x8872B4] ) /*0x5346f7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8872B4] + 32))(*(_DWORD *)MEMORY[0x8872B4], 1); /*0x534701*/
  }
  ProcessExpiredPointers(); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(_DWORD *)dword_B04BD4 ) /*0x53471e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B04BD4 + 32))(*(_DWORD *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(); /*0x534733*/
  while ( g_BridgeCellPool ) /*0x53473e*/
  {
    if ( *(_DWORD *)dword_ABCA14 ) /*0x534745*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_ABCA14 + 32))(*(_DWORD *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(); /*0x53475a*/
  while ( MEMORY[0x8A3880] ) /*0x534765*/
  {
    if ( *(_DWORD *)MEMORY[0x8A3874] ) /*0x53476c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8A3874] + 32))(*(_DWORD *)MEMORY[0x8A3874], 1); /*0x534776*/
  }
  ProcessExpiredPointers(); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(_DWORD *)unk_89E0F4 ) /*0x534793*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)unk_89E0F4 + 32))(*(_DWORD *)unk_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(); /*0x5347a8*/
  while ( MEMORY[0x8A0218] ) /*0x5347b3*/
  {
    if ( *(_DWORD *)MEMORY[0x8A020C] ) /*0x5347ba*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8A020C] + 32))(*(_DWORD *)MEMORY[0x8A020C], 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(); /*0x5347cf*/
  while ( MEMORY[0xAC4920] ) /*0x5347da*/
  {
    if ( *(_DWORD *)MEMORY[0xAC4914] ) /*0x5347e1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xAC4914] + 32))(*(_DWORD *)MEMORY[0xAC4914], 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(); /*0x5347f6*/
  while ( MEMORY[0xB0EC70] ) /*0x534801*/
  {
    if ( *(_DWORD *)MEMORY[0xB0EC64] ) /*0x534808*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0EC64] + 32))(*(_DWORD *)MEMORY[0xB0EC64], 1); /*0x534812*/
  }
  ProcessExpiredPointers(); /*0x53481d*/
  while ( MEMORY[0x889FC8] ) /*0x534828*/
  {
    if ( *(_DWORD *)MEMORY[0x889FBC] ) /*0x53482f*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x889FBC] + 32))(*(_DWORD *)MEMORY[0x889FBC], 1); /*0x534839*/
  }
  ProcessExpiredPointers(); /*0x534844*/
  while ( MEMORY[0xB0B890] ) /*0x53484f*/
  {
    if ( *(_DWORD *)MEMORY[0xB0B884] ) /*0x534856*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0B884] + 32))(*(_DWORD *)MEMORY[0xB0B884], 1); /*0x534860*/
  }
  ProcessExpiredPointers(); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(_DWORD *)unk_89C66C ) /*0x53487d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)unk_89C66C + 32))(*(_DWORD *)unk_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(); /*0x534892*/
  while ( MEMORY[0xAC1688] ) /*0x53489d*/
  {
    v2 = *(void **)MEMORY[0xAC167C]; /*0x5348a5*/
    if ( *(_DWORD *)MEMORY[0xAC167C] ) /*0x5348a5*/
    {
      BuildingLightQueue::RemoveEntry(*(_DWORD *)MEMORY[0xAC167C]); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(); /*0x5348c4*/
  while ( MEMORY[0x8B3D20] ) /*0x5348cf*/
  {
    if ( *(_DWORD *)MEMORY[0x8B3D14] ) /*0x5348d7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8B3D14] + 32))(*(_DWORD *)MEMORY[0x8B3D14], 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(); /*0x5348ec*/
  while ( MEMORY[0x88A100] ) /*0x5348f7*/
  {
    if ( *(_DWORD *)MEMORY[0x88A0F4] ) /*0x5348fe*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x88A0F4] + 32))(*(_DWORD *)MEMORY[0x88A0F4], 1); /*0x534908*/
  }
  ProcessExpiredPointers(); /*0x534913*/
  while ( MEMORY[0xA8E998] ) /*0x53491e*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E98C] ) /*0x534925*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E98C] + 32))(*(_DWORD *)MEMORY[0xA8E98C], 1); /*0x53492f*/
  }
  ProcessExpiredPointers(); /*0x53493a*/
  sub_4C29E0(); /*0x53493f*/
  Game_Destroy(); /*0x534944*/
  Game::loadCampaignData(); /*0x534949*/
  while ( MEMORY[0xA8E978] ) /*0x534954*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E96C] ) /*0x53495b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E96C] + 32))(*(_DWORD *)MEMORY[0xA8E96C], 1); /*0x534965*/
  }
  ProcessExpiredPointers(); /*0x534970*/
  if ( MEMORY[0x887324] ) /*0x53497d*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x534983*/
  MEMORY[0x887324] = 0; /*0x53498b*/
  MapClass::FreeAllCells(&MEMORY[0x87F7E8]); /*0x534991*/
  ProcessExpiredPointers(); /*0x534996*/
  Game::initScenario(&dword_89C3B0); /*0x5349a0*/
  return --MEMORY[0xA8E7AC]; /*0x5349ab*/
}


// ==== 0x005349C0  LoadTheaterClassMIX  this=-  sig=ida-proto ====
void __fastcall TheaterClass_LoadMIX(int a1)
{
  int v2; // esi
  const char *v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _BYTE *v11; // eax
  int v12; // esi
  char v13; // dl
  char v14; // cl
  _BYTE *v15; // eax
  char v16; // bl
  char *v17; // ecx
  int i; // eax
  char v19; // dl
  char *v20; // ecx
  const void *v21; // esi
  int j; // esi
  char *v23; // ecx
  char v24; // al
  int v25; // esi
  int v26; // ebp
  int k; // ebx
  int v28; // edi
  __int16 v29; // [esp+14h] [ebp-5Ch]
  __int16 v30; // [esp+14h] [ebp-5Ch]
  __int16 v31; // [esp+14h] [ebp-5Ch]
  const char *v32; // [esp+18h] [ebp-58h]
  CHAR Source[16]; // [esp+20h] [ebp-50h] BYREF
  CHAR v35[16]; // [esp+30h] [ebp-40h] BYREF
  CHAR v36[16]; // [esp+40h] [ebp-30h] BYREF
  CHAR v37[16]; // [esp+50h] [ebp-20h] BYREF
  CHAR v38[16]; // [esp+60h] [ebp-10h] BYREF

  v2 = 112 * a1; /*0x5349e0*/
  v3 = &aTemperat[112 * a1]; /*0x5349e3*/
  wsprintfA(Source, "%s.MIX", v3); /*0x5349f0*/
  wsprintfA(v38, "%s.MIX", &aIsotemp[v2]); /*0x534a03*/
  v32 = (char *)&off_7E1BC6 + v2; /*0x534a0b*/
  wsprintfA(v36, "%s.MIX", (const char *)&off_7E1BC6 + v2); /*0x534a1a*/
  wsprintfA(v37, "%sMD.MIX", &aIsotem[v2]); /*0x534a2d*/
  wsprintfA(v35, "%sMD.MIX", v3); /*0x534a3a*/
  Debug::Log(); /*0x534a48*/
  *((_DWORD *)MEMORY[0xA8B230] + 1174) = a1; /*0x534a5d*/
  Multiplayer::ShowProgress(MEMORY[0xA8B238], 8); /*0x534a63*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( MEMORY[0x884E0C] ) /*0x534a8a*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E0C])(MEMORY[0x884E0C], 1); /*0x534a90*/
    MEMORY[0x884E0C] = 0; /*0x534a97*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x534aa4*/
    {
      v4 = __2_YAPAXI_Z(0x28u); /*0x534aa8*/
      if ( v4 ) /*0x534ab2*/
        v5 = MixFileClass::FromFile(v4, v35, (int)&MEMORY[0x886980]); /*0x534ac0*/
      else
        v5 = 0; /*0x534ac7*/
      MEMORY[0x884E0C] = (int)v5; /*0x534acc*/
      ReturnTrue(0); /*0x534ad1*/
    }
    if ( MEMORY[0x884E08] ) /*0x534ade*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E08])(MEMORY[0x884E08], 1); /*0x534ae4*/
    v6 = __2_YAPAXI_Z(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      MEMORY[0x884E08] = (int)MixFileClass::FromFile(v6, Source, (int)&MEMORY[0x886980]); /*0x534b05*/
    else
      MEMORY[0x884E08] = 0; /*0x534b0c*/
    if ( MEMORY[0x884E10] ) /*0x534b1a*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E10])(MEMORY[0x884E10], 1); /*0x534b20*/
    v7 = __2_YAPAXI_Z(0x28u); /*0x534b24*/
    if ( v7 ) /*0x534b2e*/
      v8 = MixFileClass::FromFile(v7, v36, (int)&MEMORY[0x886980]); /*0x534b3c*/
    else
      v8 = 0; /*0x534b43*/
    MEMORY[0x884E10] = (int)v8; /*0x534b48*/
    ReturnTrue(0); /*0x534b4d*/
    ReturnTrue(0); /*0x534b59*/
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 6); /*0x534b65*/
    if ( MEMORY[0x884E20] ) /*0x534b72*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E20])(MEMORY[0x884E20], 1); /*0x534b78*/
    v9 = __2_YAPAXI_Z(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      MEMORY[0x884E20] = (int)MixFileClass::FromFile(v9, v37, (int)&MEMORY[0x886980]); /*0x534b99*/
    else
      MEMORY[0x884E20] = 0; /*0x534ba0*/
    if ( MEMORY[0x884E1C] ) /*0x534bae*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E1C])(MEMORY[0x884E1C], 1); /*0x534bb4*/
    v10 = __2_YAPAXI_Z(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      MEMORY[0x884E1C] = (int)MixFileClass::FromFile(v10, v38, (int)&MEMORY[0x886980]); /*0x534bd5*/
    else
      MEMORY[0x884E1C] = 0; /*0x534bdc*/
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 12); /*0x534be9*/
    wsprintfA(Source, "%s.PAL", v3); /*0x534bf9*/
    v11 = (_BYTE *)SearchMIXFile(Source, 0); /*0x534c04*/
    if ( v11 ) /*0x534c0b*/
    {
      v12 = 0; /*0x534c0d*/
      do /*0x534c56*/
      {
        v13 = v11[1]; /*0x534c11*/
        v14 = 4 * *v11; /*0x534c14*/
        v15 = v11 + 1; /*0x534c17*/
        LOBYTE(v29) = v14; /*0x534c18*/
        v16 = 4 * v15[1]; /*0x534c23*/
        v11 = v15 + 2; /*0x534c28*/
        v17 = (char *)&MEMORY[0x885780] + 3 * (v12 % 256); /*0x534c42*/
        ++v12; /*0x534c49*/
        HIBYTE(v29) = 4 * v13; /*0x534c2f*/
        *(_WORD *)v17 = v29; /*0x534c4a*/
        v17[2] = v16; /*0x534c53*/
      }
      while ( v12 < 256 ); /*0x534c56*/
    }
    else
    {
      for ( i = 0; i < 256; ++i ) /*0x534c5a*/
      {
        LOBYTE(v30) = i; /*0x534c63*/
        HIBYTE(v30) = -1 - i; /*0x534c67*/
        v19 = 4 * i; /*0x534c6d*/
        v20 = (char *)&MEMORY[0x885780] + 3 * (i % 256); /*0x534c85*/
        *(_WORD *)v20 = v30; /*0x534c8d*/
        v20[2] = v19; /*0x534c95*/
      }
    }
    Block::Copy(&MEMORY[0x885A80], &MEMORY[0x885780]); /*0x534ca4*/
    wsprintfA(Source, "UNIT%s.PAL", v32); /*0x534cb8*/
    v21 = (const void *)SearchMIXFile(Source, 0); /*0x534cc8*/
    Event::Dispatch(); /*0x534cca*/
    if ( v21 ) /*0x534cd1*/
      Block::Copy(MEMORY[0x886380], v21); /*0x534cd9*/
    for ( j = 0; j < 256; ++j ) /*0x534cde*/
    {
      v23 = &MEMORY[0x886380][3 * (j % 256)]; /*0x534cf7*/
      LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      v24 = MEMORY[0x886382][3 * (j % 256)]; /*0x534d0c*/
      HIBYTE(v31) = 4 * MEMORY[0x886381][3 * (j % 256)]; /*0x534d16*/
      *(_WORD *)v23 = v31; /*0x534d23*/
      v23[2] = 4 * v24; /*0x534d2c*/
    }
    v25 = 0; /*0x534d43*/
    v26 = 12; /*0x534d4c*/
    for ( k = MEMORY[0xB054E0] / 13; v25 < MEMORY[0xB054E0]; ++v25 ) /*0x534d53*/
    {
      LoadTheaterClassMIX_Load(MEMORY[0x886380], &MEMORY[0x885780], 1000, 1000, 1000); /*0x534d77*/
      v28 = v25 / k + 12; /*0x534d87*/
      if ( v28 >= 25 ) /*0x534d89*/
        v28 = 25; /*0x534d8b*/
      if ( v28 != v26 ) /*0x534d92*/
      {
        Multiplayer::ShowProgress(MEMORY[0xA8B238], v28); /*0x534d9a*/
        v26 = v28; /*0x534d9f*/
      }
      Event::Dispatch(); /*0x534da1*/
    }
    FileSystem::InitExtensionState(a1); /*0x534db4*/
    LoadTheaterClassMIX_Load_717840(); /*0x534db9*/
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 25); /*0x534dc5*/
  }
}


// ==== 0x00534DE0  ObjectClass::ReleaseLoadingResources  this=ObjectClass  sig=csp ====
char ReleaseLoadingResources()
{
  if ( MEMORY[0x884E5C] ) /*0x534de7*/
  {
    Debug::Log(); /*0x534df2*/
    if ( MEMORY[0x884E5C] ) /*0x534e02*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E5C])(MEMORY[0x884E5C], 1); /*0x534e08*/
    MEMORY[0x884E5C] = 0; /*0x534e0a*/
  }
  if ( MEMORY[0x884E58] ) /*0x534e1b*/
  {
    Debug::Log(); /*0x534e26*/
    if ( MEMORY[0x884E58] ) /*0x534e36*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E58])(MEMORY[0x884E58], 1); /*0x534e3c*/
    MEMORY[0x884E58] = 0; /*0x534e3e*/
  }
  return 1; /*0x534e4a*/
}


// ==== 0x00534E50  AssetClass::ReleaseAndReload  this=AssetClass  sig=csp ====
char AssetClass_ReleaseAndReload()
{
  void (__thiscall ***v0)(_DWORD, int); // ecx
  int v1; // ecx
  _DWORD *v2; // eax
  _DWORD *v4; // eax

  if ( MEMORY[0x884E5C] ) /*0x534e5a*/
  {
    Debug::Log(); /*0x534e65*/
    if ( MEMORY[0x884E5C] ) /*0x534e75*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E5C])(MEMORY[0x884E5C], 1); /*0x534e7b*/
    MEMORY[0x884E5C] = 0; /*0x534e82*/
    if ( MEMORY[0x884E58] ) /*0x534e8a*/
    {
      Debug::Log(); /*0x534e99*/
      v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0x884E58]; /*0x534e9e*/
      if ( MEMORY[0x884E58] ) /*0x534ea9*/
        goto LABEL_14; /*0x534ea9*/
      goto LABEL_15; /*0x534ea9*/
    }
  }
  else
  {
    v1 = MEMORY[0x884E58]; /*0x534ead*/
    if ( MEMORY[0x884E58] ) /*0x534eb5*/
    {
      if ( MEMORY[0x884E5C] ) /*0x534eb9*/
      {
        Debug::Log(); /*0x534ec4*/
        if ( MEMORY[0x884E5C] ) /*0x534ed4*/
          (**(void (__thiscall ***)(int, int))MEMORY[0x884E5C])(MEMORY[0x884E5C], 1); /*0x534eda*/
        v1 = MEMORY[0x884E58]; /*0x534edc*/
        MEMORY[0x884E5C] = 0; /*0x534ee2*/
      }
      if ( v1 ) /*0x534eea*/
      {
        Debug::Log(); /*0x534ef5*/
        v0 = (void (__thiscall ***)(_DWORD, int))MEMORY[0x884E58]; /*0x534efa*/
        if ( MEMORY[0x884E58] ) /*0x534f05*/
LABEL_14:
          (**v0)(v0, 1); /*0x534f07*/
LABEL_15:
        MEMORY[0x884E58] = 0; /*0x534f0d*/
      }
    }
  }
  v2 = __2_YAPAXI_Z(0x28u); /*0x534f13*/
  if ( v2 ) /*0x534f1f*/
  {
    MEMORY[0x884E58] = (int)MixFileClass::FromFile(v2, MEMORY[0x827DA0], (int)&MEMORY[0x886980]); /*0x534f34*/
    if ( MEMORY[0x884E58] ) /*0x534f39*/
    {
      Debug::Log_0(MEMORY[0x827D8C]); /*0x534f4e*/
      v4 = __2_YAPAXI_Z(0x28u); /*0x534f55*/
      if ( v4 ) /*0x534f5f*/
      {
        MEMORY[0x884E5C] = (int)MixFileClass::FromFile(v4, stru_827D80, (int)&MEMORY[0x886980]); /*0x534f74*/
        if ( MEMORY[0x884E5C] ) /*0x534f79*/
        {
          Debug::Log_0(aLoadedNeutralM); /*0x534f8e*/
          return 1; /*0x534f96*/
        }
        else
        {
          return 0; /*0x534f7b*/
        }
      }
      else
      {
        MEMORY[0x884E5C] = 0; /*0x534f7f*/
        return 0; /*0x534f85*/
      }
    }
    else
    {
      return 0; /*0x534f3b*/
    }
  }
  else
  {
    MEMORY[0x884E58] = 0; /*0x534f3f*/
    return 0; /*0x534f45*/
  }
}


// ==== 0x00534FA0  MixFile::LoadSide  this=MixFile  sig=csp ====
char __thiscall MixFile_LoadSide(int this)
{
  unsigned int v2; // ebx
  unsigned int YR; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  char v7; // bl
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char v10; // bl
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  _DWORD *v15; // eax
  char v16; // al
  unsigned int v17; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  _DWORD v19[22]; // [esp+60h] [ebp-D8h] BYREF
  _BYTE v20[12]; // [esp+B8h] [ebp-80h] BYREF
  int v21; // [esp+C4h] [ebp-74h]
  _DWORD v22[22]; // [esp+CCh] [ebp-6Ch] BYREF
  _BYTE v23[12]; // [esp+124h] [ebp-14h] BYREF
  int v24; // [esp+130h] [ebp-8h]

  VoxClass::SetEVAIndex(); /*0x534fac*/
  if ( this == 2 ) /*0x534fb4*/
    this = 1; /*0x534fb6*/
  v2 = this; /*0x534fbb*/
  v17 = this; /*0x534fc0*/
  if ( this == -1 ) /*0x534fc4*/
  {
    YR = AlwaysFindYRCD(MEMORY[0x89E414], 60); /*0x534fd1*/
    if ( YR >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v17 = YR; /*0x534ffb*/
    v2 = YR; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( MEMORY[0x884E68] ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( MEMORY[0x884E68] ) /*0x535035*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E68])(MEMORY[0x884E68], 1); /*0x53503b*/
    MEMORY[0x884E68] = 0; /*0x53503d*/
  }
  if ( MEMORY[0x884E74] ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( MEMORY[0x884E74] ) /*0x535065*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E74])(MEMORY[0x884E74], 1); /*0x53506b*/
    MEMORY[0x884E74] = 0; /*0x53506d*/
  }
  if ( MEMORY[0x884E70] ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( MEMORY[0x884E70] ) /*0x535095*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E70])(MEMORY[0x884E70], 1); /*0x53509b*/
    MEMORY[0x884E70] = 0; /*0x53509d*/
  }
  if ( MEMORY[0x884E78] ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( MEMORY[0x884E78] ) /*0x5350c5*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E78])(MEMORY[0x884E78], 1); /*0x5350cb*/
    MEMORY[0x884E78] = 0; /*0x5350cd*/
  }
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, MEMORY[0x827E0C], v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(v19, Buffer); /*0x535101*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 20))(v6, 0); /*0x535115*/
  v19[0] = &vt_CCFileClass; /*0x535117*/
  v21 = 0; /*0x53511f*/
  Vector::Clear((int)v20); /*0x535126*/
  v19[0] = &off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(v19); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = __2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      MEMORY[0x884E70] = (int)MixFileClass::FromFile(v8, Buffer, (int)&MEMORY[0x886980]); /*0x535160*/
    else
      MEMORY[0x884E70] = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, MEMORY[0x827DE4], v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(v19, Buffer); /*0x5351a4*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v19[0] = &vt_CCFileClass; /*0x5351ba*/
  v21 = 0; /*0x5351c2*/
  Vector::Clear((int)v20); /*0x5351c9*/
  v19[0] = &off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(v19); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = __2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      MEMORY[0x884E74] = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)&MEMORY[0x886980]); /*0x5351f9*/
    MEMORY[0x884E74] = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (_DWORD *)MEMORY[0x884E74]; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, stru_827DD4, v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    v13 = CCFileClass::Construct(v19, Buffer); /*0x53527b*/
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x535294*/
    v19[0] = &vt_CCFileClass; /*0x535296*/
    v21 = 0; /*0x53529a*/
    Vector::Clear((int)v20); /*0x5352a1*/
    v19[0] = &off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(v19); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = __2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        MEMORY[0x884E78] = (int)MixFileClass::FromFile(v15, Buffer, (int)&MEMORY[0x886980]); /*0x5352d6*/
      else
        MEMORY[0x884E78] = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v17); /*0x5352ec*/
    CCFileClass::Construct(v22, unk_827DC8); /*0x5352fd*/
    if ( CCINIClass::Load(&MEMORY[0x887208], (int)v22, 0, 0) ) /*0x535311*/
    {
      v16 = MEMORY[0xA8B238][0] && MEMORY[0xA8B238][0] != 5; /*0x53532f*/
      SidebarClass::ReadButtonList(&MEMORY[0x887208], v16); /*0x53533d*/
      SidebarClass::LoadButtonSHPs(&MEMORY[0x87F7E8]); /*0x535347*/
      v22[0] = &vt_CCFileClass; /*0x535353*/
      v24 = 0; /*0x53535a*/
      Vector::Clear((int)v23); /*0x535361*/
      v22[0] = &off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(v22); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v22[0] = &vt_CCFileClass; /*0x53539a*/
      v24 = 0; /*0x5353a1*/
      Vector::Clear((int)v23); /*0x5353a8*/
      v22[0] = &off_7E1668; /*0x5353b4*/
      BufferIOFileClass::Dtor(v22); /*0x5353bb*/
      return 0; /*0x5353c0*/
    }
  }
  else
  {
    Debug::Log(); /*0x535233*/
    return 0; /*0x53523b*/
  }
}


// ==== 0x005353D0  FindRadarClosestEnemy  this=MouseClass  sig=csp ====
int __fastcall Radar_FindClosestEnemy(__int16 *a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int *v13; // edx
  double v14; // st7
  int v15; // [esp+28h] [ebp-40h]
  int v16; // [esp+2Ch] [ebp-3Ch]
  int v17; // [esp+30h] [ebp-38h]
  int v18; // [esp+34h] [ebp-34h]
  int v21; // [esp+40h] [ebp-28h]
  char v22[12]; // [esp+50h] [ebp-18h] BYREF
  char v23[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = 0; /*0x5353e7*/
  v18 = 0; /*0x5353f1*/
  v16 = -1; /*0x5353f5*/
  v17 = 0x7FFFFFFF; /*0x5353fd*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x535405*/
  {
    v3 = 0; /*0x53540b*/
    v21 = 0; /*0x53540f*/
    while ( 1 ) /*0x53541e*/
    {
      v15 = 0; /*0x53541e*/
      v4 = *((_DWORD *)MEMORY[0xA8ECBC] + v3); /*0x535422*/
      if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x535433*/
      {
        v15 = 2; /*0x53543b*/
        if ( *(_BYTE *)(v4 + 664) ) /*0x535435*/
        {
          v15 = 0; /*0x535447*/
        }
        else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 892))(v4) ) /*0x535451*/
        {
          v15 = 1; /*0x53545b*/
        }
        else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 684))(v4) ) /*0x535469*/
        {
          v15 = 3; /*0x535477*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 6 ) /*0x535485*/
          {
            v15 = 4; /*0x53548b*/
            if ( TechnoClass::GetValue((_DWORD *)v4, -1) > 0 ) /*0x53549a*/
              v15 = 5; /*0x53549c*/
          }
        }
      }
      if ( v15 < v16 ) /*0x5354ae*/
        goto LABEL_24; /*0x5354ae*/
      v5 = 0x7FFFFFFF; /*0x5354b8*/
      if ( a1 || a2 ) /*0x5354ce*/
      {
        v6 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 72))(v4, v22); /*0x5354dd*/
        v7 = *v6; /*0x5354e0*/
        v8 = v6[1]; /*0x5354e2*/
        v9 = v6[2]; /*0x5354e5*/
        if ( a1 ) /*0x5354ee*/
        {
          v10 = (*a1 << 8) + 128; /*0x535501*/
          v11 = (a1[1] << 8) + 128; /*0x535506*/
          v12 = 0; /*0x53550c*/
        }
        else
        {
          v13 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 72))(a2, v23); /*0x53551e*/
          v10 = *v13; /*0x535520*/
          v11 = v13[1]; /*0x535522*/
          v12 = v13[2]; /*0x535525*/
        }
        v14 = Math::Sqrt( /*0x535562*/
                (double)(v7 - v10) * (double)(v7 - v10)
              + (double)(v9 - v12) * (double)(v9 - v12)
              + (double)(v8 - v11) * (double)(v8 - v11));
        v5 = Math::RoundToInt(v14); /*0x53556a*/
        v3 = v21; /*0x53556f*/
      }
      if ( v15 > v16 ) /*0x53557f*/
        break; /*0x53557f*/
      if ( v5 < v17 ) /*0x53558b*/
        goto LABEL_23; /*0x53558b*/
LABEL_24:
      v21 = ++v3; /*0x53559d*/
      if ( v3 >= (int)MEMORY[0xA8ECC8] ) /*0x5355a1*/
        return v18; /*0x5355a7*/
    }
    v16 = v15; /*0x535581*/
LABEL_23:
    v18 = v4; /*0x53558d*/
    v17 = v5; /*0x535591*/
    goto LABEL_24; /*0x535591*/
  }
  return result; /*0x5355ab*/
}


// ==== 0x005355D0  Performance::Profile  this=Performance  sig=csp ====
int Performance_Profile()
{
  int result; // eax
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  const char *v4; // eax
  const char *v5; // eax
  SIZE_T v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // eax
  int i; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  DWORD Time; // esi
  int v18; // eax
  int v19; // [esp+8Ch] [ebp-198h]
  int v20; // [esp+90h] [ebp-194h]
  int v21; // [esp+94h] [ebp-190h]
  _DWORD v22[2]; // [esp+98h] [ebp-18Ch] BYREF
  int v23; // [esp+A0h] [ebp-184h]
  int v24; // [esp+A4h] [ebp-180h]
  _DWORD v25[4]; // [esp+A8h] [ebp-17Ch] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+B8h] [ebp-16Ch] BYREF
  _BYTE v27[16]; // [esp+D8h] [ebp-14Ch] BYREF
  int v28[15]; // [esp+E8h] [ebp-13Ch] BYREF
  unsigned int v29; // [esp+124h] [ebp-100h]
  unsigned int v30; // [esp+128h] [ebp-FCh]

  result = dword_825C8C; /*0x5355d0*/
  if ( dword_825C8C != -1 ) /*0x5355de*/
    return result; /*0x5355de*/
  MEMORY[0xA8F394] = 0; /*0x5355e7*/
  MEMORY[0xA8F314] = 0; /*0x5355ee*/
  MEMORY[0xA8F4A0] = 0; /*0x5355f5*/
  MEMORY[0xA8F420] = 0; /*0x5355fc*/
  MEMORY[0xA8F520] = 0; /*0x535603*/
  v1 = DetectProcessorType(); /*0x53560f*/
  v2 = Performance::MeasureTicks(); /*0x535616*/
  v3 = 5; /*0x53561b*/
  v21 = 5; /*0x535623*/
  switch ( v1 ) /*0x535629*/
  {
    case -1: /*0x535629*/
      break;
    case 3: /*0x535629*/
    case 5: /*0x535629*/
      v21 = v2 / 100 + 1; /*0x535643*/
      break; /*0x535647*/
    case 4: /*0x535629*/
    case 7: /*0x535629*/
      v21 = v2 / 100 + 2; /*0x53565c*/
      break; /*0x535660*/
    case 6: /*0x535629*/
      v21 = v2 / 100 + 3; /*0x535675*/
      break; /*0x535679*/
    default:
      v21 = 1; /*0x53567b*/
      break; /*0x53567b*/
  }
  v4 = (const char *)PlayerType::GetName(); /*0x535683*/
  Debug::Log(unk_827F5C, v21, v2, v4); /*0x535695*/
  v5 = (const char *)PlayerType::GetName(); /*0x53569d*/
  sprintf(&MEMORY[0xA8F314], MEMORY[0x827F4C], v2, v5); /*0x5356ae*/
  Buffer.dwLength = 32; /*0x5356ba*/
  GlobalMemoryStatus(&Buffer); /*0x5356c3*/
  v19 = 2; /*0x5356d2*/
  v6 = (Buffer.dwTotalPhys + 655360) >> 20; /*0x5356dc*/
  if ( v6 >= 0x40 ) /*0x5356e2*/
    v19 = 5; /*0x5356e4*/
  if ( v6 >= 0x80 ) /*0x5356ee*/
    v19 += 2; /*0x5356f0*/
  if ( v6 == 256 ) /*0x5356ff*/
  {
    v19 += 2; /*0x535701*/
  }
  else if ( v6 > 0x100 ) /*0x535707*/
  {
    v19 = 10; /*0x535709*/
  }
  Debug::Log(MEMORY[0x827F34], v19, (Buffer.dwTotalPhys + 655360) >> 20); /*0x535718*/
  sprintf(&MEMORY[0xA8F4A0], MEMORY[0x827F20], v6); /*0x535728*/
  v7 = 4; /*0x535737*/
  v20 = 5; /*0x53573c*/
  if ( MEMORY[0x8A0094] ) /*0x535740*/
  {
    v28[0] = 316; /*0x535746*/
    if ( !MEMORY[0x8A0094]->lpVtbl->GetCaps(MEMORY[0x8A0094], (LPDDCAPS)v28, 0) ) /*0x535754*/
    {
      v8 = v29; /*0x53575b*/
      if ( v29 <= v30 ) /*0x53576b*/
        v8 = v30; /*0x53576d*/
      v7 = (v8 + 0xFFFFF) >> 20; /*0x535775*/
      if ( v7 >= 0x20 ) /*0x53577b*/
      {
        v20 = 10; /*0x53577d*/
        Debug::Log(MEMORY[0x827F04], 10, v7); /*0x535781*/
        goto LABEL_30; /*0x535781*/
      }
      if ( v7 >= 0x10 ) /*0x535786*/
      {
        v20 = 9; /*0x535788*/
        Debug::Log(MEMORY[0x827F04], 9, v7); /*0x535790*/
        goto LABEL_30; /*0x535790*/
      }
      if ( v7 >= 8 ) /*0x535795*/
      {
        v20 = 7; /*0x535797*/
        Debug::Log(MEMORY[0x827F04], 7, v7); /*0x53579f*/
        goto LABEL_30; /*0x53579f*/
      }
      if ( v7 < 4 ) /*0x5357a4*/
      {
        if ( v7 <= 2 ) /*0x5357ae*/
          v20 = 3; /*0x5357b0*/
        Debug::Log(MEMORY[0x827F04], v20, v7); /*0x5357c3*/
        goto LABEL_30; /*0x5357c3*/
      }
    }
  }
  v20 = 5; /*0x5357a6*/
  Debug::Log(MEMORY[0x827F04], 5, v7); /*0x5357aa*/
LABEL_30:
  sprintf(&MEMORY[0xA8F420], MEMORY[0x827EEC], v7); /*0x5357c8*/
  i = 0; /*0x5357e1*/
  if ( MEMORY[0x8872FC] && *(_BYTE *)(MEMORY[0x8872FC] + 25) && !*(_BYTE *)(MEMORY[0x887310] + 25) ) /*0x5357fc*/
  {
    v10 = (_DWORD *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)MEMORY[0x8872FC] + 120))(v25); /*0x53580e*/
    v22[0] = *v10; /*0x535813*/
    v22[1] = v10[1]; /*0x53581a*/
    v23 = v10[2]; /*0x535821*/
    v24 = v10[3]; /*0x53582e*/
    v11 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887310] + 120))(MEMORY[0x887310], v27); /*0x53583c*/
    v25[0] = *v11; /*0x535840*/
    v12 = v23; /*0x535844*/
    v25[1] = v11[1]; /*0x53584b*/
    v13 = v11[2]; /*0x53584f*/
    v14 = v11[3]; /*0x535854*/
    if ( v23 >= v13 ) /*0x535857*/
    {
      v12 = v13; /*0x535859*/
      v23 = v13; /*0x53585b*/
    }
    v15 = v24; /*0x53585f*/
    if ( v24 >= v14 ) /*0x535865*/
    {
      v15 = v14; /*0x535867*/
      v24 = v14; /*0x535869*/
    }
    if ( v12 >= 480 ) /*0x535873*/
      v23 = 480; /*0x535875*/
    if ( v15 >= 400 ) /*0x535882*/
      v24 = 400; /*0x535884*/
    v16 = 4; /*0x535892*/
    do /*0x5358da*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x8872FC] + 8))( /*0x5358b3*/
        MEMORY[0x8872FC],
        v22,
        MEMORY[0x887310],
        v22,
        0,
        1);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x5358d2*/
        MEMORY[0x887310],
        v22,
        MEMORY[0x8872FC],
        v22,
        0,
        1);
      Sleep(0); /*0x5358d7*/
      --v16; /*0x5358d9*/
    }
    while ( v16 ); /*0x5358da*/
    Time = timeGetTime(); /*0x5358e4*/
    if ( (Time & 0xFF000000) != 0xFF ) /*0x5358f4*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x8872FC] + 8))( /*0x535916*/
        MEMORY[0x8872FC],
        v22,
        MEMORY[0x887310],
        v22,
        0,
        1);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x535935*/
        MEMORY[0x887310],
        v22,
        MEMORY[0x8872FC],
        v22,
        0,
        1);
      for ( i = 1; timeGetTime() - Time <= 0x3E8; ++i ) /*0x535946*/
      {
        if ( i > 5000 ) /*0x53594e*/
          break; /*0x53594e*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x8872FC] + 8))( /*0x53596c*/
          MEMORY[0x8872FC],
          v22,
          MEMORY[0x887310],
          v22,
          0,
          1);
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x53598b*/
          MEMORY[0x887310],
          v22,
          MEMORY[0x8872FC],
          v22,
          0,
          1);
      }
      v3 = 1; /*0x53599c*/
      if ( i / 4 >= 1 ) /*0x5359ad*/
        v3 = i / 4; /*0x5359af*/
    }
  }
  Debug::Log(MEMORY[0x827EBC], v3, 2 * i); /*0x5359bb*/
  sprintf(&MEMORY[0xA8F520], stru_827EA4, 2 * i); /*0x5359cb*/
  v18 = v21; /*0x5359d0*/
  dword_825C8C = v21; /*0x5359dd*/
  if ( v21 >= v19 ) /*0x5359e3*/
  {
    v18 = v19; /*0x5359e5*/
    dword_825C8C = v19; /*0x5359e7*/
  }
  if ( v18 >= v20 ) /*0x5359f2*/
  {
    v18 = v20; /*0x5359f4*/
    dword_825C8C = v20; /*0x5359f6*/
  }
  if ( v18 >= v3 ) /*0x5359fd*/
  {
    v18 = v3; /*0x5359ff*/
    dword_825C8C = v3; /*0x535a01*/
  }
  Debug::Log(unk_827E80, v18); /*0x535a0c*/
  sprintf(&MEMORY[0xA8F394], MEMORY[0x827E70], dword_825C8C); /*0x535a22*/
  return dword_825C8C; /*0x535a32*/
}


// ==== 0x00535A60  BufferIOFileClass::Destruct  this=CDFileClass  sig=csp ====
int __thiscall BufferIOFileClass_Destructor(_DWORD *this)
{
  *this = &off_7E1668; /*0x535a60*/
  return BufferIOFileClass::Dtor(this);
}


// ==== 0x00535A70  CCFileClass::Destruct  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass_Destructor(_DWORD *this)
{
  *this = &CCFileClass::`vftable'; /*0x535a76*/
  this->q064 = 0; /*0x535a7c*/
  Vector::Clear((int)(this + 22)); /*0x535a83*/
  *this = &off_7E1668; /*0x535a8a*/
  return BufferIOFileClass::Dtor(this); /*0x535a95*/
}


// ==== 0x00535AA0  INIClass::INIClass  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass_Constructor(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // ecx
  _DWORD *v3; // edx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  result = this; /*0x535aa0*/
  v2 = this + 4; /*0x535aa6*/
  v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  v2[1] = 0; /*0x535ab2*/
  v2[2] = 0; /*0x535ab5*/
  *v2 = &GenericNode::`vftable'; /*0x535ab8*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  result[7] = &GenericNode::`vftable'; /*0x535ac4*/
  result[3] = &GenericList::`vftable'; /*0x535acd*/
  if ( result != (_DWORD *)-28 ) /*0x535ad4*/
  {
    v4 = result[8]; /*0x535ad6*/
    if ( v4 ) /*0x535adb*/
    {
      v5 = result[9]; /*0x535add*/
      if ( v5 ) /*0x535ae2*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535ae4*/
        *(_DWORD *)(result[8] + 8) = result[9]; /*0x535aed*/
        result[9] = 0; /*0x535af0*/
        result[8] = 0; /*0x535af3*/
      }
    }
  }
  v6 = v2[1]; /*0x535af6*/
  result[9] = v2; /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  v7 = v2[1]; /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    *(_DWORD *)(v7 + 8) = v3; /*0x535b06*/
  v2[1] = v3; /*0x535b09*/
  result[3] = &List<INIClass::INISection *>::`vftable'; /*0x535b0c*/
  result[10] = 0; /*0x535b13*/
  result[11] = 0; /*0x535b16*/
  result[12] = 0; /*0x535b19*/
  *((_BYTE *)result + 52) = 0; /*0x535b1c*/
  result[14] = 0; /*0x535b1f*/
  result[15] = 0; /*0x535b23*/
  *result = &INIClass::`vftable'; /*0x535b27*/
  return result; /*0x535b22*/
}


// ==== 0x00535B30  CCINIClass::CCINIClass  this=CCINIClass  sig=csp ====
_DWORD *__thiscall CCINIClass::Constructor(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this; /*0x535b30*/
  v2 = this + 4; /*0x535b36*/
  v3 = this + 7; /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  v2[1] = 0; /*0x535b42*/
  v2[2] = 0; /*0x535b45*/
  *v2 = &GenericNode::`vftable'; /*0x535b48*/
  v3[1] = 0; /*0x535b4e*/
  v3[2] = 0; /*0x535b51*/
  *v3 = &GenericNode::`vftable'; /*0x535b54*/
  result[3] = &GenericList::`vftable'; /*0x535b5d*/
  if ( v3 ) /*0x535b64*/
  {
    v4 = v3[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = v3[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535b74*/
        *(_DWORD *)(v3[1] + 8) = v3[2]; /*0x535b7d*/
        v3[2] = 0; /*0x535b80*/
        v3[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = v2[1]; /*0x535b86*/
  v3[2] = v2; /*0x535b89*/
  v3[1] = v6; /*0x535b8c*/
  v7 = v2[1]; /*0x535b8f*/
  if ( v7 ) /*0x535b94*/
    *(_DWORD *)(v7 + 8) = v3; /*0x535b96*/
  v2[1] = v3; /*0x535b99*/
  result[3] = &List<INIClass::INISection *>::`vftable'; /*0x535b9c*/
  result[10] = 0; /*0x535ba4*/
  result[11] = 0; /*0x535ba7*/
  result[12] = 0; /*0x535baa*/
  *((_BYTE *)result + 52) = 0; /*0x535bad*/
  result[14] = 0; /*0x535bb0*/
  result[15] = 0; /*0x535bb4*/
  *((_BYTE *)result + 64) = 0; /*0x535bb7*/
  *result = &CCINIClass_Vtable; /*0x535bba*/
  return result; /*0x535ba3*/
}


// ==== 0x00535BD0  CommandClass::Stub  this=CommandClass  sig=csp ====
char __stdcall Game_Stub2(int a1)
{
  return 0; /*0x535bd2*/
}


// ==== 0x00535BE0  CommandClass::IsCellFlag  this=CommandClass  sig=csp ====
unsigned int __stdcall Map_IsCellFlag(int a1)
{
  return ((unsigned int)~a1 >> 11) & 1; /*0x535bec*/
}


// ==== 0x00535BF0  CommandClass::Do  this=CommandClass  sig=csp ====
char __stdcall Game_Stub(int a1)
{
  return 0; /*0x535bf2*/
}


// ==== 0x00535C00  CreateTeamCommand::Construct  this=CreateTeamCommand  sig=csp ====
_DWORD *__thiscall CreateTeamCommand_Constructor(_DWORD *this, int a2)
{
  this->CreateTeamCommand_field_0x4 = a2; /*0x535c06*/
  *this = &vt_CreateTeamCommandClass; /*0x535c09*/
  return this; /*0x535c0f*/
}


// ==== 0x00535C20  CreateTeamCommandClass::AddRef  this=CreateTeamCommand  sig=csp ====
ObjectClass *__thiscall CreateTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_826F84, (INIClass *)this->CreateTeamCommand_field_0x4); /*0x535c2e*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535c3b*/
}


// ==== 0x00535C40  CreateTeamCommandClass::Release  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->CreateTeamCommand_field_0x4; /*0x535c45*/
  StringCSF = GetStringCSF(MEMORY[0x826F94], 0, g_Str_File_Init_CPP, 6165); /*0x535c55*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x535c60*/
  return &MEMORY[0xA8F654]; /*0x535c6d*/
}


// ==== 0x00535C70  CreateTeamCommandClass::ddtor  this=CreateTeamCommand  sig=csp ====
wchar_t *CreateTeamCommand::_vt03()
{
  return GetStringCSF(MEMORY[0x826FA4], 0, g_Str_File_Init_CPP, 6167); /*0x535c86*/
}


// ==== 0x00535C90  CreateTeamCommandClass::Read  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->CreateTeamCommand_field_0x4; /*0x535c95*/
  StringCSF = GetStringCSF(MEMORY[0x826FB0], 0, g_Str_File_Init_CPP, 6169); /*0x535ca5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x535cb0*/
  return &MEMORY[0xA8F654]; /*0x535cbd*/
}


// ==== 0x00535CC0  CreateTeamCommandClass::Undo  this=CreateTeamCommand  sig=csp ====
void __thiscall CreateTeamCommand::_vt08(char **this, int a2)
{
  CreateTeamCommand::performAction_246(this->CreateTeamCommand_field_0x4); /*0x535cc3*/
}


// ==== 0x00535CD0  CreateTeamCommandClass::performAction_0  this=CreateTeamCommand  sig=csp ====
CreateTeamCommand *__thiscall CreateTeamCommand::performAction_0(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x535cd9*/
  if ( (a2 & 1) != 0 ) /*0x535cdf*/
    __3_YAXPAX_Z(this); /*0x535ce2*/
  return (CreateTeamCommand *)this; /*0x535cec*/
}


// ==== 0x00535CF0  CommandClass::vt02  this=CommandClass  sig=csp ====
int __thiscall CreateTeamCommand::vt02(void *this)
{
  return (*(int (__thiscall **)(void *))(this->q010)(this);
}


// ==== 0x00535D00  CommandClass::performAction_1  this=CommandClass  sig=csp ====
CommandClass *__thiscall CreateTeamCommand::performAction_1(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x535d09*/
  if ( (a2 & 1) != 0 ) /*0x535d0f*/
    __3_YAXPAX_Z(this); /*0x535d12*/
  return (CommandClass *)this; /*0x535d1c*/
}


// ==== 0x00535D20  SetStructureTabCommandClass::performAction_2  this=SetStructureTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_2(SetStructureTabCommandClass *this)
{
  return MEMORY[0x826FC8]; /*0x535d25*/
}


// ==== 0x00535D30  SetStructureTabCommandClass::performAction_3  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_3(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FD8], 0, g_Str_File_Init_CPP, 6186); /*0x535d46*/
}


// ==== 0x00535D50  SetStructureTabCommandClass::performAction_4  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_4(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6188); /*0x535d66*/
}


// ==== 0x00535D70  SetStructureTabCommandClass::performAction_5  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_5(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FFC], 0, g_Str_File_Init_CPP, 6190); /*0x535d86*/
}


// ==== 0x00535D90  SetStructureTabCommandClass::performAction_6  this=SetStructureTabCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_6(SetStructureTabCommandClass *this)
{
  int _7342A0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342A0) = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[492]); /*0x535d95*/
  if ( (_BYTE)_7342A0 ) /*0x535d9c*/
  {
    SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 0); /*0x535da5*/
    _7342A0 = UI_Create_7342A0(); /*0x535daa*/
    if ( _7342A0 ) /*0x535db1*/
    {
      v4 = (_DWORD *)_7342A0; /*0x535db5*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342A0 + 400))(_7342A0, 0, 0); /*0x535dbc*/
      LOBYTE(_7342A0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4); /*0x535dc9*/
    }
  }
  return _7342A0; /*0x535dce*/
}


// ==== 0x00535DE0  SetDefenseTabCommandClass::performAction_7  this=SetDefenseTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_7(SetDefenseTabCommandClass *this)
{
  return MEMORY[0x827014]; /*0x535de5*/
}


// ==== 0x00535DF0  SetDefenseTabCommandClass::performAction_8  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_8(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x827020], 0, g_Str_File_Init_CPP, 6212); /*0x535e06*/
}


// ==== 0x00535E10  SetDefenseTabCommandClass::performAction_9  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_9(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6214); /*0x535e26*/
}


// ==== 0x00535E30  SetDefenseTabCommandClass::performAction_10  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_10(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(aTxtDefenseTabD, 0, g_Str_File_Init_CPP, 6216); /*0x535e46*/
}


// ==== 0x00535E50  SetDefenseTabCommandClass::performAction_11  this=SetDefenseTabCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_11(SetDefenseTabCommandClass *this)
{
  int _7342B0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342B0) = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[4480]); /*0x535e55*/
  if ( (_BYTE)_7342B0 ) /*0x535e5c*/
  {
    SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 1); /*0x535e65*/
    _7342B0 = UI_Create_7342B0(); /*0x535e6a*/
    if ( _7342B0 ) /*0x535e71*/
    {
      v4 = (_DWORD *)_7342B0; /*0x535e75*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342B0 + 400))(_7342B0, 0, 0); /*0x535e7c*/
      LOBYTE(_7342B0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4); /*0x535e89*/
    }
  }
  return _7342B0; /*0x535e8e*/
}


// ==== 0x00535EA0  SetInfantryTabCommandClass::performAction_12  this=SetInfantryTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_12(SetInfantryTabCommandClass *this)
{
  return aInfantrytab; /*0x535ea5*/
}


// ==== 0x00535EB0  SetInfantryTabCommandClass::performAction_13  this=SetInfantryTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_13(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(aTxtInfantryTab, 0, g_Str_File_Init_CPP, 6238); /*0x535ec6*/
}


// ==== 0x00535ED0  SetInfantryTabCommandClass::performAction_14  this=SetInfantryTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_14(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6240); /*0x535ee6*/
}


// ==== 0x00535EF0  SetInfantryTabCommandClass::performAction_15  this=SetInfantryTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_15(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(aTxtInfantryTab_0, 0, g_Str_File_Init_CPP, 6242); /*0x535f06*/
}


// ==== 0x00535F10  SetInfantryTabCommandClass::performAction_16  this=SetInfantryTabCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_16(SetInfantryTabCommandClass *this)
{
  int result; // eax

  result = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[8468]); /*0x535f15*/
  if ( (_BYTE)result ) /*0x535f1c*/
    return SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 2); /*0x535f25*/
  return result; /*0x535f2a*/
}


// ==== 0x00535F30  SetUnitTabCommandClass::performAction_17  this=SetUnitTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_17(SetUnitTabCommandClass *this)
{
  return aUnittab; /*0x535f35*/
}


// ==== 0x00535F40  SetUnitTabCommandClass::performAction_18  this=SetUnitTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_18(SetUnitTabCommandClass *this)
{
  return GetStringCSF(aTxtUnitTab, 0, g_Str_File_Init_CPP, 6259); /*0x535f56*/
}


// ==== 0x00535F60  SetUnitTabCommandClass::performAction_19  this=SetUnitTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_19(SetUnitTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6261); /*0x535f76*/
}


// ==== 0x00535F80  SetUnitTabCommandClass::performAction_20  this=SetUnitTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_20(SetUnitTabCommandClass *this)
{
  return GetStringCSF(aTxtUnitTabDesc, 0, g_Str_File_Init_CPP, 6263); /*0x535f96*/
}


// ==== 0x00535FA0  SetUnitTabCommandClass::performAction_21  this=SetUnitTabCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_21(SetUnitTabCommandClass *this)
{
  int result; // eax

  result = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[12456]); /*0x535fa5*/
  if ( (_BYTE)result ) /*0x535fac*/
    return SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 3); /*0x535fb5*/
  return result; /*0x535fba*/
}


// ==== 0x00535FC0  SelectTeamCommand::Construct  this=SelectTeamCommand  sig=csp ====
_DWORD *__thiscall SelectTeamCommand_Constructor(_DWORD *this, int a2)
{
  this->SelectTeamCommand_field_00 = a2; /*0x535fc6*/
  *this = &vt_SelectTeamCommandClass; /*0x535fc9*/
  return this; /*0x535fcf*/
}


// ==== 0x00535FE0  SelectTeamCommandClass::AddRef  this=SelectTeamCommand  sig=csp ====
ObjectClass *__thiscall SelectTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8270D8, (INIClass *)this->SelectTeamCommand_field_00); /*0x535fee*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535ffb*/
}


// ==== 0x00536000  SelectTeamCommandClass::Release  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->SelectTeamCommand_field_00; /*0x536005*/
  StringCSF = GetStringCSF(MEMORY[0x8270E8], 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536020*/
  return &MEMORY[0xA8F654]; /*0x53602d*/
}


// ==== 0x00536030  SelectTeamCommandClass::ddtor  this=SelectTeamCommand  sig=csp ====
wchar_t *SelectTeamCommand::_vt03()
{
  return GetStringCSF(MEMORY[0x826FA4], 0, g_Str_File_Init_CPP, 6294); /*0x536046*/
}


// ==== 0x00536050  SelectTeamCommandClass::Read  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->SelectTeamCommand_field_00; /*0x536055*/
  StringCSF = GetStringCSF(MEMORY[0x8270F8], 0, g_Str_File_Init_CPP, 6296); /*0x536065*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536070*/
  return &MEMORY[0xA8F654]; /*0x53607d*/
}


// ==== 0x00536080  SelectTeamCommandClass::Do  this=SelectTeamCommand  sig=csp ====
int __thiscall SelectTeamCommand::_vt08(char **this, int a2)
{
  return TacticalClass::SetObserverView(this->SelectTeamCommand_field_00); /*0x536088*/
}


// ==== 0x00536090  SelectTeamCommandClass::performAction_22  this=SelectTeamCommand  sig=csp ====
SelectTeamCommand *__thiscall CreateTeamCommand::performAction_22(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x536099*/
  if ( (a2 & 1) != 0 ) /*0x53609f*/
    __3_YAXPAX_Z(this); /*0x5360a2*/
  return (SelectTeamCommand *)this; /*0x5360ac*/
}


// ==== 0x005360B0  AddTeamCommand::Construct  this=AddTeamCommand  sig=csp ====
_DWORD *__thiscall AddTeamCommand_Constructor(_DWORD *this, int a2)
{
  this->AddTeamCommand_field_00 = a2; /*0x5360b6*/
  *this = &vt_AddTeamCommandClass; /*0x5360b9*/
  return this; /*0x5360bf*/
}


// ==== 0x005360D0  AddTeamCommandClass::AddRef  this=AddTeamCommand  sig=csp ====
ObjectClass *__thiscall AddTeamCommand::AddRef(_DWORD *this)
{
  sprintf( /*0x5360de*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8270D8.customSound_controller[3],
    (INIClass *)this->AddTeamCommand_field_00);
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5360eb*/
}


// ==== 0x005360F0  AddTeamCommandClass::Release  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->AddTeamCommand_field_00; /*0x5360f5*/
  StringCSF = GetStringCSF(MEMORY[0x827148], 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536110*/
  return &MEMORY[0xA8F654]; /*0x53611d*/
}


// ==== 0x00536120  AddTeamCommandClass::ddtor  this=AddTeamCommand  sig=csp ====
wchar_t *AddTeamCommand::_vt03()
{
  return GetStringCSF(MEMORY[0x826FA4], 0, g_Str_File_Init_CPP, 6328); /*0x536136*/
}


// ==== 0x00536140  AddTeamCommandClass::Read  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->AddTeamCommand_field_00; /*0x536145*/
  StringCSF = GetStringCSF(MEMORY[0x82715C], 0, g_Str_File_Init_CPP, 6330); /*0x536155*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536160*/
  return &MEMORY[0xA8F654]; /*0x53616d*/
}


// ==== 0x00536170  AddTeamCommandClass::Do  this=AddTeamCommand  sig=csp ====
int __thiscall AddTeamCommand::_vt08(char **this, int a2)
{
  return SquadClass::SelectAllMembers(this->AddTeamCommand_field_00); /*0x536178*/
}


// ==== 0x00536180  AddTeamCommandClass::performAction_23  this=AddTeamCommand  sig=csp ====
AddTeamCommand *__thiscall CreateTeamCommand::performAction_23(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x536189*/
  if ( (a2 & 1) != 0 ) /*0x53618f*/
    __3_YAXPAX_Z(this); /*0x536192*/
  return (AddTeamCommand *)this; /*0x53619c*/
}


// ==== 0x005361A0  CenterTeamCommand::Construct  this=CenterTeamCommand  sig=csp ====
_DWORD *__thiscall CenterTeamCommand_Constructor(_DWORD *this, int a2)
{
  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *this = &vt_CenterTeamCommandClass; /*0x5361a9*/
  return this; /*0x5361af*/
}


// ==== 0x005361C0  CenterTeamCommandClass::AddRef  this=CenterTeamCommand  sig=csp ====
ObjectClass *__thiscall CenterTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8271A0, (INIClass *)this->CenterTeamCommand_field_00); /*0x5361ce*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5361db*/
}


// ==== 0x005361E0  CenterTeamCommandClass::Release  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->CenterTeamCommand_field_00; /*0x5361e5*/
  StringCSF = GetStringCSF(MEMORY[0x8271B0], 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536200*/
  return &MEMORY[0xA8F654]; /*0x53620d*/
}


// ==== 0x00536210  CenterTeamCommandClass::GetTeamString  this=CenterTeamCommand  sig=csp ====
wchar_t *CSF_GetTeamString()
{
  return GetStringCSF(MEMORY[0x826FA4], 0, g_Str_File_Init_CPP, 6363); /*0x536226*/
}


// ==== 0x00536230  CenterTeamCommandClass::Read  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->CenterTeamCommand_field_00; /*0x536235*/
  StringCSF = GetStringCSF(MEMORY[0x8271C0], 0, g_Str_File_Init_CPP, 6365); /*0x536245*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536250*/
  return &MEMORY[0xA8F654]; /*0x53625d*/
}


// ==== 0x00536260  CenterTeamCommandClass::Do  this=CenterTeamCommand  sig=csp ====
int __thiscall CenterTeamCommand::_vt08(char **this, int a2)
{
  return TacticalClass::ResetView(this->CenterTeamCommand_field_00); /*0x536268*/
}


// ==== 0x00536270  CenterTeamCommandClass::performAction_24  this=CenterTeamCommand  sig=csp ====
CenterTeamCommand *__thiscall CreateTeamCommand::performAction_24(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x536279*/
  if ( (a2 & 1) != 0 ) /*0x53627f*/
    __3_YAXPAX_Z(this); /*0x536282*/
  return (CenterTeamCommand *)this; /*0x53628c*/
}


// ==== 0x00536290  TauntCommandClass::Construct  this=TauntCommandClass  sig=csp ====
_DWORD *__thiscall TauntCommandClass_Constructor(_DWORD *this, int a2)
{
  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  *this = &vt_TauntCommandClass; /*0x536299*/
  return this; /*0x53629f*/
}


// ==== 0x005362B0  TauntCommandClass::AddRef  this=TauntCommandClass  sig=csp ====
ObjectClass *__thiscall TauntCommandClass::AddRef(_DWORD *this)
{
  sprintf( /*0x5362be*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8271A0.customSound_controller[2],
    (INIClass *)this->TauntCommandClass_field_00);
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5362cb*/
}


// ==== 0x005362D0  TauntCommandClass::Release  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF(MEMORY[0x827204], 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x5362f0*/
  return &MEMORY[0xA8F654]; /*0x5362fd*/
}


// ==== 0x00536300  TauntCommandClass::ddtor  this=TauntCommandClass  sig=csp ====
wchar_t *TauntCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x827218], 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}


// ==== 0x00536320  TauntCommandClass::Read  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->TauntCommandClass_field_00; /*0x536325*/
  StringCSF = GetStringCSF(MEMORY[0x827224], 0, g_Str_File_Init_CPP, 6409); /*0x536335*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536340*/
  return &MEMORY[0xA8F654]; /*0x53634d*/
}


// ==== 0x00536350  TauntCommandClass::Do  this=TauntCommandClass  sig=csp ====
char __thiscall TauntCommandClass::_vt08(_BYTE *this, int a2)
{
  DWORD Time; // eax
  int v4; // eax
  char v5; // cl
  int v6; // ecx
  int v7; // ebx
  int v8; // esi
  int SendCount; // ebp
  int v10; // edi
  const wchar_t *v11; // ebx
  int ConnectionSpeed; // esi
  const wchar_t *Class; // eax
  int PlayerByID; // eax
  char LinkedIndex; // al
  int i; // [esp+4h] [ebp-1D0h]
  int v18; // [esp+8h] [ebp-1CCh]
  int v19; // [esp+Ch] [ebp-1C8h] BYREF
  char v20[43]; // [esp+10h] [ebp-1C4h] BYREF
  char v21; // [esp+3Bh] [ebp-199h]
  char v22; // [esp+3Ch] [ebp-198h]
  int v23; // [esp+3Dh] [ebp-197h]
  int v24; // [esp+41h] [ebp-193h]

  LOBYTE(Time) = MEMORY[0xA8B238][0]; /*0x536350*/
  if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x536366*/
  {
    LOBYTE(Time) = MEMORY[0xA8B538]; /*0x53636c*/
    if ( !MEMORY[0xA8B538] ) /*0x536373*/
    {
      Time = timeGetTime(); /*0x536379*/
      if ( (dword_825C88 == -1 || (int)(Time - dword_825C88) > 5000) /*0x5363c0*/
        && ((_BYTE)MEMORY[0xA8D110] && MEMORY[0xA8B238][0] == 3 || BYTE1(MEMORY[0xA8D110]) && MEMORY[0xA8B238][0] == 4) )
      {
        dword_825C88 = Time; /*0x5363c6*/
        v19 = 29; /*0x5363d1*/
        strcpy(v20, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x5363fb*/
        v23 = MEMORY[0xA8B394]; /*0x53640a*/
        v4 = WideString::Hash(MEMORY[0xA8D610]); /*0x536413*/
        v5 = this->TauntCommandClass_field_00; /*0x53641e*/
        v24 = v4; /*0x536421*/
        LOBYTE(v6) = (16 * *(_BYTE *)(*(_DWORD *)MEMORY[0xA8DA78] + 75)) /*0x536432*/
                   ^ ((16 * *(_BYTE *)(*(_DWORD *)MEMORY[0xA8DA78] + 75))
                    ^ v5)
                   & 0xF;
        v22 = v6; /*0x536434*/
        PlayTauntClass(v6); /*0x536438*/
        v7 = 0; /*0x536442*/
        v21 = 0; /*0x536446*/
        v18 = HouseClass_Count; /*0x53644b*/
        for ( i = 0; v7 < v18; i = v7 ) /*0x536453*/
        {
          v8 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v7]; /*0x536460*/
          if ( v8 ) /*0x536465*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v8 + 52) + 421) ) /*0x53646e*/
            {
              if ( *((_BYTE *)&MEMORY[0xA8D108] + v7) ) /*0x53647c*/
              {
                SendCount = Network::GetSendCount(MEMORY[0xA8E9C0]); /*0x536494*/
                v10 = 0; /*0x536496*/
                if ( SendCount > 0 ) /*0x53649a*/
                {
                  v11 = (const wchar_t *)(v8 + 90154); /*0x5364a0*/
                  do /*0x53651a*/
                  {
                    ConnectionSpeed = Network::GetConnectionSpeed(MEMORY[0xA8E9C0], v10); /*0x5364b1*/
                    Class = (const wchar_t *)Network::GetClass(MEMORY[0xA8E9C0], ConnectionSpeed); /*0x5364b9*/
                    if ( !wcscmp(v11, Class) ) /*0x5364c0*/
                    {
                      PlayerByID = Network::FindPlayerByID(MEMORY[0xA8E9C0], ConnectionSpeed); /*0x5364d2*/
                      if ( MEMORY[0xA8DBA0] ) /*0x5364df*/
                      {
                        LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, ConnectionSpeed); /*0x5364e7*/
                        v21 |= LinkedIndex; /*0x5364ec*/
                      }
                      else
                      {
                        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)&v19, 455, 1, PlayerByID, 0, 0); /*0x536508*/
                        Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x536512*/
                      }
                    }
                    ++v10; /*0x536517*/
                  }
                  while ( v10 < SendCount ); /*0x53651a*/
                  v7 = i; /*0x53651c*/
                }
              }
            }
          }
          ++v7; /*0x536524*/
        }
        LOBYTE(Time) = MEMORY[0xA8DBA0]; /*0x536532*/
        if ( MEMORY[0xA8DBA0] ) /*0x53653b*/
        {
          LOBYTE(Time) = v21; /*0x53653d*/
          if ( v21 ) /*0x536543*/
          {
            Network::SendMessage((int)MEMORY[0xA8E9C0], (int)&v19, 455, 1, *(_DWORD *)MEMORY[0xA8DA78] + 40, 0, 0); /*0x536566*/
            LOBYTE(Time) = Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x536570*/
          }
        }
      }
    }
  }
  return Time; /*0x536575*/
}


// ==== 0x00536580  TauntCommandClass::performAction_25  this=TauntCommandClass  sig=csp ====
TauntCommandClass *__thiscall CreateTeamCommand::performAction_25(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x536589*/
  if ( (a2 & 1) != 0 ) /*0x53658f*/
    __3_YAXPAX_Z(this); /*0x536592*/
  return (TauntCommandClass *)this; /*0x53659c*/
}


// ==== 0x005365A0  NextObjectCommandClass::performAction_26  this=NextObjectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_26(NextObjectCommandClass *this)
{
  return MEMORY[0x827234]; /*0x5365a5*/
}


// ==== 0x005365B0  NextObjectCommandClass::performAction_27  this=NextObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_27(NextObjectCommandClass *this)
{
  return GetStringCSF(MEMORY[0x827240], 0, g_Str_File_Init_CPP, 6526); /*0x5365c6*/
}


// ==== 0x005365D0  NextObjectCommandClass::performAction_28  this=NextObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_28(NextObjectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6528); /*0x5365e6*/
}


// ==== 0x005365F0  NextObjectCommandClass::performAction_29  this=NextObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_29(NextObjectCommandClass *this)
{
  return GetStringCSF(aTxtNextObjectD, 0, g_Str_File_Init_CPP, 6530); /*0x536606*/
}


// ==== 0x00536610  NextObjectCommandClass::performAction_30  this=NextObjectCommandClass  sig=csp ====
_BYTE *__thiscall CreateTeamCommand::performAction_30(NextObjectCommandClass *this)
{
  _BYTE *v1; // eax
  _BYTE *result; // eax
  _BYTE *v3; // esi

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x536617*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x536625*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x536631*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x53663d*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x536649*/
    v1 = **(_BYTE ***)&MEMORY[0xA8D63C].__pad_14B0[464]; /*0x536650*/
  else
    v1 = 0; /*0x536654*/
  result = sub_4AA2B0(v1); /*0x53665d*/
  v3 = result; /*0x536662*/
  if ( result ) /*0x536666*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(); /*0x536668*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 332))(v3); /*0x536671*/
    TacticalClass::InterpolateView(); /*0x53667c*/
    return (_BYTE *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536688*/
  }
  return result; /*0x53668e*/
}


// ==== 0x005366A0  PlanningModeCommandClass::performAction_31  this=PlanningModeCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_31(PlanningModeCommandClass *this)
{
  return g_INI_Key_PlanningMode; /*0x5366a5*/
}


// ==== 0x005366B0  PlanningModeCommandClass::performAction_32  this=PlanningModeCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_32(PlanningModeCommandClass *this)
{
  return GetStringCSF(aCmndPlanningmo, 0, g_Str_File_Init_CPP, 6580); /*0x5366c6*/
}


// ==== 0x005366D0  PlanningModeCommandClass::performAction_33  this=PlanningModeCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_33(PlanningModeCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6582); /*0x5366e6*/
}


// ==== 0x005366F0  PlanningModeCommandClass::performAction_34  this=PlanningModeCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_34(PlanningModeCommandClass *this)
{
  return GetStringCSF(aCmndPlanningmo_0, 0, g_Str_File_Init_CPP, 6584); /*0x536706*/
}


// ==== 0x00536710  PlanningModeCommandClass::performAction_35  this=PlanningModeCommandClass  sig=csp ====
BOOL __thiscall CreateTeamCommand::performAction_35(PlanningModeCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  return (v2 & 7) != 0; /*0x53671b*/
}


// ==== 0x00536730  PlanningModeCommandClass::performAction_36  this=PlanningModeCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_36(PlanningModeCommandClass *this)
{
  return 1; /*0x536732*/
}


// ==== 0x00536740  PlanningModeCommandClass::performAction_37  this=PlanningModeCommandClass  sig=csp ====
unsigned int __thiscall CreateTeamCommand::performAction_37(PlanningModeCommandClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x53674c*/
}


// ==== 0x00536750  PlanningModeCommandClass::performAction_38  this=PlanningModeCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_38(PlanningModeCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x536757*/
    return UI_Create_731A70(0); /*0x53675b*/
  else
    return UI_Create_731A50(0); /*0x536765*/
}


// ==== 0x00536770  CombatantSelectCommandClass::performAction_39  this=CombatantSelectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_39(CombatantSelectCommandClass *this)
{
  return aCombatantselec; /*0x536775*/
}


// ==== 0x00536780  CombatantSelectCommandClass::performAction_40  this=CombatantSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_40(CombatantSelectCommandClass *this)
{
  return GetStringCSF(aCmndCombatants, 0, g_Str_File_Init_CPP, 6664); /*0x536796*/
}


// ==== 0x005367A0  CombatantSelectCommandClass::performAction_41  this=CombatantSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_41(CombatantSelectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6666); /*0x5367b6*/
}


// ==== 0x005367C0  CombatantSelectCommandClass::performAction_42  this=CombatantSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_42(CombatantSelectCommandClass *this)
{
  return GetStringCSF(aCmndCombatants_0, 0, g_Str_File_Init_CPP, 6668); /*0x5367d6*/
}


// ==== 0x005367E0  CombatantSelectCommandClass::performAction_43  this=CombatantSelectCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_43(CombatantSelectCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5367ea*/
}


// ==== 0x005367F0  CombatantSelectCommandClass::performAction_44  this=CombatantSelectCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_44(CombatantSelectCommandClass *this)
{
  unsigned int v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = v3 >> 8; /*0x5367f4*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x5367f9*/
  return ((int (__thiscall *)(unsigned int))loc_732280)(v1); /*0x536801*/
}


// ==== 0x00536810  TypeSelectCommandClass::performAction_45  this=TypeSelectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_45(TypeSelectCommandClass *this)
{
  return g_INI_Key_TypeSelect; /*0x536815*/
}


// ==== 0x00536820  TypeSelectCommandClass::performAction_46  this=TypeSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_46(TypeSelectCommandClass *this)
{
  return GetStringCSF(aCmndTypeselect, 0, g_Str_File_Init_CPP, 6690); /*0x536836*/
}


// ==== 0x00536840  TypeSelectCommandClass::performAction_47  this=TypeSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_47(TypeSelectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6692); /*0x536856*/
}


// ==== 0x00536860  TypeSelectCommandClass::performAction_48  this=TypeSelectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_48(TypeSelectCommandClass *this)
{
  return GetStringCSF(aCmndTypeselect_0, 0, g_Str_File_Init_CPP, 6694); /*0x536876*/
}


// ==== 0x00536880  TypeSelectCommandClass::performAction_49  this=TypeSelectCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_49(TypeSelectCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53688a*/
}


// ==== 0x00536890  TypeSelectCommandClass::performAction_50  this=TypeSelectCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_50(TypeSelectCommandClass *this)
{
  return 1; /*0x536892*/
}


// ==== 0x005368A0  TypeSelectCommandClass::performAction_51  this=TypeSelectCommandClass  sig=csp ====
unsigned int __thiscall CreateTeamCommand::performAction_51(TypeSelectCommandClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x5368ac*/
}


// ==== 0x005368B0  TypeSelectCommandClass::performAction_52  this=TypeSelectCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_52(TypeSelectCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x5368b7*/
    return UI_Create_732CC0(); /*0x5368b9*/
  else
    return UI_Create_732CA0(); /*0x5368c1*/
}


// ==== 0x005368D0  HealthNavCommandClass::performAction_53  this=HealthNavCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_53(HealthNavCommandClass *this)
{
  return aHealthnav; /*0x5368d5*/
}


// ==== 0x005368E0  HealthNavCommandClass::performAction_54  this=HealthNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_54(HealthNavCommandClass *this)
{
  return GetStringCSF(aCmndHealthnavi, 0, g_Str_File_Init_CPP, 6728); /*0x5368f6*/
}


// ==== 0x00536900  HealthNavCommandClass::performAction_55  this=HealthNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_55(HealthNavCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6730); /*0x536916*/
}


// ==== 0x00536920  HealthNavCommandClass::performAction_56  this=HealthNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_56(HealthNavCommandClass *this)
{
  return GetStringCSF(aCmndHealthnavi_0, 0, g_Str_File_Init_CPP, 6732); /*0x536936*/
}


// ==== 0x00536940  HealthNavCommandClass::performAction_57  this=HealthNavCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_57(HealthNavCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53694a*/
}


// ==== 0x00536950  HealthNavCommandClass::performAction_58  this=HealthNavCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_58(HealthNavCommandClass *this)
{
  HealthNavCommandClass *v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = (HealthNavCommandClass *)(v3 >> 8); /*0x536954*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x536959*/
  return UpdateUnitHealthTooltip(v1); /*0x536961*/
}


// ==== 0x00536970  VeterancyNavCommandClass::performAction_59  this=VeterancyNavCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_59(VeterancyNavCommandClass *this)
{
  return aVeterancynav; /*0x536975*/
}


// ==== 0x00536980  VeterancyNavCommandClass::performAction_60  this=VeterancyNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_60(VeterancyNavCommandClass *this)
{
  return GetStringCSF(aCmndVetnavigat, 0, g_Str_File_Init_CPP, 6754); /*0x536996*/
}


// ==== 0x005369A0  VeterancyNavCommandClass::performAction_61  this=VeterancyNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_61(VeterancyNavCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6756); /*0x5369b6*/
}


// ==== 0x005369C0  VeterancyNavCommandClass::performAction_62  this=VeterancyNavCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_62(VeterancyNavCommandClass *this)
{
  return GetStringCSF(aCmndVetnavigat_0, 0, g_Str_File_Init_CPP, 6758); /*0x5369d6*/
}


// ==== 0x005369E0  VeterancyNavCommandClass::performAction_63  this=VeterancyNavCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_63(VeterancyNavCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5369ea*/
}


// ==== 0x005369F0  VeterancyNavCommandClass::performAction_64  this=VeterancyNavCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_64(VeterancyNavCommandClass *this)
{
  VeterancyNavCommandClass *v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = (VeterancyNavCommandClass *)(v3 >> 8); /*0x5369f4*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x5369f9*/
  return DrawUnitExperiencePopup(v1); /*0x536a01*/
}


// ==== 0x00536A10  PrevObjectCommandClass::performAction_65  this=PrevObjectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_65(PrevObjectCommandClass *this)
{
  return aPreviousobject; /*0x536a15*/
}


// ==== 0x00536A20  PrevObjectCommandClass::performAction_66  this=PrevObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_66(PrevObjectCommandClass *this)
{
  return GetStringCSF(aTxtPrevObject, 0, g_Str_File_Init_CPP, 6817); /*0x536a36*/
}


// ==== 0x00536A40  PrevObjectCommandClass::performAction_67  this=PrevObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_67(PrevObjectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6819); /*0x536a56*/
}


// ==== 0x00536A60  PrevObjectCommandClass::performAction_68  this=PrevObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_68(PrevObjectCommandClass *this)
{
  return GetStringCSF(aTxtPrevObjectD, 0, g_Str_File_Init_CPP, 6821); /*0x536a76*/
}


// ==== 0x00536A80  PrevObjectCommandClass::performAction_69  this=PrevObjectCommandClass  sig=csp ====
_BYTE *__thiscall CreateTeamCommand::performAction_69(PrevObjectCommandClass *this)
{
  _BYTE *v1; // eax
  _BYTE *result; // eax
  _BYTE *v3; // esi

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x536a87*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x536a95*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x536aa1*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x536aad*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x536ab9*/
    v1 = **(_BYTE ***)&MEMORY[0xA8D63C].__pad_14B0[464]; /*0x536ac0*/
  else
    v1 = 0; /*0x536ac4*/
  result = sub_4AA380(v1); /*0x536acd*/
  v3 = result; /*0x536ad2*/
  if ( result ) /*0x536ad6*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(); /*0x536ad8*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 332))(v3); /*0x536ae1*/
    TacticalClass::InterpolateView(); /*0x536aec*/
    return (_BYTE *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536af8*/
  }
  return result; /*0x536afe*/
}


// ==== 0x00536B10  StopCommandClass::performAction_70  this=StopCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536B10()
{
  return aStopobject; /*0x536b15*/
}


// ==== 0x00536B20  StopCommandClass::performAction_71  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536B20()
{
  return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858); /*0x536b36*/
}


// ==== 0x00536B40  StopCommandClass::performAction_72  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536B40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860); /*0x536b56*/
}


// ==== 0x00536B60  StopCommandClass::performAction_73  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536B60()
{
  return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862); /*0x536b76*/
}


// ==== 0x00536B80  StopCommandClass::performAction_74  this=StopCommandClass  sig=csp ====
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::sub_536B80(int a1)
{
  return UI_Create_730EA0(); /*0x536b85*/
}


// ==== 0x00536B90  AllToCheerCommandClass::performAction_75  this=AllToCheerCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_75(AllToCheerCommandClass *this)
{
  return aAlltocheer; /*0x536b95*/
}


// ==== 0x00536BA0  AllToCheerCommandClass::performAction_76  this=AllToCheerCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_76(AllToCheerCommandClass *this)
{
  return GetStringCSF(aCmndAllcheer, 0, g_Str_File_Init_CPP, 6876); /*0x536bb6*/
}


// ==== 0x00536BC0  AllToCheerCommandClass::performAction_77  this=AllToCheerCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_77(AllToCheerCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6878); /*0x536bd6*/
}


// ==== 0x00536BE0  AllToCheerCommandClass::performAction_78  this=AllToCheerCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_78(AllToCheerCommandClass *this)
{
  return GetStringCSF(aCmndAllcheerde, 0, g_Str_File_Init_CPP, 6880); /*0x536bf6*/
}


// ==== 0x00536C00  AllToCheerCommandClass::performAction_79  this=AllToCheerCommandClass  sig=csp ====
// attributes: thunk
wchar_t *__thiscall CreateTeamCommand::performAction_79(AllToCheerCommandClass *this)
{
  return UI_Create_730F30(); /*0x536c05*/
}


// ==== 0x00536C10  DeployCommandClass::performAction_80  this=DeployCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536C10()
{
  return aDeployobject; /*0x536c15*/
}


// ==== 0x00536C20  DeployCommandClass::performAction_81  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536C20()
{
  return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903); /*0x536c36*/
}


// ==== 0x00536C40  DeployCommandClass::performAction_82  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536C40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905); /*0x536c56*/
}


// ==== 0x00536C60  DeployCommandClass::performAction_83  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536C60()
{
  return GetStringCSF(aTxtDeployObjec_0, 0, g_Str_File_Init_CPP, 6907); /*0x536c76*/
}


// ==== 0x00536C80  DeployCommandClass::performAction_84  this=DeployCommandClass  sig=csp ====
// attributes: thunk
char __stdcall CreateTeamCommand::sub_536C80(int a1)
{
  return ProcessSelectionExperience(); /*0x536c85*/
}


// ==== 0x00536C90  GuardCommandClass::performAction_85  this=GuardCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536C90()
{
  return aGuardobject; /*0x536c95*/
}


// ==== 0x00536CA0  GuardCommandClass::performAction_86  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536CA0()
{
  return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931); /*0x536cb6*/
}


// ==== 0x00536CC0  GuardCommandClass::performAction_87  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536CC0()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933); /*0x536cd6*/
}


// ==== 0x00536CE0  GuardCommandClass::performAction_88  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536CE0()
{
  return GetStringCSF(aTxtGuardDesc, 0, g_Str_File_Init_CPP, 6935); /*0x536cf6*/
}


// ==== 0x00536D00  GuardCommandClass::performAction_89  this=GuardCommandClass  sig=csp ====
// attributes: thunk
char __stdcall CreateTeamCommand::sub_536D00(int a1)
{
  return GetFactoryData(); /*0x536d05*/
}


// ==== 0x00536D10  ScatterCommandClass::performAction_90  this=ScatterCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536D10()
{
  return aScatterobject; /*0x536d15*/
}


// ==== 0x00536D20  ScatterCommandClass::performAction_91  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536D20()
{
  return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960); /*0x536d36*/
}


// ==== 0x00536D40  ScatterCommandClass::performAction_92  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536D40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962); /*0x536d56*/
}


// ==== 0x00536D60  ScatterCommandClass::performAction_93  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536D60()
{
  return GetStringCSF(aTxtScatterDesc, 0, g_Str_File_Init_CPP, 6964); /*0x536d76*/
}


// ==== 0x00536D80  ScatterCommandClass::performAction_94  this=ScatterCommandClass  sig=csp ====
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::sub_536D80(int a1)
{
  return UI_Create_730FE0(); /*0x536d85*/
}


// ==== 0x00536D90  CenterViewCommandClass::performAction_95  this=CenterViewCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_95(CenterViewCommandClass *this)
{
  return aCenterview; /*0x536d95*/
}


// ==== 0x00536DA0  CenterViewCommandClass::performAction_96  this=CenterViewCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_96(CenterViewCommandClass *this)
{
  return GetStringCSF(aTxtCenterView, 0, g_Str_File_Init_CPP, 6987); /*0x536db6*/
}


// ==== 0x00536DC0  CenterViewCommandClass::performAction_97  this=CenterViewCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_97(CenterViewCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6989); /*0x536dd6*/
}


// ==== 0x00536DE0  CenterViewCommandClass::performAction_98  this=CenterViewCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_98(CenterViewCommandClass *this)
{
  return GetStringCSF(aTxtCenterViewD, 0, g_Str_File_Init_CPP, 6991); /*0x536df6*/
}


// ==== 0x00536E00  CenterViewCommandClass::performAction_99  this=CenterViewCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_99(CenterViewCommandClass *this)
{
  ParticleSystemClass *result; // eax

  result = *(ParticleSystemClass **)&MEMORY[0xA8D63C].__pad_14B0[476]; /*0x536e00*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[476] > 0 ) /*0x536e07*/
  {
    TacticalClass::InterpolateView(); /*0x536e0e*/
    return (wchar_t *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536e1a*/
  }
  return (wchar_t *)result; /*0x536e1f*/
}


// ==== 0x00536E30  CenterBaseCommandClass::performAction_100  this=CenterBaseCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_100(CenterBaseCommandClass *this)
{
  return aCenterbase; /*0x536e35*/
}


// ==== 0x00536E40  CenterBaseCommandClass::performAction_101  this=CenterBaseCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_101(CenterBaseCommandClass *this)
{
  return GetStringCSF(aTxtCenterBase, 0, g_Str_File_Init_CPP, 7018); /*0x536e56*/
}


// ==== 0x00536E60  CenterBaseCommandClass::performAction_102  this=CenterBaseCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_102(CenterBaseCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 7020); /*0x536e76*/
}


// ==== 0x00536E80  CenterBaseCommandClass::performAction_103  this=CenterBaseCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_103(CenterBaseCommandClass *this)
{
  return GetStringCSF(aTxtCenterBaseD, 0, g_Str_File_Init_CPP, 7022); /*0x536e96*/
}


// ==== 0x00536EA0  CenterBaseCommandClass::performAction_104  this=CenterBaseCommandClass  sig=csp ====
// attributes: thunk
int __thiscall CreateTeamCommand::performAction_104(CenterBaseCommandClass *this)
{
  return TAction::CenterOnStartCoords(); /*0x536ea5*/
}


// ==== 0x00536EB0  AllianceCommandClass::performAction_105  this=AllianceCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_105(AllianceCommandClass *this)
{
  return aTogglealliance; /*0x536eb5*/
}


// ==== 0x00536EC0  AllianceCommandClass::performAction_106  this=AllianceCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_106(AllianceCommandClass *this)
{
  return GetStringCSF(aTxtAlliance, 0, g_Str_File_Init_CPP, 7045); /*0x536ed6*/
}


// ==== 0x00536EE0  AllianceCommandClass::performAction_107  this=AllianceCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_107(AllianceCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 7047); /*0x536ef6*/
}


// ==== 0x00536F00  AllianceCommandClass::performAction_108  this=AllianceCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_108(AllianceCommandClass *this)
{
  return GetStringCSF(aTxtAllianceDes, 0, g_Str_File_Init_CPP, 7049); /*0x536f16*/
}


// ==== 0x00536F20  AllianceCommandClass::performAction_109  this=AllianceCommandClass  sig=csp ====
// attributes: thunk
char *__thiscall CreateTeamCommand::performAction_109(AllianceCommandClass *this)
{
  return UI_Create_7318F0(); /*0x536f25*/
}


// ==== 0x00536F30  ToggleRepairCommandClass::performAction_110  this=ToggleRepairCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536F30()
{
  return aTogglerepair; /*0x536f35*/
}


// ==== 0x00536F40  ToggleRepairCommandClass::performAction_111  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536F40()
{
  return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103); /*0x536f56*/
}


// ==== 0x00536F60  ToggleRepairCommandClass::performAction_112  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536F60()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7105); /*0x536f76*/
}


// ==== 0x00536F80  ToggleRepairCommandClass::performAction_113  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536F80()
{
  return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107); /*0x536f96*/
}


// ==== 0x00536FA0  ToggleRepairCommandClass::Execute  this=ToggleRepairCommandClass  sig=csp ====
char __stdcall ToggleRepariModeCommandClass::Execute_PlayerAutoRepair(int a1)
{
  return BuildingClass::TogglePower2(&MEMORY[0x87F7E8], -1); /*0x536fac*/
}


// ==== 0x00536FB0  ToggleSellCommandClass::performAction_114  this=ToggleSellCommandClass  sig=csp ====
char *CreateTeamCommand::sub_536FB0()
{
  return aTogglesell; /*0x536fb5*/
}


// ==== 0x00536FC0  ToggleSellCommandClass::performAction_115  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536FC0()
{
  return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129); /*0x536fd6*/
}


// ==== 0x00536FE0  ToggleSellCommandClass::performAction_116  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_536FE0()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7131); /*0x536ff6*/
}


// ==== 0x00537000  ToggleSellCommandClass::performAction_117  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_537000()
{
  return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133); /*0x537016*/
}


// ==== 0x00537020  ToggleSellCommandClass::performAction_118  this=ToggleSellCommandClass  sig=csp ====
char __stdcall CreateTeamCommand::sub_537020(int a1)
{
  return BuildingClass::TogglePower(&MEMORY[0x87F7E8], -1); /*0x53702c*/
}


// ==== 0x00537030  BeaconPlacementCommandClass::performAction_119  this=BeaconPlacementCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_119(BeaconPlacementCommandClass *this)
{
  return aPlacebeacon; /*0x537035*/
}


// ==== 0x00537040  BeaconPlacementCommandClass::performAction_120  this=BeaconPlacementCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_120(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon, 0, g_Str_File_Init_CPP, 7172); /*0x537056*/
}


// ==== 0x00537060  BeaconPlacementCommandClass::performAction_121  this=BeaconPlacementCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_121(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7174); /*0x537076*/
}


// ==== 0x00537080  BeaconPlacementCommandClass::performAction_122  this=BeaconPlacementCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_122(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176); /*0x537096*/
}


// ==== 0x005370A0  BeaconPlacementCommandClass::performAction_123  this=BeaconPlacementCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_123(BeaconPlacementCommandClass *this)
{
  CellStruct *result; // eax

  result = MEMORY[0xA8B238]; /*0x5370a0*/
  if ( MEMORY[0xA8B238] ) /*0x5370a7*/
  {
    if ( MEMORY[0xA8B238] != (CellStruct *)5 ) /*0x5370ac*/
      return UI_Create_731A30(); /*0x5370ae*/
  }
  return (int)result; /*0x5370b3*/
}


// ==== 0x005370C0  CenterREventCommandClass::performAction_124  this=CenterREventCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_124(CenterREventCommandClass *this)
{
  return aCenteronradare; /*0x5370c5*/
}


// ==== 0x005370D0  CenterREventCommandClass::performAction_125  this=CenterREventCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_125(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEvent, 0, g_Str_File_Init_CPP, 7195); /*0x5370e6*/
}


// ==== 0x005370F0  CenterREventCommandClass::performAction_126  this=CenterREventCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_126(CenterREventCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7197); /*0x537106*/
}


// ==== 0x00537110  CenterREventCommandClass::performAction_127  this=CenterREventCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_127(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199); /*0x537126*/
}


// ==== 0x00537130  CenterREventCommandClass::performAction_128  this=CenterREventCommandClass  sig=csp ====
// attributes: thunk
unsigned __int16 __thiscall CreateTeamCommand::performAction_128(CenterREventCommandClass *this)
{
  return UI_Create_734120(); /*0x537135*/
}


// ==== 0x00537140  SidebarUpCommandClass::performAction_129  this=SidebarUpCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_129(SidebarUpCommandClass *this)
{
  return aSidebarup; /*0x537145*/
}


// ==== 0x00537150  SidebarUpCommandClass::performAction_130  this=SidebarUpCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_130(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUp, 0, g_Str_File_Init_CPP, 7249); /*0x537166*/
}


// ==== 0x00537170  SidebarUpCommandClass::performAction_131  this=SidebarUpCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_131(SidebarUpCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7251); /*0x537186*/
}


// ==== 0x00537190  SidebarUpCommandClass::performAction_132  this=SidebarUpCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_132(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253); /*0x5371a6*/
}


// ==== 0x005371B0  SidebarUpCommandClass::performAction_133  this=SidebarUpCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_133(SidebarUpCommandClass *this)
{
  return CreateTeamCommand::performAction_245(&MEMORY[0x87F7E8], 1, -1); /*0x5371be*/
}


// ==== 0x005371D0  SidebarDownCommandClass::performAction_134  this=SidebarDownCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_134(SidebarDownCommandClass *this)
{
  return aSidebardown; /*0x5371d5*/
}


// ==== 0x005371E0  SidebarDownCommandClass::performAction_135  this=SidebarDownCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_135(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown, 0, g_Str_File_Init_CPP, 7389); /*0x5371f6*/
}


// ==== 0x00537200  SidebarDownCommandClass::performAction_136  this=SidebarDownCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_136(SidebarDownCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7391); /*0x537216*/
}


// ==== 0x00537220  SidebarDownCommandClass::performAction_137  this=SidebarDownCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_137(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393); /*0x537236*/
}


// ==== 0x00537240  SidebarDownCommandClass::performAction_138  this=SidebarDownCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_138(SidebarDownCommandClass *this)
{
  return CreateTeamCommand::performAction_245(&MEMORY[0x87F7E8], 0, -1); /*0x53724e*/
}


// ==== 0x00537260  OptionsCommandClass::performAction_139  this=OptionsCommandClass  sig=csp ====
CHAR *__thiscall CreateTeamCommand::performAction_139(OptionsCommandClass *this)
{
  return (CHAR *)&g_INI_Key_Options; /*0x537265*/
}


// ==== 0x00537270  OptionsCommandClass::performAction_140  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_140(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530); /*0x537286*/
}


// ==== 0x00537290  OptionsCommandClass::performAction_141  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_141(OptionsCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7532); /*0x5372a6*/
}


// ==== 0x005372B0  OptionsCommandClass::performAction_142  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_142(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534); /*0x5372c6*/
}


// ==== 0x005372D0  OptionsCommandClass::performAction_143  this=OptionsCommandClass  sig=csp ====
// attributes: thunk
char __thiscall CreateTeamCommand::performAction_143(OptionsCommandClass *this)
{
  return UI_Create(); /*0x5372d5*/
}


// ==== 0x005372E0  View1CommandClass::performAction_144  this=View1CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_144(View1CommandClass *this)
{
  return aView1; /*0x5372e5*/
}


// ==== 0x005372F0  View1CommandClass::performAction_145  this=View1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_145(View1CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar, 0, g_Str_File_Init_CPP, 7707); /*0x537306*/
}


// ==== 0x00537310  View1CommandClass::performAction_146  this=View1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_146(View1CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7709); /*0x537326*/
}


// ==== 0x00537330  View1CommandClass::performAction_147  this=View1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_147(View1CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_0, 0, g_Str_File_Init_CPP, 7711); /*0x537346*/
}


// ==== 0x00537350  View1CommandClass::performAction_148  this=View1CommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_148(View1CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6728) << 8) + 128; /*0x537378*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6727) << 8) + 128; /*0x53737d*/
  v4[1] = v1; /*0x537386*/
  GroundHeight = 0; /*0x53738a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53739d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x5373a6*/
  result = MEMORY[0x880990]; /*0x5373ab*/
  if ( MEMORY[0x880990] ) /*0x5373b2*/
    return Tactical::MouseMove( /*0x5373c3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5373c8*/
}


// ==== 0x005373D0  View2CommandClass::performAction_149  this=View2CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_149(View2CommandClass *this)
{
  return aView2; /*0x5373d5*/
}


// ==== 0x005373E0  View2CommandClass::performAction_150  this=View2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_150(View2CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_1, 0, g_Str_File_Init_CPP, 7743); /*0x5373f6*/
}


// ==== 0x00537400  View2CommandClass::performAction_151  this=View2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_151(View2CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7745); /*0x537416*/
}


// ==== 0x00537420  View2CommandClass::performAction_152  this=View2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_152(View2CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_2, 0, g_Str_File_Init_CPP, 7747); /*0x537436*/
}


// ==== 0x00537440  View2CommandClass::performAction_153  this=View2CommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_153(View2CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6730) << 8) + 128; /*0x537468*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6729) << 8) + 128; /*0x53746d*/
  v4[1] = v1; /*0x537476*/
  GroundHeight = 0; /*0x53747a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53748d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x537496*/
  result = MEMORY[0x880990]; /*0x53749b*/
  if ( MEMORY[0x880990] ) /*0x5374a2*/
    return Tactical::MouseMove( /*0x5374b3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5374b8*/
}


// ==== 0x005374C0  View3CommandClass::performAction_154  this=View3CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_154(View3CommandClass *this)
{
  return aView3; /*0x5374c5*/
}


// ==== 0x005374D0  View3CommandClass::performAction_155  this=View3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_155(View3CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_3, 0, g_Str_File_Init_CPP, 7779); /*0x5374e6*/
}


// ==== 0x005374F0  View3CommandClass::performAction_156  this=View3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_156(View3CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7781); /*0x537506*/
}


// ==== 0x00537510  View3CommandClass::performAction_157  this=View3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_157(View3CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_4, 0, g_Str_File_Init_CPP, 7783); /*0x537526*/
}


// ==== 0x00537530  View3CommandClass::performAction_158  this=View3CommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_158(View3CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6732) << 8) + 128; /*0x537558*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6731) << 8) + 128; /*0x53755d*/
  v4[1] = v1; /*0x537566*/
  GroundHeight = 0; /*0x53756a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53757d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x537586*/
  result = MEMORY[0x880990]; /*0x53758b*/
  if ( MEMORY[0x880990] ) /*0x537592*/
    return Tactical::MouseMove( /*0x5375a3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5375a8*/
}


// ==== 0x005375B0  View4CommandClass::performAction_159  this=View4CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_159(View4CommandClass *this)
{
  return aView4; /*0x5375b5*/
}


// ==== 0x005375C0  View4CommandClass::performAction_160  this=View4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_160(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_5, 0, g_Str_File_Init_CPP, 7815); /*0x5375d6*/
}


// ==== 0x005375E0  View4CommandClass::performAction_161  this=View4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_161(View4CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7817); /*0x5375f6*/
}


// ==== 0x00537600  View4CommandClass::performAction_162  this=View4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_162(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819); /*0x537616*/
}


// ==== 0x00537620  View4CommandClass::InitView  this=View4CommandClass  sig=csp ====
_DWORD *__stdcall TacticalClass_InitView(int a1)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  _DWORD v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6734) << 8) + 128; /*0x537648*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6733) << 8) + 128; /*0x53764d*/
  v4[1] = v1; /*0x537656*/
  GroundHeight = 0; /*0x53765a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53766d*/
  Tactical::SetTacticalPosition(v4); /*0x537676*/
  result = (_DWORD *)MEMORY[0x880990]; /*0x53767b*/
  if ( MEMORY[0x880990] ) /*0x537682*/
    return Tactical::MouseMove((int)&MEMORY[0x87F7E8], &v3, &MEMORY[0xA8F2F8]); /*0x537693*/
  return result; /*0x537698*/
}


// ==== 0x005376A0  SetView1CommandClass::performAction_163  this=SetView1CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_163(SetView1CommandClass *this)
{
  return aSetview1; /*0x5376a5*/
}


// ==== 0x005376B0  SetView1CommandClass::performAction_164  this=SetView1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_164(SetView1CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark, 0, g_Str_File_Init_CPP, 7851); /*0x5376c6*/
}


// ==== 0x005376D0  SetView1CommandClass::performAction_165  this=SetView1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_165(SetView1CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7853); /*0x5376e6*/
}


// ==== 0x005376F0  SetView1CommandClass::performAction_166  this=SetView1CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_166(SetView1CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_0, 0, g_Str_File_Init_CPP, 7855); /*0x537706*/
}


// ==== 0x00537710  SetView1CommandClass::performAction_167  this=SetView1CommandClass  sig=csp ====
void *__thiscall CreateTeamCommand::performAction_167(SetView1CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53771e*/
  v5[0] = *v1; /*0x537725*/
  v5[1] = v1[1]; /*0x53773c*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537745*/
  result = MEMORY[0xA8B230]; /*0x537747*/
  *(int *)((char *)&MEMORY[0xA8B230]->localVariables[1024] + 2) = v2; /*0x53774c*/
  return result; /*0x537752*/
}


// ==== 0x00537760  SetView2CommandClass::performAction_168  this=SetView2CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_168(SetView2CommandClass *this)
{
  return aSetview2; /*0x537765*/
}


// ==== 0x00537770  SetView2CommandClass::performAction_169  this=SetView2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_169(SetView2CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_1, 0, g_Str_File_Init_CPP, 7878); /*0x537786*/
}


// ==== 0x00537790  SetView2CommandClass::performAction_170  this=SetView2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_170(SetView2CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7880); /*0x5377a6*/
}


// ==== 0x005377B0  SetView2CommandClass::performAction_171  this=SetView2CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_171(SetView2CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_2, 0, g_Str_File_Init_CPP, 7882); /*0x5377c6*/
}


// ==== 0x005377D0  SetView2CommandClass::performAction_172  this=SetView2CommandClass  sig=csp ====
void *__thiscall CreateTeamCommand::performAction_172(SetView2CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x5377de*/
  v5[0] = *v1; /*0x5377e5*/
  v5[1] = v1[1]; /*0x5377fc*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537805*/
  result = MEMORY[0xA8B230]; /*0x537807*/
  *(int *)((char *)MEMORY[0xA8B230]->view1 + 2) = v2; /*0x53780c*/
  return result; /*0x537812*/
}


// ==== 0x00537820  SetView3CommandClass::performAction_173  this=SetView3CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_173(SetView3CommandClass *this)
{
  return aSetview3; /*0x537825*/
}


// ==== 0x00537830  SetView3CommandClass::performAction_174  this=SetView3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_174(SetView3CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_3, 0, g_Str_File_Init_CPP, 7905); /*0x537846*/
}


// ==== 0x00537850  SetView3CommandClass::performAction_175  this=SetView3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_175(SetView3CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7907); /*0x537866*/
}


// ==== 0x00537870  SetView3CommandClass::performAction_176  this=SetView3CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_176(SetView3CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_4, 0, g_Str_File_Init_CPP, 7909); /*0x537886*/
}


// ==== 0x00537890  SetView3CommandClass::performAction_177  this=SetView3CommandClass  sig=csp ====
void *__thiscall CreateTeamCommand::performAction_177(SetView3CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53789e*/
  v5[0] = *v1; /*0x5378a5*/
  v5[1] = v1[1]; /*0x5378bc*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x5378c5*/
  result = MEMORY[0xA8B230]; /*0x5378c7*/
  *(int *)((char *)MEMORY[0xA8B230]->view2 + 2) = v2; /*0x5378cc*/
  return result; /*0x5378d2*/
}


// ==== 0x005378E0  SetView4CommandClass::performAction_178  this=SetView4CommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_178(SetView4CommandClass *this)
{
  return aSetview4; /*0x5378e5*/
}


// ==== 0x005378F0  SetView4CommandClass::performAction_179  this=SetView4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_179(SetView4CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_5, 0, g_Str_File_Init_CPP, 7932); /*0x537906*/
}


// ==== 0x00537910  SetView4CommandClass::performAction_180  this=SetView4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_180(SetView4CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7934); /*0x537926*/
}


// ==== 0x00537930  SetView4CommandClass::performAction_181  this=SetView4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_181(SetView4CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_6, 0, g_Str_File_Init_CPP, 7936); /*0x537946*/
}


// ==== 0x00537950  SetView4CommandClass::performAction_182  this=SetView4CommandClass  sig=csp ====
void *__thiscall CreateTeamCommand::performAction_182(SetView4CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53795e*/
  v5[0] = *v1; /*0x537965*/
  v5[1] = v1[1]; /*0x53797c*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537985*/
  result = MEMORY[0xA8B230]; /*0x537987*/
  *(int *)((char *)MEMORY[0xA8B230]->view3 + 2) = v2; /*0x53798c*/
  return result; /*0x537992*/
}


// ==== 0x005379A0  FollowCommandClass::performAction_183  this=FollowCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_183(FollowCommandClass *this)
{
  return aFollow; /*0x5379a5*/
}


// ==== 0x005379B0  FollowCommandClass::performAction_184  this=FollowCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_184(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollow, 0, g_Str_File_Init_CPP, 7959); /*0x5379c6*/
}


// ==== 0x005379D0  FollowCommandClass::performAction_185  this=FollowCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_185(FollowCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7961); /*0x5379e6*/
}


// ==== 0x005379F0  FollowCommandClass::performAction_186  this=FollowCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_186(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963); /*0x537a06*/
}


// ==== 0x00537A10  FollowCommandClass::performAction_187  this=FollowCommandClass  sig=csp ====
bool __thiscall CreateTeamCommand::performAction_187(FollowCommandClass *this)
{
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] || MapClass::GetScrollMode((int)&MEMORY[0x87F7E8]) ) /*0x537a1e*/
    return MapClass::SetScrollMode((int)&MEMORY[0x87F7E8], 0); /*0x537a43*/
  else
    return MapClass::SetScrollMode((int)&MEMORY[0x87F7E8], **(MouseClass ***)&MEMORY[0xA8D63C].__pad_14B0[464]); /*0x537a34*/
}


// ==== 0x00537A50  MultiplayerDebugCommandClass::AddRef  this=MultiplayerDebugCommandClass  sig=csp ====
char *__thiscall Commands::AddRef(MultiplayerDebugCommandClass *this)
{
  return aMultiplayerdeb; /*0x537a55*/
}


// ==== 0x00537A60  MultiplayerDebugCommandClass::ddtor  this=MultiplayerDebugCommandClass  sig=csp ====
const wchar_t *__thiscall Commands::ddtor(MultiplayerDebugCommandClass *this)
{
  return g_INI_Key_De; /*0x537a65*/
}


// ==== 0x00537A70  MultiplayerDebugCommandClass::Release  this=MultiplayerDebugCommandClass  sig=csp ====
char **__thiscall Commands::Release(MultiplayerDebugCommandClass *this)
{
  return &off_8278C0; /*0x537a75*/
}


// ==== 0x00537A80  MultiplayerDebugCommandClass::StubReturn8550640  this=MultiplayerDebugCommandClass  sig=csp ====
_UNKNOWN **__thiscall Commands::StubReturn8550640(MultiplayerDebugCommandClass *this)
{
  return &off_8278F0; /*0x537a85*/
}


// ==== 0x00537A90  MultiplayerDebugCommandClass::Execute  this=MultiplayerDebugCommandClass  sig=csp ====
char __thiscall Commands::Execute(MultiplayerDebugCommandClass *this)
{
  char result; // al

  result = MEMORY[0xA8B8B4]; /*0x537a90*/
  if ( MEMORY[0xA8B8B4] ) /*0x537a97*/
  {
    result = MEMORY[0xA8B8B5] == 0; /*0x537aa0*/
    MEMORY[0xA8B8B5] = MEMORY[0xA8B8B5] == 0; /*0x537aa3*/
  }
  return result; /*0x537aa8*/
}


// ==== 0x00537AB0  MultiplayerSyncCommandClass::performAction_188  this=MultiplayerSyncCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_188(MultiplayerSyncCommandClass *this)
{
  return aExtrasynccheck; /*0x537ab5*/
}


// ==== 0x00537AC0  MultiplayerSyncCommandClass::performAction_189  this=MultiplayerSyncCommandClass  sig=csp ====
const wchar_t *__thiscall CreateTeamCommand::performAction_189(MultiplayerSyncCommandClass *this)
{
  return g_INI_Key_De; /*0x537ac5*/
}


// ==== 0x00537AD0  MultiplayerSyncCommandClass::performAction_190  this=MultiplayerSyncCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_190(MultiplayerSyncCommandClass *this)
{
  return aGameSyncLoggin; /*0x537ad5*/
}


// ==== 0x00537AE0  MultiplayerSyncCommandClass::performAction_191  this=MultiplayerSyncCommandClass  sig=csp ====
_UNKNOWN **__thiscall CreateTeamCommand::performAction_191(MultiplayerSyncCommandClass *this)
{
  return &off_827970; /*0x537ae5*/
}


// ==== 0x00537AF0  MultiplayerSyncCommandClass::performAction_192  this=MultiplayerSyncCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_192(MultiplayerSyncCommandClass *this)
{
  bool v1; // zf
  char *v2; // ecx
  char *v3; // eax

  v1 = byte_B04880 != 0; /*0x537b07*/
  byte_B04880 = byte_B04880 == 0; /*0x537b09*/
  v2 = aExtraSyncInfoO; /*0x537b10*/
  if ( v1 ) /*0x537b15*/
    v2 = aExtraSyncInfoO_0; /*0x537b17*/
  v3 = CharToWideString(v2); /*0x537b1c*/
  return MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, (CellStruct *)v3, 3, (IUnknown *)0x4046, 150, 0); /*0x537b30*/
}


// ==== 0x00537B40  ScreenCaptureCommandClass::Constructor  this=ScreenCaptureCommandClass  sig=csp ====
_DWORD *__thiscall sub_537B40(_DWORD *this)
{
  *this = &vt_ScreenCaptureCommandClass; /*0x537b42*/
  return this; /*0x537b48*/
}


// ==== 0x00537B50  ScreenCaptureCommandClass::AddRef  this=ScreenCaptureCommandClass  sig=csp ====
char *ScreenCaptureCommandClass::_vt01()
{
  return aScreencapture; /*0x537b55*/
}


// ==== 0x00537B60  ScreenCaptureCommandClass::ddtor  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 8071); /*0x537b76*/
}


// ==== 0x00537B80  ScreenCaptureCommandClass::Release  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::_vt02()
{
  return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072); /*0x537b96*/
}


// ==== 0x00537BA0  ScreenCaptureCommandClass::Execute  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::_vt04()
{
  return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073); /*0x537bb6*/
}


// ==== 0x00537BC0  ScreenCaptureCommandClass::MakeScreenshot  this=ScreenCaptureCommandClass  sig=csp ====
int __stdcall Game::MakeScreenshot(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // eax
  char v8; // bl
  struct tagPOINT Point; // [esp+4h] [ebp-198h] BYREF
  struct tagPOINT v10; // [esp+Ch] [ebp-190h] BYREF
  int v11; // [esp+14h] [ebp-188h]
  int v12; // [esp+18h] [ebp-184h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-180h] BYREF
  struct tagPOINT v14; // [esp+2Ch] [ebp-170h] BYREF
  _DWORD v15[4]; // [esp+34h] [ebp-168h] BYREF
  int v16[22]; // [esp+44h] [ebp-158h] BYREF
  _BYTE v17[12]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  _DWORD v19[22]; // [esp+B0h] [ebp-ECh] BYREF
  _BYTE v20[12]; // [esp+108h] [ebp-94h] BYREF
  int v21; // [esp+114h] [ebp-88h]
  char Buffer[128]; // [esp+11Ch] [ebp-80h] BYREF

  result = GetClientRect(g_hWnd, &Rect); /*0x537bd3*/
  if ( result ) /*0x537bdb*/
  {
    Point.x = Rect.left; /*0x537bef*/
    Point.y = Rect.top; /*0x537bff*/
    result = ClientToScreen(g_hWnd, &Point); /*0x537c03*/
    if ( result ) /*0x537c07*/
    {
      v14 = *(struct tagPOINT *)&Rect.right; /*0x537c15*/
      result = ClientToScreen(g_hWnd, &v14); /*0x537c28*/
      if ( result ) /*0x537c2c*/
      {
        v10 = Point; /*0x537c3e*/
        v12 = Rect.bottom + 1; /*0x537c4c*/
        v11 = Rect.right + 1; /*0x537c56*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537c70*/
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537c96*/
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x537ca4*/
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537cb8*/
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*(void (__thiscall **)(int, _DWORD *, int, struct tagPOINT *, _DWORD, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x537cf0*/
          MEMORY[0x88730C],
          v15,
          MEMORY[0x887308],
          &v10,
          0,
          1);
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, stru_827A48, ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(v19, Buffer); /*0x537d27*/
          v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x537d3b*/
          v19[0] = &vt_CCFileClass; /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          v19[0] = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor(v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(v16, Buffer); /*0x537d7b*/
        CompressScreenshot(v16, (int *)MEMORY[0x88730C], &MEMORY[0x885780]); /*0x537d8f*/
        v16[0] = (int)&vt_CCFileClass; /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        v16[0] = (int)&off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor(v16); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/
}


// ==== 0x00537DD0  PageUserCommandClass::PageUserCommandClass  this=PageUserCommandClass  sig=csp ====
_DWORD *__thiscall sub_537DD0(_DWORD *this)
{
  *this = &vt_PageUserCommandClass; /*0x537dd2*/
  return this; /*0x537dd8*/
}


// ==== 0x00537DE0  PageUserCommandClass::AddRef  this=PageUserCommandClass  sig=csp ====
char *PageUserCommandClass::_vt01()
{
  return MEMORY[0x827A7C]; /*0x537de5*/
}


// ==== 0x00537DF0  PageUserCommandClass::Release  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::_vt02()
{
  return GetStringCSF(MEMORY[0x827A88], 0, g_Str_File_Init_CPP, 7563); /*0x537e06*/
}


// ==== 0x00537E10  PageUserCommandClass::ddtor  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7565); /*0x537e26*/
}


// ==== 0x00537E30  PageUserCommandClass::Read  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::_vt04()
{
  return GetStringCSF(MEMORY[0x827A98], 0, g_Str_File_Init_CPP, 7567); /*0x537e46*/
}


// ==== 0x00537E50  PageUserCommandClass::Do  this=PageUserCommandClass  sig=csp ====
char __stdcall PageUserCommandClass::_vt08(int a1)
{
  char result; // al

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x537e57*/
    return UI_Add(); /*0x537e59*/
  return result; /*0x537e5e*/
}


// ==== 0x00537E70  CursorPositionCommandClass::Constructor  this=CursorPositionCommandClass  sig=csp ====
_DWORD *__thiscall sub_537E70(_DWORD *this)
{
  *this = &vt_CursorPositionCommandClass; /*0x537e72*/
  return this; /*0x537e78*/
}


// ==== 0x00537E80  CursorPositionCommandClass::performAction_193  this=CursorPositionCommandClass  sig=csp ====
char *CreateTeamCommand::sub_537E80()
{
  return MEMORY[0x827ADC]; /*0x537e85*/
}


// ==== 0x00537E90  CursorPositionCommandClass::performAction_194  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_537E90()
{
  return GetStringCSF(MEMORY[0x827AE8], 0, g_Str_File_Init_CPP, 8231); /*0x537ea6*/
}


// ==== 0x00537EB0  CursorPositionCommandClass::performAction_195  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_537EB0()
{
  return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232); /*0x537ec6*/
}


// ==== 0x00537ED0  CursorPositionCommandClass::performAction_196  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::sub_537ED0()
{
  return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233); /*0x537ee6*/
}


// ==== 0x00537EF0  CursorPositionCommandClass::performAction_197  this=CursorPositionCommandClass  sig=csp ====
bool __stdcall CreateTeamCommand::sub_537EF0(int a1)
{
  bool result; // al

  result = MEMORY[0xA8F7D8] == 0; /*0x537ef7*/
  MEMORY[0xA8F7D8] = MEMORY[0xA8F7D8] == 0; /*0x537efa*/
  return result; /*0x537eff*/
}


// ==== 0x00537F10  DeleteCommandClass::Constructor  this=DeleteCommandClass  sig=csp ====
_DWORD *__thiscall sub_537F10(_DWORD *this)
{
  *this = &vt_DeleteCommandClass; /*0x537f12*/
  return this; /*0x537f18*/
}


// ==== 0x00537F20  DeleteCommandClass::AddRef  this=DeleteCommandClass  sig=csp ====
char *DeleteCommandClass::_vt01()
{
  return aDelete; /*0x537f25*/
}


// ==== 0x00537F30  DeleteCommandClass::Release  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::_vt02()
{
  return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559); /*0x537f46*/
}


// ==== 0x00537F50  DeleteCommandClass::ddtor  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6561); /*0x537f66*/
}


// ==== 0x00537F70  DeleteCommandClass::Read  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::_vt04()
{
  return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563); /*0x537f86*/
}


// ==== 0x00537F90  DeleteCommandClass::Undo  this=DeleteCommandClass  sig=csp ====
// attributes: thunk
char __stdcall DeleteCommandClass::_vt08(int a1)
{
  return UI_Delete(); /*0x537f95*/
}


// ==== 0x00537FA0  MultiplayerDebugCommandClass::performAction_198  this=MultiplayerDebugCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_198(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x537fa9*/
  if ( (a2 & 1) != 0 ) /*0x537faf*/
    __3_YAXPAX_Z(this); /*0x537fb2*/
  return this; /*0x537fbc*/
}


// ==== 0x00537FC0  MultiplayerSyncCommandClass::performAction_199  this=MultiplayerSyncCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_199(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x537fc9*/
  if ( (a2 & 1) != 0 ) /*0x537fcf*/
    __3_YAXPAX_Z(this); /*0x537fd2*/
  return this; /*0x537fdc*/
}


// ==== 0x00537FE0  FollowCommandClass::performAction_200  this=FollowCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_200(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x537fe9*/
  if ( (a2 & 1) != 0 ) /*0x537fef*/
    __3_YAXPAX_Z(this); /*0x537ff2*/
  return this; /*0x537ffc*/
}


// ==== 0x00538000  View1CommandClass::performAction_201  this=View1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_201(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538009*/
  if ( (a2 & 1) != 0 ) /*0x53800f*/
    __3_YAXPAX_Z(this); /*0x538012*/
  return this; /*0x53801c*/
}


// ==== 0x00538020  View2CommandClass::performAction_202  this=View2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_202(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538029*/
  if ( (a2 & 1) != 0 ) /*0x53802f*/
    __3_YAXPAX_Z(this); /*0x538032*/
  return this; /*0x53803c*/
}


// ==== 0x00538040  View3CommandClass::performAction_203  this=View3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_203(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538049*/
  if ( (a2 & 1) != 0 ) /*0x53804f*/
    __3_YAXPAX_Z(this); /*0x538052*/
  return this; /*0x53805c*/
}


// ==== 0x00538060  View4CommandClass::performAction_204  this=View4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_204(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538069*/
  if ( (a2 & 1) != 0 ) /*0x53806f*/
    __3_YAXPAX_Z(this); /*0x538072*/
  return this; /*0x53807c*/
}


// ==== 0x00538080  SetView1CommandClass::performAction_205  this=SetView1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_205(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538089*/
  if ( (a2 & 1) != 0 ) /*0x53808f*/
    __3_YAXPAX_Z(this); /*0x538092*/
  return this; /*0x53809c*/
}


// ==== 0x005380A0  SetView2CommandClass::performAction_206  this=SetView2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_206(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x5380a9*/
  if ( (a2 & 1) != 0 ) /*0x5380af*/
    __3_YAXPAX_Z(this); /*0x5380b2*/
  return this; /*0x5380bc*/
}


// ==== 0x005380C0  SetView3CommandClass::performAction_207  this=SetView3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_207(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x5380c9*/
  if ( (a2 & 1) != 0 ) /*0x5380cf*/
    __3_YAXPAX_Z(this); /*0x5380d2*/
  return this; /*0x5380dc*/
}


// ==== 0x005380E0  SetView4CommandClass::performAction_208  this=SetView4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_208(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x5380e9*/
  if ( (a2 & 1) != 0 ) /*0x5380ef*/
    __3_YAXPAX_Z(this); /*0x5380f2*/
  return this; /*0x5380fc*/
}


// ==== 0x00538100  OptionsCommandClass::performAction_209  this=OptionsCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_209(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538109*/
  if ( (a2 & 1) != 0 ) /*0x53810f*/
    __3_YAXPAX_Z(this); /*0x538112*/
  return this; /*0x53811c*/
}


// ==== 0x00538120  SidebarUpCommandClass::performAction_210  this=SidebarUpCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_210(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538129*/
  if ( (a2 & 1) != 0 ) /*0x53812f*/
    __3_YAXPAX_Z(this); /*0x538132*/
  return this; /*0x53813c*/
}


// ==== 0x00538140  SidebarDownCommandClass::performAction_211  this=SidebarDownCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_211(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538149*/
  if ( (a2 & 1) != 0 ) /*0x53814f*/
    __3_YAXPAX_Z(this); /*0x538152*/
  return this; /*0x53815c*/
}


// ==== 0x00538160  CenterREventCommandClass::performAction_212  this=CenterREventCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_212(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538169*/
  if ( (a2 & 1) != 0 ) /*0x53816f*/
    __3_YAXPAX_Z(this); /*0x538172*/
  return this; /*0x53817c*/
}


// ==== 0x00538180  BeaconPlacementCommandClass::performAction_213  this=BeaconPlacementCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_213(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x538189*/
  if ( (a2 & 1) != 0 ) /*0x53818f*/
    __3_YAXPAX_Z(this); /*0x538192*/
  return this; /*0x53819c*/
}


// ==== 0x005381A0  ToggleSellCommandClass::performAction_214  this=ToggleSellCommandClass  sig=csp ====
ToggleSellCommandClass *__thiscall CreateTeamCommand::performAction_214(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_CommandClass; /*0x5381a9*/
  if ( (a2 & 1) != 0 ) /*0x5381af*/
    __3_YAXPAX_Z(this); /*0x5381b2*/
  return (ToggleSellCommandClass *)this; /*0x5381bc*/
}


// ==== 0x005381C0  ToggleRepairCommandClass::performAction_215  this=ToggleRepairCommandClass  sig=csp ====
ToggleRepairCommandClass *__thiscall CreateTeamCommand::performAction_215(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5381c9*/
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(Block); /*0x5381d2*/
  return (ToggleRepairCommandClass *)Block; /*0x5381dc*/
}


// ==== 0x005381E0  AllianceCommandClass::performAction_216  this=AllianceCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_216(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(Block); /*0x5381f2*/
  return Block; /*0x5381fc*/
}


// ==== 0x00538200  CenterBaseCommandClass::performAction_217  this=CenterBaseCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_217(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(Block); /*0x538212*/
  return Block; /*0x53821c*/
}


// ==== 0x00538220  CenterViewCommandClass::performAction_218  this=CenterViewCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_218(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(Block); /*0x538232*/
  return Block; /*0x53823c*/
}


// ==== 0x00538240  ScatterCommandClass::performAction_219  this=ScatterCommandClass  sig=csp ====
ScatterCommandClass *__thiscall CreateTeamCommand::performAction_219(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538249*/
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(Block); /*0x538252*/
  return (ScatterCommandClass *)Block; /*0x53825c*/
}


// ==== 0x00538260  GuardCommandClass::performAction_220  this=GuardCommandClass  sig=csp ====
GuardCommandClass *__thiscall CreateTeamCommand::performAction_220(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538269*/
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(Block); /*0x538272*/
  return (GuardCommandClass *)Block; /*0x53827c*/
}


// ==== 0x00538280  StopCommandClass::performAction_221  this=StopCommandClass  sig=csp ====
StopCommandClass *__thiscall CreateTeamCommand::performAction_221(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538289*/
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(Block); /*0x538292*/
  return (StopCommandClass *)Block; /*0x53829c*/
}


// ==== 0x005382A0  AllToCheerCommandClass::performAction_222  this=AllToCheerCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_222(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(Block); /*0x5382b2*/
  return Block; /*0x5382bc*/
}


// ==== 0x005382C0  DeployCommandClass::performAction_223  this=DeployCommandClass  sig=csp ====
DeployCommandClass *__thiscall CreateTeamCommand::performAction_223(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5382c9*/
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(Block); /*0x5382d2*/
  return (DeployCommandClass *)Block; /*0x5382dc*/
}


// ==== 0x005382E0  PrevObjectCommandClass::performAction_224  this=PrevObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_224(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(Block); /*0x5382f2*/
  return Block; /*0x5382fc*/
}


// ==== 0x00538300  NextObjectCommandClass::performAction_225  this=NextObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_225(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(Block); /*0x538312*/
  return Block; /*0x53831c*/
}


// ==== 0x00538320  PlanningModeCommandClass::performAction_226  this=PlanningModeCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_226(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(Block); /*0x538332*/
  return Block; /*0x53833c*/
}


// ==== 0x00538340  CombatantSelectCommandClass::performAction_227  this=CombatantSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_227(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(Block); /*0x538352*/
  return Block; /*0x53835c*/
}


// ==== 0x00538360  TypeSelectCommandClass::performAction_228  this=TypeSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_228(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(Block); /*0x538372*/
  return Block; /*0x53837c*/
}


// ==== 0x00538380  HealthNavCommandClass::performAction_229  this=HealthNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_229(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(Block); /*0x538392*/
  return Block; /*0x53839c*/
}


// ==== 0x005383A0  VeterancyNavCommandClass::performAction_230  this=VeterancyNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_230(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(Block); /*0x5383b2*/
  return Block; /*0x5383bc*/
}


// ==== 0x005383C0  SetStructureTabCommandClass::performAction_231  this=SetStructureTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_231(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(Block); /*0x5383d2*/
  return Block; /*0x5383dc*/
}


// ==== 0x005383E0  SetDefenseTabCommandClass::performAction_232  this=SetDefenseTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_232(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(Block); /*0x5383f2*/
  return Block; /*0x5383fc*/
}


// ==== 0x00538400  SetUnitTabCommandClass::performAction_233  this=SetUnitTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_233(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(Block); /*0x538412*/
  return Block; /*0x53841c*/
}


// ==== 0x00538420  SetInfantryTabCommandClass::performAction_234  this=SetInfantryTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_234(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(Block); /*0x538432*/
  return Block; /*0x53843c*/
}


// ==== 0x00538440  ScreenCaptureCommandClass::performAction_235  this=ScreenCaptureCommandClass  sig=csp ====
ScreenCaptureCommandClass *__thiscall CreateTeamCommand::performAction_235(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538449*/
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(Block); /*0x538452*/
  return (ScreenCaptureCommandClass *)Block; /*0x53845c*/
}


// ==== 0x00538460  PageUserCommandClass::performAction_236  this=PageUserCommandClass  sig=csp ====
PageUserCommandClass *__thiscall CreateTeamCommand::performAction_236(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538469*/
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(Block); /*0x538472*/
  return (PageUserCommandClass *)Block; /*0x53847c*/
}


// ==== 0x00538480  CursorPositionCommandClass::performAction_237  this=CursorPositionCommandClass  sig=csp ====
CursorPositionCommandClass *__thiscall CreateTeamCommand::performAction_237(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x538489*/
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(Block); /*0x538492*/
  return (CursorPositionCommandClass *)Block; /*0x53849c*/
}


// ==== 0x005384A0  DeleteCommandClass::performAction_238  this=DeleteCommandClass  sig=csp ====
DeleteCommandClass *__thiscall CreateTeamCommand::performAction_238(_DWORD *Block, char a2)
{
  *Block = &vt_CommandClass; /*0x5384a9*/
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(Block); /*0x5384b2*/
  return (DeleteCommandClass *)Block; /*0x5384bc*/
}


// ==== 0x005384C0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_239  this=DynamicVector  sig=csp ====
void __thiscall CreateTeamCommand::sub_5384C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5384c6*/
  *(_DWORD *)(this + 16) = 0; /*0x5384c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5384d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5384d6*/
    *(_DWORD *)(this + 4) = 0; /*0x5384de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5384e1*/
  *(_DWORD *)(this + 8) = 0; /*0x5384e4*/
}


// ==== 0x005384F0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_240  this=DynamicVector  sig=csp ====
unsigned int __thiscall CreateTeamCommand::sub_5384F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5384f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x538505*/
  else
    return 0; /*0x5384f7*/
}


// ==== 0x00538510  _VectorClass_PAVCCINIClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CCINIClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x53851a*/
}


// ==== 0x00538520  _VectorClass_PAVCCINIClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x538522*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x53852d*/
  {
    v3 = 0; /*0x53852f*/
    if ( v2 <= 0 ) /*0x538533*/
      return 1; /*0x538553*/
    v4 = (_DWORD *)this->Items; /*0x538535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53853b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x538544*/
    {
      ++v3; /*0x538546*/
      ++v4; /*0x538547*/
      if ( v3 >= v2 ) /*0x53854c*/
        return 1; /*0x53854c*/
    }
  }
  return 0; /*0x53854e*/
}


// ==== 0x00538560  _VectorClass_PAVCCINIClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x53856c*/
  {
    this->IsInitialized = 0; /*0x538576*/
    if ( a3 ) /*0x53857c*/
      v4 = a3; /*0x538592*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53858e*/
    this->IsInitialized = 1; /*0x538596*/
    if ( v4 ) /*0x53859a*/
    {
      if ( this->Items ) /*0x5385a5*/
      {
        v6 = this->Capacity; /*0x5385ac*/
        if ( a2 < v6 ) /*0x5385b1*/
          v6 = a2; /*0x5385b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5385b9*/
          ++i; /*0x5385be*/
        if ( this->IsAllocated ) /*0x5385cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5385d6*/
          this->Items = 0; /*0x5385de*/
        }
      }
      this->Items = v4; /*0x5385e7*/
      this->Capacity = a2; /*0x5385ef*/
      this->IsAllocated = a3 == 0; /*0x5385f2*/
      return 1; /*0x5385f8*/
    }
    else
    {
      return 0; /*0x53859f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x538602*/
    return 1; /*0x538608*/
  }
}


// ==== 0x00538610  _VectorClass_PAVCCINIClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CCINIClass::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x53861d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x538623*/
    *(_DWORD *)(this + 4) = 0; /*0x53862b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53862e*/
  *(_DWORD *)(this + 8) = 0; /*0x538631*/
}


// ==== 0x00538640  _VectorClass_PAVCCINIClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CCINIClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x538640*/
    return 0; /*0x538648*/
  v3 = *(_DWORD *)(this + 8); /*0x53864e*/
  result = 0; /*0x538651*/
  if ( v3 <= 0 ) /*0x538655*/
    return -1; /*0x53866c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x53865b*/
  {
    if ( ++result >= v3 ) /*0x53866a*/
      return -1; /*0x53866a*/
  }
  return result; /*0x53864a*/
}


// ==== 0x00538680  _VectorClass_PAVCCINIClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CCINIClass::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x538680*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x538695*/
  else
    return 0; /*0x538687*/
}


// ==== 0x005386A0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_241  this=DynamicVector  sig=csp ====
char __thiscall CreateTeamCommand::sub_5386A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5386ac*/
  {
    this->IsInitialized = 0; /*0x5386b2*/
    if ( a3 ) /*0x5386b8*/
      v4 = a3; /*0x5386ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5386ca*/
    this->IsInitialized = 1; /*0x5386d2*/
    if ( !v4 ) /*0x5386d6*/
      return 0; /*0x53874a*/
    if ( this->Items ) /*0x5386d8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5386df*/
      if ( a2 < v5 ) /*0x5386e4*/
        v5 = a2; /*0x5386e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5386ec*/
        ++i; /*0x5386f1*/
      if ( this->IsAllocated ) /*0x5386fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x538709*/
        this->Items = 0; /*0x538711*/
      }
    }
    this->Items = v4; /*0x53871a*/
    this->DynamicVector_field_0x8 = a2; /*0x538722*/
    this->IsAllocated = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53872e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x538731*/
  if ( v7 < this->Items ) /*0x538739*/
    this->Items = v7; /*0x53873b*/
  return 1; /*0x53873e*/
}


// ==== 0x00538750  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_242  this=DynamicVector  sig=csp ====
int __thiscall CreateTeamCommand::sub_538750(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x538750*/
  result = 0; /*0x538753*/
  if ( v2 <= 0 ) /*0x538758*/
    return -1; /*0x53876f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x53875e*/
  {
    if ( ++result >= v2 ) /*0x53876d*/
      return -1; /*0x53876d*/
  }
  return result; /*0x538772*/
}


// ==== 0x00538780  DynamicVector::Add_Alt2  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::Add_Alt2(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->DynamicVector_field_0x8; /*0x538783*/
  if ( this->DynamicVector_field_0x10 >= v3 ) /*0x53878b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = this->CapacityIncrement; /*0x538798*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5387a8*/
      return 0; /*0x5387af*/
  }
  v6 = this->DynamicVector_field_0x10; /*0x5387b5*/
  v7 = this->Items; /*0x5387b8*/
  this->DynamicVector_field_0x10 = v6 + 1; /*0x5387be*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x5387c8*/
  return 1; /*0x5387b1*/
}


// ==== 0x005387D0  SortedArray::Append  this=SortedArray  sig=csp ====
char __thiscall SortedArray::Append(int this, DynamicVector *aP1, _DWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x5387da*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x5387e0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *(_DWORD *)aP1->__pad_0; /*0x53885b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *a2; /*0x538875*/
    v11 = *(_DWORD *)(this + 4) + 1; /*0x53887c*/
    *(_BYTE *)(this + 12) = 0; /*0x53887d*/
    *(_DWORD *)(this + 4) = v11; /*0x538881*/
    return 1; /*0x53888a*/
  }
  if ( v4 ) /*0x5387e4*/
  {
    v5 = *(_DWORD *)(this + 8); /*0x5387ed*/
    if ( v4 < 0 ) /*0x5387f1*/
      return 0; /*0x5387f1*/
  }
  else
  {
    v5 = 10; /*0x5387e6*/
  }
  v6 = __2_YAPAXI_Z(8 * (v4 + v5)); /*0x538807*/
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)(v8 + v6 + 4) = v9[1] ) /*0x53881c*/
    {
      v8 = 8 * i; /*0x538820*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x538829*/
      *(_DWORD *)(v8 + v6) = *v9; /*0x53882e*/
    }
    __3_YAXPAX_Z(*(void **)this); /*0x538842*/
    v10 = *(_DWORD *)(this + 8); /*0x538847*/
    *(_DWORD *)this = v6; /*0x53884f*/
    *(_DWORD *)(this + 8) = v5 + v10; /*0x538851*/
    *(_DWORD *)(this + 16) = 0; /*0x538854*/
    goto LABEL_9; /*0x538854*/
  }
  return 0; /*0x538864*/
}


// ==== 0x005388A0  SortedArray::RemoveByKey  this=SortedArray  sig=csp ====
char __thiscall SortedArray::RemoveByKey(int this, DynamicVector *aP1)
{
  size_t v3; // eax
  int v4; // edi
  _DWORD *v5; // ebp
  int v6; // edx
  char *v7; // ecx
  int v9; // ecx
  int i; // ecx
  int v11; // edi
  int v12; // eax
  ObjectClass *v13; // edi
  int v14; // eax
  int v15; // [esp+10h] [ebp-8h]

  v3 = *(_DWORD *)(this + 4); /*0x5388a9*/
  if ( !v3 ) /*0x5388ae*/
    return 0; /*0x5388ae*/
  if ( !*(_BYTE *)(this + 12) ) /*0x5388b0*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5388c2*/
    *(_DWORD *)(this + 16) = 0; /*0x5388ca*/
    *(_BYTE *)(this + 12) = 1; /*0x5388d1*/
  }
  v4 = *(_DWORD *)(this + 4); /*0x5388d9*/
  v5 = *(_DWORD **)this; /*0x5388e0*/
  v15 = *(_DWORD *)aP1->__pad_0; /*0x5388e4*/
  if ( v4 <= 0 ) /*0x5388e8*/
    return 0; /*0x5388e8*/
  while ( 1 ) /*0x5388f1*/
  {
    v6 = v5[2 * (v4 / 2)]; /*0x5388f1*/
    v7 = (char *)&v5[2 * (v4 / 2)]; /*0x5388f5*/
    if ( v15 >= v6 ) /*0x5388fd*/
      break; /*0x5388fd*/
    v4 /= 2; /*0x5388ff*/
LABEL_9:
    if ( v4 <= 0 ) /*0x538915*/
      return 0; /*0x538915*/
  }
  if ( v6 != v15 ) /*0x538907*/
  {
    v5 = v7 + 8; /*0x538909*/
    v4 += -1 - v4 / 2; /*0x538911*/
    goto LABEL_9; /*0x538911*/
  }
  if ( !v7 ) /*0x538927*/
    return 0; /*0x538927*/
  v9 = (int)&v7[-*(_DWORD *)this] >> 3; /*0x53892b*/
  if ( v9 == -1 ) /*0x538931*/
    return 0; /*0x538920*/
  for ( i = v9 + 1; i < *(_DWORD *)(this + 4); *(_DWORD *)(v12 - 4) = *(_DWORD *)(v12 + 4) ) /*0x538939*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)this + 8 * i); /*0x53893d*/
    v12 = *(_DWORD *)this + 8 * i++; /*0x538940*/
    *(_DWORD *)(v12 - 8) = v11; /*0x538944*/
  }
  v13 = *(ObjectClass **)this; /*0x538957*/
  v14 = *(_DWORD *)(this + 4) - 1; /*0x538959*/
  *(_DWORD *)(this + 4) = v14; /*0x53895c*/
  *(_DWORD *)&v13->__pad_0[8 * v14] = 0; /*0x53895f*/
  *(_DWORD *)&v13->__pad_0[8 * v14 + 4] = 0; /*0x538962*/
  *(_DWORD *)(this + 16) = 0; /*0x538966*/
  return 1; /*0x538917*/
}


// ==== 0x00538980  SortedArray::FindPair  this=SortedArray  sig=csp ====
char __thiscall SortedArray_FindPair(int this, int *a2)
{
  size_t v3; // ecx
  _DWORD *v4; // eax
  int v6; // ecx
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // esi
  char *v10; // edx

  v3 = *(_DWORD *)(this + 4); /*0x538985*/
  if ( !v3 ) /*0x53898b*/
    return 0; /*0x53898b*/
  v4 = *(_DWORD **)(this + 16); /*0x53898d*/
  if ( v4 && *v4 == *a2 ) /*0x53899e*/
    return 1; /*0x5389a6*/
  if ( !*(_BYTE *)(this + 12) ) /*0x5389a9*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5389bb*/
    *(_DWORD *)(this + 16) = 0; /*0x5389c3*/
    *(_BYTE *)(this + 12) = 1; /*0x5389ca*/
  }
  v6 = *(_DWORD *)(this + 4); /*0x5389ce*/
  v7 = *a2; /*0x5389d1*/
  v8 = *(_DWORD **)this; /*0x5389d3*/
  if ( v6 <= 0 ) /*0x5389d7*/
    return 0; /*0x5389d7*/
  while ( 1 ) /*0x5389e0*/
  {
    v9 = v8[2 * (v6 / 2)]; /*0x5389e0*/
    v10 = (char *)&v8[2 * (v6 / 2)]; /*0x5389e3*/
    if ( v9 <= v7 ) /*0x5389e8*/
      break; /*0x5389e8*/
    v6 /= 2; /*0x5389ea*/
LABEL_12:
    if ( v6 <= 0 ) /*0x5389fc*/
      return 0; /*0x5389fc*/
  }
  if ( v9 != v7 ) /*0x5389ee*/
  {
    v8 = v10 + 8; /*0x5389f0*/
    v6 += -1 - v6 / 2; /*0x5389f8*/
    goto LABEL_12; /*0x5389f8*/
  }
  if ( !v10 ) /*0x538a09*/
    return 0; /*0x538a04*/
  *(_DWORD *)(this + 16) = v10; /*0x538a0d*/
  return 1; /*0x5389a0*/
}


// ==== 0x00538A20  CreateTeamCommand::performAction_243  this=CreateTeamCommand  sig=csp ====
rc_ptr_base *__thiscall CreateTeamCommand::performAction_243(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x538a2d*/
    v4 = Block - 1; /*0x538a31*/
    v5 = Block + 2 * v3; /*0x538a34*/
    v6 = v3 - 1; /*0x538a37*/
    if ( v6 >= 0 ) /*0x538a38*/
    {
      v7 = v6 + 1; /*0x538a3b*/
      do /*0x538a4f*/
      {
        v5 -= 2; /*0x538a3e*/
        v5->vfptr = &vt_rc_ptr_WDTTerritory; /*0x538a43*/
        ComPtr::Release(v5); /*0x538a49*/
        --v7; /*0x538a4e*/
      }
      while ( v7 ); /*0x538a4f*/
    }
    if ( (a2 & 1) != 0 ) /*0x538a55*/
      __3_YAXPAX_Z(v4); /*0x538a58*/
    return v4; /*0x538a60*/
  }
  else
  {
    Block->vfptr = &vt_rc_ptr_WDTTerritory; /*0x538a6a*/
    ComPtr::Release(Block); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(Block); /*0x538a7b*/
    return Block; /*0x538a83*/
  }
}


// ==== 0x00538A90  _VectorClass_PAVCCINIClass::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_CCINIClass::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538a93*/
  *Block = &vt_VectorClass_CCINIClass; /*0x538a96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x538aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x538aa8*/
    *(Block + 1) = 0; /*0x538ab0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x538abb*/
  *(Block + 2) = 0; /*0x538ac1*/
  if ( (a2 & 1) != 0 ) /*0x538ac8*/
    __3_YAXPAX_Z(Block); /*0x538acb*/
  return (VectorClass *)Block; /*0x538ad5*/
}


// ==== 0x00538AE0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_244  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CreateTeamCommand::performAction_244(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538ae3*/
  *Block = &vt_VectorClass_CCINIClass; /*0x538ae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(Block + 1) = 0; /*0x538b00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x538b0b*/
  *(Block + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(Block); /*0x538b1b*/
  return (DynamicVector *)Block; /*0x538b25*/
}


// ==== 0x00538B30  RulesClass::InitINIChain  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_538B30(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x538b3b*/
  this->Capacity = a2; /*0x538b3e*/
  this->q030 = 1; /*0x538b41*/
  this->__pad_034 = 0; /*0x538b45*/
  *this = &vt_VectorClass_CCINIClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->Items = a3; /*0x538b58*/
      return this; /*0x538b5e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    this->__pad_034 = 1; /*0x538b70*/
  }
  return this; /*0x538b5d*/
}


// ==== 0x00538B80  KeyboardConfig::ReleaseBuffer  this=KeyboardConfig  sig=csp ====
char __thiscall sub_538B80(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x538b8c*/
    return 0; /*0x538b8c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x538ba0*/
  if ( !v3 ) /*0x538ba7*/
    return 0; /*0x538c00*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x538bb5*/
  {
    v5 = 8 * i; /*0x538bb9*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x538bc2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x538bc7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x538bdb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x538be6*/
  *(_DWORD *)this = v3; /*0x538be8*/
  *(_DWORD *)(this + 8) = v7; /*0x538bea*/
  *(_DWORD *)(this + 16) = 0; /*0x538bed*/
  return 1; /*0x538bf4*/
}


// ==== 0x00538C10  sub_538C10  this=-  sig=ida-proto ====
int sub_538C10()
{
  return InitArrayWithValue(MEMORY[0xA8F7F8], 0, 64); /*0x538c1e*/
}


// ==== 0x00538C20  sub_538C20  this=-  sig=ida-proto ====
int sub_538C20()
{
  MEMORY[0xA8F908] = 0; /*0x538c22*/
  MEMORY[0xA8F90C] = 0; /*0x538c27*/
  MEMORY[0xA8F910] = 0; /*0x538c2c*/
  MEMORY[0xA8F914] = 0; /*0x538c31*/
  return 0; /*0x538c36*/
}


// ==== 0x00538C40  ObjectClass::method_538C40  this=ObjectClass  sig=csp ====
int __thiscall sub_538C40(char *Source)
{
  int v2[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v3[12]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(v2, Source); /*0x538c48*/
  if ( CCFileClass::Open(v2, 0) ) /*0x538c53*/
  {
    FileClass::Load(v2, 1); /*0x538c62*/
    CCFileClass::Read(v2, MEMORY[0xA8F91C], 0x10000); /*0x538c75*/
    CCFileClass::Reset(v2); /*0x538c7e*/
    unk_A9F91C = 0; /*0x538c83*/
  }
  v2[0] = (int)&vt_CCFileClass; /*0x538c8e*/
  v4 = 0; /*0x538c96*/
  Vector::Clear((int)v3); /*0x538c9e*/
  v2[0] = (int)&off_7E1668; /*0x538ca7*/
  return BufferIOFileClass::Dtor(v2); /*0x538cb4*/
}


// ==== 0x00538CC0  ObjectClass::method_538CC0  this=ObjectClass  sig=csp ====
int __thiscall sub_538CC0(char *Source)
{
  int v2[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v3[12]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(v2, Source); /*0x538cc8*/
  if ( !CCFileClass::Open(v2, 0) ) /*0x538cd3*/
  {
    FileClass::Load(v2, 2); /*0x538ce2*/
    FileClass::Write(v2, MEMORY[0xA8F91C], 0x10000u); /*0x538cf5*/
    CCFileClass::Reset(v2); /*0x538cfe*/
  }
  v2[0] = (int)&vt_CCFileClass; /*0x538d07*/
  v4 = 0; /*0x538d0f*/
  Vector::Clear((int)v3); /*0x538d17*/
  v2[0] = (int)&off_7E1668; /*0x538d20*/
  return BufferIOFileClass::Dtor(v2); /*0x538d2d*/
}


// ==== 0x00538D40  ObjectClass::method_538D40  this=ObjectClass  sig=csp ====
int sub_538D40()
{
  unsigned __int8 *v0; // eax
  unsigned __int8 *v1; // edi
  int v2; // ecx
  unsigned __int8 *v3; // eax
  int v4; // ecx
  int v5; // eax
  unsigned __int8 *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  unsigned __int8 *v12; // ecx
  int v13; // edx
  int v14; // esi
  unsigned __int8 *v15; // ecx
  int v16; // eax
  char *v17; // ecx
  int result; // eax
  int v19; // [esp+10h] [ebp-2Ch]
  int v20; // [esp+14h] [ebp-28h]
  char v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h]
  char *v23; // [esp+20h] [ebp-1Ch]
  unsigned __int8 *v24; // [esp+24h] [ebp-18h]
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  int v27; // [esp+30h] [ebp-Ch]
  int v28; // [esp+34h] [ebp-8h]
  int v29; // [esp+38h] [ebp-4h]

  v0 = (unsigned __int8 *)MEMORY[0xA8F918]; /*0x538d43*/
  v23 = MEMORY[0xA8F91C]; /*0x538d4c*/
  while ( 1 ) /*0x538d60*/
  {
    v1 = (unsigned __int8 *)MEMORY[0xA8F918]; /*0x538d60*/
    v2 = *v0; /*0x538d66*/
    v3 = v0 + 1; /*0x538d68*/
    v25 = v2; /*0x538d69*/
    v4 = *v3++; /*0x538d6f*/
    v26 = v4; /*0x538d72*/
    v27 = *v3; /*0x538d7b*/
    v24 = v3 + 1; /*0x538d7f*/
    v22 = 0; /*0x538d83*/
    do /*0x538e42*/
    {
      v5 = *v1; /*0x538d91*/
      v6 = v1 + 1; /*0x538d93*/
      v7 = v5; /*0x538d94*/
      v8 = *v6++; /*0x538d98*/
      v9 = v27 + *v6; /*0x538dab*/
      v1 = v6 + 1; /*0x538dad*/
      v10 = (v25 + v7) >> 1; /*0x538dae*/
      v11 = (v26 + v8) >> 1; /*0x538db0*/
      v29 = v9 >> 1; /*0x538db4*/
      v12 = (unsigned __int8 *)MEMORY[0xA8F918]; /*0x538db8*/
      v28 = v11; /*0x538dbe*/
      v21 = 0; /*0x538dc2*/
      v20 = 500000; /*0x538dc6*/
      v19 = 0; /*0x538dce*/
      while ( 1 ) /*0x538de1*/
      {
        v13 = *v12 - v10; /*0x538de1*/
        v14 = v12[1] - v11; /*0x538dea*/
        v15 = v12 + 2; /*0x538dec*/
        v16 = v13 * v13 + v14 * v14 + (*v15 - v29) * (*v15 - v29); /*0x538e06*/
        v12 = v15 + 1; /*0x538e08*/
        if ( v16 < v20 ) /*0x538e0b*/
        {
          v20 = v16; /*0x538e11*/
          v21 = v19; /*0x538e15*/
        }
        if ( ++v19 >= 256 ) /*0x538e27*/
          break; /*0x538e27*/
        v11 = v28; /*0x538dd4*/
      }
      v17 = v23; /*0x538e29*/
      v23[v22] = v21; /*0x538e35*/
      result = v22 + 1; /*0x538e38*/
      v22 = result; /*0x538e3e*/
    }
    while ( result < 256 ); /*0x538e42*/
    v23 += 256; /*0x538e54*/
    if ( (int)(v17 + 256) >= (int)&unk_A9F91C ) /*0x538e58*/
      break; /*0x538e58*/
    v0 = v24; /*0x538d58*/
  }
  unk_A9F91C = 0; /*0x538e61*/
  return result; /*0x538e5e*/
}


// ==== 0x00538E70  ObjectClass::method_538E70  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_538E70(void *this, double a2)
{
  int v3; // edi
  unsigned int v4; // esi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  __int16 result; // ax
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v11[4]; // [esp+10h] [ebp-14h] BYREF
  __int16 v12; // [esp+14h] [ebp-10h] BYREF
  unsigned __int8 v13; // [esp+16h] [ebp-Eh]
  int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Eh] [ebp-6h]

  v3 = 0; /*0x538e78*/
  do
  {
    v4 = (unsigned int)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
    v5 = ComputeColorSaturation(v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(_BYTE *)(v5 + 2); /*0x538ea1*/
    v12 = *(_WORD *)v5; /*0x538ea4*/
    LOBYTE(v15) = v6; /*0x538ea9*/
    v13 = v6; /*0x538eb7*/
    v14 = v6; /*0x538ebb*/
    v7 = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    v13 = v7 <= 0 ? 0 : v7;
    v8 = Color::ConvertToRGB((unsigned __int8 *)&v12, (int)v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(_WORD *)v8; /*0x538efb*/
    LOBYTE(v8) = *(_BYTE *)(v8 + 2); /*0x538efe*/
    *(_WORD *)v4 = result; /*0x538f01*/
    *(_BYTE *)(v4 + 2) = v8; /*0x538f04*/
  }
  while ( v3 < 256 );
  return result; /*0x538f0d*/
}


// ==== 0x00538F20  sub_538F20  this=-  sig=ida-proto ====
char __fastcall sub_538F20(int a1, int a2, char *Source)
{
  int *v5; // ebx
  char *v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char result; // al
  unsigned int v13; // [esp-4h] [ebp-88h]
  unsigned int v14; // [esp-4h] [ebp-88h]
  int v15; // [esp-4h] [ebp-88h]
  char v16; // [esp+12h] [ebp-72h]
  char v17; // [esp+13h] [ebp-71h]
  int v19[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v20[12]; // [esp+70h] [ebp-14h] BYREF
  int v21; // [esp+7Ch] [ebp-8h]

  v16 = 0; /*0x538f3d*/
  v17 = 0; /*0x538f42*/
  if ( unk_A9F91C ) /*0x538f4c*/
  {
    if ( Source ) /*0x538f50*/
    {
      CCFileClass::Construct(v19, Source); /*0x538f57*/
      if ( CCFileClass::Open(v19, 0) ) /*0x538f62*/
      {
        FileClass::Load(v19, 1); /*0x538f71*/
        CCFileClass::Read(v19, MEMORY[0xA8F91C], 0x10000); /*0x538f84*/
        CCFileClass::Reset(v19); /*0x538f8d*/
        unk_A9F91C = 0; /*0x538f92*/
      }
      v19[0] = (int)&vt_CCFileClass; /*0x538f9d*/
      v21 = 0; /*0x538fa5*/
      Vector::Clear((int)v20); /*0x538fad*/
      v19[0] = (int)&off_7E1668; /*0x538fb6*/
      BufferIOFileClass::Dtor(v19); /*0x538fba*/
    }
    if ( unk_A9F91C ) /*0x538fc6*/
      sub_538D40(); /*0x538fc8*/
  }
  if ( Source ) /*0x538fcf*/
  {
    CCFileClass::Construct(v19, Source); /*0x538fd6*/
    if ( !CCFileClass::Open(v19, 0) ) /*0x538fe1*/
    {
      FileClass::Load(v19, 2); /*0x538ff0*/
      FileClass::Write(v19, MEMORY[0xA8F91C], 0x10000u); /*0x539003*/
      CCFileClass::Reset(v19); /*0x53900c*/
    }
    v19[0] = (int)&vt_CCFileClass; /*0x539015*/
    v21 = 0; /*0x53901d*/
    Vector::Clear((int)v20); /*0x539025*/
    v19[0] = (int)&off_7E1668; /*0x53902e*/
    BufferIOFileClass::Dtor(v19); /*0x539032*/
  }
  DDraw::WaitForIdle(); /*0x539037*/
  v5 = (int *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, 0, 0); /*0x539049*/
  if ( v5 ) /*0x53904d*/
    v16 = 1; /*0x53904f*/
  v6 = (char *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x539062*/
  if ( v6 ) /*0x539066*/
  {
    v17 = 1; /*0x53906c*/
    if ( !v16 ) /*0x539073*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390fa*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x539080*/
    v8 = 2 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x53908d*/
    if ( unk_A9F920 ) /*0x539092*/
    {
      if ( unk_A9F920 == 1 ) /*0x539095*/
      {
        v14 = v8; /*0x5390b2*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390b6*/
        sub_7E00A6(v5, v6, v10, v7, v14); /*0x5390bf*/
      }
      else if ( unk_A9F920 == 2 ) /*0x539098*/
      {
        v13 = v8; /*0x53909a*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390a0*/
        sub_7E01FB(v5, v6, v9, v7, v13); /*0x5390a9*/
      }
    }
    else
    {
      v15 = v8; /*0x5390c6*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390cc*/
      sub_7E0001(v5, v6, v11, v7, v15); /*0x5390d5*/
    }
  }
  if ( v16 ) /*0x5390e3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x5390e9*/
  result = v17; /*0x5390ec*/
  if ( v17 ) /*0x5390f2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390f2*/
  return result; /*0x5390fd*/
}


// ==== 0x00539110  sub_539110  this=-  sig=ida-proto ====
void sub_539110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53911c*/
  unk_A9F948 = Math::Sqrt(v0 + v0); /*0x53912e*/
}


// ==== 0x00539140  sub_539140  this=-  sig=ida-proto ====
void sub_539140()
{
  unk_A9F998 = unk_A9F948 / 60.0; /*0x53914c*/
}


// ==== 0x00539160  sub_539160  this=-  sig=ida-proto ====
void sub_539160()
{
  unk_A9F980 = 1.0 / unk_A9F998; /*0x53916c*/
}


// ==== 0x00539180  sub_539180  this=-  sig=ida-proto ====
void sub_539180()
{
  unk_A9F978 = 0.0174532925199433 * 45.0; /*0x53918c*/
}


// ==== 0x005391A0  sub_5391A0  this=-  sig=ida-proto ====
void sub_5391A0()
{
  unk_A9F950 = 0.0174532925199433 * 60.0; /*0x5391ac*/
}


// ==== 0x005391C0  sub_5391C0  this=-  sig=ida-proto ====
void sub_5391C0()
{
  unk_A9F928 = 0.0174532925199433 * 90.0; /*0x5391cc*/
}


// ==== 0x005391E0  sub_5391E0  this=-  sig=ida-proto ====
__int64 sub_5391E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_A9F928 - unk_A9F950); /*0x5391f2*/
  result = Math::RoundToInt(v0 * unk_A9F948 * 0.5); /*0x539206*/
  unk_A9F9A0 = result; /*0x53920b*/
  return result; /*0x539210*/
}


// ==== 0x00539220  sub_539220  this=-  sig=ida-proto ====
void sub_539220()
{
  unk_A9F958 = Math::ArcTan((double)unk_A9F9A0 * 0.00390625); /*0x539237*/
}


// ==== 0x00539250  sub_539250  this=-  sig=ida-proto ====
void sub_539250()
{
  unk_A9F970 = Math::ArcTan((double)(2 * unk_A9F9A0) / unk_A9F948); /*0x539272*/
}


// ==== 0x00539280  sub_539280  this=-  sig=ida-proto ====
__int64 sub_539280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_A9F9A0) + 0.5); /*0x53929b*/
  unk_A9F994 = result; /*0x5392a0*/
  return result; /*0x5392a6*/
}


// ==== 0x005392B0  sub_5392B0  this=-  sig=ida-proto ====
int sub_5392B0()
{
  unk_A9F940 = 0; /*0x5392b2*/
  unk_A9F942 = 0; /*0x5392b8*/
  return 0; /*0x5392be*/
}


// ==== 0x005392C0  sub_5392C0  this=-  sig=ida-proto ====
int sub_5392C0()
{
  unk_A9F960 = 0; /*0x5392c2*/
  unk_A9F964 = 0; /*0x5392c7*/
  unk_A9F968 = 0; /*0x5392cc*/
  return 0; /*0x5392d1*/
}


// ==== 0x005392E0  sub_5392E0  this=-  sig=ida-proto ====
int sub_5392E0()
{
  unk_A9F990 = 0; /*0x5392e5*/
  unk_A9F988 = 128; /*0x5392ef*/
  unk_A9F98C = 128; /*0x5392f4*/
  return 128; /*0x5392f9*/
}


// ==== 0x00539300  sub_539300  this=-  sig=ida-proto ====
int sub_539300()
{
  unk_A9F930 = 0; /*0x539302*/
  unk_A9F934 = 0; /*0x539307*/
  unk_A9F938 = 0; /*0x53930c*/
  unk_A9F93C = 0; /*0x539311*/
  return 0; /*0x539316*/
}


// ==== 0x00539350  sub_539350  this=-  sig=ida-proto ====
void sub_539350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53935c*/
  unk_A9FA00 = Math::Sqrt(v0 + v0); /*0x53936e*/
}


// ==== 0x00539380  sub_539380  this=-  sig=ida-proto ====
void sub_539380()
{
  unk_A9FA88 = unk_A9FA00 / 60.0; /*0x53938c*/
}


// ==== 0x005393A0  sub_5393A0  this=-  sig=ida-proto ====
void sub_5393A0()
{
  unk_A9FA58 = 1.0 / unk_A9FA88; /*0x5393ac*/
}


// ==== 0x005393C0  sub_5393C0  this=-  sig=ida-proto ====
void sub_5393C0()
{
  unk_A9FA50 = 0.0174532925199433 * 45.0; /*0x5393cc*/
}


// ==== 0x005393E0  sub_5393E0  this=-  sig=ida-proto ====
void sub_5393E0()
{
  unk_A9FA08 = 0.0174532925199433 * 60.0; /*0x5393ec*/
}


// ==== 0x00539400  sub_539400  this=-  sig=ida-proto ====
void sub_539400()
{
  unk_A9F9B0 = 0.0174532925199433 * 90.0; /*0x53940c*/
}


// ==== 0x00539420  sub_539420  this=-  sig=ida-proto ====
__int64 sub_539420()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_A9F9B0 - unk_A9FA08); /*0x539432*/
  result = Math::RoundToInt(v0 * unk_A9FA00 * 0.5); /*0x539446*/
  unk_A9FA90 = result; /*0x53944b*/
  return result; /*0x539450*/
}


// ==== 0x00539460  sub_539460  this=-  sig=ida-proto ====
void sub_539460()
{
  unk_A9FA10 = Math::ArcTan((double)unk_A9FA90 * 0.00390625); /*0x539477*/
}


// ==== 0x00539490  sub_539490  this=-  sig=ida-proto ====
void sub_539490()
{
  unk_A9FA40 = Math::ArcTan((double)(2 * unk_A9FA90) / unk_A9FA00); /*0x5394b2*/
}


// ==== 0x005394C0  sub_5394C0  this=-  sig=ida-proto ====
__int64 sub_5394C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_A9FA90) + 0.5); /*0x5394db*/
  unk_A9FA84 = result; /*0x5394e0*/
  return result; /*0x5394e6*/
}


// ==== 0x005394F0  sub_5394F0  this=-  sig=ida-proto ====
int sub_5394F0()
{
  unk_A9F9F8 = 0; /*0x5394f2*/
  return 0; /*0x5394fe*/
}


// ==== 0x00539500  sub_539500  this=-  sig=ida-proto ====
int sub_539500()
{
  unk_A9FA30 = 0; /*0x539502*/
  qword_A9FA34 = 0; /*0x539507*/
  MEMORY[0xA9FA38] = 0; /*0x53950c*/
  return 0; /*0x539511*/
}


// ==== 0x00539520  sub_539520  this=-  sig=ida-proto ====
int sub_539520()
{
  unk_A9FA80 = 0; /*0x539525*/
  unk_A9FA78 = 128; /*0x53952f*/
  unk_A9FA7C = 128; /*0x539534*/
  return 128; /*0x539539*/
}


// ==== 0x00539540  sub_539540  this=-  sig=ida-proto ====
int sub_539540()
{
  unk_A9F9E8 = 0; /*0x539542*/
  unk_A9F9EC = 0; /*0x539547*/
  unk_A9F9F0 = 0; /*0x53954c*/
  unk_A9F9F4 = 0; /*0x539551*/
  return 0; /*0x539556*/
}


// ==== 0x00539560  sub_539560  this=-  sig=ida-proto ====
int sub_539560()
{
  unk_A9F9CC = unk_A9F9F8; /*0x539565*/
  return unk_A9F9F8; /*0x53956a*/
}


// ==== 0x00539570  sub_539570  this=-  sig=ida-proto ====
int sub_539570()
{
  word_A9FA48 = unk_A9F9F8; /*0x539575*/
  return unk_A9F9F8; /*0x53957a*/
}


// ==== 0x00539580  sub_539580  this=-  sig=ida-proto ====
int sub_539580()
{
  unk_A9FA64 = 0; /*0x539587*/
  dword_A9FA68 = 0; /*0x53958c*/
  unk_A9FA6C = 1; /*0x539591*/
  unk_A9FA6D = 0; /*0x539598*/
  dword_A9FA60 = (int)&vt_DynamicVectorClass_AnimClass_const; /*0x53959d*/
  dword_A9FA74 = 10; /*0x5395a7*/
  dword_A9FA70 = 0; /*0x5395b1*/
  return atexit(sub_5395C0); /*0x5395bc*/
}


// ==== 0x005395C0  sub_5395C0  this=-  sig=ida-proto ====
void __cdecl sub_5395C0()
{
  if ( (unk_A9F9A9 & 1) == 0 ) /*0x5395ca*/
  {
    dword_A9FA60 = (int)&vt_VectorClass_AnimClass_const; /*0x5395ce*/
    unk_A9F9A9 |= 1u; /*0x5395e1*/
    if ( unk_A9FA64 ) /*0x5395e7*/
    {
      if ( unk_A9FA6D ) /*0x5395f1*/
      {
        __3_YAXPAX_Z(unk_A9FA64); /*0x5395f4*/
        unk_A9FA64 = 0; /*0x5395fc*/
      }
    }
    unk_A9FA6D = 0; /*0x539606*/
    dword_A9FA68 = 0; /*0x53960d*/
  }
}


// ==== 0x00539620  sub_539620  this=-  sig=ida-proto ====
int sub_539620()
{
  unk_A9F9D4 = 0; /*0x539627*/
  dword_A9F9D8 = 0; /*0x53962c*/
  unk_A9F9DC = 1; /*0x539631*/
  unk_A9F9DD = 0; /*0x539638*/
  dword_A9F9D0 = (int)&vt_DynamicVectorClass_AnimClass_const; /*0x53963d*/
  dword_A9F9E4 = 10; /*0x539647*/
  dword_A9F9E0 = 0; /*0x539651*/
  return atexit(sub_539660); /*0x53965c*/
}


// ==== 0x00539660  sub_539660  this=-  sig=ida-proto ====
void __cdecl sub_539660()
{
  if ( (unk_A9F9A8 & 1) == 0 ) /*0x53966a*/
  {
    dword_A9F9D0 = (int)&vt_VectorClass_AnimClass_const; /*0x53966e*/
    unk_A9F9A8 |= 1u; /*0x539681*/
    if ( unk_A9F9D4 ) /*0x539687*/
    {
      if ( unk_A9F9DD ) /*0x539691*/
      {
        __3_YAXPAX_Z(unk_A9F9D4); /*0x539694*/
        unk_A9F9D4 = 0; /*0x53969c*/
      }
    }
    unk_A9F9DD = 0; /*0x5396a6*/
    dword_A9F9D8 = 0; /*0x5396ad*/
  }
}


// ==== 0x005396C0  sub_5396C0  this=-  sig=ida-proto ====
int sub_5396C0()
{
  unk_A9FA1C = 0; /*0x5396c7*/
  unk_A9FA20 = 0; /*0x5396cc*/
  unk_A9FA24 = 1; /*0x5396d1*/
  unk_A9FA25 = 0; /*0x5396d8*/
  unk_A9FA18 = (int)&vt_DynamicVectorClass_AnimClass_const; /*0x5396dd*/
  unk_A9FA2C = 10; /*0x5396e7*/
  unk_A9FA28 = 0; /*0x5396f1*/
  return atexit(sub_539700); /*0x5396fc*/
}


// ==== 0x00539700  sub_539700  this=-  sig=ida-proto ====
void __cdecl sub_539700()
{
  if ( (unk_A9F9A8 & 2) == 0 ) /*0x53970a*/
  {
    unk_A9FA18 = (int)&vt_VectorClass_AnimClass_const; /*0x53970e*/
    unk_A9F9A8 |= 2u; /*0x539721*/
    if ( unk_A9FA1C ) /*0x539727*/
    {
      if ( unk_A9FA25 ) /*0x539731*/
      {
        __3_YAXPAX_Z(unk_A9FA1C); /*0x539734*/
        unk_A9FA1C = 0; /*0x53973c*/
      }
    }
    unk_A9FA25 = 0; /*0x539746*/
    unk_A9FA20 = 0; /*0x53974d*/
  }
}


// ==== 0x00539760  ObjectClass::Map_Reset  this=ObjectClass  sig=csp ====
int sub_539760()
{
  word_A9FA48 = unk_A9F9F8; /*0x539766*/
  unk_A9F9CC = unk_A9F9F8; /*0x53976b*/
  unk_A9FAB4 = 0; /*0x53977d*/
  unk_A9FABC = 0; /*0x539783*/
  unk_827FC0 = -1; /*0x539789*/
  unk_827FC4 = -1; /*0x53978f*/
  unk_827FC8 = -1; /*0x539795*/
  unk_827FCC = -1; /*0x53979b*/
  unk_A9FAC0 = 0; /*0x5397a1*/
  unk_A9FAC4 = 0; /*0x5397a7*/
  unk_A9FAC8 = 0; /*0x5397ad*/
  unk_A9FAB8 = 0; /*0x5397b3*/
  unk_A9FACC = 0; /*0x5397b9*/
  dword_A9FA70 = 0; /*0x5397bf*/
  if ( unk_A9FA64 && unk_A9FA6D ) /*0x5397cd*/
  {
    __3_YAXPAX_Z(unk_A9FA64); /*0x5397d0*/
    unk_A9FA64 = 0; /*0x5397d8*/
  }
  unk_A9FA6D = 0; /*0x5397e3*/
  dword_A9FA68 = 0; /*0x5397eb*/
  dword_A9F9E0 = 0; /*0x5397f1*/
  if ( unk_A9F9D4 && unk_A9F9DD ) /*0x5397ff*/
  {
    __3_YAXPAX_Z(unk_A9F9D4); /*0x539802*/
    unk_A9F9D4 = 0; /*0x53980a*/
  }
  unk_A9F9DD = 0; /*0x539815*/
  dword_A9F9D8 = 0; /*0x53981d*/
  unk_A9FA28 = 0; /*0x539823*/
  if ( unk_A9FA1C && unk_A9FA25 ) /*0x539831*/
  {
    __3_YAXPAX_Z(unk_A9FA1C); /*0x539834*/
    unk_A9FA1C = 0; /*0x53983c*/
  }
  unk_A9FA25 = 0; /*0x539847*/
  unk_A9FA20 = 0; /*0x53984d*/
  *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3402); /*0x539859*/
  if ( unk_A9FA9C ) /*0x539867*/
    (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53986d*/
  unk_A9FA98 = 0; /*0x539875*/
  unk_A9FA9C = 0; /*0x53987b*/
  unk_A9FAB0 = 0; /*0x539881*/
  return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53988c*/
}


// ==== 0x00539890  SuperWeaponClass::LoadFromSaveStream  this=SuperWeaponClass  sig=csp ====
int __thiscall SuperWeaponClass::LoadFromSaveStream(int *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int i; // edi
  int v11; // eax
  int v12; // [esp+140h] [ebp-8h] BYREF
  int v13; // [esp+144h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))(this, &unk_A9FAB4, 1, 0); /*0x5398a3*/
  if ( result >= 0 ) /*0x5398a8*/
  {
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_827FC0, 4, 0); /*0x5398ba*/
    if ( result >= 0 ) /*0x5398bf*/
    {
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_827FC4, 4, 0); /*0x5398d1*/
      if ( result >= 0 ) /*0x5398d6*/
      {
        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_A9FAB8, 4, 0); /*0x5398e8*/
        if ( result >= 0 ) /*0x5398ed*/
        {
          result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))(this, &unk_A9FAD0, 1, 0); /*0x5398ff*/
          if ( result >= 0 ) /*0x539904*/
          {
            result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_827FC8, 4, 0); /*0x539916*/
            if ( result >= 0 ) /*0x53991b*/
            {
              result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_827FCC, 4, 0); /*0x53992d*/
              if ( result >= 0 ) /*0x539932*/
              {
                result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_A9FABC, 4, 0); /*0x539944*/
                if ( result >= 0 ) /*0x539949*/
                {
                  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_A9FAC0, 4, 0); /*0x53995b*/
                  if ( result >= 0 ) /*0x539960*/
                  {
                    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_A9FAC4, 4, 0); /*0x539972*/
                    if ( result >= 0 ) /*0x539977*/
                    {
                      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &unk_A9F9CC, 4, 0); /*0x539989*/
                      if ( result >= 0 ) /*0x53998e*/
                      {
                        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x5399a0*/
                                   this,
                                   &word_A9FA48,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5399a5*/
                        {
                          result = (*(int (__stdcall **)(int *, #375 **, int, _DWORD))(*this + 16))( /*0x5399b7*/
                                     this,
                                     &unk_A9FACC,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5399bc*/
                          {
                            result = (*(int (__stdcall **)(int *, #375 **, int, _DWORD))(*this + 16))( /*0x5399ce*/
                                       this,
                                       &unk_A9FAC8,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x5399d3*/
                            {
                              v3 = *this; /*0x5399df*/
                              v12 = dword_A9FA70; /*0x5399eb*/
                              result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(this, &v12, 4, 0); /*0x5399ef*/
                              if ( result >= 0 ) /*0x5399f4*/
                              {
                                v4 = 0; /*0x5399fe*/
                                if ( v12 <= 0 ) /*0x539a02*/
                                {
LABEL_19:
                                  v6 = *this; /*0x539a31*/
                                  v12 = dword_A9F9E0; /*0x539a42*/
                                  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(this, &v12, 4, 0); /*0x539a46*/
                                  if ( result >= 0 ) /*0x539a4b*/
                                  {
                                    v7 = 0; /*0x539a55*/
                                    if ( v12 <= 0 ) /*0x539a59*/
                                    {
LABEL_23:
                                      v9 = *this; /*0x539a83*/
                                      v12 = unk_A9FA28; /*0x539a95*/
                                      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))( /*0x539a99*/
                                                 this,
                                                 &v12,
                                                 4,
                                                 0);
                                      if ( result >= 0 ) /*0x539a9e*/
                                      {
                                        for ( i = 0; i < v12; ++i ) /*0x539aa8*/
                                        {
                                          v11 = *this; /*0x539ab0*/
                                          v13 = *((_DWORD *)unk_A9FA1C + i); /*0x539abf*/
                                          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v11 + 16))( /*0x539ac3*/
                                                     this,
                                                     &v13,
                                                     4,
                                                     0);
                                          if ( result < 0 ) /*0x539ac8*/
                                            break; /*0x539ac8*/
                                        }
                                      }
                                    }
                                    else
                                    {
                                      while ( 1 ) /*0x539a60*/
                                      {
                                        v8 = *this; /*0x539a60*/
                                        v13 = *((_DWORD *)unk_A9F9D4 + v7); /*0x539a6f*/
                                        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))( /*0x539a73*/
                                                   this,
                                                   &v13,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539a78*/
                                          break; /*0x539a78*/
                                        if ( ++v7 >= v12 ) /*0x539a81*/
                                          goto LABEL_23; /*0x539a81*/
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  while ( 1 ) /*0x539a0a*/
                                  {
                                    v5 = *this; /*0x539a0a*/
                                    v13 = *((_DWORD *)unk_A9FA64 + v4); /*0x539a19*/
                                    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))( /*0x539a1d*/
                                               this,
                                               &v13,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539a22*/
                                      break; /*0x539a22*/
                                    if ( ++v4 >= v12 ) /*0x539a2f*/
                                      goto LABEL_19; /*0x539a2f*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x539ad3*/
}


// ==== 0x00539AE0  SuperWeapon::SerializeSuperWeaponState  this=SuperWeapon  sig=csp ====
int __thiscall SerializeSuperWeaponState(void *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // esi
  int v16; // [esp+158h] [ebp-8h] BYREF
  int v17; // [esp+15Ch] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(void *, char *, int, _DWORD))(this->q030)(this, &unk_A9FAB4, 1, 0); /*0x539af4*/
  if ( result >= 0 ) /*0x539af9*/
  {
    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)(this, &unk_827FC0, 4, 0); /*0x539b0b*/
    if ( result >= 0 ) /*0x539b10*/
    {
      result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)(this, &unk_827FC4, 4, 0); /*0x539b22*/
      if ( result >= 0 ) /*0x539b27*/
      {
        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)(this, &unk_A9FAB8, 4, 0); /*0x539b39*/
        if ( result >= 0 ) /*0x539b3e*/
        {
          result = (*(int (__stdcall **)(void *, char *, int, _DWORD))(this->q030)(this, &unk_A9FAD0, 1, 0); /*0x539b50*/
          if ( result >= 0 ) /*0x539b55*/
          {
            result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)(this, &unk_827FC8, 4, 0); /*0x539b67*/
            if ( result >= 0 ) /*0x539b6c*/
            {
              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539b7e*/
                         this,
                         &unk_827FCC,
                         4,
                         0);
              if ( result >= 0 ) /*0x539b83*/
              {
                result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539b95*/
                           this,
                           &unk_A9FABC,
                           4,
                           0);
                if ( result >= 0 ) /*0x539b9a*/
                {
                  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539bac*/
                             this,
                             &unk_A9FAC0,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539bb1*/
                  {
                    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539bc3*/
                               this,
                               &unk_A9FAC4,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539bc8*/
                    {
                      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], &unk_A9FAC4); /*0x539bd8*/
                      result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539be9*/
                                 this,
                                 &unk_A9F9CC,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x539bee*/
                      {
                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539c00*/
                                   this,
                                   &word_A9FA48,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x539c05*/
                        {
                          result = (*(int (__stdcall **)(void *, #375 **, int, _DWORD))(this->q030)( /*0x539c17*/
                                     this,
                                     &unk_A9FACC,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x539c1c*/
                          {
                            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)&unk_A9FACC); /*0x539c2c*/
                            result = (*(int (__stdcall **)(void *, #375 **, int, _DWORD))(this->q030)( /*0x539c3d*/
                                       this,
                                       &unk_A9FAC8,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x539c42*/
                            {
                              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)&unk_A9FAC8); /*0x539c52*/
                              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539c63*/
                                         this,
                                         &v16,
                                         4,
                                         0);
                              if ( result >= 0 ) /*0x539c68*/
                              {
                                v3 = v16; /*0x539c6e*/
                                v4 = 0; /*0x539c72*/
                                if ( v16 <= 0 ) /*0x539c76*/
                                {
LABEL_25:
                                  v6 = 0; /*0x539cf1*/
                                  if ( v3 > 0 ) /*0x539cf5*/
                                  {
                                    do /*0x539d0f*/
                                      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)unk_A9FA64 + v6++); /*0x539d05*/
                                    while ( v6 < v16 ); /*0x539d0f*/
                                  }
                                  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539d1d*/
                                             this,
                                             &v16,
                                             4,
                                             0);
                                  if ( result >= 0 ) /*0x539d22*/
                                  {
                                    v7 = v16; /*0x539d28*/
                                    v8 = 0; /*0x539d2c*/
                                    if ( v16 <= 0 ) /*0x539d30*/
                                    {
LABEL_37:
                                      v10 = 0; /*0x539dab*/
                                      if ( v7 > 0 ) /*0x539daf*/
                                      {
                                        do /*0x539dc9*/
                                          ObjectPtr::RegisterForTracking( /*0x539dbf*/
                                            (int)&MEMORY[0xB0C110],
                                            (int *)unk_A9F9D4 + v10++);
                                        while ( v10 < v16 ); /*0x539dc9*/
                                      }
                                      v11 = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539dda*/
                                              this,
                                              &v16,
                                              4,
                                              0);
                                      if ( v11 >= 0 ) /*0x539dde*/
                                      {
                                        v12 = v16; /*0x539de4*/
                                        v13 = 0; /*0x539de8*/
                                        if ( v16 <= 0 ) /*0x539dec*/
                                        {
LABEL_49:
                                          v15 = 0; /*0x539e69*/
                                          if ( v12 > 0 ) /*0x539e6d*/
                                          {
                                            do /*0x539e87*/
                                              ObjectPtr::RegisterForTracking( /*0x539e7d*/
                                                (int)&MEMORY[0xB0C110],
                                                (int *)unk_A9FA1C + v15++);
                                            while ( v15 < v16 ); /*0x539e87*/
                                          }
                                          unk_A9FA9C = 0; /*0x539e89*/
                                        }
                                        else
                                        {
                                          while ( 1 ) /*0x539dfd*/
                                          {
                                            v11 = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539dfd*/
                                                    this,
                                                    &v17,
                                                    4,
                                                    0);
                                            if ( v11 < 0 ) /*0x539e01*/
                                              break; /*0x539e01*/
                                            if ( unk_A9FA28 < unk_A9FA20 /*0x539e3d*/
                                              || (unk_A9FA25 || !unk_A9FA20)
                                              && unk_A9FA2C > 0
                                              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_A9FA18 + 8))(
                                                   &unk_A9FA18,
                                                   unk_A9FA20 + unk_A9FA2C,
                                                   0) )
                                            {
                                              v14 = unk_A9FA28++; /*0x539e50*/
                                              *((_DWORD *)unk_A9FA1C + v14) = v17; /*0x539e5d*/
                                            }
                                            v12 = v16; /*0x539e60*/
                                            if ( ++v13 >= v16 ) /*0x539e67*/
                                              goto LABEL_49; /*0x539e67*/
                                          }
                                        }
                                      }
                                      return v11; /*0x539e93*/
                                    }
                                    else
                                    {
                                      while ( 1 ) /*0x539d3e*/
                                      {
                                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539d3e*/
                                                   this,
                                                   &v17,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539d43*/
                                          break; /*0x539d43*/
                                        if ( dword_A9F9E0 < dword_A9F9D8 /*0x539d7f*/
                                          || (unk_A9F9DD || !dword_A9F9D8)
                                          && dword_A9F9E4 > 0
                                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A9F9D0 + 8))(
                                               &dword_A9F9D0,
                                               dword_A9F9D8 + dword_A9F9E4,
                                               0) )
                                        {
                                          v9 = dword_A9F9E0++; /*0x539d92*/
                                          *((_DWORD *)unk_A9F9D4 + v9) = v17; /*0x539d9f*/
                                        }
                                        v7 = v16; /*0x539da2*/
                                        if ( ++v8 >= v16 ) /*0x539da9*/
                                          goto LABEL_37; /*0x539da9*/
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  while ( 1 ) /*0x539c84*/
                                  {
                                    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q030)( /*0x539c84*/
                                               this,
                                               &v17,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539c89*/
                                      break; /*0x539c89*/
                                    if ( dword_A9FA70 < dword_A9FA68 /*0x539cc5*/
                                      || (unk_A9FA6D || !dword_A9FA68)
                                      && dword_A9FA74 > 0
                                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A9FA60 + 8))(
                                           &dword_A9FA60,
                                           dword_A9FA68 + dword_A9FA74,
                                           0) )
                                    {
                                      v5 = dword_A9FA70++; /*0x539cd8*/
                                      *((_DWORD *)unk_A9FA64 + v5) = v17; /*0x539ce5*/
                                    }
                                    v3 = v16; /*0x539ce8*/
                                    if ( ++v4 >= v16 ) /*0x539cef*/
                                      goto LABEL_25; /*0x539cef*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x539e95*/
}


// ==== 0x00539EA0  sub_539EA0  this=-  sig=ida-proto ====
void __fastcall sub_539EA0(char a1)
{
  unk_A9FAB4 = a1; /*0x539ea0*/
}


// ==== 0x00539EB0  LightningStorm::Start  this=AbstractClass  sig=csp ====
int __fastcall LightningStorm::Start(int a1, int a2, int a3, #375 *a4)
{
  int result; // eax
  __int16 v7; // si
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  wchar_t *StringCSF; // eax
  int v12; // [esp+Ch] [ebp-4h]

  result = a3; /*0x539eb1*/
  if ( a3 == unk_A9F9F8 ) /*0x539ec3*/
  {
    for ( ; !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a3); a3 = v12 ) /*0x539edd*/
    {
      v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x87F918]); /*0x539f04*/
      LOWORD(v12) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x87F914]); /*0x539f1e*/
      HIWORD(v12) = v7; /*0x539f23*/
    }
    result = a3; /*0x539f3e*/
  }
  unk_A9F9CC = result; /*0x539f46*/
  unk_A9FACC = a4; /*0x539f4b*/
  if ( !unk_A9FAB4 ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = unk_A9FAB8; /*0x539f63*/
      if ( !unk_A9FAB8 || unk_A9FAB8 >= a2 ) /*0x539f6e*/
        unk_A9FAB8 = a2; /*0x539f70*/
      unk_827FC4 = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      v8 = 0; /*0x539f99*/
      unk_827FC4 = a1; /*0x539f9b*/
      unk_827FC0 = (int)MEMORY[0xA8ED84]; /*0x539fa3*/
      for ( unk_A9FAB4 = 1; v8 < HouseClass_Count; ++v8 ) /*0x539fb0*/
      {
        if ( !unk_A9FACC /*0x539fc5*/
          || !(unsigned __int8)HouseClass::IsAlliedWith(unk_A9FACC, *(#375 **)&HouseClass_Array->__pad_0[4 * v8]) )
        {
          v9 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8]; /*0x539fd3*/
          if ( !*(_BYTE *)(v9 + 501) && !MEMORY[0xA8B538] ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( HouseClass_Player ) /*0x53a000*/
        *((_BYTE *)HouseClass_Player + 22393) = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( LOBYTE(MEMORY[0x8871E0][1].?) ) /*0x53a014*/
      {
        v10 = 3; /*0x53a023*/
        if ( HouseClass_Player ) /*0x53a02a*/
          v10 = *((_DWORD *)HouseClass_Player + 22549); /*0x53a02c*/
        PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, 0); /*0x53a044*/
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x53a082*/
    }
  }
  return result; /*0x539f76*/
}


// ==== 0x0053A090  LightningStorm::End  this=LightningStorm  sig=ida-proto ====
char LightningStorm_End()
{
  char result; // al

  result = unk_A9FAB4; /*0x53a090*/
  if ( unk_A9FAB4 ) /*0x53a097*/
    unk_A9FAD0 = 1; /*0x53a099*/
  return result; /*0x53a0a0*/
}


// ==== 0x0053A0E0  Weapon_Helper  this=-  sig=ida-proto ====
BOOL sub_53A0E0()
{
  return unk_A9FAB4 || unk_A9FAB8 > 0; /*0x53a0f4*/
}


// ==== 0x0053A100  LightningStorm::IsActive  this=ScenarioClass  sig=csp ====
char LightningStorm_IsActive()
{
  return unk_A9FAB4; /*0x53a105*/
}


// ==== 0x0053A110  NukeFlash::IsActive  this=NukeFlash  sig=ida-proto ====
BOOL NukeFlash_IsActive()
{
  return unk_A9FABC == 1; /*0x53a11e*/
}


// ==== 0x0053A120  NukeFlash::ProcessEffect  this=NukeFlash  sig=ida-proto ====
BOOL sub_53A120()
{
  return unk_A9FABC == 2; /*0x53a12e*/
}


// ==== 0x0053A130  HouseClass::IonSensitivesShouldBeOffline  this=HouseClass  sig=ida-proto ====
char ReturnFalse()
{
  return 0; /*0x53a132*/
}


// ==== 0x0053A140  LightningStorm::Strike  this=LightningStorm  sig=csp ====
int __stdcall LightningStorm::Strike(IUnknown *aP0)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ecx
  int result; // eax
  CoordStruct *v5; // esi
  void **v6; // eax
  AnimClass *v7; // esi
  AnimClass *v8; // eax
  CoordStruct aP2; // [esp+4h] [ebp-Ch] BYREF

  v1 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP0); /*0x53a159*/
  v2 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 732) + 156))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 732)); /*0x53a165*/
  v3 = ((v1[80] & 0x100) != 0 ? unk_A9FA84 : 0)
     + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
     + unk_A9FA90 * *((char *)v1 + 283);
  result = ((__int16)aP0 << 8) + 128; /*0x53a1bb*/
  aP2.X = result; /*0x53a1c8*/
  aP2.Y = (SHIWORD(aP0) << 8) + 128; /*0x53a1cc*/
  aP2.Z = v3; /*0x53a1d0*/
  if ( result != unk_A9FA30 || __PAIR64__(v3, (SHIWORD(aP0) << 8) + 128) != qword_A9FA34 ) /*0x53a1dc*/
  {
    v5 = *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 704) /*0x53a213*/
                         + 4
                         * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))
                          % *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 716)));
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a216*/
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x53a23c*/
    else
      v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (unk_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A9FA60 + 8))(
           &dword_A9FA60,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      v8 = (AnimClass *)dword_A9FA70++; /*0x53a285*/
      *((_DWORD *)unk_A9FA64 + (_DWORD)v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (unk_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_A9F9D0 + 8))(
                     &dword_A9F9D0,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (_BYTE)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((_DWORD *)unk_A9F9D4 + result) = v7; /*0x53a2ea*/
    }
  }
  return result; /*0x53a2ed*/
}


// ==== 0x0053A300  LightningStorm::Strike2  this=LightningStorm  sig=csp ====
char __stdcall LightningStorm::Strike2(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int *Coords; // eax
  int v5; // ecx
  int v6; // edx
  void *v7; // edi
  void **v8; // eax
  void **v9; // edi
  int v10; // eax
  void **v11; // eax
  RulesClass *v12; // eax
  unsigned int v13; // eax
  int Climb; // ebp
  void *WarheadVersusMultiplier; // ebx
  void **v16; // edi
  void *v17; // eax
  _DWORD *v18; // ebx
  int ClosestObjectCell; // eax
  int v20; // edi
  void **v21; // edi
  void **v22; // esi
  int v23; // eax
  char v25; // [esp+12h] [ebp-2Eh]
  char v26; // [esp+13h] [ebp-2Dh]
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+28h] [ebp-18h] BYREF
  int v32; // [esp+2Ch] [ebp-14h]
  void **v33; // [esp+30h] [ebp-10h]
  int v34[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], &a1); /*0x53a31a*/
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  v5 = Coords[1]; /*0x53a328*/
  v6 = Coords[2]; /*0x53a32b*/
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  v7 = *(void **)(MEMORY[0x8871E0]->? /*0x53a363*/
                + 4 * ((unsigned int)Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % MEMORY[0x8871E0]->?));
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  else
    v9 = 0; /*0x53a390*/
  if ( unk_A9FA28 < unk_A9FA20 /*0x53a3c8*/
    || (unk_A9FA25 || !unk_A9FA20)
    && unk_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_A9FA18 + 8))(&unk_A9FA18, unk_A9FA2C + unk_A9FA20, 0) )
  {
    v10 = unk_A9FA28++; /*0x53a3d5*/
    *((_DWORD *)unk_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  v27 = v3[9]; /*0x53a40f*/
  v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * unk_A9FA90 + ((v3[80] & 0x100) != 0 ? unk_A9FA84 : 0));
  v31 = ((__int16)v27 << 8) + 128; /*0x53a43d*/
  v32 = (SHIWORD(v27) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != unk_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = MEMORY[0x8871E0]; /*0x53a45f*/
    if ( MEMORY[0x8871E0]->? > 0 ) /*0x53a46c*/
    {
      v13 = Random::State((_DWORD *)MEMORY[0xA8B230] + 134); /*0x53a47a*/
      StartAudioControllerAt(*(_DWORD *)(MEMORY[0x8871E0]->?[1] + 4 * (v13 % MEMORY[0x8871E0]->?)), (int)&v31, 0); /*0x53a49e*/
      v12 = MEMORY[0x8871E0]; /*0x53a4a3*/
    }
    Climb = v12[1].?; /*0x53a4ae*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(Climb, HIDWORD(v12[1].?), v3[59], &v31); /*0x53a4c7*/
    v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a4d3*/
    if ( v16 ) /*0x53a4da*/
    {
      v17 = (void *)Return::HRESULT_Fail(v31, v32, (int)v33); /*0x53a4f7*/
      AnimClass::ctor(v16, WarheadVersusMultiplier, &v31, 0, 1, (void *)0x2600, v17, 0); /*0x53a50e*/
    }
    v25 = 0; /*0x53a515*/
    v18 = Cell::IsBridge(v3); /*0x53a51f*/
    v29 = 0; /*0x53a524*/
    v30 = 0; /*0x53a528*/
    ClosestObjectCell = Object::FindClosestObjectCell(v3, &v29, 0, 0); /*0x53a538*/
    v20 = ClosestObjectCell; /*0x53a53d*/
    if ( !ClosestObjectCell /*0x53a552*/
      || (v26 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) != 15) )
    {
      v26 = 0; /*0x53a554*/
    }
    if ( !v18 && !v20 ) /*0x53a55f*/
    {
      switch ( v3[59] ) /*0x53a575*/
      {
        case 1: /*0x53a575*/
        case 3: /*0x53a575*/
        case 4: /*0x53a575*/
        case 0xB: /*0x53a575*/
          v25 = 1; /*0x53a57c*/
          break; /*0x53a57c*/
        default:
          break;
      }
    }
    CreateSmokeEffectAt(Climb, HIDWORD(MEMORY[0x8871E0][1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(MEMORY[0x8871E0][1].?), 1, (int)unk_A9FACC); /*0x53a5d0*/
    if ( v18 == Cell::IsBridge(v3) /*0x53a607*/
      && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell(v3, &v29, 0, 0))
      && *((char *)v3 + 283) == v28 )
    {
      LOBYTE(v11) = v25; /*0x53a60d*/
    }
    else
    {
      LOBYTE(v11) = 1; /*0x53a609*/
    }
    if ( !v26 ) /*0x53a617*/
    {
      if ( (_BYTE)v11 ) /*0x53a61b*/
      {
        v11 = (void **)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              v23 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x8871E0]->ExecutePlanSound - 1); /*0x53a665*/
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(MEMORY[0x8871E0]->DefaultChronoSound + 4 * v23),
                                               &v31,
                                               0,
                                               1,
                                               (void *)0x600,
                                               0,
                                               0);
            }
            v21 = (void **)((char *)v21 - 1); /*0x53a690*/
          }
          while ( v21 ); /*0x53a691*/
        }
      }
    }
  }
  return (char)v11; /*0x53a693*/
}


// ==== 0x0053A6C0  ObjectClass::UpdateSuperWeapons  this=ObjectClass  sig=csp ====
char SuperWeapon_Update()
{
  int i; // esi
  _DWORD *v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int j; // edi
  _DWORD *v6; // esi
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int k; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  RulesClass *v18; // ecx
  int Acceleration; // ebp
  int v20; // ebp
  __int16 v21; // ax
  __int16 v22; // ax
  int v23; // edi
  _DWORD *v24; // esi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // et2
  int v30; // esi
  wchar_t *String; // eax
  char v33; // [esp+13h] [ebp-15h]
  int v34; // [esp+14h] [ebp-14h] BYREF
  int v35; // [esp+18h] [ebp-10h]
  _BYTE v36[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( unk_A9FABC == 1 ) /*0x53a6cf*/
  {
    if ( unk_827FCC != -1 && unk_827FCC + unk_827FC8 < (int)MEMORY[0xA8ED84] ) /*0x53a6ea*/
    {
      unk_A9FABC = 2; /*0x53a6ec*/
      unk_827FCC = 15; /*0x53a6f6*/
      unk_827FC8 = (int)MEMORY[0xA8ED84]; /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x53a711*/
    }
  }
  else if ( unk_A9FABC == 2 && unk_827FCC != -1 && unk_827FCC + unk_827FC8 < (int)MEMORY[0xA8ED84] ) /*0x53a736*/
  {
    unk_A9FABC = 0; /*0x53a738*/
  }
  UpdatePsyDom(); /*0x53a742*/
  UpdateChronosphereEffect(); /*0x53a747*/
  if ( unk_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = unk_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      v1 = (_DWORD *)*((_DWORD *)unk_A9FA1C + i); /*0x53a760*/
      v2 = v1[43]; /*0x53a765*/
      v3 = (*(int (__thiscall **)(_DWORD *))(*v1 + 136))(v1); /*0x53a76b*/
      if ( v2 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3) + 6) / 2 && i < unk_A9FA28 ) /*0x53a790*/
      {
        v4 = i; /*0x53a793*/
        if ( i < --unk_A9FA28 ) /*0x53a79d*/
        {
          do /*0x53a7b5*/
          {
            ++v4; /*0x53a7a5*/
            *((_DWORD *)unk_A9FA1C + v4 - 1) = *((_DWORD *)unk_A9FA1C + v4); /*0x53a7a9*/
          }
          while ( v4 < unk_A9FA28 ); /*0x53a7b5*/
        }
      }
    }
  }
  for ( j = dword_A9FA70 - 1; j >= 0; --j ) /*0x53a7c4*/
  {
    v6 = (_DWORD *)*((_DWORD *)unk_A9FA64 + j); /*0x53a7d0*/
    v7 = v6[43]; /*0x53a7d7*/
    v8 = (*(int (__thiscall **)(_DWORD *))(*v6 + 136))(v6); /*0x53a7dd*/
    if ( v7 > *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8) + 6) / 2 ) /*0x53a7f8*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 72))(v6, v36); /*0x53a803*/
      LightningStorm::Strike2(*v9, v9[1], v9[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        v10 = j; /*0x53a82b*/
        if ( j < --dword_A9FA70 ) /*0x53a835*/
        {
          do /*0x53a84d*/
          {
            ++v10; /*0x53a83d*/
            *((_DWORD *)unk_A9FA64 + v10 - 1) = *((_DWORD *)unk_A9FA64 + v10); /*0x53a841*/
          }
          while ( v10 < dword_A9FA70 ); /*0x53a84d*/
        }
      }
    }
  }
  if ( dword_A9F9E0 <= 0 ) /*0x53a85e*/
  {
    if ( unk_A9FAD0 ) /*0x53a8cd*/
    {
      if ( unk_A9FAB4 ) /*0x53a8d6*/
      {
        unk_A9FAB4 = 0; /*0x53a8dd*/
        unk_A9FACC = 0; /*0x53a8e4*/
        unk_A9F9CC = unk_A9F9F8; /*0x53a8ee*/
        ScenarioClass::UpdateLighting(); /*0x53a8f3*/
      }
      unk_A9FAD0 = 0; /*0x53a8f8*/
    }
  }
  else
  {
    for ( k = dword_A9F9E0 - 1; k >= 0; --k ) /*0x53a863*/
    {
      v12 = (_DWORD *)*((_DWORD *)unk_A9F9D4 + k); /*0x53a86e*/
      v13 = v12[43]; /*0x53a873*/
      v14 = (*(int (__thiscall **)(_DWORD *))(*v12 + 136))(v12); /*0x53a879*/
      if ( v13 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 156))(v14) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        v15 = k; /*0x53a89d*/
        if ( k < --dword_A9F9E0 ) /*0x53a8a7*/
        {
          do /*0x53a8bf*/
          {
            ++v15; /*0x53a8af*/
            *((_DWORD *)unk_A9F9D4 + v15 - 1) = *((_DWORD *)unk_A9F9D4 + v15); /*0x53a8b3*/
          }
          while ( v15 < dword_A9F9E0 ); /*0x53a8bf*/
        }
      }
    }
  }
  if ( !unk_A9FAB4 || unk_A9FAD0 ) /*0x53a913*/
  {
    LOBYTE(v16) = unk_A9FAB8; /*0x53aa9f*/
    if ( unk_A9FAB8 > 0 ) /*0x53aaa6*/
    {
      v28 = unk_A9FAB8 - 1; /*0x53aaac*/
      unk_A9FAB8 = v28; /*0x53aaad*/
      if ( v28 ) /*0x53aab2*/
      {
        v29 = v28 % 225; /*0x53aadd*/
        v16 = v28 / 225; /*0x53aadd*/
        if ( !v29 ) /*0x53aae1*/
        {
          LOBYTE(v16) = MEMORY[0x8871E0][1].?; /*0x53aae9*/
          if ( (_BYTE)v16 ) /*0x53aaf1*/
          {
            v30 = 3; /*0x53aaf8*/
            if ( HouseClass_Player ) /*0x53aaff*/
              v30 = *((_DWORD *)HouseClass_Player + 22549); /*0x53ab01*/
            VoxClass::FindAndPlay(aEvaLightningst, -1); /*0x53ab11*/
            String = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            LOBYTE(v16) = MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, String, v30, 70, 150, 0); /*0x53ab40*/
          }
        }
      }
      else
      {
        LOBYTE(v16) = LightningStorm::Start(unk_A9F9CC, unk_A9FACC); /*0x53aaca*/
      }
    }
  }
  else
  {
    LOBYTE(v16) = unk_827FC4; /*0x53a919*/
    v17 = (int)MEMORY[0xA8ED84]; /*0x53a91e*/
    if ( unk_827FC4 == -1 || unk_827FC4 + unk_827FC0 >= (int)MEMORY[0xA8ED84] ) /*0x53a933*/
    {
      v18 = MEMORY[0x8871E0]; /*0x53a944*/
      if ( !((int)MEMORY[0xA8ED84] % MEMORY[0x8871E0][1].?) ) /*0x53a94d*/
      {
        LightningStorm::Strike(unk_A9F9CC); /*0x53a95e*/
        v17 = (int)MEMORY[0xA8ED84]; /*0x53a963*/
        v18 = MEMORY[0x8871E0]; /*0x53a969*/
      }
      v16 = v17 / *(_DWORD *)v18[1].?; /*0x53a972*/
      if ( !(v17 % *(_DWORD *)v18[1].?) ) /*0x53a972*/
      {
        Acceleration = v18[1].?; /*0x53a980*/
        v35 = 3; /*0x53a986*/
        v20 = Acceleration >> 1; /*0x53a98e*/
        while ( 1 ) /*0x53a9a7*/
        {
          v34 = unk_A9F9CC; /*0x53a9a7*/
          v21 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -v20, v20); /*0x53a9ab*/
          LOWORD(v34) = v21 + v34; /*0x53a9b6*/
          v22 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -v20, v20); /*0x53a9c3*/
          v23 = 0; /*0x53a9c8*/
          HIWORD(v34) += v22; /*0x53a9ca*/
          v33 = 0; /*0x53a9d6*/
          if ( dword_A9F9E0 > 0 ) /*0x53a9db*/
          {
            while ( 1 ) /*0x53a9ef*/
            {
              v24 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)unk_A9F9D4 + v23) + 72))( /*0x53a9ef*/
                                *((_DWORD *)unk_A9F9D4 + v23),
                                v36);
              v25 = (__int16)(*v24 / 256); /*0x53aa0d*/
              v26 = (__int16)v34 - v25; /*0x53aa18*/
              if ( v26 < 0 ) /*0x53aa1a*/
                v26 = v25 - (__int16)v34; /*0x53aa1c*/
              v27 = SHIWORD(v34) - (__int16)(v24[1] / 256); /*0x53aa26*/
              if ( v27 < 0 ) /*0x53aa28*/
                v27 = (__int16)(v24[1] / 256) - SHIWORD(v34); /*0x53aa2a*/
              if ( v26 + v27 < SHIDWORD(MEMORY[0x8871E0][1].?) ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v23 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v33 = 1; /*0x53aa48*/
          }
LABEL_52:
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v34) && !v33 ) /*0x53aa66*/
            break; /*0x53aa66*/
          LOBYTE(v16) = --v35; /*0x53aa6c*/
          if ( v35 <= 0 ) /*0x53aa73*/
            return v16; /*0x53aa73*/
        }
        LOBYTE(v16) = v35; /*0x53aa81*/
        if ( v35 > 0 ) /*0x53aa87*/
          LOBYTE(v16) = LightningStorm::Strike(v34); /*0x53aa92*/
      }
    }
    else
    {
      unk_A9FAD0 = 1; /*0x53a935*/
    }
  }
  return v16; /*0x53a93c*/
}


// ==== 0x0053AB50  Game_Load_Load_53AB50  this=-  sig=ida-proto ====
#375 *sub_53AB50()
{
  #375 *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = HouseClass_Player; /*0x53ab55*/
  *((_BYTE *)HouseClass_Player + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}


// ==== 0x0053AB70  Entity_Process  this=-  sig=ida-proto ====
int sub_53AB70()
{
  char *v0; // edx
  int v2; // [esp+Ch] [ebp-8h]

  v0 = (char *)MEMORY[0xA8B230] + 4680; /*0x53ab7b*/
  unk_A9FABC = 1; /*0x53ab81*/
  unk_827FCC = 30; /*0x53ab8b*/
  unk_827FC8 = (int)MEMORY[0xA8ED84]; /*0x53ab95*/
  *((_DWORD *)MEMORY[0xA8B230] + 1170) = MEMORY[0xA8ED84]; /*0x53ab9a*/
  *((_DWORD *)v0 + 1) = v2; /*0x53aba8*/
  *((_DWORD *)v0 + 2) = 1; /*0x53abad*/
  *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3417) / 100,
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3418) / 100,
    1000 * *((_DWORD *)MEMORY[0xA8B230] + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x53ac4a*/
}


// ==== 0x0053AC80  sub_53AC80  this=-  sig=ida-proto ====
int __fastcall sub_53AC80(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int i; // edi
  int v7; // ebp
  int j; // esi
  int v9; // ecx
  _DWORD v11[2]; // [esp+10h] [ebp-Ch] BYREF
  char v12; // [esp+18h] [ebp-4h]

  v11[0] = 0; /*0x53ac92*/
  v11[1] = 0; /*0x53ac96*/
  v12 = 0; /*0x53ac9a*/
  result = FlagSystem::GetNextActive(v11); /*0x53ac9f*/
  for ( i = result; result; i = result ) /*0x53aca8*/
  {
    v7 = Surface_Update(); /*0x53acb0*/
    for ( j = 0; j < v7; ++j ) /*0x53acb6*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4 * j) + 780); /*0x53acc7*/
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v9 + 4))(v9, a1, a2, a3, a4); /*0x53acd6*/
    }
    result = FlagSystem::GetNextActive(v11); /*0x53ace2*/
  }
  return result; /*0x53acee*/
}


// ==== 0x0053AD00  UpdateSurfaceAnimations  this=ScenarioClass  sig=csp ====
int __fastcall UpdateSurfaceAnimations(int a1, AnimClass *aP1, int a3, int a4)
{
  int i; // esi
  int j; // esi
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int v13; // [esp+30h] [ebp-10h]
  _DWORD v14[2]; // [esp+34h] [ebp-Ch] BYREF
  char v15; // [esp+3Ch] [ebp-4h]
  int k; // [esp+44h] [ebp+4h]

  for ( i = 0; i < *(int *)&stru_87C374.__pad_14B0[7812]; ++i ) /*0x53ad18*/
    (*(void (__thiscall **)(_DWORD, int, AnimClass *, int, int))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[7800] /*0x53ad2c*/
                                                                             + 4 * i)
                                                               + 4))(
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7800] + 4 * i),
      a1,
      aP1,
      a3,
      a4);
  for ( j = 0; j < *(int *)stru_B05488.__pad_58; ++j ) /*0x53ad42*/
  {
    v9 = *(_DWORD *)(stru_B05488.field_4C + 4 * j); /*0x53ad4a*/
    if ( *(int *)(v9 + 784) > 1 ) /*0x53ad54*/
      (*(void (__thiscall **)(_DWORD, int, AnimClass *, int, int))(**(_DWORD **)(v9 + 780) + 4))( /*0x53ad66*/
        *(_DWORD *)(v9 + 780),
        a1,
        aP1,
        a3,
        a4);
  }
  v14[0] = 0; /*0x53ad79*/
  v14[1] = 0; /*0x53ad7d*/
  v15 = 0; /*0x53ad81*/
  for ( k = FlagSystem::GetNextActive(v14); k; k = FlagSystem::GetNextActive(v14) ) /*0x53ad90*/
  {
    v10 = 0; /*0x53ad97*/
    v13 = Surface_Update(); /*0x53ad99*/
    if ( v13 > 0 ) /*0x53ad9f*/
    {
      do /*0x53adc3*/
      {
        v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(k + 4) + 4 * v10) + 780); /*0x53adab*/
        (*(void (__thiscall **)(int, int, AnimClass *, int, int))(*(_DWORD *)v11 + 4))(v11, a1, aP1, a3, a4); /*0x53adbb*/
        ++v10; /*0x53adbe*/
      }
      while ( v10 < v13 ); /*0x53adc3*/
    }
  }
  MapClass::UpdateLightingPostProcess(); /*0x53addb*/
  return MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1); /*0x53adec*/
}


// ==== 0x0053AE00  Weapon_Get  this=-  sig=ida-proto ====
int sub_53AE00()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgLightningst, 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  v1 = 3; /*0x53ae1c*/
  if ( HouseClass_Player ) /*0x53ae23*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53ae25*/
  return MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}


// ==== 0x0053AE50  SuperClass::LaunchPsychicDominator  this=SuperClass  sig=csp ====
#381 *__thiscall SuperClass::LaunchPsychicDominator(#375 *this, int a2)
{
  #381 *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  void **v6; // eax
  int v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = (#381 *)MEMORY[0x87F7E8][7806]; /*0x53ae50*/
  if ( *(_DWORD *)(MEMORY[0x87F7E8][7806] + 764) && *(_DWORD *)(MEMORY[0x87F7E8][7806] + 768) ) /*0x53ae66*/
  {
    dword_A8ED54[17245] = (int)this; /*0x53ae79*/
    dword_A8ED54[17213] = a2; /*0x53ae7f*/
    v3 = *(void **)(MEMORY[0x87F7E8][7806] + 764); /*0x53ae85*/
    v4 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&dword_A8ED54[17213]); /*0x53ae95*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (void **)__2_YAPAXI_Z(456); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      dword_A8ED54[17244] = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      dword_A8ED54[17244] = 0; /*0x53aef1*/
    v7 = MEMORY[0x87F7E8][536210] + 4680; /*0x53af06*/
    dword_A8ED54[17243] = 1; /*0x53af0c*/
    *(_DWORD *)(MEMORY[0x87F7E8][536210] + 4680) = dword_A8ED54[12]; /*0x53af1b*/
    *(_DWORD *)(v7 + 4) = v9[1]; /*0x53af21*/
    *(_DWORD *)(v7 + 8) = 1; /*0x53af24*/
    return (#381 *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/
}


// ==== 0x0053AF40  ObjectClass::UpdatePsyDom  this=ObjectClass  sig=csp ====
void PsyDom::Update()
{
  int v0; // esi
  int v1; // esi
  int v2; // [esp+4h] [ebp-4h]

  switch ( unk_A9FAC0 ) /*0x53af50*/
  {
    case 1: /*0x53af50*/
      unk_A9FAC0 = 2; /*0x53af57*/
      break; /*0x53af63*/
    case 2: /*0x53af50*/
      v2 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53af6f*/
      if ( (double)MEMORY[0x8871E0]->?[2] * 0.01 <= (double)v2 /*0x53afaa*/
                                                  / (double)*(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(unk_A9FAC4 + 200) + 156))(*(_DWORD *)(unk_A9FAC4 + 200))
                                                                       + 6) )
      {
        unk_A9FAC0 = 3; /*0x53afb0*/
        PsyDom::Fire(); /*0x53afba*/
      }
      break; /*0x53afc1*/
    case 3: /*0x53af50*/
      v0 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53afcd*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(unk_A9FAC4 + 200) + 156))(*(_DWORD *)(unk_A9FAC4 + 200)) /*0x53afe4*/
                      + 6)
         - v0 <= 10 )
        unk_A9FAC0 = 4; /*0x53afe6*/
      break; /*0x53aff2*/
    case 4: /*0x53af50*/
      v1 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53affe*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(unk_A9FAC4 + 200) + 156))(*(_DWORD *)(unk_A9FAC4 + 200)) /*0x53b015*/
                      + 6)
         - v1 <= 1 )
      {
        unk_A9FAC0 = 5; /*0x53b01d*/
        word_A9FA48 = unk_A9F9F8; /*0x53b027*/
        unk_A9FAC4 = 0; /*0x53b02d*/
        ScenarioClass::UpdateLighting(); /*0x53b037*/
      }
      break; /*0x53b03e*/
    case 5: /*0x53af50*/
      if ( *((_DWORD *)MEMORY[0xA8B230] + 3404) == *((_DWORD *)MEMORY[0xA8B230] + 3403) ) /*0x53b052*/
        unk_A9FAC0 = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }
}


// ==== 0x0053B080  PsyDom::Fire  this=PsyDom  sig=csp ====
void PsyDom::Fire()
{
  _DWORD *v0; // esi
  void *v1; // eax
  int *v2; // eax
  _DWORD *v3; // eax
  CoordStruct *v4; // esi
  void *v5; // eax
  void **v6; // eax
  int v7; // eax
  AnimClass *v8; // esi
  int *v9; // ebp
  int v10; // eax
  _DWORD *v11; // eax
  IUnknown *i; // esi
  int v13; // edx
  int v14; // edi
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  void **v19; // eax
  AnimClass *v20; // eax
  AnimClass *v23; // eax
  int v22; // esi
  int j; // esi
  int v24; // [esp+4h] [ebp-60h]
  IUnknown *v25; // [esp+8h] [ebp-5Ch]
  IUnknown *v26; // [esp+Ch] [ebp-58h]
  int v27; // [esp+10h] [ebp-54h]
  IUnknown **a5; // [esp+14h] [ebp-50h]
  AnimClass *v29; // [esp+18h] [ebp-4Ch]
  IUnknown **v30; // [esp+1Ch] [ebp-48h] BYREF
  _DWORD v31[2]; // [esp+20h] [ebp-44h] BYREF
  CoordStruct aP2; // [esp+28h] [ebp-3Ch] BYREF
  CoordStruct v33; // [esp+34h] [ebp-30h] BYREF
  char v34[12]; // [esp+40h] [ebp-24h] BYREF
  void **v35; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v37; // [esp+54h] [ebp-10h]
  int v38; // [esp+58h] [ebp-Ch]
  AnimClass *v39; // [esp+5Ch] [ebp-8h]
  int v40; // [esp+60h] [ebp-4h]

  v0 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x53b08e*/
  if ( v0 ) /*0x53b097*/
  {
    v1 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], &word_A9FA48); /*0x53b0a3*/
    v2 = (int *)(*(int (__thiscall **)(void *, CoordStruct *))(*(_DWORD *)v1 + 72))(v1, &v33); /*0x53b0b1*/
    v3 = ActionQueue::PushEntry(v0, *v2, v2[1], v2[2]); /*0x53b0cb*/
  }
  else
  {
    v3 = 0; /*0x53b0d2*/
  }
  v3[4] = 1; /*0x53b0d4*/
  v4 = *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 768); /*0x53b0e6*/
  v5 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], &word_A9FA48); /*0x53b0f1*/
  aP2 = *(CoordStruct *)(*(int (__thiscall **)(void *, CoordStruct *))(*(_DWORD *)v5 + 72))(v5, &v33); /*0x53b104*/
  v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53b11b*/
  if ( v6 ) /*0x53b125*/
    unk_A9FAC4 = AnimClass::ctor(v6, v4, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    unk_A9FAC4 = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    (TechnoClass *)&aP2,
    *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 780),
    0,
    *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 760),
    1,
    (int)unk_A9FACC);
  v7 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 776); /*0x53b176*/
  if ( v7 >= 10 ) /*0x53b17f*/
    v7 = 10; /*0x53b181*/
  v8 = (AnimClass *)dword_7ED3D0[v7]; /*0x53b186*/
  EventClass::resetEvent(&v35, 0, 0); /*0x53b193*/
  v35 = &vt_DynamicVectorClass_TechnoClass; /*0x53b19a*/
  v40 = 10; /*0x53b1a2*/
  v39 = 0; /*0x53b1aa*/
  if ( (int)v8 > 0 )
  {
    v9 = dword_ABD490; /*0x53b1b4*/
    v29 = v8; /*0x53b1b9*/
    do
    {
      v10 = *v9; /*0x53b1bd*/
      HIWORD(v30) = HIWORD(*v9); /*0x53b1c6*/
      HIWORD(a5) = unk_A9FA4A + HIWORD(v30); /*0x53b1dd*/
      LOWORD(a5) = word_A9FA48 + v10; /*0x53b1e2*/
      v30 = a5; /*0x53b1f7*/
      v31[0] = 0; /*0x53b1fb*/
      v31[1] = 0; /*0x53b1ff*/
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v30); /*0x53b203*/
      for ( i = (IUnknown *)Object::FindClosestObjectCell(v11, (IUnknown *)v31, 0, 0);
            i;
            i = (*(_BYTE *)(v22 + 20) & 1) != 0 ? (IUnknown *)v22 : 0 )
      {
        if ( (*(int (__thiscall **)(IUnknown *))(i->field_0 + 44))(i) != 6 /*0x53b26b*/
          && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(i->field_0 + 132))(i) + 3381)
          && !(*(unsigned __int8 (__thiscall **)(IUnknown *))(i->field_0 + 352))(i)
          && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(i->field_0 + 132))(i) + 3434)
          && !(*(unsigned __int8 (__thiscall **)(IUnknown *))(i->field_0 + 84))(i) )
        {
          if ( *(_DWORD *)&i->__pad_2B8[8] ) /*0x53b276*/
            CaptureManagerClass::FreeUnit(i, v24, v25, v26, v27, a5); /*0x53b287*/
          (*(void (__thiscall **)(IUnknown *, #375 *, int))(i->field_0 + 980))(i, unk_A9FAC8, 1); /*0x53b298*/
          v13 = i->field_0; /*0x53b29e*/
          i->__pad_2B8[12] = 1; /*0x53b2a2*/
          v14 = *(_DWORD *)((*(int (__thiscall **)(IUnknown *))(v13 + 132))(i) + 1548); /*0x53b2af*/
          v15 = (int *)(*(int (__thiscall **)(IUnknown *, char *))(i->field_0 + 72))(i, v34); /*0x53b2be*/
          v16 = *v15; /*0x53b2c1*/
          v17 = v15[1]; /*0x53b2c3*/
          v18 = v15[2]; /*0x53b2c6*/
          v33.X = v16; /*0x53b2d0*/
          v33.Y = v17; /*0x53b2d4*/
          v33.Z = v14 + v18; /*0x53b2d8*/
          v19 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53b2dc*/
          if ( v19 ) /*0x53b2e6*/
            v20 = AnimClass::ctor( /*0x53b306*/
                    v19,
                    *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 804),
                    &v33,
                    0,
                    (CoordStruct *)1,
                    (void *)0x600,
                    0,
                    0);
          else
            v20 = 0; /*0x53b30d*/
          *(_DWORD *)&i->__pad_2B8[16] = v20; /*0x53b311*/
          if ( v20 ) /*0x53b317*/
            BuildingClass::AimTurret(v20, i); /*0x53b31c*/
          if ( (int)v39 < v37 /*0x53b34b*/
            || (BYTE1(v38) || !v37)
            && v40 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v35[2])(&v35, v40 + v37, 0) )
          {
            v23 = v39; /*0x53b356*/
            v39 = (AnimClass *)((char *)v39 + 1); /*0x53b359*/
            *((_DWORD *)Block + (_DWORD)v23) = i; /*0x53b361*/
          }
        }
        v22 = *(_DWORD *)&i->__pad_28[8]; /*0x53b364*/
        if ( !v22 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      ++v9; /*0x53b389*/
      v29 = (AnimClass *)((char *)v29 - 1); /*0x53b38d*/
    }
    while ( v29 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(unk_A9FAC8) ) /*0x53b39d*/
  {
    for ( j = (int)&v39[-1].field_16054 + 3; j >= 0; --j ) /*0x53b3af*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)Block + j) + 488))(*((_DWORD *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v35 = &vt_VectorClass_TechnoClass; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( BYTE1(v38) ) /*0x53b3da*/
      __3_YAXPAX_Z(Block); /*0x53b3dd*/
  }
}


// ==== 0x0053B3F0  nullsub_152  this=-  sig=ida-proto ====
void nullsub_152()
{
  ; /*0x53b3f0*/
}


// ==== 0x0053B400  PsyDom::IsActive  this=PsyDom  sig=csp ====
bool PsyDom_IsActive()
{
  return unk_A9FAC0 != 0; /*0x53b40a*/
}


// ==== 0x0053B410  Weapon_Get_53B410  this=-  sig=ida-proto ====
int sub_53B410()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgDominatorac, 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  v1 = 3; /*0x53b42c*/
  if ( HouseClass_Player ) /*0x53b433*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53b435*/
  return MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}


// ==== 0x0053B460  globalHelper_03B460  this=-  sig=ida-proto ====
void __fastcall sub_53B460(int a1)
{
  char *v2; // esi
  int v3; // eax
  char *v4; // eax
  int v5; // [esp-10h] [ebp-14h]

  if ( a1 > 0 ) /*0x53b465*/
  {
    if ( unk_A9FA9C ) /*0x53b473*/
    {
      (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53b479*/
      unk_A9FA9C = 0; /*0x53b47b*/
    }
    v2 = (char *)__2_YAPAXI_Z(0x24u); /*0x53b48d*/
    if ( v2 ) /*0x53b494*/
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 128))(MEMORY[0x88731C]); /*0x53b4ae*/
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 124))(MEMORY[0x88731C]); /*0x53b4b1*/
      v4 = DSurface::Construct(v2, v3, v5, 1, 0); /*0x53b4b7*/
    }
    else
    {
      v4 = 0; /*0x53b4be*/
    }
    unk_A9FA9C = (int)v4; /*0x53b4c8*/
    (*(void (__thiscall **)(char *, int, _DWORD, int))(*(_DWORD *)v4 + 4))(v4, MEMORY[0x88731C], 0, 1); /*0x53b4d4*/
    unk_A9FAA0 = 0.0; /*0x53b4d7*/
    unk_A9FAA4 = 0.0; /*0x53b4e1*/
    unk_A9FA98 = a1; /*0x53b4eb*/
    unk_A9FAA8 = a1; /*0x53b4f1*/
    unk_A9FAB0 = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(unk_A9F9B8); /*0x53b512*/
    PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, (int)unk_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    unk_A9FAD1 = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x53b549*/
    Scenario::ClearScreen(); /*0x53b54f*/
    Map_Process_753570(); /*0x53b554*/
  }
}


// ==== 0x0053B560  ObjectClass::UpdateChronosphereEffect  this=ObjectClass  sig=csp ====
void UpdateChronosphereEffect()
{
  switch ( unk_A9FAB0 ) /*0x53b56e*/
  {
    case 1: /*0x53b56e*/
      RenderChronosphereScreenEffect(0); /*0x53b577*/
      if ( !--unk_A9FA98 ) /*0x53b587*/
      {
        unk_A9FAB0 = 2; /*0x53b58d*/
        unk_A9FA98 = 45; /*0x53b597*/
      }
      break; /*0x53b5a1*/
    case 2: /*0x53b56e*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 16))( /*0x53b5fb*/
        MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        &MEMORY[0x886FA0],
        (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
      | (255 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
      if ( --unk_A9FA98 == 1 ) /*0x53b60e*/
        SetScenarioClassTimer(0); /*0x53b612*/
      if ( !unk_A9FA98 ) /*0x53b61e*/
      {
        MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x53b62b*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_A9FA9C + 24))(unk_A9FA9C, 0); /*0x53b63a*/
        unk_A9FAAC = MEMORY[0x88731C]; /*0x53b649*/
        MEMORY[0x88731C] = unk_A9FA9C; /*0x53b654*/
        unk_A9FAB0 = 0; /*0x53b65a*/
        unk_A9FA94 = 1; /*0x53b664*/
        TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x53b66b*/
        unk_A9FA98 = unk_A9FAA8; /*0x53b67b*/
        unk_A9FA94 = 0; /*0x53b683*/
        MEMORY[0x88731C] = unk_A9FAAC; /*0x53b68a*/
        unk_A9FAB0 = 3; /*0x53b68f*/
        SetVocClassEnabled(1); /*0x53b699*/
        Mixer::ReleaseChannel((int **)&unk_A9F9B8); /*0x53b6a3*/
        PlayVocClass(MEMORY[0x8871E0]->?[0], 0x2000, 1.0, (int)&unk_A9F9B8); /*0x53b6c2*/
        SetVocClassEnabled(0); /*0x53b6c9*/
      }
      break; /*0x53b6c9*/
    case 3: /*0x53b56e*/
      RenderChronosphereScreenEffect(1); /*0x53b6d0*/
      if ( !--unk_A9FA98 ) /*0x53b6e0*/
      {
        ScenarioClass::ProcessIntroTimer(); /*0x53b6e6*/
        Mixer::ReleaseChannel((int **)&unk_A9F9B8); /*0x53b6f0*/
        SetAudioSource((int)&unk_A9F9B8, 0, 0); /*0x53b6fe*/
        AudioFileClass::Release(&unk_A9F9B8); /*0x53b708*/
        SetVocClassEnabled(1); /*0x53b70f*/
        ChronoScreenEffect::DecrementCounter(); /*0x53b714*/
        if ( !unk_A9FAD1 ) /*0x53b720*/
          UpdateMouse(); /*0x53b722*/
        unk_A9FAB0 = 0; /*0x53b732*/
        (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)MEMORY[0x88731C] + 4))( /*0x53b743*/
          MEMORY[0x88731C],
          unk_A9FA9C,
          0,
          1);
        if ( unk_A9FA9C ) /*0x53b74e*/
          (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53b754*/
        unk_A9FA9C = 0; /*0x53b75d*/
        MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x53b767*/
      }
      break; /*0x53b767*/
    default:
      return;
  }
}


// ==== 0x0053B780  ObjectClass::ApplyChronoScreenColorShift  this=ObjectClass  sig=csp ====
int __thiscall ApplyChronoScreenColorShift(void *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ebp
  _WORD *v12; // [esp+8h] [ebp-1Ch]
  _WORD *v13; // [esp+8h] [ebp-1Ch]
  _WORD *v14; // [esp+8h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int v18; // [esp+18h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h]
  int v23; // [esp+20h] [ebp-4h]
  int v24; // [esp+20h] [ebp-4h]

  result = unk_A9FAB0; /*0x53b783*/
  v2 = this; /*0x53b789*/
  if ( unk_A9FAB0 == 3 ) /*0x53b792*/
  {
    v15 = (*(int (__thiscall **)(void *))(this->visibilityFlags)(this); /*0x53b7a6*/
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 128))(v2) - 32; /*0x53b7cc*/
    v4 = ((*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 116))(v2) - 2 * v15) / 2; /*0x53b7d0*/
    v18 = v4; /*0x53b7d6*/
    v5 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)v2 + 92))(v2, 0, 0); /*0x53b7e3*/
    v16 = 255 * unk_A9FA98 / unk_A9FAA8; /*0x53b7f3*/
    v6 = DDraw::GetStatus() - 1; /*0x53b7fc*/
    if ( v6 ) /*0x53b7fd*/
    {
      if ( v6 == 1 ) /*0x53b804*/
      {
        v13 = (_WORD *)v5; /*0x53b8f6*/
        if ( v3 > 0 ) /*0x53b8fa*/
        {
          v20 = v3; /*0x53b900*/
          do /*0x53b9c8*/
          {
            HIWORD(v9) = HIWORD(v15); /*0x53b904*/
            if ( v15 > 0 ) /*0x53b90a*/
            {
              v23 = v15; /*0x53b914*/
              do /*0x53b9a1*/
              {
                v5 += 2; /*0x53b927*/
                LOWORD(v9) = *v13; /*0x53b92a*/
                *(_WORD *)(v5 - 2) = ((*v13 & 0x1F) + (((unsigned __int16)v16 * (31 - (*v13 & 0x1F))) >> 8)) /*0x53b991*/
                                   | (32
                                    * (((v9 >> 5) & 0x3F)
                                     + ((int)((unsigned __int16)v16 * (63 - ((v9 >> 5) & 0x3F))) >> 8)))
                                   | (((*v13 >> 11)
                                     + (unsigned __int16)(((unsigned __int16)v16 * (31 - (*v13 >> 11))) >> 8)) << 11);
                v9 = v23 - 1; /*0x53b998*/
                ++v13; /*0x53b999*/
                v23 = v9; /*0x53b99d*/
              }
              while ( v9 ); /*0x53b9a1*/
              v4 = v18; /*0x53b9a7*/
              v2 = this; /*0x53b9ab*/
            }
            v5 += 2 * v4; /*0x53b9b7*/
            v13 += v4; /*0x53b9bf*/
            --v20; /*0x53b9c4*/
          }
          while ( v20 ); /*0x53b9c8*/
        }
      }
      else
      {
        v12 = (_WORD *)v5; /*0x53b80c*/
        if ( v3 > 0 ) /*0x53b810*/
        {
          v22 = v3; /*0x53b816*/
          do /*0x53b8df*/
          {
            if ( v15 > 0 ) /*0x53b820*/
            {
              v19 = v15; /*0x53b82a*/
              do /*0x53b8b8*/
              {
                HIWORD(v8) = HIWORD(v12); /*0x53b834*/
                v5 += 2; /*0x53b83d*/
                LOWORD(v8) = *v12; /*0x53b840*/
                *(_WORD *)(v5 - 2) = ((*v12 & 0x1F) + (((unsigned __int16)v16 * (31 - (*v12 & 0x1F))) >> 8)) /*0x53b8a8*/
                                   | (32
                                    * (((v8 >> 5) & 0x1F)
                                     + ((int)((unsigned __int16)v16 * (31 - ((v8 >> 5) & 0x1F))) >> 8)))
                                   | ((((v8 >> 10) & 0x1F)
                                     + (unsigned __int16)((int)((unsigned __int16)v16 * (31 - ((v8 >> 10) & 0x1F))) >> 8)) << 10);
                ++v12; /*0x53b8b0*/
                --v19; /*0x53b8b4*/
              }
              while ( v19 ); /*0x53b8b8*/
              v2 = this; /*0x53b8be*/
              v4 = v18; /*0x53b8c2*/
            }
            v5 += 2 * v4; /*0x53b8ce*/
            v12 += v4; /*0x53b8d6*/
            --v22; /*0x53b8db*/
          }
          while ( v22 ); /*0x53b8df*/
        }
      }
    }
    else
    {
      v14 = (_WORD *)v5; /*0x53b9df*/
      if ( v3 > 0 ) /*0x53b9e3*/
      {
        v21 = v3; /*0x53b9e9*/
        do /*0x53bab1*/
        {
          if ( v15 > 0 ) /*0x53b9f3*/
          {
            v24 = v15; /*0x53b9fd*/
            do /*0x53ba8a*/
            {
              HIWORD(v10) = HIWORD(v14); /*0x53ba07*/
              v5 += 2; /*0x53ba10*/
              LOWORD(v10) = *v14; /*0x53ba13*/
              LOWORD(v7) = *v14 >> 11; /*0x53ba1b*/
              v11 = v7 + (((unsigned __int16)v16 * (31 - (unsigned __int16)v7)) >> 8); /*0x53ba3d*/
              v7 = (*v14 & 0x3F) + (((unsigned __int16)v16 * (63 - (*v14 & 0x3F))) >> 8); /*0x53ba72*/
              *(_WORD *)(v5 - 2) = v7 /*0x53ba7a*/
                                 | ((((v10 >> 6) & 0x1F)
                                   + (unsigned __int16)((int)((unsigned __int16)v16 * (31 - ((v10 >> 6) & 0x1F))) >> 8)) << 6)
                                 | ((_WORD)v11 << 11);
              ++v14; /*0x53ba82*/
              --v24; /*0x53ba86*/
            }
            while ( v24 ); /*0x53ba8a*/
            v2 = this; /*0x53ba90*/
            v4 = v18; /*0x53ba94*/
          }
          v5 += 2 * v4; /*0x53baa0*/
          v14 += v4; /*0x53baa8*/
          --v21; /*0x53baad*/
        }
        while ( v21 ); /*0x53bab1*/
      }
    }
    return (*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 96))(v2); /*0x53babb*/
  }
  return result; /*0x53b8ef*/
}


// ==== 0x0053BAD0  ChronoScreen::IsActive  this=ChronoScreen  sig=csp ====
BOOL ChronoScreen_IsActive()
{
  return unk_A9FAB0 != 0; /*0x53badd*/
}


// ==== 0x0053BAE0  UI_Helper  this=-  sig=ida-proto ====
BOOL sub_53BAE0()
{
  return unk_A9FAB0 != 0; /*0x53baed*/
}


// ==== 0x0053BBA0  RenderChronosphereScreenEffect  this=-  sig=ida-proto ====
int __fastcall RenderChronosphereScreenEffect(char a1)
{
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  double v7; // st7
  double v8; // st6
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _WORD *v12; // ecx
  double v13; // st7
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  bool v18; // zf
  _WORD *v19; // ecx
  double v20; // st7
  double v21; // st7
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  float v26; // [esp+10h] [ebp-58h]
  float v27; // [esp+14h] [ebp-54h]
  float v28; // [esp+18h] [ebp-50h]
  float v29; // [esp+18h] [ebp-50h]
  float v30; // [esp+18h] [ebp-50h]
  float v31; // [esp+1Ch] [ebp-4Ch]
  float v32; // [esp+1Ch] [ebp-4Ch]
  float v33; // [esp+1Ch] [ebp-4Ch]
  float v34; // [esp+20h] [ebp-48h]
  float v35; // [esp+24h] [ebp-44h]
  int v36; // [esp+24h] [ebp-44h]
  int v37; // [esp+28h] [ebp-40h]
  float v38; // [esp+28h] [ebp-40h]
  float v39; // [esp+28h] [ebp-40h]
  int v40; // [esp+2Ch] [ebp-3Ch]
  float v41; // [esp+2Ch] [ebp-3Ch]
  float v42; // [esp+30h] [ebp-38h]
  float v43; // [esp+30h] [ebp-38h]
  int v44; // [esp+30h] [ebp-38h]
  float v45; // [esp+34h] [ebp-34h]
  int v46; // [esp+34h] [ebp-34h]
  int v47; // [esp+38h] [ebp-30h]
  int v48; // [esp+3Ch] [ebp-2Ch]
  int v49; // [esp+40h] [ebp-28h]
  int v50; // [esp+44h] [ebp-24h]
  int v51; // [esp+48h] [ebp-20h]
  _WORD *v52; // [esp+4Ch] [ebp-1Ch]
  _WORD *v53; // [esp+4Ch] [ebp-1Ch]
  int v54; // [esp+50h] [ebp-18h]
  float v55; // [esp+54h] [ebp-14h]
  float v56; // [esp+54h] [ebp-14h]
  float v57; // [esp+58h] [ebp-10h]
  float v58; // [esp+58h] [ebp-10h]
  float v59; // [esp+5Ch] [ebp-Ch]
  float v60; // [esp+5Ch] [ebp-Ch]
  float v61; // [esp+60h] [ebp-8h]
  float v62; // [esp+60h] [ebp-8h]

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 124))(unk_A9FA9C); /*0x53bbbd*/
  v54 = v1; /*0x53bbbf*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 128))(unk_A9FA9C) - 32; /*0x53bbda*/
  v48 = v2; /*0x53bbdc*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 112))(unk_A9FA9C); /*0x53bbe8*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 116))(unk_A9FA9C); /*0x53bbec*/
  v50 = v4 / v3; /*0x53bbf8*/
  v47 = ((*(int (__fastcall **)(int, int))(*(_DWORD *)MEMORY[0x88731C] + 116))(MEMORY[0x88731C], v4 % v3) - v1 * v3) /*0x53bc15*/
      / v3;
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 92))(MEMORY[0x88731C], 0, 0); /*0x53bc24*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)unk_A9FA9C + 92))(unk_A9FA9C, 0, 0); /*0x53bc2f*/
  v49 = v6; /*0x53bc34*/
  if ( v5 && v6 ) /*0x53bc3f*/
  {
    v7 = 0.0; /*0x53bc45*/
    unk_A9FAA4 = 0.0; /*0x53bc54*/
    v8 = 0.0; /*0x53bc5a*/
    unk_A9FAA0 = 0.0; /*0x53bc62*/
    if ( a1 ) /*0x53bc68*/
      v9 = unk_A9FA98; /*0x53bc75*/
    else
      v9 = unk_A9FAA8 - unk_A9FA98; /*0x53bc71*/
    if ( v9 > 0 ) /*0x53bc7d*/
    {
      v10 = v9; /*0x53bc83*/
      do /*0x53bc92*/
      {
        v7 = v7 + 0.002; /*0x53bc8d*/
        v8 = v8 + v7; /*0x53bc8f*/
        --v10; /*0x53bc91*/
      }
      while ( v10 ); /*0x53bc92*/
      unk_A9FAA0 = v8; /*0x53bc94*/
      unk_A9FAA4 = v7; /*0x53bc9a*/
    }
    v51 = 255 * v9 / unk_A9FAA8; /*0x53bcaa*/
    v11 = DDraw::GetStatus() - 1; /*0x53bcb2*/
    if ( v11 ) /*0x53bcb3*/
    {
      if ( v11 == 1 ) /*0x53bcba*/
      {
        Render_Render(v51, v1, v2, v47, v50); /*0x53bea4*/
      }
      else
      {
        v12 = (_WORD *)v5; /*0x53bcc2*/
        v52 = (_WORD *)v5; /*0x53bcc7*/
        v57 = (float)(v1 / 2); /*0x53bcd5*/
        v13 = (double)(v2 / 2); /*0x53bcdf*/
        v55 = v13; /*0x53bce4*/
        v31 = v13 * v55 + v57 * v57; /*0x53bcf2*/
        v59 = -v55; /*0x53bcfa*/
        if ( v2 > 0 ) /*0x53bcfd*/
        {
          v37 = v2; /*0x53bd0b*/
          do /*0x53be86*/
          {
            v35 = -v57; /*0x53bd08*/
            v61 = v35; /*0x53bd13*/
            if ( v1 > 0 ) /*0x53bd16*/
            {
              v40 = v1; /*0x53bd25*/
              do /*0x53be64*/
              {
                v34 = v59 * v59; /*0x53bd2e*/
                v14 = (1.0 - (v61 * v61 + v34) / v31) * 5.0; /*0x53bd43*/
                v42 = v14 * v14 * unk_A9FAA0; /*0x53bd53*/
                ComputeChronosphereDistortion(v42); /*0x53bd5c*/
                v45 = v14; /*0x53bd61*/
                ComputeDistortionVariant(v42); /*0x53bd65*/
                v43 = v14; /*0x53bd6a*/
                v28 = v45 * v61 + v43 * v59 + v57; /*0x53bd7e*/
                v15 = (int)v28; /*0x53bd93*/
                v29 = v45 * v59 - v43 * v61 + v55; /*0x53bd9b*/
                v16 = (int)v29; /*0x53bda4*/
                if ( v15 >= 0 ) /*0x53bda9*/
                {
                  if ( v15 >= v1 ) /*0x53bdba*/
                    v15 = v1 - 1; /*0x53bdbc*/
                }
                else
                {
                  v15 = 0; /*0x53bdab*/
                }
                if ( v16 >= 0 ) /*0x53bdc1*/
                {
                  if ( v16 >= v2 ) /*0x53bdcc*/
                    v16 = v2 - 1; /*0x53bdce*/
                }
                else
                {
                  v16 = 0; /*0x53bdc3*/
                }
                v61 = v61 + 1.0; /*0x53bdde*/
                v17 = v49 + 2 * (v15 + v50 * v16); /*0x53bdeb*/
                LOWORD(v17) = *(_WORD *)v17; /*0x53bdee*/
                *v52 = ((v17 & 0x1F) + ((int)((unsigned __int16)v51 * (31 - (v17 & 0x1F))) >> 8)) /*0x53be54*/
                     | (32 * (((v17 >> 5) & 0x1F) + ((int)((unsigned __int16)v51 * (31 - ((v17 >> 5) & 0x1F))) >> 8)))
                     | ((((v17 >> 10) & 0x1F)
                       + (unsigned __int16)((int)((unsigned __int16)v51 * (31 - ((v17 >> 10) & 0x1F))) >> 8)) << 10);
                v1 = v54; /*0x53be57*/
                v12 = ++v52; /*0x53be5a*/
                --v40; /*0x53be61*/
              }
              while ( v40 ); /*0x53be64*/
            }
            v18 = v37 == 1; /*0x53be79*/
            v12 += v47; /*0x53be7a*/
            --v37; /*0x53be7d*/
            v59 = v59 + 1.0; /*0x53be80*/
            v52 = v12; /*0x53be83*/
          }
          while ( !v18 ); /*0x53be86*/
        }
      }
    }
    else
    {
      v19 = (_WORD *)v5; /*0x53beb0*/
      v53 = (_WORD *)v5; /*0x53beb5*/
      v56 = (float)(v1 / 2); /*0x53bec3*/
      v20 = (double)(v2 / 2); /*0x53becd*/
      v58 = v20; /*0x53bed2*/
      v30 = v20 * v58 + v56 * v56; /*0x53bee0*/
      v62 = -v58; /*0x53bee8*/
      if ( v2 > 0 ) /*0x53beeb*/
      {
        v36 = v2; /*0x53bef9*/
        do /*0x53c070*/
        {
          v26 = -v56; /*0x53bef6*/
          v60 = v26; /*0x53bf01*/
          if ( v1 > 0 ) /*0x53bf04*/
          {
            v46 = v1; /*0x53bf13*/
            do /*0x53c04e*/
            {
              v27 = v62 * v62; /*0x53bf1c*/
              v21 = (1.0 - (v60 * v60 + v27) / v30) * 5.0; /*0x53bf31*/
              v38 = v21 * v21 * unk_A9FAA0; /*0x53bf41*/
              ComputeChronosphereDistortion(v38); /*0x53bf4a*/
              v41 = v21; /*0x53bf52*/
              ComputeDistortionVariant(v38); /*0x53bf56*/
              v39 = v21; /*0x53bf5b*/
              v32 = v41 * v60 + v39 * v62 + v56; /*0x53bf6f*/
              v22 = (int)v32; /*0x53bf84*/
              v33 = v41 * v62 - v39 * v60 + v58; /*0x53bf8c*/
              v44 = (int)v33; /*0x53bf92*/
              v23 = v44; /*0x53bf95*/
              if ( v22 >= 0 ) /*0x53bf9a*/
              {
                if ( v22 >= v1 ) /*0x53bfa2*/
                  v22 = v1 - 1; /*0x53bfa4*/
              }
              else
              {
                v22 = 0; /*0x53bf9c*/
              }
              if ( v44 >= 0 ) /*0x53bfac*/
              {
                if ( v44 >= v2 ) /*0x53bfb4*/
                  v23 = v2 - 1; /*0x53bfb6*/
              }
              else
              {
                v23 = 0; /*0x53bfae*/
              }
              v60 = v60 + 1.0; /*0x53bfc6*/
              v24 = v49 + 2 * (v22 + v50 * v23); /*0x53bfd3*/
              LOWORD(v24) = *(_WORD *)v24; /*0x53bfd6*/
              v2 = v48; /*0x53c039*/
              *v53 = ((v24 & 0x3F) + ((int)((unsigned __int16)v51 * (63 - (v24 & 0x3F))) >> 8)) /*0x53c03e*/
                   | ((((v24 >> 6) & 0x1F)
                     + (unsigned __int16)((int)((unsigned __int16)v51 * (31 - ((v24 >> 6) & 0x1F))) >> 8)) << 6)
                   | ((((unsigned __int16)v24 >> 11)
                     + (unsigned __int16)(((unsigned __int16)v51 * (31 - ((unsigned __int16)v24 >> 11))) >> 8)) << 11);
              v1 = v54; /*0x53c041*/
              v19 = ++v53; /*0x53c044*/
              --v46; /*0x53c04b*/
            }
            while ( v46 ); /*0x53c04e*/
          }
          v19 += v47; /*0x53c060*/
          v18 = v36 == 1; /*0x53c066*/
          v53 = v19; /*0x53c067*/
          --v36; /*0x53c06a*/
          v62 = v62 + 1.0; /*0x53c06d*/
        }
        while ( !v18 ); /*0x53c070*/
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 96))(unk_A9FA9C); /*0x53c07e*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 96))(MEMORY[0x88731C]); /*0x53c08c*/
}


// ==== 0x0053C0A0  Render_Render  this=-  sig=csp ====
int __fastcall sub_53C0A0(_WORD *a1, int a2, unsigned __int16 a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  int result; // eax
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  bool v14; // zf
  float v16; // [esp+14h] [ebp-34h]
  float v17; // [esp+14h] [ebp-34h]
  float v18; // [esp+18h] [ebp-30h]
  float v19; // [esp+1Ch] [ebp-2Ch]
  float v20; // [esp+20h] [ebp-28h]
  int v21; // [esp+24h] [ebp-24h]
  int v22; // [esp+28h] [ebp-20h]
  float v23; // [esp+2Ch] [ebp-1Ch]
  float v24; // [esp+2Ch] [ebp-1Ch]
  float v25; // [esp+30h] [ebp-18h]
  _WORD *v26; // [esp+34h] [ebp-14h]
  float v27; // [esp+38h] [ebp-10h]
  float v28; // [esp+3Ch] [ebp-Ch]
  float v29; // [esp+40h] [ebp-8h]
  float v30; // [esp+44h] [ebp-4h]

  v7 = a4; /*0x53c0a7*/
  v26 = a1; /*0x53c0b6*/
  v28 = (float)(a4 / 2); /*0x53c0c4*/
  result = a5 / 2; /*0x53c0c9*/
  v9 = (double)(a5 / 2); /*0x53c0ce*/
  v27 = v9; /*0x53c0d3*/
  v18 = v9 * v27 + v28 * v28; /*0x53c0e1*/
  v29 = -v27; /*0x53c0e9*/
  if ( a5 > 0 ) /*0x53c0ec*/
  {
    v21 = a5; /*0x53c0fb*/
    do /*0x53c26c*/
    {
      v20 = -v28; /*0x53c0f7*/
      v30 = v20; /*0x53c103*/
      if ( v7 > 0 ) /*0x53c106*/
      {
        v22 = v7; /*0x53c115*/
        do /*0x53c24a*/
        {
          v19 = v29 * v29; /*0x53c11e*/
          v10 = (1.0 - (v30 * v30 + v19) / v18) * 5.0; /*0x53c133*/
          v23 = unk_A9FAA0 * v10 * v10; /*0x53c143*/
          v25 = ComputeChronosphereDistortion(v23); /*0x53c151*/
          v24 = ComputeDistortionVariant(v23); /*0x53c15a*/
          v16 = v25 * v30 + v24 * v29 + v28; /*0x53c16e*/
          v11 = (int)v16; /*0x53c183*/
          v17 = v25 * v29 - v24 * v30 + v27; /*0x53c18b*/
          v12 = (int)v17; /*0x53c194*/
          if ( v11 >= 0 ) /*0x53c199*/
          {
            if ( v11 >= v7 ) /*0x53c1a1*/
              v11 = v7 - 1; /*0x53c1a3*/
          }
          else
          {
            v11 = 0; /*0x53c19b*/
          }
          if ( v12 >= 0 ) /*0x53c1a8*/
          {
            if ( v12 >= a5 ) /*0x53c1b3*/
              v12 = a5 - 1; /*0x53c1b5*/
          }
          else
          {
            v12 = 0; /*0x53c1aa*/
          }
          v30 = v30 + 1.0; /*0x53c1c5*/
          v13 = a2 + 2 * (v11 + a7 * v12); /*0x53c1d2*/
          LOWORD(v13) = *(_WORD *)v13; /*0x53c1d5*/
          *v26 = ((v13 & 0x1F) + ((int)(a3 * (31 - (v13 & 0x1F))) >> 8)) /*0x53c23a*/
               | (32 * (((v13 >> 5) & 0x3F) + ((int)(a3 * (63 - ((v13 >> 5) & 0x3F))) >> 8)))
               | ((((unsigned __int16)v13 >> 11) + (unsigned __int16)((a3 * (31 - ((unsigned __int16)v13 >> 11))) >> 8)) << 11);
          v7 = a4; /*0x53c23d*/
          a1 = ++v26; /*0x53c240*/
          --v22; /*0x53c247*/
        }
        while ( v22 ); /*0x53c24a*/
      }
      a1 += a6; /*0x53c25c*/
      result = v21 - 1; /*0x53c262*/
      v14 = v21 == 1; /*0x53c262*/
      v26 = a1; /*0x53c263*/
      --v21; /*0x53c266*/
      v29 = v29 + 1.0; /*0x53c269*/
    }
    while ( !v14 ); /*0x53c26c*/
  }
  return result; /*0x53c273*/
}


// ==== 0x0053C280  ScenarioClass::UpdateLighting  this=ScenarioClass  sig=ida-proto ====
int ScenarioClass::UpdateLighting()
{
  if ( unk_A9FABC == 1 || unk_A9FAB0 ) /*0x53c297*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3416); /*0x53c3be*/
    return UpdateSurfaceAnimations( /*0x53c43a*/
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3417) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3418) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3419) / 100,
             1);
  }
  else if ( unk_A9FAB4 ) /*0x53c2a4*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3410); /*0x53c2b3*/
    return UpdateSurfaceAnimations( /*0x53c30e*/
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3411) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3412) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3413) / 100,
             1);
  }
  else if ( !unk_A9FAC0 || unk_A9FAC0 == 5 ) /*0x53c31f*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3402); /*0x53c3a0*/
    return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53c3a9*/
  }
  else
  {
    *((_DWORD *)MEMORY[0xA8B230] + 3404) = *((_DWORD *)MEMORY[0xA8B230] + 3423); /*0x53c32e*/
    return UpdateSurfaceAnimations( /*0x53c389*/
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3424) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3425) / 100,
             1000 * *((_DWORD *)MEMORY[0xA8B230] + 3426) / 100,
             1);
  }
}


// ==== 0x0053C450  TechnoClass::CanBePermaMC  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::CanBePermaMC(void *this)
{
  if ( !this ) /*0x53c455*/
    return 0; /*0x53c457*/
  if ( (*(int (__thiscall **)(void *))(this->fallRate)(this) == 6 ) /*0x53c465*/
    return 0; /*0x53c467*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3381) ) /*0x53c475*/
    return 0; /*0x53c47f*/
  if ( (*(unsigned __int8 (__thiscall **)(void *))(this->q160)(this) ) /*0x53c487*/
    return 0; /*0x53c491*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3434) ) /*0x53c49f*/
    return 0; /*0x53c4a9*/
  return (*(unsigned __int8 (__thiscall **)(void *))(this->q054)(this) == 0; /*0x53c459*/
}


// ==== 0x0053C4C0  _DynamicVectorClass_PBVAnimClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall DeleteCommandClass_28_::sub_53C4C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x53c4c6*/
  *(_DWORD *)(this + 16) = 0; /*0x53c4c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x53c4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x53c4d6*/
    *(_DWORD *)(this + 4) = 0; /*0x53c4de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53c4e1*/
  *(_DWORD *)(this + 8) = 0; /*0x53c4e4*/
}


// ==== 0x0053C4F0  _DynamicVectorClass_PBVAnimClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28_::sub_53C4F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x53c4f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x53c505*/
  else
    return 0; /*0x53c4f7*/
}


// ==== 0x0053C510  _VectorClass_PBVAnimClass::Seek  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x53c51a*/
}


// ==== 0x0053C520  _VectorClass_PBVAnimClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x53c522*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x53c52d*/
  {
    v3 = 0; /*0x53c52f*/
    if ( v2 <= 0 ) /*0x53c533*/
      return 1; /*0x53c553*/
    v4 = (_DWORD *)this->Items; /*0x53c535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53c53b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53c544*/
    {
      ++v3; /*0x53c546*/
      ++v4; /*0x53c547*/
      if ( v3 >= v2 ) /*0x53c54c*/
        return 1; /*0x53c54c*/
    }
  }
  return 0; /*0x53c54e*/
}


// ==== 0x0053C560  _VectorClass_PBVAnimClass::Release  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x53c56c*/
  {
    this->IsInitialized = 0; /*0x53c576*/
    if ( a3 ) /*0x53c57c*/
      v4 = a3; /*0x53c592*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53c58e*/
    this->IsInitialized = 1; /*0x53c596*/
    if ( v4 ) /*0x53c59a*/
    {
      if ( this->Items ) /*0x53c5a5*/
      {
        v6 = this->Capacity; /*0x53c5ac*/
        if ( a2 < v6 ) /*0x53c5b1*/
          v6 = a2; /*0x53c5b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x53c5b9*/
          ++i; /*0x53c5be*/
        if ( this->IsAllocated ) /*0x53c5cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x53c5d6*/
          this->Items = 0; /*0x53c5de*/
        }
      }
      this->Items = v4; /*0x53c5e7*/
      this->Capacity = a2; /*0x53c5ef*/
      this->IsAllocated = a3 == 0; /*0x53c5f2*/
      return 1; /*0x53c5f8*/
    }
    else
    {
      return 0; /*0x53c59f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53c602*/
    return 1; /*0x53c608*/
  }
}


// ==== 0x0053C610  _VectorClass_PBVAnimClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall DeleteCommandClass_28_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x53c61d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x53c623*/
    *(_DWORD *)(this + 4) = 0; /*0x53c62b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53c62e*/
  *(_DWORD *)(this + 8) = 0; /*0x53c631*/
}


// ==== 0x0053C640  _VectorClass_PBVAnimClass::Read  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x53c640*/
    return 0; /*0x53c648*/
  v3 = *(_DWORD *)(this + 8); /*0x53c64e*/
  result = 0; /*0x53c651*/
  if ( v3 <= 0 ) /*0x53c655*/
    return -1; /*0x53c66c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x53c65b*/
  {
    if ( ++result >= v3 ) /*0x53c66a*/
      return -1; /*0x53c66a*/
  }
  return result; /*0x53c64a*/
}


// ==== 0x0053C680  _VectorClass_PBVAnimClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x53c680*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x53c695*/
  else
    return 0; /*0x53c687*/
}


// ==== 0x0053C6A0  _DynamicVectorClass_PBVAnimClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DeleteCommandClass_28_::sub_53C6A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53c6ac*/
  {
    this->IsInitialized = 0; /*0x53c6b2*/
    if ( a3 ) /*0x53c6b8*/
      v4 = a3; /*0x53c6ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53c6ca*/
    this->IsInitialized = 1; /*0x53c6d2*/
    if ( !v4 ) /*0x53c6d6*/
      return 0; /*0x53c74a*/
    if ( this->Items ) /*0x53c6d8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x53c6df*/
      if ( a2 < v5 ) /*0x53c6e4*/
        v5 = a2; /*0x53c6e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x53c6ec*/
        ++i; /*0x53c6f1*/
      if ( this->IsAllocated ) /*0x53c6fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x53c709*/
        this->Items = 0; /*0x53c711*/
      }
    }
    this->Items = v4; /*0x53c71a*/
    this->DynamicVector_field_0x8 = a2; /*0x53c722*/
    this->IsAllocated = a3 == 0; /*0x53c725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53c72e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x53c731*/
  if ( v7 < this->Items ) /*0x53c739*/
    this->Items = v7; /*0x53c73b*/
  return 1; /*0x53c73e*/
}


// ==== 0x0053C750  _DynamicVectorClass_PBVAnimClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall DeleteCommandClass_28_::sub_53C750(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x53c750*/
  result = 0; /*0x53c753*/
  if ( v2 <= 0 ) /*0x53c758*/
    return -1; /*0x53c76f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x53c75e*/
  {
    if ( ++result >= v2 ) /*0x53c76d*/
      return -1; /*0x53c76d*/
  }
  return result; /*0x53c772*/
}


// ==== 0x0053C780  _VectorClass_PBVAnimClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall DeleteCommandClass_28_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53c783*/
  *Block = &vt_VectorClass_AnimClass_const; /*0x53c786*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53c790*/
  {
    __3_YAXPAX_Z(v3); /*0x53c798*/
    *(Block + 1) = 0; /*0x53c7a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53c7ab*/
  *(Block + 2) = 0; /*0x53c7b1*/
  if ( (a2 & 1) != 0 ) /*0x53c7b8*/
    __3_YAXPAX_Z(Block); /*0x53c7bb*/
  return (VectorClass *)Block; /*0x53c7c5*/
}


// ==== 0x0053C7D0  _DynamicVectorClass_PBVAnimClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DeleteCommandClass_28_::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53c7d3*/
  *Block = &vt_VectorClass_AnimClass_const; /*0x53c7d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53c7e0*/
  {
    __3_YAXPAX_Z(v3); /*0x53c7e8*/
    *(Block + 1) = 0; /*0x53c7f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53c7fb*/
  *(Block + 2) = 0; /*0x53c801*/
  if ( (a2 & 1) != 0 ) /*0x53c808*/
    __3_YAXPAX_Z(Block); /*0x53c80b*/
  return (DynamicVector *)Block; /*0x53c815*/
}


// ==== 0x0053C820  sub_53C820  this=-  sig=ida-proto ====
void sub_53C820()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53c82c*/
  unk_A9FF90 = Math::Sqrt(v0 + v0); /*0x53c83e*/
}


// ==== 0x0053C850  sub_53C850  this=-  sig=ida-proto ====
void sub_53C850()
{
  unk_AA0140 = unk_A9FF90 / 60.0; /*0x53c85c*/
}


// ==== 0x0053C870  sub_53C870  this=-  sig=ida-proto ====
void sub_53C870()
{
  unk_AA0110 = 1.0 / unk_AA0140; /*0x53c87c*/
}


// ==== 0x0053C890  sub_53C890  this=-  sig=ida-proto ====
void sub_53C890()
{
  unk_AA0108 = 0.0174532925199433 * 45.0; /*0x53c89c*/
}


// ==== 0x0053C8B0  sub_53C8B0  this=-  sig=ida-proto ====
void sub_53C8B0()
{
  unk_A9FF98 = 0.0174532925199433 * 60.0; /*0x53c8bc*/
}


// ==== 0x0053C8D0  sub_53C8D0  this=-  sig=ida-proto ====
void sub_53C8D0()
{
  unk_A9FAE0 = 0.0174532925199433 * 90.0; /*0x53c8dc*/
}


// ==== 0x0053C8F0  sub_53C8F0  this=-  sig=ida-proto ====
__int64 sub_53C8F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_A9FAE0 - unk_A9FF98); /*0x53c902*/
  result = Math::RoundToInt(v0 * unk_A9FF90 * 0.5); /*0x53c916*/
  unk_AA0148 = result; /*0x53c91b*/
  return result; /*0x53c920*/
}


// ==== 0x0053C930  sub_53C930  this=-  sig=ida-proto ====
void sub_53C930()
{
  unk_A9FFA0 = Math::ArcTan((double)unk_AA0148 * 0.00390625); /*0x53c947*/
}


// ==== 0x0053C960  sub_53C960  this=-  sig=ida-proto ====
void sub_53C960()
{
  unk_A9FFC0 = Math::ArcTan((double)(2 * unk_AA0148) / unk_A9FF90); /*0x53c982*/
}


// ==== 0x0053C990  sub_53C990  this=-  sig=ida-proto ====
__int64 sub_53C990()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA0148) + 0.5); /*0x53c9ab*/
  unk_AA013C = result; /*0x53c9b0*/
  return result; /*0x53c9b6*/
}


// ==== 0x0053C9C0  sub_53C9C0  this=-  sig=ida-proto ====
int sub_53C9C0()
{
  unk_A9FF88 = 0; /*0x53c9c2*/
  unk_A9FF8A = 0; /*0x53c9c8*/
  return 0; /*0x53c9ce*/
}


// ==== 0x0053C9D0  sub_53C9D0  this=-  sig=ida-proto ====
int sub_53C9D0()
{
  unk_A9FFB0 = 0; /*0x53c9d2*/
  unk_A9FFB4 = 0; /*0x53c9d7*/
  unk_A9FFB8 = 0; /*0x53c9dc*/
  return 0; /*0x53c9e1*/
}


// ==== 0x0053C9F0  sub_53C9F0  this=-  sig=ida-proto ====
int sub_53C9F0()
{
  unk_AA0138 = 0; /*0x53c9f5*/
  unk_AA0130 = 128; /*0x53c9ff*/
  unk_AA0134 = 128; /*0x53ca04*/
  return 128; /*0x53ca09*/
}


// ==== 0x0053CA10  sub_53CA10  this=-  sig=ida-proto ====
int sub_53CA10()
{
  unk_A9FF70 = 0; /*0x53ca12*/
  unk_A9FF74 = 0; /*0x53ca17*/
  unk_A9FF78 = 0; /*0x53ca1c*/
  unk_A9FF7C = 0; /*0x53ca21*/
  return 0; /*0x53ca26*/
}


// ==== 0x0053CA30  sub_53CA30  this=-  sig=ida-proto ====
void sub_53CA30()
{
  unk_A9FF80 = (512.0 - 0.0 + 57.0) * 0.0125; /*0x53ca48*/
}


// ==== 0x0053CA50  sub_53CA50  this=-  sig=ida-proto ====
int sub_53CA50()
{
  unk_A9FFA8 = unk_A9FF80; /*0x53ca5b*/
  return LODWORD(unk_A9FF80); /*0x53ca66*/
}


// ==== 0x0053CA70  sub_53CA70  this=-  sig=ida-proto ====
int sub_53CA70()
{
  unk_AA011C = 0; /*0x53ca77*/
  unk_AA0120 = 0; /*0x53ca7c*/
  unk_AA0124 = 1; /*0x53ca81*/
  unk_AA0125 = 0; /*0x53ca88*/
  dword_AA0118 = (int)&vt_DynamicVectorClass_IonBlastClass; /*0x53ca8d*/
  unk_AA012C = 10; /*0x53ca97*/
  unk_AA0128 = 0; /*0x53caa1*/
  return atexit(sub_53CAB0); /*0x53caac*/
}


// ==== 0x0053CAB0  sub_53CAB0  this=-  sig=ida-proto ====
void __cdecl sub_53CAB0()
{
  if ( (unk_A9FAD8 & 1) == 0 ) /*0x53caba*/
  {
    dword_AA0118 = (int)&vt_VectorClass_IonBlastClass; /*0x53cabe*/
    unk_A9FAD8 |= 1u; /*0x53cad1*/
    if ( unk_AA011C ) /*0x53cad7*/
    {
      if ( unk_AA0125 ) /*0x53cae1*/
      {
        __3_YAXPAX_Z(unk_AA011C); /*0x53cae4*/
        unk_AA011C = 0; /*0x53caec*/
      }
    }
    unk_AA0125 = 0; /*0x53caf6*/
    unk_AA0120 = 0; /*0x53cafd*/
  }
}


// ==== 0x0053CB10  ActionQueue::PushEntry  this=IUnknown  sig=csp ====
_DWORD *__thiscall ActionQueue::PushEntry(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  *this = a2; /*0x53cb1d*/
  this->q004 = a3; /*0x53cb23*/
  this->q00C = 0; /*0x53cb28*/
  this->q010 = 0; /*0x53cb2b*/
  this->q008 = a4; /*0x53cb2e*/
  if ( unk_AA0128 < unk_AA0120 /*0x53cb63*/
    || (unk_AA0125 || !unk_AA0120)
    && unk_AA012C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AA0118 + 8))(
         &dword_AA0118,
         unk_AA0120 + unk_AA012C,
         0) )
  {
    v5 = unk_AA0128++; /*0x53cb70*/
    *((_DWORD *)unk_AA011C + v5) = this; /*0x53cb7f*/
  }
  return this; /*0x53cb84*/
}


// ==== 0x0053CBE0  ExplosionClass::ProcessFrame  this=CampaignClass  sig=csp ====
void __thiscall ExplosionClass::ProcessFrame(int Block)
{
  int v2; // eax
  void **v3; // eax
  int v4; // esi
  int v5; // edi
  void **v6; // eax
  int v7; // esi
  int v8; // edi
  void **v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // edx
  __int16 v14; // ax
  int v15; // edi
  _DWORD *v16; // esi
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  char *v20; // ebp
  int v21; // edx
  int v22; // eax
  int v23; // ebp
  int v24; // ecx
  IUnknown *v25; // ebp
  double v26; // st7
  double v27; // st7
  float v28; // ecx
  double v29; // st6
  double v30; // st7
  double v31; // st7
  IUnknown *aP0[2]; // [esp+28h] [ebp-B8h] BYREF
  CoordStruct aP2; // [esp+30h] [ebp-B0h] BYREF
  float v34; // [esp+3Ch] [ebp-A4h]
  int v35; // [esp+40h] [ebp-A0h] BYREF
  float v36; // [esp+44h] [ebp-9Ch]
  double v37; // [esp+48h] [ebp-98h]
  float v38; // [esp+50h] [ebp-90h]
  float v39; // [esp+54h] [ebp-8Ch]
  float v40; // [esp+58h] [ebp-88h]
  float v41; // [esp+5Ch] [ebp-84h]
  float v42; // [esp+60h] [ebp-80h]
  float v43; // [esp+64h] [ebp-7Ch]
  float v44; // [esp+68h] [ebp-78h]
  float v45; // [esp+6Ch] [ebp-74h]
  float v46; // [esp+70h] [ebp-70h]
  int v47; // [esp+74h] [ebp-6Ch]
  IUnknown *v48; // [esp+78h] [ebp-68h]
  __int16 v49; // [esp+7Ch] [ebp-64h]
  __int16 v50; // [esp+7Eh] [ebp-62h]
  Tactical *v54; // [esp+84h] [ebp-5Ch]
  int v52; // [esp+88h] [ebp-58h]
  float v53; // [esp+8Ch] [ebp-54h]
  float var50; // [esp+90h] [ebp-50h]
  float v55; // [esp+94h] [ebp-4Ch]
  int v56; // [esp+98h] [ebp-48h] BYREF
  int v57; // [esp+9Ch] [ebp-44h]
  int v58; // [esp+A0h] [ebp-40h] BYREF
  int v59; // [esp+A4h] [ebp-3Ch]
  _DWORD a1[4]; // [esp+A8h] [ebp-38h] BYREF
  float v61; // [esp+B8h] [ebp-28h]
  float v62; // [esp+BCh] [ebp-24h]
  double v63; // [esp+C0h] [ebp-20h]
  int v64; // [esp+C8h] [ebp-18h]
  int v65; // [esp+CCh] [ebp-14h] BYREF
  double v66; // [esp+D0h] [ebp-10h]
  int v67[2]; // [esp+D8h] [ebp-8h] BYREF

  if ( *(int *)(Block + 12) < 79 ) /*0x53cbf8*/
  {
    if ( *(_DWORD *)(Block + 16) != 1 ) /*0x53cc3e*/
    {
      Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], (_DWORD *)Block, (IUnknown *)&v58); /*0x53cc53*/
      if ( !*(_DWORD *)(Block + 12) ) /*0x53cc58*/
      {
        if ( *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)Block) + 59) == 2 ) /*0x53cc7c*/
        {
          v3 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53cc7e*/
          if ( v3 ) /*0x53cc88*/
          {
            v4 = *(_DWORD *)Block; /*0x53cc91*/
            v5 = *(_DWORD *)(Block + 4); /*0x53cc93*/
            aP2.Z = *(_DWORD *)(Block + 8) + 5; /*0x53cc9d*/
            aP2.X = v4; /*0x53ccb4*/
            aP2.Y = v5; /*0x53ccb8*/
            AnimClass::ctor( /*0x53ccce*/
              v3,
              *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3012)
                              + 4 * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3024)
                              - 4),
              &aP2,
              0,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53ccd0*/
          if ( v6 ) /*0x53ccda*/
          {
            v7 = *(_DWORD *)Block; /*0x53ccdf*/
            v8 = *(_DWORD *)(Block + 4); /*0x53cce1*/
            aP2.Z = *(_DWORD *)(Block + 8) + 5; /*0x53ccf1*/
            aP2.X = v7; /*0x53cd02*/
            aP2.Y = v8; /*0x53cd06*/
            AnimClass::ctor( /*0x53cd14*/
              v6,
              *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 664),
              &aP2,
              0,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
          }
        }
        v9 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53cd1e*/
        if ( v9 ) /*0x53cd28*/
        {
          v10 = *(_DWORD *)Block; /*0x53cd2d*/
          v11 = *(_DWORD *)(Block + 4); /*0x53cd2f*/
          aP2.Z = *(_DWORD *)(Block + 8) + 5; /*0x53cd39*/
          aP2.X = v10; /*0x53cd50*/
          aP2.Y = v11; /*0x53cd54*/
          AnimClass::ctor( /*0x53cd62*/
            v9,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 668),
            &aP2,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)Block) + 80) & 0x100) != 0 ) /*0x53cd7b*/
        {
          v12 = *(_DWORD *)(Block + 8); /*0x53cd7d*/
          v13 = *(_DWORD *)(Block + 4); /*0x53cd88*/
          aP2.X = *(_DWORD *)Block; /*0x53cd8d*/
          aP2.Z = unk_AA013C + v12; /*0x53cd91*/
          aP2.Y = v13; /*0x53cd9a*/
          PlaySoundEffectAt( /*0x53cdb5*/
            (TechnoClass *)&aP2,
            *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1168),
            0,
            *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080),
            1,
            0);
        }
        PlaySoundEffectAt( /*0x53cdd4*/
          (TechnoClass *)Block,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1168),
          0,
          *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080),
          1,
          0);
        CreateSmokeEffectAt( /*0x53ce05*/
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1168),
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080),
          *(_DWORD *)Block,
          *(_DWORD *)(Block + 4),
          *(_DWORD *)(Block + 8),
          0,
          0);
      }
      v49 = *(_DWORD *)Block / 256; /*0x53ce18*/
      v50 = *(_DWORD *)(Block + 4) / 256; /*0x53ce2c*/
      v14 = -3; /*0x53ce31*/
      v35 = -3; /*0x53ce36*/
      do /*0x53d2fc*/
      {
        v15 = -3; /*0x53ce3e*/
        v47 = -3; /*0x53ce45*/
        LOWORD(v48) = v49 + v14; /*0x53ce49*/
        do /*0x53d2ea*/
        {
          HIWORD(v48) = v15 + v50; /*0x53ce59*/
          aP0[0] = v48; /*0x53ce67*/
          v16 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0) + 57); /*0x53ce70*/
          if ( v16 ) /*0x53ce78*/
          {
            do /*0x53d2d8*/
            {
              if ( (*(int (__thiscall **)(_DWORD *))(*v16 + 44))(v16) == 15 /*0x53ce94*/
                || (*(int (__thiscall **)(_DWORD *))(*v16 + 44))(v16) == 1 )
              {
                a1[0] = v16[39]; /*0x53cea4*/
                a1[1] = v16[40]; /*0x53ceb6*/
                a1[2] = v16[41]; /*0x53cec8*/
                Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v56); /*0x53ced5*/
                v54 = (Tactical *)(v56 - v58); /*0x53cef1*/
                v52 = v57 - v59; /*0x53cf05*/
                v17 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x53cf1e*/
                                                    (double)(v57 - v59) * (double)(v57 - v59)
                                                  + (double)(v56 - v58) * (double)(v56 - v58)));
                v18 = Math::RoundToInt(v17) + 8; /*0x53cf2b*/
                if ( v18 < 256 ) /*0x53cf33*/
                {
                  v19 = dword_A9FFC8[*(_DWORD *)(Block + 12)]; /*0x53cf47*/
                  v20 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 92))(v19, v18 + 256, 128); /*0x53cf54*/
                  if ( *v20 > 0 ) /*0x53cf5a*/
                  {
                    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v16 + 1348))(v16, 0, 0); /*0x53cf64*/
                    *((_BYTE *)v16 + 1716) = 2 * ComputeSpiralOffset(v67, *v20)[1]; /*0x53cf7f*/
                  }
                  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v16 + 132))(v16) + 176) ) /*0x53cf8f*/
                  {
                    if ( !**(_BYTE **)((*(int (__thiscall **)(_DWORD *))(*v16 + 132))(v16) + 176) && *v20 >= 0 ) /*0x53cfba*/
                    {
                      LODWORD(v63) = v16[39]; /*0x53cfc4*/
                      v21 = v16[40]; /*0x53cfcb*/
                      v22 = *(_DWORD *)Block; /*0x53cfd1*/
                      v64 = v16[41]; /*0x53cfd3*/
                      v23 = *(_DWORD *)(Block + 4); /*0x53cfe1*/
                      aP0[0] = (IUnknown *)(v22 - LODWORD(v63)); /*0x53cfe6*/
                      v24 = *(_DWORD *)(Block + 8); /*0x53cff0*/
                      v44 = (float)(v22 - LODWORD(v63)); /*0x53cffe*/
                      aP0[0] = (IUnknown *)(v24 - v64); /*0x53d00c*/
                      v41 = v44; /*0x53d010*/
                      v45 = (float)(v21 - v23); /*0x53d014*/
                      v42 = v45; /*0x53d027*/
                      v46 = (float)(v24 - v64); /*0x53d02c*/
                      v43 = v46; /*0x53d03a*/
                      *(double *)aP0 = (double)(*(__int16 *)ProgressTimer::GetValue( /*0x53d05a*/
                                                              (_WORD *)v16 + 452,
                                                              (IUnknown *)&v65)
                                              - 0x3FFF)
                                     * -0.00009587672516830327;
                      v25 = aP0[0]; /*0x53d062*/
                      *(float *)&v37 = Math::SinCos(aP0[0]); /*0x53d06d*/
                      *(float *)&aP2.X = Math::ArcTan2(v25); /*0x53d078*/
                      v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v44 * v44 + v45 * v45 + v46 * v46)); /*0x53d0a4*/
                      v36 = v26; /*0x53d0a9*/
                      if ( fabs(v26) > 0.00002 ) /*0x53d0bd*/
                      {
                        v43 = 0.0; /*0x53d0d6*/
                        v27 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v42 * v42 + v41 * v41)); /*0x53d0e3*/
                        if ( v27 == 0.0 ) /*0x53d0f6*/
                        {
                          v28 = v43; /*0x53d134*/
                          v38 = v41; /*0x53d138*/
                          v39 = v42; /*0x53d13e*/
                        }
                        else
                        {
                          v53 = v41 / v27; /*0x53d0fe*/
                          v38 = v53; /*0x53d10c*/
                          var50 = v42 / v27; /*0x53d110*/
                          v39 = var50; /*0x53d11e*/
                          v55 = 0.0 / v27; /*0x53d122*/
                          v28 = v55; /*0x53d126*/
                        }
                        v40 = v28; /*0x53d152*/
                        *(float *)aP0 = v38 * *(float *)&aP2.X + v39 * *(float *)&v37; /*0x53d15b*/
                        v61 = v28 * *(float *)&aP2.X; /*0x53d171*/
                        v29 = v38 * *(float *)&v37 - v39 * *(float *)&aP2.X; /*0x53d188*/
                        v62 = v29; /*0x53d18a*/
                        v34 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x53d1b6*/
                                                            v61 * v61
                                                          + v29 * v29
                                                          + -(v28 * *(float *)&v37) * -(v28 * *(float *)&v37)));
                        if ( fabs(*(float *)&aP2.X * *(float *)aP0 - *(float *)&v37 * v34 - v38) > 0.0002 /*0x53d205*/
                          || fabs(*(float *)&aP2.X * v34 + *(float *)&v37 * *(float *)aP0 - v39) > 0.0002 )
                        {
                          v34 = -v34; /*0x53d20d*/
                        }
                        v37 = v36 + 51.0; /*0x53d21e*/
                        v66 = (Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64( /*0x53d257*/
                                                          (v36 - (double)*(int *)(Block + 12) * unk_A9FFA8 + 38.0)
                                                        * 0.11))
                             * 3.5
                             + 3.0)
                            * 51.0;
                        v30 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64( /*0x53d27c*/
                                                          (v36 - (double)*(int *)(Block + 12) * unk_A9FFA8 + 38.0)
                                                        * 0.11));
                        v31 = (v30 * 0.11 * 51.0 * 3.5 * v37 - v66) / (v37 * v37); /*0x53d2a9*/
                        *((float *)v16 + 202) = v34 * v31 * 6.283185307179586; /*0x53d2b7*/
                        *((float *)v16 + 203) = -(*(float *)aP0 * v31 * 6.283185307179586); /*0x53d2cb*/
                      }
                    }
                  }
                }
              }
              v16 = (_DWORD *)v16[12]; /*0x53d2d3*/
            }
            while ( v16 ); /*0x53d2d8*/
            v15 = v47; /*0x53d2de*/
          }
          v47 = ++v15; /*0x53d2e6*/
        }
        while ( v15 < 4 ); /*0x53d2ea*/
        v14 = ++v35; /*0x53d2f4*/
      }
      while ( v35 < 4 ); /*0x53d2fc*/
    }
    ++*(_DWORD *)(Block + 12); /*0x53d302*/
  }
  else if ( Block ) /*0x53cbfc*/
  {
    v35 = Block; /*0x53cc12*/
    v2 = (*(int (__thiscall **)(_DWORD *, int *))(dword_AA0118 + 16))(&dword_AA0118, &v35); /*0x53cc16*/
    if ( v2 != -1 ) /*0x53cc1c*/
      Explosion::RemoveItem(&dword_AA0118, v2); /*0x53cc24*/
    __3_YAXPAX_Z((void *)Block); /*0x53cc2a*/
  }
}


// ==== 0x0053D310  ObjectClass::ProcessIonCannonEffect  this=ObjectClass  sig=csp ====
void sub_53D310()
{
  int i; // esi

  for ( i = unk_AA0128 - 1; i >= 0; --i ) /*0x53d31b*/
    ExplosionClass::ProcessFrame(*((int **)unk_AA011C + i)); /*0x53d326*/
}


// ==== 0x0053D330  ObjectClass::GenerateLightningStormGlow  this=ObjectClass  sig=csp ====
char GenerateLightningStormGlow()
{
  char result; // al
  int *v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  double v8; // st7
  int v9; // eax
  char v10; // al
  int v11; // edx
  bool v12; // cc
  int v13; // [esp+24h] [ebp-28h]
  int *i; // [esp+28h] [ebp-24h]
  double v15; // [esp+2Ch] [ebp-20h]
  double v16; // [esp+3Ch] [ebp-10h]
  double v17; // [esp+44h] [ebp-8h]

  result = unk_AA014C; /*0x53d339*/
  if ( !unk_AA014C ) /*0x53d344*/
  {
    v1 = dword_A9FFC8; /*0x53d361*/
    v16 = 0.0; /*0x53d366*/
    v13 = 0; /*0x53d36e*/
    v17 = 0.0 - 57.0; /*0x53d376*/
    for ( i = dword_A9FFC8; ; v1 = i ) /*0x53d37a*/
    {
      v2 = __2_YAPAXI_Z(0x20u); /*0x53d386*/
      v3 = v2; /*0x53d38b*/
      if ( v2 ) /*0x53d392*/
      {
        v2[1] = 512; /*0x53d39e*/
        v2[2] = 256; /*0x53d3a5*/
        v2[3] = 0; /*0x53d3ac*/
        *v2 = &XSurface_Vtable; /*0x53d3b3*/
        v2[4] = 1; /*0x53d3b9*/
        Buffer::Init(v2 + 5, 0, 0x20000); /*0x53d3c0*/
        *v3 = &BSurface_Vtable; /*0x53d3c5*/
      }
      else
      {
        v3 = 0; /*0x53d3cd*/
      }
      *v1 = (int)v3; /*0x53d3cf*/
      (*(void (__thiscall **)(_DWORD *, int))(*v3 + 24))(v3, -1); /*0x53d3d7*/
      v4 = 127; /*0x53d3e7*/
      v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)*v1 + 92))(*v1, 0, 0) + 65792; /*0x53d3ec*/
      do /*0x53d4c5*/
      {
        v6 = 255; /*0x53d3f4*/
        v7 = 4 * v4 * v4; /*0x53d3fc*/
        do /*0x53d4be*/
        {
          v15 = Math::Sqrt((double)(v7 + v6 * v6)); /*0x53d41d*/
          if ( v15 >= v17 && v15 <= v16 ) /*0x53d440*/
          {
            v8 = Math::SinCos((v15 - (double)v13 * unk_A9FFA8 + 38.0) * 0.11); /*0x53d464*/
            v9 = Math::RoundToInt((v8 * 3.5 + 3.0) / (v15 / 51.0 + 1.0) + 0.5); /*0x53d490*/
            v10 = GenerateLightningStormGlow_Helper(0, v9); /*0x53d497*/
            v7 = 4 * v4 * v4; /*0x53d4a1*/
            *(_BYTE *)(v6 + (v4 << 9) + v5) = v10; /*0x53d4a8*/
            *(_BYTE *)((v4 << 9) - v6 + v5) = v10; /*0x53d4af*/
            v11 = v5 - (v4 << 9); /*0x53d4b4*/
            *(_BYTE *)(v6 + v11) = v10; /*0x53d4b6*/
            *(_BYTE *)(v11 - v6) = v10; /*0x53d4bb*/
          }
          --v6; /*0x53d4bd*/
        }
        while ( v6 >= 0 ); /*0x53d4be*/
        --v4; /*0x53d4c4*/
      }
      while ( v4 >= 0 ); /*0x53d4c5*/
      if ( 256.0 - unk_A9FF80 > v16 ) /*0x53d4e0*/
        v16 = unk_A9FF80 + v16; /*0x53d4ec*/
      v17 = unk_A9FF80 * 1.2 + v17; /*0x53d500*/
      if ( v17 > v16 ) /*0x53d50d*/
        v17 = v16; /*0x53d517*/
      result = (_BYTE)i + 4; /*0x53d527*/
      v12 = (int)(i + 1) < (int)&unk_AA0108; /*0x53d52b*/
      ++v13; /*0x53d530*/
      ++i; /*0x53d534*/
      if ( !v12 ) /*0x53d538*/
        break; /*0x53d538*/
    }
    unk_AA014C = 1; /*0x53d53e*/
  }
  return result; /*0x53d545*/
}


// ==== 0x0053D550  ObjectClass::WinMainSetup_Setup  this=ObjectClass  sig=csp ====
int sub_53D550()
{
  int *v0; // esi
  int result; // eax

  v0 = dword_A9FFC8; /*0x53d551*/
  do /*0x53d571*/
  {
    if ( *v0 ) /*0x53d556*/
      result = (**(int (__thiscall ***)(int, int))*v0)(*v0, 1); /*0x53d560*/
    *v0++ = 0; /*0x53d562*/
  }
  while ( (int)v0 < (int)&unk_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}


// ==== 0x0053D580  ZBuffer::RenderSprite  this=CampaignClass  sig=csp ====
char __thiscall ZBuffer::RenderSprite(IUnknown **this)
{
  char result; // al
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  _WORD *v7; // edi
  IUnknown *v8; // ecx
  __int16 v9; // si
  unsigned __int16 v10; // si
  unsigned int SamplePosition; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  unsigned __int16 *v15; // eax
  int m; // ecx
  int v17; // ebx
  int i; // ebx
  int j; // ebp
  char a6; // [esp+13h] [ebp-6Dh] BYREF
  ObjectClass *v20; // [esp+14h] [ebp-6Ch]
  int var68; // [esp+18h] [ebp-68h]
  Tactical *v22; // [esp+1Ch] [ebp-64h]
  int k; // [esp+20h] [ebp-60h]
  int v25; // [esp+24h] [ebp-5Ch]
  int a7; // [esp+28h] [ebp-58h] BYREF
  int a8; // [esp+2Ch] [ebp-54h] BYREF
  int v28; // [esp+30h] [ebp-50h]
  int v29; // [esp+34h] [ebp-4Ch]
  _DWORD v30[2]; // [esp+38h] [ebp-48h] BYREF
  _DWORD v31[2]; // [esp+40h] [ebp-40h] BYREF
  int v32; // [esp+48h] [ebp-38h]
  int v33; // [esp+4Ch] [ebp-34h]
  int v34; // [esp+50h] [ebp-30h] BYREF
  IUnknown *aP2; // [esp+54h] [ebp-2Ch]
  int v36; // [esp+58h] [ebp-28h]
  int v37; // [esp+5Ch] [ebp-24h]
  int a4[4]; // [esp+60h] [ebp-20h] BYREF
  int a1[4]; // [esp+70h] [ebp-10h] BYREF

  result = HouseClass_Player.__pad_5568[22724]; /*0x53d580*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22724] == 2 ) /*0x53d591*/
  {
    result = Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], this, (IUnknown *)v30); /*0x53d5a3*/
    if ( result ) /*0x53d5aa*/
    {
      v3 = *(_DWORD *)&stru_87C374.__pad_579C[22532]; /*0x53d5bb*/
      a1[2] = *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x53d5c7*/
      a1[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x53d5d0*/
      v4 = (int)this->vtable4; /*0x53d5d4*/
      a1[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x53d5da*/
      v5 = dword_A9FFC8[v4]; /*0x53d5de*/
      a1[3] = *(_DWORD *)&stru_87C374.__pad_579C[21660] - 7; /*0x53d5e5*/
      v6 = **(_DWORD **)&stru_87C374.__pad_579C[22532]; /*0x53d5e9*/
      v28 = *(_DWORD *)&stru_87C374.__pad_579C[22532]; /*0x53d5ed*/
      v29 = v5; /*0x53d5f1*/
      v25 = (*(int (__thiscall **)(_DWORD))(v6 + 116))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x53d5fc*/
      v34 = v30[0] - 256; /*0x53d60b*/
      v33 = 256; /*0x53d618*/
      a4[3] = 256; /*0x53d61c*/
      v37 = 256; /*0x53d623*/
      v32 = 512; /*0x53d627*/
      a4[2] = 512; /*0x53d62b*/
      v36 = 512; /*0x53d62f*/
      aP2 = (IUnknown *)(v30[1] - 128); /*0x53d637*/
      a6 = 0; /*0x53d661*/
      v31[0] = 0; /*0x53d666*/
      v31[1] = 0; /*0x53d66a*/
      a4[0] = 0; /*0x53d66e*/
      a4[1] = 0; /*0x53d672*/
      result = CalcSurfaceBlitRects(v3, a1, (IUnknown *)&v34, v5, a4, (IUnknown *)v31, &a6, &a7, &a8); /*0x53d679*/
      if ( result ) /*0x53d680*/
      {
        v7 = (_WORD *)a7; /*0x53d686*/
        v8 = this->vtable3; /*0x53d68e*/
        var68 = a7; /*0x53d691*/
        v22 = (Tactical *)a8; /*0x53d695*/
        v20 = (ObjectClass *)a8; /*0x53d699*/
        v9 = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36) - ZCoordToScreenY(v8); /*0x53d6ae*/
        v10 = v9 - (_WORD)aP2 - 3; /*0x53d6b9*/
        SamplePosition = Audio::GetSamplePosition(*(int *)&stru_87C374.__pad_579C[23348], 0, (MouseClass *)aP2); /*0x53d6c7*/
        v12 = v33 + 1; /*0x53d6cf*/
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x53d6d2*/
        v14 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40); /*0x53d6db*/
        if ( SamplePosition + 2 * (v13 + v12 * v14) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x53d6f2*/
        {
          for ( i = 0; i < v33; var68 += v25 ) /*0x53d79c*/
          {
            for ( j = 0; j < v32; ++j ) /*0x53d7aa*/
            {
              k = v20->__pad_0[0]; /*0x53d7b4*/
              v20 = (ObjectClass *)((char *)v20 + 1); /*0x53d7ba*/
              if ( k > 0 /*0x53d7de*/
                && *(_WORD *)Audio::GetSamplePosition(
                               *(int *)&stru_87C374.__pad_579C[23348],
                               (MouseClass *)(v34 + j),
                               (MouseClass *)((char *)aP2 + i)) > v10 )
              {
                *v7 = v7[dword_A9FAE8[k]]; /*0x53d7ef*/
              }
              ++v7; /*0x53d7f6*/
            }
            v7 = (_WORD *)(v25 + var68); /*0x53d806*/
            --v10; /*0x53d811*/
            v22 = (Tactical *)((char *)v22 + 512); /*0x53d817*/
            v20 = (ObjectClass *)v22; /*0x53d81b*/
            ++i; /*0x53d823*/
          }
        }
        else
        {
          v15 = (unsigned __int16 *)(SamplePosition + 2 * v34); /*0x53d702*/
          for ( k = 0; k < v33; ++k ) /*0x53d70e*/
          {
            for ( m = 0; m < v32; ++m ) /*0x53d71c*/
            {
              v17 = v20->__pad_0[0]; /*0x53d722*/
              v20 = (ObjectClass *)((char *)v20 + 1); /*0x53d729*/
              if ( v17 > 0 && *v15 > v10 ) /*0x53d732*/
                *v7 = v7[dword_A9FAE8[v17]]; /*0x53d73f*/
              ++v7; /*0x53d746*/
              ++v15; /*0x53d749*/
            }
            v7 = (_WORD *)(v25 + var68); /*0x53d759*/
            --v10; /*0x53d765*/
            v22 = (Tactical *)((char *)v22 + 512); /*0x53d76b*/
            v20 = (ObjectClass *)v22; /*0x53d76f*/
            var68 += v25; /*0x53d775*/
            v15 += v14 - m; /*0x53d780*/
          }
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 96))(v28); /*0x53d836*/
        return (*(char (__thiscall **)(int))(*(_DWORD *)v29 + 96))(v29); /*0x53d83f*/
      }
    }
  }
  return result; /*0x53d842*/
}


// ==== 0x0053D850  ObjectClass::Render_Render_53D850  this=ObjectClass  sig=csp ====
char sub_53D850()
{
  int v0; // ebx
  int v1; // edi
  _DWORD *v2; // esi
  int *v3; // eax
  char result; // al
  int i; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 116))(MEMORY[0x887314]) != unk_AA0150 ) /*0x53d865*/
  {
    v0 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 116))(MEMORY[0x887314]); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    unk_AA0150 = v0; /*0x53d880*/
    v1 = 1; /*0x53d886*/
    v2 = &unk_A9FAEC; /*0x53d88b*/
    do /*0x53d8b2*/
    {
      v3 = ComputeSpiralOffset(&v6, v1); /*0x53d896*/
      ++v2; /*0x53d89d*/
      ++v1; /*0x53d8a8*/
      *(v2 - 1) = *v3 + v0 * v3[1]; /*0x53d8a9*/
    }
    while ( (int)v2 < (int)&unk_A9FF6C ); /*0x53d8b2*/
  }
  result = unk_AA0128; /*0x53d8b6*/
  for ( i = unk_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = ZBuffer::RenderSprite(*((int **)unk_AA011C + i)); /*0x53d8cb*/
  return result; /*0x53d8d3*/
}


// ==== 0x0053D8E0  ComputeSpiralOffset  this=-  sig=csp ====
int *__fastcall ComputeSpiralOffset(int *a1, int a2)
{
  int v2; // edx
  int *result; // eax
  int v4; // esi
  int i; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // edx

  v2 = a2 - 1; /*0x53d8e0*/
  result = a1; /*0x53d8e5*/
  v4 = 1; /*0x53d8e7*/
  if ( v2 >= 8 ) /*0x53d8ec*/
  {
    for ( i = 8; i <= v2; i += 8 ) /*0x53d8ee*/
    {
      v2 -= i; /*0x53d8f3*/
      ++v4; /*0x53d8f8*/
    }
  }
  if ( v2 >= 2 * v4 + 1 ) /*0x53d903*/
  {
    if ( v2 >= 4 * v4 + 1 ) /*0x53d91a*/
    {
      if ( v2 >= 6 * v4 + 1 ) /*0x53d92b*/
      {
        v8 = v2 - 7 * v4; /*0x53d946*/
        v7 = -v4; /*0x53d948*/
        *result = v8; /*0x53d94a*/
      }
      else
      {
        v6 = v4; /*0x53d92d*/
        v7 = 5 * v4 - v2; /*0x53d934*/
        *result = -v6; /*0x53d936*/
      }
      result[1] = v7; /*0x53d938*/
    }
    else
    {
      *result = 3 * v4 - v2; /*0x53d91e*/
      result[1] = v4; /*0x53d920*/
    }
  }
  else
  {
    *result = v4; /*0x53d907*/
    result[1] = v2 - v4; /*0x53d909*/
  }
  return result; /*0x53d90c*/
}


// ==== 0x0053D960  GenerateLightningStormGlow_Helper  this=-  sig=csp ====
int __stdcall sub_53D960(int a1, int a2)
{
  signed int v3; // ecx
  signed int v4; // eax
  int v5; // eax
  int i; // edx

  if ( !a1 && !a2 ) /*0x53d970*/
    return 0; /*0x53d973*/
  v3 = abs32(a2); /*0x53d982*/
  v4 = abs32(a1); /*0x53d987*/
  if ( v4 > v3 ) /*0x53d98b*/
    v3 = v4; /*0x53d98d*/
  v5 = 1; /*0x53d98f*/
  for ( i = 1; i < v3; ++i ) /*0x53d998*/
    v5 += 8 * i; /*0x53d99a*/
  if ( a1 == v3 ) /*0x53d9a4*/
    return v3 + a2 + v5; /*0x53d9a8*/
  if ( a2 == v3 ) /*0x53d9b1*/
    return 3 * v3 - a1 + v5; /*0x53d9ba*/
  if ( a1 == -v3 ) /*0x53d9c5*/
    return 5 * v3 - a2 + v5; /*0x53d9cd*/
  return a1 + 7 * v3 + v5; /*0x53d972*/
}


// ==== 0x0053D9F0  sub_53D9F0  this=-  sig=ida-proto ====
int __fastcall sub_53D9F0(int a1)
{
  int v2; // edi
  _DWORD *v3; // esi
  int *v4; // eax
  int result; // eax
  int v6; // [esp+Ch] [ebp-8h] BYREF

  dword_A9FAE8[0] = 0; /*0x53d9f3*/
  unk_AA0150 = a1; /*0x53da02*/
  v2 = 1; /*0x53da08*/
  v3 = &unk_A9FAEC; /*0x53da0d*/
  do /*0x53da34*/
  {
    v4 = ComputeSpiralOffset(&v6, v2); /*0x53da18*/
    ++v3; /*0x53da1f*/
    result = *v4 + a1 * v4[1]; /*0x53da28*/
    ++v2; /*0x53da2a*/
    *(v3 - 1) = result; /*0x53da2b*/
  }
  while ( (int)v3 < (int)&unk_A9FF6C ); /*0x53da34*/
  return result; /*0x53da36*/
}


// ==== 0x0053DA40  _DynamicVectorClass_PAVIonBlastClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::sub_53DA40(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x53da46*/
  *(_DWORD *)(this + 16) = 0; /*0x53da49*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x53da50*/
  {
    __3_YAXPAX_Z(v2); /*0x53da56*/
    *(_DWORD *)(this + 4) = 0; /*0x53da5e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53da61*/
  *(_DWORD *)(this + 8) = 0; /*0x53da64*/
}


// ==== 0x0053DA70  _DynamicVectorClass_PAVIonBlastClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::sub_53DA70(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x53da70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x53da85*/
  else
    return 0; /*0x53da77*/
}


// ==== 0x0053DA90  _VectorClass_PAVIonBlastClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x53da9a*/
}


// ==== 0x0053DAA0  _VectorClass_PAVIonBlastClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x53daa2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x53daad*/
  {
    v3 = 0; /*0x53daaf*/
    if ( v2 <= 0 ) /*0x53dab3*/
      return 1; /*0x53dad3*/
    v4 = (_DWORD *)this->Items; /*0x53dab5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53dabb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53dac4*/
    {
      ++v3; /*0x53dac6*/
      ++v4; /*0x53dac7*/
      if ( v3 >= v2 ) /*0x53dacc*/
        return 1; /*0x53dacc*/
    }
  }
  return 0; /*0x53dace*/
}


// ==== 0x0053DAE0  _VectorClass_PAVIonBlastClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x53daec*/
  {
    this->IsInitialized = 0; /*0x53daf6*/
    if ( a3 ) /*0x53dafc*/
      v4 = a3; /*0x53db12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53db0e*/
    this->IsInitialized = 1; /*0x53db16*/
    if ( v4 ) /*0x53db1a*/
    {
      if ( this->Items ) /*0x53db25*/
      {
        v6 = this->Capacity; /*0x53db2c*/
        if ( a2 < v6 ) /*0x53db31*/
          v6 = a2; /*0x53db33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x53db39*/
          ++i; /*0x53db3e*/
        if ( this->IsAllocated ) /*0x53db4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x53db56*/
          this->Items = 0; /*0x53db5e*/
        }
      }
      this->Items = v4; /*0x53db67*/
      this->Capacity = a2; /*0x53db6f*/
      this->IsAllocated = a3 == 0; /*0x53db72*/
      return 1; /*0x53db78*/
    }
    else
    {
      return 0; /*0x53db1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53db82*/
    return 1; /*0x53db88*/
  }
}


// ==== 0x0053DB90  _VectorClass_PAVIonBlastClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x53db9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x53dba3*/
    *(_DWORD *)(this + 4) = 0; /*0x53dbab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53dbae*/
  *(_DWORD *)(this + 8) = 0; /*0x53dbb1*/
}


// ==== 0x0053DBC0  _VectorClass_PAVIonBlastClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x53dbc0*/
    return 0; /*0x53dbc8*/
  v3 = *(_DWORD *)(this + 8); /*0x53dbce*/
  result = 0; /*0x53dbd1*/
  if ( v3 <= 0 ) /*0x53dbd5*/
    return -1; /*0x53dbec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x53dbdb*/
  {
    if ( ++result >= v3 ) /*0x53dbea*/
      return -1; /*0x53dbea*/
  }
  return result; /*0x53dbca*/
}


// ==== 0x0053DC00  _VectorClass_PAVIonBlastClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x53dc00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x53dc15*/
  else
    return 0; /*0x53dc07*/
}


// ==== 0x0053DC20  _DynamicVectorClass_PAVIonBlastClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::sub_53DC20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53dc2c*/
  {
    this->IsInitialized = 0; /*0x53dc32*/
    if ( a3 ) /*0x53dc38*/
      v4 = a3; /*0x53dc4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53dc4a*/
    this->IsInitialized = 1; /*0x53dc52*/
    if ( !v4 ) /*0x53dc56*/
      return 0; /*0x53dcca*/
    if ( this->Items ) /*0x53dc58*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x53dc5f*/
      if ( a2 < v5 ) /*0x53dc64*/
        v5 = a2; /*0x53dc66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x53dc6c*/
        ++i; /*0x53dc71*/
      if ( this->IsAllocated ) /*0x53dc7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x53dc89*/
        this->Items = 0; /*0x53dc91*/
      }
    }
    this->Items = v4; /*0x53dc9a*/
    this->DynamicVector_field_0x8 = a2; /*0x53dca2*/
    this->IsAllocated = a3 == 0; /*0x53dca5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53dcae*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x53dcb1*/
  if ( v7 < this->Items ) /*0x53dcb9*/
    this->Items = v7; /*0x53dcbb*/
  return 1; /*0x53dcbe*/
}


// ==== 0x0053DCD0  _DynamicVectorClass_PAVIonBlastClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::sub_53DCD0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x53dcd0*/
  result = 0; /*0x53dcd3*/
  if ( v2 <= 0 ) /*0x53dcd8*/
    return -1; /*0x53dcef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x53dcde*/
  {
    if ( ++result >= v2 ) /*0x53dced*/
      return -1; /*0x53dced*/
  }
  return result; /*0x53dcf2*/
}


// ==== 0x0053DD00  _VectorClass_PAVIonBlastClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_IonBlastClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53dd03*/
  *Block = &vt_VectorClass_IonBlastClass; /*0x53dd06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53dd10*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd18*/
    *(Block + 1) = 0; /*0x53dd20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53dd2b*/
  *(Block + 2) = 0; /*0x53dd31*/
  if ( (a2 & 1) != 0 ) /*0x53dd38*/
    __3_YAXPAX_Z(Block); /*0x53dd3b*/
  return (VectorClass *)Block; /*0x53dd45*/
}


// ==== 0x0053DD50  _DynamicVectorClass_PAVIonBlastClass::Constructor_VectorClass_IonBlastClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53dd53*/
  *Block = &vt_VectorClass_IonBlastClass; /*0x53dd56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53dd60*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd68*/
    *(Block + 1) = 0; /*0x53dd70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53dd7b*/
  *(Block + 2) = 0; /*0x53dd81*/
  if ( (a2 & 1) != 0 ) /*0x53dd88*/
    __3_YAXPAX_Z(Block); /*0x53dd8b*/
  return (DynamicVector *)Block; /*0x53dd95*/
}


// ==== 0x0053DDA0  Explosion::RemoveItem  this=DynamicVector  sig=csp ====
char __thiscall sub_53DDA0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x53dda0*/
  v3 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  v4 = v2 - 1; /*0x53ddab*/
  this->DynamicVector_field_0x10 = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++v3; /*0x53ddb7*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x53ddbb*/
    }
    while ( v3 < this->DynamicVector_field_0x10 ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}


// ==== 0x0053DDE0  sub_53DDE0  this=-  sig=ida-proto ====
int sub_53DDE0()
{
  unk_AA0158 = 0; /*0x53dde2*/
  unk_AA015C = 0; /*0x53dde7*/
  unk_AA0160 = 0; /*0x53ddec*/
  unk_AA0164 = 0; /*0x53ddf1*/
  return 0; /*0x53ddf6*/
}


// ==== 0x0053DE00  InitializeAudioStreaming  this=-  sig=ida-proto ====
int __fastcall InitializeAudioStreaming(int a1, int a2)
{
  void *v4; // edi
  HANDLE Thread; // eax
  DWORD LastError; // eax
  int v8; // eax
  HWND *v9; // eax
  int v10; // edx
  HWND *v11; // esi
  int v12; // [esp+10h] [ebp-404h]
  CHAR Buffer[1024]; // [esp+14h] [ebp-400h] BYREF

  v12 = a2; /*0x53de19*/
  InitializeCriticalSection(&unk_AA0418); /*0x53de1d*/
  InitializeCriticalSection(&unk_AA0400); /*0x53de24*/
  unk_AA0454 = 1; /*0x53de28*/
  if ( a1 <= 0 ) /*0x53de34*/
    goto LABEL_8; /*0x53de34*/
  if ( a2 < 10240 ) /*0x53de40*/
    v12 = 10240; /*0x53de42*/
  v4 = __2_YAPAXI_Z(4 * a1); /*0x53de57*/
  unk_AA044C = v4; /*0x53de5e*/
  if ( !v4 ) /*0x53de64*/
    goto LABEL_8; /*0x53de64*/
  memset(v4, 0, 4 * a1); /*0x53de73*/
  unk_AA0450 = 0; /*0x53de7c*/
  unk_AA0374 = a1; /*0x53de82*/
  unk_AA0378 = 0; /*0x53de88*/
  unk_AA0380 = 0; /*0x53de8e*/
  unk_AA0390 = 0; /*0x53de94*/
  unk_AA0388 = 100; /*0x53de9a*/
  unk_AA037C = 0; /*0x53deaa*/
  AudioStream::Reset(unk_AA0398); /*0x53deb5*/
  CoordBounds::Constructor(unk_AA0398, unk_AA0388, SHIDWORD(unk_AA0388)); /*0x53decc*/
  AudioStream::ResetChannel(4 * unk_AA0388, (unsigned __int64)unk_AA0388 >> 30); /*0x53deed*/
  AudioStream::ResetChannel2(4 * unk_AA0388, (unsigned __int64)unk_AA0388 >> 30); /*0x53df0f*/
  Thread = CreateThread(0, 0x1000u, sub_53E070, &unk_AA0378, 0, &unk_AA03FC); /*0x53df2a*/
  unk_AA03F8 = Thread; /*0x53df32*/
  if ( !Thread ) /*0x53df37*/
    goto LABEL_8; /*0x53df37*/
  unk_AA0458 = 1; /*0x53df41*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x53df47*/
  {
    LastError = GetLastError(); /*0x53df5d*/
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x53df6a*/
    Debug::Log(); /*0x53df7a*/
LABEL_8:
    Audio_Init(); /*0x53df82*/
    return 0; /*0x53df93*/
  }
  unk_AA045C = sub_4087F0(); /*0x53df9b*/
  if ( !unk_AA045C ) /*0x53dfa0*/
    goto LABEL_8; /*0x53dfa0*/
  if ( !sub_408B40(v12, 0) ) /*0x53dfac*/
    goto LABEL_8; /*0x53dfac*/
  AudioMixer::SetupChannels(unk_AA045C); /*0x53dfbb*/
  unk_AA0460 = AcquireAudioStreamBuffer((_DWORD *)unk_AA045C, 0); /*0x53dfd5*/
  v8 = AcquireAudioStreamBuffer((_DWORD *)unk_AA045C, 1); /*0x53dfda*/
  unk_AA0464 = v8; /*0x53dfe5*/
  if ( !unk_AA0460 || !v8 ) /*0x53dff0*/
    goto LABEL_8; /*0x53dff0*/
  unk_AA0448 = 1; /*0x53e006*/
  memset(&unk_AA0168, 0, 0x200u); /*0x53e00c*/
  if ( g_hWnd ) /*0x53e00e*/
  {
    v9 = (HWND *)unk_AA044C; /*0x53e016*/
    v10 = 1; /*0x53e01b*/
    v11 = 0; /*0x53e020*/
    if ( unk_AA0374 > 1 ) /*0x53e024*/
    {
      do /*0x53e03e*/
      {
        if ( *v9 ) /*0x53e026*/
        {
          if ( *v9 == g_hWnd ) /*0x53e036*/
            return 1; /*0x53e036*/
        }
        else if ( !v11 ) /*0x53e02e*/
        {
          v11 = v9; /*0x53e030*/
        }
        ++v10; /*0x53e038*/
        ++v9; /*0x53e039*/
      }
      while ( v10 < unk_AA0374 ); /*0x53e03e*/
      if ( v11 ) /*0x53e042*/
      {
        *v11 = g_hWnd; /*0x53e044*/
        ++unk_AA0450; /*0x53e04c*/
      }
    }
  }
  return 1; /*0x53df89*/
}


// ==== 0x0053E070  sub_53E070  this=-  sig=csp ====
DWORD __stdcall sub_53E070(_DWORD *lpThreadParameter)
{
  _DWORD *v1; // esi
  __int64 v2; // rax
  _DWORD *v3; // edi
  unsigned int v4; // ebp
  signed int v5; // eax
  unsigned int v6; // ebp
  unsigned int Channel; // eax

  v1 = lpThreadParameter; /*0x53e072*/
  lpThreadParameter[6] = 1; /*0x53e07b*/
  v1[2] = 0; /*0x53e07e*/
  if ( *v1 ) /*0x53e085*/
  {
    v1[2] = 1; /*0x53e1be*/
    return 0; /*0x53e1c2*/
  }
  else
  {
    do /*0x53e1ac*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x53e096*/
      AudioThread::UpdateStats((int)(v1 + 8), v2); /*0x53e0a0*/
      v3 = (_DWORD *)unk_AA045C; /*0x53e0ac*/
      if ( unk_AA045C && unk_AA0444 && unk_AA0468 ) /*0x53e0c8*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e0d3*/
        if ( unk_AA0444 == 2 && (v4 = (unsigned int)AudioStream::GetChannel(v3) >> 1, sub_408D30(v3) < v4) ) /*0x53e0f2*/
        {
          if ( unk_AA0460 ) /*0x53e0fb*/
          {
            v5 = sub_408D40(v3); /*0x53e108*/
            if ( WriteAudioStreamToFile(unk_AA0460, unk_AA0468, v5, (char *)&lpThreadParameter) != 1 ) /*0x53e122*/
              unk_AA046C = 1; /*0x53e124*/
          }
        }
        else if ( unk_AA0444 == 1 ) /*0x53e137*/
        {
          v6 = (unsigned int)AudioStream::GetChannel(v3) >> 1; /*0x53e144*/
          if ( sub_408D40(v3) < v6 ) /*0x53e14d*/
          {
            if ( unk_AA0464 ) /*0x53e156*/
            {
              Channel = AudioStream::GetChannel(v3); /*0x53e15c*/
              WriteAudioStreamToFile(unk_AA0464, unk_AA0468, Channel >> 1, 0); /*0x53e170*/
              fflush(unk_AA0468); /*0x53e17c*/
            }
          }
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e189*/
      }
      Sleep(v1[4]); /*0x53e19b*/
      ++v1[1]; /*0x53e1a5*/
    }
    while ( !*v1 ); /*0x53e1ac*/
    v1[2] = 1; /*0x53e1b2*/
    return 0; /*0x53e1b8*/
  }
}


// ==== 0x0053E1D0  Audio_Init  this=-  sig=ida-proto ====
void sub_53E1D0()
{
  signed int SampleSize; // eax
  signed int v1; // eax

  if ( unk_AA0448 ) /*0x53e1dc*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e1ed*/
    if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53e210*/
    {
      SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e213*/
      WriteAudioStreamToFile(unk_AA0464, unk_AA0468, SampleSize, 0); /*0x53e225*/
      fflush(unk_AA0468); /*0x53e230*/
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e243*/
    if ( unk_AA0448 ) /*0x53e24b*/
    {
      EnterCriticalSection(&unk_AA0418); /*0x53e256*/
      if ( unk_AA0448 ) /*0x53e25e*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e265*/
        if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53e288*/
        {
          v1 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e28b*/
          WriteAudioStreamToFile(unk_AA0464, unk_AA0468, v1, 0); /*0x53e29d*/
          fflush(unk_AA0468); /*0x53e2a9*/
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e2b6*/
      }
      unk_AA0444 = 0; /*0x53e2bd*/
      if ( unk_AA0468 ) /*0x53e2c5*/
      {
        fclose(unk_AA0468); /*0x53e2c8*/
        unk_AA0468 = 0; /*0x53e2d0*/
      }
      LeaveCriticalSection(&unk_AA0418); /*0x53e2db*/
    }
  }
  if ( unk_AA044C ) /*0x53e2e4*/
  {
    __3_YAXPAX_Z(unk_AA044C); /*0x53e2e7*/
    unk_AA044C = 0; /*0x53e2ef*/
  }
  unk_AA0450 = 0; /*0x53e2fa*/
  if ( unk_AA0458 ) /*0x53e302*/
  {
    unk_AA0378 = 1; /*0x53e304*/
    while ( !unk_AA0380 ) /*0x53e315*/
      Sleep(0); /*0x53e31e*/
    WaitForSingleObject(unk_AA03F8, 0x1388u); /*0x53e335*/
    CloseHandle(unk_AA03F8); /*0x53e341*/
    unk_AA0458 = 0; /*0x53e347*/
  }
  if ( unk_AA0460 ) /*0x53e355*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)unk_AA0460); /*0x53e357*/
    unk_AA0460 = 0; /*0x53e35c*/
  }
  if ( unk_AA0464 ) /*0x53e36a*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)unk_AA0464); /*0x53e36c*/
    unk_AA0464 = 0; /*0x53e371*/
  }
  if ( unk_AA045C ) /*0x53e37f*/
  {
    AudioSample::InitLinkedList((_DWORD *)unk_AA045C); /*0x53e381*/
    unk_AA045C = 0; /*0x53e386*/
  }
  if ( unk_AA0454 ) /*0x53e392*/
  {
    DeleteCriticalSection(&unk_AA0418); /*0x53e39f*/
    DeleteCriticalSection(&unk_AA0400); /*0x53e3a6*/
    unk_AA0454 = 0; /*0x53e3a8*/
  }
  unk_AA0448 = 0; /*0x53e3ae*/
}


// ==== 0x0053E3C0  TimerPool::AllocSlot  this=TimerPool  sig=csp ====
_DWORD *__thiscall TimerPool_AllocSlot(void *this)
{
  _DWORD *result; // eax
  int v2; // esi
  _DWORD *v3; // edi

  result = (_DWORD *)unk_AA0448; /*0x53e3c0*/
  if ( unk_AA0448 ) /*0x53e3ca*/
  {
    if ( this ) /*0x53e3ce*/
    {
      result = unk_AA044C; /*0x53e3d6*/
      v2 = 1; /*0x53e3db*/
      v3 = 0; /*0x53e3e0*/
      if ( unk_AA0374 > 1 ) /*0x53e3e4*/
      {
        do /*0x53e3fe*/
        {
          if ( *result ) /*0x53e3e6*/
          {
            if ( (void *)*result == this ) /*0x53e3f6*/
              return result; /*0x53e3f6*/
          }
          else if ( !v3 ) /*0x53e3ee*/
          {
            v3 = result; /*0x53e3f0*/
          }
          ++v2; /*0x53e3f8*/
          ++result; /*0x53e3f9*/
        }
        while ( v2 < unk_AA0374 ); /*0x53e3fe*/
        if ( v3 ) /*0x53e402*/
        {
          *v3 = this; /*0x53e404*/
          return (_DWORD *)++unk_AA0450; /*0x53e40b*/
        }
      }
    }
  }
  return result; /*0x53e411*/
}


// ==== 0x0053E420  Object::RemoveObjectArray  this=AbstractClass  sig=csp ====
void **__thiscall Array_RemoveObject(void *this)
{
  void **result; // eax
  int v2; // edx

  result = (void **)unk_AA0448; /*0x53e420*/
  if ( unk_AA0448 ) /*0x53e428*/
  {
    if ( this ) /*0x53e42c*/
    {
      result = (void **)unk_AA044C; /*0x53e434*/
      v2 = 1; /*0x53e439*/
      if ( unk_AA0374 > 1 ) /*0x53e440*/
      {
        while ( *result != this ) /*0x53e444*/
        {
          ++v2; /*0x53e446*/
          ++result; /*0x53e447*/
          if ( v2 >= unk_AA0374 ) /*0x53e44c*/
            return result; /*0x53e44c*/
        }
        *result = 0; /*0x53e450*/
        return (void **)--unk_AA0450; /*0x53e45b*/
      }
    }
  }
  return result; /*0x53e44e*/
}


// ==== 0x0053E4F0  ObjectClass::WinMain_Helper_53E4F0  this=ObjectClass  sig=csp ====
BOOL __thiscall WinMain_Helper_53E4F0(char *FileName)
{
  if ( !unk_AA0448 || unk_AA0468 ) /*0x53e503*/
    return 0; /*0x53e54b*/
  EnterCriticalSection(&unk_AA0418); /*0x53e50a*/
  unk_AA0468 = fopen(FileName, aWb); /*0x53e51e*/
  if ( unk_AA0468 ) /*0x53e525*/
    unk_AA0444 = 1; /*0x53e527*/
  LeaveCriticalSection(&unk_AA0418); /*0x53e536*/
  return unk_AA0468 != 0; /*0x53e549*/
}


// ==== 0x0053E550  ObjectClass::WinMain_Write  this=ObjectClass  sig=csp ====
BOOL __thiscall WinMain_Write(char *FileName)
{
  signed int SampleSize; // eax

  if ( !unk_AA0448 || unk_AA0468 ) /*0x53e567*/
    return 0; /*0x53e5e7*/
  EnterCriticalSection(&unk_AA0418); /*0x53e56e*/
  unk_AA0468 = fopen(FileName, aRb); /*0x53e582*/
  unk_AA046C = 0; /*0x53e589*/
  if ( unk_AA0468 ) /*0x53e593*/
  {
    unk_AA0444 = 2; /*0x53e59d*/
    SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0460); /*0x53e5a7*/
    if ( WriteAudioStreamToFile(unk_AA0460, unk_AA0468, SampleSize, 0) != 1 ) /*0x53e5c1*/
      unk_AA046C = 1; /*0x53e5c3*/
  }
  LeaveCriticalSection(&unk_AA0418); /*0x53e5d2*/
  return unk_AA0468 != 0; /*0x53e5e5*/
}


// ==== 0x0053E6B0  WinMain_Write_53E6B0  this=-  sig=csp ====
void sub_53E6B0()
{
  signed int SampleSize; // eax

  if ( unk_AA0448 ) /*0x53e6b7*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e6be*/
    if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 ) /*0x53e6dd*/
    {
      if ( unk_AA0464 ) /*0x53e6e7*/
      {
        SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e6eb*/
        WriteAudioStreamToFile(unk_AA0464, unk_AA0468, SampleSize, 0); /*0x53e6fd*/
        fflush(unk_AA0468); /*0x53e708*/
      }
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e715*/
  }
}


// ==== 0x0053E720  UI_Update  this=-  sig=ida-proto ====
int sub_53E720()
{
  return unk_AA0444; /*0x53e725*/
}


// ==== 0x0053E730  IsMessageDialog  this=-  sig=csp ====
BOOL __fastcall Message_IsDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
  BOOL result; // eax

  do /*0x53e74f*/
    result = GameLoopMessagePump(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53e748*/
  while ( !result ); /*0x53e74f*/
  if ( lpMsg->message == 18 ) /*0x53e75b*/
    return 0; /*0x53e75d*/
  return result; /*0x53e754*/
}


// ==== 0x0053E770  GameLoopMessagePump  this=-  sig=csp ====
BOOL __fastcall GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
  void (__stdcall *v6)(LPCRITICAL_SECTION); // edi
  UINT message; // eax
  unsigned int SampleSize; // eax
  signed int v9; // eax
  BOOL v10; // ebx
  HWND v11; // eax
  HWND v12; // eax
  signed int v13; // eax
  HWND v14; // edi
  HWND *v15; // ecx
  int v16; // eax
  struct tagPOINT Point; // [esp+14h] [ebp-30h] BYREF
  wchar_t *v20; // [esp+1Ch] [ebp-28h] BYREF
  int v21; // [esp+20h] [ebp-24h]
  int v22; // [esp+24h] [ebp-20h]
  _BYTE v23[28]; // [esp+28h] [ebp-1Ch] BYREF

  if ( unk_AA0444 == 1 ) /*0x53e78b*/
  {
    if ( MEMORY[0x887640] ) /*0x53e797*/
    {
      GetCursorPos(&Point); /*0x53e7a2*/
      unk_AA0434 = (__int64)Point; /*0x53e7b0*/
      (*(void (__thiscall **)(int, __int64 *, char *))(*(_DWORD *)MEMORY[0x887640] + 68))( /*0x53e7ce*/
        MEMORY[0x887640],
        &unk_AA0434,
        (char *)&unk_AA0434 + 4);
      if ( unk_AA0434 != unk_AA043C ) /*0x53e7de*/
      {
        v22 = 1; /*0x53e7fa*/
        v6 = EnterCriticalSection; /*0x53e7fe*/
        v21 = unk_AA0430; /*0x53e809*/
        v20 = MEMORY[0xA8ED84]; /*0x53e80d*/
        EnterCriticalSection(&unk_AA0400); /*0x53e811*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 56))( /*0x53e827*/
          MEMORY[0x887640],
          unk_AA0434,
          HIDWORD(unk_AA0434));
        *(_QWORD *)v23 = unk_AA0434; /*0x53e83a*/
        unk_AA043C = unk_AA0434; /*0x53e842*/
        LeaveCriticalSection(&unk_AA0400); /*0x53e84d*/
        BufferedAudioStreamRead((int *)unk_AA0460, (char *)&v20, 20); /*0x53e85f*/
        goto LABEL_6; /*0x53e864*/
      }
    }
  }
  while ( 1 ) /*0x53e866*/
  {
    v6 = EnterCriticalSection; /*0x53e866*/
LABEL_6:
    while ( unk_AA0444 == 2 ) /*0x53e873*/
    {
      if ( !PeekMessageA(lpMsg, 0, 0, 0, 1u) ) /*0x53e889*/
        goto LABEL_13; /*0x53e889*/
      while ( 1 ) /*0x53e88b*/
      {
        message = lpMsg->message; /*0x53e88b*/
        if ( message == 256 && lpMsg->wParam == 27 ) /*0x53e899*/
          break; /*0x53e899*/
        if ( message == 15 ) /*0x53e89e*/
          DispatchMessageA(lpMsg); /*0x53e8a1*/
        if ( !PeekMessageA(lpMsg, 0, 0, 0, 1u) ) /*0x53e8ad*/
        {
          while ( 1 ) /*0x53e8b3*/
          {
LABEL_13:
            if ( unk_AA0478 ) /*0x53e8b9*/
              goto LABEL_30; /*0x53e8b9*/
            SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e8c5*/
            if ( SampleSize ) /*0x53e8cc*/
            {
              if ( SampleSize >= 0xC ) /*0x53e984*/
              {
                BufferedAudioStreamRead((int *)unk_AA0464, unk_AA0368, 12); /*0x53e997*/
                unk_AA0478 = 1; /*0x53e99c*/
LABEL_30:
                if ( unk_AA036C > (unsigned int)unk_AA0430 ) /*0x53e9b3*/
                  return 0; /*0x53ebad*/
                v10 = 1; /*0x53e9be*/
                unk_AA0478 = 0; /*0x53e9c5*/
                if ( unk_AA0370 == 1 ) /*0x53e9cb*/
                {
                  BufferedAudioStreamRead((int *)unk_AA0464, (char *)&Point, 8); /*0x53e9d9*/
                  v6(&unk_AA0400); /*0x53e9e3*/
                  unk_AA0434 = (__int64)Point; /*0x53e9f5*/
                  if ( MEMORY[0x887640] ) /*0x53ea00*/
                    (*(void (__thiscall **)(int, LONG, LONG))(*(_DWORD *)MEMORY[0x887640] + 56))( /*0x53ea06*/
                      MEMORY[0x887640],
                      Point.x,
                      Point.y);
                  LeaveCriticalSection(&unk_AA0400); /*0x53ea0e*/
                }
                else
                {
                  BufferedAudioStreamRead((int *)unk_AA0464, (char *)lpMsg, 28); /*0x53ea23*/
                  v11 = lpMsg->hwnd; /*0x53ea2e*/
                  if ( unk_AA0448 && (int)v11 >= 0 && (int)v11 < unk_AA0374 ) /*0x53ea3e*/
                    v12 = (HWND)*((_DWORD *)unk_AA044C + (_DWORD)v11); /*0x53ea46*/
                  else
                    v12 = 0; /*0x53ea4b*/
                  lpMsg->hwnd = v12; /*0x53ea4f*/
                  if ( v12 ) /*0x53ea51*/
                    goto LABEL_54; /*0x53ea51*/
                }
              }
            }
            else if ( unk_AA046C ) /*0x53e8d8*/
            {
              if ( !unk_AA0448 ) /*0x53ea62*/
                goto LABEL_6; /*0x53ea62*/
              v6(&unk_AA0418); /*0x53ea6d*/
              if ( unk_AA0448 ) /*0x53ea75*/
              {
                v6(&unk_AA0418); /*0x53ea7c*/
                if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53ea9f*/
                {
                  v13 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53eaa2*/
                  WriteAudioStreamToFile(unk_AA0464, unk_AA0468, v13, 0); /*0x53eab4*/
                  fflush(unk_AA0468); /*0x53eac0*/
                }
                LeaveCriticalSection(&unk_AA0418); /*0x53eacd*/
              }
              unk_AA0444 = 0; /*0x53ead8*/
              if ( unk_AA0468 ) /*0x53eae0*/
              {
                fclose(unk_AA0468); /*0x53eae3*/
                unk_AA0468 = 0; /*0x53eaeb*/
              }
LABEL_27:
              LeaveCriticalSection(&unk_AA0418); /*0x53e971*/
              goto LABEL_6; /*0x53e97c*/
            }
          }
        }
      }
      if ( unk_AA0448 ) /*0x53e8e6*/
      {
        v6(&unk_AA0418); /*0x53e8ed*/
        if ( unk_AA0448 ) /*0x53e8f5*/
        {
          v6(&unk_AA0418); /*0x53e8fc*/
          if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53e91f*/
          {
            v9 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e922*/
            WriteAudioStreamToFile(unk_AA0464, unk_AA0468, v9, 0); /*0x53e934*/
            fflush(unk_AA0468); /*0x53e940*/
          }
          LeaveCriticalSection(&unk_AA0418); /*0x53e94d*/
        }
        unk_AA0444 = 0; /*0x53e958*/
        if ( unk_AA0468 ) /*0x53e960*/
        {
          fclose(unk_AA0468); /*0x53e963*/
          unk_AA0468 = 0; /*0x53e96b*/
        }
        goto LABEL_27; /*0x53e96b*/
      }
    }
    v10 = PeekMessageA(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, wRemoveMsg); /*0x53eb1c*/
LABEL_54:
    if ( unk_AA0444 != 1 || !v10 ) /*0x53eb2d*/
      return v10; /*0x53eba4*/
    v14 = lpMsg->hwnd; /*0x53eb38*/
    if ( unk_AA0448 ) /*0x53eb3c*/
    {
      v15 = (HWND *)unk_AA044C; /*0x53eb43*/
      if ( v14 == (HWND)unk_AA0470 ) /*0x53eb4b*/
      {
        v16 = unk_AA0474; /*0x53eb4d*/
      }
      else
      {
        v16 = 0; /*0x53eb5a*/
        if ( unk_AA0374 <= 0 ) /*0x53eb5e*/
          goto LABEL_65; /*0x53eb5e*/
        while ( *v15 != v14 ) /*0x53eb62*/
        {
          ++v16; /*0x53eb64*/
          ++v15; /*0x53eb65*/
          if ( v16 >= unk_AA0374 ) /*0x53eb6a*/
            goto LABEL_65; /*0x53eb6a*/
        }
        unk_AA0470 = (int)lpMsg->hwnd; /*0x53eb6e*/
        unk_AA0474 = v16; /*0x53eb74*/
      }
      if ( v16 >= 0 ) /*0x53eb7b*/
      {
        v21 = unk_AA0430; /*0x53ebbc*/
        v22 = 0; /*0x53ebc9*/
        v20 = MEMORY[0xA8ED84]; /*0x53ebcd*/
        qmemcpy(v23, lpMsg, sizeof(v23)); /*0x53ebd3*/
        *(_DWORD *)v23 = v16; /*0x53ebdf*/
        BufferedAudioStreamRead((int *)unk_AA0460, (char *)&v20, 40); /*0x53ebe3*/
        return v10; /*0x53ebe3*/
      }
    }
LABEL_65:
    if ( !wRemoveMsg ) /*0x53eb81*/
      PeekMessageA(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53eb99*/
  }
}


// ==== 0x0053EC40  Memory_Helper  this=-  sig=ida-proto ====
int __fastcall sub_53EC40(unsigned __int8 a1, char a2)
{
  int result; // eax

  result = unk_AA0444; /*0x53ec40*/
  if ( unk_AA0444 )
    unk_AA0168[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}


// ==== 0x0053EC70  EventClass::GetKeyStateSafe  this=EventClass  sig=csp ====
SHORT __thiscall EventClass::GetKeyStateSafe(unsigned __int8 nVirtKey)
{
  if ( unk_AA0444 ) /*0x53ec77*/
    return unk_AA0168[nVirtKey]; /*0x53ec87*/
  else
    return GetKeyState(nVirtKey); /*0x53ec7a*/
}


// ==== 0x0053EC90  Mouse::GetKeyState  this=MouseClass  sig=csp ====
SHORT __thiscall Mouse::GetKeyState(unsigned __int8 vKey)
{
  if ( unk_AA0444 ) /*0x53ec97*/
    return unk_AA0168[vKey]; /*0x53eca7*/
  else
    return GetAsyncKeyState(vKey); /*0x53ec9a*/
}


// ==== 0x0053ECB0  Waypoint::InitInvalid  this=IPXManagerClass  sig=csp ====
IPXManagerClass *__thiscall Waypoint::InitInvalid(_BYTE *this)
{
  *this = -1; /*0x53ecb4*/
  this->Initialized = -1; /*0x53ecb6*/
  this->q008 = -1; /*0x53ecb9*/
  this->q030 = -1; /*0x53ecbc*/
  this->Initialized = -1; /*0x53ecbf*/
  this->Active = -1; /*0x53ecc2*/
  this->tail_6 = -1; /*0x53ecc5*/
  this->q007 = -1; /*0x53ecc8*/
  this->q008 = -1; /*0x53eccb*/
  this->q009 = -1; /*0x53ecce*/
  return (IPXManagerClass *)this; /*0x53ecd1*/
}


// ==== 0x0053ECE0  NetworkAddress::Assign  this=NetworkAddress  sig=csp ====
_DWORD *__thiscall NetworkAddress::Assign(_DWORD *this, _DWORD *a1, IUnknown *aP2, __int16 a4)
{
  _DWORD *result; // eax
  int *v5; // ecx

  result = this; /*0x53ece4*/
  v5 = this + 1; /*0x53ece9*/
  *v5 = aP2->field_0; /*0x53ecec*/
  *((_WORD *)v5 + 2) = aP2->field_4; /*0x53ecf4*/
  if ( dword_828140 == 1 ) /*0x53ed01*/
  {
    *result = *a1; /*0x53ed09*/
  }
  else
  {
    *result = 0; /*0x53ed13*/
    *(_WORD *)result = a4; /*0x53ed19*/
  }
  return result; /*0x53ecf3*/
}


// ==== 0x0053ED20  NetworkID::Assign  this=IPXManagerClass  sig=csp ====
__int16 __thiscall NetworkID::Assign(_DWORD *this, IPXManagerClass *aP1, int a3, IPXManagerClass *aP3)
{
  this->Initialized = *(_DWORD *)a3; /*0x53ed2a*/
  this->q010 = *(_WORD *)(a3 + 4); /*0x53ed31*/
  if ( dword_828140 == 1 ) /*0x53ed3d*/
  {
    *this = aP1->Socket; /*0x53ed45*/
    return (__int16)aP1; /*0x53ed3f*/
  }
  else
  {
    *this = 0; /*0x53ed4f*/
    *(_WORD *)this = (_WORD)aP3; /*0x53ed55*/
    return (__int16)aP3; /*0x53ed4a*/
  }
}


// ==== 0x0053ED60  Network::GetAddress  this=Network  sig=csp ====
__int16 __thiscall Network::GetAddress(_DWORD *this, _DWORD *a1, ObjectClass *aP2, _WORD *a3)
{
  __int16 result; // ax

  *(_DWORD *)aP2->__pad_0 = this->Network_field_0x4; /*0x53ed6a*/
  *(_WORD *)&aP2->__pad_0[4] = this->Network_field_0x10; /*0x53ed71*/
  result = dword_828140; /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a1 = *this; /*0x53ed85*/
  }
  else
  {
    result = *(_WORD *)this; /*0x53ed8a*/
    *a3 = *(_WORD *)this; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/
}


// ==== 0x0053EDA0  Network::CopyAddress  this=Network  sig=csp ====
char *__thiscall Network_CopyAddress(_DWORD *this, _DWORD *a2, int a3)
{
  char *result; // eax

  result = (char *)(this + 1); /*0x53eda4*/
  *(_DWORD *)a3 = this->Network_field_0x4; /*0x53edaa*/
  LOWORD(result) = this->Network_field_0x10; /*0x53edad*/
  *(_WORD *)(a3 + 4) = (_WORD)result; /*0x53edb1*/
  *a2 = *this; /*0x53edbb*/
  return result; /*0x53edac*/
}


// ==== 0x0053EDC0  Network::CopyAddress_Small  this=Network  sig=csp ====
int __thiscall Network::CopyAddress_Small(char *this, IPXManagerClass *aP1)
{
  char *v3; // ecx

  v3 = this + 4; /*0x53edc4*/
  aP1->Socket = *(_DWORD *)v3; /*0x53edc9*/
  *(_WORD *)&aP1->Initialized = *((_WORD *)v3 + 2); /*0x53edcf*/
  return (int)aP1; /*0x53edd3*/
}


// ==== 0x0053EDE0  Struct::Copy6Bytes  this=IPXManagerClass  sig=csp ====
__int16 __thiscall Struct::Copy6Bytes(char *this, IPXManagerClass *aP1)
{
  char *v2; // ecx
  __int16 result; // ax

  v2 = this + 4; /*0x53ede4*/
  *(_DWORD *)v2 = aP1->Socket; /*0x53ede9*/
  result = *(_WORD *)&aP1->Initialized; /*0x53edeb*/
  *((_WORD *)v2 + 2) = result; /*0x53edef*/
  return result; /*0x53edf3*/
}


// ==== 0x0053EE00  Network::IsBroadcastAddr  this=Network  sig=csp ====
int __thiscall Network_IsBroadcastAddr(_BYTE *this)
{
  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( *this == 0xFF /*0x53ee3b*/
      && this->q001 == 0xFF
      && this->q002 == 0xFF
      && this->q003 == 0xFF
      && this->Network_field_0x4 == 0xFF
      && this->q005 == 0xFF
      && this->q006 == 0xFF
      && this->q007 == 0xFF
      && this->Network_field_0x8 == 0xFF
      && this->q009 == 0xFF )
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( this->Network_field_0x4 == 0xFF /*0x53ee5f*/
         && this->q005 == 0xFF
         && this->q006 == 0xFF
         && this->q007 == 0xFF
         && this->Network_field_0x8 == 0xFF
         && this->q009 == 0xFF )
  {
    return 1; /*0x53ee66*/
  }
  return 0; /*0x53ee42*/
}


// ==== 0x0053EE70  GUID::Compare  this=TechnoTypeClass  sig=csp ====
bool __thiscall GUID_Compare(char *this, int a2)
{
  _WORD *v4; // edi
  int v5; // ecx
  _WORD *v6; // esi
  bool v7; // zf
  int v8; // ecx
  _WORD *v9; // edi
  _WORD *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ee7d*/
    return this->vtable2 == *(_DWORD *)(a2 + 4) && *(_WORD *)this == *(_WORD *)a2; /*0x53ef1b*/
  if ( (*this || this->vtable2 || this->vtable3 || this->vtable4) /*0x53eed8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    v8 = 3; /*0x53eef8*/
    v9 = (_WORD *)(a2 + 4); /*0x53eefd*/
    v10 = this + 4; /*0x53ef00*/
    v11 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v8 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v11 = *v10++ == *v9++; /*0x53ef05*/
      --v8; /*0x53ef05*/
    }
    while ( v11 ); /*0x53ef05*/
    return v11 && *(_DWORD *)this == *(_DWORD *)a2; /*0x53ef11*/
  }
  v4 = (_WORD *)(a2 + 4); /*0x53eedf*/
  v5 = 3; /*0x53eee2*/
  v6 = this + 4; /*0x53eee7*/
  v7 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v5 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v7 = *v6++ == *v4++; /*0x53eeec*/
    --v5; /*0x53eeec*/
  }
  while ( v7 ); /*0x53eeec*/
  return v7; /*0x53ee9f*/
}


// ==== 0x0053EF30  NetworkID::Compare  this=IPXManagerClass  sig=csp ====
bool __thiscall NetworkID_Compare(int this, int a2)
{
  return memcmp((const void *)(this + 4), (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}


// ==== 0x0053EF60  Network::processPacket  this=Network  sig=csp ====
bool __thiscall Network::processPacket(char *this, TechnoTypeClass *aP1)
{
  char *v4; // edi
  int v5; // ecx
  char *v6; // esi
  bool v7; // zf
  int v8; // ecx
  char *v9; // edi
  char *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return this->q001 != *(_DWORD *)&aP1->vtable0[4] || *(_WORD *)this != *(_WORD *)aP1->vtable0; /*0x53ef8d*/
  if ( (*this || this->q001 || this->q002 || this->q003) /*0x53efc8*/
    && (aP1->vtable0[0] || aP1->vtable0[1] || aP1->vtable0[2] || aP1->vtable0[3]) )
  {
    v8 = 3; /*0x53efe8*/
    v9 = &aP1->vtable0[4]; /*0x53efed*/
    v10 = this + 4; /*0x53eff0*/
    v11 = 1; /*0x53eff3*/
    do /*0x53eff5*/
    {
      if ( !v8 ) /*0x53eff5*/
        break; /*0x53eff5*/
      v11 = *(_WORD *)v10 == *(_WORD *)v9; /*0x53eff5*/
      v10 += 2; /*0x53eff5*/
      v9 += 2; /*0x53eff5*/
      --v8; /*0x53eff5*/
    }
    while ( v11 ); /*0x53eff5*/
    return !v11 || *(_DWORD *)this != *(_DWORD *)aP1->vtable0; /*0x53f001*/
  }
  v4 = &aP1->vtable0[4]; /*0x53efcf*/
  v5 = 3; /*0x53efd2*/
  v6 = this + 4; /*0x53efd7*/
  v7 = 1; /*0x53efda*/
  do /*0x53efdc*/
  {
    if ( !v5 ) /*0x53efdc*/
      break; /*0x53efdc*/
    v7 = *(_WORD *)v6 == *(_WORD *)v4; /*0x53efdc*/
    v6 += 2; /*0x53efdc*/
    v4 += 2; /*0x53efdc*/
    --v5; /*0x53efdc*/
  }
  while ( v7 ); /*0x53efdc*/
  return !v7; /*0x53ef8f*/
}


// ==== 0x0053F020  ObjectClass::method_53F020  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F020(const char *this, const char *a2)
{
  return memcmp(this, a2, 10) > 0; /*0x53f031*/
}


// ==== 0x0053F050  ObjectClass::method_53F050  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F050(const char *this, const char *a2)
{
  return memcmp(this, a2, 10) < 0; /*0x53f061*/
}


// ==== 0x0053F080  ObjectClass::method_53F080  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F080(const char *this, const char *a2)
{
  return memcmp(this, a2, 10) >= 0; /*0x53f091*/
}


// ==== 0x0053F0B0  ObjectClass::method_53F0B0  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F0B0(const char *this, const char *a2)
{
  return memcmp(this, a2, 10) <= 0; /*0x53f0c1*/
}


// ==== 0x0053F0E0  Network::FormatAddress  this=IPXManagerClass  sig=csp ====
char *__thiscall Network::FormatAddress(unsigned __int16 *this, IUnknown *aP1)
{
  IUnknown *v2; // edx
  int v3; // eax

  v2 = aP1; /*0x53f0e0*/
  if ( !aP1 ) /*0x53f0e9*/
    v2 = (IUnknown *)this; /*0x53f0eb*/
  v3 = v2->field_4; /*0x53f0f3*/
  if ( dword_828140 == 1 ) /*0x53f10c*/
    sprintf( /*0x53f185*/
      &MEMORY[0xA8D63C].__pad_579C[54948],
      MEMORY[0x828158],
      (unsigned __int8)v2->field_0,
      BYTE1(v2->field_0),
      (unsigned __int8)BYTE2(v2->field_0),
      HIBYTE(v2->field_0),
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      (unsigned __int8)LOWORD(v2->field_8),
      HIBYTE(LOWORD(v2->field_8)));
  else
    sprintf( /*0x53f1cf*/
      &MEMORY[0xA8D63C].__pad_579C[54948],
      stru_828144,
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      *this);
  return &MEMORY[0xA8D63C].__pad_579C[54948]; /*0x53f192*/
}


// ==== 0x0053F1F0  Multiplayer::Screen  this=Multiplayer  sig=csp ====
void __thiscall Multiplayer_Screen(void *this)
{
  dword_828140 = (int)this; /*0x53f1f0*/
}


// ==== 0x0053F200  Network::SetPort  this=IPXManagerClass  sig=csp ====
__int16 __thiscall Network::SetPort(_WORD *this, IPXManagerClass *aP1)
{
  __int16 result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    *this = (_WORD)aP1; /*0x53f20e*/
    return (__int16)aP1; /*0x53f209*/
  }
  return result; /*0x53f211*/
}


// ==== 0x0053F220  sub_53F220  this=-  sig=ida-proto ====
int sub_53F220()
{
  unk_AA0510 = 0; /*0x53f222*/
  unk_AA0514 = 0; /*0x53f227*/
  unk_AA0518 = 0; /*0x53f22c*/
  unk_AA051C = 0; /*0x53f231*/
  return 0; /*0x53f236*/
}


// ==== 0x0053F240  sub_53F240  this=-  sig=ida-proto ====
void sub_53F240()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f24c*/
  unk_AA0528 = Math::Sqrt(v0 + v0); /*0x53f25e*/
}


// ==== 0x0053F270  sub_53F270  this=-  sig=ida-proto ====
void sub_53F270()
{
  unk_AA0598 = unk_AA0528 / 60.0; /*0x53f27c*/
}


// ==== 0x0053F290  sub_53F290  this=-  sig=ida-proto ====
void sub_53F290()
{
  unk_AA0580 = 1.0 / unk_AA0598; /*0x53f29c*/
}


// ==== 0x0053F2B0  sub_53F2B0  this=-  sig=ida-proto ====
void sub_53F2B0()
{
  unk_AA0570 = 0.0174532925199433 * 45.0; /*0x53f2bc*/
}


// ==== 0x0053F2D0  sub_53F2D0  this=-  sig=ida-proto ====
void sub_53F2D0()
{
  unk_AA0538 = 0.0174532925199433 * 60.0; /*0x53f2dc*/
}


// ==== 0x0053F2F0  sub_53F2F0  this=-  sig=ida-proto ====
void sub_53F2F0()
{
  *(double *)&unk_AA047C[132] = 0.0174532925199433 * 90.0; /*0x53f2fc*/
}


// ==== 0x0053F310  sub_53F310  this=-  sig=ida-proto ====
__int64 sub_53F310()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&unk_AA047C[132] - unk_AA0538); /*0x53f322*/
  result = Math::RoundToInt(v0 * unk_AA0528 * 0.5); /*0x53f336*/
  unk_AA05A0 = result; /*0x53f33b*/
  return result; /*0x53f340*/
}


// ==== 0x0053F350  sub_53F350  this=-  sig=ida-proto ====
void sub_53F350()
{
  unk_AA0540 = Math::ArcTan((double)unk_AA05A0 * 0.00390625); /*0x53f367*/
}


// ==== 0x0053F380  sub_53F380  this=-  sig=ida-proto ====
void sub_53F380()
{
  unk_AA0560 = Math::ArcTan((double)(2 * unk_AA05A0) / unk_AA0528); /*0x53f3a2*/
}


// ==== 0x0053F3B0  sub_53F3B0  this=-  sig=ida-proto ====
__int64 sub_53F3B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA05A0) + 0.5); /*0x53f3cb*/
  unk_AA0594 = result; /*0x53f3d0*/
  return result; /*0x53f3d6*/
}


// ==== 0x0053F3E0  sub_53F3E0  this=-  sig=ida-proto ====
int sub_53F3E0()
{
  unk_AA0520 = 0; /*0x53f3e2*/
  unk_AA0522 = 0; /*0x53f3e8*/
  return 0; /*0x53f3ee*/
}


// ==== 0x0053F3F0  sub_53F3F0  this=-  sig=ida-proto ====
int sub_53F3F0()
{
  unk_AA0550 = 0; /*0x53f3f2*/
  unk_AA0554 = 0; /*0x53f3f7*/
  unk_AA0558 = 0; /*0x53f3fc*/
  return 0; /*0x53f401*/
}


// ==== 0x0053F410  sub_53F410  this=-  sig=ida-proto ====
int sub_53F410()
{
  unk_AA0590 = 0; /*0x53f415*/
  unk_AA0588 = 128; /*0x53f41f*/
  unk_AA058C = 128; /*0x53f424*/
  return 128; /*0x53f429*/
}


// ==== 0x0053F430  IPXConnClass::constructor  this=IPXConnClass  sig=csp ====
void *__thiscall IPXConnClass::constructor(
        void *this,
        int aP1,
        SessionClass *aP2,
        IPXConnClass *aP3,
        IPXConnClass *aP4,
        _DWORD *a5,
        int a7,
        wchar_t *Source,
        int aP8)
{
  IPXConnClass *v10; // ecx
  __int16 v11; // dx
  IPXGlobalConnClass *v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection( /*0x53f458*/
    this,
    (IPXConnClass *)aP1,
    (int)aP2,
    (ConnectionClass *)aP3,
    aP4,
    2,
    -1,
    (TechnoTypeClass *)0x3C,
    (CampaignScore *)aP8);
  Waypoint::InitInvalid((_BYTE *)this + 76); /*0x53f462*/
  *(_DWORD *)this = &vt_IPXConnClass; /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
    this->q04C = *a5; /*0x53f479*/
    this->PacketsReceived = a5[1]; /*0x53f47e*/
    *((_DWORD *)this + 21) = a5[2]; /*0x53f484*/
  }
  this->q064 = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((_DWORD *)this + 19, &aP8, (int)&v13); /*0x53f4ab*/
  v10 = (IPXConnClass *)v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  this->Socket = 0; /*0x53f4bc*/
  *((_DWORD *)this + 22) = v10; /*0x53f4c4*/
  *((_WORD *)this + 46) = v11; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}


// ==== 0x0053F4E0  IPXConnClass::ZeroInitAndSetup_0  this=IPXConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0(_DWORD *this)
{
  return Struct::ZeroInitAndSetup(this);
}


// ==== 0x0053F4F0  Network_Init_53F4F0  this=-  sig=csp ====
int __fastcall sub_53F4F0(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  LOWORD(unk_AA0568) = a1; /*0x53f4f4*/
  unk_AA0548 = a2; /*0x53f4ff*/
  unk_AA055C = a3; /*0x53f509*/
  unk_AA0578 = a4; /*0x53f512*/
  unk_AA0530 = a5; /*0x53f51c*/
  unk_AA0508 = a6; /*0x53f522*/
  unk_AA056C = a7; /*0x53f527*/
  unk_AA05A4 = 1; /*0x53f52d*/
  return a6; /*0x53f537*/
}


// ==== 0x0053F540  ObjectClass::Network_Init_53F540  this=ObjectClass  sig=csp ====
int sub_53F540()
{
  unsigned __int16 v0; // si

  v0 = unk_AA0568; /*0x53f54d*/
  (*(void (__thiscall **)(int, WPARAM))(*(_DWORD *)MEMORY[0x887628] + 80))(MEMORY[0x887628], MEMORY[0xA8EBB4]); /*0x53f556*/
  unk_AA05A8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 60))(MEMORY[0x887628], v0); /*0x53f570*/
  if ( unk_AA05A8 ) /*0x53f576*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]) ) /*0x53f580*/
    {
      unk_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 4))(MEMORY[0x887628]); /*0x53f59a*/
    unk_AA05A8 = 0; /*0x53f59d*/
  }
  return 0; /*0x53f575*/
}


// ==== 0x0053F5B0  ObjectClass::Network_Helper  this=ObjectClass  sig=csp ====
int sub_53F5B0()
{
  if ( MEMORY[0x887628] ) /*0x53f5b8*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 32))(MEMORY[0x887628]); /*0x53f5bc*/
  unk_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}


// ==== 0x0053F5D0  IPXConnClass::send  this=IPXConnClass  sig=csp ====
int __thiscall IPXConnClass::_vt09(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(int (__stdcall **)(int, int, int, _DWORD, int, _DWORD))(this->RemoteSocket)( /*0x53f5ec*/
           a2,
           a3,
           (int)this + 76,
           0,
           a6,
           0);
}


// ==== 0x0053F650  IPXConnClass::receive  this=IPXConnClass  sig=csp ====
int __thiscall IPXConnClass::_vt10(int *this, int a2, int a3, int *a4, int **a5, int a6, int a7)
{
  int **v8; // esi
  int v9; // edi
  int v10; // ebp
  char LinkedIndex; // al
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int ConnectionSpeed; // eax
  _BYTE v17[8]; // [esp+10h] [ebp-14h] BYREF
  int v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  Waypoint::InitInvalid(&v18); /*0x53f65d*/
  v8 = a5; /*0x53f666*/
  v18 = *a4; /*0x53f670*/
  v19 = a4[1]; /*0x53f677*/
  v20 = a4[2]; /*0x53f67e*/
  if ( a5 ) /*0x53f682*/
  {
    Network::CopyAddress(a4, &a4, (int)v17); /*0x53f68e*/
    a4 = *v8; /*0x53f69f*/
    NetworkID::Assign(&v18, &a4, (int)v17, 0); /*0x53f6a9*/
  }
  v9 = 0; /*0x53f6b2*/
  if ( (_BYTE)a6 || !MEMORY[0xA8DBA0] ) /*0x53f6c3*/
  {
    v10 = a2; /*0x53f767*/
LABEL_13:
    *(_WORD *)(v10 + 12) = 0; /*0x53f76b*/
    *(_DWORD *)(v10 + 8) = 0; /*0x53f774*/
    goto LABEL_14; /*0x53f774*/
  }
  v10 = a2; /*0x53f6c9*/
  if ( !*(_BYTE *)(a2 + 3) ) /*0x53f6cd*/
  {
    LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, this->q064); /*0x53f6dd*/
    if ( !LinkedIndex ) /*0x53f6e4*/
      return 0; /*0x53f6ef*/
    *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x53f6f2*/
  }
  v18 = MEMORY[0xA8DBA4]; /*0x53f706*/
  v9 = *(_DWORD *)&MEMORY[0x841F3C]; /*0x53f710*/
  v19 = MEMORY[0xA8DBA8]; /*0x53f716*/
  v20 = MEMORY[0xA8DBAC]; /*0x53f71a*/
  if ( GUID::Compare((char *)&MEMORY[0xA8DBB0], *(_DWORD *)MEMORY[0xA8DA78] + 40) /*0x53f742*/
    && NetworkID::Compare((int)&v18, *(_DWORD *)MEMORY[0xA8DA78] + 40) )
  {
    goto LABEL_13; /*0x53f749*/
  }
  v9 = MEMORY[0xA8DBBC]; /*0x53f752*/
  *(_WORD *)(a2 + 12) = MEMORY[0x841F3C]; /*0x53f75b*/
  *(_DWORD *)(a2 + 8) = 0; /*0x53f75f*/
LABEL_14:
  if ( MEMORY[0xA8B238][0] != 4 || MEMORY[0xA8DBA0] ) /*0x53f78a*/
    goto LABEL_27; /*0x53f78a*/
  v13 = IPXManagerClass::receivePacket(MEMORY[0xA8E9C0], (int)this); /*0x53f792*/
  v14 = v13; /*0x53f797*/
  if ( v13 == -4 ) /*0x53f79c*/
  {
    v15 = MEMORY[0xA8DBBC]; /*0x53f7e5*/
    if ( !(_WORD)MEMORY[0xA8DBBC] ) /*0x53f7ed*/
      goto LABEL_27; /*0x53f7ed*/
    goto LABEL_26; /*0x53f7ed*/
  }
  if ( (unsigned int)v13 > 0xFFFFFFFC ) /*0x53f79e*/
    goto LABEL_27; /*0x53f79e*/
  if ( v13 ) /*0x53f7a6*/
  {
    if ( v13 < 0 ) /*0x53f7bd*/
      goto LABEL_27; /*0x53f7bd*/
    goto LABEL_23; /*0x53f7bd*/
  }
  if ( !MEMORY[0xA8DBA0] ) /*0x53f7af*/
  {
LABEL_23:
    if ( v13 >= Network::GetSendCount(MEMORY[0xA8E9C0]) ) /*0x53f7cb*/
      goto LABEL_27; /*0x53f7cb*/
    ConnectionSpeed = Network::GetConnectionSpeed(MEMORY[0xA8E9C0], v14); /*0x53f7d3*/
    LOWORD(v15) = IPXConnClass::closeConnection(MEMORY[0xA8B238], ConnectionSpeed); /*0x53f7de*/
LABEL_26:
    v9 = v15; /*0x53f7ef*/
    goto LABEL_27; /*0x53f7ef*/
  }
  v15 = MEMORY[0xA8DBBC]; /*0x53f7b1*/
  if ( (_WORD)MEMORY[0xA8DBBC] ) /*0x53f7b9*/
    goto LABEL_26; /*0x53f7b9*/
LABEL_27:
  if ( MEMORY[0x887628] ) /*0x53f7f9*/
    (*(void (__thiscall **)(int, int, int, int *, int, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887628] + 12))( /*0x53f812*/
      MEMORY[0x887628],
      v10,
      a3,
      &v18,
      12,
      a6,
      0,
      v9);
  return 1; /*0x53f6e6*/
}


// ==== 0x0053F830  Network_Get  this=-  sig=ida-proto ====
int __fastcall sub_53F830(int a1, int a2)
{
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 16))(MEMORY[0x887628], a1, a2, 0); /*0x53f83f*/
  return 1; /*0x53f847*/
}


// ==== 0x0053F850  IPXConnClass::QueryInterface  this=IPXConnClass  sig=csp ====
IPXConnClass *__thiscall IPXConnClass::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_IPXConnClass; /*0x53f853*/
  ConnectionClass::dtor(Block); /*0x53f859*/
  if ( (a2 & 1) != 0 ) /*0x53f863*/
    __3_YAXPAX_Z(Block); /*0x53f866*/
  return (IPXConnClass *)Block; /*0x53f870*/
}


// ==== 0x0053F880  sub_53F880  this=-  sig=ida-proto ====
int sub_53F880()
{
  unk_AA05B8 = 0; /*0x53f882*/
  unk_AA05BC = 0; /*0x53f887*/
  unk_AA05C0 = 0; /*0x53f88c*/
  unk_AA05C4 = 0; /*0x53f891*/
  return 0; /*0x53f896*/
}


// ==== 0x0053F8A0  sub_53F8A0  this=-  sig=ida-proto ====
void sub_53F8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f8ac*/
  unk_AA05D0 = Math::Sqrt(v0 + v0); /*0x53f8be*/
}


// ==== 0x0053F8D0  sub_53F8D0  this=-  sig=ida-proto ====
void sub_53F8D0()
{
  unk_AA0620 = unk_AA05D0 / 60.0; /*0x53f8dc*/
}


// ==== 0x0053F8F0  sub_53F8F0  this=-  sig=ida-proto ====
void sub_53F8F0()
{
  unk_AA0608 = 1.0 / unk_AA0620; /*0x53f8fc*/
}


// ==== 0x0053F910  sub_53F910  this=-  sig=ida-proto ====
void sub_53F910()
{
  unk_AA0600 = 0.0174532925199433 * 45.0; /*0x53f91c*/
}


// ==== 0x0053F930  sub_53F930  this=-  sig=ida-proto ====
void sub_53F930()
{
  unk_AA05D8 = 0.0174532925199433 * 60.0; /*0x53f93c*/
}


// ==== 0x0053F950  sub_53F950  this=-  sig=ida-proto ====
void sub_53F950()
{
  unk_AA05B0 = 0.0174532925199433 * 90.0; /*0x53f95c*/
}


// ==== 0x0053F970  sub_53F970  this=-  sig=ida-proto ====
__int64 sub_53F970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA05B0 - unk_AA05D8); /*0x53f982*/
  result = Math::RoundToInt(v0 * unk_AA05D0 * 0.5); /*0x53f996*/
  unk_AA0628 = result; /*0x53f99b*/
  return result; /*0x53f9a0*/
}


// ==== 0x0053F9B0  sub_53F9B0  this=-  sig=ida-proto ====
void sub_53F9B0()
{
  unk_AA05E0 = Math::ArcTan((double)unk_AA0628 * 0.00390625); /*0x53f9c7*/
}


// ==== 0x0053F9E0  sub_53F9E0  this=-  sig=ida-proto ====
void sub_53F9E0()
{
  unk_AA05F8 = Math::ArcTan((double)(2 * unk_AA0628) / unk_AA05D0); /*0x53fa02*/
}


// ==== 0x0053FA10  sub_53FA10  this=-  sig=ida-proto ====
__int64 sub_53FA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA0628) + 0.5); /*0x53fa2b*/
  unk_AA061C = result; /*0x53fa30*/
  return result; /*0x53fa36*/
}


// ==== 0x0053FA40  sub_53FA40  this=-  sig=ida-proto ====
int sub_53FA40()
{
  unk_AA05C8 = 0; /*0x53fa42*/
  unk_AA05CA = 0; /*0x53fa48*/
  return 0; /*0x53fa4e*/
}


// ==== 0x0053FA50  sub_53FA50  this=-  sig=ida-proto ====
int sub_53FA50()
{
  unk_AA05E8 = 0; /*0x53fa52*/
  unk_AA05EC = 0; /*0x53fa57*/
  unk_AA05F0 = 0; /*0x53fa5c*/
  return 0; /*0x53fa61*/
}


// ==== 0x0053FA70  sub_53FA70  this=-  sig=ida-proto ====
int sub_53FA70()
{
  unk_AA0618 = 0; /*0x53fa75*/
  unk_AA0610 = 128; /*0x53fa7f*/
  unk_AA0614 = 128; /*0x53fa84*/
  return 128; /*0x53fa89*/
}


// ==== 0x0053FA90  IPXGlobalConnClass::Network_Init_53FA90  this=IPXGlobalConnClass  sig=csp ====
int *__thiscall Network_Init_53FA90(
        int *this,
        IPXGlobalConnClass *aP1,
        IPXGlobalConnClass *aP2,
        IPXGlobalConnClass *aP3,
        IPXGlobalConnClass *aP4,
        __int16 a6)
{
  int v7; // eax
  int v8; // edi
  IPXManagerClass *v9; // ebx
  IPXManagerClass *v10; // ebp
  int v11; // ecx
  int v12; // eax

  IPXConnClass::constructor( /*0x53faba*/
    this,
    (int)aP1,
    (SessionClass *)aP2,
    (IPXConnClass *)&aP3->__pad_0[2],
    (IPXConnClass *)a6,
    0,
    0,
    (wchar_t *)&MEMORY[0x87F8E4].__pad_5568[10472],
    12);
  *this = (int)&vt_IPXGlobalConnClass; /*0x53facc*/
  *((_WORD *)this + 92) = (_WORD)aP4; /*0x53fad2*/
  this->q0C4 = 0; /*0x53fad9*/
  this->__pad_0C8 = 1; /*0x53fadf*/
  this->q035 = (int)aP2; /*0x53fae6*/
  v7 = __2_YAPAXI_Z(4 * (_DWORD)aP2); /*0x53faec*/
  v8 = this->q035; /*0x53faf1*/
  this->IPXGlobalConnClass_field_0x34 = v7; /*0x53faf7*/
  v9 = (IPXManagerClass *)__2_YAPAXI_Z(12 * v8); /*0x53fb09*/
  if ( v9 ) /*0x53fb10*/
  {
    v10 = v9; /*0x53fb15*/
    if ( v8 - 1 >= 0 ) /*0x53fb19*/
    {
      do /*0x53fb29*/
      {
        Waypoint::InitInvalid(v10); /*0x53fb20*/
        v10 = (IPXManagerClass *)((char *)v10 + 12); /*0x53fb25*/
        --v8; /*0x53fb28*/
      }
      while ( v8 ); /*0x53fb29*/
    }
  }
  else
  {
    v9 = 0; /*0x53fb2f*/
  }
  v11 = this->q035; /*0x53fb31*/
  v12 = 0; /*0x53fb37*/
  this->q0CC = (int)v9; /*0x53fb3b*/
  if ( v11 > 0 ) /*0x53fb41*/
  {
    do /*0x53fb5a*/
    {
      ++v12; /*0x53fb49*/
      *(_DWORD *)(this->IPXGlobalConnClass_field_0x34 + 4 * v12 - 4) = -1; /*0x53fb4a*/
    }
    while ( v12 < this->q035 ); /*0x53fb5a*/
  }
  this->q036 = 0; /*0x53fb5c*/
  return this; /*0x53fb64*/
}


// ==== 0x0053FBD0  IPXGlobalConnClass::Flush  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt11(
        int this,
        const void *a2,
        unsigned int a3,
        _DWORD *a4,
        int a5,
        __int16 a6,
        int a7)
{
  int v8; // eax
  int v9; // ecx
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  Waypoint::InitInvalid(v11); /*0x53fbdc*/
  *(_DWORD *)(*(_DWORD *)(this + 32) + 8) = 0; /*0x53fbe6*/
  *(_WORD *)(*(_DWORD *)(this + 32) + 12) = 0; /*0x53fbec*/
  **(_WORD **)(this + 32) = *(_WORD *)(this + 36); /*0x53fbf7*/
  *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = !a5 || !a4; /*0x53fc0d*/
  *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(*(_DWORD *)(this + 4) + 44); /*0x53fc22*/
  if ( a7 ) /*0x53fc2b*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = a7; /*0x53fc30*/
  *(_WORD *)(*(_DWORD *)(this + 32) + 14) = *(_WORD *)(this + 184); /*0x53fc3f*/
  *(_BYTE *)(*(_DWORD *)(this + 32) + 3) = 0; /*0x53fc46*/
  if ( a4 ) /*0x53fc49*/
  {
    v8 = a4[1]; /*0x53fc4d*/
    v9 = a4[2]; /*0x53fc50*/
    v11[0] = *a4; /*0x53fc53*/
    v11[1] = v8; /*0x53fc57*/
    v11[2] = v9; /*0x53fc5b*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
}


// ==== 0x0053FCB0  IPXGlobalConnClass::GetQueueSize  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt12(void *this, _WORD *a2, signed int a3, int *a4, int a5)
{
  _DWORD *v7; // ecx
  int v8; // edi
  _DWORD *TileIndex; // eax
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int16 v18; // cx
  int v19; // eax
  int v20; // [esp+8h] [ebp-1Ch] BYREF
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]
  __int16 v23; // [esp+14h] [ebp-10h] BYREF
  char v24; // [esp+16h] [ebp-Eh]
  char v25; // [esp+17h] [ebp-Dh]
  int v26; // [esp+18h] [ebp-Ch]
  __int16 v27; // [esp+22h] [ebp-2h]

  if ( *a2 != this->q012 ) /*0x53fcc3*/
    return 0; /*0x53fccc*/
  if ( !*((_BYTE *)a2 + 2) ) /*0x53fcd9*/
  {
    v11 = a5; /*0x53fd92*/
    v20 = *a4; /*0x53fd9b*/
    v21 = a4[1]; /*0x53fda2*/
    v22 = a4[2]; /*0x53fda9*/
    if ( (_WORD)a5 ) /*0x53fdad*/
      Network::SetPort(&v20, a5); /*0x53fdb4*/
    v12 = 0; /*0x53fdbf*/
    if ( *((int *)this + 53) <= 0 ) /*0x53fdc3*/
    {
LABEL_24:
      if ( !ConnectionClass::allocPacketSlot(*((int **)this + 1), a2, a3, &v20, 12) ) /*0x53fe20*/
        goto LABEL_30; /*0x53fe20*/
      v14 = (_DWORD *)(this->q0CC + 12 * this->q036); /*0x53fe31*/
      *v14 = v20; /*0x53fe38*/
      v14[1] = v21; /*0x53fe3e*/
      v14[2] = v22; /*0x53fe45*/
      *(_DWORD *)(this->IPXGlobalConnClass_field_0x34 + 4 * this->q036) = *((_DWORD *)a2 + 1); /*0x53fe57*/
      v15 = this->q035; /*0x53fe60*/
      v16 = this->q036 + 1; /*0x53fe67*/
      this->q036 = v16; /*0x53fe69*/
      if ( v16 >= v15 ) /*0x53fe71*/
        this->q036 = 0; /*0x53fe73*/
    }
    else
    {
      v13 = 0; /*0x53fdc5*/
      while ( 1 ) /*0x53fdc7*/
      {
        if ( v12 >= *(_DWORD *)(this->IPXGlobalConnClass_field_0x04 + 60) ) /*0x53fdcd*/
        {
LABEL_23:
          v11 = a5; /*0x53fe05*/
          goto LABEL_24; /*0x53fe05*/
        }
        if ( GUID::Compare((char *)&v20, v13 + this->q0CC) /*0x53fdf1*/
          && *((_DWORD *)a2 + 1) == *(_DWORD *)(this->IPXGlobalConnClass_field_0x34 + 4 * v12) )
        {
          break; /*0x53fdf1*/
        }
        ++v12; /*0x53fdfd*/
        v13 += 12; /*0x53fdfe*/
        if ( (signed int)v12 >= this->q035 ) /*0x53fe03*/
          goto LABEL_23; /*0x53fe03*/
      }
      v11 = a5; /*0x53fe86*/
    }
    v17 = *((_DWORD *)a2 + 1); /*0x53fe8e*/
    v18 = *((_WORD *)this + 92); /*0x53fe91*/
    v23 = this->q012; /*0x53fe98*/
    v24 = 2; /*0x53fe9f*/
    v26 = v17; /*0x53feaa*/
    v27 = v18; /*0x53feb4*/
    v25 = 0; /*0x53feb9*/
    Debug::Log(); /*0x53febe*/
    v19 = MEMORY[0xA8EA0C]; /*0x53fec3*/
    LOBYTE(v19) = this == (void *)MEMORY[0xA8EA0C]; /*0x53fed3*/
    if ( (*(int (__thiscall **)(void *, __int16 *, int, int *, int, int, int))(this->IPXGlobalConnClass_field_0x24)( /*0x53fee4*/
           this,
           &v23,
           16,
           a4,
           12,
           v19,
           v11) )
    {
      return 1; /*0x53fee9*/
    }
LABEL_30:
    Debug::Log(); /*0x53fef0*/
    return 1; /*0x53fef0*/
  }
  if ( *((_BYTE *)a2 + 2) == 1 ) /*0x53fce0*/
  {
    v20 = *a4; /*0x53fd45*/
    v21 = a4[1]; /*0x53fd4c*/
    v22 = a4[2]; /*0x53fd53*/
    if ( (_WORD)a5 ) /*0x53fd5e*/
      Network::SetPort(&v20, a5); /*0x53fd65*/
    ConnectionClass::allocPacketSlot(*((int **)this + 1), a2, a3, &v20, 12); /*0x53fd7a*/
    return 1; /*0x53fd8b*/
  }
  if ( *((_BYTE *)a2 + 2) != 2 ) /*0x53fce3*/
    return 1; /*0x53fce3*/
  v7 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x53fce9*/
  v8 = 0; /*0x53fcec*/
  if ( (int)v7[10] <= 0 ) /*0x53fcf3*/
    return 1; /*0x53fefb*/
  while ( 1 ) /*0x53fcfa*/
  {
    TileIndex = (_DWORD *)Terrain::GetTileIndex(v7, v8); /*0x53fcfa*/
    v10 = TileIndex[5]; /*0x53fcff*/
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)(v10 + 4) && !*(_BYTE *)(v10 + 2) ) /*0x53fd0a*/
      break; /*0x53fd0a*/
    v7 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x53fd11*/
    if ( ++v8 >= v7[10] ) /*0x53fd18*/
      return 1; /*0x53fd26*/
  }
  *TileIndex |= 2u; /*0x53fd30*/
  return 1; /*0x53fcc5*/
}


// ==== 0x0053FF10  IPXGlobalConnClass::ConnectToHost  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt13(_DWORD *this, void *a2, signed int *a3, _DWORD *a4, _WORD *a5)
{
  _DWORD *v5; // ecx
  _DWORD *TileType; // eax
  signed int v7; // edx
  int v8; // ebx
  _DWORD *v9; // edx

  v5 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x53ff10*/
  if ( !v5[14] ) /*0x53ff13*/
    return 0; /*0x53ff13*/
  TileType = (_DWORD *)Terrain::GetTileType(v5, 0); /*0x53ff1c*/
  if ( !TileType || (*TileType & 2) != 0 ) /*0x53ff2a*/
    return 0; /*0x53ff8d*/
  v7 = TileType[2] - 16; /*0x53ff32*/
  v8 = TileType[3]; /*0x53ff36*/
  *TileType |= 2u; /*0x53ff39*/
  if ( v7 > 0 ) /*0x53ff3d*/
    qmemcpy(a2, (const void *)(v8 + 16), v7); /*0x53ff50*/
  *a3 = v7; /*0x53ff60*/
  *a5 = *(_WORD *)(v8 + 14); /*0x53ff6b*/
  v9 = (_DWORD *)TileType[5]; /*0x53ff6e*/
  *a4 = *v9; /*0x53ff77*/
  a4[1] = v9[1]; /*0x53ff7c*/
  a4[2] = v9[2]; /*0x53ff82*/
  return 1; /*0x53ff8a*/
}


// ==== 0x0053FFA0  IPXGlobalConnClass::GetTileData  this=IPXGlobalConnClass  sig=csp ====
int __thiscall TerrainTypeClass_GetTileData(
        _DWORD *this,
        int a2,
        void *a3,
        signed int *a4,
        _DWORD *a5,
        _WORD *a6,
        _DWORD *a7)
{
  _DWORD *v7; // ecx
  int TileType; // eax
  int v9; // ebx
  signed int v10; // edx
  _DWORD *v11; // edx

  v7 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x53ffa0*/
  if ( v7[14] < a2 ) /*0x53ffaa*/
    return 0; /*0x53ffaa*/
  TileType = Terrain::GetTileType(v7, a2); /*0x53ffad*/
  if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x53ffb9*/
    return 0; /*0x540024*/
  v9 = *(_DWORD *)(TileType + 12); /*0x53ffbf*/
  v10 = *(_DWORD *)(TileType + 8) - 16; /*0x53ffc2*/
  if ( v10 > 0 ) /*0x53ffc7*/
    qmemcpy(a3, (const void *)(v9 + 16), v10); /*0x53ffda*/
  *a4 = v10; /*0x53ffea*/
  *a6 = *(_WORD *)(v9 + 14); /*0x53fff4*/
  v11 = *(_DWORD **)(TileType + 20); /*0x53fff7*/
  *a5 = *v11; /*0x540000*/
  a5[1] = v11[1]; /*0x540005*/
  a5[2] = v11[2]; /*0x54000b*/
  if ( a7 ) /*0x540014*/
    *a7 = *(_DWORD *)(v9 + 4); /*0x540019*/
  return 1; /*0x540021*/
}

