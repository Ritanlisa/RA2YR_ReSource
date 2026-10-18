// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Animation_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x41E350
namespace gamemd {  // G42.18 ns repair
unsigned int * AnimTypeClass::Construct2(char *Source, void *a2)
{


  AbstractTypeClass::Constructor((int *)this, Source); /*0x41e359*/
  *(unsigned int *)this->ptr_98 = -1; /*0x41e363*/
  *&this->ImageAllocated = -1; /*0x41e369*/
  this->BarrelVoxel = 0; /*0x41e374*/
  this->u32_C0 = 0; /*0x41e37a*/
  this->u32_C8 = 0; /*0x41e380*/
  this->ChargerTurrets = 1072693248; /*0x41e386*/
  this->q0C4 = (IUnknown *)(1072693248); /*0x41e38c*/
  this->q0CC = (IUnknown *)(1072693248); /*0x41e392*/
  BYTE2(this->?[5]) = 1; /*0x41e39a*/
  HIBYTE(this->?[5]) = 1; /*0x41e3a0*/
  LOBYTE(this->u32_D4) = 1; /*0x41e3a6*/
  this->Armor = 0; /*0x41e3b9*/
  this->Strength = 0; /*0x41e3bf*/
  LOBYTE(this->Image) = 0; /*0x41e3c5*/
  this->AlphaImage = 0; /*0x41e3cb*/
  this->MainVoxel = 0; /*0x41e3d1*/
  (this->q0D0) = ((this->q0D0) & ~0xFF) | ((0) & 0xFF); /*0x41e3d7*/
  BYTE1(this->?[5]) = 0; /*0x41e3dd*/
  this->q0D8 = 0; /*0x41e3e3*/
  this->u32_DC = 0; /*0x41e3e9*/
  this->FootClass_E0 = 0; /*0x41e3ef*/
  this->ChargerBarrels = 0; /*0x41e3f5*/
  this->q108 = 0; /*0x41e3fb*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_AITriggerTypeClass) */  /*0x41e401*/
  /* X11: vtable install elided (implicit via AITriggerTypeClass virtuals 0x41e407) */
  /* X11: vtable install elided (implicit via AITriggerTypeClass virtuals 0x41e40e) */
  /* X11: vtable install elided (implicit via AITriggerTypeClass virtuals 0x41e415) */
  memset(&this->vtable4, 0, 0x20u); /*0x41e41c*/
  if ( dword_A8B210 < dword_A8B208 /*0x41e452*/
    || (byte_A8B20D || !dword_A8B208)
    && dword_A8B214 > 0
    && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A8B200 + 8))(
         &dword_A8B200,
         dword_A8B208 + dword_A8B214,
         0) )
  {
    int v3; // eax
    v3 = dword_A8B210++; /*0x41e45f*/
    *((unsigned int *)dword_A8B204 + v3) = (unsigned int)(this); /*0x41e46e*/
  }
  return &this->ObjectTypeClass; /*0x41e473*/

}
}  // G42.18 ns repair
// 0x427530
namespace gamemd {
AnimTypeClass * AnimTypeClass::Construct(char *aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  AnimTypeClass **v6; // ecx

  ((int *)this)->ConstructFull(aP1); /*0x42753a*/
  this->MiddleFrameIndex = -1; /*0x427544*/
  this->MiddleFrameWidth = 0; /*0x42754a*/
  this->MiddleFrameHeight = 0; /*0x427550*/
  *(unsigned int *)this->__pad_2A0 = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  this->Damage[0] = 0; /*0x427562*/
  this->Damage[1] = 0; /*0x427568*/
  this->Rate = 1; /*0x42756e*/
  this->Start = 0; /*0x427578*/
  this->LoopStart = 0; /*0x42757e*/
  this->LoopEnd = 0; /*0x427584*/
  this->End = 0; /*0x42758a*/
  this->LoopCount = 0; /*0x427590*/
  this->Next = 0; /*0x427596*/
  this->SpawnsParticle = -1; /*0x42759c*/
  this->NumParticles = 0; /*0x4275a2*/
  this->DetailLevel = 0; /*0x4275a8*/
  this->TranslucencyDetailLevel = 0; /*0x4275ae*/
  this->RandomLoopDelay[0] = 0; /*0x4275b4*/
  this->RandomLoopDelay[1] = 0; /*0x4275ba*/
  this->RandomRate[0] = 0; /*0x4275c0*/
  this->RandomRate[1] = 0; /*0x4275c6*/
  this->Translucency = 0; /*0x4275cc*/
  this->Spawns = 0; /*0x4275d2*/
  this->SpawnCount = 0; /*0x4275d8*/
  this->Report = -1; /*0x4275de*/
  this->StopSound = -1; /*0x4275e4*/
  this->BounceAnim = 0; /*0x4275ea*/
  this->ExpireAnim = 0; /*0x4275f0*/
  this->TrailerAnim = 0; /*0x4275f6*/
  this->TrailerSeperation = 0; /*0x4275fc*/
  this->Elasticity[0] = -1610612736; /*0x427602*/
  this->Elasticity[1] = 1072273817; /*0x42760c*/
  this->MinZVel[0] = 0; /*0x42761b*/
  this->MinZVel[1] = 1074528256; /*0x427621*/
  this->AnimTypeClass_field_double_320[0] = 0; /*0x427627*/
  this->AnimTypeClass_field_double_320[1] = 1074528256; /*0x42762d*/
  this->MaxXYVel[0] = 0; /*0x427633*/
  this->MaxXYVel[1] = 1076756480; /*0x427639*/
  this->Warhead = 0; /*0x427643*/
  this->DamageRadius = 0; /*0x427649*/
  this->TiberiumSpawnType = 0; /*0x42764f*/
  this->TiberiumSpreadRadius = 0; /*0x427655*/
  this->YSortAdjust = 0; /*0x42765b*/
  this->YDrawOffset = 0; /*0x427661*/
  this->ZAdjust = 0; /*0x427667*/
  this->MakeInfantry = -1; /*0x42766d*/
  this->RunningFrames = 0; /*0x427673*/
  this->IsFlamingGuy = 0; /*0x427679*/
  this->IsVeins = 0; /*0x42767f*/
  this->IsMeteor = 0; /*0x427685*/
  this->TiberiumChainReaction = 0; /*0x42768b*/
  this->IsTiberium = 0; /*0x427691*/
  this->HideIfNoOre = 0; /*0x427697*/
  this->Bouncer = 0; /*0x42769d*/
  this->Tiled = 0; /*0x4276a3*/
  this->ShouldUseCellDrawer = 1; /*0x4276a9*/
  this->UseNormalLight = 0; /*0x4276b0*/
  this->DemandLoad = 0; /*0x4276b6*/
  this->FreeLoad = 0; /*0x4276bc*/
  this->IsAnimatedTiberium = 0; /*0x4276c2*/
  this->AltPalette = 0; /*0x4276c8*/
  this->Normalized = 0; /*0x4276ce*/
  this->Layer[0] = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat_flag = 0; /*0x4276e4*/
  this->Translucent = 0; /*0x4276ea*/
  this->Scorch = 0; /*0x4276f0*/
  this->Flamer = 0; /*0x4276f6*/
  this->Crater = 0; /*0x4276fc*/
  this->ForceBigCraters = 0; /*0x427702*/
  this->Sticky = 0; /*0x42770b*/
  this->PingPong = 0; /*0x427712*/
  this->Reverse = 0; /*0x427718*/
  this->Shadow = 0; /*0x42771e*/
  this->PsiWarning = 0; /*0x427724*/
  this->ShouldFogRemove = 1; /*0x42772a*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_AnimTypeClass) */  /*0x427731*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_AnimTypeClass) */  /*0x427737*/
  /* X11: vtable install elided (implicit via AnimTypeClass virtuals 0x42773d) */
  /* X11: vtable install elided (implicit via AnimTypeClass virtuals 0x427744) */
  AbstractClass::GenerateUniqueID(&this->vtable4); /*0x42774b*/
  this->IsLogic_d = 1; /*0x427750*/
  this->RadarInvisible_d = 1; /*0x427757*/
  this->Selectable_d = 0; /*0x42775e*/
  this->LegalTarget_d = 0; /*0x427764*/
  this->Insignificant_d = 1; /*0x42776a*/
  this->Immune_d = 1; /*0x427771*/
  this->AllowCellContent_d = 0; /*0x427778*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[4] /*0x4277b0*/
    || (BYTE1(FootClass_Array.?[5]) || !DataGlobal_8B3DC4)
    && DataGlobal_8B3DC0[932] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(FootClass_Array.?[2] + 8))(
         &DataGlobal_8B3DC0[912],
         DataGlobal_8B3DC4 + FootClass_Array.?[1],
         0) )
  {
    v3 = FootClass_Array.?[0]++; /*0x4277bd*/
    *(unsigned int *)(FootClass_Array.?[3] + 4 * v3) = this; /*0x4277cc*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x427803*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x427810*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( FootClass_Array <= 0 ) /*0x42782c*/
  {
    LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = (AnimTypeClass **)dword_8B4154; /*0x42782e*/
    while ( *v6 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      ++v6; /*0x427839*/
      if ( v5 >= FootClass_Array ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return &this->ObjectTypeClass; /*0x42784a*/

}
}
// 0x427B50
namespace gamemd {
void* AnimTypeClass::GetWarhead(int a2)
{


  SHPStruct *v3; // eax
  LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(unsigned char)v3 ) /*0x427b61*/
  {
    if ( this->Theater_d ) /*0x427b67*/
    {
      LOBYTE(v3) = ((char *)this)->Load2DArt(); /*0x427b71*/
    }
    else
    {
      if ( this->vtable4 && this->vtable4 ) /*0x427b85*/
      {
        __3_YAXPAX_Z(this->vtable4); /*0x427b90*/
        this->ImageAllocated = 0; /*0x427b98*/
      }
      char v4 = this->ImageFile; // cl /*0x427b9f*/
      const char *ImageFile; // eax
      ImageFile = (const char *)(this->ImageFile); /*0x427ba5*/
      this->Image = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        ImageFile = (const char *)this->LoopStart; /*0x427bb9*/
      char Buffer[512]; // [esp+4h] [ebp-200h] BYREF
      _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427be9*/
      this->Image = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ((ObjectTypeClass *)Buffer)->SetRTTI71(); /*0x427bfc*/
        v3 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427c07*/
        this->Image = v3; /*0x427c0c*/
      }
    }
  }
  SHPStruct *Image; // ecx
  Image = (gamemd::SHPStruct *)(this->Image); /*0x427c12*/
  if ( Image ) /*0x427c1a*/
  {
    int End; // eax
    End = this->End; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !End ) /*0x427c2b*/
    {
      int unused_high; // eax
      unused_high = SHIWORD(Image[1].unused); /*0x427c2d*/
      char Shadow; // dl
      Shadow = this->Shadow; /*0x427c31*/
      this->End = unused_high; /*0x427c37*/
      if ( Shadow ) /*0x427c3f*/
        this->End = unused_high / 2; /*0x427c46*/
    }
    if ( !this->LoopEnd ) /*0x427c4c*/
      this->LoopEnd = this->End; /*0x427c5c*/
    this->MiddleFrameWidth = SHIWORD(Image[1].unused) / 2; /*0x427c6b*/
    this->MiddleFrameHeight = -1; /*0x427c74*/
    *(unsigned int *)this->__pad_2A0 = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return (void *)((char)v3); /*0x427c80*/

}
}
// 0x427D00
namespace gamemd {
int AnimTypeClass::LoadFromINI(uint8_t *** a2, void *a2_2)
{

  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  int v6; // eax
  int Int_Overwrite; // eax
  int v8; // eax
  unsigned int *v10; // ebp
  unsigned int *v11; // eax
  int v12; // edx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v21; // eax
  int v23; // eax
  unsigned int *v24; // ebp
  unsigned int *v25; // eax
  char v26; // al
  char v27; // cl
  char v28; // al
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  char v32; // cl
  char v33; // al
  char v34; // al
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ebp
  int Index; // eax
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  unsigned int *v43; // ebp
  int v44; // ebp
  AnimTypeClass *v45; // eax
  unsigned int *v46; // eax
  unsigned int *v47; // ebp
  int v48; // ebp
  AnimTypeClass *v49; // eax
  unsigned int *v50; // eax
  // w15f4: v3-export truncated tail (RHS lost): ... ...
  // live body via get_context/0x427D00 — w15f4 regrafted decls only
  unsigned int *v51; // ebp
  int v52; // ebp
  AnimTypeClass *v53; // eax
  unsigned int *v54; // eax
  int v55; // eax
  int v56; // ebp
  int v57; // eax
  char v58; // al
  char v59; // cl
  char v60; // al
  int *v61; // eax
  int v62; // ecx
  int v63; // edi
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v68; // [esp-Ch] [ebp-C4h]
  int v69; // [esp-Ch] [ebp-C4h]
  char v70; // [esp-Ch] [ebp-C4h]
  int v71; // [esp-Ch] [ebp-C4h]
  int v72; // [esp-Ch] [ebp-C4h]
  char v73; // [esp-Ch] [ebp-C4h]
  char v74; // [esp-Ch] [ebp-C4h]
  int v75; // [esp+8h] [ebp-B0h] BYREF
  int v76; // [esp+Ch] [ebp-ACh]
  int v77[2]; // [esp+10h] [ebp-A8h] BYREF
  char Source[128]; // [esp+18h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+98h] [ebp-20h] BYREF
}
}
// 0x428800
namespace gamemd {
ScenarioClass * * AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  int result; // eax
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)a1, (int)v3); /*0x42882c*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_AnimTypeClass) */  /*0x428831*/
      /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x428837*/
      /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x42883e*/
      /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x428845*/
    }
    ((char *)a1)->LoadAnim(); /*0x42884e*/
    ((char *)a1)->Load2DArt(); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Next); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->ExpireAnim); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->TrailerAnim); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->BounceAnim); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Spawns); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Warhead); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->TiberiumSpawnType); /*0x4288cc*/
    if ( !a1->DemandLoad ) /*0x4288d1*/
    {
      if ( a1->? ) /*0x4288db*/
      {
        _makepath(&v3[1], 0, 0, (const char *)a1->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x428910*/
        a1->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( a1->? ) /*0x428935*/
        (*((void (**)(AnimTypeClass *, int))a1->ObjectTypeClass + 40))(a1, dword_A8B230[130].uniqueId); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/

}
}
// 0x4289D0
namespace gamemd {
int AnimTypeClass::PowerDrainUpdate(int * a2)
{


  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer[0]); /*0x4289e7*/
  int v3; // ecx
  LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  ((Power *)a2)->FlagProcess(v3); /*0x4289f5*/
  int v4; // edx
  LOBYTE(v4) = (unsigned char)(this->Flat_flag); /*0x4289fa*/
  int v5; // eax
  v5 = ((Power *)a2)->FlagProcess(v4); /*0x428a03*/
  LOBYTE(v5) = this->Translucent; /*0x428a08*/
  ((Power *)a2)->FlagProcess(v5); /*0x428a11*/
  int v6; // ecx
  LOBYTE(v6) = this->Scorch; /*0x428a16*/
  ((Power *)a2)->FlagProcess(v6); /*0x428a1f*/
  int v7; // edx
  LOBYTE(v7) = this->Flamer; /*0x428a24*/
  int v8; // eax
  v8 = ((Power *)a2)->FlagProcess(v7); /*0x428a2d*/
  LOBYTE(v8) = this->Crater; /*0x428a32*/
  ((Power *)a2)->FlagProcess(v8); /*0x428a3b*/
  int v9; // ecx
  LOBYTE(v9) = this->Sticky; /*0x428a40*/
  ((Power *)a2)->FlagProcess(v9); /*0x428a49*/
  int v10; // edx
  LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  int v11; // eax
  v11 = ((Power *)a2)->FlagProcess(v10); /*0x428a57*/
  LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  ((Power *)a2)->FlagProcess(v11); /*0x428a65*/
  int v12; // ecx
  LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  ((Power *)a2)->FlagProcess(v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((Checksummer *)a2, this->Damage[0], this->Damage[1]); /*0x428a96*/
  int v13; // edx
  LOBYTE(v13) = this->TiberiumChainReaction; /*0x428a9b*/
  ((Power *)a2)->FlagProcess(v13); /*0x428aa4*/
  Power::TimerProcess(this->Rate); /*0x428ab2*/
  Power::TimerProcess(this->Start); /*0x428ac0*/
  Power::TimerProcess(this->LoopStart); /*0x428ace*/
  Power::TimerProcess(this->LoopEnd); /*0x428adc*/
  Power::TimerProcess(this->End); /*0x428aea*/
  Power::TimerProcess(this->Report); /*0x428af8*/
  Power::TimerProcess(this->StopSound); /*0x428b06*/
  Power::TimerProcess(this->NumParticles); /*0x428b14*/
  Power::TimerProcess(this->DetailLevel); /*0x428b22*/
  Power::TimerProcess(this->TranslucencyDetailLevel); /*0x428b30*/
  Power::TimerProcess(this->RandomLoopDelay[0]); /*0x428b3e*/
  Power::TimerProcess(this->RandomLoopDelay[1]); /*0x428b4c*/
  Power::TimerProcess(this->Translucency); /*0x428b5a*/
  int v14; // ecx
  LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return ((Power *)a2)->FlagProcess(v14); /*0x428b6d*/

}
}
// 0x428B80
namespace gamemd {
AnimTypeClass * * AnimTypeClass::FindOrCreate(char *Source, int a2, int aP0, int aP1, int aP2, int a1, int a3)
{

  int v2; // esi
  AnimTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( FootClass_Array <= 0 ) /*0x428bb1*/
  {
    LABEL_6:
    v3 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(dword_8B4154 + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= FootClass_Array ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(unsigned int **)(dword_8B4160 + 4 * v2); /*0x428bef*/

}
}
// 0x428C30
namespace gamemd {
int AnimTypeClass::GetDamage()
{

  int result; // eax
  const char *ImageFile; // eax
  SHPStruct *v4; // eax
  SHPStruct *v5; // eax
  SHPStruct *Image; // esi
  CCFileClass v7; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  CCFileClass v10; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = (int)this->Image; /*0x428c39*/
  if ( !result && this->DemandLoad ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    ImageFile = this->ImageFile; /*0x428c69*/
    if ( !this->ImageFile[0] ) /*0x428c63*/
      ImageFile = (const char *)this->LoopStart; /*0x428c76*/
    _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x428c8b*/
    if ( this->Theater ) /*0x428c90*/
    {
      _makepath( /*0x428ccc*/
        Buffer,
        0,
        0,
        (const char *)this->LoopStart,
        (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId);
    }
    else if ( this->NewTheater ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x428cf3*/
    }
    CCFileClass::Construct(&v7, Buffer); /*0x428d04*/
    v4 = (SHPStruct *)CCFileClass::ReadEntireFile(&v7); /*0x428d0d*/
    this->Image = v4; /*0x428d14*/
    if ( v4 ) /*0x428d1a*/
    {
      this->ImageAllocated = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71((ObjectTypeClass *)Buffer); /*0x428d2c*/
      CCFileClass::Construct(&v10, Buffer); /*0x428d3d*/
      v5 = (SHPStruct *)CCFileClass::ReadEntireFile(&v10); /*0x428d46*/
      this->Image = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        this->ImageAllocated = 1; /*0x428d55*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      *(unsigned int *)v10.__tail_0 = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x428d87*/
    }
    (*((void (**)(AnimTypeClass *, int))this->ptr_0 + 40))(this, dword_A8B230[130].uniqueId); /*0x428d9c*/
    Image = this->Image; /*0x428da2*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    *(unsigned int *)v7.__tail_0 = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x428dcd*/
    return (int)Image; /*0x428dd2*/
  }
  return result; /*0x428dd4*/

}
}
// 0x428EA0
namespace gamemd {
AnimTypeClass * AnimTypeClass::ddtor(char a2, int aP0, int aP1, int aP2, int a1, int a3)
{


  /* X11: vtable install elided (X67 recv-slot, RHS vt_AnimTypeClass) */  /*0x428ead*/
  /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x428eb3*/
  /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x428eba*/
  /* X11: vtable install elided (qmark slot, RHS vt_AnimTypeClass) */  /*0x428ec1*/
  AnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = aP0; /*0x428ecf*/
  int v3; // eax
  v3 = (*(int (**)(int *, AnimTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x428ed3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x428ee3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x428ee8*/
    for ( ; /*0x428eee*/
    v3 < g_BuildingLoadQueue_Array.LightBlueTint;
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
    + 4 * v3) )
    {
      ++v3; /*0x428ef6*/
    }
  }
  v6 = aP0; /*0x428f18*/
  int v4; // eax
  v4 = (*(int (**)(int *, AnimTypeClass **))(DataGlobal_8B3DC0[912] + 16))(&DataGlobal_8B3DC0[912], &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < FootClass_Array.?[0] ) /*0x428f2c*/
  {
    --FootClass_Array.?[0]; /*0x428f31*/
    for ( ; /*0x428f37*/
    v4 < FootClass_Array;
    *(unsigned int *)(FootClass_Array.?[3] + 4 * v4 - 4) = *(unsigned int *)(FootClass_Array.?[3] + 4 * v4) )
    {
      ++v4; /*0x428f3f*/
    }
  }
  ObjectTypeClass::Destruct((int)aP0); /*0x428f53*/
  if ( (aP0 & 1) != 0 ) /*0x428f5d*/
    __3_YAXPAX_Z(aP0); /*0x428f60*/
  return &aP0->ObjectTypeClass; /*0x428f6a*/

}
} // namespace gamemd

// 0x48E050
namespace gamemd {
int AnimTypeClass::LookupByName(void *a1)
{

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  int v2 = 0; // edi /*0x48e059*/
  char **v3 = off_81DA78; // esi /*0x48e05b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e06e*/
  {
    ++v3; /*0x48e070*/
    ++v2; /*0x48e073*/
    if ( (int)v3 >= (int)dword_81DA8C ) /*0x48e07a*/
      return -1; /*0x48e07a*/
  }
  return v2; /*0x48e07c*/
}
}
// 0x427A80
namespace gamemd {
char AnimTypeClass::GetLoopCount(int a2)
{


  SHPStruct *v2; // eax
  LOBYTE(v2) = byte_A8ED6B; /*0x427a80*/
  if ( byte_A8ED6B || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !this->DemandLoad || this->DemandLoad ) /*0x427ab0*/
    {
      LOBYTE(v2) = this->NewTheater_d; /*0x427b2b*/
      if ( (unsigned char)v2 ) /*0x427b33*/
        LOBYTE(v2) = (*((char (**)(AnimTypeClass *, int))this->ObjectTypeClass + 40))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( this->vtable4 && this->vtable4 ) /*0x427ac4*/
      {
        __3_YAXPAX_Z(this->vtable4); /*0x427acf*/
        this->ImageAllocated = 0; /*0x427ad7*/
      }
      this->Image = 0; /*0x427af6*/
      char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
      _makepath(Buffer, 0, 0, (const char *)this->vtable4, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427b15*/
      this->Image = v2; /*0x427b1a*/
    }
  }
  return (char)v2; /*0x427b20*/

}
} // namespace gamemd

// 0x427CB0
namespace gamemd {
int AnimTypeClass::FindIndex(void *a1)
{

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  int v2 = 0; // esi /*0x427cbd*/
  if ( FootClass_Array.secondaryFacing[0] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * v2) + 36), (char *)this) ) /*0x427cda*/
  {
    if ( ++v2 >= FootClass_Array.secondaryFacing[0] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/
}
} // namespace gamemd

// 0x428970
namespace gamemd {
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/
}
} // namespace gamemd

// 0x428990
namespace gamemd {
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = unk_7E962C; /*0x4289c0*/
  return 0; /*0x42899d*/
}
} // namespace gamemd

// 0x428C10
namespace gamemd {
int AnimTypeClass::GetAnimData(int a2, int a3)
{

  int result; // eax
  result = (int)this->Next; /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    this->Next = 0; /*0x428c1e*/
  return result; /*0x428c28*/
}
} // namespace gamemd

// 0x428E40
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{
  return -1; /*0x428e43*/
}
} // namespace gamemd

// 0x428E50
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{
  return 5; /*0x428e55*/
}
} // namespace gamemd

// 0x428E60
namespace gamemd {
int AnimTypeClass::GetAuxField()
{
  return this->MiddleFrameIndex; /*0x428e66*/
}
} // namespace gamemd

// 0x428E70
namespace gamemd {
int AnimTypeClass::GetObjectSize()
{
  return 888; /*0x428e75*/
}
} // namespace gamemd

// 0x428E80
namespace gamemd {
char AnimTypeClass::Stub(int a1, int a2)
{
  return 0; /*0x428e82*/
}
} // namespace gamemd

// 0x428E90
namespace gamemd {
int AnimTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x428e92*/
}
} // namespace gamemd

// 0x477050
namespace gamemd {
int AnimTypeClass::ReadINIString(uint8_t *a3, uint8_t *aP1, unsigned int a2, void *a4)
{

  char *v5; // eax
  v5 = globalHelper_08E090(a2); /*0x47706d*/
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  if ( ((INIClass *)this)->GetString(aP1, aP1, v5, Destination, 128) ) /*0x477085*/
    return ((AnimTypeClass *)((AnimTypeClass *)Destination))->LookupByName(); /*0x477092*/
  else
    return a2; /*0x4770a2*/
}
} // namespace gamemd
