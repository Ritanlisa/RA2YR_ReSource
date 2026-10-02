// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/E4Recv_529E70_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_528220_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/E4Recv_522100_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/E4Recv_52A2F0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_541170_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/E4Recv_52A110_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_542F30_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "src/e4/classes/FileTreeNode_e4.hpp"

// 0x530000
namespace gamemd {
MixFileClass * * sub_530000()
{
  HANDLE FirstFileA; // edi
  MixFileClass *v2; // eax
  unsigned int *v3; // esi
  int v4; // eax
  HANDLE v5; // edi
  MixFileClass *v6; // eax
  unsigned int *v7; // esi
  int v8; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-140h] BYREF

  FirstFileA = FindFirstFileA(aEcacheMix, &FindFileData); /*0x530022*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x530035*/
      {
        v2 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x53003d*/
        if ( v2 ) /*0x530047*/
        {
          v3 = (unsigned int *)(((MixFileClass *)(v2))->FromFile(FindFileData.cFileName, (int)dword_886980));
          if ( v3 ) /*0x53005e*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530097*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v4 = (unsigned int)(g_MixFilePool_Count++);
              *((unsigned int *)g_MixFilePool + v4) = (unsigned int)(v3); /*0x5300b3*/
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
        v6 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5300f9*/
        if ( v6 ) /*0x530103*/
        {
          v7 = (unsigned int *)(((MixFileClass *)(v6))->FromFile(FindFileData.cFileName, (int)dword_886980));
          if ( v7 ) /*0x53011a*/
          {
            if ( g_MixFilePool_Count < g_MixFilePool_Capacity /*0x530153*/
              || (g_MixFilePool_Flag || !g_MixFilePool_Capacity)
              && g_MixFilePool_GrowSize > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray + 8))(
                   &g_MixFileArray,
                   g_MixFilePool_Capacity + g_MixFilePool_GrowSize,
                   0) )
            {
              v8 = (unsigned int)(g_MixFilePool_Count++);
              *((unsigned int *)g_MixFilePool + v8) = (unsigned int)(v7); /*0x53016f*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v5, &FindFileData) ); /*0x530178*/
    FindClose(v5); /*0x530183*/
  }
  return (gamemd::MixFileClass **)(1);
}
}
// 0x5312A0
namespace gamemd {
void ShowLoadingScreen(void * a1, void * a2, void * a3)
{
  wchar_t *v20; // eax
  int16_t *v3; // esi
  char *v4; // ebp
  int i; // edx
  char *v6; // eax
  char v7; // cl
  unsigned int v8;
  int v9; // edx
  size_t v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v15; // eax
  size_t v16; // eax
  size_t v17; // eax
  size_t v18; // eax
  void *v19; // esi
  wchar_t v22; // [esp-10h] [ebp-B8h]
  wchar_t v23; // [esp-10h] [ebp-B8h]
  wchar_t v24; // [esp-10h] [ebp-B8h]
  wchar_t v25; // [esp-10h] [ebp-B8h]
  int v26; // [esp-10h] [ebp-B8h]
  int v29; // [esp+0h] [ebp-A8h] BYREF
  int v30; // [esp+4h] [ebp-A4h]
  void (***v31)(unsigned int, int); // [esp+8h] [ebp-A0h]
  int v32[2]; // [esp+Ch] [ebp-9Ch] BYREF
  int16_t v33; // [esp+14h] [ebp-94h]
  void *Block; // [esp+18h] [ebp-90h]
  int v35[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  int v36; // [esp+24h] [ebp-84h]
  int v37; // [esp+28h] [ebp-80h]
  struct tagRECT Rect; // [esp+2Ch] [ebp-7Ch] BYREF
  unsigned int v39[22]; // [esp+3Ch] [ebp-6Ch] BYREF
  char v40[12]; // [esp+94h] [ebp-14h] BYREF
  void ** v41;

  ((CCFileClass *)(v39))->Construct(aGlsmdPal); /*0x5312b3*/
  v3 = 0; /*0x5312ba*/
  v4 = 0; /*0x5312c1*/
  Block = 0; /*0x5312c3*/
  v31 = 0; /*0x5312c7*/
  if ( (uint8_t)((CCFileClass *)(0))->Open() ) /*0x5312cb*/
  {
    v4 = (char *)((CCFileClass *)(v39))->ReadEntireFile(); /*0x5312e5*/
    CCFileClass::Reset(v39); /*0x5312e7*/
    for ( i = 0; i < 256; ++i ) /*0x5312ec*/
    {
      v6 = &v4[2 * (i % 256) + i % 256]; /*0x531302*/
      IDA_LOBYTE(v33) = 4 * *v6; /*0x531309*/
      IDA_HIBYTE(v33) = 4 * v6[1]; /*0x531313*/
      v7 = 4 * v6[2]; /*0x53131f*/
      *(unsigned short *)v6 = v33; /*0x531323*/
      v6[2] = v7; /*0x53132c*/
    }
    if ( v4 ) /*0x531333*/
    {
      if ( operator new(0x188u) ) /*0x53133a*/
      {
        v31 = (void (***)(unsigned int, int))ConvertClass::Construct( /*0x531363*/
                                                    v4,
                                                    &FileSystem_TEMPERAT_PAL,
                                                    g_DSurface_Primary,
                                                    1,
                                                    0);
        if ( v31 ) /*0x531367*/
        {
          v8 = (unsigned int)(aGlssmdShp);
          if ( g_DisplayWidth != 640 ) /*0x531378*/
            v8 = (unsigned int)(aGlslmdShp); /*0x53137a*/
          Block = (void *)SearchMIXFile((char *)(v8), 0); /*0x531386*/
          v3 = (int16_t *)Block; /*0x53138a*/
        }
      }
      else
      {
        v31 = 0; /*0x53166f*/
      }
    }
  }
  GetClientRect((HWND)(g_hWnd), &Rect); /*0x531398*/
  v35[0] = 0; /*0x5313a2*/
  v35[1] = 0; /*0x5313b8*/
  v36 = Rect.right - Rect.left; /*0x5313bc*/
  v37 = Rect.bottom - Rect.top; /*0x5313c0*/
  if ( v3 ) /*0x5313c4*/
  {
    v9 = v3[2]; /*0x5313cf*/
    v32[0] = (Rect.right - Rect.left - v3[1]) / 2; /*0x5313d5*/
    v32[1] = (Rect.bottom - Rect.top - v9) / 2; /*0x5313e5*/
    DrawToSurfaceSHP(g_DSurface_Hidden, (int)v31,(gamemd::ConvertClass *)((int)v3), 0,(gamemd::ConvertClass *)(v32),(gamemd::ConvertClass *)(v35), 0, 0, 0, 0,(gamemd::ConvertClass *)(1000), 0, 0, 0, 0, 0); /*0x53140e*/
  }
  v10 = (int)(GetStringCSF((wchar_t *)(aTxtCopyright),(unsigned int *)((int)g_Str_File_Init_CPP),(const char *)(4930)));
  v11 = (int)(TextRenderer::GetInstance((void *)(22)));
  v29 = 0; /*0x53143e*/
  v30 = v37 - 40; /*0x531444*/
  if ( v11 ) /*0x53144d*/
  {
    v12 = (int)(Text_MeasureWidth(v10, 0, unsigned int a2));
    v29 = (int)(v36 - v12 - 10);
  }
  TextRenderer::Printf((gamemd::ConvertClass *)((int)v32), v10,(gamemd::ObjectClass *)(g_DSurface_Hidden),(gamemd::ConvertClass *)((int)v35), (int)&v29, 0xFFFF, 0, 22,(gamemd::CampaignScore *)(a2)); /*0x531485*/
  v13 = (int)(GetStringCSF((wchar_t *)(aGuiWwbrand),(unsigned int *)((int)g_Str_File_Init_CPP),(const char *)(4941))); /*0x53149e*/
  v13 = v13; /*0x5314a5*/
  if ( v11 ) /*0x5314a7*/
  {
    v15 = (size_t)(Text_MeasureWidth(v13, 0, unsigned int a1, unsigned int a3));
    v29 = (size_t)(v36 - v15 - 10);
    v30 += v11->q01C + 3; /*0x5314ca*/
  }
  TextRenderer::Printf((gamemd::ConvertClass *)((int)v32), v13,(gamemd::ObjectClass *)(g_DSurface_Hidden),(gamemd::ConvertClass *)((int)v35), (int)&v29, 0xFFFF, 0, 22,(gamemd::CampaignScore *)(v22)); /*0x5314ee*/
  v16 = (size_t)(GetStringCSF((wchar_t *)(aGuiLoadingex),(unsigned int *)((int)g_Str_File_Init_CPP),(const char *)(4951))); /*0x531507*/
  v29 = 10; /*0x53152c*/
  v30 = 10; /*0x531530*/
  TextRenderer::Printf((gamemd::ConvertClass *)((int)v32), v16,(gamemd::ObjectClass *)(g_DSurface_Hidden),(gamemd::ConvertClass *)((int)v35), (int)&v29, 0xFFFF, 0, 22,(gamemd::CampaignScore *)(v23)); /*0x531534*/
  v17 = (size_t)(GetStringCSF((wchar_t *)(aGuiTrademarkto),(unsigned int *)((int)g_Str_File_Init_CPP),(const char *)(4958))); /*0x53154d*/
  v29 = 10; /*0x531556*/
  v30 = v37 - 40; /*0x531565*/
  TextRenderer::Printf((gamemd::ConvertClass *)((int)v32), v17,(gamemd::ObjectClass *)(g_DSurface_Hidden),(gamemd::ConvertClass *)((int)v35), (int)&v29, 0xFFFF, 0, 22,(gamemd::CampaignScore *)(v24)); /*0x531581*/
  v18 = (size_t)(GetStringCSF((wchar_t *)(aGuiTrademarkbo),(unsigned int *)((int)g_Str_File_Init_CPP),(const char *)(4965))); /*0x53159a*/
  v29 = 10; /*0x53159f*/
  v30 += v11->q01C + 3; /*0x5315bb*/
  TextRenderer::Printf((gamemd::ConvertClass *)((int)v32), v18,(gamemd::ObjectClass *)(g_DSurface_Hidden),(gamemd::ConvertClass *)((int)v35), (int)&v29, 0xFFFF, 0, 22,(gamemd::CampaignScore *)(v25)); /*0x5315d2*/
  Frame::Present((void *)(g_DSurface_Hidden),(void *)(10),(void *)((int)v4),(void *)(v13), 0, v26, a3, a1); /*0x5315e4*/
    *(unsigned long long *)&(&dword_A8ED54)[653] = (unsigned __int64)(v20 + 5000);
  if ( v4 ) /*0x531603*/
    RA2_OPDEL(v4); /*0x531606*/
  v19 = Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy((HWND)(Block)); /*0x531618*/
    RA2_OPDEL(v19); /*0x53161e*/
  }
  if ( v31 ) /*0x531630*/
    (**v31)(v31, 1); /*0x531636*/
  v41 = 0; /*0x531647*/
  ((Vector *)(v40))->Clear(); /*0x531652*/
  v39[0] = (unsigned int)&off_7E1668; /*0x53165b*/
// 0x431b80
  return ((BufferIOFileClass *)(v39))->Dtor(); /*0x531668*/
}
}
// 0x531680
namespace gamemd {
char BulkData_Initialize()
{
  File *v0; // eax
  File *v2; // eax
  ObjectClass *v3; // [esp+0h] [ebp-DCh]
  ObjectClass *v4; // [esp+0h] [ebp-DCh]
  ObjectClass *v5; // [esp+0h] [ebp-DCh]
  ObjectClass *v6; // [esp+0h] [ebp-DCh]
  CCFileClass v7; // [esp+4h] [ebp-D8h] BYREF
  int v8[3]; // [esp+5Ch] [ebp-80h] BYREF
  void ** v9;
  CCFileClass v10; // [esp+70h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+C8h] [ebp-14h] BYREF
  void ** v12;

  if ( !g_MixFile_CONQMD /*0x5316ec*/
    || !(uint8_t)ReturnTrue(0)
    || !g_MixFile_CONQUER
    || !(uint8_t)ReturnTrue(0)
    || !g_MixFile_CAMEOMD
    || !(uint8_t)ReturnTrue(0)
    || !g_MixFile_CAMEO
    || !(uint8_t)ReturnTrue(0) )
  {
    return 0; /*0x5318a7*/
  }
    Event::Dispatch();
    Event::Dispatch();
  ((MouseClass *)((MouseClass *)&stru_87F5F0.__pad_58[416]))->LoadTypeData(); /*0x531708*/
  nullsub_29(v3); /*0x531712*/
  ((BulkData *)((BulkData *)&dword_A8B238))->InitMissionHashing(); /*0x53171c*/
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
  ((CCFileClass *)(&v7))->Construct(aDpodVxl); /*0x531766*/
  v0 = (File *)RA2_OPNEW(0x1Cu); /*0x53176d*/
  if ( !v0 ) /*0x531777*/
  {
    *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 244) = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 244) = (unsigned int)(((File *)(v0))->LoadFileVXL((int)&v7, 0)); /*0x531788*/
  if ( !*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 244) ) /*0x53178d*/
  {
  LABEL_11:
        Debug::Log();
  LABEL_12:
    *(unsigned int *)v7.CDFileClass = (unsigned int)((void*)&CCFileClass_vftable); /*0x53179c*/
    v9 = 0; /*0x5317a8*/
    ((Vector *)((int)v8))->Clear(); /*0x5317ac*/
    *(unsigned int *)v7.CDFileClass = (unsigned int)(&off_7E1668); /*0x5317b5*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v7))->Dtor(); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  ((CCFileClass *)(&v10))->Construct(aDpodHva); /*0x5317dd*/
  v2 = (File *)RA2_OPNEW(0x10u); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 248) = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 248) = (unsigned int)(((File *)(v2))->LoadFileHVA((int)&v10)); /*0x5317fe*/
  if ( !*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 248) ) /*0x531803*/
  {
  LABEL_16:
        Debug::Log();
    *(unsigned int *)v10.CDFileClass = (unsigned int)((void*)&CCFileClass_vftable); /*0x531819*/
    v12 = 0; /*0x531821*/
    ((Vector *)((int)v11))->Clear(); /*0x531828*/
    *(unsigned int *)v10.CDFileClass = (unsigned int)(&off_7E1668); /*0x531831*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v10))->Dtor(); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  *(unsigned int *)v10.CDFileClass = (unsigned int)((void*)&CCFileClass_vftable); /*0x531852*/
  v12 = (void **)((unsigned int)(0)); /*0x53185a*/
  ((Vector *)((int)v11))->Clear(); /*0x531861*/
  *(unsigned int *)v10.CDFileClass = (unsigned int)(&off_7E1668); /*0x53186a*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v10))->Dtor(); /*0x531872*/
  *(unsigned int *)v7.CDFileClass = (unsigned int)((void*)&CCFileClass_vftable); /*0x53187b*/
  v9 = (void **)((unsigned int)(0)); /*0x531883*/
  ((Vector *)((int)v8))->Clear(); /*0x531887*/
  *(unsigned int *)v7.CDFileClass = (unsigned int)(&off_7E1668); /*0x531890*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v7))->Dtor(); /*0x531898*/
  return 1; /*0x5317c4*/
}
}
// 0x532150
namespace gamemd {
CreateTeamCommand * * InitCommands()
{
  CreateTeamCommand *v7; // esi
  unsigned int *v9; // eax
  CreateTeamCommand *v10; // esi
  unsigned int *v12; // eax
  CreateTeamCommand *v13; // esi
  unsigned int *v15; // eax
  CreateTeamCommand *v16; // esi
  unsigned int *v18; // eax
  CreateTeamCommand *v19; // esi
  unsigned int *v21; // eax
  CreateTeamCommand *v22; // esi
  unsigned int *v24; // eax
  CreateTeamCommand *v25; // esi
  unsigned int *v27; // eax
  CreateTeamCommand *v28; // esi
  unsigned int *v30; // eax
  CreateTeamCommand *v31; // esi
  unsigned int *v33; // eax
  unsigned int *v35; // eax
  CreateTeamCommand *v36; // esi
  unsigned int *v38; // eax
  CreateTeamCommand *v39; // esi
  unsigned int *v41; // eax
  unsigned int *v43; // eax
  CreateTeamCommand *v44; // esi
  unsigned int *v46; // eax
  CreateTeamCommand *v47; // esi
  unsigned int *v49; // eax
  CreateTeamCommand *v50; // esi
  unsigned int *v52; // eax
  CreateTeamCommand *v53; // esi
  unsigned int *v55; // eax
  CreateTeamCommand *v56; // esi
  unsigned int *v58; // eax
  CreateTeamCommand *v59; // esi
  unsigned int *v61; // eax
  CreateTeamCommand *v62; // esi
  unsigned int *v64; // eax
  CreateTeamCommand *v65; // esi
  unsigned int *v67; // eax
  CreateTeamCommand *v68; // esi
  unsigned int *v70; // eax
  CreateTeamCommand *v71; // esi
  unsigned int *v73; // eax
  CreateTeamCommand *v74; // esi
  unsigned int *v76; // eax
  CreateTeamCommand *v77; // esi
  unsigned int *v79; // eax
  CreateTeamCommand *v80; // esi
  unsigned int *v82; // eax
  CreateTeamCommand *v83; // esi
  unsigned int *v85; // eax
  CreateTeamCommand *v86; // esi
  unsigned int *v88; // eax
  CreateTeamCommand *v89; // esi
  unsigned int *v91; // eax
  CreateTeamCommand *v92; // esi
  unsigned int *v94; // eax
  CreateTeamCommand *v95; // esi
  unsigned int *v97; // eax
  CreateTeamCommand *v98; // esi
  unsigned int *v100; // eax
  CreateTeamCommand *v101; // esi
  unsigned int *v103; // eax
  CreateTeamCommand *v104; // esi
  unsigned int *v106; // eax
  CreateTeamCommand *v107; // esi
  unsigned int *v109; // eax
  CreateTeamCommand *v110; // esi
  unsigned int *v112; // eax
  CreateTeamCommand *v113; // esi
  unsigned int *v115; // eax
  CreateTeamCommand *v116; // esi
  unsigned int *v118; // eax
  CreateTeamCommand *v119; // esi
  unsigned int *v121; // eax
  CreateTeamCommand *v122; // esi
  unsigned int *v124; // eax
  unsigned int *v125; // eax
  unsigned int *v126; // eax
  unsigned int *v127; // eax
  unsigned int *v128; // eax
  unsigned int *v129; // eax
  unsigned int *v130; // eax
  unsigned int *v131; // eax
  unsigned int *v132; // eax
  unsigned int *v133; // eax
  unsigned int *v134; // eax
  unsigned int *v135; // eax
  unsigned int *v136; // eax
  unsigned int *v137; // eax
  unsigned int *v138; // eax
  unsigned int *v139; // eax
  unsigned int *v140; // eax
  unsigned int *v141; // eax
  unsigned int *v142; // eax
  unsigned int *v143; // eax
  unsigned int *v144; // eax
  unsigned int *v145; // eax
  unsigned int *v146; // eax
  unsigned int *v147; // eax
  unsigned int *v148; // eax
  unsigned int *v149; // eax
  unsigned int *v150; // eax
  unsigned int *v151; // eax
  unsigned int *v152; // eax
  unsigned int *v153; // eax
  unsigned int *v154; // eax
  unsigned int *v155; // eax
  unsigned int *v156; // eax
  unsigned int *v157; // eax
  unsigned int *v158; // eax
  unsigned int *v159; // eax
  unsigned int *v160; // eax
  unsigned int *v161; // eax
  unsigned int *v162; // eax
  unsigned int *v163; // eax
  unsigned int *v164; // eax
  unsigned int *v165; // eax
  unsigned int *v166; // eax
  unsigned int *v167; // eax
  unsigned int *v168; // eax
  unsigned int *v169; // eax
  unsigned int *v170; // eax
  unsigned int *v172; // [esp+150h] [ebp-10h] BYREF
  unsigned int *v173; // [esp+154h] [ebp-Ch] BYREF
  unsigned int *v174; // [esp+158h] [ebp-8h] BYREF
  int v175; // [esp+15Ch] [ebp-4h] BYREF
  if ( IDA_LOBYTE(DataGlobal_87F7E8[536627]) ) /*0x53215e*/
  {
  CreateTeamCommand *v4; // esi
  unsigned int *v1; // esi
    unsigned int * v0 = (unsigned int *)operator new(4); /*0x532166*/
    if ( v0 ) /*0x532170*/
    {
      v1 = v0; /*0x532178*/
    }
    else
    {
      v1 = 0; /*0x53217c*/
    }
    if ( ((unsigned int *)(dword_87F5D8))[36] < ((unsigned int *)(dword_87F5D8))[34] /*0x5321b1*/
      || (IDA_BYTE1((&dword_87F5D8)[35]) || !((unsigned int *)(dword_87F5D8))[34])
      && ((unsigned int *)(dword_87F5D8))[37] > 0
      && (*(uint8_t (**)(unsigned int *, int, unsigned int))(((unsigned int *)(dword_87F5D8))[32] + 8))(
           &((unsigned int *)(dword_87F5D8))[32],
           ((unsigned int *)(dword_87F5D8))[34] + (&dword_87F5D8)[37],
           0) )
    {
      CreateTeamCommand *v2 = (gamemd::CreateTeamCommand *)((&dword_87F5D8)[36]++); /*0x5321be*/
      *(unsigned int *)((&dword_87F5D8)[33] + 4 * v2) = v1; /*0x5321cd*/
    }
    unsigned int * v3 = (unsigned int *)operator new(4); /*0x5321d2*/
    if ( v3 ) /*0x5321dc*/
    {
      v4 = (gamemd::CreateTeamCommand *)(v3); /*0x5321e4*/
    }
    else
    {
      v4 = 0; /*0x5321e8*/
    }
    if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53221e*/
      || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
      && (&dword_87F5D8)[37] > 0
      && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
           &(&dword_87F5D8)[32],
           (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
           0) )
    {
      CreateTeamCommand *v5 = (gamemd::CreateTeamCommand *)((&dword_87F5D8)[36]++); /*0x53222b*/
      *(unsigned int *)((&dword_87F5D8)[33] + 4 * v5) = v4; /*0x53223a*/
    }
  }
  unsigned int * v6 = (unsigned int *)operator new(4); /*0x53223f*/
  if ( v6 ) /*0x532249*/
  {
    v7 = (gamemd::CreateTeamCommand *)(v6); /*0x532251*/
  }
  else
  {
    v7 = 0; /*0x532255*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53228b*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v8 = (gamemd::CreateTeamCommand *)((&dword_87F5D8)[36]++); /*0x532298*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v8) = v7; /*0x5322a7*/
  }
  v9 = (unsigned int *)operator new(4); /*0x5322ac*/
  if ( v9 ) /*0x5322b6*/
  {
    v10 = (gamemd::CreateTeamCommand *)(v9); /*0x5322be*/
  }
  else
  {
    v10 = 0; /*0x5322c2*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5322f8*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v11 = (&dword_87F5D8)[36]++; /*0x532305*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v11) = v10; /*0x532314*/
  }
  v12 = (unsigned int *)operator new(4); /*0x532319*/
  if ( v12 ) /*0x532323*/
  {
    v13 = (gamemd::CreateTeamCommand *)(v12); /*0x53232b*/
  }
  else
  {
    v13 = 0; /*0x53232f*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532365*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v14 = (&dword_87F5D8)[36]++; /*0x532372*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v14) = v13; /*0x532381*/
  }
  v15 = (unsigned int *)operator new(4); /*0x532386*/
  if ( v15 ) /*0x532390*/
  {
    v16 = (gamemd::CreateTeamCommand *)(v15); /*0x532398*/
  }
  else
  {
    v16 = 0; /*0x53239c*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5323d2*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v17 = (&dword_87F5D8)[36]++; /*0x5323df*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v17) = v16; /*0x5323ee*/
  }
  v18 = (unsigned int *)operator new(4); /*0x5323f3*/
  if ( v18 ) /*0x5323fd*/
  {
    v19 = (gamemd::CreateTeamCommand *)(v18); /*0x532405*/
  }
  else
  {
    v19 = 0; /*0x532409*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53243f*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v20 = (&dword_87F5D8)[36]++; /*0x53244c*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v20) = v19; /*0x53245b*/
  }
  v21 = (unsigned int *)operator new(4); /*0x532460*/
  if ( v21 ) /*0x53246a*/
  {
    v22 = (gamemd::CreateTeamCommand *)(v21); /*0x532472*/
  }
  else
  {
    v22 = 0; /*0x532476*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5324ac*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v23 = (&dword_87F5D8)[36]++; /*0x5324b9*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v23) = v22; /*0x5324c8*/
  }
  v24 = (unsigned int *)operator new(4); /*0x5324cd*/
  if ( v24 ) /*0x5324d7*/
  {
    v25 = (gamemd::CreateTeamCommand *)(v24); /*0x5324df*/
  }
  else
  {
    v25 = 0; /*0x5324e3*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532519*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v26 = (&dword_87F5D8)[36]++; /*0x532526*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v26) = v25; /*0x532535*/
  }
  v27 = (unsigned int *)operator new(4); /*0x53253a*/
  if ( v27 ) /*0x532544*/
  {
    v28 = (gamemd::CreateTeamCommand *)(v27); /*0x53254c*/
  }
  else
  {
    v28 = 0; /*0x532550*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532586*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v29 = (&dword_87F5D8)[36]++; /*0x532593*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v29) = v28; /*0x5325a2*/
  }
  v30 = (unsigned int *)operator new(4); /*0x5325a7*/
  if ( v30 ) /*0x5325b1*/
  {
    v31 = (gamemd::CreateTeamCommand *)(v30); /*0x5325b9*/
  }
  else
  {
    v31 = 0; /*0x5325bd*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5325f3*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v32 = (&dword_87F5D8)[36]++; /*0x532600*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v32) = v31; /*0x53260f*/
  }
  v33 = (unsigned int *)operator new(4); /*0x532614*/
  if ( v33 ) /*0x53261e*/
  {
    v173 = v33; /*0x532626*/
  }
  else
  {
    v173 = 0; /*0x53262c*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532664*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v34 = (&dword_87F5D8)[36]++; /*0x532675*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v34) = v173; /*0x532684*/
  }
  v35 = (unsigned int *)operator new(4); /*0x532689*/
  if ( v35 ) /*0x532693*/
  {
    v36 = v35; /*0x53269b*/
  }
  else
  {
    v36 = 0; /*0x53269f*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5326d4*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v37 = (&dword_87F5D8)[36]++; /*0x5326e1*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v37) = v36; /*0x5326f0*/
  }
  v38 = (unsigned int *)operator new(4); /*0x5326f5*/
  if ( v38 ) /*0x5326ff*/
  {
    v39 = v38; /*0x532707*/
  }
  else
  {
    v39 = 0; /*0x53270b*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532741*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v40 = (&dword_87F5D8)[36]++; /*0x53274e*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v40) = v39; /*0x53275d*/
  }
  v41 = (unsigned int *)operator new(4); /*0x532762*/
  if ( v41 ) /*0x53276c*/
  {
    v174 = v41; /*0x532774*/
  }
  else
  {
    v174 = 0; /*0x53277a*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5327b2*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v42 = (&dword_87F5D8)[36]++; /*0x5327c3*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v42) = v174; /*0x5327d2*/
  }
  v43 = (unsigned int *)operator new(4); /*0x5327d7*/
  if ( v43 ) /*0x5327e1*/
  {
    v44 = v43; /*0x5327e9*/
  }
  else
  {
    v44 = 0; /*0x5327ed*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532822*/
    || (IDA_BYTE1((&dword_87F5D8)[35]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v45 = (&dword_87F5D8)[36]++; /*0x53282f*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v45) = v44; /*0x53283e*/
  }
  v46 = (unsigned int *)operator new(4); /*0x532843*/
  if ( v46 ) /*0x53284d*/
  {
    v47 = v46; /*0x532855*/
  }
  else
  {
    v47 = 0; /*0x532859*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53288f*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v48 = dword_87F5D8[36]++; /*0x53289c*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v48) = v47; /*0x5328ab*/
  }
  v49 = (unsigned int *)operator new(4); /*0x5328b0*/
  if ( v49 ) /*0x5328ba*/
  {
    v50 = v49; /*0x5328c2*/
  }
  else
  {
    v50 = 0; /*0x5328c6*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5328fc*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v51 = dword_87F5D8[36]++; /*0x532909*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v51) = v50; /*0x532918*/
  }
  v52 = (unsigned int *)operator new(4); /*0x53291d*/
  if ( v52 ) /*0x532927*/
  {
    v53 = v52; /*0x53292f*/
  }
  else
  {
    v53 = 0; /*0x532933*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532969*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v54 = dword_87F5D8[36]++; /*0x532976*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v54) = v53; /*0x532985*/
  }
  v55 = (unsigned int *)operator new(4); /*0x53298a*/
  if ( v55 ) /*0x532994*/
  {
    v56 = v55; /*0x53299c*/
  }
  else
  {
    v56 = 0; /*0x5329a0*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5329d6*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v57 = dword_87F5D8[36]++; /*0x5329e3*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v57) = v56; /*0x5329f2*/
  }
  v58 = (unsigned int *)operator new(4); /*0x5329f7*/
  if ( v58 ) /*0x532a01*/
  {
    v59 = v58; /*0x532a09*/
  }
  else
  {
    v59 = 0; /*0x532a0d*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532a43*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v60 = dword_87F5D8[36]++; /*0x532a50*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v60) = v59; /*0x532a5f*/
  }
  v61 = (unsigned int *)operator new(4); /*0x532a64*/
  if ( v61 ) /*0x532a6e*/
  {
    v62 = v61; /*0x532a76*/
  }
  else
  {
    v62 = 0; /*0x532a7a*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532ab0*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v63 = dword_87F5D8[36]++; /*0x532abd*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v63) = v62; /*0x532acc*/
  }
  v64 = (unsigned int *)operator new(4); /*0x532ad1*/
  if ( v64 ) /*0x532adb*/
  {
    v65 = v64; /*0x532ae3*/
  }
  else
  {
    v65 = 0; /*0x532ae7*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532b1d*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v66 = dword_87F5D8[36]++; /*0x532b2a*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v66) = v65; /*0x532b39*/
  }
  v67 = (unsigned int *)operator new(4); /*0x532b3e*/
  if ( v67 ) /*0x532b48*/
  {
    v68 = v67; /*0x532b50*/
  }
  else
  {
    v68 = 0; /*0x532b54*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532b8a*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v69 = dword_87F5D8[36]++; /*0x532b97*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v69) = v68; /*0x532ba6*/
  }
  v70 = (unsigned int *)operator new(4); /*0x532bab*/
  if ( v70 ) /*0x532bb5*/
  {
    v71 = v70; /*0x532bbd*/
  }
  else
  {
    v71 = 0; /*0x532bc1*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532bf7*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v72 = dword_87F5D8[36]++; /*0x532c04*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v72) = v71; /*0x532c13*/
  }
  v73 = (unsigned int *)operator new(4); /*0x532c18*/
  if ( v73 ) /*0x532c22*/
  {
    v74 = v73; /*0x532c2a*/
  }
  else
  {
    v74 = 0; /*0x532c2e*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532c64*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v75 = dword_87F5D8[36]++; /*0x532c71*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v75) = v74; /*0x532c80*/
  }
  v76 = (unsigned int *)operator new(4); /*0x532c85*/
  if ( v76 ) /*0x532c8f*/
  {
    v77 = v76; /*0x532c97*/
  }
  else
  {
    v77 = 0; /*0x532c9b*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532cd1*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v78 = dword_87F5D8[36]++; /*0x532cde*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v78) = v77; /*0x532ced*/
  }
  v79 = (unsigned int *)operator new(4); /*0x532cf2*/
  if ( v79 ) /*0x532cfc*/
  {
    v80 = v79; /*0x532d04*/
  }
  else
  {
    v80 = 0; /*0x532d08*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532d3e*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v81 = dword_87F5D8[36]++; /*0x532d4b*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v81) = v80; /*0x532d5a*/
  }
  v82 = (unsigned int *)operator new(4); /*0x532d5f*/
  if ( v82 ) /*0x532d69*/
  {
    v83 = v82; /*0x532d71*/
  }
  else
  {
    v83 = 0; /*0x532d75*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532dab*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v84 = dword_87F5D8[36]++; /*0x532db8*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v84) = v83; /*0x532dc7*/
  }
  v85 = (unsigned int *)operator new(4); /*0x532dcc*/
  if ( v85 ) /*0x532dd6*/
  {
    v86 = v85; /*0x532dde*/
  }
  else
  {
    v86 = 0; /*0x532de2*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532e18*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v87 = dword_87F5D8[36]++; /*0x532e25*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v87) = v86; /*0x532e34*/
  }
  v88 = (unsigned int *)operator new(4); /*0x532e39*/
  if ( v88 ) /*0x532e43*/
  {
    v89 = v88; /*0x532e4b*/
  }
  else
  {
    v89 = 0; /*0x532e4f*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532e85*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v90 = dword_87F5D8[36]++; /*0x532e92*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v90) = v89; /*0x532ea1*/
  }
  v91 = (unsigned int *)operator new(4); /*0x532ea6*/
  if ( v91 ) /*0x532eb0*/
  {
    v92 = v91; /*0x532eb8*/
  }
  else
  {
    v92 = 0; /*0x532ebc*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532ef2*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v93 = dword_87F5D8[36]++; /*0x532eff*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v93) = v92; /*0x532f0e*/
  }
  v94 = (unsigned int *)operator new(4); /*0x532f13*/
  if ( v94 ) /*0x532f1d*/
  {
    v95 = v94; /*0x532f25*/
  }
  else
  {
    v95 = 0; /*0x532f29*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532f5f*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v96 = dword_87F5D8[36]++; /*0x532f6c*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v96) = v95; /*0x532f7b*/
  }
  v97 = (unsigned int *)operator new(4); /*0x532f80*/
  if ( v97 ) /*0x532f8a*/
  {
    v98 = v97; /*0x532f92*/
  }
  else
  {
    v98 = 0; /*0x532f96*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x532fcc*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v99 = dword_87F5D8[36]++; /*0x532fd9*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v99) = v98; /*0x532fe8*/
  }
  v100 = (unsigned int *)operator new(4); /*0x532fed*/
  if ( v100 ) /*0x532ff7*/
  {
    v101 = v100; /*0x532fff*/
  }
  else
  {
    v101 = 0; /*0x533003*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533039*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v102 = dword_87F5D8[36]++; /*0x533046*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v102) = v101; /*0x533055*/
  }
  v103 = (unsigned int *)operator new(4); /*0x53305a*/
  if ( v103 ) /*0x533064*/
  {
    v104 = v103; /*0x53306c*/
  }
  else
  {
    v104 = 0; /*0x533070*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5330a6*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v105 = dword_87F5D8[36]++; /*0x5330b3*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v105) = v104; /*0x5330c2*/
  }
  v106 = (unsigned int *)operator new(4); /*0x5330c7*/
  if ( v106 ) /*0x5330d1*/
  {
    v107 = v106; /*0x5330d9*/
  }
  else
  {
    v107 = 0; /*0x5330dd*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533113*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v108 = dword_87F5D8[36]++; /*0x533120*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v108) = v107; /*0x53312f*/
  }
  v109 = (unsigned int *)operator new(8); /*0x533134*/
  if ( v109 ) /*0x53313e*/
  {
    v109[1] = 1; /*0x533140*/
    v110 = v109; /*0x53314d*/
  }
  else
  {
    v110 = 0; /*0x533151*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533187*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v111 = dword_87F5D8[36]++; /*0x533194*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v111) = v110; /*0x5331a3*/
  }
  v112 = (unsigned int *)operator new(8); /*0x5331a8*/
  if ( v112 ) /*0x5331b2*/
  {
    v112[1] = 2; /*0x5331b4*/
    v113 = v112; /*0x5331c1*/
  }
  else
  {
    v113 = 0; /*0x5331c5*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5331fb*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v114 = dword_87F5D8[36]++; /*0x533208*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v114) = v113; /*0x533217*/
  }
  v115 = (unsigned int *)operator new(8); /*0x53321c*/
  if ( v115 ) /*0x533226*/
  {
    v115[1] = 3; /*0x533228*/
    v116 = v115; /*0x533235*/
  }
  else
  {
    v116 = 0; /*0x533239*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x53326f*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v117 = dword_87F5D8[36]++; /*0x53327c*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v117) = v116; /*0x53328b*/
  }
  v118 = (unsigned int *)operator new(8); /*0x533290*/
  if ( v118 ) /*0x53329a*/
  {
    v118[1] = 4; /*0x53329c*/
    v119 = v118; /*0x5332a9*/
  }
  else
  {
    v119 = 0; /*0x5332ad*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x5332e3*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v120 = dword_87F5D8[36]++; /*0x5332f0*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v120) = v119; /*0x5332ff*/
  }
  v121 = (unsigned int *)operator new(8); /*0x533304*/
  if ( v121 ) /*0x53330e*/
  {
    v121[1] = 5; /*0x533310*/
    v122 = v121; /*0x53331d*/
  }
  else
  {
    v122 = 0; /*0x533321*/
  }
  if ( dword_87F5D8[36] < dword_87F5D8[34] /*0x533357*/
    || (IDA_BYTE1(dword_87F5D8[35]) || !dword_87F5D8[34])
    && dword_87F5D8[37] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_87F5D8[32] + 8))(
         &dword_87F5D8[32],
         dword_87F5D8[34] + dword_87F5D8[37],
         0) )
  {
    CreateTeamCommand *v123 = dword_87F5D8[36]++; /*0x533364*/
    *(unsigned int *)(dword_87F5D8[33] + 4 * v123) = v122; /*0x533373*/
  }
  v124 = (unsigned int *)operator new(8); /*0x533378*/
  if ( v124 ) /*0x533382*/
    v175 = (int)CreateTeamCommand::Construct(v124, 6); /*0x53338d*/
  else
    v175 = 0; /*0x533393*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5333a1*/
  v125 = (unsigned int *)operator new(8); /*0x5333a8*/
  if ( v125 ) /*0x5333b2*/
    v175 = (int)CreateTeamCommand::Construct(v125, 7); /*0x5333bd*/
  else
    v175 = 0; /*0x5333c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5333d1*/
  v126 = (unsigned int *)operator new(8); /*0x5333d8*/
  if ( v126 ) /*0x5333e2*/
    v175 = (int)CreateTeamCommand::Construct(v126, 8); /*0x5333ed*/
  else
    v175 = 0; /*0x5333f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533401*/
  v127 = (unsigned int *)operator new(8); /*0x533408*/
  if ( v127 ) /*0x533412*/
    v175 = (int)CreateTeamCommand::Construct(v127, 9); /*0x53341d*/
  else
    v175 = 0; /*0x533423*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533431*/
  v128 = (unsigned int *)operator new(8); /*0x533438*/
  if ( v128 ) /*0x533442*/
    v175 = (int)CreateTeamCommand::Construct(v128, 10); /*0x53344d*/
  else
    v175 = 0; /*0x533453*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533461*/
  v129 = (unsigned int *)operator new(8); /*0x533468*/
  if ( v129 ) /*0x533472*/
    v175 = (int)SelectTeamCommand::Construct(v129, 1); /*0x53347d*/
  else
    v175 = 0; /*0x533483*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533491*/
  v130 = (unsigned int *)operator new(8); /*0x533498*/
  if ( v130 ) /*0x5334a2*/
    v175 = (int)SelectTeamCommand::Construct(v130, 2); /*0x5334ad*/
  else
    v175 = 0; /*0x5334b3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5334c1*/
  v131 = (unsigned int *)operator new(8); /*0x5334c8*/
  if ( v131 ) /*0x5334d2*/
    v175 = (int)SelectTeamCommand::Construct(v131, 3); /*0x5334dd*/
  else
    v175 = 0; /*0x5334e3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5334f1*/
  v132 = (unsigned int *)operator new(8); /*0x5334f8*/
  if ( v132 ) /*0x533502*/
    v175 = (int)SelectTeamCommand::Construct(v132, 4); /*0x53350d*/
  else
    v175 = 0; /*0x533513*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533521*/
  v133 = (unsigned int *)operator new(8); /*0x533528*/
  if ( v133 ) /*0x533532*/
    v175 = (int)SelectTeamCommand::Construct(v133, 5); /*0x53353d*/
  else
    v175 = 0; /*0x533543*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533551*/
  v134 = (unsigned int *)operator new(8); /*0x533558*/
  if ( v134 ) /*0x533562*/
    v175 = (int)SelectTeamCommand::Construct(v134, 6); /*0x53356d*/
  else
    v175 = 0; /*0x533573*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533581*/
  v135 = (unsigned int *)operator new(8); /*0x533588*/
  if ( v135 ) /*0x533592*/
    v175 = (int)SelectTeamCommand::Construct(v135, 7); /*0x53359d*/
  else
    v175 = 0; /*0x5335a3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5335b1*/
  v136 = (unsigned int *)operator new(8); /*0x5335b8*/
  if ( v136 ) /*0x5335c2*/
    v175 = (int)SelectTeamCommand::Construct(v136, 8); /*0x5335cd*/
  else
    v175 = 0; /*0x5335d3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5335e1*/
  v137 = (unsigned int *)operator new(8); /*0x5335e8*/
  if ( v137 ) /*0x5335f2*/
    v175 = (int)SelectTeamCommand::Construct(v137, 9); /*0x5335fd*/
  else
    v175 = 0; /*0x533603*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533611*/
  v138 = (unsigned int *)operator new(8); /*0x533618*/
  if ( v138 ) /*0x533622*/
    v175 = (int)SelectTeamCommand::Construct(v138, 10); /*0x53362d*/
  else
    v175 = 0; /*0x533633*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533641*/
  v139 = (unsigned int *)operator new(8); /*0x533648*/
  if ( v139 ) /*0x533652*/
    v175 = (int)AddTeamCommand::Construct(v139, 1); /*0x53365d*/
  else
    v175 = 0; /*0x533663*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533671*/
  v140 = (unsigned int *)operator new(8); /*0x533678*/
  if ( v140 ) /*0x533682*/
    v175 = (int)AddTeamCommand::Construct(v140, 2); /*0x53368d*/
  else
    v175 = 0; /*0x533693*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5336a1*/
  v141 = (unsigned int *)operator new(8); /*0x5336a8*/
  if ( v141 ) /*0x5336b2*/
    v175 = (int)AddTeamCommand::Construct(v141, 3); /*0x5336bd*/
  else
    v175 = 0; /*0x5336c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5336d1*/
  v142 = (unsigned int *)operator new(8); /*0x5336d8*/
  if ( v142 ) /*0x5336e2*/
    v175 = (int)AddTeamCommand::Construct(v142, 4); /*0x5336ed*/
  else
    v175 = 0; /*0x5336f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533701*/
  v143 = (unsigned int *)operator new(8); /*0x533708*/
  if ( v143 ) /*0x533712*/
    v175 = (int)AddTeamCommand::Construct(v143, 5); /*0x53371d*/
  else
    v175 = 0; /*0x533723*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533731*/
  v144 = (unsigned int *)operator new(8); /*0x533738*/
  if ( v144 ) /*0x533742*/
    v175 = (int)AddTeamCommand::Construct(v144, 6); /*0x53374d*/
  else
    v175 = 0; /*0x533753*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533761*/
  v145 = (unsigned int *)operator new(8); /*0x533768*/
  if ( v145 ) /*0x533772*/
    v175 = (int)AddTeamCommand::Construct(v145, 7); /*0x53377d*/
  else
    v175 = 0; /*0x533783*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533791*/
  v146 = (unsigned int *)operator new(8); /*0x533798*/
  if ( v146 ) /*0x5337a2*/
    v175 = (int)AddTeamCommand::Construct(v146, 8); /*0x5337ad*/
  else
    v175 = 0; /*0x5337b3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5337c1*/
  v147 = (unsigned int *)operator new(8); /*0x5337c8*/
  if ( v147 ) /*0x5337d2*/
    v175 = (int)AddTeamCommand::Construct(v147, 9); /*0x5337dd*/
  else
    v175 = 0; /*0x5337e3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5337f1*/
  v148 = (unsigned int *)operator new(8); /*0x5337f8*/
  if ( v148 ) /*0x533802*/
    v175 = (int)AddTeamCommand::Construct(v148, 10); /*0x53380d*/
  else
    v175 = 0; /*0x533813*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533821*/
  v149 = (unsigned int *)operator new(8); /*0x533828*/
  if ( v149 ) /*0x533832*/
    v175 = (int)CenterTeamCommand::Construct(v149, 1); /*0x53383d*/
  else
    v175 = 0; /*0x533843*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533851*/
  v150 = (unsigned int *)operator new(8); /*0x533858*/
  if ( v150 ) /*0x533862*/
    v175 = (int)CenterTeamCommand::Construct(v150, 2); /*0x53386d*/
  else
    v175 = 0; /*0x533873*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533881*/
  v151 = (unsigned int *)operator new(8); /*0x533888*/
  if ( v151 ) /*0x533892*/
    v175 = (int)CenterTeamCommand::Construct(v151, 3); /*0x53389d*/
  else
    v175 = 0; /*0x5338a3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5338b1*/
  v152 = (unsigned int *)operator new(8); /*0x5338b8*/
  if ( v152 ) /*0x5338c2*/
    v175 = (int)CenterTeamCommand::Construct(v152, 4); /*0x5338cd*/
  else
    v175 = 0; /*0x5338d3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5338e1*/
  v153 = (unsigned int *)operator new(8); /*0x5338e8*/
  if ( v153 ) /*0x5338f2*/
    v175 = (int)CenterTeamCommand::Construct(v153, 5); /*0x5338fd*/
  else
    v175 = 0; /*0x533903*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533911*/
  v154 = (unsigned int *)operator new(8); /*0x533918*/
  if ( v154 ) /*0x533922*/
    v175 = (int)CenterTeamCommand::Construct(v154, 6); /*0x53392d*/
  else
    v175 = 0; /*0x533933*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533941*/
  v155 = (unsigned int *)operator new(8); /*0x533948*/
  if ( v155 ) /*0x533952*/
    v175 = (int)CenterTeamCommand::Construct(v155, 7); /*0x53395d*/
  else
    v175 = 0; /*0x533963*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533971*/
  v156 = (unsigned int *)operator new(8); /*0x533978*/
  if ( v156 ) /*0x533982*/
    v175 = (int)CenterTeamCommand::Construct(v156, 8); /*0x53398d*/
  else
    v175 = 0; /*0x533993*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5339a1*/
  v157 = (unsigned int *)operator new(8); /*0x5339a8*/
  if ( v157 ) /*0x5339b2*/
    v175 = (int)CenterTeamCommand::Construct(v157, 9); /*0x5339bd*/
  else
    v175 = 0; /*0x5339c3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x5339d1*/
  v158 = (unsigned int *)operator new(8); /*0x5339d8*/
  if ( v158 ) /*0x5339e2*/
    v175 = (int)CenterTeamCommand::Construct(v158, 10); /*0x5339ed*/
  else
    v175 = 0; /*0x5339f3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a01*/
  v159 = (unsigned int *)operator new(8); /*0x533a08*/
  if ( v159 ) /*0x533a12*/
    v175 = (int)TauntCommandClass::Construct(v159, 1); /*0x533a1d*/
  else
    v175 = 0; /*0x533a23*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a31*/
  v160 = (unsigned int *)operator new(8); /*0x533a38*/
  if ( v160 ) /*0x533a42*/
    v175 = (int)TauntCommandClass::Construct(v160, 2); /*0x533a4d*/
  else
    v175 = 0; /*0x533a53*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a61*/
  v161 = (unsigned int *)operator new(8); /*0x533a68*/
  if ( v161 ) /*0x533a72*/
    v175 = (int)TauntCommandClass::Construct(v161, 3); /*0x533a7d*/
  else
    v175 = 0; /*0x533a83*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533a91*/
  v162 = (unsigned int *)operator new(8); /*0x533a98*/
  if ( v162 ) /*0x533aa2*/
    v175 = (int)TauntCommandClass::Construct(v162, 4); /*0x533aad*/
  else
    v175 = 0; /*0x533ab3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533ac1*/
  v163 = (unsigned int *)operator new(8); /*0x533ac8*/
  if ( v163 ) /*0x533ad2*/
    v175 = (int)TauntCommandClass::Construct(v163, 5); /*0x533add*/
  else
    v175 = 0; /*0x533ae3*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533af1*/
  v164 = (unsigned int *)operator new(8); /*0x533af8*/
  if ( v164 ) /*0x533b02*/
    v175 = (int)TauntCommandClass::Construct(v164, 6); /*0x533b0d*/
  else
    v175 = 0; /*0x533b13*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b21*/
  v165 = (unsigned int *)operator new(8); /*0x533b28*/
  if ( v165 ) /*0x533b32*/
    v175 = (int)TauntCommandClass::Construct(v165, 7); /*0x533b3d*/
  else
    v175 = 0; /*0x533b43*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b51*/
  v166 = (unsigned int *)operator new(8); /*0x533b58*/
  if ( v166 ) /*0x533b62*/
    v175 = (int)TauntCommandClass::Construct(v166, 8); /*0x533b6d*/
  else
    v175 = 0; /*0x533b73*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533b81*/
  v167 = (unsigned int *)operator new(4); /*0x533b88*/
  if ( v167 ) /*0x533b92*/
    v175 = (int)ScreenCaptureCommandClass::Constructor(v167); /*0x533b9b*/
  else
    v175 = 0; /*0x533ba1*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533baf*/
  v168 = (unsigned int *)operator new(4); /*0x533bb6*/
  if ( v168 ) /*0x533bc0*/
    v175 = (int)PageUserCommandClass::PageUserCommandClass(v168); /*0x533bc9*/
  else
    v175 = 0; /*0x533bcf*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533bdd*/
  v169 = (unsigned int *)operator new(4); /*0x533be4*/
  if ( v169 ) /*0x533bee*/
    v175 = (int)CursorPositionCommandClass::Constructor(v169); /*0x533bf7*/
  else
    v175 = 0; /*0x533bfd*/
  DynamicVector::Add_Alt2(&dword_87F5D8[32], &v175); /*0x533c0b*/
  v170 = (unsigned int *)operator new(4); /*0x533c12*/
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
// 0x5387d0
  return SortedArray::Append((int)&dword_87F5D8[42], &v175, &v174); /*0x533d18*/
}
} // namespace gamemd

// 0x533FD0
namespace gamemd {
DSurface * * AllocateSurfaceScreenSurfaces(int a1, ObjectClass * aP1, ObjectClass * aP2, int a4, char a5)
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
      (**(void (***)(int, int))DSurface_Alternate)(DSurface_Alternate, 1); /*0x53400b*/
    DSurface_Alternate = 0; /*0x53400d*/
  }
  if ( g_DSurface_Hidden ) /*0x534019*/
  {
    Debug::Log(aDeletingHidden); /*0x534020*/
    if ( g_DSurface_Hidden ) /*0x534030*/
      (**(void (***)(int, int))g_DSurface_Hidden)(g_DSurface_Hidden, 1); /*0x534036*/
    g_DSurface_Hidden = 0; /*0x534038*/
  }
  if ( DSurface_Composite ) /*0x534044*/
  {
    Debug::Log(aDeletingCompos); /*0x53404b*/
    if ( DSurface_Composite ) /*0x53405b*/
      (**(void (***)(int, int))DSurface_Composite)(DSurface_Composite, 1); /*0x534061*/
    DSurface_Composite = 0; /*0x534063*/
  }
  if ( DSurface_Tile ) /*0x53406f*/
  {
    Debug::Log(aDeletingTilesu); /*0x534076*/
    if ( DSurface_Tile ) /*0x534086*/
      (**(void (***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53408c*/
    DSurface_Tile = 0; /*0x53408e*/
  }
  if ( DSurface_Sidebar ) /*0x53409a*/
  {
    Debug::Log(aDeletingSideba); /*0x5340a1*/
    if ( DSurface_Sidebar ) /*0x5340b1*/
      (**(void (***)(int, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x5340b7*/
    DSurface_Sidebar = 0; /*0x5340b9*/
  }
  v7 = Game_bVideoBackBuffer == 0; /*0x5340d2*/
  v29 = byte_A8EB96 == 0; /*0x5340d7*/
  if ( a5 && a1->Height > 0 && a1->LockCount > 0 ) /*0x5340e8*/
  {
    v8 = (char *)RA2_OPNEW(0x24u); /*0x5340ec*/
    if ( v8 ) /*0x5340f6*/
      v9 = DSurface::Construct(v8, a1->Height, a1->LockCount, 0, 0); /*0x534104*/
    else
      v9 = 0; /*0x53410b*/
    g_DSurface_Hidden = (int)v9; /*0x53410d*/
    (*(void (**)(char *, unsigned int))(v9->nextArrayIndex)(v9, 0); /*0x534117*/
    v10 = g_INI_Key_VRAM; /*0x534122*/
    if ( !*(unsigned char *)(g_DSurface_Hidden + 25) ) /*0x53411f*/
      v10 = g_Str_SYSTEM_MEMORY; /*0x53412b*/
    Debug::Log("HiddenSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v10); /*0x53413e*/
  }
  if ( aP1->vtable3 > 0 && aP1->vtable4 > 0 ) /*0x53414e*/
  {
    v11 = (char *)RA2_OPNEW(0x24u); /*0x534152*/
    if ( v11 ) /*0x53415c*/
      v12 = DSurface::Construct(v11, aP1->vtable3, aP1->vtable4, v7, 1); /*0x534172*/
    else
      v12 = 0; /*0x534179*/
    DSurface_Composite = (int)v12; /*0x53417b*/
    (*(void (**)(char *, unsigned int))(v12->nextArrayIndex)(v12, 0); /*0x534185*/
    v13 = g_INI_Key_VRAM; /*0x534190*/
    if ( !*(unsigned char *)(DSurface_Composite + 25) ) /*0x53418d*/
      v13 = g_Str_SYSTEM_MEMORY; /*0x534199*/
    Debug::Log("CompositeSurface (%dx%d) %s ENABLE_3D\n", aP1->vtable3, aP1->vtable4, v13); /*0x5341ac*/
  }
  if ( aP2->vtable3 > 0 && aP2->vtable4 > 0 ) /*0x5341c4*/
  {
    v14 = (char *)RA2_OPNEW(0x24u); /*0x5341c8*/
    if ( v14 ) /*0x5341d2*/
      v15 = DSurface::Construct(v14, aP2->vtable3, aP2->vtable4, v7, 1); /*0x5341e8*/
    else
      v15 = 0; /*0x5341ef*/
    DSurface_Tile = (int)v15; /*0x5341f1*/
    (*(void (**)(char *, unsigned int))(v15->nextArrayIndex)(v15, 0); /*0x5341fc*/
    v16 = g_INI_Key_VRAM; /*0x534207*/
    if ( !*(unsigned char *)(DSurface_Tile + 25) ) /*0x534204*/
      v16 = g_Str_SYSTEM_MEMORY; /*0x534210*/
    Debug::Log("TileSurface (%dx%d) %s ENABLE_3D\n", aP2->vtable3, aP2->vtable4, v16); /*0x534223*/
  }
  if ( DSurface_Composite && DSurface_Tile && *(unsigned char *)(DSurface_Composite + 25) != *(unsigned char *)(DSurface_Tile + 25) ) /*0x53424c*/
  {
    if ( DSurface_Composite ) /*0x534256*/
      (**(void (***)(int))DSurface_Composite)(1); /*0x53425c*/
    if ( DSurface_Tile ) /*0x534266*/
      (**(void (***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53426c*/
    Debug::Log(aMovingTilesurf); /*0x534273*/
    v17 = (char *)RA2_OPNEW(0x24u); /*0x53427a*/
    if ( v17 ) /*0x534286*/
      DSurface_Composite = (int)DSurface::Construct(v17, aP1->vtable3, aP1->vtable4, 1, 1); /*0x53429b*/
    else
      DSurface_Composite = 0; /*0x5342a2*/
    v18 = (char *)RA2_OPNEW(0x24u); /*0x5342aa*/
    if ( v18 ) /*0x5342b4*/
      DSurface_Tile = (int)DSurface::Construct(v18, aP2->vtable3, aP2->vtable4, 1, 1); /*0x5342c9*/
    else
      DSurface_Tile = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    v19 = (char *)RA2_OPNEW(0x24u); /*0x5342eb*/
    if ( v19 ) /*0x5342f5*/
      v20 = DSurface::Construct(v19, *(unsigned int *)(a4 + 8), *(unsigned int *)(a4 + 12), v29, 0); /*0x53430f*/
    else
      v20 = 0; /*0x534316*/
    DSurface_Sidebar = (int)v20; /*0x534318*/
    (*(void (**)(char *, unsigned int))(v20->nextArrayIndex)(v20, 0); /*0x534323*/
    v21 = g_INI_Key_VRAM; /*0x53432e*/
    if ( !*(unsigned char *)(DSurface_Sidebar + 25) ) /*0x53432b*/
      v21 = g_Str_SYSTEM_MEMORY; /*0x534337*/
    Debug::Log("SidebarSurface (%dx%d) %s\n", *(unsigned int *)(a4 + 8), *(unsigned int *)(a4 + 12), v21); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( a1->Height <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( a1->LockCount > 0 ) /*0x53436a*/
    {
      v22 = (char *)RA2_OPNEW(0x24u); /*0x53436e*/
      if ( v22 ) /*0x534378*/
        v23 = DSurface::Construct(v22, a1->Height, a1->LockCount, 0, 0); /*0x534388*/
      else
        v23 = 0; /*0x53438f*/
      g_DSurface_Hidden = (int)v23; /*0x534391*/
      (*(void (**)(char *, unsigned int))(v23->nextArrayIndex)(v23, 0); /*0x53439c*/
      v24 = g_INI_Key_VRAM; /*0x5343a7*/
      if ( !*(unsigned char *)(g_DSurface_Hidden + 25) ) /*0x5343a4*/
        v24 = g_Str_SYSTEM_MEMORY; /*0x5343b0*/
      Debug::Log("HiddenSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v24); /*0x5343c3*/
    }
  }
  if ( a1->Height > 0 && a1->LockCount > 0 ) /*0x5343d7*/
  {
    v25 = (char *)RA2_OPNEW(0x24u); /*0x5343db*/
    if ( v25 ) /*0x5343e5*/
      v26 = DSurface::Construct(v25, a1->Height, a1->LockCount, 1, 0); /*0x5343f5*/
    else
      v26 = 0; /*0x5343fc*/
    DSurface_Alternate = (int)v26; /*0x5343fe*/
    (*(void (**)(char *, unsigned int))(v26->nextArrayIndex)(v26, 0); /*0x534409*/
    v27 = g_INI_Key_VRAM; /*0x534414*/
    if ( !*(unsigned char *)(DSurface_Alternate + 25) ) /*0x534411*/
      v27 = g_Str_SYSTEM_MEMORY; /*0x53441d*/
    Debug::Log("AlternateSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v27); /*0x534430*/
  }
  return 1; /*0x534438*/
}
}
// 0x5349C0
namespace gamemd {
void TheaterClass_LoadMIX(int a1)
{
  int v2; // esi
  const char *v3; // ebx
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // eax
  unsigned char *v11; // eax
  int v12; // esi
  char v13; // dl
  char v14; // cl
  unsigned char *v15; // eax
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
  int16_t v29; // [esp+14h] [ebp-5Ch]
  int16_t v30; // [esp+14h] [ebp-5Ch]
  int16_t v31; // [esp+14h] [ebp-5Ch]
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
  *((unsigned int *)dword_A8B230 + 1174) = a1; /*0x534a5d*/
  ((Multiplayer *)(dword_A8B238))->ShowProgress(8); /*0x534a63*/
  if ( *((unsigned int *)dword_A8B230 + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( dword_884E0C ) /*0x534a8a*/
      (**(void (***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x534a90*/
    dword_884E0C = 0; /*0x534a97*/
    if ( *((unsigned int *)dword_A8B230 + 1174) == 1 ) /*0x534aa4*/
    {
      v4 = RA2_OPNEW(0x28u); /*0x534aa8*/
      if ( v4 ) /*0x534ab2*/
        v5 = ((MixFileClass *)(v4))->FromFile(v35, (int)&dword_886980); /*0x534ac0*/
      else
        v5 = 0; /*0x534ac7*/
      dword_884E0C = (int)v5; /*0x534acc*/
      ReturnTrue(0); /*0x534ad1*/
    }
    if ( dword_884E08 ) /*0x534ade*/
      (**(void (***)(int, int))dword_884E08)(dword_884E08, 1); /*0x534ae4*/
    v6 = RA2_OPNEW(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      dword_884E08 = (int)((MixFileClass *)(v6))->FromFile(Source, (int)&dword_886980); /*0x534b05*/
    else
      dword_884E08 = 0; /*0x534b0c*/
    if ( dword_884E10 ) /*0x534b1a*/
      (**(void (***)(int, int))dword_884E10)(dword_884E10, 1); /*0x534b20*/
    v7 = RA2_OPNEW(0x28u); /*0x534b24*/
    if ( v7 ) /*0x534b2e*/
      v8 = ((MixFileClass *)(v7))->FromFile(v36, (int)&dword_886980); /*0x534b3c*/
    else
      v8 = 0; /*0x534b43*/
    dword_884E10 = (int)v8; /*0x534b48*/
    ReturnTrue(0); /*0x534b4d*/
    ReturnTrue(0); /*0x534b59*/
    ((Multiplayer *)(dword_A8B238))->ShowProgress(6); /*0x534b65*/
    if ( dword_884E20 ) /*0x534b72*/
      (**(void (***)(int, int))dword_884E20)(dword_884E20, 1); /*0x534b78*/
    v9 = RA2_OPNEW(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      dword_884E20 = (int)((MixFileClass *)(v9))->FromFile(v37, (int)&dword_886980); /*0x534b99*/
    else
      dword_884E20 = 0; /*0x534ba0*/
    if ( dword_884E1C ) /*0x534bae*/
      (**(void (***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x534bb4*/
    v10 = RA2_OPNEW(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      dword_884E1C = (int)((MixFileClass *)(v10))->FromFile(v38, (int)&dword_886980); /*0x534bd5*/
    else
      dword_884E1C = 0; /*0x534bdc*/
    ((Multiplayer *)(dword_A8B238))->ShowProgress(12); /*0x534be9*/
    wsprintfA(Source, "%s.PAL", v3); /*0x534bf9*/
    v11 = (unsigned char *)SearchMIXFile(Source, 0); /*0x534c04*/
    if ( v11 ) /*0x534c0b*/
    {
      v12 = 0; /*0x534c0d*/
      do /*0x534c56*/
      {
        v13 = v11[1]; /*0x534c11*/
        v14 = 4 * *v11; /*0x534c14*/
        v15 = v11 + 1; /*0x534c17*/
        IDA_LOBYTE(v29) = v14; /*0x534c18*/
        v16 = 4 * v15[1]; /*0x534c23*/
        v11 = v15 + 2; /*0x534c28*/
        v17 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (v12 % 256); /*0x534c42*/
        ++v12; /*0x534c49*/
        IDA_HIBYTE(v29) = 4 * v13; /*0x534c2f*/
        *(unsigned short *)v17 = v29; /*0x534c4a*/
        v17[2] = v16; /*0x534c53*/
      }
      while ( v12 < 256 ); /*0x534c56*/
    }
    else
    {
      for ( i = 0; i < 256; ++i ) /*0x534c5a*/
      {
        IDA_LOBYTE(v30) = i; /*0x534c63*/
        IDA_HIBYTE(v30) = -1 - i; /*0x534c67*/
        v19 = 4 * i; /*0x534c6d*/
        v20 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (i % 256); /*0x534c85*/
        *(unsigned short *)v20 = v30; /*0x534c8d*/
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
      IDA_LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      v24 = DataGlobal_886382[3 * (j % 256)]; /*0x534d0c*/
      IDA_HIBYTE(v31) = 4 * DataGlobal_886381[3 * (j % 256)]; /*0x534d16*/
      *(unsigned short *)v23 = v31; /*0x534d23*/
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
        ((Multiplayer *)(dword_A8B238))->ShowProgress(v28); /*0x534d9a*/
        v26 = v28; /*0x534d9f*/
      }
      Event::Dispatch(); /*0x534da1*/
    }
    FileSystem::InitExtensionState(a1); /*0x534db4*/
    LoadTheaterClassMIX_Load_717840(); /*0x534db9*/
    ((Multiplayer *)(dword_A8B238))->ShowProgress(25); /*0x534dc5*/
  }
}
}
// 0x5353D0
namespace gamemd {
ObjectClass * * Radar_FindClosestEnemy(short * a1, int a2)
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
      v4 = *((unsigned int *)dword_A8ECBC + v3); /*0x535422*/
      if ( v4 && (v4->abstractFlags & 1) != 0 ) /*0x535433*/
      {
        v15 = 2; /*0x53543b*/
        if ( v4->isBerserk ) /*0x535435*/
        {
          v15 = 0; /*0x535447*/
        }
        else if ( (*(uint8_t (**)(int))(v4->currentBurstIndex)(v4) ) /*0x535451*/
        {
          v15 = 1; /*0x53545b*/
        }
        else if ( (*(uint8_t (**)(int))(v4->locomotorTarget)(v4) ) /*0x535469*/
        {
          v15 = 3; /*0x535477*/
          if ( (*(int (**)(int))(v4->fallRate)(v4) != 6 ) /*0x535485*/
          {
            v15 = 4; /*0x53548b*/
            if ( TechnoClass::GetValue((unsigned int *)v4, -1) > 0 ) /*0x53549a*/
              v15 = 5; /*0x53549c*/
          }
        }
      }
      if ( v15 < v16 ) /*0x5354ae*/
        goto LABEL_24; /*0x5354ae*/
      v5 = 0x7FFFFFFF; /*0x5354b8*/
      if ( a1 || a2 ) /*0x5354ce*/
      {
        v6 = (int *)(*(int (**)(int, char *))(v4->u32_48)(v4, v22); /*0x5354dd*/
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
          v13 = (int *)(*(int (**)(int, char *))(*(unsigned int *)a2 + 72))(a2, v23); /*0x53551e*/
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
}
// 0x538D40
namespace gamemd {
void sub_538D40()
{
  uint8_t *v1; // eax
  uint8_t *v2; // edi
  int v3; // ecx
  uint8_t *v4; // eax
  int v5; // ecx
  int v6; // eax
  uint8_t *v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  uint8_t *v13; // ecx
  int v14; // edx
  int v15; // esi
  uint8_t *v16; // ecx
  int v17; // eax
  char *v18; // ecx
  int result; // eax
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  char v22; // [esp+18h] [ebp-24h]
  int v23; // [esp+1Ch] [ebp-20h]
  char *v24; // [esp+20h] [ebp-1Ch]
  uint8_t *v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+30h] [ebp-Ch]
  int v29; // [esp+34h] [ebp-8h]
  int v30; // [esp+38h] [ebp-4h]

  v1 = (uint8_t *)dword_A8F918; /*0x538d43*/
  v24 = &byte_A8F91C; /*0x538d4c*/
  while ( 1 ) /*0x538d60*/
  {
    v2 = (uint8_t *)dword_A8F918; /*0x538d60*/
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
      v13 = (uint8_t *)dword_A8F918; /*0x538db8*/
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
}
// 0x538E70
namespace gamemd {
AbstractClass * * E4Recv_538E70::sub_538E70(double a2)
{

  int v3; // edi
  char *v4; // esi
  int v5; // eax
  uint8_t v6; // cl
  int v7; // eax
  int v8; // ecx
  int16_t result; // ax
  unsigned char v10[4]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  Color v12; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Eh] [ebp-6h]

  v3 = 0; /*0x538e78*/
  do
  {
    v4 = (char *)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
    v5 = ComputeColorSaturation((unsigned int)v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(unsigned char *)(v5 + 2); /*0x538ea1*/
    LOWORD(v12.Color_field_00) = *(unsigned short *)v5; /*0x538ea4*/
    LOBYTE(v14) = v6; /*0x538ea9*/
    BYTE2(v12.Color_field_00) = v6; /*0x538eb7*/
    v13 = v6; /*0x538ebb*/
    LOWORD(v7) = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    BYTE2(v12.Color_field_00) = v7 <= 0 ? 0 : v7;
    v8 = ((Color *)(&v12))->ConvertToRGB((int)&v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(unsigned short *)v8; /*0x538efb*/
    LOBYTE(v8) = *(unsigned char *)(v8 + 2); /*0x538efe*/
    *(unsigned short *)v4 = result; /*0x538f01*/
    v4[2] = v8; /*0x538f04*/
  }
  while ( v3 < 256 );
  return result; /*0x538f0d*/

}
}
// 0x538F20
namespace gamemd {
char sub_538F20(int a1, int a2, char * Source)
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
      if ( (uint8_t)((CCFileClass *)(&v20))->Open(0) ) /*0x538f62*/
      {
        FileClass::Load(&v20, (const CHAR *)1); /*0x538f71*/
        CCFileClass::Read(&v20, &byte_A8F91C, 0x10000); /*0x538f84*/
        CCFileClass::Reset(&v20); /*0x538f8d*/
        byte_A9F91C = 0; /*0x538f92*/
      }
      v20.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x538f9d*/
      v22 = 0; /*0x538fa5*/
      ((Vector *)((int)v21))->Clear(); /*0x538fad*/
      v20.FileClass = (FileClass)&off_7E1668; /*0x538fb6*/
      ((BufferIOFileClass *)(&v20))->Dtor(); /*0x538fba*/
    }
    if ( byte_A9F91C ) /*0x538fc6*/
      sub_538D40(v16); /*0x538fc8*/
  }
  if ( Source ) /*0x538fcf*/
  {
    CCFileClass::Construct(&v20, Source); /*0x538fd6*/
    if ( !(uint8_t)((CCFileClass *)(&v20))->Open(0) ) /*0x538fe1*/
    {
      FileClass::Load(&v20, (const CHAR *)2); /*0x538ff0*/
      FileClass::Write(&v20, &byte_A8F91C, 0x10000u); /*0x539003*/
      CCFileClass::Reset(&v20); /*0x53900c*/
    }
    v20.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x539015*/
    v22 = 0; /*0x53901d*/
    ((Vector *)((int)v21))->Clear(); /*0x539025*/
    v20.FileClass = (FileClass)&off_7E1668; /*0x53902e*/
    ((BufferIOFileClass *)(&v20))->Dtor(); /*0x539032*/
  }
  DDraw::WaitForIdle((DDraw *)v16); /*0x539037*/
  v5 = (int *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a1 + 92))(a1, 0, 0); /*0x539049*/
  if ( v5 ) /*0x53904d*/
    v17 = 1; /*0x53904f*/
  v6 = (char *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, 0, 0); /*0x539062*/
  if ( v6 ) /*0x539066*/
  {
    v18 = 1; /*0x53906c*/
    if ( !v17 ) /*0x539073*/
      return (*(char (**)(int))(*(unsigned int *)a2 + 96))(a2); /*0x5390fa*/
    v7 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x539080*/
    v8 = 2 * (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x53908d*/
    if ( dword_A9F920 ) /*0x539092*/
    {
      if ( dword_A9F920 == 1 ) /*0x539095*/
      {
        v14 = v8; /*0x5390b2*/
        v10 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x5390b6*/
        sub_7E00A6(v5, v6, v10, v7, v14); /*0x5390bf*/
      }
      else if ( dword_A9F920 == 2 ) /*0x539098*/
      {
        v13 = v8; /*0x53909a*/
        v9 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x5390a0*/
        sub_7E01FB(v5, v6, v9, v7, v13); /*0x5390a9*/
      }
    }
    else
    {
      v15 = v8; /*0x5390c6*/
      v11 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x5390cc*/
      sub_7E0001(v5, v6, v11, v7, v15); /*0x5390d5*/
    }
  }
  if ( v17 ) /*0x5390e3*/
    (*(void (**)(int))(*(unsigned int *)a1 + 96))(a1); /*0x5390e9*/
  result = v18; /*0x5390ec*/
  if ( v18 ) /*0x5390f2*/
    return (*(char (**)(int))(*(unsigned int *)a2 + 96))(a2); /*0x5390f2*/
  return result; /*0x5390fd*/
}
}
// 0x539560
namespace gamemd {
int sub_539560()
{
  LightningStorm_Coords = dword_A9F9F8; /*0x539565*/
  return dword_A9F9F8; /*0x53956a*/
}
}
// 0x539570
namespace gamemd {
int sub_539570()
{
  PsyDom_Coords = dword_A9F9F8; /*0x539575*/
  return dword_A9F9F8; /*0x53957a*/
}
}
// 0x53A6C0
namespace gamemd {
void SuperWeapon_Update()
{
  int i; // esi
  unsigned int *v2; // ecx
  int v3; // edi
  int v4; // eax
  int j; // edi
  unsigned int *v7; // esi
  int v8; // ebp
  int v9; // eax
  int *v10; // eax
  int k; // esi
  unsigned int *v13; // ecx
  int v14; // edi
  int v15; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ebp
  int v21; // ebp
  int16_t v22; // ax
  int16_t v23; // ax
  int v24; // edi
  unsigned int *v25; // esi
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
  int16_t v37[2]; // [esp+14h] [ebp-14h] BYREF
  int v38; // [esp+18h] [ebp-10h]
  unsigned char v39[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( NukeFlash_Status == 1 ) /*0x53a6cf*/
  {
    if ( NukeFlash_Duration != -1 && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) ) /*0x53a6ea*/
    {
      NukeFlash_Status = 2; /*0x53a6ec*/
      NukeFlash_Duration = 15; /*0x53a6f6*/
      NukeFlash_StartTime = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x53a711*/
    }
  }
  else if ( NukeFlash_Status == 2 /*0x53a736*/
         && NukeFlash_Duration != -1
         && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) )
  {
    NukeFlash_Status = 0; /*0x53a738*/
  }
  UpdatePsyDom(v34); /*0x53a742*/
  UpdateChronosphereEffect(v35); /*0x53a747*/
  if ( dword_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = dword_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      v2 = (unsigned int *)*((unsigned int *)dword_A9FA1C + i); /*0x53a760*/
      v3 = v2[43]; /*0x53a765*/
      v4 = (*(int (**)(unsigned int *))(*v2 + 136))(v2); /*0x53a76b*/
      if ( v3 >= *(int16_t *)((*(int (**)(int))(*(unsigned int *)v4 + 156))(v4) + 6) / 2 && i < dword_A9FA28 ) /*0x53a790*/
      {
        i = i; /*0x53a793*/
        if ( i < --dword_A9FA28 ) /*0x53a79d*/
        {
          do /*0x53a7b5*/
          {
            ++i; /*0x53a7a5*/
            *((unsigned int *)dword_A9FA1C + i - 1) = *((unsigned int *)dword_A9FA1C + i); /*0x53a7a9*/
          }
          while ( i < dword_A9FA28 ); /*0x53a7b5*/
        }
      }
    }
  }
  for ( j = dword_A9FA70 - 1; j >= 0; --j ) /*0x53a7c4*/
  {
    v7 = (unsigned int *)*((unsigned int *)dword_A9FA64 + j); /*0x53a7d0*/
    v8 = v7[43]; /*0x53a7d7*/
    v9 = (*(int (**)(unsigned int *))(*v7 + 136))(v7); /*0x53a7dd*/
    if ( v8 > *(int16_t *)((*(int (**)(int))(*(unsigned int *)v9 + 156))(v9) + 6) / 2 ) /*0x53a7f8*/
    {
      v10 = (int *)(*(int (**)(unsigned int *, unsigned char *))(*v7 + 72))(v7, v39); /*0x53a803*/
      LightningStorm::Strike2(*v10, v10[1], v10[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        j = j; /*0x53a82b*/
        if ( j < --dword_A9FA70 ) /*0x53a835*/
        {
          do /*0x53a84d*/
          {
            ++j; /*0x53a83d*/
            *((unsigned int *)dword_A9FA64 + j - 1) = *((unsigned int *)dword_A9FA64 + j); /*0x53a841*/
          }
          while ( j < dword_A9FA70 ); /*0x53a84d*/
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
      v13 = (unsigned int *)*((unsigned int *)dword_A9F9D4 + k); /*0x53a86e*/
      v14 = v13[43]; /*0x53a873*/
      v15 = (*(int (**)(unsigned int *))(*v13 + 136))(v13); /*0x53a879*/
      if ( v14 >= *(int16_t *)((*(int (**)(int))(*(unsigned int *)v15 + 156))(v15) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        k = k; /*0x53a89d*/
        if ( k < --dword_A9F9E0 ) /*0x53a8a7*/
        {
          do /*0x53a8bf*/
          {
            ++k; /*0x53a8af*/
            *((unsigned int *)dword_A9F9D4 + k - 1) = *((unsigned int *)dword_A9F9D4 + k); /*0x53a8b3*/
          }
          while ( k < dword_A9F9E0 ); /*0x53a8bf*/
        }
      }
    }
  }
  if ( !LightningStorm_Active || LightningStorm_TimeToEnd ) /*0x53a913*/
  {
    IDA_LOBYTE(v17) = LightningStorm_Deferment; /*0x53aa9f*/
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
          IDA_LOBYTE(v17) = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6064); /*0x53aae9*/
          if ( (unsigned char)v17 ) /*0x53aaf1*/
          {
            v31 = 3; /*0x53aaf8*/
            if ( dword_A83D4C ) /*0x53aaff*/
              v31 = *(unsigned int *)&dword_A83D4C[134].__pad_90[4]; /*0x53ab01*/
            ((VoxClass *)(&stru_828080))->FindAndPlay(-1); /*0x53ab11*/
            StringCSF = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            IDA_LOBYTE(v17) = MessageListClass::AddMessage( /*0x53ab40*/
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
        IDA_LOBYTE(v17) = LightningStorm::Start(LightningStorm_Duration, 0, LightningStorm_Coords, LightningStorm_Owner); /*0x53aaca*/
      }
    }
  }
  else
  {
    IDA_LOBYTE(v17) = LightningStorm_Duration; /*0x53a919*/
    v18 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x53a91e*/
    if ( LightningStorm_Duration == -1 /*0x53a933*/
      || LightningStorm_Duration + LightningStorm_StartTime >= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) )
    {
      v19 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a944*/
      if ( !(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) % *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6048)) ) /*0x53a94d*/
      {
        LightningStorm::Strike(LightningStorm_Coords); /*0x53a95e*/
        v18 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x53a963*/
        v19 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x53a969*/
      }
      v17 = v18 / v19->EngineerCaptureLevel; /*0x53a972*/
      if ( !(v18 % v19->EngineerCaptureLevel) ) /*0x53a972*/
      {
        v20 = v19->TalkBubbleTime; /*0x53a980*/
        v38 = 3; /*0x53a986*/
        v21 = v20 >> 1; /*0x53a98e*/
        while ( 1 ) /*0x53a9a7*/
        {
          *(unsigned int *)v37 = LightningStorm_Coords; /*0x53a9a7*/
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
              v25 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**((unsigned int **)dword_A9F9D4 + v24) + 72))( /*0x53a9ef*/
                                *((unsigned int *)dword_A9F9D4 + v24),
                                v39);
              v26 = (int16_t)(*v25 / 256); /*0x53aa0d*/
              v27 = v37[0] - v26; /*0x53aa18*/
              if ( v27 < 0 ) /*0x53aa1a*/
                v27 = v26 - v37[0]; /*0x53aa1c*/
              v28 = v37[1] - (int16_t)(v25[1] / 256); /*0x53aa26*/
              if ( v28 < 0 ) /*0x53aa28*/
                v28 = (int16_t)(v25[1] / 256) - v37[1]; /*0x53aa2a*/
              if ( v27 + v28 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6060) ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v24 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v36 = 1; /*0x53aa48*/
          }
  LABEL_52:
          if ( (uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(v37) && !v36 ) /*0x53aa66*/
            break; /*0x53aa66*/
          IDA_LOBYTE(v17) = --v38; /*0x53aa6c*/
          if ( v38 <= 0 ) /*0x53aa73*/
            return v17; /*0x53aa73*/
        }
        IDA_LOBYTE(v17) = v38; /*0x53aa81*/
        if ( v38 > 0 ) /*0x53aa87*/
          IDA_LOBYTE(v17) = LightningStorm::Strike(*(int *)v37); /*0x53aa92*/
      }
    }
    else
    {
      LightningStorm_TimeToEnd = 1; /*0x53a935*/
    }
  }
  return v17; /*0x53a93c*/
}
}
// 0x53AF40
namespace gamemd {
AnimClass * * PsyDom::Update(void *a1, void *a2, void *a3, void *a4)
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
      v4 = *(unsigned int *)(PsyDom_Anim + 172); /*0x53af6f*/
      if ( (double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 772) * 0.01 <= (double)v4 /*0x53afaa*/
                                                                                         / (double)*(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)(PsyDom_Anim + 200) + 156))(*(unsigned int *)(PsyDom_Anim + 200)) + 6) )
      {
        PsyDom_Status = 3; /*0x53afb0*/
        PsyDom::Fire(v3); /*0x53afba*/
      }
      break; /*0x53afc1*/
    case 3: /*0x53af50*/
      v1 = *(unsigned int *)(PsyDom_Anim + 172); /*0x53afcd*/
      if ( *(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)(PsyDom_Anim + 200) + 156))(*(unsigned int *)(PsyDom_Anim + 200)) /*0x53afe4*/
                      + 6)
         - v1 <= 10 )
        PsyDom_Status = 4; /*0x53afe6*/
      break; /*0x53aff2*/
    case 4: /*0x53af50*/
      v2 = *(unsigned int *)(PsyDom_Anim + 172); /*0x53affe*/
      if ( *(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)(PsyDom_Anim + 200) + 156))(*(unsigned int *)(PsyDom_Anim + 200)) /*0x53b015*/
                      + 6)
         - v2 <= 1 )
      {
        PsyDom_Status = 5; /*0x53b01d*/
        *(unsigned int *)&PsyDom_Coords = dword_A9F9F8; /*0x53b027*/
        PsyDom_Anim = 0; /*0x53b02d*/
        ScenarioClass::UpdateLighting(); /*0x53b037*/
      }
      break; /*0x53b03e*/
    case 5: /*0x53af50*/
      if ( dword_A8B230[378].vtable2 == dword_A8B230[378].vtable1 ) /*0x53b052*/
        PsyDom_Status = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }

}
}
// 0x53B460
namespace gamemd {
void sub_53B460(int a1)
{
  char *v3; // esi
  int v4; // eax
  char *v5; // eax
  int v6; // [esp-10h] [ebp-14h]

  if ( a1 > 0 ) /*0x53b465*/
  {
    if ( g_ChronoEffectState ) /*0x53b473*/
    {
      (**(void (***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b479*/
      g_ChronoEffectState = 0; /*0x53b47b*/
    }
    v3 = (char *)RA2_OPNEW(0x24u); /*0x53b48d*/
    if ( v3 ) /*0x53b494*/
    {
      v6 = (*(int (**)(AudioStream *))(*(unsigned int *)DSurface_Composite->__pad_0 + 128))(DSurface_Composite); /*0x53b4ae*/
      v4 = (*(int (**)(AudioStream *))(*(unsigned int *)DSurface_Composite->__pad_0 + 124))(DSurface_Composite); /*0x53b4b1*/
      v5 = DSurface::Construct(v3, v4, v6, 1, 0); /*0x53b4b7*/
    }
    else
    {
      v5 = 0; /*0x53b4be*/
    }
    g_ChronoEffectState = (int)v5; /*0x53b4c8*/
    (*(void (**)(char *, AudioStream *, unsigned int, int))(v5->vtable2)(v5, DSurface_Composite, 0, 1); /*0x53b4d4*/
    flt_A9FAA0 = 0.0; /*0x53b4d7*/
    flt_A9FAA4 = 0.0; /*0x53b4e1*/
    ChronoScreenEffect_Duration = a1; /*0x53b4eb*/
    a1 = a1; /*0x53b4f1*/
    ChronoScreenEffect_Status = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(&stru_A9F9B8); /*0x53b512*/
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 644), 0x2000, 1.0, (int)&stru_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    byte_A9FAD1 = IDA_BYTE2(dword_A8B230[381].vtable3); /*0x53b549*/
    Scenario::ClearScreen(a2); /*0x53b54f*/
    Map_Process_753570(); /*0x53b554*/
  }
}
}
// 0x53B560
namespace gamemd {
AnimClass * * UpdateChronosphereEffect()
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
      (*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 16))( /*0x53b5fb*/
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
        (*(void (**)(int, unsigned int))(*(unsigned int *)g_ChronoEffectState + 24))(g_ChronoEffectState, 0); /*0x53b63a*/
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
        PlayVocClass(((unsigned int *)g_RulesClass_Instance)[0], 0x2000, 1.0, (int)&dword_A9F9B8); /*0x53b6c2*/
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
        (*(void (**)(int, int, unsigned int, int))(*(unsigned int *)DSurface_Composite + 4))( /*0x53b743*/
          DSurface_Composite,
          g_ChronoEffectState,
          0,
          1);
        if ( g_ChronoEffectState ) /*0x53b74e*/
          (**(void (***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53b754*/
        g_ChronoEffectState = 0; /*0x53b75d*/
        MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x53b767*/
      }
      break; /*0x53b767*/
    default:
      return;
  }
}
}
// 0x53BBA0
namespace gamemd {
int RenderChronosphereScreenEffect(char a1)
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
  unsigned short *v12; // ecx
  double v13; // st7
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  bool v18; // zf
  unsigned short *v19; // ecx
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
  unsigned short *v52; // [esp+4Ch] [ebp-1Ch]
  unsigned short *v53; // [esp+4Ch] [ebp-1Ch]
  int v54; // [esp+50h] [ebp-18h]
  float v55; // [esp+54h] [ebp-14h]
  float v56; // [esp+54h] [ebp-14h]
  float v57; // [esp+58h] [ebp-10h]
  float v58; // [esp+58h] [ebp-10h]
  float v59; // [esp+5Ch] [ebp-Ch]
  float v60; // [esp+5Ch] [ebp-Ch]
  float v61; // [esp+60h] [ebp-8h]
  float v62; // [esp+60h] [ebp-8h]

  v1 = (*(int (**)(int))(*(unsigned int *)g_ChronoEffectState + 124))(g_ChronoEffectState); /*0x53bbbd*/
  v54 = v1; /*0x53bbbf*/
  v2 = (*(int (**)(int))(*(unsigned int *)g_ChronoEffectState + 128))(g_ChronoEffectState) - 32; /*0x53bbda*/
  v48 = v2; /*0x53bbdc*/
  v3 = (*(int (**)(int))(*(unsigned int *)g_ChronoEffectState + 112))(g_ChronoEffectState); /*0x53bbe8*/
  v4 = (*(int (**)(int))(*(unsigned int *)g_ChronoEffectState + 116))(g_ChronoEffectState); /*0x53bbec*/
  v50 = v4 / v3; /*0x53bbf8*/
  v47 = ((*(int (__fastcall **)(int, int))(*(unsigned int *)DSurface_Composite + 116))(DSurface_Composite, v4 % v3) - v1 * v3) /*0x53bc15*/
      / v3;
  v5 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Composite + 92))(DSurface_Composite, 0, 0); /*0x53bc24*/
  v6 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)g_ChronoEffectState + 92))(g_ChronoEffectState, 0, 0); /*0x53bc2f*/
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
    v11 = DDraw_GetStatus() - 1; /*0x53bcb2*/
    if ( v11 ) /*0x53bcb3*/
    {
      if ( v11 == 1 ) /*0x53bcba*/
      {
        Render_Render(v51, v1, v2, v47, v50); /*0x53bea4*/
      }
      else
      {
        v12 = (unsigned short *)v5; /*0x53bcc2*/
        v52 = (unsigned short *)v5; /*0x53bcc7*/
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
                IDA_LOWORD(v17) = *(unsigned short *)v17; /*0x53bdee*/
                *v52 = ((v17 & 0x1F) + ((int)((uint16_t)v51 * (31 - (v17 & 0x1F))) >> 8)) /*0x53be54*/
                     | (32 * (((v17 >> 5) & 0x1F) + ((int)((uint16_t)v51 * (31 - ((v17 >> 5) & 0x1F))) >> 8)))
                     | ((((v17 >> 10) & 0x1F)
                       + (uint16_t)((int)((uint16_t)v51 * (31 - ((v17 >> 10) & 0x1F))) >> 8)) << 10);
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
      v19 = (unsigned short *)v5; /*0x53beb0*/
      v53 = (unsigned short *)v5; /*0x53beb5*/
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
              IDA_LOWORD(v24) = *(unsigned short *)v24; /*0x53bfd6*/
              v2 = v48; /*0x53c039*/
              *v53 = ((v24 & 0x3F) + ((int)((uint16_t)v51 * (63 - (v24 & 0x3F))) >> 8)) /*0x53c03e*/
                   | ((((v24 >> 6) & 0x1F)
                     + (uint16_t)((int)((uint16_t)v51 * (31 - ((v24 >> 6) & 0x1F))) >> 8)) << 6)
                   | ((((uint16_t)v24 >> 11)
                     + (uint16_t)(((uint16_t)v51 * (31 - ((uint16_t)v24 >> 11))) >> 8)) << 11);
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
  (*(void (**)(int))(*(unsigned int *)g_ChronoEffectState + 96))(g_ChronoEffectState); /*0x53c07e*/
  return (*(int (**)(int))(*(unsigned int *)DSurface_Composite + 96))(DSurface_Composite); /*0x53c08c*/
}
}
// 0x53D330
namespace gamemd {
void GenerateLightningStormGlow()
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
      v4 = RA2_OPNEW(0x20u); /*0x53d386*/
      v5 = v4; /*0x53d38b*/
      if ( v4 ) /*0x53d392*/
      {
        *(unsigned int *)(v4 + 4) = 512; /*0x53d39e*/
        *(unsigned int *)(v4 + 8) = 256; /*0x53d3a5*/
        *(unsigned int *)(v4 + 12) = 0; /*0x53d3ac*/
        *(unsigned int *)v4 = &XSurface_Vtable; /*0x53d3b3*/
        *(unsigned int *)(v4 + 16) = 1; /*0x53d3b9*/
        Buffer::Init((Buffer *)(v4 + 20), 0, 0x20000); /*0x53d3c0*/
        *(unsigned int *)v5 = &BSurface_Vtable; /*0x53d3c5*/
      }
      else
      {
        v5 = 0; /*0x53d3cd*/
      }
      *v3 = v5; /*0x53d3cf*/
      (*(void (**)(int, int))(*(unsigned int *)v5 + 24))(v5, -1); /*0x53d3d7*/
      v6 = 127; /*0x53d3e7*/
      v7 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)*v3 + 92))(*v3, 0, 0) + 65792; /*0x53d3ec*/
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
              IDA_LOWORD(v12) = Math::RoundToInt(v1); /*0x53d490*/
              LightningStormGlow_Helper = GenerateLightningStormGlow_Helper(0, v12); /*0x53d497*/
              v9 = 4 * v6 * v6; /*0x53d4a1*/
              *(unsigned char *)(v8 + (v6 << 9) + v7) = LightningStormGlow_Helper; /*0x53d4a8*/
              *(unsigned char *)((v6 << 9) - v8 + v7) = LightningStormGlow_Helper; /*0x53d4af*/
              v14 = v7 - (v6 << 9); /*0x53d4b4*/
              *(unsigned char *)(v8 + v14) = LightningStormGlow_Helper; /*0x53d4b6*/
              *(unsigned char *)(v14 - v8) = LightningStormGlow_Helper; /*0x53d4bb*/
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
//L-fix         fmul ds:dbl_7E5190
//L-fix         fadd [esp+38h+var_8]
//L-fix         fst [esp+38h+var_8]
//L-fix         fcomp qword ptr [esp+38h+var_14+4]
//L-fix         fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x53d50d*/
        v25 = v24; /*0x53d517*/
      result = (unsigned char)i + 4; /*0x53d527*/
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
}
// 0x53DE00
namespace gamemd {
int InitializeAudioStreaming(int a1, int a2)
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
  v4 = RA2_OPNEW(4 * a1); /*0x53de57*/
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
  ((AudioStream *)(stru_AA0398))->Reset(); /*0x53deb5*/
  CoordBounds::Constructor(stru_AA0398, qword_AA0388, IDA_SHIDWORD(qword_AA0388)); /*0x53decc*/
  AudioStream::ResetChannel(4 * qword_AA0388, (uint64_t)qword_AA0388 >> 30); /*0x53deed*/
  AudioStream::ResetChannel2(4 * qword_AA0388, (uint64_t)qword_AA0388 >> 30); /*0x53df0f*/
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
  dword_AA0460 = AcquireAudioStreamBuffer((unsigned int *)dword_AA045C, 0); /*0x53dfd5*/
  v8 = AcquireAudioStreamBuffer((unsigned int *)dword_AA045C, 1); /*0x53dfda*/
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
}
// 0x53E730
namespace gamemd {
void Message_IsDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
  int result; // eax

  do /*0x53e74f*/
    result = GameLoopMessagePump(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53e748*/
  while ( !result ); /*0x53e74f*/
  if ( lpMsg->message == 18 ) /*0x53e75b*/
    return 0; /*0x53e75d*/
  return result; /*0x53e754*/
}
}
// 0x53E770
namespace gamemd {
void GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
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
  unsigned char v23[28]; // [esp+28h] [ebp-1Ch] BYREF

  if ( dword_AA0444 == 1 ) /*0x53e78b*/
  {
    if ( dword_887640 ) /*0x53e797*/
    {
      GetCursorPos(&Point); /*0x53e7a2*/
      dword_AA0434 = (int64_t)Point; /*0x53e7b0*/
      (*(void (**)(int, int64_t *, char *))(*(unsigned int *)dword_887640 + 68))( /*0x53e7ce*/
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
        (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)dword_887640 + 56))( /*0x53e827*/
          dword_887640,
          dword_AA0434,
          IDA_HIDWORD(dword_AA0434));
        *(unsigned long long *)v23 = dword_AA0434; /*0x53e83a*/
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
            SampleSize = Audio::GetSampleSize((unsigned int *)dword_AA0464); /*0x53e8c5*/
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
                  dword_AA0434 = (int64_t)Point; /*0x53e9f5*/
                  if ( dword_887640 ) /*0x53ea00*/
                    (*(void (**)(int, LONG, LONG))(*(unsigned int *)dword_887640 + 56))( /*0x53ea06*/
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
                    v12 = (HWND)*((unsigned int *)dword_AA044C + (unsigned int)v11); /*0x53ea46*/
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
                  v13 = Audio::GetSampleSize((unsigned int *)dword_AA0464); /*0x53eaa2*/
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
            v9 = Audio::GetSampleSize((unsigned int *)dword_AA0464); /*0x53e922*/
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
        *(unsigned int *)v23 = v16; /*0x53ebdf*/
        BufferedAudioStreamRead((int *)dword_AA0460, (char *)&v20, 40); /*0x53ebe3*/
        return v10; /*0x53ebe3*/
      }
    }
  LABEL_65:
    if ( !wRemoveMsg ) /*0x53eb81*/
      PeekMessageA(lpMsg, a2, wMsgFilterMin, wMsgFilterMax, 1u); /*0x53eb99*/
  }
}
}
// 0x532130
namespace gamemd {
void nullsub_19()
{
  ; /*0x532130*/
}
} // namespace gamemd

// 0x532140
namespace gamemd {
void nullsub_151()
{
  ; /*0x532140*/
}
} // namespace gamemd

// 0x534DE0
namespace gamemd {
char ReleaseLoadingResources()
{
  if ( dword_884E5C ) /*0x534de7*/
  {
    Debug::Log(); /*0x534df2*/
    if ( dword_884E5C ) /*0x534e02*/
      (**(void (***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e08*/
    dword_884E5C = 0; /*0x534e0a*/
  }
  if ( dword_884E58 ) /*0x534e1b*/
  {
    Debug::Log(); /*0x534e26*/
    if ( dword_884E58 ) /*0x534e36*/
      (**(void (***)(int, int))dword_884E58)(dword_884E58, 1); /*0x534e3c*/
    dword_884E58 = 0; /*0x534e3e*/
  }
  return 1; /*0x534e4a*/
}
} // namespace gamemd

// 0x538C10
namespace gamemd {
int sub_538C10()
{
  return InitArrayWithValue(unk_A8F7F8, 0, 64); /*0x538c1e*/
}
} // namespace gamemd

// 0x538C20
namespace gamemd {
int sub_538C20()
{
  dword_A8F908 = 0; /*0x538c22*/
  dword_A8F90C = 0; /*0x538c27*/
  dword_A8F910 = 0; /*0x538c2c*/
  dword_A8F914 = 0; /*0x538c31*/
  return 0; /*0x538c36*/
}
} // namespace gamemd

// 0x538C40
namespace gamemd {
int E4Recv_538C40::sub_538C40(char * Source)
{

  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)Source); /*0x538c48*/
  if ( (uint8_t)((CCFileClass *)(&v2))->Open(0) ) /*0x538c53*/
  {
    FileClass::Load(&v2, (const CHAR *)1); /*0x538c62*/
    CCFileClass::Read(&v2, &byte_A8F91C, 0x10000); /*0x538c75*/
    CCFileClass::Reset(&v2); /*0x538c7e*/
    byte_A9F91C = 0; /*0x538c83*/
  }
  v2.FileClass = (FileClass)&vt_CCFileClass; /*0x538c8e*/
  v4 = 0; /*0x538c96*/
  ((Vector *)((int)v3))->Clear(); /*0x538c9e*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538ca7*/
  return ((BufferIOFileClass *)(&v2))->Dtor(); /*0x538cb4*/

}
} // namespace gamemd

// 0x538CC0
namespace gamemd {
int E4Recv_538CC0::sub_538CC0(char * Source)
{

  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)Source); /*0x538cc8*/
  if ( !(uint8_t)((CCFileClass *)(&v2))->Open(0) ) /*0x538cd3*/
  {
    FileClass::Load(&v2, (const CHAR *)2); /*0x538ce2*/
    FileClass::Write(&v2, &byte_A8F91C, 0x10000u); /*0x538cf5*/
    CCFileClass::Reset(&v2); /*0x538cfe*/
  }
  v2.FileClass = (FileClass)&vt_CCFileClass; /*0x538d07*/
  v4 = 0; /*0x538d0f*/
  ((Vector *)((int)v3))->Clear(); /*0x538d17*/
  v2.FileClass = (FileClass)&off_7E1668; /*0x538d20*/
  return ((BufferIOFileClass *)(&v2))->Dtor(); /*0x538d2d*/

}
} // namespace gamemd

// 0x539110
namespace gamemd {
void sub_539110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53911c*/
  dbl_A9F948 = Math::Sqrt(v0 + v0); /*0x53912e*/
}
} // namespace gamemd

// 0x539140
namespace gamemd {
void sub_539140()
{
  dbl_A9F998 = dbl_A9F948 / 60.0; /*0x53914c*/
}
} // namespace gamemd

// 0x539160
namespace gamemd {
void sub_539160()
{
  dbl_A9F980 = 1.0 / dbl_A9F998; /*0x53916c*/
}
} // namespace gamemd

// 0x539180
namespace gamemd {
void sub_539180()
{
  dbl_A9F978 = 0.0174532925199433 * 45.0; /*0x53918c*/
}
} // namespace gamemd

// 0x5391A0
namespace gamemd {
void sub_5391A0()
{
  dbl_A9F950 = 0.0174532925199433 * 60.0; /*0x5391ac*/
}
} // namespace gamemd

// 0x5391C0
namespace gamemd {
void sub_5391C0()
{
  dbl_A9F928 = 0.0174532925199433 * 90.0; /*0x5391cc*/
}
} // namespace gamemd

// 0x5391E0
namespace gamemd {
long long sub_5391E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A9F928 - dbl_A9F950); /*0x5391f2*/
  result = Math::RoundToInt(v0 * dbl_A9F948 * 0.5); /*0x539206*/
  dword_A9F9A0 = result; /*0x53920b*/
  return result; /*0x539210*/
}
} // namespace gamemd

// 0x539220
namespace gamemd {
void sub_539220()
{
  dbl_A9F958 = Math::ArcTan((double)dword_A9F9A0 * 0.00390625); /*0x539237*/
}
} // namespace gamemd

// 0x539250
namespace gamemd {
void sub_539250()
{
  dbl_A9F970 = Math::ArcTan((double)(2 * dword_A9F9A0) / dbl_A9F948); /*0x539272*/
}
} // namespace gamemd

// 0x539280
namespace gamemd {
long long sub_539280()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9F9A0) + 0.5); /*0x53929b*/
  dword_A9F994 = result; /*0x5392a0*/
  return result; /*0x5392a6*/
}
} // namespace gamemd

// 0x5392B0
namespace gamemd {
int sub_5392B0()
{
  word_A9F940 = 0; /*0x5392b2*/
  word_A9F942 = 0; /*0x5392b8*/
  return 0; /*0x5392be*/
}
} // namespace gamemd

// 0x5392C0
namespace gamemd {
int sub_5392C0()
{
  dword_A9F960 = 0; /*0x5392c2*/
  dword_A9F964 = 0; /*0x5392c7*/
  dword_A9F968 = 0; /*0x5392cc*/
  return 0; /*0x5392d1*/
}
} // namespace gamemd

// 0x5392E0
namespace gamemd {
int sub_5392E0()
{
  dword_A9F990 = 0; /*0x5392e5*/
  dword_A9F988 = 128; /*0x5392ef*/
  dword_A9F98C = 128; /*0x5392f4*/
  return 128; /*0x5392f9*/
}
} // namespace gamemd

// 0x539300
namespace gamemd {
int sub_539300()
{
  dword_A9F930 = 0; /*0x539302*/
  dword_A9F934 = 0; /*0x539307*/
  dword_A9F938 = 0; /*0x53930c*/
  dword_A9F93C = 0; /*0x539311*/
  return 0; /*0x539316*/
}
} // namespace gamemd

// 0x539350
namespace gamemd {
void sub_539350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53935c*/
  dbl_A9FA00 = Math::Sqrt(v0 + v0); /*0x53936e*/
}
} // namespace gamemd

// 0x539380
namespace gamemd {
void sub_539380()
{
  dbl_A9FA88 = dbl_A9FA00 / 60.0; /*0x53938c*/
}
} // namespace gamemd

// 0x5393A0
namespace gamemd {
void sub_5393A0()
{
  dbl_A9FA58 = 1.0 / dbl_A9FA88; /*0x5393ac*/
}
} // namespace gamemd

// 0x5393C0
namespace gamemd {
void sub_5393C0()
{
  dbl_A9FA50 = 0.0174532925199433 * 45.0; /*0x5393cc*/
}
} // namespace gamemd

// 0x5393E0
namespace gamemd {
void sub_5393E0()
{
  dbl_A9FA08 = 0.0174532925199433 * 60.0; /*0x5393ec*/
}
} // namespace gamemd

// 0x539400
namespace gamemd {
void sub_539400()
{
  dbl_A9F9B0 = 0.0174532925199433 * 90.0; /*0x53940c*/
}
} // namespace gamemd

// 0x539420
namespace gamemd {
long long sub_539420()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A9F9B0 - dbl_A9FA08); /*0x539432*/
  result = Math::RoundToInt(v0 * dbl_A9FA00 * 0.5); /*0x539446*/
  dword_A9FA90 = result; /*0x53944b*/
  return result; /*0x539450*/
}
} // namespace gamemd

// 0x539460
namespace gamemd {
void sub_539460()
{
  dbl_A9FA10 = Math::ArcTan((double)dword_A9FA90 * 0.00390625); /*0x539477*/
}
} // namespace gamemd

// 0x539490
namespace gamemd {
void sub_539490()
{
  dbl_A9FA40 = Math::ArcTan((double)(2 * dword_A9FA90) / dbl_A9FA00); /*0x5394b2*/
}
} // namespace gamemd

// 0x5394C0
namespace gamemd {
long long sub_5394C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A9FA90) + 0.5); /*0x5394db*/
  dword_A9FA84 = result; /*0x5394e0*/
  return result; /*0x5394e6*/
}
} // namespace gamemd

// 0x5394F0
namespace gamemd {
int sub_5394F0()
{
  dword_A9F9F8 = 0; /*0x5394f2*/
  return 0; /*0x5394fe*/
}
} // namespace gamemd

// 0x539500
namespace gamemd {
int sub_539500()
{
  dword_A9FA30 = 0; /*0x539502*/
  qword_A9FA34 = 0; /*0x539507*/
  DataGlobal_A9FA38 = 0; /*0x53950c*/
  return 0; /*0x539511*/
}
} // namespace gamemd

// 0x539520
namespace gamemd {
int sub_539520()
{
  dword_A9FA80 = 0; /*0x539525*/
  dword_A9FA78 = 128; /*0x53952f*/
  dword_A9FA7C = 128; /*0x539534*/
  return 128; /*0x539539*/
}
} // namespace gamemd

// 0x539540
namespace gamemd {
int sub_539540()
{
  dword_A9F9E8 = 0; /*0x539542*/
  dword_A9F9EC = 0; /*0x539547*/
  dword_A9F9F0 = 0; /*0x53954c*/
  dword_A9F9F4 = 0; /*0x539551*/
  return 0; /*0x539556*/
}
} // namespace gamemd

// 0x539580
namespace gamemd {
int sub_539580()
{
  dword_A9FA64 = 0; /*0x539587*/
  dword_A9FA68 = 0; /*0x53958c*/
  byte_A9FA6C = 1; /*0x539591*/
  byte_A9FA6D = 0; /*0x539598*/
  LightningStorm_CloudsManifesting = (int)&DynamicVectorClass_AnimClass_const___vftable; /*0x53959d*/
  dword_A9FA74 = 10; /*0x5395a7*/
  dword_A9FA70 = 0; /*0x5395b1*/
  return atexit(sub_5395C0); /*0x5395bc*/
}
} // namespace gamemd

// 0x5395C0
namespace gamemd {
void sub_5395C0()
{
  if ( (byte_A9F9A9 & 1) == 0 ) /*0x5395ca*/
  {
    LightningStorm_CloudsManifesting = (int)&VectorClass_AnimClass_const___vftable; /*0x5395ce*/
    byte_A9F9A9 |= 1u; /*0x5395e1*/
    if ( dword_A9FA64 ) /*0x5395e7*/
    {
      if ( byte_A9FA6D ) /*0x5395f1*/
      {
        RA2_OPDEL(dword_A9FA64); /*0x5395f4*/
        dword_A9FA64 = 0; /*0x5395fc*/
      }
    }
    byte_A9FA6D = 0; /*0x539606*/
    dword_A9FA68 = 0; /*0x53960d*/
  }
}
} // namespace gamemd

// 0x539620
namespace gamemd {
int sub_539620()
{
  dword_A9F9D4 = 0; /*0x539627*/
  dword_A9F9D8 = 0; /*0x53962c*/
  byte_A9F9DC = 1; /*0x539631*/
  byte_A9F9DD = 0; /*0x539638*/
  LightningStorm_CloudsPresent = (int)&DynamicVectorClass_AnimClass_const___vftable; /*0x53963d*/
  dword_A9F9E4 = 10; /*0x539647*/
  dword_A9F9E0 = 0; /*0x539651*/
  return atexit(sub_539660); /*0x53965c*/
}
} // namespace gamemd

// 0x539660
namespace gamemd {
void sub_539660()
{
  if ( (byte_A9F9A8 & 1) == 0 ) /*0x53966a*/
  {
    LightningStorm_CloudsPresent = (int)&VectorClass_AnimClass_const___vftable; /*0x53966e*/
    byte_A9F9A8 |= 1u; /*0x539681*/
    if ( dword_A9F9D4 ) /*0x539687*/
    {
      if ( byte_A9F9DD ) /*0x539691*/
      {
        RA2_OPDEL(dword_A9F9D4); /*0x539694*/
        dword_A9F9D4 = 0; /*0x53969c*/
      }
    }
    byte_A9F9DD = 0; /*0x5396a6*/
    dword_A9F9D8 = 0; /*0x5396ad*/
  }
}
} // namespace gamemd

// 0x5396C0
namespace gamemd {
int sub_5396C0()
{
  dword_A9FA1C = 0; /*0x5396c7*/
  dword_A9FA20 = 0; /*0x5396cc*/
  byte_A9FA24 = 1; /*0x5396d1*/
  byte_A9FA25 = 0; /*0x5396d8*/
  LightningStorm_BoltsPresent = (int)&DynamicVectorClass_AnimClass_const___vftable; /*0x5396dd*/
  dword_A9FA2C = 10; /*0x5396e7*/
  dword_A9FA28 = 0; /*0x5396f1*/
  return atexit(sub_539700); /*0x5396fc*/
}
} // namespace gamemd

// 0x539700
namespace gamemd {
void sub_539700()
{
  if ( (byte_A9F9A8 & 2) == 0 ) /*0x53970a*/
  {
    LightningStorm_BoltsPresent = (int)&VectorClass_AnimClass_const___vftable; /*0x53970e*/
    byte_A9F9A8 |= 2u; /*0x539721*/
    if ( dword_A9FA1C ) /*0x539727*/
    {
      if ( byte_A9FA25 ) /*0x539731*/
      {
        RA2_OPDEL(dword_A9FA1C); /*0x539734*/
        dword_A9FA1C = 0; /*0x53973c*/
      }
    }
    byte_A9FA25 = 0; /*0x539746*/
    dword_A9FA20 = 0; /*0x53974d*/
  }
}
} // namespace gamemd

// 0x539EA0
namespace gamemd {
void sub_539EA0(char a1)
{
  LightningStorm_Active = a1; /*0x539ea0*/
}
} // namespace gamemd

// 0x53AC80
namespace gamemd {
int sub_53AC80(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int i; // edi
  int v7; // ebp
  int j; // esi
  int v9; // ecx
  unsigned int v11[2]; // [esp+10h] [ebp-Ch] BYREF
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
      v9 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(i + 4) + 4 * j) + 780); /*0x53acc7*/
      (*(void (**)(int, int, int, int, int))(*(unsigned int *)v9 + 4))(v9, a1, a2, a3, a4); /*0x53acd6*/
    }
    result = FlagSystem::GetNextActive(v11); /*0x53ace2*/
  }
  return result; /*0x53acee*/
}
} // namespace gamemd

// 0x53AD00
namespace gamemd {
int UpdateSurfaceAnimations(int a1, int aP1, int a3, int a4)
{
  int i; // esi
  int j; // esi
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int v13; // [esp+30h] [ebp-10h]
  unsigned int v14[2]; // [esp+34h] [ebp-Ch] BYREF
  char v15; // [esp+3Ch] [ebp-4h]
  int k; // [esp+44h] [ebp+4h]

  for ( i = 0; i < dword_87F6A8; ++i ) /*0x53ad18*/
    (*(void (**)(unsigned int, int, int, int, int))(**((unsigned int **)dword_87F69C + i) + 4))( /*0x53ad2c*/
      *((unsigned int *)dword_87F69C + i),
      a1,
      aP1,
      a3,
      a4);
  for ( j = 0; j < dword_B054E0; ++j ) /*0x53ad42*/
  {
    v9 = *((unsigned int *)dword_B054D4 + j); /*0x53ad4a*/
    if ( *(int *)(v9 + 784) > 1 ) /*0x53ad54*/
      (*(void (**)(unsigned int, int, int, int, int))(**(unsigned int **)(v9 + 780) + 4))( /*0x53ad66*/
        *(unsigned int *)(v9 + 780),
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
        v11 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(k + 4) + 4 * v10) + 780); /*0x53adab*/
        (*(void (**)(int, int, int, int, int))(*(unsigned int *)v11 + 4))(v11, a1, aP1, a3, a4); /*0x53adbb*/
        ++v10; /*0x53adbe*/
      }
      while ( v10 < v13 ); /*0x53adc3*/
    }
  }
  MapClass::UpdateLightingPostProcess(&dword_87F7E8); /*0x53addb*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53adec*/
}
} // namespace gamemd

// 0x53B3F0
namespace gamemd {
void nullsub_152()
{
  ; /*0x53b3f0*/
}
} // namespace gamemd

// 0x53C820
namespace gamemd {
void sub_53C820()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53c82c*/
  dbl_A9FF90 = Math::Sqrt(v0 + v0); /*0x53c83e*/
}
} // namespace gamemd

// 0x53C850
namespace gamemd {
void sub_53C850()
{
  dbl_AA0140 = dbl_A9FF90 / 60.0; /*0x53c85c*/
}
} // namespace gamemd

// 0x53C870
namespace gamemd {
void sub_53C870()
{
  dbl_AA0110 = 1.0 / dbl_AA0140; /*0x53c87c*/
}
} // namespace gamemd

// 0x53C890
namespace gamemd {
void sub_53C890()
{
  dbl_AA0108 = 0.0174532925199433 * 45.0; /*0x53c89c*/
}
} // namespace gamemd

// 0x53C8B0
namespace gamemd {
void sub_53C8B0()
{
  dbl_A9FF98 = 0.0174532925199433 * 60.0; /*0x53c8bc*/
}
} // namespace gamemd

// 0x53C8D0
namespace gamemd {
void sub_53C8D0()
{
  dbl_A9FAE0 = 0.0174532925199433 * 90.0; /*0x53c8dc*/
}
} // namespace gamemd

// 0x53C8F0
namespace gamemd {
long long sub_53C8F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A9FAE0 - dbl_A9FF98); /*0x53c902*/
  result = Math::RoundToInt(v0 * dbl_A9FF90 * 0.5); /*0x53c916*/
  dword_AA0148 = result; /*0x53c91b*/
  return result; /*0x53c920*/
}
} // namespace gamemd

// 0x53C930
namespace gamemd {
void sub_53C930()
{
  dbl_A9FFA0 = Math::ArcTan((double)dword_AA0148 * 0.00390625); /*0x53c947*/
}
} // namespace gamemd

// 0x53C960
namespace gamemd {
void sub_53C960()
{
  dbl_A9FFC0 = Math::ArcTan((double)(2 * dword_AA0148) / dbl_A9FF90); /*0x53c982*/
}
} // namespace gamemd

// 0x53C990
namespace gamemd {
long long sub_53C990()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0148) + 0.5); /*0x53c9ab*/
  dword_AA013C = result; /*0x53c9b0*/
  return result; /*0x53c9b6*/
}
} // namespace gamemd

// 0x53C9C0
namespace gamemd {
int sub_53C9C0()
{
  word_A9FF88 = 0; /*0x53c9c2*/
  word_A9FF8A = 0; /*0x53c9c8*/
  return 0; /*0x53c9ce*/
}
} // namespace gamemd

// 0x53C9D0
namespace gamemd {
int sub_53C9D0()
{
  dword_A9FFB0 = 0; /*0x53c9d2*/
  dword_A9FFB4 = 0; /*0x53c9d7*/
  dword_A9FFB8 = 0; /*0x53c9dc*/
  return 0; /*0x53c9e1*/
}
} // namespace gamemd

// 0x53C9F0
namespace gamemd {
int sub_53C9F0()
{
  dword_AA0138 = 0; /*0x53c9f5*/
  dword_AA0130 = 128; /*0x53c9ff*/
  dword_AA0134 = 128; /*0x53ca04*/
  return 128; /*0x53ca09*/
}
} // namespace gamemd

// 0x53CA10
namespace gamemd {
int sub_53CA10()
{
  dword_A9FF70 = 0; /*0x53ca12*/
  dword_A9FF74 = 0; /*0x53ca17*/
  dword_A9FF78 = 0; /*0x53ca1c*/
  dword_A9FF7C = 0; /*0x53ca21*/
  return 0; /*0x53ca26*/
}
} // namespace gamemd

// 0x53CA30
namespace gamemd {
void sub_53CA30()
{
  dbl_A9FF80 = (512.0 - 0.0 + 57.0) * 0.0125; /*0x53ca48*/
}
} // namespace gamemd

// 0x53CA50
namespace gamemd {
int sub_53CA50()
{
  dbl_A9FFA8 = dbl_A9FF80; /*0x53ca5b*/
  return IDA_LODWORD(dbl_A9FF80); /*0x53ca66*/
}
} // namespace gamemd

// 0x53CA70
namespace gamemd {
int sub_53CA70()
{
  dword_AA011C = 0; /*0x53ca77*/
  dword_AA0120 = 0; /*0x53ca7c*/
  byte_AA0124 = 1; /*0x53ca81*/
  byte_AA0125 = 0; /*0x53ca88*/
  stru_AA0118 = (int)&DynamicVectorClass_IonBlastClass___vftable; /*0x53ca8d*/
  dword_AA012C = 10; /*0x53ca97*/
  dword_AA0128 = 0; /*0x53caa1*/
  return atexit(sub_53CAB0); /*0x53caac*/
}
} // namespace gamemd

// 0x53CAB0
namespace gamemd {
void sub_53CAB0()
{
  if ( (byte_A9FAD8 & 1) == 0 ) /*0x53caba*/
  {
    stru_AA0118 = (int)&VectorClass_IonBlastClass___vftable; /*0x53cabe*/
    byte_A9FAD8 |= 1u; /*0x53cad1*/
    if ( dword_AA011C ) /*0x53cad7*/
    {
      if ( byte_AA0125 ) /*0x53cae1*/
      {
        RA2_OPDEL(dword_AA011C); /*0x53cae4*/
        dword_AA011C = 0; /*0x53caec*/
      }
    }
    byte_AA0125 = 0; /*0x53caf6*/
    dword_AA0120 = 0; /*0x53cafd*/
  }
}
} // namespace gamemd

// 0x53D310
namespace gamemd {
void sub_53D310()
{
  int i; // esi

  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d31b*/
    ExplosionClass::ProcessFrame(*((ExplosionClass **)dword_AA011C + i)); /*0x53d326*/
}
} // namespace gamemd

// 0x53D8E0
namespace gamemd {
int * ComputeSpiralOffset(int * a1, int a2)
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
} // namespace gamemd

// 0x53D9F0
namespace gamemd {
int sub_53D9F0(int a1)
{
  int v2; // edi
  unsigned int *v3; // esi
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
} // namespace gamemd

// 0x53DDE0
namespace gamemd {
int sub_53DDE0()
{
  dword_AA0158 = 0; /*0x53dde2*/
  dword_AA015C = 0; /*0x53dde7*/
  dword_AA0160 = 0; /*0x53ddec*/
  dword_AA0164 = 0; /*0x53ddf1*/
  return 0; /*0x53ddf6*/
}
} // namespace gamemd

// 0x53E070
namespace gamemd {
DWORD sub_53E070(unsigned int * lpThreadParameter)
{
  unsigned int *v1; // esi
  int64_t v2; // rax
  unsigned int *v3; // edi
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
      IDA_LODWORD(v2) = Audio::Callback(); /*0x53e096*/
      AudioThread::UpdateStats((int)(v1 + 8), v2); /*0x53e0a0*/
      v3 = (unsigned int *)dword_AA045C; /*0x53e0ac*/
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
} // namespace gamemd

// 0x53F020
namespace gamemd {
bool E4Recv_53F020::sub_53F020(const char * a2)
{

  return memcmp((const char *)this, a2, 10) > 0; /*0x53f031*/

}
} // namespace gamemd

// 0x53F050
namespace gamemd {
bool E4Recv_53F050::sub_53F050(const char * a2)
{

  return memcmp((const char *)this, a2, 10) < 0; /*0x53f061*/

}
} // namespace gamemd

// 0x53F080
namespace gamemd {
bool E4Recv_53F080::sub_53F080(const char * a2)
{

  return memcmp((const char *)this, a2, 10) >= 0; /*0x53f091*/

}
} // namespace gamemd

// 0x53F0B0
namespace gamemd {
bool E4Recv_53F0B0::sub_53F0B0(const char * a2)
{

  return memcmp((const char *)this, a2, 10) <= 0; /*0x53f0c1*/

}
} // namespace gamemd

// 0x53F220
namespace gamemd {
int sub_53F220()
{
  dword_AA0510 = 0; /*0x53f222*/
  dword_AA0514 = 0; /*0x53f227*/
  dword_AA0518 = 0; /*0x53f22c*/
  dword_AA051C = 0; /*0x53f231*/
  return 0; /*0x53f236*/
}
} // namespace gamemd

// 0x53F240
namespace gamemd {
void sub_53F240()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f24c*/
  dbl_AA0528 = Math::Sqrt(v0 + v0); /*0x53f25e*/
}
} // namespace gamemd

// 0x53F270
namespace gamemd {
void sub_53F270()
{
  dbl_AA0598 = dbl_AA0528 / 60.0; /*0x53f27c*/
}
} // namespace gamemd

// 0x53F290
namespace gamemd {
void sub_53F290()
{
  dbl_AA0580 = 1.0 / dbl_AA0598; /*0x53f29c*/
}
} // namespace gamemd

// 0x53F2B0
namespace gamemd {
void sub_53F2B0()
{
  dbl_AA0570 = 0.0174532925199433 * 45.0; /*0x53f2bc*/
}
} // namespace gamemd

// 0x53F2D0
namespace gamemd {
void sub_53F2D0()
{
  dbl_AA0538 = 0.0174532925199433 * 60.0; /*0x53f2dc*/
}
} // namespace gamemd

// 0x53F2F0
namespace gamemd {
void sub_53F2F0()
{
  *(double *)&unk_AA047C[132] = 0.0174532925199433 * 90.0; /*0x53f2fc*/
}
} // namespace gamemd

// 0x53F310
namespace gamemd {
long long sub_53F310()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*(double *)&unk_AA047C[132] - dbl_AA0538); /*0x53f322*/
  result = Math::RoundToInt(v0 * dbl_AA0528 * 0.5); /*0x53f336*/
  dword_AA05A0 = result; /*0x53f33b*/
  return result; /*0x53f340*/
}
} // namespace gamemd

// 0x53F350
namespace gamemd {
void sub_53F350()
{
  dbl_AA0540 = Math::ArcTan((double)dword_AA05A0 * 0.00390625); /*0x53f367*/
}
} // namespace gamemd

// 0x53F380
namespace gamemd {
void sub_53F380()
{
  dbl_AA0560 = Math::ArcTan((double)(2 * dword_AA05A0) / dbl_AA0528); /*0x53f3a2*/
}
} // namespace gamemd

// 0x53F3B0
namespace gamemd {
long long sub_53F3B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA05A0) + 0.5); /*0x53f3cb*/
  dword_AA0594 = result; /*0x53f3d0*/
  return result; /*0x53f3d6*/
}
} // namespace gamemd

// 0x53F3E0
namespace gamemd {
int sub_53F3E0()
{
  word_AA0520 = 0; /*0x53f3e2*/
  word_AA0522 = 0; /*0x53f3e8*/
  return 0; /*0x53f3ee*/
}
} // namespace gamemd

// 0x53F3F0
namespace gamemd {
int sub_53F3F0()
{
  dword_AA0550 = 0; /*0x53f3f2*/
  dword_AA0554 = 0; /*0x53f3f7*/
  dword_AA0558 = 0; /*0x53f3fc*/
  return 0; /*0x53f401*/
}
} // namespace gamemd

// 0x53F410
namespace gamemd {
int sub_53F410()
{
  dword_AA0590 = 0; /*0x53f415*/
  dword_AA0588 = 128; /*0x53f41f*/
  dword_AA058C = 128; /*0x53f424*/
  return 128; /*0x53f429*/
}
} // namespace gamemd

// 0x53F880
namespace gamemd {
int sub_53F880()
{
  dword_AA05B8 = 0; /*0x53f882*/
  dword_AA05BC = 0; /*0x53f887*/
  dword_AA05C0 = 0; /*0x53f88c*/
  dword_AA05C4 = 0; /*0x53f891*/
  return 0; /*0x53f896*/
}
} // namespace gamemd

// 0x53F8A0
namespace gamemd {
void sub_53F8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x53f8ac*/
  dbl_AA05D0 = Math::Sqrt(v0 + v0); /*0x53f8be*/
}
} // namespace gamemd

// 0x53F8D0
namespace gamemd {
void sub_53F8D0()
{
  dbl_AA0620 = dbl_AA05D0 / 60.0; /*0x53f8dc*/
}
} // namespace gamemd

// 0x53F8F0
namespace gamemd {
void sub_53F8F0()
{
  dbl_AA0608 = 1.0 / dbl_AA0620; /*0x53f8fc*/
}
} // namespace gamemd

// 0x53F910
namespace gamemd {
void sub_53F910()
{
  dbl_AA0600 = 0.0174532925199433 * 45.0; /*0x53f91c*/
}
} // namespace gamemd

// 0x53F930
namespace gamemd {
void sub_53F930()
{
  dbl_AA05D8 = 0.0174532925199433 * 60.0; /*0x53f93c*/
}
} // namespace gamemd

// 0x53F950
namespace gamemd {
void sub_53F950()
{
  dbl_AA05B0 = 0.0174532925199433 * 90.0; /*0x53f95c*/
}
} // namespace gamemd

// 0x53F970
namespace gamemd {
long long sub_53F970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AA05B0 - dbl_AA05D8); /*0x53f982*/
  result = Math::RoundToInt(v0 * dbl_AA05D0 * 0.5); /*0x53f996*/
  dword_AA0628 = result; /*0x53f99b*/
  return result; /*0x53f9a0*/
}
} // namespace gamemd

// 0x53F9B0
namespace gamemd {
void sub_53F9B0()
{
  dbl_AA05E0 = Math::ArcTan((double)dword_AA0628 * 0.00390625); /*0x53f9c7*/
}
} // namespace gamemd

// 0x53F9E0
namespace gamemd {
void sub_53F9E0()
{
  dbl_AA05F8 = Math::ArcTan((double)(2 * dword_AA0628) / dbl_AA05D0); /*0x53fa02*/
}
} // namespace gamemd

// 0x53FA10
namespace gamemd {
long long sub_53FA10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0628) + 0.5); /*0x53fa2b*/
  dword_AA061C = result; /*0x53fa30*/
  return result; /*0x53fa36*/
}
} // namespace gamemd

// 0x53FA40
namespace gamemd {
int sub_53FA40()
{
  word_AA05C8 = 0; /*0x53fa42*/
  word_AA05CA = 0; /*0x53fa48*/
  return 0; /*0x53fa4e*/
}
} // namespace gamemd

// 0x53FA50
namespace gamemd {
int sub_53FA50()
{
  dword_AA05E8 = 0; /*0x53fa52*/
  dword_AA05EC = 0; /*0x53fa57*/
  dword_AA05F0 = 0; /*0x53fa5c*/
  return 0; /*0x53fa61*/
}
} // namespace gamemd

// 0x53FA70
namespace gamemd {
int sub_53FA70()
{
  dword_AA0618 = 0; /*0x53fa75*/
  dword_AA0610 = 128; /*0x53fa7f*/
  dword_AA0614 = 128; /*0x53fa84*/
  return 128; /*0x53fa89*/
}
} // namespace gamemd
