// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_538C40_e4.hpp"
#include "e4/classes/E4Recv_538CC0_e4.hpp"
#include "e4/classes/E4Recv_538E70_e4.hpp"
#include "e4/classes/E4Recv_53F020_e4.hpp"
#include "e4/classes/E4Recv_53F050_e4.hpp"
#include "e4/classes/E4Recv_53F080_e4.hpp"
#include "e4/classes/E4Recv_53F0B0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x530000
namespace gamemd {
void sub_530000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HANDLE FirstFileA; // edi
  HANDLE v4; // edi
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-140h] BYREF

  FirstFileA = FindFirstFileA(DataGlobal_826620, &FindFileData); /*0x530022*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x530035*/
      {
        _DWORD * v1 = __2_YAPAXI_Z(0x28u); /*0x53003d*/
        if ( v1 ) /*0x530047*/
        {
          _DWORD * v2 = MixFileClass::FromFile(v1, FindFileData.cFileName, (int)DataGlobal_886980); /*0x53005a*/
          if ( v2 ) /*0x53005e*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530097*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              int v3 = g_MixFilePool_Count++; /*0x5300a4*/
              *((_DWORD *)g_MixFilePool + v3) = v2; /*0x5300b3*/
            }
            ReturnTrue(0); /*0x5300ba*/
          }
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x5300c5*/
    FindClose(FirstFileA); /*0x5300d0*/
  }
  v4 = FindFirstFileA(DataGlobal_826614, &FindFileData); /*0x5300e2*/
  if ( v4 != (HANDLE)-1 ) /*0x5300e7*/
  {
    do /*0x530178*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5300f5*/
      {
        _DWORD * v5 = __2_YAPAXI_Z(0x28u); /*0x5300f9*/
        if ( v5 ) /*0x530103*/
        {
          _DWORD * v6 = MixFileClass::FromFile(v5, FindFileData.cFileName, (int)DataGlobal_886980); /*0x530116*/
          if ( v6 ) /*0x53011a*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530153*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              int v7 = g_MixFilePool_Count++; /*0x530160*/
              *((_DWORD *)g_MixFilePool + v7) = v6; /*0x53016f*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v4, &FindFileData) ); /*0x530178*/
    FindClose(v4); /*0x530183*/
  }
  return 1; /*0x530189*/
}
}
} // namespace gamemd

// 0x5312A0
namespace gamemd {
void ShowLoadingScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ConvertClass *v3; // esi
  ConvertClass *EntireFile; // ebp
  int i; // edx
  ConvertClass *v6; // eax
  IUnknown *v9; // edx
  char *ecx7; // ecx
  int edx11; // edx
  CampaignScore *v10; // edi
  AbstractClass *v11; // esi
  int eax13; // eax
  wchar_t *StringCSF; // eax
  CampaignScore *v14; // edi
  wchar_t *v18; // eax
  wchar_t *eax16a; // eax
  wchar_t *v20; // eax
  Frame *v21; // ecx
  ConvertClass *v19; // esi
  CampaignScore *v26; // [esp-10h] [ebp-B8h]
  CampaignScore *v27; // [esp-10h] [ebp-B8h]
  CampaignScore *v28; // [esp-10h] [ebp-B8h]
  CampaignScore *v29; // [esp-10h] [ebp-B8h]
  int v33[2]; // [esp+Ch] [ebp-9Ch] BYREF
  __int16 v34; // [esp+14h] [ebp-94h]
  void *Block; // [esp+18h] [ebp-90h]
  int v36[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  int v37; // [esp+24h] [ebp-84h]
  int v38; // [esp+28h] [ebp-80h]
  struct tagRECT Rect; // [esp+2Ch] [ebp-7Ch] BYREF
  _DWORD v40[22]; // [esp+3Ch] [ebp-6Ch] BYREF
  char v41[12]; // [esp+94h] [ebp-14h] BYREF
  int v42; // [esp+A0h] [ebp-8h]
  CCFileClass::Construct(v40, aGlsmdPal); /*0x5312b3*/
  v3 = 0; /*0x5312ba*/
  EntireFile = 0; /*0x5312c1*/
  Block = 0; /*0x5312c3*/
  int v32 = 0; /*0x5312c7*/
  if ( CCFileClass::Open(v40, 0) ) /*0x5312cb*/
  {
    EntireFile = (ConvertClass *)CCFileClass::ReadEntireFile(v40); /*0x5312e5*/
    CCFileClass::Reset(v40); /*0x5312e7*/
    for ( i = 0; i < 256; ++i ) /*0x5312ec*/
    {
      v6 = (ConvertClass *)((char *)EntireFile + 2 * (i % 256) + i % 256); /*0x531302*/
      LOBYTE(v34) = 4 * v6->__pad_0[0]; /*0x531309*/
      HIBYTE(v34) = 4 * v6->__pad_0[1]; /*0x531313*/
      char v7 = 4 * v6->field_2[0]; /*0x53131f*/
      *(_WORD *)v6->__pad_0 = v34; /*0x531323*/
      v6->field_2[0] = v7; /*0x53132c*/
    }
    if ( EntireFile ) /*0x531333*/
    {
      _DWORD * v8 = (_DWORD *)__2_YAPAXI_Z(0x188u); /*0x53133a*/
      if ( v8 ) /*0x531344*/
      {
        v32 = (int)ConvertClass::Construct( /*0x531363*/
                     v8,
                     EntireFile,
                     (int)&stru_87C374[37900],
                     *(ConvertClass **)&stru_87C374[44948],
                     (ObjectClass *)1,
                     0);
        if ( v32 ) /*0x531367*/
        {
          ecx7 = aGlssmdShp; /*0x53136e*/
          if ( *(_DWORD *)&stru_89E138[8044] != 640 ) /*0x531378*/
            ecx7 = aGlslmdShp; /*0x53137a*/
          LOBYTE(v9) = 0; /*0x53137f*/
          Block = (void *)SearchMIXFile(ecx7, v9); /*0x531386*/
          v3 = (ConvertClass *)Block; /*0x53138a*/
        }
      }
      else
      {
        v32 = 0; /*0x53166f*/
      }
    }
  }
  GetClientRect(g_hWnd, &Rect); /*0x531398*/
  v36[0] = 0; /*0x5313a2*/
  v36[1] = 0; /*0x5313b8*/
  v37 = Rect.right - Rect.left; /*0x5313bc*/
  v38 = Rect.bottom - Rect.top; /*0x5313c0*/
  if ( v3 ) /*0x5313c4*/
  {
    edx11 = *(__int16 *)&v3->field_2[2]; /*0x5313cf*/
    v33[0] = (Rect.right - Rect.left - *(__int16 *)v3->field_2) / 2; /*0x5313d5*/
    v33[1] = (Rect.bottom - Rect.top - edx11) / 2; /*0x5313e5*/
    DrawToSurfaceSHP( /*0x53140e*/
      *(int *)&stru_87C374[44952],
      v32,
      v3,
      0,
      (ConvertClass *)v33,
      (ConvertClass *)v36,
      0,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v10 = (CampaignScore *)GetStringCSF(aTxtCopyright, 0, g_Str_File_Init_CPP, 4930); /*0x53142e*/
  v11 = TextRenderer::GetInstance(); /*0x531439*/
  int v30 = 0; /*0x53143e*/
  int v31 = v38 - 40; /*0x531444*/
  if ( v11 ) /*0x53144d*/
  {
    eax13 = Text::MeasureWidth(v10, 0); /*0x531454*/
    v30 = v37 - eax13 - 10; /*0x531461*/
  }
  TextRenderer::Printf( /*0x531485*/
    (ConvertClass *)v33,
    (size_t)v10,
    *(ObjectClass **)&stru_87C374[44952],
    (ConvertClass *)v36,
    (int)&v30,
    0xFFFF,
    0,
    22,
    a1);
  StringCSF = GetStringCSF(aGuiWwbrand, 0, g_Str_File_Init_CPP, 4941); /*0x53149e*/
  v14 = (CampaignScore *)StringCSF; /*0x5314a5*/
  if ( v11 ) /*0x5314a7*/
  {
    int v17 = Text::MeasureWidth((CampaignScore *)StringCSF, 0); /*0x5314ae*/
    v30 = v37 - v17 - 10; /*0x5314bf*/
    v31 += v11->referenceCount + 3; /*0x5314ca*/
  }
  TextRenderer::Printf( /*0x5314ee*/
    (ConvertClass *)v33,
    (size_t)v14,
    *(ObjectClass **)&stru_87C374[44952],
    (ConvertClass *)v36,
    (int)&v30,
    0xFFFF,
    0,
    22,
    v26);
  v18 = GetStringCSF(aGuiLoadingex, 0, g_Str_File_Init_CPP, 4951); /*0x531507*/
  v30 = 10; /*0x53152c*/
  v31 = 10; /*0x531530*/
  TextRenderer::Printf( /*0x531534*/
    (ConvertClass *)v33,
    (size_t)v18,
    *(ObjectClass **)&stru_87C374[44952],
    (ConvertClass *)v36,
    (int)&v30,
    0xFFFF,
    0,
    22,
    v27);
  eax16a = GetStringCSF(&unk_826858, 0, g_Str_File_Init_CPP, 4958); /*0x53154d*/
  v30 = 10; /*0x531556*/
  v31 = v38 - 40; /*0x531565*/
  TextRenderer::Printf( /*0x531581*/
    (ConvertClass *)v33,
    (size_t)eax16a,
    *(ObjectClass **)&stru_87C374[44952],
    (ConvertClass *)v36,
    (int)&v30,
    0xFFFF,
    0,
    22,
    v28);
  v20 = GetStringCSF(&unk_826844, 0, g_Str_File_Init_CPP, 4965); /*0x53159a*/
  v30 = 10; /*0x53159f*/
  v31 += v11->referenceCount + 3; /*0x5315bb*/
  TextRenderer::Printf( /*0x5315d2*/
    (ConvertClass *)v33,
    (size_t)v20,
    *(ObjectClass **)&stru_87C374[44952],
    (ConvertClass *)v36,
    (int)&v30,
    0xFFFF,
    0,
    22,
    v29);
  LOBYTE(v21) = 1; /*0x5315e0*/
  Frame::Present(v21, 0); /*0x5315e4*/
  __int64 v22; // rax
  LODWORD(v22) = Audio::Callback(); /*0x5315e9*/
  *(_QWORD *)&HouseClass_Player[47676] = v22 + 5000; /*0x5315f6*/
  if ( EntireFile ) /*0x531603*/
    __3_YAXPAX_Z(EntireFile); /*0x531606*/
  v19 = (ConvertClass *)Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy(Block); /*0x531618*/
    __3_YAXPAX_Z(v19); /*0x53161e*/
  }
  if ( v32 ) /*0x531630*/
    (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x531636*/
  v40[0] = &vt_CCFileClass; /*0x53163f*/
  v42 = 0; /*0x531647*/
  Vector::Clear((int)v41); /*0x531652*/
  v40[0] = &off_7E1668; /*0x53165b*/
  return BufferIOFileClass::Dtor(v40); /*0x531668*/
}
}
} // namespace gamemd

// 0x531680
namespace gamemd {
char BulkData_Initialize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE v4[12]; // [esp+5Ch] [ebp-80h] BYREF
  int v5; // [esp+68h] [ebp-74h]
  _DWORD v6[22]; // [esp+70h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+C8h] [ebp-14h] BYREF
  int v8; // [esp+D4h] [ebp-8h]
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
  MouseClass::LoadTypeData(&DataGlobal_87F7E8); /*0x531708*/
  nullsub_29(g_GameModeOptions); /*0x531712*/
  BulkData::InitMissionHashing(&g_GameMode_Current); /*0x53171c*/
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
  _DWORD v3[22]; // [esp+4h] [ebp-D8h] BYREF
  CCFileClass::Construct(v3, aDpodVxl); /*0x531766*/
  _DWORD * v0 = __2_YAPAXI_Z(0x1Cu); /*0x53176d*/
  if ( !v0 ) /*0x531777*/
  {
    DataGlobal_A8ECD8 = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  DataGlobal_A8ECD8 = (int)File::LoadFileVXL(v0, (int)v3, 0); /*0x531788*/
  if ( !DataGlobal_A8ECD8 ) /*0x53178d*/
  {
LABEL_11:
    Debug::Log(aFailedToCreate_0); /*0x53178f*/
LABEL_12:
    v3[0] = &vt_CCFileClass; /*0x53179c*/
    v5 = 0; /*0x5317a8*/
    Vector::Clear(v4); /*0x5317ac*/
    v3[0] = &off_7E1668; /*0x5317b5*/
    BufferIOFileClass::Dtor(v3); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  CCFileClass::Construct(v6, aDpodHva); /*0x5317dd*/
  _DWORD * v2 = __2_YAPAXI_Z(0x10u); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    DataGlobal_A8ECDC = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  DataGlobal_A8ECDC = (int)File::LoadFileHVA(v2, (int)v6); /*0x5317fe*/
  if ( !DataGlobal_A8ECDC ) /*0x531803*/
  {
LABEL_16:
    Debug::Log(aFailedToCreate_1); /*0x531805*/
    v6[0] = &vt_CCFileClass; /*0x531819*/
    v8 = 0; /*0x531821*/
    Vector::Clear(v7); /*0x531828*/
    v6[0] = &off_7E1668; /*0x531831*/
    BufferIOFileClass::Dtor(v6); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  v6[0] = &vt_CCFileClass; /*0x531852*/
  v8 = 0; /*0x53185a*/
  Vector::Clear(v7); /*0x531861*/
  v6[0] = &off_7E1668; /*0x53186a*/
  BufferIOFileClass::Dtor(v6); /*0x531872*/
  v3[0] = &vt_CCFileClass; /*0x53187b*/
  v5 = 0; /*0x531883*/
  Vector::Clear(v4); /*0x531887*/
  v3[0] = &off_7E1668; /*0x531890*/
  BufferIOFileClass::Dtor(v3); /*0x531898*/
  return 1; /*0x5317c4*/
}
}
} // namespace gamemd

// 0x532150
namespace gamemd {
void InitCommands()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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
  if ( LOBYTE(DataGlobal_87F7E8[536627]) ) /*0x53215e*/
  {
  _DWORD *v4; // esi
  _DWORD *v1; // esi
    _DWORD * v0 = (_DWORD *)__2_YAPAXI_Z(4); /*0x532166*/
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
      int v2 = dword_87F5D8[36]++; /*0x5321be*/
      *(_DWORD *)(dword_87F5D8[33] + 4 * v2) = v1; /*0x5321cd*/
    }
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(4); /*0x5321d2*/
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
      int v5 = dword_87F5D8[36]++; /*0x53222b*/
      *(_DWORD *)(dword_87F5D8[33] + 4 * v5) = v4; /*0x53223a*/
    }
  }
  _DWORD * v6 = (_DWORD *)__2_YAPAXI_Z(4); /*0x53223f*/
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
}
} // namespace gamemd

// 0x533FD0
namespace gamemd {
void AllocateSurfaceScreenSurfaces(int a1, ObjectClass * aP1, ObjectClass * aP2, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DSurface *v9; // eax
  DSurface *v12; // eax
  char *eax36; // eax
  DSurface *v15; // eax
  char *eax50; // eax
  DSurface *v20; // eax
  DSurface *v23; // eax
  char *eax68; // eax
  DSurface *v26; // eax
  bool var1; // [esp+29h] [ebp-1h]

  Debug::Log(); /*0x533fdd*/
  if ( *(_DWORD *)&stru_87C374[44956] ) /*0x533fee*/
  {
    Debug::Log(); /*0x533ff5*/
    if ( *(_DWORD *)&stru_87C374[44956] ) /*0x534005*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44956])( /*0x53400b*/
        *(_DWORD *)&stru_87C374[44956],
        1);
    *(_DWORD *)&stru_87C374[44956] = 0; /*0x53400d*/
  }
  if ( *(_DWORD *)&stru_87C374[44952] ) /*0x534019*/
  {
    Debug::Log(); /*0x534020*/
    if ( *(_DWORD *)&stru_87C374[44952] ) /*0x534030*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44952])( /*0x534036*/
        *(_DWORD *)&stru_87C374[44952],
        1);
    *(_DWORD *)&stru_87C374[44952] = 0; /*0x534038*/
  }
  if ( *(_DWORD *)&stru_87C374[44968] ) /*0x534044*/
  {
    Debug::Log(); /*0x53404b*/
    if ( *(_DWORD *)&stru_87C374[44968] ) /*0x53405b*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44968])( /*0x534061*/
        *(_DWORD *)&stru_87C374[44968],
        1);
    *(_DWORD *)&stru_87C374[44968] = 0; /*0x534063*/
  }
  if ( *(_DWORD *)&stru_87C374[44936] ) /*0x53406f*/
  {
    Debug::Log(); /*0x534076*/
    if ( *(_DWORD *)&stru_87C374[44936] ) /*0x534086*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44936])( /*0x53408c*/
        *(_DWORD *)&stru_87C374[44936],
        1);
    *(_DWORD *)&stru_87C374[44936] = 0; /*0x53408e*/
  }
  if ( *(_DWORD *)&stru_87C374[44940] ) /*0x53409a*/
  {
    Debug::Log(); /*0x5340a1*/
    if ( *(_DWORD *)&stru_87C374[44940] ) /*0x5340b1*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44940])( /*0x5340b7*/
        *(_DWORD *)&stru_87C374[44940],
        1);
    *(_DWORD *)&stru_87C374[44940] = 0; /*0x5340b9*/
  }
  bool v7 = stru_830620[66636] == 0; /*0x5340d2*/
  var1 = HouseClass_Player[44618] == 0; /*0x5340d7*/
  if ( a5 && *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5340e8*/
  {
    char * v8 = (char *)__2_YAPAXI_Z(0x24u); /*0x5340ec*/
    if ( v8 ) /*0x5340f6*/
      v9 = (DSurface *)DSurface::Construct(v8, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), 0, 0); /*0x534104*/
    DSurface *v9 = 0; /*0x53410b*/
    *(_DWORD *)&stru_87C374[44952] = v9; /*0x53410d*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v9->field_0 + 24))(v9, 0); /*0x534117*/
    Debug::Log(); /*0x53413e*/
  }
  if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 ) /*0x53414e*/
  {
    char * v10 = (char *)__2_YAPAXI_Z(0x24u); /*0x534152*/
    if ( v10 ) /*0x53415c*/
      v12 = (DSurface *)DSurface::Construct( /*0x534172*/
                          v10,
                          *(IUnknown **)&aP1->__pad_0[8],
                          *(DSurface **)&aP1->__pad_0[12],
                          (ObjectClass *)v7,
                          1);
    else
      v12 = 0; /*0x534179*/
    *(_DWORD *)&stru_87C374[44968] = v12; /*0x53417b*/
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
    *(_DWORD *)&stru_87C374[44936] = v15; /*0x5341f1*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v15->field_0 + 24))(v15, 0); /*0x5341fc*/
    Debug::Log(); /*0x534223*/
  }
  if ( *(_DWORD *)&stru_87C374[44968] /*0x53424c*/
    && *(_DWORD *)&stru_87C374[44936]
    && *(_BYTE *)(*(_DWORD *)&stru_87C374[44968] + 25) != *(_BYTE *)(*(_DWORD *)&stru_87C374[44936]
                                                                              + 25) )
  {
    if ( *(_DWORD *)&stru_87C374[44968] ) /*0x534256*/
      (***(void (__stdcall ****)(int))&stru_87C374[44968])(1); /*0x53425c*/
    if ( *(_DWORD *)&stru_87C374[44936] ) /*0x534266*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44936])( /*0x53426c*/
        *(_DWORD *)&stru_87C374[44936],
        1);
    Debug::Log(); /*0x534273*/
    char * v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x53427a*/
    if ( v14 ) /*0x534286*/
      *(_DWORD *)&stru_87C374[44968] = DSurface::Construct( /*0x53429b*/
                                                    v14,
                                                    *(IUnknown **)&aP1->__pad_0[8],
                                                    *(DSurface **)&aP1->__pad_0[12],
                                                    (ObjectClass *)1,
                                                    1);
    else
      *(_DWORD *)&stru_87C374[44968] = 0; /*0x5342a2*/
    eax50 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342aa*/
    if ( eax50 ) /*0x5342b4*/
      *(_DWORD *)&stru_87C374[44936] = DSurface::Construct( /*0x5342c9*/
                                                    eax50,
                                                    *(IUnknown **)&aP2->__pad_0[8],
                                                    *(DSurface **)&aP2->__pad_0[12],
                                                    (ObjectClass *)1,
                                                    1);
    else
      *(_DWORD *)&stru_87C374[44936] = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    char * v16 = (char *)__2_YAPAXI_Z(0x24u); /*0x5342eb*/
    if ( v16 ) /*0x5342f5*/
      v20 = (DSurface *)DSurface::Construct( /*0x53430f*/
                          v16,
                          *(IUnknown **)(a4 + 8),
                          *(DSurface **)(a4 + 12),
                          (ObjectClass *)var1,
                          0);
    else
      v20 = 0; /*0x534316*/
    *(_DWORD *)&stru_87C374[44940] = v20; /*0x534318*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v20->field_0 + 24))(v20, 0); /*0x534323*/
    Debug::Log(); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( *(int *)(a1 + 8) <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( *(int *)(a1 + 12) > 0 ) /*0x53436a*/
    {
      char * v18 = (char *)__2_YAPAXI_Z(0x24u); /*0x53436e*/
      if ( v18 ) /*0x534378*/
        v23 = (DSurface *)DSurface::Construct(v18, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), 0, 0); /*0x534388*/
      DSurface *v23 = 0; /*0x53438f*/
      *(_DWORD *)&stru_87C374[44952] = v23; /*0x534391*/
      (*(void (__thiscall **)(DSurface *, _DWORD))(v23->field_0 + 24))(v23, 0); /*0x53439c*/
      Debug::Log(); /*0x5343c3*/
    }
  }
  if ( *(int *)(a1 + 8) > 0 && *(int *)(a1 + 12) > 0 ) /*0x5343d7*/
  {
    eax68 = (char *)__2_YAPAXI_Z(0x24u); /*0x5343db*/
    if ( eax68 ) /*0x5343e5*/
      v26 = (DSurface *)DSurface::Construct(eax68, *(IUnknown **)(a1 + 8), *(DSurface **)(a1 + 12), (ObjectClass *)1, 0); /*0x5343f5*/
    DSurface *v26 = 0; /*0x5343fc*/
    *(_DWORD *)&stru_87C374[44956] = v26; /*0x5343fe*/
    (*(void (__thiscall **)(DSurface *, _DWORD))(v26->field_0 + 24))(v26, 0); /*0x534409*/
    Debug::Log(); /*0x534430*/
  }
  return 1; /*0x534438*/
}
}
} // namespace gamemd

// 0x5349C0
namespace gamemd {
void TheaterClass_LoadMIX(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  int j; // esi
  int k; // ebx
  __int16 v29; // [esp+14h] [ebp-5Ch]
  __int16 v30; // [esp+14h] [ebp-5Ch]
  __int16 v31; // [esp+14h] [ebp-5Ch]
  CHAR Source[16]; // [esp+20h] [ebp-50h] BYREF
  CHAR v35[16]; // [esp+30h] [ebp-40h] BYREF
  CHAR v36[16]; // [esp+40h] [ebp-30h] BYREF
  CHAR v37[16]; // [esp+50h] [ebp-20h] BYREF
  CHAR v38[16]; // [esp+60h] [ebp-10h] BYREF

  int v2 = 112 * a1; /*0x5349e0*/
  const char * v3 = &aTemperat[112 * a1]; /*0x5349e3*/
  wsprintfA(Source, "%s.MIX", v3); /*0x5349f0*/
  wsprintfA(v38, "%s.MIX", &aIsotemp[v2]); /*0x534a03*/
  const char * v32 = (char *)&off_7E1BC6 + v2; /*0x534a0b*/
  wsprintfA(v36, "%s.MIX", (const char *)&off_7E1BC6 + v2); /*0x534a1a*/
  wsprintfA(v37, "%sMD.MIX", &aIsotem[v2]); /*0x534a2d*/
  wsprintfA(v35, "%sMD.MIX", v3); /*0x534a3a*/
  Debug::Log(); /*0x534a48*/
  *((_DWORD *)g_ScenarioClass_Instance + 1174) = a1; /*0x534a5d*/
  Multiplayer::ShowProgress(g_GameMode_Current, 8); /*0x534a63*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( DataGlobal_884E0C ) /*0x534a8a*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E0C)(DataGlobal_884E0C, 1); /*0x534a90*/
    DataGlobal_884E0C = 0; /*0x534a97*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 ) /*0x534aa4*/
    {
      _DWORD * v4 = __2_YAPAXI_Z(0x28u); /*0x534aa8*/
      if ( v4 ) /*0x534ab2*/
        _DWORD * v5 = MixFileClass::FromFile(v4, v35, (int)&DataGlobal_886980); /*0x534ac0*/
      else
        v5 = 0; /*0x534ac7*/
      DataGlobal_884E0C = (int)v5; /*0x534acc*/
      ReturnTrue(0); /*0x534ad1*/
    }
    if ( DataGlobal_884E08 ) /*0x534ade*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E08)(DataGlobal_884E08, 1); /*0x534ae4*/
    _DWORD * v6 = __2_YAPAXI_Z(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      DataGlobal_884E08 = (int)MixFileClass::FromFile(v6, Source, (int)&DataGlobal_886980); /*0x534b05*/
    else
      DataGlobal_884E08 = 0; /*0x534b0c*/
    if ( DataGlobal_884E10 ) /*0x534b1a*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E10)(DataGlobal_884E10, 1); /*0x534b20*/
    _DWORD * v7 = __2_YAPAXI_Z(0x28u); /*0x534b24*/
    if ( v7 ) /*0x534b2e*/
      _DWORD * v8 = MixFileClass::FromFile(v7, v36, (int)&DataGlobal_886980); /*0x534b3c*/
    else
      v8 = 0; /*0x534b43*/
    DataGlobal_884E10 = (int)v8; /*0x534b48*/
    ReturnTrue(0); /*0x534b4d*/
    ReturnTrue(0); /*0x534b59*/
    Multiplayer::ShowProgress(g_GameMode_Current, 6); /*0x534b65*/
    if ( DataGlobal_884E20 ) /*0x534b72*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E20)(DataGlobal_884E20, 1); /*0x534b78*/
    _DWORD * v9 = __2_YAPAXI_Z(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      DataGlobal_884E20 = (int)MixFileClass::FromFile(v9, v37, (int)&DataGlobal_886980); /*0x534b99*/
    else
      DataGlobal_884E20 = 0; /*0x534ba0*/
    if ( DataGlobal_884E1C ) /*0x534bae*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E1C)(DataGlobal_884E1C, 1); /*0x534bb4*/
    _DWORD * v10 = __2_YAPAXI_Z(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      DataGlobal_884E1C = (int)MixFileClass::FromFile(v10, v38, (int)&DataGlobal_886980); /*0x534bd5*/
    else
      DataGlobal_884E1C = 0; /*0x534bdc*/
    Multiplayer::ShowProgress(g_GameMode_Current, 12); /*0x534be9*/
    wsprintfA(Source, "%s.PAL", v3); /*0x534bf9*/
    _BYTE * v11 = (_BYTE *)SearchMIXFile(Source, 0); /*0x534c04*/
    if ( v11 ) /*0x534c0b*/
    {
      int v12 = 0; /*0x534c0d*/
      do /*0x534c56*/
      {
        char v13 = v11[1]; /*0x534c11*/
        char v14 = 4 * *v11; /*0x534c14*/
        _BYTE * v15 = v11 + 1; /*0x534c17*/
        LOBYTE(v29) = v14; /*0x534c18*/
        char v16 = 4 * v15[1]; /*0x534c23*/
        v11 = v15 + 2; /*0x534c28*/
        char * v17 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (v12 % 256); /*0x534c42*/
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
        char v19 = 4 * i; /*0x534c6d*/
        char * v20 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (i % 256); /*0x534c85*/
        *(_WORD *)v20 = v30; /*0x534c8d*/
        v20[2] = v19; /*0x534c95*/
      }
    }
    Block::Copy(&DataGlobal_885A80, &FileSystem_TEMPERAT_PAL); /*0x534ca4*/
    wsprintfA(Source, "UNIT%s.PAL", v32); /*0x534cb8*/
    const void * v21 = (const void *)SearchMIXFile(Source, 0); /*0x534cc8*/
    Event::Dispatch(); /*0x534cca*/
    if ( v21 ) /*0x534cd1*/
      Block::Copy(DataGlobal_886380, v21); /*0x534cd9*/
    for ( j = 0; j < 256; ++j ) /*0x534cde*/
    {
      char * v23 = &DataGlobal_886380[3 * (j % 256)]; /*0x534cf7*/
      LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      char v24 = DataGlobal_886382[3 * (j % 256)]; /*0x534d0c*/
      HIBYTE(v31) = 4 * DataGlobal_886381[3 * (j % 256)]; /*0x534d16*/
      *(_WORD *)v23 = v31; /*0x534d23*/
      v23[2] = 4 * v24; /*0x534d2c*/
    }
    int v25 = 0; /*0x534d43*/
    int v26 = 12; /*0x534d4c*/
    for ( k = g_AnimClass_SaveState / 13; v25 < g_AnimClass_SaveState; ++v25 ) /*0x534d53*/
    {
      LoadTheaterClassMIX_Load(DataGlobal_886380, &FileSystem_TEMPERAT_PAL, 1000, 1000, 1000); /*0x534d77*/
      int v28 = v25 / k + 12; /*0x534d87*/
      if ( v28 >= 25 ) /*0x534d89*/
        v28 = 25; /*0x534d8b*/
      if ( v28 != v26 ) /*0x534d92*/
      {
        Multiplayer::ShowProgress(g_GameMode_Current, v28); /*0x534d9a*/
        v26 = v28; /*0x534d9f*/
      }
      Event::Dispatch(); /*0x534da1*/
    }
    FileSystem::InitExtensionState(a1); /*0x534db4*/
    LoadTheaterClassMIX_Load_717840(); /*0x534db9*/
    Multiplayer::ShowProgress(g_GameMode_Current, 25); /*0x534dc5*/
  }
}
}
} // namespace gamemd

// 0x5353D0
namespace gamemd {
void Radar_FindClosestEnemy(short * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = 0; /*0x5353e7*/
  int v18 = 0; /*0x5353f1*/
  int v16 = -1; /*0x5353f5*/
  int v17 = 0x7FFFFFFF; /*0x5353fd*/
  if ( (int)g_SelectionManager > 0 ) /*0x535405*/
  {
  int v15; // [esp+28h] [ebp-40h]
  int v5; // eax
  int v4; // esi
    int v3 = 0; /*0x53540b*/
    int v21 = 0; /*0x53540f*/
    while ( 1 ) /*0x53541e*/
    {
      v15 = 0; /*0x53541e*/
      v4 = *((_DWORD *)g_ObjectClass_CurrentCount + v3); /*0x535422*/
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
  int v12; // edx
  int v11; // ecx
  int v10; // eax
  char v22[12]; // [esp+50h] [ebp-18h] BYREF
        int * v6 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 72))(v4, v22); /*0x5354dd*/
        int v7 = *v6; /*0x5354e0*/
        int v8 = v6[1]; /*0x5354e2*/
        int v9 = v6[2]; /*0x5354e5*/
        if ( a1 ) /*0x5354ee*/
        {
          v10 = (*a1 << 8) + 128; /*0x535501*/
          v11 = (a1[1] << 8) + 128; /*0x535506*/
          v12 = 0; /*0x53550c*/
        }
        else
        {
  char v23[12]; // [esp+5Ch] [ebp-Ch] BYREF
          int * v13 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 72))(a2, v23); /*0x53551e*/
          v10 = *v13; /*0x535520*/
          v11 = v13[1]; /*0x535522*/
          v12 = v13[2]; /*0x535525*/
        }
  double v14; // st7
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
      if ( v3 >= (int)g_SelectionManager ) /*0x5355a1*/
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
}
} // namespace gamemd

// 0x538D40
namespace gamemd {
void sub_538D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 *v0; // eax
  unsigned __int8 *v1; // edi
  unsigned __int8 *v3; // eax
  unsigned __int8 *v6; // edi
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v15; // ecx
  int result; // eax
  unsigned __int8 *v24; // [esp+24h] [ebp-18h]
  v0 = (unsigned __int8 *)DataGlobal_A8F918; /*0x538d43*/
  char * v23 = DataGlobal_A8F91C; /*0x538d4c*/
  while ( 1 ) /*0x538d60*/
  {
  char *v17; // ecx
    v1 = (unsigned __int8 *)DataGlobal_A8F918; /*0x538d60*/
    int v2 = *v0; /*0x538d66*/
    v3 = v0 + 1; /*0x538d68*/
    int v25 = v2; /*0x538d69*/
    int v4 = *v3++; /*0x538d6f*/
    int v26 = v4; /*0x538d72*/
    int v27 = *v3; /*0x538d7b*/
    v24 = v3 + 1; /*0x538d7f*/
    int v22 = 0; /*0x538d83*/
    do /*0x538e42*/
    {
      int v5 = *v1; /*0x538d91*/
      v6 = v1 + 1; /*0x538d93*/
      int v7 = v5; /*0x538d94*/
      int v8 = *v6++; /*0x538d98*/
      int v9 = v27 + *v6; /*0x538dab*/
      v1 = v6 + 1; /*0x538dad*/
      int v10 = (v25 + v7) >> 1; /*0x538dae*/
      int v11 = (v26 + v8) >> 1; /*0x538db0*/
      int v29 = v9 >> 1; /*0x538db4*/
      v12 = (unsigned __int8 *)DataGlobal_A8F918; /*0x538db8*/
      int v28 = v11; /*0x538dbe*/
      char v21 = 0; /*0x538dc2*/
      int v20 = 500000; /*0x538dc6*/
      int v19 = 0; /*0x538dce*/
      while ( 1 ) /*0x538de1*/
      {
        int v13 = *v12 - v10; /*0x538de1*/
        int v14 = v12[1] - v11; /*0x538dea*/
        v15 = v12 + 2; /*0x538dec*/
        int v16 = v13 * v13 + v14 * v14 + (*v15 - v29) * (*v15 - v29); /*0x538e06*/
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
}
} // namespace gamemd

// 0x538E70
namespace gamemd {
void E4Recv_538E70::sub_538E70(double a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v6; // cl
  __int16 result; // ax
  __int16 v12; // [esp+14h] [ebp-10h] BYREF
  unsigned __int8 v13; // [esp+16h] [ebp-Eh]

  int v3 = 0; /*0x538e78*/
  do
  {
    unsigned int v4 = (unsigned int)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
    int v5 = ComputeColorSaturation(v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(_BYTE *)(v5 + 2); /*0x538ea1*/
    v12 = *(_WORD *)v5; /*0x538ea4*/
  int v15; // [esp+1Eh] [ebp-6h]
    LOBYTE(v15) = v6; /*0x538ea9*/
    v13 = v6; /*0x538eb7*/
    int v14 = v6; /*0x538ebb*/
    int v7 = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    v13 = v7 <= 0 ? 0 : v7;
  _BYTE v11[4]; // [esp+10h] [ebp-14h] BYREF
    int v8 = Color::ConvertToRGB((unsigned __int8 *)&v12, (int)v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(_WORD *)v8; /*0x538efb*/
    LOBYTE(v8) = *(_BYTE *)(v8 + 2); /*0x538efe*/
    *(_WORD *)v4 = result; /*0x538f01*/
    *(_BYTE *)(v4 + 2) = v8; /*0x538f04*/
  }
  while ( v3 < 256 );
  return result; /*0x538f0d*/
}
}
} // namespace gamemd

// 0x538F20
namespace gamemd {
char sub_538F20(int a1, int a2, char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  int v19[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v20[12]; // [esp+70h] [ebp-14h] BYREF
  int v21; // [esp+7Ch] [ebp-8h]

  char v16 = 0; /*0x538f3d*/
  char v17 = 0; /*0x538f42*/
  if ( unk_A9F91C ) /*0x538f4c*/
  {
    if ( Source ) /*0x538f50*/
    {
      CCFileClass::Construct(v19, Source); /*0x538f57*/
      if ( CCFileClass::Open(v19, 0) ) /*0x538f62*/
      {
        FileClass::Load(v19, 1); /*0x538f71*/
        CCFileClass::Read(v19, DataGlobal_A8F91C, 0x10000); /*0x538f84*/
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
      FileClass::Write(v19, DataGlobal_A8F91C, 0x10000u); /*0x539003*/
      CCFileClass::Reset(v19); /*0x53900c*/
    }
    v19[0] = (int)&vt_CCFileClass; /*0x539015*/
    v21 = 0; /*0x53901d*/
    Vector::Clear((int)v20); /*0x539025*/
    v19[0] = (int)&off_7E1668; /*0x53902e*/
    BufferIOFileClass::Dtor(v19); /*0x539032*/
  }
  DDraw::WaitForIdle(); /*0x539037*/
  int * v5 = (int *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, 0, 0); /*0x539049*/
  if ( v5 ) /*0x53904d*/
    v16 = 1; /*0x53904f*/
  char * v6 = (char *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x539062*/
  if ( v6 ) /*0x539066*/
  {
    v17 = 1; /*0x53906c*/
    if ( !v16 ) /*0x539073*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x5390fa*/
    int v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x539080*/
    int v8 = 2 * (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x53908d*/
    if ( unk_A9F920 ) /*0x539092*/
    {
      if ( unk_A9F920 == 1 ) /*0x539095*/
      {
        unsigned int v14 = v8; /*0x5390b2*/
        int v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390b6*/
        sub_7E00A6(v5, v6, v10, v7, v14); /*0x5390bf*/
      }
      else if ( unk_A9F920 == 2 ) /*0x539098*/
      {
        unsigned int v13 = v8; /*0x53909a*/
        int v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390a0*/
        sub_7E01FB(v5, v6, v9, v7, v13); /*0x5390a9*/
      }
    }
    else
    {
      int v15 = v8; /*0x5390c6*/
      int v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x5390cc*/
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
}
} // namespace gamemd

// 0x539560
namespace gamemd {
int sub_539560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unk_A9F9CC = unk_A9F9F8; /*0x539565*/
  return unk_A9F9F8; /*0x53956a*/
}
}
} // namespace gamemd

// 0x539570
namespace gamemd {
int sub_539570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  word_A9FA48 = unk_A9F9F8; /*0x539575*/
  return unk_A9F9F8; /*0x53957a*/
}
}
} // namespace gamemd

// 0x53A6C0
namespace gamemd {
void SuperWeapon_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  int j; // edi
  int k; // esi
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
    if ( unk_827FCC != -1 && unk_827FCC + unk_827FC8 < (int)g_CurrentFrame ) /*0x53a6ea*/
    {
      unk_A9FABC = 2; /*0x53a6ec*/
      unk_827FCC = 15; /*0x53a6f6*/
      unk_827FC8 = (int)g_CurrentFrame; /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x53a711*/
    }
  }
  else if ( unk_A9FABC == 2 && unk_827FCC != -1 && unk_827FCC + unk_827FC8 < (int)g_CurrentFrame ) /*0x53a736*/
  {
    unk_A9FABC = 0; /*0x53a738*/
  }
  UpdatePsyDom(); /*0x53a742*/
  UpdateChronosphereEffect(); /*0x53a747*/
  if ( unk_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = unk_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      _DWORD * v1 = (_DWORD *)*((_DWORD *)unk_A9FA1C + i); /*0x53a760*/
      int v2 = v1[43]; /*0x53a765*/
      int v3 = (*(int (__thiscall **)(_DWORD *))(*v1 + 136))(v1); /*0x53a76b*/
      if ( v2 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3) + 6) / 2 && i < unk_A9FA28 ) /*0x53a790*/
      {
        int v4 = i; /*0x53a793*/
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
    _DWORD * v6 = (_DWORD *)*((_DWORD *)unk_A9FA64 + j); /*0x53a7d0*/
    int v7 = v6[43]; /*0x53a7d7*/
    int v8 = (*(int (__thiscall **)(_DWORD *))(*v6 + 136))(v6); /*0x53a7dd*/
    if ( v7 > *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8) + 6) / 2 ) /*0x53a7f8*/
    {
      _DWORD * v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 72))(v6, v36); /*0x53a803*/
      LightningStorm::Strike2(*v9, v9[1], v9[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        int v10 = j; /*0x53a82b*/
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
      _DWORD * v12 = (_DWORD *)*((_DWORD *)unk_A9F9D4 + k); /*0x53a86e*/
      int v13 = v12[43]; /*0x53a873*/
      int v14 = (*(int (__thiscall **)(_DWORD *))(*v12 + 136))(v12); /*0x53a879*/
      if ( v13 >= *(__int16 *)((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 156))(v14) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        int v15 = k; /*0x53a89d*/
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
          LOBYTE(v16) = g_RulesClass_Instance[1].?; /*0x53aae9*/
          if ( (_BYTE)v16 ) /*0x53aaf1*/
          {
            v30 = 3; /*0x53aaf8*/
            if ( HouseClass_Player ) /*0x53aaff*/
              v30 = *((_DWORD *)HouseClass_Player + 22549); /*0x53ab01*/
            VoxClass::FindAndPlay(aEvaLightningst, -1); /*0x53ab11*/
            String = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            LOBYTE(v16) = MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, String, v30, 70, 150, 0); /*0x53ab40*/
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
    v17 = (int)g_CurrentFrame; /*0x53a91e*/
    if ( unk_827FC4 == -1 || unk_827FC4 + unk_827FC0 >= (int)g_CurrentFrame ) /*0x53a933*/
    {
      v18 = g_RulesClass_Instance; /*0x53a944*/
      if ( !((int)g_CurrentFrame % g_RulesClass_Instance[1].?) ) /*0x53a94d*/
      {
        LightningStorm::Strike(unk_A9F9CC); /*0x53a95e*/
        v17 = (int)g_CurrentFrame; /*0x53a963*/
        v18 = g_RulesClass_Instance; /*0x53a969*/
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
          v21 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -v20, v20); /*0x53a9ab*/
          LOWORD(v34) = v21 + v34; /*0x53a9b6*/
          v22 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -v20, v20); /*0x53a9c3*/
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
              if ( v26 + v27 < SHIDWORD(g_RulesClass_Instance[1].?) ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v23 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v33 = 1; /*0x53aa48*/
          }
LABEL_52:
          if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (__int16 *)&v34) && !v33 ) /*0x53aa66*/
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
}
} // namespace gamemd

// 0x53AF40
namespace gamemd {
void PsyDom::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  switch ( unk_A9FAC0 ) /*0x53af50*/
  {
    case 1: /*0x53af50*/
      unk_A9FAC0 = 2; /*0x53af57*/
      break; /*0x53af63*/
    case 2: /*0x53af50*/
      int v2 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53af6f*/
      if ( (double)g_RulesClass_Instance->?[2] * 0.01 <= (double)v2 /*0x53afaa*/
                                                  / (double)*(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(unk_A9FAC4 + 200) + 156))(*(_DWORD *)(unk_A9FAC4 + 200))
                                                                       + 6) )
      {
        unk_A9FAC0 = 3; /*0x53afb0*/
        PsyDom::Fire(); /*0x53afba*/
      }
      break; /*0x53afc1*/
    case 3: /*0x53af50*/
      int v0 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53afcd*/
      if ( *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(unk_A9FAC4 + 200) + 156))(*(_DWORD *)(unk_A9FAC4 + 200)) /*0x53afe4*/
                      + 6)
         - v0 <= 10 )
        unk_A9FAC0 = 4; /*0x53afe6*/
      break; /*0x53aff2*/
    case 4: /*0x53af50*/
      int v1 = *(_DWORD *)(unk_A9FAC4 + 172); /*0x53affe*/
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
      if ( *((_DWORD *)g_ScenarioClass_Instance + 3404) == *((_DWORD *)g_ScenarioClass_Instance + 3403) ) /*0x53b052*/
        unk_A9FAC0 = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }
}
}
} // namespace gamemd

// 0x53B460
namespace gamemd {
void sub_53B460(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a1 > 0 ) /*0x53b465*/
  {
  char *v4; // eax
    if ( unk_A9FA9C ) /*0x53b473*/
    {
      (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53b479*/
      unk_A9FA9C = 0; /*0x53b47b*/
    }
    char * v2 = (char *)__2_YAPAXI_Z(0x24u); /*0x53b48d*/
    if ( v2 ) /*0x53b494*/
    {
      int v5 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 128))(DSurface_Composite); /*0x53b4ae*/
      int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 124))(DSurface_Composite); /*0x53b4b1*/
      v4 = DSurface::Construct(v2, v3, v5, 1, 0); /*0x53b4b7*/
    }
    else
    {
      v4 = 0; /*0x53b4be*/
    }
    unk_A9FA9C = (int)v4; /*0x53b4c8*/
    (*(void (__thiscall **)(char *, int, _DWORD, int))(*(_DWORD *)v4 + 4))(v4, DSurface_Composite, 0, 1); /*0x53b4d4*/
    unk_A9FAA0 = 0.0; /*0x53b4d7*/
    unk_A9FAA4 = 0.0; /*0x53b4e1*/
    unk_A9FA98 = a1; /*0x53b4eb*/
    unk_A9FAA8 = a1; /*0x53b4f1*/
    unk_A9FAB0 = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(unk_A9F9B8); /*0x53b512*/
    PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, (int)unk_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    unk_A9FAD1 = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x53b549*/
    Scenario::ClearScreen(); /*0x53b54f*/
    Map_Process_753570(); /*0x53b554*/
  }
}
}
} // namespace gamemd

// 0x53B560
namespace gamemd {
void UpdateChronosphereEffect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x53b5fb*/
        DSurface_Composite,
        &DSurface_ViewBounds,
        &DSurface_ViewBounds,
        (255 >> g_BitShift_Green_0 << g_DDraw_BlueMask)
      | (255 >> g_BitMask_Blue << g_BitMask_Green)
      | (255 >> g_BitShift_Blue << g_BitShift_Blue));
      if ( --unk_A9FA98 == 1 ) /*0x53b60e*/
        SetScenarioClassTimer(0); /*0x53b612*/
      if ( !unk_A9FA98 ) /*0x53b61e*/
      {
        MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x53b62b*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_A9FA9C + 24))(unk_A9FA9C, 0); /*0x53b63a*/
        unk_A9FAAC = DSurface_Composite; /*0x53b649*/
        DSurface_Composite = unk_A9FA9C; /*0x53b654*/
        unk_A9FAB0 = 0; /*0x53b65a*/
        unk_A9FA94 = 1; /*0x53b664*/
        TacticalMap::Redraw(&DataGlobal_87F7E8); /*0x53b66b*/
        unk_A9FA98 = unk_A9FAA8; /*0x53b67b*/
        unk_A9FA94 = 0; /*0x53b683*/
        DSurface_Composite = unk_A9FAAC; /*0x53b68a*/
        unk_A9FAB0 = 3; /*0x53b68f*/
        SetVocClassEnabled(1); /*0x53b699*/
        Mixer::ReleaseChannel((int **)&unk_A9F9B8); /*0x53b6a3*/
        PlayVocClass(g_RulesClass_Instance->?[0], 0x2000, 1.0, (int)&unk_A9F9B8); /*0x53b6c2*/
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
        (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)DSurface_Composite + 4))( /*0x53b743*/
          DSurface_Composite,
          unk_A9FA9C,
          0,
          1);
        if ( unk_A9FA9C ) /*0x53b74e*/
          (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53b754*/
        unk_A9FA9C = 0; /*0x53b75d*/
        MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x53b767*/
      }
      break; /*0x53b767*/
    default:
      return;
  }
}
}
} // namespace gamemd

// 0x53BBA0
namespace gamemd {
int RenderChronosphereScreenEffect(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 124))(unk_A9FA9C); /*0x53bbbd*/
  int v54 = v1; /*0x53bbbf*/
  int v2 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 128))(unk_A9FA9C) - 32; /*0x53bbda*/
  int v48 = v2; /*0x53bbdc*/
  int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 112))(unk_A9FA9C); /*0x53bbe8*/
  int v4 = (*(int (__thiscall **)(int))(*(_DWORD *)unk_A9FA9C + 116))(unk_A9FA9C); /*0x53bbec*/
  int v50 = v4 / v3; /*0x53bbf8*/
  int v47; // [esp+38h] [ebp-30h]
  v47 = ((*(int (__fastcall **)(int, int))(*(_DWORD *)DSurface_Composite + 116))(DSurface_Composite, v4 % v3) - v1 * v3) /*0x53bc15*/
      / v3;
  int v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Composite + 92))(DSurface_Composite, 0, 0); /*0x53bc24*/
  int v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)unk_A9FA9C + 92))(unk_A9FA9C, 0, 0); /*0x53bc2f*/
  int v49 = v6; /*0x53bc34*/
  if ( v5 && v6 ) /*0x53bc3f*/
  {
  bool v18; // zf
    double v7 = 0.0; /*0x53bc45*/
    unk_A9FAA4 = 0.0; /*0x53bc54*/
    double v8 = 0.0; /*0x53bc5a*/
    unk_A9FAA0 = 0.0; /*0x53bc62*/
    if ( a1 ) /*0x53bc68*/
      int v9 = unk_A9FA98; /*0x53bc75*/
    else
      v9 = unk_A9FAA8 - unk_A9FA98; /*0x53bc71*/
    if ( v9 > 0 ) /*0x53bc7d*/
    {
      int v10 = v9; /*0x53bc83*/
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
    int v51 = 255 * v9 / unk_A9FAA8; /*0x53bcaa*/
    int v11 = DDraw::GetStatus() - 1; /*0x53bcb2*/
    if ( v11 ) /*0x53bcb3*/
    {
      if ( v11 == 1 ) /*0x53bcba*/
      {
        Render_Render(v51, v1, v2, v47, v50); /*0x53bea4*/
      }
      else
      {
        _WORD * v12 = (_WORD *)v5; /*0x53bcc2*/
        _WORD * v52 = (_WORD *)v5; /*0x53bcc7*/
        float v57 = (float)(v1 / 2); /*0x53bcd5*/
        double v13 = (double)(v2 / 2); /*0x53bcdf*/
        float v55 = v13; /*0x53bce4*/
        float v31 = v13 * v55 + v57 * v57; /*0x53bcf2*/
        float v59 = -v55; /*0x53bcfa*/
        if ( v2 > 0 ) /*0x53bcfd*/
        {
          int v37 = v2; /*0x53bd0b*/
          do /*0x53be86*/
          {
            float v35 = -v57; /*0x53bd08*/
            float v61 = v35; /*0x53bd13*/
            if ( v1 > 0 ) /*0x53bd16*/
            {
              int v40 = v1; /*0x53bd25*/
              do /*0x53be64*/
              {
                float v34 = v59 * v59; /*0x53bd2e*/
                double v14 = (1.0 - (v61 * v61 + v34) / v31) * 5.0; /*0x53bd43*/
                float v42 = v14 * v14 * unk_A9FAA0; /*0x53bd53*/
                ComputeChronosphereDistortion(v42); /*0x53bd5c*/
                float v45 = v14; /*0x53bd61*/
                ComputeDistortionVariant(v42); /*0x53bd65*/
                float v43 = v14; /*0x53bd6a*/
                float v28 = v45 * v61 + v43 * v59 + v57; /*0x53bd7e*/
                int v15 = (int)v28; /*0x53bd93*/
                float v29 = v45 * v59 - v43 * v61 + v55; /*0x53bd9b*/
                int v16 = (int)v29; /*0x53bda4*/
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
                unsigned int v17 = v49 + 2 * (v15 + v50 * v16); /*0x53bdeb*/
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
      _WORD * v19 = (_WORD *)v5; /*0x53beb0*/
      _WORD * v53 = (_WORD *)v5; /*0x53beb5*/
      float v56 = (float)(v1 / 2); /*0x53bec3*/
      double v20 = (double)(v2 / 2); /*0x53becd*/
      float v58 = v20; /*0x53bed2*/
      float v30 = v20 * v58 + v56 * v56; /*0x53bee0*/
      float v62 = -v58; /*0x53bee8*/
      if ( v2 > 0 ) /*0x53beeb*/
      {
        int v36 = v2; /*0x53bef9*/
        do /*0x53c070*/
        {
          float v26 = -v56; /*0x53bef6*/
          float v60 = v26; /*0x53bf01*/
          if ( v1 > 0 ) /*0x53bf04*/
          {
            int v46 = v1; /*0x53bf13*/
            do /*0x53c04e*/
            {
              float v27 = v62 * v62; /*0x53bf1c*/
              double v21 = (1.0 - (v60 * v60 + v27) / v30) * 5.0; /*0x53bf31*/
              float v38 = v21 * v21 * unk_A9FAA0; /*0x53bf41*/
              ComputeChronosphereDistortion(v38); /*0x53bf4a*/
              float v41 = v21; /*0x53bf52*/
              ComputeDistortionVariant(v38); /*0x53bf56*/
              float v39 = v21; /*0x53bf5b*/
              float v32 = v41 * v60 + v39 * v62 + v56; /*0x53bf6f*/
              int v22 = (int)v32; /*0x53bf84*/
              float v33 = v41 * v62 - v39 * v60 + v58; /*0x53bf8c*/
              int v44 = (int)v33; /*0x53bf92*/
              int v23 = v44; /*0x53bf95*/
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
              unsigned int v24 = v49 + 2 * (v22 + v50 * v23); /*0x53bfd3*/
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
  return (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 96))(DSurface_Composite); /*0x53c08c*/
}
}
} // namespace gamemd

// 0x53D330
namespace gamemd {
void GenerateLightningStormGlow()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  int *i; // [esp+28h] [ebp-24h]

  result = unk_AA014C; /*0x53d339*/
  if ( !unk_AA014C ) /*0x53d344*/
  {
    int * v1 = dword_A9FFC8; /*0x53d361*/
    double v16 = 0.0; /*0x53d366*/
    int v13 = 0; /*0x53d36e*/
    double v17 = 0.0 - 57.0; /*0x53d376*/
    for ( i = dword_A9FFC8; ; v1 = i ) /*0x53d37a*/
    {
      _DWORD * v2 = __2_YAPAXI_Z(0x20u); /*0x53d386*/
      _DWORD * v3 = v2; /*0x53d38b*/
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
      int v4 = 127; /*0x53d3e7*/
      int v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)*v1 + 92))(*v1, 0, 0) + 65792; /*0x53d3ec*/
      do /*0x53d4c5*/
      {
        int v6 = 255; /*0x53d3f4*/
        int v7 = 4 * v4 * v4; /*0x53d3fc*/
        do /*0x53d4be*/
        {
          double v15 = Math::Sqrt((double)(v7 + v6 * v6)); /*0x53d41d*/
          if ( v15 >= v17 && v15 <= v16 ) /*0x53d440*/
          {
            double v8 = Math::SinCos((v15 - (double)v13 * unk_A9FFA8 + 38.0) * 0.11); /*0x53d464*/
            int v9 = Math::RoundToInt((v8 * 3.5 + 3.0) / (v15 / 51.0 + 1.0) + 0.5); /*0x53d490*/
            char v10 = GenerateLightningStormGlow_Helper(0, v9); /*0x53d497*/
            v7 = 4 * v4 * v4; /*0x53d4a1*/
            *(_BYTE *)(v6 + (v4 << 9) + v5) = v10; /*0x53d4a8*/
            *(_BYTE *)((v4 << 9) - v6 + v5) = v10; /*0x53d4af*/
            int v11 = v5 - (v4 << 9); /*0x53d4b4*/
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
      bool v12 = (int)(i + 1) < (int)&unk_AA0108; /*0x53d52b*/
      ++v13; /*0x53d530*/
      ++i; /*0x53d534*/
      if ( !v12 ) /*0x53d538*/
        break; /*0x53d538*/
    }
    unk_AA014C = 1; /*0x53d53e*/
  }
  return result; /*0x53d545*/
}
}
} // namespace gamemd

// 0x53DE00
namespace gamemd {
int InitializeAudioStreaming(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HANDLE Thread; // eax
  DWORD LastError; // eax
  HWND *v9; // eax
  HWND *v11; // esi
  CHAR Buffer[1024]; // [esp+14h] [ebp-400h] BYREF

  int v12 = a2; /*0x53de19*/
  InitializeCriticalSection(&unk_AA0418); /*0x53de1d*/
  InitializeCriticalSection(&unk_AA0400); /*0x53de24*/
  unk_AA0454 = 1; /*0x53de28*/
  if ( a1 <= 0 ) /*0x53de34*/
    goto LABEL_8; /*0x53de34*/
  if ( a2 < 10240 ) /*0x53de40*/
    v12 = 10240; /*0x53de42*/
  void * v4 = __2_YAPAXI_Z(4 * a1); /*0x53de57*/
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
  int v8 = AcquireAudioStreamBuffer((_DWORD *)unk_AA045C, 1); /*0x53dfda*/
  unk_AA0464 = v8; /*0x53dfe5*/
  if ( !unk_AA0460 || !v8 ) /*0x53dff0*/
    goto LABEL_8; /*0x53dff0*/
  unk_AA0448 = 1; /*0x53e006*/
  memset(&unk_AA0168, 0, 0x200u); /*0x53e00c*/
  if ( g_hWnd ) /*0x53e00e*/
  {
    v9 = (HWND *)unk_AA044C; /*0x53e016*/
    int v10 = 1; /*0x53e01b*/
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
}
} // namespace gamemd

// 0x53E730
namespace gamemd {
void Message_IsDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BOOL result; // eax

  do /*0x53e74f*/
    result = GameLoopMessagePump(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53e748*/
  while ( !result ); /*0x53e74f*/
  if ( lpMsg->message == 18 ) /*0x53e75b*/
    return 0; /*0x53e75d*/
  return result; /*0x53e754*/
}
}
} // namespace gamemd

// 0x53E770
namespace gamemd {
void GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void (__stdcall *v6)(LPCRITICAL_SECTION); // edi
  UINT message; // eax
  unsigned int SampleSize; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v14; // edi
  HWND *v15; // ecx
  struct tagPOINT Point; // [esp+14h] [ebp-30h] BYREF
  wchar_t *v20; // [esp+1Ch] [ebp-28h] BYREF
  int v21; // [esp+20h] [ebp-24h]
  int v22; // [esp+24h] [ebp-20h]
  _BYTE v23[28]; // [esp+28h] [ebp-1Ch] BYREF

  if ( unk_AA0444 == 1 ) /*0x53e78b*/
  {
    if ( g_WWMouseClass_Instance ) /*0x53e797*/
    {
      GetCursorPos(&Point); /*0x53e7a2*/
      unk_AA0434 = (__int64)Point; /*0x53e7b0*/
      (*(void (__thiscall **)(int, __int64 *, char *))(*(_DWORD *)g_WWMouseClass_Instance + 68))( /*0x53e7ce*/
        g_WWMouseClass_Instance,
        &unk_AA0434,
        (char *)&unk_AA0434 + 4);
      if ( unk_AA0434 != unk_AA043C ) /*0x53e7de*/
      {
        v22 = 1; /*0x53e7fa*/
        v6 = EnterCriticalSection; /*0x53e7fe*/
        v21 = unk_AA0430; /*0x53e809*/
        v20 = g_CurrentFrame; /*0x53e80d*/
        EnterCriticalSection(&unk_AA0400); /*0x53e811*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 56))( /*0x53e827*/
          g_WWMouseClass_Instance,
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
  BOOL v10; // ebx
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
                  if ( g_WWMouseClass_Instance ) /*0x53ea00*/
                    (*(void (__thiscall **)(int, LONG, LONG))(*(_DWORD *)g_WWMouseClass_Instance + 56))( /*0x53ea06*/
                      g_WWMouseClass_Instance,
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
                  signed int v13 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53eaa2*/
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
            signed int v9 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e922*/
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
  int v16; // eax
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
        v20 = g_CurrentFrame; /*0x53ebcd*/
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
}
} // namespace gamemd

// 0x532130
namespace gamemd {
void nullsub_19()
{
  ;
}
} // namespace gamemd

// 0x532140
namespace gamemd {
void nullsub_151()
{
  ;
}
} // namespace gamemd

// 0x534DE0
namespace gamemd {
char ReleaseLoadingResources()
{
{
    if ( DataGlobal_884E5C )
  {
    Debug::Log();
    if ( DataGlobal_884E5C )
    (**(void (__thiscall ***)(int, int))DataGlobal_884E5C)(DataGlobal_884E5C, 1);
    DataGlobal_884E5C = 0;
  }
    if ( DataGlobal_884E58 )
  {
    Debug::Log();
    if ( DataGlobal_884E58 )
    (**(void (__thiscall ***)(int, int))DataGlobal_884E58)(DataGlobal_884E58, 1);
    DataGlobal_884E58 = 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x538C10
namespace gamemd {
int sub_538C10()
{
{
    return InitArrayWithValue(DataGlobal_A8F7F8, 0, 64);
}
}
} // namespace gamemd

// 0x538C20
namespace gamemd {
int sub_538C20()
{
{
    DataGlobal_A8F908 = 0;
    DataGlobal_A8F90C = 0;
    DataGlobal_A8F910 = 0;
    DataGlobal_A8F914 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x538C40
namespace gamemd {
int E4Recv_538C40::sub_538C40()
{
{
    int v2[22];
    char v3[12];
    int v4;
    CCFileClass::Construct(v2, this);
    if ( CCFileClass::Open(v2, 0) )
  {
    FileClass::Load(v2, 1);
    CCFileClass::Read(v2, DataGlobal_A8F91C, 0x10000);
    CCFileClass::Reset(v2);
    DataGlobal_A9F91C = 0;
  }
    v2[0] = (unsigned int)vt_CCFileClass;
    v4 = 0;
    Vector::Clear((int)v3);
    v2[0] = (int)&DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}
} // namespace gamemd

// 0x538CC0
namespace gamemd {
int E4Recv_538CC0::sub_538CC0()
{
{
    int v2[22];
    char v3[12];
    int v4;
    CCFileClass::Construct(v2, this);
    if ( !CCFileClass::Open(v2, 0) )
  {
    FileClass::Load(v2, 2);
    FileClass::Write(v2, DataGlobal_A8F91C, 0x10000u);
    CCFileClass::Reset(v2);
  }
    v2[0] = (unsigned int)vt_CCFileClass;
    v4 = 0;
    Vector::Clear((int)v3);
    v2[0] = (int)&DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}
} // namespace gamemd

// 0x539110
namespace gamemd {
void sub_539110()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A9F948 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x539140
namespace gamemd {
void sub_539140()
{
{
    DataGlobal_A9F998 = DataGlobal_A9F948 / 60.0;
}
}
} // namespace gamemd

// 0x539160
namespace gamemd {
void sub_539160()
{
{
    DataGlobal_A9F980 = 1.0 / DataGlobal_A9F998;
}
}
} // namespace gamemd

// 0x539180
namespace gamemd {
void sub_539180()
{
{
    DataGlobal_A9F978 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5391A0
namespace gamemd {
void sub_5391A0()
{
{
    DataGlobal_A9F950 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5391C0
namespace gamemd {
void sub_5391C0()
{
{
    DataGlobal_A9F928 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5391E0
namespace gamemd {
long long sub_5391E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A9F928 - DataGlobal_A9F950);
    result = Math::RoundToInt(v0 * DataGlobal_A9F948 * 0.5);
    DataGlobal_A9F9A0 = result;
    return result;
}
}
} // namespace gamemd

// 0x539220
namespace gamemd {
void sub_539220()
{
{
    DataGlobal_A9F958 = Math::ArcTan((double)DataGlobal_A9F9A0 * 0.00390625);
}
}
} // namespace gamemd

// 0x539250
namespace gamemd {
void sub_539250()
{
{
    DataGlobal_A9F970 = Math::ArcTan((double)(2 * DataGlobal_A9F9A0) / DataGlobal_A9F948);
}
}
} // namespace gamemd

// 0x539280
namespace gamemd {
long long sub_539280()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A9F9A0) + 0.5);
    DataGlobal_A9F994 = result;
    return result;
}
}
} // namespace gamemd

// 0x5392B0
namespace gamemd {
int sub_5392B0()
{
{
    DataGlobal_A9F940 = 0;
    DataGlobal_A9F942 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5392C0
namespace gamemd {
int sub_5392C0()
{
{
    DataGlobal_A9F960 = 0;
    DataGlobal_A9F964 = 0;
    DataGlobal_A9F968 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5392E0
namespace gamemd {
int sub_5392E0()
{
{
    DataGlobal_A9F990 = 0;
    DataGlobal_A9F988 = 128;
    DataGlobal_A9F98C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x539300
namespace gamemd {
int sub_539300()
{
{
    DataGlobal_A9F930 = 0;
    DataGlobal_A9F934 = 0;
    DataGlobal_A9F938 = 0;
    DataGlobal_A9F93C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x539350
namespace gamemd {
void sub_539350()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A9FA00 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x539380
namespace gamemd {
void sub_539380()
{
{
    DataGlobal_A9FA88 = DataGlobal_A9FA00 / 60.0;
}
}
} // namespace gamemd

// 0x5393A0
namespace gamemd {
void sub_5393A0()
{
{
    DataGlobal_A9FA58 = 1.0 / DataGlobal_A9FA88;
}
}
} // namespace gamemd

// 0x5393C0
namespace gamemd {
void sub_5393C0()
{
{
    DataGlobal_A9FA50 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5393E0
namespace gamemd {
void sub_5393E0()
{
{
    DataGlobal_A9FA08 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x539400
namespace gamemd {
void sub_539400()
{
{
    DataGlobal_A9F9B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x539420
namespace gamemd {
long long sub_539420()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A9F9B0 - DataGlobal_A9FA08);
    result = Math::RoundToInt(v0 * DataGlobal_A9FA00 * 0.5);
    DataGlobal_A9FA90 = result;
    return result;
}
}
} // namespace gamemd

// 0x539460
namespace gamemd {
void sub_539460()
{
{
    DataGlobal_A9FA10 = Math::ArcTan((double)DataGlobal_A9FA90 * 0.00390625);
}
}
} // namespace gamemd

// 0x539490
namespace gamemd {
void sub_539490()
{
{
    DataGlobal_A9FA40 = Math::ArcTan((double)(2 * DataGlobal_A9FA90) / DataGlobal_A9FA00);
}
}
} // namespace gamemd

// 0x5394C0
namespace gamemd {
long long sub_5394C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A9FA90) + 0.5);
    DataGlobal_A9FA84 = result;
    return result;
}
}
} // namespace gamemd

// 0x5394F0
namespace gamemd {
int sub_5394F0()
{
{
    DataGlobal_A9F9F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x539500
namespace gamemd {
int sub_539500()
{
{
    DataGlobal_A9FA30 = 0;
    DataGlobal_A9FA34 = 0;
    DataGlobal_A9FA38 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x539520
namespace gamemd {
int sub_539520()
{
{
    DataGlobal_A9FA80 = 0;
    DataGlobal_A9FA78 = 128;
    DataGlobal_A9FA7C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x539540
namespace gamemd {
int sub_539540()
{
{
    DataGlobal_A9F9E8 = 0;
    DataGlobal_A9F9EC = 0;
    DataGlobal_A9F9F0 = 0;
    DataGlobal_A9F9F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x539580
namespace gamemd {
int sub_539580()
{
{
    DataGlobal_A9FA64 = 0;
    DataGlobal_A9FA68 = 0;
    DataGlobal_A9FA6C = 1;
    DataGlobal_A9FA6D = 0;
    LightningStorm_CloudsManifesting = (int)&vt_DynamicVectorClass_AnimClass_const;
    DataGlobal_A9FA74 = 10;
    DataGlobal_A9FA70 = 0;
    return atexit(sub_5395C0);
}
}
} // namespace gamemd

// 0x5395C0
namespace gamemd {
void sub_5395C0()
{
{
    if ( (DataGlobal_A9F9A9 & 1) == 0 )
  {
    LightningStorm_CloudsManifesting = (int)&vt_VectorClass_AnimClass_const;
    DataGlobal_A9F9A9 |= 1u;
    if ( DataGlobal_A9FA64 )
    {
    if ( DataGlobal_A9FA6D )
      {
    __3_YAXPAX_Z(DataGlobal_A9FA64);
    DataGlobal_A9FA64 = 0;
      }
    }
    DataGlobal_A9FA6D = 0;
    DataGlobal_A9FA68 = 0;
  }
}
}
} // namespace gamemd

// 0x539620
namespace gamemd {
int sub_539620()
{
{
    DataGlobal_A9F9D4 = 0;
    DataGlobal_A9F9D8 = 0;
    DataGlobal_A9F9DC = 1;
    DataGlobal_A9F9DD = 0;
    LightningStorm_CloudsPresent = (int)&vt_DynamicVectorClass_AnimClass_const;
    DataGlobal_A9F9E4 = 10;
    DataGlobal_A9F9E0 = 0;
    return atexit(sub_539660);
}
}
} // namespace gamemd

// 0x539660
namespace gamemd {
void sub_539660()
{
{
    if ( (DataGlobal_A9F9A8 & 1) == 0 )
  {
    LightningStorm_CloudsPresent = (int)&vt_VectorClass_AnimClass_const;
    DataGlobal_A9F9A8 |= 1u;
    if ( DataGlobal_A9F9D4 )
    {
    if ( DataGlobal_A9F9DD )
      {
    __3_YAXPAX_Z(DataGlobal_A9F9D4);
    DataGlobal_A9F9D4 = 0;
      }
    }
    DataGlobal_A9F9DD = 0;
    DataGlobal_A9F9D8 = 0;
  }
}
}
} // namespace gamemd

// 0x5396C0
namespace gamemd {
int sub_5396C0()
{
{
    DataGlobal_A9FA1C = 0;
    DataGlobal_A9FA20 = 0;
    DataGlobal_A9FA24 = 1;
    DataGlobal_A9FA25 = 0;
    LightningStorm_BoltsPresent = (int)&vt_DynamicVectorClass_AnimClass_const;
    DataGlobal_A9FA2C = 10;
    DataGlobal_A9FA28 = 0;
    return atexit(sub_539700);
}
}
} // namespace gamemd

// 0x539700
namespace gamemd {
void sub_539700()
{
{
    if ( (DataGlobal_A9F9A8 & 2) == 0 )
  {
    LightningStorm_BoltsPresent = (int)&vt_VectorClass_AnimClass_const;
    DataGlobal_A9F9A8 |= 2u;
    if ( DataGlobal_A9FA1C )
    {
    if ( DataGlobal_A9FA25 )
      {
    __3_YAXPAX_Z(DataGlobal_A9FA1C);
    DataGlobal_A9FA1C = 0;
      }
    }
    DataGlobal_A9FA25 = 0;
    DataGlobal_A9FA20 = 0;
  }
}
}
} // namespace gamemd

// 0x539EA0
namespace gamemd {
void sub_539EA0(char a1)
{
{
    LightningStorm_Active = a1;
}
}
} // namespace gamemd

// 0x53AC80
namespace gamemd {
int sub_53AC80(int a1, int a2, int a3, int a4)
{
{
    int result;
    int i;
    int v7;
    int j;
    int v9;
    int v11[2];
    char v12;
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    result = FlagSystem::GetNextActive(v11);
    for ( i = result; result; i = result )
  {
    v7 = Surface_Update();
    for ( j = 0; j < v7; ++j )
    {
    v9 = *(int *)(*(int *)(*(int *)(i + 4) + 4 * j) + 780);
    (*(void (__thiscall **)(int, int, int, int, int))(*(int *)(v9) + 4))(v9, a1, a2, a3, a4);
    }
    result = FlagSystem::GetNextActive(v11);
  }
    return result;
}
}
} // namespace gamemd

// 0x53AD00
namespace gamemd {
int UpdateSurfaceAnimations(int a1, AnimClass * aP1, int a3, int a4)
{
{
    int i;
    int j;
    int v9;
    int v10;
    int v11;
    int v13;
    int v14[2];
    char v15;
    int k;
    for ( i = 0; i < *(int *)&DataGlobal_87C374[13108]; ++i )
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(**(int **)(*(int *)&DataGlobal_87C374[13096] + 4 * i) + 4))( *(int *)(*(int *)&DataGlobal_87C374[13096] + 4 * i), a1, aP1, a3, a4);
    for ( j = 0; j < *(int *)DataGlobal_B05488[88]; ++j )
  {
    v9 = *(int *)(DataGlobal_B05488.field_4C + 4 * j);
    if ( *(int *)(v9 + 784) > 1 )
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(**(int **)(v9 + 780) + 4))( *(int *)(v9 + 780), a1, aP1, a3, a4);
  }
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    for ( k = FlagSystem::GetNextActive(v14); k; k = FlagSystem::GetNextActive(v14) )
  {
    v10 = 0;
    v13 = Surface_Update();
    if ( v13 > 0 )
    {
    do
      {
    v11 = *(int *)(*(int *)(*(int *)(k + 4) + 4 * v10) + 780);
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(*(int *)(v11) + 4))(v11, a1, aP1, a3, a4);
    ++v10;
      }
    while ( v10 < v13 );
    }
  }
    MapClass::UpdateLightingPostProcess();
    return MapClass::MarkForRedraw(&DataGlobal_87C374[13428], 1);
}
}
} // namespace gamemd

// 0x53B3F0
namespace gamemd {
void nullsub_152()
{
  ;
}
} // namespace gamemd

// 0x53C820
namespace gamemd {
void sub_53C820()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A9FF90 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x53C850
namespace gamemd {
void sub_53C850()
{
{
    DataGlobal_AA0140 = DataGlobal_A9FF90 / 60.0;
}
}
} // namespace gamemd

// 0x53C870
namespace gamemd {
void sub_53C870()
{
{
    DataGlobal_AA0110 = 1.0 / DataGlobal_AA0140;
}
}
} // namespace gamemd

// 0x53C890
namespace gamemd {
void sub_53C890()
{
{
    DataGlobal_AA0108 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x53C8B0
namespace gamemd {
void sub_53C8B0()
{
{
    DataGlobal_A9FF98 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x53C8D0
namespace gamemd {
void sub_53C8D0()
{
{
    DataGlobal_A9FAE0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x53C8F0
namespace gamemd {
long long sub_53C8F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A9FAE0 - DataGlobal_A9FF98);
    result = Math::RoundToInt(v0 * DataGlobal_A9FF90 * 0.5);
    DataGlobal_AA0148 = result;
    return result;
}
}
} // namespace gamemd

// 0x53C930
namespace gamemd {
void sub_53C930()
{
{
    DataGlobal_A9FFA0 = Math::ArcTan((double)DataGlobal_AA0148 * 0.00390625);
}
}
} // namespace gamemd

// 0x53C960
namespace gamemd {
void sub_53C960()
{
{
    DataGlobal_A9FFC0 = Math::ArcTan((double)(2 * DataGlobal_AA0148) / DataGlobal_A9FF90);
}
}
} // namespace gamemd

// 0x53C990
namespace gamemd {
long long sub_53C990()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AA0148) + 0.5);
    DataGlobal_AA013C = result;
    return result;
}
}
} // namespace gamemd

// 0x53C9C0
namespace gamemd {
int sub_53C9C0()
{
{
    DataGlobal_A9FF88 = 0;
    DataGlobal_A9FF8A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53C9D0
namespace gamemd {
int sub_53C9D0()
{
{
    DataGlobal_A9FFB0 = 0;
    DataGlobal_A9FFB4 = 0;
    DataGlobal_A9FFB8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53C9F0
namespace gamemd {
int sub_53C9F0()
{
{
    DataGlobal_AA0138 = 0;
    DataGlobal_AA0130 = 128;
    DataGlobal_AA0134 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x53CA10
namespace gamemd {
int sub_53CA10()
{
{
    DataGlobal_A9FF70 = 0;
    DataGlobal_A9FF74 = 0;
    DataGlobal_A9FF78 = 0;
    DataGlobal_A9FF7C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53CA30
namespace gamemd {
void sub_53CA30()
{
{
    DataGlobal_A9FF80 = (512.0 - 0.0 + 57.0) * 0.0125;
}
}
} // namespace gamemd

// 0x53CA50
namespace gamemd {
int sub_53CA50()
{
{
    DataGlobal_A9FFA8 = DataGlobal_A9FF80;
    return LODWORD(DataGlobal_A9FF80);
}
}
} // namespace gamemd

// 0x53CA70
namespace gamemd {
int sub_53CA70()
{
{
    DataGlobal_AA011C = 0;
    DataGlobal_AA0120 = 0;
    DataGlobal_AA0124 = 1;
    DataGlobal_AA0125 = 0;
    DataGlobal_AA0118 = (int)&vt_DynamicVectorClass_IonBlastClass;
    DataGlobal_AA012C = 10;
    DataGlobal_AA0128 = 0;
    return atexit(sub_53CAB0);
}
}
} // namespace gamemd

// 0x53CAB0
namespace gamemd {
void sub_53CAB0()
{
{
    if ( (DataGlobal_A9FAD8 & 1) == 0 )
  {
    DataGlobal_AA0118 = (int)&vt_VectorClass_IonBlastClass;
    DataGlobal_A9FAD8 |= 1u;
    if ( DataGlobal_AA011C )
    {
    if ( DataGlobal_AA0125 )
      {
    __3_YAXPAX_Z(DataGlobal_AA011C);
    DataGlobal_AA011C = 0;
      }
    }
    DataGlobal_AA0125 = 0;
    DataGlobal_AA0120 = 0;
  }
}
}
} // namespace gamemd

// 0x53D310
namespace gamemd {
void sub_53D310()
{
{
    int i;
    for ( i = DataGlobal_AA0128 - 1; i >= 0; --i )
    ExplosionClass::ProcessFrame(*((int **)(DataGlobal_AA011C) + i));
}
}
} // namespace gamemd

// 0x53D8E0
namespace gamemd {
int * ComputeSpiralOffset(int * a1, int a2)
{
{
    int v2;
    int *result;
    int v4;
    int i;
    int v6;
    int v7;
    int v8;
    v2 = a2 - 1;
    result = a1;
    v4 = 1;
    if ( v2 >= 8 )
  {
    for ( i = 8; i <= v2; i += 8 )
    {
    v2 -= i;
    ++v4;
    }
  }
    if ( v2 >= 2 * v4 + 1 )
  {
    if ( v2 >= 4 * v4 + 1 )
    {
    if ( v2 >= 6 * v4 + 1 )
      {
    v8 = v2 - 7 * v4;
    v7 = -v4;
    *result = v8;
      }
    else
      {
    v6 = v4;
    v7 = 5 * v4 - v2;
    *result = -v6;
      }
    result[1] = v7;
    }
    else
    {
    *result = 3 * v4 - v2;
    result[1] = v4;
    }
  }
    else
  {
    *result = v4;
    result[1] = v2 - v4;
  }
    return result;
}
}
} // namespace gamemd

// 0x53D9F0
namespace gamemd {
int sub_53D9F0(int a1)
{
{
    int v2;
    int *v3;
    int *v4;
    int result;
    int v6;
    DataGlobal_A9FAE8[0] = 0;
    DataGlobal_AA0150 = a1;
    v2 = 1;
    v3 = &DataGlobal_A9FAEC;
    do
  {
    v4 = ComputeSpiralOffset(&v6, v2);
    ++v3;
    result = *v4 + a1 * v4[1];
    ++v2;
    *(v3 - 1) = result;
  }
    while ( (int)v3 < (int)&DataGlobal_A9FF6C );
    return result;
}
}
} // namespace gamemd

// 0x53DDE0
namespace gamemd {
int sub_53DDE0()
{
{
    DataGlobal_AA0158 = 0;
    DataGlobal_AA015C = 0;
    DataGlobal_AA0160 = 0;
    DataGlobal_AA0164 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53E070
namespace gamemd {
DWORD sub_53E070(unsigned int * lpThreadParameter)
{
{
    int *v1;
    __int64 v2;
    int *v3;
    unsigned int v4;
    signed int v5;
    unsigned int v6;
    unsigned int Channel;
    v1 = lpThreadParameter;
    lpThreadParameter[6] = 1;
    v1[2] = 0;
    if ( *v1 )
  {
    v1[2] = 1;
    return 0;
  }
    else
  {
    do
    {
    LODWORD(v2) = Audio::Callback();
    AudioThread::UpdateStats((int)(v1 + 8), v2);
    v3 = (int *)DataGlobal_AA045C;
    if ( DataGlobal_AA045C && g_StreamBufferState && Stream )
      {
    EnterCriticalSection(&DataGlobal_AA0418);
    if ( g_StreamBufferState == 2 && (v4 = (unsigned int)AudioStream::GetChannel(v3) >> 1, sub_408D30(v3) < v4) )
        {
    if ( DataGlobal_AA0460 )
          {
    v5 = sub_408D40(v3);
    if ( WriteAudioStreamToFile(DataGlobal_AA0460, Stream, v5, (char *)&lpThreadParameter) != 1 )
    DataGlobal_AA046C = 1;
          }
        }
    else if ( g_StreamBufferState == 1 )
        {
    v6 = (unsigned int)AudioStream::GetChannel(v3) >> 1;
    if ( sub_408D40(v3) < v6 )
          {
    if ( g_StreamConfig )
            {
    Channel = AudioStream::GetChannel(v3);
    WriteAudioStreamToFile(g_StreamConfig, Stream, Channel >> 1, 0);
    fflush(Stream);
            }
          }
        }
    LeaveCriticalSection(&DataGlobal_AA0418);
      }
    Sleep(v1[4]);
    ++v1[1];
    }
    while ( !*v1 );
    v1[2] = 1;
    return 0;
  }
}
}
} // namespace gamemd

// 0x53F020
namespace gamemd {
bool E4Recv_53F020::sub_53F020(const char * a2)
{
{
    return memcmp(this, a2, 10) > 0;
}
}
} // namespace gamemd

// 0x53F050
namespace gamemd {
bool E4Recv_53F050::sub_53F050(const char * a2)
{
{
    return memcmp(this, a2, 10) < 0;
}
}
} // namespace gamemd

// 0x53F080
namespace gamemd {
bool E4Recv_53F080::sub_53F080(const char * a2)
{
{
    return memcmp(this, a2, 10) >= 0;
}
}
} // namespace gamemd

// 0x53F0B0
namespace gamemd {
bool E4Recv_53F0B0::sub_53F0B0(const char * a2)
{
{
    return memcmp(this, a2, 10) <= 0;
}
}
} // namespace gamemd

// 0x53F220
namespace gamemd {
int sub_53F220()
{
{
    DataGlobal_AA0510 = 0;
    DataGlobal_AA0514 = 0;
    DataGlobal_AA0518 = 0;
    DataGlobal_AA051C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53F240
namespace gamemd {
void sub_53F240()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AA0528 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x53F270
namespace gamemd {
void sub_53F270()
{
{
    DataGlobal_AA0598 = DataGlobal_AA0528 / 60.0;
}
}
} // namespace gamemd

// 0x53F290
namespace gamemd {
void sub_53F290()
{
{
    DataGlobal_AA0580 = 1.0 / DataGlobal_AA0598;
}
}
} // namespace gamemd

// 0x53F2B0
namespace gamemd {
void sub_53F2B0()
{
{
    DataGlobal_AA0570 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x53F2D0
namespace gamemd {
void sub_53F2D0()
{
{
    DataGlobal_AA0538 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x53F2F0
namespace gamemd {
void sub_53F2F0()
{
{
    *(double *)&DataGlobal_AA047C[132] = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x53F310
namespace gamemd {
long long sub_53F310()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(*(double *)&DataGlobal_AA047C[132] - DataGlobal_AA0538);
    result = Math::RoundToInt(v0 * DataGlobal_AA0528 * 0.5);
    DataGlobal_AA05A0 = result;
    return result;
}
}
} // namespace gamemd

// 0x53F350
namespace gamemd {
void sub_53F350()
{
{
    DataGlobal_AA0540 = Math::ArcTan((double)DataGlobal_AA05A0 * 0.00390625);
}
}
} // namespace gamemd

// 0x53F380
namespace gamemd {
void sub_53F380()
{
{
    DataGlobal_AA0560 = Math::ArcTan((double)(2 * DataGlobal_AA05A0) / DataGlobal_AA0528);
}
}
} // namespace gamemd

// 0x53F3B0
namespace gamemd {
long long sub_53F3B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AA05A0) + 0.5);
    DataGlobal_AA0594 = result;
    return result;
}
}
} // namespace gamemd

// 0x53F3E0
namespace gamemd {
int sub_53F3E0()
{
{
    DataGlobal_AA0520 = 0;
    DataGlobal_AA0522 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53F3F0
namespace gamemd {
int sub_53F3F0()
{
{
    DataGlobal_AA0550 = 0;
    DataGlobal_AA0554 = 0;
    DataGlobal_AA0558 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53F410
namespace gamemd {
int sub_53F410()
{
{
    DataGlobal_AA0590 = 0;
    DataGlobal_AA0588 = 128;
    DataGlobal_AA058C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x53F880
namespace gamemd {
int sub_53F880()
{
{
    DataGlobal_AA05B8 = 0;
    DataGlobal_AA05BC = 0;
    DataGlobal_AA05C0 = 0;
    DataGlobal_AA05C4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53F8A0
namespace gamemd {
void sub_53F8A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AA05D0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x53F8D0
namespace gamemd {
void sub_53F8D0()
{
{
    DataGlobal_AA0620 = DataGlobal_AA05D0 / 60.0;
}
}
} // namespace gamemd

// 0x53F8F0
namespace gamemd {
void sub_53F8F0()
{
{
    DataGlobal_AA0608 = 1.0 / DataGlobal_AA0620;
}
}
} // namespace gamemd

// 0x53F910
namespace gamemd {
void sub_53F910()
{
{
    DataGlobal_AA0600 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x53F930
namespace gamemd {
void sub_53F930()
{
{
    DataGlobal_AA05D8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x53F950
namespace gamemd {
void sub_53F950()
{
{
    DataGlobal_AA05B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x53F970
namespace gamemd {
long long sub_53F970()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AA05B0 - DataGlobal_AA05D8);
    result = Math::RoundToInt(v0 * DataGlobal_AA05D0 * 0.5);
    DataGlobal_AA0628 = result;
    return result;
}
}
} // namespace gamemd

// 0x53F9B0
namespace gamemd {
void sub_53F9B0()
{
{
    DataGlobal_AA05E0 = Math::ArcTan((double)DataGlobal_AA0628 * 0.00390625);
}
}
} // namespace gamemd

// 0x53F9E0
namespace gamemd {
void sub_53F9E0()
{
{
    DataGlobal_AA05F8 = Math::ArcTan((double)(2 * DataGlobal_AA0628) / DataGlobal_AA05D0);
}
}
} // namespace gamemd

// 0x53FA10
namespace gamemd {
long long sub_53FA10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AA0628) + 0.5);
    DataGlobal_AA061C = result;
    return result;
}
}
} // namespace gamemd

// 0x53FA40
namespace gamemd {
int sub_53FA40()
{
{
    DataGlobal_AA05C8 = 0;
    DataGlobal_AA05CA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53FA50
namespace gamemd {
int sub_53FA50()
{
{
    DataGlobal_AA05E8 = 0;
    DataGlobal_AA05EC = 0;
    DataGlobal_AA05F0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x53FA70
namespace gamemd {
int sub_53FA70()
{
{
    DataGlobal_AA0618 = 0;
    DataGlobal_AA0610 = 128;
    DataGlobal_AA0614 = 128;
    return 128;
}
}
} // namespace gamemd
