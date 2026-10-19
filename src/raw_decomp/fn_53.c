// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00530000  ObjectClass::LoadExpansionMixFiles  this=ObjectClass  sig=csp ====
char LoadExpansionMixFiles(ObjectClass *this)
{
  HANDLE FirstFileA; // edi
  MixFileClass *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  HANDLE v5; // edi
  MixFileClass *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-140h] BYREF

  FirstFileA = FindFirstFileA(aEcacheMix, &FindFileData); /*0x530022*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x530035*/
      {
        v2 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x53003d*/
        if ( v2 ) /*0x530047*/
        {
          v3 = MixFileClass::FromFile(v2, FindFileData.cFileName, (int)dword_886980); /*0x53005a*/
          if ( v3 ) /*0x53005e*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530097*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v4 = g_MixFilePool_Count++; /*0x5300a4*/
              *((_DWORD *)g_MixFilePool + v4) = v3; /*0x5300b3*/
            }
            ReturnTrue(0); /*0x5300ba*/
          }
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x5300c5*/
    FindClose(FirstFileA); /*0x5300d0*/
  }
  v5 = FindFirstFileA(aElocalMix, &FindFileData); /*0x5300e2*/
  if ( v5 != (HANDLE)-1 ) /*0x5300e7*/
  {
    do /*0x530178*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5300f5*/
      {
        v6 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5300f9*/
        if ( v6 ) /*0x530103*/
        {
          v7 = MixFileClass::FromFile(v6, FindFileData.cFileName, (int)dword_886980); /*0x530116*/
          if ( v7 ) /*0x53011a*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530153*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v8 = g_MixFilePool_Count++; /*0x530160*/
              *((_DWORD *)g_MixFilePool + v8) = v7; /*0x53016f*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v5, &FindFileData) ); /*0x530178*/
    FindClose(v5); /*0x530183*/
  }
  return 1; /*0x530189*/
}



// ==== 0x005301A0  MixFileClass::Bootstrap  this=MixFileClass  sig=csp ====
char MixFileClass::Bootstrap(MixFileClass *this)
{
  int i; // edi
  _DWORD *v2; // eax
  char v3; // bl
  MixFileClass *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  MixFileClass *v7; // eax
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  _DWORD *v13; // eax
  MixFileClass *v14; // eax
  MixFileClass *v15; // eax
  _DWORD *v16; // eax
  int v17; // [esp+10h] [ebp-68h]
  RawFileClass v18; // [esp+14h] [ebp-64h] BYREF
  char Buffer[64]; // [esp+38h] [ebp-40h] BYREF

  v17 = dword_81C1D0; /*0x5301b1*/
  SetSoundWarning(-2); /*0x5301b5*/
  for ( i = 99; i >= 0; --i ) /*0x5301ba*/
  {
    sprintf(Buffer, "EXPANDMD%02d.MIX", i); /*0x5301ca*/
    v2 = RawFileClass::Construct(&v18, (int)Buffer); /*0x5301db*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x5301ee*/
    RawFileClass::Dtor(&v18); /*0x5301f0*/
    if ( v3 ) /*0x5301f7*/
    {
      v4 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5301ff*/
      if ( v4 ) /*0x530209*/
      {
        v5 = MixFileClass::FromFile(v4, Buffer, (int)dword_886980); /*0x53021c*/
        if ( v5 ) /*0x530220*/
        {
          if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530258*/
            || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
            && g_MixFilePool_GrowSize > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                 &g_MixFileArray,
                 g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                 0) )
          {
            v6 = g_MixFilePool_Count++; /*0x530265*/
            *((_DWORD *)g_MixFilePool + v6) = v5; /*0x530274*/
          }
          Debug::Log_0(); /*0x530281*/
        }
      }
    }
  }
  v7 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x530292*/
  if ( !v7 ) /*0x53029c*/
  {
    g_MixFile_RA2MD = 0; /*0x5302de*/
    return 0; /*0x5302de*/
  }
  g_MixFile_RA2MD = (int)MixFileClass::FromFile(v7, aRa2mdMix, (int)dword_886980); /*0x5302b1*/
  if ( !g_MixFile_RA2MD ) /*0x5302b6*/
    return 0; /*0x5302b6*/
  v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5302ba*/
  if ( !v8 ) /*0x5302c4*/
  {
    g_MixFile_RA2 = 0; /*0x5302ef*/
    return 0; /*0x5302fd*/
  }
  v9 = MixFileClass::FromFile(v8, aRa2Mix, (int)dword_886980); /*0x5302d2*/
  g_MixFile_RA2 = (int)v9; /*0x5302d7*/
  if ( !v9 ) /*0x530300*/
    return 0; /*0x530300*/
  Debug::Log_0(); /*0x530307*/
  v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x53030e*/
  if ( !v11 ) /*0x530318*/
  {
    g_MixFile_CACHEMD = 0; /*0x530375*/
    return 0; /*0x530383*/
  }
  g_MixFile_CACHEMD = (int)MixFileClass::FromFile(v11, aCachemdMix, (int)dword_886980); /*0x53032d*/
  if ( !g_MixFile_CACHEMD || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCachemdMix) ) /*0x53033b*/
    return 0; /*0x53033b*/
  Debug::Log_0(); /*0x530349*/
  v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x530350*/
  if ( !v12 ) /*0x53035a*/
  {
    g_MixFile_CACHE = 0; /*0x530385*/
    return 0; /*0x530393*/
  }
  v13 = MixFileClass::FromFile(v12, aCacheMix_0, (int)dword_886980); /*0x530368*/
  g_MixFile_CACHE = (int)v13; /*0x53036d*/
  if ( !v13 || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCacheMix_0) ) /*0x5303a3*/
    return 0; /*0x5303a3*/
  Debug::Log_0(); /*0x5303b5*/
  v14 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5303bc*/
  if ( !v14 ) /*0x5303c6*/
  {
    g_MixFile_LOCALMD = 0; /*0x53040d*/
    return 0; /*0x53041b*/
  }
  g_MixFile_LOCALMD = (int)MixFileClass::FromFile(v14, aLocalmdMix, (int)dword_886980); /*0x5303db*/
  if ( !g_MixFile_LOCALMD ) /*0x5303e0*/
    return 0; /*0x5303e0*/
  v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5303e8*/
  if ( !v15 ) /*0x5303f2*/
  {
    g_MixFile_LOCAL = 0; /*0x53041d*/
    return 0; /*0x53042b*/
  }
  v16 = MixFileClass::FromFile(v15, aLocalMix, (int)dword_886980); /*0x530400*/
  g_MixFile_LOCAL = (int)v16; /*0x530405*/
  if ( !v16 ) /*0x53042e*/
    return 0; /*0x5302ed*/
  Debug::Log_0(); /*0x530439*/
  SetSoundWarning(v17); /*0x530445*/
  return 1; /*0x5302e4*/
}



// ==== 0x00530460  MixFile::LoadAll  this=MixFile  sig=csp ====
bool __thiscall MixFile::LoadAll(MixFile *this)
{
  _DWORD *v1; // eax
  char v2; // bl
  MixFileClass *v3; // eax
  MixFileClass *v5; // eax
  _DWORD *v6; // eax
  MixFileClass *v7; // eax
  _DWORD *v8; // eax
  MixFileClass *v9; // eax
  MixFileClass *v10; // eax
  _DWORD *v11; // eax
  char v12; // bl
  MixFileClass *v13; // eax
  _DWORD *v14; // eax
  char v15; // bl
  MixFileClass *v16; // eax
  _DWORD *v17; // eax
  char v18; // bl
  MixFileClass *v19; // eax
  int v20; // esi
  MixFileClass *v21; // eax
  MixFileClass *v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  MixFileClass *v25; // eax
  MixFileClass *v26; // eax
  _DWORD *v27; // esi
  int v28; // eax
  _DWORD *v29; // eax
  char v30; // bl
  MixFileClass *v31; // eax
  _DWORD *v32; // eax
  char v33; // bl
  MixFileClass *v34; // eax
  _DWORD *v35; // eax
  char v36; // bl
  MixFileClass *v37; // eax
  _DWORD *v38; // eax
  char v39; // bl
  MixFileClass *v40; // eax
  _DWORD *v41; // eax
  char v42; // bl
  MixFil... [19161 chars total]



// ==== 0x005312A0  ObjectClass::ShowLoadingScreen  this=ObjectClass  sig=csp ====
int __usercall ShowLoadingScreen@<eax>(ObjectClass *this, wchar_t a2@<di>, int a3@<esi>)
{
  int *v3; // ebp
  __int16 *v4; // esi
  char *v5; // ebp
  int i; // edx
  char *v7; // eax
  char v8; // cl
  ConvertClass *v9; // eax
  char *v10; // ecx
  int v11; // edx
  wchar_t *StringCSF; // edi
  int Instance; // esi
  int v14; // eax
  wchar_t *v15; // eax
  size_t v16; // edi
  int v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  __int64 v21; // rax
  void *v22; // esi
  wchar_t v25; // [esp-10h] [ebp-B8h]
  wchar_t v26; // [esp-10h] [ebp-B8h]
  wchar_t v27; // [esp-10h] [ebp-B8h]
  wchar_t v28; // [esp-10h] [ebp-B8h]
  int v29; // [esp-10h] [ebp-B8h]
  int *v31; // [esp-8h] [ebp-B0h]
  int v32; // [esp+0h] [ebp-A8h] BYREF
  int v33; // [esp+4h] [ebp-A4h]
  int v34; // [esp+8h] [ebp-A0h]
  int v35[2]; // [esp+Ch] [ebp-9Ch] BYREF
  __int16 v36; // [esp+14h] [ebp-94h]
  void *Block; // [esp+18h] [ebp-90h]
  int v38[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  int v39; // [esp+24h] [ebp-84h]
  int v40; // [esp+28h] [ebp-80h]
  struct tagRECT Rect; // [esp+2Ch] [ebp-7Ch] BYREF
  CCFileClass v42; // [esp+3Ch] [ebp-6Ch] BYREF
  char v43[12]; // [esp+94h] [ebp-14h] BYREF
  int v44; // [esp+A0h] [ebp-8h]

  v31 = v3; /*0x5312a7*/
  CCFileClass::Construct(&v42, aGlsmdPal); /*0x5312b3*/
  v4 = 0; /*0x5312ba*/
  v5 = 0; /*0x5312c1*/
  Block = 0; /*0x5312c3*/
  v34 = 0; /*0x5312c7*/
  if ( (unsigned __int8)CCFileClass::Open(&v42, 0) ) /*0x5312cb*/
  {
    v5 = (char *)CCFileClass::ReadEntireFile(&v42); /*0x5312e5*/
    CCFileClass::Reset(&v42); /*0x5312e7*/
    for ( i = 0; i < 256; ++i ) /*0x5312ec*/
    {
      v7 = &v5[2 * (i % 256) + i % 256]; /*0x531302*/
      LOBYTE(v36) = 4 * *v7; /*0x531309*/
      HIBYTE(v36) = 4 * v7[1]; /*0x531313*/
      v8 = 4 * v7[2]; /*0x53131f*/
      *(_WORD *)v7 = v36; /*0x531323*/
      v7[2] = v8; /*0x53132c*/
    }
    if ( v5 ) /*0x531333*/
    {
      v9 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x53133a*/
      if ( v9 ) /*0x531344*/
      {
        v34 = (int)ConvertClass::Construct(v9, (int)v5, (int)&FileSystem_TEMPERAT_PAL, (int)g_DSurface_Primary, 1, 0); /*0x531363*/
        if ( v34 ) /*0x531367*/
        {
          v10 = aGlssmdShp; /*0x53136e*/
          if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x531378*/
            v10 = aGlslmdShp; /*0x53137a*/
          Block = (void *)SearchMIXFile(v10, 0); /*0x531386*/
          v4 = (__int16 *)Block; /*0x53138a*/
        }
      }
      else
      {
        v34 = 0; /*0x53166f*/
      }
    }
  }
  GetClientRect(g_hWnd, &Rect); /*0x531398*/
  v38[0] = 0; /*0x5313a2*/
  v38[1] = 0; /*0x5313b8*/
  v39 = Rect.right - Rect.left; /*0x5313bc*/
  v40 = Rect.bottom - Rect.top; /*0x5313c0*/
  if ( v4 ) /*0x5313c4*/
  {
    v11 = v4[2]; /*0x5313cf*/
    v35[0] = (Rect.right - Rect.left - v4[1]) / 2; /*0x5313d5*/
    v35[1] = (Rect.bottom - Rect.top - v11) / 2; /*0x5313e5*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden, v34, (int)v4, 0, v35, v38, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x53140e*/
  }
  StringCSF = GetStringCSF(aTxtCopyright, 0, g_Str_File_Init_CPP, 4930); /*0x53142e*/
  Instance = TextRenderer::GetInstance(); /*0x531439*/
  v32 = 0; /*0x53143e*/
  v33 = v40 - 40; /*0x531444*/
  if ( Instance ) /*0x53144d*/
  {
    v14 = Text::MeasureWidth((int)StringCSF, 0); /*0x531454*/
    v32 = v39 - v14 - 10; /*0x531461*/
  }
  TextRenderer::Printf(v35, (size_t)StringCSF, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, a2); /*0x531485*/
  v15 = GetStringCSF(aGuiWwbrand, 0, g_Str_File_Init_CPP, 4941); /*0x53149e*/
  v16 = (size_t)v15; /*0x5314a5*/
  if ( Instance ) /*0x5314a7*/
  {
    v17 = Text::MeasureWidth((int)v15, 0); /*0x5314ae*/
    v32 = v39 - v17 - 10; /*0x5314bf*/
    v33 += *(_DWORD *)(Instance + 28) + 3; /*0x5314ca*/
  }
  TextRenderer::Printf(v35, v16, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v25); /*0x5314ee*/
  v18 = GetStringCSF(aGuiLoadingex, 0, g_Str_File_Init_CPP, 4951); /*0x531507*/
  v32 = 10; /*0x53152c*/
  v33 = 10; /*0x531530*/
  TextRenderer::Printf(v35, (size_t)v18, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v26); /*0x531534*/
  v19 = GetStringCSF(aGuiTrademarkto, 0, g_Str_File_Init_CPP, 4958); /*0x53154d*/
  v32 = 10; /*0x531556*/
  v33 = v40 - 40; /*0x531565*/
  TextRenderer::Printf(v35, (size_t)v19, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v27); /*0x531581*/
  v20 = GetStringCSF(aGuiTrademarkbo, 0, g_Str_File_Init_CPP, 4965); /*0x53159a*/
  v32 = 10; /*0x53159f*/
  v33 += *(_DWORD *)(Instance + 28) + 3; /*0x5315bb*/
  TextRenderer::Printf(v35, (size_t)v20, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v28); /*0x5315d2*/
  Frame::Present((int)g_DSurface_Hidden, 10, (int)v5, v16, 0, v29, a3, v31); /*0x5315e4*/
  LODWORD(v21) = Audio::Callback(); /*0x5315e9*/
  *(_QWORD *)&stru_A8EB00.?[2980] = v21 + 5000; /*0x5315f6*/
  if ( v5 ) /*0x531603*/
    __3_YAXPAX_Z(v5); /*0x531606*/
  v22 = Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy((FileTreeNode *)Block); /*0x531618*/
    __3_YAXPAX_Z(v22); /*0x53161e*/
  }
  if ( v34 ) /*0x531630*/
    (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x531636*/
  *(_DWORD *)v42.CDFileClass = &CCFileClass::`vftable'; /*0x53163f*/
  v44 = 0; /*0x531647*/
  Vector::Clear((int)v43); /*0x531652*/
  *(_DWORD *)v42.CDFileClass = &off_7E1668; /*0x53165b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v42); /*0x531668*/
}



// ==== 0x00531680  InitBulkData  this=-  sig=ida-proto ====
char InitBulkData()
{
  File *v0; // eax
  File *v2; // eax
  ObjectClass *v3; // [esp+0h] [ebp-DCh]
  ObjectClass *v4; // [esp+0h] [ebp-DCh]
  ObjectClass *v5; // [esp+0h] [ebp-DCh]
  ObjectClass *v6; // [esp+0h] [ebp-DCh]
  CCFileClass v7; // [esp+4h] [ebp-D8h] BYREF
  int v8[3]; // [esp+5Ch] [ebp-80h] BYREF
  int v9; // [esp+68h] [ebp-74h]
  CCFileClass v10; // [esp+70h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+C8h] [ebp-14h] BYREF
  int v12; // [esp+D4h] [ebp-8h]

  if ( !g_MixFile_CONQMD /*0x5316ec*/
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CONQUER
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CAMEOMD
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CAMEO
    || !(unsigned __int8)ReturnTrue(0) )
  {
    return 0; /*0x5318a7*/
  }
  Event::Dispatch(); /*0x5316f9*/
  Event::Dispatch(); /*0x5316fe*/
  MouseClass::LoadTypeData((MouseClass *)&stru_87F5F0.__pad_58[416]); /*0x531708*/
  nullsub_29(v3); /*0x531712*/
  BulkData::InitMissionHashing((BulkData *)&dword_A8B238); /*0x53171c*/
  FileSystem::InitPipShapes(); /*0x531721*/
  nullsub_6(); /*0x531726*/
  FileSystem::InitPipShapes(); /*0x53172b*/
  FileSystem::InitPipShapes(); /*0x531730*/
  FileSystem::InitPipShapes(); /*0x531735*/
  InitVisceroidArt(v4); /*0x53173a*/
  FileSystem::InitPipShapes(); /*0x53173f*/
  FileSystem::InitPipShapes(); /*0x531744*/
  InitRotorArt(); /*0x531749*/
  nullsub_15(); /*0x53174e*/
  GenerateRangeRingTextures(v5); /*0x531753*/
  GenerateLightningStormGlow(v6); /*0x531758*/
  CCFileClass::Construct(&v7, aDpodVxl); /*0x531766*/
  v0 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x53176d*/
  if ( !v0 ) /*0x531777*/
  {
    *(_DWORD *)&stru_A8EB00.?[244] = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  *(_DWORD *)&stru_A8EB00.?[244] = File::LoadFileVXL(v0, (int)&v7, 0); /*0x531788*/
  if ( !*(_DWORD *)&stru_A8EB00.?[244] ) /*0x53178d*/
  {
LABEL_11:
    Debug::Log(); /*0x53178f*/
LABEL_12:
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x53179c*/
    v9 = 0; /*0x5317a8*/
    Vector::Clear((int)v8); /*0x5317ac*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x5317b5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  CCFileClass::Construct(&v10, aDpodHva); /*0x5317dd*/
  v2 = (File *)__2_YAPAXI_Z(0x10u); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    *(_DWORD *)&stru_A8EB00.?[248] = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  *(_DWORD *)&stru_A8EB00.?[248] = File::LoadFileHVA(v2, (int)&v10); /*0x5317fe*/
  if ( !*(_DWORD *)&stru_A8EB00.?[248] ) /*0x531803*/
  {
LABEL_16:
    Debug::Log(); /*0x531805*/
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x531819*/
    v12 = 0; /*0x531821*/
    Vector::Clear((int)v11); /*0x531828*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x531831*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x531852*/
  v12 = 0; /*0x53185a*/
  Vector::Clear((int)v11); /*0x531861*/
  *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x53186a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531872*/
  *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x53187b*/
  v9 = 0; /*0x531883*/
  Vector::Clear((int)v8); /*0x531887*/
  *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x531890*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x531898*/
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
  sprintf(Buffer, "Version %s", ModuleVersion); /*0x531a9b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531ab0*/
  ModuleInternalVersion = GetModuleInternalVersion((int)&dword_A8ECE0); /*0x531ab7*/
  sprintf(Buffer, "Internal Version %s", ModuleInternalVersion); /*0x531ac7*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531adc*/
  v16[0] = 0; /*0x531aea*/
  Time::FormatDate(v16); /*0x531af2*/
  v12 = (const char *)String::CopyConstant(Destination); /*0x531b10*/
  v10 = (const char *)String::FormatDword(v17); /*0x531b1d*/
  sprintf(Buffer, "Release Build: %s by %s - %s", v10, v12, v16);
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531b42*/
  v14 = 5; /*0x531b51*/
  v13 = 0; /*0x531b59*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F314); /*0x531b5e*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F4A0); /*0x531b6d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F420); /*0x531b7c*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F520); /*0x531b8b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F394); /*0x531b9a*/
  GetVersionString(&v14, &v13, 0, 0); /*0x531ba8*/
  v11 = (const char *)&off_821F08; /*0x531bb3*/
  if ( !v13 ) /*0x531bb8*/
    v11 = g_INI_Key_No; /*0x531bba*/
  sprintf(Buffer, "MMX %s, Vendor: %s", v11, Source);
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
      if ( g_DisplayWidth > 800 ) /*0x531d41*/
        v4 = (g_DisplayWidth - 800) / 2; /*0x531d51*/
      else
        v4 = 0; /*0x531d43*/
      if ( MEMORY[0x8A00A8] > 600 ) /*0x531d5d*/
        v5 = (MEMORY[0x8A00A8] - 600) / 2; /*0x531d6b*/
      else
        v5 = 0; /*0x531d5f*/
      SetWindowPos(DlgItem, 0, v4, v5, -1, -1, 0xDu); /*0x531d78*/
      SendMessageA(DlgItem, 0x4E3u, 1u, 0); /*0x531d8e*/
      if ( g_DisplayWidth == 640 ) /*0x531d9a*/
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x531da1*/
      else
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x531db0*/
    }
    do /*0x531f04*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x531db2*/
        dwNewLong = 7; /*0x531dbb*/
      if ( g_LoadScreenFlag ) /*0x531dca*/
      {
        g_LoadScreenFlag = 0; /*0x531dd0*/
        Screen::Capture(1, 0, a1, a2); /*0x531dd7*/
        Frame::Present(0); /*0x531de6*/
      }
      if ( (unsigned __int16)EventQueue::Process(dword_87F770) ) /*0x531df1*/
      {
        v6 = EventQueue::Read(dword_87F770); /*0x531e05*/
        a1 = v6; /*0x531e0d*/
        if ( (v6 & 0x800) == 0 ) /*0x531e16*/
        {
          a2 = (char)v6; /*0x531e1c*/
          if ( !isalnum((char)v6) || (_BYTE)a1 == 126 ) /*0x531e33*/
          {
            memset(byte_A8F7B8, 0, sizeof(byte_A8F7B8)); /*0x531f3e*/
          }
          else
          {
            v11[0] = a1; /*0x531e3d*/
            v11[1] = 0; /*0x531e42*/
            Debug::Log_0(v11); /*0x531e47*/
            v7 = strlen(byte_A8F7B8); /*0x531e5e*/
            if ( v7 >= 31 ) /*0x531e63*/
            {
              v7 = 0; /*0x531e65*/
              byte_A8F7B8[0] = 0; /*0x531e67*/
            }
            byte_A8F7B8[v7] = toupper((char)a1); /*0x531e77*/
            v8 = 0; /*0x531e7d*/
            v9 = (const char **)off_825C2C; /*0x531e7f*/
            while ( !strstr(byte_A8F7B8, *v9) ) /*0x531e96*/
            {
              v9 += 4; /*0x531e98*/
              ++v8; /*0x531e9b*/
              if ( (int)v9 >= (int)off_825C6C ) /*0x531ea2*/
                goto LABEL_27; /*0x531ea2*/
            }
            *(_BYTE *)*(&g_PlayerHouseFlags + 4 * v8) = *(_BYTE *)*(&g_PlayerHouseFlags + 4 * v8) == 0; /*0x531ebf*/
            memset(byte_A8F7B8, 0, sizeof(byte_A8F7B8)); /*0x531ec8*/
            PlayVocClass(1.0, 0); /*0x531edb*/
            g_LoadScreenFlag = 0; /*0x531ee4*/
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
int __stdcall MainMenu_DlgProc(HWND hWnd, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v6; // esi
  int v7; // eax
  const wchar_t *v8; // eax
  HWND DlgItem; // eax
  int v10; // [esp-4h] [ebp-110h]
  wchar_t lParam[128]; // [esp+Ch] [ebp-100h] BYREF

  result = BaseDialogProc(hWnd, a3, a4); /*0x531f88*/
  if ( !result ) /*0x531f8f*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x531f98*/
    switch ( a2 ) /*0x531fa1*/
    {
      case 15: /*0x531fa1*/
        DlgItem = GetDlgItem(hWnd, 1818); /*0x5320db*/
        SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x5320eb*/
        break;
      case 273: /*0x531fa1*/
        if ( (unsigned __int16)a3 > 0x683u ) /*0x532033*/
        {
          if ( (unsigned __int16)a3 == 1668 ) /*0x5320a6*/
          {
            *WindowLongA = 2; /*0x5320c2*/
            return 0; /*0x5320d2*/
          }
          if ( (unsigned __int16)a3 == 1670 ) /*0x5320ab*/
          {
            *WindowLongA = 4; /*0x5320ae*/
            return 0; /*0x5320be*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x532035*/
          {
            case 0x683u: /*0x532035*/
              *WindowLongA = 1; /*0x53208d*/
              return 0; /*0x53209d*/
            case 0x3EEu: /*0x532035*/
              *WindowLongA = 6; /*0x532079*/
              return 0; /*0x532089*/
            case 0x55Cu: /*0x532035*/
              *WindowLongA = 5; /*0x532065*/
              return 0; /*0x532075*/
            case 0x578u: /*0x532035*/
              *WindowLongA = 3; /*0x532051*/
              return 0; /*0x532061*/
          }
        }
        break;
      case 1175: /*0x531fa1*/
        v6 = GetDlgItem(hWnd, 1821); /*0x531fcc*/
        v7 = GetModuleInternalVersion(&dword_A8ECE0); /*0x531fce*/
        v10 = CharToWideString(v7); /*0x531fda*/
        v8 = (const wchar_t *)GetStringCSF(aGuiVersion, (int)g_Str_File_Init_CPP, 5975); /*0x531fec*/
        swprintf(lParam, (const size_t)&off_826960, v8, v10); /*0x531ffc*/
        SendMessageA(v6, 0x4B2u, 0, (LPARAM)lParam); /*0x532011*/
        return 0; /*0x532022*/
    }
    return 0; /*0x5320f1*/
  }
  return result; /*0x532017*/
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
int InitCommands(ObjectClass *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // esi
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // esi
  int v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // esi
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // esi
  int v46; // eax
  _DWORD *v47; // eax
 ... [53622 chars total]



// ==== 0x00533D20  KeyboardConfig::LoadINI  this=KeyboardConfig  sig=csp ====
char KeyboardConfig::LoadINI(KeyboardConfig *this)
{
  int v1; // esi
  unsigned __int8 *StringByIndex; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  CCINIClass v9; // [esp+Ch] [ebp-C4h] BYREF
  CCFileClass v10; // [esp+64h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]

  INIClass::INIClass((INIClass *)&v9); /*0x533d2b*/
  v9.ownsFile = 0; /*0x533d3b*/
  *(_DWORD *)v9.INIClass = &CCINIClass_Vtable; /*0x533d3f*/
  CCFileClass::Construct(&v10, aKeyboardmdIni); /*0x533d47*/
  if ( CCINIClass::Load(&v9, (int)&v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(*(void **)&stru_87F5F0.__pad_58[56]); /*0x533d6c*/
    v1 = 0; /*0x533d74*/
    *(_DWORD *)&stru_87F5F0.__pad_58[56] = 0; /*0x533d7a*/
    *(_DWORD *)&stru_87F5F0.__pad_58[60] = 0; /*0x533d85*/
    *(_DWORD *)&stru_87F5F0.__pad_58[64] = 0; /*0x533d8b*/
    stru_87F5F0.__pad_58[68] = 0; /*0x533d91*/
    *(_DWORD *)&stru_87F5F0.__pad_58[72] = 0; /*0x533d97*/
    for ( i = 0; i < INIClass::GetKeyCount(v9.INIClass, g_INI_Key_Hotkey); v1 = i ) /*0x533da8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v9.INIClass, g_INI_Key_Hotkey, v1); /*0x533dbf*/
      v3 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v9.INIClass, g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( *(int *)&stru_87F5F0.__pad_58[32] > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[20]
                                                                            + 4 * v3)
                                                              + 4))(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[20]
                                                                              + 4 * v3)),
                  (const char *)StringByIndex) )
        {
          if ( ++v3 >= *(int *)&stru_87F5F0.__pad_58[32] ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        v4 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[20] + 4 * v3); /*0x533e32*/
        if ( v4 && Int_Overwrite ) /*0x533e3f*/
        {
          v5 = *(_DWORD *)&stru_87F5F0.__pad_58[64]; /*0x533e47*/
          if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] + 1 <= *(int *)&stru_87F5F0.__pad_58[64] ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !*(_DWORD *)&stru_87F5F0.__pad_58[64] ) /*0x533e53*/
            v5 = 10; /*0x533e55*/
          if ( KeyboardConfig::ReleaseBuffer((int)&stru_87F5F0.__pad_58[56], v5) ) /*0x533e60*/
          {
LABEL_13:
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[56] + 8 * *(_DWORD *)&stru_87F5F0.__pad_58[60]) = Int_Overwrite; /*0x533e74*/
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[56] + 8 * *(_DWORD *)&stru_87F5F0.__pad_58[60] + 4) = v4; /*0x533e83*/
            stru_87F5F0.__pad_58[68] = 0; /*0x533e8d*/
            ++*(_DWORD *)&stru_87F5F0.__pad_58[60]; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x533ec0*/
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x533ed8*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    Debug::Log(); /*0x533efe*/
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x533f25*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533f36*/
    return 0; /*0x533f3b*/
  }
}



// ==== 0x00533F50  Sidebar::ScrollSidebarSkipGame  this=char*  sig=csp ====
int __thiscall Sidebar::ScrollSidebarSkipGame(const char *this)
{
  int result; // eax
  int v2; // edi

  result = dword_87F668; /*0x533f50*/
  v2 = 0; /*0x533f59*/
  if ( dword_87F668 > 0 ) /*0x533f5f*/
  {
    while ( strcmp( /*0x533f9f*/
              (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)dword_87F65C + v2) + 4))(*((_DWORD *)dword_87F65C + v2)),
              this) )
    {
      result = dword_87F668; /*0x533fa1*/
      if ( ++v2 >= dword_87F668 ) /*0x533fa9*/
        return result; /*0x533fa9*/
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)dword_87F65C + v2) + 32))( /*0x533fbc*/
             *((_DWORD *)dword_87F65C + v2),
             0);
  }
  return result; /*0x533fab*/
}



// ==== 0x00533FD0  AllocateSurfaceScreenSurfaces  this=-  sig=csp ====
char __fastcall Surface_AllocateScreenSurfaces(int a1, int a2, int a3, int a4, char a5)
{
  bool v7; // bl
  char *v8; // eax
  char *v9; // eax
  const char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  const char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  const char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  const char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  const char *v24; // eax
  char *v25; // eax
  char *v26; // eax
  const char *v27; // eax
  bool v29; // [esp+29h] [ebp-1h]

  Debug::Log(aAllocatingNewS); /*0x533fdd*/
  if ( DSurface_Alternate ) /*0x533fee*/
  {
    Debug::Log(aDeletingAltern); /*0x533ff5*/
    if ( DSurface_Alternate ) /*0x534005*/
      (**(void (__thiscall ***)(int, int))DSurface_Alternate)(DSurface_Alternate, 1); /*0x53400b*/
    DSurface_Alternate = 0; /*0x53400d*/
  }
  if ( g_DSurface_Hidden ) /*0x534019*/
  {
    Debug::Log(aDeletingHidden); /*0x534020*/
    if ( g_DSurface_Hidden ) /*0x534030*/
      (**(void (__thiscall ***)(int, int))g_DSurface_Hidden)(g_DSurface_Hidden, 1); /*0x534036*/
    g_DSurface_Hidden = 0; /*0x534038*/
  }
  if ( DSurface_Composite ) /*0x534044*/
  {
    Debug::Log(aDeletingCompos); /*0x53404b*/
    if ( DSurface_Composite ) /*0x53405b*/
      (**(void (__thiscall ***)(int, int))DSurface_Composite)(DSurface_Composite, 1); /*0x534061*/
    DSurface_Composite = 0; /*0x534063*/
  }
  if ( DSurface_Tile ) /*0x53406f*/
  {
    Debug::Log(aDeletingTilesu); /*0x534076*/
    if ( DSurface_Tile ) /*0x534086*/
      (**(void (__thiscall ***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53408c*/
    DSurface_Tile = 0; /*0x53408e*/
  }
  if ( DSurface_Sidebar ) /*0x53409a*/
  {
    Debug::Log(aDeletingSideba); /*0x5340a1*/
    if ( DSurface_Sidebar ) /*0x5340b1*/
      (**(void (__thiscall ***)(int, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x5340b7*/
    DSurface_Sidebar = 0; /*0x5340b9*/
  }
  v7 = Game_bVideoBackBuffer == 0; /*0x5340d2*/
  v29 = byte_A8EB96 == 0; /*0x5340d7*/
  if ( a5 && *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5340e8*/
  {
    v8 = (char *)__2_YAPAXI_Z(0x24u); /*0x5340ec*/
    if ( v8 ) /*0x5340f6*/
      v9 = DSurface::Construct(v8, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 0, 0); /*0x534104*/
    else
      v9 = 0; /*0x53410b*/
    g_DSurface_Hidden = (int)v9; /*0x53410d*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v9 + 24))(v9, 0); /*0x534117*/
    v10 = g_INI_Key_VRAM; /*0x534122*/
    if ( !*(_BYTE *)(g_DSurface_Hidden + 25) ) /*0x53411f*/
      v10 = g_Str_SYSTEM_MEMORY; /*0x53412b*/
    Debug::Log("HiddenSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v10); /*0x53413e*/
  }
  if ( *(int *)(a2 + 8) > 0 && *(int *)(a2 + 12) > 0 ) /*0x53414e*/
  {
    v11 = (char *)__2_YAPAXI_Z(0x24u); /*0x534152*/
    if ( v11 ) /*0x53415c*/
      v12 = DSurface::Construct(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), v7, 1); /*0x534172*/
    else
      v12 = 0; /*0x534179*/
    DSurface_Composite = (int)v12; /*0x53417b*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0); /*0x534185*/
    v13 = g_INI_Key_VRAM; /*0x534190*/
    if ( !*(_BYTE *)(DSurface_Composite + 25) ) /*0x53418d*/
      v13 = g_Str_SYSTEM_MEMORY; /*0x534199*/
    Debug::Log("CompositeSurface (%dx%d) %s ENABLE_3D\n", *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), v13); /*0x5341ac*/
  }
  if ( *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x5341c4*/
  {
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x5341c8*/
    if ( v14 ) /*0x5341d2*/
      v15 = DSurface::Construct(v14, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), v7, 1); /*0x5341e8*/
    else
      v15 = 0; /*0x5341ef*/
    DSurface_Tile = (int)v15; /*0x5341f1*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v15 + 24))(v15, 0); /*0x5341fc*/
    v16 = g_INI_Key_VRAM; /*0x534207*/
    if ( !*(_BYTE *)(DSurface_Tile + 25) ) /*0x534204*/
      v16 = g_Str_SYSTEM_MEMORY; /*0x534210*/
    Debug::Log("TileSurface (%dx%d) %s ENABLE_3D\n", *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), v16); /*0x534223*/
  }
  if ( DSurface_Composite && DSurface_Tile && *(_BYTE *)(DSurface_Composite + 25) != *(_BYTE *)(DSurface_Tile + 25) ) /*0x53424c*/
  {
    if ( DSurface_Composite ) /*0x534256*/
      (**(void (__stdcall ***)(int))DSurface_Composite)(1); /*0x53425c*/
    if ( DSurface_Tile ) /*0x534266*/
      (**(void (__thiscall ***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53426c*/
    Debug::Log(aMovingTilesurf); /*0x534273*/
    v17 = (char *)__2_YAPAXI_Z(0x24u); /*0x53427a*/
    if ( v17 ) /*0x534286*/
      DSurface_Composite = (int)DSurface::Construct(v17, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 1, 1); /*0x53429b*/
    else
      DSurface_Composite = 0; /*0x5342a2*/
    v18 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342aa*/
    if ( v18 ) /*0x5342b4*/
      DSurface_Tile = (int)DSurface::Construct(v18, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 1, 1); /*0x5342c9*/
    else
      DSurface_Tile = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    v19 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342eb*/
    if ( v19 ) /*0x5342f5*/
      v20 = DSurface::Construct(v19, *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 12), v29, 0); /*0x53430f*/
    else
      v20 = 0; /*0x534316*/
    DSurface_Sidebar = (int)v20; /*0x534318*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v20 + 24))(v20, 0); /*0x534323*/
    v21 = g_INI_Key_VRAM; /*0x53432e*/
    if ( !*(_BYTE *)(DSurface_Sidebar + 25) ) /*0x53432b*/
      v21 = g_Str_SYSTEM_MEMORY; /*0x534337*/
    Debug::Log("SidebarSurface (%dx%d) %s\n", *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 12), v21); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( *(int *)(a1 + 8) <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( *(int *)(a1 + 12) > 0 ) /*0x53436a*/
    {
      v22 = (char *)__2_YAPAXI_Z(0x24u); /*0x53436e*/
      if ( v22 ) /*0x534378*/
        v23 = DSurface::Construct(v22, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 0, 0); /*0x534388*/
      else
        v23 = 0; /*0x53438f*/
      g_DSurface_Hidden = (int)v23; /*0x534391*/
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v23 + 24))(v23, 0); /*0x53439c*/
      v24 = g_INI_Key_VRAM; /*0x5343a7*/
      if ( !*(_BYTE *)(g_DSurface_Hidden + 25) ) /*0x5343a4*/
        v24 = g_Str_SYSTEM_MEMORY; /*0x5343b0*/
      Debug::Log("HiddenSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v24); /*0x5343c3*/
    }
  }
  if ( *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5343d7*/
  {
    v25 = (char *)__2_YAPAXI_Z(0x24u); /*0x5343db*/
    if ( v25 ) /*0x5343e5*/
      v26 = DSurface::Construct(v25, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 1, 0); /*0x5343f5*/
    else
      v26 = 0; /*0x5343fc*/
    DSurface_Alternate = (int)v26; /*0x5343fe*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v26 + 24))(v26, 0); /*0x534409*/
    v27 = g_INI_Key_VRAM; /*0x534414*/
    if ( !*(_BYTE *)(DSurface_Alternate + 25) ) /*0x534411*/
      v27 = g_Str_SYSTEM_MEMORY; /*0x53441d*/
    Debug::Log("AlternateSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v27); /*0x534430*/
  }
  return 1; /*0x534438*/
}



// ==== 0x00534450  Game::DestroyAllObjects  this=Game  sig=csp ====
int Game::DestroyAllObjects()
{
  size_t i; // eax
  int v1; // ecx
  void *v2; // esi
  Game *v3; // ecx
  ObjectClass *v5; // [esp+0h] [ebp-4h]
  ObjectClass *v6; // [esp+0h] [ebp-4h]
  ObjectClass *v7; // [esp+0h] [ebp-4h]
  ObjectClass *v8; // [esp+0h] [ebp-4h]
  ObjectClass *v9; // [esp+0h] [ebp-4h]
  ObjectClass *v10; // [esp+0h] [ebp-4h]
  ObjectClass *v11; // [esp+0h] [ebp-4h]
  ObjectClass *v12; // [esp+0h] [ebp-4h]
  ObjectClass *v13; // [esp+0h] [ebp-4h]
  ObjectClass *v14; // [esp+0h] [ebp-4h]
  ObjectClass *v15; // [esp+0h] [ebp-4h]
  ObjectClass *v16; // [esp+0h] [ebp-4h]
  ObjectClass *v17; // [esp+0h] [ebp-4h]
  ObjectClass *v18; // [esp+0h] [ebp-4h]
  ObjectClass *v19; // [esp+0h] [ebp-4h]
  ObjectClass *v20; // [esp+0h] [ebp-4h]
  ObjectClass *v21; // [esp+0h] [ebp-4h]
  ObjectClass *v22; // [esp+0h] [ebp-4h]
  ObjectClass *v23; // [esp+0h] [ebp-4h]
  ObjectClass *v24; // [esp+0h] [ebp-4h]
  ObjectClass *v25; // [esp+0h] [ebp-4h]
  ObjectClass *v26; // [esp+0h] [ebp-4h]
  ObjectClass *v27; // [esp+0h] [ebp-4h]
  ObjectClass *v28; // [esp+0h] [ebp-4h]
  ObjectClass *v29; // [esp+0h] [ebp-4h]
  ObjectClass *v30; // [esp+0h] [ebp-4h]
  ObjectClass *v31; // [esp+0h] [ebp-4h]
  ObjectClass *v32; // [esp+0h] [ebp-4h]
  ObjectClass *v33; // [esp+0h] [ebp-4h]
  ObjectClass *v34; // [esp+0h] [ebp-4h]
  TechnoClass *v35; // [esp+0h] [ebp-4h]
  ObjectClass *v36; // [esp+0h] [ebp-4h]
  ObjectClass *v37; // [esp+0h] [ebp-4h]
  ObjectClass *v38; // [esp+0h] [ebp-4h]

  ++dword_A8E7AC; /*0x53445f*/
  stru_B0F698.Count = 0; /*0x534465*/
  AbstractClassVector::ddtor((int)&stru_B0F698); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  for ( i = dword_B0E844; dword_B0E844; i = dword_B0E844 ) /*0x53447c*/
  {
    if ( !byte_B0E84C ) /*0x534484*/
    {
      qsort( /*0x534494*/
        (void *)g_BuildingLoadQueue_Array.ptr_0,
        i,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      dword_B0E850 = 0; /*0x53449c*/
      byte_B0E84C = 1; /*0x5344a2*/
    }
    v1 = *(_DWORD *)(g_BuildingLoadQueue_Array.ptr_0 + 4); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(v5); /*0x5344c6*/
  while ( dword_A8ED50 ) /*0x5344d1*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)dword_A8ED44 + 8))(*(_DWORD *)dword_A8ED44); /*0x5344dd*/
  ProcessExpiredPointers(v6); /*0x5344e8*/
  while ( dword_A8E370 ) /*0x5344f3*/
  {
    if ( *(_DWORD *)dword_A8E364 ) /*0x5344fb*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E364 + 32))(*(_DWORD *)dword_A8E364, 1); /*0x534505*/
  }
  ProcessExpiredPointers(v7); /*0x534510*/
  while ( g_GameObjectCleanup ) /*0x53451b*/
  {
    if ( *(_DWORD *)g_TagClassCount ) /*0x534523*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TagClassCount + 32))(*(_DWORD *)g_TagClassCount, 1); /*0x53452d*/
  }
  ProcessExpiredPointers(v8); /*0x534538*/
  while ( dword_A8EAF8 ) /*0x534543*/
  {
    if ( *(_DWORD *)dword_A8EAEC ) /*0x53454a*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EAEC + 32))(*(_DWORD *)dword_A8EAEC, 1); /*0x534554*/
  }
  ProcessExpiredPointers(v9); /*0x53455f*/
  while ( dword_8B4148 ) /*0x53456a*/
  {
    if ( *(_DWORD *)dword_8B413C ) /*0x534571*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B413C + 32))(*(_DWORD *)dword_8B413C, 1); /*0x53457b*/
  }
  ProcessExpiredPointers(v10); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(_DWORD *)dword_8B4194 ) /*0x534598*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4194 + 32))(*(_DWORD *)dword_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(v11); /*0x5345ad*/
  while ( dword_A8EC60 ) /*0x5345b8*/
  {
    if ( *(_DWORD *)dword_A8EC54 ) /*0x5345bf*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EC54 + 32))(*(_DWORD *)dword_A8EC54, 1); /*0x5345c9*/
  }
  ProcessExpiredPointers(v12); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(_DWORD *)dword_A8020C ) /*0x5345e6*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8020C + 32))(*(_DWORD *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(v13); /*0x5345fb*/
  while ( dword_A8EC48 ) /*0x534606*/
  {
    if ( *(_DWORD *)dword_A8EC3C ) /*0x53460d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EC3C + 32))(*(_DWORD *)dword_A8EC3C, 1); /*0x534617*/
  }
  ProcessExpiredPointers(v14); /*0x534622*/
  while ( dword_A83E40 ) /*0x53462d*/
  {
    if ( *(_DWORD *)dword_A83E34 ) /*0x534634*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83E34 + 32))(*(_DWORD *)dword_A83E34, 1); /*0x53463e*/
  }
  ProcessExpiredPointers(v15); /*0x534649*/
  while ( dword_8B4130 ) /*0x534654*/
  {
    if ( *(_DWORD *)dword_8B4124 ) /*0x53465b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4124 + 32))(*(_DWORD *)dword_8B4124, 1); /*0x534665*/
  }
  ProcessExpiredPointers(v16); /*0x534670*/
  while ( dword_8B40F8 ) /*0x53467b*/
  {
    if ( *(_DWORD *)dword_8B40EC ) /*0x534682*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B40EC + 32))(*(_DWORD *)dword_8B40EC, 1); /*0x53468c*/
  }
  ProcessExpiredPointers(v17); /*0x534697*/
  while ( dword_A80238 ) /*0x5346a2*/
  {
    if ( dword_A8022C->ptr_0 ) /*0x5346a9*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8022C->ptr_0 + 32))(dword_A8022C->ptr_0, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(v18); /*0x5346be*/
  while ( dword_A8E9B8 ) /*0x5346c9*/
  {
    if ( *(_DWORD *)dword_A8E9AC ) /*0x5346d0*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E9AC + 32))(*(_DWORD *)dword_A8E9AC, 1); /*0x5346da*/
  }
  ProcessExpiredPointers(v19); /*0x5346e5*/
  while ( dword_8872C0 ) /*0x5346f0*/
  {
    if ( *(_DWORD *)dword_8872B4 ) /*0x5346f7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8872B4 + 32))(*(_DWORD *)dword_8872B4, 1); /*0x534701*/
  }
  ProcessExpiredPointers(v20); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(_DWORD *)dword_B04BD4 ) /*0x53471e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B04BD4 + 32))(*(_DWORD *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(v21); /*0x534733*/
  while ( dword_ABCA20 ) /*0x53473e*/
  {
    if ( *(_DWORD *)dword_ABCA14 ) /*0x534745*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_ABCA14 + 32))(*(_DWORD *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(v22); /*0x53475a*/
  while ( dword_8A3880 ) /*0x534765*/
  {
    if ( *(_DWORD *)dword_8A3874 ) /*0x53476c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A3874 + 32))(*(_DWORD *)dword_8A3874, 1); /*0x534776*/
  }
  ProcessExpiredPointers(v23); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(_DWORD *)dword_89E0F4 ) /*0x534793*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89E0F4 + 32))(*(_DWORD *)dword_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(v24); /*0x5347a8*/
  while ( dword_8A0218 ) /*0x5347b3*/
  {
    if ( *(_DWORD *)dword_8A020C ) /*0x5347ba*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A020C + 32))(*(_DWORD *)dword_8A020C, 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(v25); /*0x5347cf*/
  while ( dword_AC4920 ) /*0x5347da*/
  {
    if ( *(_DWORD *)dword_AC4914 ) /*0x5347e1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_AC4914 + 32))(*(_DWORD *)dword_AC4914, 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(v26); /*0x5347f6*/
  while ( dword_B0EC70 ) /*0x534801*/
  {
    if ( *(_DWORD *)dword_B0EC64 ) /*0x534808*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0EC64 + 32))(*(_DWORD *)dword_B0EC64, 1); /*0x534812*/
  }
  ProcessExpiredPointers(v27); /*0x53481d*/
  while ( dword_889FC8 ) /*0x534828*/
  {
    if ( *(_DWORD *)dword_889FBC ) /*0x53482f*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_889FBC + 32))(*(_DWORD *)dword_889FBC, 1); /*0x534839*/
  }
  ProcessExpiredPointers(v28); /*0x534844*/
  while ( dword_B0B890 ) /*0x53484f*/
  {
    if ( *(_DWORD *)dword_B0B884 ) /*0x534856*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0B884 + 32))(*(_DWORD *)dword_B0B884, 1); /*0x534860*/
  }
  ProcessExpiredPointers(v29); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(_DWORD *)dword_89C66C ) /*0x53487d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89C66C + 32))(*(_DWORD *)dword_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(v30); /*0x534892*/
  while ( dword_AC1688 ) /*0x53489d*/
  {
    v2 = *(void **)dword_AC167C; /*0x5348a5*/
    if ( *(_DWORD *)dword_AC167C ) /*0x5348a5*/
    {
      BuildingLightQueue::RemoveEntry(*(BuildingLightQueue **)dword_AC167C); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(v31); /*0x5348c4*/
  while ( g_FootClassConfig ) /*0x5348cf*/
  {
    if ( *(_DWORD *)dword_8B3D14 ) /*0x5348d7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B3D14 + 32))(*(_DWORD *)dword_8B3D14, 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(v32); /*0x5348ec*/
  while ( g_AlphaShapeLimit ) /*0x5348f7*/
  {
    if ( *(_DWORD *)dword_88A0F4 ) /*0x5348fe*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_88A0F4 + 32))(*(_DWORD *)dword_88A0F4, 1); /*0x534908*/
  }
  ProcessExpiredPointers(v33); /*0x534913*/
  while ( dword_A8E998 ) /*0x53491e*/
  {
    if ( *(_DWORD *)dword_A8E98C ) /*0x534925*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E98C + 32))(*(_DWORD *)dword_A8E98C, 1); /*0x53492f*/
  }
  ProcessExpiredPointers(v34); /*0x53493a*/
  sub_4C29E0(v35); /*0x53493f*/
  Game_Destroy(v36); /*0x534944*/
  Game::loadCampaignData(v3); /*0x534949*/
  while ( dword_A8E978 ) /*0x534954*/
  {
    if ( *(_DWORD *)dword_A8E96C ) /*0x53495b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E96C + 32))(*(_DWORD *)dword_A8E96C, 1); /*0x534965*/
  }
  ProcessExpiredPointers(v37); /*0x534970*/
  if ( g_TacticalClass_Instance ) /*0x53497d*/
    (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))( /*0x534983*/
      g_TacticalClass_Instance,
      1);
  g_TacticalClass_Instance = 0; /*0x53498b*/
  MapClass::FreeAllCells((MapClass *)&dword_87F7E8); /*0x534991*/
  ProcessExpiredPointers(v38); /*0x534996*/
  Game::initScenario((Game *)&g_VisibilitySystem); /*0x5349a0*/
  return --dword_A8E7AC; /*0x5349ab*/
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
  *((_DWORD *)dword_A8B230 + 1174) = a1; /*0x534a5d*/
  Multiplayer::ShowProgress(dword_A8B238, 8); /*0x534a63*/
  if ( *((_DWORD *)dword_A8B230 + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( dword_884E0C ) /*0x534a8a*/
      (**(void (__thiscall ***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x534a90*/
    dword_884E0C = 0; /*0x534a97*/
    if ( *((_DWORD *)dword_A8B230 + 1174) == 1 ) /*0x534aa4*/
    {
      v4 = __2_YAPAXI_Z(0x28u); /*0x534aa8*/
      if ( v4 ) /*0x534ab2*/
        v5 = MixFileClass::FromFile(v4, v35, (int)&dword_886980); /*0x534ac0*/
      else
        v5 = 0; /*0x534ac7*/
      dword_884E0C = (int)v5; /*0x534acc*/
      ReturnTrue(0); /*0x534ad1*/
    }
    if ( dword_884E08 ) /*0x534ade*/
      (**(void (__thiscall ***)(int, int))dword_884E08)(dword_884E08, 1); /*0x534ae4*/
    v6 = __2_YAPAXI_Z(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      dword_884E08 = (int)MixFileClass::FromFile(v6, Source, (int)&dword_886980); /*0x534b05*/
    else
      dword_884E08 = 0; /*0x534b0c*/
    if ( dword_884E10 ) /*0x534b1a*/
      (**(void (__thiscall ***)(int, int))dword_884E10)(dword_884E10, 1); /*0x534b20*/
    v7 = __2_YAPAXI_Z(0x28u); /*0x534b24*/
    if ( v7 ) /*0x534b2e*/
      v8 = MixFileClass::FromFile(v7, v36, (int)&dword_886980); /*0x534b3c*/
    else
      v8 = 0; /*0x534b43*/
    dword_884E10 = (int)v8; /*0x534b48*/
    ReturnTrue(0); /*0x534b4d*/
    ReturnTrue(0); /*0x534b59*/
    Multiplayer::ShowProgress(dword_A8B238, 6); /*0x534b65*/
    if ( dword_884E20 ) /*0x534b72*/
      (**(void (__thiscall ***)(int, int))dword_884E20)(dword_884E20, 1); /*0x534b78*/
    v9 = __2_YAPAXI_Z(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      dword_884E20 = (int)MixFileClass::FromFile(v9, v37, (int)&dword_886980); /*0x534b99*/
    else
      dword_884E20 = 0; /*0x534ba0*/
    if ( dword_884E1C ) /*0x534bae*/
      (**(void (__thiscall ***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x534bb4*/
    v10 = __2_YAPAXI_Z(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      dword_884E1C = (int)MixFileClass::FromFile(v10, v38, (int)&dword_886980); /*0x534bd5*/
    else
      dword_884E1C = 0; /*0x534bdc*/
    Multiplayer::ShowProgress(dword_A8B238, 12); /*0x534be9*/
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
        v17 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (v12 % 256); /*0x534c42*/
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
        v20 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (i % 256); /*0x534c85*/
        *(_WORD *)v20 = v30; /*0x534c8d*/
        v20[2] = v19; /*0x534c95*/
      }
    }
    Block::Copy(&stru_885A80, &FileSystem_TEMPERAT_PAL); /*0x534ca4*/
    wsprintfA(Source, "UNIT%s.PAL", v32); /*0x534cb8*/
    v21 = (const void *)SearchMIXFile(Source, 0); /*0x534cc8*/
    Event::Dispatch(); /*0x534cca*/
    if ( v21 ) /*0x534cd1*/
      Block::Copy(stru_886380, v21); /*0x534cd9*/
    for ( j = 0; j < 256; ++j ) /*0x534cde*/
    {
      v23 = &stru_886380[3 * (j % 256)]; /*0x534cf7*/
      LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      v24 = MEMORY[0x886382][3 * (j % 256)]; /*0x534d0c*/
      HIBYTE(v31) = 4 * MEMORY[0x886381][3 * (j % 256)]; /*0x534d16*/
      *(_WORD *)v23 = v31; /*0x534d23*/
      v23[2] = 4 * v24; /*0x534d2c*/
    }
    v25 = 0; /*0x534d43*/
    v26 = 12; /*0x534d4c*/
    for ( k = dword_B054E0 / 13; v25 < dword_B054E0; ++v25 ) /*0x534d53*/
    {
      LoadTheaterClassMIX_Load(stru_886380, &FileSystem_TEMPERAT_PAL, 1000, 1000, 1000); /*0x534d77*/
      v28 = v25 / k + 12; /*0x534d87*/
      if ( v28 >= 25 ) /*0x534d89*/
        v28 = 25; /*0x534d8b*/
      if ( v28 != v26 ) /*0x534d92*/
      {
        Multiplayer::ShowProgress(dword_A8B238, v28); /*0x534d9a*/
        v26 = v28; /*0x534d9f*/
      }
      Event::Dispatch(); /*0x534da1*/
    }
    FileSystem::InitExtensionState(a1); /*0x534db4*/
    LoadTheaterClassMIX_Load_717840(); /*0x534db9*/
    Multiplayer::ShowProgress(dword_A8B238, 25); /*0x534dc5*/
  }
}



// ==== 0x00534DE0  ObjectClass::ReleaseLoadingResources  this=ObjectClass  sig=csp ====
char ReleaseLoadingResources(ObjectClass *this)
{
  if ( dword_884E5C ) /*0x534de7*/
  {
    Debug::Log(); /*0x534df2*/
    if ( dword_884E5C ) /*0x534e02*/
      (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e08*/
    dword_884E5C = 0; /*0x534e0a*/
  }
  if ( dword_884E58 ) /*0x534e1b*/
  {
    Debug::Log(); /*0x534e26*/
    if ( dword_884E58 ) /*0x534e36*/
      (**(void (__thiscall ***)(int, int))dword_884E58)(dword_884E58, 1); /*0x534e3c*/
    dword_884E58 = 0; /*0x534e3e*/
  }
  return 1; /*0x534e4a*/
}



// ==== 0x00534E50  AssetClass::ReleaseAndReload  this=AssetClass  sig=csp ====
char AssetClass::ReleaseAndReload(AssetClass *this)
{
  void (__thiscall ***v1)(_DWORD, int); // ecx
  int v2; // ecx
  MixFileClass *v3; // eax
  MixFileClass *v5; // eax

  if ( dword_884E5C ) /*0x534e5a*/
  {
    Debug::Log(); /*0x534e65*/
    if ( dword_884E5C ) /*0x534e75*/
      (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e7b*/
    dword_884E5C = 0; /*0x534e82*/
    if ( dword_884E58 ) /*0x534e8a*/
    {
      Debug::Log(); /*0x534e99*/
      v1 = (void (__thiscall ***)(_DWORD, int))dword_884E58; /*0x534e9e*/
      if ( dword_884E58 ) /*0x534ea9*/
        goto LABEL_14; /*0x534ea9*/
      goto LABEL_15; /*0x534ea9*/
    }
  }
  else
  {
    v2 = dword_884E58; /*0x534ead*/
    if ( dword_884E58 ) /*0x534eb5*/
    {
      if ( dword_884E5C ) /*0x534eb9*/
      {
        Debug::Log(); /*0x534ec4*/
        if ( dword_884E5C ) /*0x534ed4*/
          (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534eda*/
        v2 = dword_884E58; /*0x534edc*/
        dword_884E5C = 0; /*0x534ee2*/
      }
      if ( v2 ) /*0x534eea*/
      {
        Debug::Log(); /*0x534ef5*/
        v1 = (void (__thiscall ***)(_DWORD, int))dword_884E58; /*0x534efa*/
        if ( dword_884E58 ) /*0x534f05*/
LABEL_14:
          (**v1)(v1, 1); /*0x534f07*/
LABEL_15:
        dword_884E58 = 0; /*0x534f0d*/
      }
    }
  }
  v3 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x534f13*/
  if ( v3 ) /*0x534f1f*/
  {
    dword_884E58 = (int)MixFileClass::FromFile(v3, aNtrlmdMix, (int)dword_886980); /*0x534f34*/
    if ( dword_884E58 ) /*0x534f39*/
    {
      Debug::Log_0(); /*0x534f4e*/
      v5 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x534f55*/
      if ( v5 ) /*0x534f5f*/
      {
        dword_884E5C = (int)MixFileClass::FromFile(v5, aNeutralMix, (int)dword_886980); /*0x534f74*/
        if ( dword_884E5C ) /*0x534f79*/
        {
          Debug::Log_0(); /*0x534f8e*/
          return 1; /*0x534f96*/
        }
        else
        {
          return 0; /*0x534f7b*/
        }
      }
      else
      {
        dword_884E5C = 0; /*0x534f7f*/
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
    dword_884E58 = 0; /*0x534f3f*/
    return 0; /*0x534f45*/
  }
}



// ==== 0x00534FA0  MixFile::LoadSide  this=MixFile  sig=csp ====
char __thiscall MixFile::LoadSide(MixFile *this)
{
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int YRCD; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  char v7; // bl
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  char v10; // bl
  MixFileClass *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  Game *v16; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  CCFileClass v18; // [esp+60h] [ebp-D8h] BYREF
  int v19[3]; // [esp+B8h] [ebp-80h] BYREF
  int v20; // [esp+C4h] [ebp-74h]
  CCFileClass v21; // [esp+CCh] [ebp-6Ch] BYREF
  int v22[3]; // [esp+124h] [ebp-14h] BYREF
  int v23; // [esp+130h] [ebp-8h]

  v1 = (int)this; /*0x534faa*/
  VoxClass::SetEVAIndex((VoxClass *)this); /*0x534fac*/
  if ( v1 == 2 ) /*0x534fb4*/
    v1 = 1; /*0x534fb6*/
  v2 = v1; /*0x534fbb*/
  v16 = (Game *)v1; /*0x534fc0*/
  if ( v1 == -1 ) /*0x534fc4*/
  {
    YRCD = AlwaysFindYRCD(); /*0x534fd1*/
    if ( YRCD >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v16 = (Game *)YRCD; /*0x534ffb*/
    v2 = YRCD; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( dword_884E68 ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( dword_884E68 ) /*0x535035*/
      (**(void (__thiscall ***)(int, int))dword_884E68)(dword_884E68, 1); /*0x53503b*/
    dword_884E68 = 0; /*0x53503d*/
  }
  if ( dword_884E74 ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( dword_884E74 ) /*0x535065*/
      (**(void (__thiscall ***)(int, int))dword_884E74)(dword_884E74, 1); /*0x53506b*/
    dword_884E74 = 0; /*0x53506d*/
  }
  if ( dword_884E70 ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( dword_884E70 ) /*0x535095*/
      (**(void (__thiscall ***)(int, int))dword_884E70)(dword_884E70, 1); /*0x53509b*/
    dword_884E70 = 0; /*0x53509d*/
  }
  if ( dword_884E78 ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( dword_884E78 ) /*0x5350c5*/
      (**(void (__thiscall ***)(int, int))dword_884E78)(dword_884E78, 1); /*0x5350cb*/
    dword_884E78 = 0; /*0x5350cd*/
  }
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, "SIDEC%02dMD.MIX", v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(&v18, Buffer); /*0x535101*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 20))(v6, 0); /*0x535115*/
  v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535117*/
  v20 = 0; /*0x53511f*/
  Vector::Clear((int)v19); /*0x535126*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(&v18); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      dword_884E70 = (int)MixFileClass::FromFile(v8, Buffer, (int)dword_886980); /*0x535160*/
    else
      dword_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, "SIDEC%02d.MIX", v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(&v18, Buffer); /*0x5351a4*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x5351ba*/
  v20 = 0; /*0x5351c2*/
  Vector::Clear((int)v19); /*0x5351c9*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(&v18); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      dword_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)dword_886980); /*0x5351f9*/
    dword_884E74 = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (_DWORD *)dword_884E74; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, "SIDENC%02d.MIX", v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    v13 = CCFileClass::Construct(&v18, Buffer); /*0x53527b*/
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x535294*/
    v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535296*/
    v20 = 0; /*0x53529a*/
    Vector::Clear((int)v19); /*0x5352a1*/
    v18.FileClass = (FileClass)&off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(&v18); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        dword_884E78 = (int)MixFileClass::FromFile(v15, Buffer, (int)dword_886980); /*0x5352d6*/
      else
        dword_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v16); /*0x5352ec*/
    CCFileClass::Construct(&v21, aUimdIni); /*0x5352fd*/
    if ( CCINIClass::Load(&dword_887208, (int)&v21, 0, 0) ) /*0x535311*/
    {
      SidebarClass::ReadButtonList((SidebarClass *)dword_8871E0); /*0x53533d*/
      SidebarClass::LoadButtonSHPs((TabClass *)&dword_87F7E8); /*0x535347*/
      v21.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535353*/
      v23 = 0; /*0x53535a*/
      Vector::Clear((int)v22); /*0x535361*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(&v21); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v21.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x53539a*/
      v23 = 0; /*0x5353a1*/
      Vector::Clear((int)v22); /*0x5353a8*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x5353b4*/
      BufferIOFileClass::Dtor(&v21); /*0x5353bb*/
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
  if ( (int)dword_A8ECC8 > 0 ) /*0x535405*/
  {
    v3 = 0; /*0x53540b*/
    v21 = 0; /*0x53540f*/
    while ( 1 ) /*0x53541e*/
    {
      v15 = 0; /*0x53541e*/
      v4 = *((_DWORD *)dword_A8ECBC + v3); /*0x535422*/
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
      if ( v3 >= (int)dword_A8ECC8 ) /*0x5355a1*/
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
int Performance::Profile(Performance *this)
{
  Performance *v1; // edi
  int result; // eax
  int v3; // edi
  signed int v4; // esi
  int v5; // ebx
  char *Name; // eax
  SIZE_T v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  int i; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  DWORD Time; // esi
  int v19; // eax
  Performance *v20; // [esp+80h] [ebp-1A4h]
  int v21; // [esp+8Ch] [ebp-198h]
  int v22; // [esp+90h] [ebp-194h]
  int v23; // [esp+94h] [ebp-190h]
  _DWORD v24[2]; // [esp+98h] [ebp-18Ch] BYREF
  int v25; // [esp+A0h] [ebp-184h]
  int v26; // [esp+A4h] [ebp-180h]
  _DWORD v27[4]; // [esp+A8h] [ebp-17Ch] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+B8h] [ebp-16Ch] BYREF
  _BYTE v29[16]; // [esp+D8h] [ebp-14Ch] BYREF
  int v30[15]; // [esp+E8h] [ebp-13Ch] BYREF
  unsigned int v31; // [esp+124h] [ebp-100h]
  unsigned int v32; // [esp+128h] [ebp-FCh]

  result = dword_825C8C; /*0x5355d0*/
  if ( dword_825C8C != -1 ) /*0x5355de*/
    return result; /*0x5355de*/
  v20 = v1; /*0x5355e6*/
  stru_A8EB00.?[1968] = 0; /*0x5355e7*/
  stru_A8EB00.?[1840] = 0; /*0x5355ee*/
  stru_A8EB00.?[2236] = 0; /*0x5355f5*/
  stru_A8EB00.?[2108] = 0; /*0x5355fc*/
  stru_A8EB00.?[2364] = 0; /*0x535603*/
  v3 = DetectProcessorType(); /*0x53560f*/
  v4 = Performance::MeasureTicks(v20); /*0x535616*/
  v5 = 5; /*0x53561b*/
  v23 = 5; /*0x535623*/
  switch ( v3 ) /*0x535629*/
  {
    case -1: /*0x535629*/
      break;
    case 3: /*0x535629*/
    case 5: /*0x535629*/
      v23 = v4 / 100 + 1; /*0x535643*/
      break; /*0x535647*/
    case 4: /*0x535629*/
    case 7: /*0x535629*/
      v23 = v4 / 100 + 2; /*0x53565c*/
      break; /*0x535660*/
    case 6: /*0x535629*/
      v23 = v4 / 100 + 3; /*0x535675*/
      break; /*0x535679*/
    default:
      v23 = 1; /*0x53567b*/
      break; /*0x53567b*/
  }
  PlayerType::GetName(); /*0x535683*/
  Debug::Log(); /*0x535695*/
  Name = PlayerType::GetName(); /*0x53569d*/
  sprintf(&stru_A8EB00.?[1840], "CPU: %d Mhz %s", v4, Name);
  Buffer.dwLength = 32; /*0x5356ba*/
  GlobalMemoryStatus(&Buffer); /*0x5356c3*/
  v21 = 2; /*0x5356d2*/
  v7 = (Buffer.dwTotalPhys + 655360) >> 20; /*0x5356dc*/
  if ( v7 >= 0x40 ) /*0x5356e2*/
    v21 = 5; /*0x5356e4*/
  if ( v7 >= 0x80 ) /*0x5356ee*/
    v21 += 2; /*0x5356f0*/
  if ( v7 == 256 ) /*0x5356ff*/
  {
    v21 += 2; /*0x535701*/
  }
  else if ( v7 > 0x100 ) /*0x535707*/
  {
    v21 = 10; /*0x535709*/
  }
  Debug::Log(); /*0x535718*/
  sprintf(&stru_A8EB00.?[2236], "RAM reported: %d Mb", v7);
  v8 = 4; /*0x535737*/
  v22 = 5; /*0x53573c*/
  if ( g_lpDirectDraw7 ) /*0x535740*/
  {
    v30[0] = 316; /*0x535746*/
    if ( !g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v30, 0) ) /*0x535754*/
    {
      v9 = v31; /*0x53575b*/
      if ( v31 <= v32 ) /*0x53576b*/
        v9 = v32; /*0x53576d*/
      v8 = (v9 + 0xFFFFF) >> 20; /*0x535775*/
      if ( v8 >= 0x20 ) /*0x53577b*/
      {
        v22 = 10; /*0x53577d*/
        goto LABEL_29; /*0x535781*/
      }
      if ( v8 >= 0x10 ) /*0x535786*/
      {
        v22 = 9; /*0x535788*/
        goto LABEL_29; /*0x535790*/
      }
      if ( v8 >= 8 ) /*0x535795*/
      {
        v22 = 7; /*0x535797*/
        goto LABEL_29; /*0x53579f*/
      }
      if ( v8 < 4 ) /*0x5357a4*/
      {
        if ( v8 <= 2 ) /*0x5357ae*/
          v22 = 3; /*0x5357b0*/
        goto LABEL_29; /*0x5357b0*/
      }
    }
  }
  v22 = 5; /*0x5357a6*/
LABEL_29:
  Debug::Log(); /*0x5357b8*/
  sprintf(&stru_A8EB00.?[2108], "VRAM reported: %d Mb", v8);
  i = 0; /*0x5357e1*/
  if ( DSurface_Tile && BYTE1(DSurface_Tile->DSurface_field_0x18) && !BYTE1(DSurface_Alternate->DSurface_field_0x18) ) /*0x5357fc*/
  {
    v11 = (_DWORD *)(*((int (__stdcall **)(_DWORD *))DSurface_Tile->DSurface_field_0x0 + 30))(v27); /*0x53580e*/
    v24[0] = *v11; /*0x535813*/
    v24[1] = v11[1]; /*0x53581a*/
    v25 = v11[2]; /*0x535821*/
    v26 = v11[3]; /*0x53582e*/
    v12 = (_DWORD *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x53583c*/
                      DSurface_Alternate,
                      v29);
    v27[0] = *v12; /*0x535840*/
    v13 = v25; /*0x535844*/
    v27[1] = v12[1]; /*0x53584b*/
    v14 = v12[2]; /*0x53584f*/
    v15 = v12[3]; /*0x535854*/
    if ( v25 >= v14 ) /*0x535857*/
    {
      v13 = v14; /*0x535859*/
      v25 = v14; /*0x53585b*/
    }
    v16 = v26; /*0x53585f*/
    if ( v26 >= v15 ) /*0x535865*/
    {
      v16 = v15; /*0x535867*/
      v26 = v15; /*0x535869*/
    }
    if ( v13 >= 480 ) /*0x535873*/
      v25 = 480; /*0x535875*/
    if ( v16 >= 400 ) /*0x535882*/
      v26 = 400; /*0x535884*/
    v17 = 4; /*0x535892*/
    do /*0x5358da*/
    {
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x5358b3*/
       + 2))(
        DSurface_Tile,
        v24,
        DSurface_Alternate,
        v24,
        0,
        1);
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x5358d2*/
       + 2))(
        DSurface_Alternate,
        v24,
        DSurface_Tile,
        v24,
        0,
        1);
      Sleep(0); /*0x5358d7*/
      --v17; /*0x5358d9*/
    }
    while ( v17 ); /*0x5358da*/
    Time = timeGetTime(); /*0x5358e4*/
    if ( (Time & 0xFF000000) != 0xFF ) /*0x5358f4*/
    {
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x535916*/
       + 2))(
        DSurface_Tile,
        v24,
        DSurface_Alternate,
        v24,
        0,
        1);
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x535935*/
       + 2))(
        DSurface_Alternate,
        v24,
        DSurface_Tile,
        v24,
        0,
        1);
      for ( i = 1; timeGetTime() - Time <= 0x3E8; ++i ) /*0x535946*/
      {
        if ( i > 5000 ) /*0x53594e*/
          break; /*0x53594e*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x53596c*/
         + 2))(
          DSurface_Tile,
          v24,
          DSurface_Alternate,
          v24,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x53598b*/
         + 2))(
          DSurface_Alternate,
          v24,
          DSurface_Tile,
          v24,
          0,
          1);
      }
      v5 = 1; /*0x53599c*/
      if ( i / 4 >= 1 ) /*0x5359ad*/
        v5 = i / 4; /*0x5359af*/
    }
  }
  Debug::Log(); /*0x5359bb*/
  sprintf(&stru_A8EB00.?[2364], "%d blits per second\n", 2 * i); /*0x5359cb*/
  v19 = v23; /*0x5359d0*/
  dword_825C8C = v23; /*0x5359dd*/
  if ( v23 >= v21 ) /*0x5359e3*/
  {
    v19 = v21; /*0x5359e5*/
    dword_825C8C = v21; /*0x5359e7*/
  }
  if ( v19 >= v22 ) /*0x5359f2*/
  {
    v19 = v22; /*0x5359f4*/
    dword_825C8C = v22; /*0x5359f6*/
  }
  if ( v19 >= v5 ) /*0x5359fd*/
    dword_825C8C = v5; /*0x535a01*/
  Debug::Log(); /*0x535a0c*/
  sprintf(&stru_A8EB00.?[1968], "Profile: %d\n", dword_825C8C);
  return dword_825C8C; /*0x535a32*/
}



// ==== 0x00535A60  BufferIOFileClass::Destruct  this=CDFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Destruct(BufferIOFileClass *this)
{
  *(_DWORD *)this->RawFileClass = &off_7E1668; /*0x535a60*/
  return BufferIOFileClass::Dtor(this);
}



// ==== 0x00535A70  CCFileClass::Destruct  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destruct(CCFileClass *this)
{
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x535a76*/
  this->tail_19 = 0; /*0x535a7c*/
  Vector::Clear((int)this + 88); /*0x535a83*/
  *(_DWORD *)this->CDFileClass = &off_7E1668; /*0x535a8a*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)this); /*0x535a95*/
}



// ==== 0x00535AA0  INIClass::INIClass  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::INIClass(INIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // ecx
  _DWORD *v3; // edx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  result = this->__pad_0; /*0x535aa0*/
  sectionHead = this->sectionHead; /*0x535aa6*/
  v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  sectionHead[1] = 0; /*0x535ab2*/
  sectionHead[2] = 0; /*0x535ab5*/
  *sectionHead = (int)&GenericNode::`vftable'; /*0x535ab8*/
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
  v6 = sectionHead[1]; /*0x535af6*/
  result[9] = sectionHead; /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  v7 = sectionHead[1]; /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    *(_DWORD *)(v7 + 8) = v3; /*0x535b06*/
  sectionHead[1] = (int)v3; /*0x535b09*/
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
_DWORD *__thiscall CCINIClass::CCINIClass(CCINIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // esi
  int *p_sectionCount; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this->INIClass; /*0x535b30*/
  sectionHead = this->?; /*0x535b36*/
  p_sectionCount = &this->?; /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  sectionHead[1] = 0; /*0x535b42*/
  sectionHead[2] = 0; /*0x535b45*/
  *sectionHead = (int)&GenericNode::`vftable'; /*0x535b48*/
  p_sectionCount[1] = 0; /*0x535b4e*/
  p_sectionCount[2] = 0; /*0x535b51*/
  *p_sectionCount = (int)&GenericNode::`vftable'; /*0x535b54*/
  result[3] = &GenericList::`vftable'; /*0x535b5d*/
  if ( p_sectionCount ) /*0x535b64*/
  {
    v4 = p_sectionCount[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = p_sectionCount[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535b74*/
        *(_DWORD *)(p_sectionCount[1] + 8) = p_sectionCount[2]; /*0x535b7d*/
        p_sectionCount[2] = 0; /*0x535b80*/
        p_sectionCount[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = sectionHead[1]; /*0x535b86*/
  p_sectionCount[2] = (int)sectionHead; /*0x535b89*/
  p_sectionCount[1] = v6; /*0x535b8c*/
  v7 = sectionHead[1]; /*0x535b8f*/
  if ( v7 ) /*0x535b94*/
    *(_DWORD *)(v7 + 8) = p_sectionCount; /*0x535b96*/
  sectionHead[1] = (int)p_sectionCount; /*0x535b99*/
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
char __stdcall CreateTeamCommand::Stub(CommandClass *this)
{
  return 0; /*0x535bd2*/
}



// ==== 0x00535BE0  CommandClass::IsCellFlag  this=CommandClass  sig=csp ====
unsigned int __stdcall Map::IsCellFlag(CommandClass *this)
{
  return (~(unsigned int)this >> 11) & 1; /*0x535bec*/
}



// ==== 0x00535BF0  CommandClass::Do  this=CommandClass  sig=csp ====
char __stdcall CreateTeamCommand::Do(CommandClass *this)
{
  return 0; /*0x535bf2*/
}



// ==== 0x00535C00  CreateTeamCommand::Construct  this=CreateTeamCommand  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::Construct(CreateTeamCommand *this, int a2)
{
  this->CreateTeamCommand_field_0x4 = (void *)a2; /*0x535c06*/
  *(_DWORD *)this->__pad_0 = &CreateTeamCommandClass::`vftable'; /*0x535c09*/
  return this->__pad_0; /*0x535c0f*/
}



// ==== 0x00535C20  CreateTeamCommandClass::AddRef  this=CreateTeamCommand  sig=csp ====
char *__thiscall CreateTeamCommand::AddRef(CreateTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamCreate_%d", *(_DWORD *)&this->m_1[3]); /*0x535c2e*/
  return &stru_A8EB00.?[2512]; /*0x535c3b*/
}



// ==== 0x00535C40  CreateTeamCommandClass::Release  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::Release(CreateTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c45*/
  StringCSF = GetStringCSF(aTxtCreateTeam, 0, g_Str_File_Init_CPP, 6165); /*0x535c55*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x535c60*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x535c6d*/
}



// ==== 0x00535C70  CreateTeamCommandClass::ddtor  this=CreateTeamCommand  sig=csp ====
wchar_t *CreateTeamCommand::ddtor(CreateTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6167); /*0x535c86*/
}



// ==== 0x00535C90  CreateTeamCommandClass::Read  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::Read(CreateTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c95*/
  StringCSF = GetStringCSF(aTxtCreateTeamD, 0, g_Str_File_Init_CPP, 6169); /*0x535ca5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x535cb0*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x535cbd*/
}



// ==== 0x00535CC0  CreateTeamCommandClass::Undo  this=CreateTeamCommand  sig=csp ====
void __thiscall CreateTeamCommand::Undo(CreateTeamCommandClass *this, int a2)
{
  CreateTeamCommand::performAction_246(*(char **)&this->m_1[3]); /*0x535cc3*/
}



// ==== 0x00535CD0  CreateTeamCommandClass::performAction_0  this=CreateTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_0(CreateTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x535cd9*/
  if ( (a2 & 1) != 0 ) /*0x535cdf*/
    __3_YAXPAX_Z(this); /*0x535ce2*/
  return (std::locale::facet *)this; /*0x535cec*/
}



// ==== 0x00535CF0  CommandClass::vt02  this=CommandClass  sig=csp ====
int __thiscall CreateTeamCommand::vt02(CommandClass *this)
{
  return (*(int (__thiscall **)(CommandClass *))(*(_DWORD *)this + 16))(this);
}



// ==== 0x00535D00  CommandClass::performAction_1  this=CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_1(CommandClass *this, char a2)
{
  *this = (CommandClass)&CommandClass::`vftable'; /*0x535d09*/
  if ( (a2 & 1) != 0 ) /*0x535d0f*/
    __3_YAXPAX_Z(this); /*0x535d12*/
  return (std::locale::facet *)this; /*0x535d1c*/
}



// ==== 0x00535D20  SetStructureTabCommandClass::performAction_2  this=SetStructureTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_2(SetStructureTabCommandClass *this)
{
  return aStructuretab; /*0x535d25*/
}



// ==== 0x00535D30  SetStructureTabCommandClass::performAction_3  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_3(SetStructureTabCommandClass *this)
{
  return GetStringCSF(aTxtStructureTa, 0, g_Str_File_Init_CPP, 6186); /*0x535d46*/
}



// ==== 0x00535D50  SetStructureTabCommandClass::performAction_4  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_4(SetStructureTabCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6188); /*0x535d66*/
}



// ==== 0x00535D70  SetStructureTabCommandClass::performAction_5  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_5(SetStructureTabCommandClass *this)
{
  return GetStringCSF(aTxtStructureTa_0, 0, g_Str_File_Init_CPP, 6190); /*0x535d86*/
}



// ==== 0x00535D90  SetStructureTabCommandClass::performAction_6  this=SetStructureTabCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_6(SetStructureTabCommandClass *this)
{
  int _7342A0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342A0) = PlayerClass::HasPlayers(&stru_880D2C); /*0x535d95*/
  if ( (_BYTE)_7342A0 ) /*0x535d9c*/
  {
    SidebarClass::SwitchTab((int)&dword_87F7E8, 0); /*0x535da5*/
    _7342A0 = UI_Create_7342A0(); /*0x535daa*/
    if ( _7342A0 ) /*0x535db1*/
    {
      v4 = (_DWORD *)_7342A0; /*0x535db5*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342A0 + 400))(_7342A0, 0, 0); /*0x535dbc*/
      LOBYTE(_7342A0) = BuildingPlacement::Activate(dword_A83D4C, v2, v4); /*0x535dc9*/
    }
  }
  return _7342A0; /*0x535dce*/
}



// ==== 0x00535DE0  SetDefenseTabCommandClass::performAction_7  this=SetDefenseTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_7(SetDefenseTabCommandClass *this)
{
  return aDefensetab; /*0x535de5*/
}



// ==== 0x00535DF0  SetDefenseTabCommandClass::performAction_8  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_8(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(aTxtDefenseTab, 0, g_Str_File_Init_CPP, 6212); /*0x535e06*/
}



// ==== 0x00535E10  SetDefenseTabCommandClass::performAction_9  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_9(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6214); /*0x535e26*/
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

  LOBYTE(_7342B0) = PlayerClass::HasPlayers(&stru_881CC0); /*0x535e55*/
  if ( (_BYTE)_7342B0 ) /*0x535e5c*/
  {
    SidebarClass::SwitchTab((int)&dword_87F7E8, 1); /*0x535e65*/
    _7342B0 = UI_Create_7342B0(); /*0x535e6a*/
    if ( _7342B0 ) /*0x535e71*/
    {
      v4 = (_DWORD *)_7342B0; /*0x535e75*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342B0 + 400))(_7342B0, 0, 0); /*0x535e7c*/
      LOBYTE(_7342B0) = BuildingPlacement::Activate(dword_A83D4C, v2, v4); /*0x535e89*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6240); /*0x535ee6*/
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

  result = PlayerClass::HasPlayers(&stru_882C54); /*0x535f15*/
  if ( (_BYTE)result ) /*0x535f1c*/
    return SidebarClass::SwitchTab((int)&dword_87F7E8, 2); /*0x535f25*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6261); /*0x535f76*/
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

  result = PlayerClass::HasPlayers(&stru_883BE8); /*0x535fa5*/
  if ( (_BYTE)result ) /*0x535fac*/
    return SidebarClass::SwitchTab((int)&dword_87F7E8, 3); /*0x535fb5*/
  return result; /*0x535fba*/
}



// ==== 0x00535FC0  SelectTeamCommand::Construct  this=SelectTeamCommand  sig=csp ====
_DWORD *__thiscall SelectTeamCommand::Construct(SelectTeamCommand *this, int a2)
{
  this->SelectTeamCommand_field_00 = a2; /*0x535fc6*/
  *(_DWORD *)this->CommandClass = &SelectTeamCommandClass::`vftable'; /*0x535fc9*/
  return this->CommandClass; /*0x535fcf*/
}



// ==== 0x00535FE0  SelectTeamCommandClass::AddRef  this=SelectTeamCommand  sig=csp ====
char *__thiscall SelectTeamCommand::AddRef(SelectTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamSelect_%d", *(_DWORD *)&this->m_1[3]); /*0x535fee*/
  return &stru_A8EB00.?[2512]; /*0x535ffb*/
}



// ==== 0x00536000  SelectTeamCommandClass::Release  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::Release(SelectTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536005*/
  StringCSF = GetStringCSF(aTxtSelectTeam, 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536020*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53602d*/
}



// ==== 0x00536030  SelectTeamCommandClass::ddtor  this=SelectTeamCommand  sig=csp ====
wchar_t *SelectTeamCommand::ddtor(SelectTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6294); /*0x536046*/
}



// ==== 0x00536050  SelectTeamCommandClass::Read  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::Read(SelectTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536055*/
  StringCSF = GetStringCSF(aTxtSelectTeamD, 0, g_Str_File_Init_CPP, 6296); /*0x536065*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536070*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53607d*/
}



// ==== 0x00536080  SelectTeamCommandClass::Do  this=SelectTeamCommand  sig=csp ====
int __thiscall SelectTeamCommand::Do(SelectTeamCommandClass *this, int a2)
{
  return TacticalClass::SetObserverView(*(char **)&this->m_1[3]); /*0x536088*/
}



// ==== 0x00536090  SelectTeamCommandClass::performAction_22  this=SelectTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_22(SelectTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536099*/
  if ( (a2 & 1) != 0 ) /*0x53609f*/
    __3_YAXPAX_Z(this); /*0x5360a2*/
  return (std::locale::facet *)this; /*0x5360ac*/
}



// ==== 0x005360B0  AddTeamCommand::Construct  this=AddTeamCommand  sig=csp ====
_DWORD *__thiscall AddTeamCommand::Construct(AddTeamCommand *this, int a2)
{
  this->AddTeamCommand_field_00 = a2; /*0x5360b6*/
  *(_DWORD *)this->CommandClass = &AddTeamCommandClass::`vftable'; /*0x5360b9*/
  return this->CommandClass; /*0x5360bf*/
}



// ==== 0x005360D0  AddTeamCommandClass::AddRef  this=AddTeamCommand  sig=csp ====
char *__thiscall AddTeamCommand::AddRef(AddTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamAddSelect_%d", *(_DWORD *)&this->m_1[3]); /*0x5360de*/
  return &stru_A8EB00.?[2512]; /*0x5360eb*/
}



// ==== 0x005360F0  AddTeamCommandClass::Release  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::Release(AddTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5360f5*/
  StringCSF = GetStringCSF(aTxtAddSelectTe, 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536110*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53611d*/
}



// ==== 0x00536120  AddTeamCommandClass::ddtor  this=AddTeamCommand  sig=csp ====
wchar_t *AddTeamCommand::ddtor(AddTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6328); /*0x536136*/
}



// ==== 0x00536140  AddTeamCommandClass::Read  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::Read(AddTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536145*/
  StringCSF = GetStringCSF(aTxtAddSelectTe_0, 0, g_Str_File_Init_CPP, 6330); /*0x536155*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536160*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53616d*/
}



// ==== 0x00536170  AddTeamCommandClass::Do  this=AddTeamCommand  sig=csp ====
int __thiscall AddTeamCommand::Do(AddTeamCommandClass *this, int a2)
{
  return SquadClass::SelectAllMembers(*(char **)&this->m_1[3]); /*0x536178*/
}



// ==== 0x00536180  AddTeamCommandClass::performAction_23  this=AddTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_23(AddTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536189*/
  if ( (a2 & 1) != 0 ) /*0x53618f*/
    __3_YAXPAX_Z(this); /*0x536192*/
  return (std::locale::facet *)this; /*0x53619c*/
}



// ==== 0x005361A0  CenterTeamCommand::Construct  this=CenterTeamCommand  sig=csp ====
_DWORD *__thiscall CenterTeamCommand::Construct(CenterTeamCommand *this, int a2)
{
  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *(_DWORD *)this->CommandClass = &CenterTeamCommandClass::`vftable'; /*0x5361a9*/
  return this->CommandClass; /*0x5361af*/
}



// ==== 0x005361C0  CenterTeamCommandClass::AddRef  this=CenterTeamCommand  sig=csp ====
char *__thiscall CenterTeamCommand::AddRef(CenterTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamCenter_%d", *(_DWORD *)&this->m_1[3]); /*0x5361ce*/
  return &stru_A8EB00.?[2512]; /*0x5361db*/
}



// ==== 0x005361E0  CenterTeamCommandClass::Release  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::Release(CenterTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5361e5*/
  StringCSF = GetStringCSF(aTxtCenterTeam, 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536200*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53620d*/
}



// ==== 0x00536210  CenterTeamCommandClass::GetTeamString  this=CenterTeamCommand  sig=csp ====
wchar_t *CSF::GetTeamString(CenterTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6363); /*0x536226*/
}



// ==== 0x00536230  CenterTeamCommandClass::Read  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::Read(CenterTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536235*/
  StringCSF = GetStringCSF(aTxtCenterTeamD, 0, g_Str_File_Init_CPP, 6365); /*0x536245*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536250*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53625d*/
}



// ==== 0x00536260  CenterTeamCommandClass::Do  this=CenterTeamCommand  sig=csp ====
int __thiscall CenterTeamCommand::Do(CenterTeamCommandClass *this, int a2)
{
  return (int)TacticalClass::ResetView(*(char **)&this->m_1[3]); /*0x536268*/
}



// ==== 0x00536270  CenterTeamCommandClass::performAction_24  this=CenterTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_24(CenterTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536279*/
  if ( (a2 & 1) != 0 ) /*0x53627f*/
    __3_YAXPAX_Z(this); /*0x536282*/
  return (std::locale::facet *)this; /*0x53628c*/
}



// ==== 0x00536290  TauntCommandClass::Construct  this=TauntCommandClass  sig=csp ====
_DWORD *__thiscall TauntCommandClass::Construct(TauntCommandClass *this, int a2)
{
  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  *(_DWORD *)this->CommandClass = &TauntCommandClass::`vftable'; /*0x536299*/
  return this->CommandClass; /*0x53629f*/
}



// ==== 0x005362B0  TauntCommandClass::AddRef  this=TauntCommandClass  sig=csp ====
char *__thiscall TauntCommandClass::AddRef(TauntCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "Taunt_%d", this->TauntCommandClass_field_00); /*0x5362be*/
  return &stru_A8EB00.?[2512]; /*0x5362cb*/
}



// ==== 0x005362D0  TauntCommandClass::Release  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::Release(TauntCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]

  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF(aTxtTauntNumber, 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, TauntCommandClass_field_00); /*0x5362f0*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x5362fd*/
}



// ==== 0x00536300  TauntCommandClass::ddtor  this=TauntCommandClass  sig=csp ====
wchar_t *TauntCommandClass::ddtor(TauntCommandClass *this)
{
  return GetStringCSF(aTxtTaunt, 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}



// ==== 0x00536320  TauntCommandClass::Read  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::Read(TauntCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]

  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x536325*/
  StringCSF = GetStringCSF(aTxtTauntDesc, 0, g_Str_File_Init_CPP, 6409); /*0x536335*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, TauntCommandClass_field_00); /*0x536340*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53634d*/
}



// ==== 0x00536350  TauntCommandClass::Do  this=TauntCommandClass  sig=csp ====
char __thiscall TauntCommandClass::Do(TauntCommandClass *this, int a2)
{
  DWORD Time; // eax
  int v4; // eax
  char TauntCommandClass_field_00; // cl
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
  int nextArrayIndex; // [esp+8h] [ebp-1CCh]
  int v19; // [esp+Ch] [ebp-1C8h] BYREF
  char v20[43]; // [esp+10h] [ebp-1C4h] BYREF
  char v21; // [esp+3Bh] [ebp-199h]
  char v22; // [esp+3Ch] [ebp-198h]
  unsigned int v23; // [esp+3Dh] [ebp-197h]
  int v24; // [esp+41h] [ebp-193h]

  LOBYTE(Time) = dword_A8B238; /*0x536350*/
  if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x536366*/
  {
    LOBYTE(Time) = dword_A8B538[0]; /*0x53636c*/
    if ( !dword_A8B538[0] ) /*0x536373*/
    {
      Time = timeGetTime(); /*0x536379*/
      if ( (dword_825C88 == -1 || (int)(Time - dword_825C88) > 5000) /*0x5363c0*/
        && (dword_A8D110 && *(_DWORD *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(_DWORD *)&dword_A8B238 == 4) )
      {
        dword_825C88 = Time; /*0x5363c6*/
        v19 = 29; /*0x5363d1*/
        strcpy(v20, ToWideStringChar((char *)*dword_A8DA78)); /*0x5363fb*/
        v23 = dword_A8B394; /*0x53640a*/
        v4 = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x536413*/
        TauntCommandClass_field_00 = this->TauntCommandClass_field_00; /*0x53641e*/
        v24 = v4; /*0x536421*/
        LOBYTE(v6) = (16 * *(_BYTE *)(*dword_A8DA78 + 75)) /*0x536432*/
                   ^ ((16 * *(_BYTE *)(*dword_A8DA78 + 75))
                    ^ TauntCommandClass_field_00)
                   & 0xF;
        v22 = v6; /*0x536434*/
        PlayTauntClass(v6); /*0x536438*/
        v7 = 0; /*0x536442*/
        v21 = 0; /*0x536446*/
        nextArrayIndex = stru_A80220.?; /*0x53644b*/
        for ( i = 0; v7 < nextArrayIndex; i = v7 ) /*0x536453*/
        {
          v8 = *((_DWORD *)stru_A80220.? + v7); /*0x536460*/
          if ( v8 ) /*0x536465*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v8 + 52) + 421) ) /*0x53646e*/
            {
              if ( byte_A8D108[v7] ) /*0x53647c*/
              {
                SendCount = Network::GetSendCount(&unk_A8E9C0); /*0x536494*/
                v10 = 0; /*0x536496*/
                if ( SendCount > 0 ) /*0x53649a*/
                {
                  v11 = (const wchar_t *)(v8 + 90154); /*0x5364a0*/
                  do /*0x53651a*/
                  {
                    ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v10); /*0x5364b1*/
                    Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x5364b9*/
                    if ( !wcscmp(v11, Class) ) /*0x5364c0*/
                    {
                      PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x5364d2*/
                      if ( byte_A8DBA0 ) /*0x5364df*/
                      {
                        LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], ConnectionSpeed); /*0x5364e7*/
                        v21 |= LinkedIndex; /*0x5364ec*/
                      }
                      else
                      {
                        Network::SendMessage(&unk_A8E9C0.Socket, (int)&v19, 455, 1, PlayerByID, 0, 0); /*0x536508*/
                        Network::ReceiveLoop(&unk_A8E9C0); /*0x536512*/
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
        LOBYTE(Time) = byte_A8DBA0; /*0x536532*/
        if ( byte_A8DBA0 ) /*0x53653b*/
        {
          LOBYTE(Time) = v21; /*0x53653d*/
          if ( v21 ) /*0x536543*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)&v19, 455, 1, *dword_A8DA78 + 40, 0, 0); /*0x536566*/
            LOBYTE(Time) = Network::ReceiveLoop(&unk_A8E9C0); /*0x536570*/
          }
        }
      }
    }
  }
  return Time; /*0x536575*/
}



// ==== 0x00536580  TauntCommandClass::performAction_25  this=TauntCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_25(TauntCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x536589*/
  if ( (a2 & 1) != 0 ) /*0x53658f*/
    __3_YAXPAX_Z(this); /*0x536592*/
  return (std::locale::facet *)this; /*0x53659c*/
}



// ==== 0x005365A0  NextObjectCommandClass::performAction_26  this=NextObjectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_26(NextObjectCommandClass *this)
{
  return aNextobject; /*0x5365a5*/
}



// ==== 0x005365B0  NextObjectCommandClass::performAction_27  this=NextObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_27(NextObjectCommandClass *this)
{
  return GetStringCSF(aTxtNextObject, 0, g_Str_File_Init_CPP, 6526); /*0x5365c6*/
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
AnimClass *__thiscall CreateTeamCommand::performAction_30(
        NextObjectCommandClass *this,
        AnimClass *__return_ptr retstr,
        int a3)
{
  MapClass *v3; // esi
  _BYTE *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536617*/
  TacticalClass::SetDisplayMode((TacticalClass *)&dword_87F7E8, 0, 0); /*0x536625*/
  BuildingClass::TogglePower2((BuildingClass *)&dword_87F7E8, 0); /*0x536631*/
  BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x53663d*/
  if ( dword_A8ECC8 ) /*0x536649*/
    v4 = *(_BYTE **)dword_A8ECBC; /*0x536650*/
  else
    v4 = 0; /*0x536654*/
  v7 = v3; /*0x536656*/
  result = (AnimClass *)sub_4AA2B0(v4); /*0x53665d*/
  v6 = result; /*0x536662*/
  if ( result ) /*0x536666*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x536668*/
    (*(void (__thiscall **)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536671*/
    TacticalClass::InterpolateView(v8); /*0x53667c*/
    return (AnimClass *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x536688*/
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
  char v2; // [esp+5h] [ebp+5h]

  return UpdateUnitHealthTooltip((v2 & 1) == 0); /*0x536961*/
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
  char v2; // [esp+5h] [ebp+5h]

  return DrawUnitExperiencePopup((v2 & 1) == 0); /*0x536a01*/
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
AnimClass *__thiscall CreateTeamCommand::performAction_69(
        PrevObjectCommandClass *this,
        AnimClass *__return_ptr retstr,
        int a3)
{
  MapClass *v3; // esi
  _BYTE *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536a87*/
  TacticalClass::SetDisplayMode((TacticalClass *)&dword_87F7E8, 0, 0); /*0x536a95*/
  BuildingClass::TogglePower2((BuildingClass *)&dword_87F7E8, 0); /*0x536aa1*/
  BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x536aad*/
  if ( dword_A8ECC8 ) /*0x536ab9*/
    v4 = *(_BYTE **)dword_A8ECBC; /*0x536ac0*/
  else
    v4 = 0; /*0x536ac4*/
  v7 = v3; /*0x536ac6*/
  result = (AnimClass *)sub_4AA380(v4); /*0x536acd*/
  v6 = result; /*0x536ad2*/
  if ( result ) /*0x536ad6*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x536ad8*/
    (*(void (__thiscall **)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536ae1*/
    TacticalClass::InterpolateView(v8); /*0x536aec*/
    return (AnimClass *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x536af8*/
  }
  return result; /*0x536afe*/
}



// ==== 0x00536B10  StopCommandClass::performAction_70  this=StopCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_70(StopCommandClass *this)
{
  return aStopobject; /*0x536b15*/
}



// ==== 0x00536B20  StopCommandClass::performAction_71  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_71(StopCommandClass *this)
{
  return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858); /*0x536b36*/
}



// ==== 0x00536B40  StopCommandClass::performAction_72  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_72(StopCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860); /*0x536b56*/
}



// ==== 0x00536B60  StopCommandClass::performAction_73  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_73(StopCommandClass *this)
{
  return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862); /*0x536b76*/
}



// ==== 0x00536B80  StopCommandClass::performAction_74  this=StopCommandClass  sig=csp ====
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::performAction_74(StopCommandClass *this)
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
wchar_t *__stdcall CreateTeamCommand::sub_536C00(int a1)
{
  return UI_Create_730F30(); /*0x536c05*/
}



// ==== 0x00536C10  DeployCommandClass::performAction_80  this=DeployCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_80(DeployCommandClass *this)
{
  return aDeployobject; /*0x536c15*/
}



// ==== 0x00536C20  DeployCommandClass::performAction_81  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_81(DeployCommandClass *this)
{
  return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903); /*0x536c36*/
}



// ==== 0x00536C40  DeployCommandClass::performAction_82  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_82(DeployCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905); /*0x536c56*/
}



// ==== 0x00536C60  DeployCommandClass::performAction_83  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_83(DeployCommandClass *this)
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
char *CreateTeamCommand::performAction_85(GuardCommandClass *this)
{
  return aGuardobject; /*0x536c95*/
}



// ==== 0x00536CA0  GuardCommandClass::performAction_86  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_86(GuardCommandClass *this)
{
  return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931); /*0x536cb6*/
}



// ==== 0x00536CC0  GuardCommandClass::performAction_87  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_87(GuardCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933); /*0x536cd6*/
}



// ==== 0x00536CE0  GuardCommandClass::performAction_88  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_88(GuardCommandClass *this)
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
char *CreateTeamCommand::performAction_90(ScatterCommandClass *this)
{
  return aScatterobject; /*0x536d15*/
}



// ==== 0x00536D20  ScatterCommandClass::performAction_91  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_91(ScatterCommandClass *this)
{
  return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960); /*0x536d36*/
}



// ==== 0x00536D40  ScatterCommandClass::performAction_92  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_92(ScatterCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962); /*0x536d56*/
}



// ==== 0x00536D60  ScatterCommandClass::performAction_93  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_93(ScatterCommandClass *this)
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
wchar_t *__stdcall CreateTeamCommand::sub_536E00(int a1)
{
  wchar_t *result; // eax

  result = g_SelectionManager; /*0x536e00*/
  if ( (int)g_SelectionManager > 0 ) /*0x536e07*/
  {
    TacticalClass::InterpolateView(); /*0x536e0e*/
    return (wchar_t *)MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x536e1a*/
  }
  return result; /*0x536e1f*/
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
int __stdcall CreateTeamCommand::sub_536EA0(int a1)
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
char *__stdcall CreateTeamCommand::sub_536F20(int a1)
{
  return UI_Create_7318F0(); /*0x536f25*/
}



// ==== 0x00536F30  ToggleRepairCommandClass::performAction_110  this=ToggleRepairCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_110(ToggleRepairCommandClass *this)
{
  return aTogglerepair; /*0x536f35*/
}



// ==== 0x00536F40  ToggleRepairCommandClass::performAction_111  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_111(ToggleRepairCommandClass *this)
{
  return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103); /*0x536f56*/
}



// ==== 0x00536F60  ToggleRepairCommandClass::performAction_112  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_112(ToggleRepairCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7105); /*0x536f76*/
}



// ==== 0x00536F80  ToggleRepairCommandClass::performAction_113  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_113(ToggleRepairCommandClass *this)
{
  return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107); /*0x536f96*/
}



// ==== 0x00536FA0  ToggleRepairCommandClass::Execute  this=ToggleRepairCommandClass  sig=csp ====
char __stdcall ToggleRepairModeCommandClass::Execute(ToggleRepairCommandClass *this)
{
  return BuildingClass::TogglePower2((BuildingClass *)&stru_87F5F0.__pad_58[416], -1); /*0x536fac*/
}



// ==== 0x00536FB0  ToggleSellCommandClass::performAction_114  this=ToggleSellCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_114(ToggleSellCommandClass *this)
{
  return aTogglesell; /*0x536fb5*/
}



// ==== 0x00536FC0  ToggleSellCommandClass::performAction_115  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_115(ToggleSellCommandClass *this)
{
  return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129); /*0x536fd6*/
}



// ==== 0x00536FE0  ToggleSellCommandClass::performAction_116  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_116(ToggleSellCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7131); /*0x536ff6*/
}



// ==== 0x00537000  ToggleSellCommandClass::performAction_117  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_117(ToggleSellCommandClass *this)
{
  return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133); /*0x537016*/
}



// ==== 0x00537020  ToggleSellCommandClass::performAction_118  this=ToggleSellCommandClass  sig=csp ====
char __stdcall CreateTeamCommand::performAction_118(ToggleSellCommandClass *this)
{
  return BuildingClass::TogglePower((BuildingClass *)&stru_87F5F0.__pad_58[416], -1); /*0x53702c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7174); /*0x537076*/
}



// ==== 0x00537080  BeaconPlacementCommandClass::performAction_122  this=BeaconPlacementCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_122(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176); /*0x537096*/
}



// ==== 0x005370A0  BeaconPlacementCommandClass::performAction_123  this=BeaconPlacementCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_123(BeaconPlacementCommandClass *this)
{
  int result; // eax

  result = *(_DWORD *)&dword_A8B238; /*0x5370a0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x5370a7*/
  {
    if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x5370ac*/
      return UI_Create_731A30(); /*0x5370ae*/
  }
  return result; /*0x5370b3*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7197); /*0x537106*/
}



// ==== 0x00537110  CenterREventCommandClass::performAction_127  this=CenterREventCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_127(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199); /*0x537126*/
}



// ==== 0x00537130  CenterREventCommandClass::performAction_128  this=CenterREventCommandClass  sig=csp ====
// attributes: thunk
unsigned int __thiscall CreateTeamCommand::performAction_128(CenterREventCommandClass *this)
{
  unsigned int result; // eax

  LOWORD(result) = UI_Create_734120(); /*0x537130*/
  return result; /*0x537135*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7251); /*0x537186*/
}



// ==== 0x00537190  SidebarUpCommandClass::performAction_132  this=SidebarUpCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_132(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253); /*0x5371a6*/
}



// ==== 0x005371B0  SidebarUpCommandClass::performAction_133  this=SidebarUpCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_133(SidebarUpCommandClass *this)
{
  return CreateTeamCommand::performAction_245((CreateTeamCommand *)&dword_87F7E8, 1, -1); /*0x5371be*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7391); /*0x537216*/
}



// ==== 0x00537220  SidebarDownCommandClass::performAction_137  this=SidebarDownCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_137(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393); /*0x537236*/
}



// ==== 0x00537240  SidebarDownCommandClass::performAction_138  this=SidebarDownCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_138(SidebarDownCommandClass *this)
{
  return CreateTeamCommand::performAction_245((CreateTeamCommand *)&dword_87F7E8, 0, -1); /*0x53724e*/
}



// ==== 0x00537260  OptionsCommandClass::performAction_139  this=OptionsCommandClass  sig=csp ====
CHAR *__thiscall CreateTeamCommand::performAction_139(OptionsCommandClass *this)
{
  return g_INI_Key_Options; /*0x537265*/
}



// ==== 0x00537270  OptionsCommandClass::performAction_140  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_140(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530); /*0x537286*/
}



// ==== 0x00537290  OptionsCommandClass::performAction_141  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_141(OptionsCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7532); /*0x5372a6*/
}



// ==== 0x005372B0  OptionsCommandClass::performAction_142  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_142(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534); /*0x5372c6*/
}



// ==== 0x005372D0  OptionsCommandClass::performAction_143  this=OptionsCommandClass  sig=csp ====
// attributes: thunk
char __stdcall CreateTeamCommand::sub_5372D0(int a1)
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7709); /*0x537326*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[373].referenceCount) << 8) + 128; /*0x537378*/
  v4[0] = (SHIWORD(dword_A8B230[373].nextArrayIndex) << 8) + 128; /*0x53737d*/
  v4[1] = v1; /*0x537386*/
  GroundHeight = 0; /*0x53738a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53739d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x5373a6*/
  result = (_DWORD *)dword_880990; /*0x5373ab*/
  if ( dword_880990 ) /*0x5373b2*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5373c3*/
  return result; /*0x5373c8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7745); /*0x537416*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[373].NeedsSaveOrLink) << 8) + 128; /*0x537468*/
  v4[0] = (SHIWORD(dword_A8B230[373].referenceCount) << 8) + 128; /*0x53746d*/
  v4[1] = v1; /*0x537476*/
  GroundHeight = 0; /*0x53747a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53748d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537496*/
  result = (_DWORD *)dword_880990; /*0x53749b*/
  if ( dword_880990 ) /*0x5374a2*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5374b3*/
  return result; /*0x5374b8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7781); /*0x537506*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[374].ptr_0) << 8) + 128; /*0x537558*/
  v4[0] = (SHIWORD(dword_A8B230[373].NeedsSaveOrLink) << 8) + 128; /*0x53755d*/
  v4[1] = v1; /*0x537566*/
  GroundHeight = 0; /*0x53756a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53757d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537586*/
  result = (_DWORD *)dword_880990; /*0x53758b*/
  if ( dword_880990 ) /*0x537592*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5375a3*/
  return result; /*0x5375a8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7817); /*0x5375f6*/
}



// ==== 0x00537600  View4CommandClass::performAction_162  this=View4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_162(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819); /*0x537616*/
}



// ==== 0x00537620  View4CommandClass::InitView  this=View4CommandClass  sig=csp ====
_DWORD *__thiscall TacticalClass::InitView(View4CommandClass *this)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[374].ptr_4) << 8) + 128; /*0x537648*/
  v4[0] = (SHIWORD(dword_A8B230[374].ptr_0) << 8) + 128; /*0x53764d*/
  v4[1] = v1; /*0x537656*/
  GroundHeight = 0; /*0x53765a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53766d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537676*/
  result = (_DWORD *)dword_880990; /*0x53767b*/
  if ( dword_880990 ) /*0x537682*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x537693*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7853); /*0x5376e6*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53771e*/
  v5[0] = *v1; /*0x537725*/
  v5[1] = v1[1]; /*0x53773c*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537745*/
  result = dword_A8B230; /*0x537747*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = v2; /*0x53774c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7880); /*0x5377a6*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x5377de*/
  v5[0] = *v1; /*0x5377e5*/
  v5[1] = v1[1]; /*0x5377fc*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537805*/
  result = dword_A8B230; /*0x537807*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = v2; /*0x53780c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7907); /*0x537866*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53789e*/
  v5[0] = *v1; /*0x5378a5*/
  v5[1] = v1[1]; /*0x5378bc*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x5378c5*/
  result = dword_A8B230; /*0x5378c7*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = v2; /*0x5378cc*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7934); /*0x537926*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53795e*/
  v5[0] = *v1; /*0x537965*/
  v5[1] = v1[1]; /*0x53797c*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537985*/
  result = dword_A8B230; /*0x537987*/
  *(int *)((char *)&dword_A8B230[374].ptr_0 + 2) = v2; /*0x53798c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7961); /*0x5379e6*/
}



// ==== 0x005379F0  FollowCommandClass::performAction_186  this=FollowCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_186(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963); /*0x537a06*/
}



// ==== 0x00537A10  FollowCommandClass::performAction_187  this=FollowCommandClass  sig=csp ====
bool __thiscall CreateTeamCommand::performAction_187(FollowCommandClass *this)
{
  if ( !dword_A8ECC8 || MapClass::GetScrollMode((MapClass *)&dword_87F7E8) ) /*0x537a1e*/
    return MapClass::SetScrollMode((int)&dword_87F7E8, 0); /*0x537a43*/
  else
    return MapClass::SetScrollMode((int)&dword_87F7E8, *(_DWORD *)dword_A8ECBC); /*0x537a34*/
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

  result = byte_A8B8B4; /*0x537a90*/
  if ( byte_A8B8B4 ) /*0x537a97*/
  {
    result = byte_A8B8B5 == 0; /*0x537aa0*/
    byte_A8B8B5 = byte_A8B8B5 == 0; /*0x537aa3*/
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
  return MessageListClass::AddMessage(&unk_A8BC60, 0, 0, (wchar_t *)v3, 3, 16454, 150, 0); /*0x537b30*/
}



// ==== 0x00537B40  ScreenCaptureCommandClass::Constructor  this=ScreenCaptureCommandClass  sig=csp ====
_DWORD *__thiscall ScreenCaptureCommandClass::Constructor(ScreenCaptureCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &ScreenCaptureCommandClass::`vftable'; /*0x537b42*/
  return this->CommandClass; /*0x537b48*/
}



// ==== 0x00537B50  ScreenCaptureCommandClass::AddRef  this=ScreenCaptureCommandClass  sig=csp ====
char *ScreenCaptureCommandClass::AddRef(ScreenCaptureCommandClass *this)
{
  return aScreencapture; /*0x537b55*/
}



// ==== 0x00537B60  ScreenCaptureCommandClass::ddtor  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::ddtor(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 8071); /*0x537b76*/
}



// ==== 0x00537B80  ScreenCaptureCommandClass::Release  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::Release(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072); /*0x537b96*/
}



// ==== 0x00537BA0  ScreenCaptureCommandClass::Execute  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::Execute(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073); /*0x537bb6*/
}



// ==== 0x00537BC0  ScreenCaptureCommandClass::MakeScreenshot  this=ScreenCaptureCommandClass  sig=csp ====
int __stdcall Game::MakeScreenshot(ScreenCaptureCommandClass *this)
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
  CCFileClass v16; // [esp+44h] [ebp-158h] BYREF
  int v17[3]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  CCFileClass v19; // [esp+B0h] [ebp-ECh] BYREF
  int v20[3]; // [esp+108h] [ebp-94h] BYREF
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
        v2 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537c70*/
        v3 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537c96*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x537ca4*/
        v4 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537cb8*/
        v5 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, DSurface *, struct tagPOINT *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x537cf0*/
         + 2))(
          g_DSurface_Hidden,
          v15,
          g_DSurface_Primary,
          &v10,
          0,
          1);
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, "SCRN%04d.pcx", ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(&v19, Buffer); /*0x537d27*/
          v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x537d3b*/
          *(_DWORD *)v19.CDFileClass = &CCFileClass::`vftable'; /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          *(_DWORD *)v19.CDFileClass = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(&v16, Buffer); /*0x537d7b*/
        CompressScreenshot((int *)v16.CDFileClass, (int *)g_DSurface_Hidden, &FileSystem_TEMPERAT_PAL); /*0x537d8f*/
        *(_DWORD *)v16.CDFileClass = &CCFileClass::`vftable'; /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        *(_DWORD *)v16.CDFileClass = &off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/
}



// ==== 0x00537DD0  PageUserCommandClass::PageUserCommandClass  this=PageUserCommandClass  sig=csp ====
_DWORD *__thiscall PageUserCommandClass::PageUserCommandClass(PageUserCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &PageUserCommandClass::`vftable'; /*0x537dd2*/
  return this->CommandClass; /*0x537dd8*/
}



// ==== 0x00537DE0  PageUserCommandClass::AddRef  this=PageUserCommandClass  sig=csp ====
char *PageUserCommandClass::AddRef(PageUserCommandClass *this)
{
  return aPageuser; /*0x537de5*/
}



// ==== 0x00537DF0  PageUserCommandClass::Release  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::Release(PageUserCommandClass *this)
{
  return GetStringCSF(aTxtPageuser, 0, g_Str_File_Init_CPP, 7563); /*0x537e06*/
}



// ==== 0x00537E10  PageUserCommandClass::ddtor  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::ddtor(PageUserCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7565); /*0x537e26*/
}



// ==== 0x00537E30  PageUserCommandClass::Read  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::Read(PageUserCommandClass *this)
{
  return GetStringCSF(aTxtPageuserDes, 0, g_Str_File_Init_CPP, 7567); /*0x537e46*/
}



// ==== 0x00537E50  PageUserCommandClass::Do  this=PageUserCommandClass  sig=csp ====
char __stdcall PageUserCommandClass::_vt08(int a1)
{
  char result; // al

  if ( g_GameMode_Current[0] == 4 ) /*0x537e57*/
    return UI_Add(); /*0x537e59*/
  return result; /*0x537e5e*/
}



// ==== 0x00537E70  CursorPositionCommandClass::Constructor  this=CursorPositionCommandClass  sig=csp ====
_DWORD *__thiscall CursorPositionCommandClass::Constructor(CursorPositionCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &CursorPositionCommandClass::`vftable'; /*0x537e72*/
  return this->CommandClass; /*0x537e78*/
}



// ==== 0x00537E80  CursorPositionCommandClass::performAction_193  this=CursorPositionCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_193(CursorPositionCommandClass *this)
{
  return aCursorcheat; /*0x537e85*/
}



// ==== 0x00537E90  CursorPositionCommandClass::performAction_194  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_194(CursorPositionCommandClass *this)
{
  return GetStringCSF(aGuiCursorcheat, 0, g_Str_File_Init_CPP, 8231); /*0x537ea6*/
}



// ==== 0x00537EB0  CursorPositionCommandClass::performAction_195  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_195(CursorPositionCommandClass *this)
{
  return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232); /*0x537ec6*/
}



// ==== 0x00537ED0  CursorPositionCommandClass::performAction_196  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_196(CursorPositionCommandClass *this)
{
  return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233); /*0x537ee6*/
}



// ==== 0x00537EF0  CursorPositionCommandClass::performAction_197  this=CursorPositionCommandClass  sig=csp ====
bool __stdcall CreateTeamCommand::performAction_197(CursorPositionCommandClass *this)
{
  bool result; // al

  result = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537ef7*/
  LOBYTE(stru_A8EB00.__pad_CD4[1]) = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537efa*/
  return result; /*0x537eff*/
}



// ==== 0x00537F10  DeleteCommandClass::Constructor  this=DeleteCommandClass  sig=csp ====
_DWORD *__thiscall DeleteCommandClass::Constructor(DeleteCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &DeleteCommandClass::`vftable'; /*0x537f12*/
  return this->CommandClass; /*0x537f18*/
}



// ==== 0x00537F20  DeleteCommandClass::AddRef  this=DeleteCommandClass  sig=csp ====
char *DeleteCommandClass::AddRef(DeleteCommandClass *this)
{
  return aDelete; /*0x537f25*/
}



// ==== 0x00537F30  DeleteCommandClass::Release  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::Release(DeleteCommandClass *this)
{
  return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559); /*0x537f46*/
}



// ==== 0x00537F50  DeleteCommandClass::ddtor  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::ddtor(DeleteCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6561); /*0x537f66*/
}



// ==== 0x00537F70  DeleteCommandClass::Read  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::Read(DeleteCommandClass *this)
{
  return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563); /*0x537f86*/
}



// ==== 0x00537F90  DeleteCommandClass::Undo  this=DeleteCommandClass  sig=csp ====
// attributes: thunk
char __stdcall DeleteCommandClass::Undo(DeleteCommandClass *this)
{
  return UI_Delete(); /*0x537f95*/
}



// ==== 0x00537FA0  MultiplayerDebugCommandClass::performAction_198  this=MultiplayerDebugCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_198(MultiplayerDebugCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fa9*/
  if ( (a2 & 1) != 0 ) /*0x537faf*/
    __3_YAXPAX_Z(this); /*0x537fb2*/
  return (std::locale::facet *)this; /*0x537fbc*/
}



// ==== 0x00537FC0  MultiplayerSyncCommandClass::performAction_199  this=MultiplayerSyncCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_199(MultiplayerSyncCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fc9*/
  if ( (a2 & 1) != 0 ) /*0x537fcf*/
    __3_YAXPAX_Z(this); /*0x537fd2*/
  return (std::locale::facet *)this; /*0x537fdc*/
}



// ==== 0x00537FE0  FollowCommandClass::performAction_200  this=FollowCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_200(FollowCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fe9*/
  if ( (a2 & 1) != 0 ) /*0x537fef*/
    __3_YAXPAX_Z(this); /*0x537ff2*/
  return (std::locale::facet *)this; /*0x537ffc*/
}



// ==== 0x00538000  View1CommandClass::performAction_201  this=View1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_201(View1CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538009*/
  if ( (a2 & 1) != 0 ) /*0x53800f*/
    __3_YAXPAX_Z(this); /*0x538012*/
  return (std::locale::facet *)this; /*0x53801c*/
}



// ==== 0x00538020  View2CommandClass::performAction_202  this=View2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_202(View2CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538029*/
  if ( (a2 & 1) != 0 ) /*0x53802f*/
    __3_YAXPAX_Z(this); /*0x538032*/
  return (std::locale::facet *)this; /*0x53803c*/
}



// ==== 0x00538040  View3CommandClass::performAction_203  this=View3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_203(View3CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538049*/
  if ( (a2 & 1) != 0 ) /*0x53804f*/
    __3_YAXPAX_Z(this); /*0x538052*/
  return (std::locale::facet *)this; /*0x53805c*/
}



// ==== 0x00538060  View4CommandClass::performAction_204  this=View4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_204(View4CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538069*/
  if ( (a2 & 1) != 0 ) /*0x53806f*/
    __3_YAXPAX_Z(this); /*0x538072*/
  return (std::locale::facet *)this; /*0x53807c*/
}



// ==== 0x00538080  SetView1CommandClass::performAction_205  this=SetView1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_205(SetView1CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538089*/
  if ( (a2 & 1) != 0 ) /*0x53808f*/
    __3_YAXPAX_Z(this); /*0x538092*/
  return (std::locale::facet *)this; /*0x53809c*/
}



// ==== 0x005380A0  SetView2CommandClass::performAction_206  this=SetView2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_206(SetView2CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380a9*/
  if ( (a2 & 1) != 0 ) /*0x5380af*/
    __3_YAXPAX_Z(this); /*0x5380b2*/
  return (std::locale::facet *)this; /*0x5380bc*/
}



// ==== 0x005380C0  SetView3CommandClass::performAction_207  this=SetView3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_207(SetView3CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380c9*/
  if ( (a2 & 1) != 0 ) /*0x5380cf*/
    __3_YAXPAX_Z(this); /*0x5380d2*/
  return (std::locale::facet *)this; /*0x5380dc*/
}



// ==== 0x005380E0  SetView4CommandClass::performAction_208  this=SetView4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_208(SetView4CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380e9*/
  if ( (a2 & 1) != 0 ) /*0x5380ef*/
    __3_YAXPAX_Z(this); /*0x5380f2*/
  return (std::locale::facet *)this; /*0x5380fc*/
}



// ==== 0x00538100  OptionsCommandClass::performAction_209  this=OptionsCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_209(OptionsCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538109*/
  if ( (a2 & 1) != 0 ) /*0x53810f*/
    __3_YAXPAX_Z(this); /*0x538112*/
  return (std::locale::facet *)this; /*0x53811c*/
}



// ==== 0x00538120  SidebarUpCommandClass::performAction_210  this=SidebarUpCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_210(SidebarUpCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538129*/
  if ( (a2 & 1) != 0 ) /*0x53812f*/
    __3_YAXPAX_Z(this); /*0x538132*/
  return (std::locale::facet *)this; /*0x53813c*/
}



// ==== 0x00538140  SidebarDownCommandClass::performAction_211  this=SidebarDownCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_211(SidebarDownCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538149*/
  if ( (a2 & 1) != 0 ) /*0x53814f*/
    __3_YAXPAX_Z(this); /*0x538152*/
  return (std::locale::facet *)this; /*0x53815c*/
}



// ==== 0x00538160  CenterREventCommandClass::performAction_212  this=CenterREventCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_212(CenterREventCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538169*/
  if ( (a2 & 1) != 0 ) /*0x53816f*/
    __3_YAXPAX_Z(this); /*0x538172*/
  return (std::locale::facet *)this; /*0x53817c*/
}



// ==== 0x00538180  BeaconPlacementCommandClass::performAction_213  this=BeaconPlacementCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_213(BeaconPlacementCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538189*/
  if ( (a2 & 1) != 0 ) /*0x53818f*/
    __3_YAXPAX_Z(this); /*0x538192*/
  return (std::locale::facet *)this; /*0x53819c*/
}



// ==== 0x005381A0  ToggleSellCommandClass::performAction_214  this=ToggleSellCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_214(ToggleSellCommandClass *this, char a2)
{
  *this = (ToggleSellCommandClass)&CommandClass::`vftable'; /*0x5381a9*/
  if ( (a2 & 1) != 0 ) /*0x5381af*/
    __3_YAXPAX_Z(this); /*0x5381b2*/
  return (std::locale::facet *)this; /*0x5381bc*/
}



// ==== 0x005381C0  ToggleRepairCommandClass::performAction_215  this=ToggleRepairCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_215(ToggleRepairCommandClass *this, char a2)
{
  *this = (ToggleRepairCommandClass)&CommandClass::`vftable'; /*0x5381c9*/
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(this); /*0x5381d2*/
  return this; /*0x5381dc*/
}



// ==== 0x005381E0  AllianceCommandClass::performAction_216  this=AllianceCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_216(AllianceCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(this); /*0x5381f2*/
  return &this->m_0; /*0x5381fc*/
}



// ==== 0x00538200  CenterBaseCommandClass::performAction_217  this=CenterBaseCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_217(CenterBaseCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(this); /*0x538212*/
  return &this->m_0; /*0x53821c*/
}



// ==== 0x00538220  CenterViewCommandClass::performAction_218  this=CenterViewCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_218(CenterViewCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(this); /*0x538232*/
  return &this->m_0; /*0x53823c*/
}



// ==== 0x00538240  ScatterCommandClass::performAction_219  this=ScatterCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_219(ScatterCommandClass *this, char a2)
{
  *this = (ScatterCommandClass)&CommandClass::`vftable'; /*0x538249*/
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(this); /*0x538252*/
  return this; /*0x53825c*/
}



// ==== 0x00538260  GuardCommandClass::performAction_220  this=GuardCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_220(GuardCommandClass *this, char a2)
{
  *this = (GuardCommandClass)&CommandClass::`vftable'; /*0x538269*/
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(this); /*0x538272*/
  return this; /*0x53827c*/
}



// ==== 0x00538280  StopCommandClass::performAction_221  this=StopCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_221(StopCommandClass *this, char a2)
{
  *this = (StopCommandClass)&CommandClass::`vftable'; /*0x538289*/
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(this); /*0x538292*/
  return this; /*0x53829c*/
}



// ==== 0x005382A0  AllToCheerCommandClass::performAction_222  this=AllToCheerCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_222(AllToCheerCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(this); /*0x5382b2*/
  return &this->m_0; /*0x5382bc*/
}



// ==== 0x005382C0  DeployCommandClass::performAction_223  this=DeployCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_223(DeployCommandClass *this, char a2)
{
  *this = (DeployCommandClass)&CommandClass::`vftable'; /*0x5382c9*/
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(this); /*0x5382d2*/
  return this; /*0x5382dc*/
}



// ==== 0x005382E0  PrevObjectCommandClass::performAction_224  this=PrevObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_224(PrevObjectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(this); /*0x5382f2*/
  return &this->m_0; /*0x5382fc*/
}



// ==== 0x00538300  NextObjectCommandClass::performAction_225  this=NextObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_225(NextObjectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(this); /*0x538312*/
  return &this->m_0; /*0x53831c*/
}



// ==== 0x00538320  PlanningModeCommandClass::performAction_226  this=PlanningModeCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_226(PlanningModeCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(this); /*0x538332*/
  return &this->m_0; /*0x53833c*/
}



// ==== 0x00538340  CombatantSelectCommandClass::performAction_227  this=CombatantSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_227(CombatantSelectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(this); /*0x538352*/
  return &this->m_0; /*0x53835c*/
}



// ==== 0x00538360  TypeSelectCommandClass::performAction_228  this=TypeSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_228(TypeSelectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(this); /*0x538372*/
  return &this->m_0; /*0x53837c*/
}



// ==== 0x00538380  HealthNavCommandClass::performAction_229  this=HealthNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_229(HealthNavCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(this); /*0x538392*/
  return &this->m_0; /*0x53839c*/
}



// ==== 0x005383A0  VeterancyNavCommandClass::performAction_230  this=VeterancyNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_230(VeterancyNavCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(this); /*0x5383b2*/
  return &this->m_0; /*0x5383bc*/
}



// ==== 0x005383C0  SetStructureTabCommandClass::performAction_231  this=SetStructureTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_231(SetStructureTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(this); /*0x5383d2*/
  return &this->m_0; /*0x5383dc*/
}



// ==== 0x005383E0  SetDefenseTabCommandClass::performAction_232  this=SetDefenseTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_232(SetDefenseTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(this); /*0x5383f2*/
  return &this->m_0; /*0x5383fc*/
}



// ==== 0x00538400  SetUnitTabCommandClass::performAction_233  this=SetUnitTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_233(SetUnitTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(this); /*0x538412*/
  return &this->m_0; /*0x53841c*/
}



// ==== 0x00538420  SetInfantryTabCommandClass::performAction_234  this=SetInfantryTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_234(SetInfantryTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(this); /*0x538432*/
  return &this->m_0; /*0x53843c*/
}



// ==== 0x00538440  ScreenCaptureCommandClass::performAction_235  this=ScreenCaptureCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_235(ScreenCaptureCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538449*/
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(this); /*0x538452*/
  return this->CommandClass; /*0x53845c*/
}



// ==== 0x00538460  PageUserCommandClass::performAction_236  this=PageUserCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_236(PageUserCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538469*/
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(this); /*0x538472*/
  return this->CommandClass; /*0x53847c*/
}



// ==== 0x00538480  CursorPositionCommandClass::performAction_237  this=CursorPositionCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_237(CursorPositionCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538489*/
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(this); /*0x538492*/
  return this->CommandClass; /*0x53849c*/
}



// ==== 0x005384A0  DeleteCommandClass::performAction_238  this=DeleteCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_238(DeleteCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x5384a9*/
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(this); /*0x5384b2*/
  return this->CommandClass; /*0x5384bc*/
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
int __thiscall VectorClass_ptr_CCINIClass::Clear(_VectorClass_PAVCCINIClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53851a*/
}



// ==== 0x00538520  _VectorClass_PAVCCINIClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::AddRef(_VectorClass_PAVCCINIClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x538522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53852d*/
  {
    v3 = 0; /*0x53852f*/
    if ( m_8 <= 0 ) /*0x538533*/
      return 1; /*0x538553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x538535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53853b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x538544*/
    {
      ++v3; /*0x538546*/
      ++v4; /*0x538547*/
      if ( v3 >= m_8 ) /*0x53854c*/
        return 1; /*0x53854c*/
    }
  }
  return 0; /*0x53854e*/
}



// ==== 0x00538560  _VectorClass_PAVCCINIClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::Remove(_VectorClass_PAVCCINIClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53856c*/
  {
    LOBYTE(this->m_C) = 0; /*0x538576*/
    if ( a3 ) /*0x53857c*/
      v4 = a3; /*0x538592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53858e*/
    LOBYTE(this->m_C) = 1; /*0x538596*/
    if ( v4 ) /*0x53859a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5385a5*/
      {
        m_8 = this->m_8; /*0x5385ac*/
        if ( a2 < m_8 ) /*0x5385b1*/
          m_8 = a2; /*0x5385b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5385b9*/
          ++i; /*0x5385be*/
        if ( BYTE1(this->m_C) ) /*0x5385cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5385d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5385de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5385e7*/
      this->m_8 = a2; /*0x5385ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x5385f2*/
      return 1; /*0x5385f8*/
    }
    else
    {
      return 0; /*0x53859f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVCCINIClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x538602*/
    return 1; /*0x538608*/
  }
}



// ==== 0x00538610  _VectorClass_PAVCCINIClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CCINIClass::ddtor(_VectorClass_PAVCCINIClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53861d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x538623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53862b*/
  }
  BYTE1(this->m_C) = 0; /*0x53862e*/
  this->m_8 = 0; /*0x538631*/
}



// ==== 0x00538640  _VectorClass_PAVCCINIClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CCINIClass::GetSize(_VectorClass_PAVCCINIClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x538640*/
    return 0; /*0x538648*/
  m_8 = this->m_8; /*0x53864e*/
  result = 0; /*0x538651*/
  if ( m_8 <= 0 ) /*0x538655*/
    return -1; /*0x53866c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53865b*/
  {
    if ( ++result >= m_8 ) /*0x53866a*/
      return -1; /*0x53866a*/
  }
  return result; /*0x53864a*/
}



// ==== 0x00538680  _VectorClass_PAVCCINIClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CCINIClass::Get(_VectorClass_PAVCCINIClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x538680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x538695*/
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
      v5 = this->q008; /*0x5386df*/
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
    this->q008 = a2; /*0x538722*/
    this->IsAllocated = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53872e*/
  }
  v7 = this->q008; /*0x538731*/
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
char __thiscall DynamicVector::Add_Alt2(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x538783*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x53878b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(_DWORD *)this->__pad_14; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x5387b5*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5387b8*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x5387be*/
  *(_DWORD *)(v7 + 4 * (_DWORD)DynamicVector_field_0x10) = *a2; /*0x5387c8*/
  return 1; /*0x5387b1*/
}



// ==== 0x005387D0  SortedArray::Append  this=SortedArray  sig=csp ====
char __thiscall SortedArray_Append(int this, _DWORD *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x5387da*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x5387e0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *a2; /*0x53885b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *a3; /*0x538875*/
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
  v6 = (char *)__2_YAPAXI_Z(8 * (v4 + v5)); /*0x538807*/
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v6[v8 + 4] = v9[1] ) /*0x53881c*/
    {
      v8 = 8 * i; /*0x538820*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x538829*/
      *(_DWORD *)&v6[v8] = *v9; /*0x53882e*/
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
char __thiscall SortedArray_RemoveByKey(int this, int *a2)
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
  _DWORD *v13; // edi
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
  v15 = *a2; /*0x5388e4*/
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
  v13 = *(_DWORD **)this; /*0x538957*/
  v14 = *(_DWORD *)(this + 4) - 1; /*0x538959*/
  *(_DWORD *)(this + 4) = v14; /*0x53895c*/
  v13[2 * v14] = 0; /*0x53895f*/
  v13[2 * v14 + 1] = 0; /*0x538962*/
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
char *__thiscall CreateTeamCommand::performAction_243(CreateTeamCommand *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x538a2d*/
    v4 = (char *)this - 4; /*0x538a31*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x538a34*/
    v6 = v3 - 1; /*0x538a37*/
    if ( v6 >= 0 ) /*0x538a38*/
    {
      v7 = v6 + 1; /*0x538a3b*/
      do /*0x538a4f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x538a3e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a43*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a6a*/
    ComPtr::Release((ComPtr *)this); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(this); /*0x538a7b*/
    return this->__pad_0; /*0x538a83*/
  }
}



// ==== 0x00538A90  _VectorClass_PAVCCINIClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CCINIClass::Add(_VectorClass_PAVCCINIClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x538a93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x538a96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x538aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x538aa8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x538ab0*/
  }
  BYTE1(this->m_C) = 0; /*0x538abb*/
  this->m_8 = 0; /*0x538ac1*/
  if ( (a2 & 1) != 0 ) /*0x538ac8*/
    __3_YAXPAX_Z(this); /*0x538acb*/
  return this->__pad_0; /*0x538ad5*/
}



// ==== 0x00538AE0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_244  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::sub_538AE0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538ae3*/
  *Block = &VectorClass<CCINIClass *>::`vftable'; /*0x538ae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(Block + 1) = 0; /*0x538b00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x538b0b*/
  *(Block + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(Block); /*0x538b1b*/
  return Block; /*0x538b25*/
}



// ==== 0x00538B30  RulesClass::InitINIChain  this=VectorClass  sig=csp ====
_DWORD *__thiscall RulesClass::InitINIChain(RulesClass *this, int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x538b3b*/
  this->DetailBufferZoneWidth = a2; /*0x538b3e*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x538b41*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x538b45*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<CCINIClass *>::`vftable'; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x538b58*/
      return &this->DetailMinFrameRateNormal; /*0x538b5e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    BYTE1(this->AmmoCrateDamage) = 1; /*0x538b70*/
  }
  return &this->DetailMinFrameRateNormal; /*0x538b5d*/
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
  return InitArrayWithValue(unk_A8F7F8, 0, 64); /*0x538c1e*/
}



// ==== 0x00538C20  sub_538C20  this=-  sig=ida-proto ====
int sub_538C20()
{
  dword_A8F908 = 0; /*0x538c22*/
  dword_A8F90C = 0; /*0x538c27*/
  dword_A8F910 = 0; /*0x538c2c*/
  dword_A8F914 = 0; /*0x538c31*/
  return 0; /*0x538c36*/
}



// ==== 0x00538C40  ObjectClass::method_538C40  this=ObjectClass  sig=csp ====
int __thiscall sub_538C40(ObjectClass *this)
{
  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)this); /*0x538c48*/
  if ( (unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538c53*/
  {
    FileClass::Load(&v2, (const CHAR *)1); /*0x538c62*/
    CCFileClass::Read(&v2, &byte_A8F91C, 0x10000); /*0x538c75*/
    CCFileClass::Reset(&v2); /*0x538c7e*/
    byte_A9F91C = 0; /*0x538c83*/
  }
  v2.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538c8e*/
  v4 = 0; /*0x538c96*/
  Vector::Clear((int)v3); /*0x538c9e*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538ca7*/
  return BufferIOFileClass::Dtor(&v2); /*0x538cb4*/
}



// ==== 0x00538CC0  ObjectClass::method_538CC0  this=ObjectClass  sig=csp ====
int __thiscall sub_538CC0(ObjectClass *this)
{
  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)this); /*0x538cc8*/
  if ( !(unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538cd3*/
  {
    FileClass::Load(&v2, (const CHAR *)2); /*0x538ce2*/
    FileClass::Write(&v2, &byte_A8F91C, 0x10000u); /*0x538cf5*/
    CCFileClass::Reset(&v2); /*0x538cfe*/
  }
  v2.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538d07*/
  v4 = 0; /*0x538d0f*/
  Vector::Clear((int)v3); /*0x538d17*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538d20*/
  return BufferIOFileClass::Dtor(&v2); /*0x538d2d*/
}



// ==== 0x00538D40  ObjectClass::method_538D40  this=ObjectClass  sig=csp ====
int sub_538D40(ObjectClass *this)
{
  unsigned __int8 *v1; // eax
  unsigned __int8 *v2; // edi
  int v3; // ecx
  unsigned __int8 *v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned __int8 *v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // edx
  int v15; // esi
  unsigned __int8 *v16; // ecx
  int v17; // eax
  char *v18; // ecx
  int result; // eax
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  char v22; // [esp+18h] [ebp-24h]
  int v23; // [esp+1Ch] [ebp-20h]
  char *v24; // [esp+20h] [ebp-1Ch]
  unsigned __int8 *v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+30h] [ebp-Ch]
  int v29; // [esp+34h] [ebp-8h]
  int v30; // [esp+38h] [ebp-4h]

  v1 = (unsigned __int8 *)dword_A8F918; /*0x538d43*/
  v24 = &byte_A8F91C; /*0x538d4c*/
  while ( 1 ) /*0x538d60*/
  {
    v2 = (unsigned __int8 *)dword_A8F918; /*0x538d60*/
    v3 = *v1; /*0x538d66*/
    v4 = v1 + 1; /*0x538d68*/
    v26 = v3; /*0x538d69*/
    v5 = *v4++; /*0x538d6f*/
    v27 = v5; /*0x538d72*/
    v28 = *v4; /*0x538d7b*/
    v25 = v4 + 1; /*0x538d7f*/
    v23 = 0; /*0x538d83*/
    do /*0x538e42*/
    {
      v6 = *v2; /*0x538d91*/
      v7 = v2 + 1; /*0x538d93*/
      v8 = v6; /*0x538d94*/
      v9 = *v7++; /*0x538d98*/
      v10 = v28 + *v7; /*0x538dab*/
      v2 = v7 + 1; /*0x538dad*/
      v11 = (v26 + v8) >> 1; /*0x538dae*/
      v12 = (v27 + v9) >> 1; /*0x538db0*/
      v30 = v10 >> 1; /*0x538db4*/
      v13 = (unsigned __int8 *)dword_A8F918; /*0x538db8*/
      v29 = v12; /*0x538dbe*/
      v22 = 0; /*0x538dc2*/
      v21 = 500000; /*0x538dc6*/
      v20 = 0; /*0x538dce*/
      while ( 1 ) /*0x538de1*/
      {
        v14 = *v13 - v11; /*0x538de1*/
        v15 = v13[1] - v12; /*0x538dea*/
        v16 = v13 + 2; /*0x538dec*/
        v17 = v14 * v14 + v15 * v15 + (*v16 - v30) * (*v16 - v30); /*0x538e06*/
        v13 = v16 + 1; /*0x538e08*/
        if ( v17 < v21 ) /*0x538e0b*/
        {
          v21 = v17; /*0x538e11*/
          v22 = v20; /*0x538e15*/
        }
        if ( ++v20 >= 256 ) /*0x538e27*/
          break; /*0x538e27*/
        v12 = v29; /*0x538dd4*/
      }
      v18 = v24; /*0x538e29*/
      v24[v23] = v22; /*0x538e35*/
      result = v23 + 1; /*0x538e38*/
      v23 = result; /*0x538e3e*/
    }
    while ( result < 256 ); /*0x538e42*/
    v24 += 256; /*0x538e54*/
    if ( (int)(v18 + 256) >= (int)&byte_A9F91C ) /*0x538e58*/
      break; /*0x538e58*/
    v1 = v25; /*0x538d58*/
  }
  byte_A9F91C = 0; /*0x538e61*/
  return result; /*0x538e5e*/
}



// ==== 0x00538E70  ObjectClass::method_538E70  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_538E70(ObjectClass *this, double a2)
{
  int v3; // edi
  char *v4; // esi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  __int16 result; // ax
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  Color v12; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Eh] [ebp-6h]

  v3 = 0; /*0x538e78*/
  do
  {
    v4 = (char *)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
    v5 = ComputeColorSaturation((unsigned int)v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(_BYTE *)(v5 + 2); /*0x538ea1*/
    LOWORD(v12.Color_field_00) = *(_WORD *)v5; /*0x538ea4*/
    LOBYTE(v14) = v6; /*0x538ea9*/
    BYTE2(v12.Color_field_00) = v6; /*0x538eb7*/
    v13 = v6; /*0x538ebb*/
    LOWORD(v7) = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    BYTE2(v12.Color_field_00) = v7 <= 0 ? 0 : v7;
    v8 = Color::ConvertToRGB(&v12, (int)&v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(_WORD *)v8; /*0x538efb*/
    LOBYTE(v8) = *(_BYTE *)(v8 + 2); /*0x538efe*/
    *(_WORD *)v4 = result; /*0x538f01*/
    v4[2] = v8; /*0x538f04*/
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
  ObjectClass *v16; // [esp+0h] [ebp-84h]
  char v17; // [esp+12h] [ebp-72h]
  char v18; // [esp+13h] [ebp-71h]
  CCFileClass v20; // [esp+18h] [ebp-6Ch] BYREF
  int v21[3]; // [esp+70h] [ebp-14h] BYREF
  int v22; // [esp+7Ch] [ebp-8h]

  v17 = 0; /*0x538f3d*/
  v18 = 0; /*0x538f42*/
  if ( byte_A9F91C ) /*0x538f4c*/
  {
    if ( Source ) /*0x538f50*/
    {
      CCFileClass::Construct(&v20, Source); /*0x538f57*/
      if ( (unsigned __int8)CCFileClass::Open(&v20, 0) ) /*0x538f62*/
      {
        FileClass::Load(&v20, (const CHAR *)1); /*0x538f71*/
        CCFileClass::Read(&v20, &byte_A8F91C, 0x10000); /*0x538f84*/
        CCFileClass::Reset(&v20); /*0x538f8d*/
        byte_A9F91C = 0; /*0x538f92*/
      }
      v20.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538f9d*/
      v22 = 0; /*0x538fa5*/
      Vector::Clear((int)v21); /*0x538fad*/
      v20.FileClass = (FileClass)&off_7E1668; /*0x538fb6*/
      BufferIOFileClass::Dtor(&v20); /*0x538fba*/
    }
    if ( byte_A9F91C ) /*0x538fc6*/
      sub_538D40(v16); /*0x538fc8*/
  }
  if ( Source ) /*0x538fcf*/
  {
    CCFileClass::Construct(&v20, Source); /*0x538fd6*/
    if ( !(unsigned __int8)CCFileClass::Open(&v20, 0) ) /*0x538fe1*/
    {
      FileClass::Load(&v20, (const CHAR *)2); /*0x538ff0*/
      FileClass::Write(&v20, &byte_A8F91C, 0x10000u); /*0x539003*/
      CCFileClass::Reset(&v20); /*0x53900c*/
    }
    v20.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x539015*/
    v22 = 0; /*0x53901d*/
    Vector::Clear((int)v21); /*0x539025*/
    v20.FileClass = (FileClass)&off_7E1668; /*0x53902e*/
    BufferIOFileClass::Dtor(&v20); /*0x539032*/
  }
  DDraw::WaitForIdle((DDraw *)v16); /*0x539037*/
  v5 = (int *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, 0, 0); /*0x539049*/
  if ( v5 ) /*0x53904d*/
    v17 = 1; /*0x53904f*/
  v6 = (char *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x539062*/
  if ( v6 ) /*0x539066*/
  {
    v18 = 1; /*0x53906c*/
    if ( !v17 ) /*0x539073*/
      return (*(char (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390fa*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x539080*/
    v8 = 2 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x53908d*/
    if ( dword_A9F920 ) /*0x539092*/
    {
      if ( dword_A9F920 == 1 ) /*0x539095*/
      {
        v14 = v8; /*0x5390b2*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390b6*/
        sub_7E00A6(v5, v6, v10, v7, v14); /*0x5390bf*/
      }
      else if ( dword_A9F920 == 2 ) /*0x539098*/
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
  if ( v17 ) /*0x5390e3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x5390e9*/
  result = v18; /*0x5390ec*/
  if ( v18 ) /*0x5390f2*/
    return (*(char (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390f2*/
  return result; /*0x5390fd*/
}



// ==== 0x00539110  sub_539110  this=-  sig=ida-proto ====
void sub_539110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53911c*/
  dbl_A9F948 = Math::Sqrt(v0 + v0); /*0x53912e*/
}



// ==== 0x00539140  sub_539140  this=-  sig=ida-proto ====
void sub_539140()
{
  dbl_A9F998 = dbl_A9F948 / 60.0; /*0x53914c*/
}



// ==== 0x00539160  sub_539160  this=-  sig=ida-proto ====
void sub_539160()
{
  dbl_A9F980 = 1.0 / dbl_A9F998; /*0x53916c*/
}



// ==== 0x00539180  sub_539180  this=-  sig=ida-proto ====
void sub_539180()
{
  dbl_A9F978 = 0.0174532925199433 * 45.0; /*0x53918c*/
}



// ==== 0x005391A0  sub_5391A0  this=-  sig=ida-proto ====
void sub_5391A0()
{
  dbl_A9F950 = 0.0174532925199433 * 60.0; /*0x5391ac*/
}



// ==== 0x005391C0  sub_5391C0  this=-  sig=ida-proto ====
void sub_5391C0()
{
  dbl_A9F928 = 0.0174532925199433 * 90.0; /*0x5391cc*/
}



// ==== 0x005391E0  sub_5391E0  this=-  sig=ida-proto ====
__int64 sub_5391E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9F928 - dbl_A9F950); /*0x5391f2*/
  result = Math::RoundToInt(v0 * dbl_A9F948 * 0.5); /*0x539206*/
  dword_A9F9A0 = result; /*0x53920b*/
  return result; /*0x539210*/
}



// ==== 0x00539220  sub_539220  this=-  sig=ida-proto ====
void sub_539220()
{
  dbl_A9F958 = Math::ArcTan((double)dword_A9F9A0 * 0.00390625); /*0x539237*/
}



// ==== 0x00539250  sub_539250  this=-  sig=ida-proto ====
void sub_539250()
{
  dbl_A9F970 = Math::ArcTan((double)(2 * dword_A9F9A0) / dbl_A9F948); /*0x539272*/
}



// ==== 0x00539280  sub_539280  this=-  sig=ida-proto ====
__int64 sub_539280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9F9A0) + 0.5); /*0x53929b*/
  dword_A9F994 = result; /*0x5392a0*/
  return result; /*0x5392a6*/
}



// ==== 0x005392B0  sub_5392B0  this=-  sig=ida-proto ====
int sub_5392B0()
{
  word_A9F940 = 0; /*0x5392b2*/
  word_A9F942 = 0; /*0x5392b8*/
  return 0; /*0x5392be*/
}



// ==== 0x005392C0  sub_5392C0  this=-  sig=ida-proto ====
int sub_5392C0()
{
  dword_A9F960 = 0; /*0x5392c2*/
  dword_A9F964 = 0; /*0x5392c7*/
  dword_A9F968 = 0; /*0x5392cc*/
  return 0; /*0x5392d1*/
}



// ==== 0x005392E0  sub_5392E0  this=-  sig=ida-proto ====
int sub_5392E0()
{
  dword_A9F990 = 0; /*0x5392e5*/
  dword_A9F988 = 128; /*0x5392ef*/
  dword_A9F98C = 128; /*0x5392f4*/
  return 128; /*0x5392f9*/
}



// ==== 0x00539300  sub_539300  this=-  sig=ida-proto ====
int sub_539300()
{
  dword_A9F930 = 0; /*0x539302*/
  dword_A9F934 = 0; /*0x539307*/
  dword_A9F938 = 0; /*0x53930c*/
  dword_A9F93C = 0; /*0x539311*/
  return 0; /*0x539316*/
}



// ==== 0x00539350  sub_539350  this=-  sig=ida-proto ====
void sub_539350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53935c*/
  dbl_A9FA00 = Math::Sqrt(v0 + v0); /*0x53936e*/
}



// ==== 0x00539380  sub_539380  this=-  sig=ida-proto ====
void sub_539380()
{
  dbl_A9FA88 = dbl_A9FA00 / 60.0; /*0x53938c*/
}



// ==== 0x005393A0  sub_5393A0  this=-  sig=ida-proto ====
void sub_5393A0()
{
  dbl_A9FA58 = 1.0 / dbl_A9FA88; /*0x5393ac*/
}



// ==== 0x005393C0  sub_5393C0  this=-  sig=ida-proto ====
void sub_5393C0()
{
  dbl_A9FA50 = 0.0174532925199433 * 45.0; /*0x5393cc*/
}



// ==== 0x005393E0  sub_5393E0  this=-  sig=ida-proto ====
void sub_5393E0()
{
  dbl_A9FA08 = 0.0174532925199433 * 60.0; /*0x5393ec*/
}



// ==== 0x00539400  sub_539400  this=-  sig=ida-proto ====
void sub_539400()
{
  dbl_A9F9B0 = 0.0174532925199433 * 90.0; /*0x53940c*/
}



// ==== 0x00539420  sub_539420  this=-  sig=ida-proto ====
__int64 sub_539420()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9F9B0 - dbl_A9FA08); /*0x539432*/
  result = Math::RoundToInt(v0 * dbl_A9FA00 * 0.5); /*0x539446*/
  dword_A9FA90 = result; /*0x53944b*/
  return result; /*0x539450*/
}



// ==== 0x00539460  sub_539460  this=-  sig=ida-proto ====
void sub_539460()
{
  dbl_A9FA10 = Math::ArcTan((double)dword_A9FA90 * 0.00390625); /*0x539477*/
}



// ==== 0x00539490  sub_539490  this=-  sig=ida-proto ====
void sub_539490()
{
  dbl_A9FA40 = Math::ArcTan((double)(2 * dword_A9FA90) / dbl_A9FA00); /*0x5394b2*/
}



// ==== 0x005394C0  sub_5394C0  this=-  sig=ida-proto ====
__int64 sub_5394C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9FA90) + 0.5); /*0x5394db*/
  dword_A9FA84 = result; /*0x5394e0*/
  return result; /*0x5394e6*/
}



// ==== 0x005394F0  sub_5394F0  this=-  sig=ida-proto ====
int sub_5394F0()
{
  dword_A9F9F8 = 0; /*0x5394f2*/
  return 0; /*0x5394fe*/
}



// ==== 0x00539500  sub_539500  this=-  sig=ida-proto ====
int sub_539500()
{
  dword_A9FA30 = 0; /*0x539502*/
  qword_A9FA34 = 0; /*0x539507*/
  MEMORY[0xA9FA38] = 0; /*0x53950c*/
  return 0; /*0x539511*/
}



// ==== 0x00539520  sub_539520  this=-  sig=ida-proto ====
int sub_539520()
{
  dword_A9FA80 = 0; /*0x539525*/
  dword_A9FA78 = 128; /*0x53952f*/
  dword_A9FA7C = 128; /*0x539534*/
  return 128; /*0x539539*/
}



// ==== 0x00539540  sub_539540  this=-  sig=ida-proto ====
int sub_539540()
{
  dword_A9F9E8 = 0; /*0x539542*/
  dword_A9F9EC = 0; /*0x539547*/
  dword_A9F9F0 = 0; /*0x53954c*/
  dword_A9F9F4 = 0; /*0x539551*/
  return 0; /*0x539556*/
}



// ==== 0x00539560  sub_539560  this=-  sig=ida-proto ====
int sub_539560()
{
  LightningStorm_Coords = dword_A9F9F8; /*0x539565*/
  return dword_A9F9F8; /*0x53956a*/
}



// ==== 0x00539570  sub_539570  this=-  sig=ida-proto ====
int sub_539570()
{
  PsyDom_Coords = dword_A9F9F8; /*0x539575*/
  return dword_A9F9F8; /*0x53957a*/
}



// ==== 0x00539580  sub_539580  this=-  sig=ida-proto ====
int sub_539580()
{
  dword_A9FA64 = 0; /*0x539587*/
  dword_A9FA68 = 0; /*0x53958c*/
  byte_A9FA6C = 1; /*0x539591*/
  byte_A9FA6D = 0; /*0x539598*/
  LightningStorm_CloudsManifesting = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x53959d*/
  dword_A9FA74 = 10; /*0x5395a7*/
  dword_A9FA70 = 0; /*0x5395b1*/
  return atexit(sub_5395C0); /*0x5395bc*/
}



// ==== 0x005395C0  sub_5395C0  this=-  sig=ida-proto ====
void __cdecl sub_5395C0()
{
  if ( (byte_A9F9A9 & 1) == 0 ) /*0x5395ca*/
  {
    LightningStorm_CloudsManifesting = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x5395ce*/
    byte_A9F9A9 |= 1u; /*0x5395e1*/
    if ( dword_A9FA64 ) /*0x5395e7*/
    {
      if ( byte_A9FA6D ) /*0x5395f1*/
      {
        __3_YAXPAX_Z(dword_A9FA64); /*0x5395f4*/
        dword_A9FA64 = 0; /*0x5395fc*/
      }
    }
    byte_A9FA6D = 0; /*0x539606*/
    dword_A9FA68 = 0; /*0x53960d*/
  }
}



// ==== 0x00539620  sub_539620  this=-  sig=ida-proto ====
int sub_539620()
{
  dword_A9F9D4 = 0; /*0x539627*/
  dword_A9F9D8 = 0; /*0x53962c*/
  byte_A9F9DC = 1; /*0x539631*/
  byte_A9F9DD = 0; /*0x539638*/
  LightningStorm_CloudsPresent = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x53963d*/
  dword_A9F9E4 = 10; /*0x539647*/
  dword_A9F9E0 = 0; /*0x539651*/
  return atexit(sub_539660); /*0x53965c*/
}



// ==== 0x00539660  sub_539660  this=-  sig=ida-proto ====
void __cdecl sub_539660()
{
  if ( (byte_A9F9A8 & 1) == 0 ) /*0x53966a*/
  {
    LightningStorm_CloudsPresent = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x53966e*/
    byte_A9F9A8 |= 1u; /*0x539681*/
    if ( dword_A9F9D4 ) /*0x539687*/
    {
      if ( byte_A9F9DD ) /*0x539691*/
      {
        __3_YAXPAX_Z(dword_A9F9D4); /*0x539694*/
        dword_A9F9D4 = 0; /*0x53969c*/
      }
    }
    byte_A9F9DD = 0; /*0x5396a6*/
    dword_A9F9D8 = 0; /*0x5396ad*/
  }
}



// ==== 0x005396C0  sub_5396C0  this=-  sig=ida-proto ====
int sub_5396C0()
{
  dword_A9FA1C = 0; /*0x5396c7*/
  dword_A9FA20 = 0; /*0x5396cc*/
  byte_A9FA24 = 1; /*0x5396d1*/
  byte_A9FA25 = 0; /*0x5396d8*/
  LightningStorm_BoltsPresent = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x5396dd*/
  dword_A9FA2C = 10; /*0x5396e7*/
  dword_A9FA28 = 0; /*0x5396f1*/
  return atexit(sub_539700); /*0x5396fc*/
}



// ==== 0x00539700  sub_539700  this=-  sig=ida-proto ====
void __cdecl sub_539700()
{
  if ( (byte_A9F9A8 & 2) == 0 ) /*0x53970a*/
  {
    LightningStorm_BoltsPresent = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x53970e*/
    byte_A9F9A8 |= 2u; /*0x539721*/
    if ( dword_A9FA1C ) /*0x539727*/
    {
      if ( byte_A9FA25 ) /*0x539731*/
      {
        __3_YAXPAX_Z(dword_A9FA1C); /*0x539734*/
        dword_A9FA1C = 0; /*0x53973c*/
      }
    }
    byte_A9FA25 = 0; /*0x539746*/
    dword_A9FA20 = 0; /*0x53974d*/
  }
}



// ==== 0x00539760  ObjectClass::Map_Reset  this=ObjectClass  sig=csp ====
int Map_Reset(ObjectClass *this)
{
  *(_DWORD *)&PsyDom_Coords = dword_A9F9F8; /*0x539766*/
  LightningStorm_Coords = dword_A9F9F8; /*0x53976b*/
  LightningStorm_Active = 0; /*0x53977d*/
  NukeFlash_Status = 0; /*0x539783*/
  LightningStorm_StartTime = -1; /*0x539789*/
  LightningStorm_Duration = -1; /*0x53978f*/
  NukeFlash_StartTime = -1; /*0x539795*/
  NukeFlash_Duration = -1; /*0x53979b*/
  PsyDom_Status = 0; /*0x5397a1*/
  PsyDom_Anim = 0; /*0x5397a7*/
  PsyDom_Owner = 0; /*0x5397ad*/
  LightningStorm_Deferment = 0; /*0x5397b3*/
  LightningStorm_Owner = 0; /*0x5397b9*/
  dword_A9FA70 = 0; /*0x5397bf*/
  if ( dword_A9FA64 && byte_A9FA6D ) /*0x5397cd*/
  {
    __3_YAXPAX_Z(dword_A9FA64); /*0x5397d0*/
    dword_A9FA64 = 0; /*0x5397d8*/
  }
  byte_A9FA6D = 0; /*0x5397e3*/
  dword_A9FA68 = 0; /*0x5397eb*/
  dword_A9F9E0 = 0; /*0x5397f1*/
  if ( dword_A9F9D4 && byte_A9F9DD ) /*0x5397ff*/
  {
    __3_YAXPAX_Z(dword_A9F9D4); /*0x539802*/
    dword_A9F9D4 = 0; /*0x53980a*/
  }
  byte_A9F9DD = 0; /*0x539815*/
  dword_A9F9D8 = 0; /*0x53981d*/
  dword_A9FA28 = 0; /*0x539823*/
  if ( dword_A9FA1C && byte_A9FA25 ) /*0x539831*/
  {
    __3_YAXPAX_Z(dword_A9FA1C); /*0x539834*/
    dword_A9FA1C = 0; /*0x53983c*/
  }
  byte_A9FA25 = 0; /*0x539847*/
  dword_A9FA20 = 0; /*0x53984d*/
  dword_A8B230[378].ptr_8 = dword_A8B230[378].ptr_0; /*0x539859*/
  if ( g_ChronoEffectState ) /*0x539867*/
    (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53986d*/
  ChronoScreenEffect_Duration = 0; /*0x539875*/
  g_ChronoEffectState = 0; /*0x53987b*/
  ChronoScreenEffect_Status = 0; /*0x539881*/
  return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53988c*/
}



// ==== 0x00539890  SuperWeaponClass::LoadFromSaveStream  this=SuperWeaponClass  sig=csp ====
int __thiscall SuperWeaponClass::LoadFromSaveStream(SuperWeaponClass *this)
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

  result = (*(int (__stdcall **)(SuperWeaponClass *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398a3*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x5398a8*/
  {
    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398ba*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x5398bf*/
    {
      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398d1*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x5398d6*/
      {
        result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398e8*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x5398ed*/
        {
          result = (*(int (__stdcall **)(SuperWeaponClass *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398ff*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539904*/
          {
            result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539916*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x53991b*/
            {
              result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x53992d*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539932*/
              {
                result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539944*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539949*/
                {
                  result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x53995b*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539960*/
                  {
                    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539972*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539977*/
                    {
                      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x539989*/
                                                                                            + 16))(
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x53998e*/
                      {
                        result = (*(int (__stdcall **)(SuperWeaponClass *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x5399a0*/
                                                                                                  + 16))(
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5399a5*/
                        {
                          result = (*(int (__stdcall **)(SuperWeaponClass *, #375 **, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x5399b7*/
                                                                                                  + 16))(
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5399bc*/
                          {
                            result = (*(int (__stdcall **)(SuperWeaponClass *, House **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5399ce*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x5399d3*/
                            {
                              v3 = *(_DWORD *)this->__pad_0; /*0x5399df*/
                              v12 = dword_A9FA70; /*0x5399eb*/
                              result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v3 + 16))( /*0x5399ef*/
                                         this,
                                         &v12,
                                         4,
                                         0);
                              if ( result >= 0 ) /*0x5399f4*/
                              {
                                v4 = 0; /*0x5399fe*/
                                if ( v12 <= 0 ) /*0x539a02*/
                                {
LABEL_19:
                                  v6 = *(_DWORD *)this->__pad_0; /*0x539a31*/
                                  v12 = dword_A9F9E0; /*0x539a42*/
                                  result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v6 + 16))( /*0x539a46*/
                                             this,
                                             &v12,
                                             4,
                                             0);
                                  if ( result >= 0 ) /*0x539a4b*/
                                  {
                                    v7 = 0; /*0x539a55*/
                                    if ( v12 <= 0 ) /*0x539a59*/
                                    {
LABEL_23:
                                      v9 = *(_DWORD *)this->__pad_0; /*0x539a83*/
                                      v12 = dword_A9FA28; /*0x539a95*/
                                      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v9 + 16))( /*0x539a99*/
                                                 this,
                                                 &v12,
                                                 4,
                                                 0);
                                      if ( result >= 0 ) /*0x539a9e*/
                                      {
                                        for ( i = 0; i < v12; ++i ) /*0x539aa8*/
                                        {
                                          v11 = *(_DWORD *)this->__pad_0; /*0x539ab0*/
                                          v13 = *((_DWORD *)dword_A9FA1C + i); /*0x539abf*/
                                          result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v11 + 16))( /*0x539ac3*/
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
                                        v8 = *(_DWORD *)this->__pad_0; /*0x539a60*/
                                        v13 = *((_DWORD *)dword_A9F9D4 + v7); /*0x539a6f*/
                                        result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v8 + 16))( /*0x539a73*/
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
                                    v5 = *(_DWORD *)this->__pad_0; /*0x539a0a*/
                                    v13 = *((_DWORD *)dword_A9FA64 + v4); /*0x539a19*/
                                    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v5 + 16))( /*0x539a1d*/
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
int __thiscall SuperWeapon::SerializeSuperWeaponState(SuperWeapon *this)
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

  result = (*(int (__stdcall **)(SuperWeapon *, char *, int, _DWORD))(this->q030)( /*0x539af4*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x539af9*/
  {
    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b0b*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x539b10*/
    {
      result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b22*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x539b27*/
      {
        result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b39*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x539b3e*/
        {
          result = (*(int (__stdcall **)(SuperWeapon *, char *, int, _DWORD))(this->q030)( /*0x539b50*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539b55*/
          {
            result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b67*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x539b6c*/
            {
              result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b7e*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539b83*/
              {
                result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b95*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539b9a*/
                {
                  result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539bac*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539bb1*/
                  {
                    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539bc3*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539bc8*/
                    {
                      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &PsyDom_Anim); /*0x539bd8*/
                      result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539be9*/
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x539bee*/
                      {
                        result = (*(int (__stdcall **)(SuperWeapon *, __int16 *, int, _DWORD))(this->q030)( /*0x539c00*/
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x539c05*/
                        {
                          result = (*(int (__stdcall **)(SuperWeapon *, #375 **, int, _DWORD))(this->q030)( /*0x539c17*/
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x539c1c*/
                          {
                            ObjectPtr::RegisterForTracking( /*0x539c2c*/
                              (int)&SwizzleManagerClass_Instance,
                              (int *)&LightningStorm_Owner);
                            result = (*(int (__stdcall **)(SuperWeapon *, House **, int, _DWORD))(this->q030)( /*0x539c3d*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x539c42*/
                            {
                              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&PsyDom_Owner); /*0x539c52*/
                              result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539c63*/
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
                                      ObjectPtr::RegisterForTracking( /*0x539d05*/
                                        (int)&SwizzleManagerClass_Instance,
                                        (int *)dword_A9FA64 + v6++);
                                    while ( v6 < v16 ); /*0x539d0f*/
                                  }
                                  result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539d1d*/
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
                                            (int)&SwizzleManagerClass_Instance,
                                            (int *)dword_A9F9D4 + v10++);
                                        while ( v10 < v16 ); /*0x539dc9*/
                                      }
                                      v11 = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539dda*/
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
                                                (int)&SwizzleManagerClass_Instance,
                                                (int *)dword_A9FA1C + v15++);
                                            while ( v15 < v16 ); /*0x539e87*/
                                          }
                                          g_ChronoEffectState = 0; /*0x539e89*/
                                        }
                                        else
                                        {
                                          while ( 1 ) /*0x539dfd*/
                                          {
                                            v11 = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539dfd*/
                                                    this,
                                                    &v17,
                                                    4,
                                                    0);
                                            if ( v11 < 0 ) /*0x539e01*/
                                              break; /*0x539e01*/
                                            if ( dword_A9FA28 < dword_A9FA20 /*0x539e3d*/
                                              || (byte_A9FA25 || !dword_A9FA20)
                                              && dword_A9FA2C > 0
                                              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_BoltsPresent + 8))(
                                                   &LightningStorm_BoltsPresent,
                                                   dword_A9FA20 + dword_A9FA2C,
                                                   0) )
                                            {
                                              v14 = dword_A9FA28++; /*0x539e50*/
                                              *((_DWORD *)dword_A9FA1C + v14) = v17; /*0x539e5d*/
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
                                        result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539d3e*/
                                                   this,
                                                   &v17,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539d43*/
                                          break; /*0x539d43*/
                                        if ( dword_A9F9E0 < dword_A9F9D8 /*0x539d7f*/
                                          || (byte_A9F9DD || !dword_A9F9D8)
                                          && dword_A9F9E4 > 0
                                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsPresent + 8))(
                                               &LightningStorm_CloudsPresent,
                                               dword_A9F9D8 + dword_A9F9E4,
                                               0) )
                                        {
                                          v9 = dword_A9F9E0++; /*0x539d92*/
                                          *((_DWORD *)dword_A9F9D4 + v9) = v17; /*0x539d9f*/
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
                                    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539c84*/
                                               this,
                                               &v17,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539c89*/
                                      break; /*0x539c89*/
                                    if ( dword_A9FA70 < dword_A9FA68 /*0x539cc5*/
                                      || (byte_A9FA6D || !dword_A9FA68)
                                      && dword_A9FA74 > 0
                                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsManifesting
                                                                                               + 8))(
                                           &LightningStorm_CloudsManifesting,
                                           dword_A9FA68 + dword_A9FA74,
                                           0) )
                                    {
                                      v5 = dword_A9FA70++; /*0x539cd8*/
                                      *((_DWORD *)dword_A9FA64 + v5) = v17; /*0x539ce5*/
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
  LightningStorm_Active = a1; /*0x539ea0*/
}



// ==== 0x00539EB0  LightningStorm::Start  this=RandomStruct  sig=csp ====
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
  if ( a3 == dword_A9F9F8 ) /*0x539ec3*/
  {
    for ( ; !LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3); a3 = v12 ) /*0x539edd*/
    {
      v7 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_87F918); /*0x539f04*/
      LOWORD(v12) = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_87F914); /*0x539f1e*/
      HIWORD(v12) = v7; /*0x539f23*/
    }
    result = a3; /*0x539f3e*/
  }
  LightningStorm_Coords = result; /*0x539f46*/
  LightningStorm_Owner = a4; /*0x539f4b*/
  if ( !LightningStorm_Active ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = LightningStorm_Deferment; /*0x539f63*/
      if ( !LightningStorm_Deferment || LightningStorm_Deferment >= a2 ) /*0x539f6e*/
        LightningStorm_Deferment = a2; /*0x539f70*/
      LightningStorm_Duration = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      v8 = 0; /*0x539f99*/
      LightningStorm_Duration = a1; /*0x539f9b*/
      LightningStorm_StartTime = (int)dword_A8ED84; /*0x539fa3*/
      for ( LightningStorm_Active = 1; v8 < dword_A80238; ++v8 ) /*0x539fb0*/
      {
        if ( !LightningStorm_Owner /*0x539fc5*/
          || !(unsigned __int8)HouseClass::IsAlliedWith(
                                 LightningStorm_Owner,
                                 *(#375 **)&dword_A8022C->AbstractClass[4 * v8]) )
        {
          v9 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v8]; /*0x539fd3*/
          if ( !*(_BYTE *)(v9 + 501) && !dword_A8B538 ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( dword_A83D4C ) /*0x53a000*/
        *((_BYTE *)dword_A83D4C + 22393) = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( LOBYTE(dword_8871E0[1].?) ) /*0x53a014*/
      {
        v10 = 3; /*0x53a023*/
        if ( dword_A83D4C ) /*0x53a02a*/
          v10 = *((_DWORD *)dword_A83D4C + 22549); /*0x53a02c*/
        PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x53a044*/
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53a082*/
    }
  }
  return result; /*0x539f76*/
}



// ==== 0x0053A090  LightningStorm::End  this=LightningStorm  sig=ida-proto ====
char LightningStorm_End()
{
  char result; // al

  result = LightningStorm_Active; /*0x53a090*/
  if ( LightningStorm_Active ) /*0x53a097*/
    LightningStorm_TimeToEnd = 1; /*0x53a099*/
  return result; /*0x53a0a0*/
}



// ==== 0x0053A0E0  Weapon_Helper  this=-  sig=ida-proto ====
BOOL sub_53A0E0()
{
  return LightningStorm_Active || LightningStorm_Deferment > 0; /*0x53a0f4*/
}



// ==== 0x0053A100  LightningStorm::IsActive  this=ScenarioClass  sig=csp ====
int LightningStorm::IsActive()
{
  int result; // eax

  LOBYTE(result) = LightningStorm_Active; /*0x53a100*/
  return result; /*0x53a105*/
}



// ==== 0x0053A110  NukeFlash::IsActive  this=NukeFlash  sig=ida-proto ====
BOOL NukeFlash_IsActive()
{
  return NukeFlash_Status == 1; /*0x53a11e*/
}



// ==== 0x0053A120  NukeFlash::ProcessEffect  this=NukeFlash  sig=ida-proto ====
BOOL sub_53A120()
{
  return NukeFlash_Status == 2; /*0x53a12e*/
}



// ==== 0x0053A130  HouseClass::IonSensitivesShouldBeOffline  this=HouseClass  sig=ida-proto ====
char ReturnFalse()
{
  return 0; /*0x53a132*/
}



// ==== 0x0053A140  LightningStorm::Strike  this=LightningStorm  sig=csp ====
int __stdcall LightningStorm::Strike(int a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ecx
  int result; // eax
  void *v5; // esi
  void **v6; // eax
  void **v7; // esi
  int v8; // eax
  int v9[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x53a159*/
  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_8871E0->? + 156))(*(_DWORD *)dword_8871E0->?); /*0x53a165*/
  v3 = ((v1[80] & 0x100) != 0 ? dword_A9FA84 : 0)
     + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
     + dword_A9FA90 * *((char *)v1 + 283);
  result = ((__int16)a1 << 8) + 128; /*0x53a1bb*/
  v9[0] = result; /*0x53a1c8*/
  v9[1] = (SHIWORD(a1) << 8) + 128; /*0x53a1cc*/
  v9[2] = v3; /*0x53a1d0*/
  if ( result != dword_A9FA30 || (SHIWORD(a1) << 8) + 128 != qword_A9FA34 || v3 != MEMORY[0xA9FA38] ) /*0x53a1e4*/
  {
    v5 = *(void **)(dword_8871E0->? + 4 * ((unsigned int)Random::State((_DWORD *)dword_A8B230 + 134) % dword_8871E0->?)); /*0x53a213*/
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a216*/
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, v9, 0, 1, (void *)0x600, 0, 0); /*0x53a23c*/
    else
      v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (byte_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsManifesting + 8))(
           &LightningStorm_CloudsManifesting,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      v8 = dword_A9FA70++; /*0x53a285*/
      *((_DWORD *)dword_A9FA64 + v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (byte_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsPresent + 8))(
                     &LightningStorm_CloudsPresent,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (_BYTE)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((_DWORD *)dword_A9F9D4 + result) = v7; /*0x53a2ea*/
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

  v3 = Coord::To_Cell(&dword_87F7E8, &a1); /*0x53a31a*/
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  v5 = Coords[1]; /*0x53a328*/
  v6 = Coords[2]; /*0x53a32b*/
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  v7 = *(void **)(dword_8871E0->? + 4 * ((unsigned int)Random::State((_DWORD *)dword_A8B230 + 134) % dword_8871E0->?)); /*0x53a363*/
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  else
    v9 = 0; /*0x53a390*/
  if ( dword_A9FA28 < dword_A9FA20 /*0x53a3c8*/
    || (byte_A9FA25 || !dword_A9FA20)
    && dword_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_BoltsPresent + 8))(
         &LightningStorm_BoltsPresent,
         dword_A9FA2C + dword_A9FA20,
         0) )
  {
    v10 = dword_A9FA28++; /*0x53a3d5*/
    *((_DWORD *)dword_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  v27 = v3[9]; /*0x53a40f*/
  v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * dword_A9FA90 + ((v3[80] & 0x100) != 0 ? dword_A9FA84 : 0));
  v31 = ((__int16)v27 << 8) + 128; /*0x53a43d*/
  v32 = (SHIWORD(v27) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != dword_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = dword_8871E0; /*0x53a45f*/
    if ( dword_8871E0->? > 0 ) /*0x53a46c*/
    {
      v13 = Random::State((_DWORD *)dword_A8B230 + 134); /*0x53a47a*/
      StartAudioControllerAt(*(_DWORD *)(dword_8871E0->?[1] + 4 * (v13 % dword_8871E0->?)), (int)&v31, 0); /*0x53a49e*/
      v12 = dword_8871E0; /*0x53a4a3*/
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
    CreateSmokeEffectAt(Climb, HIDWORD(dword_8871E0[1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(dword_8871E0[1].?), 1, (int)LightningStorm_Owner); /*0x53a5d0*/
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
        v11 = (void **)Random::Range((_DWORD *)dword_A8B230 + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              v23 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_8871E0->ExecutePlanSound - 1); /*0x53a665*/
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(dword_8871E0->DefaultChronoSound + 4 * v23),
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
char UpdateSuperWeapons(ObjectClass *this)
{
  int i; // esi
  _DWORD *v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int j; // edi
  _DWORD *v7; // esi
  int v8; // ebp
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int k; // esi
  _DWORD *v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ebp
  int v21; // ebp
  __int16 v22; // ax
  __int16 v23; // ax
  int v24; // edi
  _DWORD *v25; // esi
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // et2
  int v31; // esi
  wchar_t *StringCSF; // eax
  ObjectClass *v34; // [esp+0h] [ebp-28h]
  ObjectClass *v35; // [esp+0h] [ebp-28h]
  char v36; // [esp+13h] [ebp-15h]
  __int16 v37[2]; // [esp+14h] [ebp-14h] BYREF
  int v38; // [esp+18h] [ebp-10h]
  _BYTE v39[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( NukeFlash_Status == 1 ) /*0x53a6cf*/
  {
    if ( NukeFlash_Duration != -1 && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8EB00.?[416] ) /*0x53a6ea*/
    {
      NukeFlash_Status = 2; /*0x53a6ec*/
      NukeFlash_Duration = 15; /*0x53a6f6*/
      NukeFlash_StartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x53a711*/
    }
  }
  else if ( NukeFlash_Status == 2 /*0x53a736*/
         && NukeFlash_Duration != -1
         && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8EB00.?[416] )
  {
    NukeFlash_Status = 0; /*0x53a738*/
  }
  UpdatePsyDom(v34); /*0x53a742*/
  UpdateChronosphereEffect(v35); /*0x53a747*/
  if ( dword_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = dword_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      v2 = (_DWORD *)*((_DWORD *)dword_A9FA1C + i); /*0x53a760*/
      v3 = v2[43]; /*0x53a765*/
      v4 = (*(int (__thiscall **)(_DWORD *))(*v2 + 136))(v2); /*0x53a76b*/
      if ( v3 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 156))(v4) + 6) / 2 && i < dword_A9FA28 ) /*0x53a790*/
      {
        v5 = i; /*0x53a793*/
        if ( i < --dword_A9FA28 ) /*0x53a79d*/
        {
          do /*0x53a7b5*/
          {
            ++v5; /*0x53a7a5*/
            *((_DWORD *)dword_A9FA1C + v5 - 1) = *((_DWORD *)dword_A9FA1C + v5); /*0x53a7a9*/
          }
          while ( v5 < dword_A9FA28 ); /*0x53a7b5*/
        }
      }
    }
  }
  for ( j = dword_A9FA70 - 1; j >= 0; --j ) /*0x53a7c4*/
  {
    v7 = (_DWORD *)*((_DWORD *)dword_A9FA64 + j); /*0x53a7d0*/
    v8 = v7[43]; /*0x53a7d7*/
    v9 = (*(int (__thiscall **)(_DWORD *))(*v7 + 136))(v7); /*0x53a7dd*/
    if ( v8 > *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 156))(v9) + 6) / 2 ) /*0x53a7f8*/
    {
      v10 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v7 + 72))(v7, v39); /*0x53a803*/
      LightningStorm::Strike2(*v10, v10[1], v10[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        v11 = j; /*0x53a82b*/
        if ( j < --dword_A9FA70 ) /*0x53a835*/
        {
          do /*0x53a84d*/
          {
            ++v11; /*0x53a83d*/
            *((_DWORD *)dword_A9FA64 + v11 - 1) = *((_DWORD *)dword_A9FA64 + v11); /*0x53a841*/
          }
          while ( v11 < dword_A9FA70 ); /*0x53a84d*/
        }
      }
    }
  }
  if ( dword_A9F9E0 <= 0 ) /*0x53a85e*/
  {
    if ( LightningStorm_TimeToEnd ) /*0x53a8cd*/
    {
      if ( LightningStorm_Active ) /*0x53a8d6*/
      {
        LightningStorm_Active = 0; /*0x53a8dd*/
        LightningStorm_Owner = 0; /*0x53a8e4*/
        LightningStorm_Coords = dword_A9F9F8; /*0x53a8ee*/
        ScenarioClass::UpdateLighting(); /*0x53a8f3*/
      }
      LightningStorm_TimeToEnd = 0; /*0x53a8f8*/
    }
  }
  else
  {
    for ( k = dword_A9F9E0 - 1; k >= 0; --k ) /*0x53a863*/
    {
      v13 = (_DWORD *)*((_DWORD *)dword_A9F9D4 + k); /*0x53a86e*/
      v14 = v13[43]; /*0x53a873*/
      v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 136))(v13); /*0x53a879*/
      if ( v14 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 156))(v15) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        v16 = k; /*0x53a89d*/
        if ( k < --dword_A9F9E0 ) /*0x53a8a7*/
        {
          do /*0x53a8bf*/
          {
            ++v16; /*0x53a8af*/
            *((_DWORD *)dword_A9F9D4 + v16 - 1) = *((_DWORD *)dword_A9F9D4 + v16); /*0x53a8b3*/
          }
          while ( v16 < dword_A9F9E0 ); /*0x53a8bf*/
        }
      }
    }
  }
  if ( !LightningStorm_Active || LightningStorm_TimeToEnd ) /*0x53a913*/
  {
    LOBYTE(v17) = LightningStorm_Deferment; /*0x53aa9f*/
    if ( LightningStorm_Deferment > 0 ) /*0x53aaa6*/
    {
      v29 = LightningStorm_Deferment - 1; /*0x53aaac*/
      LightningStorm_Deferment = v29; /*0x53aaad*/
      if ( v29 ) /*0x53aab2*/
      {
        v30 = v29 % 225; /*0x53aadd*/
        v17 = v29 / 225; /*0x53aadd*/
        if ( !v30 ) /*0x53aae1*/
        {
          LOBYTE(v17) = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6064); /*0x53aae9*/
          if ( (_BYTE)v17 ) /*0x53aaf1*/
          {
            v31 = 3; /*0x53aaf8*/
            if ( dword_A83D4C ) /*0x53aaff*/
              v31 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x53ab01*/
            VoxClass::FindAndPlay(&stru_828080, -1); /*0x53ab11*/
            StringCSF = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            LOBYTE(v17) = MessageListClass::AddMessage( /*0x53ab40*/
                            (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                            0,
                            0,
                            StringCSF,
                            v31,
                            70,
                            150,
                            0);
          }
        }
      }
      else
      {
        LOBYTE(v17) = LightningStorm::Start(LightningStorm_Duration, 0, LightningStorm_Coords, LightningStorm_Owner); /*0x53aaca*/
      }
    }
  }
  else
  {
    LOBYTE(v17) = LightningStorm_Duration; /*0x53a919*/
    v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a91e*/
    if ( LightningStorm_Duration == -1 /*0x53a933*/
      || LightningStorm_Duration + LightningStorm_StartTime >= *(int *)&stru_A8EB00.?[416] )
    {
      v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a944*/
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6048)) ) /*0x53a94d*/
      {
        LightningStorm::Strike(LightningStorm_Coords); /*0x53a95e*/
        v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a963*/
        v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a969*/
      }
      v17 = v18 / *(_DWORD *)(v19 + 6052); /*0x53a972*/
      if ( !(v18 % *(_DWORD *)(v19 + 6052)) ) /*0x53a972*/
      {
        v20 = *(_DWORD *)(v19 + 6056); /*0x53a980*/
        v38 = 3; /*0x53a986*/
        v21 = v20 >> 1; /*0x53a98e*/
        while ( 1 ) /*0x53a9a7*/
        {
          *(_DWORD *)v37 = LightningStorm_Coords; /*0x53a9a7*/
          v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9ab*/
          v37[0] += v22; /*0x53a9b6*/
          v23 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9c3*/
          v24 = 0; /*0x53a9c8*/
          v37[1] += v23; /*0x53a9ca*/
          v36 = 0; /*0x53a9d6*/
          if ( dword_A9F9E0 > 0 ) /*0x53a9db*/
          {
            while ( 1 ) /*0x53a9ef*/
            {
              v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)dword_A9F9D4 + v24) + 72))( /*0x53a9ef*/
                                *((_DWORD *)dword_A9F9D4 + v24),
                                v39);
              v26 = (__int16)(*v25 / 256); /*0x53aa0d*/
              v27 = v37[0] - v26; /*0x53aa18*/
              if ( v27 < 0 ) /*0x53aa1a*/
                v27 = v26 - v37[0]; /*0x53aa1c*/
              v28 = v37[1] - (__int16)(v25[1] / 256); /*0x53aa26*/
              if ( v28 < 0 ) /*0x53aa28*/
                v28 = (__int16)(v25[1] / 256) - v37[1]; /*0x53aa2a*/
              if ( v27 + v28 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6060) ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v24 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v36 = 1; /*0x53aa48*/
          }
LABEL_52:
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v37) && !v36 ) /*0x53aa66*/
            break; /*0x53aa66*/
          LOBYTE(v17) = --v38; /*0x53aa6c*/
          if ( v38 <= 0 ) /*0x53aa73*/
            return v17; /*0x53aa73*/
        }
        LOBYTE(v17) = v38; /*0x53aa81*/
        if ( v38 > 0 ) /*0x53aa87*/
          LOBYTE(v17) = LightningStorm::Strike(*(int *)v37); /*0x53aa92*/
      }
    }
    else
    {
      LightningStorm_TimeToEnd = 1; /*0x53a935*/
    }
  }
  return v17; /*0x53a93c*/
}



// ==== 0x0053AB50  Game_Load_Load_53AB50  this=-  sig=ida-proto ====
#375 *sub_53AB50()
{
  #375 *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = dword_A83D4C; /*0x53ab55*/
  *((_BYTE *)dword_A83D4C + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}



// ==== 0x0053AB70  Entity_Process  this=-  sig=ida-proto ====
int sub_53AB70()
{
  char *v0; // edx
  int v2; // [esp+Ch] [ebp-8h]

  v0 = (char *)dword_A8B230 + 4680; /*0x53ab7b*/
  NukeFlash_Status = 1; /*0x53ab81*/
  NukeFlash_Duration = 30; /*0x53ab8b*/
  NukeFlash_StartTime = (int)dword_A8ED84; /*0x53ab95*/
  *((_DWORD *)dword_A8B230 + 1170) = dword_A8ED84; /*0x53ab9a*/
  *((_DWORD *)v0 + 1) = v2; /*0x53aba8*/
  *((_DWORD *)v0 + 2) = 1; /*0x53abad*/
  *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((_DWORD *)dword_A8B230 + 3417) / 100,
    1000 * *((_DWORD *)dword_A8B230 + 3418) / 100,
    1000 * *((_DWORD *)dword_A8B230 + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53ac4a*/
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
int __fastcall Surface_UpdateAnimations(int a1, int a2, int a3, int a4)
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

  for ( i = 0; i < dword_87F6A8; ++i ) /*0x53ad18*/
    (*(void (__thiscall **)(_DWORD, int, int, int, int))(**((_DWORD **)dword_87F69C + i) + 4))( /*0x53ad2c*/
      *((_DWORD *)dword_87F69C + i),
      a1,
      a2,
      a3,
      a4);
  for ( j = 0; j < dword_B054E0; ++j ) /*0x53ad42*/
  {
    v9 = *((_DWORD *)dword_B054D4 + j); /*0x53ad4a*/
    if ( *(int *)(v9 + 784) > 1 ) /*0x53ad54*/
      (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(v9 + 780) + 4))( /*0x53ad66*/
        *(_DWORD *)(v9 + 780),
        a1,
        a2,
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
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v11 + 4))(v11, a1, a2, a3, a4); /*0x53adbb*/
        ++v10; /*0x53adbe*/
      }
      while ( v10 < v13 ); /*0x53adc3*/
    }
  }
  MapClass::UpdateLightingPostProcess(&dword_87F7E8); /*0x53addb*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53adec*/
}



// ==== 0x0053AE00  Weapon_Get  this=-  sig=ida-proto ====
int sub_53AE00()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(unk_82809C, 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  v1 = 3; /*0x53ae1c*/
  if ( dword_A83D4C ) /*0x53ae23*/
    v1 = *((_DWORD *)dword_A83D4C + 22549); /*0x53ae25*/
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}



// ==== 0x0053AE50  SuperClass::LaunchPsychicDominator  this=SuperClass  sig=csp ====
RulesClass *__thiscall SuperClass::LaunchPsychicDominator(SuperClass *this, int a2)
{
  RulesClass *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  AnimClass *v6; // eax
  AbstractClass *v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = *(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]; /*0x53ae50*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 764) /*0x53ae66*/
    && *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 768) )
  {
    PsyDom_Owner = (House *)this; /*0x53ae79*/
    *(_DWORD *)&PsyDom_Coords = a2; /*0x53ae7f*/
    v3 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 764); /*0x53ae85*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53ae95*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    v7 = dword_A8B230 + 130; /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x53af1b*/
    v7->ptr_4 = (void *)v9[1]; /*0x53af21*/
    v7->ptr_8 = (void *)1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/
}



// ==== 0x0053AF40  ObjectClass::UpdatePsyDom  this=ObjectClass  sig=csp ====
void UpdatePsyDom(ObjectClass *this)
{
  int v1; // esi
  int v2; // esi
  PsyDom *v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  switch ( PsyDom_Status ) /*0x53af50*/
  {
    case 1: /*0x53af50*/
      PsyDom_Status = 2; /*0x53af57*/
      break; /*0x53af63*/
    case 2: /*0x53af50*/
      v4 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53af6f*/
      if ( (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 772) * 0.01 <= (double)v4 /*0x53afaa*/
                                                                                         / (double)*(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) + 6) )
      {
        PsyDom_Status = 3; /*0x53afb0*/
        PsyDom::Fire(v3); /*0x53afba*/
      }
      break; /*0x53afc1*/
    case 3: /*0x53af50*/
      v1 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53afcd*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) /*0x53afe4*/
                      + 6)
         - v1 <= 10 )
        PsyDom_Status = 4; /*0x53afe6*/
      break; /*0x53aff2*/
    case 4: /*0x53af50*/
      v2 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53affe*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) /*0x53b015*/
                      + 6)
         - v2 <= 1 )
      {
        PsyDom_Status = 5; /*0x53b01d*/
        *(_DWORD *)&PsyDom_Coords = dword_A9F9F8; /*0x53b027*/
        PsyDom_Anim = 0; /*0x53b02d*/
        ScenarioClass::UpdateLighting(); /*0x53b037*/
      }
      break; /*0x53b03e*/
    case 5: /*0x53af50*/
      if ( dword_A8B230[378].ptr_8 == dword_A8B230[378].ptr_4 ) /*0x53b052*/
        PsyDom_Status = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }
}



// ==== 0x0053B080  PsyDom::Fire  this=PsyDom  sig=csp ====
void PsyDom::Fire(PsyDom *this)
{
  ActionQueue *v1; // esi
  void *v2; // eax
  int *v3; // eax
  _DWORD *v4; // eax
  void *v5; // esi
  void *v6; // eax
  int *v7; // eax
  AnimClass *v8; // eax
  int v9; // eax
  int v10; // esi
  char *v11; // ebp
  int v12; // eax
  Object *v13; // eax
  int i; // esi
  int v15; // edx
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  AnimClass *v21; // eax
  BuildingClass *v22; // eax
  int v23; // eax
  int v24; // esi
  int j; // esi
  _DWORD *v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+8h] [ebp-5Ch]
  _DWORD *v28; // [esp+Ch] [ebp-58h]
  int v29; // [esp+14h] [ebp-50h]
  int v30; // [esp+18h] [ebp-4Ch]
  __int16 v31[2]; // [esp+1Ch] [ebp-48h] BYREF
  _DWORD v32[2]; // [esp+20h] [ebp-44h] BYREF
  int v33[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v34[3]; // [esp+34h] [ebp-30h] BYREF
  char v35[12]; // [esp+40h] [ebp-24h] BYREF
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  int v39; // [esp+58h] [ebp-Ch]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v1 = (ActionQueue *)__2_YAPAXI_Z(0x14u); /*0x53b08e*/
  if ( v1 ) /*0x53b097*/
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0a3*/
    v3 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v2 + 72))(v2, v34); /*0x53b0b1*/
    v4 = ActionQueue::PushEntry(v1, *v3, v3[1], v3[2]); /*0x53b0cb*/
  }
  else
  {
    v4 = 0; /*0x53b0d2*/
  }
  v4[4] = 1; /*0x53b0d4*/
  v5 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 768); /*0x53b0e6*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0f1*/
  v7 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v6 + 72))(v6, v34); /*0x53b0ff*/
  v33[0] = *v7; /*0x53b104*/
  v33[1] = v7[1]; /*0x53b110*/
  v33[2] = v7[2]; /*0x53b117*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b11b*/
  if ( v8 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v8, v5, v33, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v33,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 780),
    0,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 760),
    1,
    (int)LightningStorm_Owner);
  v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 776); /*0x53b176*/
  if ( v9 >= 10 ) /*0x53b17f*/
    v9 = 10; /*0x53b181*/
  v10 = dword_7ED3D0[v9]; /*0x53b186*/
  EventClass::resetEvent((EventClass *)&v36, 0, 0); /*0x53b193*/
  v36 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x53b19a*/
  v41 = 10; /*0x53b1a2*/
  v40 = 0; /*0x53b1aa*/
  if ( v10 > 0 )
  {
    v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x53b1b4*/
    v30 = v10; /*0x53b1b9*/
    do
    {
      v12 = *(_DWORD *)v11; /*0x53b1bd*/
      v31[1] = HIWORD(*(_DWORD *)v11); /*0x53b1c6*/
      HIWORD(v29) = *(&PsyDom_Coords + 1) + v31[1]; /*0x53b1dd*/
      LOWORD(v29) = PsyDom_Coords + v12; /*0x53b1e2*/
      *(_DWORD *)v31 = v29; /*0x53b1f7*/
      v32[0] = 0; /*0x53b1fb*/
      v32[1] = 0; /*0x53b1ff*/
      v13 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x53b203*/
      for ( i = Object::FindClosestObjectCell(v13, v32, 0, 0); i; i = (*(_BYTE *)(v24 + 20) & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3381)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 352))(i)
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3434)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 84))(i) )
        {
          if ( *(_DWORD *)(i + 704) ) /*0x53b276*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)i, 0, (int)v11, v26, v27, v28); /*0x53b287*/
          (*(void (__thiscall **)(int, House *, int))(*(_DWORD *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
          v15 = *(_DWORD *)i; /*0x53b29e*/
          *(_BYTE *)(i + 708) = 1; /*0x53b2a2*/
          v16 = *(_DWORD *)((*(int (__thiscall **)(int))(v15 + 132))(i) + 1548); /*0x53b2af*/
          v17 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)i + 72))(i, v35); /*0x53b2be*/
          v18 = *v17; /*0x53b2c1*/
          v19 = v17[1]; /*0x53b2c3*/
          v20 = v17[2]; /*0x53b2c6*/
          v34[0] = v18; /*0x53b2d0*/
          v34[1] = v19; /*0x53b2d4*/
          v34[2] = v16 + v20; /*0x53b2d8*/
          v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b2dc*/
          if ( v21 ) /*0x53b2e6*/
            v22 = (BuildingClass *)AnimClass::ctor( /*0x53b306*/
                                     v21,
                                     *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 804),
                                     v34,
                                     0,
                                     1,
                                     (void *)0x600,
                                     0,
                                     0);
          else
            v22 = 0; /*0x53b30d*/
          *(_DWORD *)(i + 712) = v22; /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret(v22, (_BYTE *)i); /*0x53b31c*/
          if ( v40 < v38 /*0x53b34b*/
            || (BYTE1(v39) || !v38)
            && v41 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0) )
          {
            v23 = v40++; /*0x53b356*/
            *((_DWORD *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = *(_DWORD *)(i + 48); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      v11 += 4; /*0x53b389*/
      --v30; /*0x53b38d*/
    }
    while ( v30 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(PsyDom_Owner) ) /*0x53b39d*/
  {
    for ( j = v40 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)Block + j) + 488))(*((_DWORD *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v36 = &VectorClass<TechnoClass *>::`vftable'; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( BYTE1(v39) ) /*0x53b3da*/
      __3_YAXPAX_Z(Block); /*0x53b3dd*/
  }
}



// ==== 0x0053B3F0  nullsub_152  this=-  sig=ida-proto ====
void nullsub_152()
{
  ; /*0x53b3f0*/
}



// ==== 0x0053B400  PsyDom::IsActive  this=PsyDom  sig=csp ====
int PsyDom::IsActive()
{
  int result; // eax

  result = PsyDom_Status; /*0x53b400*/
  LOBYTE(result) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/
}



// ==== 0x0053B410  Weapon_Get_53B410  this=-  sig=ida-proto ====
int sub_53B410()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgDominatorac, 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  v1 = 3; /*0x53b42c*/
  if ( dword_A83D4C ) /*0x53b433*/
    v1 = *((_DWORD *)dword_A83D4C + 22549); /*0x53b435*/
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}



// ==== 0x0053B460  globalHelper_03B460  this=RandomStruct  sig=ida-proto ====
void __usercall globalHelper_03B460(int a1@<ecx>, Scenario *a2@<esi>)
{
  char *v3; // esi
  int v4; // eax
  char *v5; // eax
  int v6; // [esp-10h] [ebp-14h]

  if ( a1 > 0 ) /*0x53b465*/
  {
    if ( g_ChronoEffectState ) /*0x53b473*/
    {
      (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b479*/
      g_ChronoEffectState = 0; /*0x53b47b*/
    }
    v3 = (char *)__2_YAPAXI_Z(0x24u); /*0x53b48d*/
    if ( v3 ) /*0x53b494*/
    {
      v6 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 128))(DSurface_Composite); /*0x53b4ae*/
      v4 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 124))(DSurface_Composite); /*0x53b4b1*/
      v5 = DSurface::Construct(v3, v4, v6, 1, 0); /*0x53b4b7*/
    }
    else
    {
      v5 = 0; /*0x53b4be*/
    }
    g_ChronoEffectState = (int)v5; /*0x53b4c8*/
    (*(void (__thiscall **)(char *, AudioStream *, _DWORD, int))(*(_DWORD *)v5 + 4))(v5, DSurface_Composite, 0, 1); /*0x53b4d4*/
    flt_A9FAA0 = 0.0; /*0x53b4d7*/
    flt_A9FAA4 = 0.0; /*0x53b4e1*/
    ChronoScreenEffect_Duration = a1; /*0x53b4eb*/
    dword_A9FAA8 = a1; /*0x53b4f1*/
    ChronoScreenEffect_Status = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(&stru_A9F9B8); /*0x53b512*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 644), 0x2000, 1.0, (int)&stru_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    byte_A9FAD1 = BYTE2(dword_A8B230[381].ptr_C); /*0x53b549*/
    Scenario::ClearScreen(a2); /*0x53b54f*/
    Map_Process_753570(); /*0x53b554*/
  }
}



// ==== 0x0053B560  ObjectClass::UpdateChronosphereEffect  this=ObjectClass  sig=csp ====
void UpdateChronosphereEffect()
{
  switch ( ChronoScreenEffect_Status ) /*0x53b56e*/
  {
    case 1: /*0x53b56e*/
      RenderChronosphereScreenEffect(0); /*0x53b577*/
      if ( !--ChronoScreenEffect_Duration ) /*0x53b587*/
      {
        ChronoScreenEffect_Status = 2; /*0x53b58d*/
        ChronoScreenEffect_Duration = 45; /*0x53b597*/
      }
      break; /*0x53b5a1*/
    case 2: /*0x53b56e*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x53b5fb*/
        DSurface_Composite,
        &DSurface_ViewBounds,
        &DSurface_ViewBounds,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (255 >> g_BitMask_Blue << g_BitMask_Green)
      | (255 >> g_BitMask_Red << g_BitShift_Blue));
      if ( --ChronoScreenEffect_Duration == 1 ) /*0x53b60e*/
        SetScenarioClassTimer(0); /*0x53b612*/
      if ( !ChronoScreenEffect_Duration ) /*0x53b61e*/
      {
        MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x53b62b*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_ChronoEffectState + 24))(g_ChronoEffectState, 0); /*0x53b63a*/
        dword_A9FAAC = DSurface_Composite; /*0x53b649*/
        DSurface_Composite = g_ChronoEffectState; /*0x53b654*/
        ChronoScreenEffect_Status = 0; /*0x53b65a*/
        byte_A9FA94 = 1; /*0x53b664*/
        TacticalMap::Redraw(&MapClass_Instance); /*0x53b66b*/
        ChronoScreenEffect_Duration = dword_A9FAA8; /*0x53b67b*/
        byte_A9FA94 = 0; /*0x53b683*/
        DSurface_Composite = dword_A9FAAC; /*0x53b68a*/
        ChronoScreenEffect_Status = 3; /*0x53b68f*/
        SetVocClassEnabled(1); /*0x53b699*/
        Mixer::ReleaseChannel((int **)&dword_A9F9B8); /*0x53b6a3*/
        PlayVocClass(g_RulesClass_Instance->?[0], 0x2000, 1.0, (int)&dword_A9F9B8); /*0x53b6c2*/
        SetVocClassEnabled(0); /*0x53b6c9*/
      }
      break; /*0x53b6c9*/
    case 3: /*0x53b56e*/
      RenderChronosphereScreenEffect(1); /*0x53b6d0*/
      if ( !--ChronoScreenEffect_Duration ) /*0x53b6e0*/
      {
        ScenarioClass::ProcessIntroTimer(); /*0x53b6e6*/
        Mixer::ReleaseChannel((int **)&dword_A9F9B8); /*0x53b6f0*/
        SetAudioSource((int)&dword_A9F9B8, 0, 0); /*0x53b6fe*/
        AudioFileClass::Release(&dword_A9F9B8); /*0x53b708*/
        SetVocClassEnabled(1); /*0x53b70f*/
        ChronoScreenEffect::DecrementCounter(); /*0x53b714*/
        if ( !byte_A9FAD1 ) /*0x53b720*/
          UpdateMouse(); /*0x53b722*/
        ChronoScreenEffect_Status = 0; /*0x53b732*/
        (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)DSurface_Composite + 4))( /*0x53b743*/
          DSurface_Composite,
          g_ChronoEffectState,
          0,
          1);
        if ( g_ChronoEffectState ) /*0x53b74e*/
          (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b754*/
        g_ChronoEffectState = 0; /*0x53b75d*/
        MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x53b767*/
      }
      break; /*0x53b767*/
    default:
      return;
  }
}



// ==== 0x0053B780  ObjectClass::ApplyChronoScreenColorShift  this=ObjectClass  sig=csp ====
int __thiscall ApplyChronoScreenColorShift(ObjectClass *this)
{
  int result; // eax
  ObjectClass *v2; // esi
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

  result = ChronoScreenEffect_Status; /*0x53b783*/
  v2 = this; /*0x53b789*/
  if ( ChronoScreenEffect_Status == 3 ) /*0x53b792*/
  {
    v15 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 31))(this); /*0x53b7a6*/
    v3 = (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 32))(v2) - 32; /*0x53b7cc*/
    v4 = ((*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 29))(v2) - 2 * v15) / 2; /*0x53b7d0*/
    v18 = v4; /*0x53b7d6*/
    v5 = (*((int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))v2->AbstractClass + 23))(v2, 0, 0); /*0x53b7e3*/
    v16 = 255 * ChronoScreenEffect_Duration / dword_A9FAA8; /*0x53b7f3*/
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
    return (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 24))(v2); /*0x53babb*/
  }
  return result; /*0x53b8ef*/
}



// ==== 0x0053BAD0  ChronoScreen::IsActive  this=ChronoScreen  sig=csp ====
int ChronoScreen::IsActive()
{
  return ChronoScreenEffect_Status != 0; /*0x53badd*/
}



// ==== 0x0053BAE0  UI_Helper  this=-  sig=ida-proto ====
BOOL sub_53BAE0()
{
  return ChronoScreenEffect_Status != 0; /*0x53baed*/
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

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 124))(g_ChronoEffectState); /*0x53bbbd*/
  v54 = v1; /*0x53bbbf*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 128))(g_ChronoEffectState) - 32; /*0x53bbda*/
  v48 = v2; /*0x53bbdc*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 112))(g_ChronoEffectState); /*0x53bbe8*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 116))(g_ChronoEffectState); /*0x53bbec*/
  v50 = v4 / v3; /*0x53bbf8*/
  v47 = ((*(int (__fastcall **)(int, int))(*(_DWORD *)DSurface_Composite + 116))(DSurface_Composite, v4 % v3) - v1 * v3) /*0x53bc15*/
      / v3;
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Composite + 92))(DSurface_Composite, 0, 0); /*0x53bc24*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_ChronoEffectState + 92))(g_ChronoEffectState, 0, 0); /*0x53bc2f*/
  v49 = v6; /*0x53bc34*/
  if ( v5 && v6 ) /*0x53bc3f*/
  {
    v7 = 0.0; /*0x53bc45*/
    flt_A9FAA4 = 0.0; /*0x53bc54*/
    v8 = 0.0; /*0x53bc5a*/
    flt_A9FAA0 = 0.0; /*0x53bc62*/
    if ( a1 ) /*0x53bc68*/
      v9 = ChronoScreenEffect_Duration; /*0x53bc75*/
    else
      v9 = dword_A9FAA8 - ChronoScreenEffect_Duration; /*0x53bc71*/
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
      flt_A9FAA0 = v8; /*0x53bc94*/
      flt_A9FAA4 = v7; /*0x53bc9a*/
    }
    v51 = 255 * v9 / dword_A9FAA8; /*0x53bcaa*/
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
                v42 = v14 * v14 * flt_A9FAA0; /*0x53bd53*/
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
              v38 = v21 * v21 * flt_A9FAA0; /*0x53bf41*/
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
  (*(void (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 96))(g_ChronoEffectState); /*0x53c07e*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 96))(DSurface_Composite); /*0x53c08c*/
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
          v23 = flt_A9FAA0 * v10 * v10; /*0x53c143*/
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
  if ( NukeFlash_Status == 1 || ChronoScreenEffect_Status ) /*0x53c297*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3416); /*0x53c3be*/
    return UpdateSurfaceAnimations( /*0x53c43a*/
             1000 * *((_DWORD *)dword_A8B230 + 3417) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3418) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3419) / 100,
             1);
  }
  else if ( LightningStorm_Active ) /*0x53c2a4*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3410); /*0x53c2b3*/
    return UpdateSurfaceAnimations( /*0x53c30e*/
             1000 * *((_DWORD *)dword_A8B230 + 3411) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3412) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3413) / 100,
             1);
  }
  else if ( !PsyDom_Status || PsyDom_Status == 5 ) /*0x53c31f*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3402); /*0x53c3a0*/
    return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53c3a9*/
  }
  else
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3423); /*0x53c32e*/
    return UpdateSurfaceAnimations( /*0x53c389*/
             1000 * *((_DWORD *)dword_A8B230 + 3424) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3425) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3426) / 100,
             1);
  }
}



// ==== 0x0053C450  TechnoClass::CanBePermaMC  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::CanBePermaMC(TechnoClass *this)
{
  if ( !this ) /*0x53c455*/
    return 0; /*0x53c457*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 ) /*0x53c465*/
    return 0; /*0x53c467*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3381) ) /*0x53c475*/
    return 0; /*0x53c47f*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 88))(this) ) /*0x53c487*/
    return 0; /*0x53c491*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3434) ) /*0x53c49f*/
    return 0; /*0x53c4a9*/
  return (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this) == 0; /*0x53c459*/
}



// ==== 0x0053C4C0  _DynamicVectorClass_PBVAnimClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall DeleteCommandClass_28::ClearBuffer(_DynamicVectorClass_PBVAnimClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x53c4c6*/
  this->m_10 = 0; /*0x53c4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x53c4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x53c4d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c4de*/
  }
  BYTE1(this->m_C) = 0; /*0x53c4e1*/
  this->m_8 = 0; /*0x53c4e4*/
}



// ==== 0x0053C4F0  _DynamicVectorClass_PBVAnimClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28::PointerToIndex(_DynamicVectorClass_PBVAnimClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53c4f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53c505*/
  else
    return 0; /*0x53c4f7*/
}



// ==== 0x0053C510  _VectorClass_PBVAnimClass::Seek  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28::Seek(_VectorClass_PBVAnimClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53c51a*/
}



// ==== 0x0053C520  _VectorClass_PBVAnimClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28::AddRef(_VectorClass_PBVAnimClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x53c522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53c52d*/
  {
    v3 = 0; /*0x53c52f*/
    if ( m_8 <= 0 ) /*0x53c533*/
      return 1; /*0x53c553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x53c535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53c53b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53c544*/
    {
      ++v3; /*0x53c546*/
      ++v4; /*0x53c547*/
      if ( v3 >= m_8 ) /*0x53c54c*/
        return 1; /*0x53c54c*/
    }
  }
  return 0; /*0x53c54e*/
}



// ==== 0x0053C560  _VectorClass_PBVAnimClass::Release  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28::Release(_VectorClass_PBVAnimClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53c56c*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c576*/
    if ( a3 ) /*0x53c57c*/
      v4 = a3; /*0x53c592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53c58e*/
    LOBYTE(this->m_C) = 1; /*0x53c596*/
    if ( v4 ) /*0x53c59a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x53c5a5*/
      {
        m_8 = this->m_8; /*0x53c5ac*/
        if ( a2 < m_8 ) /*0x53c5b1*/
          m_8 = a2; /*0x53c5b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53c5b9*/
          ++i; /*0x53c5be*/
        if ( BYTE1(this->m_C) ) /*0x53c5cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c5d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x53c5de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x53c5e7*/
      this->m_8 = a2; /*0x53c5ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x53c5f2*/
      return 1; /*0x53c5f8*/
    }
    else
    {
      return 0; /*0x53c59f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAnimClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53c602*/
    return 1; /*0x53c608*/
  }
}



// ==== 0x0053C610  _VectorClass_PBVAnimClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall DeleteCommandClass_28::ddtor(_VectorClass_PBVAnimClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53c61d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c62b*/
  }
  BYTE1(this->m_C) = 0; /*0x53c62e*/
  this->m_8 = 0; /*0x53c631*/
}



// ==== 0x0053C640  _VectorClass_PBVAnimClass::Read  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28::Read(_VectorClass_PBVAnimClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x53c640*/
    return 0; /*0x53c648*/
  m_8 = this->m_8; /*0x53c64e*/
  result = 0; /*0x53c651*/
  if ( m_8 <= 0 ) /*0x53c655*/
    return -1; /*0x53c66c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c65b*/
  {
    if ( ++result >= m_8 ) /*0x53c66a*/
      return -1; /*0x53c66a*/
  }
  return result; /*0x53c64a*/
}



// ==== 0x0053C680  _VectorClass_PBVAnimClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28::Write(_VectorClass_PBVAnimClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53c680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53c695*/
  else
    return 0; /*0x53c687*/
}



// ==== 0x0053C6A0  _DynamicVectorClass_PBVAnimClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DeleteCommandClass_28::SetCapacity(_DynamicVectorClass_PBVAnimClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53c6ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c6b2*/
    if ( a3 ) /*0x53c6b8*/
      v4 = a3; /*0x53c6ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53c6ca*/
    LOBYTE(this->m_C) = 1; /*0x53c6d2*/
    if ( !v4 ) /*0x53c6d6*/
      return 0; /*0x53c74a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x53c6d8*/
    {
      m_8 = this->m_8; /*0x53c6df*/
      if ( a2 < m_8 ) /*0x53c6e4*/
        m_8 = a2; /*0x53c6e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53c6ec*/
        ++i; /*0x53c6f1*/
      if ( BYTE1(this->m_C) ) /*0x53c6fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c709*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x53c711*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x53c71a*/
    this->m_8 = a2; /*0x53c722*/
    BYTE1(this->m_C) = a3 == 0; /*0x53c725*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAnimClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53c72e*/
  }
  v7 = this->m_8; /*0x53c731*/
  if ( v7 < this->m_10 ) /*0x53c739*/
    this->m_10 = v7; /*0x53c73b*/
  return 1; /*0x53c73e*/
}



// ==== 0x0053C750  _DynamicVectorClass_PBVAnimClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall DeleteCommandClass_28::FindItem(_DynamicVectorClass_PBVAnimClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x53c750*/
  result = 0; /*0x53c753*/
  if ( m_10 <= 0 ) /*0x53c758*/
    return -1; /*0x53c76f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c75e*/
  {
    if ( ++result >= m_10 ) /*0x53c76d*/
      return -1; /*0x53c76d*/
  }
  return result; /*0x53c772*/
}



// ==== 0x0053C780  _VectorClass_PBVAnimClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall DeleteCommandClass_28::QueryInterface(_VectorClass_PBVAnimClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53c783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimClass const *>::`vftable'; /*0x53c786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53c790*/
  {
    __3_YAXPAX_Z(v3); /*0x53c798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c7a0*/
  }
  BYTE1(this->m_C) = 0; /*0x53c7ab*/
  this->m_8 = 0; /*0x53c7b1*/
  if ( (a2 & 1) != 0 ) /*0x53c7b8*/
    __3_YAXPAX_Z(this); /*0x53c7bb*/
  return this->__pad_0; /*0x53c7c5*/
}



// ==== 0x0053C7D0  _DynamicVectorClass_PBVAnimClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DeleteCommandClass_28::Constructor(_DynamicVectorClass_PBVAnimClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53c7d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimClass const *>::`vftable'; /*0x53c7d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53c7e0*/
  {
    __3_YAXPAX_Z(v3); /*0x53c7e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c7f0*/
  }
  BYTE1(this->m_C) = 0; /*0x53c7fb*/
  this->m_8 = 0; /*0x53c801*/
  if ( (a2 & 1) != 0 ) /*0x53c808*/
    __3_YAXPAX_Z(this); /*0x53c80b*/
  return this->__pad_0; /*0x53c815*/
}



// ==== 0x0053C820  sub_53C820  this=-  sig=ida-proto ====
void sub_53C820()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53c82c*/
  dbl_A9FF90 = Math::Sqrt(v0 + v0); /*0x53c83e*/
}



// ==== 0x0053C850  sub_53C850  this=-  sig=ida-proto ====
void sub_53C850()
{
  dbl_AA0140 = dbl_A9FF90 / 60.0; /*0x53c85c*/
}



// ==== 0x0053C870  sub_53C870  this=-  sig=ida-proto ====
void sub_53C870()
{
  dbl_AA0110 = 1.0 / dbl_AA0140; /*0x53c87c*/
}



// ==== 0x0053C890  sub_53C890  this=-  sig=ida-proto ====
void sub_53C890()
{
  dbl_AA0108 = 0.0174532925199433 * 45.0; /*0x53c89c*/
}



// ==== 0x0053C8B0  sub_53C8B0  this=-  sig=ida-proto ====
void sub_53C8B0()
{
  dbl_A9FF98 = 0.0174532925199433 * 60.0; /*0x53c8bc*/
}



// ==== 0x0053C8D0  sub_53C8D0  this=-  sig=ida-proto ====
void sub_53C8D0()
{
  dbl_A9FAE0 = 0.0174532925199433 * 90.0; /*0x53c8dc*/
}



// ==== 0x0053C8F0  sub_53C8F0  this=-  sig=ida-proto ====
__int64 sub_53C8F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9FAE0 - dbl_A9FF98); /*0x53c902*/
  result = Math::RoundToInt(v0 * dbl_A9FF90 * 0.5); /*0x53c916*/
  dword_AA0148 = result; /*0x53c91b*/
  return result; /*0x53c920*/
}



// ==== 0x0053C930  sub_53C930  this=-  sig=ida-proto ====
void sub_53C930()
{
  dbl_A9FFA0 = Math::ArcTan((double)dword_AA0148 * 0.00390625); /*0x53c947*/
}



// ==== 0x0053C960  sub_53C960  this=-  sig=ida-proto ====
void sub_53C960()
{
  dbl_A9FFC0 = Math::ArcTan((double)(2 * dword_AA0148) / dbl_A9FF90); /*0x53c982*/
}



// ==== 0x0053C990  sub_53C990  this=-  sig=ida-proto ====
__int64 sub_53C990()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0148) + 0.5); /*0x53c9ab*/
  dword_AA013C = result; /*0x53c9b0*/
  return result; /*0x53c9b6*/
}



// ==== 0x0053C9C0  sub_53C9C0  this=-  sig=ida-proto ====
int sub_53C9C0()
{
  word_A9FF88 = 0; /*0x53c9c2*/
  word_A9FF8A = 0; /*0x53c9c8*/
  return 0; /*0x53c9ce*/
}



// ==== 0x0053C9D0  sub_53C9D0  this=-  sig=ida-proto ====
int sub_53C9D0()
{
  dword_A9FFB0 = 0; /*0x53c9d2*/
  dword_A9FFB4 = 0; /*0x53c9d7*/
  dword_A9FFB8 = 0; /*0x53c9dc*/
  return 0; /*0x53c9e1*/
}



// ==== 0x0053C9F0  sub_53C9F0  this=-  sig=ida-proto ====
int sub_53C9F0()
{
  dword_AA0138 = 0; /*0x53c9f5*/
  dword_AA0130 = 128; /*0x53c9ff*/
  dword_AA0134 = 128; /*0x53ca04*/
  return 128; /*0x53ca09*/
}



// ==== 0x0053CA10  sub_53CA10  this=-  sig=ida-proto ====
int sub_53CA10()
{
  dword_A9FF70 = 0; /*0x53ca12*/
  dword_A9FF74 = 0; /*0x53ca17*/
  dword_A9FF78 = 0; /*0x53ca1c*/
  dword_A9FF7C = 0; /*0x53ca21*/
  return 0; /*0x53ca26*/
}



// ==== 0x0053CA30  sub_53CA30  this=-  sig=ida-proto ====
void sub_53CA30()
{
  dbl_A9FF80 = (512.0 - 0.0 + 57.0) * 0.0125; /*0x53ca48*/
}



// ==== 0x0053CA50  sub_53CA50  this=-  sig=ida-proto ====
int sub_53CA50()
{
  dbl_A9FFA8 = dbl_A9FF80; /*0x53ca5b*/
  return LODWORD(dbl_A9FF80); /*0x53ca66*/
}



// ==== 0x0053CA70  sub_53CA70  this=-  sig=ida-proto ====
int sub_53CA70()
{
  dword_AA011C = 0; /*0x53ca77*/
  dword_AA0120 = 0; /*0x53ca7c*/
  byte_AA0124 = 1; /*0x53ca81*/
  byte_AA0125 = 0; /*0x53ca88*/
  stru_AA0118 = (int)&DynamicVectorClass<IonBlastClass *>::`vftable'; /*0x53ca8d*/
  dword_AA012C = 10; /*0x53ca97*/
  dword_AA0128 = 0; /*0x53caa1*/
  return atexit(sub_53CAB0); /*0x53caac*/
}



// ==== 0x0053CAB0  sub_53CAB0  this=-  sig=ida-proto ====
void __cdecl sub_53CAB0()
{
  if ( (byte_A9FAD8 & 1) == 0 ) /*0x53caba*/
  {
    stru_AA0118 = (int)&VectorClass<IonBlastClass *>::`vftable'; /*0x53cabe*/
    byte_A9FAD8 |= 1u; /*0x53cad1*/
    if ( dword_AA011C ) /*0x53cad7*/
    {
      if ( byte_AA0125 ) /*0x53cae1*/
      {
        __3_YAXPAX_Z(dword_AA011C); /*0x53cae4*/
        dword_AA011C = 0; /*0x53caec*/
      }
    }
    byte_AA0125 = 0; /*0x53caf6*/
    dword_AA0120 = 0; /*0x53cafd*/
  }
}



// ==== 0x0053CB10  ActionQueue::PushEntry  this=ActionQueue  sig=csp ====
_DWORD *__thiscall ActionQueue::PushEntry(ActionQueue *this, int a2, int a3, int a4)
{
  int v5; // eax

  *this = (ActionQueue)a2; /*0x53cb1d*/
  *((_DWORD *)this + 1) = a3; /*0x53cb23*/
  *((_DWORD *)this + 3) = 0; /*0x53cb28*/
  *((_DWORD *)this + 4) = 0; /*0x53cb2b*/
  *((_DWORD *)this + 2) = a4; /*0x53cb2e*/
  if ( dword_AA0128 < dword_AA0120 /*0x53cb63*/
    || (byte_AA0125 || !dword_AA0120)
    && dword_AA012C > 0
    && (*(unsigned __int8 (__thiscall **)(Explosion *, int, _DWORD))(stru_AA0118.Explosion_field_00 + 8))(
         &stru_AA0118,
         dword_AA0120 + dword_AA012C,
         0) )
  {
    v5 = dword_AA0128++; /*0x53cb70*/
    *((_DWORD *)dword_AA011C + v5) = this; /*0x53cb7f*/
  }
  return this; /*0x53cb84*/
}



// ==== 0x0053CBE0  ExplosionClass::ProcessFrame  this=ExplosionClass  sig=csp ====
void __thiscall ExplosionClass::ProcessFrame(ExplosionClass *this)
{
  double v1; // st7
  int v3; // eax
  AnimClass *v4; // eax
  int v5; // esi
  ExplosionClass v6; // edi
  AnimClass *v7; // eax
  int v8; // esi
  ExplosionClass v9; // edi
  AnimClass *v10; // eax
  int v11; // esi
  ExplosionClass v12; // edi
  ExplosionClass v13; // eax
  ExplosionClass v14; // edx
  __int16 v15; // ax
  int v16; // edi
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  char *v21; // ebp
  int v22; // edx
  ExplosionClass v23; // eax
  ExplosionClass v24; // ebp
  ExplosionClass v25; // ecx
  unsigned int v26; // edi
  unsigned int v27; // ebp
  float v30; // ecx
  double v35; // [esp+10h] [ebp-D0h]
  double v36; // [esp+10h] [ebp-D0h]
  double v37; // [esp+10h] [ebp-D0h]
  double v38; // [esp+10h] [ebp-D0h]
  double v39; // [esp+10h] [ebp-D0h]
  double v40; // [esp+10h] [ebp-D0h]
  __int16 v41[4]; // [esp+28h] [ebp-B8h] BYREF
  int v42; // [esp+30h] [ebp-B0h] BYREF
  ExplosionClass v43; // [esp+34h] [ebp-ACh]
  int v44; // [esp+38h] [ebp-A8h]
  int v46; // [esp+40h] [ebp-A0h] BYREF
  float v49; // [esp+50h] [ebp-90h]
  float v50; // [esp+54h] [ebp-8Ch]
  float v51; // [esp+58h] [ebp-88h]
  float v52; // [esp+5Ch] [ebp-84h]
  float v53; // [esp+60h] [ebp-80h]
  float v54; // [esp+64h] [ebp-7Ch]
  float v55; // [esp+68h] [ebp-78h]
  float v56; // [esp+6Ch] [ebp-74h]
  float v57; // [esp+70h] [ebp-70h]
  int v58; // [esp+74h] [ebp-6Ch]
  int v59; // [esp+78h] [ebp-68h]
  __int16 v60; // [esp+7Ch] [ebp-64h]
  __int16 v61; // [esp+7Eh] [ebp-62h]
  int v62; // [esp+84h] [ebp-5Ch]
  int v63; // [esp+88h] [ebp-58h]
  float v64; // [esp+8Ch] [ebp-54h]
  float v65; // [esp+90h] [ebp-50h]
  float v66; // [esp+94h] [ebp-4Ch]
  int v67[2]; // [esp+98h] [ebp-48h] BYREF
  int v68[2]; // [esp+A0h] [ebp-40h] BYREF
  _DWORD v69[4]; // [esp+A8h] [ebp-38h] BYREF
  double v72; // [esp+C0h] [ebp-20h]
  int v73; // [esp+C8h] [ebp-18h]
  int v74; // [esp+CCh] [ebp-14h] BYREF
  int v76[2]; // [esp+D8h] [ebp-8h] BYREF

  _EBX = this; /*0x53cbed*/
  if ( *((int *)this + 3) < 79 ) /*0x53cbf8*/
  {
    if ( *((_DWORD *)this + 4) != 1 ) /*0x53cc3e*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v68); /*0x53cc53*/
      if ( !*(_DWORD *)&_EBX[3] ) /*0x53cc58*/
      {
        if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], _EBX)->landType == 2 ) /*0x53cc7c*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53cc7e*/
          if ( v4 ) /*0x53cc88*/
          {
            v5 = (int)*_EBX; /*0x53cc91*/
            v6 = _EBX[1]; /*0x53cc93*/
            v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53cc9d*/
            v42 = v5; /*0x53ccb4*/
            v43 = v6; /*0x53ccb8*/
            AnimClass::ctor( /*0x53ccce*/
              v4,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3012)
                       + 4 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3024)
                       - 4),
              &v42,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53ccd0*/
          if ( v7 ) /*0x53ccda*/
          {
            v8 = (int)*_EBX; /*0x53ccdf*/
            v9 = _EBX[1]; /*0x53cce1*/
            v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53ccf1*/
            v42 = v8; /*0x53cd02*/
            v43 = v9; /*0x53cd06*/
            AnimClass::ctor( /*0x53cd14*/
              v7,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 664),
              &v42,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53cd1e*/
        if ( v10 ) /*0x53cd28*/
        {
          v11 = (int)*_EBX; /*0x53cd2d*/
          v12 = _EBX[1]; /*0x53cd2f*/
          v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53cd39*/
          v42 = v11; /*0x53cd50*/
          v43 = v12; /*0x53cd54*/
          AnimClass::ctor( /*0x53cd62*/
            v10,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 668),
            &v42,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], _EBX)->flags[0] & 0x100) != 0 ) /*0x53cd7b*/
        {
          v13 = _EBX[2]; /*0x53cd7d*/
          v14 = _EBX[1]; /*0x53cd88*/
          v42 = (int)*_EBX; /*0x53cd8d*/
          v44 = dword_AA013C + *(_DWORD *)&v13; /*0x53cd91*/
          v43 = v14; /*0x53cd9a*/
          PlaySoundEffectAt( /*0x53cdb5*/
            &v42,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
            1,
            0);
        }
        PlaySoundEffectAt( /*0x53cdd4*/
          _EBX,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
          1,
          0);
        CreateSmokeEffectAt( /*0x53ce05*/
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
          (int)*_EBX,
          *(_DWORD *)&_EBX[1],
          *(_DWORD *)&_EBX[2],
          0,
          0);
      }
      v60 = *(_DWORD *)_EBX / 256; /*0x53ce18*/
      v61 = *(_DWORD *)&_EBX[1] / 256; /*0x53ce2c*/
      v15 = -3; /*0x53ce31*/
      v46 = -3; /*0x53ce36*/
      do /*0x53d2fc*/
      {
        v16 = -3; /*0x53ce3e*/
        v58 = -3; /*0x53ce45*/
        LOWORD(v59) = v60 + v15; /*0x53ce49*/
        do /*0x53d2ea*/
        {
          HIWORD(v59) = v16 + v61; /*0x53ce59*/
          *(_DWORD *)v41 = v59; /*0x53ce67*/
          v17 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v41) + 57); /*0x53ce70*/
          if ( v17 ) /*0x53ce78*/
          {
            do /*0x53d2d8*/
            {
              if ( (*(int (__thiscall **)(_DWORD *))(*v17 + 44))(v17) == 15 /*0x53ce94*/
                || (*(int (__thiscall **)(_DWORD *))(*v17 + 44))(v17) == 1 )
              {
                v69[0] = v17[39]; /*0x53cea4*/
                v69[1] = v17[40]; /*0x53ceb6*/
                v69[2] = v17[41]; /*0x53cec8*/
                Coord::To_Screen((Coord *)g_TacticalClass_Instance, v69, v67); /*0x53ced5*/
                v62 = v67[0] - v68[0]; /*0x53cef1*/
                __asm { fild [esp+0C8h+var_5C] } /*0x53cefc*/
                v63 = v67[1] - v68[1]; /*0x53cf05*/
                __asm /*0x53cf09*/
                {
                  fild [esp+0D0h+var_58]
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fstp [esp+0D0h+var_D0]; double
                  fstp st
                  fstp st
                }
                Math::Sqrt(v35); /*0x53cf1e*/
                LOWORD(v18) = Math::RoundToInt(v1); /*0x53cf26*/
                v19 = v18 + 8; /*0x53cf2b*/
                if ( v19 < 256 ) /*0x53cf33*/
                {
                  v20 = dword_A9FFC8[*(_DWORD *)&_EBX[3]]; /*0x53cf47*/
                  v21 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v20 + 92))(v20, v19 + 256, 128); /*0x53cf54*/
                  if ( *v21 > 0 ) /*0x53cf5a*/
                  {
                    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v17 + 1348))(v17, 0, 0); /*0x53cf64*/
                    *((_BYTE *)v17 + 1716) = 2 * ComputeSpiralOffset(v76, *v21)[1]; /*0x53cf7f*/
                  }
                  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v17 + 132))(v17) + 176) ) /*0x53cf8f*/
                  {
                    if ( !**(_BYTE **)((*(int (__thiscall **)(_DWORD *))(*v17 + 132))(v17) + 176) && *v21 >= 0 ) /*0x53cfba*/
                    {
                      LODWORD(v72) = v17[39]; /*0x53cfc4*/
                      v22 = v17[40]; /*0x53cfcb*/
                      v23 = *_EBX; /*0x53cfd1*/
                      v73 = v17[41]; /*0x53cfd3*/
                      v24 = _EBX[1]; /*0x53cfe1*/
                      *(_DWORD *)v41 = *(_DWORD *)&v23 - LODWORD(v72); /*0x53cfe6*/
                      __asm { fild dword ptr [esp+0C8h+var_B8] } /*0x53cfec*/
                      v25 = _EBX[2]; /*0x53cff0*/
                      *(_DWORD *)v41 = v22 - *(_DWORD *)&v24; /*0x53cff3*/
                      __asm /*0x53cffe*/
                      {
                        fstp [esp+0C8h+var_78]
                        fild dword ptr [esp+0C8h+var_B8]
                      }
                      *(_DWORD *)v41 = *(_DWORD *)&v25 - v73; /*0x53d00c*/
                      v52 = v55; /*0x53d010*/
                      __asm /*0x53d014*/
                      {
                        fstp [esp+0C8h+var_74]
                        fild dword ptr [esp+0C8h+var_B8]
                      }
                      v53 = v56; /*0x53d027*/
                      __asm { fstp [esp+0CCh+var_70] } /*0x53d02c*/
                      v54 = v57; /*0x53d03a*/
                      *(_DWORD *)v41 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(v17 + 226), &v74) - 0x3FFF; /*0x53d04c*/
                      __asm /*0x53d050*/
                      {
                        fild dword ptr [esp+0C8h+var_B8]
                        fmul ds:dbl_7E2810
                        fstp qword ptr [esp+0C8h+var_B8]
                      }
                      v26 = *(_DWORD *)&v41[2]; /*0x53d05e*/
                      v27 = *(_DWORD *)v41; /*0x53d066*/
                      Math::SinCos(*(double *)v41); /*0x53d068*/
                      __asm { fstp dword ptr [esp+0D0h+var_98] } /*0x53d06d*/
                      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v26, v27))); /*0x53d073*/
                      __asm /*0x53d078*/
                      {
                        fstp [esp+0D8h+var_B0]
                        fld [esp+0D8h+var_70]
                        fld [esp+0D8h+var_74]
                        fld [esp+0D8h+var_78]
                        fld st
                        fmul st, st(1)
                        fld st(2)
                        fmul st, st(3)
                      }
                      __asm
                      {
                        faddp st(1), st
                        fld st(3)
                        fmul st, st(4)
                        faddp st(1), st
                        fstp [esp+0D0h+var_D0]; double
                        fstp st
                        fstp st
                        fstp st
                      }
                      Math::Sqrt(v36); /*0x53d0a4*/
                      __asm /*0x53d0a9*/
                      {
                        fst [esp+0D0h+var_9C]
                        fabs
                        fcomp ds:dbl_7EC0B0
                      }
                      __asm { fnstsw ax }
                      if ( (_AX & 0x4100) == 0 ) /*0x53d0bd*/
                      {
                        __asm /*0x53d0c3*/
                        {
                          fld [esp+0C8h+var_80]
                          fmul [esp+0C8h+var_80]
                          fld [esp+0C8h+var_84]
                          fmul [esp+0C8h+var_84]
                        }
                        v54 = 0.0; /*0x53d0d6*/
                        __asm /*0x53d0de*/
                        {
                          faddp st(1), st
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::Sqrt(v37); /*0x53d0e3*/
                        __asm { fcom ds:dbl_7E2800 } /*0x53d0e8*/
                        __asm { fnstsw ax }
                        if ( (_AX & 0x4000) != 0 ) /*0x53d0f6*/
                        {
                          v30 = v54; /*0x53d134*/
                          v49 = v52; /*0x53d138*/
                          __asm { fstp st } /*0x53d13c*/
                          v50 = v53; /*0x53d13e*/
                        }
                        else
                        {
                          __asm /*0x53d0f8*/
                          {
                            fld [esp+0C8h+var_84]
                            fdiv st, st(1)
                            fstp [esp+0C8h+var_54]
                            fld [esp+0C8h+var_80]
                            fdiv st, st(1)
                          }
                          v49 = v64; /*0x53d10c*/
                          __asm { fstp [esp+0C8h+var_50] } /*0x53d110*/
                          __asm { fdivr ds:dbl_7E2800 }
                          v50 = v65; /*0x53d11e*/
                          __asm { fstp [esp+0C8h+var_4C] } /*0x53d122*/
                          v30 = v66; /*0x53d126*/
                        }
                        __asm /*0x53d142*/
                        {
                          fld [esp+0C8h+var_90]
                          fmul [esp+0C8h+var_B0]
                          fld [esp+0C8h+var_8C]
                          fmul dword ptr [esp+0C8h+var_98]
                        }
                        v51 = v30; /*0x53d152*/
                        __asm /*0x53d159*/
                        {
                          faddp st(1), st
                          fstp dword ptr [esp+0D0h+var_B8]
                          fld [esp+0D0h+var_88]
                          fmul dword ptr [esp+0D0h+var_98]
                          fchs
                          fld [esp+0D0h+var_88]
                          fmul [esp+0D0h+var_B0]
                          fstp [esp+0D0h+var_28]
                          fld [esp+0D0h+var_90]
                          fmul dword ptr [esp+0D0h+var_98]
                          fld [esp+0D0h+var_8C]
                          fmul [esp+0D0h+var_B0]
                          fsubp st(1), st
                          fst [esp+0D0h+var_24]
                          fld [esp+0D0h+var_28]
                          fld st
                          fmul st, st(1)
                          fld st(2)
                          fmul st, st(3)
                          faddp st(1), st
                          fld st(3)
                          fmul st, st(4)
                          faddp st(1), st
                          fstp [esp+0D0h+var_D0]; double
                          fstp st
                          fstp st
                          fstp st
                        }
                        Math::Sqrt(v38); /*0x53d1b1*/
                        __asm /*0x53d1b6*/
                        {
                          fstp dword ptr [esp+0D0h+var_A8+4]
                          fld [esp+0D0h+var_B0]
                          fmul dword ptr [esp+0D0h+var_B8]
                          fld dword ptr [esp+0D0h+var_98]
                          fmul dword ptr [esp+0D0h+var_A8+4]
                        }
                        __asm
                        {
                          fsubp st(1), st
                          fsub [esp+0C8h+var_90]
                          fabs
                          fcomp ds:dbl_7EC0A8
                          fnstsw ax
                        }
                        if ( (_AX & 0x4100) == 0 ) /*0x53d1e0*/
                          goto LABEL_35; /*0x53d1e0*/
                        __asm /*0x53d1e2*/
                        {
                          fld [esp+0C8h+var_B0]
                          fmul dword ptr [esp+0C8h+var_A8+4]
                          fld dword ptr [esp+0C8h+var_98]
                          fmul dword ptr [esp+0C8h+var_B8]
                          faddp st(1), st
                          fsub [esp+0C8h+var_8C]
                          fabs
                          fcomp ds:dbl_7EC0A8
                          fnstsw ax
                        }
                        if ( (_AX & 0x4100) == 0 ) /*0x53d205*/
                        {
LABEL_35:
                          __asm /*0x53d207*/
                          {
                            fld dword ptr [esp+0C8h+var_A8+4]
                            fchs
                            fstp dword ptr [esp+0C8h+var_A8+4]
                          }
                        }
                        __asm /*0x53d211*/
                        {
                          fld [esp+0C8h+var_9C]
                          fadd ds:dbl_7EC038
                        }
                        __asm
                        {
                          fstp [esp+0D0h+var_98]
                          fld [esp+0D0h+var_9C]
                          fild dword ptr [ebx+0Ch]
                          fmul dbl_A9FFA8
                          fsubp st(1), st
                          fadd ds:dbl_7EC0A0
                          fmul ds:dbl_7EC030
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::SinCos(v39); /*0x53d240*/
                        __asm /*0x53d245*/
                        {
                          fmul ds:dbl_7EC098
                          fadd ds:dbl_7E3D90
                          fmul ds:dbl_7EC038
                          fstp [esp+0D0h+var_10]
                          fld [esp+0D0h+var_9C]
                          fild dword ptr [ebx+0Ch]
                          fmul dbl_A9FFA8
                          fsubp st(1), st
                          fadd ds:dbl_7EC0A0
                          fmul ds:dbl_7EC030
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::ArcTan2(v40); /*0x53d27c*/
                        __asm { fmul ds:dbl_7EC030 } /*0x53d281*/
                        __asm
                        {
                          fmul ds:dbl_7EC038
                          fmul ds:dbl_7EC098
                          fmul [esp+0C8h+var_98]
                          fsub [esp+0C8h+var_10]
                          fld [esp+0C8h+var_98]
                          fmul [esp+0C8h+var_98]
                          fdivp st(1), st
                          fld dword ptr [esp+0C8h+var_A8+4]
                          fmul st, st(1)
                          fmul ds:dbl_7EC040
                          fstp dword ptr [esi+328h]
                        }
                        *((float *)v17 + 202) = _ET1; /*0x53d2b7*/
                        __asm /*0x53d2bd*/
                        {
                          fld dword ptr [esp+0C8h+var_B8]
                          fmul st, st(1)
                          fmul ds:dbl_7EC040
                          fchs
                          fstp dword ptr [esi+32Ch]
                        }
                        *((float *)v17 + 203) = _ET1; /*0x53d2cb*/
                        __asm { fstp st } /*0x53d2d1*/
                      }
                    }
                  }
                }
              }
              v17 = (_DWORD *)v17[12]; /*0x53d2d3*/
            }
            while ( v17 ); /*0x53d2d8*/
            v16 = v58; /*0x53d2de*/
          }
          v58 = ++v16; /*0x53d2e6*/
        }
        while ( v16 < 4 ); /*0x53d2ea*/
        v15 = ++v46; /*0x53d2f4*/
      }
      while ( v46 < 4 ); /*0x53d2fc*/
    }
    ++*(_DWORD *)&_EBX[3]; /*0x53d302*/
  }
  else if ( this ) /*0x53cbfc*/
  {
    v46 = (int)this; /*0x53cc12*/
    v3 = (*(int (__thiscall **)(Explosion *, int *))(stru_AA0118.Explosion_field_00 + 16))(&stru_AA0118, &v46); /*0x53cc16*/
    if ( v3 != -1 ) /*0x53cc1c*/
      Explosion::RemoveItem(&stru_AA0118, v3); /*0x53cc24*/
    __3_YAXPAX_Z(_EBX); /*0x53cc2a*/
  }
}



// ==== 0x0053D310  ObjectClass::ProcessIonCannonEffect  this=ObjectClass  sig=csp ====
void ProcessIonCannonEffect(ObjectClass *this)
{
  int i; // esi

  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d31b*/
    ExplosionClass::ProcessFrame(*((ExplosionClass **)dword_AA011C + i)); /*0x53d326*/
}



// ==== 0x0053D330  ObjectClass::GenerateLightningStormGlow  this=ObjectClass  sig=csp ====
char GenerateLightningStormGlow(ObjectClass *this)
{
  double v1; // st7
  char result; // al
  int *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  int v12; // eax
  char LightningStormGlow_Helper; // al
  int v14; // edx
  bool v17; // cc
  double v18; // [esp+Ch] [ebp-40h]
  double v19; // [esp+Ch] [ebp-40h]
  int v20; // [esp+24h] [ebp-28h]
  int *i; // [esp+28h] [ebp-24h]
  int v22; // [esp+2Ch] [ebp-20h]
  double v24; // [esp+3Ch] [ebp-10h]
  double v25; // [esp+44h] [ebp-8h]

  result = byte_AA014C; /*0x53d339*/
  if ( !byte_AA014C ) /*0x53d344*/
  {
    __asm /*0x53d34a*/
    {
      fld ds:dbl_7EC020
      fsub ds:dbl_7EC028
    }
    v3 = dword_A9FFC8; /*0x53d361*/
    v24 = 0.0; /*0x53d366*/
    v20 = 0; /*0x53d36e*/
    __asm { fstp [esp+38h+var_8] } /*0x53d376*/
    for ( i = dword_A9FFC8; ; v3 = i ) /*0x53d37a*/
    {
      v4 = __2_YAPAXI_Z(0x20u); /*0x53d386*/
      v5 = v4; /*0x53d38b*/
      if ( v4 ) /*0x53d392*/
      {
        *(_DWORD *)(v4 + 4) = 512; /*0x53d39e*/
        *(_DWORD *)(v4 + 8) = 256; /*0x53d3a5*/
        *(_DWORD *)(v4 + 12) = 0; /*0x53d3ac*/
        *(_DWORD *)v4 = &XSurface_Vtable; /*0x53d3b3*/
        *(_DWORD *)(v4 + 16) = 1; /*0x53d3b9*/
        Buffer::Init((Buffer *)(v4 + 20), 0, 0x20000); /*0x53d3c0*/
        *(_DWORD *)v5 = &BSurface_Vtable; /*0x53d3c5*/
      }
      else
      {
        v5 = 0; /*0x53d3cd*/
      }
      *v3 = v5; /*0x53d3cf*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, -1); /*0x53d3d7*/
      v6 = 127; /*0x53d3e7*/
      v7 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)*v3 + 92))(*v3, 0, 0) + 65792; /*0x53d3ec*/
      do /*0x53d4c5*/
      {
        v8 = 255; /*0x53d3f4*/
        v9 = 4 * v6 * v6; /*0x53d3fc*/
        do /*0x53d4be*/
        {
          v22 = v9 + v8 * v8; /*0x53d40d*/
          __asm /*0x53d411*/
          {
            fild [esp+40h+var_20]
            fstp [esp+40h+var_40]; double
          }
          Math::Sqrt(v18); /*0x53d418*/
          __asm /*0x53d41d*/
          {
            fst qword ptr [esp+40h+var_20]
            fcomp [esp+40h+var_8]
          }
          __asm { fnstsw ax }
          if ( (_AX & 0x100) == 0 ) /*0x53d42d*/
          {
            __asm /*0x53d433*/
            {
              fld qword ptr [esp+38h+var_20]
              fcomp qword ptr [esp+38h+var_14+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x53d440*/
            {
              __asm { fild dword ptr [esp+38h+var_2C+4] } /*0x53d442*/
              __asm
              {
                fmul dbl_A9FFA8
                fsubr qword ptr [esp+40h+var_20]
                fadd ds:dbl_7EC0A0
                fmul ds:dbl_7EC030
                fstp [esp+40h+var_40]; double
              }
              Math::SinCos(v19); /*0x53d464*/
              __asm { fmul ds:dbl_7EC098 } /*0x53d469*/
              __asm
              {
                fadd ds:dbl_7E3D90
                fld qword ptr [esp+38h+var_20]
                fdiv ds:dbl_7EC038
                fadd ds:dbl_7E1718
                fdivp st(1), st
                fadd ds:dbl_7E1738
              }
              LOWORD(v12) = Math::RoundToInt(v1); /*0x53d490*/
              LightningStormGlow_Helper = GenerateLightningStormGlow_Helper(0, v12); /*0x53d497*/
              v9 = 4 * v6 * v6; /*0x53d4a1*/
              *(_BYTE *)(v8 + (v6 << 9) + v7) = LightningStormGlow_Helper; /*0x53d4a8*/
              *(_BYTE *)((v6 << 9) - v8 + v7) = LightningStormGlow_Helper; /*0x53d4af*/
              v14 = v7 - (v6 << 9); /*0x53d4b4*/
              *(_BYTE *)(v8 + v14) = LightningStormGlow_Helper; /*0x53d4b6*/
              *(_BYTE *)(v14 - v8) = LightningStormGlow_Helper; /*0x53d4bb*/
            }
          }
          --v8; /*0x53d4bd*/
        }
        while ( v8 >= 0 ); /*0x53d4be*/
        --v6; /*0x53d4c4*/
      }
      while ( v6 >= 0 ); /*0x53d4c5*/
      __asm /*0x53d4cb*/
      {
        fld ds:dbl_7E1710
        fsub dbl_A9FF80
        fcomp qword ptr [esp+38h+var_14+4]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x53d4e0*/
      {
        __asm /*0x53d4e2*/
        {
          fld dbl_A9FF80
          fadd qword ptr [esp+38h+var_14+4]
          fstp qword ptr [esp+38h+var_14+4]
        }
      }
      __asm /*0x53d4f0*/
      {
        fld dbl_A9FF80
        fmul ds:dbl_7E5190
        fadd [esp+38h+var_8]
        fst [esp+38h+var_8]
        fcomp qword ptr [esp+38h+var_14+4]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x53d50d*/
        v25 = v24; /*0x53d517*/
      result = (_BYTE)i + 4; /*0x53d527*/
      v17 = (int)(i + 1) < (int)&dbl_AA0108; /*0x53d52b*/
      ++v20; /*0x53d530*/
      ++i; /*0x53d534*/
      if ( !v17 ) /*0x53d538*/
        break; /*0x53d538*/
    }
    byte_AA014C = 1; /*0x53d53e*/
  }
  return result; /*0x53d545*/
}



// ==== 0x0053D550  ObjectClass::WinMainSetup_Setup  this=ObjectClass  sig=csp ====
int WinMainSetup_Setup(ObjectClass *this)
{
  int *v1; // esi
  int result; // eax

  v1 = dword_A9FFC8; /*0x53d551*/
  do /*0x53d571*/
  {
    if ( *v1 ) /*0x53d556*/
      result = (**(int (__thiscall ***)(int, int))*v1)(*v1, 1); /*0x53d560*/
    *v1++ = 0; /*0x53d562*/
  }
  while ( (int)v1 < (int)&dbl_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}



// ==== 0x0053D580  ZBuffer::RenderSprite  this=ZBuffer  sig=csp ====
char __thiscall ZBuffer::RenderSprite(ZBuffer *this)
{
  char result; // al
  AudioStream *v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  _WORD *v7; // edi
  int v8; // ecx
  __int16 v9; // si
  unsigned __int16 v10; // si
  int SamplePosition; // ebp
  int v12; // ebx
  int v13; // eax
  StreamClass *m_Stream; // edx
  unsigned __int16 *v15; // eax
  int m; // ecx
  int v17; // ebx
  int i; // ebx
  int j; // ebp
  char v20; // [esp+13h] [ebp-6Dh] BYREF
  char *v21; // [esp+14h] [ebp-6Ch]
  int v22; // [esp+18h] [ebp-68h]
  int v23; // [esp+1Ch] [ebp-64h]
  int k; // [esp+20h] [ebp-60h]
  int v25; // [esp+24h] [ebp-5Ch]
  _WORD *v26; // [esp+28h] [ebp-58h] BYREF
  char *v27; // [esp+2Ch] [ebp-54h] BYREF
  AudioStream *v28; // [esp+30h] [ebp-50h]
  int v29; // [esp+34h] [ebp-4Ch]
  int v30[2]; // [esp+38h] [ebp-48h] BYREF
  int v31[2]; // [esp+40h] [ebp-40h] BYREF
  int v32; // [esp+48h] [ebp-38h]
  int v33; // [esp+4Ch] [ebp-34h]
  int v34; // [esp+50h] [ebp-30h] BYREF
  int v35; // [esp+54h] [ebp-2Ch]
  int v36; // [esp+58h] [ebp-28h]
  int v37; // [esp+5Ch] [ebp-24h]
  int v38[4]; // [esp+60h] [ebp-20h] BYREF
  int v39[4]; // [esp+70h] [ebp-10h] BYREF

  result = stru_A8EB00.ObjectTypeClass[30]; /*0x53d580*/
  if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x53d591*/
  {
    result = Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v30); /*0x53d5a3*/
    if ( result ) /*0x53d5aa*/
    {
      v3 = g_DSurface_Hidden_2; /*0x53d5bb*/
      v39[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x53d5c7*/
      v39[0] = DSurface_ViewBounds.field_0; /*0x53d5d0*/
      v4 = *((_DWORD *)this + 3); /*0x53d5d4*/
      v39[1] = (int)DSurface_ViewBounds.field_4; /*0x53d5da*/
      v5 = dword_A9FFC8[v4]; /*0x53d5de*/
      v39[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - 7; /*0x53d5e5*/
      v6 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x53d5e9*/
      v28 = g_DSurface_Hidden_2; /*0x53d5ed*/
      v29 = v5; /*0x53d5f1*/
      v25 = (*(int (__thiscall **)(AudioStream *))(v6 + 116))(g_DSurface_Hidden_2); /*0x53d5fc*/
      v34 = v30[0] - 256; /*0x53d60b*/
      v33 = 256; /*0x53d618*/
      v38[3] = 256; /*0x53d61c*/
      v37 = 256; /*0x53d623*/
      v32 = 512; /*0x53d627*/
      v38[2] = 512; /*0x53d62b*/
      v36 = 512; /*0x53d62f*/
      v35 = v30[1] - 128; /*0x53d637*/
      v20 = 0; /*0x53d661*/
      v31[0] = 0; /*0x53d666*/
      v31[1] = 0; /*0x53d66a*/
      v38[0] = 0; /*0x53d66e*/
      v38[1] = 0; /*0x53d672*/
      result = CalcSurfaceBlitRects((int)v3, v39, &v34, v5, v38, v31, &v20, (int *)&v26, (int *)&v27); /*0x53d679*/
      if ( result ) /*0x53d680*/
      {
        v7 = v26; /*0x53d686*/
        v8 = *((_DWORD *)this + 2); /*0x53d68e*/
        v22 = (int)v26; /*0x53d691*/
        v23 = (int)v27; /*0x53d695*/
        v21 = v27; /*0x53d699*/
        v9 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - ZCoordToScreenY(v8); /*0x53d6ae*/
        v10 = v9 - v35 - 3; /*0x53d6b9*/
        SamplePosition = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v35); /*0x53d6c7*/
        v12 = v33 + 1; /*0x53d6cf*/
        v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x53d6d2*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x53d6db*/
        if ( (unsigned int)(SamplePosition + 2 * (v13 + v12 * (_DWORD)m_Stream)) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x53d6f2*/
        {
          for ( i = 0; i < v33; v22 += v25 ) /*0x53d79c*/
          {
            for ( j = 0; j < v32; ++j ) /*0x53d7aa*/
            {
              k = *v21++; /*0x53d7b4*/
              if ( k > 0 && *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v34 + j, i + v35) > v10 ) /*0x53d7de*/
                *v7 = v7[dword_A9FAE8[k]]; /*0x53d7ef*/
              ++v7; /*0x53d7f6*/
            }
            v7 = (_WORD *)(v25 + v22); /*0x53d806*/
            --v10; /*0x53d811*/
            v23 += 512; /*0x53d817*/
            v21 = (char *)v23; /*0x53d81b*/
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
              v17 = *v21++; /*0x53d722*/
              if ( v17 > 0 && *v15 > v10 ) /*0x53d732*/
                *v7 = v7[dword_A9FAE8[v17]]; /*0x53d73f*/
              ++v7; /*0x53d746*/
              ++v15; /*0x53d749*/
            }
            v7 = (_WORD *)(v25 + v22); /*0x53d759*/
            --v10; /*0x53d765*/
            v23 += 512; /*0x53d76b*/
            v21 = (char *)v23; /*0x53d76f*/
            v22 += v25; /*0x53d775*/
            v15 += (int)m_Stream - m; /*0x53d780*/
          }
        }
        (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)v28->__pad_0 + 96))(v28); /*0x53d836*/
        return (*(char (__thiscall **)(int))(*(_DWORD *)v29 + 96))(v29); /*0x53d83f*/
      }
    }
  }
  return result; /*0x53d842*/
}



// ==== 0x0053D850  ObjectClass::Render_Render_53D850  this=ObjectClass  sig=csp ====
char Render_Render_53D850(ObjectClass *this)
{
  int v1; // ebx
  int v2; // edi
  _DWORD *v3; // esi
  int *v4; // eax
  char result; // al
  int i; // esi
  int v7; // [esp+4h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) != dword_AA0150 ) /*0x53d865*/
  {
    v1 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    dword_AA0150 = v1; /*0x53d880*/
    v2 = 1; /*0x53d886*/
    v3 = &unk_A9FAEC; /*0x53d88b*/
    do /*0x53d8b2*/
    {
      v4 = ComputeSpiralOffset(&v7, v2); /*0x53d896*/
      ++v3; /*0x53d89d*/
      ++v2; /*0x53d8a8*/
      *(v3 - 1) = *v4 + v1 * v4[1]; /*0x53d8a9*/
    }
    while ( (int)v3 < (int)&dword_A9FF6C ); /*0x53d8b2*/
  }
  result = dword_AA0128; /*0x53d8b6*/
  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = ZBuffer::RenderSprite(*((ZBuffer **)dword_AA011C + i)); /*0x53d8cb*/
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
  dword_AA0150 = a1; /*0x53da02*/
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
  while ( (int)v3 < (int)&dword_A9FF6C ); /*0x53da34*/
  return result; /*0x53da36*/
}



// ==== 0x0053DA40  _DynamicVectorClass_PAVIonBlastClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::Destroy(_DynamicVectorClass_PAVIonBlastClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x53da46*/
  this->m_10 = 0; /*0x53da49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x53da50*/
  {
    __3_YAXPAX_Z(v2); /*0x53da56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53da5e*/
  }
  BYTE1(this->m_C) = 0; /*0x53da61*/
  this->m_8 = 0; /*0x53da64*/
}



// ==== 0x0053DA70  _DynamicVectorClass_PAVIonBlastClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::GetItemIndex(_DynamicVectorClass_PAVIonBlastClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53da70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53da85*/
  else
    return 0; /*0x53da77*/
}



// ==== 0x0053DA90  _VectorClass_PAVIonBlastClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::Get(_VectorClass_PAVIonBlastClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53da9a*/
}



// ==== 0x0053DAA0  _VectorClass_PAVIonBlastClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::Add(_VectorClass_PAVIonBlastClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x53daa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53daad*/
  {
    v3 = 0; /*0x53daaf*/
    if ( m_8 <= 0 ) /*0x53dab3*/
      return 1; /*0x53dad3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x53dab5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53dabb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53dac4*/
    {
      ++v3; /*0x53dac6*/
      ++v4; /*0x53dac7*/
      if ( v3 >= m_8 ) /*0x53dacc*/
        return 1; /*0x53dacc*/
    }
  }
  return 0; /*0x53dace*/
}



// ==== 0x0053DAE0  _VectorClass_PAVIonBlastClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::Release(_VectorClass_PAVIonBlastClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53daec*/
  {
    LOBYTE(this->m_C) = 0; /*0x53daf6*/
    if ( a3 ) /*0x53dafc*/
      v4 = a3; /*0x53db12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53db0e*/
    LOBYTE(this->m_C) = 1; /*0x53db16*/
    if ( v4 ) /*0x53db1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x53db25*/
      {
        m_8 = this->m_8; /*0x53db2c*/
        if ( a2 < m_8 ) /*0x53db31*/
          m_8 = a2; /*0x53db33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53db39*/
          ++i; /*0x53db3e*/
        if ( BYTE1(this->m_C) ) /*0x53db4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53db56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x53db5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x53db67*/
      this->m_8 = a2; /*0x53db6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x53db72*/
      return 1; /*0x53db78*/
    }
    else
    {
      return 0; /*0x53db1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVIonBlastClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53db82*/
    return 1; /*0x53db88*/
  }
}



// ==== 0x0053DB90  _VectorClass_PAVIonBlastClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::Remove(_VectorClass_PAVIonBlastClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53db9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53dba3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dbab*/
  }
  BYTE1(this->m_C) = 0; /*0x53dbae*/
  this->m_8 = 0; /*0x53dbb1*/
}



// ==== 0x0053DBC0  _VectorClass_PAVIonBlastClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::GetSize(_VectorClass_PAVIonBlastClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x53dbc0*/
    return 0; /*0x53dbc8*/
  m_8 = this->m_8; /*0x53dbce*/
  result = 0; /*0x53dbd1*/
  if ( m_8 <= 0 ) /*0x53dbd5*/
    return -1; /*0x53dbec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53dbdb*/
  {
    if ( ++result >= m_8 ) /*0x53dbea*/
      return -1; /*0x53dbea*/
  }
  return result; /*0x53dbca*/
}



// ==== 0x0053DC00  _VectorClass_PAVIonBlastClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::GetCapacity(_VectorClass_PAVIonBlastClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53dc00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53dc15*/
  else
    return 0; /*0x53dc07*/
}



// ==== 0x0053DC20  _DynamicVectorClass_PAVIonBlastClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::SetCapacity(
        _DynamicVectorClass_PAVIonBlastClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53dc2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x53dc32*/
    if ( a3 ) /*0x53dc38*/
      v4 = a3; /*0x53dc4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53dc4a*/
    LOBYTE(this->m_C) = 1; /*0x53dc52*/
    if ( !v4 ) /*0x53dc56*/
      return 0; /*0x53dcca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x53dc58*/
    {
      m_8 = this->m_8; /*0x53dc5f*/
      if ( a2 < m_8 ) /*0x53dc64*/
        m_8 = a2; /*0x53dc66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53dc6c*/
        ++i; /*0x53dc71*/
      if ( BYTE1(this->m_C) ) /*0x53dc7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53dc89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x53dc91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x53dc9a*/
    this->m_8 = a2; /*0x53dca2*/
    BYTE1(this->m_C) = a3 == 0; /*0x53dca5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVIonBlastClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53dcae*/
  }
  v7 = this->m_8; /*0x53dcb1*/
  if ( v7 < this->m_10 ) /*0x53dcb9*/
    this->m_10 = v7; /*0x53dcbb*/
  return 1; /*0x53dcbe*/
}



// ==== 0x0053DCD0  _DynamicVectorClass_PAVIonBlastClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::FindItemIndex(_DynamicVectorClass_PAVIonBlastClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x53dcd0*/
  result = 0; /*0x53dcd3*/
  if ( m_10 <= 0 ) /*0x53dcd8*/
    return -1; /*0x53dcef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53dcde*/
  {
    if ( ++result >= m_10 ) /*0x53dced*/
      return -1; /*0x53dced*/
  }
  return result; /*0x53dcf2*/
}



// ==== 0x0053DD00  _VectorClass_PAVIonBlastClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_IonBlastClass::QueryInterface(_VectorClass_PAVIonBlastClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53dd03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IonBlastClass *>::`vftable'; /*0x53dd06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53dd10*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dd20*/
  }
  BYTE1(this->m_C) = 0; /*0x53dd2b*/
  this->m_8 = 0; /*0x53dd31*/
  if ( (a2 & 1) != 0 ) /*0x53dd38*/
    __3_YAXPAX_Z(this); /*0x53dd3b*/
  return this->__pad_0; /*0x53dd45*/
}



// ==== 0x0053DD50  _DynamicVectorClass_PAVIonBlastClass::Constructor_VectorClass_IonBlastClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(
        _DynamicVectorClass_PAVIonBlastClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53dd53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IonBlastClass *>::`vftable'; /*0x53dd56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53dd60*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dd70*/
  }
  BYTE1(this->m_C) = 0; /*0x53dd7b*/
  this->m_8 = 0; /*0x53dd81*/
  if ( (a2 & 1) != 0 ) /*0x53dd88*/
    __3_YAXPAX_Z(this); /*0x53dd8b*/
  return this->__pad_0; /*0x53dd95*/
}



// ==== 0x0053DDA0  Explosion::RemoveItem  this=Explosion  sig=csp ====
char __thiscall Explosion::RemoveItem(Explosion *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *((_DWORD *)this + 4); /*0x53dda0*/
  v3 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  v4 = v2 - 1; /*0x53ddab*/
  *((_DWORD *)this + 4) = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++v3; /*0x53ddb7*/
      *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3 - 4) = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3); /*0x53ddbb*/
    }
    while ( v3 < *((_DWORD *)this + 4) ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}



// ==== 0x0053DDE0  sub_53DDE0  this=-  sig=ida-proto ====
int sub_53DDE0()
{
  dword_AA0158 = 0; /*0x53dde2*/
  dword_AA015C = 0; /*0x53dde7*/
  dword_AA0160 = 0; /*0x53ddec*/
  dword_AA0164 = 0; /*0x53ddf1*/
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
  dword_AA0454 = 1; /*0x53de28*/
  if ( a1 <= 0 ) /*0x53de34*/
    goto LABEL_8; /*0x53de34*/
  if ( a2 < 10240 ) /*0x53de40*/
    v12 = 10240; /*0x53de42*/
  v4 = __2_YAPAXI_Z(4 * a1); /*0x53de57*/
  dword_AA044C = v4; /*0x53de5e*/
  if ( !v4 ) /*0x53de64*/
    goto LABEL_8; /*0x53de64*/
  memset(v4, 0, 4 * a1); /*0x53de73*/
  dword_AA0450 = 0; /*0x53de7c*/
  dword_AA0374 = a1; /*0x53de82*/
  dword_AA0378 = 0; /*0x53de88*/
  dword_AA0380 = 0; /*0x53de8e*/
  dword_AA0390 = 0; /*0x53de94*/
  qword_AA0388 = 100; /*0x53de9a*/
  dword_AA037C = 0; /*0x53deaa*/
  AudioStream::Reset(stru_AA0398); /*0x53deb5*/
  CoordBounds::Constructor(stru_AA0398, qword_AA0388, SHIDWORD(qword_AA0388)); /*0x53decc*/
  AudioStream::ResetChannel(4 * qword_AA0388, (unsigned __int64)qword_AA0388 >> 30); /*0x53deed*/
  AudioStream::ResetChannel2(4 * qword_AA0388, (unsigned __int64)qword_AA0388 >> 30); /*0x53df0f*/
  Thread = CreateThread(0, 0x1000u, sub_53E070, &dword_AA0378, 0, &unk_AA03FC); /*0x53df2a*/
  dword_AA03F8 = Thread; /*0x53df32*/
  if ( !Thread ) /*0x53df37*/
    goto LABEL_8; /*0x53df37*/
  dword_AA0458 = 1; /*0x53df41*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x53df47*/
  {
    LastError = GetLastError(); /*0x53df5d*/
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x53df6a*/
    Debug::Log(); /*0x53df7a*/
LABEL_8:
    Audio_Init(); /*0x53df82*/
    return 0; /*0x53df93*/
  }
  dword_AA045C = sub_4087F0(); /*0x53df9b*/
  if ( !dword_AA045C ) /*0x53dfa0*/
    goto LABEL_8; /*0x53dfa0*/
  if ( !sub_408B40(v12, 0) ) /*0x53dfac*/
    goto LABEL_8; /*0x53dfac*/
  AudioMixer::SetupChannels(dword_AA045C); /*0x53dfbb*/
  dword_AA0460 = AcquireAudioStreamBuffer((_DWORD *)dword_AA045C, 0); /*0x53dfd5*/
  v8 = AcquireAudioStreamBuffer((_DWORD *)dword_AA045C, 1); /*0x53dfda*/
  dword_AA0464 = v8; /*0x53dfe5*/
  if ( !dword_AA0460 || !v8 ) /*0x53dff0*/
    goto LABEL_8; /*0x53dff0*/
  dword_AA0448 = 1; /*0x53e006*/
  memset(&word_AA0168, 0, 0x200u); /*0x53e00c*/
  if ( g_hWnd ) /*0x53e00e*/
  {
    v9 = (HWND *)dword_AA044C; /*0x53e016*/
    v10 = 1; /*0x53e01b*/
    v11 = 0; /*0x53e020*/
    if ( dword_AA0374 > 1 ) /*0x53e024*/
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
      while ( v10 < dword_AA0374 ); /*0x53e03e*/
      if ( v11 ) /*0x53e042*/
      {
        *v11 = g_hWnd; /*0x53e044*/
        ++dword_AA0450; /*0x53e04c*/
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
      v3 = (_DWORD *)dword_AA045C; /*0x53e0ac*/
      if ( dword_AA045C && dword_AA0444 && dword_AA0468 ) /*0x53e0c8*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e0d3*/
        if ( dword_AA0444 == 2 && (v4 = (unsigned int)AudioStream::GetChannel(v3) >> 1, sub_408D30(v3) < v4) ) /*0x53e0f2*/
        {
          if ( dword_AA0460 ) /*0x53e0fb*/
          {
            v5 = sub_408D40(v3); /*0x53e108*/
            if ( WriteAudioStreamToFile(dword_AA0460, dword_AA0468, v5, (char *)&lpThreadParameter) != 1 ) /*0x53e122*/
              dword_AA046C = 1; /*0x53e124*/
          }
        }
        else if ( dword_AA0444 == 1 ) /*0x53e137*/
        {
          v6 = (unsigned int)AudioStream::GetChannel(v3) >> 1; /*0x53e144*/
          if ( sub_408D40(v3) < v6 ) /*0x53e14d*/
          {
            if ( dword_AA0464 ) /*0x53e156*/
            {
              Channel = AudioStream::GetChannel(v3); /*0x53e15c*/
              WriteAudioStreamToFile(dword_AA0464, dword_AA0468, Channel >> 1, 0); /*0x53e170*/
              fflush(dword_AA0468); /*0x53e17c*/
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

  if ( dword_AA0448 ) /*0x53e1dc*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e1ed*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e210*/
    {
      SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e213*/
      WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e225*/
      fflush(dword_AA0468); /*0x53e230*/
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e243*/
    if ( dword_AA0448 ) /*0x53e24b*/
    {
      EnterCriticalSection(&unk_AA0418); /*0x53e256*/
      if ( dword_AA0448 ) /*0x53e25e*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e265*/
        if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e288*/
        {
          v1 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e28b*/
          WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v1, 0); /*0x53e29d*/
          fflush(dword_AA0468); /*0x53e2a9*/
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e2b6*/
      }
      dword_AA0444 = 0; /*0x53e2bd*/
      if ( dword_AA0468 ) /*0x53e2c5*/
      {
        fclose(dword_AA0468); /*0x53e2c8*/
        dword_AA0468 = 0; /*0x53e2d0*/
      }
      LeaveCriticalSection(&unk_AA0418); /*0x53e2db*/
    }
  }
  if ( dword_AA044C ) /*0x53e2e4*/
  {
    __3_YAXPAX_Z(dword_AA044C); /*0x53e2e7*/
    dword_AA044C = 0; /*0x53e2ef*/
  }
  dword_AA0450 = 0; /*0x53e2fa*/
  if ( dword_AA0458 ) /*0x53e302*/
  {
    dword_AA0378 = 1; /*0x53e304*/
    while ( !dword_AA0380 ) /*0x53e315*/
      Sleep(0); /*0x53e31e*/
    WaitForSingleObject(dword_AA03F8, 0x1388u); /*0x53e335*/
    CloseHandle(dword_AA03F8); /*0x53e341*/
    dword_AA0458 = 0; /*0x53e347*/
  }
  if ( dword_AA0460 ) /*0x53e355*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)dword_AA0460); /*0x53e357*/
    dword_AA0460 = 0; /*0x53e35c*/
  }
  if ( dword_AA0464 ) /*0x53e36a*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)dword_AA0464); /*0x53e36c*/
    dword_AA0464 = 0; /*0x53e371*/
  }
  if ( dword_AA045C ) /*0x53e37f*/
  {
    AudioSample::InitLinkedList((_DWORD *)dword_AA045C); /*0x53e381*/
    dword_AA045C = 0; /*0x53e386*/
  }
  if ( dword_AA0454 ) /*0x53e392*/
  {
    DeleteCriticalSection(&unk_AA0418); /*0x53e39f*/
    DeleteCriticalSection(&unk_AA0400); /*0x53e3a6*/
    dword_AA0454 = 0; /*0x53e3a8*/
  }
  dword_AA0448 = 0; /*0x53e3ae*/
}



// ==== 0x0053E3C0  TimerPool::AllocSlot  this=TimerPool  sig=csp ====
_DWORD *__thiscall TimerPool::AllocSlot(TimerPool *this)
{
  _DWORD *result; // eax
  int v2; // esi
  TimerPool **v3; // edi

  result = stru_AA0398.AudioStream_field_0xB0; /*0x53e3c0*/
  if ( stru_AA0398.AudioStream_field_0xB0 ) /*0x53e3ca*/
  {
    if ( this ) /*0x53e3ce*/
    {
      result = *(_DWORD **)stru_AA0398.__pad_B4; /*0x53e3d6*/
      v2 = 1; /*0x53e3db*/
      v3 = 0; /*0x53e3e0*/
      if ( dword_AA0374 > 1 ) /*0x53e3e4*/
      {
        do /*0x53e3fe*/
        {
          if ( *result ) /*0x53e3e6*/
          {
            if ( (TimerPool *)*result == this ) /*0x53e3f6*/
              return result; /*0x53e3f6*/
          }
          else if ( !v3 ) /*0x53e3ee*/
          {
            v3 = (TimerPool **)result; /*0x53e3f0*/
          }
          ++v2; /*0x53e3f8*/
          ++result; /*0x53e3f9*/
        }
        while ( v2 < dword_AA0374 ); /*0x53e3fe*/
        if ( v3 ) /*0x53e402*/
        {
          *v3 = this; /*0x53e404*/
          return (_DWORD *)++*(_DWORD *)&stru_AA0398.__pad_B4[4]; /*0x53e40b*/
        }
      }
    }
  }
  return result; /*0x53e411*/
}



// ==== 0x0053E420  Object::RemoveObjectArray  this=Object  sig=csp ====
void **__thiscall Object::RemoveObjectArray(Object *this)
{
  void **result; // eax
  int v2; // edx

  result = (void **)stru_AA0398.AudioStream_field_0xB0; /*0x53e420*/
  if ( stru_AA0398.AudioStream_field_0xB0 ) /*0x53e428*/
  {
    if ( this ) /*0x53e42c*/
    {
      result = *(void ***)stru_AA0398.__pad_B4; /*0x53e434*/
      v2 = 1; /*0x53e439*/
      if ( dword_AA0374 > 1 ) /*0x53e440*/
      {
        while ( *result != this ) /*0x53e444*/
        {
          ++v2; /*0x53e446*/
          ++result; /*0x53e447*/
          if ( v2 >= dword_AA0374 ) /*0x53e44c*/
            return result; /*0x53e44c*/
        }
        *result = 0; /*0x53e450*/
        return (void **)--*(_DWORD *)&stru_AA0398.__pad_B4[4]; /*0x53e45b*/
      }
    }
  }
  return result; /*0x53e44e*/
}



// ==== 0x0053E4F0  ObjectClass::WinMain_Helper_53E4F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_53E4F0(char *FileName)
{
  if ( !dword_AA0448 || dword_AA0468 ) /*0x53e503*/
    return 0; /*0x53e54b*/
  EnterCriticalSection(&unk_AA0418); /*0x53e50a*/
  dword_AA0468 = fopen(FileName, aWb); /*0x53e51e*/
  if ( dword_AA0468 ) /*0x53e525*/
    dword_AA0444 = 1; /*0x53e527*/
  LeaveCriticalSection(&unk_AA0418); /*0x53e536*/
  return dword_AA0468 != 0; /*0x53e549*/
}



// ==== 0x0053E550  ObjectClass::WinMain_Write  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_53E550(char *FileName)
{
  signed int SampleSize; // eax

  if ( !dword_AA0448 || dword_AA0468 ) /*0x53e567*/
    return 0; /*0x53e5e7*/
  EnterCriticalSection(&unk_AA0418); /*0x53e56e*/
  dword_AA0468 = fopen(FileName, aRb); /*0x53e582*/
  dword_AA046C = 0; /*0x53e589*/
  if ( dword_AA0468 ) /*0x53e593*/
  {
    dword_AA0444 = 2; /*0x53e59d*/
    SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0460); /*0x53e5a7*/
    if ( WriteAudioStreamToFile(dword_AA0460, dword_AA0468, SampleSize, 0) != 1 ) /*0x53e5c1*/
      dword_AA046C = 1; /*0x53e5c3*/
  }
  LeaveCriticalSection(&unk_AA0418); /*0x53e5d2*/
  return dword_AA0468 != 0; /*0x53e5e5*/
}



// ==== 0x0053E6B0  WinMain_Write_53E6B0  this=-  sig=csp ====
void sub_53E6B0()
{
  signed int SampleSize; // eax

  if ( dword_AA0448 ) /*0x53e6b7*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e6be*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 ) /*0x53e6dd*/
    {
      if ( dword_AA0464 ) /*0x53e6e7*/
      {
        SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e6eb*/
        WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e6fd*/
        fflush(dword_AA0468); /*0x53e708*/
      }
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e715*/
  }
}



// ==== 0x0053E720  UI_Update  this=-  sig=ida-proto ====
int sub_53E720()
{
  return dword_AA0444; /*0x53e725*/
}



// ==== 0x0053E730  IsMessageDialog  this=-  sig=csp ====
int __fastcall IsMessageDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
  int result; // eax

  do /*0x53e74f*/
    result = GameLoopMessagePump(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53e748*/
  while ( !result ); /*0x53e74f*/
  if ( lpMsg->message == 18 ) /*0x53e75b*/
    return 0; /*0x53e75d*/
  return result; /*0x53e754*/
}



// ==== 0x0053E770  GameLoopMessagePump  this=-  sig=csp ====
int __fastcall GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
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

  if ( dword_AA0444 == 1 ) /*0x53e78b*/
  {
    if ( dword_887640 ) /*0x53e797*/
    {
      GetCursorPos(&Point); /*0x53e7a2*/
      dword_AA0434 = (__int64)Point; /*0x53e7b0*/
      (*(void (__thiscall **)(int, __int64 *, char *))(*(_DWORD *)dword_887640 + 68))( /*0x53e7ce*/
        dword_887640,
        &dword_AA0434,
        (char *)&dword_AA0434 + 4);
      if ( dword_AA0434 != dword_AA043C ) /*0x53e7de*/
      {
        v22 = 1; /*0x53e7fa*/
        v6 = EnterCriticalSection; /*0x53e7fe*/
        v21 = dword_AA0430; /*0x53e809*/
        v20 = dword_A8ED84; /*0x53e80d*/
        EnterCriticalSection(&unk_AA0400); /*0x53e811*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_887640 + 56))( /*0x53e827*/
          dword_887640,
          dword_AA0434,
          HIDWORD(dword_AA0434));
        *(_QWORD *)v23 = dword_AA0434; /*0x53e83a*/
        dword_AA043C = dword_AA0434; /*0x53e842*/
        LeaveCriticalSection(&unk_AA0400); /*0x53e84d*/
        BufferedAudioStreamRead((int *)dword_AA0460, (char *)&v20, 20); /*0x53e85f*/
        goto LABEL_6; /*0x53e864*/
      }
    }
  }
  while ( 1 ) /*0x53e866*/
  {
    v6 = EnterCriticalSection; /*0x53e866*/
LABEL_6:
    while ( dword_AA0444 == 2 ) /*0x53e873*/
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
            if ( dword_AA0478 ) /*0x53e8b9*/
              goto LABEL_30; /*0x53e8b9*/
            SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e8c5*/
            if ( SampleSize ) /*0x53e8cc*/
            {
              if ( SampleSize >= 0xC ) /*0x53e984*/
              {
                BufferedAudioStreamRead((int *)dword_AA0464, byte_AA0368, 12); /*0x53e997*/
                dword_AA0478 = 1; /*0x53e99c*/
LABEL_30:
                if ( dword_AA036C > (unsigned int)dword_AA0430 ) /*0x53e9b3*/
                  return 0; /*0x53ebad*/
                v10 = 1; /*0x53e9be*/
                dword_AA0478 = 0; /*0x53e9c5*/
                if ( dword_AA0370 == 1 ) /*0x53e9cb*/
                {
                  BufferedAudioStreamRead((int *)dword_AA0464, (char *)&Point, 8); /*0x53e9d9*/
                  v6(&unk_AA0400); /*0x53e9e3*/
                  dword_AA0434 = (__int64)Point; /*0x53e9f5*/
                  if ( dword_887640 ) /*0x53ea00*/
                    (*(void (__thiscall **)(int, LONG, LONG))(*(_DWORD *)dword_887640 + 56))( /*0x53ea06*/
                      dword_887640,
                      Point.x,
                      Point.y);
                  LeaveCriticalSection(&unk_AA0400); /*0x53ea0e*/
                }
                else
                {
                  BufferedAudioStreamRead((int *)dword_AA0464, (char *)lpMsg, 28); /*0x53ea23*/
                  v11 = lpMsg->hwnd; /*0x53ea2e*/
                  if ( dword_AA0448 && (int)v11 >= 0 && (int)v11 < dword_AA0374 ) /*0x53ea3e*/
                    v12 = (HWND)*((_DWORD *)dword_AA044C + (_DWORD)v11); /*0x53ea46*/
                  else
                    v12 = 0; /*0x53ea4b*/
                  lpMsg->hwnd = v12; /*0x53ea4f*/
                  if ( v12 ) /*0x53ea51*/
                    goto LABEL_54; /*0x53ea51*/
                }
              }
            }
            else if ( dword_AA046C ) /*0x53e8d8*/
            {
              if ( !dword_AA0448 ) /*0x53ea62*/
                goto LABEL_6; /*0x53ea62*/
              v6(&unk_AA0418); /*0x53ea6d*/
              if ( dword_AA0448 ) /*0x53ea75*/
              {
                v6(&unk_AA0418); /*0x53ea7c*/
                if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53ea9f*/
                {
                  v13 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53eaa2*/
                  WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v13, 0); /*0x53eab4*/
                  fflush(dword_AA0468); /*0x53eac0*/
                }
                LeaveCriticalSection(&unk_AA0418); /*0x53eacd*/
              }
              dword_AA0444 = 0; /*0x53ead8*/
              if ( dword_AA0468 ) /*0x53eae0*/
              {
                fclose(dword_AA0468); /*0x53eae3*/
                dword_AA0468 = 0; /*0x53eaeb*/
              }
LABEL_27:
              LeaveCriticalSection(&unk_AA0418); /*0x53e971*/
              goto LABEL_6; /*0x53e97c*/
            }
          }
        }
      }
      if ( dword_AA0448 ) /*0x53e8e6*/
      {
        v6(&unk_AA0418); /*0x53e8ed*/
        if ( dword_AA0448 ) /*0x53e8f5*/
        {
          v6(&unk_AA0418); /*0x53e8fc*/
          if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e91f*/
          {
            v9 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e922*/
            WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v9, 0); /*0x53e934*/
            fflush(dword_AA0468); /*0x53e940*/
          }
          LeaveCriticalSection(&unk_AA0418); /*0x53e94d*/
        }
        dword_AA0444 = 0; /*0x53e958*/
        if ( dword_AA0468 ) /*0x53e960*/
        {
          fclose(dword_AA0468); /*0x53e963*/
          dword_AA0468 = 0; /*0x53e96b*/
        }
        goto LABEL_27; /*0x53e96b*/
      }
    }
    v10 = PeekMessageA(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, wRemoveMsg); /*0x53eb1c*/
LABEL_54:
    if ( dword_AA0444 != 1 || !v10 ) /*0x53eb2d*/
      return v10; /*0x53eba4*/
    v14 = lpMsg->hwnd; /*0x53eb38*/
    if ( dword_AA0448 ) /*0x53eb3c*/
    {
      v15 = (HWND *)dword_AA044C; /*0x53eb43*/
      if ( v14 == (HWND)dword_AA0470 ) /*0x53eb4b*/
      {
        v16 = dword_AA0474; /*0x53eb4d*/
      }
      else
      {
        v16 = 0; /*0x53eb5a*/
        if ( dword_AA0374 <= 0 ) /*0x53eb5e*/
          goto LABEL_65; /*0x53eb5e*/
        while ( *v15 != v14 ) /*0x53eb62*/
        {
          ++v16; /*0x53eb64*/
          ++v15; /*0x53eb65*/
          if ( v16 >= dword_AA0374 ) /*0x53eb6a*/
            goto LABEL_65; /*0x53eb6a*/
        }
        dword_AA0470 = (int)lpMsg->hwnd; /*0x53eb6e*/
        dword_AA0474 = v16; /*0x53eb74*/
      }
      if ( v16 >= 0 ) /*0x53eb7b*/
      {
        v21 = dword_AA0430; /*0x53ebbc*/
        v22 = 0; /*0x53ebc9*/
        v20 = dword_A8ED84; /*0x53ebcd*/
        qmemcpy(v23, lpMsg, sizeof(v23)); /*0x53ebd3*/
        *(_DWORD *)v23 = v16; /*0x53ebdf*/
        BufferedAudioStreamRead((int *)dword_AA0460, (char *)&v20, 40); /*0x53ebe3*/
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

  result = dword_AA0444; /*0x53ec40*/
  if ( dword_AA0444 )
    word_AA0168[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}



// ==== 0x0053EC70  EventClass::GetKeyStateSafe  this=EventClass  sig=csp ====
int __thiscall EventClass::GetKeyStateSafe(EventClass *this)
{
  int result; // eax

  HIWORD(result) = HIWORD(stru_AA0398.AudioStream_field_0xAC); /*0x53ec70*/
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec77*/
    LOWORD(result) = word_AA0168[(unsigned __int8)this]; /*0x53ec87*/
  else
    LOWORD(result) = GetKeyState((unsigned __int8)this); /*0x53ec7a*/
  return result; /*0x53ec80*/
}



// ==== 0x0053EC90  Mouse::GetKeyState  this=MouseClass  sig=csp ====
SHORT __thiscall Mouse::GetKeyState(Mouse *this)
{
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec97*/
    return word_AA0168[(unsigned __int8)this]; /*0x53eca7*/
  else
    return GetAsyncKeyState((unsigned __int8)this); /*0x53ec9a*/
}



// ==== 0x0053ECB0  Waypoint::InitInvalid  this=IPXManagerClass  sig=csp ====
_BYTE *__thiscall Waypoint::InitInvalid(Waypoint *this)
{
  this->__pad_0[0] = -1; /*0x53ecb4*/
  this->__pad_0[1] = -1; /*0x53ecb6*/
  this->__pad_0[2] = -1; /*0x53ecb9*/
  this->__pad_0[3] = -1; /*0x53ecbc*/
  this->__pad_0[4] = -1; /*0x53ecbf*/
  this->__pad_0[5] = -1; /*0x53ecc2*/
  this->__pad_0[6] = -1; /*0x53ecc5*/
  this->__pad_0[7] = -1; /*0x53ecc8*/
  this->__pad_0[8] = -1; /*0x53eccb*/
  this->__pad_0[9] = -1; /*0x53ecce*/
  return this->__pad_0; /*0x53ecd1*/
}



// ==== 0x0053ECE0  NetworkAddress::Assign  this=NetworkAddress  sig=csp ====
_DWORD *__thiscall NetworkAddress::Assign(NetworkAddress *this, _DWORD *a2, int a3, __int16 a4)
{
  _DWORD *result; // eax
  char *m_Port; // ecx

  result = &this->m_IP; /*0x53ece4*/
  m_Port = this->m_Port; /*0x53ece9*/
  *(_DWORD *)m_Port = *(_DWORD *)a3; /*0x53ecec*/
  *((_WORD *)m_Port + 2) = *(_WORD *)(a3 + 4); /*0x53ecf4*/
  if ( dword_828140 == 1 ) /*0x53ed01*/
  {
    *result = *a2; /*0x53ed09*/
  }
  else
  {
    *result = 0; /*0x53ed13*/
    *(_WORD *)result = a4; /*0x53ed19*/
  }
  return result; /*0x53ecf3*/
}



// ==== 0x0053ED20  NetworkID::Assign  this=NetworkID  sig=csp ====
__int16 __thiscall NetworkID::Assign(NetworkID *this, _DWORD *a2, int a3, __int16 a4)
{
  this->NetworkID_field_0x04 = *(_DWORD *)a3; /*0x53ed2a*/
  this->q004 = *(_WORD *)(a3 + 4); /*0x53ed31*/
  if ( dword_828140 == 1 ) /*0x53ed3d*/
  {
    *(_DWORD *)this->__pad_0 = *a2; /*0x53ed45*/
    return (__int16)a2; /*0x53ed3f*/
  }
  else
  {
    *(_DWORD *)this->__pad_0 = 0; /*0x53ed4f*/
    *(_WORD *)this->__pad_0 = a4; /*0x53ed55*/
    return a4; /*0x53ed4a*/
  }
}



// ==== 0x0053ED60  Network::GetAddress  this=Network  sig=csp ====
__int16 __thiscall Network::GetAddress(Network *this, _DWORD *a2, int a3, _WORD *a4)
{
  __int16 result; // ax

  *(_DWORD *)a3 = this->Network_field_0x4; /*0x53ed6a*/
  *(_WORD *)(a3 + 4) = this->Network_field_0x8; /*0x53ed71*/
  result = dword_828140; /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a2 = this->Network_field_0x0; /*0x53ed85*/
  }
  else
  {
    result = this->Network_field_0x0; /*0x53ed8a*/
    *a4 = this->Network_field_0x0; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/
}



// ==== 0x0053EDA0  Network::CopyAddress  this=Network  sig=csp ====
char *__thiscall Network::CopyAddress(Network *this, _DWORD *a2, int a3)
{
  char *result; // eax

  result = (char *)&this->Network_field_0x4; /*0x53eda4*/
  *(_DWORD *)a3 = this->Network_field_0x4; /*0x53edaa*/
  LOWORD(result) = this->Network_field_0x8; /*0x53edad*/
  *(_WORD *)(a3 + 4) = (_WORD)result; /*0x53edb1*/
  *a2 = this->Network_field_0x0; /*0x53edbb*/
  return result; /*0x53edac*/
}



// ==== 0x0053EDC0  Network::CopyAddress_Small  this=Network  sig=csp ====
int __thiscall Network::CopyAddress_Small(char *this, int a2)
{
  char *v3; // ecx

  v3 = this + 4; /*0x53edc4*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x53edc9*/
  *(_WORD *)(a2 + 4) = *((_WORD *)v3 + 2); /*0x53edcf*/
  return a2; /*0x53edd3*/
}



// ==== 0x0053EDE0  Struct::Copy6Bytes  this=Network  sig=csp ====
__int16 __thiscall Struct_Copy6Bytes(char *this, int a2)
{
  char *v2; // ecx
  __int16 result; // ax

  v2 = this + 4; /*0x53ede4*/
  *(_DWORD *)v2 = *(_DWORD *)a2; /*0x53ede9*/
  result = *(_WORD *)(a2 + 4); /*0x53edeb*/
  *((_WORD *)v2 + 2) = result; /*0x53edef*/
  return result; /*0x53edf3*/
}



// ==== 0x0053EE00  Network::IsBroadcastAddr  this=Network  sig=csp ====
int __thiscall Network::IsBroadcastAddr(Network *this)
{
  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( LOBYTE(this->Network_field_0x0) == 0xFF /*0x53ee3b*/
      && BYTE1(this->Network_field_0x0) == 0xFF
      && BYTE2(this->Network_field_0x0) == 0xFF
      && HIBYTE(this->Network_field_0x0) == 0xFF
      && LOBYTE(this->Network_field_0x4) == 0xFF
      && BYTE1(this->Network_field_0x4) == 0xFF
      && BYTE2(this->Network_field_0x4) == 0xFF
      && HIBYTE(this->Network_field_0x4) == 0xFF
      && LOBYTE(this->Network_field_0x8) == 0xFF
      && BYTE1(this->Network_field_0x8) == 0xFF )
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( LOBYTE(this->Network_field_0x4) == 0xFF /*0x53ee5f*/
         && BYTE1(this->Network_field_0x4) == 0xFF
         && BYTE2(this->Network_field_0x4) == 0xFF
         && HIBYTE(this->Network_field_0x4) == 0xFF
         && LOBYTE(this->Network_field_0x8) == 0xFF
         && BYTE1(this->Network_field_0x8) == 0xFF )
  {
    return 1; /*0x53ee66*/
  }
  return 0; /*0x53ee42*/
}



// ==== 0x0053EE70  GUID::Compare  this=GUID  sig=csp ====
int __thiscall GUID::Compare(char *this, int a2)
{
  int result; // eax
  _WORD *v3; // edi
  int v4; // ecx
  _WORD *v5; // esi
  bool v6; // zf
  int v7; // ecx
  _WORD *v8; // edi
  _WORD *v9; // esi
  bool v10; // zf

  result = (int)this; /*0x53ee70*/
  if ( dword_828140 == 2 ) /*0x53ee7d*/
  {
    if ( this->Data4 == *(_DWORD *)(a2 + 4) ) /*0x53ee91*/
    {
      LOWORD(result) = *(_WORD *)this; /*0x53ee97*/
      if ( *(_WORD *)this == *(_WORD *)a2 ) /*0x53ee9d*/
      {
        LOBYTE(result) = 1; /*0x53eea0*/
        return result; /*0x53eea3*/
      }
    }
LABEL_23:
    LOBYTE(result) = 0; /*0x53ef1a*/
    return result; /*0x53ef1b*/
  }
  if ( (*this || this->Data4 || this->Data3 || *(this + 3)) /*0x53eed8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    v7 = 3; /*0x53eef8*/
    v8 = (_WORD *)(a2 + 4); /*0x53eefd*/
    v9 = (_WORD *)(result + 4); /*0x53ef00*/
    v10 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v7 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v10 = *v9++ == *v8++; /*0x53ef05*/
      --v7; /*0x53ef05*/
    }
    while ( v10 ); /*0x53ef05*/
    if ( v10 ) /*0x53ef09*/
    {
      result = *(_DWORD *)result; /*0x53ef0b*/
      if ( result == *(_DWORD *)a2 ) /*0x53ef11*/
      {
        LOBYTE(result) = 1; /*0x53ef14*/
        return result; /*0x53ef17*/
      }
    }
    goto LABEL_23; /*0x53ef11*/
  }
  v3 = (_WORD *)(a2 + 4); /*0x53eedf*/
  v4 = 3; /*0x53eee2*/
  v5 = (_WORD *)(result + 4); /*0x53eee7*/
  v6 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v4 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v6 = *v5++ == *v3++; /*0x53eeec*/
    --v4; /*0x53eeec*/
  }
  while ( v6 ); /*0x53eeec*/
  LOBYTE(result) = v6; /*0x53eef1*/
  return result; /*0x53ee9f*/
}



// ==== 0x0053EF30  NetworkID::Compare  this=Network  sig=csp ====
int __thiscall NetworkID::Compare(bool *this, int a2)
{
  return memcmp(this + 4, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}



// ==== 0x0053EF60  Network::processPacket  this=Network  sig=csp ====
bool __thiscall sub_53EF60(char *this, int a2)
{
  _WORD *v4; // edi
  int v5; // ecx
  _WORD *v6; // esi
  bool v7; // zf
  int v8; // ecx
  _WORD *v9; // edi
  _WORD *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return this->q004 != *(_DWORD *)(a2 + 4) || *(_WORD *)this != *(_WORD *)a2; /*0x53ef8d*/
  if ( (*this || this->q004 || this->q008 || this->q00C) /*0x53efc8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    v8 = 3; /*0x53efe8*/
    v9 = (_WORD *)(a2 + 4); /*0x53efed*/
    v10 = this + 4; /*0x53eff0*/
    v11 = 1; /*0x53eff3*/
    do /*0x53eff5*/
    {
      if ( !v8 ) /*0x53eff5*/
        break; /*0x53eff5*/
      v11 = *v10++ == *v9++; /*0x53eff5*/
      --v8; /*0x53eff5*/
    }
    while ( v11 ); /*0x53eff5*/
    return !v11 || *(_DWORD *)this != *(_DWORD *)a2; /*0x53f001*/
  }
  v4 = (_WORD *)(a2 + 4); /*0x53efcf*/
  v5 = 3; /*0x53efd2*/
  v6 = this + 4; /*0x53efd7*/
  v7 = 1; /*0x53efda*/
  do /*0x53efdc*/
  {
    if ( !v5 ) /*0x53efdc*/
      break; /*0x53efdc*/
    v7 = *v6++ == *v4++; /*0x53efdc*/
    --v5; /*0x53efdc*/
  }
  while ( v7 ); /*0x53efdc*/
  return !v7; /*0x53ef8f*/
}



// ==== 0x0053F020  ObjectClass::method_53F020  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F020(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) > 0; /*0x53f031*/
}



// ==== 0x0053F050  ObjectClass::method_53F050  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F050(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) < 0; /*0x53f061*/
}



// ==== 0x0053F080  ObjectClass::method_53F080  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F080(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) >= 0; /*0x53f091*/
}



// ==== 0x0053F0B0  ObjectClass::method_53F0B0  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F0B0(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) <= 0; /*0x53f0c1*/
}



// ==== 0x0053F0E0  Network::FormatAddress  this=Network  sig=csp ====
char *__thiscall Network::FormatAddress(Network *this, unsigned __int16 *a2)
{
  _DWORD *p_Network_field_0x0; // edx
  int v3; // eax

  p_Network_field_0x0 = a2; /*0x53f0e0*/
  if ( !a2 ) /*0x53f0e9*/
    p_Network_field_0x0 = &this->Network_field_0x0; /*0x53f0eb*/
  v3 = p_Network_field_0x0[1]; /*0x53f0f3*/
  if ( dword_828140 == 1 )
    sprintf(
      &stru_AA0398.__pad_D8[12],
      "%02X %02X %02X %02X : %02X %02X %02X %02X %02X %02X",
      (unsigned __int8)*p_Network_field_0x0,
      BYTE1(*p_Network_field_0x0),
      (unsigned __int8)BYTE2(*p_Network_field_0x0),
      HIBYTE(*p_Network_field_0x0),
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      (unsigned __int8)*((_WORD *)p_Network_field_0x0 + 4),
      HIBYTE(*((_WORD *)p_Network_field_0x0 + 4)));
  else
    sprintf( /*0x53f1cf*/
      &stru_AA0398.__pad_D8[12],
      "%d.%d.%d.%d ; %d",
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      LOWORD(this->Network_field_0x0));
  return &stru_AA0398.__pad_D8[12]; /*0x53f192*/
}



// ==== 0x0053F1F0  Multiplayer::Screen  this=Multiplayer  sig=csp ====
int __thiscall Multiplayer::Screen(Multiplayer *this)
{
  int result; // eax

  dword_828140 = (int)this; /*0x53f1f0*/
  return result; /*0x53f1f6*/
}



// ==== 0x0053F200  Network::SetPort  this=Network  sig=csp ====
__int16 __thiscall Network::SetPort(Network *this, __int16 a2)
{
  __int16 result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    LOWORD(this->Network_field_0x0) = a2; /*0x53f20e*/
    return a2; /*0x53f209*/
  }
  return result; /*0x53f211*/
}



// ==== 0x0053F220  sub_53F220  this=-  sig=ida-proto ====
int sub_53F220()
{
  dword_AA0510 = 0; /*0x53f222*/
  dword_AA0514 = 0; /*0x53f227*/
  dword_AA0518 = 0; /*0x53f22c*/
  dword_AA051C = 0; /*0x53f231*/
  return 0; /*0x53f236*/
}



// ==== 0x0053F240  sub_53F240  this=-  sig=ida-proto ====
void sub_53F240()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f24c*/
  dbl_AA0528 = Math::Sqrt(v0 + v0); /*0x53f25e*/
}



// ==== 0x0053F270  sub_53F270  this=-  sig=ida-proto ====
void sub_53F270()
{
  dbl_AA0598 = dbl_AA0528 / 60.0; /*0x53f27c*/
}



// ==== 0x0053F290  sub_53F290  this=-  sig=ida-proto ====
void sub_53F290()
{
  dbl_AA0580 = 1.0 / dbl_AA0598; /*0x53f29c*/
}



// ==== 0x0053F2B0  sub_53F2B0  this=-  sig=ida-proto ====
void sub_53F2B0()
{
  dbl_AA0570 = 0.0174532925199433 * 45.0; /*0x53f2bc*/
}



// ==== 0x0053F2D0  sub_53F2D0  this=-  sig=ida-proto ====
void sub_53F2D0()
{
  dbl_AA0538 = 0.0174532925199433 * 60.0; /*0x53f2dc*/
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

  v0 = Math::Sin(*(double *)&unk_AA047C[132] - dbl_AA0538); /*0x53f322*/
  result = Math::RoundToInt(v0 * dbl_AA0528 * 0.5); /*0x53f336*/
  dword_AA05A0 = result; /*0x53f33b*/
  return result; /*0x53f340*/
}



// ==== 0x0053F350  sub_53F350  this=-  sig=ida-proto ====
void sub_53F350()
{
  dbl_AA0540 = Math::ArcTan((double)dword_AA05A0 * 0.00390625); /*0x53f367*/
}



// ==== 0x0053F380  sub_53F380  this=-  sig=ida-proto ====
void sub_53F380()
{
  dbl_AA0560 = Math::ArcTan((double)(2 * dword_AA05A0) / dbl_AA0528); /*0x53f3a2*/
}



// ==== 0x0053F3B0  sub_53F3B0  this=-  sig=ida-proto ====
__int64 sub_53F3B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA05A0) + 0.5); /*0x53f3cb*/
  dword_AA0594 = result; /*0x53f3d0*/
  return result; /*0x53f3d6*/
}



// ==== 0x0053F3E0  sub_53F3E0  this=-  sig=ida-proto ====
int sub_53F3E0()
{
  word_AA0520 = 0; /*0x53f3e2*/
  word_AA0522 = 0; /*0x53f3e8*/
  return 0; /*0x53f3ee*/
}



// ==== 0x0053F3F0  sub_53F3F0  this=-  sig=ida-proto ====
int sub_53F3F0()
{
  dword_AA0550 = 0; /*0x53f3f2*/
  dword_AA0554 = 0; /*0x53f3f7*/
  dword_AA0558 = 0; /*0x53f3fc*/
  return 0; /*0x53f401*/
}



// ==== 0x0053F410  sub_53F410  this=-  sig=ida-proto ====
int sub_53F410()
{
  dword_AA0590 = 0; /*0x53f415*/
  dword_AA0588 = 128; /*0x53f41f*/
  dword_AA058C = 128; /*0x53f424*/
  return 128; /*0x53f429*/
}



// ==== 0x0053F430  IPXConnClass::constructor  this=IPXConnClass  sig=csp ====
void *__thiscall IPXConnClass::constructor(
        IPXConnClass *this,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        _DWORD *a6,
        int a7,
        wchar_t *Source,
        int a9)
{
  int v10; // ecx
  __int16 v11; // dx
  int v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection((ModemConnectionClass *)this, a2, a3, a4, a5, 2, -1, 60, a9); /*0x53f458*/
  Waypoint::InitInvalid((Waypoint *)((char *)this + 76)); /*0x53f462*/
  *(_DWORD *)this->__pad_0 = &IPXConnClass::`vftable'; /*0x53f46b*/
  if ( a6 ) /*0x53f473*/
  {
    *((_DWORD *)this + 19) = *a6; /*0x53f479*/
    this->PacketsReceived = a6[1]; /*0x53f47e*/
    *((_DWORD *)this + 21) = a6[2]; /*0x53f484*/
  }
  *((_DWORD *)this + 25) = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((Network *)((char *)this + 76), &a9, (int)&v13); /*0x53f4ab*/
  v10 = v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  this->Socket = 0; /*0x53f4bc*/
  *((_DWORD *)this + 22) = v10; /*0x53f4c4*/
  *((_WORD *)this + 46) = v11; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}



// ==== 0x0053F4E0  IPXConnClass::ZeroInitAndSetup_0  this=IPXConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0(IPXConnClass *this)
{
  return Struct::ZeroInitAndSetup((ConnectionClass *)this);
}



// ==== 0x0053F4F0  Network_Init_53F4F0  this=-  sig=csp ====
int __fastcall sub_53F4F0(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  LOWORD(dword_AA0568) = a1; /*0x53f4f4*/
  dword_AA0548 = a2; /*0x53f4ff*/
  dword_AA055C = a3; /*0x53f509*/
  dword_AA0578 = a4; /*0x53f512*/
  dword_AA0530 = a5; /*0x53f51c*/
  dword_AA0508 = a6; /*0x53f522*/
  dword_AA056C = a7; /*0x53f527*/
  dword_AA05A4 = 1; /*0x53f52d*/
  return a6; /*0x53f537*/
}



// ==== 0x0053F540  ObjectClass::Network_Init_53F540  this=ObjectClass  sig=csp ====
int Network_Init_53F540(ObjectClass *this)
{
  unsigned __int16 v1; // si

  v1 = *(_WORD *)&stru_AA0398.__pad_D8[248]; /*0x53f54d*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 80))( /*0x53f556*/
    *(_DWORD *)&stru_887598.isAliveFlag,
    stru_A8EB00.ObjectTypeClass[45]);
  dword_AA05A8 = (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 60))( /*0x53f570*/
                   *(_DWORD *)&stru_887598.isAliveFlag,
                   v1);
  if ( dword_AA05A8 ) /*0x53f576*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag) ) /*0x53f580*/
    {
      dword_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x53f59a*/
    dword_AA05A8 = 0; /*0x53f59d*/
  }
  return 0; /*0x53f575*/
}



// ==== 0x0053F5B0  ObjectClass::Network_Helper  this=ObjectClass  sig=csp ====
int Network_Helper(ObjectClass *this)
{
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x53f5b8*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 32))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x53f5bc*/
  dword_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}



// ==== 0x0053F5D0  IPXConnClass::send  this=IPXConnClass  sig=csp ====
bool __thiscall IPXConnClass::send(IPXConnClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(bool (__stdcall **)(int, int, char *, _DWORD, int, _DWORD))(*(_DWORD *)this->ConnectionClass + 40))( /*0x53f5ec*/
           a2,
           a3,
           (char *)this + 76,
           0,
           a6,
           0);
}



// ==== 0x0053F650  IPXConnClass::receive  this=IPXConnClass  sig=csp ====
int __thiscall IPXConnClass::receive(IPXConnClass *this, int a2, int a3, int *a4, int **a5, int a6, int a7)
{
  int **v8; // esi
  int v9; // edi
  int v10; // ebp
  char LinkedIndex; // al
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int ConnectionSpeed; // eax
  int v17[2]; // [esp+10h] [ebp-14h] BYREF
  NetworkID v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-4h]

  Waypoint::InitInvalid((Waypoint *)&v18); /*0x53f65d*/
  v8 = a5; /*0x53f666*/
  *(_DWORD *)v18.__pad_0 = *a4; /*0x53f670*/
  v18.NetworkID_field_0x04 = a4[1]; /*0x53f677*/
  v19 = a4[2]; /*0x53f67e*/
  if ( a5 ) /*0x53f682*/
  {
    Network::CopyAddress((Network *)a4, &a4, (int)v17); /*0x53f68e*/
    a4 = *v8; /*0x53f69f*/
    NetworkID::Assign(&v18, &a4, (int)v17, 0); /*0x53f6a9*/
  }
  v9 = 0; /*0x53f6b2*/
  if ( (_BYTE)a6 || !byte_A8DBA0 ) /*0x53f6c3*/
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
    LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], *((_DWORD *)this + 25)); /*0x53f6dd*/
    if ( !LinkedIndex ) /*0x53f6e4*/
      return 0; /*0x53f6ef*/
    *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x53f6f2*/
  }
  v18 = qword_A8DBA4; /*0x53f706*/
  v9 = *(_DWORD *)&dword_841F3C; /*0x53f710*/
  v19 = dword_A8DBAC; /*0x53f71a*/
  if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40) /*0x53f742*/
    && (unsigned __int8)NetworkID::Compare((bool *)v18.__pad_0, *dword_A8DA78 + 40) )
  {
    goto LABEL_13; /*0x53f749*/
  }
  v9 = *(_DWORD *)&dword_A8DBBC; /*0x53f752*/
  *(_WORD *)(a2 + 12) = dword_841F3C; /*0x53f75b*/
  *(_DWORD *)(a2 + 8) = 0; /*0x53f75f*/
LABEL_14:
  if ( *(_DWORD *)&dword_A8B238 != 4 || byte_A8DBA0 ) /*0x53f78a*/
    goto LABEL_27; /*0x53f78a*/
  v13 = IPXManagerClass::receivePacket(&unk_A8E9C0, (int)this); /*0x53f792*/
  v14 = v13; /*0x53f797*/
  if ( v13 == -4 ) /*0x53f79c*/
  {
    v15 = *(_DWORD *)&dword_A8DBBC; /*0x53f7e5*/
    if ( !dword_A8DBBC ) /*0x53f7ed*/
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
  if ( !byte_A8DBA0 ) /*0x53f7af*/
  {
LABEL_23:
    if ( v13 >= Network::GetSendCount(&unk_A8E9C0) ) /*0x53f7cb*/
      goto LABEL_27; /*0x53f7cb*/
    ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v14); /*0x53f7d3*/
    LOWORD(v15) = IPXConnClass::closeConnection((IPXConnClass *)&dword_A8B238, ConnectionSpeed); /*0x53f7de*/
LABEL_26:
    v9 = v15; /*0x53f7ef*/
    goto LABEL_27; /*0x53f7ef*/
  }
  v15 = *(_DWORD *)&dword_A8DBBC; /*0x53f7b1*/
  if ( dword_A8DBBC ) /*0x53f7b9*/
    goto LABEL_26; /*0x53f7b9*/
LABEL_27:
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x53f7f9*/
    (*(void (__thiscall **)(_DWORD, int, int, NetworkID *, int, int, _DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag /*0x53f812*/
                                                                                 + 12))(
      *(_DWORD *)&stru_887598.isAliveFlag,
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
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_887628 + 16))(dword_887628, a1, a2, 0); /*0x53f83f*/
  return 1; /*0x53f847*/
}



// ==== 0x0053F850  IPXConnClass::QueryInterface  this=IPXConnClass  sig=csp ====
_DWORD *__thiscall IPXConnClass::QueryInterface(IPXConnClass *this, char a2)
{
  *(_DWORD *)this->ConnectionClass = &IPXConnClass::`vftable'; /*0x53f853*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x53f859*/
  if ( (a2 & 1) != 0 ) /*0x53f863*/
    __3_YAXPAX_Z(this); /*0x53f866*/
  return this->ConnectionClass; /*0x53f870*/
}



// ==== 0x0053F880  sub_53F880  this=-  sig=ida-proto ====
int sub_53F880()
{
  dword_AA05B8 = 0; /*0x53f882*/
  dword_AA05BC = 0; /*0x53f887*/
  dword_AA05C0 = 0; /*0x53f88c*/
  dword_AA05C4 = 0; /*0x53f891*/
  return 0; /*0x53f896*/
}



// ==== 0x0053F8A0  sub_53F8A0  this=-  sig=ida-proto ====
void sub_53F8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f8ac*/
  dbl_AA05D0 = Math::Sqrt(v0 + v0); /*0x53f8be*/
}



// ==== 0x0053F8D0  sub_53F8D0  this=-  sig=ida-proto ====
void sub_53F8D0()
{
  dbl_AA0620 = dbl_AA05D0 / 60.0; /*0x53f8dc*/
}



// ==== 0x0053F8F0  sub_53F8F0  this=-  sig=ida-proto ====
void sub_53F8F0()
{
  dbl_AA0608 = 1.0 / dbl_AA0620; /*0x53f8fc*/
}



// ==== 0x0053F910  sub_53F910  this=-  sig=ida-proto ====
void sub_53F910()
{
  dbl_AA0600 = 0.0174532925199433 * 45.0; /*0x53f91c*/
}



// ==== 0x0053F930  sub_53F930  this=-  sig=ida-proto ====
void sub_53F930()
{
  dbl_AA05D8 = 0.0174532925199433 * 60.0; /*0x53f93c*/
}



// ==== 0x0053F950  sub_53F950  this=-  sig=ida-proto ====
void sub_53F950()
{
  dbl_AA05B0 = 0.0174532925199433 * 90.0; /*0x53f95c*/
}



// ==== 0x0053F970  sub_53F970  this=-  sig=ida-proto ====
__int64 sub_53F970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA05B0 - dbl_AA05D8); /*0x53f982*/
  result = Math::RoundToInt(v0 * dbl_AA05D0 * 0.5); /*0x53f996*/
  dword_AA0628 = result; /*0x53f99b*/
  return result; /*0x53f9a0*/
}



// ==== 0x0053F9B0  sub_53F9B0  this=-  sig=ida-proto ====
void sub_53F9B0()
{
  dbl_AA05E0 = Math::ArcTan((double)dword_AA0628 * 0.00390625); /*0x53f9c7*/
}



// ==== 0x0053F9E0  sub_53F9E0  this=-  sig=ida-proto ====
void sub_53F9E0()
{
  dbl_AA05F8 = Math::ArcTan((double)(2 * dword_AA0628) / dbl_AA05D0); /*0x53fa02*/
}



// ==== 0x0053FA10  sub_53FA10  this=-  sig=ida-proto ====
__int64 sub_53FA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0628) + 0.5); /*0x53fa2b*/
  dword_AA061C = result; /*0x53fa30*/
  return result; /*0x53fa36*/
}



// ==== 0x0053FA40  sub_53FA40  this=-  sig=ida-proto ====
int sub_53FA40()
{
  word_AA05C8 = 0; /*0x53fa42*/
  word_AA05CA = 0; /*0x53fa48*/
  return 0; /*0x53fa4e*/
}



// ==== 0x0053FA50  sub_53FA50  this=-  sig=ida-proto ====
int sub_53FA50()
{
  dword_AA05E8 = 0; /*0x53fa52*/
  dword_AA05EC = 0; /*0x53fa57*/
  dword_AA05F0 = 0; /*0x53fa5c*/
  return 0; /*0x53fa61*/
}



// ==== 0x0053FA70  sub_53FA70  this=-  sig=ida-proto ====
int sub_53FA70()
{
  dword_AA0618 = 0; /*0x53fa75*/
  dword_AA0610 = 128; /*0x53fa7f*/
  dword_AA0614 = 128; /*0x53fa84*/
  return 128; /*0x53fa89*/
}



// ==== 0x0053FA90  IPXGlobalConnClass::Network_Init_53FA90  this=IPXGlobalConnClass  sig=csp ====
int *__thiscall Network_Init_53FA90(IPXGlobalConnClass *this, int a2, int a3, int a4, __int16 a5, __int16 a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  Waypoint *v10; // ebp
  int v11; // ecx
  int v12; // eax

  IPXConnClass::constructor((IPXConnClass *)this, a2, a3, a4 + 2, a6, 0, 0, &g_TypeClass_DefaultString, 12); /*0x53faba*/
  *(_DWORD *)this->__pad_0 = &IPXGlobalConnClass::`vftable'; /*0x53facc*/
  *((_WORD *)this + 92) = a5; /*0x53fad2*/
  *((_DWORD *)this + 49) = 0; /*0x53fad9*/
  *((_BYTE *)this + 200) = 1; /*0x53fadf*/
  *((_DWORD *)this + 53) = a3; /*0x53fae6*/
  v7 = __2_YAPAXI_Z(4 * a3); /*0x53faec*/
  v8 = *((_DWORD *)this + 53); /*0x53faf1*/
  this->q034 = v7; /*0x53faf7*/
  v9 = __2_YAPAXI_Z(12 * v8); /*0x53fb09*/
  if ( v9 ) /*0x53fb10*/
  {
    v10 = (Waypoint *)v9; /*0x53fb15*/
    if ( v8 - 1 >= 0 ) /*0x53fb19*/
    {
      do /*0x53fb29*/
      {
        Waypoint::InitInvalid(v10); /*0x53fb20*/
        v10 = (Waypoint *)((char *)v10 + 12); /*0x53fb25*/
        --v8; /*0x53fb28*/
      }
      while ( v8 ); /*0x53fb29*/
    }
  }
  else
  {
    v9 = 0; /*0x53fb2f*/
  }
  v11 = *((_DWORD *)this + 53); /*0x53fb31*/
  v12 = 0; /*0x53fb37*/
  *((_DWORD *)this + 51) = v9; /*0x53fb3b*/
  if ( v11 > 0 ) /*0x53fb41*/
  {
    do /*0x53fb5a*/
    {
      ++v12; /*0x53fb49*/
      *(_DWORD *)(this->q034 + 4 * v12 - 4) = -1; /*0x53fb4a*/
    }
    while ( v12 < *((_DWORD *)this + 53) ); /*0x53fb5a*/
  }
  *((_DWORD *)this + 54) = 0; /*0x53fb5c*/
  return (int *)this->__pad_0; /*0x53fb64*/
}



// ==== 0x0053FBD0  IPXGlobalConnClass::Flush  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Flush(
        IPXGlobalConnClass *this,
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

  Waypoint::InitInvalid((Waypoint *)v11); /*0x53fbdc*/
  *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 8) = 0; /*0x53fbe6*/
  *(_WORD *)(this->IPXGlobalConnClass_field_0x20 + 12) = 0; /*0x53fbec*/
  *(_WORD *)this->IPXGlobalConnClass_field_0x20 = this->IPXGlobalConnClass_field_0x24; /*0x53fbf7*/
  *(_BYTE *)(this->IPXGlobalConnClass_field_0x20 + 2) = !a5 || !a4; /*0x53fc0d*/
  *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 4) = *(_DWORD *)(this->IPXGlobalConnClass_field_0x04 + 44); /*0x53fc22*/
  if ( a7 ) /*0x53fc2b*/
    *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 4) = a7; /*0x53fc30*/
  *(_WORD *)(this->IPXGlobalConnClass_field_0x20 + 14) = *((_WORD *)this + 92); /*0x53fc3f*/
  *(_BYTE *)(this->IPXGlobalConnClass_field_0x20 + 3) = 0; /*0x53fc46*/
  if ( a4 ) /*0x53fc49*/
  {
    v8 = a4[1]; /*0x53fc4d*/
    v9 = a4[2]; /*0x53fc50*/
    v11[0] = *a4; /*0x53fc53*/
    v11[1] = v8; /*0x53fc57*/
    v11[2] = v9; /*0x53fc5b*/
  }
  qmemcpy((void *)(this->IPXGlobalConnClass_field_0x20 + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket( /*0x53fc99*/
           (ConnectionClass *)this->IPXGlobalConnClass_field_0x04,
           (const void *)this->IPXGlobalConnClass_field_0x20,
           a3 + 16,
           v11,
           12,
           a6);
}



// ==== 0x0053FCB0  IPXGlobalConnClass::GetQueueSize  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::GetQueueSize(IPXGlobalConnClass *this, _WORD *a2, signed int a3, int *a4, int a5)
{
  int IPXGlobalConnClass_field_0x04; // ecx
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
  char v20[4]; // [esp+8h] [ebp-1Ch] BYREF
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]
  __int16 IPXGlobalConnClass_field_0x24; // [esp+14h] [ebp-10h] BYREF
  char v24; // [esp+16h] [ebp-Eh]
  char v25; // [esp+17h] [ebp-Dh]
  int v26; // [esp+18h] [ebp-Ch]
  __int16 v27; // [esp+22h] [ebp-2h]

  if ( *a2 != LOWORD(this->IPXGlobalConnClass_field_0x24) ) /*0x53fcc3*/
    return 0; /*0x53fccc*/
  if ( !*((_BYTE *)a2 + 2) ) /*0x53fcd9*/
  {
    v11 = a5; /*0x53fd92*/
    *(_DWORD *)v20 = *a4; /*0x53fd9b*/
    v21 = a4[1]; /*0x53fda2*/
    v22 = a4[2]; /*0x53fda9*/
    if ( (_WORD)a5 ) /*0x53fdad*/
      Network::SetPort((Network *)v20, a5); /*0x53fdb4*/
    v12 = 0; /*0x53fdbf*/
    if ( *((int *)this + 53) <= 0 ) /*0x53fdc3*/
    {
LABEL_24:
      if ( !ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12) ) /*0x53fe20*/
        goto LABEL_30; /*0x53fe20*/
      v14 = (_DWORD *)(*((_DWORD *)this + 51) + 12 * *((_DWORD *)this + 54)); /*0x53fe31*/
      *v14 = *(_DWORD *)v20; /*0x53fe38*/
      v14[1] = v21; /*0x53fe3e*/
      v14[2] = v22; /*0x53fe45*/
      *(_DWORD *)(this->q034 + 4 * *((_DWORD *)this + 54)) = *((_DWORD *)a2 + 1); /*0x53fe57*/
      v15 = *((_DWORD *)this + 53); /*0x53fe60*/
      v16 = *((_DWORD *)this + 54) + 1; /*0x53fe67*/
      *((_DWORD *)this + 54) = v16; /*0x53fe69*/
      if ( v16 >= v15 ) /*0x53fe71*/
        *((_DWORD *)this + 54) = 0; /*0x53fe73*/
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
        if ( (unsigned __int8)GUID::Compare(v20, v13 + *((_DWORD *)this + 51)) /*0x53fdf1*/
          && *((_DWORD *)a2 + 1) == *(_DWORD *)(this->q034 + 4 * v12) )
        {
          break; /*0x53fdf1*/
        }
        ++v12; /*0x53fdfd*/
        v13 += 12; /*0x53fdfe*/
        if ( (signed int)v12 >= *((_DWORD *)this + 53) ) /*0x53fe03*/
          goto LABEL_23; /*0x53fe03*/
      }
      v11 = a5; /*0x53fe86*/
    }
    v17 = *((_DWORD *)a2 + 1); /*0x53fe8e*/
    v18 = *((_WORD *)this + 92); /*0x53fe91*/
    IPXGlobalConnClass_field_0x24 = this->IPXGlobalConnClass_field_0x24; /*0x53fe98*/
    v24 = 2; /*0x53fe9f*/
    v26 = v17; /*0x53feaa*/
    v27 = v18; /*0x53feb4*/
    v25 = 0; /*0x53feb9*/
    Debug::Log(); /*0x53febe*/
    v19 = dword_A8EA0C; /*0x53fec3*/
    LOBYTE(v19) = this == (IPXGlobalConnClass *)dword_A8EA0C; /*0x53fed3*/
    if ( (*(int (__thiscall **)(IPXGlobalConnClass *, __int16 *, int, int *, int, int, int))(*(_DWORD *)this->__pad_0 /*0x53fee4*/
                                                                                           + 36))(
           this,
           &IPXGlobalConnClass_field_0x24,
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
    *(_DWORD *)v20 = *a4; /*0x53fd45*/
    v21 = a4[1]; /*0x53fd4c*/
    v22 = a4[2]; /*0x53fd53*/
    if ( (_WORD)a5 ) /*0x53fd5e*/
      Network::SetPort((Network *)v20, a5); /*0x53fd65*/
    ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12); /*0x53fd7a*/
    return 1; /*0x53fd8b*/
  }
  if ( *((_BYTE *)a2 + 2) != 2 ) /*0x53fce3*/
    return 1; /*0x53fce3*/
  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x53fce9*/
  v8 = 0; /*0x53fcec*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x53fcf3*/
    return 1; /*0x53fefb*/
  while ( 1 ) /*0x53fcfa*/
  {
    TileIndex = (_DWORD *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v8); /*0x53fcfa*/
    v10 = TileIndex[5]; /*0x53fcff*/
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)(v10 + 4) && !*(_BYTE *)(v10 + 2) ) /*0x53fd0a*/
      break; /*0x53fd0a*/
    IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x53fd11*/
    if ( ++v8 >= *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ) /*0x53fd18*/
      return 1; /*0x53fd26*/
  }
  *TileIndex |= 2u; /*0x53fd30*/
  return 1; /*0x53fcc5*/
}



// ==== 0x0053FF10  IPXGlobalConnClass::ConnectToHost  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::ConnectToHost(
        IPXGlobalConnClass *this,
        void *a2,
        signed int *a3,
        _DWORD *a4,
        _WORD *a5)
{
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  _DWORD *TileType; // eax
  int v7; // edx
  int v8; // ebx
  _DWORD *v9; // edx

  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x53ff10*/
  if ( !IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ) /*0x53ff13*/
    return 0; /*0x53ff13*/
  TileType = (_DWORD *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, 0); /*0x53ff1c*/
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
int __thiscall TerrainTypeClass::GetTileData(
        int *this,
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
  int v10; // edx
  _DWORD *v11; // edx

  v7 = (_DWORD *)this->q004; /*0x53ffa0*/
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



// ==== 0x00530000  ObjectClass::LoadExpansionMixFiles  this=ObjectClass  sig=csp ====
char LoadExpansionMixFiles(ObjectClass *this)
{
  HANDLE FirstFileA; // edi
  MixFileClass *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  HANDLE v5; // edi
  MixFileClass *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-140h] BYREF

  FirstFileA = FindFirstFileA(aEcacheMix, &FindFileData); /*0x530022*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x530035*/
      {
        v2 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x53003d*/
        if ( v2 ) /*0x530047*/
        {
          v3 = MixFileClass::FromFile(v2, FindFileData.cFileName, (int)dword_886980); /*0x53005a*/
          if ( v3 ) /*0x53005e*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530097*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v4 = g_MixFilePool_Count++; /*0x5300a4*/
              *((_DWORD *)g_MixFilePool + v4) = v3; /*0x5300b3*/
            }
            ReturnTrue(0); /*0x5300ba*/
          }
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x5300c5*/
    FindClose(FirstFileA); /*0x5300d0*/
  }
  v5 = FindFirstFileA(aElocalMix, &FindFileData); /*0x5300e2*/
  if ( v5 != (HANDLE)-1 ) /*0x5300e7*/
  {
    do /*0x530178*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5300f5*/
      {
        v6 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5300f9*/
        if ( v6 ) /*0x530103*/
        {
          v7 = MixFileClass::FromFile(v6, FindFileData.cFileName, (int)dword_886980); /*0x530116*/
          if ( v7 ) /*0x53011a*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530153*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v8 = g_MixFilePool_Count++; /*0x530160*/
              *((_DWORD *)g_MixFilePool + v8) = v7; /*0x53016f*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v5, &FindFileData) ); /*0x530178*/
    FindClose(v5); /*0x530183*/
  }
  return 1; /*0x530189*/
}



// ==== 0x005301A0  MixFileClass::Bootstrap  this=MixFileClass  sig=csp ====
char MixFileClass::Bootstrap(MixFileClass *this)
{
  int i; // edi
  _DWORD *v2; // eax
  char v3; // bl
  MixFileClass *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  MixFileClass *v7; // eax
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  MixFileClass *v11; // eax
  MixFileClass *v12; // eax
  _DWORD *v13; // eax
  MixFileClass *v14; // eax
  MixFileClass *v15; // eax
  _DWORD *v16; // eax
  int v17; // [esp+10h] [ebp-68h]
  RawFileClass v18; // [esp+14h] [ebp-64h] BYREF
  char Buffer[64]; // [esp+38h] [ebp-40h] BYREF

  v17 = dword_81C1D0; /*0x5301b1*/
  SetSoundWarning(-2); /*0x5301b5*/
  for ( i = 99; i >= 0; --i ) /*0x5301ba*/
  {
    sprintf(Buffer, "EXPANDMD%02d.MIX", i); /*0x5301ca*/
    v2 = RawFileClass::Construct(&v18, (int)Buffer); /*0x5301db*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x5301ee*/
    RawFileClass::Dtor(&v18); /*0x5301f0*/
    if ( v3 ) /*0x5301f7*/
    {
      v4 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5301ff*/
      if ( v4 ) /*0x530209*/
      {
        v5 = MixFileClass::FromFile(v4, Buffer, (int)dword_886980); /*0x53021c*/
        if ( v5 ) /*0x530220*/
        {
          if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530258*/
            || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
            && g_MixFilePool_GrowSize > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                 &g_MixFileArray,
                 g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                 0) )
          {
            v6 = g_MixFilePool_Count++; /*0x530265*/
            *((_DWORD *)g_MixFilePool + v6) = v5; /*0x530274*/
          }
          Debug::Log_0(); /*0x530281*/
        }
      }
    }
  }
  v7 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x530292*/
  if ( !v7 ) /*0x53029c*/
  {
    g_MixFile_RA2MD = 0; /*0x5302de*/
    return 0; /*0x5302de*/
  }
  g_MixFile_RA2MD = (int)MixFileClass::FromFile(v7, aRa2mdMix, (int)dword_886980); /*0x5302b1*/
  if ( !g_MixFile_RA2MD ) /*0x5302b6*/
    return 0; /*0x5302b6*/
  v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5302ba*/
  if ( !v8 ) /*0x5302c4*/
  {
    g_MixFile_RA2 = 0; /*0x5302ef*/
    return 0; /*0x5302fd*/
  }
  v9 = MixFileClass::FromFile(v8, aRa2Mix, (int)dword_886980); /*0x5302d2*/
  g_MixFile_RA2 = (int)v9; /*0x5302d7*/
  if ( !v9 ) /*0x530300*/
    return 0; /*0x530300*/
  Debug::Log_0(); /*0x530307*/
  v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x53030e*/
  if ( !v11 ) /*0x530318*/
  {
    g_MixFile_CACHEMD = 0; /*0x530375*/
    return 0; /*0x530383*/
  }
  g_MixFile_CACHEMD = (int)MixFileClass::FromFile(v11, aCachemdMix, (int)dword_886980); /*0x53032d*/
  if ( !g_MixFile_CACHEMD || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCachemdMix) ) /*0x53033b*/
    return 0; /*0x53033b*/
  Debug::Log_0(); /*0x530349*/
  v12 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x530350*/
  if ( !v12 ) /*0x53035a*/
  {
    g_MixFile_CACHE = 0; /*0x530385*/
    return 0; /*0x530393*/
  }
  v13 = MixFileClass::FromFile(v12, aCacheMix_0, (int)dword_886980); /*0x530368*/
  g_MixFile_CACHE = (int)v13; /*0x53036d*/
  if ( !v13 || !_do_always_noconv_codecvt_base_std__MBE_NXZ_7((std::codecvt_base *)aCacheMix_0) ) /*0x5303a3*/
    return 0; /*0x5303a3*/
  Debug::Log_0(); /*0x5303b5*/
  v14 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5303bc*/
  if ( !v14 ) /*0x5303c6*/
  {
    g_MixFile_LOCALMD = 0; /*0x53040d*/
    return 0; /*0x53041b*/
  }
  g_MixFile_LOCALMD = (int)MixFileClass::FromFile(v14, aLocalmdMix, (int)dword_886980); /*0x5303db*/
  if ( !g_MixFile_LOCALMD ) /*0x5303e0*/
    return 0; /*0x5303e0*/
  v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5303e8*/
  if ( !v15 ) /*0x5303f2*/
  {
    g_MixFile_LOCAL = 0; /*0x53041d*/
    return 0; /*0x53042b*/
  }
  v16 = MixFileClass::FromFile(v15, aLocalMix, (int)dword_886980); /*0x530400*/
  g_MixFile_LOCAL = (int)v16; /*0x530405*/
  if ( !v16 ) /*0x53042e*/
    return 0; /*0x5302ed*/
  Debug::Log_0(); /*0x530439*/
  SetSoundWarning(v17); /*0x530445*/
  return 1; /*0x5302e4*/
}



// ==== 0x00530460  MixFile::LoadAll  this=MixFile  sig=csp ====
bool __thiscall MixFile::LoadAll(MixFile *this)
{
  _DWORD *v1; // eax
  char v2; // bl
  MixFileClass *v3; // eax
  MixFileClass *v5; // eax
  _DWORD *v6; // eax
  MixFileClass *v7; // eax
  _DWORD *v8; // eax
  MixFileClass *v9; // eax
  MixFileClass *v10; // eax
  _DWORD *v11; // eax
  char v12; // bl
  MixFileClass *v13; // eax
  _DWORD *v14; // eax
  char v15; // bl
  MixFileClass *v16; // eax
  _DWORD *v17; // eax
  char v18; // bl
  MixFileClass *v19; // eax
  int v20; // esi
  MixFileClass *v21; // eax
  MixFileClass *v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  MixFileClass *v25; // eax
  MixFileClass *v26; // eax
  _DWORD *v27; // esi
  int v28; // eax
  _DWORD *v29; // eax
  char v30; // bl
  MixFileClass *v31; // eax
  _DWORD *v32; // eax
  char v33; // bl
  MixFileClass *v34; // eax
  _DWORD *v35; // eax
  char v36; // bl
  MixFileClass *v37; // eax
  _DWORD *v38; // eax
  char v39; // bl
  MixFileClass *v40; // eax
  _DWORD *v41; // eax
  char v42; // bl
  MixFil... [19161 chars total]



// ==== 0x005312A0  ObjectClass::ShowLoadingScreen  this=ObjectClass  sig=csp ====
int __usercall ShowLoadingScreen@<eax>(ObjectClass *this, wchar_t a2@<di>, int a3@<esi>)
{
  int *v3; // ebp
  __int16 *v4; // esi
  char *v5; // ebp
  int i; // edx
  char *v7; // eax
  char v8; // cl
  ConvertClass *v9; // eax
  char *v10; // ecx
  int v11; // edx
  wchar_t *StringCSF; // edi
  int Instance; // esi
  int v14; // eax
  wchar_t *v15; // eax
  size_t v16; // edi
  int v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  __int64 v21; // rax
  void *v22; // esi
  wchar_t v25; // [esp-10h] [ebp-B8h]
  wchar_t v26; // [esp-10h] [ebp-B8h]
  wchar_t v27; // [esp-10h] [ebp-B8h]
  wchar_t v28; // [esp-10h] [ebp-B8h]
  int v29; // [esp-10h] [ebp-B8h]
  int *v31; // [esp-8h] [ebp-B0h]
  int v32; // [esp+0h] [ebp-A8h] BYREF
  int v33; // [esp+4h] [ebp-A4h]
  int v34; // [esp+8h] [ebp-A0h]
  int v35[2]; // [esp+Ch] [ebp-9Ch] BYREF
  __int16 v36; // [esp+14h] [ebp-94h]
  void *Block; // [esp+18h] [ebp-90h]
  int v38[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  int v39; // [esp+24h] [ebp-84h]
  int v40; // [esp+28h] [ebp-80h]
  struct tagRECT Rect; // [esp+2Ch] [ebp-7Ch] BYREF
  CCFileClass v42; // [esp+3Ch] [ebp-6Ch] BYREF
  char v43[12]; // [esp+94h] [ebp-14h] BYREF
  int v44; // [esp+A0h] [ebp-8h]

  v31 = v3; /*0x5312a7*/
  CCFileClass::Construct(&v42, aGlsmdPal); /*0x5312b3*/
  v4 = 0; /*0x5312ba*/
  v5 = 0; /*0x5312c1*/
  Block = 0; /*0x5312c3*/
  v34 = 0; /*0x5312c7*/
  if ( (unsigned __int8)CCFileClass::Open(&v42, 0) ) /*0x5312cb*/
  {
    v5 = (char *)CCFileClass::ReadEntireFile(&v42); /*0x5312e5*/
    CCFileClass::Reset(&v42); /*0x5312e7*/
    for ( i = 0; i < 256; ++i ) /*0x5312ec*/
    {
      v7 = &v5[2 * (i % 256) + i % 256]; /*0x531302*/
      LOBYTE(v36) = 4 * *v7; /*0x531309*/
      HIBYTE(v36) = 4 * v7[1]; /*0x531313*/
      v8 = 4 * v7[2]; /*0x53131f*/
      *(_WORD *)v7 = v36; /*0x531323*/
      v7[2] = v8; /*0x53132c*/
    }
    if ( v5 ) /*0x531333*/
    {
      v9 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x53133a*/
      if ( v9 ) /*0x531344*/
      {
        v34 = (int)ConvertClass::Construct(v9, (int)v5, (int)&FileSystem_TEMPERAT_PAL, (int)g_DSurface_Primary, 1, 0); /*0x531363*/
        if ( v34 ) /*0x531367*/
        {
          v10 = aGlssmdShp; /*0x53136e*/
          if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x531378*/
            v10 = aGlslmdShp; /*0x53137a*/
          Block = (void *)SearchMIXFile(v10, 0); /*0x531386*/
          v4 = (__int16 *)Block; /*0x53138a*/
        }
      }
      else
      {
        v34 = 0; /*0x53166f*/
      }
    }
  }
  GetClientRect(g_hWnd, &Rect); /*0x531398*/
  v38[0] = 0; /*0x5313a2*/
  v38[1] = 0; /*0x5313b8*/
  v39 = Rect.right - Rect.left; /*0x5313bc*/
  v40 = Rect.bottom - Rect.top; /*0x5313c0*/
  if ( v4 ) /*0x5313c4*/
  {
    v11 = v4[2]; /*0x5313cf*/
    v35[0] = (Rect.right - Rect.left - v4[1]) / 2; /*0x5313d5*/
    v35[1] = (Rect.bottom - Rect.top - v11) / 2; /*0x5313e5*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden, v34, (int)v4, 0, v35, v38, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x53140e*/
  }
  StringCSF = GetStringCSF(aTxtCopyright, 0, g_Str_File_Init_CPP, 4930); /*0x53142e*/
  Instance = TextRenderer::GetInstance(); /*0x531439*/
  v32 = 0; /*0x53143e*/
  v33 = v40 - 40; /*0x531444*/
  if ( Instance ) /*0x53144d*/
  {
    v14 = Text::MeasureWidth((int)StringCSF, 0); /*0x531454*/
    v32 = v39 - v14 - 10; /*0x531461*/
  }
  TextRenderer::Printf(v35, (size_t)StringCSF, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, a2); /*0x531485*/
  v15 = GetStringCSF(aGuiWwbrand, 0, g_Str_File_Init_CPP, 4941); /*0x53149e*/
  v16 = (size_t)v15; /*0x5314a5*/
  if ( Instance ) /*0x5314a7*/
  {
    v17 = Text::MeasureWidth((int)v15, 0); /*0x5314ae*/
    v32 = v39 - v17 - 10; /*0x5314bf*/
    v33 += *(_DWORD *)(Instance + 28) + 3; /*0x5314ca*/
  }
  TextRenderer::Printf(v35, v16, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v25); /*0x5314ee*/
  v18 = GetStringCSF(aGuiLoadingex, 0, g_Str_File_Init_CPP, 4951); /*0x531507*/
  v32 = 10; /*0x53152c*/
  v33 = 10; /*0x531530*/
  TextRenderer::Printf(v35, (size_t)v18, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v26); /*0x531534*/
  v19 = GetStringCSF(aGuiTrademarkto, 0, g_Str_File_Init_CPP, 4958); /*0x53154d*/
  v32 = 10; /*0x531556*/
  v33 = v40 - 40; /*0x531565*/
  TextRenderer::Printf(v35, (size_t)v19, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v27); /*0x531581*/
  v20 = GetStringCSF(aGuiTrademarkbo, 0, g_Str_File_Init_CPP, 4965); /*0x53159a*/
  v32 = 10; /*0x53159f*/
  v33 += *(_DWORD *)(Instance + 28) + 3; /*0x5315bb*/
  TextRenderer::Printf(v35, (size_t)v20, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v28); /*0x5315d2*/
  Frame::Present((int)g_DSurface_Hidden, 10, (int)v5, v16, 0, v29, a3, v31); /*0x5315e4*/
  LODWORD(v21) = Audio::Callback(); /*0x5315e9*/
  *(_QWORD *)&stru_A8EB00.?[2980] = v21 + 5000; /*0x5315f6*/
  if ( v5 ) /*0x531603*/
    __3_YAXPAX_Z(v5); /*0x531606*/
  v22 = Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy((FileTreeNode *)Block); /*0x531618*/
    __3_YAXPAX_Z(v22); /*0x53161e*/
  }
  if ( v34 ) /*0x531630*/
    (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x531636*/
  *(_DWORD *)v42.CDFileClass = &CCFileClass::`vftable'; /*0x53163f*/
  v44 = 0; /*0x531647*/
  Vector::Clear((int)v43); /*0x531652*/
  *(_DWORD *)v42.CDFileClass = &off_7E1668; /*0x53165b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v42); /*0x531668*/
}



// ==== 0x00531680  InitBulkData  this=-  sig=ida-proto ====
char InitBulkData()
{
  File *v0; // eax
  File *v2; // eax
  ObjectClass *v3; // [esp+0h] [ebp-DCh]
  ObjectClass *v4; // [esp+0h] [ebp-DCh]
  ObjectClass *v5; // [esp+0h] [ebp-DCh]
  ObjectClass *v6; // [esp+0h] [ebp-DCh]
  CCFileClass v7; // [esp+4h] [ebp-D8h] BYREF
  int v8[3]; // [esp+5Ch] [ebp-80h] BYREF
  int v9; // [esp+68h] [ebp-74h]
  CCFileClass v10; // [esp+70h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+C8h] [ebp-14h] BYREF
  int v12; // [esp+D4h] [ebp-8h]

  if ( !g_MixFile_CONQMD /*0x5316ec*/
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CONQUER
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CAMEOMD
    || !(unsigned __int8)ReturnTrue(0)
    || !g_MixFile_CAMEO
    || !(unsigned __int8)ReturnTrue(0) )
  {
    return 0; /*0x5318a7*/
  }
  Event::Dispatch(); /*0x5316f9*/
  Event::Dispatch(); /*0x5316fe*/
  MouseClass::LoadTypeData((MouseClass *)&stru_87F5F0.__pad_58[416]); /*0x531708*/
  nullsub_29(v3); /*0x531712*/
  BulkData::InitMissionHashing((BulkData *)&dword_A8B238); /*0x53171c*/
  FileSystem::InitPipShapes(); /*0x531721*/
  nullsub_6(); /*0x531726*/
  FileSystem::InitPipShapes(); /*0x53172b*/
  FileSystem::InitPipShapes(); /*0x531730*/
  FileSystem::InitPipShapes(); /*0x531735*/
  InitVisceroidArt(v4); /*0x53173a*/
  FileSystem::InitPipShapes(); /*0x53173f*/
  FileSystem::InitPipShapes(); /*0x531744*/
  InitRotorArt(); /*0x531749*/
  nullsub_15(); /*0x53174e*/
  GenerateRangeRingTextures(v5); /*0x531753*/
  GenerateLightningStormGlow(v6); /*0x531758*/
  CCFileClass::Construct(&v7, aDpodVxl); /*0x531766*/
  v0 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x53176d*/
  if ( !v0 ) /*0x531777*/
  {
    *(_DWORD *)&stru_A8EB00.?[244] = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  *(_DWORD *)&stru_A8EB00.?[244] = File::LoadFileVXL(v0, (int)&v7, 0); /*0x531788*/
  if ( !*(_DWORD *)&stru_A8EB00.?[244] ) /*0x53178d*/
  {
LABEL_11:
    Debug::Log(); /*0x53178f*/
LABEL_12:
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x53179c*/
    v9 = 0; /*0x5317a8*/
    Vector::Clear((int)v8); /*0x5317ac*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x5317b5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  CCFileClass::Construct(&v10, aDpodHva); /*0x5317dd*/
  v2 = (File *)__2_YAPAXI_Z(0x10u); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    *(_DWORD *)&stru_A8EB00.?[248] = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  *(_DWORD *)&stru_A8EB00.?[248] = File::LoadFileHVA(v2, (int)&v10); /*0x5317fe*/
  if ( !*(_DWORD *)&stru_A8EB00.?[248] ) /*0x531803*/
  {
LABEL_16:
    Debug::Log(); /*0x531805*/
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x531819*/
    v12 = 0; /*0x531821*/
    Vector::Clear((int)v11); /*0x531828*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x531831*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x531852*/
  v12 = 0; /*0x53185a*/
  Vector::Clear((int)v11); /*0x531861*/
  *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x53186a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531872*/
  *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x53187b*/
  v9 = 0; /*0x531883*/
  Vector::Clear((int)v8); /*0x531887*/
  *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x531890*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x531898*/
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
  sprintf(Buffer, "Version %s", ModuleVersion); /*0x531a9b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531ab0*/
  ModuleInternalVersion = GetModuleInternalVersion((int)&dword_A8ECE0); /*0x531ab7*/
  sprintf(Buffer, "Internal Version %s", ModuleInternalVersion); /*0x531ac7*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531adc*/
  v16[0] = 0; /*0x531aea*/
  Time::FormatDate(v16); /*0x531af2*/
  v12 = (const char *)String::CopyConstant(Destination); /*0x531b10*/
  v10 = (const char *)String::FormatDword(v17); /*0x531b1d*/
  sprintf(Buffer, "Release Build: %s by %s - %s", v10, v12, v16);
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531b42*/
  v14 = 5; /*0x531b51*/
  v13 = 0; /*0x531b59*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F314); /*0x531b5e*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F4A0); /*0x531b6d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F420); /*0x531b7c*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F520); /*0x531b8b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F394); /*0x531b9a*/
  GetVersionString(&v14, &v13, 0, 0); /*0x531ba8*/
  v11 = (const char *)&off_821F08; /*0x531bb3*/
  if ( !v13 ) /*0x531bb8*/
    v11 = g_INI_Key_No; /*0x531bba*/
  sprintf(Buffer, "MMX %s, Vendor: %s", v11, Source);
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
      if ( g_DisplayWidth > 800 ) /*0x531d41*/
        v4 = (g_DisplayWidth - 800) / 2; /*0x531d51*/
      else
        v4 = 0; /*0x531d43*/
      if ( MEMORY[0x8A00A8] > 600 ) /*0x531d5d*/
        v5 = (MEMORY[0x8A00A8] - 600) / 2; /*0x531d6b*/
      else
        v5 = 0; /*0x531d5f*/
      SetWindowPos(DlgItem, 0, v4, v5, -1, -1, 0xDu); /*0x531d78*/
      SendMessageA(DlgItem, 0x4E3u, 1u, 0); /*0x531d8e*/
      if ( g_DisplayWidth == 640 ) /*0x531d9a*/
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x531da1*/
      else
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x531db0*/
    }
    do /*0x531f04*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x531db2*/
        dwNewLong = 7; /*0x531dbb*/
      if ( g_LoadScreenFlag ) /*0x531dca*/
      {
        g_LoadScreenFlag = 0; /*0x531dd0*/
        Screen::Capture(1, 0, a1, a2); /*0x531dd7*/
        Frame::Present(0); /*0x531de6*/
      }
      if ( (unsigned __int16)EventQueue::Process(dword_87F770) ) /*0x531df1*/
      {
        v6 = EventQueue::Read(dword_87F770); /*0x531e05*/
        a1 = v6; /*0x531e0d*/
        if ( (v6 & 0x800) == 0 ) /*0x531e16*/
        {
          a2 = (char)v6; /*0x531e1c*/
          if ( !isalnum((char)v6) || (_BYTE)a1 == 126 ) /*0x531e33*/
          {
            memset(byte_A8F7B8, 0, sizeof(byte_A8F7B8)); /*0x531f3e*/
          }
          else
          {
            v11[0] = a1; /*0x531e3d*/
            v11[1] = 0; /*0x531e42*/
            Debug::Log_0(v11); /*0x531e47*/
            v7 = strlen(byte_A8F7B8); /*0x531e5e*/
            if ( v7 >= 31 ) /*0x531e63*/
            {
              v7 = 0; /*0x531e65*/
              byte_A8F7B8[0] = 0; /*0x531e67*/
            }
            byte_A8F7B8[v7] = toupper((char)a1); /*0x531e77*/
            v8 = 0; /*0x531e7d*/
            v9 = (const char **)off_825C2C; /*0x531e7f*/
            while ( !strstr(byte_A8F7B8, *v9) ) /*0x531e96*/
            {
              v9 += 4; /*0x531e98*/
              ++v8; /*0x531e9b*/
              if ( (int)v9 >= (int)off_825C6C ) /*0x531ea2*/
                goto LABEL_27; /*0x531ea2*/
            }
            *(_BYTE *)*(&g_PlayerHouseFlags + 4 * v8) = *(_BYTE *)*(&g_PlayerHouseFlags + 4 * v8) == 0; /*0x531ebf*/
            memset(byte_A8F7B8, 0, sizeof(byte_A8F7B8)); /*0x531ec8*/
            PlayVocClass(1.0, 0); /*0x531edb*/
            g_LoadScreenFlag = 0; /*0x531ee4*/
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
int __stdcall MainMenu_DlgProc(HWND hWnd, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v6; // esi
  int v7; // eax
  const wchar_t *v8; // eax
  HWND DlgItem; // eax
  int v10; // [esp-4h] [ebp-110h]
  wchar_t lParam[128]; // [esp+Ch] [ebp-100h] BYREF

  result = BaseDialogProc(hWnd, a3, a4); /*0x531f88*/
  if ( !result ) /*0x531f8f*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x531f98*/
    switch ( a2 ) /*0x531fa1*/
    {
      case 15: /*0x531fa1*/
        DlgItem = GetDlgItem(hWnd, 1818); /*0x5320db*/
        SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x5320eb*/
        break;
      case 273: /*0x531fa1*/
        if ( (unsigned __int16)a3 > 0x683u ) /*0x532033*/
        {
          if ( (unsigned __int16)a3 == 1668 ) /*0x5320a6*/
          {
            *WindowLongA = 2; /*0x5320c2*/
            return 0; /*0x5320d2*/
          }
          if ( (unsigned __int16)a3 == 1670 ) /*0x5320ab*/
          {
            *WindowLongA = 4; /*0x5320ae*/
            return 0; /*0x5320be*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x532035*/
          {
            case 0x683u: /*0x532035*/
              *WindowLongA = 1; /*0x53208d*/
              return 0; /*0x53209d*/
            case 0x3EEu: /*0x532035*/
              *WindowLongA = 6; /*0x532079*/
              return 0; /*0x532089*/
            case 0x55Cu: /*0x532035*/
              *WindowLongA = 5; /*0x532065*/
              return 0; /*0x532075*/
            case 0x578u: /*0x532035*/
              *WindowLongA = 3; /*0x532051*/
              return 0; /*0x532061*/
          }
        }
        break;
      case 1175: /*0x531fa1*/
        v6 = GetDlgItem(hWnd, 1821); /*0x531fcc*/
        v7 = GetModuleInternalVersion(&dword_A8ECE0); /*0x531fce*/
        v10 = CharToWideString(v7); /*0x531fda*/
        v8 = (const wchar_t *)GetStringCSF(aGuiVersion, (int)g_Str_File_Init_CPP, 5975); /*0x531fec*/
        swprintf(lParam, (const size_t)&off_826960, v8, v10); /*0x531ffc*/
        SendMessageA(v6, 0x4B2u, 0, (LPARAM)lParam); /*0x532011*/
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
int InitCommands(ObjectClass *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // esi
  int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // esi
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // esi
  int v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // esi
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // esi
  int v46; // eax
  _DWORD *v47; // eax
 ... [53622 chars total]



// ==== 0x00533D20  KeyboardConfig::LoadINI  this=KeyboardConfig  sig=csp ====
char KeyboardConfig::LoadINI(KeyboardConfig *this)
{
  int v1; // esi
  unsigned __int8 *StringByIndex; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  CCINIClass v9; // [esp+Ch] [ebp-C4h] BYREF
  CCFileClass v10; // [esp+64h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]

  INIClass::INIClass((INIClass *)&v9); /*0x533d2b*/
  v9.ownsFile = 0; /*0x533d3b*/
  *(_DWORD *)v9.INIClass = &CCINIClass_Vtable; /*0x533d3f*/
  CCFileClass::Construct(&v10, aKeyboardmdIni); /*0x533d47*/
  if ( CCINIClass::Load(&v9, (int)&v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(*(void **)&stru_87F5F0.__pad_58[56]); /*0x533d6c*/
    v1 = 0; /*0x533d74*/
    *(_DWORD *)&stru_87F5F0.__pad_58[56] = 0; /*0x533d7a*/
    *(_DWORD *)&stru_87F5F0.__pad_58[60] = 0; /*0x533d85*/
    *(_DWORD *)&stru_87F5F0.__pad_58[64] = 0; /*0x533d8b*/
    stru_87F5F0.__pad_58[68] = 0; /*0x533d91*/
    *(_DWORD *)&stru_87F5F0.__pad_58[72] = 0; /*0x533d97*/
    for ( i = 0; i < INIClass::GetKeyCount(v9.INIClass, g_INI_Key_Hotkey); v1 = i ) /*0x533da8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v9.INIClass, g_INI_Key_Hotkey, v1); /*0x533dbf*/
      v3 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v9.INIClass, g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( *(int *)&stru_87F5F0.__pad_58[32] > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[20]
                                                                            + 4 * v3)
                                                              + 4))(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[20]
                                                                              + 4 * v3)),
                  (const char *)StringByIndex) )
        {
          if ( ++v3 >= *(int *)&stru_87F5F0.__pad_58[32] ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        v4 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[20] + 4 * v3); /*0x533e32*/
        if ( v4 && Int_Overwrite ) /*0x533e3f*/
        {
          v5 = *(_DWORD *)&stru_87F5F0.__pad_58[64]; /*0x533e47*/
          if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] + 1 <= *(int *)&stru_87F5F0.__pad_58[64] ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !*(_DWORD *)&stru_87F5F0.__pad_58[64] ) /*0x533e53*/
            v5 = 10; /*0x533e55*/
          if ( KeyboardConfig::ReleaseBuffer((int)&stru_87F5F0.__pad_58[56], v5) ) /*0x533e60*/
          {
LABEL_13:
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[56] + 8 * *(_DWORD *)&stru_87F5F0.__pad_58[60]) = Int_Overwrite; /*0x533e74*/
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[56] + 8 * *(_DWORD *)&stru_87F5F0.__pad_58[60] + 4) = v4; /*0x533e83*/
            stru_87F5F0.__pad_58[68] = 0; /*0x533e8d*/
            ++*(_DWORD *)&stru_87F5F0.__pad_58[60]; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x533ec0*/
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x533ed8*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    Debug::Log(); /*0x533efe*/
    *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x533f25*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533f36*/
    return 0; /*0x533f3b*/
  }
}



// ==== 0x00533F50  Sidebar::ScrollSidebarSkipGame  this=char*  sig=csp ====
int __thiscall Sidebar::ScrollSidebarSkipGame(const char *this)
{
  int result; // eax
  int v2; // edi

  result = dword_87F668; /*0x533f50*/
  v2 = 0; /*0x533f59*/
  if ( dword_87F668 > 0 ) /*0x533f5f*/
  {
    while ( strcmp( /*0x533f9f*/
              (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)dword_87F65C + v2) + 4))(*((_DWORD *)dword_87F65C + v2)),
              this) )
    {
      result = dword_87F668; /*0x533fa1*/
      if ( ++v2 >= dword_87F668 ) /*0x533fa9*/
        return result; /*0x533fa9*/
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)dword_87F65C + v2) + 32))( /*0x533fbc*/
             *((_DWORD *)dword_87F65C + v2),
             0);
  }
  return result; /*0x533fab*/
}



// ==== 0x00533FD0  AllocateSurfaceScreenSurfaces  this=-  sig=csp ====
char __fastcall Surface_AllocateScreenSurfaces(int a1, int a2, int a3, int a4, char a5)
{
  bool v7; // bl
  char *v8; // eax
  char *v9; // eax
  const char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  const char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  const char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  const char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  const char *v24; // eax
  char *v25; // eax
  char *v26; // eax
  const char *v27; // eax
  bool v29; // [esp+29h] [ebp-1h]

  Debug::Log(aAllocatingNewS); /*0x533fdd*/
  if ( DSurface_Alternate ) /*0x533fee*/
  {
    Debug::Log(aDeletingAltern); /*0x533ff5*/
    if ( DSurface_Alternate ) /*0x534005*/
      (**(void (__thiscall ***)(int, int))DSurface_Alternate)(DSurface_Alternate, 1); /*0x53400b*/
    DSurface_Alternate = 0; /*0x53400d*/
  }
  if ( g_DSurface_Hidden ) /*0x534019*/
  {
    Debug::Log(aDeletingHidden); /*0x534020*/
    if ( g_DSurface_Hidden ) /*0x534030*/
      (**(void (__thiscall ***)(int, int))g_DSurface_Hidden)(g_DSurface_Hidden, 1); /*0x534036*/
    g_DSurface_Hidden = 0; /*0x534038*/
  }
  if ( DSurface_Composite ) /*0x534044*/
  {
    Debug::Log(aDeletingCompos); /*0x53404b*/
    if ( DSurface_Composite ) /*0x53405b*/
      (**(void (__thiscall ***)(int, int))DSurface_Composite)(DSurface_Composite, 1); /*0x534061*/
    DSurface_Composite = 0; /*0x534063*/
  }
  if ( DSurface_Tile ) /*0x53406f*/
  {
    Debug::Log(aDeletingTilesu); /*0x534076*/
    if ( DSurface_Tile ) /*0x534086*/
      (**(void (__thiscall ***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53408c*/
    DSurface_Tile = 0; /*0x53408e*/
  }
  if ( DSurface_Sidebar ) /*0x53409a*/
  {
    Debug::Log(aDeletingSideba); /*0x5340a1*/
    if ( DSurface_Sidebar ) /*0x5340b1*/
      (**(void (__thiscall ***)(int, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x5340b7*/
    DSurface_Sidebar = 0; /*0x5340b9*/
  }
  v7 = Game_bVideoBackBuffer == 0; /*0x5340d2*/
  v29 = byte_A8EB96 == 0; /*0x5340d7*/
  if ( a5 && *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5340e8*/
  {
    v8 = (char *)__2_YAPAXI_Z(0x24u); /*0x5340ec*/
    if ( v8 ) /*0x5340f6*/
      v9 = DSurface::Construct(v8, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 0, 0); /*0x534104*/
    else
      v9 = 0; /*0x53410b*/
    g_DSurface_Hidden = (int)v9; /*0x53410d*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v9 + 24))(v9, 0); /*0x534117*/
    v10 = g_INI_Key_VRAM; /*0x534122*/
    if ( !*(_BYTE *)(g_DSurface_Hidden + 25) ) /*0x53411f*/
      v10 = g_Str_SYSTEM_MEMORY; /*0x53412b*/
    Debug::Log("HiddenSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v10); /*0x53413e*/
  }
  if ( *(int *)(a2 + 8) > 0 && *(int *)(a2 + 12) > 0 ) /*0x53414e*/
  {
    v11 = (char *)__2_YAPAXI_Z(0x24u); /*0x534152*/
    if ( v11 ) /*0x53415c*/
      v12 = DSurface::Construct(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), v7, 1); /*0x534172*/
    else
      v12 = 0; /*0x534179*/
    DSurface_Composite = (int)v12; /*0x53417b*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0); /*0x534185*/
    v13 = g_INI_Key_VRAM; /*0x534190*/
    if ( !*(_BYTE *)(DSurface_Composite + 25) ) /*0x53418d*/
      v13 = g_Str_SYSTEM_MEMORY; /*0x534199*/
    Debug::Log("CompositeSurface (%dx%d) %s ENABLE_3D\n", *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), v13); /*0x5341ac*/
  }
  if ( *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x5341c4*/
  {
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x5341c8*/
    if ( v14 ) /*0x5341d2*/
      v15 = DSurface::Construct(v14, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), v7, 1); /*0x5341e8*/
    else
      v15 = 0; /*0x5341ef*/
    DSurface_Tile = (int)v15; /*0x5341f1*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v15 + 24))(v15, 0); /*0x5341fc*/
    v16 = g_INI_Key_VRAM; /*0x534207*/
    if ( !*(_BYTE *)(DSurface_Tile + 25) ) /*0x534204*/
      v16 = g_Str_SYSTEM_MEMORY; /*0x534210*/
    Debug::Log("TileSurface (%dx%d) %s ENABLE_3D\n", *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), v16); /*0x534223*/
  }
  if ( DSurface_Composite && DSurface_Tile && *(_BYTE *)(DSurface_Composite + 25) != *(_BYTE *)(DSurface_Tile + 25) ) /*0x53424c*/
  {
    if ( DSurface_Composite ) /*0x534256*/
      (**(void (__stdcall ***)(int))DSurface_Composite)(1); /*0x53425c*/
    if ( DSurface_Tile ) /*0x534266*/
      (**(void (__thiscall ***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53426c*/
    Debug::Log(aMovingTilesurf); /*0x534273*/
    v17 = (char *)__2_YAPAXI_Z(0x24u); /*0x53427a*/
    if ( v17 ) /*0x534286*/
      DSurface_Composite = (int)DSurface::Construct(v17, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 1, 1); /*0x53429b*/
    else
      DSurface_Composite = 0; /*0x5342a2*/
    v18 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342aa*/
    if ( v18 ) /*0x5342b4*/
      DSurface_Tile = (int)DSurface::Construct(v18, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 1, 1); /*0x5342c9*/
    else
      DSurface_Tile = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    v19 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342eb*/
    if ( v19 ) /*0x5342f5*/
      v20 = DSurface::Construct(v19, *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 12), v29, 0); /*0x53430f*/
    else
      v20 = 0; /*0x534316*/
    DSurface_Sidebar = (int)v20; /*0x534318*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v20 + 24))(v20, 0); /*0x534323*/
    v21 = g_INI_Key_VRAM; /*0x53432e*/
    if ( !*(_BYTE *)(DSurface_Sidebar + 25) ) /*0x53432b*/
      v21 = g_Str_SYSTEM_MEMORY; /*0x534337*/
    Debug::Log("SidebarSurface (%dx%d) %s\n", *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 12), v21); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( *(int *)(a1 + 8) <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( *(int *)(a1 + 12) > 0 ) /*0x53436a*/
    {
      v22 = (char *)__2_YAPAXI_Z(0x24u); /*0x53436e*/
      if ( v22 ) /*0x534378*/
        v23 = DSurface::Construct(v22, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 0, 0); /*0x534388*/
      else
        v23 = 0; /*0x53438f*/
      g_DSurface_Hidden = (int)v23; /*0x534391*/
      (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v23 + 24))(v23, 0); /*0x53439c*/
      v24 = g_INI_Key_VRAM; /*0x5343a7*/
      if ( !*(_BYTE *)(g_DSurface_Hidden + 25) ) /*0x5343a4*/
        v24 = g_Str_SYSTEM_MEMORY; /*0x5343b0*/
      Debug::Log("HiddenSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v24); /*0x5343c3*/
    }
  }
  if ( *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5343d7*/
  {
    v25 = (char *)__2_YAPAXI_Z(0x24u); /*0x5343db*/
    if ( v25 ) /*0x5343e5*/
      v26 = DSurface::Construct(v25, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 1, 0); /*0x5343f5*/
    else
      v26 = 0; /*0x5343fc*/
    DSurface_Alternate = (int)v26; /*0x5343fe*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v26 + 24))(v26, 0); /*0x534409*/
    v27 = g_INI_Key_VRAM; /*0x534414*/
    if ( !*(_BYTE *)(DSurface_Alternate + 25) ) /*0x534411*/
      v27 = g_Str_SYSTEM_MEMORY; /*0x53441d*/
    Debug::Log("AlternateSurface (%dx%d) %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), v27); /*0x534430*/
  }
  return 1; /*0x534438*/
}



// ==== 0x00534450  Game::DestroyAllObjects  this=Game  sig=csp ====
int Game::DestroyAllObjects()
{
  size_t i; // eax
  int v1; // ecx
  void *v2; // esi
  Game *v3; // ecx
  ObjectClass *v5; // [esp+0h] [ebp-4h]
  ObjectClass *v6; // [esp+0h] [ebp-4h]
  ObjectClass *v7; // [esp+0h] [ebp-4h]
  ObjectClass *v8; // [esp+0h] [ebp-4h]
  ObjectClass *v9; // [esp+0h] [ebp-4h]
  ObjectClass *v10; // [esp+0h] [ebp-4h]
  ObjectClass *v11; // [esp+0h] [ebp-4h]
  ObjectClass *v12; // [esp+0h] [ebp-4h]
  ObjectClass *v13; // [esp+0h] [ebp-4h]
  ObjectClass *v14; // [esp+0h] [ebp-4h]
  ObjectClass *v15; // [esp+0h] [ebp-4h]
  ObjectClass *v16; // [esp+0h] [ebp-4h]
  ObjectClass *v17; // [esp+0h] [ebp-4h]
  ObjectClass *v18; // [esp+0h] [ebp-4h]
  ObjectClass *v19; // [esp+0h] [ebp-4h]
  ObjectClass *v20; // [esp+0h] [ebp-4h]
  ObjectClass *v21; // [esp+0h] [ebp-4h]
  ObjectClass *v22; // [esp+0h] [ebp-4h]
  ObjectClass *v23; // [esp+0h] [ebp-4h]
  ObjectClass *v24; // [esp+0h] [ebp-4h]
  ObjectClass *v25; // [esp+0h] [ebp-4h]
  ObjectClass *v26; // [esp+0h] [ebp-4h]
  ObjectClass *v27; // [esp+0h] [ebp-4h]
  ObjectClass *v28; // [esp+0h] [ebp-4h]
  ObjectClass *v29; // [esp+0h] [ebp-4h]
  ObjectClass *v30; // [esp+0h] [ebp-4h]
  ObjectClass *v31; // [esp+0h] [ebp-4h]
  ObjectClass *v32; // [esp+0h] [ebp-4h]
  ObjectClass *v33; // [esp+0h] [ebp-4h]
  ObjectClass *v34; // [esp+0h] [ebp-4h]
  TechnoClass *v35; // [esp+0h] [ebp-4h]
  ObjectClass *v36; // [esp+0h] [ebp-4h]
  ObjectClass *v37; // [esp+0h] [ebp-4h]
  ObjectClass *v38; // [esp+0h] [ebp-4h]

  ++dword_A8E7AC; /*0x53445f*/
  stru_B0F698.Count = 0; /*0x534465*/
  AbstractClassVector::ddtor((int)&stru_B0F698); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  for ( i = dword_B0E844; dword_B0E844; i = dword_B0E844 ) /*0x53447c*/
  {
    if ( !byte_B0E84C ) /*0x534484*/
    {
      qsort( /*0x534494*/
        (void *)g_BuildingLoadQueue_Array.ptr_0,
        i,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      dword_B0E850 = 0; /*0x53449c*/
      byte_B0E84C = 1; /*0x5344a2*/
    }
    v1 = *(_DWORD *)(g_BuildingLoadQueue_Array.ptr_0 + 4); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(v5); /*0x5344c6*/
  while ( dword_A8ED50 ) /*0x5344d1*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)dword_A8ED44 + 8))(*(_DWORD *)dword_A8ED44); /*0x5344dd*/
  ProcessExpiredPointers(v6); /*0x5344e8*/
  while ( dword_A8E370 ) /*0x5344f3*/
  {
    if ( *(_DWORD *)dword_A8E364 ) /*0x5344fb*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E364 + 32))(*(_DWORD *)dword_A8E364, 1); /*0x534505*/
  }
  ProcessExpiredPointers(v7); /*0x534510*/
  while ( g_GameObjectCleanup ) /*0x53451b*/
  {
    if ( *(_DWORD *)g_TagClassCount ) /*0x534523*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TagClassCount + 32))(*(_DWORD *)g_TagClassCount, 1); /*0x53452d*/
  }
  ProcessExpiredPointers(v8); /*0x534538*/
  while ( dword_A8EAF8 ) /*0x534543*/
  {
    if ( *(_DWORD *)dword_A8EAEC ) /*0x53454a*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EAEC + 32))(*(_DWORD *)dword_A8EAEC, 1); /*0x534554*/
  }
  ProcessExpiredPointers(v9); /*0x53455f*/
  while ( dword_8B4148 ) /*0x53456a*/
  {
    if ( *(_DWORD *)dword_8B413C ) /*0x534571*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B413C + 32))(*(_DWORD *)dword_8B413C, 1); /*0x53457b*/
  }
  ProcessExpiredPointers(v10); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(_DWORD *)dword_8B4194 ) /*0x534598*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4194 + 32))(*(_DWORD *)dword_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(v11); /*0x5345ad*/
  while ( dword_A8EC60 ) /*0x5345b8*/
  {
    if ( *(_DWORD *)dword_A8EC54 ) /*0x5345bf*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EC54 + 32))(*(_DWORD *)dword_A8EC54, 1); /*0x5345c9*/
  }
  ProcessExpiredPointers(v12); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(_DWORD *)dword_A8020C ) /*0x5345e6*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8020C + 32))(*(_DWORD *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(v13); /*0x5345fb*/
  while ( dword_A8EC48 ) /*0x534606*/
  {
    if ( *(_DWORD *)dword_A8EC3C ) /*0x53460d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8EC3C + 32))(*(_DWORD *)dword_A8EC3C, 1); /*0x534617*/
  }
  ProcessExpiredPointers(v14); /*0x534622*/
  while ( dword_A83E40 ) /*0x53462d*/
  {
    if ( *(_DWORD *)dword_A83E34 ) /*0x534634*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83E34 + 32))(*(_DWORD *)dword_A83E34, 1); /*0x53463e*/
  }
  ProcessExpiredPointers(v15); /*0x534649*/
  while ( dword_8B4130 ) /*0x534654*/
  {
    if ( *(_DWORD *)dword_8B4124 ) /*0x53465b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B4124 + 32))(*(_DWORD *)dword_8B4124, 1); /*0x534665*/
  }
  ProcessExpiredPointers(v16); /*0x534670*/
  while ( dword_8B40F8 ) /*0x53467b*/
  {
    if ( *(_DWORD *)dword_8B40EC ) /*0x534682*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B40EC + 32))(*(_DWORD *)dword_8B40EC, 1); /*0x53468c*/
  }
  ProcessExpiredPointers(v17); /*0x534697*/
  while ( dword_A80238 ) /*0x5346a2*/
  {
    if ( dword_A8022C->ptr_0 ) /*0x5346a9*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8022C->ptr_0 + 32))(dword_A8022C->ptr_0, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(v18); /*0x5346be*/
  while ( dword_A8E9B8 ) /*0x5346c9*/
  {
    if ( *(_DWORD *)dword_A8E9AC ) /*0x5346d0*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E9AC + 32))(*(_DWORD *)dword_A8E9AC, 1); /*0x5346da*/
  }
  ProcessExpiredPointers(v19); /*0x5346e5*/
  while ( dword_8872C0 ) /*0x5346f0*/
  {
    if ( *(_DWORD *)dword_8872B4 ) /*0x5346f7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8872B4 + 32))(*(_DWORD *)dword_8872B4, 1); /*0x534701*/
  }
  ProcessExpiredPointers(v20); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(_DWORD *)dword_B04BD4 ) /*0x53471e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B04BD4 + 32))(*(_DWORD *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(v21); /*0x534733*/
  while ( dword_ABCA20 ) /*0x53473e*/
  {
    if ( *(_DWORD *)dword_ABCA14 ) /*0x534745*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_ABCA14 + 32))(*(_DWORD *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(v22); /*0x53475a*/
  while ( dword_8A3880 ) /*0x534765*/
  {
    if ( *(_DWORD *)dword_8A3874 ) /*0x53476c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A3874 + 32))(*(_DWORD *)dword_8A3874, 1); /*0x534776*/
  }
  ProcessExpiredPointers(v23); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(_DWORD *)dword_89E0F4 ) /*0x534793*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89E0F4 + 32))(*(_DWORD *)dword_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(v24); /*0x5347a8*/
  while ( dword_8A0218 ) /*0x5347b3*/
  {
    if ( *(_DWORD *)dword_8A020C ) /*0x5347ba*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8A020C + 32))(*(_DWORD *)dword_8A020C, 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(v25); /*0x5347cf*/
  while ( dword_AC4920 ) /*0x5347da*/
  {
    if ( *(_DWORD *)dword_AC4914 ) /*0x5347e1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_AC4914 + 32))(*(_DWORD *)dword_AC4914, 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(v26); /*0x5347f6*/
  while ( dword_B0EC70 ) /*0x534801*/
  {
    if ( *(_DWORD *)dword_B0EC64 ) /*0x534808*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0EC64 + 32))(*(_DWORD *)dword_B0EC64, 1); /*0x534812*/
  }
  ProcessExpiredPointers(v27); /*0x53481d*/
  while ( dword_889FC8 ) /*0x534828*/
  {
    if ( *(_DWORD *)dword_889FBC ) /*0x53482f*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_889FBC + 32))(*(_DWORD *)dword_889FBC, 1); /*0x534839*/
  }
  ProcessExpiredPointers(v28); /*0x534844*/
  while ( dword_B0B890 ) /*0x53484f*/
  {
    if ( *(_DWORD *)dword_B0B884 ) /*0x534856*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0B884 + 32))(*(_DWORD *)dword_B0B884, 1); /*0x534860*/
  }
  ProcessExpiredPointers(v29); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(_DWORD *)dword_89C66C ) /*0x53487d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_89C66C + 32))(*(_DWORD *)dword_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(v30); /*0x534892*/
  while ( dword_AC1688 ) /*0x53489d*/
  {
    v2 = *(void **)dword_AC167C; /*0x5348a5*/
    if ( *(_DWORD *)dword_AC167C ) /*0x5348a5*/
    {
      BuildingLightQueue::RemoveEntry(*(BuildingLightQueue **)dword_AC167C); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(v31); /*0x5348c4*/
  while ( g_FootClassConfig ) /*0x5348cf*/
  {
    if ( *(_DWORD *)dword_8B3D14 ) /*0x5348d7*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8B3D14 + 32))(*(_DWORD *)dword_8B3D14, 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(v32); /*0x5348ec*/
  while ( g_AlphaShapeLimit ) /*0x5348f7*/
  {
    if ( *(_DWORD *)dword_88A0F4 ) /*0x5348fe*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_88A0F4 + 32))(*(_DWORD *)dword_88A0F4, 1); /*0x534908*/
  }
  ProcessExpiredPointers(v33); /*0x534913*/
  while ( dword_A8E998 ) /*0x53491e*/
  {
    if ( *(_DWORD *)dword_A8E98C ) /*0x534925*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E98C + 32))(*(_DWORD *)dword_A8E98C, 1); /*0x53492f*/
  }
  ProcessExpiredPointers(v34); /*0x53493a*/
  sub_4C29E0(v35); /*0x53493f*/
  Game_Destroy(v36); /*0x534944*/
  Game::loadCampaignData(v3); /*0x534949*/
  while ( dword_A8E978 ) /*0x534954*/
  {
    if ( *(_DWORD *)dword_A8E96C ) /*0x53495b*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E96C + 32))(*(_DWORD *)dword_A8E96C, 1); /*0x534965*/
  }
  ProcessExpiredPointers(v37); /*0x534970*/
  if ( g_TacticalClass_Instance ) /*0x53497d*/
    (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))( /*0x534983*/
      g_TacticalClass_Instance,
      1);
  g_TacticalClass_Instance = 0; /*0x53498b*/
  MapClass::FreeAllCells((MapClass *)&dword_87F7E8); /*0x534991*/
  ProcessExpiredPointers(v38); /*0x534996*/
  Game::initScenario((Game *)&g_VisibilitySystem); /*0x5349a0*/
  return --dword_A8E7AC; /*0x5349ab*/
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
  *((_DWORD *)dword_A8B230 + 1174) = a1; /*0x534a5d*/
  Multiplayer::ShowProgress(dword_A8B238, 8); /*0x534a63*/
  if ( *((_DWORD *)dword_A8B230 + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( dword_884E0C ) /*0x534a8a*/
      (**(void (__thiscall ***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x534a90*/
    dword_884E0C = 0; /*0x534a97*/
    if ( *((_DWORD *)dword_A8B230 + 1174) == 1 ) /*0x534aa4*/
    {
      v4 = __2_YAPAXI_Z(0x28u); /*0x534aa8*/
      if ( v4 ) /*0x534ab2*/
        v5 = MixFileClass::FromFile(v4, v35, (int)&dword_886980); /*0x534ac0*/
      else
        v5 = 0; /*0x534ac7*/
      dword_884E0C = (int)v5; /*0x534acc*/
      ReturnTrue(0); /*0x534ad1*/
    }
    if ( dword_884E08 ) /*0x534ade*/
      (**(void (__thiscall ***)(int, int))dword_884E08)(dword_884E08, 1); /*0x534ae4*/
    v6 = __2_YAPAXI_Z(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      dword_884E08 = (int)MixFileClass::FromFile(v6, Source, (int)&dword_886980); /*0x534b05*/
    else
      dword_884E08 = 0; /*0x534b0c*/
    if ( dword_884E10 ) /*0x534b1a*/
      (**(void (__thiscall ***)(int, int))dword_884E10)(dword_884E10, 1); /*0x534b20*/
    v7 = __2_YAPAXI_Z(0x28u); /*0x534b24*/
    if ( v7 ) /*0x534b2e*/
      v8 = MixFileClass::FromFile(v7, v36, (int)&dword_886980); /*0x534b3c*/
    else
      v8 = 0; /*0x534b43*/
    dword_884E10 = (int)v8; /*0x534b48*/
    ReturnTrue(0); /*0x534b4d*/
    ReturnTrue(0); /*0x534b59*/
    Multiplayer::ShowProgress(dword_A8B238, 6); /*0x534b65*/
    if ( dword_884E20 ) /*0x534b72*/
      (**(void (__thiscall ***)(int, int))dword_884E20)(dword_884E20, 1); /*0x534b78*/
    v9 = __2_YAPAXI_Z(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      dword_884E20 = (int)MixFileClass::FromFile(v9, v37, (int)&dword_886980); /*0x534b99*/
    else
      dword_884E20 = 0; /*0x534ba0*/
    if ( dword_884E1C ) /*0x534bae*/
      (**(void (__thiscall ***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x534bb4*/
    v10 = __2_YAPAXI_Z(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      dword_884E1C = (int)MixFileClass::FromFile(v10, v38, (int)&dword_886980); /*0x534bd5*/
    else
      dword_884E1C = 0; /*0x534bdc*/
    Multiplayer::ShowProgress(dword_A8B238, 12); /*0x534be9*/
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
        v17 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (v12 % 256); /*0x534c42*/
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
        v20 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (i % 256); /*0x534c85*/
        *(_WORD *)v20 = v30; /*0x534c8d*/
        v20[2] = v19; /*0x534c95*/
      }
    }
    Block::Copy(&stru_885A80, &FileSystem_TEMPERAT_PAL); /*0x534ca4*/
    wsprintfA(Source, "UNIT%s.PAL", v32); /*0x534cb8*/
    v21 = (const void *)SearchMIXFile(Source, 0); /*0x534cc8*/
    Event::Dispatch(); /*0x534cca*/
    if ( v21 ) /*0x534cd1*/
      Block::Copy(stru_886380, v21); /*0x534cd9*/
    for ( j = 0; j < 256; ++j ) /*0x534cde*/
    {
      v23 = &stru_886380[3 * (j % 256)]; /*0x534cf7*/
      LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      v24 = MEMORY[0x886382][3 * (j % 256)]; /*0x534d0c*/
      HIBYTE(v31) = 4 * MEMORY[0x886381][3 * (j % 256)]; /*0x534d16*/
      *(_WORD *)v23 = v31; /*0x534d23*/
      v23[2] = 4 * v24; /*0x534d2c*/
    }
    v25 = 0; /*0x534d43*/
    v26 = 12; /*0x534d4c*/
    for ( k = dword_B054E0 / 13; v25 < dword_B054E0; ++v25 ) /*0x534d53*/
    {
      LoadTheaterClassMIX_Load(stru_886380, &FileSystem_TEMPERAT_PAL, 1000, 1000, 1000); /*0x534d77*/
      v28 = v25 / k + 12; /*0x534d87*/
      if ( v28 >= 25 ) /*0x534d89*/
        v28 = 25; /*0x534d8b*/
      if ( v28 != v26 ) /*0x534d92*/
      {
        Multiplayer::ShowProgress(dword_A8B238, v28); /*0x534d9a*/
        v26 = v28; /*0x534d9f*/
      }
      Event::Dispatch(); /*0x534da1*/
    }
    FileSystem::InitExtensionState(a1); /*0x534db4*/
    LoadTheaterClassMIX_Load_717840(); /*0x534db9*/
    Multiplayer::ShowProgress(dword_A8B238, 25); /*0x534dc5*/
  }
}



// ==== 0x00534DE0  ObjectClass::ReleaseLoadingResources  this=ObjectClass  sig=csp ====
char ReleaseLoadingResources(ObjectClass *this)
{
  if ( dword_884E5C ) /*0x534de7*/
  {
    Debug::Log(); /*0x534df2*/
    if ( dword_884E5C ) /*0x534e02*/
      (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e08*/
    dword_884E5C = 0; /*0x534e0a*/
  }
  if ( dword_884E58 ) /*0x534e1b*/
  {
    Debug::Log(); /*0x534e26*/
    if ( dword_884E58 ) /*0x534e36*/
      (**(void (__thiscall ***)(int, int))dword_884E58)(dword_884E58, 1); /*0x534e3c*/
    dword_884E58 = 0; /*0x534e3e*/
  }
  return 1; /*0x534e4a*/
}



// ==== 0x00534E50  AssetClass::ReleaseAndReload  this=AssetClass  sig=csp ====
char AssetClass::ReleaseAndReload(AssetClass *this)
{
  void (__thiscall ***v1)(_DWORD, int); // ecx
  int v2; // ecx
  MixFileClass *v3; // eax
  MixFileClass *v5; // eax

  if ( dword_884E5C ) /*0x534e5a*/
  {
    Debug::Log(); /*0x534e65*/
    if ( dword_884E5C ) /*0x534e75*/
      (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e7b*/
    dword_884E5C = 0; /*0x534e82*/
    if ( dword_884E58 ) /*0x534e8a*/
    {
      Debug::Log(); /*0x534e99*/
      v1 = (void (__thiscall ***)(_DWORD, int))dword_884E58; /*0x534e9e*/
      if ( dword_884E58 ) /*0x534ea9*/
        goto LABEL_14; /*0x534ea9*/
      goto LABEL_15; /*0x534ea9*/
    }
  }
  else
  {
    v2 = dword_884E58; /*0x534ead*/
    if ( dword_884E58 ) /*0x534eb5*/
    {
      if ( dword_884E5C ) /*0x534eb9*/
      {
        Debug::Log(); /*0x534ec4*/
        if ( dword_884E5C ) /*0x534ed4*/
          (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534eda*/
        v2 = dword_884E58; /*0x534edc*/
        dword_884E5C = 0; /*0x534ee2*/
      }
      if ( v2 ) /*0x534eea*/
      {
        Debug::Log(); /*0x534ef5*/
        v1 = (void (__thiscall ***)(_DWORD, int))dword_884E58; /*0x534efa*/
        if ( dword_884E58 ) /*0x534f05*/
LABEL_14:
          (**v1)(v1, 1); /*0x534f07*/
LABEL_15:
        dword_884E58 = 0; /*0x534f0d*/
      }
    }
  }
  v3 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x534f13*/
  if ( v3 ) /*0x534f1f*/
  {
    dword_884E58 = (int)MixFileClass::FromFile(v3, aNtrlmdMix, (int)dword_886980); /*0x534f34*/
    if ( dword_884E58 ) /*0x534f39*/
    {
      Debug::Log_0(); /*0x534f4e*/
      v5 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x534f55*/
      if ( v5 ) /*0x534f5f*/
      {
        dword_884E5C = (int)MixFileClass::FromFile(v5, aNeutralMix, (int)dword_886980); /*0x534f74*/
        if ( dword_884E5C ) /*0x534f79*/
        {
          Debug::Log_0(); /*0x534f8e*/
          return 1; /*0x534f96*/
        }
        else
        {
          return 0; /*0x534f7b*/
        }
      }
      else
      {
        dword_884E5C = 0; /*0x534f7f*/
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
    dword_884E58 = 0; /*0x534f3f*/
    return 0; /*0x534f45*/
  }
}



// ==== 0x00534FA0  MixFile::LoadSide  this=MixFile  sig=csp ====
char __thiscall MixFile::LoadSide(MixFile *this)
{
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int YRCD; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  char v7; // bl
  MixFileClass *v8; // eax
  _DWORD *v9; // eax
  char v10; // bl
  MixFileClass *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  Game *v16; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  CCFileClass v18; // [esp+60h] [ebp-D8h] BYREF
  int v19[3]; // [esp+B8h] [ebp-80h] BYREF
  int v20; // [esp+C4h] [ebp-74h]
  CCFileClass v21; // [esp+CCh] [ebp-6Ch] BYREF
  int v22[3]; // [esp+124h] [ebp-14h] BYREF
  int v23; // [esp+130h] [ebp-8h]

  v1 = (int)this; /*0x534faa*/
  VoxClass::SetEVAIndex((VoxClass *)this); /*0x534fac*/
  if ( v1 == 2 ) /*0x534fb4*/
    v1 = 1; /*0x534fb6*/
  v2 = v1; /*0x534fbb*/
  v16 = (Game *)v1; /*0x534fc0*/
  if ( v1 == -1 ) /*0x534fc4*/
  {
    YRCD = AlwaysFindYRCD(); /*0x534fd1*/
    if ( YRCD >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v16 = (Game *)YRCD; /*0x534ffb*/
    v2 = YRCD; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( dword_884E68 ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( dword_884E68 ) /*0x535035*/
      (**(void (__thiscall ***)(int, int))dword_884E68)(dword_884E68, 1); /*0x53503b*/
    dword_884E68 = 0; /*0x53503d*/
  }
  if ( dword_884E74 ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( dword_884E74 ) /*0x535065*/
      (**(void (__thiscall ***)(int, int))dword_884E74)(dword_884E74, 1); /*0x53506b*/
    dword_884E74 = 0; /*0x53506d*/
  }
  if ( dword_884E70 ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( dword_884E70 ) /*0x535095*/
      (**(void (__thiscall ***)(int, int))dword_884E70)(dword_884E70, 1); /*0x53509b*/
    dword_884E70 = 0; /*0x53509d*/
  }
  if ( dword_884E78 ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( dword_884E78 ) /*0x5350c5*/
      (**(void (__thiscall ***)(int, int))dword_884E78)(dword_884E78, 1); /*0x5350cb*/
    dword_884E78 = 0; /*0x5350cd*/
  }
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, "SIDEC%02dMD.MIX", v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(&v18, Buffer); /*0x535101*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 20))(v6, 0); /*0x535115*/
  v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535117*/
  v20 = 0; /*0x53511f*/
  Vector::Clear((int)v19); /*0x535126*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(&v18); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      dword_884E70 = (int)MixFileClass::FromFile(v8, Buffer, (int)dword_886980); /*0x535160*/
    else
      dword_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, "SIDEC%02d.MIX", v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(&v18, Buffer); /*0x5351a4*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x5351ba*/
  v20 = 0; /*0x5351c2*/
  Vector::Clear((int)v19); /*0x5351c9*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(&v18); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      dword_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)dword_886980); /*0x5351f9*/
    dword_884E74 = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (_DWORD *)dword_884E74; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, "SIDENC%02d.MIX", v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    v13 = CCFileClass::Construct(&v18, Buffer); /*0x53527b*/
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x535294*/
    v18.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535296*/
    v20 = 0; /*0x53529a*/
    Vector::Clear((int)v19); /*0x5352a1*/
    v18.FileClass = (FileClass)&off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(&v18); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        dword_884E78 = (int)MixFileClass::FromFile(v15, Buffer, (int)dword_886980); /*0x5352d6*/
      else
        dword_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v16); /*0x5352ec*/
    CCFileClass::Construct(&v21, aUimdIni); /*0x5352fd*/
    if ( CCINIClass::Load(&dword_887208, (int)&v21, 0, 0) ) /*0x535311*/
    {
      SidebarClass::ReadButtonList((SidebarClass *)dword_8871E0); /*0x53533d*/
      SidebarClass::LoadButtonSHPs((TabClass *)&dword_87F7E8); /*0x535347*/
      v21.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x535353*/
      v23 = 0; /*0x53535a*/
      Vector::Clear((int)v22); /*0x535361*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(&v21); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v21.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x53539a*/
      v23 = 0; /*0x5353a1*/
      Vector::Clear((int)v22); /*0x5353a8*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x5353b4*/
      BufferIOFileClass::Dtor(&v21); /*0x5353bb*/
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
  if ( (int)dword_A8ECC8 > 0 ) /*0x535405*/
  {
    v3 = 0; /*0x53540b*/
    v21 = 0; /*0x53540f*/
    while ( 1 ) /*0x53541e*/
    {
      v15 = 0; /*0x53541e*/
      v4 = *((_DWORD *)dword_A8ECBC + v3); /*0x535422*/
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
      if ( v3 >= (int)dword_A8ECC8 ) /*0x5355a1*/
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
int Performance::Profile(Performance *this)
{
  Performance *v1; // edi
  int result; // eax
  int v3; // edi
  signed int v4; // esi
  int v5; // ebx
  char *Name; // eax
  SIZE_T v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  int i; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  DWORD Time; // esi
  int v19; // eax
  Performance *v20; // [esp+80h] [ebp-1A4h]
  int v21; // [esp+8Ch] [ebp-198h]
  int v22; // [esp+90h] [ebp-194h]
  int v23; // [esp+94h] [ebp-190h]
  _DWORD v24[2]; // [esp+98h] [ebp-18Ch] BYREF
  int v25; // [esp+A0h] [ebp-184h]
  int v26; // [esp+A4h] [ebp-180h]
  _DWORD v27[4]; // [esp+A8h] [ebp-17Ch] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+B8h] [ebp-16Ch] BYREF
  _BYTE v29[16]; // [esp+D8h] [ebp-14Ch] BYREF
  int v30[15]; // [esp+E8h] [ebp-13Ch] BYREF
  unsigned int v31; // [esp+124h] [ebp-100h]
  unsigned int v32; // [esp+128h] [ebp-FCh]

  result = dword_825C8C; /*0x5355d0*/
  if ( dword_825C8C != -1 ) /*0x5355de*/
    return result; /*0x5355de*/
  v20 = v1; /*0x5355e6*/
  stru_A8EB00.?[1968] = 0; /*0x5355e7*/
  stru_A8EB00.?[1840] = 0; /*0x5355ee*/
  stru_A8EB00.?[2236] = 0; /*0x5355f5*/
  stru_A8EB00.?[2108] = 0; /*0x5355fc*/
  stru_A8EB00.?[2364] = 0; /*0x535603*/
  v3 = DetectProcessorType(); /*0x53560f*/
  v4 = Performance::MeasureTicks(v20); /*0x535616*/
  v5 = 5; /*0x53561b*/
  v23 = 5; /*0x535623*/
  switch ( v3 ) /*0x535629*/
  {
    case -1: /*0x535629*/
      break;
    case 3: /*0x535629*/
    case 5: /*0x535629*/
      v23 = v4 / 100 + 1; /*0x535643*/
      break; /*0x535647*/
    case 4: /*0x535629*/
    case 7: /*0x535629*/
      v23 = v4 / 100 + 2; /*0x53565c*/
      break; /*0x535660*/
    case 6: /*0x535629*/
      v23 = v4 / 100 + 3; /*0x535675*/
      break; /*0x535679*/
    default:
      v23 = 1; /*0x53567b*/
      break; /*0x53567b*/
  }
  PlayerType::GetName(); /*0x535683*/
  Debug::Log(); /*0x535695*/
  Name = PlayerType::GetName(); /*0x53569d*/
  sprintf(&stru_A8EB00.?[1840], "CPU: %d Mhz %s", v4, Name);
  Buffer.dwLength = 32; /*0x5356ba*/
  GlobalMemoryStatus(&Buffer); /*0x5356c3*/
  v21 = 2; /*0x5356d2*/
  v7 = (Buffer.dwTotalPhys + 655360) >> 20; /*0x5356dc*/
  if ( v7 >= 0x40 ) /*0x5356e2*/
    v21 = 5; /*0x5356e4*/
  if ( v7 >= 0x80 ) /*0x5356ee*/
    v21 += 2; /*0x5356f0*/
  if ( v7 == 256 ) /*0x5356ff*/
  {
    v21 += 2; /*0x535701*/
  }
  else if ( v7 > 0x100 ) /*0x535707*/
  {
    v21 = 10; /*0x535709*/
  }
  Debug::Log(); /*0x535718*/
  sprintf(&stru_A8EB00.?[2236], "RAM reported: %d Mb", v7);
  v8 = 4; /*0x535737*/
  v22 = 5; /*0x53573c*/
  if ( g_lpDirectDraw7 ) /*0x535740*/
  {
    v30[0] = 316; /*0x535746*/
    if ( !g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v30, 0) ) /*0x535754*/
    {
      v9 = v31; /*0x53575b*/
      if ( v31 <= v32 ) /*0x53576b*/
        v9 = v32; /*0x53576d*/
      v8 = (v9 + 0xFFFFF) >> 20; /*0x535775*/
      if ( v8 >= 0x20 ) /*0x53577b*/
      {
        v22 = 10; /*0x53577d*/
        goto LABEL_29; /*0x535781*/
      }
      if ( v8 >= 0x10 ) /*0x535786*/
      {
        v22 = 9; /*0x535788*/
        goto LABEL_29; /*0x535790*/
      }
      if ( v8 >= 8 ) /*0x535795*/
      {
        v22 = 7; /*0x535797*/
        goto LABEL_29; /*0x53579f*/
      }
      if ( v8 < 4 ) /*0x5357a4*/
      {
        if ( v8 <= 2 ) /*0x5357ae*/
          v22 = 3; /*0x5357b0*/
        goto LABEL_29; /*0x5357b0*/
      }
    }
  }
  v22 = 5; /*0x5357a6*/
LABEL_29:
  Debug::Log(); /*0x5357b8*/
  sprintf(&stru_A8EB00.?[2108], "VRAM reported: %d Mb", v8);
  i = 0; /*0x5357e1*/
  if ( DSurface_Tile && BYTE1(DSurface_Tile->DSurface_field_0x18) && !BYTE1(DSurface_Alternate->DSurface_field_0x18) ) /*0x5357fc*/
  {
    v11 = (_DWORD *)(*((int (__stdcall **)(_DWORD *))DSurface_Tile->DSurface_field_0x0 + 30))(v27); /*0x53580e*/
    v24[0] = *v11; /*0x535813*/
    v24[1] = v11[1]; /*0x53581a*/
    v25 = v11[2]; /*0x535821*/
    v26 = v11[3]; /*0x53582e*/
    v12 = (_DWORD *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x53583c*/
                      DSurface_Alternate,
                      v29);
    v27[0] = *v12; /*0x535840*/
    v13 = v25; /*0x535844*/
    v27[1] = v12[1]; /*0x53584b*/
    v14 = v12[2]; /*0x53584f*/
    v15 = v12[3]; /*0x535854*/
    if ( v25 >= v14 ) /*0x535857*/
    {
      v13 = v14; /*0x535859*/
      v25 = v14; /*0x53585b*/
    }
    v16 = v26; /*0x53585f*/
    if ( v26 >= v15 ) /*0x535865*/
    {
      v16 = v15; /*0x535867*/
      v26 = v15; /*0x535869*/
    }
    if ( v13 >= 480 ) /*0x535873*/
      v25 = 480; /*0x535875*/
    if ( v16 >= 400 ) /*0x535882*/
      v26 = 400; /*0x535884*/
    v17 = 4; /*0x535892*/
    do /*0x5358da*/
    {
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x5358b3*/
       + 2))(
        DSurface_Tile,
        v24,
        DSurface_Alternate,
        v24,
        0,
        1);
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x5358d2*/
       + 2))(
        DSurface_Alternate,
        v24,
        DSurface_Tile,
        v24,
        0,
        1);
      Sleep(0); /*0x5358d7*/
      --v17; /*0x5358d9*/
    }
    while ( v17 ); /*0x5358da*/
    Time = timeGetTime(); /*0x5358e4*/
    if ( (Time & 0xFF000000) != 0xFF ) /*0x5358f4*/
    {
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x535916*/
       + 2))(
        DSurface_Tile,
        v24,
        DSurface_Alternate,
        v24,
        0,
        1);
      (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x535935*/
       + 2))(
        DSurface_Alternate,
        v24,
        DSurface_Tile,
        v24,
        0,
        1);
      for ( i = 1; timeGetTime() - Time <= 0x3E8; ++i ) /*0x535946*/
      {
        if ( i > 5000 ) /*0x53594e*/
          break; /*0x53594e*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Tile->DSurface_field_0x0 /*0x53596c*/
         + 2))(
          DSurface_Tile,
          v24,
          DSurface_Alternate,
          v24,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, _DWORD *, DSurface *, _DWORD *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 /*0x53598b*/
         + 2))(
          DSurface_Alternate,
          v24,
          DSurface_Tile,
          v24,
          0,
          1);
      }
      v5 = 1; /*0x53599c*/
      if ( i / 4 >= 1 ) /*0x5359ad*/
        v5 = i / 4; /*0x5359af*/
    }
  }
  Debug::Log(); /*0x5359bb*/
  sprintf(&stru_A8EB00.?[2364], "%d blits per second\n", 2 * i); /*0x5359cb*/
  v19 = v23; /*0x5359d0*/
  dword_825C8C = v23; /*0x5359dd*/
  if ( v23 >= v21 ) /*0x5359e3*/
  {
    v19 = v21; /*0x5359e5*/
    dword_825C8C = v21; /*0x5359e7*/
  }
  if ( v19 >= v22 ) /*0x5359f2*/
  {
    v19 = v22; /*0x5359f4*/
    dword_825C8C = v22; /*0x5359f6*/
  }
  if ( v19 >= v5 ) /*0x5359fd*/
    dword_825C8C = v5; /*0x535a01*/
  Debug::Log(); /*0x535a0c*/
  sprintf(&stru_A8EB00.?[1968], "Profile: %d\n", dword_825C8C);
  return dword_825C8C; /*0x535a32*/
}



// ==== 0x00535A60  BufferIOFileClass::Destruct  this=CDFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Destruct(BufferIOFileClass *this)
{
  *(_DWORD *)this->RawFileClass = &off_7E1668; /*0x535a60*/
  return BufferIOFileClass::Dtor(this);
}



// ==== 0x00535A70  CCFileClass::Destruct  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destruct(CCFileClass *this)
{
  *(_DWORD *)this->CDFileClass = &CCFileClass::`vftable'; /*0x535a76*/
  this->tail_19 = 0; /*0x535a7c*/
  Vector::Clear((int)this + 88); /*0x535a83*/
  *(_DWORD *)this->CDFileClass = &off_7E1668; /*0x535a8a*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)this); /*0x535a95*/
}



// ==== 0x00535AA0  INIClass::INIClass  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::INIClass(INIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // ecx
  _DWORD *v3; // edx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  result = this->__pad_0; /*0x535aa0*/
  sectionHead = this->sectionHead; /*0x535aa6*/
  v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  sectionHead[1] = 0; /*0x535ab2*/
  sectionHead[2] = 0; /*0x535ab5*/
  *sectionHead = (int)&GenericNode::`vftable'; /*0x535ab8*/
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
  v6 = sectionHead[1]; /*0x535af6*/
  result[9] = sectionHead; /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  v7 = sectionHead[1]; /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    *(_DWORD *)(v7 + 8) = v3; /*0x535b06*/
  sectionHead[1] = (int)v3; /*0x535b09*/
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
_DWORD *__thiscall CCINIClass::CCINIClass(CCINIClass *this)
{
  _DWORD *result; // eax
  int *sectionHead; // esi
  int *p_sectionCount; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this->INIClass; /*0x535b30*/
  sectionHead = this->?; /*0x535b36*/
  p_sectionCount = &this->?; /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  sectionHead[1] = 0; /*0x535b42*/
  sectionHead[2] = 0; /*0x535b45*/
  *sectionHead = (int)&GenericNode::`vftable'; /*0x535b48*/
  p_sectionCount[1] = 0; /*0x535b4e*/
  p_sectionCount[2] = 0; /*0x535b51*/
  *p_sectionCount = (int)&GenericNode::`vftable'; /*0x535b54*/
  result[3] = &GenericList::`vftable'; /*0x535b5d*/
  if ( p_sectionCount ) /*0x535b64*/
  {
    v4 = p_sectionCount[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = p_sectionCount[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535b74*/
        *(_DWORD *)(p_sectionCount[1] + 8) = p_sectionCount[2]; /*0x535b7d*/
        p_sectionCount[2] = 0; /*0x535b80*/
        p_sectionCount[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = sectionHead[1]; /*0x535b86*/
  p_sectionCount[2] = (int)sectionHead; /*0x535b89*/
  p_sectionCount[1] = v6; /*0x535b8c*/
  v7 = sectionHead[1]; /*0x535b8f*/
  if ( v7 ) /*0x535b94*/
    *(_DWORD *)(v7 + 8) = p_sectionCount; /*0x535b96*/
  sectionHead[1] = (int)p_sectionCount; /*0x535b99*/
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
char __stdcall CreateTeamCommand::Stub(CommandClass *this)
{
  return 0; /*0x535bd2*/
}



// ==== 0x00535BE0  CommandClass::IsCellFlag  this=CommandClass  sig=csp ====
unsigned int __stdcall Map::IsCellFlag(CommandClass *this)
{
  return (~(unsigned int)this >> 11) & 1; /*0x535bec*/
}



// ==== 0x00535BF0  CommandClass::Do  this=CommandClass  sig=csp ====
char __stdcall CreateTeamCommand::Do(CommandClass *this)
{
  return 0; /*0x535bf2*/
}



// ==== 0x00535C00  CreateTeamCommand::Construct  this=CreateTeamCommand  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::Construct(CreateTeamCommand *this, int a2)
{
  this->CreateTeamCommand_field_0x4 = (void *)a2; /*0x535c06*/
  *(_DWORD *)this->__pad_0 = &CreateTeamCommandClass::`vftable'; /*0x535c09*/
  return this->__pad_0; /*0x535c0f*/
}



// ==== 0x00535C20  CreateTeamCommandClass::AddRef  this=CreateTeamCommand  sig=csp ====
char *__thiscall CreateTeamCommand::AddRef(CreateTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamCreate_%d", *(_DWORD *)&this->m_1[3]); /*0x535c2e*/
  return &stru_A8EB00.?[2512]; /*0x535c3b*/
}



// ==== 0x00535C40  CreateTeamCommandClass::Release  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::Release(CreateTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c45*/
  StringCSF = GetStringCSF(aTxtCreateTeam, 0, g_Str_File_Init_CPP, 6165); /*0x535c55*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x535c60*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x535c6d*/
}



// ==== 0x00535C70  CreateTeamCommandClass::ddtor  this=CreateTeamCommand  sig=csp ====
wchar_t *CreateTeamCommand::ddtor(CreateTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6167); /*0x535c86*/
}



// ==== 0x00535C90  CreateTeamCommandClass::Read  this=CreateTeamCommand  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::Read(CreateTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c95*/
  StringCSF = GetStringCSF(aTxtCreateTeamD, 0, g_Str_File_Init_CPP, 6169); /*0x535ca5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x535cb0*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x535cbd*/
}



// ==== 0x00535CC0  CreateTeamCommandClass::Undo  this=CreateTeamCommand  sig=csp ====
void __thiscall CreateTeamCommand::Undo(CreateTeamCommandClass *this, int a2)
{
  CreateTeamCommand::performAction_246(*(char **)&this->m_1[3]); /*0x535cc3*/
}



// ==== 0x00535CD0  CreateTeamCommandClass::performAction_0  this=CreateTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_0(CreateTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x535cd9*/
  if ( (a2 & 1) != 0 ) /*0x535cdf*/
    __3_YAXPAX_Z(this); /*0x535ce2*/
  return (std::locale::facet *)this; /*0x535cec*/
}



// ==== 0x00535CF0  CommandClass::vt02  this=CommandClass  sig=csp ====
int __thiscall CreateTeamCommand::vt02(CommandClass *this)
{
  return (*(int (__thiscall **)(CommandClass *))(*(_DWORD *)this + 16))(this);
}



// ==== 0x00535D00  CommandClass::performAction_1  this=CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_1(CommandClass *this, char a2)
{
  *this = (CommandClass)&CommandClass::`vftable'; /*0x535d09*/
  if ( (a2 & 1) != 0 ) /*0x535d0f*/
    __3_YAXPAX_Z(this); /*0x535d12*/
  return (std::locale::facet *)this; /*0x535d1c*/
}



// ==== 0x00535D20  SetStructureTabCommandClass::performAction_2  this=SetStructureTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_2(SetStructureTabCommandClass *this)
{
  return aStructuretab; /*0x535d25*/
}



// ==== 0x00535D30  SetStructureTabCommandClass::performAction_3  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_3(SetStructureTabCommandClass *this)
{
  return GetStringCSF(aTxtStructureTa, 0, g_Str_File_Init_CPP, 6186); /*0x535d46*/
}



// ==== 0x00535D50  SetStructureTabCommandClass::performAction_4  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_4(SetStructureTabCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6188); /*0x535d66*/
}



// ==== 0x00535D70  SetStructureTabCommandClass::performAction_5  this=SetStructureTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_5(SetStructureTabCommandClass *this)
{
  return GetStringCSF(aTxtStructureTa_0, 0, g_Str_File_Init_CPP, 6190); /*0x535d86*/
}



// ==== 0x00535D90  SetStructureTabCommandClass::performAction_6  this=SetStructureTabCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_6(SetStructureTabCommandClass *this)
{
  int _7342A0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342A0) = PlayerClass::HasPlayers(&stru_880D2C); /*0x535d95*/
  if ( (_BYTE)_7342A0 ) /*0x535d9c*/
  {
    SidebarClass::SwitchTab((int)&dword_87F7E8, 0); /*0x535da5*/
    _7342A0 = UI_Create_7342A0(); /*0x535daa*/
    if ( _7342A0 ) /*0x535db1*/
    {
      v4 = (_DWORD *)_7342A0; /*0x535db5*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342A0 + 400))(_7342A0, 0, 0); /*0x535dbc*/
      LOBYTE(_7342A0) = BuildingPlacement::Activate(dword_A83D4C, v2, v4); /*0x535dc9*/
    }
  }
  return _7342A0; /*0x535dce*/
}



// ==== 0x00535DE0  SetDefenseTabCommandClass::performAction_7  this=SetDefenseTabCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_7(SetDefenseTabCommandClass *this)
{
  return aDefensetab; /*0x535de5*/
}



// ==== 0x00535DF0  SetDefenseTabCommandClass::performAction_8  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_8(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(aTxtDefenseTab, 0, g_Str_File_Init_CPP, 6212); /*0x535e06*/
}



// ==== 0x00535E10  SetDefenseTabCommandClass::performAction_9  this=SetDefenseTabCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_9(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6214); /*0x535e26*/
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

  LOBYTE(_7342B0) = PlayerClass::HasPlayers(&stru_881CC0); /*0x535e55*/
  if ( (_BYTE)_7342B0 ) /*0x535e5c*/
  {
    SidebarClass::SwitchTab((int)&dword_87F7E8, 1); /*0x535e65*/
    _7342B0 = UI_Create_7342B0(); /*0x535e6a*/
    if ( _7342B0 ) /*0x535e71*/
    {
      v4 = (_DWORD *)_7342B0; /*0x535e75*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342B0 + 400))(_7342B0, 0, 0); /*0x535e7c*/
      LOBYTE(_7342B0) = BuildingPlacement::Activate(dword_A83D4C, v2, v4); /*0x535e89*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6240); /*0x535ee6*/
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

  result = PlayerClass::HasPlayers(&stru_882C54); /*0x535f15*/
  if ( (_BYTE)result ) /*0x535f1c*/
    return SidebarClass::SwitchTab((int)&dword_87F7E8, 2); /*0x535f25*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6261); /*0x535f76*/
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

  result = PlayerClass::HasPlayers(&stru_883BE8); /*0x535fa5*/
  if ( (_BYTE)result ) /*0x535fac*/
    return SidebarClass::SwitchTab((int)&dword_87F7E8, 3); /*0x535fb5*/
  return result; /*0x535fba*/
}



// ==== 0x00535FC0  SelectTeamCommand::Construct  this=SelectTeamCommand  sig=csp ====
_DWORD *__thiscall SelectTeamCommand::Construct(SelectTeamCommand *this, int a2)
{
  this->SelectTeamCommand_field_00 = a2; /*0x535fc6*/
  *(_DWORD *)this->CommandClass = &SelectTeamCommandClass::`vftable'; /*0x535fc9*/
  return this->CommandClass; /*0x535fcf*/
}



// ==== 0x00535FE0  SelectTeamCommandClass::AddRef  this=SelectTeamCommand  sig=csp ====
char *__thiscall SelectTeamCommand::AddRef(SelectTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamSelect_%d", *(_DWORD *)&this->m_1[3]); /*0x535fee*/
  return &stru_A8EB00.?[2512]; /*0x535ffb*/
}



// ==== 0x00536000  SelectTeamCommandClass::Release  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::Release(SelectTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536005*/
  StringCSF = GetStringCSF(aTxtSelectTeam, 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536020*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53602d*/
}



// ==== 0x00536030  SelectTeamCommandClass::ddtor  this=SelectTeamCommand  sig=csp ====
wchar_t *SelectTeamCommand::ddtor(SelectTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6294); /*0x536046*/
}



// ==== 0x00536050  SelectTeamCommandClass::Read  this=SelectTeamCommand  sig=csp ====
wchar_t *__thiscall SelectTeamCommand::Read(SelectTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536055*/
  StringCSF = GetStringCSF(aTxtSelectTeamD, 0, g_Str_File_Init_CPP, 6296); /*0x536065*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536070*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53607d*/
}



// ==== 0x00536080  SelectTeamCommandClass::Do  this=SelectTeamCommand  sig=csp ====
int __thiscall SelectTeamCommand::Do(SelectTeamCommandClass *this, int a2)
{
  return TacticalClass::SetObserverView(*(char **)&this->m_1[3]); /*0x536088*/
}



// ==== 0x00536090  SelectTeamCommandClass::performAction_22  this=SelectTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_22(SelectTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536099*/
  if ( (a2 & 1) != 0 ) /*0x53609f*/
    __3_YAXPAX_Z(this); /*0x5360a2*/
  return (std::locale::facet *)this; /*0x5360ac*/
}



// ==== 0x005360B0  AddTeamCommand::Construct  this=AddTeamCommand  sig=csp ====
_DWORD *__thiscall AddTeamCommand::Construct(AddTeamCommand *this, int a2)
{
  this->AddTeamCommand_field_00 = a2; /*0x5360b6*/
  *(_DWORD *)this->CommandClass = &AddTeamCommandClass::`vftable'; /*0x5360b9*/
  return this->CommandClass; /*0x5360bf*/
}



// ==== 0x005360D0  AddTeamCommandClass::AddRef  this=AddTeamCommand  sig=csp ====
char *__thiscall AddTeamCommand::AddRef(AddTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamAddSelect_%d", *(_DWORD *)&this->m_1[3]); /*0x5360de*/
  return &stru_A8EB00.?[2512]; /*0x5360eb*/
}



// ==== 0x005360F0  AddTeamCommandClass::Release  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::Release(AddTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5360f5*/
  StringCSF = GetStringCSF(aTxtAddSelectTe, 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536110*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53611d*/
}



// ==== 0x00536120  AddTeamCommandClass::ddtor  this=AddTeamCommand  sig=csp ====
wchar_t *AddTeamCommand::ddtor(AddTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6328); /*0x536136*/
}



// ==== 0x00536140  AddTeamCommandClass::Read  this=AddTeamCommand  sig=csp ====
wchar_t *__thiscall AddTeamCommand::Read(AddTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536145*/
  StringCSF = GetStringCSF(aTxtAddSelectTe_0, 0, g_Str_File_Init_CPP, 6330); /*0x536155*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536160*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53616d*/
}



// ==== 0x00536170  AddTeamCommandClass::Do  this=AddTeamCommand  sig=csp ====
int __thiscall AddTeamCommand::Do(AddTeamCommandClass *this, int a2)
{
  return SquadClass::SelectAllMembers(*(char **)&this->m_1[3]); /*0x536178*/
}



// ==== 0x00536180  AddTeamCommandClass::performAction_23  this=AddTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_23(AddTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536189*/
  if ( (a2 & 1) != 0 ) /*0x53618f*/
    __3_YAXPAX_Z(this); /*0x536192*/
  return (std::locale::facet *)this; /*0x53619c*/
}



// ==== 0x005361A0  CenterTeamCommand::Construct  this=CenterTeamCommand  sig=csp ====
_DWORD *__thiscall CenterTeamCommand::Construct(CenterTeamCommand *this, int a2)
{
  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *(_DWORD *)this->CommandClass = &CenterTeamCommandClass::`vftable'; /*0x5361a9*/
  return this->CommandClass; /*0x5361af*/
}



// ==== 0x005361C0  CenterTeamCommandClass::AddRef  this=CenterTeamCommand  sig=csp ====
char *__thiscall CenterTeamCommand::AddRef(CenterTeamCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "TeamCenter_%d", *(_DWORD *)&this->m_1[3]); /*0x5361ce*/
  return &stru_A8EB00.?[2512]; /*0x5361db*/
}



// ==== 0x005361E0  CenterTeamCommandClass::Release  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::Release(CenterTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5361e5*/
  StringCSF = GetStringCSF(aTxtCenterTeam, 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536200*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53620d*/
}



// ==== 0x00536210  CenterTeamCommandClass::GetTeamString  this=CenterTeamCommand  sig=csp ====
wchar_t *CSF::GetTeamString(CenterTeamCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6363); /*0x536226*/
}



// ==== 0x00536230  CenterTeamCommandClass::Read  this=CenterTeamCommand  sig=csp ====
wchar_t *__thiscall CenterTeamCommand::Read(CenterTeamCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x536235*/
  StringCSF = GetStringCSF(aTxtCenterTeamD, 0, g_Str_File_Init_CPP, 6365); /*0x536245*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536250*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53625d*/
}



// ==== 0x00536260  CenterTeamCommandClass::Do  this=CenterTeamCommand  sig=csp ====
int __thiscall CenterTeamCommand::Do(CenterTeamCommandClass *this, int a2)
{
  return (int)TacticalClass::ResetView(*(char **)&this->m_1[3]); /*0x536268*/
}



// ==== 0x00536270  CenterTeamCommandClass::performAction_24  this=CenterTeamCommand  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_24(CenterTeamCommandClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &CommandClass::`vftable'; /*0x536279*/
  if ( (a2 & 1) != 0 ) /*0x53627f*/
    __3_YAXPAX_Z(this); /*0x536282*/
  return (std::locale::facet *)this; /*0x53628c*/
}



// ==== 0x00536290  TauntCommandClass::Construct  this=TauntCommandClass  sig=csp ====
_DWORD *__thiscall TauntCommandClass::Construct(TauntCommandClass *this, int a2)
{
  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  *(_DWORD *)this->CommandClass = &TauntCommandClass::`vftable'; /*0x536299*/
  return this->CommandClass; /*0x53629f*/
}



// ==== 0x005362B0  TauntCommandClass::AddRef  this=TauntCommandClass  sig=csp ====
char *__thiscall TauntCommandClass::AddRef(TauntCommandClass *this)
{
  sprintf(&stru_A8EB00.?[2512], "Taunt_%d", this->TauntCommandClass_field_00); /*0x5362be*/
  return &stru_A8EB00.?[2512]; /*0x5362cb*/
}



// ==== 0x005362D0  TauntCommandClass::Release  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::Release(TauntCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]

  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF(aTxtTauntNumber, 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, TauntCommandClass_field_00); /*0x5362f0*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x5362fd*/
}



// ==== 0x00536300  TauntCommandClass::ddtor  this=TauntCommandClass  sig=csp ====
wchar_t *TauntCommandClass::ddtor(TauntCommandClass *this)
{
  return GetStringCSF(aTxtTaunt, 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}



// ==== 0x00536320  TauntCommandClass::Read  this=TauntCommandClass  sig=csp ====
wchar_t *__thiscall TauntCommandClass::Read(TauntCommandClass *this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]

  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x536325*/
  StringCSF = GetStringCSF(aTxtTauntDesc, 0, g_Str_File_Init_CPP, 6409); /*0x536335*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, TauntCommandClass_field_00); /*0x536340*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53634d*/
}



// ==== 0x00536350  TauntCommandClass::Do  this=TauntCommandClass  sig=csp ====
char __thiscall TauntCommandClass::Do(TauntCommandClass *this, int a2)
{
  DWORD Time; // eax
  int v4; // eax
  char TauntCommandClass_field_00; // cl
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
  int nextArrayIndex; // [esp+8h] [ebp-1CCh]
  int v19; // [esp+Ch] [ebp-1C8h] BYREF
  char v20[43]; // [esp+10h] [ebp-1C4h] BYREF
  char v21; // [esp+3Bh] [ebp-199h]
  char v22; // [esp+3Ch] [ebp-198h]
  unsigned int v23; // [esp+3Dh] [ebp-197h]
  int v24; // [esp+41h] [ebp-193h]

  LOBYTE(Time) = dword_A8B238; /*0x536350*/
  if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x536366*/
  {
    LOBYTE(Time) = dword_A8B538[0]; /*0x53636c*/
    if ( !dword_A8B538[0] ) /*0x536373*/
    {
      Time = timeGetTime(); /*0x536379*/
      if ( (dword_825C88 == -1 || (int)(Time - dword_825C88) > 5000) /*0x5363c0*/
        && (dword_A8D110 && *(_DWORD *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(_DWORD *)&dword_A8B238 == 4) )
      {
        dword_825C88 = Time; /*0x5363c6*/
        v19 = 29; /*0x5363d1*/
        strcpy(v20, ToWideStringChar((char *)*dword_A8DA78)); /*0x5363fb*/
        v23 = dword_A8B394; /*0x53640a*/
        v4 = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x536413*/
        TauntCommandClass_field_00 = this->TauntCommandClass_field_00; /*0x53641e*/
        v24 = v4; /*0x536421*/
        LOBYTE(v6) = (16 * *(_BYTE *)(*dword_A8DA78 + 75)) /*0x536432*/
                   ^ ((16 * *(_BYTE *)(*dword_A8DA78 + 75))
                    ^ TauntCommandClass_field_00)
                   & 0xF;
        v22 = v6; /*0x536434*/
        PlayTauntClass(v6); /*0x536438*/
        v7 = 0; /*0x536442*/
        v21 = 0; /*0x536446*/
        nextArrayIndex = stru_A80220.?; /*0x53644b*/
        for ( i = 0; v7 < nextArrayIndex; i = v7 ) /*0x536453*/
        {
          v8 = *((_DWORD *)stru_A80220.? + v7); /*0x536460*/
          if ( v8 ) /*0x536465*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v8 + 52) + 421) ) /*0x53646e*/
            {
              if ( byte_A8D108[v7] ) /*0x53647c*/
              {
                SendCount = Network::GetSendCount(&unk_A8E9C0); /*0x536494*/
                v10 = 0; /*0x536496*/
                if ( SendCount > 0 ) /*0x53649a*/
                {
                  v11 = (const wchar_t *)(v8 + 90154); /*0x5364a0*/
                  do /*0x53651a*/
                  {
                    ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v10); /*0x5364b1*/
                    Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x5364b9*/
                    if ( !wcscmp(v11, Class) ) /*0x5364c0*/
                    {
                      PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x5364d2*/
                      if ( byte_A8DBA0 ) /*0x5364df*/
                      {
                        LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], ConnectionSpeed); /*0x5364e7*/
                        v21 |= LinkedIndex; /*0x5364ec*/
                      }
                      else
                      {
                        Network::SendMessage(&unk_A8E9C0.Socket, (int)&v19, 455, 1, PlayerByID, 0, 0); /*0x536508*/
                        Network::ReceiveLoop(&unk_A8E9C0); /*0x536512*/
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
        LOBYTE(Time) = byte_A8DBA0; /*0x536532*/
        if ( byte_A8DBA0 ) /*0x53653b*/
        {
          LOBYTE(Time) = v21; /*0x53653d*/
          if ( v21 ) /*0x536543*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)&v19, 455, 1, *dword_A8DA78 + 40, 0, 0); /*0x536566*/
            LOBYTE(Time) = Network::ReceiveLoop(&unk_A8E9C0); /*0x536570*/
          }
        }
      }
    }
  }
  return Time; /*0x536575*/
}



// ==== 0x00536580  TauntCommandClass::performAction_25  this=TauntCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_25(TauntCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x536589*/
  if ( (a2 & 1) != 0 ) /*0x53658f*/
    __3_YAXPAX_Z(this); /*0x536592*/
  return (std::locale::facet *)this; /*0x53659c*/
}



// ==== 0x005365A0  NextObjectCommandClass::performAction_26  this=NextObjectCommandClass  sig=csp ====
char *__thiscall CreateTeamCommand::performAction_26(NextObjectCommandClass *this)
{
  return aNextobject; /*0x5365a5*/
}



// ==== 0x005365B0  NextObjectCommandClass::performAction_27  this=NextObjectCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_27(NextObjectCommandClass *this)
{
  return GetStringCSF(aTxtNextObject, 0, g_Str_File_Init_CPP, 6526); /*0x5365c6*/
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
AnimClass *__thiscall CreateTeamCommand::performAction_30(
        NextObjectCommandClass *this,
        AnimClass *__return_ptr retstr,
        int a3)
{
  MapClass *v3; // esi
  _BYTE *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536617*/
  TacticalClass::SetDisplayMode((TacticalClass *)&dword_87F7E8, 0, 0); /*0x536625*/
  BuildingClass::TogglePower2((BuildingClass *)&dword_87F7E8, 0); /*0x536631*/
  BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x53663d*/
  if ( dword_A8ECC8 ) /*0x536649*/
    v4 = *(_BYTE **)dword_A8ECBC; /*0x536650*/
  else
    v4 = 0; /*0x536654*/
  v7 = v3; /*0x536656*/
  result = (AnimClass *)sub_4AA2B0(v4); /*0x53665d*/
  v6 = result; /*0x536662*/
  if ( result ) /*0x536666*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x536668*/
    (*(void (__thiscall **)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536671*/
    TacticalClass::InterpolateView(v8); /*0x53667c*/
    return (AnimClass *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x536688*/
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
  char v2; // [esp+5h] [ebp+5h]

  return UpdateUnitHealthTooltip((v2 & 1) == 0); /*0x536961*/
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
  char v2; // [esp+5h] [ebp+5h]

  return DrawUnitExperiencePopup((v2 & 1) == 0); /*0x536a01*/
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
AnimClass *__thiscall CreateTeamCommand::performAction_69(
        PrevObjectCommandClass *this,
        AnimClass *__return_ptr retstr,
        int a3)
{
  MapClass *v3; // esi
  _BYTE *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536a87*/
  TacticalClass::SetDisplayMode((TacticalClass *)&dword_87F7E8, 0, 0); /*0x536a95*/
  BuildingClass::TogglePower2((BuildingClass *)&dword_87F7E8, 0); /*0x536aa1*/
  BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x536aad*/
  if ( dword_A8ECC8 ) /*0x536ab9*/
    v4 = *(_BYTE **)dword_A8ECBC; /*0x536ac0*/
  else
    v4 = 0; /*0x536ac4*/
  v7 = v3; /*0x536ac6*/
  result = (AnimClass *)sub_4AA380(v4); /*0x536acd*/
  v6 = result; /*0x536ad2*/
  if ( result ) /*0x536ad6*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x536ad8*/
    (*(void (__thiscall **)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536ae1*/
    TacticalClass::InterpolateView(v8); /*0x536aec*/
    return (AnimClass *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x536af8*/
  }
  return result; /*0x536afe*/
}



// ==== 0x00536B10  StopCommandClass::performAction_70  this=StopCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_70(StopCommandClass *this)
{
  return aStopobject; /*0x536b15*/
}



// ==== 0x00536B20  StopCommandClass::performAction_71  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_71(StopCommandClass *this)
{
  return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858); /*0x536b36*/
}



// ==== 0x00536B40  StopCommandClass::performAction_72  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_72(StopCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860); /*0x536b56*/
}



// ==== 0x00536B60  StopCommandClass::performAction_73  this=StopCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_73(StopCommandClass *this)
{
  return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862); /*0x536b76*/
}



// ==== 0x00536B80  StopCommandClass::performAction_74  this=StopCommandClass  sig=csp ====
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::performAction_74(StopCommandClass *this)
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
wchar_t *__stdcall CreateTeamCommand::sub_536C00(int a1)
{
  return UI_Create_730F30(); /*0x536c05*/
}



// ==== 0x00536C10  DeployCommandClass::performAction_80  this=DeployCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_80(DeployCommandClass *this)
{
  return aDeployobject; /*0x536c15*/
}



// ==== 0x00536C20  DeployCommandClass::performAction_81  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_81(DeployCommandClass *this)
{
  return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903); /*0x536c36*/
}



// ==== 0x00536C40  DeployCommandClass::performAction_82  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_82(DeployCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905); /*0x536c56*/
}



// ==== 0x00536C60  DeployCommandClass::performAction_83  this=DeployCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_83(DeployCommandClass *this)
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
char *CreateTeamCommand::performAction_85(GuardCommandClass *this)
{
  return aGuardobject; /*0x536c95*/
}



// ==== 0x00536CA0  GuardCommandClass::performAction_86  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_86(GuardCommandClass *this)
{
  return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931); /*0x536cb6*/
}



// ==== 0x00536CC0  GuardCommandClass::performAction_87  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_87(GuardCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933); /*0x536cd6*/
}



// ==== 0x00536CE0  GuardCommandClass::performAction_88  this=GuardCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_88(GuardCommandClass *this)
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
char *CreateTeamCommand::performAction_90(ScatterCommandClass *this)
{
  return aScatterobject; /*0x536d15*/
}



// ==== 0x00536D20  ScatterCommandClass::performAction_91  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_91(ScatterCommandClass *this)
{
  return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960); /*0x536d36*/
}



// ==== 0x00536D40  ScatterCommandClass::performAction_92  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_92(ScatterCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962); /*0x536d56*/
}



// ==== 0x00536D60  ScatterCommandClass::performAction_93  this=ScatterCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_93(ScatterCommandClass *this)
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
wchar_t *__stdcall CreateTeamCommand::sub_536E00(int a1)
{
  wchar_t *result; // eax

  result = g_SelectionManager; /*0x536e00*/
  if ( (int)g_SelectionManager > 0 ) /*0x536e07*/
  {
    TacticalClass::InterpolateView(); /*0x536e0e*/
    return (wchar_t *)MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x536e1a*/
  }
  return result; /*0x536e1f*/
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
int __stdcall CreateTeamCommand::sub_536EA0(int a1)
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
char *__stdcall CreateTeamCommand::sub_536F20(int a1)
{
  return UI_Create_7318F0(); /*0x536f25*/
}



// ==== 0x00536F30  ToggleRepairCommandClass::performAction_110  this=ToggleRepairCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_110(ToggleRepairCommandClass *this)
{
  return aTogglerepair; /*0x536f35*/
}



// ==== 0x00536F40  ToggleRepairCommandClass::performAction_111  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_111(ToggleRepairCommandClass *this)
{
  return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103); /*0x536f56*/
}



// ==== 0x00536F60  ToggleRepairCommandClass::performAction_112  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_112(ToggleRepairCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7105); /*0x536f76*/
}



// ==== 0x00536F80  ToggleRepairCommandClass::performAction_113  this=ToggleRepairCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_113(ToggleRepairCommandClass *this)
{
  return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107); /*0x536f96*/
}



// ==== 0x00536FA0  ToggleRepairCommandClass::Execute  this=ToggleRepairCommandClass  sig=csp ====
char __stdcall ToggleRepairModeCommandClass::Execute(ToggleRepairCommandClass *this)
{
  return BuildingClass::TogglePower2((BuildingClass *)&stru_87F5F0.__pad_58[416], -1); /*0x536fac*/
}



// ==== 0x00536FB0  ToggleSellCommandClass::performAction_114  this=ToggleSellCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_114(ToggleSellCommandClass *this)
{
  return aTogglesell; /*0x536fb5*/
}



// ==== 0x00536FC0  ToggleSellCommandClass::performAction_115  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_115(ToggleSellCommandClass *this)
{
  return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129); /*0x536fd6*/
}



// ==== 0x00536FE0  ToggleSellCommandClass::performAction_116  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_116(ToggleSellCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7131); /*0x536ff6*/
}



// ==== 0x00537000  ToggleSellCommandClass::performAction_117  this=ToggleSellCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_117(ToggleSellCommandClass *this)
{
  return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133); /*0x537016*/
}



// ==== 0x00537020  ToggleSellCommandClass::performAction_118  this=ToggleSellCommandClass  sig=csp ====
char __stdcall CreateTeamCommand::performAction_118(ToggleSellCommandClass *this)
{
  return BuildingClass::TogglePower((BuildingClass *)&stru_87F5F0.__pad_58[416], -1); /*0x53702c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7174); /*0x537076*/
}



// ==== 0x00537080  BeaconPlacementCommandClass::performAction_122  this=BeaconPlacementCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_122(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176); /*0x537096*/
}



// ==== 0x005370A0  BeaconPlacementCommandClass::performAction_123  this=BeaconPlacementCommandClass  sig=csp ====
int __thiscall CreateTeamCommand::performAction_123(BeaconPlacementCommandClass *this)
{
  int result; // eax

  result = *(_DWORD *)&dword_A8B238; /*0x5370a0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x5370a7*/
  {
    if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x5370ac*/
      return UI_Create_731A30(); /*0x5370ae*/
  }
  return result; /*0x5370b3*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7197); /*0x537106*/
}



// ==== 0x00537110  CenterREventCommandClass::performAction_127  this=CenterREventCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_127(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199); /*0x537126*/
}



// ==== 0x00537130  CenterREventCommandClass::performAction_128  this=CenterREventCommandClass  sig=csp ====
// attributes: thunk
unsigned int __thiscall CreateTeamCommand::performAction_128(CenterREventCommandClass *this)
{
  unsigned int result; // eax

  LOWORD(result) = UI_Create_734120(); /*0x537130*/
  return result; /*0x537135*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7251); /*0x537186*/
}



// ==== 0x00537190  SidebarUpCommandClass::performAction_132  this=SidebarUpCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_132(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253); /*0x5371a6*/
}



// ==== 0x005371B0  SidebarUpCommandClass::performAction_133  this=SidebarUpCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_133(SidebarUpCommandClass *this)
{
  return CreateTeamCommand::performAction_245((CreateTeamCommand *)&dword_87F7E8, 1, -1); /*0x5371be*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7391); /*0x537216*/
}



// ==== 0x00537220  SidebarDownCommandClass::performAction_137  this=SidebarDownCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_137(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393); /*0x537236*/
}



// ==== 0x00537240  SidebarDownCommandClass::performAction_138  this=SidebarDownCommandClass  sig=csp ====
char __thiscall CreateTeamCommand::performAction_138(SidebarDownCommandClass *this)
{
  return CreateTeamCommand::performAction_245((CreateTeamCommand *)&dword_87F7E8, 0, -1); /*0x53724e*/
}



// ==== 0x00537260  OptionsCommandClass::performAction_139  this=OptionsCommandClass  sig=csp ====
CHAR *__thiscall CreateTeamCommand::performAction_139(OptionsCommandClass *this)
{
  return g_INI_Key_Options; /*0x537265*/
}



// ==== 0x00537270  OptionsCommandClass::performAction_140  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_140(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530); /*0x537286*/
}



// ==== 0x00537290  OptionsCommandClass::performAction_141  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_141(OptionsCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7532); /*0x5372a6*/
}



// ==== 0x005372B0  OptionsCommandClass::performAction_142  this=OptionsCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_142(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534); /*0x5372c6*/
}



// ==== 0x005372D0  OptionsCommandClass::performAction_143  this=OptionsCommandClass  sig=csp ====
// attributes: thunk
char __stdcall CreateTeamCommand::sub_5372D0(int a1)
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7709); /*0x537326*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[373].referenceCount) << 8) + 128; /*0x537378*/
  v4[0] = (SHIWORD(dword_A8B230[373].nextArrayIndex) << 8) + 128; /*0x53737d*/
  v4[1] = v1; /*0x537386*/
  GroundHeight = 0; /*0x53738a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53739d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x5373a6*/
  result = (_DWORD *)dword_880990; /*0x5373ab*/
  if ( dword_880990 ) /*0x5373b2*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5373c3*/
  return result; /*0x5373c8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7745); /*0x537416*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[373].NeedsSaveOrLink) << 8) + 128; /*0x537468*/
  v4[0] = (SHIWORD(dword_A8B230[373].referenceCount) << 8) + 128; /*0x53746d*/
  v4[1] = v1; /*0x537476*/
  GroundHeight = 0; /*0x53747a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53748d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537496*/
  result = (_DWORD *)dword_880990; /*0x53749b*/
  if ( dword_880990 ) /*0x5374a2*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5374b3*/
  return result; /*0x5374b8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7781); /*0x537506*/
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
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[374].ptr_0) << 8) + 128; /*0x537558*/
  v4[0] = (SHIWORD(dword_A8B230[373].NeedsSaveOrLink) << 8) + 128; /*0x53755d*/
  v4[1] = v1; /*0x537566*/
  GroundHeight = 0; /*0x53756a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53757d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537586*/
  result = (_DWORD *)dword_880990; /*0x53758b*/
  if ( dword_880990 ) /*0x537592*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x5375a3*/
  return result; /*0x5375a8*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7817); /*0x5375f6*/
}



// ==== 0x00537600  View4CommandClass::performAction_162  this=View4CommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_162(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819); /*0x537616*/
}



// ==== 0x00537620  View4CommandClass::InitView  this=View4CommandClass  sig=csp ====
_DWORD *__thiscall TacticalClass::InitView(View4CommandClass *this)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(dword_A8B230[374].ptr_4) << 8) + 128; /*0x537648*/
  v4[0] = (SHIWORD(dword_A8B230[374].ptr_0) << 8) + 128; /*0x53764d*/
  v4[1] = v1; /*0x537656*/
  GroundHeight = 0; /*0x53765a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53766d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537676*/
  result = (_DWORD *)dword_880990; /*0x53767b*/
  if ( dword_880990 ) /*0x537682*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x537693*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7853); /*0x5376e6*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53771e*/
  v5[0] = *v1; /*0x537725*/
  v5[1] = v1[1]; /*0x53773c*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537745*/
  result = dword_A8B230; /*0x537747*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = v2; /*0x53774c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7880); /*0x5377a6*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x5377de*/
  v5[0] = *v1; /*0x5377e5*/
  v5[1] = v1[1]; /*0x5377fc*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537805*/
  result = dword_A8B230; /*0x537807*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = v2; /*0x53780c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7907); /*0x537866*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53789e*/
  v5[0] = *v1; /*0x5378a5*/
  v5[1] = v1[1]; /*0x5378bc*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x5378c5*/
  result = dword_A8B230; /*0x5378c7*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = v2; /*0x5378cc*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7934); /*0x537926*/
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
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53795e*/
  v5[0] = *v1; /*0x537965*/
  v5[1] = v1[1]; /*0x53797c*/
  v2 = *Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, v4, v5); /*0x537985*/
  result = dword_A8B230; /*0x537987*/
  *(int *)((char *)&dword_A8B230[374].ptr_0 + 2) = v2; /*0x53798c*/
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
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7961); /*0x5379e6*/
}



// ==== 0x005379F0  FollowCommandClass::performAction_186  this=FollowCommandClass  sig=csp ====
wchar_t *__thiscall CreateTeamCommand::performAction_186(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963); /*0x537a06*/
}



// ==== 0x00537A10  FollowCommandClass::performAction_187  this=FollowCommandClass  sig=csp ====
bool __thiscall CreateTeamCommand::performAction_187(FollowCommandClass *this)
{
  if ( !dword_A8ECC8 || MapClass::GetScrollMode((MapClass *)&dword_87F7E8) ) /*0x537a1e*/
    return MapClass::SetScrollMode((int)&dword_87F7E8, 0); /*0x537a43*/
  else
    return MapClass::SetScrollMode((int)&dword_87F7E8, *(_DWORD *)dword_A8ECBC); /*0x537a34*/
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

  result = byte_A8B8B4; /*0x537a90*/
  if ( byte_A8B8B4 ) /*0x537a97*/
  {
    result = byte_A8B8B5 == 0; /*0x537aa0*/
    byte_A8B8B5 = byte_A8B8B5 == 0; /*0x537aa3*/
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
  return MessageListClass::AddMessage(&unk_A8BC60, 0, 0, (wchar_t *)v3, 3, 16454, 150, 0); /*0x537b30*/
}



// ==== 0x00537B40  ScreenCaptureCommandClass::Constructor  this=ScreenCaptureCommandClass  sig=csp ====
_DWORD *__thiscall ScreenCaptureCommandClass::Constructor(ScreenCaptureCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &ScreenCaptureCommandClass::`vftable'; /*0x537b42*/
  return this->CommandClass; /*0x537b48*/
}



// ==== 0x00537B50  ScreenCaptureCommandClass::AddRef  this=ScreenCaptureCommandClass  sig=csp ====
char *ScreenCaptureCommandClass::AddRef(ScreenCaptureCommandClass *this)
{
  return aScreencapture; /*0x537b55*/
}



// ==== 0x00537B60  ScreenCaptureCommandClass::ddtor  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::ddtor(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 8071); /*0x537b76*/
}



// ==== 0x00537B80  ScreenCaptureCommandClass::Release  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::Release(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072); /*0x537b96*/
}



// ==== 0x00537BA0  ScreenCaptureCommandClass::Execute  this=ScreenCaptureCommandClass  sig=csp ====
wchar_t *ScreenCaptureCommandClass::Execute(ScreenCaptureCommandClass *this)
{
  return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073); /*0x537bb6*/
}



// ==== 0x00537BC0  ScreenCaptureCommandClass::MakeScreenshot  this=ScreenCaptureCommandClass  sig=csp ====
int __stdcall Game::MakeScreenshot(ScreenCaptureCommandClass *this)
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
  CCFileClass v16; // [esp+44h] [ebp-158h] BYREF
  int v17[3]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  CCFileClass v19; // [esp+B0h] [ebp-ECh] BYREF
  int v20[3]; // [esp+108h] [ebp-94h] BYREF
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
        v2 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537c70*/
        v3 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537c96*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x537ca4*/
        v4 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x537cb8*/
        v5 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, DSurface *, struct tagPOINT *, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x537cf0*/
         + 2))(
          g_DSurface_Hidden,
          v15,
          g_DSurface_Primary,
          &v10,
          0,
          1);
        (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, "SCRN%04d.pcx", ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(&v19, Buffer); /*0x537d27*/
          v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x537d3b*/
          *(_DWORD *)v19.CDFileClass = &CCFileClass::`vftable'; /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          *(_DWORD *)v19.CDFileClass = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(&v16, Buffer); /*0x537d7b*/
        CompressScreenshot((int *)v16.CDFileClass, (int *)g_DSurface_Hidden, &FileSystem_TEMPERAT_PAL); /*0x537d8f*/
        *(_DWORD *)v16.CDFileClass = &CCFileClass::`vftable'; /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        *(_DWORD *)v16.CDFileClass = &off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/
}



// ==== 0x00537DD0  PageUserCommandClass::PageUserCommandClass  this=PageUserCommandClass  sig=csp ====
_DWORD *__thiscall PageUserCommandClass::PageUserCommandClass(PageUserCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &PageUserCommandClass::`vftable'; /*0x537dd2*/
  return this->CommandClass; /*0x537dd8*/
}



// ==== 0x00537DE0  PageUserCommandClass::AddRef  this=PageUserCommandClass  sig=csp ====
char *PageUserCommandClass::AddRef(PageUserCommandClass *this)
{
  return aPageuser; /*0x537de5*/
}



// ==== 0x00537DF0  PageUserCommandClass::Release  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::Release(PageUserCommandClass *this)
{
  return GetStringCSF(aTxtPageuser, 0, g_Str_File_Init_CPP, 7563); /*0x537e06*/
}



// ==== 0x00537E10  PageUserCommandClass::ddtor  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::ddtor(PageUserCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7565); /*0x537e26*/
}



// ==== 0x00537E30  PageUserCommandClass::Read  this=PageUserCommandClass  sig=csp ====
wchar_t *PageUserCommandClass::Read(PageUserCommandClass *this)
{
  return GetStringCSF(aTxtPageuserDes, 0, g_Str_File_Init_CPP, 7567); /*0x537e46*/
}



// ==== 0x00537E50  PageUserCommandClass::Do  this=PageUserCommandClass  sig=csp ====
char __stdcall PageUserCommandClass::_vt08(int a1)
{
  char result; // al

  if ( g_GameMode_Current[0] == 4 ) /*0x537e57*/
    return UI_Add(); /*0x537e59*/
  return result; /*0x537e5e*/
}



// ==== 0x00537E70  CursorPositionCommandClass::Constructor  this=CursorPositionCommandClass  sig=csp ====
_DWORD *__thiscall CursorPositionCommandClass::Constructor(CursorPositionCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &CursorPositionCommandClass::`vftable'; /*0x537e72*/
  return this->CommandClass; /*0x537e78*/
}



// ==== 0x00537E80  CursorPositionCommandClass::performAction_193  this=CursorPositionCommandClass  sig=csp ====
char *CreateTeamCommand::performAction_193(CursorPositionCommandClass *this)
{
  return aCursorcheat; /*0x537e85*/
}



// ==== 0x00537E90  CursorPositionCommandClass::performAction_194  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_194(CursorPositionCommandClass *this)
{
  return GetStringCSF(aGuiCursorcheat, 0, g_Str_File_Init_CPP, 8231); /*0x537ea6*/
}



// ==== 0x00537EB0  CursorPositionCommandClass::performAction_195  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_195(CursorPositionCommandClass *this)
{
  return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232); /*0x537ec6*/
}



// ==== 0x00537ED0  CursorPositionCommandClass::performAction_196  this=CursorPositionCommandClass  sig=csp ====
wchar_t *CreateTeamCommand::performAction_196(CursorPositionCommandClass *this)
{
  return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233); /*0x537ee6*/
}



// ==== 0x00537EF0  CursorPositionCommandClass::performAction_197  this=CursorPositionCommandClass  sig=csp ====
bool __stdcall CreateTeamCommand::performAction_197(CursorPositionCommandClass *this)
{
  bool result; // al

  result = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537ef7*/
  LOBYTE(stru_A8EB00.__pad_CD4[1]) = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537efa*/
  return result; /*0x537eff*/
}



// ==== 0x00537F10  DeleteCommandClass::Constructor  this=DeleteCommandClass  sig=csp ====
_DWORD *__thiscall DeleteCommandClass::Constructor(DeleteCommandClass *this)
{
  *(_DWORD *)this->CommandClass = &DeleteCommandClass::`vftable'; /*0x537f12*/
  return this->CommandClass; /*0x537f18*/
}



// ==== 0x00537F20  DeleteCommandClass::AddRef  this=DeleteCommandClass  sig=csp ====
char *DeleteCommandClass::AddRef(DeleteCommandClass *this)
{
  return aDelete; /*0x537f25*/
}



// ==== 0x00537F30  DeleteCommandClass::Release  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::Release(DeleteCommandClass *this)
{
  return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559); /*0x537f46*/
}



// ==== 0x00537F50  DeleteCommandClass::ddtor  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::ddtor(DeleteCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6561); /*0x537f66*/
}



// ==== 0x00537F70  DeleteCommandClass::Read  this=DeleteCommandClass  sig=csp ====
wchar_t *DeleteCommandClass::Read(DeleteCommandClass *this)
{
  return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563); /*0x537f86*/
}



// ==== 0x00537F90  DeleteCommandClass::Undo  this=DeleteCommandClass  sig=csp ====
// attributes: thunk
char __stdcall DeleteCommandClass::Undo(DeleteCommandClass *this)
{
  return UI_Delete(); /*0x537f95*/
}



// ==== 0x00537FA0  MultiplayerDebugCommandClass::performAction_198  this=MultiplayerDebugCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_198(MultiplayerDebugCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fa9*/
  if ( (a2 & 1) != 0 ) /*0x537faf*/
    __3_YAXPAX_Z(this); /*0x537fb2*/
  return (std::locale::facet *)this; /*0x537fbc*/
}



// ==== 0x00537FC0  MultiplayerSyncCommandClass::performAction_199  this=MultiplayerSyncCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_199(MultiplayerSyncCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fc9*/
  if ( (a2 & 1) != 0 ) /*0x537fcf*/
    __3_YAXPAX_Z(this); /*0x537fd2*/
  return (std::locale::facet *)this; /*0x537fdc*/
}



// ==== 0x00537FE0  FollowCommandClass::performAction_200  this=FollowCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_200(FollowCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x537fe9*/
  if ( (a2 & 1) != 0 ) /*0x537fef*/
    __3_YAXPAX_Z(this); /*0x537ff2*/
  return (std::locale::facet *)this; /*0x537ffc*/
}



// ==== 0x00538000  View1CommandClass::performAction_201  this=View1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_201(View1CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538009*/
  if ( (a2 & 1) != 0 ) /*0x53800f*/
    __3_YAXPAX_Z(this); /*0x538012*/
  return (std::locale::facet *)this; /*0x53801c*/
}



// ==== 0x00538020  View2CommandClass::performAction_202  this=View2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_202(View2CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538029*/
  if ( (a2 & 1) != 0 ) /*0x53802f*/
    __3_YAXPAX_Z(this); /*0x538032*/
  return (std::locale::facet *)this; /*0x53803c*/
}



// ==== 0x00538040  View3CommandClass::performAction_203  this=View3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_203(View3CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538049*/
  if ( (a2 & 1) != 0 ) /*0x53804f*/
    __3_YAXPAX_Z(this); /*0x538052*/
  return (std::locale::facet *)this; /*0x53805c*/
}



// ==== 0x00538060  View4CommandClass::performAction_204  this=View4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_204(View4CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538069*/
  if ( (a2 & 1) != 0 ) /*0x53806f*/
    __3_YAXPAX_Z(this); /*0x538072*/
  return (std::locale::facet *)this; /*0x53807c*/
}



// ==== 0x00538080  SetView1CommandClass::performAction_205  this=SetView1CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_205(SetView1CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538089*/
  if ( (a2 & 1) != 0 ) /*0x53808f*/
    __3_YAXPAX_Z(this); /*0x538092*/
  return (std::locale::facet *)this; /*0x53809c*/
}



// ==== 0x005380A0  SetView2CommandClass::performAction_206  this=SetView2CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_206(SetView2CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380a9*/
  if ( (a2 & 1) != 0 ) /*0x5380af*/
    __3_YAXPAX_Z(this); /*0x5380b2*/
  return (std::locale::facet *)this; /*0x5380bc*/
}



// ==== 0x005380C0  SetView3CommandClass::performAction_207  this=SetView3CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_207(SetView3CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380c9*/
  if ( (a2 & 1) != 0 ) /*0x5380cf*/
    __3_YAXPAX_Z(this); /*0x5380d2*/
  return (std::locale::facet *)this; /*0x5380dc*/
}



// ==== 0x005380E0  SetView4CommandClass::performAction_208  this=SetView4CommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_208(SetView4CommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5380e9*/
  if ( (a2 & 1) != 0 ) /*0x5380ef*/
    __3_YAXPAX_Z(this); /*0x5380f2*/
  return (std::locale::facet *)this; /*0x5380fc*/
}



// ==== 0x00538100  OptionsCommandClass::performAction_209  this=OptionsCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_209(OptionsCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538109*/
  if ( (a2 & 1) != 0 ) /*0x53810f*/
    __3_YAXPAX_Z(this); /*0x538112*/
  return (std::locale::facet *)this; /*0x53811c*/
}



// ==== 0x00538120  SidebarUpCommandClass::performAction_210  this=SidebarUpCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_210(SidebarUpCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538129*/
  if ( (a2 & 1) != 0 ) /*0x53812f*/
    __3_YAXPAX_Z(this); /*0x538132*/
  return (std::locale::facet *)this; /*0x53813c*/
}



// ==== 0x00538140  SidebarDownCommandClass::performAction_211  this=SidebarDownCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_211(SidebarDownCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538149*/
  if ( (a2 & 1) != 0 ) /*0x53814f*/
    __3_YAXPAX_Z(this); /*0x538152*/
  return (std::locale::facet *)this; /*0x53815c*/
}



// ==== 0x00538160  CenterREventCommandClass::performAction_212  this=CenterREventCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_212(CenterREventCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538169*/
  if ( (a2 & 1) != 0 ) /*0x53816f*/
    __3_YAXPAX_Z(this); /*0x538172*/
  return (std::locale::facet *)this; /*0x53817c*/
}



// ==== 0x00538180  BeaconPlacementCommandClass::performAction_213  this=BeaconPlacementCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_213(BeaconPlacementCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538189*/
  if ( (a2 & 1) != 0 ) /*0x53818f*/
    __3_YAXPAX_Z(this); /*0x538192*/
  return (std::locale::facet *)this; /*0x53819c*/
}



// ==== 0x005381A0  ToggleSellCommandClass::performAction_214  this=ToggleSellCommandClass  sig=csp ====
std::locale::facet *__thiscall CreateTeamCommand::performAction_214(ToggleSellCommandClass *this, char a2)
{
  *this = (ToggleSellCommandClass)&CommandClass::`vftable'; /*0x5381a9*/
  if ( (a2 & 1) != 0 ) /*0x5381af*/
    __3_YAXPAX_Z(this); /*0x5381b2*/
  return (std::locale::facet *)this; /*0x5381bc*/
}



// ==== 0x005381C0  ToggleRepairCommandClass::performAction_215  this=ToggleRepairCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_215(ToggleRepairCommandClass *this, char a2)
{
  *this = (ToggleRepairCommandClass)&CommandClass::`vftable'; /*0x5381c9*/
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(this); /*0x5381d2*/
  return this; /*0x5381dc*/
}



// ==== 0x005381E0  AllianceCommandClass::performAction_216  this=AllianceCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_216(AllianceCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(this); /*0x5381f2*/
  return &this->m_0; /*0x5381fc*/
}



// ==== 0x00538200  CenterBaseCommandClass::performAction_217  this=CenterBaseCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_217(CenterBaseCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(this); /*0x538212*/
  return &this->m_0; /*0x53821c*/
}



// ==== 0x00538220  CenterViewCommandClass::performAction_218  this=CenterViewCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_218(CenterViewCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(this); /*0x538232*/
  return &this->m_0; /*0x53823c*/
}



// ==== 0x00538240  ScatterCommandClass::performAction_219  this=ScatterCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_219(ScatterCommandClass *this, char a2)
{
  *this = (ScatterCommandClass)&CommandClass::`vftable'; /*0x538249*/
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(this); /*0x538252*/
  return this; /*0x53825c*/
}



// ==== 0x00538260  GuardCommandClass::performAction_220  this=GuardCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_220(GuardCommandClass *this, char a2)
{
  *this = (GuardCommandClass)&CommandClass::`vftable'; /*0x538269*/
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(this); /*0x538272*/
  return this; /*0x53827c*/
}



// ==== 0x00538280  StopCommandClass::performAction_221  this=StopCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_221(StopCommandClass *this, char a2)
{
  *this = (StopCommandClass)&CommandClass::`vftable'; /*0x538289*/
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(this); /*0x538292*/
  return this; /*0x53829c*/
}



// ==== 0x005382A0  AllToCheerCommandClass::performAction_222  this=AllToCheerCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_222(AllToCheerCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(this); /*0x5382b2*/
  return &this->m_0; /*0x5382bc*/
}



// ==== 0x005382C0  DeployCommandClass::performAction_223  this=DeployCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_223(DeployCommandClass *this, char a2)
{
  *this = (DeployCommandClass)&CommandClass::`vftable'; /*0x5382c9*/
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(this); /*0x5382d2*/
  return this; /*0x5382dc*/
}



// ==== 0x005382E0  PrevObjectCommandClass::performAction_224  this=PrevObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_224(PrevObjectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(this); /*0x5382f2*/
  return &this->m_0; /*0x5382fc*/
}



// ==== 0x00538300  NextObjectCommandClass::performAction_225  this=NextObjectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_225(NextObjectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(this); /*0x538312*/
  return &this->m_0; /*0x53831c*/
}



// ==== 0x00538320  PlanningModeCommandClass::performAction_226  this=PlanningModeCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_226(PlanningModeCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(this); /*0x538332*/
  return &this->m_0; /*0x53833c*/
}



// ==== 0x00538340  CombatantSelectCommandClass::performAction_227  this=CombatantSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_227(CombatantSelectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(this); /*0x538352*/
  return &this->m_0; /*0x53835c*/
}



// ==== 0x00538360  TypeSelectCommandClass::performAction_228  this=TypeSelectCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_228(TypeSelectCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(this); /*0x538372*/
  return &this->m_0; /*0x53837c*/
}



// ==== 0x00538380  HealthNavCommandClass::performAction_229  this=HealthNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_229(HealthNavCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(this); /*0x538392*/
  return &this->m_0; /*0x53839c*/
}



// ==== 0x005383A0  VeterancyNavCommandClass::performAction_230  this=VeterancyNavCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_230(VeterancyNavCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(this); /*0x5383b2*/
  return &this->m_0; /*0x5383bc*/
}



// ==== 0x005383C0  SetStructureTabCommandClass::performAction_231  this=SetStructureTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_231(SetStructureTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(this); /*0x5383d2*/
  return &this->m_0; /*0x5383dc*/
}



// ==== 0x005383E0  SetDefenseTabCommandClass::performAction_232  this=SetDefenseTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_232(SetDefenseTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(this); /*0x5383f2*/
  return &this->m_0; /*0x5383fc*/
}



// ==== 0x00538400  SetUnitTabCommandClass::performAction_233  this=SetUnitTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_233(SetUnitTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(this); /*0x538412*/
  return &this->m_0; /*0x53841c*/
}



// ==== 0x00538420  SetInfantryTabCommandClass::performAction_234  this=SetInfantryTabCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_234(SetInfantryTabCommandClass *this, char a2)
{
  this->m_0 = (int)&CommandClass::`vftable'; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(this); /*0x538432*/
  return &this->m_0; /*0x53843c*/
}



// ==== 0x00538440  ScreenCaptureCommandClass::performAction_235  this=ScreenCaptureCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_235(ScreenCaptureCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538449*/
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(this); /*0x538452*/
  return this->CommandClass; /*0x53845c*/
}



// ==== 0x00538460  PageUserCommandClass::performAction_236  this=PageUserCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_236(PageUserCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538469*/
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(this); /*0x538472*/
  return this->CommandClass; /*0x53847c*/
}



// ==== 0x00538480  CursorPositionCommandClass::performAction_237  this=CursorPositionCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_237(CursorPositionCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x538489*/
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(this); /*0x538492*/
  return this->CommandClass; /*0x53849c*/
}



// ==== 0x005384A0  DeleteCommandClass::performAction_238  this=DeleteCommandClass  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::performAction_238(DeleteCommandClass *this, char a2)
{
  *(_DWORD *)this->CommandClass = &CommandClass::`vftable'; /*0x5384a9*/
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(this); /*0x5384b2*/
  return this->CommandClass; /*0x5384bc*/
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
int __thiscall VectorClass_ptr_CCINIClass::Clear(_VectorClass_PAVCCINIClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53851a*/
}



// ==== 0x00538520  _VectorClass_PAVCCINIClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::AddRef(_VectorClass_PAVCCINIClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x538522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53852d*/
  {
    v3 = 0; /*0x53852f*/
    if ( m_8 <= 0 ) /*0x538533*/
      return 1; /*0x538553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x538535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53853b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x538544*/
    {
      ++v3; /*0x538546*/
      ++v4; /*0x538547*/
      if ( v3 >= m_8 ) /*0x53854c*/
        return 1; /*0x53854c*/
    }
  }
  return 0; /*0x53854e*/
}



// ==== 0x00538560  _VectorClass_PAVCCINIClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CCINIClass::Remove(_VectorClass_PAVCCINIClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53856c*/
  {
    LOBYTE(this->m_C) = 0; /*0x538576*/
    if ( a3 ) /*0x53857c*/
      v4 = a3; /*0x538592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53858e*/
    LOBYTE(this->m_C) = 1; /*0x538596*/
    if ( v4 ) /*0x53859a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5385a5*/
      {
        m_8 = this->m_8; /*0x5385ac*/
        if ( a2 < m_8 ) /*0x5385b1*/
          m_8 = a2; /*0x5385b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5385b9*/
          ++i; /*0x5385be*/
        if ( BYTE1(this->m_C) ) /*0x5385cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5385d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5385de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5385e7*/
      this->m_8 = a2; /*0x5385ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x5385f2*/
      return 1; /*0x5385f8*/
    }
    else
    {
      return 0; /*0x53859f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVCCINIClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x538602*/
    return 1; /*0x538608*/
  }
}



// ==== 0x00538610  _VectorClass_PAVCCINIClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CCINIClass::ddtor(_VectorClass_PAVCCINIClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53861d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x538623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53862b*/
  }
  BYTE1(this->m_C) = 0; /*0x53862e*/
  this->m_8 = 0; /*0x538631*/
}



// ==== 0x00538640  _VectorClass_PAVCCINIClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CCINIClass::GetSize(_VectorClass_PAVCCINIClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x538640*/
    return 0; /*0x538648*/
  m_8 = this->m_8; /*0x53864e*/
  result = 0; /*0x538651*/
  if ( m_8 <= 0 ) /*0x538655*/
    return -1; /*0x53866c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53865b*/
  {
    if ( ++result >= m_8 ) /*0x53866a*/
      return -1; /*0x53866a*/
  }
  return result; /*0x53864a*/
}



// ==== 0x00538680  _VectorClass_PAVCCINIClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CCINIClass::Get(_VectorClass_PAVCCINIClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x538680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x538695*/
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
      v5 = this->q008; /*0x5386df*/
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
    this->q008 = a2; /*0x538722*/
    this->IsAllocated = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x53872e*/
  }
  v7 = this->q008; /*0x538731*/
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
char __thiscall DynamicVector::Add_Alt2(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x538783*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x53878b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(_DWORD *)this->__pad_14; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x5387b5*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5387b8*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x5387be*/
  *(_DWORD *)(v7 + 4 * (_DWORD)DynamicVector_field_0x10) = *a2; /*0x5387c8*/
  return 1; /*0x5387b1*/
}



// ==== 0x005387D0  SortedArray::Append  this=SortedArray  sig=csp ====
char __thiscall SortedArray_Append(int this, _DWORD *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)(this + 8); /*0x5387da*/
  if ( *(_DWORD *)(this + 4) + 1 <= v4 ) /*0x5387e0*/
  {
LABEL_9:
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4)) = *a2; /*0x53885b*/
    *(_DWORD *)(*(_DWORD *)this + 8 * *(_DWORD *)(this + 4) + 4) = *a3; /*0x538875*/
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
  v6 = (char *)__2_YAPAXI_Z(8 * (v4 + v5)); /*0x538807*/
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v6[v8 + 4] = v9[1] ) /*0x53881c*/
    {
      v8 = 8 * i; /*0x538820*/
      v9 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x538829*/
      *(_DWORD *)&v6[v8] = *v9; /*0x53882e*/
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
char __thiscall SortedArray_RemoveByKey(int this, int *a2)
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
  _DWORD *v13; // edi
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
  v15 = *a2; /*0x5388e4*/
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
  v13 = *(_DWORD **)this; /*0x538957*/
  v14 = *(_DWORD *)(this + 4) - 1; /*0x538959*/
  *(_DWORD *)(this + 4) = v14; /*0x53895c*/
  v13[2 * v14] = 0; /*0x53895f*/
  v13[2 * v14 + 1] = 0; /*0x538962*/
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
char *__thiscall CreateTeamCommand::performAction_243(CreateTeamCommand *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x538a2d*/
    v4 = (char *)this - 4; /*0x538a31*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x538a34*/
    v6 = v3 - 1; /*0x538a37*/
    if ( v6 >= 0 ) /*0x538a38*/
    {
      v7 = v6 + 1; /*0x538a3b*/
      do /*0x538a4f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x538a3e*/
        *(_DWORD *)v5->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a43*/
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
    *(_DWORD *)this->__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a6a*/
    ComPtr::Release((ComPtr *)this); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(this); /*0x538a7b*/
    return this->__pad_0; /*0x538a83*/
  }
}



// ==== 0x00538A90  _VectorClass_PAVCCINIClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CCINIClass::Add(_VectorClass_PAVCCINIClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x538a93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CCINIClass *>::`vftable'; /*0x538a96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x538aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x538aa8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x538ab0*/
  }
  BYTE1(this->m_C) = 0; /*0x538abb*/
  this->m_8 = 0; /*0x538ac1*/
  if ( (a2 & 1) != 0 ) /*0x538ac8*/
    __3_YAXPAX_Z(this); /*0x538acb*/
  return this->__pad_0; /*0x538ad5*/
}



// ==== 0x00538AE0  ?$DynamicVectorClass@PAVCCINIClass@@::performAction_244  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CreateTeamCommand::sub_538AE0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538ae3*/
  *Block = &VectorClass<CCINIClass *>::`vftable'; /*0x538ae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(Block + 1) = 0; /*0x538b00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x538b0b*/
  *(Block + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(Block); /*0x538b1b*/
  return Block; /*0x538b25*/
}



// ==== 0x00538B30  RulesClass::InitINIChain  this=VectorClass  sig=csp ====
_DWORD *__thiscall RulesClass::InitINIChain(RulesClass *this, int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x538b3b*/
  this->DetailBufferZoneWidth = a2; /*0x538b3e*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x538b41*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x538b45*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<CCINIClass *>::`vftable'; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x538b58*/
      return &this->DetailMinFrameRateNormal; /*0x538b5e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    BYTE1(this->AmmoCrateDamage) = 1; /*0x538b70*/
  }
  return &this->DetailMinFrameRateNormal; /*0x538b5d*/
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
  return InitArrayWithValue(unk_A8F7F8, 0, 64); /*0x538c1e*/
}



// ==== 0x00538C20  sub_538C20  this=-  sig=ida-proto ====
int sub_538C20()
{
  dword_A8F908 = 0; /*0x538c22*/
  dword_A8F90C = 0; /*0x538c27*/
  dword_A8F910 = 0; /*0x538c2c*/
  dword_A8F914 = 0; /*0x538c31*/
  return 0; /*0x538c36*/
}



// ==== 0x00538C40  ObjectClass::method_538C40  this=ObjectClass  sig=csp ====
int __thiscall sub_538C40(ObjectClass *this)
{
  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)this); /*0x538c48*/
  if ( (unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538c53*/
  {
    FileClass::Load(&v2, (const CHAR *)1); /*0x538c62*/
    CCFileClass::Read(&v2, &byte_A8F91C, 0x10000); /*0x538c75*/
    CCFileClass::Reset(&v2); /*0x538c7e*/
    byte_A9F91C = 0; /*0x538c83*/
  }
  v2.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538c8e*/
  v4 = 0; /*0x538c96*/
  Vector::Clear((int)v3); /*0x538c9e*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538ca7*/
  return BufferIOFileClass::Dtor(&v2); /*0x538cb4*/
}



// ==== 0x00538CC0  ObjectClass::method_538CC0  this=ObjectClass  sig=csp ====
int __thiscall sub_538CC0(ObjectClass *this)
{
  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)this); /*0x538cc8*/
  if ( !(unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538cd3*/
  {
    FileClass::Load(&v2, (const CHAR *)2); /*0x538ce2*/
    FileClass::Write(&v2, &byte_A8F91C, 0x10000u); /*0x538cf5*/
    CCFileClass::Reset(&v2); /*0x538cfe*/
  }
  v2.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538d07*/
  v4 = 0; /*0x538d0f*/
  Vector::Clear((int)v3); /*0x538d17*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538d20*/
  return BufferIOFileClass::Dtor(&v2); /*0x538d2d*/
}



// ==== 0x00538D40  ObjectClass::method_538D40  this=ObjectClass  sig=csp ====
int sub_538D40(ObjectClass *this)
{
  unsigned __int8 *v1; // eax
  unsigned __int8 *v2; // edi
  int v3; // ecx
  unsigned __int8 *v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned __int8 *v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // edx
  int v15; // esi
  unsigned __int8 *v16; // ecx
  int v17; // eax
  char *v18; // ecx
  int result; // eax
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  char v22; // [esp+18h] [ebp-24h]
  int v23; // [esp+1Ch] [ebp-20h]
  char *v24; // [esp+20h] [ebp-1Ch]
  unsigned __int8 *v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+30h] [ebp-Ch]
  int v29; // [esp+34h] [ebp-8h]
  int v30; // [esp+38h] [ebp-4h]

  v1 = (unsigned __int8 *)dword_A8F918; /*0x538d43*/
  v24 = &byte_A8F91C; /*0x538d4c*/
  while ( 1 ) /*0x538d60*/
  {
    v2 = (unsigned __int8 *)dword_A8F918; /*0x538d60*/
    v3 = *v1; /*0x538d66*/
    v4 = v1 + 1; /*0x538d68*/
    v26 = v3; /*0x538d69*/
    v5 = *v4++; /*0x538d6f*/
    v27 = v5; /*0x538d72*/
    v28 = *v4; /*0x538d7b*/
    v25 = v4 + 1; /*0x538d7f*/
    v23 = 0; /*0x538d83*/
    do /*0x538e42*/
    {
      v6 = *v2; /*0x538d91*/
      v7 = v2 + 1; /*0x538d93*/
      v8 = v6; /*0x538d94*/
      v9 = *v7++; /*0x538d98*/
      v10 = v28 + *v7; /*0x538dab*/
      v2 = v7 + 1; /*0x538dad*/
      v11 = (v26 + v8) >> 1; /*0x538dae*/
      v12 = (v27 + v9) >> 1; /*0x538db0*/
      v30 = v10 >> 1; /*0x538db4*/
      v13 = (unsigned __int8 *)dword_A8F918; /*0x538db8*/
      v29 = v12; /*0x538dbe*/
      v22 = 0; /*0x538dc2*/
      v21 = 500000; /*0x538dc6*/
      v20 = 0; /*0x538dce*/
      while ( 1 ) /*0x538de1*/
      {
        v14 = *v13 - v11; /*0x538de1*/
        v15 = v13[1] - v12; /*0x538dea*/
        v16 = v13 + 2; /*0x538dec*/
        v17 = v14 * v14 + v15 * v15 + (*v16 - v30) * (*v16 - v30); /*0x538e06*/
        v13 = v16 + 1; /*0x538e08*/
        if ( v17 < v21 ) /*0x538e0b*/
        {
          v21 = v17; /*0x538e11*/
          v22 = v20; /*0x538e15*/
        }
        if ( ++v20 >= 256 ) /*0x538e27*/
          break; /*0x538e27*/
        v12 = v29; /*0x538dd4*/
      }
      v18 = v24; /*0x538e29*/
      v24[v23] = v22; /*0x538e35*/
      result = v23 + 1; /*0x538e38*/
      v23 = result; /*0x538e3e*/
    }
    while ( result < 256 ); /*0x538e42*/
    v24 += 256; /*0x538e54*/
    if ( (int)(v18 + 256) >= (int)&byte_A9F91C ) /*0x538e58*/
      break; /*0x538e58*/
    v1 = v25; /*0x538d58*/
  }
  byte_A9F91C = 0; /*0x538e61*/
  return result; /*0x538e5e*/
}



// ==== 0x00538E70  ObjectClass::method_538E70  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_538E70(ObjectClass *this, double a2)
{
  int v3; // edi
  char *v4; // esi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  __int16 result; // ax
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  Color v12; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Eh] [ebp-6h]

  v3 = 0; /*0x538e78*/
  do
  {
    v4 = (char *)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
    v5 = ComputeColorSaturation((unsigned int)v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(_BYTE *)(v5 + 2); /*0x538ea1*/
    LOWORD(v12.Color_field_00) = *(_WORD *)v5; /*0x538ea4*/
    LOBYTE(v14) = v6; /*0x538ea9*/
    BYTE2(v12.Color_field_00) = v6; /*0x538eb7*/
    v13 = v6; /*0x538ebb*/
    LOWORD(v7) = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    BYTE2(v12.Color_field_00) = v7 <= 0 ? 0 : v7;
    v8 = Color::ConvertToRGB(&v12, (int)&v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(_WORD *)v8; /*0x538efb*/
    LOBYTE(v8) = *(_BYTE *)(v8 + 2); /*0x538efe*/
    *(_WORD *)v4 = result; /*0x538f01*/
    v4[2] = v8; /*0x538f04*/
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
  ObjectClass *v16; // [esp+0h] [ebp-84h]
  char v17; // [esp+12h] [ebp-72h]
  char v18; // [esp+13h] [ebp-71h]
  CCFileClass v20; // [esp+18h] [ebp-6Ch] BYREF
  int v21[3]; // [esp+70h] [ebp-14h] BYREF
  int v22; // [esp+7Ch] [ebp-8h]

  v17 = 0; /*0x538f3d*/
  v18 = 0; /*0x538f42*/
  if ( byte_A9F91C ) /*0x538f4c*/
  {
    if ( Source ) /*0x538f50*/
    {
      CCFileClass::Construct(&v20, Source); /*0x538f57*/
      if ( (unsigned __int8)CCFileClass::Open(&v20, 0) ) /*0x538f62*/
      {
        FileClass::Load(&v20, (const CHAR *)1); /*0x538f71*/
        CCFileClass::Read(&v20, &byte_A8F91C, 0x10000); /*0x538f84*/
        CCFileClass::Reset(&v20); /*0x538f8d*/
        byte_A9F91C = 0; /*0x538f92*/
      }
      v20.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x538f9d*/
      v22 = 0; /*0x538fa5*/
      Vector::Clear((int)v21); /*0x538fad*/
      v20.FileClass = (FileClass)&off_7E1668; /*0x538fb6*/
      BufferIOFileClass::Dtor(&v20); /*0x538fba*/
    }
    if ( byte_A9F91C ) /*0x538fc6*/
      sub_538D40(v16); /*0x538fc8*/
  }
  if ( Source ) /*0x538fcf*/
  {
    CCFileClass::Construct(&v20, Source); /*0x538fd6*/
    if ( !(unsigned __int8)CCFileClass::Open(&v20, 0) ) /*0x538fe1*/
    {
      FileClass::Load(&v20, (const CHAR *)2); /*0x538ff0*/
      FileClass::Write(&v20, &byte_A8F91C, 0x10000u); /*0x539003*/
      CCFileClass::Reset(&v20); /*0x53900c*/
    }
    v20.FileClass = (FileClass)&CCFileClass::`vftable'; /*0x539015*/
    v22 = 0; /*0x53901d*/
    Vector::Clear((int)v21); /*0x539025*/
    v20.FileClass = (FileClass)&off_7E1668; /*0x53902e*/
    BufferIOFileClass::Dtor(&v20); /*0x539032*/
  }
  DDraw::WaitForIdle((DDraw *)v16); /*0x539037*/
  v5 = (int *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, 0, 0); /*0x539049*/
  if ( v5 ) /*0x53904d*/
    v17 = 1; /*0x53904f*/
  v6 = (char *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x539062*/
  if ( v6 ) /*0x539066*/
  {
    v18 = 1; /*0x53906c*/
    if ( !v17 ) /*0x539073*/
      return (*(char (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390fa*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x539080*/
    v8 = 2 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x53908d*/
    if ( dword_A9F920 ) /*0x539092*/
    {
      if ( dword_A9F920 == 1 ) /*0x539095*/
      {
        v14 = v8; /*0x5390b2*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390b6*/
        sub_7E00A6(v5, v6, v10, v7, v14); /*0x5390bf*/
      }
      else if ( dword_A9F920 == 2 ) /*0x539098*/
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
  if ( v17 ) /*0x5390e3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x5390e9*/
  result = v18; /*0x5390ec*/
  if ( v18 ) /*0x5390f2*/
    return (*(char (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390f2*/
  return result; /*0x5390fd*/
}



// ==== 0x00539110  sub_539110  this=-  sig=ida-proto ====
void sub_539110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53911c*/
  dbl_A9F948 = Math::Sqrt(v0 + v0); /*0x53912e*/
}



// ==== 0x00539140  sub_539140  this=-  sig=ida-proto ====
void sub_539140()
{
  dbl_A9F998 = dbl_A9F948 / 60.0; /*0x53914c*/
}



// ==== 0x00539160  sub_539160  this=-  sig=ida-proto ====
void sub_539160()
{
  dbl_A9F980 = 1.0 / dbl_A9F998; /*0x53916c*/
}



// ==== 0x00539180  sub_539180  this=-  sig=ida-proto ====
void sub_539180()
{
  dbl_A9F978 = 0.0174532925199433 * 45.0; /*0x53918c*/
}



// ==== 0x005391A0  sub_5391A0  this=-  sig=ida-proto ====
void sub_5391A0()
{
  dbl_A9F950 = 0.0174532925199433 * 60.0; /*0x5391ac*/
}



// ==== 0x005391C0  sub_5391C0  this=-  sig=ida-proto ====
void sub_5391C0()
{
  dbl_A9F928 = 0.0174532925199433 * 90.0; /*0x5391cc*/
}



// ==== 0x005391E0  sub_5391E0  this=-  sig=ida-proto ====
__int64 sub_5391E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9F928 - dbl_A9F950); /*0x5391f2*/
  result = Math::RoundToInt(v0 * dbl_A9F948 * 0.5); /*0x539206*/
  dword_A9F9A0 = result; /*0x53920b*/
  return result; /*0x539210*/
}



// ==== 0x00539220  sub_539220  this=-  sig=ida-proto ====
void sub_539220()
{
  dbl_A9F958 = Math::ArcTan((double)dword_A9F9A0 * 0.00390625); /*0x539237*/
}



// ==== 0x00539250  sub_539250  this=-  sig=ida-proto ====
void sub_539250()
{
  dbl_A9F970 = Math::ArcTan((double)(2 * dword_A9F9A0) / dbl_A9F948); /*0x539272*/
}



// ==== 0x00539280  sub_539280  this=-  sig=ida-proto ====
__int64 sub_539280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9F9A0) + 0.5); /*0x53929b*/
  dword_A9F994 = result; /*0x5392a0*/
  return result; /*0x5392a6*/
}



// ==== 0x005392B0  sub_5392B0  this=-  sig=ida-proto ====
int sub_5392B0()
{
  word_A9F940 = 0; /*0x5392b2*/
  word_A9F942 = 0; /*0x5392b8*/
  return 0; /*0x5392be*/
}



// ==== 0x005392C0  sub_5392C0  this=-  sig=ida-proto ====
int sub_5392C0()
{
  dword_A9F960 = 0; /*0x5392c2*/
  dword_A9F964 = 0; /*0x5392c7*/
  dword_A9F968 = 0; /*0x5392cc*/
  return 0; /*0x5392d1*/
}



// ==== 0x005392E0  sub_5392E0  this=-  sig=ida-proto ====
int sub_5392E0()
{
  dword_A9F990 = 0; /*0x5392e5*/
  dword_A9F988 = 128; /*0x5392ef*/
  dword_A9F98C = 128; /*0x5392f4*/
  return 128; /*0x5392f9*/
}



// ==== 0x00539300  sub_539300  this=-  sig=ida-proto ====
int sub_539300()
{
  dword_A9F930 = 0; /*0x539302*/
  dword_A9F934 = 0; /*0x539307*/
  dword_A9F938 = 0; /*0x53930c*/
  dword_A9F93C = 0; /*0x539311*/
  return 0; /*0x539316*/
}



// ==== 0x00539350  sub_539350  this=-  sig=ida-proto ====
void sub_539350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53935c*/
  dbl_A9FA00 = Math::Sqrt(v0 + v0); /*0x53936e*/
}



// ==== 0x00539380  sub_539380  this=-  sig=ida-proto ====
void sub_539380()
{
  dbl_A9FA88 = dbl_A9FA00 / 60.0; /*0x53938c*/
}



// ==== 0x005393A0  sub_5393A0  this=-  sig=ida-proto ====
void sub_5393A0()
{
  dbl_A9FA58 = 1.0 / dbl_A9FA88; /*0x5393ac*/
}



// ==== 0x005393C0  sub_5393C0  this=-  sig=ida-proto ====
void sub_5393C0()
{
  dbl_A9FA50 = 0.0174532925199433 * 45.0; /*0x5393cc*/
}



// ==== 0x005393E0  sub_5393E0  this=-  sig=ida-proto ====
void sub_5393E0()
{
  dbl_A9FA08 = 0.0174532925199433 * 60.0; /*0x5393ec*/
}



// ==== 0x00539400  sub_539400  this=-  sig=ida-proto ====
void sub_539400()
{
  dbl_A9F9B0 = 0.0174532925199433 * 90.0; /*0x53940c*/
}



// ==== 0x00539420  sub_539420  this=-  sig=ida-proto ====
__int64 sub_539420()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9F9B0 - dbl_A9FA08); /*0x539432*/
  result = Math::RoundToInt(v0 * dbl_A9FA00 * 0.5); /*0x539446*/
  dword_A9FA90 = result; /*0x53944b*/
  return result; /*0x539450*/
}



// ==== 0x00539460  sub_539460  this=-  sig=ida-proto ====
void sub_539460()
{
  dbl_A9FA10 = Math::ArcTan((double)dword_A9FA90 * 0.00390625); /*0x539477*/
}



// ==== 0x00539490  sub_539490  this=-  sig=ida-proto ====
void sub_539490()
{
  dbl_A9FA40 = Math::ArcTan((double)(2 * dword_A9FA90) / dbl_A9FA00); /*0x5394b2*/
}



// ==== 0x005394C0  sub_5394C0  this=-  sig=ida-proto ====
__int64 sub_5394C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9FA90) + 0.5); /*0x5394db*/
  dword_A9FA84 = result; /*0x5394e0*/
  return result; /*0x5394e6*/
}



// ==== 0x005394F0  sub_5394F0  this=-  sig=ida-proto ====
int sub_5394F0()
{
  dword_A9F9F8 = 0; /*0x5394f2*/
  return 0; /*0x5394fe*/
}



// ==== 0x00539500  sub_539500  this=-  sig=ida-proto ====
int sub_539500()
{
  dword_A9FA30 = 0; /*0x539502*/
  qword_A9FA34 = 0; /*0x539507*/
  MEMORY[0xA9FA38] = 0; /*0x53950c*/
  return 0; /*0x539511*/
}



// ==== 0x00539520  sub_539520  this=-  sig=ida-proto ====
int sub_539520()
{
  dword_A9FA80 = 0; /*0x539525*/
  dword_A9FA78 = 128; /*0x53952f*/
  dword_A9FA7C = 128; /*0x539534*/
  return 128; /*0x539539*/
}



// ==== 0x00539540  sub_539540  this=-  sig=ida-proto ====
int sub_539540()
{
  dword_A9F9E8 = 0; /*0x539542*/
  dword_A9F9EC = 0; /*0x539547*/
  dword_A9F9F0 = 0; /*0x53954c*/
  dword_A9F9F4 = 0; /*0x539551*/
  return 0; /*0x539556*/
}



// ==== 0x00539560  sub_539560  this=-  sig=ida-proto ====
int sub_539560()
{
  LightningStorm_Coords = dword_A9F9F8; /*0x539565*/
  return dword_A9F9F8; /*0x53956a*/
}



// ==== 0x00539570  sub_539570  this=-  sig=ida-proto ====
int sub_539570()
{
  PsyDom_Coords = dword_A9F9F8; /*0x539575*/
  return dword_A9F9F8; /*0x53957a*/
}



// ==== 0x00539580  sub_539580  this=-  sig=ida-proto ====
int sub_539580()
{
  dword_A9FA64 = 0; /*0x539587*/
  dword_A9FA68 = 0; /*0x53958c*/
  byte_A9FA6C = 1; /*0x539591*/
  byte_A9FA6D = 0; /*0x539598*/
  LightningStorm_CloudsManifesting = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x53959d*/
  dword_A9FA74 = 10; /*0x5395a7*/
  dword_A9FA70 = 0; /*0x5395b1*/
  return atexit(sub_5395C0); /*0x5395bc*/
}



// ==== 0x005395C0  sub_5395C0  this=-  sig=ida-proto ====
void __cdecl sub_5395C0()
{
  if ( (byte_A9F9A9 & 1) == 0 ) /*0x5395ca*/
  {
    LightningStorm_CloudsManifesting = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x5395ce*/
    byte_A9F9A9 |= 1u; /*0x5395e1*/
    if ( dword_A9FA64 ) /*0x5395e7*/
    {
      if ( byte_A9FA6D ) /*0x5395f1*/
      {
        __3_YAXPAX_Z(dword_A9FA64); /*0x5395f4*/
        dword_A9FA64 = 0; /*0x5395fc*/
      }
    }
    byte_A9FA6D = 0; /*0x539606*/
    dword_A9FA68 = 0; /*0x53960d*/
  }
}



// ==== 0x00539620  sub_539620  this=-  sig=ida-proto ====
int sub_539620()
{
  dword_A9F9D4 = 0; /*0x539627*/
  dword_A9F9D8 = 0; /*0x53962c*/
  byte_A9F9DC = 1; /*0x539631*/
  byte_A9F9DD = 0; /*0x539638*/
  LightningStorm_CloudsPresent = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x53963d*/
  dword_A9F9E4 = 10; /*0x539647*/
  dword_A9F9E0 = 0; /*0x539651*/
  return atexit(sub_539660); /*0x53965c*/
}



// ==== 0x00539660  sub_539660  this=-  sig=ida-proto ====
void __cdecl sub_539660()
{
  if ( (byte_A9F9A8 & 1) == 0 ) /*0x53966a*/
  {
    LightningStorm_CloudsPresent = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x53966e*/
    byte_A9F9A8 |= 1u; /*0x539681*/
    if ( dword_A9F9D4 ) /*0x539687*/
    {
      if ( byte_A9F9DD ) /*0x539691*/
      {
        __3_YAXPAX_Z(dword_A9F9D4); /*0x539694*/
        dword_A9F9D4 = 0; /*0x53969c*/
      }
    }
    byte_A9F9DD = 0; /*0x5396a6*/
    dword_A9F9D8 = 0; /*0x5396ad*/
  }
}



// ==== 0x005396C0  sub_5396C0  this=-  sig=ida-proto ====
int sub_5396C0()
{
  dword_A9FA1C = 0; /*0x5396c7*/
  dword_A9FA20 = 0; /*0x5396cc*/
  byte_A9FA24 = 1; /*0x5396d1*/
  byte_A9FA25 = 0; /*0x5396d8*/
  LightningStorm_BoltsPresent = (int)&DynamicVectorClass<AnimClass const *>::`vftable'; /*0x5396dd*/
  dword_A9FA2C = 10; /*0x5396e7*/
  dword_A9FA28 = 0; /*0x5396f1*/
  return atexit(sub_539700); /*0x5396fc*/
}



// ==== 0x00539700  sub_539700  this=-  sig=ida-proto ====
void __cdecl sub_539700()
{
  if ( (byte_A9F9A8 & 2) == 0 ) /*0x53970a*/
  {
    LightningStorm_BoltsPresent = (int)&VectorClass<AnimClass const *>::`vftable'; /*0x53970e*/
    byte_A9F9A8 |= 2u; /*0x539721*/
    if ( dword_A9FA1C ) /*0x539727*/
    {
      if ( byte_A9FA25 ) /*0x539731*/
      {
        __3_YAXPAX_Z(dword_A9FA1C); /*0x539734*/
        dword_A9FA1C = 0; /*0x53973c*/
      }
    }
    byte_A9FA25 = 0; /*0x539746*/
    dword_A9FA20 = 0; /*0x53974d*/
  }
}



// ==== 0x00539760  ObjectClass::Map_Reset  this=ObjectClass  sig=csp ====
int Map_Reset(ObjectClass *this)
{
  *(_DWORD *)&PsyDom_Coords = dword_A9F9F8; /*0x539766*/
  LightningStorm_Coords = dword_A9F9F8; /*0x53976b*/
  LightningStorm_Active = 0; /*0x53977d*/
  NukeFlash_Status = 0; /*0x539783*/
  LightningStorm_StartTime = -1; /*0x539789*/
  LightningStorm_Duration = -1; /*0x53978f*/
  NukeFlash_StartTime = -1; /*0x539795*/
  NukeFlash_Duration = -1; /*0x53979b*/
  PsyDom_Status = 0; /*0x5397a1*/
  PsyDom_Anim = 0; /*0x5397a7*/
  PsyDom_Owner = 0; /*0x5397ad*/
  LightningStorm_Deferment = 0; /*0x5397b3*/
  LightningStorm_Owner = 0; /*0x5397b9*/
  dword_A9FA70 = 0; /*0x5397bf*/
  if ( dword_A9FA64 && byte_A9FA6D ) /*0x5397cd*/
  {
    __3_YAXPAX_Z(dword_A9FA64); /*0x5397d0*/
    dword_A9FA64 = 0; /*0x5397d8*/
  }
  byte_A9FA6D = 0; /*0x5397e3*/
  dword_A9FA68 = 0; /*0x5397eb*/
  dword_A9F9E0 = 0; /*0x5397f1*/
  if ( dword_A9F9D4 && byte_A9F9DD ) /*0x5397ff*/
  {
    __3_YAXPAX_Z(dword_A9F9D4); /*0x539802*/
    dword_A9F9D4 = 0; /*0x53980a*/
  }
  byte_A9F9DD = 0; /*0x539815*/
  dword_A9F9D8 = 0; /*0x53981d*/
  dword_A9FA28 = 0; /*0x539823*/
  if ( dword_A9FA1C && byte_A9FA25 ) /*0x539831*/
  {
    __3_YAXPAX_Z(dword_A9FA1C); /*0x539834*/
    dword_A9FA1C = 0; /*0x53983c*/
  }
  byte_A9FA25 = 0; /*0x539847*/
  dword_A9FA20 = 0; /*0x53984d*/
  dword_A8B230[378].ptr_8 = dword_A8B230[378].ptr_0; /*0x539859*/
  if ( g_ChronoEffectState ) /*0x539867*/
    (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53986d*/
  ChronoScreenEffect_Duration = 0; /*0x539875*/
  g_ChronoEffectState = 0; /*0x53987b*/
  ChronoScreenEffect_Status = 0; /*0x539881*/
  return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53988c*/
}



// ==== 0x00539890  SuperWeaponClass::LoadFromSaveStream  this=SuperWeaponClass  sig=csp ====
int __thiscall SuperWeaponClass::LoadFromSaveStream(SuperWeaponClass *this)
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

  result = (*(int (__stdcall **)(SuperWeaponClass *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398a3*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x5398a8*/
  {
    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398ba*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x5398bf*/
    {
      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398d1*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x5398d6*/
      {
        result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398e8*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x5398ed*/
        {
          result = (*(int (__stdcall **)(SuperWeaponClass *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5398ff*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539904*/
          {
            result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539916*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x53991b*/
            {
              result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x53992d*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539932*/
              {
                result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539944*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539949*/
                {
                  result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x53995b*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539960*/
                  {
                    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x539972*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539977*/
                    {
                      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x539989*/
                                                                                            + 16))(
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x53998e*/
                      {
                        result = (*(int (__stdcall **)(SuperWeaponClass *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x5399a0*/
                                                                                                  + 16))(
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5399a5*/
                        {
                          result = (*(int (__stdcall **)(SuperWeaponClass *, #375 **, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x5399b7*/
                                                                                                  + 16))(
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5399bc*/
                          {
                            result = (*(int (__stdcall **)(SuperWeaponClass *, House **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x5399ce*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x5399d3*/
                            {
                              v3 = *(_DWORD *)this->__pad_0; /*0x5399df*/
                              v12 = dword_A9FA70; /*0x5399eb*/
                              result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v3 + 16))( /*0x5399ef*/
                                         this,
                                         &v12,
                                         4,
                                         0);
                              if ( result >= 0 ) /*0x5399f4*/
                              {
                                v4 = 0; /*0x5399fe*/
                                if ( v12 <= 0 ) /*0x539a02*/
                                {
LABEL_19:
                                  v6 = *(_DWORD *)this->__pad_0; /*0x539a31*/
                                  v12 = dword_A9F9E0; /*0x539a42*/
                                  result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v6 + 16))( /*0x539a46*/
                                             this,
                                             &v12,
                                             4,
                                             0);
                                  if ( result >= 0 ) /*0x539a4b*/
                                  {
                                    v7 = 0; /*0x539a55*/
                                    if ( v12 <= 0 ) /*0x539a59*/
                                    {
LABEL_23:
                                      v9 = *(_DWORD *)this->__pad_0; /*0x539a83*/
                                      v12 = dword_A9FA28; /*0x539a95*/
                                      result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v9 + 16))( /*0x539a99*/
                                                 this,
                                                 &v12,
                                                 4,
                                                 0);
                                      if ( result >= 0 ) /*0x539a9e*/
                                      {
                                        for ( i = 0; i < v12; ++i ) /*0x539aa8*/
                                        {
                                          v11 = *(_DWORD *)this->__pad_0; /*0x539ab0*/
                                          v13 = *((_DWORD *)dword_A9FA1C + i); /*0x539abf*/
                                          result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v11 + 16))( /*0x539ac3*/
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
                                        v8 = *(_DWORD *)this->__pad_0; /*0x539a60*/
                                        v13 = *((_DWORD *)dword_A9F9D4 + v7); /*0x539a6f*/
                                        result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v8 + 16))( /*0x539a73*/
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
                                    v5 = *(_DWORD *)this->__pad_0; /*0x539a0a*/
                                    v13 = *((_DWORD *)dword_A9FA64 + v4); /*0x539a19*/
                                    result = (*(int (__stdcall **)(SuperWeaponClass *, int *, int, _DWORD))(v5 + 16))( /*0x539a1d*/
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
int __thiscall SuperWeapon::SerializeSuperWeaponState(SuperWeapon *this)
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

  result = (*(int (__stdcall **)(SuperWeapon *, char *, int, _DWORD))(this->q030)( /*0x539af4*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x539af9*/
  {
    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b0b*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x539b10*/
    {
      result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b22*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x539b27*/
      {
        result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b39*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x539b3e*/
        {
          result = (*(int (__stdcall **)(SuperWeapon *, char *, int, _DWORD))(this->q030)( /*0x539b50*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539b55*/
          {
            result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b67*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x539b6c*/
            {
              result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b7e*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539b83*/
              {
                result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539b95*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539b9a*/
                {
                  result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539bac*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539bb1*/
                  {
                    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539bc3*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539bc8*/
                    {
                      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &PsyDom_Anim); /*0x539bd8*/
                      result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539be9*/
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x539bee*/
                      {
                        result = (*(int (__stdcall **)(SuperWeapon *, __int16 *, int, _DWORD))(this->q030)( /*0x539c00*/
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x539c05*/
                        {
                          result = (*(int (__stdcall **)(SuperWeapon *, #375 **, int, _DWORD))(this->q030)( /*0x539c17*/
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x539c1c*/
                          {
                            ObjectPtr::RegisterForTracking( /*0x539c2c*/
                              (int)&SwizzleManagerClass_Instance,
                              (int *)&LightningStorm_Owner);
                            result = (*(int (__stdcall **)(SuperWeapon *, House **, int, _DWORD))(this->q030)( /*0x539c3d*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x539c42*/
                            {
                              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&PsyDom_Owner); /*0x539c52*/
                              result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539c63*/
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
                                      ObjectPtr::RegisterForTracking( /*0x539d05*/
                                        (int)&SwizzleManagerClass_Instance,
                                        (int *)dword_A9FA64 + v6++);
                                    while ( v6 < v16 ); /*0x539d0f*/
                                  }
                                  result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539d1d*/
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
                                            (int)&SwizzleManagerClass_Instance,
                                            (int *)dword_A9F9D4 + v10++);
                                        while ( v10 < v16 ); /*0x539dc9*/
                                      }
                                      v11 = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539dda*/
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
                                                (int)&SwizzleManagerClass_Instance,
                                                (int *)dword_A9FA1C + v15++);
                                            while ( v15 < v16 ); /*0x539e87*/
                                          }
                                          g_ChronoEffectState = 0; /*0x539e89*/
                                        }
                                        else
                                        {
                                          while ( 1 ) /*0x539dfd*/
                                          {
                                            v11 = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539dfd*/
                                                    this,
                                                    &v17,
                                                    4,
                                                    0);
                                            if ( v11 < 0 ) /*0x539e01*/
                                              break; /*0x539e01*/
                                            if ( dword_A9FA28 < dword_A9FA20 /*0x539e3d*/
                                              || (byte_A9FA25 || !dword_A9FA20)
                                              && dword_A9FA2C > 0
                                              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_BoltsPresent + 8))(
                                                   &LightningStorm_BoltsPresent,
                                                   dword_A9FA20 + dword_A9FA2C,
                                                   0) )
                                            {
                                              v14 = dword_A9FA28++; /*0x539e50*/
                                              *((_DWORD *)dword_A9FA1C + v14) = v17; /*0x539e5d*/
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
                                        result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539d3e*/
                                                   this,
                                                   &v17,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539d43*/
                                          break; /*0x539d43*/
                                        if ( dword_A9F9E0 < dword_A9F9D8 /*0x539d7f*/
                                          || (byte_A9F9DD || !dword_A9F9D8)
                                          && dword_A9F9E4 > 0
                                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsPresent + 8))(
                                               &LightningStorm_CloudsPresent,
                                               dword_A9F9D8 + dword_A9F9E4,
                                               0) )
                                        {
                                          v9 = dword_A9F9E0++; /*0x539d92*/
                                          *((_DWORD *)dword_A9F9D4 + v9) = v17; /*0x539d9f*/
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
                                    result = (*(int (__stdcall **)(SuperWeapon *, int *, int, _DWORD))(this->q030)( /*0x539c84*/
                                               this,
                                               &v17,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539c89*/
                                      break; /*0x539c89*/
                                    if ( dword_A9FA70 < dword_A9FA68 /*0x539cc5*/
                                      || (byte_A9FA6D || !dword_A9FA68)
                                      && dword_A9FA74 > 0
                                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsManifesting
                                                                                               + 8))(
                                           &LightningStorm_CloudsManifesting,
                                           dword_A9FA68 + dword_A9FA74,
                                           0) )
                                    {
                                      v5 = dword_A9FA70++; /*0x539cd8*/
                                      *((_DWORD *)dword_A9FA64 + v5) = v17; /*0x539ce5*/
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
  LightningStorm_Active = a1; /*0x539ea0*/
}



// ==== 0x00539EB0  LightningStorm::Start  this=RandomStruct  sig=csp ====
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
  if ( a3 == dword_A9F9F8 ) /*0x539ec3*/
  {
    for ( ; !LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a3); a3 = v12 ) /*0x539edd*/
    {
      v7 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_87F918); /*0x539f04*/
      LOWORD(v12) = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_87F914); /*0x539f1e*/
      HIWORD(v12) = v7; /*0x539f23*/
    }
    result = a3; /*0x539f3e*/
  }
  LightningStorm_Coords = result; /*0x539f46*/
  LightningStorm_Owner = a4; /*0x539f4b*/
  if ( !LightningStorm_Active ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = LightningStorm_Deferment; /*0x539f63*/
      if ( !LightningStorm_Deferment || LightningStorm_Deferment >= a2 ) /*0x539f6e*/
        LightningStorm_Deferment = a2; /*0x539f70*/
      LightningStorm_Duration = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      v8 = 0; /*0x539f99*/
      LightningStorm_Duration = a1; /*0x539f9b*/
      LightningStorm_StartTime = (int)dword_A8ED84; /*0x539fa3*/
      for ( LightningStorm_Active = 1; v8 < dword_A80238; ++v8 ) /*0x539fb0*/
      {
        if ( !LightningStorm_Owner /*0x539fc5*/
          || !(unsigned __int8)HouseClass::IsAlliedWith(
                                 LightningStorm_Owner,
                                 *(#375 **)&dword_A8022C->AbstractClass[4 * v8]) )
        {
          v9 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v8]; /*0x539fd3*/
          if ( !*(_BYTE *)(v9 + 501) && !dword_A8B538 ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( dword_A83D4C ) /*0x53a000*/
        *((_BYTE *)dword_A83D4C + 22393) = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( LOBYTE(dword_8871E0[1].?) ) /*0x53a014*/
      {
        v10 = 3; /*0x53a023*/
        if ( dword_A83D4C ) /*0x53a02a*/
          v10 = *((_DWORD *)dword_A83D4C + 22549); /*0x53a02c*/
        PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x53a044*/
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53a082*/
    }
  }
  return result; /*0x539f76*/
}



// ==== 0x0053A090  LightningStorm::End  this=LightningStorm  sig=ida-proto ====
char LightningStorm_End()
{
  char result; // al

  result = LightningStorm_Active; /*0x53a090*/
  if ( LightningStorm_Active ) /*0x53a097*/
    LightningStorm_TimeToEnd = 1; /*0x53a099*/
  return result; /*0x53a0a0*/
}



// ==== 0x0053A0E0  Weapon_Helper  this=-  sig=ida-proto ====
BOOL sub_53A0E0()
{
  return LightningStorm_Active || LightningStorm_Deferment > 0; /*0x53a0f4*/
}



// ==== 0x0053A100  LightningStorm::IsActive  this=ScenarioClass  sig=csp ====
int LightningStorm::IsActive()
{
  int result; // eax

  LOBYTE(result) = LightningStorm_Active; /*0x53a100*/
  return result; /*0x53a105*/
}



// ==== 0x0053A110  NukeFlash::IsActive  this=NukeFlash  sig=ida-proto ====
BOOL NukeFlash_IsActive()
{
  return NukeFlash_Status == 1; /*0x53a11e*/
}



// ==== 0x0053A120  NukeFlash::ProcessEffect  this=NukeFlash  sig=ida-proto ====
BOOL sub_53A120()
{
  return NukeFlash_Status == 2; /*0x53a12e*/
}



// ==== 0x0053A130  HouseClass::IonSensitivesShouldBeOffline  this=HouseClass  sig=ida-proto ====
char ReturnFalse()
{
  return 0; /*0x53a132*/
}



// ==== 0x0053A140  LightningStorm::Strike  this=LightningStorm  sig=csp ====
int __stdcall LightningStorm::Strike(int a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ecx
  int result; // eax
  void *v5; // esi
  void **v6; // eax
  void **v7; // esi
  int v8; // eax
  int v9[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x53a159*/
  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_8871E0->? + 156))(*(_DWORD *)dword_8871E0->?); /*0x53a165*/
  v3 = ((v1[80] & 0x100) != 0 ? dword_A9FA84 : 0)
     + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
     + dword_A9FA90 * *((char *)v1 + 283);
  result = ((__int16)a1 << 8) + 128; /*0x53a1bb*/
  v9[0] = result; /*0x53a1c8*/
  v9[1] = (SHIWORD(a1) << 8) + 128; /*0x53a1cc*/
  v9[2] = v3; /*0x53a1d0*/
  if ( result != dword_A9FA30 || (SHIWORD(a1) << 8) + 128 != qword_A9FA34 || v3 != MEMORY[0xA9FA38] ) /*0x53a1e4*/
  {
    v5 = *(void **)(dword_8871E0->? + 4 * ((unsigned int)Random::State((_DWORD *)dword_A8B230 + 134) % dword_8871E0->?)); /*0x53a213*/
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a216*/
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, v9, 0, 1, (void *)0x600, 0, 0); /*0x53a23c*/
    else
      v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (byte_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsManifesting + 8))(
           &LightningStorm_CloudsManifesting,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      v8 = dword_A9FA70++; /*0x53a285*/
      *((_DWORD *)dword_A9FA64 + v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (byte_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(LightningStorm_CloudsPresent + 8))(
                     &LightningStorm_CloudsPresent,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (_BYTE)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((_DWORD *)dword_A9F9D4 + result) = v7; /*0x53a2ea*/
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

  v3 = Coord::To_Cell(&dword_87F7E8, &a1); /*0x53a31a*/
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  v5 = Coords[1]; /*0x53a328*/
  v6 = Coords[2]; /*0x53a32b*/
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  v7 = *(void **)(dword_8871E0->? + 4 * ((unsigned int)Random::State((_DWORD *)dword_A8B230 + 134) % dword_8871E0->?)); /*0x53a363*/
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  else
    v9 = 0; /*0x53a390*/
  if ( dword_A9FA28 < dword_A9FA20 /*0x53a3c8*/
    || (byte_A9FA25 || !dword_A9FA20)
    && dword_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_BoltsPresent + 8))(
         &LightningStorm_BoltsPresent,
         dword_A9FA2C + dword_A9FA20,
         0) )
  {
    v10 = dword_A9FA28++; /*0x53a3d5*/
    *((_DWORD *)dword_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  v27 = v3[9]; /*0x53a40f*/
  v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * dword_A9FA90 + ((v3[80] & 0x100) != 0 ? dword_A9FA84 : 0));
  v31 = ((__int16)v27 << 8) + 128; /*0x53a43d*/
  v32 = (SHIWORD(v27) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != dword_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = dword_8871E0; /*0x53a45f*/
    if ( dword_8871E0->? > 0 ) /*0x53a46c*/
    {
      v13 = Random::State((_DWORD *)dword_A8B230 + 134); /*0x53a47a*/
      StartAudioControllerAt(*(_DWORD *)(dword_8871E0->?[1] + 4 * (v13 % dword_8871E0->?)), (int)&v31, 0); /*0x53a49e*/
      v12 = dword_8871E0; /*0x53a4a3*/
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
    CreateSmokeEffectAt(Climb, HIDWORD(dword_8871E0[1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(dword_8871E0[1].?), 1, (int)LightningStorm_Owner); /*0x53a5d0*/
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
        v11 = (void **)Random::Range((_DWORD *)dword_A8B230 + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              v23 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, dword_8871E0->ExecutePlanSound - 1); /*0x53a665*/
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(dword_8871E0->DefaultChronoSound + 4 * v23),
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
char UpdateSuperWeapons(ObjectClass *this)
{
  int i; // esi
  _DWORD *v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int j; // edi
  _DWORD *v7; // esi
  int v8; // ebp
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int k; // esi
  _DWORD *v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ebp
  int v21; // ebp
  __int16 v22; // ax
  __int16 v23; // ax
  int v24; // edi
  _DWORD *v25; // esi
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // et2
  int v31; // esi
  wchar_t *StringCSF; // eax
  ObjectClass *v34; // [esp+0h] [ebp-28h]
  ObjectClass *v35; // [esp+0h] [ebp-28h]
  char v36; // [esp+13h] [ebp-15h]
  __int16 v37[2]; // [esp+14h] [ebp-14h] BYREF
  int v38; // [esp+18h] [ebp-10h]
  _BYTE v39[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( NukeFlash_Status == 1 ) /*0x53a6cf*/
  {
    if ( NukeFlash_Duration != -1 && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8EB00.?[416] ) /*0x53a6ea*/
    {
      NukeFlash_Status = 2; /*0x53a6ec*/
      NukeFlash_Duration = 15; /*0x53a6f6*/
      NukeFlash_StartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x53a711*/
    }
  }
  else if ( NukeFlash_Status == 2 /*0x53a736*/
         && NukeFlash_Duration != -1
         && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8EB00.?[416] )
  {
    NukeFlash_Status = 0; /*0x53a738*/
  }
  UpdatePsyDom(v34); /*0x53a742*/
  UpdateChronosphereEffect(v35); /*0x53a747*/
  if ( dword_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = dword_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      v2 = (_DWORD *)*((_DWORD *)dword_A9FA1C + i); /*0x53a760*/
      v3 = v2[43]; /*0x53a765*/
      v4 = (*(int (__thiscall **)(_DWORD *))(*v2 + 136))(v2); /*0x53a76b*/
      if ( v3 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 156))(v4) + 6) / 2 && i < dword_A9FA28 ) /*0x53a790*/
      {
        v5 = i; /*0x53a793*/
        if ( i < --dword_A9FA28 ) /*0x53a79d*/
        {
          do /*0x53a7b5*/
          {
            ++v5; /*0x53a7a5*/
            *((_DWORD *)dword_A9FA1C + v5 - 1) = *((_DWORD *)dword_A9FA1C + v5); /*0x53a7a9*/
          }
          while ( v5 < dword_A9FA28 ); /*0x53a7b5*/
        }
      }
    }
  }
  for ( j = dword_A9FA70 - 1; j >= 0; --j ) /*0x53a7c4*/
  {
    v7 = (_DWORD *)*((_DWORD *)dword_A9FA64 + j); /*0x53a7d0*/
    v8 = v7[43]; /*0x53a7d7*/
    v9 = (*(int (__thiscall **)(_DWORD *))(*v7 + 136))(v7); /*0x53a7dd*/
    if ( v8 > *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 156))(v9) + 6) / 2 ) /*0x53a7f8*/
    {
      v10 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v7 + 72))(v7, v39); /*0x53a803*/
      LightningStorm::Strike2(*v10, v10[1], v10[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        v11 = j; /*0x53a82b*/
        if ( j < --dword_A9FA70 ) /*0x53a835*/
        {
          do /*0x53a84d*/
          {
            ++v11; /*0x53a83d*/
            *((_DWORD *)dword_A9FA64 + v11 - 1) = *((_DWORD *)dword_A9FA64 + v11); /*0x53a841*/
          }
          while ( v11 < dword_A9FA70 ); /*0x53a84d*/
        }
      }
    }
  }
  if ( dword_A9F9E0 <= 0 ) /*0x53a85e*/
  {
    if ( LightningStorm_TimeToEnd ) /*0x53a8cd*/
    {
      if ( LightningStorm_Active ) /*0x53a8d6*/
      {
        LightningStorm_Active = 0; /*0x53a8dd*/
        LightningStorm_Owner = 0; /*0x53a8e4*/
        LightningStorm_Coords = dword_A9F9F8; /*0x53a8ee*/
        ScenarioClass::UpdateLighting(); /*0x53a8f3*/
      }
      LightningStorm_TimeToEnd = 0; /*0x53a8f8*/
    }
  }
  else
  {
    for ( k = dword_A9F9E0 - 1; k >= 0; --k ) /*0x53a863*/
    {
      v13 = (_DWORD *)*((_DWORD *)dword_A9F9D4 + k); /*0x53a86e*/
      v14 = v13[43]; /*0x53a873*/
      v15 = (*(int (__thiscall **)(_DWORD *))(*v13 + 136))(v13); /*0x53a879*/
      if ( v14 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 156))(v15) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        v16 = k; /*0x53a89d*/
        if ( k < --dword_A9F9E0 ) /*0x53a8a7*/
        {
          do /*0x53a8bf*/
          {
            ++v16; /*0x53a8af*/
            *((_DWORD *)dword_A9F9D4 + v16 - 1) = *((_DWORD *)dword_A9F9D4 + v16); /*0x53a8b3*/
          }
          while ( v16 < dword_A9F9E0 ); /*0x53a8bf*/
        }
      }
    }
  }
  if ( !LightningStorm_Active || LightningStorm_TimeToEnd ) /*0x53a913*/
  {
    LOBYTE(v17) = LightningStorm_Deferment; /*0x53aa9f*/
    if ( LightningStorm_Deferment > 0 ) /*0x53aaa6*/
    {
      v29 = LightningStorm_Deferment - 1; /*0x53aaac*/
      LightningStorm_Deferment = v29; /*0x53aaad*/
      if ( v29 ) /*0x53aab2*/
      {
        v30 = v29 % 225; /*0x53aadd*/
        v17 = v29 / 225; /*0x53aadd*/
        if ( !v30 ) /*0x53aae1*/
        {
          LOBYTE(v17) = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6064); /*0x53aae9*/
          if ( (_BYTE)v17 ) /*0x53aaf1*/
          {
            v31 = 3; /*0x53aaf8*/
            if ( dword_A83D4C ) /*0x53aaff*/
              v31 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x53ab01*/
            VoxClass::FindAndPlay(&stru_828080, -1); /*0x53ab11*/
            StringCSF = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            LOBYTE(v17) = MessageListClass::AddMessage( /*0x53ab40*/
                            (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                            0,
                            0,
                            StringCSF,
                            v31,
                            70,
                            150,
                            0);
          }
        }
      }
      else
      {
        LOBYTE(v17) = LightningStorm::Start(LightningStorm_Duration, 0, LightningStorm_Coords, LightningStorm_Owner); /*0x53aaca*/
      }
    }
  }
  else
  {
    LOBYTE(v17) = LightningStorm_Duration; /*0x53a919*/
    v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a91e*/
    if ( LightningStorm_Duration == -1 /*0x53a933*/
      || LightningStorm_Duration + LightningStorm_StartTime >= *(int *)&stru_A8EB00.?[416] )
    {
      v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a944*/
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6048)) ) /*0x53a94d*/
      {
        LightningStorm::Strike(LightningStorm_Coords); /*0x53a95e*/
        v18 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x53a963*/
        v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a969*/
      }
      v17 = v18 / *(_DWORD *)(v19 + 6052); /*0x53a972*/
      if ( !(v18 % *(_DWORD *)(v19 + 6052)) ) /*0x53a972*/
      {
        v20 = *(_DWORD *)(v19 + 6056); /*0x53a980*/
        v38 = 3; /*0x53a986*/
        v21 = v20 >> 1; /*0x53a98e*/
        while ( 1 ) /*0x53a9a7*/
        {
          *(_DWORD *)v37 = LightningStorm_Coords; /*0x53a9a7*/
          v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9ab*/
          v37[0] += v22; /*0x53a9b6*/
          v23 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9c3*/
          v24 = 0; /*0x53a9c8*/
          v37[1] += v23; /*0x53a9ca*/
          v36 = 0; /*0x53a9d6*/
          if ( dword_A9F9E0 > 0 ) /*0x53a9db*/
          {
            while ( 1 ) /*0x53a9ef*/
            {
              v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)dword_A9F9D4 + v24) + 72))( /*0x53a9ef*/
                                *((_DWORD *)dword_A9F9D4 + v24),
                                v39);
              v26 = (__int16)(*v25 / 256); /*0x53aa0d*/
              v27 = v37[0] - v26; /*0x53aa18*/
              if ( v27 < 0 ) /*0x53aa1a*/
                v27 = v26 - v37[0]; /*0x53aa1c*/
              v28 = v37[1] - (__int16)(v25[1] / 256); /*0x53aa26*/
              if ( v28 < 0 ) /*0x53aa28*/
                v28 = (__int16)(v25[1] / 256) - v37[1]; /*0x53aa2a*/
              if ( v27 + v28 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6060) ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v24 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v36 = 1; /*0x53aa48*/
          }
LABEL_52:
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v37) && !v36 ) /*0x53aa66*/
            break; /*0x53aa66*/
          LOBYTE(v17) = --v38; /*0x53aa6c*/
          if ( v38 <= 0 ) /*0x53aa73*/
            return v17; /*0x53aa73*/
        }
        LOBYTE(v17) = v38; /*0x53aa81*/
        if ( v38 > 0 ) /*0x53aa87*/
          LOBYTE(v17) = LightningStorm::Strike(*(int *)v37); /*0x53aa92*/
      }
    }
    else
    {
      LightningStorm_TimeToEnd = 1; /*0x53a935*/
    }
  }
  return v17; /*0x53a93c*/
}



// ==== 0x0053AB50  Game_Load_Load_53AB50  this=-  sig=ida-proto ====
#375 *sub_53AB50()
{
  #375 *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = dword_A83D4C; /*0x53ab55*/
  *((_BYTE *)dword_A83D4C + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}



// ==== 0x0053AB70  Entity_Process  this=-  sig=ida-proto ====
int sub_53AB70()
{
  char *v0; // edx
  int v2; // [esp+Ch] [ebp-8h]

  v0 = (char *)dword_A8B230 + 4680; /*0x53ab7b*/
  NukeFlash_Status = 1; /*0x53ab81*/
  NukeFlash_Duration = 30; /*0x53ab8b*/
  NukeFlash_StartTime = (int)dword_A8ED84; /*0x53ab95*/
  *((_DWORD *)dword_A8B230 + 1170) = dword_A8ED84; /*0x53ab9a*/
  *((_DWORD *)v0 + 1) = v2; /*0x53aba8*/
  *((_DWORD *)v0 + 2) = 1; /*0x53abad*/
  *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((_DWORD *)dword_A8B230 + 3417) / 100,
    1000 * *((_DWORD *)dword_A8B230 + 3418) / 100,
    1000 * *((_DWORD *)dword_A8B230 + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53ac4a*/
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
int __fastcall Surface_UpdateAnimations(int a1, int a2, int a3, int a4)
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

  for ( i = 0; i < dword_87F6A8; ++i ) /*0x53ad18*/
    (*(void (__thiscall **)(_DWORD, int, int, int, int))(**((_DWORD **)dword_87F69C + i) + 4))( /*0x53ad2c*/
      *((_DWORD *)dword_87F69C + i),
      a1,
      a2,
      a3,
      a4);
  for ( j = 0; j < dword_B054E0; ++j ) /*0x53ad42*/
  {
    v9 = *((_DWORD *)dword_B054D4 + j); /*0x53ad4a*/
    if ( *(int *)(v9 + 784) > 1 ) /*0x53ad54*/
      (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(v9 + 780) + 4))( /*0x53ad66*/
        *(_DWORD *)(v9 + 780),
        a1,
        a2,
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
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v11 + 4))(v11, a1, a2, a3, a4); /*0x53adbb*/
        ++v10; /*0x53adbe*/
      }
      while ( v10 < v13 ); /*0x53adc3*/
    }
  }
  MapClass::UpdateLightingPostProcess(&dword_87F7E8); /*0x53addb*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53adec*/
}



// ==== 0x0053AE00  Weapon_Get  this=-  sig=ida-proto ====
int sub_53AE00()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(unk_82809C, 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  v1 = 3; /*0x53ae1c*/
  if ( dword_A83D4C ) /*0x53ae23*/
    v1 = *((_DWORD *)dword_A83D4C + 22549); /*0x53ae25*/
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}



// ==== 0x0053AE50  SuperClass::LaunchPsychicDominator  this=SuperClass  sig=csp ====
RulesClass *__thiscall SuperClass::LaunchPsychicDominator(SuperClass *this, int a2)
{
  RulesClass *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  AnimClass *v6; // eax
  AbstractClass *v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = *(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]; /*0x53ae50*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 764) /*0x53ae66*/
    && *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 768) )
  {
    PsyDom_Owner = (House *)this; /*0x53ae79*/
    *(_DWORD *)&PsyDom_Coords = a2; /*0x53ae7f*/
    v3 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 764); /*0x53ae85*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53ae95*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    v7 = dword_A8B230 + 130; /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x53af1b*/
    v7->ptr_4 = (void *)v9[1]; /*0x53af21*/
    v7->ptr_8 = (void *)1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/
}



// ==== 0x0053AF40  ObjectClass::UpdatePsyDom  this=ObjectClass  sig=csp ====
void UpdatePsyDom(ObjectClass *this)
{
  int v1; // esi
  int v2; // esi
  PsyDom *v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  switch ( PsyDom_Status ) /*0x53af50*/
  {
    case 1: /*0x53af50*/
      PsyDom_Status = 2; /*0x53af57*/
      break; /*0x53af63*/
    case 2: /*0x53af50*/
      v4 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53af6f*/
      if ( (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 772) * 0.01 <= (double)v4 /*0x53afaa*/
                                                                                         / (double)*(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) + 6) )
      {
        PsyDom_Status = 3; /*0x53afb0*/
        PsyDom::Fire(v3); /*0x53afba*/
      }
      break; /*0x53afc1*/
    case 3: /*0x53af50*/
      v1 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53afcd*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) /*0x53afe4*/
                      + 6)
         - v1 <= 10 )
        PsyDom_Status = 4; /*0x53afe6*/
      break; /*0x53aff2*/
    case 4: /*0x53af50*/
      v2 = *(_DWORD *)(PsyDom_Anim + 172); /*0x53affe*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(PsyDom_Anim + 200) + 156))(*(_DWORD *)(PsyDom_Anim + 200)) /*0x53b015*/
                      + 6)
         - v2 <= 1 )
      {
        PsyDom_Status = 5; /*0x53b01d*/
        *(_DWORD *)&PsyDom_Coords = dword_A9F9F8; /*0x53b027*/
        PsyDom_Anim = 0; /*0x53b02d*/
        ScenarioClass::UpdateLighting(); /*0x53b037*/
      }
      break; /*0x53b03e*/
    case 5: /*0x53af50*/
      if ( dword_A8B230[378].ptr_8 == dword_A8B230[378].ptr_4 ) /*0x53b052*/
        PsyDom_Status = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }
}



// ==== 0x0053B080  PsyDom::Fire  this=PsyDom  sig=csp ====
void PsyDom::Fire(PsyDom *this)
{
  ActionQueue *v1; // esi
  void *v2; // eax
  int *v3; // eax
  _DWORD *v4; // eax
  void *v5; // esi
  void *v6; // eax
  int *v7; // eax
  AnimClass *v8; // eax
  int v9; // eax
  int v10; // esi
  char *v11; // ebp
  int v12; // eax
  Object *v13; // eax
  int i; // esi
  int v15; // edx
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  AnimClass *v21; // eax
  BuildingClass *v22; // eax
  int v23; // eax
  int v24; // esi
  int j; // esi
  _DWORD *v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+8h] [ebp-5Ch]
  _DWORD *v28; // [esp+Ch] [ebp-58h]
  int v29; // [esp+14h] [ebp-50h]
  int v30; // [esp+18h] [ebp-4Ch]
  __int16 v31[2]; // [esp+1Ch] [ebp-48h] BYREF
  _DWORD v32[2]; // [esp+20h] [ebp-44h] BYREF
  int v33[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v34[3]; // [esp+34h] [ebp-30h] BYREF
  char v35[12]; // [esp+40h] [ebp-24h] BYREF
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  int v39; // [esp+58h] [ebp-Ch]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v1 = (ActionQueue *)__2_YAPAXI_Z(0x14u); /*0x53b08e*/
  if ( v1 ) /*0x53b097*/
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0a3*/
    v3 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v2 + 72))(v2, v34); /*0x53b0b1*/
    v4 = ActionQueue::PushEntry(v1, *v3, v3[1], v3[2]); /*0x53b0cb*/
  }
  else
  {
    v4 = 0; /*0x53b0d2*/
  }
  v4[4] = 1; /*0x53b0d4*/
  v5 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 768); /*0x53b0e6*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53b0f1*/
  v7 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v6 + 72))(v6, v34); /*0x53b0ff*/
  v33[0] = *v7; /*0x53b104*/
  v33[1] = v7[1]; /*0x53b110*/
  v33[2] = v7[2]; /*0x53b117*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b11b*/
  if ( v8 ) /*0x53b125*/
    PsyDom_Anim = (int)AnimClass::ctor(v8, v5, v33, 0, 1, (void *)0x600, 0, 0); /*0x53b13e*/
  else
    PsyDom_Anim = 0; /*0x53b145*/
  PlaySoundEffectAt( /*0x53b16b*/
    v33,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 780),
    0,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 760),
    1,
    (int)LightningStorm_Owner);
  v9 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 776); /*0x53b176*/
  if ( v9 >= 10 ) /*0x53b17f*/
    v9 = 10; /*0x53b181*/
  v10 = dword_7ED3D0[v9]; /*0x53b186*/
  EventClass::resetEvent((EventClass *)&v36, 0, 0); /*0x53b193*/
  v36 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x53b19a*/
  v41 = 10; /*0x53b1a2*/
  v40 = 0; /*0x53b1aa*/
  if ( v10 > 0 )
  {
    v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x53b1b4*/
    v30 = v10; /*0x53b1b9*/
    do
    {
      v12 = *(_DWORD *)v11; /*0x53b1bd*/
      v31[1] = HIWORD(*(_DWORD *)v11); /*0x53b1c6*/
      HIWORD(v29) = *(&PsyDom_Coords + 1) + v31[1]; /*0x53b1dd*/
      LOWORD(v29) = PsyDom_Coords + v12; /*0x53b1e2*/
      *(_DWORD *)v31 = v29; /*0x53b1f7*/
      v32[0] = 0; /*0x53b1fb*/
      v32[1] = 0; /*0x53b1ff*/
      v13 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x53b203*/
      for ( i = Object::FindClosestObjectCell(v13, v32, 0, 0); i; i = (*(_BYTE *)(v24 + 20) & 1) != 0 ? v24 : 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 44))(i) != 6 /*0x53b26b*/
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3381)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 352))(i)
          && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)i + 132))(i) + 3434)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 84))(i) )
        {
          if ( *(_DWORD *)(i + 704) ) /*0x53b276*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)i, 0, (int)v11, v26, v27, v28); /*0x53b287*/
          (*(void (__thiscall **)(int, House *, int))(*(_DWORD *)i + 980))(i, PsyDom_Owner, 1); /*0x53b298*/
          v15 = *(_DWORD *)i; /*0x53b29e*/
          *(_BYTE *)(i + 708) = 1; /*0x53b2a2*/
          v16 = *(_DWORD *)((*(int (__thiscall **)(int))(v15 + 132))(i) + 1548); /*0x53b2af*/
          v17 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)i + 72))(i, v35); /*0x53b2be*/
          v18 = *v17; /*0x53b2c1*/
          v19 = v17[1]; /*0x53b2c3*/
          v20 = v17[2]; /*0x53b2c6*/
          v34[0] = v18; /*0x53b2d0*/
          v34[1] = v19; /*0x53b2d4*/
          v34[2] = v16 + v20; /*0x53b2d8*/
          v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53b2dc*/
          if ( v21 ) /*0x53b2e6*/
            v22 = (BuildingClass *)AnimClass::ctor( /*0x53b306*/
                                     v21,
                                     *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 804),
                                     v34,
                                     0,
                                     1,
                                     (void *)0x600,
                                     0,
                                     0);
          else
            v22 = 0; /*0x53b30d*/
          *(_DWORD *)(i + 712) = v22; /*0x53b311*/
          if ( v22 ) /*0x53b317*/
            BuildingClass::AimTurret(v22, (_BYTE *)i); /*0x53b31c*/
          if ( v40 < v38 /*0x53b34b*/
            || (BYTE1(v39) || !v38)
            && v41 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0) )
          {
            v23 = v40++; /*0x53b356*/
            *((_DWORD *)Block + v23) = i; /*0x53b361*/
          }
        }
        v24 = *(_DWORD *)(i + 48); /*0x53b364*/
        if ( !v24 ) /*0x53b369*/
          break; /*0x53b369*/
      }
      v11 += 4; /*0x53b389*/
      --v30; /*0x53b38d*/
    }
    while ( v30 );
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(PsyDom_Owner) ) /*0x53b39d*/
  {
    for ( j = v40 - 1; j >= 0; --j ) /*0x53b3af*/
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)Block + j) + 488))(*((_DWORD *)Block + j), 15, 0); /*0x53b3bd*/
  }
  v36 = &VectorClass<TechnoClass *>::`vftable'; /*0x53b3ca*/
  if ( Block ) /*0x53b3d4*/
  {
    if ( BYTE1(v39) ) /*0x53b3da*/
      __3_YAXPAX_Z(Block); /*0x53b3dd*/
  }
}



// ==== 0x0053B3F0  nullsub_152  this=-  sig=ida-proto ====
void nullsub_152()
{
  ; /*0x53b3f0*/
}



// ==== 0x0053B400  PsyDom::IsActive  this=PsyDom  sig=csp ====
int PsyDom::IsActive()
{
  int result; // eax

  result = PsyDom_Status; /*0x53b400*/
  LOBYTE(result) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/
}



// ==== 0x0053B410  Weapon_Get_53B410  this=-  sig=ida-proto ====
int sub_53B410()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgDominatorac, 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  v1 = 3; /*0x53b42c*/
  if ( dword_A83D4C ) /*0x53b433*/
    v1 = *((_DWORD *)dword_A83D4C + 22549); /*0x53b435*/
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}



// ==== 0x0053B460  globalHelper_03B460  this=RandomStruct  sig=ida-proto ====
void __usercall globalHelper_03B460(int a1@<ecx>, Scenario *a2@<esi>)
{
  char *v3; // esi
  int v4; // eax
  char *v5; // eax
  int v6; // [esp-10h] [ebp-14h]

  if ( a1 > 0 ) /*0x53b465*/
  {
    if ( g_ChronoEffectState ) /*0x53b473*/
    {
      (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b479*/
      g_ChronoEffectState = 0; /*0x53b47b*/
    }
    v3 = (char *)__2_YAPAXI_Z(0x24u); /*0x53b48d*/
    if ( v3 ) /*0x53b494*/
    {
      v6 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 128))(DSurface_Composite); /*0x53b4ae*/
      v4 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 124))(DSurface_Composite); /*0x53b4b1*/
      v5 = DSurface::Construct(v3, v4, v6, 1, 0); /*0x53b4b7*/
    }
    else
    {
      v5 = 0; /*0x53b4be*/
    }
    g_ChronoEffectState = (int)v5; /*0x53b4c8*/
    (*(void (__thiscall **)(char *, AudioStream *, _DWORD, int))(*(_DWORD *)v5 + 4))(v5, DSurface_Composite, 0, 1); /*0x53b4d4*/
    flt_A9FAA0 = 0.0; /*0x53b4d7*/
    flt_A9FAA4 = 0.0; /*0x53b4e1*/
    ChronoScreenEffect_Duration = a1; /*0x53b4eb*/
    dword_A9FAA8 = a1; /*0x53b4f1*/
    ChronoScreenEffect_Status = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(&stru_A9F9B8); /*0x53b512*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 644), 0x2000, 1.0, (int)&stru_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    byte_A9FAD1 = BYTE2(dword_A8B230[381].ptr_C); /*0x53b549*/
    Scenario::ClearScreen(a2); /*0x53b54f*/
    Map_Process_753570(); /*0x53b554*/
  }
}



// ==== 0x0053B560  ObjectClass::UpdateChronosphereEffect  this=ObjectClass  sig=csp ====
void UpdateChronosphereEffect()
{
  switch ( ChronoScreenEffect_Status ) /*0x53b56e*/
  {
    case 1: /*0x53b56e*/
      RenderChronosphereScreenEffect(0); /*0x53b577*/
      if ( !--ChronoScreenEffect_Duration ) /*0x53b587*/
      {
        ChronoScreenEffect_Status = 2; /*0x53b58d*/
        ChronoScreenEffect_Duration = 45; /*0x53b597*/
      }
      break; /*0x53b5a1*/
    case 2: /*0x53b56e*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x53b5fb*/
        DSurface_Composite,
        &DSurface_ViewBounds,
        &DSurface_ViewBounds,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (255 >> g_BitMask_Blue << g_BitMask_Green)
      | (255 >> g_BitMask_Red << g_BitShift_Blue));
      if ( --ChronoScreenEffect_Duration == 1 ) /*0x53b60e*/
        SetScenarioClassTimer(0); /*0x53b612*/
      if ( !ChronoScreenEffect_Duration ) /*0x53b61e*/
      {
        MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x53b62b*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_ChronoEffectState + 24))(g_ChronoEffectState, 0); /*0x53b63a*/
        dword_A9FAAC = DSurface_Composite; /*0x53b649*/
        DSurface_Composite = g_ChronoEffectState; /*0x53b654*/
        ChronoScreenEffect_Status = 0; /*0x53b65a*/
        byte_A9FA94 = 1; /*0x53b664*/
        TacticalMap::Redraw(&MapClass_Instance); /*0x53b66b*/
        ChronoScreenEffect_Duration = dword_A9FAA8; /*0x53b67b*/
        byte_A9FA94 = 0; /*0x53b683*/
        DSurface_Composite = dword_A9FAAC; /*0x53b68a*/
        ChronoScreenEffect_Status = 3; /*0x53b68f*/
        SetVocClassEnabled(1); /*0x53b699*/
        Mixer::ReleaseChannel((int **)&dword_A9F9B8); /*0x53b6a3*/
        PlayVocClass(g_RulesClass_Instance->?[0], 0x2000, 1.0, (int)&dword_A9F9B8); /*0x53b6c2*/
        SetVocClassEnabled(0); /*0x53b6c9*/
      }
      break; /*0x53b6c9*/
    case 3: /*0x53b56e*/
      RenderChronosphereScreenEffect(1); /*0x53b6d0*/
      if ( !--ChronoScreenEffect_Duration ) /*0x53b6e0*/
      {
        ScenarioClass::ProcessIntroTimer(); /*0x53b6e6*/
        Mixer::ReleaseChannel((int **)&dword_A9F9B8); /*0x53b6f0*/
        SetAudioSource((int)&dword_A9F9B8, 0, 0); /*0x53b6fe*/
        AudioFileClass::Release(&dword_A9F9B8); /*0x53b708*/
        SetVocClassEnabled(1); /*0x53b70f*/
        ChronoScreenEffect::DecrementCounter(); /*0x53b714*/
        if ( !byte_A9FAD1 ) /*0x53b720*/
          UpdateMouse(); /*0x53b722*/
        ChronoScreenEffect_Status = 0; /*0x53b732*/
        (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)DSurface_Composite + 4))( /*0x53b743*/
          DSurface_Composite,
          g_ChronoEffectState,
          0,
          1);
        if ( g_ChronoEffectState ) /*0x53b74e*/
          (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b754*/
        g_ChronoEffectState = 0; /*0x53b75d*/
        MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x53b767*/
      }
      break; /*0x53b767*/
    default:
      return;
  }
}



// ==== 0x0053B780  ObjectClass::ApplyChronoScreenColorShift  this=ObjectClass  sig=csp ====
int __thiscall ApplyChronoScreenColorShift(ObjectClass *this)
{
  int result; // eax
  ObjectClass *v2; // esi
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

  result = ChronoScreenEffect_Status; /*0x53b783*/
  v2 = this; /*0x53b789*/
  if ( ChronoScreenEffect_Status == 3 ) /*0x53b792*/
  {
    v15 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 31))(this); /*0x53b7a6*/
    v3 = (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 32))(v2) - 32; /*0x53b7cc*/
    v4 = ((*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 29))(v2) - 2 * v15) / 2; /*0x53b7d0*/
    v18 = v4; /*0x53b7d6*/
    v5 = (*((int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))v2->AbstractClass + 23))(v2, 0, 0); /*0x53b7e3*/
    v16 = 255 * ChronoScreenEffect_Duration / dword_A9FAA8; /*0x53b7f3*/
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
    return (*((int (__thiscall **)(ObjectClass *))v2->AbstractClass + 24))(v2); /*0x53babb*/
  }
  return result; /*0x53b8ef*/
}



// ==== 0x0053BAD0  ChronoScreen::IsActive  this=ChronoScreen  sig=csp ====
int ChronoScreen::IsActive()
{
  return ChronoScreenEffect_Status != 0; /*0x53badd*/
}



// ==== 0x0053BAE0  UI_Helper  this=-  sig=ida-proto ====
BOOL sub_53BAE0()
{
  return ChronoScreenEffect_Status != 0; /*0x53baed*/
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

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 124))(g_ChronoEffectState); /*0x53bbbd*/
  v54 = v1; /*0x53bbbf*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 128))(g_ChronoEffectState) - 32; /*0x53bbda*/
  v48 = v2; /*0x53bbdc*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 112))(g_ChronoEffectState); /*0x53bbe8*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 116))(g_ChronoEffectState); /*0x53bbec*/
  v50 = v4 / v3; /*0x53bbf8*/
  v47 = ((*(int (__fastcall **)(int, int))(*(_DWORD *)DSurface_Composite + 116))(DSurface_Composite, v4 % v3) - v1 * v3) /*0x53bc15*/
      / v3;
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Composite + 92))(DSurface_Composite, 0, 0); /*0x53bc24*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_ChronoEffectState + 92))(g_ChronoEffectState, 0, 0); /*0x53bc2f*/
  v49 = v6; /*0x53bc34*/
  if ( v5 && v6 ) /*0x53bc3f*/
  {
    v7 = 0.0; /*0x53bc45*/
    flt_A9FAA4 = 0.0; /*0x53bc54*/
    v8 = 0.0; /*0x53bc5a*/
    flt_A9FAA0 = 0.0; /*0x53bc62*/
    if ( a1 ) /*0x53bc68*/
      v9 = ChronoScreenEffect_Duration; /*0x53bc75*/
    else
      v9 = dword_A9FAA8 - ChronoScreenEffect_Duration; /*0x53bc71*/
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
      flt_A9FAA0 = v8; /*0x53bc94*/
      flt_A9FAA4 = v7; /*0x53bc9a*/
    }
    v51 = 255 * v9 / dword_A9FAA8; /*0x53bcaa*/
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
                v42 = v14 * v14 * flt_A9FAA0; /*0x53bd53*/
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
              v38 = v21 * v21 * flt_A9FAA0; /*0x53bf41*/
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
  (*(void (__thiscall **)(int))(*(_DWORD *)g_ChronoEffectState + 96))(g_ChronoEffectState); /*0x53c07e*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 96))(DSurface_Composite); /*0x53c08c*/
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
          v23 = flt_A9FAA0 * v10 * v10; /*0x53c143*/
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
  if ( NukeFlash_Status == 1 || ChronoScreenEffect_Status ) /*0x53c297*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3416); /*0x53c3be*/
    return UpdateSurfaceAnimations( /*0x53c43a*/
             1000 * *((_DWORD *)dword_A8B230 + 3417) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3418) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3419) / 100,
             1);
  }
  else if ( LightningStorm_Active ) /*0x53c2a4*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3410); /*0x53c2b3*/
    return UpdateSurfaceAnimations( /*0x53c30e*/
             1000 * *((_DWORD *)dword_A8B230 + 3411) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3412) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3413) / 100,
             1);
  }
  else if ( !PsyDom_Status || PsyDom_Status == 5 ) /*0x53c31f*/
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3402); /*0x53c3a0*/
    return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53c3a9*/
  }
  else
  {
    *((_DWORD *)dword_A8B230 + 3404) = *((_DWORD *)dword_A8B230 + 3423); /*0x53c32e*/
    return UpdateSurfaceAnimations( /*0x53c389*/
             1000 * *((_DWORD *)dword_A8B230 + 3424) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3425) / 100,
             1000 * *((_DWORD *)dword_A8B230 + 3426) / 100,
             1);
  }
}



// ==== 0x0053C450  TechnoClass::CanBePermaMC  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::CanBePermaMC(TechnoClass *this)
{
  if ( !this ) /*0x53c455*/
    return 0; /*0x53c457*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 ) /*0x53c465*/
    return 0; /*0x53c467*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3381) ) /*0x53c475*/
    return 0; /*0x53c47f*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 88))(this) ) /*0x53c487*/
    return 0; /*0x53c491*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3434) ) /*0x53c49f*/
    return 0; /*0x53c4a9*/
  return (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this) == 0; /*0x53c459*/
}



// ==== 0x0053C4C0  _DynamicVectorClass_PBVAnimClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall DeleteCommandClass_28::ClearBuffer(_DynamicVectorClass_PBVAnimClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x53c4c6*/
  this->m_10 = 0; /*0x53c4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x53c4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x53c4d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c4de*/
  }
  BYTE1(this->m_C) = 0; /*0x53c4e1*/
  this->m_8 = 0; /*0x53c4e4*/
}



// ==== 0x0053C4F0  _DynamicVectorClass_PBVAnimClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28::PointerToIndex(_DynamicVectorClass_PBVAnimClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53c4f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53c505*/
  else
    return 0; /*0x53c4f7*/
}



// ==== 0x0053C510  _VectorClass_PBVAnimClass::Seek  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28::Seek(_VectorClass_PBVAnimClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53c51a*/
}



// ==== 0x0053C520  _VectorClass_PBVAnimClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28::AddRef(_VectorClass_PBVAnimClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x53c522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53c52d*/
  {
    v3 = 0; /*0x53c52f*/
    if ( m_8 <= 0 ) /*0x53c533*/
      return 1; /*0x53c553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x53c535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53c53b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53c544*/
    {
      ++v3; /*0x53c546*/
      ++v4; /*0x53c547*/
      if ( v3 >= m_8 ) /*0x53c54c*/
        return 1; /*0x53c54c*/
    }
  }
  return 0; /*0x53c54e*/
}



// ==== 0x0053C560  _VectorClass_PBVAnimClass::Release  this=VectorClass  sig=csp ====
char __thiscall DeleteCommandClass_28::Release(_VectorClass_PBVAnimClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53c56c*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c576*/
    if ( a3 ) /*0x53c57c*/
      v4 = a3; /*0x53c592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53c58e*/
    LOBYTE(this->m_C) = 1; /*0x53c596*/
    if ( v4 ) /*0x53c59a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x53c5a5*/
      {
        m_8 = this->m_8; /*0x53c5ac*/
        if ( a2 < m_8 ) /*0x53c5b1*/
          m_8 = a2; /*0x53c5b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53c5b9*/
          ++i; /*0x53c5be*/
        if ( BYTE1(this->m_C) ) /*0x53c5cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c5d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x53c5de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x53c5e7*/
      this->m_8 = a2; /*0x53c5ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x53c5f2*/
      return 1; /*0x53c5f8*/
    }
    else
    {
      return 0; /*0x53c59f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAnimClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53c602*/
    return 1; /*0x53c608*/
  }
}



// ==== 0x0053C610  _VectorClass_PBVAnimClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall DeleteCommandClass_28::ddtor(_VectorClass_PBVAnimClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53c61d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c62b*/
  }
  BYTE1(this->m_C) = 0; /*0x53c62e*/
  this->m_8 = 0; /*0x53c631*/
}



// ==== 0x0053C640  _VectorClass_PBVAnimClass::Read  this=VectorClass  sig=csp ====
int __thiscall DeleteCommandClass_28::Read(_VectorClass_PBVAnimClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x53c640*/
    return 0; /*0x53c648*/
  m_8 = this->m_8; /*0x53c64e*/
  result = 0; /*0x53c651*/
  if ( m_8 <= 0 ) /*0x53c655*/
    return -1; /*0x53c66c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c65b*/
  {
    if ( ++result >= m_8 ) /*0x53c66a*/
      return -1; /*0x53c66a*/
  }
  return result; /*0x53c64a*/
}



// ==== 0x0053C680  _VectorClass_PBVAnimClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall DeleteCommandClass_28::Write(_VectorClass_PBVAnimClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53c680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53c695*/
  else
    return 0; /*0x53c687*/
}



// ==== 0x0053C6A0  _DynamicVectorClass_PBVAnimClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DeleteCommandClass_28::SetCapacity(_DynamicVectorClass_PBVAnimClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53c6ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c6b2*/
    if ( a3 ) /*0x53c6b8*/
      v4 = a3; /*0x53c6ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53c6ca*/
    LOBYTE(this->m_C) = 1; /*0x53c6d2*/
    if ( !v4 ) /*0x53c6d6*/
      return 0; /*0x53c74a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x53c6d8*/
    {
      m_8 = this->m_8; /*0x53c6df*/
      if ( a2 < m_8 ) /*0x53c6e4*/
        m_8 = a2; /*0x53c6e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53c6ec*/
        ++i; /*0x53c6f1*/
      if ( BYTE1(this->m_C) ) /*0x53c6fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c709*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x53c711*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x53c71a*/
    this->m_8 = a2; /*0x53c722*/
    BYTE1(this->m_C) = a3 == 0; /*0x53c725*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAnimClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53c72e*/
  }
  v7 = this->m_8; /*0x53c731*/
  if ( v7 < this->m_10 ) /*0x53c739*/
    this->m_10 = v7; /*0x53c73b*/
  return 1; /*0x53c73e*/
}



// ==== 0x0053C750  _DynamicVectorClass_PBVAnimClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall DeleteCommandClass_28::FindItem(_DynamicVectorClass_PBVAnimClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x53c750*/
  result = 0; /*0x53c753*/
  if ( m_10 <= 0 ) /*0x53c758*/
    return -1; /*0x53c76f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c75e*/
  {
    if ( ++result >= m_10 ) /*0x53c76d*/
      return -1; /*0x53c76d*/
  }
  return result; /*0x53c772*/
}



// ==== 0x0053C780  _VectorClass_PBVAnimClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall DeleteCommandClass_28::QueryInterface(_VectorClass_PBVAnimClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53c783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimClass const *>::`vftable'; /*0x53c786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53c790*/
  {
    __3_YAXPAX_Z(v3); /*0x53c798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c7a0*/
  }
  BYTE1(this->m_C) = 0; /*0x53c7ab*/
  this->m_8 = 0; /*0x53c7b1*/
  if ( (a2 & 1) != 0 ) /*0x53c7b8*/
    __3_YAXPAX_Z(this); /*0x53c7bb*/
  return this->__pad_0; /*0x53c7c5*/
}



// ==== 0x0053C7D0  _DynamicVectorClass_PBVAnimClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DeleteCommandClass_28::Constructor(_DynamicVectorClass_PBVAnimClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53c7d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AnimClass const *>::`vftable'; /*0x53c7d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53c7e0*/
  {
    __3_YAXPAX_Z(v3); /*0x53c7e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53c7f0*/
  }
  BYTE1(this->m_C) = 0; /*0x53c7fb*/
  this->m_8 = 0; /*0x53c801*/
  if ( (a2 & 1) != 0 ) /*0x53c808*/
    __3_YAXPAX_Z(this); /*0x53c80b*/
  return this->__pad_0; /*0x53c815*/
}



// ==== 0x0053C820  sub_53C820  this=-  sig=ida-proto ====
void sub_53C820()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53c82c*/
  dbl_A9FF90 = Math::Sqrt(v0 + v0); /*0x53c83e*/
}



// ==== 0x0053C850  sub_53C850  this=-  sig=ida-proto ====
void sub_53C850()
{
  dbl_AA0140 = dbl_A9FF90 / 60.0; /*0x53c85c*/
}



// ==== 0x0053C870  sub_53C870  this=-  sig=ida-proto ====
void sub_53C870()
{
  dbl_AA0110 = 1.0 / dbl_AA0140; /*0x53c87c*/
}



// ==== 0x0053C890  sub_53C890  this=-  sig=ida-proto ====
void sub_53C890()
{
  dbl_AA0108 = 0.0174532925199433 * 45.0; /*0x53c89c*/
}



// ==== 0x0053C8B0  sub_53C8B0  this=-  sig=ida-proto ====
void sub_53C8B0()
{
  dbl_A9FF98 = 0.0174532925199433 * 60.0; /*0x53c8bc*/
}



// ==== 0x0053C8D0  sub_53C8D0  this=-  sig=ida-proto ====
void sub_53C8D0()
{
  dbl_A9FAE0 = 0.0174532925199433 * 90.0; /*0x53c8dc*/
}



// ==== 0x0053C8F0  sub_53C8F0  this=-  sig=ida-proto ====
__int64 sub_53C8F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A9FAE0 - dbl_A9FF98); /*0x53c902*/
  result = Math::RoundToInt(v0 * dbl_A9FF90 * 0.5); /*0x53c916*/
  dword_AA0148 = result; /*0x53c91b*/
  return result; /*0x53c920*/
}



// ==== 0x0053C930  sub_53C930  this=-  sig=ida-proto ====
void sub_53C930()
{
  dbl_A9FFA0 = Math::ArcTan((double)dword_AA0148 * 0.00390625); /*0x53c947*/
}



// ==== 0x0053C960  sub_53C960  this=-  sig=ida-proto ====
void sub_53C960()
{
  dbl_A9FFC0 = Math::ArcTan((double)(2 * dword_AA0148) / dbl_A9FF90); /*0x53c982*/
}



// ==== 0x0053C990  sub_53C990  this=-  sig=ida-proto ====
__int64 sub_53C990()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0148) + 0.5); /*0x53c9ab*/
  dword_AA013C = result; /*0x53c9b0*/
  return result; /*0x53c9b6*/
}



// ==== 0x0053C9C0  sub_53C9C0  this=-  sig=ida-proto ====
int sub_53C9C0()
{
  word_A9FF88 = 0; /*0x53c9c2*/
  word_A9FF8A = 0; /*0x53c9c8*/
  return 0; /*0x53c9ce*/
}



// ==== 0x0053C9D0  sub_53C9D0  this=-  sig=ida-proto ====
int sub_53C9D0()
{
  dword_A9FFB0 = 0; /*0x53c9d2*/
  dword_A9FFB4 = 0; /*0x53c9d7*/
  dword_A9FFB8 = 0; /*0x53c9dc*/
  return 0; /*0x53c9e1*/
}



// ==== 0x0053C9F0  sub_53C9F0  this=-  sig=ida-proto ====
int sub_53C9F0()
{
  dword_AA0138 = 0; /*0x53c9f5*/
  dword_AA0130 = 128; /*0x53c9ff*/
  dword_AA0134 = 128; /*0x53ca04*/
  return 128; /*0x53ca09*/
}



// ==== 0x0053CA10  sub_53CA10  this=-  sig=ida-proto ====
int sub_53CA10()
{
  dword_A9FF70 = 0; /*0x53ca12*/
  dword_A9FF74 = 0; /*0x53ca17*/
  dword_A9FF78 = 0; /*0x53ca1c*/
  dword_A9FF7C = 0; /*0x53ca21*/
  return 0; /*0x53ca26*/
}



// ==== 0x0053CA30  sub_53CA30  this=-  sig=ida-proto ====
void sub_53CA30()
{
  dbl_A9FF80 = (512.0 - 0.0 + 57.0) * 0.0125; /*0x53ca48*/
}



// ==== 0x0053CA50  sub_53CA50  this=-  sig=ida-proto ====
int sub_53CA50()
{
  dbl_A9FFA8 = dbl_A9FF80; /*0x53ca5b*/
  return LODWORD(dbl_A9FF80); /*0x53ca66*/
}



// ==== 0x0053CA70  sub_53CA70  this=-  sig=ida-proto ====
int sub_53CA70()
{
  dword_AA011C = 0; /*0x53ca77*/
  dword_AA0120 = 0; /*0x53ca7c*/
  byte_AA0124 = 1; /*0x53ca81*/
  byte_AA0125 = 0; /*0x53ca88*/
  stru_AA0118 = (int)&DynamicVectorClass<IonBlastClass *>::`vftable'; /*0x53ca8d*/
  dword_AA012C = 10; /*0x53ca97*/
  dword_AA0128 = 0; /*0x53caa1*/
  return atexit(sub_53CAB0); /*0x53caac*/
}



// ==== 0x0053CAB0  sub_53CAB0  this=-  sig=ida-proto ====
void __cdecl sub_53CAB0()
{
  if ( (byte_A9FAD8 & 1) == 0 ) /*0x53caba*/
  {
    stru_AA0118 = (int)&VectorClass<IonBlastClass *>::`vftable'; /*0x53cabe*/
    byte_A9FAD8 |= 1u; /*0x53cad1*/
    if ( dword_AA011C ) /*0x53cad7*/
    {
      if ( byte_AA0125 ) /*0x53cae1*/
      {
        __3_YAXPAX_Z(dword_AA011C); /*0x53cae4*/
        dword_AA011C = 0; /*0x53caec*/
      }
    }
    byte_AA0125 = 0; /*0x53caf6*/
    dword_AA0120 = 0; /*0x53cafd*/
  }
}



// ==== 0x0053CB10  ActionQueue::PushEntry  this=ActionQueue  sig=csp ====
_DWORD *__thiscall ActionQueue::PushEntry(ActionQueue *this, int a2, int a3, int a4)
{
  int v5; // eax

  *this = (ActionQueue)a2; /*0x53cb1d*/
  *((_DWORD *)this + 1) = a3; /*0x53cb23*/
  *((_DWORD *)this + 3) = 0; /*0x53cb28*/
  *((_DWORD *)this + 4) = 0; /*0x53cb2b*/
  *((_DWORD *)this + 2) = a4; /*0x53cb2e*/
  if ( dword_AA0128 < dword_AA0120 /*0x53cb63*/
    || (byte_AA0125 || !dword_AA0120)
    && dword_AA012C > 0
    && (*(unsigned __int8 (__thiscall **)(Explosion *, int, _DWORD))(stru_AA0118.Explosion_field_00 + 8))(
         &stru_AA0118,
         dword_AA0120 + dword_AA012C,
         0) )
  {
    v5 = dword_AA0128++; /*0x53cb70*/
    *((_DWORD *)dword_AA011C + v5) = this; /*0x53cb7f*/
  }
  return this; /*0x53cb84*/
}



// ==== 0x0053CBE0  ExplosionClass::ProcessFrame  this=ExplosionClass  sig=csp ====
void __thiscall ExplosionClass::ProcessFrame(ExplosionClass *this)
{
  double v1; // st7
  int v3; // eax
  AnimClass *v4; // eax
  int v5; // esi
  ExplosionClass v6; // edi
  AnimClass *v7; // eax
  int v8; // esi
  ExplosionClass v9; // edi
  AnimClass *v10; // eax
  int v11; // esi
  ExplosionClass v12; // edi
  ExplosionClass v13; // eax
  ExplosionClass v14; // edx
  __int16 v15; // ax
  int v16; // edi
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  char *v21; // ebp
  int v22; // edx
  ExplosionClass v23; // eax
  ExplosionClass v24; // ebp
  ExplosionClass v25; // ecx
  unsigned int v26; // edi
  unsigned int v27; // ebp
  float v30; // ecx
  double v35; // [esp+10h] [ebp-D0h]
  double v36; // [esp+10h] [ebp-D0h]
  double v37; // [esp+10h] [ebp-D0h]
  double v38; // [esp+10h] [ebp-D0h]
  double v39; // [esp+10h] [ebp-D0h]
  double v40; // [esp+10h] [ebp-D0h]
  __int16 v41[4]; // [esp+28h] [ebp-B8h] BYREF
  int v42; // [esp+30h] [ebp-B0h] BYREF
  ExplosionClass v43; // [esp+34h] [ebp-ACh]
  int v44; // [esp+38h] [ebp-A8h]
  int v46; // [esp+40h] [ebp-A0h] BYREF
  float v49; // [esp+50h] [ebp-90h]
  float v50; // [esp+54h] [ebp-8Ch]
  float v51; // [esp+58h] [ebp-88h]
  float v52; // [esp+5Ch] [ebp-84h]
  float v53; // [esp+60h] [ebp-80h]
  float v54; // [esp+64h] [ebp-7Ch]
  float v55; // [esp+68h] [ebp-78h]
  float v56; // [esp+6Ch] [ebp-74h]
  float v57; // [esp+70h] [ebp-70h]
  int v58; // [esp+74h] [ebp-6Ch]
  int v59; // [esp+78h] [ebp-68h]
  __int16 v60; // [esp+7Ch] [ebp-64h]
  __int16 v61; // [esp+7Eh] [ebp-62h]
  int v62; // [esp+84h] [ebp-5Ch]
  int v63; // [esp+88h] [ebp-58h]
  float v64; // [esp+8Ch] [ebp-54h]
  float v65; // [esp+90h] [ebp-50h]
  float v66; // [esp+94h] [ebp-4Ch]
  int v67[2]; // [esp+98h] [ebp-48h] BYREF
  int v68[2]; // [esp+A0h] [ebp-40h] BYREF
  _DWORD v69[4]; // [esp+A8h] [ebp-38h] BYREF
  double v72; // [esp+C0h] [ebp-20h]
  int v73; // [esp+C8h] [ebp-18h]
  int v74; // [esp+CCh] [ebp-14h] BYREF
  int v76[2]; // [esp+D8h] [ebp-8h] BYREF

  _EBX = this; /*0x53cbed*/
  if ( *((int *)this + 3) < 79 ) /*0x53cbf8*/
  {
    if ( *((_DWORD *)this + 4) != 1 ) /*0x53cc3e*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v68); /*0x53cc53*/
      if ( !*(_DWORD *)&_EBX[3] ) /*0x53cc58*/
      {
        if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], _EBX)->landType == 2 ) /*0x53cc7c*/
        {
          v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53cc7e*/
          if ( v4 ) /*0x53cc88*/
          {
            v5 = (int)*_EBX; /*0x53cc91*/
            v6 = _EBX[1]; /*0x53cc93*/
            v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53cc9d*/
            v42 = v5; /*0x53ccb4*/
            v43 = v6; /*0x53ccb8*/
            AnimClass::ctor( /*0x53ccce*/
              v4,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3012)
                       + 4 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3024)
                       - 4),
              &v42,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53ccd0*/
          if ( v7 ) /*0x53ccda*/
          {
            v8 = (int)*_EBX; /*0x53ccdf*/
            v9 = _EBX[1]; /*0x53cce1*/
            v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53ccf1*/
            v42 = v8; /*0x53cd02*/
            v43 = v9; /*0x53cd06*/
            AnimClass::ctor( /*0x53cd14*/
              v7,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 664),
              &v42,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53cd1e*/
        if ( v10 ) /*0x53cd28*/
        {
          v11 = (int)*_EBX; /*0x53cd2d*/
          v12 = _EBX[1]; /*0x53cd2f*/
          v44 = *(_DWORD *)&_EBX[2] + 5; /*0x53cd39*/
          v42 = v11; /*0x53cd50*/
          v43 = v12; /*0x53cd54*/
          AnimClass::ctor( /*0x53cd62*/
            v10,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 668),
            &v42,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], _EBX)->flags[0] & 0x100) != 0 ) /*0x53cd7b*/
        {
          v13 = _EBX[2]; /*0x53cd7d*/
          v14 = _EBX[1]; /*0x53cd88*/
          v42 = (int)*_EBX; /*0x53cd8d*/
          v44 = dword_AA013C + *(_DWORD *)&v13; /*0x53cd91*/
          v43 = v14; /*0x53cd9a*/
          PlaySoundEffectAt( /*0x53cdb5*/
            &v42,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
            1,
            0);
        }
        PlaySoundEffectAt( /*0x53cdd4*/
          _EBX,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
          1,
          0);
        CreateSmokeEffectAt( /*0x53ce05*/
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1168),
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4080),
          (int)*_EBX,
          *(_DWORD *)&_EBX[1],
          *(_DWORD *)&_EBX[2],
          0,
          0);
      }
      v60 = *(_DWORD *)_EBX / 256; /*0x53ce18*/
      v61 = *(_DWORD *)&_EBX[1] / 256; /*0x53ce2c*/
      v15 = -3; /*0x53ce31*/
      v46 = -3; /*0x53ce36*/
      do /*0x53d2fc*/
      {
        v16 = -3; /*0x53ce3e*/
        v58 = -3; /*0x53ce45*/
        LOWORD(v59) = v60 + v15; /*0x53ce49*/
        do /*0x53d2ea*/
        {
          HIWORD(v59) = v16 + v61; /*0x53ce59*/
          *(_DWORD *)v41 = v59; /*0x53ce67*/
          v17 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v41) + 57); /*0x53ce70*/
          if ( v17 ) /*0x53ce78*/
          {
            do /*0x53d2d8*/
            {
              if ( (*(int (__thiscall **)(_DWORD *))(*v17 + 44))(v17) == 15 /*0x53ce94*/
                || (*(int (__thiscall **)(_DWORD *))(*v17 + 44))(v17) == 1 )
              {
                v69[0] = v17[39]; /*0x53cea4*/
                v69[1] = v17[40]; /*0x53ceb6*/
                v69[2] = v17[41]; /*0x53cec8*/
                Coord::To_Screen((Coord *)g_TacticalClass_Instance, v69, v67); /*0x53ced5*/
                v62 = v67[0] - v68[0]; /*0x53cef1*/
                __asm { fild [esp+0C8h+var_5C] } /*0x53cefc*/
                v63 = v67[1] - v68[1]; /*0x53cf05*/
                __asm /*0x53cf09*/
                {
                  fild [esp+0D0h+var_58]
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fstp [esp+0D0h+var_D0]; double
                  fstp st
                  fstp st
                }
                Math::Sqrt(v35); /*0x53cf1e*/
                LOWORD(v18) = Math::RoundToInt(v1); /*0x53cf26*/
                v19 = v18 + 8; /*0x53cf2b*/
                if ( v19 < 256 ) /*0x53cf33*/
                {
                  v20 = dword_A9FFC8[*(_DWORD *)&_EBX[3]]; /*0x53cf47*/
                  v21 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v20 + 92))(v20, v19 + 256, 128); /*0x53cf54*/
                  if ( *v21 > 0 ) /*0x53cf5a*/
                  {
                    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v17 + 1348))(v17, 0, 0); /*0x53cf64*/
                    *((_BYTE *)v17 + 1716) = 2 * ComputeSpiralOffset(v76, *v21)[1]; /*0x53cf7f*/
                  }
                  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v17 + 132))(v17) + 176) ) /*0x53cf8f*/
                  {
                    if ( !**(_BYTE **)((*(int (__thiscall **)(_DWORD *))(*v17 + 132))(v17) + 176) && *v21 >= 0 ) /*0x53cfba*/
                    {
                      LODWORD(v72) = v17[39]; /*0x53cfc4*/
                      v22 = v17[40]; /*0x53cfcb*/
                      v23 = *_EBX; /*0x53cfd1*/
                      v73 = v17[41]; /*0x53cfd3*/
                      v24 = _EBX[1]; /*0x53cfe1*/
                      *(_DWORD *)v41 = *(_DWORD *)&v23 - LODWORD(v72); /*0x53cfe6*/
                      __asm { fild dword ptr [esp+0C8h+var_B8] } /*0x53cfec*/
                      v25 = _EBX[2]; /*0x53cff0*/
                      *(_DWORD *)v41 = v22 - *(_DWORD *)&v24; /*0x53cff3*/
                      __asm /*0x53cffe*/
                      {
                        fstp [esp+0C8h+var_78]
                        fild dword ptr [esp+0C8h+var_B8]
                      }
                      *(_DWORD *)v41 = *(_DWORD *)&v25 - v73; /*0x53d00c*/
                      v52 = v55; /*0x53d010*/
                      __asm /*0x53d014*/
                      {
                        fstp [esp+0C8h+var_74]
                        fild dword ptr [esp+0C8h+var_B8]
                      }
                      v53 = v56; /*0x53d027*/
                      __asm { fstp [esp+0CCh+var_70] } /*0x53d02c*/
                      v54 = v57; /*0x53d03a*/
                      *(_DWORD *)v41 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(v17 + 226), &v74) - 0x3FFF; /*0x53d04c*/
                      __asm /*0x53d050*/
                      {
                        fild dword ptr [esp+0C8h+var_B8]
                        fmul ds:dbl_7E2810
                        fstp qword ptr [esp+0C8h+var_B8]
                      }
                      v26 = *(_DWORD *)&v41[2]; /*0x53d05e*/
                      v27 = *(_DWORD *)v41; /*0x53d066*/
                      Math::SinCos(*(double *)v41); /*0x53d068*/
                      __asm { fstp dword ptr [esp+0D0h+var_98] } /*0x53d06d*/
                      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v26, v27))); /*0x53d073*/
                      __asm /*0x53d078*/
                      {
                        fstp [esp+0D8h+var_B0]
                        fld [esp+0D8h+var_70]
                        fld [esp+0D8h+var_74]
                        fld [esp+0D8h+var_78]
                        fld st
                        fmul st, st(1)
                        fld st(2)
                        fmul st, st(3)
                      }
                      __asm
                      {
                        faddp st(1), st
                        fld st(3)
                        fmul st, st(4)
                        faddp st(1), st
                        fstp [esp+0D0h+var_D0]; double
                        fstp st
                        fstp st
                        fstp st
                      }
                      Math::Sqrt(v36); /*0x53d0a4*/
                      __asm /*0x53d0a9*/
                      {
                        fst [esp+0D0h+var_9C]
                        fabs
                        fcomp ds:dbl_7EC0B0
                      }
                      __asm { fnstsw ax }
                      if ( (_AX & 0x4100) == 0 ) /*0x53d0bd*/
                      {
                        __asm /*0x53d0c3*/
                        {
                          fld [esp+0C8h+var_80]
                          fmul [esp+0C8h+var_80]
                          fld [esp+0C8h+var_84]
                          fmul [esp+0C8h+var_84]
                        }
                        v54 = 0.0; /*0x53d0d6*/
                        __asm /*0x53d0de*/
                        {
                          faddp st(1), st
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::Sqrt(v37); /*0x53d0e3*/
                        __asm { fcom ds:dbl_7E2800 } /*0x53d0e8*/
                        __asm { fnstsw ax }
                        if ( (_AX & 0x4000) != 0 ) /*0x53d0f6*/
                        {
                          v30 = v54; /*0x53d134*/
                          v49 = v52; /*0x53d138*/
                          __asm { fstp st } /*0x53d13c*/
                          v50 = v53; /*0x53d13e*/
                        }
                        else
                        {
                          __asm /*0x53d0f8*/
                          {
                            fld [esp+0C8h+var_84]
                            fdiv st, st(1)
                            fstp [esp+0C8h+var_54]
                            fld [esp+0C8h+var_80]
                            fdiv st, st(1)
                          }
                          v49 = v64; /*0x53d10c*/
                          __asm { fstp [esp+0C8h+var_50] } /*0x53d110*/
                          __asm { fdivr ds:dbl_7E2800 }
                          v50 = v65; /*0x53d11e*/
                          __asm { fstp [esp+0C8h+var_4C] } /*0x53d122*/
                          v30 = v66; /*0x53d126*/
                        }
                        __asm /*0x53d142*/
                        {
                          fld [esp+0C8h+var_90]
                          fmul [esp+0C8h+var_B0]
                          fld [esp+0C8h+var_8C]
                          fmul dword ptr [esp+0C8h+var_98]
                        }
                        v51 = v30; /*0x53d152*/
                        __asm /*0x53d159*/
                        {
                          faddp st(1), st
                          fstp dword ptr [esp+0D0h+var_B8]
                          fld [esp+0D0h+var_88]
                          fmul dword ptr [esp+0D0h+var_98]
                          fchs
                          fld [esp+0D0h+var_88]
                          fmul [esp+0D0h+var_B0]
                          fstp [esp+0D0h+var_28]
                          fld [esp+0D0h+var_90]
                          fmul dword ptr [esp+0D0h+var_98]
                          fld [esp+0D0h+var_8C]
                          fmul [esp+0D0h+var_B0]
                          fsubp st(1), st
                          fst [esp+0D0h+var_24]
                          fld [esp+0D0h+var_28]
                          fld st
                          fmul st, st(1)
                          fld st(2)
                          fmul st, st(3)
                          faddp st(1), st
                          fld st(3)
                          fmul st, st(4)
                          faddp st(1), st
                          fstp [esp+0D0h+var_D0]; double
                          fstp st
                          fstp st
                          fstp st
                        }
                        Math::Sqrt(v38); /*0x53d1b1*/
                        __asm /*0x53d1b6*/
                        {
                          fstp dword ptr [esp+0D0h+var_A8+4]
                          fld [esp+0D0h+var_B0]
                          fmul dword ptr [esp+0D0h+var_B8]
                          fld dword ptr [esp+0D0h+var_98]
                          fmul dword ptr [esp+0D0h+var_A8+4]
                        }
                        __asm
                        {
                          fsubp st(1), st
                          fsub [esp+0C8h+var_90]
                          fabs
                          fcomp ds:dbl_7EC0A8
                          fnstsw ax
                        }
                        if ( (_AX & 0x4100) == 0 ) /*0x53d1e0*/
                          goto LABEL_35; /*0x53d1e0*/
                        __asm /*0x53d1e2*/
                        {
                          fld [esp+0C8h+var_B0]
                          fmul dword ptr [esp+0C8h+var_A8+4]
                          fld dword ptr [esp+0C8h+var_98]
                          fmul dword ptr [esp+0C8h+var_B8]
                          faddp st(1), st
                          fsub [esp+0C8h+var_8C]
                          fabs
                          fcomp ds:dbl_7EC0A8
                          fnstsw ax
                        }
                        if ( (_AX & 0x4100) == 0 ) /*0x53d205*/
                        {
LABEL_35:
                          __asm /*0x53d207*/
                          {
                            fld dword ptr [esp+0C8h+var_A8+4]
                            fchs
                            fstp dword ptr [esp+0C8h+var_A8+4]
                          }
                        }
                        __asm /*0x53d211*/
                        {
                          fld [esp+0C8h+var_9C]
                          fadd ds:dbl_7EC038
                        }
                        __asm
                        {
                          fstp [esp+0D0h+var_98]
                          fld [esp+0D0h+var_9C]
                          fild dword ptr [ebx+0Ch]
                          fmul dbl_A9FFA8
                          fsubp st(1), st
                          fadd ds:dbl_7EC0A0
                          fmul ds:dbl_7EC030
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::SinCos(v39); /*0x53d240*/
                        __asm /*0x53d245*/
                        {
                          fmul ds:dbl_7EC098
                          fadd ds:dbl_7E3D90
                          fmul ds:dbl_7EC038
                          fstp [esp+0D0h+var_10]
                          fld [esp+0D0h+var_9C]
                          fild dword ptr [ebx+0Ch]
                          fmul dbl_A9FFA8
                          fsubp st(1), st
                          fadd ds:dbl_7EC0A0
                          fmul ds:dbl_7EC030
                          fstp [esp+0D0h+var_D0]; double
                        }
                        Math::ArcTan2(v40); /*0x53d27c*/
                        __asm { fmul ds:dbl_7EC030 } /*0x53d281*/
                        __asm
                        {
                          fmul ds:dbl_7EC038
                          fmul ds:dbl_7EC098
                          fmul [esp+0C8h+var_98]
                          fsub [esp+0C8h+var_10]
                          fld [esp+0C8h+var_98]
                          fmul [esp+0C8h+var_98]
                          fdivp st(1), st
                          fld dword ptr [esp+0C8h+var_A8+4]
                          fmul st, st(1)
                          fmul ds:dbl_7EC040
                          fstp dword ptr [esi+328h]
                        }
                        *((float *)v17 + 202) = _ET1; /*0x53d2b7*/
                        __asm /*0x53d2bd*/
                        {
                          fld dword ptr [esp+0C8h+var_B8]
                          fmul st, st(1)
                          fmul ds:dbl_7EC040
                          fchs
                          fstp dword ptr [esi+32Ch]
                        }
                        *((float *)v17 + 203) = _ET1; /*0x53d2cb*/
                        __asm { fstp st } /*0x53d2d1*/
                      }
                    }
                  }
                }
              }
              v17 = (_DWORD *)v17[12]; /*0x53d2d3*/
            }
            while ( v17 ); /*0x53d2d8*/
            v16 = v58; /*0x53d2de*/
          }
          v58 = ++v16; /*0x53d2e6*/
        }
        while ( v16 < 4 ); /*0x53d2ea*/
        v15 = ++v46; /*0x53d2f4*/
      }
      while ( v46 < 4 ); /*0x53d2fc*/
    }
    ++*(_DWORD *)&_EBX[3]; /*0x53d302*/
  }
  else if ( this ) /*0x53cbfc*/
  {
    v46 = (int)this; /*0x53cc12*/
    v3 = (*(int (__thiscall **)(Explosion *, int *))(stru_AA0118.Explosion_field_00 + 16))(&stru_AA0118, &v46); /*0x53cc16*/
    if ( v3 != -1 ) /*0x53cc1c*/
      Explosion::RemoveItem(&stru_AA0118, v3); /*0x53cc24*/
    __3_YAXPAX_Z(_EBX); /*0x53cc2a*/
  }
}



// ==== 0x0053D310  ObjectClass::ProcessIonCannonEffect  this=ObjectClass  sig=csp ====
void ProcessIonCannonEffect(ObjectClass *this)
{
  int i; // esi

  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d31b*/
    ExplosionClass::ProcessFrame(*((ExplosionClass **)dword_AA011C + i)); /*0x53d326*/
}



// ==== 0x0053D330  ObjectClass::GenerateLightningStormGlow  this=ObjectClass  sig=csp ====
char GenerateLightningStormGlow(ObjectClass *this)
{
  double v1; // st7
  char result; // al
  int *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  int v12; // eax
  char LightningStormGlow_Helper; // al
  int v14; // edx
  bool v17; // cc
  double v18; // [esp+Ch] [ebp-40h]
  double v19; // [esp+Ch] [ebp-40h]
  int v20; // [esp+24h] [ebp-28h]
  int *i; // [esp+28h] [ebp-24h]
  int v22; // [esp+2Ch] [ebp-20h]
  double v24; // [esp+3Ch] [ebp-10h]
  double v25; // [esp+44h] [ebp-8h]

  result = byte_AA014C; /*0x53d339*/
  if ( !byte_AA014C ) /*0x53d344*/
  {
    __asm /*0x53d34a*/
    {
      fld ds:dbl_7EC020
      fsub ds:dbl_7EC028
    }
    v3 = dword_A9FFC8; /*0x53d361*/
    v24 = 0.0; /*0x53d366*/
    v20 = 0; /*0x53d36e*/
    __asm { fstp [esp+38h+var_8] } /*0x53d376*/
    for ( i = dword_A9FFC8; ; v3 = i ) /*0x53d37a*/
    {
      v4 = __2_YAPAXI_Z(0x20u); /*0x53d386*/
      v5 = v4; /*0x53d38b*/
      if ( v4 ) /*0x53d392*/
      {
        *(_DWORD *)(v4 + 4) = 512; /*0x53d39e*/
        *(_DWORD *)(v4 + 8) = 256; /*0x53d3a5*/
        *(_DWORD *)(v4 + 12) = 0; /*0x53d3ac*/
        *(_DWORD *)v4 = &XSurface_Vtable; /*0x53d3b3*/
        *(_DWORD *)(v4 + 16) = 1; /*0x53d3b9*/
        Buffer::Init((Buffer *)(v4 + 20), 0, 0x20000); /*0x53d3c0*/
        *(_DWORD *)v5 = &BSurface_Vtable; /*0x53d3c5*/
      }
      else
      {
        v5 = 0; /*0x53d3cd*/
      }
      *v3 = v5; /*0x53d3cf*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, -1); /*0x53d3d7*/
      v6 = 127; /*0x53d3e7*/
      v7 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)*v3 + 92))(*v3, 0, 0) + 65792; /*0x53d3ec*/
      do /*0x53d4c5*/
      {
        v8 = 255; /*0x53d3f4*/
        v9 = 4 * v6 * v6; /*0x53d3fc*/
        do /*0x53d4be*/
        {
          v22 = v9 + v8 * v8; /*0x53d40d*/
          __asm /*0x53d411*/
          {
            fild [esp+40h+var_20]
            fstp [esp+40h+var_40]; double
          }
          Math::Sqrt(v18); /*0x53d418*/
          __asm /*0x53d41d*/
          {
            fst qword ptr [esp+40h+var_20]
            fcomp [esp+40h+var_8]
          }
          __asm { fnstsw ax }
          if ( (_AX & 0x100) == 0 ) /*0x53d42d*/
          {
            __asm /*0x53d433*/
            {
              fld qword ptr [esp+38h+var_20]
              fcomp qword ptr [esp+38h+var_14+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x53d440*/
            {
              __asm { fild dword ptr [esp+38h+var_2C+4] } /*0x53d442*/
              __asm
              {
                fmul dbl_A9FFA8
                fsubr qword ptr [esp+40h+var_20]
                fadd ds:dbl_7EC0A0
                fmul ds:dbl_7EC030
                fstp [esp+40h+var_40]; double
              }
              Math::SinCos(v19); /*0x53d464*/
              __asm { fmul ds:dbl_7EC098 } /*0x53d469*/
              __asm
              {
                fadd ds:dbl_7E3D90
                fld qword ptr [esp+38h+var_20]
                fdiv ds:dbl_7EC038
                fadd ds:dbl_7E1718
                fdivp st(1), st
                fadd ds:dbl_7E1738
              }
              LOWORD(v12) = Math::RoundToInt(v1); /*0x53d490*/
              LightningStormGlow_Helper = GenerateLightningStormGlow_Helper(0, v12); /*0x53d497*/
              v9 = 4 * v6 * v6; /*0x53d4a1*/
              *(_BYTE *)(v8 + (v6 << 9) + v7) = LightningStormGlow_Helper; /*0x53d4a8*/
              *(_BYTE *)((v6 << 9) - v8 + v7) = LightningStormGlow_Helper; /*0x53d4af*/
              v14 = v7 - (v6 << 9); /*0x53d4b4*/
              *(_BYTE *)(v8 + v14) = LightningStormGlow_Helper; /*0x53d4b6*/
              *(_BYTE *)(v14 - v8) = LightningStormGlow_Helper; /*0x53d4bb*/
            }
          }
          --v8; /*0x53d4bd*/
        }
        while ( v8 >= 0 ); /*0x53d4be*/
        --v6; /*0x53d4c4*/
      }
      while ( v6 >= 0 ); /*0x53d4c5*/
      __asm /*0x53d4cb*/
      {
        fld ds:dbl_7E1710
        fsub dbl_A9FF80
        fcomp qword ptr [esp+38h+var_14+4]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x53d4e0*/
      {
        __asm /*0x53d4e2*/
        {
          fld dbl_A9FF80
          fadd qword ptr [esp+38h+var_14+4]
          fstp qword ptr [esp+38h+var_14+4]
        }
      }
      __asm /*0x53d4f0*/
      {
        fld dbl_A9FF80
        fmul ds:dbl_7E5190
        fadd [esp+38h+var_8]
        fst [esp+38h+var_8]
        fcomp qword ptr [esp+38h+var_14+4]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x53d50d*/
        v25 = v24; /*0x53d517*/
      result = (_BYTE)i + 4; /*0x53d527*/
      v17 = (int)(i + 1) < (int)&dbl_AA0108; /*0x53d52b*/
      ++v20; /*0x53d530*/
      ++i; /*0x53d534*/
      if ( !v17 ) /*0x53d538*/
        break; /*0x53d538*/
    }
    byte_AA014C = 1; /*0x53d53e*/
  }
  return result; /*0x53d545*/
}



// ==== 0x0053D550  ObjectClass::WinMainSetup_Setup  this=ObjectClass  sig=csp ====
int WinMainSetup_Setup(ObjectClass *this)
{
  int *v1; // esi
  int result; // eax

  v1 = dword_A9FFC8; /*0x53d551*/
  do /*0x53d571*/
  {
    if ( *v1 ) /*0x53d556*/
      result = (**(int (__thiscall ***)(int, int))*v1)(*v1, 1); /*0x53d560*/
    *v1++ = 0; /*0x53d562*/
  }
  while ( (int)v1 < (int)&dbl_AA0108 ); /*0x53d571*/
  return result; /*0x53d573*/
}



// ==== 0x0053D580  ZBuffer::RenderSprite  this=ZBuffer  sig=csp ====
char __thiscall ZBuffer::RenderSprite(ZBuffer *this)
{
  char result; // al
  AudioStream *v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  _WORD *v7; // edi
  int v8; // ecx
  __int16 v9; // si
  unsigned __int16 v10; // si
  int SamplePosition; // ebp
  int v12; // ebx
  int v13; // eax
  StreamClass *m_Stream; // edx
  unsigned __int16 *v15; // eax
  int m; // ecx
  int v17; // ebx
  int i; // ebx
  int j; // ebp
  char v20; // [esp+13h] [ebp-6Dh] BYREF
  char *v21; // [esp+14h] [ebp-6Ch]
  int v22; // [esp+18h] [ebp-68h]
  int v23; // [esp+1Ch] [ebp-64h]
  int k; // [esp+20h] [ebp-60h]
  int v25; // [esp+24h] [ebp-5Ch]
  _WORD *v26; // [esp+28h] [ebp-58h] BYREF
  char *v27; // [esp+2Ch] [ebp-54h] BYREF
  AudioStream *v28; // [esp+30h] [ebp-50h]
  int v29; // [esp+34h] [ebp-4Ch]
  int v30[2]; // [esp+38h] [ebp-48h] BYREF
  int v31[2]; // [esp+40h] [ebp-40h] BYREF
  int v32; // [esp+48h] [ebp-38h]
  int v33; // [esp+4Ch] [ebp-34h]
  int v34; // [esp+50h] [ebp-30h] BYREF
  int v35; // [esp+54h] [ebp-2Ch]
  int v36; // [esp+58h] [ebp-28h]
  int v37; // [esp+5Ch] [ebp-24h]
  int v38[4]; // [esp+60h] [ebp-20h] BYREF
  int v39[4]; // [esp+70h] [ebp-10h] BYREF

  result = stru_A8EB00.ObjectTypeClass[30]; /*0x53d580*/
  if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x53d591*/
  {
    result = Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v30); /*0x53d5a3*/
    if ( result ) /*0x53d5aa*/
    {
      v3 = g_DSurface_Hidden_2; /*0x53d5bb*/
      v39[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x53d5c7*/
      v39[0] = DSurface_ViewBounds.field_0; /*0x53d5d0*/
      v4 = *((_DWORD *)this + 3); /*0x53d5d4*/
      v39[1] = (int)DSurface_ViewBounds.field_4; /*0x53d5da*/
      v5 = dword_A9FFC8[v4]; /*0x53d5de*/
      v39[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - 7; /*0x53d5e5*/
      v6 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x53d5e9*/
      v28 = g_DSurface_Hidden_2; /*0x53d5ed*/
      v29 = v5; /*0x53d5f1*/
      v25 = (*(int (__thiscall **)(AudioStream *))(v6 + 116))(g_DSurface_Hidden_2); /*0x53d5fc*/
      v34 = v30[0] - 256; /*0x53d60b*/
      v33 = 256; /*0x53d618*/
      v38[3] = 256; /*0x53d61c*/
      v37 = 256; /*0x53d623*/
      v32 = 512; /*0x53d627*/
      v38[2] = 512; /*0x53d62b*/
      v36 = 512; /*0x53d62f*/
      v35 = v30[1] - 128; /*0x53d637*/
      v20 = 0; /*0x53d661*/
      v31[0] = 0; /*0x53d666*/
      v31[1] = 0; /*0x53d66a*/
      v38[0] = 0; /*0x53d66e*/
      v38[1] = 0; /*0x53d672*/
      result = CalcSurfaceBlitRects((int)v3, v39, &v34, v5, v38, v31, &v20, (int *)&v26, (int *)&v27); /*0x53d679*/
      if ( result ) /*0x53d680*/
      {
        v7 = v26; /*0x53d686*/
        v8 = *((_DWORD *)this + 2); /*0x53d68e*/
        v22 = (int)v26; /*0x53d691*/
        v23 = (int)v27; /*0x53d695*/
        v21 = v27; /*0x53d699*/
        v9 = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - ZCoordToScreenY(v8); /*0x53d6ae*/
        v10 = v9 - v35 - 3; /*0x53d6b9*/
        SamplePosition = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, 0, v35); /*0x53d6c7*/
        v12 = v33 + 1; /*0x53d6cf*/
        v13 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x53d6d2*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x53d6db*/
        if ( (unsigned int)(SamplePosition + 2 * (v13 + v12 * (_DWORD)m_Stream)) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x53d6f2*/
        {
          for ( i = 0; i < v33; v22 += v25 ) /*0x53d79c*/
          {
            for ( j = 0; j < v32; ++j ) /*0x53d7aa*/
            {
              k = *v21++; /*0x53d7b4*/
              if ( k > 0 && *(_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v34 + j, i + v35) > v10 ) /*0x53d7de*/
                *v7 = v7[dword_A9FAE8[k]]; /*0x53d7ef*/
              ++v7; /*0x53d7f6*/
            }
            v7 = (_WORD *)(v25 + v22); /*0x53d806*/
            --v10; /*0x53d811*/
            v23 += 512; /*0x53d817*/
            v21 = (char *)v23; /*0x53d81b*/
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
              v17 = *v21++; /*0x53d722*/
              if ( v17 > 0 && *v15 > v10 ) /*0x53d732*/
                *v7 = v7[dword_A9FAE8[v17]]; /*0x53d73f*/
              ++v7; /*0x53d746*/
              ++v15; /*0x53d749*/
            }
            v7 = (_WORD *)(v25 + v22); /*0x53d759*/
            --v10; /*0x53d765*/
            v23 += 512; /*0x53d76b*/
            v21 = (char *)v23; /*0x53d76f*/
            v22 += v25; /*0x53d775*/
            v15 += (int)m_Stream - m; /*0x53d780*/
          }
        }
        (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)v28->__pad_0 + 96))(v28); /*0x53d836*/
        return (*(char (__thiscall **)(int))(*(_DWORD *)v29 + 96))(v29); /*0x53d83f*/
      }
    }
  }
  return result; /*0x53d842*/
}



// ==== 0x0053D850  ObjectClass::Render_Render_53D850  this=ObjectClass  sig=csp ====
char Render_Render_53D850(ObjectClass *this)
{
  int v1; // ebx
  int v2; // edi
  _DWORD *v3; // esi
  int *v4; // eax
  char result; // al
  int i; // esi
  int v7; // [esp+4h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2) != dword_AA0150 ) /*0x53d865*/
  {
    v1 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 116))(g_DSurface_Hidden_2); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    dword_AA0150 = v1; /*0x53d880*/
    v2 = 1; /*0x53d886*/
    v3 = &unk_A9FAEC; /*0x53d88b*/
    do /*0x53d8b2*/
    {
      v4 = ComputeSpiralOffset(&v7, v2); /*0x53d896*/
      ++v3; /*0x53d89d*/
      ++v2; /*0x53d8a8*/
      *(v3 - 1) = *v4 + v1 * v4[1]; /*0x53d8a9*/
    }
    while ( (int)v3 < (int)&dword_A9FF6C ); /*0x53d8b2*/
  }
  result = dword_AA0128; /*0x53d8b6*/
  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = ZBuffer::RenderSprite(*((ZBuffer **)dword_AA011C + i)); /*0x53d8cb*/
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
  dword_AA0150 = a1; /*0x53da02*/
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
  while ( (int)v3 < (int)&dword_A9FF6C ); /*0x53da34*/
  return result; /*0x53da36*/
}



// ==== 0x0053DA40  _DynamicVectorClass_PAVIonBlastClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::Destroy(_DynamicVectorClass_PAVIonBlastClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x53da46*/
  this->m_10 = 0; /*0x53da49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x53da50*/
  {
    __3_YAXPAX_Z(v2); /*0x53da56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53da5e*/
  }
  BYTE1(this->m_C) = 0; /*0x53da61*/
  this->m_8 = 0; /*0x53da64*/
}



// ==== 0x0053DA70  _DynamicVectorClass_PAVIonBlastClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::GetItemIndex(_DynamicVectorClass_PAVIonBlastClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53da70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53da85*/
  else
    return 0; /*0x53da77*/
}



// ==== 0x0053DA90  _VectorClass_PAVIonBlastClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::Get(_VectorClass_PAVIonBlastClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x53da9a*/
}



// ==== 0x0053DAA0  _VectorClass_PAVIonBlastClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::Add(_VectorClass_PAVIonBlastClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x53daa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x53daad*/
  {
    v3 = 0; /*0x53daaf*/
    if ( m_8 <= 0 ) /*0x53dab3*/
      return 1; /*0x53dad3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x53dab5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53dabb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53dac4*/
    {
      ++v3; /*0x53dac6*/
      ++v4; /*0x53dac7*/
      if ( v3 >= m_8 ) /*0x53dacc*/
        return 1; /*0x53dacc*/
    }
  }
  return 0; /*0x53dace*/
}



// ==== 0x0053DAE0  _VectorClass_PAVIonBlastClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::Release(_VectorClass_PAVIonBlastClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53daec*/
  {
    LOBYTE(this->m_C) = 0; /*0x53daf6*/
    if ( a3 ) /*0x53dafc*/
      v4 = a3; /*0x53db12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53db0e*/
    LOBYTE(this->m_C) = 1; /*0x53db16*/
    if ( v4 ) /*0x53db1a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x53db25*/
      {
        m_8 = this->m_8; /*0x53db2c*/
        if ( a2 < m_8 ) /*0x53db31*/
          m_8 = a2; /*0x53db33*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53db39*/
          ++i; /*0x53db3e*/
        if ( BYTE1(this->m_C) ) /*0x53db4b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53db56*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x53db5e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x53db67*/
      this->m_8 = a2; /*0x53db6f*/
      BYTE1(this->m_C) = a3 == 0; /*0x53db72*/
      return 1; /*0x53db78*/
    }
    else
    {
      return 0; /*0x53db1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVIonBlastClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53db82*/
    return 1; /*0x53db88*/
  }
}



// ==== 0x0053DB90  _VectorClass_PAVIonBlastClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_IonBlastClass::Remove(_VectorClass_PAVIonBlastClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53db9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53dba3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dbab*/
  }
  BYTE1(this->m_C) = 0; /*0x53dbae*/
  this->m_8 = 0; /*0x53dbb1*/
}



// ==== 0x0053DBC0  _VectorClass_PAVIonBlastClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::GetSize(_VectorClass_PAVIonBlastClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x53dbc0*/
    return 0; /*0x53dbc8*/
  m_8 = this->m_8; /*0x53dbce*/
  result = 0; /*0x53dbd1*/
  if ( m_8 <= 0 ) /*0x53dbd5*/
    return -1; /*0x53dbec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53dbdb*/
  {
    if ( ++result >= m_8 ) /*0x53dbea*/
      return -1; /*0x53dbea*/
  }
  return result; /*0x53dbca*/
}



// ==== 0x0053DC00  _VectorClass_PAVIonBlastClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IonBlastClass::GetCapacity(_VectorClass_PAVIonBlastClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x53dc00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x53dc15*/
  else
    return 0; /*0x53dc07*/
}



// ==== 0x0053DC20  _DynamicVectorClass_PAVIonBlastClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_IonBlastClass::SetCapacity(
        _DynamicVectorClass_PAVIonBlastClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53dc2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x53dc32*/
    if ( a3 ) /*0x53dc38*/
      v4 = a3; /*0x53dc4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x53dc4a*/
    LOBYTE(this->m_C) = 1; /*0x53dc52*/
    if ( !v4 ) /*0x53dc56*/
      return 0; /*0x53dcca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x53dc58*/
    {
      m_8 = this->m_8; /*0x53dc5f*/
      if ( a2 < m_8 ) /*0x53dc64*/
        m_8 = a2; /*0x53dc66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x53dc6c*/
        ++i; /*0x53dc71*/
      if ( BYTE1(this->m_C) ) /*0x53dc7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53dc89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x53dc91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x53dc9a*/
    this->m_8 = a2; /*0x53dca2*/
    BYTE1(this->m_C) = a3 == 0; /*0x53dca5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVIonBlastClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x53dcae*/
  }
  v7 = this->m_8; /*0x53dcb1*/
  if ( v7 < this->m_10 ) /*0x53dcb9*/
    this->m_10 = v7; /*0x53dcbb*/
  return 1; /*0x53dcbe*/
}



// ==== 0x0053DCD0  _DynamicVectorClass_PAVIonBlastClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_IonBlastClass::FindItemIndex(_DynamicVectorClass_PAVIonBlastClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x53dcd0*/
  result = 0; /*0x53dcd3*/
  if ( m_10 <= 0 ) /*0x53dcd8*/
    return -1; /*0x53dcef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x53dcde*/
  {
    if ( ++result >= m_10 ) /*0x53dced*/
      return -1; /*0x53dced*/
  }
  return result; /*0x53dcf2*/
}



// ==== 0x0053DD00  _VectorClass_PAVIonBlastClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_IonBlastClass::QueryInterface(_VectorClass_PAVIonBlastClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53dd03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IonBlastClass *>::`vftable'; /*0x53dd06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53dd10*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dd20*/
  }
  BYTE1(this->m_C) = 0; /*0x53dd2b*/
  this->m_8 = 0; /*0x53dd31*/
  if ( (a2 & 1) != 0 ) /*0x53dd38*/
    __3_YAXPAX_Z(this); /*0x53dd3b*/
  return this->__pad_0; /*0x53dd45*/
}



// ==== 0x0053DD50  _DynamicVectorClass_PAVIonBlastClass::Constructor_VectorClass_IonBlastClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_IonBlastClass::Constructor_VectorClass_IonBlastClass___(
        _DynamicVectorClass_PAVIonBlastClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x53dd53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IonBlastClass *>::`vftable'; /*0x53dd56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x53dd60*/
  {
    __3_YAXPAX_Z(v3); /*0x53dd68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x53dd70*/
  }
  BYTE1(this->m_C) = 0; /*0x53dd7b*/
  this->m_8 = 0; /*0x53dd81*/
  if ( (a2 & 1) != 0 ) /*0x53dd88*/
    __3_YAXPAX_Z(this); /*0x53dd8b*/
  return this->__pad_0; /*0x53dd95*/
}



// ==== 0x0053DDA0  Explosion::RemoveItem  this=Explosion  sig=csp ====
char __thiscall Explosion::RemoveItem(Explosion *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *((_DWORD *)this + 4); /*0x53dda0*/
  v3 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  v4 = v2 - 1; /*0x53ddab*/
  *((_DWORD *)this + 4) = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++v3; /*0x53ddb7*/
      *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3 - 4) = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3); /*0x53ddbb*/
    }
    while ( v3 < *((_DWORD *)this + 4) ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}



// ==== 0x0053DDE0  sub_53DDE0  this=-  sig=ida-proto ====
int sub_53DDE0()
{
  dword_AA0158 = 0; /*0x53dde2*/
  dword_AA015C = 0; /*0x53dde7*/
  dword_AA0160 = 0; /*0x53ddec*/
  dword_AA0164 = 0; /*0x53ddf1*/
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
  dword_AA0454 = 1; /*0x53de28*/
  if ( a1 <= 0 ) /*0x53de34*/
    goto LABEL_8; /*0x53de34*/
  if ( a2 < 10240 ) /*0x53de40*/
    v12 = 10240; /*0x53de42*/
  v4 = __2_YAPAXI_Z(4 * a1); /*0x53de57*/
  dword_AA044C = v4; /*0x53de5e*/
  if ( !v4 ) /*0x53de64*/
    goto LABEL_8; /*0x53de64*/
  memset(v4, 0, 4 * a1); /*0x53de73*/
  dword_AA0450 = 0; /*0x53de7c*/
  dword_AA0374 = a1; /*0x53de82*/
  dword_AA0378 = 0; /*0x53de88*/
  dword_AA0380 = 0; /*0x53de8e*/
  dword_AA0390 = 0; /*0x53de94*/
  qword_AA0388 = 100; /*0x53de9a*/
  dword_AA037C = 0; /*0x53deaa*/
  AudioStream::Reset(stru_AA0398); /*0x53deb5*/
  CoordBounds::Constructor(stru_AA0398, qword_AA0388, SHIDWORD(qword_AA0388)); /*0x53decc*/
  AudioStream::ResetChannel(4 * qword_AA0388, (unsigned __int64)qword_AA0388 >> 30); /*0x53deed*/
  AudioStream::ResetChannel2(4 * qword_AA0388, (unsigned __int64)qword_AA0388 >> 30); /*0x53df0f*/
  Thread = CreateThread(0, 0x1000u, sub_53E070, &dword_AA0378, 0, &unk_AA03FC); /*0x53df2a*/
  dword_AA03F8 = Thread; /*0x53df32*/
  if ( !Thread ) /*0x53df37*/
    goto LABEL_8; /*0x53df37*/
  dword_AA0458 = 1; /*0x53df41*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x53df47*/
  {
    LastError = GetLastError(); /*0x53df5d*/
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x53df6a*/
    Debug::Log(); /*0x53df7a*/
LABEL_8:
    Audio_Init(); /*0x53df82*/
    return 0; /*0x53df93*/
  }
  dword_AA045C = sub_4087F0(); /*0x53df9b*/
  if ( !dword_AA045C ) /*0x53dfa0*/
    goto LABEL_8; /*0x53dfa0*/
  if ( !sub_408B40(v12, 0) ) /*0x53dfac*/
    goto LABEL_8; /*0x53dfac*/
  AudioMixer::SetupChannels(dword_AA045C); /*0x53dfbb*/
  dword_AA0460 = AcquireAudioStreamBuffer((_DWORD *)dword_AA045C, 0); /*0x53dfd5*/
  v8 = AcquireAudioStreamBuffer((_DWORD *)dword_AA045C, 1); /*0x53dfda*/
  dword_AA0464 = v8; /*0x53dfe5*/
  if ( !dword_AA0460 || !v8 ) /*0x53dff0*/
    goto LABEL_8; /*0x53dff0*/
  dword_AA0448 = 1; /*0x53e006*/
  memset(&word_AA0168, 0, 0x200u); /*0x53e00c*/
  if ( g_hWnd ) /*0x53e00e*/
  {
    v9 = (HWND *)dword_AA044C; /*0x53e016*/
    v10 = 1; /*0x53e01b*/
    v11 = 0; /*0x53e020*/
    if ( dword_AA0374 > 1 ) /*0x53e024*/
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
      while ( v10 < dword_AA0374 ); /*0x53e03e*/
      if ( v11 ) /*0x53e042*/
      {
        *v11 = g_hWnd; /*0x53e044*/
        ++dword_AA0450; /*0x53e04c*/
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
      v3 = (_DWORD *)dword_AA045C; /*0x53e0ac*/
      if ( dword_AA045C && dword_AA0444 && dword_AA0468 ) /*0x53e0c8*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e0d3*/
        if ( dword_AA0444 == 2 && (v4 = (unsigned int)AudioStream::GetChannel(v3) >> 1, sub_408D30(v3) < v4) ) /*0x53e0f2*/
        {
          if ( dword_AA0460 ) /*0x53e0fb*/
          {
            v5 = sub_408D40(v3); /*0x53e108*/
            if ( WriteAudioStreamToFile(dword_AA0460, dword_AA0468, v5, (char *)&lpThreadParameter) != 1 ) /*0x53e122*/
              dword_AA046C = 1; /*0x53e124*/
          }
        }
        else if ( dword_AA0444 == 1 ) /*0x53e137*/
        {
          v6 = (unsigned int)AudioStream::GetChannel(v3) >> 1; /*0x53e144*/
          if ( sub_408D40(v3) < v6 ) /*0x53e14d*/
          {
            if ( dword_AA0464 ) /*0x53e156*/
            {
              Channel = AudioStream::GetChannel(v3); /*0x53e15c*/
              WriteAudioStreamToFile(dword_AA0464, dword_AA0468, Channel >> 1, 0); /*0x53e170*/
              fflush(dword_AA0468); /*0x53e17c*/
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

  if ( dword_AA0448 ) /*0x53e1dc*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e1ed*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e210*/
    {
      SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e213*/
      WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e225*/
      fflush(dword_AA0468); /*0x53e230*/
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e243*/
    if ( dword_AA0448 ) /*0x53e24b*/
    {
      EnterCriticalSection(&unk_AA0418); /*0x53e256*/
      if ( dword_AA0448 ) /*0x53e25e*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e265*/
        if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e288*/
        {
          v1 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e28b*/
          WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v1, 0); /*0x53e29d*/
          fflush(dword_AA0468); /*0x53e2a9*/
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e2b6*/
      }
      dword_AA0444 = 0; /*0x53e2bd*/
      if ( dword_AA0468 ) /*0x53e2c5*/
      {
        fclose(dword_AA0468); /*0x53e2c8*/
        dword_AA0468 = 0; /*0x53e2d0*/
      }
      LeaveCriticalSection(&unk_AA0418); /*0x53e2db*/
    }
  }
  if ( dword_AA044C ) /*0x53e2e4*/
  {
    __3_YAXPAX_Z(dword_AA044C); /*0x53e2e7*/
    dword_AA044C = 0; /*0x53e2ef*/
  }
  dword_AA0450 = 0; /*0x53e2fa*/
  if ( dword_AA0458 ) /*0x53e302*/
  {
    dword_AA0378 = 1; /*0x53e304*/
    while ( !dword_AA0380 ) /*0x53e315*/
      Sleep(0); /*0x53e31e*/
    WaitForSingleObject(dword_AA03F8, 0x1388u); /*0x53e335*/
    CloseHandle(dword_AA03F8); /*0x53e341*/
    dword_AA0458 = 0; /*0x53e347*/
  }
  if ( dword_AA0460 ) /*0x53e355*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)dword_AA0460); /*0x53e357*/
    dword_AA0460 = 0; /*0x53e35c*/
  }
  if ( dword_AA0464 ) /*0x53e36a*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)dword_AA0464); /*0x53e36c*/
    dword_AA0464 = 0; /*0x53e371*/
  }
  if ( dword_AA045C ) /*0x53e37f*/
  {
    AudioSample::InitLinkedList((_DWORD *)dword_AA045C); /*0x53e381*/
    dword_AA045C = 0; /*0x53e386*/
  }
  if ( dword_AA0454 ) /*0x53e392*/
  {
    DeleteCriticalSection(&unk_AA0418); /*0x53e39f*/
    DeleteCriticalSection(&unk_AA0400); /*0x53e3a6*/
    dword_AA0454 = 0; /*0x53e3a8*/
  }
  dword_AA0448 = 0; /*0x53e3ae*/
}



// ==== 0x0053E3C0  TimerPool::AllocSlot  this=TimerPool  sig=csp ====
_DWORD *__thiscall TimerPool::AllocSlot(TimerPool *this)
{
  _DWORD *result; // eax
  int v2; // esi
  TimerPool **v3; // edi

  result = stru_AA0398.AudioStream_field_0xB0; /*0x53e3c0*/
  if ( stru_AA0398.AudioStream_field_0xB0 ) /*0x53e3ca*/
  {
    if ( this ) /*0x53e3ce*/
    {
      result = *(_DWORD **)stru_AA0398.__pad_B4; /*0x53e3d6*/
      v2 = 1; /*0x53e3db*/
      v3 = 0; /*0x53e3e0*/
      if ( dword_AA0374 > 1 ) /*0x53e3e4*/
      {
        do /*0x53e3fe*/
        {
          if ( *result ) /*0x53e3e6*/
          {
            if ( (TimerPool *)*result == this ) /*0x53e3f6*/
              return result; /*0x53e3f6*/
          }
          else if ( !v3 ) /*0x53e3ee*/
          {
            v3 = (TimerPool **)result; /*0x53e3f0*/
          }
          ++v2; /*0x53e3f8*/
          ++result; /*0x53e3f9*/
        }
        while ( v2 < dword_AA0374 ); /*0x53e3fe*/
        if ( v3 ) /*0x53e402*/
        {
          *v3 = this; /*0x53e404*/
          return (_DWORD *)++*(_DWORD *)&stru_AA0398.__pad_B4[4]; /*0x53e40b*/
        }
      }
    }
  }
  return result; /*0x53e411*/
}



// ==== 0x0053E420  Object::RemoveObjectArray  this=Object  sig=csp ====
void **__thiscall Object::RemoveObjectArray(Object *this)
{
  void **result; // eax
  int v2; // edx

  result = (void **)stru_AA0398.AudioStream_field_0xB0; /*0x53e420*/
  if ( stru_AA0398.AudioStream_field_0xB0 ) /*0x53e428*/
  {
    if ( this ) /*0x53e42c*/
    {
      result = *(void ***)stru_AA0398.__pad_B4; /*0x53e434*/
      v2 = 1; /*0x53e439*/
      if ( dword_AA0374 > 1 ) /*0x53e440*/
      {
        while ( *result != this ) /*0x53e444*/
        {
          ++v2; /*0x53e446*/
          ++result; /*0x53e447*/
          if ( v2 >= dword_AA0374 ) /*0x53e44c*/
            return result; /*0x53e44c*/
        }
        *result = 0; /*0x53e450*/
        return (void **)--*(_DWORD *)&stru_AA0398.__pad_B4[4]; /*0x53e45b*/
      }
    }
  }
  return result; /*0x53e44e*/
}



// ==== 0x0053E4F0  ObjectClass::WinMain_Helper_53E4F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_53E4F0(char *FileName)
{
  if ( !dword_AA0448 || dword_AA0468 ) /*0x53e503*/
    return 0; /*0x53e54b*/
  EnterCriticalSection(&unk_AA0418); /*0x53e50a*/
  dword_AA0468 = fopen(FileName, aWb); /*0x53e51e*/
  if ( dword_AA0468 ) /*0x53e525*/
    dword_AA0444 = 1; /*0x53e527*/
  LeaveCriticalSection(&unk_AA0418); /*0x53e536*/
  return dword_AA0468 != 0; /*0x53e549*/
}



// ==== 0x0053E550  ObjectClass::WinMain_Write  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_53E550(char *FileName)
{
  signed int SampleSize; // eax

  if ( !dword_AA0448 || dword_AA0468 ) /*0x53e567*/
    return 0; /*0x53e5e7*/
  EnterCriticalSection(&unk_AA0418); /*0x53e56e*/
  dword_AA0468 = fopen(FileName, aRb); /*0x53e582*/
  dword_AA046C = 0; /*0x53e589*/
  if ( dword_AA0468 ) /*0x53e593*/
  {
    dword_AA0444 = 2; /*0x53e59d*/
    SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0460); /*0x53e5a7*/
    if ( WriteAudioStreamToFile(dword_AA0460, dword_AA0468, SampleSize, 0) != 1 ) /*0x53e5c1*/
      dword_AA046C = 1; /*0x53e5c3*/
  }
  LeaveCriticalSection(&unk_AA0418); /*0x53e5d2*/
  return dword_AA0468 != 0; /*0x53e5e5*/
}



// ==== 0x0053E6B0  WinMain_Write_53E6B0  this=-  sig=csp ====
void sub_53E6B0()
{
  signed int SampleSize; // eax

  if ( dword_AA0448 ) /*0x53e6b7*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e6be*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 ) /*0x53e6dd*/
    {
      if ( dword_AA0464 ) /*0x53e6e7*/
      {
        SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e6eb*/
        WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e6fd*/
        fflush(dword_AA0468); /*0x53e708*/
      }
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e715*/
  }
}



// ==== 0x0053E720  UI_Update  this=-  sig=ida-proto ====
int sub_53E720()
{
  return dword_AA0444; /*0x53e725*/
}



// ==== 0x0053E730  IsMessageDialog  this=-  sig=csp ====
int __fastcall IsMessageDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
  int result; // eax

  do /*0x53e74f*/
    result = GameLoopMessagePump(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53e748*/
  while ( !result ); /*0x53e74f*/
  if ( lpMsg->message == 18 ) /*0x53e75b*/
    return 0; /*0x53e75d*/
  return result; /*0x53e754*/
}



// ==== 0x0053E770  GameLoopMessagePump  this=-  sig=csp ====
int __fastcall GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
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

  if ( dword_AA0444 == 1 ) /*0x53e78b*/
  {
    if ( dword_887640 ) /*0x53e797*/
    {
      GetCursorPos(&Point); /*0x53e7a2*/
      dword_AA0434 = (__int64)Point; /*0x53e7b0*/
      (*(void (__thiscall **)(int, __int64 *, char *))(*(_DWORD *)dword_887640 + 68))( /*0x53e7ce*/
        dword_887640,
        &dword_AA0434,
        (char *)&dword_AA0434 + 4);
      if ( dword_AA0434 != dword_AA043C ) /*0x53e7de*/
      {
        v22 = 1; /*0x53e7fa*/
        v6 = EnterCriticalSection; /*0x53e7fe*/
        v21 = dword_AA0430; /*0x53e809*/
        v20 = dword_A8ED84; /*0x53e80d*/
        EnterCriticalSection(&unk_AA0400); /*0x53e811*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_887640 + 56))( /*0x53e827*/
          dword_887640,
          dword_AA0434,
          HIDWORD(dword_AA0434));
        *(_QWORD *)v23 = dword_AA0434; /*0x53e83a*/
        dword_AA043C = dword_AA0434; /*0x53e842*/
        LeaveCriticalSection(&unk_AA0400); /*0x53e84d*/
        BufferedAudioStreamRead((int *)dword_AA0460, (char *)&v20, 20); /*0x53e85f*/
        goto LABEL_6; /*0x53e864*/
      }
    }
  }
  while ( 1 ) /*0x53e866*/
  {
    v6 = EnterCriticalSection; /*0x53e866*/
LABEL_6:
    while ( dword_AA0444 == 2 ) /*0x53e873*/
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
            if ( dword_AA0478 ) /*0x53e8b9*/
              goto LABEL_30; /*0x53e8b9*/
            SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e8c5*/
            if ( SampleSize ) /*0x53e8cc*/
            {
              if ( SampleSize >= 0xC ) /*0x53e984*/
              {
                BufferedAudioStreamRead((int *)dword_AA0464, byte_AA0368, 12); /*0x53e997*/
                dword_AA0478 = 1; /*0x53e99c*/
LABEL_30:
                if ( dword_AA036C > (unsigned int)dword_AA0430 ) /*0x53e9b3*/
                  return 0; /*0x53ebad*/
                v10 = 1; /*0x53e9be*/
                dword_AA0478 = 0; /*0x53e9c5*/
                if ( dword_AA0370 == 1 ) /*0x53e9cb*/
                {
                  BufferedAudioStreamRead((int *)dword_AA0464, (char *)&Point, 8); /*0x53e9d9*/
                  v6(&unk_AA0400); /*0x53e9e3*/
                  dword_AA0434 = (__int64)Point; /*0x53e9f5*/
                  if ( dword_887640 ) /*0x53ea00*/
                    (*(void (__thiscall **)(int, LONG, LONG))(*(_DWORD *)dword_887640 + 56))( /*0x53ea06*/
                      dword_887640,
                      Point.x,
                      Point.y);
                  LeaveCriticalSection(&unk_AA0400); /*0x53ea0e*/
                }
                else
                {
                  BufferedAudioStreamRead((int *)dword_AA0464, (char *)lpMsg, 28); /*0x53ea23*/
                  v11 = lpMsg->hwnd; /*0x53ea2e*/
                  if ( dword_AA0448 && (int)v11 >= 0 && (int)v11 < dword_AA0374 ) /*0x53ea3e*/
                    v12 = (HWND)*((_DWORD *)dword_AA044C + (_DWORD)v11); /*0x53ea46*/
                  else
                    v12 = 0; /*0x53ea4b*/
                  lpMsg->hwnd = v12; /*0x53ea4f*/
                  if ( v12 ) /*0x53ea51*/
                    goto LABEL_54; /*0x53ea51*/
                }
              }
            }
            else if ( dword_AA046C ) /*0x53e8d8*/
            {
              if ( !dword_AA0448 ) /*0x53ea62*/
                goto LABEL_6; /*0x53ea62*/
              v6(&unk_AA0418); /*0x53ea6d*/
              if ( dword_AA0448 ) /*0x53ea75*/
              {
                v6(&unk_AA0418); /*0x53ea7c*/
                if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53ea9f*/
                {
                  v13 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53eaa2*/
                  WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v13, 0); /*0x53eab4*/
                  fflush(dword_AA0468); /*0x53eac0*/
                }
                LeaveCriticalSection(&unk_AA0418); /*0x53eacd*/
              }
              dword_AA0444 = 0; /*0x53ead8*/
              if ( dword_AA0468 ) /*0x53eae0*/
              {
                fclose(dword_AA0468); /*0x53eae3*/
                dword_AA0468 = 0; /*0x53eaeb*/
              }
LABEL_27:
              LeaveCriticalSection(&unk_AA0418); /*0x53e971*/
              goto LABEL_6; /*0x53e97c*/
            }
          }
        }
      }
      if ( dword_AA0448 ) /*0x53e8e6*/
      {
        v6(&unk_AA0418); /*0x53e8ed*/
        if ( dword_AA0448 ) /*0x53e8f5*/
        {
          v6(&unk_AA0418); /*0x53e8fc*/
          if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e91f*/
          {
            v9 = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e922*/
            WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v9, 0); /*0x53e934*/
            fflush(dword_AA0468); /*0x53e940*/
          }
          LeaveCriticalSection(&unk_AA0418); /*0x53e94d*/
        }
        dword_AA0444 = 0; /*0x53e958*/
        if ( dword_AA0468 ) /*0x53e960*/
        {
          fclose(dword_AA0468); /*0x53e963*/
          dword_AA0468 = 0; /*0x53e96b*/
        }
        goto LABEL_27; /*0x53e96b*/
      }
    }
    v10 = PeekMessageA(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, wRemoveMsg); /*0x53eb1c*/
LABEL_54:
    if ( dword_AA0444 != 1 || !v10 ) /*0x53eb2d*/
      return v10; /*0x53eba4*/
    v14 = lpMsg->hwnd; /*0x53eb38*/
    if ( dword_AA0448 ) /*0x53eb3c*/
    {
      v15 = (HWND *)dword_AA044C; /*0x53eb43*/
      if ( v14 == (HWND)dword_AA0470 ) /*0x53eb4b*/
      {
        v16 = dword_AA0474; /*0x53eb4d*/
      }
      else
      {
        v16 = 0; /*0x53eb5a*/
        if ( dword_AA0374 <= 0 ) /*0x53eb5e*/
          goto LABEL_65; /*0x53eb5e*/
        while ( *v15 != v14 ) /*0x53eb62*/
        {
          ++v16; /*0x53eb64*/
          ++v15; /*0x53eb65*/
          if ( v16 >= dword_AA0374 ) /*0x53eb6a*/
            goto LABEL_65; /*0x53eb6a*/
        }
        dword_AA0470 = (int)lpMsg->hwnd; /*0x53eb6e*/
        dword_AA0474 = v16; /*0x53eb74*/
      }
      if ( v16 >= 0 ) /*0x53eb7b*/
      {
        v21 = dword_AA0430; /*0x53ebbc*/
        v22 = 0; /*0x53ebc9*/
        v20 = dword_A8ED84; /*0x53ebcd*/
        qmemcpy(v23, lpMsg, sizeof(v23)); /*0x53ebd3*/
        *(_DWORD *)v23 = v16; /*0x53ebdf*/
        BufferedAudioStreamRead((int *)dword_AA0460, (char *)&v20, 40); /*0x53ebe3*/
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

  result = dword_AA0444; /*0x53ec40*/
  if ( dword_AA0444 )
    word_AA0168[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}



// ==== 0x0053EC70  EventClass::GetKeyStateSafe  this=EventClass  sig=csp ====
int __thiscall EventClass::GetKeyStateSafe(EventClass *this)
{
  int result; // eax

  HIWORD(result) = HIWORD(stru_AA0398.AudioStream_field_0xAC); /*0x53ec70*/
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec77*/
    LOWORD(result) = word_AA0168[(unsigned __int8)this]; /*0x53ec87*/
  else
    LOWORD(result) = GetKeyState((unsigned __int8)this); /*0x53ec7a*/
  return result; /*0x53ec80*/
}



// ==== 0x0053EC90  Mouse::GetKeyState  this=MouseClass  sig=csp ====
SHORT __thiscall Mouse::GetKeyState(Mouse *this)
{
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec97*/
    return word_AA0168[(unsigned __int8)this]; /*0x53eca7*/
  else
    return GetAsyncKeyState((unsigned __int8)this); /*0x53ec9a*/
}



// ==== 0x0053ECB0  Waypoint::InitInvalid  this=IPXManagerClass  sig=csp ====
_BYTE *__thiscall Waypoint::InitInvalid(Waypoint *this)
{
  this->__pad_0[0] = -1; /*0x53ecb4*/
  this->__pad_0[1] = -1; /*0x53ecb6*/
  this->__pad_0[2] = -1; /*0x53ecb9*/
  this->__pad_0[3] = -1; /*0x53ecbc*/
  this->__pad_0[4] = -1; /*0x53ecbf*/
  this->__pad_0[5] = -1; /*0x53ecc2*/
  this->__pad_0[6] = -1; /*0x53ecc5*/
  this->__pad_0[7] = -1; /*0x53ecc8*/
  this->__pad_0[8] = -1; /*0x53eccb*/
  this->__pad_0[9] = -1; /*0x53ecce*/
  return this->__pad_0; /*0x53ecd1*/
}



// ==== 0x0053ECE0  NetworkAddress::Assign  this=NetworkAddress  sig=csp ====
_DWORD *__thiscall NetworkAddress::Assign(NetworkAddress *this, _DWORD *a2, int a3, __int16 a4)
{
  _DWORD *result; // eax
  char *m_Port; // ecx

  result = &this->m_IP; /*0x53ece4*/
  m_Port = this->m_Port; /*0x53ece9*/
  *(_DWORD *)m_Port = *(_DWORD *)a3; /*0x53ecec*/
  *((_WORD *)m_Port + 2) = *(_WORD *)(a3 + 4); /*0x53ecf4*/
  if ( dword_828140 == 1 ) /*0x53ed01*/
  {
    *result = *a2; /*0x53ed09*/
  }
  else
  {
    *result = 0; /*0x53ed13*/
    *(_WORD *)result = a4; /*0x53ed19*/
  }
  return result; /*0x53ecf3*/
}



// ==== 0x0053ED20  NetworkID::Assign  this=NetworkID  sig=csp ====
__int16 __thiscall NetworkID::Assign(NetworkID *this, _DWORD *a2, int a3, __int16 a4)
{
  this->NetworkID_field_0x04 = *(_DWORD *)a3; /*0x53ed2a*/
  this->q004 = *(_WORD *)(a3 + 4); /*0x53ed31*/
  if ( dword_828140 == 1 ) /*0x53ed3d*/
  {
    *(_DWORD *)this->__pad_0 = *a2; /*0x53ed45*/
    return (__int16)a2; /*0x53ed3f*/
  }
  else
  {
    *(_DWORD *)this->__pad_0 = 0; /*0x53ed4f*/
    *(_WORD *)this->__pad_0 = a4; /*0x53ed55*/
    return a4; /*0x53ed4a*/
  }
}



// ==== 0x0053ED60  Network::GetAddress  this=Network  sig=csp ====
__int16 __thiscall Network::GetAddress(Network *this, _DWORD *a2, int a3, _WORD *a4)
{
  __int16 result; // ax

  *(_DWORD *)a3 = this->Network_field_0x4; /*0x53ed6a*/
  *(_WORD *)(a3 + 4) = this->Network_field_0x8; /*0x53ed71*/
  result = dword_828140; /*0x53ed75*/
  if ( dword_828140 == 1 ) /*0x53ed7d*/
  {
    *a2 = this->Network_field_0x0; /*0x53ed85*/
  }
  else
  {
    result = this->Network_field_0x0; /*0x53ed8a*/
    *a4 = this->Network_field_0x0; /*0x53ed91*/
  }
  return result; /*0x53ed6c*/
}



// ==== 0x0053EDA0  Network::CopyAddress  this=Network  sig=csp ====
char *__thiscall Network::CopyAddress(Network *this, _DWORD *a2, int a3)
{
  char *result; // eax

  result = (char *)&this->Network_field_0x4; /*0x53eda4*/
  *(_DWORD *)a3 = this->Network_field_0x4; /*0x53edaa*/
  LOWORD(result) = this->Network_field_0x8; /*0x53edad*/
  *(_WORD *)(a3 + 4) = (_WORD)result; /*0x53edb1*/
  *a2 = this->Network_field_0x0; /*0x53edbb*/
  return result; /*0x53edac*/
}



// ==== 0x0053EDC0  Network::CopyAddress_Small  this=Network  sig=csp ====
int __thiscall Network::CopyAddress_Small(char *this, int a2)
{
  char *v3; // ecx

  v3 = this + 4; /*0x53edc4*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x53edc9*/
  *(_WORD *)(a2 + 4) = *((_WORD *)v3 + 2); /*0x53edcf*/
  return a2; /*0x53edd3*/
}



// ==== 0x0053EDE0  Struct::Copy6Bytes  this=Network  sig=csp ====
__int16 __thiscall Struct_Copy6Bytes(char *this, int a2)
{
  char *v2; // ecx
  __int16 result; // ax

  v2 = this + 4; /*0x53ede4*/
  *(_DWORD *)v2 = *(_DWORD *)a2; /*0x53ede9*/
  result = *(_WORD *)(a2 + 4); /*0x53edeb*/
  *((_WORD *)v2 + 2) = result; /*0x53edef*/
  return result; /*0x53edf3*/
}



// ==== 0x0053EE00  Network::IsBroadcastAddr  this=Network  sig=csp ====
int __thiscall Network::IsBroadcastAddr(Network *this)
{
  if ( dword_828140 == 1 ) /*0x53ee0a*/
  {
    if ( LOBYTE(this->Network_field_0x0) == 0xFF /*0x53ee3b*/
      && BYTE1(this->Network_field_0x0) == 0xFF
      && BYTE2(this->Network_field_0x0) == 0xFF
      && HIBYTE(this->Network_field_0x0) == 0xFF
      && LOBYTE(this->Network_field_0x4) == 0xFF
      && BYTE1(this->Network_field_0x4) == 0xFF
      && BYTE2(this->Network_field_0x4) == 0xFF
      && HIBYTE(this->Network_field_0x4) == 0xFF
      && LOBYTE(this->Network_field_0x8) == 0xFF
      && BYTE1(this->Network_field_0x8) == 0xFF )
    {
      return 1; /*0x53ee42*/
    }
  }
  else if ( LOBYTE(this->Network_field_0x4) == 0xFF /*0x53ee5f*/
         && BYTE1(this->Network_field_0x4) == 0xFF
         && BYTE2(this->Network_field_0x4) == 0xFF
         && HIBYTE(this->Network_field_0x4) == 0xFF
         && LOBYTE(this->Network_field_0x8) == 0xFF
         && BYTE1(this->Network_field_0x8) == 0xFF )
  {
    return 1; /*0x53ee66*/
  }
  return 0; /*0x53ee42*/
}



// ==== 0x0053EE70  GUID::Compare  this=GUID  sig=csp ====
int __thiscall GUID::Compare(char *this, int a2)
{
  int result; // eax
  _WORD *v3; // edi
  int v4; // ecx
  _WORD *v5; // esi
  bool v6; // zf
  int v7; // ecx
  _WORD *v8; // edi
  _WORD *v9; // esi
  bool v10; // zf

  result = (int)this; /*0x53ee70*/
  if ( dword_828140 == 2 ) /*0x53ee7d*/
  {
    if ( this->Data4 == *(_DWORD *)(a2 + 4) ) /*0x53ee91*/
    {
      LOWORD(result) = *(_WORD *)this; /*0x53ee97*/
      if ( *(_WORD *)this == *(_WORD *)a2 ) /*0x53ee9d*/
      {
        LOBYTE(result) = 1; /*0x53eea0*/
        return result; /*0x53eea3*/
      }
    }
LABEL_23:
    LOBYTE(result) = 0; /*0x53ef1a*/
    return result; /*0x53ef1b*/
  }
  if ( (*this || this->Data4 || this->Data3 || *(this + 3)) /*0x53eed8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    v7 = 3; /*0x53eef8*/
    v8 = (_WORD *)(a2 + 4); /*0x53eefd*/
    v9 = (_WORD *)(result + 4); /*0x53ef00*/
    v10 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v7 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v10 = *v9++ == *v8++; /*0x53ef05*/
      --v7; /*0x53ef05*/
    }
    while ( v10 ); /*0x53ef05*/
    if ( v10 ) /*0x53ef09*/
    {
      result = *(_DWORD *)result; /*0x53ef0b*/
      if ( result == *(_DWORD *)a2 ) /*0x53ef11*/
      {
        LOBYTE(result) = 1; /*0x53ef14*/
        return result; /*0x53ef17*/
      }
    }
    goto LABEL_23; /*0x53ef11*/
  }
  v3 = (_WORD *)(a2 + 4); /*0x53eedf*/
  v4 = 3; /*0x53eee2*/
  v5 = (_WORD *)(result + 4); /*0x53eee7*/
  v6 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v4 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v6 = *v5++ == *v3++; /*0x53eeec*/
    --v4; /*0x53eeec*/
  }
  while ( v6 ); /*0x53eeec*/
  LOBYTE(result) = v6; /*0x53eef1*/
  return result; /*0x53ee9f*/
}



// ==== 0x0053EF30  NetworkID::Compare  this=Network  sig=csp ====
int __thiscall NetworkID::Compare(bool *this, int a2)
{
  return memcmp(this + 4, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}



// ==== 0x0053EF60  Network::processPacket  this=Network  sig=csp ====
bool __thiscall sub_53EF60(char *this, int a2)
{
  _WORD *v4; // edi
  int v5; // ecx
  _WORD *v6; // esi
  bool v7; // zf
  int v8; // ecx
  _WORD *v9; // edi
  _WORD *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ef6d*/
    return this->q004 != *(_DWORD *)(a2 + 4) || *(_WORD *)this != *(_WORD *)a2; /*0x53ef8d*/
  if ( (*this || this->q004 || this->q008 || this->q00C) /*0x53efc8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    v8 = 3; /*0x53efe8*/
    v9 = (_WORD *)(a2 + 4); /*0x53efed*/
    v10 = this + 4; /*0x53eff0*/
    v11 = 1; /*0x53eff3*/
    do /*0x53eff5*/
    {
      if ( !v8 ) /*0x53eff5*/
        break; /*0x53eff5*/
      v11 = *v10++ == *v9++; /*0x53eff5*/
      --v8; /*0x53eff5*/
    }
    while ( v11 ); /*0x53eff5*/
    return !v11 || *(_DWORD *)this != *(_DWORD *)a2; /*0x53f001*/
  }
  v4 = (_WORD *)(a2 + 4); /*0x53efcf*/
  v5 = 3; /*0x53efd2*/
  v6 = this + 4; /*0x53efd7*/
  v7 = 1; /*0x53efda*/
  do /*0x53efdc*/
  {
    if ( !v5 ) /*0x53efdc*/
      break; /*0x53efdc*/
    v7 = *v6++ == *v4++; /*0x53efdc*/
    --v5; /*0x53efdc*/
  }
  while ( v7 ); /*0x53efdc*/
  return !v7; /*0x53ef8f*/
}



// ==== 0x0053F020  ObjectClass::method_53F020  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F020(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) > 0; /*0x53f031*/
}



// ==== 0x0053F050  ObjectClass::method_53F050  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F050(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) < 0; /*0x53f061*/
}



// ==== 0x0053F080  ObjectClass::method_53F080  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F080(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) >= 0; /*0x53f091*/
}



// ==== 0x0053F0B0  ObjectClass::method_53F0B0  this=ObjectClass  sig=csp ====
bool __thiscall sub_53F0B0(ObjectClass *this, const char *a2)
{
  return memcmp((const char *)this, a2, 10) <= 0; /*0x53f0c1*/
}



// ==== 0x0053F0E0  Network::FormatAddress  this=Network  sig=csp ====
char *__thiscall Network::FormatAddress(Network *this, unsigned __int16 *a2)
{
  _DWORD *p_Network_field_0x0; // edx
  int v3; // eax

  p_Network_field_0x0 = a2; /*0x53f0e0*/
  if ( !a2 ) /*0x53f0e9*/
    p_Network_field_0x0 = &this->Network_field_0x0; /*0x53f0eb*/
  v3 = p_Network_field_0x0[1]; /*0x53f0f3*/
  if ( dword_828140 == 1 )
    sprintf(
      &stru_AA0398.__pad_D8[12],
      "%02X %02X %02X %02X : %02X %02X %02X %02X %02X %02X",
      (unsigned __int8)*p_Network_field_0x0,
      BYTE1(*p_Network_field_0x0),
      (unsigned __int8)BYTE2(*p_Network_field_0x0),
      HIBYTE(*p_Network_field_0x0),
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      (unsigned __int8)*((_WORD *)p_Network_field_0x0 + 4),
      HIBYTE(*((_WORD *)p_Network_field_0x0 + 4)));
  else
    sprintf( /*0x53f1cf*/
      &stru_AA0398.__pad_D8[12],
      "%d.%d.%d.%d ; %d",
      (unsigned __int8)v3,
      BYTE1(v3),
      BYTE2(v3),
      HIBYTE(v3),
      LOWORD(this->Network_field_0x0));
  return &stru_AA0398.__pad_D8[12]; /*0x53f192*/
}



// ==== 0x0053F1F0  Multiplayer::Screen  this=Multiplayer  sig=csp ====
int __thiscall Multiplayer::Screen(Multiplayer *this)
{
  int result; // eax

  dword_828140 = (int)this; /*0x53f1f0*/
  return result; /*0x53f1f6*/
}



// ==== 0x0053F200  Network::SetPort  this=Network  sig=csp ====
__int16 __thiscall Network::SetPort(Network *this, __int16 a2)
{
  __int16 result; // ax

  if ( dword_828140 == 2 ) /*0x53f207*/
  {
    LOWORD(this->Network_field_0x0) = a2; /*0x53f20e*/
    return a2; /*0x53f209*/
  }
  return result; /*0x53f211*/
}



// ==== 0x0053F220  sub_53F220  this=-  sig=ida-proto ====
int sub_53F220()
{
  dword_AA0510 = 0; /*0x53f222*/
  dword_AA0514 = 0; /*0x53f227*/
  dword_AA0518 = 0; /*0x53f22c*/
  dword_AA051C = 0; /*0x53f231*/
  return 0; /*0x53f236*/
}



// ==== 0x0053F240  sub_53F240  this=-  sig=ida-proto ====
void sub_53F240()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f24c*/
  dbl_AA0528 = Math::Sqrt(v0 + v0); /*0x53f25e*/
}



// ==== 0x0053F270  sub_53F270  this=-  sig=ida-proto ====
void sub_53F270()
{
  dbl_AA0598 = dbl_AA0528 / 60.0; /*0x53f27c*/
}



// ==== 0x0053F290  sub_53F290  this=-  sig=ida-proto ====
void sub_53F290()
{
  dbl_AA0580 = 1.0 / dbl_AA0598; /*0x53f29c*/
}



// ==== 0x0053F2B0  sub_53F2B0  this=-  sig=ida-proto ====
void sub_53F2B0()
{
  dbl_AA0570 = 0.0174532925199433 * 45.0; /*0x53f2bc*/
}



// ==== 0x0053F2D0  sub_53F2D0  this=-  sig=ida-proto ====
void sub_53F2D0()
{
  dbl_AA0538 = 0.0174532925199433 * 60.0; /*0x53f2dc*/
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

  v0 = Math::Sin(*(double *)&unk_AA047C[132] - dbl_AA0538); /*0x53f322*/
  result = Math::RoundToInt(v0 * dbl_AA0528 * 0.5); /*0x53f336*/
  dword_AA05A0 = result; /*0x53f33b*/
  return result; /*0x53f340*/
}



// ==== 0x0053F350  sub_53F350  this=-  sig=ida-proto ====
void sub_53F350()
{
  dbl_AA0540 = Math::ArcTan((double)dword_AA05A0 * 0.00390625); /*0x53f367*/
}



// ==== 0x0053F380  sub_53F380  this=-  sig=ida-proto ====
void sub_53F380()
{
  dbl_AA0560 = Math::ArcTan((double)(2 * dword_AA05A0) / dbl_AA0528); /*0x53f3a2*/
}



// ==== 0x0053F3B0  sub_53F3B0  this=-  sig=ida-proto ====
__int64 sub_53F3B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA05A0) + 0.5); /*0x53f3cb*/
  dword_AA0594 = result; /*0x53f3d0*/
  return result; /*0x53f3d6*/
}



// ==== 0x0053F3E0  sub_53F3E0  this=-  sig=ida-proto ====
int sub_53F3E0()
{
  word_AA0520 = 0; /*0x53f3e2*/
  word_AA0522 = 0; /*0x53f3e8*/
  return 0; /*0x53f3ee*/
}



// ==== 0x0053F3F0  sub_53F3F0  this=-  sig=ida-proto ====
int sub_53F3F0()
{
  dword_AA0550 = 0; /*0x53f3f2*/
  dword_AA0554 = 0; /*0x53f3f7*/
  dword_AA0558 = 0; /*0x53f3fc*/
  return 0; /*0x53f401*/
}



// ==== 0x0053F410  sub_53F410  this=-  sig=ida-proto ====
int sub_53F410()
{
  dword_AA0590 = 0; /*0x53f415*/
  dword_AA0588 = 128; /*0x53f41f*/
  dword_AA058C = 128; /*0x53f424*/
  return 128; /*0x53f429*/
}



// ==== 0x0053F430  IPXConnClass::constructor  this=IPXConnClass  sig=csp ====
void *__thiscall IPXConnClass::constructor(
        IPXConnClass *this,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        _DWORD *a6,
        int a7,
        wchar_t *Source,
        int a9)
{
  int v10; // ecx
  __int16 v11; // dx
  int v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection((ModemConnectionClass *)this, a2, a3, a4, a5, 2, -1, 60, a9); /*0x53f458*/
  Waypoint::InitInvalid((Waypoint *)((char *)this + 76)); /*0x53f462*/
  *(_DWORD *)this->__pad_0 = &IPXConnClass::`vftable'; /*0x53f46b*/
  if ( a6 ) /*0x53f473*/
  {
    *((_DWORD *)this + 19) = *a6; /*0x53f479*/
    this->PacketsReceived = a6[1]; /*0x53f47e*/
    *((_DWORD *)this + 21) = a6[2]; /*0x53f484*/
  }
  *((_DWORD *)this + 25) = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((Network *)((char *)this + 76), &a9, (int)&v13); /*0x53f4ab*/
  v10 = v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  this->Socket = 0; /*0x53f4bc*/
  *((_DWORD *)this + 22) = v10; /*0x53f4c4*/
  *((_WORD *)this + 46) = v11; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}



// ==== 0x0053F4E0  IPXConnClass::ZeroInitAndSetup_0  this=IPXConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0(IPXConnClass *this)
{
  return Struct::ZeroInitAndSetup((ConnectionClass *)this);
}



// ==== 0x0053F4F0  Network_Init_53F4F0  this=-  sig=csp ====
int __fastcall sub_53F4F0(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  LOWORD(dword_AA0568) = a1; /*0x53f4f4*/
  dword_AA0548 = a2; /*0x53f4ff*/
  dword_AA055C = a3; /*0x53f509*/
  dword_AA0578 = a4; /*0x53f512*/
  dword_AA0530 = a5; /*0x53f51c*/
  dword_AA0508 = a6; /*0x53f522*/
  dword_AA056C = a7; /*0x53f527*/
  dword_AA05A4 = 1; /*0x53f52d*/
  return a6; /*0x53f537*/
}



// ==== 0x0053F540  ObjectClass::Network_Init_53F540  this=ObjectClass  sig=csp ====
int Network_Init_53F540(ObjectClass *this)
{
  unsigned __int16 v1; // si

  v1 = *(_WORD *)&stru_AA0398.__pad_D8[248]; /*0x53f54d*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 80))( /*0x53f556*/
    *(_DWORD *)&stru_887598.isAliveFlag,
    stru_A8EB00.ObjectTypeClass[45]);
  dword_AA05A8 = (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 60))( /*0x53f570*/
                   *(_DWORD *)&stru_887598.isAliveFlag,
                   v1);
  if ( dword_AA05A8 ) /*0x53f576*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag) ) /*0x53f580*/
    {
      dword_AA05AC = 1; /*0x53f58c*/
      return 1; /*0x53f591*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 4))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x53f59a*/
    dword_AA05A8 = 0; /*0x53f59d*/
  }
  return 0; /*0x53f575*/
}



// ==== 0x0053F5B0  ObjectClass::Network_Helper  this=ObjectClass  sig=csp ====
int Network_Helper(ObjectClass *this)
{
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x53f5b8*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 32))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x53f5bc*/
  dword_AA05AC = 0; /*0x53f5bf*/
  return 1; /*0x53f5ce*/
}



// ==== 0x0053F5D0  IPXConnClass::send  this=IPXConnClass  sig=csp ====
bool __thiscall IPXConnClass::send(IPXConnClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(bool (__stdcall **)(int, int, char *, _DWORD, int, _DWORD))(*(_DWORD *)this->ConnectionClass + 40))( /*0x53f5ec*/
           a2,
           a3,
           (char *)this + 76,
           0,
           a6,
           0);
}



// ==== 0x0053F650  IPXConnClass::receive  this=IPXConnClass  sig=csp ====
int __thiscall IPXConnClass::receive(IPXConnClass *this, int a2, int a3, int *a4, int **a5, int a6, int a7)
{
  int **v8; // esi
  int v9; // edi
  int v10; // ebp
  char LinkedIndex; // al
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int ConnectionSpeed; // eax
  int v17[2]; // [esp+10h] [ebp-14h] BYREF
  NetworkID v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-4h]

  Waypoint::InitInvalid((Waypoint *)&v18); /*0x53f65d*/
  v8 = a5; /*0x53f666*/
  *(_DWORD *)v18.__pad_0 = *a4; /*0x53f670*/
  v18.NetworkID_field_0x04 = a4[1]; /*0x53f677*/
  v19 = a4[2]; /*0x53f67e*/
  if ( a5 ) /*0x53f682*/
  {
    Network::CopyAddress((Network *)a4, &a4, (int)v17); /*0x53f68e*/
    a4 = *v8; /*0x53f69f*/
    NetworkID::Assign(&v18, &a4, (int)v17, 0); /*0x53f6a9*/
  }
  v9 = 0; /*0x53f6b2*/
  if ( (_BYTE)a6 || !byte_A8DBA0 ) /*0x53f6c3*/
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
    LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], *((_DWORD *)this + 25)); /*0x53f6dd*/
    if ( !LinkedIndex ) /*0x53f6e4*/
      return 0; /*0x53f6ef*/
    *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x53f6f2*/
  }
  v18 = qword_A8DBA4; /*0x53f706*/
  v9 = *(_DWORD *)&dword_841F3C; /*0x53f710*/
  v19 = dword_A8DBAC; /*0x53f71a*/
  if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40) /*0x53f742*/
    && (unsigned __int8)NetworkID::Compare((bool *)v18.__pad_0, *dword_A8DA78 + 40) )
  {
    goto LABEL_13; /*0x53f749*/
  }
  v9 = *(_DWORD *)&dword_A8DBBC; /*0x53f752*/
  *(_WORD *)(a2 + 12) = dword_841F3C; /*0x53f75b*/
  *(_DWORD *)(a2 + 8) = 0; /*0x53f75f*/
LABEL_14:
  if ( *(_DWORD *)&dword_A8B238 != 4 || byte_A8DBA0 ) /*0x53f78a*/
    goto LABEL_27; /*0x53f78a*/
  v13 = IPXManagerClass::receivePacket(&unk_A8E9C0, (int)this); /*0x53f792*/
  v14 = v13; /*0x53f797*/
  if ( v13 == -4 ) /*0x53f79c*/
  {
    v15 = *(_DWORD *)&dword_A8DBBC; /*0x53f7e5*/
    if ( !dword_A8DBBC ) /*0x53f7ed*/
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
  if ( !byte_A8DBA0 ) /*0x53f7af*/
  {
LABEL_23:
    if ( v13 >= Network::GetSendCount(&unk_A8E9C0) ) /*0x53f7cb*/
      goto LABEL_27; /*0x53f7cb*/
    ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v14); /*0x53f7d3*/
    LOWORD(v15) = IPXConnClass::closeConnection((IPXConnClass *)&dword_A8B238, ConnectionSpeed); /*0x53f7de*/
LABEL_26:
    v9 = v15; /*0x53f7ef*/
    goto LABEL_27; /*0x53f7ef*/
  }
  v15 = *(_DWORD *)&dword_A8DBBC; /*0x53f7b1*/
  if ( dword_A8DBBC ) /*0x53f7b9*/
    goto LABEL_26; /*0x53f7b9*/
LABEL_27:
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x53f7f9*/
    (*(void (__thiscall **)(_DWORD, int, int, NetworkID *, int, int, _DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag /*0x53f812*/
                                                                                 + 12))(
      *(_DWORD *)&stru_887598.isAliveFlag,
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
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_887628 + 16))(dword_887628, a1, a2, 0); /*0x53f83f*/
  return 1; /*0x53f847*/
}



// ==== 0x0053F850  IPXConnClass::QueryInterface  this=IPXConnClass  sig=csp ====
_DWORD *__thiscall IPXConnClass::QueryInterface(IPXConnClass *this, char a2)
{
  *(_DWORD *)this->ConnectionClass = &IPXConnClass::`vftable'; /*0x53f853*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x53f859*/
  if ( (a2 & 1) != 0 ) /*0x53f863*/
    __3_YAXPAX_Z(this); /*0x53f866*/
  return this->ConnectionClass; /*0x53f870*/
}



// ==== 0x0053F880  sub_53F880  this=-  sig=ida-proto ====
int sub_53F880()
{
  dword_AA05B8 = 0; /*0x53f882*/
  dword_AA05BC = 0; /*0x53f887*/
  dword_AA05C0 = 0; /*0x53f88c*/
  dword_AA05C4 = 0; /*0x53f891*/
  return 0; /*0x53f896*/
}



// ==== 0x0053F8A0  sub_53F8A0  this=-  sig=ida-proto ====
void sub_53F8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f8ac*/
  dbl_AA05D0 = Math::Sqrt(v0 + v0); /*0x53f8be*/
}



// ==== 0x0053F8D0  sub_53F8D0  this=-  sig=ida-proto ====
void sub_53F8D0()
{
  dbl_AA0620 = dbl_AA05D0 / 60.0; /*0x53f8dc*/
}



// ==== 0x0053F8F0  sub_53F8F0  this=-  sig=ida-proto ====
void sub_53F8F0()
{
  dbl_AA0608 = 1.0 / dbl_AA0620; /*0x53f8fc*/
}



// ==== 0x0053F910  sub_53F910  this=-  sig=ida-proto ====
void sub_53F910()
{
  dbl_AA0600 = 0.0174532925199433 * 45.0; /*0x53f91c*/
}



// ==== 0x0053F930  sub_53F930  this=-  sig=ida-proto ====
void sub_53F930()
{
  dbl_AA05D8 = 0.0174532925199433 * 60.0; /*0x53f93c*/
}



// ==== 0x0053F950  sub_53F950  this=-  sig=ida-proto ====
void sub_53F950()
{
  dbl_AA05B0 = 0.0174532925199433 * 90.0; /*0x53f95c*/
}



// ==== 0x0053F970  sub_53F970  this=-  sig=ida-proto ====
__int64 sub_53F970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA05B0 - dbl_AA05D8); /*0x53f982*/
  result = Math::RoundToInt(v0 * dbl_AA05D0 * 0.5); /*0x53f996*/
  dword_AA0628 = result; /*0x53f99b*/
  return result; /*0x53f9a0*/
}



// ==== 0x0053F9B0  sub_53F9B0  this=-  sig=ida-proto ====
void sub_53F9B0()
{
  dbl_AA05E0 = Math::ArcTan((double)dword_AA0628 * 0.00390625); /*0x53f9c7*/
}



// ==== 0x0053F9E0  sub_53F9E0  this=-  sig=ida-proto ====
void sub_53F9E0()
{
  dbl_AA05F8 = Math::ArcTan((double)(2 * dword_AA0628) / dbl_AA05D0); /*0x53fa02*/
}



// ==== 0x0053FA10  sub_53FA10  this=-  sig=ida-proto ====
__int64 sub_53FA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0628) + 0.5); /*0x53fa2b*/
  dword_AA061C = result; /*0x53fa30*/
  return result; /*0x53fa36*/
}



// ==== 0x0053FA40  sub_53FA40  this=-  sig=ida-proto ====
int sub_53FA40()
{
  word_AA05C8 = 0; /*0x53fa42*/
  word_AA05CA = 0; /*0x53fa48*/
  return 0; /*0x53fa4e*/
}



// ==== 0x0053FA50  sub_53FA50  this=-  sig=ida-proto ====
int sub_53FA50()
{
  dword_AA05E8 = 0; /*0x53fa52*/
  dword_AA05EC = 0; /*0x53fa57*/
  dword_AA05F0 = 0; /*0x53fa5c*/
  return 0; /*0x53fa61*/
}



// ==== 0x0053FA70  sub_53FA70  this=-  sig=ida-proto ====
int sub_53FA70()
{
  dword_AA0618 = 0; /*0x53fa75*/
  dword_AA0610 = 128; /*0x53fa7f*/
  dword_AA0614 = 128; /*0x53fa84*/
  return 128; /*0x53fa89*/
}



// ==== 0x0053FA90  IPXGlobalConnClass::Network_Init_53FA90  this=IPXGlobalConnClass  sig=csp ====
int *__thiscall Network_Init_53FA90(IPXGlobalConnClass *this, int a2, int a3, int a4, __int16 a5, __int16 a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  Waypoint *v10; // ebp
  int v11; // ecx
  int v12; // eax

  IPXConnClass::constructor((IPXConnClass *)this, a2, a3, a4 + 2, a6, 0, 0, &g_TypeClass_DefaultString, 12); /*0x53faba*/
  *(_DWORD *)this->__pad_0 = &IPXGlobalConnClass::`vftable'; /*0x53facc*/
  *((_WORD *)this + 92) = a5; /*0x53fad2*/
  *((_DWORD *)this + 49) = 0; /*0x53fad9*/
  *((_BYTE *)this + 200) = 1; /*0x53fadf*/
  *((_DWORD *)this + 53) = a3; /*0x53fae6*/
  v7 = __2_YAPAXI_Z(4 * a3); /*0x53faec*/
  v8 = *((_DWORD *)this + 53); /*0x53faf1*/
  this->q034 = v7; /*0x53faf7*/
  v9 = __2_YAPAXI_Z(12 * v8); /*0x53fb09*/
  if ( v9 ) /*0x53fb10*/
  {
    v10 = (Waypoint *)v9; /*0x53fb15*/
    if ( v8 - 1 >= 0 ) /*0x53fb19*/
    {
      do /*0x53fb29*/
      {
        Waypoint::InitInvalid(v10); /*0x53fb20*/
        v10 = (Waypoint *)((char *)v10 + 12); /*0x53fb25*/
        --v8; /*0x53fb28*/
      }
      while ( v8 ); /*0x53fb29*/
    }
  }
  else
  {
    v9 = 0; /*0x53fb2f*/
  }
  v11 = *((_DWORD *)this + 53); /*0x53fb31*/
  v12 = 0; /*0x53fb37*/
  *((_DWORD *)this + 51) = v9; /*0x53fb3b*/
  if ( v11 > 0 ) /*0x53fb41*/
  {
    do /*0x53fb5a*/
    {
      ++v12; /*0x53fb49*/
      *(_DWORD *)(this->q034 + 4 * v12 - 4) = -1; /*0x53fb4a*/
    }
    while ( v12 < *((_DWORD *)this + 53) ); /*0x53fb5a*/
  }
  *((_DWORD *)this + 54) = 0; /*0x53fb5c*/
  return (int *)this->__pad_0; /*0x53fb64*/
}



// ==== 0x0053FBD0  IPXGlobalConnClass::Flush  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Flush(
        IPXGlobalConnClass *this,
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

  Waypoint::InitInvalid((Waypoint *)v11); /*0x53fbdc*/
  *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 8) = 0; /*0x53fbe6*/
  *(_WORD *)(this->IPXGlobalConnClass_field_0x20 + 12) = 0; /*0x53fbec*/
  *(_WORD *)this->IPXGlobalConnClass_field_0x20 = this->IPXGlobalConnClass_field_0x24; /*0x53fbf7*/
  *(_BYTE *)(this->IPXGlobalConnClass_field_0x20 + 2) = !a5 || !a4; /*0x53fc0d*/
  *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 4) = *(_DWORD *)(this->IPXGlobalConnClass_field_0x04 + 44); /*0x53fc22*/
  if ( a7 ) /*0x53fc2b*/
    *(_DWORD *)(this->IPXGlobalConnClass_field_0x20 + 4) = a7; /*0x53fc30*/
  *(_WORD *)(this->IPXGlobalConnClass_field_0x20 + 14) = *((_WORD *)this + 92); /*0x53fc3f*/
  *(_BYTE *)(this->IPXGlobalConnClass_field_0x20 + 3) = 0; /*0x53fc46*/
  if ( a4 ) /*0x53fc49*/
  {
    v8 = a4[1]; /*0x53fc4d*/
    v9 = a4[2]; /*0x53fc50*/
    v11[0] = *a4; /*0x53fc53*/
    v11[1] = v8; /*0x53fc57*/
    v11[2] = v9; /*0x53fc5b*/
  }
  qmemcpy((void *)(this->IPXGlobalConnClass_field_0x20 + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket( /*0x53fc99*/
           (ConnectionClass *)this->IPXGlobalConnClass_field_0x04,
           (const void *)this->IPXGlobalConnClass_field_0x20,
           a3 + 16,
           v11,
           12,
           a6);
}



// ==== 0x0053FCB0  IPXGlobalConnClass::GetQueueSize  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::GetQueueSize(IPXGlobalConnClass *this, _WORD *a2, signed int a3, int *a4, int a5)
{
  int IPXGlobalConnClass_field_0x04; // ecx
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
  char v20[4]; // [esp+8h] [ebp-1Ch] BYREF
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]
  __int16 IPXGlobalConnClass_field_0x24; // [esp+14h] [ebp-10h] BYREF
  char v24; // [esp+16h] [ebp-Eh]
  char v25; // [esp+17h] [ebp-Dh]
  int v26; // [esp+18h] [ebp-Ch]
  __int16 v27; // [esp+22h] [ebp-2h]

  if ( *a2 != LOWORD(this->IPXGlobalConnClass_field_0x24) ) /*0x53fcc3*/
    return 0; /*0x53fccc*/
  if ( !*((_BYTE *)a2 + 2) ) /*0x53fcd9*/
  {
    v11 = a5; /*0x53fd92*/
    *(_DWORD *)v20 = *a4; /*0x53fd9b*/
    v21 = a4[1]; /*0x53fda2*/
    v22 = a4[2]; /*0x53fda9*/
    if ( (_WORD)a5 ) /*0x53fdad*/
      Network::SetPort((Network *)v20, a5); /*0x53fdb4*/
    v12 = 0; /*0x53fdbf*/
    if ( *((int *)this + 53) <= 0 ) /*0x53fdc3*/
    {
LABEL_24:
      if ( !ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12) ) /*0x53fe20*/
        goto LABEL_30; /*0x53fe20*/
      v14 = (_DWORD *)(*((_DWORD *)this + 51) + 12 * *((_DWORD *)this + 54)); /*0x53fe31*/
      *v14 = *(_DWORD *)v20; /*0x53fe38*/
      v14[1] = v21; /*0x53fe3e*/
      v14[2] = v22; /*0x53fe45*/
      *(_DWORD *)(this->q034 + 4 * *((_DWORD *)this + 54)) = *((_DWORD *)a2 + 1); /*0x53fe57*/
      v15 = *((_DWORD *)this + 53); /*0x53fe60*/
      v16 = *((_DWORD *)this + 54) + 1; /*0x53fe67*/
      *((_DWORD *)this + 54) = v16; /*0x53fe69*/
      if ( v16 >= v15 ) /*0x53fe71*/
        *((_DWORD *)this + 54) = 0; /*0x53fe73*/
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
        if ( (unsigned __int8)GUID::Compare(v20, v13 + *((_DWORD *)this + 51)) /*0x53fdf1*/
          && *((_DWORD *)a2 + 1) == *(_DWORD *)(this->q034 + 4 * v12) )
        {
          break; /*0x53fdf1*/
        }
        ++v12; /*0x53fdfd*/
        v13 += 12; /*0x53fdfe*/
        if ( (signed int)v12 >= *((_DWORD *)this + 53) ) /*0x53fe03*/
          goto LABEL_23; /*0x53fe03*/
      }
      v11 = a5; /*0x53fe86*/
    }
    v17 = *((_DWORD *)a2 + 1); /*0x53fe8e*/
    v18 = *((_WORD *)this + 92); /*0x53fe91*/
    IPXGlobalConnClass_field_0x24 = this->IPXGlobalConnClass_field_0x24; /*0x53fe98*/
    v24 = 2; /*0x53fe9f*/
    v26 = v17; /*0x53feaa*/
    v27 = v18; /*0x53feb4*/
    v25 = 0; /*0x53feb9*/
    Debug::Log(); /*0x53febe*/
    v19 = dword_A8EA0C; /*0x53fec3*/
    LOBYTE(v19) = this == (IPXGlobalConnClass *)dword_A8EA0C; /*0x53fed3*/
    if ( (*(int (__thiscall **)(IPXGlobalConnClass *, __int16 *, int, int *, int, int, int))(*(_DWORD *)this->__pad_0 /*0x53fee4*/
                                                                                           + 36))(
           this,
           &IPXGlobalConnClass_field_0x24,
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
    *(_DWORD *)v20 = *a4; /*0x53fd45*/
    v21 = a4[1]; /*0x53fd4c*/
    v22 = a4[2]; /*0x53fd53*/
    if ( (_WORD)a5 ) /*0x53fd5e*/
      Network::SetPort((Network *)v20, a5); /*0x53fd65*/
    ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12); /*0x53fd7a*/
    return 1; /*0x53fd8b*/
  }
  if ( *((_BYTE *)a2 + 2) != 2 ) /*0x53fce3*/
    return 1; /*0x53fce3*/
  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x53fce9*/
  v8 = 0; /*0x53fcec*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x53fcf3*/
    return 1; /*0x53fefb*/
  while ( 1 ) /*0x53fcfa*/
  {
    TileIndex = (_DWORD *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v8); /*0x53fcfa*/
    v10 = TileIndex[5]; /*0x53fcff*/
    if ( *((_DWORD *)a2 + 1) == *(_DWORD *)(v10 + 4) && !*(_BYTE *)(v10 + 2) ) /*0x53fd0a*/
      break; /*0x53fd0a*/
    IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x53fd11*/
    if ( ++v8 >= *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ) /*0x53fd18*/
      return 1; /*0x53fd26*/
  }
  *TileIndex |= 2u; /*0x53fd30*/
  return 1; /*0x53fcc5*/
}



// ==== 0x0053FF10  IPXGlobalConnClass::ConnectToHost  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::ConnectToHost(
        IPXGlobalConnClass *this,
        void *a2,
        signed int *a3,
        _DWORD *a4,
        _WORD *a5)
{
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  _DWORD *TileType; // eax
  int v7; // edx
  int v8; // ebx
  _DWORD *v9; // edx

  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x53ff10*/
  if ( !IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ) /*0x53ff13*/
    return 0; /*0x53ff13*/
  TileType = (_DWORD *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, 0); /*0x53ff1c*/
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
int __thiscall TerrainTypeClass::GetTileData(
        int *this,
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
  int v10; // edx
  _DWORD *v11; // edx

  v7 = (_DWORD *)this->q004; /*0x53ffa0*/
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


