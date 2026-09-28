// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x41E350
namespace gamemd {
unsigned int * AnimTypeClass::Construct2(ObjectClass * aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor(aP1); /*0x41e359*/
  *(unsigned int *)this->__pad_98 = -1; /*0x41e363*/
  *(unsigned int *)&this->ImageAllocated = -1; /*0x41e369*/
  this->BarrelVoxel_2[0] = 0; /*0x41e374*/
  this->ChargerTurrets[1] = (unsigned int)(0);
  this->ChargerTurrets[3] = (unsigned int)(0);
  this->ChargerTurrets[0] = 1072693248; /*0x41e386*/
  this->ChargerTurrets[2] = 1072693248; /*0x41e38c*/
  this->ChargerTurrets[4] = 1072693248; /*0x41e392*/
  IDA_BYTE2(this->ChargerTurrets[5]) = 1; /*0x41e39a*/
  IDA_HIBYTE(this->ChargerTurrets[5]) = 1; /*0x41e3a0*/
  IDA_LOBYTE(this->ChargerTurrets[6]) = 1; /*0x41e3a6*/
  this->Armor[0] = 0; /*0x41e3b9*/
  this->Strength = 0; /*0x41e3bf*/
  IDA_LOBYTE(this->Image) = 0; /*0x41e3c5*/
  this->AlphaImage = 0; /*0x41e3cb*/
  this->MainVoxel[0] = 0; /*0x41e3d1*/
  IDA_LOBYTE(this->ChargerTurrets[5]) = 0; /*0x41e3d7*/
  IDA_BYTE1(this->ChargerTurrets[5]) = 0; /*0x41e3dd*/
  this->ChargerTurrets[7] = 0; /*0x41e3e3*/
  this->ChargerTurrets[8] = 0; /*0x41e3e9*/
  this->ChargerTurrets[9] = 0; /*0x41e3ef*/
  this->ChargerBarrels[0] = 0; /*0x41e3f5*/
  this->ChargerBarrels[1] = 0; /*0x41e3fb*/
  this->vtable0 = (void*)&AITriggerTypeClass_vftable; /*0x41e401*/
  this->vtable1 = (void*)&AITriggerTypeClass_vftable; /*0x41e407*/
  this->vtable2 = (void*)&AITriggerTypeClass_vftable; /*0x41e40e*/
  this->vtable3 = (void*)&AITriggerTypeClass_vftable; /*0x41e415*/
  memset(&this->ChargerTurrets[10], 0, 0x20u); /*0x41e41c*/
  if ( dword_A8B210 < dword_A8B208 /*0x41e452*/
    || (unk_A8B20D || !dword_A8B208)
    && dword_A8B214 > 0
    && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8B200 + 8))(
         &dword_A8B200,
         dword_A8B208 + dword_A8B214,
         0) )
  {
    v3 = (unsigned int)(dword_A8B210++);
    *((unsigned int *)unk_A8B204 + v3) = this; /*0x41e46e*/
  }
  return &this->vtable0; /*0x41e473*/
}
}
// 0x427530
namespace gamemd {
unsigned int * AnimTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  AnimTypeClass **v6; // ecx

  ObjectTypeClass::ConstructFull(aP1); /*0x42753a*/
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
  this->UseNormalLight = (unsigned int)(0);
  this->DemandLoad = (unsigned int)(0);
  this->FreeLoad = 0; /*0x4276bc*/
  this->IsAnimatedTiberium = 0; /*0x4276c2*/
  this->AltPalette = 0; /*0x4276c8*/
  this->Normalized = 0; /*0x4276ce*/
  this->Layer[0] = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat = 0; /*0x4276e4*/
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
  this->vtable0 = (void*)&AnimTypeClass_vftable; /*0x427731*/
  this->vtable1 = (void*)&AnimTypeClass_vftable; /*0x427737*/
  this->vtable2 = (void*)&AnimTypeClass_vftable; /*0x42773d*/
  this->vtable3 = (void*)&AnimTypeClass_vftable; /*0x427744*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable1); /*0x42774b*/
  this->IsLogic = 1; /*0x427750*/
  this->RadarInvisible = 1; /*0x427757*/
  this->Selectable = 0; /*0x42775e*/
  this->LegalTarget = 0; /*0x427764*/
  this->Insignificant = 1; /*0x42776a*/
  this->Immune = 1; /*0x427771*/
  this->AllowCellContent = 0; /*0x427778*/
  if ( FootClass_Array.secondaryFacing[0] < FootClass_Array.primaryFacing[4] /*0x4277b0*/
    || (IDA_BYTE1(FootClass_Array.primaryFacing[5]) || !FootClass_Array.primaryFacing[4])
    && FootClass_Array.secondaryFacing[1] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(FootClass_Array.primaryFacing[2] + 8))(
         &FootClass_Array.primaryFacing[2],
         FootClass_Array.primaryFacing[4] + FootClass_Array.secondaryFacing[1],
         0) )
  {
    v3 = FootClass_Array.secondaryFacing[0]++; /*0x4277bd*/
    *(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * v3) = this; /*0x4277cc*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x427803*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x427810*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( FootClass_Array.secondaryFacing[0] <= 0 ) /*0x42782c*/
  {
  LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = (AnimTypeClass **)FootClass_Array.primaryFacing[3]; /*0x42782e*/
    while ( *v6 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      ++v6; /*0x427839*/
      if ( v5 >= FootClass_Array.secondaryFacing[0] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return &this->vtable0; /*0x42784a*/
}
}
// 0x427B50
namespace gamemd {
void* AnimTypeClass::GetWarhead(int a2)
{
  int v3; // eax
  char v4; // cl
  const char *v5; // eax
  void * v6;
  int v7; // eax
  int v8; // eax
  char v9; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  IDA_LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(unsigned char)v3 ) /*0x427b61*/
  {
    if ( this->q22C ) /*0x427b67*/
    {
      IDA_LOBYTE(); /*0x427b71*/
    }
    else
    {
      if ( this->Image && this->ImageAllocated ) /*0x427b85*/
      {
        RA2_OPDEL(*(void **)(&this->DetailLevel4)); /*0x427b90*/
        this->ImageAllocated = 0; /*0x427b98*/
      }
      v4 = (int)(this->ImageFile);
      v5 = (int)((const char *)(&this->u32_C84));
      this->Image = (void *)((unsigned int)((void *)((int)(0))));
      if ( !v4 ) /*0x427bb7*/
        v5 = (const char *)(&this->vtable46); /*0x427bb9*/
      _makepath(Buffer, 0, 0, v5, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = SearchMIXFile(Buffer, 1); /*0x427be9*/
      this->Image = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x427bfc*/
        v3 = SearchMIXFile(Buffer, 1); /*0x427c07*/
        this->Image = v3; /*0x427c0c*/
      }
    }
  }
  v6 = (void *)(this->Image);
  if ( v6 ) /*0x427c1a*/
  {
    v7 = this->q2C0; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !v7 ) /*0x427c2b*/
    {
      v8 = v6->u32_6; /*0x427c2d*/
      v9 = this->Shadow; /*0x427c31*/
      this->q2C0 = v8; /*0x427c37*/
      if ( v9 ) /*0x427c3f*/
        this->q2C0 = v8 / 2; /*0x427c46*/
    }
    if ( !this->q2BC ) /*0x427c4c*/
      this->q2BC = this->q2C0; /*0x427c5c*/
    this->MiddleFrameWidth = v6->u32_6 / 2; /*0x427c6b*/
    this->q29C = -1; /*0x427c74*/
    this->q2A0 = -1; /*0x427c7a*/
    IDA_LOBYTE(v3, unsigned int a1) = -1; /*0x427c71*/
  }
  return (void *, unsigned int a3)(v3);
}
}
// 0x427D00
namespace gamemd {
int AnimTypeClass::LoadFromINI(unsigned char *** a2, void * a1, void * a3)
{
  char Bool_Overwrite; // al
  int v5; // eax
  int Int_Overwrite; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // edx
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  double v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  char v21; // al
  char v22; // cl
  char v23; // al
  int v24; // eax
  int v25; // ebp
  int v26; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ebp
  int Index; // eax
  int v35; // eax
  int v36; // ebp
  int v37; // eax
  unsigned int *v38; // ebp
  int v39; // ebp
  unsigned int *v40; // eax
  unsigned int *v41; // eax
  unsigned int *v42; // ebp
  int v43; // ebp
  unsigned int *v44; // eax
  unsigned int *v45; // eax
  unsigned int *v46; // ebp
  int v47; // ebp
  unsigned int *v48; // eax
  unsigned int *v49; // eax
  int v50; // eax
  int v51; // ebp
  int v52; // eax
  char v53; // al
  char v54; // cl
  char v55; // al
  int *v56; // eax
  int v57; // ecx
  int v58; // edi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v63; // [esp-Ch] [ebp-C4h]
  int v64; // [esp-Ch] [ebp-C4h]
  char v65; // [esp-Ch] [ebp-C4h]
  int v66; // [esp-Ch] [ebp-C4h]
  int v67; // [esp-Ch] [ebp-C4h]
  char v68; // [esp-Ch] [ebp-C4h]
  char v69; // [esp-Ch] [ebp-C4h]
  int v70; // [esp+8h] [ebp-B0h] BYREF
  int v71; // [esp+Ch] [ebp-ACh]
  char v72[8]; // [esp+10h] [ebp-A8h] BYREF
  char Source[128]; // [esp+18h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+98h] [ebp-20h] BYREF

  INIClass::ResetSection(a3); /*0x427d13*/
  if ( !ObjectTypeClass::LoadFromINI((char *)a1, a3) ) /*0x427d22*/
    return 0; /*0x4287ea*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aShadow, *(unsigned char *)(a1 + 882)); /*0x427d3b*/
  if ( Bool_Overwrite != *(unsigned char *)(a1 + 882) ) /*0x427d46*/
  {
    *(unsigned char *)(a1 + 882) = Bool_Overwrite; /*0x427d4a*/
    if ( Bool_Overwrite ) /*0x427d50*/
      *(int *)(a1 + 704) /= 2; /*0x427d5d*/
    else
      *(unsigned int *)(a1 + 704) *= 2; /*0x427d6d*/
    v5 = *(unsigned int *)(a1 + 704); /*0x427d73*/
    if ( *(unsigned int *)(a1 + 700) > v5 ) /*0x427d81*/
      *(unsigned int *)(a1 + 700) = v5; /*0x427d83*/
  }
  if ( *(unsigned char *)(a1 + 504) ) /*0x427d89*/
  {
    if ( !*(unsigned int *)(a1 + 164) ) /*0x427d93*/
    {
      *(unsigned char *)(a1 + 556) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Theater, *(unsigned char *)(a1 + 556)); /*0x427db4*/
      *(unsigned char *)(a1 + 567) = INIClass::ReadBool_Overwrite(a1 + 36, aNewtheater, *(unsigned char *)(a1 + 567)); /*0x427dd1*/
    }
    (*(void (__thiscall **)(int, int))(*(unsigned int *)a1 + 160))(a1, -1); /*0x427ddd*/
  }
  *(unsigned int *)(a1 + 868) = AnimTypeClass::ReadINIString(a1 + 36, aLayer, *(unsigned int *)(a1 + 868)); /*0x427df7*/
  *(unsigned char *)(a1 + 865) = INIClass::ReadBool_Overwrite(a1 + 36, aAltpalette, *(unsigned char *)(a1 + 865)); /*0x427e14*/
  *(unsigned char *)(a1 + 872) = INIClass::ReadBool_Overwrite(a1 + 36, aDoublethick, *(unsigned char *)(a1 + 872)); /*0x427e2e*/
  *(unsigned char *)(a1 + 873) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Flat, *(unsigned char *)(a1 + 873)); /*0x427e48*/
  *(unsigned char *)(a1 + 876) = INIClass::ReadBool_Overwrite(a1 + 36, aFlamer, *(unsigned char *)(a1 + 876)); /*0x427e62*/
  *(unsigned char *)(a1 + 866) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Normalized, *(unsigned char *)(a1 + 866)); /*0x427e7c*/
  *(unsigned char *)(a1 + 874) = INIClass::ReadBool_Overwrite(a1 + 36, aTranslucent, *(unsigned char *)(a1 + 874)); /*0x427e96*/
  *(unsigned char *)(a1 + 875) = INIClass::ReadBool_Overwrite(a1 + 36, aScorch, *(unsigned char *)(a1 + 875)); /*0x427eb0*/
  *(unsigned char *)(a1 + 877) = INIClass::ReadBool_Overwrite(a1 + 36, aCrater, *(unsigned char *)(a1 + 877)); /*0x427eca*/
  *(unsigned char *)(a1 + 878) = INIClass::ReadBool_Overwrite(a1 + 36, aForcebigcrater, *(unsigned char *)(a1 + 878)); /*0x427ee4*/
  *(unsigned char *)(a1 + 879) = INIClass::ReadBool_Overwrite(a1 + 36, aSticky, *(unsigned char *)(a1 + 879)); /*0x427efe*/
  *(unsigned char *)(a1 + 880) = INIClass::ReadBool_Overwrite(a1 + 36, aPingpong, *(unsigned char *)(a1 + 880)); /*0x427f18*/
  *(unsigned char *)(a1 + 881) = INIClass::ReadBool_Overwrite(a1 + 36, aReverse, *(unsigned char *)(a1 + 881)); /*0x427f32*/
  *(unsigned char *)(a1 + 883) = INIClass::ReadBool_Overwrite(a1 + 36, aPsiwarning, *(unsigned char *)(a1 + 883)); /*0x427f4c*/
  *(unsigned char *)(a1 + 855) = INIClass::ReadBool_Overwrite(a1 + 36, aTiberiumchainr, *(unsigned char *)(a1 + 855)); /*0x427f70*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Rate, -1); /*0x427f76*/
  if ( Int_Overwrite != -1 ) /*0x427f80*/
  {
    if ( Int_Overwrite <= 0 ) /*0x427f84*/
      v7 = 0; /*0x427f90*/
    else
      v7 = 900 / Int_Overwrite; /*0x427f8c*/
    *(unsigned int *)(a1 + 688) = v7; /*0x427f92*/
  }
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Damage, *(double *)(a1 + 680)); /*0x427faf*/
  *(double *)(a1 + 680) = a2; /*0x427fb4*/
  *(unsigned int *)(a1 + 692) = INIClass::ReadInt_Overwrite(a1 + 36, aStart, *(unsigned int *)(a1 + 692)); /*0x427fce*/
  *(unsigned int *)(a1 + 704) = INIClass::ReadInt_Overwrite(a1 + 36, &off_818590, *(unsigned int *)(a1 + 704)); /*0x427fe8*/
  *(unsigned int *)(a1 + 696) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopstart, *(unsigned int *)(a1 + 696)); /*0x428002*/
  *(unsigned int *)(a1 + 700) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopend, *(unsigned int *)(a1 + 700)); /*0x42801c*/
  *(unsigned int *)(a1 + 708) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopcount, *(unsigned int *)(a1 + 708)); /*0x42804a*/
  v8 = *(unsigned int *)(a1 + 712); /*0x428050*/
  if ( INIClass::GetString( /*0x428059*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aNext,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    v9 = globalHelper_028F70(Source); /*0x42806b*/
  }
  else
  {
    v9 = v8; /*0x428072*/
  }
  *(unsigned int *)(a1 + 712) = v9; /*0x428074*/
  *(unsigned int *)(a1 + 724) = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_DetailLevel, *(unsigned int *)(a1 + 724)); /*0x42808e*/
  *(unsigned int *)(a1 + 728) = INIClass::ReadInt_Overwrite(a1 + 36, aTranslucencyde, *(unsigned int *)(a1 + 728)); /*0x4280a8*/
  v10 = *(unsigned int *)(a1 + 736); /*0x4280b4*/
  v70 = *(unsigned int *)(a1 + 732); /*0x4280be*/
  v71 = v10; /*0x4280d0*/
  v11 = (int *)INIClass::ReadPoint2D_Overwrite(v72, a1 + 36, aRandomloopdela, &v70); /*0x4280d4*/
  v12 = *v11; /*0x4280d9*/
  v13 = v11[1]; /*0x4280db*/
  *(unsigned int *)(a1 + 732) = v12; /*0x4280de*/
  *(unsigned int *)(a1 + 736) = v13; /*0x4280e4*/
  *(unsigned int *)(a1 + 748) = INIClass::ReadInt_Overwrite(a1 + 36, aTranslucency, *(unsigned int *)(a1 + 748)); /*0x4280fe*/
  *(unsigned char *)(a1 + 856) = INIClass::ReadBool_Overwrite(a1 + 36, aIstiberium, *(unsigned char *)(a1 + 856)); /*0x428118*/
  *(unsigned char *)(a1 + 857) = INIClass::ReadBool_Overwrite(a1 + 36, aHideifnoore, *(unsigned char *)(a1 + 857)); /*0x428132*/
  *(unsigned int *)(a1 + 832) = INIClass::ReadInt_Overwrite(a1 + 36, aYsortadjust, *(unsigned int *)(a1 + 832)); /*0x42814c*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, *(double *)(a1 + 784)); /*0x428168*/
  v14 = *(double *)(a1 + 808); /*0x428173*/
  *(double *)(a1 + 784) = a2; /*0x428179*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxxyvel, v14); /*0x428189*/
  v15 = *(unsigned int *)(a1 + 796); /*0x42818e*/
  v16 = *(unsigned int *)(a1 + 792); /*0x428194*/
  *(double *)(a1 + 808) = a2; /*0x42819a*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinzvel, COERCE_DOUBLE(IDA___PAIR64__(v15, v16))); /*0x4281aa*/
  v17 = *(unsigned int *)(a1 + 844); /*0x4281af*/
  *(double *)(a1 + 792) = a2; /*0x4281b7*/
  v18 = INIClass::ReadInt_Overwrite(a1 + 36, aMakeinfantry, v17); /*0x4281c4*/
  v19 = *(unsigned int *)(a1 + 752); /*0x4281c9*/
  *(unsigned int *)(a1 + 844) = v18; /*0x4281e6*/
  if ( INIClass::GetString( /*0x4281ec*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)g_INI_Key_Spawns,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    v20 = globalHelper_028F70(Source); /*0x4281fe*/
  }
  else
  {
    v20 = v19; /*0x428205*/
  }
  v63 = *(unsigned int *)(a1 + 756); /*0x42820f*/
  *(unsigned int *)(a1 + 752) = v20; /*0x428216*/
  *(unsigned int *)(a1 + 756) = INIClass::ReadInt_Overwrite(a1 + 36, aSpawncount, v63); /*0x428221*/
  v21 = INIClass::ReadBool_Overwrite(a1 + 36, aIsmeteor, *(unsigned char *)(a1 + 854)); /*0x428236*/
  v22 = *(unsigned char *)(a1 + 853); /*0x42823b*/
  *(unsigned char *)(a1 + 854) = v21; /*0x428241*/
  v23 = INIClass::ReadBool_Overwrite(a1 + 36, aIsveins, v22); /*0x428250*/
  v64 = *(unsigned int *)(a1 + 828); /*0x42825d*/
  *(unsigned char *)(a1 + 853) = v23; /*0x428264*/
  v24 = INIClass::ReadInt_Overwrite(a1 + 36, aTiberiumspread_0, v64); /*0x42826a*/
  v25 = *(unsigned int *)(a1 + 824); /*0x42826f*/
  *(unsigned int *)(a1 + 828) = v24; /*0x428275*/
  if ( INIClass::GetString( /*0x428292*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aTiberiumspawnt,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    v26 = BuildingTypeClass::FindOrCreate2(Source); /*0x42829f*/
  }
  else
  {
    v26 = v25; /*0x4282a6*/
  }
  v27 = *(unsigned char *)(a1 + 864); /*0x4282a8*/
  *(unsigned int *)(a1 + 824) = v26; /*0x4282ae*/
  v28 = INIClass::ReadBool_Overwrite(a1 + 36, aIsanimatedtibe, v27); /*0x4282bd*/
  v65 = *(unsigned char *)(a1 + 884); /*0x4282ca*/
  *(unsigned char *)(a1 + 864) = v28; /*0x4282d1*/
  *(unsigned char *)(a1 + 884) = INIClass::ReadBool_Overwrite(a1 + 36, aShouldfogremov, v65); /*0x4282dc*/
  v29 = INIClass::ReadBool_Overwrite(a1 + 36, aIsflamingguy, *(unsigned char *)(a1 + 852)); /*0x4282f1*/
  v30 = *(unsigned int *)(a1 + 848); /*0x4282f6*/
  *(unsigned char *)(a1 + 852) = v29; /*0x4282fc*/
  v31 = INIClass::ReadInt_Overwrite(a1 + 36, aRunningframes, v30); /*0x42830b*/
  v66 = *(unsigned int *)(a1 + 836); /*0x428318*/
  *(unsigned int *)(a1 + 848) = v31; /*0x42831f*/
  *(unsigned int *)(a1 + 836) = INIClass::ReadInt_Overwrite(a1 + 36, aYdrawoffset, v66); /*0x42832a*/
  v32 = INIClass::ReadInt_Overwrite(a1 + 36, aZadjust, *(unsigned int *)(a1 + 840)); /*0x42833f*/
  v33 = *(unsigned int *)(a1 + 760); /*0x428344*/
  *(unsigned int *)(a1 + 840) = v32; /*0x428361*/
  if ( !INIClass::GetString( /*0x42837c*/
          a3,
          (uint8_t *)(a1 + 36),
          (uint8_t *)g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          Source,
          128)
    || (Index = VocClass::FindIndex(Source), Index == -1) )
  {
    Index = v33; /*0x42837e*/
  }
  *(unsigned int *)(a1 + 760) = Index; /*0x428383*/
  if ( Index == -1 ) /*0x428389*/
  {
    if ( !INIClass::GetString( /*0x4283b7*/
            a3,
            (uint8_t *)(a1 + 36),
            (uint8_t *)aReport,
            &g_INI_DefaultBuffer,
            Source,
            128)
      || (v35 = VocClass::FindIndex(Source), v35 == -1) )
    {
      v35 = -1; /*0x4283b9*/
    }
    *(unsigned int *)(a1 + 760) = v35; /*0x4283bc*/
  }
  v36 = *(unsigned int *)(a1 + 764); /*0x4283c2*/
  if ( !INIClass::GetString( /*0x4283f4*/
          a3,
          (uint8_t *)(a1 + 36),
          (uint8_t *)g_INI_Key_StopSound,
          &g_INI_DefaultBuffer,
          Source,
          128)
    || (v37 = VocClass::FindIndex(Source), v37 == -1) )
  {
    v37 = v36; /*0x4283f6*/
  }
  v38 = *(unsigned int **)(a1 + 768); /*0x4283f8*/
  *(unsigned int *)(a1 + 764) = v37; /*0x428415*/
  if ( INIClass::GetString( /*0x42841b*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aBounceanim,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428448*/
      goto LABEL_46; /*0x428448*/
    v39 = 0; /*0x428459*/
    if ( g_BuildingTypeCount2 > 0 ) /*0x42845d*/
    {
      while ( _strcmpi((const void *)(*((unsigned int *)g_AnimTypeCount + v39) + 36), Source) ) /*0x42847b*/
      {
        if ( ++v39 >= g_BuildingTypeCount2 ) /*0x428485*/
          goto LABEL_43; /*0x428485*/
      }
      v41 = (unsigned int *)*((unsigned int *)g_AnimTypeCount + v39); /*0x4284ac*/
      goto LABEL_47; /*0x4284af*/
    }
  LABEL_43:
    v40 = RA2_OPNEW(0x378u); /*0x42848c*/
    if ( v40 ) /*0x428496*/
      v41 = AnimTypeClass::Construct(v40, Source); /*0x42849f*/
    else
  LABEL_46:
      v41 = 0; /*0x4284b1*/
  LABEL_47:
    v38 = v41; /*0x4284b3*/
  }
  *(unsigned int *)(a1 + 768) = v38; /*0x4284b5*/
  v42 = *(unsigned int **)(a1 + 772); /*0x4284cf*/
  if ( !INIClass::GetString( /*0x4284df*/
          a3,
          (uint8_t *)(a1 + 36),
          (uint8_t *)aExpireanim,
          &g_INI_DefaultBuffer,
          Source,
          128) )
  {
    v45 = v42; /*0x428571*/
    goto LABEL_59; /*0x428571*/
  }
  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428505*/
  {
  LABEL_57:
    v45 = 0; /*0x42856d*/
    goto LABEL_59; /*0x42856f*/
  }
  v43 = 0; /*0x428516*/
  if ( g_BuildingTypeCount2 <= 0 ) /*0x42851a*/
  {
  LABEL_54:
    v44 = RA2_OPNEW(0x378u); /*0x428544*/
    if ( v44 ) /*0x428553*/
    {
      v45 = AnimTypeClass::Construct(v44, Source); /*0x42855c*/
      goto LABEL_59; /*0x428561*/
    }
    goto LABEL_57; /*0x428553*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_AnimTypeCount + v43) + 36), Source) ) /*0x428538*/
  {
    if ( ++v43 >= g_BuildingTypeCount2 ) /*0x428542*/
      goto LABEL_54; /*0x428542*/
  }
  v45 = (unsigned int *)*((unsigned int *)g_AnimTypeCount + v43); /*0x428568*/
  LABEL_59:
  v46 = *(unsigned int **)(a1 + 776); /*0x428573*/
  *(unsigned int *)(a1 + 772) = v45; /*0x428590*/
  if ( INIClass::GetString( /*0x428596*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aTraileranim,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4285c3*/
      goto LABEL_68; /*0x4285c3*/
    v47 = 0; /*0x4285d4*/
    if ( g_BuildingTypeCount2 > 0 ) /*0x4285d8*/
    {
      while ( _strcmpi((const void *)(*((unsigned int *)g_AnimTypeCount + v47) + 36), Source) ) /*0x4285f5*/
      {
        if ( ++v47 >= g_BuildingTypeCount2 ) /*0x4285ff*/
          goto LABEL_65; /*0x4285ff*/
      }
      v49 = (unsigned int *)*((unsigned int *)g_AnimTypeCount + v47); /*0x428626*/
      goto LABEL_70; /*0x428629*/
    }
  LABEL_65:
    v48 = RA2_OPNEW(0x378u); /*0x428606*/
    if ( v48 ) /*0x428610*/
      v49 = AnimTypeClass::Construct(v48, Source); /*0x428619*/
    else
  LABEL_68:
      v49 = 0; /*0x42862b*/
  }
  else
  {
    v49 = v46; /*0x42862f*/
  }
  LABEL_70:
  v67 = *(unsigned int *)(a1 + 780); /*0x428631*/
  *(unsigned int *)(a1 + 776) = v49; /*0x428640*/
  *(unsigned int *)(a1 + 780) = INIClass::ReadInt_Overwrite(a1 + 36, aTrailerseperat, v67); /*0x42864b*/
  v50 = INIClass::ReadInt_Overwrite(a1 + 36, aDamageradius, *(unsigned int *)(a1 + 820)); /*0x428660*/
  v51 = *(unsigned int *)(a1 + 816); /*0x428665*/
  *(unsigned int *)(a1 + 820) = v50; /*0x428682*/
  if ( INIClass::GetString( /*0x428688*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         Source,
         128) )
  {
    v52 = WarheadTypeClass::FindOrCreate(Source); /*0x428695*/
  }
  else
  {
    v52 = v51; /*0x42869c*/
  }
  v68 = *(unsigned char *)(a1 + 858); /*0x4286a6*/
  *(unsigned int *)(a1 + 816) = v52; /*0x4286ad*/
  *(unsigned char *)(a1 + 858) = INIClass::ReadBool_Overwrite(a1 + 36, aBouncer, v68); /*0x4286b8*/
  v53 = INIClass::ReadBool_Overwrite(a1 + 36, aTiled, *(unsigned char *)(a1 + 859)); /*0x4286cd*/
  v54 = *(unsigned char *)(a1 + 860); /*0x4286d2*/
  *(unsigned char *)(a1 + 859) = v53; /*0x4286d8*/
  v55 = INIClass::ReadBool_Overwrite(a1 + 36, aShouldusecelld, v54); /*0x4286e7*/
  v69 = *(unsigned char *)(a1 + 861); /*0x4286f4*/
  *(unsigned char *)(a1 + 860) = v55; /*0x4286fb*/
  *(unsigned char *)(a1 + 861) = INIClass::ReadBool_Overwrite(a1 + 36, aUsenormallight, v69); /*0x428706*/
  if ( INIClass::GetString(a3, (uint8_t *)(a1 + 36), (uint8_t *)aSpawnsparticle, 0, Destination, 32) ) /*0x428720*/
    *(unsigned int *)(a1 + 716) = BuildingTypeClass::FindOrCreateEx(Destination); /*0x428735*/
  *(unsigned int *)(a1 + 720) = INIClass::ReadInt_Overwrite(a1 + 36, aNumparticles, *(unsigned int *)(a1 + 720)); /*0x428753*/
  v70 = -1; /*0x42876a*/
  v71 = -1; /*0x42876e*/
  v56 = (int *)INIClass::ReadPoint2D_Overwrite(v72, a1 + 36, aRandomrate, &v70); /*0x428772*/
  v57 = *v56; /*0x428777*/
  v58 = v56[1]; /*0x428779*/
  if ( *v56 != -1 ) /*0x42877e*/
  {
    if ( v57 <= 0 ) /*0x428782*/
      v59 = 0; /*0x42878e*/
    else
      v59 = 900 / v57; /*0x42878a*/
    *(unsigned int *)(a1 + 740) = v59; /*0x428790*/
  }
  if ( v58 != -1 ) /*0x428799*/
  {
    if ( v58 <= 0 ) /*0x42879d*/
      v60 = 0; /*0x4287a9*/
    else
      v60 = 900 / v58; /*0x4287a5*/
    *(unsigned int *)(a1 + 744) = v60; /*0x4287ab*/
  }
  if ( *(int *)(a1 + 744) < 0 ) /*0x4287ba*/
    *(unsigned int *)(a1 + 744) = 0; /*0x4287bc*/
  v61 = *(unsigned int *)(a1 + 744); /*0x4287c6*/
  if ( *(unsigned int *)(a1 + 740) > v61 ) /*0x4287d4*/
    *(unsigned int *)(a1 + 740) = v61; /*0x4287d6*/
  return 1; /*0x4287dc*/
}
}
// 0x428800
namespace gamemd {
ScenarioClass * * AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)a1, (int)v3); /*0x42882c*/
      a1->vtable0 = (void*)&AnimTypeClass_vftable; /*0x428831*/
      a1->vtable1 = (void*)&AnimTypeClass_vftable; /*0x428837*/
      a1->vtable2 = (void*)&AnimTypeClass_vftable; /*0x42883e*/
      a1->vtable3 = (void*)&AnimTypeClass_vftable; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Next); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->ExpireAnim); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->TrailerAnim); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->BounceAnim); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Spawns); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->Warhead); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->TiberiumSpawnType); /*0x4288cc*/
    if ( !a1->DemandLoad ) /*0x4288d1*/
    {
      if ( a1->Theater ) /*0x4288db*/
      {
        _makepath( /*0x428910*/
          &v3[1],
          0,
          0,
          (const char *)a1->BarrelVoxel,
          (const char *)&off_7E1BC6 + 112 * unk_A8B230[130].uniqueId);
        a1->Image = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( a1->NewTheater ) /*0x428935*/
        (*((void (__thiscall **)(AnimTypeClass *, int))a1->vtable0 + 40))(a1, unk_A8B230[130].uniqueId); /*0x42894f*/
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
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx

  AbstractTypeClass::ProcessPower(a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer[0]); /*0x4289e7*/
  IDA_LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  Power::FlagProcess((Power *)a2, v3); /*0x4289f5*/
  IDA_LOBYTE(v4) = this->Flat; /*0x4289fa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x428a03*/
  IDA_LOBYTE(v5) = this->Translucent; /*0x428a08*/
  Power::FlagProcess((Power *)a2, v5); /*0x428a11*/
  IDA_LOBYTE(v6) = this->Scorch; /*0x428a16*/
  Power::FlagProcess((Power *)a2, v6); /*0x428a1f*/
  IDA_LOBYTE(v7) = this->Flamer; /*0x428a24*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x428a2d*/
  IDA_LOBYTE(v8) = this->Crater; /*0x428a32*/
  Power::FlagProcess((Power *)a2, v8); /*0x428a3b*/
  IDA_LOBYTE(v9) = this->Sticky; /*0x428a40*/
  Power::FlagProcess((Power *)a2, v9); /*0x428a49*/
  IDA_LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x428a57*/
  IDA_LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  Power::FlagProcess((Power *)a2, v11); /*0x428a65*/
  IDA_LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  Power::FlagProcess((Power *)a2, v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((Checksummer *)a2, this->Damage[0], this->Damage[1]); /*0x428a96*/
  IDA_LOBYTE(v13) = this->TiberiumChainReaction; /*0x428a9b*/
  Power::FlagProcess((Power *)a2, v13); /*0x428aa4*/
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
  IDA_LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return Power::FlagProcess((Power *)a2, v14); /*0x428b6d*/
}
}
// 0x428B80
namespace gamemd {
AnimTypeClass * * AnimTypeClass::FindOrCreate()
{
  int v2; // esi
  AnimTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( FootClass_Array.secondaryFacing[0] <= 0 ) /*0x428bb1*/
  {
  LABEL_6:
    v3 = (AnimTypeClass *)RA2_OPNEW(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= FootClass_Array.secondaryFacing[0] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(unsigned int **)(FootClass_Array.primaryFacing[3] + 4 * v2); /*0x428bef*/
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
      ImageFile = (const char *)this->BarrelVoxel; /*0x428c76*/
    _makepath(Buffer, 0, 0, ImageFile, Ext); /*0x428c8b*/
    if ( this->Theater ) /*0x428c90*/
    {
      _makepath( /*0x428ccc*/
        Buffer,
        0,
        0,
        (const char *)this->BarrelVoxel,
        (const char *)&off_7E1BC6 + 112 * unk_A8B230[130].uniqueId);
    }
    else if ( this->NewTheater ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, unk_A8B230[130].uniqueId); /*0x428cf3*/
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
      *(unsigned int *)v10.__pad_0 = (void*)&CCFileClass_vftable; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      *(unsigned int *)v10.__pad_0 = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x428d87*/
    }
    (*((void (__thiscall **)(AnimTypeClass *, int))this->vtable0 + 40))(this, unk_A8B230[130].uniqueId); /*0x428d9c*/
    Image = this->Image; /*0x428da2*/
    *(unsigned int *)v7.__pad_0 = (void*)&CCFileClass_vftable; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    *(unsigned int *)v7.__pad_0 = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x428dcd*/
    return (int)Image; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
}
}
// 0x428EA0
namespace gamemd {
AnimTypeClass * AnimTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax
  AnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->vtable0 = (void*)&AnimTypeClass_vftable; /*0x428ead*/
  this->vtable1 = (void*)&AnimTypeClass_vftable; /*0x428eb3*/
  this->vtable2 = (void*)&AnimTypeClass_vftable; /*0x428eba*/
  this->vtable3 = (void*)&AnimTypeClass_vftable; /*0x428ec1*/
  v6 = this; /*0x428ecf*/
  v3 = (*(int (__thiscall **)(int *, AnimTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x428ed3*/
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
  v6 = this; /*0x428f18*/
  v4 = (*(int (__thiscall **)(int *, AnimTypeClass **))(FootClass_Array.primaryFacing[2] + 16))( /*0x428f1c*/
         &FootClass_Array.primaryFacing[2],
         &v6);
  if ( v4 != -1 && v4 < FootClass_Array.secondaryFacing[0] ) /*0x428f2c*/
  {
    --FootClass_Array.secondaryFacing[0]; /*0x428f31*/
    for ( ; /*0x428f37*/
          v4 < FootClass_Array.secondaryFacing[0];
          *(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * v4 - 4) = *(unsigned int *)(FootClass_Array.primaryFacing[3]
                                                                                 + 4 * v4) )
    {
      ++v4; /*0x428f3f*/
    }
  }
  ObjectTypeClass::Destruct(); /*0x428f53*/
  if ( (a2 & 1) != 0 ) /*0x428f5d*/
    RA2_OPDEL(); /*0x428f60*/
  return &this->vtable0; /*0x428f6a*/
}
} // namespace gamemd

// 0x48E050
namespace gamemd {
int AnimTypeClass::LookupByName()
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = off_81DA78; /*0x48e05b*/
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
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  IDA_LOBYTE(v2) = stru_A8EB00.gapE4[391]; /*0x427a80*/
  if ( stru_A8EB00.gapE4[391] || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !this->Theater || this->DemandLoad ) /*0x427ab0*/
    {
      IDA_LOBYTE(v2) = this->NewTheater; /*0x427b2b*/
      if ( (unsigned char)v2 ) /*0x427b33*/
        IDA_LOBYTE(v2) = (*((char (__thiscall **)(AnimTypeClass *, int))this->vtable0 + 40))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( this->Image && this->ImageAllocated ) /*0x427ac4*/
      {
        RA2_OPDEL(this->Image); /*0x427acf*/
        this->ImageAllocated = 0; /*0x427ad7*/
      }
      this->Image = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this->BarrelVoxel, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x427b15*/
      this->Image = v2; /*0x427b1a*/
    }
  }
  return (char)v2; /*0x427b20*/
}
} // namespace gamemd

// 0x427CB0
namespace gamemd {
int AnimTypeClass::FindIndex()
{
  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
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
int AnimTypeClass::ReadINIString(INIClass * aP1, unsigned char * a2, Layer a3)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = globalHelper_08E090(a3); /*0x47706d*/
  if ( INIClass::GetString((INIClass *)this, aP1, a2, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName((AnimTypeClass *)Destination); /*0x477092*/
  else
    return a3; /*0x4770a2*/
}
} // namespace gamemd
