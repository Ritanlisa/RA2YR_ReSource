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
#include "e4/classes/FileTreeNode_e4.hpp"

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
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005312A0.json)
}
}
// 0x531680
namespace gamemd {
char BulkData_Initialize()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00531680.json)
}
}
// 0x532150
namespace gamemd {
CreateTeamCommand * * InitCommands()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x532150)
}
} // namespace gamemd

// 0x533FD0
namespace gamemd {
DSurface * * AllocateSurfaceScreenSurfaces(int a1, ObjectClass * aP1, ObjectClass * aP2, int a4, char a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x533FD0)
}
}
// 0x5349C0
namespace gamemd {
void TheaterClass_LoadMIX(int a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005349C0.json)
}
}
// 0x5353D0
namespace gamemd {
ObjectClass * * Radar_FindClosestEnemy(short * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5353D0)
}
}
// 0x538D40
namespace gamemd {
void sub_538D40()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538D40.json)
}
}
// 0x538E70
namespace gamemd {
AbstractClass * * sub_538E70(double a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538E70.json)
}
}
// 0x538F20
namespace gamemd {
char sub_538F20(int a1, int a2, char * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538F20.json)
}
}
// 0x539560
namespace gamemd {
int sub_539560()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539560.json)
}
}
// 0x539570
namespace gamemd {
int sub_539570()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539570.json)
}
}
// 0x53A6C0
namespace gamemd {
void SuperWeapon_Update()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053A6C0.json)
}
}
// 0x53AF40
namespace gamemd {
AnimClass * * PsyDom::Update(void *a1, void *a2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053AF40.json)
}
}
// 0x53B460
namespace gamemd {
void sub_53B460(int a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053B460.json)
}
}
// 0x53B560
namespace gamemd {
AnimClass * * UpdateChronosphereEffect()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53B560)
}
}
// 0x53BBA0
namespace gamemd {
int RenderChronosphereScreenEffect(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053BBA0.json)
}
}
// 0x53D330
namespace gamemd {
void GenerateLightningStormGlow()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053D330.json)
}
}
// 0x53DE00
namespace gamemd {
int InitializeAudioStreaming(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DE00.json)
}
}
// 0x53E730
namespace gamemd {
void Message_IsDialog(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053E730.json)
}
}
// 0x53E770
namespace gamemd {
void GameLoopMessagePump(LPMSG lpMsg, HWND a2, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053E770.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00534DE0.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538C20.json)
}
} // namespace gamemd

// 0x538C40
namespace gamemd {
int sub_538C40(char * Source)
{
    (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538C40.json)
}
} // namespace gamemd

// 0x538CC0
namespace gamemd {
int sub_538CC0(char * Source)
{
    (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538CC0.json)
}
} // namespace gamemd

// 0x539110
namespace gamemd {
void sub_539110()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539110.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005392B0.json)
}
} // namespace gamemd

// 0x5392C0
namespace gamemd {
int sub_5392C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005392C0.json)
}
} // namespace gamemd

// 0x5392E0
namespace gamemd {
int sub_5392E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005392E0.json)
}
} // namespace gamemd

// 0x539300
namespace gamemd {
int sub_539300()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539300.json)
}
} // namespace gamemd

// 0x539350
namespace gamemd {
void sub_539350()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539350.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005394F0.json)
}
} // namespace gamemd

// 0x539500
namespace gamemd {
int sub_539500()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539500.json)
}
} // namespace gamemd

// 0x539520
namespace gamemd {
int sub_539520()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539520.json)
}
} // namespace gamemd

// 0x539540
namespace gamemd {
int sub_539540()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539540.json)
}
} // namespace gamemd

// 0x539580
namespace gamemd {
int sub_539580()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539580.json)
}
} // namespace gamemd

// 0x5395C0
namespace gamemd {
void sub_5395C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005395C0.json)
}
} // namespace gamemd

// 0x539620
namespace gamemd {
int sub_539620()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539620.json)
}
} // namespace gamemd

// 0x539660
namespace gamemd {
void sub_539660()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539660.json)
}
} // namespace gamemd

// 0x5396C0
namespace gamemd {
int sub_5396C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005396C0.json)
}
} // namespace gamemd

// 0x539700
namespace gamemd {
void sub_539700()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00539700.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053AC80.json)
}
} // namespace gamemd

// 0x53AD00
namespace gamemd {
int UpdateSurfaceAnimations(int a1, int aP1, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053AD00.json)
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
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053C820.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053C9C0.json)
}
} // namespace gamemd

// 0x53C9D0
namespace gamemd {
int sub_53C9D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053C9D0.json)
}
} // namespace gamemd

// 0x53C9F0
namespace gamemd {
int sub_53C9F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053C9F0.json)
}
} // namespace gamemd

// 0x53CA10
namespace gamemd {
int sub_53CA10()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053CA10.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053CA50.json)
}
} // namespace gamemd

// 0x53CA70
namespace gamemd {
int sub_53CA70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053CA70.json)
}
} // namespace gamemd

// 0x53CAB0
namespace gamemd {
void sub_53CAB0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053CAB0.json)
}
} // namespace gamemd

// 0x53D310
namespace gamemd {
void sub_53D310()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053D310.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053D9F0.json)
}
} // namespace gamemd

// 0x53DDE0
namespace gamemd {
int sub_53DDE0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DDE0.json)
}
} // namespace gamemd

// 0x53E070
namespace gamemd {
DWORD sub_53E070(unsigned int * lpThreadParameter)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053E070.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F220.json)
}
} // namespace gamemd

// 0x53F240
namespace gamemd {
void sub_53F240()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F240.json)
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
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53F2F0)
}
} // namespace gamemd

// 0x53F310
namespace gamemd {
long long sub_53F310()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53F310)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F3E0.json)
}
} // namespace gamemd

// 0x53F3F0
namespace gamemd {
int sub_53F3F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F3F0.json)
}
} // namespace gamemd

// 0x53F410
namespace gamemd {
int sub_53F410()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F410.json)
}
} // namespace gamemd

// 0x53F880
namespace gamemd {
int sub_53F880()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F880.json)
}
} // namespace gamemd

// 0x53F8A0
namespace gamemd {
void sub_53F8A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F8A0.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053FA40.json)
}
} // namespace gamemd

// 0x53FA50
namespace gamemd {
int sub_53FA50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053FA50.json)
}
} // namespace gamemd

// 0x53FA70
namespace gamemd {
int sub_53FA70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053FA70.json)
}
} // namespace gamemd
