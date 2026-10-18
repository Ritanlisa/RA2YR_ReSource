// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DSurface_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/FileClass_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/ScenarioClass_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/SortedArray_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/Multiplayer_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/LightningStorm_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/AddTeamCommand_e4.hpp"
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/classes/CursorPositionCommandClass_e4.hpp"
#include "e4/classes/DeleteCommandClass_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/PageUserCommandClass_e4.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/SelectTeamCommand_e4.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/CoordBounds_e4.hpp"  // G57w10 D supply
#include "e4/classes/AudioFileClass_e4.hpp"  // w18j2 C3861 AudioFileClass:: supply
#include "e4/classes/ChronoScreenEffect_e4.hpp"  // w18j2 C3861 ChronoScreenEffect:: supply
#include "e4/classes/Text_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Release(VocClass *p_this); }  // x4:ida@0x4052f0
namespace gamemd { int DecrementCounter(int p0); }  // x4:signals@0x631ee0
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int LoadTheaterClassMIX_Load(const void* p0, int p1, int p2, int p3, int p4); }  // x4:signals@0x68c860
namespace gamemd { int InitExtensionState(FileSystem *p_this); }  // x4:ida@0x6267a0
namespace gamemd { int UpdateLighting(); }  // x4:empty@0x53c280
namespace gamemd { int Strike2(int p0, int p1, int p2); }  // x4:signals@0x53a300
namespace gamemd { int AddMessage(int* p0, int p1, int* p2, int p3, int p4, int p5, char p6); }  // x4:signals@0x5d3ba0
namespace gamemd { int Strike(int p0); }  // x4:signals@0x53a140
namespace gamemd { int Shutdown(Audio *p_this); }  // x4:ida@0x406d40

// 0x530000
namespace gamemd {  // G42.18 ns repair
MixFileClass * * sub_530000()
{
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-140h] BYREF

  HANDLE FirstFileA; // edi
  FirstFileA = FindFirstFileA(aEcacheMix, &FindFileData); /*0x530022*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x530027*/
  {
    do /*0x5300c5*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x530035*/
      {
        MixFileClass *v2; // eax
        v2 = (MixFileClass *)operator new(0x28u); /*0x53003d*/
        if ( v2 ) /*0x530047*/
        {
          unsigned int *v3; // esi
          v3 = ((MixFileClass *)(v2))->FromFile(FindFileData.cFileName, (int)dword_886980); /*0x53005a*/
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
              int v4; // eax
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
  HANDLE v5; // edi
  v5 = FindFirstFileA(aElocalMix, &FindFileData); /*0x5300e2*/
  if ( v5 != (HANDLE)-1 ) /*0x5300e7*/
  {
    do /*0x530178*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5300f5*/
      {
        MixFileClass *v6; // eax
        v6 = (MixFileClass *)operator new(0x28u); /*0x5300f9*/
        if ( v6 ) /*0x530103*/
        {
          unsigned int *v7; // esi
          v7 = ((MixFileClass *)(v6))->FromFile(FindFileData.cFileName, (int)dword_886980); /*0x530116*/
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
              int v8; // eax
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
}  // G42.18 ns repair
// 0x5312A0
namespace gamemd {
int ShowLoadingScreen(void * a1, void * a2, void * a3)
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
      *(unsigned short *)v7 = v36; /*0x531323*/
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
          if ( g_DisplayWidth != 640 ) /*0x531378*/
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
    v33 += *(unsigned int *)(Instance + 28) + 3; /*0x5314ca*/
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
  v33 += *(unsigned int *)(Instance + 28) + 3; /*0x5315bb*/
  TextRenderer::Printf(v35, (size_t)v20, (int)g_DSurface_Hidden, (int)v38, (int)&v32, 0xFFFF, 0, 22, v28); /*0x5315d2*/
  Frame::Present((int)g_DSurface_Hidden, 10, (int)v5, v16, 0, v29, a3, v31); /*0x5315e4*/
  LODWORD(v21) = Audio::Callback(); /*0x5315e9*/
  *(unsigned long long *)&MEMORY[0xA8EB00].?[2980] = v21 + 5000; /*0x5315f6*/
  if ( v5 ) /*0x531603*/
    __3_YAXPAX_Z(v5); /*0x531606*/
  v22 = Block; /*0x53160e*/
  if ( Block ) /*0x531614*/
  {
    FileTreeNode::Destroy((FileTreeNode *)Block); /*0x531618*/
    __3_YAXPAX_Z(v22); /*0x53161e*/
  }
  if ( v34 ) /*0x531630*/
    (**(void (***)(int, int))v34)(v34, 1); /*0x531636*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x53163f*/
  v44 = 0; /*0x531647*/
  Vector::Clear((int)v43); /*0x531652*/
  *(unsigned int *)v42.__tail_0 = &off_7E1668; /*0x53165b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v42); /*0x531668*/

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
  MouseClass::LoadTypeData((MouseClass *)&dword_87F7E8); /*0x531708*/
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
    *(unsigned int *)&stru_A8E960.random[356] = 0; /*0x5317cc*/
    goto LABEL_11; /*0x5317d2*/
  }
  *(unsigned int *)&stru_A8E960.random[356] = File::LoadFileVXL(v0, (int)&v7, 0); /*0x531788*/
  if ( !*(unsigned int *)&stru_A8E960.random[356] ) /*0x53178d*/
  {
LABEL_11:
    Debug::Log(); /*0x53178f*/
LABEL_12:
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x53179c*/
    v9 = 0; /*0x5317a8*/
    Vector::Clear((int)v8); /*0x5317ac*/
    *(unsigned int *)v7.__tail_0 = &off_7E1668; /*0x5317b5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x5317bd*/
    return 0; /*0x5317cb*/
  }
  CCFileClass::Construct(&v10, aDpodHva); /*0x5317dd*/
  v2 = (File *)__2_YAPAXI_Z(0x10u); /*0x5317e4*/
  if ( !v2 ) /*0x5317ee*/
  {
    *(unsigned int *)&stru_A8E960.random[360] = 0; /*0x531843*/
    goto LABEL_16; /*0x531849*/
  }
  *(unsigned int *)&stru_A8E960.random[360] = File::LoadFileHVA(v2, (int)&v10); /*0x5317fe*/
  if ( !*(unsigned int *)&stru_A8E960.random[360] ) /*0x531803*/
  {
LABEL_16:
    Debug::Log(); /*0x531805*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x531819*/
    v12 = 0; /*0x531821*/
    Vector::Clear((int)v11); /*0x531828*/
    *(unsigned int *)v10.__tail_0 = &off_7E1668; /*0x531831*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531839*/
    goto LABEL_12; /*0x53183e*/
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x531852*/
  v12 = 0; /*0x53185a*/
  Vector::Clear((int)v11); /*0x531861*/
  *(unsigned int *)v10.__tail_0 = &off_7E1668; /*0x53186a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x531872*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x53187b*/
  v9 = 0; /*0x531883*/
  Vector::Clear((int)v8); /*0x531887*/
  *(unsigned int *)v7.__tail_0 = &off_7E1668; /*0x531890*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x531898*/
  return 1; /*0x5317c4*/

}
}
v175 = 32; /*0x533d0f*/
// 0x5387d0
return ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v174)); /*0x533d18*/
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  int v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *(unsigned int *)(this + 8); /*0x5387da*/
  if ( *(unsigned int *)(this + 4) + 1 <= v4 ) /*0x5387e0*/
  {
    LABEL_9:
    *(unsigned int *)(*(unsigned int *)this + 8 * *(unsigned int *)(this + 4)) = *a2; /*0x53885b*/
    *(unsigned int *)(*(unsigned int *)this + 8 * *(unsigned int *)(this + 4) + 4) = *a3; /*0x538875*/
    v11 = *(unsigned int *)(this + 4) + 1; /*0x53887c*/
    *(unsigned char *)(this + 12) = 0; /*0x53887d*/
    *(unsigned int *)(this + 4) = v11; /*0x538881*/
    return 1; /*0x53888a*/
  }
  if ( v4 ) /*0x5387e4*/
  {
    v5 = *(unsigned int *)(this + 8); /*0x5387ed*/
    if ( v4 < 0 ) /*0x5387f1*/
      return 0; /*0x5387f1*/
  }
  else
  {
    v5 = 10; /*0x5387e6*/
  }
  v6 = (char *)operator new(8 * (v4 + v5)); /*0x538807*/
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < *(unsigned int *)(this + 4); *(unsigned int *)&v6[v8 + 4] = v9[1] ) /*0x53881c*/
    {
      v8 = 8 * i; /*0x538820*/
      v9 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x538829*/
      *(unsigned int *)&v6[v8] = *v9; /*0x53882e*/
    }
    operator delete((void *)(*(void **)this)); /*0x538842*/
    v10 = *(unsigned int *)(this + 8); /*0x538847*/
    *(unsigned int *)this = v6; /*0x53884f*/
    *(unsigned int *)(this + 8) = v5 + v10; /*0x538851*/
    *(unsigned int *)(this + 16) = 0; /*0x538854*/
    goto LABEL_9; /*0x538854*/
  }
  return 0; /*0x538864*/
}
char AllocateSurfaceScreenSurfaces(int a1, int a2, int a3, int a4, char a5)
{

  ((gamemd::Debug*)"Allocating new surfaces\n" /*w16g4 aAllocatingNewS*/)->Log("Allocating new surfaces\n"); /*0x533fdd G57w12: IDA push seq @ 0x533fdd +4 reg-vararg omitted*/
  if ( DSurface_Alternate ) /*0x533fee*/
  {
    ((gamemd::Debug*)"Deleting AlternateSurface\n" /*w16g4 aDeletingAltern*/)->Log("Deleting AlternateSurface\n"); /*0x533ff5 G57w12: IDA push seq @ 0x533ff5*/
    if ( DSurface_Alternate ) /*0x534005*/
      (**(void (***)(int, int))DSurface_Alternate)(DSurface_Alternate, 1); /*0x53400b*/
    DSurface_Alternate = 0; /*0x53400d*/
  }
  if ( g_DSurface_Hidden ) /*0x534019*/
  {
    ((gamemd::Debug*)"Deleting HiddenSurface\n" /*w16g4 aDeletingHidden*/)->Log("Deleting HiddenSurface\n"); /*0x534020 G57w12: IDA push seq @ 0x534020*/
    if ( g_DSurface_Hidden ) /*0x534030*/
      (**(void (***)(int, int))g_DSurface_Hidden)(g_DSurface_Hidden, 1); /*0x534036*/
    g_DSurface_Hidden = 0; /*0x534038*/
  }
  if ( DSurface_Composite ) /*0x534044*/
  {
    ((gamemd::Debug*)"Deleting CompositeSurface\n" /*w16g4 aDeletingCompos*/)->Log("Deleting CompositeSurface\n"); /*0x53404b G57w12: IDA push seq @ 0x53404b*/
    if ( DSurface_Composite ) /*0x53405b*/
      (**(void (***)(int, int))DSurface_Composite)(DSurface_Composite, 1); /*0x534061*/
    DSurface_Composite = 0; /*0x534063*/
  }
  if ( DSurface_Tile ) /*0x53406f*/
  {
    ((gamemd::Debug*)"Deleting TileSurface\n" /*w16g4 aDeletingTilesu*/)->Log("Deleting TileSurface\n"); /*0x534076 G57w12: IDA push seq @ 0x534076*/
    if ( DSurface_Tile ) /*0x534086*/
      (**(void (***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53408c*/
    DSurface_Tile = 0; /*0x53408e*/
  }
  if ( DSurface_Sidebar ) /*0x53409a*/
  {
    ((gamemd::Debug*)"Deleting SidebarSurface\n" /*w16g4 aDeletingSideba*/)->Log("Deleting SidebarSurface\n"); /*0x5340a1 G57w12: IDA push seq @ 0x5340a1*/
    if ( DSurface_Sidebar ) /*0x5340b1*/
      (**(void (***)(int, int))DSurface_Sidebar)(DSurface_Sidebar, 1); /*0x5340b7*/
    DSurface_Sidebar = 0; /*0x5340b9*/
  }
  bool v7; // bl
  v7 = Game_bVideoBackBuffer == 0; /*0x5340d2*/
  bool v29; // [esp+29h] [ebp-1h]
  v29 = byte_A8EB96 == 0; /*0x5340d7*/
  if ( a5 && a1->Height > 0 && a1->LockCount > 0 ) /*0x5340e8*/
  {
    char *v8; // eax
    v8 = (char *)operator new(0x24u); /*0x5340ec*/
    char *v9; // eax
    if ( v8 ) /*0x5340f6*/
      v9 = (char *)((DSurface*)v8)->Construct(a1->Height, a1->LockCount, 0, 0); /*0x534104*/
    else
      v9 = (char *)(0); /*0x53410b*/
    g_DSurface_Hidden = (int)v9; /*0x53410d*/
    (*(void (**)(char *, unsigned int))(v9->nextArrayIndex))( (char *)(v9), 0);  /*0x534117*/
    const char *v10; // eax
    v10 = (const char *)(g_INI_Key_VRAM); /*0x534122*/
    if ( !*(unsigned char *)(g_DSurface_Hidden + 25) ) /*0x53411f*/
      v10 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x53412b*/
    Debug::Log("HiddenSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v10); /*0x53413e*/
  }
  if ( aP1->vtable3 > 0 && aP1->vtable4 > 0 ) /*0x53414e*/
  {
    char *v11; // eax
    v11 = (char *)operator new(0x24u); /*0x534152*/
    char *v12; // eax
    if ( v11 ) /*0x53415c*/
      v12 = (char *)((DSurface*)v11)->Construct(aP1->vtable3, aP1->vtable4, v7, 1); /*0x534172*/
    else
      v12 = (char *)(0); /*0x534179*/
    DSurface_Composite = (int)v12; /*0x53417b*/
    (*(void (**)(char *, unsigned int))(v12->nextArrayIndex))( (char *)(v12), 0);  /*0x534185*/
    const char *v13; // eax
    v13 = (const char *)(g_INI_Key_VRAM); /*0x534190*/
    if ( !*(unsigned char *)(DSurface_Composite + 25) ) /*0x53418d*/
      v13 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x534199*/
    Debug::Log("CompositeSurface (%dx%d) %s ENABLE_3D\n", aP1->vtable3, aP1->vtable4, v13); /*0x5341ac*/
  }
  if ( aP2->vtable3 > 0 && aP2->vtable4 > 0 ) /*0x5341c4*/
  {
    char *v14; // eax
    v14 = (char *)operator new(0x24u); /*0x5341c8*/
    char *v15; // eax
    if ( v14 ) /*0x5341d2*/
      v15 = (char *)((DSurface*)v14)->Construct(aP2->vtable3, aP2->vtable4, v7, 1); /*0x5341e8*/
    else
      v15 = (char *)(0); /*0x5341ef*/
    DSurface_Tile = (int)v15; /*0x5341f1*/
    (*(void (**)(char *, unsigned int))(v15->nextArrayIndex))( (char *)(v15), 0);  /*0x5341fc*/
    const char *v16; // eax
    v16 = (const char *)(g_INI_Key_VRAM); /*0x534207*/
    if ( !*(unsigned char *)(DSurface_Tile + 25) ) /*0x534204*/
      v16 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x534210*/
    Debug::Log("TileSurface (%dx%d) %s ENABLE_3D\n", aP2->vtable3, aP2->vtable4, v16); /*0x534223*/
  }
  if ( DSurface_Composite && DSurface_Tile && *(unsigned char *)(DSurface_Composite + 25) != *(unsigned char *)(DSurface_Tile + 25) ) /*0x53424c*/
  {
    if ( DSurface_Composite ) /*0x534256*/
      (**(void (***)(int))DSurface_Composite)(1); /*0x53425c*/
    if ( DSurface_Tile ) /*0x534266*/
      (**(void (***)(int, int))DSurface_Tile)(DSurface_Tile, 1); /*0x53426c*/
    ((Debug *)"Moving TileSurface and CompositeSurface into system memory\n" /*w16g4 aMovingTilesurf*/)->Log("Moving TileSurface and CompositeSurface into system memory\n"); /*0x534273 G57w12: IDA push seq @ 0x534273*/
    char *v17; // eax
    v17 = (char *)operator new(0x24u); /*0x53427a*/
    if ( v17 ) /*0x534286*/
      DSurface_Composite = (int)((DSurface*)v17)->Construct(aP1->vtable3, aP1->vtable4, 1, 1); /*0x53429b*/
    else
      DSurface_Composite = 0; /*0x5342a2*/
    char *v18; // eax
    v18 = (char *)operator new(0x24u); /*0x5342aa*/
    if ( v18 ) /*0x5342b4*/
      DSurface_Tile = (int)((DSurface*)v18)->Construct(aP2->vtable3, aP2->vtable4, 1, 1); /*0x5342c9*/
    else
      DSurface_Tile = 0; /*0x5342d0*/
  }
  if ( *(int *)(a4 + 8) > 0 && *(int *)(a4 + 12) > 0 ) /*0x5342e7*/
  {
    char *v19; // eax
    v19 = (char *)operator new(0x24u); /*0x5342eb*/
    char *v20; // eax
    if ( v19 ) /*0x5342f5*/
      v20 = (char *)((DSurface*)v19)->Construct(*(unsigned int *)(a4 + 8), *(unsigned int *)(a4 + 12), v29, 0); /*0x53430f*/
    else
      v20 = (char *)(0); /*0x534316*/
    DSurface_Sidebar = (int)v20; /*0x534318*/
    (*(void (**)(char *, unsigned int))(v20->nextArrayIndex))( (char *)(v20), 0);  /*0x534323*/
    const char *v21; // eax
    v21 = (const char *)(g_INI_Key_VRAM); /*0x53432e*/
    if ( !*(unsigned char *)(DSurface_Sidebar + 25) ) /*0x53432b*/
      v21 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x534337*/
    Debug::Log("SidebarSurface (%dx%d) %s\n", *(unsigned int *)(a4 + 8), *(unsigned int *)(a4 + 12), v21); /*0x53434a*/
  }
  if ( !a5 ) /*0x534358*/
  {
    if ( a1->Height <= 0 ) /*0x53435f*/
      return 1; /*0x53435f*/
    if ( a1->LockCount > 0 ) /*0x53436a*/
    {
      char *v22; // eax
      v22 = (char *)operator new(0x24u); /*0x53436e*/
      char *v23; // eax
      if ( v22 ) /*0x534378*/
        v23 = (char *)((DSurface*)v22)->Construct(a1->Height, a1->LockCount, 0, 0); /*0x534388*/
      else
        v23 = (char *)(0); /*0x53438f*/
      g_DSurface_Hidden = (int)v23; /*0x534391*/
      (*(void (**)(char *, unsigned int))(v23->nextArrayIndex))( (char *)(v23), 0);  /*0x53439c*/
      const char *v24; // eax
      v24 = (const char *)(g_INI_Key_VRAM); /*0x5343a7*/
      if ( !*(unsigned char *)(g_DSurface_Hidden + 25) ) /*0x5343a4*/
        v24 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x5343b0*/
      Debug::Log("HiddenSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v24); /*0x5343c3*/
    }
  }
  if ( a1->Height > 0 && a1->LockCount > 0 ) /*0x5343d7*/
  {
    char *v25; // eax
    v25 = (char *)operator new(0x24u); /*0x5343db*/
    char *v26; // eax
    if ( v25 ) /*0x5343e5*/
      v26 = (char *)((DSurface*)v25)->Construct(a1->Height, a1->LockCount, 1, 0); /*0x5343f5*/
    else
      v26 = (char *)(0); /*0x5343fc*/
    DSurface_Alternate = (int)v26; /*0x5343fe*/
    (*(void (**)(char *, unsigned int))(v26->nextArrayIndex))( (char *)(v26), 0);  /*0x534409*/
    const char *v27; // eax
    v27 = (const char *)(g_INI_Key_VRAM); /*0x534414*/
    if ( !*(unsigned char *)(DSurface_Alternate + 25) ) /*0x534411*/
      v27 = (const char *)(g_Str_SYSTEM_MEMORY); /*0x53441d*/
    Debug::Log("AlternateSurface (%dx%d) %s\n", a1->Height, a1->LockCount, v27); /*0x534430*/
  }
  return 1; /*0x534438*/
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
  *((unsigned int *)dword_A8B230 + 1174) = a1; /*0x534a5d*/
  Multiplayer::ShowProgress(dword_A8B238, 8); /*0x534a63*/
  if ( *((unsigned int *)dword_A8B230 + 1174) != dword_822CF8 ) /*0x534a7a*/
  {
    if ( dword_884E0C ) /*0x534a8a*/
      (**(void (***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x534a90*/
    dword_884E0C = 0; /*0x534a97*/
    if ( *((unsigned int *)dword_A8B230 + 1174) == 1 ) /*0x534aa4*/
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
      (**(void (***)(int, int))dword_884E08)(dword_884E08, 1); /*0x534ae4*/
    v6 = __2_YAPAXI_Z(0x28u); /*0x534ae8*/
    if ( v6 ) /*0x534af2*/
      dword_884E08 = (int)MixFileClass::FromFile(v6, Source, (int)&dword_886980); /*0x534b05*/
    else
      dword_884E08 = 0; /*0x534b0c*/
    if ( dword_884E10 ) /*0x534b1a*/
      (**(void (***)(int, int))dword_884E10)(dword_884E10, 1); /*0x534b20*/
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
      (**(void (***)(int, int))dword_884E20)(dword_884E20, 1); /*0x534b78*/
    v9 = __2_YAPAXI_Z(0x28u); /*0x534b7c*/
    if ( v9 ) /*0x534b86*/
      dword_884E20 = (int)MixFileClass::FromFile(v9, v37, (int)&dword_886980); /*0x534b99*/
    else
      dword_884E20 = 0; /*0x534ba0*/
    if ( dword_884E1C ) /*0x534bae*/
      (**(void (***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x534bb4*/
    v10 = __2_YAPAXI_Z(0x28u); /*0x534bb8*/
    if ( v10 ) /*0x534bc2*/
      dword_884E1C = (int)MixFileClass::FromFile(v10, v38, (int)&dword_886980); /*0x534bd5*/
    else
      dword_884E1C = 0; /*0x534bdc*/
    Multiplayer::ShowProgress(dword_A8B238, 12); /*0x534be9*/
    wsprintfA(Source, "%s.PAL", v3); /*0x534bf9*/
    v11 = (unsigned char *)SearchMIXFile(Source, 0); /*0x534c04*/
    if ( v11 ) /*0x534c0b*/
    {
      v12 = 0; /*0x534c0d*/
      do /*0x534c56*/
      {
        v13 = v11->AbstractClass_1; /*0x534c11*/
        v14 = 4 * *v11; /*0x534c14*/
        v15 = v11 + 1; /*0x534c17*/
        LOBYTE(v29) = v14; /*0x534c18*/
        v16 = 4 * v15[1]; /*0x534c23*/
        v11 = v15 + 2; /*0x534c28*/
        v17 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (v12 % 256); /*0x534c42*/
        ++v12; /*0x534c49*/
        HIBYTE(v29) = 4 * v13; /*0x534c2f*/
        *(unsigned short *)v17 = v29; /*0x534c4a*/
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
      LOBYTE(v31) = 4 * *v23; /*0x534d01*/
      v24 = MEMORY[0x886382][3 * (j % 256)]; /*0x534d0c*/
      HIBYTE(v31) = 4 * MEMORY[0x886381][3 * (j % 256)]; /*0x534d16*/
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
        v6 = (int *)(*(int (**)(int, char *))(v4->turretChargeTimer_d)(v4, v22); /*0x5354dd*/
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
int sub_538D40()
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
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  __int16 result; // ax
  unsigned char v10[4]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  Color v12; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  unsigned __int8 *v14; // [esp+1Eh] [ebp-6h]

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
    v8 = Color::ConvertToRGB(&v12, (int)&v11); /*0x538ef2*/
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
      if ( (unsigned __int8)CCFileClass::Open(&v20, 0) ) /*0x538f62*/
      {
        FileClass::Load(&v20, (const CHAR *)1); /*0x538f71*/
        CCFileClass::Read(&v20, &stru_A8E960.waypoints[2442], 0x10000); /*0x538f84*/
        CCFileClass::Reset(&v20); /*0x538f8d*/
        byte_A9F91C = 0; /*0x538f92*/
      }
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x538f9d*/
      v22 = 0; /*0x538fa5*/
      Vector::Clear((int)v21); /*0x538fad*/
      *(unsigned int *)v20.__tail_0 = &off_7E1668; /*0x538fb6*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x538fba*/
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
      FileClass::Write(&v20, &stru_A8E960.waypoints[2442], 0x10000u); /*0x539003*/
      CCFileClass::Reset(&v20); /*0x53900c*/
    }
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x539015*/
    v22 = 0; /*0x53901d*/
    Vector::Clear((int)v21); /*0x539025*/
    *(unsigned int *)v20.__tail_0 = &off_7E1668; /*0x53902e*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x539032*/
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
int SuperWeapon_Update()
{

  int i; // esi
  unsigned int *v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int j; // edi
  unsigned int *v7; // esi
  int v8; // ebp
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int k; // esi
  unsigned int *v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  RulesClass *v19; // ecx
  int TalkBubbleTime; // ebp
  int v21; // ebp
  __int16 v22; // ax
  __int16 v23; // ax
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
  char v35; // [esp+13h] [ebp-15h]
  __int16 v36[2]; // [esp+14h] [ebp-14h] BYREF
  int v37; // [esp+18h] [ebp-10h]
  unsigned char v38[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( NukeFlash_Status == 1 ) /*0x53a6cf*/
  {
    if ( NukeFlash_Duration != -1 && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8E960.random[528] ) /*0x53a6ea*/
    {
      NukeFlash_Status = 2; /*0x53a6ec*/
      NukeFlash_Duration = 15; /*0x53a6f6*/
      NukeFlash_StartTime = *(unsigned int *)&stru_A8E960.random[528]; /*0x53a700*/
      ScenarioClass::UpdateLighting(); /*0x53a705*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x53a711*/
    }
  }
  else if ( NukeFlash_Status == 2 /*0x53a736*/
         && NukeFlash_Duration != -1
         && NukeFlash_Duration + NukeFlash_StartTime < *(int *)&stru_A8E960.random[528] )
  {
    NukeFlash_Status = 0; /*0x53a738*/
  }
  UpdatePsyDom(v34); /*0x53a742*/
  UpdateChronosphereEffect(); /*0x53a747*/
  if ( dword_A9FA28 > 0 ) /*0x53a754*/
  {
    for ( i = dword_A9FA28 - 1; i >= 0; --i ) /*0x53a759*/
    {
      v2 = (unsigned int *)*((unsigned int *)dword_A9FA1C + i); /*0x53a760*/
      v3 = v2[43]; /*0x53a765*/
      v4 = (*(int (**)(unsigned int *))(*v2 + 136))(v2); /*0x53a76b*/
      if ( v3 >= *(__int16 *)((*(int (**)(int))(*(unsigned int *)v4 + 156))(v4) + 6) / 2 && i < dword_A9FA28 ) /*0x53a790*/
      {
        v5 = i; /*0x53a793*/
        if ( i < --dword_A9FA28 ) /*0x53a79d*/
        {
          do /*0x53a7b5*/
          {
            ++v5; /*0x53a7a5*/
            *((unsigned int *)dword_A9FA1C + v5 - 1) = *((unsigned int *)dword_A9FA1C + v5); /*0x53a7a9*/
          }
          while ( v5 < dword_A9FA28 ); /*0x53a7b5*/
        }
      }
    }
  }
  for ( j = dword_A9FA70 - 1; j >= 0; --j ) /*0x53a7c4*/
  {
    v7 = (unsigned int *)*((unsigned int *)dword_A9FA64 + j); /*0x53a7d0*/
    v8 = v7[43]; /*0x53a7d7*/
    v9 = (*(int (**)(unsigned int *))(*v7 + 136))(v7); /*0x53a7dd*/
    if ( v8 > *(__int16 *)((*(int (**)(int))(*(unsigned int *)v9 + 156))(v9) + 6) / 2 ) /*0x53a7f8*/
    {
      v10 = (int *)(*(int (**)(unsigned int *, unsigned char *))(*v7 + 72))(v7, v38); /*0x53a803*/
      LightningStorm::Strike2(*v10, v10[1], v10[2]); /*0x53a81b*/
      if ( j < dword_A9FA70 ) /*0x53a828*/
      {
        v11 = j; /*0x53a82b*/
        if ( j < --dword_A9FA70 ) /*0x53a835*/
        {
          do /*0x53a84d*/
          {
            ++v11; /*0x53a83d*/
            *((unsigned int *)dword_A9FA64 + v11 - 1) = *((unsigned int *)dword_A9FA64 + v11); /*0x53a841*/
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
      v13 = (unsigned int *)*((unsigned int *)dword_A9F9D4 + k); /*0x53a86e*/
      v14 = v13[43]; /*0x53a873*/
      v15 = (*(int (**)(unsigned int *))(*v13 + 136))(v13); /*0x53a879*/
      if ( v14 >= *(__int16 *)((*(int (**)(int))(*(unsigned int *)v15 + 156))(v15) + 6) - 1 && k < dword_A9F9E0 ) /*0x53a89a*/
      {
        v16 = k; /*0x53a89d*/
        if ( k < --dword_A9F9E0 ) /*0x53a8a7*/
        {
          do /*0x53a8bf*/
          {
            ++v16; /*0x53a8af*/
            *((unsigned int *)dword_A9F9D4 + v16 - 1) = *((unsigned int *)dword_A9F9D4 + v16); /*0x53a8b3*/
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
          LOBYTE(v17) = dword_8871E0->RadApplicationDelay; /*0x53aae9*/
          if ( (unsigned char)v17 ) /*0x53aaf1*/
          {
            v31 = 3; /*0x53aaf8*/
            if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x53aaff*/
              v31 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 90196); /*0x53ab01*/
            VoxClass::FindAndPlay(&stru_828080, -1); /*0x53ab11*/
            StringCSF = GetStringCSF(aTxtLightningSt_0, 0, g_Str_File_Ion_cpp, 974); /*0x53ab31*/
            LOBYTE(v17) = MessageListClass::AddMessage(&unk_A8BC60, 0, 0, StringCSF, v31, 70, 150, 0); /*0x53ab40*/
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
    v18 = *(unsigned int *)&stru_A8E960.random[528]; /*0x53a91e*/
    if ( LightningStorm_Duration == -1 /*0x53a933*/
      || LightningStorm_Duration + LightningStorm_StartTime >= *(int *)&stru_A8E960.random[528] )
    {
      v19 = dword_8871E0; /*0x53a944*/
      if ( !(*(unsigned int *)&stru_A8E960.random[528] % *(unsigned int *)dword_8871E0->ShroudGrow) ) /*0x53a94d*/
      {
        LightningStorm::Strike(LightningStorm_Coords); /*0x53a95e*/
        v18 = *(unsigned int *)&stru_A8E960.random[528]; /*0x53a963*/
        v19 = dword_8871E0; /*0x53a969*/
      }
      v17 = v18 / v19->EngineerCaptureLevel; /*0x53a972*/
      if ( !(v18 % v19->EngineerCaptureLevel) ) /*0x53a972*/
      {
        TalkBubbleTime = v19->TalkBubbleTime; /*0x53a980*/
        v37 = 3; /*0x53a986*/
        v21 = TalkBubbleTime >> 1; /*0x53a98e*/
        while ( 1 ) /*0x53a9a7*/
        {
          *(unsigned int *)v36 = LightningStorm_Coords; /*0x53a9a7*/
          v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9ab*/
          v36[0] += v22; /*0x53a9b6*/
          v23 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -v21, v21); /*0x53a9c3*/
          v24 = 0; /*0x53a9c8*/
          v36[1] += v23; /*0x53a9ca*/
          v35 = 0; /*0x53a9d6*/
          if ( dword_A9F9E0 > 0 ) /*0x53a9db*/
          {
            while ( 1 ) /*0x53a9ef*/
            {
              v25 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**((unsigned int **)dword_A9F9D4 + v24) + 72))( /*0x53a9ef*/
                                *((unsigned int *)dword_A9F9D4 + v24),
                                v38);
              v26 = (__int16)(*v25 / 256); /*0x53aa0d*/
              v27 = v36[0] - v26; /*0x53aa18*/
              if ( v27 < 0 ) /*0x53aa1a*/
                v27 = v26 - v36[0]; /*0x53aa1c*/
              v28 = v36[1] - (__int16)(v25[1] / 256); /*0x53aa26*/
              if ( v28 < 0 ) /*0x53aa28*/
                v28 = (__int16)(v25[1] / 256) - v36[1]; /*0x53aa2a*/
              if ( v27 + v28 < dword_8871E0->RadDurationMultiple ) /*0x53aa3a*/
                break; /*0x53aa3a*/
              if ( ++v24 >= dword_A9F9E0 ) /*0x53aa44*/
                goto LABEL_52; /*0x53aa44*/
            }
            v35 = 1; /*0x53aa48*/
          }
LABEL_52:
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v36) && !v35 ) /*0x53aa66*/
            break; /*0x53aa66*/
          (v17) = ((v17) & ~0xFF) | ((--v37) & 0xFF); /*0x53aa6c*/
          if ( v37 <= 0 ) /*0x53aa73*/
            return v17; /*0x53aa73*/
        }
        (v17) = ((v17) & ~0xFF) | ((v37) & 0xFF); /*0x53aa81*/
        if ( v37 > 0 ) /*0x53aa87*/
          LOBYTE(v17) = LightningStorm::Strike(*(int *)v36); /*0x53aa92*/
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
      if ( (double)*(int *)(*(unsigned int *)&g_RulesClass_Instance + 772) * 0.01 <= (double)v4 /*0x53afaa*/
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
      if ( dword_A8B230[378].ptr_8 == dword_A8B230[378].ptr_4 ) /*0x53b052*/
      PsyDom_Status = 0; /*0x53b054*/
      break; /*0x53b054*/
    default:
      return;
  }
}
}
// 0x53B460
namespace gamemd {
void sub_53B460(int a1, Scenario * a2)
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
    v3 = (char *)operator new(0x24u); /*0x53b48d*/
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
    (*(void (**)(char *, AudioStream *, unsigned int, int))(v5->vtable2))(v5, DSurface_Composite, 0, 1); /*0x53b4d4*/
    flt_A9FAA0 = 0.0; /*0x53b4d7*/
    flt_A9FAA4 = 0.0; /*0x53b4e1*/
    ChronoScreenEffect_Duration = a1; /*0x53b4eb*/
    a1 = a1; /*0x53b4f1*/
    ChronoScreenEffect_Status = 1; /*0x53b4f7*/
    AudioMixer::Shutdown(); /*0x53b501*/
    StopThemeClass(1); /*0x53b508*/
    AudioController::Init(&stru_A9F9B8); /*0x53b512*/
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 644), 0x2000, 1.0, (int)&stru_A9F9B8); /*0x53b531*/
    SetVocClassEnabled(0); /*0x53b538*/
    byte_A9FAD1 = (((unsigned char *)&(dword_A8B230[381].ptr_C))[2]); /*0x53b549*/
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
(*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 16))( /*0x53b5fb*/ DSurface_Composite, (int *)(&DSurface_ViewBounds), (int *)(&DSurface_ViewBounds), (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Blue << g_BitMask_Green) | (255 >> g_BitMask_Red << g_BitShift_Blue));






      if ( --ChronoScreenEffect_Duration == 1 ) /*0x53b60e*/
        SetScenarioClassTimer(0); /*0x53b612*/
      if ( !ChronoScreenEffect_Duration ) /*0x53b61e*/
    {
        ((MapClass *)((int)(&MapClass_Instance)))->MarkForRedraw((int)((MapClass *)((int)(&MapClass_Instance))), 2); /*0x53b62b*/
        (*(void (**)(int, unsigned int))(*(unsigned int *)g_ChronoEffectState + 24))(g_ChronoEffectState, 0); /*0x53b63a*/
        dword_A9FAAC = DSurface_Composite; /*0x53b649*/
        DSurface_Composite = g_ChronoEffectState; /*0x53b654*/
        ChronoScreenEffect_Status = 0; /*0x53b65a*/
        byte_A9FA94 = 1; /*0x53b664*/
        ((TacticalMap*)&MapClass_Instance)->Redraw(); /*0x53b66b*/
        ChronoScreenEffect_Duration = dword_A9FAA8; /*0x53b67b*/
        byte_A9FA94 = 0; /*0x53b683*/
        DSurface_Composite = dword_A9FAAC; /*0x53b68a*/
        ChronoScreenEffect_Status = 3; /*0x53b68f*/
        SetVocClassEnabled(1); /*0x53b699*/
        ((Mixer*)((int **)&dword_A9F9B8))->ReleaseChannel(); /*0x53b6a3*/
        PlayVocClass(g_RulesClass_Instance->DetailMinFrameRateNormal, 0x2000, 1.0, (int)&dword_A9F9B8); /*0x53b6c2*/
        SetVocClassEnabled(0); /*0x53b6c9*/
    }
      break; /*0x53b6c9*/
    case 3: /*0x53b56e*/
      RenderChronosphereScreenEffect(1); /*0x53b6d0*/
      if ( !--ChronoScreenEffect_Duration ) /*0x53b6e0*/
    {
        ScenarioClass::ProcessIntroTimer(); /*0x53b6e6*/
        ((Mixer*)((int **)&dword_A9F9B8))->ReleaseChannel(); /*0x53b6f0*/
        SetAudioSource( (AudioMixer*)(&dword_A9F9B8), 0, 0); /*0x53b6fe*/
        AudioFileClass::Release( (gamemd::AudioFileClass *)(&dword_A9F9B8)); /*0x53b708*/
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
        ((MapClass *)((int)(&MapClass_Instance)))->MarkForRedraw((int)((MapClass *)((int)(&MapClass_Instance))), 2); /*0x53b767*/
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
                (*((unsigned short *)&(v17))) = *(unsigned short *)v17; /*0x53bdee*/
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
              (*((unsigned short *)&(v24))) = *(unsigned short *)v24; /*0x53bfd6*/
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
  unsigned int *v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  unsigned __int16 *v12; // eax
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
      v5 = (unsigned int *)v4; /*0x53d38b*/
      if ( v4 ) /*0x53d392*/
      {
        *(unsigned int *)(v4 + 4) = 512; /*0x53d39e*/
        *(unsigned int *)(v4 + 8) = 256; /*0x53d3a5*/
        *(unsigned int *)(v4 + 12) = 0; /*0x53d3ac*/
        /* X11: vtable install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x53d3b3*/
        *(unsigned int *)(v4 + 16) = 1; /*0x53d3b9*/
        Buffer::Init((Buffer *)(v4 + 20), 0, 0x20000); /*0x53d3c0*/
        /* X11: vtable install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x53d3c5*/
      }
      else
      {
        v5 = 0; /*0x53d3cd*/
      }
      *v3 = (int)v5; /*0x53d3cf*/
      (*(void (**)(unsigned int *, int))(*v5 + 24))(v5, -1); /*0x53d3d7*/
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
              LOWORD(v12) = Math::RoundToInt(v1); /*0x53d490*/
              LightningStormGlow_Helper = GenerateLightningStormGlow_Helper(0, (int)v12); /*0x53d497*/
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
        fmul ds:dbl_7E5190
        fadd [esp+38h+var_8]
        fst [esp+38h+var_8]
        fcomp qword ptr [esp+38h+var_14+4]
        fnstsw ax
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
  v4 = operator new(4 * a1); /*0x53de57*/
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
  CoordBounds::Constructor(stru_AA0398, qword_AA0388, (*((signed int *)(((unsigned char *)&(qword_AA0388)) + 4)))); /*0x53decc*/
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
int Message_IsDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
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
      (*(void (**)(int, int64_t *, char *))(*&dword_887640->CellIterator_NextY))( /*0x53e7ce*/
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
        (*(void (**)(int, unsigned int, unsigned int))(*&dword_887640->FootClass_E0))( /*0x53e827*/
          dword_887640,
          dword_AA0434,
          (*(((unsigned int *)&(dword_AA0434)) + 1)));
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
                    (*(void (**)(int, LONG, LONG))(*&dword_887640->FootClass_E0))( /*0x53ea06*/
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
        memcpy(v23, lpMsg, sizeof(v23)); /*0x53ebd3*/
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

  CCFileClass::Construct(&v2, (char *)this); /*0x538c48*/
  if ( (unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538c53*/
  {
    FileClass::Load(&v2, (const CHAR *)1); /*0x538c62*/
    CCFileClass::Read(&v2, &stru_A8E960.waypoints[2442], 0x10000); /*0x538c75*/
    CCFileClass::Reset(&v2); /*0x538c7e*/
    byte_A9F91C = 0; /*0x538c83*/
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x538c8e*/
  v4 = 0; /*0x538c96*/
  Vector::Clear((int)v3); /*0x538c9e*/
  *(unsigned int *)v2.__tail_0 = &off_7E1668; /*0x538ca7*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v2); /*0x538cb4*/

}
} // namespace gamemd

// 0x538CC0
namespace gamemd {
int E4Recv_538CC0::sub_538CC0(char * Source)
{

  CCFileClass v2; // [esp+0h] [ebp-6Ch] BYREF
  int v3[3]; // [esp+58h] [ebp-14h] BYREF
  int v4; // [esp+64h] [ebp-8h]

  CCFileClass::Construct(&v2, (char *)this); /*0x538cc8*/
  if ( !(unsigned __int8)CCFileClass::Open(&v2, 0) ) /*0x538cd3*/
  {
    FileClass::Load(&v2, (const CHAR *)2); /*0x538ce2*/
    FileClass::Write(&v2, &stru_A8E960.waypoints[2442], 0x10000u); /*0x538cf5*/
    CCFileClass::Reset(&v2); /*0x538cfe*/
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x538d07*/
  v4 = 0; /*0x538d0f*/
  Vector::Clear((int)v3); /*0x538d17*/
  *(unsigned int *)v2.__tail_0 = &off_7E1668; /*0x538d20*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v2); /*0x538d2d*/

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
  LightningStorm_CloudsManifesting = (int)&vt_DynamicVectorClass; /*0x53959d*/
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
    LightningStorm_CloudsManifesting = (int)&vt_VectorClass; /*0x5395ce*/
    byte_A9F9A9 |= 1u; /*0x5395e1*/
    if ( dword_A9FA64 ) /*0x5395e7*/
    {
      if ( byte_A9FA6D ) /*0x5395f1*/
      {
        operator delete((void *)(dword_A9FA64)); /*0x5395f4*/
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
  LightningStorm_CloudsPresent = (int)&vt_DynamicVectorClass; /*0x53963d*/
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
    LightningStorm_CloudsPresent = (int)&vt_VectorClass; /*0x53966e*/
    byte_A9F9A8 |= 1u; /*0x539681*/
    if ( dword_A9F9D4 ) /*0x539687*/
    {
      if ( byte_A9F9DD ) /*0x539691*/
      {
        operator delete((void *)(dword_A9F9D4)); /*0x539694*/
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
  LightningStorm_BoltsPresent = (int)&vt_DynamicVectorClass; /*0x5396dd*/
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
    LightningStorm_BoltsPresent = (int)&vt_VectorClass; /*0x53970e*/
    byte_A9F9A8 |= 2u; /*0x539721*/
    if ( dword_A9FA1C ) /*0x539727*/
    {
      if ( byte_A9FA25 ) /*0x539731*/
      {
        operator delete((void *)(dword_A9FA1C)); /*0x539734*/
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
  return (*((unsigned int *)&(dbl_A9FF80))); /*0x53ca66*/
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
  stru_AA0118 = (int)&vt_DynamicVectorClass; /*0x53ca8d*/
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
    stru_AA0118 = (int)&vt_VectorClass; /*0x53cabe*/
    byte_A9FAD8 |= 1u; /*0x53cad1*/
    if ( dword_AA011C ) /*0x53cad7*/
    {
      if ( byte_AA0125 ) /*0x53cae1*/
      {
        operator delete((void *)(dword_AA011C)); /*0x53cae4*/
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
  __int64 v2; // rax
  ObjectClass *v3; // edi
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
      AudioThread::UpdateStats(v1 + 8, v2); /*0x53e0a0*/
      v3 = (ObjectClass *)dword_AA045C; /*0x53e0ac*/
      if ( dword_AA045C && dword_AA0444 && Stream ) /*0x53e0c8*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e0d3*/
        if ( dword_AA0444 == 2 /*0x53e0f2*/
          && (v4 = (unsigned int)AudioStream::GetChannel((AudioStream *)v3) >> 1, sub_408D30(v3) < v4) )
        {
          if ( dword_AA0460 ) /*0x53e0fb*/
          {
            v5 = sub_408D40(v3); /*0x53e108*/
            if ( WriteAudioStreamToFile((int)dword_AA0460, Stream, v5, (char *)&lpThreadParameter) != 1 ) /*0x53e122*/
              dword_AA046C = 1; /*0x53e124*/
          }
        }
        else if ( dword_AA0444 == 1 ) /*0x53e137*/
        {
          v6 = (unsigned int)AudioStream::GetChannel((AudioStream *)v3) >> 1; /*0x53e144*/
          if ( sub_408D40(v3) < v6 ) /*0x53e14d*/
          {
            if ( dword_AA0464 ) /*0x53e156*/
            {
              Channel = AudioStream::GetChannel((AudioStream *)v3); /*0x53e15c*/
              WriteAudioStreamToFile((int)dword_AA0464, Stream, Channel >> 1, 0); /*0x53e170*/
              fflush(Stream); /*0x53e17c*/
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
