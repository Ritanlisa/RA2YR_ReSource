// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/VoxelSection_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_750440_e4.hpp"
#include "e4/classes/E4Recv_752CB0_e4.hpp"
#include "e4/classes/E4Recv_7531A0_e4.hpp"
#include "e4/classes/E4Recv_754900_e4.hpp"
#include "e4/classes/E4Recv_755CB0_e4.hpp"
#include "e4/classes/E4Recv_7564A0_e4.hpp"
#include "e4/classes/E4Recv_7564E0_e4.hpp"
#include "e4/classes/E4Recv_756570_e4.hpp"
#include "e4/classes/E4Recv_756860_e4.hpp"
#include "e4/classes/E4Recv_7589F0_e4.hpp"
#include "e4/classes/E4Recv_758AD0_e4.hpp"
#include "e4/classes/E4Recv_758B70_e4.hpp"
#include "e4/classes/E4Recv_758E10_e4.hpp"
#include "e4/classes/E4Recv_759760_e4.hpp"
#include "e4/classes/E4Recv_759790_e4.hpp"
#include "e4/classes/E4Recv_759BC0_e4.hpp"
#include "e4/classes/E4Recv_75A120_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/E4Recv_74BBF0_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/E4Recv_764B90_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_74BCA0_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/E4Recv_771890_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_765000_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/E4Recv_7AF3D0_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/AudioPool_e4.hpp"
#include "e4/classes/AudioSource_e4.hpp"
#include "e4/classes/WDTClass_e4.hpp"

// 0x750920
namespace gamemd {
AbstractClass * * VocClass_Play(int a1, int a2, float a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750920)
}
}
// 0x750AC0
namespace gamemd {
double ComputeAudioPosition(AudioMixer * aP0, unsigned int * a1, int a3)
{
    return 0.0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750AC0)
}
}
// 0x750D40
namespace gamemd {
VocClass * StartAudioController(AudioMixer * ecx0, AudioSource *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750D40)
}
}
// 0x751DD0
namespace gamemd {
char sub_751DD0(LPCSTR lpRootPathName, UINT * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751DD0)
}
}
// 0x752480
namespace gamemd {
int ThemeManager_Update(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752480)
}
}
// 0x752760
namespace gamemd {
void ThemeClass_Update()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752760)
}
}
// 0x752A40
namespace gamemd {
void ThemeQueue_ClearPlaylist(int a1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752A40)
}
}
// 0x752B70
namespace gamemd {
int TauntClass_Play(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752B70)
}
}
// 0x752CB0
namespace gamemd {
int E4Recv_752CB0::sub_752CB0(const char * a2)
{

  int v3; // eax

  this->owningHouseIndex = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  LOBYTE(this->fallRate) = 0; /*0x752cdf*/
  BYTE1(this->attachedTag) = 0; /*0x752ce2*/
  BYTE2((&this->ambientSoundController)[0]) = 0; /*0x752ce5*/
  (&this->ambientSoundController)[3] = 1; /*0x752ce8*/
  (&this->ambientSoundController)[4] = 0; /*0x752cef*/
  (&this->customSound_controller)[0] = 2; /*0x752cf2*/
  if ( g_InfantrySelectState < dword_B1D4A8 /*0x752d2e*/
    || (byte_B1D4AD || !dword_B1D4A8)
    && dword_B1D4B4 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B1D4A0 + 8))(
         (int *)&dword_B1D4A0,
         dword_B1D4A8 + dword_B1D4B4,
         0) )
  {
    v3 = (unsigned int)(g_InfantrySelectState++);
    *((unsigned int *)g_InfantryRenderPool + v3) = (unsigned int)(this); /*0x752d4a*/
  }
  return (int)this; /*0x752d4d*/

}
}
// 0x753000
namespace gamemd {
int CCINIClass::InitFromINIEVA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753000)
}
}
// 0x7531A0
namespace gamemd {
int E4Recv_7531A0::EVA_LoadINI()
{

  int result; // eax
  void *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = (gamemd::ObjectClass *)(this); /*0x7531a0*/
  if ( dword_B1D4C4 ) /*0x7531a8*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7531aa*/
    dword_B1D4C4 = 0; /*0x7531b1*/
  }
  if ( g_InfantryDrawState ) /*0x7531c3*/
    ((Audio *)(g_InfantryDrawState))->Release(); /*0x7531c5*/
  ThemeClass::ClearQueues(); /*0x7531ca*/
  for ( result = g_InfantrySelectState; g_InfantrySelectState > 0; result = g_InfantrySelectState ) /*0x7531d6*/
  {
    v2 = *(void **)g_InfantryRenderPool; /*0x7531de*/
    if ( *(unsigned int *)g_InfantryRenderPool ) /*0x7531de*/
    {
      v4 = *(ObjectClass **)g_InfantryRenderPool; /*0x7531f4*/
      v3 = (*(int (**)(int *, ObjectClass **))(dword_B1D4A0 + 16))((int *)&dword_B1D4A0, &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < g_InfantrySelectState && v3 < --g_InfantrySelectState ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((unsigned int *)g_InfantryRenderPool + v3 - 1) = *((unsigned int *)g_InfantryRenderPool + v3); /*0x75321f*/
        }
        while ( v3 < g_InfantrySelectState ); /*0x75322b*/
      }
      __3_YAXPAX_Z(v2); /*0x75322e*/
    }
  }
  return result; /*0x753241*/

}
}
// 0x7532A0
namespace gamemd {
bool sub_7532A0(std::codecvt_base * a1)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7532A0)
}
}
// 0x7540F0
namespace gamemd {
int TransformVoxelVertex(VoxelSection *a1, VoxelSection *a2, VoxelSection *aP2, float *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7540F0)
}
}
// 0x7542F0
namespace gamemd {
int InitializeAudioOcclusion(IUnknown * aP0, unsigned int *a1, unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7542F0)
}
}
// 0x757120
namespace gamemd {
void RenderVoxels(void * a1, void * a2, void * a3, void * a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x757120)
}
}
// 0x757360
namespace gamemd {
void ProcessVoxelDepthSamples()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x757360)
}
}
// 0x757980
namespace gamemd {
void ProcessVoxelColorScanline()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x757980)
}
}
// 0x757BF0
namespace gamemd {
void VoxelDrawScanline()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x757BF0)
}
}
// 0x7581F0
namespace gamemd {
void ProcessVoxelColorSamples()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7581F0)
}
}
// 0x758430
namespace gamemd {
void ProcessVoxelScanSamples()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x758430)
}
}
// 0x758AD0
namespace gamemd {
AbstractClass * * E4Recv_758AD0::sub_758AD0(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x758AD0)
}
}
// 0x759180
namespace gamemd {
int sub_759180()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759180)
}
}
// 0x7591C0
namespace gamemd {
void sub_7591C0()
{
  dword_B45B58 = (int)&VectorClass_MovieHandle___vftable; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    RA2_OPDEL(AsyncIO_Instance); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}
}
// 0x759790
namespace gamemd {
int E4Recv_759790::sub_759790()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759790)
}
}
// 0x75A120
namespace gamemd {
int E4Recv_75A120::sub_75A120(int a2, int * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A120)
}
}
// 0x75A2F0
namespace gamemd {
unsigned int * * sub_75A2F0(int a1, int a2, unsigned int * Block, size_t Size)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A2F0)
}
}
// 0x75A350
namespace gamemd {
int sub_75A350(int a1, int a2, unsigned char * a3, unsigned int a4)
{
  int v4; // ebx
  int i; // eax
  int result; // eax

  v4 = *(unsigned int *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      qmemcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(unsigned char *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(unsigned int *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((uint16_t *)a3, a4 >> 1); /*0x75a3b4*/
      *(unsigned int *)(v4 + 1356) = *(unsigned int *)(v4 + 1284); /*0x75a3c1*/
      result = 0; /*0x75a3bf*/
      break; /*0x75a3c8*/
    case 6: /*0x75a367*/
      result = (*(int (**)(void))(v4 + 1344))(); /*0x75a3c9*/
      break; /*0x75a3d0*/
    case 7: /*0x75a367*/
      (*(void (**)(void))(v4 + 1348))(); /*0x75a3d1*/
      goto LABEL_10; /*0x75a3d1*/
    default:
  LABEL_10:
      result = 0; /*0x75a3d7*/
      break; /*0x75a3d7*/
  }
  return result; /*0x75a39f*/
}
}
// 0x75A7D0
namespace gamemd {
int AnimSystem_Reset(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A7D0)
}
}
// 0x75F230
namespace gamemd {
void sub_75F230(unsigned int * a1, unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75F230)
}
}
// 0x7500F0
namespace gamemd {
int sub_7500F0()
{
  dword_B1D300 = 0; /*0x7500f2*/
  dword_B1D304 = 0; /*0x7500f7*/
  dword_B1D308 = 0; /*0x7500fc*/
  dword_B1D30C = 0; /*0x750101*/
  return 0; /*0x750106*/
}
} // namespace gamemd

// 0x750110
namespace gamemd {
void sub_750110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75011c*/
  dbl_B1D318 = Math::Sqrt(v0 + v0); /*0x75012e*/
}
} // namespace gamemd

// 0x750140
namespace gamemd {
void sub_750140()
{
  dbl_B1D398 = dbl_B1D318 / 60.0; /*0x75014c*/
}
} // namespace gamemd

// 0x750160
namespace gamemd {
void sub_750160()
{
  dbl_B1D360 = 1.0 / dbl_B1D398; /*0x75016c*/
}
} // namespace gamemd

// 0x750180
namespace gamemd {
void sub_750180()
{
  dbl_B1D358 = 0.0174532925199433 * 45.0; /*0x75018c*/
}
} // namespace gamemd

// 0x7501A0
namespace gamemd {
void sub_7501A0()
{
  dbl_B1D330 = 0.0174532925199433 * 60.0; /*0x7501ac*/
}
} // namespace gamemd

// 0x7501C0
namespace gamemd {
void sub_7501C0()
{
  dbl_B1D2F8 = 0.0174532925199433 * 90.0; /*0x7501cc*/
}
} // namespace gamemd

// 0x7501E0
namespace gamemd {
long long sub_7501E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D2F8 - dbl_B1D330); /*0x7501f2*/
  result = Math::RoundToInt(v0 * dbl_B1D318 * 0.5); /*0x750206*/
  dword_B1D3A0 = result; /*0x75020b*/
  return result; /*0x750210*/
}
} // namespace gamemd

// 0x750220
namespace gamemd {
void sub_750220()
{
  dbl_B1D338 = Math::ArcTan((double)dword_B1D3A0 * 0.00390625); /*0x750237*/
}
} // namespace gamemd

// 0x750250
namespace gamemd {
void sub_750250()
{
  dbl_B1D350 = Math::ArcTan((double)(2 * dword_B1D3A0) / dbl_B1D318); /*0x750272*/
}
} // namespace gamemd

// 0x750280
namespace gamemd {
long long sub_750280()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D3A0) + 0.5); /*0x75029b*/
  dword_B1D390 = result; /*0x7502a0*/
  return result; /*0x7502a6*/
}
} // namespace gamemd

// 0x7502B0
namespace gamemd {
int sub_7502B0()
{
  word_B1D310 = 0; /*0x7502b2*/
  word_B1D312 = 0; /*0x7502b8*/
  return 0; /*0x7502be*/
}
} // namespace gamemd

// 0x7502C0
namespace gamemd {
int sub_7502C0()
{
  dword_B1D340 = 0; /*0x7502c2*/
  dword_B1D344 = 0; /*0x7502c7*/
  dword_B1D348 = 0; /*0x7502cc*/
  return 0; /*0x7502d1*/
}
} // namespace gamemd

// 0x7502E0
namespace gamemd {
int sub_7502E0()
{
  dword_B1D370 = 0; /*0x7502e5*/
  dword_B1D368 = 128; /*0x7502ef*/
  dword_B1D36C = 128; /*0x7502f4*/
  return 128; /*0x7502f9*/
}
} // namespace gamemd

// 0x750300
namespace gamemd {
int sub_750300()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750300)
}
} // namespace gamemd

// 0x750340
namespace gamemd {
void sub_750340()
{
  dword_B1D378 = (int)&VectorClass_VocClass___vftable; /*0x750348*/
  if ( g_VocAudioConfig && byte_B1D385 ) /*0x75035c*/
  {
    RA2_OPDEL(g_VocAudioConfig); /*0x75035f*/
    g_VocAudioConfig = 0; /*0x750367*/
  }
  byte_B1D385 = 0; /*0x75036d*/
  dword_B1D380 = 0; /*0x750373*/
}
} // namespace gamemd

// 0x7509E0
namespace gamemd {
int * StartAudioControllerAt(int aP0, unsigned int *a2, int **a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7509E0)
}
} // namespace gamemd

// 0x750E20
namespace gamemd {
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750E20)
}
} // namespace gamemd

// 0x750EC0
namespace gamemd {
int VocClass_Update()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750EC0)
}
} // namespace gamemd

// 0x750F40
namespace gamemd {
int sub_750F40(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750F40)
}
} // namespace gamemd

// 0x751040
namespace gamemd {
int sub_751040()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751040)
}
} // namespace gamemd

// 0x751080
namespace gamemd {
int sub_751080()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751080)
}
} // namespace gamemd

// 0x7518C0
namespace gamemd {
void VocClass_SetEnabled(char a1)
{
  VocClass_VoicesEnabled = a1; /*0x7518c0*/
}
} // namespace gamemd

// 0x751EA0
namespace gamemd {
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751EA0)
}
} // namespace gamemd

// 0x752020
namespace gamemd {
void sub_752020()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75202c*/
  dbl_B1D3E8 = Math::Sqrt(v0 + v0); /*0x75203e*/
}
} // namespace gamemd

// 0x752050
namespace gamemd {
void sub_752050()
{
  dbl_B1D490 = dbl_B1D3E8 / 60.0; /*0x75205c*/
}
} // namespace gamemd

// 0x752070
namespace gamemd {
void sub_752070()
{
  dbl_B1D438 = 1.0 / dbl_B1D490; /*0x75207c*/
}
} // namespace gamemd

// 0x752090
namespace gamemd {
void sub_752090()
{
  dbl_B1D430 = 0.0174532925199433 * 45.0; /*0x75209c*/
}
} // namespace gamemd

// 0x7520B0
namespace gamemd {
void sub_7520B0()
{
  dbl_B1D400 = 0.0174532925199433 * 60.0; /*0x7520bc*/
}
} // namespace gamemd

// 0x7520D0
namespace gamemd {
void sub_7520D0()
{
  dbl_B1D3C0 = 0.0174532925199433 * 90.0; /*0x7520dc*/
}
} // namespace gamemd

// 0x7520F0
namespace gamemd {
long long sub_7520F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D3C0 - dbl_B1D400); /*0x752102*/
  result = Math::RoundToInt(v0 * dbl_B1D3E8 * 0.5); /*0x752116*/
  dword_B1D498 = result; /*0x75211b*/
  return result; /*0x752120*/
}
} // namespace gamemd

// 0x752130
namespace gamemd {
void sub_752130()
{
  dbl_B1D408 = Math::ArcTan((double)dword_B1D498 * 0.00390625); /*0x752147*/
}
} // namespace gamemd

// 0x752160
namespace gamemd {
void sub_752160()
{
  dbl_B1D420 = Math::ArcTan((double)(2 * dword_B1D498) / dbl_B1D3E8); /*0x752182*/
}
} // namespace gamemd

// 0x752190
namespace gamemd {
long long sub_752190()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D498) + 0.5); /*0x7521ab*/
  dword_B1D488 = result; /*0x7521b0*/
  return result; /*0x7521b6*/
}
} // namespace gamemd

// 0x7521C0
namespace gamemd {
int sub_7521C0()
{
  word_B1D3D4 = 0; /*0x7521c2*/
  word_B1D3D6 = 0; /*0x7521c8*/
  return 0; /*0x7521ce*/
}
} // namespace gamemd

// 0x7521D0
namespace gamemd {
int sub_7521D0()
{
  dword_B1D410 = 0; /*0x7521d2*/
  dword_B1D414 = 0; /*0x7521d7*/
  dword_B1D418 = 0; /*0x7521dc*/
  return 0; /*0x7521e1*/
}
} // namespace gamemd

// 0x7521F0
namespace gamemd {
int sub_7521F0()
{
  dword_B1D448 = 0; /*0x7521f5*/
  dword_B1D440 = 128; /*0x7521ff*/
  dword_B1D444 = 128; /*0x752204*/
  return 128; /*0x752209*/
}
} // namespace gamemd

// 0x752210
namespace gamemd {
int sub_752210()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752210)
}
} // namespace gamemd

// 0x752250
namespace gamemd {
void sub_752250()
{
  dword_B1D4A0 = (int)&VectorClass_VoxClass___vftable; /*0x752258*/
  if ( g_InfantryRenderPool && byte_B1D4AD ) /*0x75226c*/
  {
    RA2_OPDEL(g_InfantryRenderPool); /*0x75226f*/
    g_InfantryRenderPool = 0; /*0x752277*/
  }
  byte_B1D4AD = 0; /*0x75227d*/
  dword_B1D4A8 = 0; /*0x752283*/
}
} // namespace gamemd

// 0x7529A0
namespace gamemd {
void ThemeClass_Stop(char a1)
{
  if ( dword_B1D4C4 ) /*0x7529aa*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7529ac*/
    dword_B1D4C4 = 0; /*0x7529b3*/
  }
  if ( g_InfantryDrawState ) /*0x7529c5*/
    ((Audio *)(g_InfantryDrawState))->Release(); /*0x7529c7*/
  if ( a1 ) /*0x7529cf*/
    ThemeClass::ClearQueues(); /*0x7529d1*/
}
} // namespace gamemd

// 0x752CA0
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
  if ( dword_B1D4D8 ) /*0x752ca8*/
    ((Audio *)(dword_B1D4D8))->Release(); /*0x752caa*/
}
} // namespace gamemd

// 0x7532BE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7532BE)
}
} // namespace gamemd

// 0x7533A0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7533A0)
}
} // namespace gamemd

// 0x753510
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753510)
}
} // namespace gamemd

// 0x7539B0
namespace gamemd {
int sub_7539B0()
{
  dword_B2D810 = 0; /*0x7539b2*/
  dword_B2D814 = 0; /*0x7539b7*/
  dword_B2D818 = 0; /*0x7539bc*/
  dword_B2D81C = 0; /*0x7539c1*/
  return 0; /*0x7539c6*/
}
} // namespace gamemd

// 0x7539D0
namespace gamemd {
int sub_7539D0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7539D0)
}
} // namespace gamemd

// 0x753A30
namespace gamemd {
void sub_753A30()
{
  ((Vector *)((int)&stru_B2D93C))->Clear(); /*0x753a35*/
  dword_B2D928 = (int)&Surface_Vtable; /*0x753a3a*/
}
} // namespace gamemd

// 0x753A50
namespace gamemd {
int sub_753A50()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753A50)
}
} // namespace gamemd

// 0x753AB0
namespace gamemd {
void sub_753AB0()
{
  ((Vector *)((int)&stru_B2D804))->Clear(); /*0x753ab5*/
  dword_B2D7F0 = (int)&Surface_Vtable; /*0x753aba*/
}
} // namespace gamemd

// 0x753AF0
namespace gamemd {
int sub_753AF0()
{
  dword_B2FB60 = 0; /*0x753af2*/
  dword_B2FB64 = 0; /*0x753af7*/
  dword_B2FB68 = 255; /*0x753b01*/
  dword_B2FB6C = 255; /*0x753b06*/
  return 255; /*0x753b0b*/
}
} // namespace gamemd

// 0x753B10
namespace gamemd {
int sub_753B10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753B10)
}
} // namespace gamemd

// 0x753B40
namespace gamemd {
int sub_753B40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753B40)
}
} // namespace gamemd

// 0x753BF0
namespace gamemd {
void sub_753BF0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753BF0)
}
}
// 0x753C60
namespace gamemd {
char * sub_753C60()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753C60)
}
} // namespace gamemd

// 0x753C80
namespace gamemd {
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753C80)
}
} // namespace gamemd

// 0x753F90
namespace gamemd {
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x753F90)
}
} // namespace gamemd

// 0x754740
namespace gamemd {
int sub_754740(int a1, int a2, unsigned int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754740)
}
} // namespace gamemd

// 0x754900
namespace gamemd {
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754900)
}
} // namespace gamemd

// 0x754910
namespace gamemd {
void sub_754910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75491c*/
  dbl_B43EF8 = Math::Sqrt(v0 + v0); /*0x75492e*/
}
} // namespace gamemd

// 0x754940
namespace gamemd {
void sub_754940()
{
  dbl_B45180 = dbl_B43EF8 / 60.0; /*0x75494c*/
}
} // namespace gamemd

// 0x754960
namespace gamemd {
void sub_754960()
{
  dbl_B450A0 = 1.0 / dbl_B45180; /*0x75496c*/
}
} // namespace gamemd

// 0x754980
namespace gamemd {
void sub_754980()
{
  dbl_B44498 = 0.0174532925199433 * 45.0; /*0x75498c*/
}
} // namespace gamemd

// 0x7549A0
namespace gamemd {
void sub_7549A0()
{
  dbl_B43F00 = 0.0174532925199433 * 60.0; /*0x7549ac*/
}
} // namespace gamemd

// 0x7549C0
namespace gamemd {
void sub_7549C0()
{
  dbl_B43ED8 = 0.0174532925199433 * 90.0; /*0x7549cc*/
}
} // namespace gamemd

// 0x7549E0
namespace gamemd {
long long sub_7549E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B43ED8 - dbl_B43F00); /*0x7549f2*/
  result = Math::RoundToInt(v0 * dbl_B43EF8 * 0.5); /*0x754a06*/
  dword_B45578 = result; /*0x754a0b*/
  return result; /*0x754a10*/
}
} // namespace gamemd

// 0x754A20
namespace gamemd {
void sub_754A20()
{
  dbl_B43F08 = Math::ArcTan((double)dword_B45578 * 0.00390625); /*0x754a37*/
}
} // namespace gamemd

// 0x754A50
namespace gamemd {
void sub_754A50()
{
  dbl_B44310 = Math::ArcTan((double)(2 * dword_B45578) / dbl_B43EF8); /*0x754a72*/
}
} // namespace gamemd

// 0x754A80
namespace gamemd {
long long sub_754A80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45578) + 0.5); /*0x754a9b*/
  dword_B45178 = result; /*0x754aa0*/
  return result; /*0x754aa6*/
}
} // namespace gamemd

// 0x754AB0
namespace gamemd {
int sub_754AB0()
{
  word_B43EF0 = 0; /*0x754ab2*/
  word_B43EF2 = 0; /*0x754ab8*/
  return 0; /*0x754abe*/
}
} // namespace gamemd

// 0x754AC0
namespace gamemd {
int sub_754AC0()
{
  dword_B44300 = 0; /*0x754ac2*/
  dword_B44304 = 0; /*0x754ac7*/
  dword_B44308 = 0; /*0x754acc*/
  return 0; /*0x754ad1*/
}
} // namespace gamemd

// 0x754AE0
namespace gamemd {
int sub_754AE0()
{
  dword_B450B0 = 0; /*0x754ae5*/
  dword_B450A8 = 128; /*0x754aef*/
  dword_B450AC = 128; /*0x754af4*/
  return 128; /*0x754af9*/
}
} // namespace gamemd

// 0x754B00
namespace gamemd {
int sub_754B00()
{
  dword_B43EE0 = 0; /*0x754b02*/
  dword_B43EE4 = 0; /*0x754b07*/
  dword_B43EE8 = 0; /*0x754b0c*/
  dword_B43EEC = 0; /*0x754b11*/
  return 0; /*0x754b16*/
}
} // namespace gamemd

// 0x754B40
namespace gamemd {
unsigned int * sub_754B40()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754B40)
}
} // namespace gamemd

// 0x754B70
namespace gamemd {
unsigned int * sub_754B70()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754B70)
}
} // namespace gamemd

// 0x7559B0
namespace gamemd {
char * AudioData_Copy(char * a1, int a2)
{
  qmemcpy(a1, (char *)&stru_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}
} // namespace gamemd

// 0x7559D0
namespace gamemd {
float * sub_7559D0(float * a1, float * a2, void * a3, double a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7559D0)
}
} // namespace gamemd

// 0x755A40
namespace gamemd {
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755A40)
}
} // namespace gamemd

// 0x755AC0
namespace gamemd {
int sub_755AC0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755AC0)
}
} // namespace gamemd

// 0x755AD0
namespace gamemd {
char sub_755AD0(unsigned int * a1, int * a2)
{
  double v2; // st7
  unsigned int v4; // [esp+14h] [ebp-4h]

  v4 = *a1; /*0x755ad8*/
  v2 = Math::CalcAngle((double)(int)a1[1] - (double)a2[1], (double)*a2 - (double)(int)*a1); /*0x755afa*/
  IDA_LOWORD(v4) = Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427); /*0x755b10*/
  return 32 - (((v4 >> 7) + 1) >> 1); /*0x755b26*/
}
} // namespace gamemd

// 0x755BF0
namespace gamemd {
float * sub_755BF0(float * a1, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755BF0)
}
} // namespace gamemd

// 0x755C50
namespace gamemd {
int j_TechnoClass_ClearArrays()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755C50)
}
} // namespace gamemd

// 0x755C90
namespace gamemd {
int sub_755C90()
{
  dword_B45580 = 0; /*0x755c92*/
  dword_B45584 = 0; /*0x755c97*/
  dword_B45588 = 0; /*0x755c9c*/
  dword_B4558C = 0; /*0x755ca1*/
  return 0; /*0x755ca6*/
}
} // namespace gamemd

// 0x755CB0
namespace gamemd {
unsigned int * E4Recv_755CB0::sub_755CB0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755CB0)
}
} // namespace gamemd

// 0x7564A0
namespace gamemd {
int E4Recv_7564A0::sub_7564A0(int a2)
{

  return ((unsigned int *)this)[0] + 12 * a2; /*0x7564ad*/

}
} // namespace gamemd

// 0x7564E0
namespace gamemd {
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
{

  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  uniqueId = ((unsigned int *)this)[0]; /*0x7564e7*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x7564ea*/
  v6 = 41 * (a4 + *(unsigned int *)(uniqueId + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(abstractFlags + 4 * v6 + 112) + *(float *)(abstractFlags + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(abstractFlags + 164 * (a4 + *(unsigned int *)(uniqueId + 12 * a3))); /*0x75650b*/
  v14 = v8[29] + v8[23]; /*0x756511*/
  v9 = v8[30] + v8[24]; /*0x756518*/
  v15 = v9; /*0x756521*/
  v11 = v7 * 0.5; /*0x75652b*/
  *a2 = v11; /*0x75653d*/
  v12 = v14 * 0.5; /*0x75653f*/
  a2[1] = v12; /*0x756551*/
  v13 = v15 * 0.5; /*0x756554*/
  a2[2] = v13; /*0x75655c*/
  return a2; /*0x75655f*/

}
} // namespace gamemd

// 0x756570
namespace gamemd {
int E4Recv_756570::sub_756570()
{

  return (int)((unsigned int *)this)[0] + 164 * (int)((unsigned int *)this)[0] + 12 * (int)((unsigned int *)this)[0] + 28; /*0x75658c*/

}
} // namespace gamemd

// 0x7589F0
namespace gamemd {
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7589F0)
}
} // namespace gamemd

// 0x758E10
namespace gamemd {
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{

  uint8_t *uniqueId; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  uniqueId = (uint8_t *)((unsigned int *)this)[0]; /*0x758e13*/
  v5 = 0; /*0x758e17*/
  v11 = 100000.0; /*0x758e19*/
  for ( i = 0; i < 256; ++i ) /*0x758e21*/
  {
    v7 = a3 - (double)uniqueId[1]; /*0x758e49*/
    v8 = a4 - (double)uniqueId[2]; /*0x758e51*/
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*uniqueId) * (a2 - (double)*uniqueId); /*0x758e63*/
    if ( v9 < v11 ) /*0x758e74*/
    {
      v11 = v9; /*0x758e76*/
      v5 = i; /*0x758e7a*/
    }
    uniqueId += 3; /*0x758e81*/
  }
  return v5; /*0x758e8e*/

}
} // namespace gamemd

// 0x758F70
namespace gamemd {
int sub_758F70()
{
  dword_B45B18 = 0; /*0x758f72*/
  dword_B45B1C = 0; /*0x758f77*/
  dword_B45B20 = 0; /*0x758f7c*/
  dword_B45B24 = 0; /*0x758f81*/
  return 0; /*0x758f86*/
}
} // namespace gamemd

// 0x758F90
namespace gamemd {
void sub_758F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x758f9c*/
  dbl_B45B30 = Math::Sqrt(v0 + v0); /*0x758fae*/
}
} // namespace gamemd

// 0x758FC0
namespace gamemd {
void sub_758FC0()
{
  dbl_B45B98 = dbl_B45B30 / 60.0; /*0x758fcc*/
}
} // namespace gamemd

// 0x758FE0
namespace gamemd {
void sub_758FE0()
{
  dbl_B45B80 = 1.0 / dbl_B45B98; /*0x758fec*/
}
} // namespace gamemd

// 0x759000
namespace gamemd {
void sub_759000()
{
  dbl_B45B78 = 0.0174532925199433 * 45.0; /*0x75900c*/
}
} // namespace gamemd

// 0x759020
namespace gamemd {
void sub_759020()
{
  dbl_B45B38 = 0.0174532925199433 * 60.0; /*0x75902c*/
}
} // namespace gamemd

// 0x759040
namespace gamemd {
void sub_759040()
{
  dbl_B45B10 = 0.0174532925199433 * 90.0; /*0x75904c*/
}
} // namespace gamemd

// 0x759060
namespace gamemd {
long long sub_759060()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45B10 - dbl_B45B38); /*0x759072*/
  result = Math::RoundToInt(v0 * dbl_B45B30 * 0.5); /*0x759086*/
  dword_B45BA0 = result; /*0x75908b*/
  return result; /*0x759090*/
}
} // namespace gamemd

// 0x7590A0
namespace gamemd {
void sub_7590A0()
{
  dbl_B45B40 = Math::ArcTan((double)dword_B45BA0 * 0.00390625); /*0x7590b7*/
}
} // namespace gamemd

// 0x7590D0
namespace gamemd {
void sub_7590D0()
{
  dbl_B45B70 = Math::ArcTan((double)(2 * dword_B45BA0) / dbl_B45B30); /*0x7590f2*/
}
} // namespace gamemd

// 0x759100
namespace gamemd {
long long sub_759100()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45BA0) + 0.5); /*0x75911b*/
  dword_B45B94 = result; /*0x759120*/
  return result; /*0x759126*/
}
} // namespace gamemd

// 0x759130
namespace gamemd {
int sub_759130()
{
  word_B45B28 = 0; /*0x759132*/
  word_B45B2A = 0; /*0x759138*/
  return 0; /*0x75913e*/
}
} // namespace gamemd

// 0x759140
namespace gamemd {
int sub_759140()
{
  dword_B45B48 = 0; /*0x759142*/
  dword_B45B4C = 0; /*0x759147*/
  dword_B45B50 = 0; /*0x75914c*/
  return 0; /*0x759151*/
}
} // namespace gamemd

// 0x759160
namespace gamemd {
int sub_759160()
{
  dword_B45B90 = 0; /*0x759165*/
  dword_B45B88 = 128; /*0x75916f*/
  dword_B45B8C = 128; /*0x759174*/
  return 128; /*0x759179*/
}
} // namespace gamemd

// 0x759200
namespace gamemd {
char sub_759200()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759200)
}
} // namespace gamemd

// 0x759760
namespace gamemd {
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759760)
}
} // namespace gamemd

// 0x759BC0
namespace gamemd {
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759BC0)
}
} // namespace gamemd

// 0x75A100
namespace gamemd {
bool sub_75A100(int a1, int a2, unsigned int * a3, int a4)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A100)
}
} // namespace gamemd

// 0x75A2B0
namespace gamemd {
bool sub_75A2B0(int a1, int a2, int * a3, int a4)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A2B0)
}
} // namespace gamemd

// 0x75A400
namespace gamemd {
int ReturnNull2()
{
  return 0; /*0x75a402*/
}
} // namespace gamemd

// 0x75A410
namespace gamemd {
void nullsub_257()
{
  ; /*0x75a410*/
}
} // namespace gamemd

// 0x75A420
namespace gamemd {
void nullsub_258()
{
  ; /*0x75a420*/
}
} // namespace gamemd

// 0x75A810
namespace gamemd {
bool BitArray_Test(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75A810)
}
} // namespace gamemd

// 0x75A880
namespace gamemd {
int sub_75A880()
{
  dword_B45BB8 = 0; /*0x75a882*/
  dword_B45BBC = 0; /*0x75a887*/
  dword_B45BC0 = 0; /*0x75a88c*/
  dword_B45BC4 = 0; /*0x75a891*/
  return 0; /*0x75a896*/
}
} // namespace gamemd

// 0x75A8A0
namespace gamemd {
void sub_75A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75a8ac*/
  dbl_B45BD0 = Math::Sqrt(v0 + v0); /*0x75a8be*/
}
} // namespace gamemd

// 0x75A8D0
namespace gamemd {
void sub_75A8D0()
{
  dbl_B45C20 = dbl_B45BD0 / 60.0; /*0x75a8dc*/
}
} // namespace gamemd

// 0x75A8F0
namespace gamemd {
void sub_75A8F0()
{
  dbl_B45C08 = 1.0 / dbl_B45C20; /*0x75a8fc*/
}
} // namespace gamemd

// 0x75A910
namespace gamemd {
void sub_75A910()
{
  dbl_B45C00 = 0.0174532925199433 * 45.0; /*0x75a91c*/
}
} // namespace gamemd

// 0x75A930
namespace gamemd {
void sub_75A930()
{
  dbl_B45BD8 = 0.0174532925199433 * 60.0; /*0x75a93c*/
}
} // namespace gamemd

// 0x75A950
namespace gamemd {
void sub_75A950()
{
  dbl_B45BB0 = 0.0174532925199433 * 90.0; /*0x75a95c*/
}
} // namespace gamemd

// 0x75A970
namespace gamemd {
long long sub_75A970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45BB0 - dbl_B45BD8); /*0x75a982*/
  result = Math::RoundToInt(v0 * dbl_B45BD0 * 0.5); /*0x75a996*/
  dword_B45C28 = result; /*0x75a99b*/
  return result; /*0x75a9a0*/
}
} // namespace gamemd

// 0x75A9B0
namespace gamemd {
void sub_75A9B0()
{
  dbl_B45BE0 = Math::ArcTan((double)dword_B45C28 * 0.00390625); /*0x75a9c7*/
}
} // namespace gamemd

// 0x75A9E0
namespace gamemd {
void sub_75A9E0()
{
  dbl_B45BF8 = Math::ArcTan((double)(2 * dword_B45C28) / dbl_B45BD0); /*0x75aa02*/
}
} // namespace gamemd

// 0x75AA10
namespace gamemd {
long long sub_75AA10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C28) + 0.5); /*0x75aa2b*/
  dword_B45C1C = result; /*0x75aa30*/
  return result; /*0x75aa36*/
}
} // namespace gamemd

// 0x75AA40
namespace gamemd {
int sub_75AA40()
{
  word_B45BC8 = 0; /*0x75aa42*/
  word_B45BCA = 0; /*0x75aa48*/
  return 0; /*0x75aa4e*/
}
} // namespace gamemd

// 0x75AA50
namespace gamemd {
int sub_75AA50()
{
  g_AsyncMovieState = 0; /*0x75aa52*/
  g_MovieFrameState1 = 0; /*0x75aa57*/
  g_MovieFrameState2 = 0; /*0x75aa5c*/
  return 0; /*0x75aa61*/
}
} // namespace gamemd

// 0x75AA70
namespace gamemd {
int sub_75AA70()
{
  dword_B45C18 = 0; /*0x75aa75*/
  dword_B45C10 = 128; /*0x75aa7f*/
  dword_B45C14 = 128; /*0x75aa84*/
  return 128; /*0x75aa89*/
}
} // namespace gamemd

// 0x75CC90
namespace gamemd {
void sub_75CC90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75cc9c*/
  dbl_B45C40 = Math::Sqrt(v0 + v0); /*0x75ccae*/
}
} // namespace gamemd

// 0x75CCC0
namespace gamemd {
void sub_75CCC0()
{
  dbl_B45C90 = dbl_B45C40 / 60.0; /*0x75cccc*/
}
} // namespace gamemd

// 0x75CCE0
namespace gamemd {
void sub_75CCE0()
{
  dbl_B45C78 = 1.0 / dbl_B45C90; /*0x75ccec*/
}
} // namespace gamemd

// 0x75CD00
namespace gamemd {
void sub_75CD00()
{
  dbl_B45C70 = 0.0174532925199433 * 45.0; /*0x75cd0c*/
}
} // namespace gamemd

// 0x75CD20
namespace gamemd {
void sub_75CD20()
{
  dbl_B45C48 = 0.0174532925199433 * 60.0; /*0x75cd2c*/
}
} // namespace gamemd

// 0x75CD40
namespace gamemd {
void sub_75CD40()
{
  dbl_B45C30 = 0.0174532925199433 * 90.0; /*0x75cd4c*/
}
} // namespace gamemd

// 0x75CD60
namespace gamemd {
long long sub_75CD60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45C30 - dbl_B45C48); /*0x75cd72*/
  result = Math::RoundToInt(v0 * dbl_B45C40 * 0.5); /*0x75cd86*/
  dword_B45C98 = result; /*0x75cd8b*/
  return result; /*0x75cd90*/
}
} // namespace gamemd

// 0x75CDA0
namespace gamemd {
void sub_75CDA0()
{
  dbl_B45C50 = Math::ArcTan((double)dword_B45C98 * 0.00390625); /*0x75cdb7*/
}
} // namespace gamemd

// 0x75CDD0
namespace gamemd {
void sub_75CDD0()
{
  dbl_B45C68 = Math::ArcTan((double)(2 * dword_B45C98) / dbl_B45C40); /*0x75cdf2*/
}
} // namespace gamemd

// 0x75CE00
namespace gamemd {
long long sub_75CE00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C98) + 0.5); /*0x75ce1b*/
  dword_B45C8C = result; /*0x75ce20*/
  return result; /*0x75ce26*/
}
} // namespace gamemd

// 0x75CE30
namespace gamemd {
int sub_75CE30()
{
  word_B45C38 = 0; /*0x75ce32*/
  word_B45C3A = 0; /*0x75ce38*/
  return 0; /*0x75ce3e*/
}
} // namespace gamemd

// 0x75CE40
namespace gamemd {
int sub_75CE40()
{
  dword_B45C58 = 0; /*0x75ce42*/
  dword_B45C5C = 0; /*0x75ce47*/
  dword_B45C60 = 0; /*0x75ce4c*/
  return 0; /*0x75ce51*/
}
} // namespace gamemd

// 0x75CE60
namespace gamemd {
int sub_75CE60()
{
  dword_B45C88 = 0; /*0x75ce65*/
  dword_B45C80 = 128; /*0x75ce6f*/
  dword_B45C84 = 128; /*0x75ce74*/
  return 128; /*0x75ce79*/
}
} // namespace gamemd

// 0x75E080
namespace gamemd {
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x75e086*/
    return -2147467261; /*0x75e088*/
  *a2 = -1463464540; /*0x75e096*/
  a2[1] = 298979195; /*0x75e09e*/
  a2[2] = 1610642049; /*0x75e0a7*/
  a2[3] = unk_7E984C; /*0x75e0b0*/
  return 0; /*0x75e08d*/
}
} // namespace gamemd

// 0x75E740
namespace gamemd {
void sub_75E740()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75e74c*/
  dbl_B45D80 = Math::Sqrt(v0 + v0); /*0x75e75e*/
}
} // namespace gamemd

// 0x75E770
namespace gamemd {
void sub_75E770()
{
  dbl_B725C0 = dbl_B45D80 / 60.0; /*0x75e77c*/
}
} // namespace gamemd

// 0x75E790
namespace gamemd {
void sub_75E790()
{
  dbl_B46688 = 1.0 / dbl_B725C0; /*0x75e79c*/
}
} // namespace gamemd

// 0x75E7B0
namespace gamemd {
void sub_75E7B0()
{
  dbl_B46680 = 0.0174532925199433 * 45.0; /*0x75e7bc*/
}
} // namespace gamemd

// 0x75E7D0
namespace gamemd {
void sub_75E7D0()
{
  dbl_B45D90 = 0.0174532925199433 * 60.0; /*0x75e7dc*/
}
} // namespace gamemd

// 0x75E7F0
namespace gamemd {
void sub_75E7F0()
{
  dbl_B45D60 = 0.0174532925199433 * 90.0; /*0x75e7fc*/
}
} // namespace gamemd

// 0x75E810
namespace gamemd {
long long sub_75E810()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45D60 - dbl_B45D90); /*0x75e822*/
  result = Math::RoundToInt(v0 * dbl_B45D80 * 0.5); /*0x75e836*/
  dword_B725C8 = result; /*0x75e83b*/
  return result; /*0x75e840*/
}
} // namespace gamemd

// 0x75E850
namespace gamemd {
void sub_75E850()
{
  dbl_B45D98 = Math::ArcTan((double)dword_B725C8 * 0.00390625); /*0x75e867*/
}
} // namespace gamemd

// 0x75E880
namespace gamemd {
void sub_75E880()
{
  dbl_B46640 = Math::ArcTan((double)(2 * dword_B725C8) / dbl_B45D80); /*0x75e8a2*/
}
} // namespace gamemd

// 0x75E8B0
namespace gamemd {
long long sub_75E8B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B725C8) + 0.5); /*0x75e8cb*/
  dword_B725BC = result; /*0x75e8d0*/
  return result; /*0x75e8d6*/
}
} // namespace gamemd

// 0x75E8E0
namespace gamemd {
int sub_75E8E0()
{
  word_B45D78 = 0; /*0x75e8e2*/
  word_B45D7A = 0; /*0x75e8e8*/
  return 0; /*0x75e8ee*/
}
} // namespace gamemd

// 0x75E8F0
namespace gamemd {
int sub_75E8F0()
{
  dword_B46248 = 0; /*0x75e8f2*/
  dword_B4624C = 0; /*0x75e8f7*/
  dword_B46250 = 0; /*0x75e8fc*/
  return 0; /*0x75e901*/
}
} // namespace gamemd

// 0x75E910
namespace gamemd {
int sub_75E910()
{
  dword_B46698 = 0; /*0x75e915*/
  dword_B46690 = 128; /*0x75e91f*/
  dword_B46694 = 128; /*0x75e924*/
  return 128; /*0x75e929*/
}
} // namespace gamemd

// 0x75E930
namespace gamemd {
int sub_75E930()
{
  dword_B45D68 = 0; /*0x75e932*/
  dword_B45D6C = 0; /*0x75e937*/
  dword_B45D70 = 0; /*0x75e93c*/
  dword_B45D74 = 0; /*0x75e941*/
  return 0; /*0x75e946*/
}
} // namespace gamemd

// 0x75EF30
namespace gamemd {
int sub_75EF30(unsigned short * a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> g_BitMask_Red << g_BitShift_Blue; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(uint8_t)((uint8_t)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
      | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x75f016*/
}
} // namespace gamemd
