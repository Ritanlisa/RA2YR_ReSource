// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/INIEntry_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/VoxelPaletteClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/VoxelAnimClass_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x74AD80
namespace gamemd {  // G42.18 ns repair
VoxelAnimTypeClass * VoxelAnimTypeClass::Constructor(char *Source, void *a2, void *a3, void *a4)
{

  int v3; // eax
  int v4; // eax

  ((int *)this)->ConstructFull(Source); /*0x74ad89*/
  this->StartSound = -1; /*0x74ad93*/
  this->StopSound = -1; /*0x74ad99*/
  this->Normalized = 0; /*0x74ad9f*/
  this->Translucent = 0; /*0x74ada8*/
  this->SourceShared = 0; /*0x74adae*/
  this->Elasticity[0] = -1610612736; /*0x74adb4*/
  this->MinAngularVelocity[0] = 0; /*0x74adbe*/
  this->MaxAngularVelocity[0] = 484854086; /*0x74adc4*/
  this->MinZVel[0] = 0; /*0x74adce*/
  this->MaxZVel[0] = 0; /*0x74add4*/
  this->MaxXYVel[0] = 0; /*0x74adda*/
  this->VoxelIndex = 0; /*0x74ade1*/
  this->Duration = 30; /*0x74ade7*/
  this->Elasticity[1] = 1072273817; /*0x74adf1*/
  this->MinAngularVelocity[1] = 0; /*0x74adfb*/
  this->MaxAngularVelocity[1] = 1069962989; /*0x74ae01*/
  this->MinZVel[1] = 1074528256; /*0x74ae0b*/
  this->MaxZVel[1] = 1075052544; /*0x74ae15*/
  this->MaxXYVel[1] = 1076756480; /*0x74ae1f*/
  this->IsMeteor = 0; /*0x74ae29*/
  this->Spawns = 0; /*0x74ae2f*/
  this->SpawnCount = 0; /*0x74ae35*/
  this->BounceAnim = 0; /*0x74ae3b*/
  this->ExpireAnim = 0; /*0x74ae41*/
  this->TrailerAnim = 0; /*0x74ae47*/
  this->Damage = 0; /*0x74ae4d*/
  this->DamageRadius = 0; /*0x74ae53*/
  this->Warhead = 0; /*0x74ae59*/
  this->AttachedSystem = 0; /*0x74ae5f*/
  this->IsTiberium = 0; /*0x74ae65*/
  this->ObjectTypeClass = &vt_VoxelAnimTypeClass; /*0x74ae6b*/
  this->IsTiberium = &vt_VoxelAnimTypeClass; /*0x74ae71*/
  /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74ae77) */
  /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74ae7e) */
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x74ae85*/
  this->LegalTarget_d = 0; /*0x74ae8c*/
  this->IsLogic_d = 1; /*0x74ae92*/
  this->RadarInvisible_d = 1; /*0x74ae98*/
  this->Selectable_d = 1; /*0x74ae9e*/
  this->Insignificant_d = 1; /*0x74aea4*/
  this->Immune_d = 1; /*0x74aeaa*/
  this->AllowCellContent_d = 0; /*0x74aeb0*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x74aeea*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x74aef7*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3) = this; /*0x74af06*/
  }
  if ( stru_A8EB00.ObjectTypeClass[14] < stru_A8EB00.ObjectTypeClass[12] /*0x74af3d*/
    || (BYTE1(stru_A8EB00.ObjectTypeClass[13]) || !stru_A8EB00.ObjectTypeClass[12])
    && stru_A8EB00.ObjectTypeClass[15] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(stru_A8EB00.ObjectTypeClass[10] + 8))(
         &stru_A8EB00.ObjectTypeClass[10],
         stru_A8EB00.ObjectTypeClass[12] + stru_A8EB00.ObjectTypeClass[15],
         0) )
  {
    v4 = stru_A8EB00.ObjectTypeClass[14]++; /*0x74af4a*/
    *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * v4) = this; /*0x74af59*/
  }
  return &this->ObjectTypeClass; /*0x74af5e*/

}
}  // G42.18 ns repair
// 0x74B050
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::LoadFromINI(uint8_t *** a2, void *a2_2)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v6; // cl
  char v7; // al
  char v8; // al
  int Int_Overwrite; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  double v18; // rax
  unsigned int *v20; // ecx
  unsigned int *v22; // eax
  int v23; // eax
  int v24; // edx
  int Index; // eax
  int v26; // eax
  unsigned int *v27; // eax
  unsigned int *v28; // edx
  unsigned int *v29; // eax
  unsigned int *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  unsigned int *v36; // eax
  bool v37; // al
  unsigned int *TechnoType; // eax
  void *v40; // edi
  File *v41; // eax
  unsigned int *FileVXL; // eax
  double v43; // [esp-8h] [ebp-2A0h]
  double v44; // [esp-8h] [ebp-2A0h]
  char v45; // [esp-4h] [ebp-29Ch]
  unsigned int *v46; // [esp+10h] [ebp-288h]
  int v47; // [esp+10h] [ebp-288h]
  int v48; // [esp+10h] [ebp-288h]
  unsigned int *v49; // [esp+10h] [ebp-288h]
  unsigned int *v50; // [esp+10h] [ebp-288h]
  unsigned int *v51; // [esp+10h] [ebp-288h]
  int v52; // [esp+10h] [ebp-288h]
  unsigned int *v53; // [esp+10h] [ebp-288h]
  char v54; // [esp+15h] [ebp-283h]
  char v55; // [esp+16h] [ebp-282h]
  char v56; // [esp+17h] [ebp-281h]
  VocClass Destination; // [esp+18h] [ebp-280h] BYREF

  v4 = v3; /*0x74b061*/
  INIClass::ResetSection((INIClass *)a2); /*0x74b066*/
  if ( !((ObjectTypeClass *)((ObjectTypeClass *)v4))->LoadFromINI((uint8_t ***)a2) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74b08d*/
                     (int *)a2,
                     &v4->BarrelVoxel,
                     g_INI_Key_Normalized,
                     v4->Normalized);
  v6 = v4->Translucent; /*0x74b092*/
  v4->Normalized = Bool_Overwrite; /*0x74b098*/
  v7 = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aTranslucent, v6); /*0x74b0a7*/
  v45 = v4->IsTiberium; /*0x74b0b4*/
  v4->Translucent = v7; /*0x74b0bb*/
  v4->IsTiberium = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aIstiberium, v45); /*0x74b0c6*/
  v8 = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aIsmeteor, v4->IsMeteor); /*0x74b0db*/
  v43 = v4->Elasticity; /*0x74b0ed*/
  v4->IsMeteor = v8; /*0x74b0f6*/
  INIClass::ReadDouble_Overwrite((double *)a2, &v4->BarrelVoxel, g_INI_Key_Elasticity, v43); /*0x74b0fc*/
  __asm { fstp qword ptr [esi+2A0h] } /*0x74b101*/
  v4->Elasticity = _RT1; /*0x74b101*/
  INIClass::ReadDouble_Overwrite((double *)a2, &v4->BarrelVoxel, aMinangularvelo, -1.0); /*0x74b116*/
  __asm /*0x74b11b*/
  {
    fcom ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x74b126*/
  {
    __asm { fstp st } /*0x74b136*/
  }
  else
  {
    __asm /*0x74b128*/
    {
      fmul ds:dbl_7F65E8
      fstp qword ptr [esi+2A8h]
    }
    v4->MinAngularVelocity = _RT1; /*0x74b12e*/
  }
  INIClass::ReadDouble_Overwrite((double *)a2, &v4->BarrelVoxel, aMaxangularvelo, -1.0); /*0x74b147*/
  __asm /*0x74b14c*/
  {
    fcom ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x74b157*/
  {
    __asm { fstp st } /*0x74b167*/
  }
  else
  {
    __asm /*0x74b159*/
    {
      fmul ds:dbl_7F65E8
      fstp qword ptr [esi+2B0h]
    }
    v4->MaxAngularVelocity = _RT1; /*0x74b15f*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74b178*/
                    (bool *)a2,
                    &v4->BarrelVoxel,
                    aDuration,
                    v4->Duration);
  v44 = v4->MinZVel; /*0x74b18a*/
  v4->Duration = Int_Overwrite; /*0x74b193*/
  INIClass::ReadDouble_Overwrite((double *)a2, &v4->BarrelVoxel, aMinzvel, v44); /*0x74b199*/
  v15 = v4->q2C4; /*0x74b19e*/
  v16 = v4->MaxZVel; /*0x74b1a4*/
  __asm { fstp qword ptr [esi+2B8h] } /*0x74b1aa*/
  v4->MinZVel = _RT1; /*0x74b1aa*/
  INIClass::ReadDouble_Overwrite( /*0x74b1ba*/
    (double *)a2,
    &v4->BarrelVoxel,
    aMaxzvel,
    COERCE_DOUBLE((((unsigned long)(unsigned int)(v16)) | ((unsigned long)(unsigned int)(v15) << 32))));
  v18 = v4->MaxXYVel; /*0x74b1c5*/
  __asm { fstp qword ptr [esi+2C0h] } /*0x74b1cb*/
  v4->MaxZVel = _RT1; /*0x74b1cb*/
  INIClass::ReadDouble_Overwrite((double *)a2, &v4->BarrelVoxel, aMaxxyvel, v18); /*0x74b1db*/
  v20 = v4->Spawns; /*0x74b1e0*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x74b1ea*/
  v4->MaxXYVel = _RT1; /*0x74b1ea*/
  v46 = v20; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         g_INI_Key_Spawns,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v22 = (unsigned int *)(globalHelper_04BB20((char *)&Destination, (int)&stru_A8EB00.vfptr[10])); /*0x74b219*/
  }
  else
  {
    v22 = v46; /*0x74b220*/
  }
  v4->Spawns = v22; /*0x74b224*/
  v4->SpawnCount = INIClass::ReadInt_Overwrite( /*0x74b248*/
                            (bool *)a2,
                            &v4->BarrelVoxel,
                            aSpawncount,
                            v4->SpawnCount);
  v56 = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aSharebodydata, 0); /*0x74b25d*/
  v55 = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aShareturretdat, 0); /*0x74b270*/
  v54 = INIClass::ReadBool_Overwrite((int *)a2, &v4->BarrelVoxel, aSharebarreldat, 0); /*0x74b27f*/
  v23 = INIClass::ReadInt_Overwrite((bool *)a2, &v4->BarrelVoxel, aVoxelindex, v4->ShareBarrelData); /*0x74b28c*/
  v24 = v4->StartSound; /*0x74b291*/
  v4->ShareBarrelData = v23; /*0x74b297*/
  v47 = v24; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          (INIClass *)a2,
          &v4->BarrelVoxel,
          g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (Index = VocClass::FindIndex(&Destination), Index == -1) )
  {
    Index = v47; /*0x74b2cf*/
  }
  v48 = v4->StopSound; /*0x74b2e8*/
  v4->StartSound = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          (INIClass *)a2,
          &v4->BarrelVoxel,
          g_INI_Key_StopSound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v26 = VocClass::FindIndex(&Destination), v26 == -1) )
  {
    v26 = v48; /*0x74b311*/
  }
  v4->StopSound = v26; /*0x74b31f*/
  v49 = v4->BounceAnim; /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         aBounceanim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v27 = ((char *)&Destination)->FindOrCreate(); /*0x74b349*/
  }
  else
  {
    v27 = v49; /*0x74b350*/
  }
  v28 = v4->ExpireAnim; /*0x74b354*/
  v4->BounceAnim = v27; /*0x74b35a*/
  v50 = v28; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         aExpireanim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v29 = ((char *)&Destination)->FindOrCreate(); /*0x74b388*/
  }
  else
  {
    v29 = v50; /*0x74b38f*/
  }
  v51 = v4->TrailerAnim; /*0x74b3a8*/
  v4->ExpireAnim = v29; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         aTraileranim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v30 = ((char *)&Destination)->FindOrCreate(); /*0x74b3c7*/
  }
  else
  {
    v30 = v51; /*0x74b3ce*/
  }
  v4->TrailerAnim = v30; /*0x74b3d2*/
  v31 = INIClass::ReadInt_Overwrite((bool *)a2, &v4->BarrelVoxel, g_INI_Key_Damage, v4->Damage); /*0x74b3e7*/
  v32 = v4->DamageRadius; /*0x74b3ec*/
  v4->Damage = v31; /*0x74b3f2*/
  v33 = INIClass::ReadInt_Overwrite((bool *)a2, &v4->BarrelVoxel, aDamageradius, v32); /*0x74b401*/
  v34 = v4->Warhead; /*0x74b406*/
  v4->DamageRadius = v33; /*0x74b40c*/
  v52 = v34; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v35 = WarheadTypeClass::FindOrCreate((char *)&Destination); /*0x74b43a*/
  }
  else
  {
    v35 = v52; /*0x74b441*/
  }
  v53 = v4->AttachedSystem; /*0x74b45a*/
  v4->Warhead = v35; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         (INIClass *)a2,
         &v4->BarrelVoxel,
         aAttachedsystem,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v36 = (unsigned int *)(BuildingTypeClass::LoadOrGet((char *)&Destination)); /*0x74b479*/
  }
  else
  {
    v36 = v53; /*0x74b480*/
  }
  v4->AttachedSystem = v36; /*0x74b484*/
  v37 = v56 || v54 || v55; /*0x74b4a6*/
  v4->SourceShared = v37; /*0x74b4ad*/
  if ( v37 ) /*0x74b4b3*/
  {
    TechnoType = (unsigned int *)INIEntry::GetTechnoType((INIEntry *)a2, &v4->BarrelVoxel, aSharesource); /*0x74b4c1*/
    if ( !TechnoType ) /*0x74b4ca*/
    {
      v4->MainVoxel = 0; /*0x74b555*/
      v4->TurretVoxel_d = 0; /*0x74b55b*/
      return (gamemd::VoxelAnimTypeClass *)(1); /*0x74b569*/
    }
    if ( v56 ) /*0x74b4d6*/
    {
      v4->MainVoxel = TechnoType[44]; /*0x74b4de*/
      v4->TurretVoxel_d = TechnoType[45]; /*0x74b4ea*/
      return (gamemd::VoxelAnimTypeClass *)(1); /*0x74b4f8*/
    }
    if ( v55 ) /*0x74b501*/
    {
      v4->MainVoxel = TechnoType[46]; /*0x74b509*/
      v4->TurretVoxel_d = TechnoType[47]; /*0x74b515*/
      return (gamemd::VoxelAnimTypeClass *)(1); /*0x74b523*/
    }
    if ( v54 ) /*0x74b52c*/
    {
      v4->MainVoxel = TechnoType[48]; /*0x74b538*/
      v4->TurretVoxel_d = TechnoType[49]; /*0x74b544*/
      return (gamemd::VoxelAnimTypeClass *)(1); /*0x74b552*/
    }
  }
  else
  {
    _makepath((char *)&Destination.Name[5], 0, 0, &v4->ImageFile, g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct((CCFileClass *)&Destination, (char *)&Destination.Name[5]); /*0x74b598*/
    v40 = v4->MainVoxel; /*0x74b59d*/
    if ( v40 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(v4->MainVoxel); /*0x74b5a9*/
      operator delete((void *)(v40)); /*0x74b5af*/
    }
    v41 = (File *)operator new(0x1Cu); /*0x74b5b9*/
    if ( v41 ) /*0x74b5c3*/
      FileVXL = File::LoadFileVXL(v41, (int)&Destination, 0); /*0x74b5ce*/
    else
      FileVXL = 0; /*0x74b5d5*/
    v4->MainVoxel = FileVXL; /*0x74b5db*/
    Destination.Header[0] = (int)&vt_CCFileClass; /*0x74b5e1*/
    Destination.MaxFDelta = 0; /*0x74b5e9*/
    Vector::Clear((int)&Destination.MinDelay); /*0x74b5f1*/
    Destination.Header[0] = (int)&off_7E1668; /*0x74b5fa*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&Destination))->Dtor(); /*0x74b602*/
  }
  return (gamemd::VoxelAnimTypeClass *)(1); /*0x74b4f2*/
}
}
// 0x74B690
namespace gamemd {
int VoxelAnimTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x74b699*/
  LOBYTE(v3) = this->Normalized; /*0x74b69e*/
  Power::FlagProcess((Power *)a2, v3); /*0x74b6a7*/
  LOBYTE(v4) = this->Translucent; /*0x74b6ac*/
  Power::FlagProcess((Power *)a2, v4); /*0x74b6b5*/
  LOBYTE(v5) = this->SourceShared; /*0x74b6ba*/
  Power::FlagProcess((Power *)a2, v5); /*0x74b6c3*/
  Power::TimerProcess(this->VoxelIndex); /*0x74b6d1*/
  Power::TimerProcess(this->Duration); /*0x74b6df*/
  Checksummer::Add_double((Checksummer *)a2, this->Elasticity[0], this->Elasticity[1]); /*0x74b6f4*/
  Checksummer::Add_double((Checksummer *)a2, this->MinAngularVelocity[0], this->MinAngularVelocity[1]); /*0x74b709*/
  Checksummer::Add_double((Checksummer *)a2, this->MaxAngularVelocity[0], this->MaxAngularVelocity[1]); /*0x74b71e*/
  Checksummer::Add_double((Checksummer *)a2, this->MinZVel[0], this->MinZVel[1]); /*0x74b733*/
  Checksummer::Add_double((Checksummer *)a2, this->MaxZVel[0], this->MaxZVel[1]); /*0x74b748*/
  Checksummer::Add_double((Checksummer *)a2, this->MaxXYVel[0], this->MaxXYVel[1]); /*0x74b75d*/
  LOBYTE(v6) = this->IsMeteor; /*0x74b762*/
  Power::FlagProcess((Power *)a2, v6); /*0x74b76b*/
  Power::TimerProcess(this->SpawnCount); /*0x74b779*/
  Power::TimerProcess(this->StartSound); /*0x74b787*/
  Power::TimerProcess(this->StopSound); /*0x74b795*/
  Power::TimerProcess(this->Damage); /*0x74b7a3*/
  Power::TimerProcess(this->DamageRadius); /*0x74b7b1*/
  LOBYTE(v7) = this->IsTiberium; /*0x74b7b6*/
  return Power::FlagProcess((Power *)a2, v7); /*0x74b7c4*/

}
}
// 0x74BA30
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  VoxelAnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Block->ObjectTypeClass = &vt_VoxelAnimTypeClass; /*0x74ba36*/
  Block->? = &vt_VoxelAnimTypeClass; /*0x74ba3c*/
  Block->u32_8 = &vt_VoxelAnimTypeClass; /*0x74ba43*/
  Block->? = &vt_VoxelAnimTypeClass; /*0x74ba4a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)Block, 1); /*0x74ba51*/
  v6 = Block; /*0x74ba66*/
  v3 = (*(int (**)(int *, VoxelAnimTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x74ba6a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x74ba7a*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x74ba7f*/
    for ( ; /*0x74ba85*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x74ba8d*/
    }
  }
  v6 = Block; /*0x74baaf*/
  v4 = (*(int (**)(int *, VoxelAnimTypeClass **))(stru_A8EB00.ObjectTypeClass[10] + 16))( /*0x74bab3*/
         &stru_A8EB00.ObjectTypeClass[10],
         &v6);
  if ( v4 != -1 && v4 < stru_A8EB00.ObjectTypeClass[14] ) /*0x74bac3*/
  {
    --stru_A8EB00.ObjectTypeClass[14]; /*0x74bac8*/
    for ( ; /*0x74bace*/
          v4 < stru_A8EB00.ObjectTypeClass[14];
          *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * v4 - 4) = *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11]
                                                                                + 4 * v4) )
    {
      ++v4; /*0x74bad6*/
    }
  }
  if ( Block->SourceShared ) /*0x74bae8*/
  {
    Block->u32_B0 = 0; /*0x74baf4*/
    Block->?[0] = 0; /*0x74bafa*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x74bb02*/
  if ( (a2 & 1) != 0 ) /*0x74bb0c*/
    __3_YAXPAX_Z(Block); /*0x74bb0f*/
  return &Block->ObjectTypeClass; /*0x74bb19*/

}
} // namespace gamemd

// 0x74B7D0
namespace gamemd {
int VoxelAnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x74b7d6*/
    return -2147467261; /*0x74b7d8*/
  *a2 = 784035174; /*0x74b7e6*/
  a2[1] = 298978637; /*0x74b7ee*/
  a2[2] = 1610642049; /*0x74b7f7*/
  a2[3] = unk_7E979C; /*0x74b800*/
  return 0; /*0x74b7dd*/
}
} // namespace gamemd

// 0x74B810
namespace gamemd {
int VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x74b81b*/
  if ( result >= 0 ) /*0x74b822*/
  {
    if ( aP0 ) /*0x74b82a*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x74b833*/
      /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74b838) */
      /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74b83e) */
      /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74b845) */
      /* X11: vtable install elided (implicit via VoxelAnimTypeClass virtuals 0x74b84c) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->Warhead); /*0x74b85f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->BounceAnim); /*0x74b870*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_2E8); /*0x74b881*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_2E8); /*0x74b892*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_2E8); /*0x74b8a3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_2FC); /*0x74b8b4*/
    VoxelAnimType::LoadAnim((char *)aP0); /*0x74b8bb*/
    return 0; /*0x74b8c0*/
  }
  return result; /*0x74b8c2*/
}
} // namespace gamemd

// 0x74B8D0
namespace gamemd {
int VoxelAnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x74b8df*/
  if ( result >= 0 ) /*0x74b8e6*/
    return 0; /*0x74b8e8*/
  return result; /*0x74b8ea*/
}
} // namespace gamemd

// 0x74B8F0
namespace gamemd {
long long VoxelAnimTypeClass::GetData(ObjectTypeClass * aP1, int a3)
{
  int64_t result; // rax

  result = aP1; /*0x74b8f0*/
  if ( this->Warhead == (WarheadTypeClass *)aP1 ) /*0x74b8ff*/
    this->Warhead = 0; /*0x74b901*/
  if ( this->BounceAnim == (AnimTypeClass *)aP1 ) /*0x74b90d*/
    this->BounceAnim = 0; /*0x74b90f*/
  if ( this->ExpireAnim == (AnimTypeClass *)aP1 ) /*0x74b91b*/
    this->ExpireAnim = 0; /*0x74b91d*/
  if ( this->TrailerAnim == (AnimTypeClass *)aP1 ) /*0x74b929*/
    this->TrailerAnim = 0; /*0x74b92b*/
  if ( this->Spawns == (VoxelAnimTypeClass *)aP1 ) /*0x74b937*/
    this->Spawns = 0; /*0x74b939*/
  if ( this->AttachedSystem == (ParticleSystemTypeClass *)aP1 ) /*0x74b948*/
    this->AttachedSystem = 0; /*0x74b94a*/
  return result; /*0x74b947*/
}
} // namespace gamemd

// 0x74B9F0
namespace gamemd {
int VoxelAnimTypeClass::GetTypeIdentifier()
{
  return 42; /*0x74b9f5*/
}
} // namespace gamemd

// 0x74BA00
namespace gamemd {
int VoxelAnimTypeClass::GetObjectSize()
{
  return 776; /*0x74ba05*/
}
} // namespace gamemd

// 0x74BA10
namespace gamemd {
char VoxelAnimTypeClass::Stub(int a1, int a2)
{
  return 0; /*0x74ba12*/
}
} // namespace gamemd

// 0x74BA20
namespace gamemd {
int VoxelAnimTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x74ba22*/
}
} // namespace gamemd
