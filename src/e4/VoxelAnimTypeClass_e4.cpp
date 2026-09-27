// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x74AD80
namespace gamemd {
unsigned int * VoxelAnimTypeClass::Constructor(ObjectClass * aP1)
{
  VoxelAnimTypeClass * v3;
  int v4; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x74ad89*/
  *(&this->q0483) = -1; /*0x74ad93*/
  *(&this->q0484) = -1; /*0x74ad99*/
  this->Normalized = 0; /*0x74ad9f*/
  this->Translucent = 0; /*0x74ada8*/
  this->SourceShared = 0; /*0x74adae*/
  *(&this->q0408) = -1610612736; /*0x74adb4*/
  *(&this->q0440) = 0; /*0x74adbe*/
  *(&this->q0442) = 484854086; /*0x74adc4*/
  *(&this->q0444) = 0; /*0x74adce*/
  *(&this->q0446) = 0; /*0x74add4*/
  *(&this->q0448) = 0; /*0x74adda*/
  *(&this->q0406) = 0; /*0x74ade1*/
  *(&this->q0407) = 30; /*0x74ade7*/
  *(&this->q0409) = 1072273817; /*0x74adf1*/
  *(&this->q0441) = 0; /*0x74adfb*/
  *(&this->q0443) = 1069962989; /*0x74ae01*/
  *(&this->q0445) = 1074528256; /*0x74ae0b*/
  *(&this->q0447) = 1075052544; /*0x74ae15*/
  *(&this->q0449) = 1076756480; /*0x74ae1f*/
  this->IsMeteor = 0; /*0x74ae29*/
  *(&this->q0481) = 0; /*0x74ae2f*/
  *(&this->q0482) = 0; /*0x74ae35*/
  *(&this->q0485) = 0; /*0x74ae3b*/
  *(&this->q0486) = 0; /*0x74ae41*/
  *(&this->q0487) = 0; /*0x74ae47*/
  *(&this->q0488) = 0; /*0x74ae4d*/
  *(&this->q0489) = 0; /*0x74ae53*/
  *(&this->q04C0) = 0; /*0x74ae59*/
  *(&this->q04C1) = 0; /*0x74ae5f*/
  this->IsTiberium = 0; /*0x74ae65*/
  AbstractClass::GenerateUniqueID((int)&this->vtable2); /*0x74ae85*/
  this->q231 = 0; /*0x74ae8c*/
  this->q234 = 1; /*0x74ae92*/
  this->q22F = 1; /*0x74ae98*/
  this->q230 = 1; /*0x74ae9e*/
  this->q232 = 1; /*0x74aea4*/
  this->q233 = 1; /*0x74aeaa*/
  this->q235 = 0; /*0x74aeb0*/
  if ( g_AnimManager < g_AnimTypePool /*0x74aeea*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v3 = (gamemd::VoxelAnimTypeClass *)(g_AnimManager++);
    *((unsigned int *)g_AnimPoolCount + v3) = this; /*0x74af06*/
  }
  if ( g_MultiplayerPool < dword_A8EB30 /*0x74af3d*/
    || (byte_A8EB35 || !dword_A8EB30)
    && dword_A8EB3C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(VoxelAnimTypeClass_Array + 8))(
         &VoxelAnimTypeClass_Array,
         dword_A8EB30 + dword_A8EB3C,
         0) )
  {
    v4 = g_MultiplayerPool++; /*0x74af4a*/
    *((unsigned int *, unsigned int a1, unsigned int a2)dword_A8EB2C + v4) = this; /*0x74af59*/
  }
  return (unsigned int *)(this);
}
}
// 0x74B050
namespace gamemd {
AbstractTypeClass * * VoxelAnimTypeClass::LoadFromINI(unsigned char *** aP1, void * a1, void * a2)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  int Int_Overwrite; // eax
  unsigned int v9; // eax
  void * v10;
  void * v11;
  void * v12;
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int Index; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // eax
  bool v28; // al
  unsigned int *v29; // eax
  void *v31; // edi
  unsigned int *v32; // eax
  unsigned int *File; // eax
  double v34; // [esp-8h] [ebp-2A0h]
  double v35; // [esp-8h] [ebp-2A0h]
  char v36; // [esp-4h] [ebp-29Ch]
  void * v37;
  int v38; // [esp+10h] [ebp-288h]
  int v39; // [esp+10h] [ebp-288h]
  int v40; // [esp+10h] [ebp-288h]
  int v41; // [esp+10h] [ebp-288h]
  int v42; // [esp+10h] [ebp-288h]
  int v43; // [esp+10h] [ebp-288h]
  int v44; // [esp+10h] [ebp-288h]
  char v45; // [esp+15h] [ebp-283h]
  char v46; // [esp+16h] [ebp-282h]
  char v47; // [esp+17h] [ebp-281h]
  char Destination[88]; // [esp+18h] [ebp-280h] BYREF
  char v49[12]; // [esp+70h] [ebp-228h] BYREF
  int v50; // [esp+7Ch] [ebp-21Ch]
  char Buffer[512]; // [esp+98h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x74b066*/
  if ( !ObjectTypeClass::LoadFromINI((char *)a1, aP1) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Normalized, *(unsigned char *)(a1 + 660)); /*0x74b08d*/
  v5 = *(unsigned char *)(a1 + 661); /*0x74b092*/
  *(unsigned char *)(a1 + 660) = Bool_Overwrite; /*0x74b098*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, aTranslucent, v5); /*0x74b0a7*/
  v36 = *(unsigned char *)(a1 + 768); /*0x74b0b4*/
  *(unsigned char *)(a1 + 661) = v6; /*0x74b0bb*/
  *(unsigned char *)(a1 + 768) = INIClass::ReadBool_Overwrite(a1 + 36, aIstiberium, v36); /*0x74b0c6*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, aIsmeteor, *(unsigned char *)(a1 + 720)); /*0x74b0db*/
  v34 = *(double *)(a1 + 672); /*0x74b0ed*/
  *(unsigned char *)(a1 + 720) = v7; /*0x74b0f6*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, v34); /*0x74b0fc*/
  *(double *)(a1 + 672) = a2; /*0x74b101*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinangularvelo, -1.0); /*0x74b116*/
  if ( a2 != 0.0 ) /*0x74b126*/
  {
    a2 = a2 * 0.01745277777777778; /*0x74b128*/
    *(double *, unsigned int a1, unsigned int a2)(a1 + 680) = a2; /*0x74b12e*/
  }
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxangularvelo, -1.0); /*0x74b147*/
  if ( a2 != 0.0 ) /*0x74b157*/
  {
    a2 = a2 * 0.01745277777777778; /*0x74b159*/
    *(double *, unsigned int a1, unsigned int a2)(a1 + 688) = a2; /*0x74b15f*/
  }
  Int_Overwrite = (double)(INIClass::ReadInt_Overwrite(a1 + 36, aDuration, *(unsigned int *)(a1 + 668)));
  v35 = (int)(*(double *)(a1 + 696));
  *(unsigned int *)(a1 + 668) = Int_Overwrite; /*0x74b193*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinzvel, v35); /*0x74b199*/
  v9 = *(unsigned int *)(a1 + 708); /*0x74b19e*/
  v10 = *(unsigned int *)(a1 + 704); /*0x74b1a4*/
  *(double *)(a1 + 696) = a2; /*0x74b1aa*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxzvel, COERCE_DOUBLE(IDA___PAIR64__(v9, v10))); /*0x74b1ba*/
  v11 = *(double *)(a1 + 712); /*0x74b1c5*/
  *(double *)(a1 + 704) = a2; /*0x74b1cb*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxxyvel, v11); /*0x74b1db*/
  v12 = *(unsigned int *)(a1 + 724); /*0x74b1e0*/
  *(double *)(a1 + 712) = a2; /*0x74b1ea*/
  v37 = v12; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)g_INI_Key_Spawns,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = globalHelper_04BB20(Destination, unsigned int a1); /*0x74b219*/
  }
  else
  {
    v13 = v37; /*0x74b220*/
  }
  *(unsigned int *)(a1 + 724) = v13; /*0x74b224*/
  *(unsigned int *)(a1 + 728) = INIClass::ReadInt_Overwrite(a1 + 36, aSpawncount, *(unsigned int *)(a1 + 728)); /*0x74b248*/
  v47 = INIClass::ReadBool_Overwrite(a1 + 36, aSharebodydata, 0); /*0x74b25d*/
  v46 = INIClass::ReadBool_Overwrite(a1 + 36, aShareturretdat, 0); /*0x74b270*/
  v45 = INIClass::ReadBool_Overwrite(a1 + 36, aSharebarreldat, 0); /*0x74b27f*/
  v14 = INIClass::ReadInt_Overwrite(a1 + 36, aVoxelindex, *(unsigned int *)(a1 + 664)); /*0x74b28c*/
  v15 = *(unsigned int *)(a1 + 732); /*0x74b291*/
  *(unsigned int *)(a1 + 664) = v14; /*0x74b297*/
  v38 = v15; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          aP1,
          (uint8_t *)(a1 + 36),
          (uint8_t *)g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          Destination,
          128)
    || (Index = VocClass::FindIndex(Destination), Index == -1) )
  {
    Index = v38; /*0x74b2cf*/
  }
  v39 = *(unsigned int *)(a1 + 736); /*0x74b2e8*/
  *(unsigned int *)(a1 + 732) = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          aP1,
          (uint8_t *)(a1 + 36),
          (uint8_t *)g_INI_Key_StopSound,
          &g_INI_DefaultBuffer,
          Destination,
          128)
    || (v17 = VocClass::FindIndex(Destination), v17 == -1) )
  {
    v17 = v39; /*0x74b311*/
  }
  *(unsigned int *)(a1 + 736) = v17; /*0x74b31f*/
  v40 = *(unsigned int *)(a1 + 740); /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aBounceanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v18 = AnimTypeClass::FindOrCreate(Destination); /*0x74b349*/
  }
  else
  {
    v18 = v40; /*0x74b350*/
  }
  v19 = *(unsigned int *)(a1 + 744); /*0x74b354*/
  *(unsigned int *)(a1 + 740) = v18; /*0x74b35a*/
  v41 = v19; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aExpireanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v20 = AnimTypeClass::FindOrCreate(Destination); /*0x74b388*/
  }
  else
  {
    v20 = v41; /*0x74b38f*/
  }
  v42 = *(unsigned int *)(a1 + 748); /*0x74b3a8*/
  *(unsigned int *)(a1 + 744) = v20; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aTraileranim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v21 = AnimTypeClass::FindOrCreate(Destination); /*0x74b3c7*/
  }
  else
  {
    v21 = v42; /*0x74b3ce*/
  }
  *(unsigned int *)(a1 + 748) = v21; /*0x74b3d2*/
  v22 = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Damage, *(unsigned int *)(a1 + 752)); /*0x74b3e7*/
  v23 = *(unsigned int *)(a1 + 756); /*0x74b3ec*/
  *(unsigned int *)(a1 + 752) = v22; /*0x74b3f2*/
  v24 = INIClass::ReadInt_Overwrite(a1 + 36, aDamageradius, v23); /*0x74b401*/
  v25 = *(unsigned int *)(a1 + 760); /*0x74b406*/
  *(unsigned int *)(a1 + 756) = v24; /*0x74b40c*/
  v43 = v25; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v26 = WarheadTypeClass::FindOrCreate(Destination); /*0x74b43a*/
  }
  else
  {
    v26 = v43; /*0x74b441*/
  }
  v44 = *(unsigned int *)(a1 + 764); /*0x74b45a*/
  *(unsigned int *)(a1 + 760) = v26; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aAttachedsystem,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v27 = BuildingTypeClass::LoadOrGet(Destination); /*0x74b479*/
  }
  else
  {
    v27 = v44; /*0x74b480*/
  }
  *(unsigned int *)(a1 + 764) = v27; /*0x74b484*/
  v28 = v47 || v45 || v46; /*0x74b4a6*/
  *(unsigned char *)(a1 + 662) = v28; /*0x74b4ad*/
  if ( v28 ) /*0x74b4b3*/
  {
    v29 = (unsigned int *)INIEntry::GetTechnoType(a1 + 36, aSharesource); /*0x74b4c1*/
    if ( !v29 ) /*0x74b4ca*/
    {
      *(unsigned int *)(a1 + 176) = 0; /*0x74b555*/
      *(unsigned int *)(a1 + 180) = 0; /*0x74b55b*/
      return 1; /*0x74b569*/
    }
    if ( v47 ) /*0x74b4d6*/
    {
      *(unsigned int *)(a1 + 176) = v29[44]; /*0x74b4de*/
      *(unsigned int *)(a1 + 180) = v29[45]; /*0x74b4ea*/
      return 1; /*0x74b4f8*/
    }
    if ( v46 ) /*0x74b501*/
    {
      *(unsigned int *)(a1 + 176) = v29[46]; /*0x74b509*/
      *(unsigned int *)(a1 + 180) = v29[47]; /*0x74b515*/
      return 1; /*0x74b523*/
    }
    if ( v45 ) /*0x74b52c*/
    {
      *(unsigned int *)(a1 + 176) = v29[48]; /*0x74b538*/
      *(unsigned int *)(a1 + 180) = v29[49]; /*0x74b544*/
      return 1; /*0x74b552*/
    }
  }
  else
  {
    _makepath(Buffer, 0, 0, (const char *)(a1 + 504), g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct(Destination, Buffer); /*0x74b598*/
    v31 = *(void **)(a1 + 176); /*0x74b59d*/
    if ( v31 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(*(unsigned int *)(a1 + 176)); /*0x74b5a9*/
      RA2_OPDEL(v31); /*0x74b5af*/
    }
    v32 = operator new(0x1Cu); /*0x74b5b9*/
    if ( v32 ) /*0x74b5c3*/
      File = File::LoadFileVXL(v32, (int)Destination, 0); /*0x74b5ce*/
    else
      File = 0; /*0x74b5d5*/
    *(unsigned int *)(a1 + 176) = File; /*0x74b5db*/
    v50 = 0; /*0x74b5e9*/
    Vector::Clear((int)v49); /*0x74b5f1*/
    *(unsigned int *)Destination = &off_7E1668; /*0x74b5fa*/
    BufferIOFileClass::Dtor(Destination); /*0x74b602*/
  }
  return 1; /*0x74b4f2*/
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

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x74b699*/
  IDA_LOBYTE(v3) = this->Normalized; /*0x74b69e*/
  Power::FlagProcess(a2, v3); /*0x74b6a7*/
  IDA_LOBYTE(v4) = this->Translucent; /*0x74b6ac*/
  Power::FlagProcess(a2, v4); /*0x74b6b5*/
  IDA_LOBYTE(v5) = this->SourceShared; /*0x74b6ba*/
  Power::FlagProcess(a2, v5); /*0x74b6c3*/
  Power::TimerProcess(this->VoxelIndex); /*0x74b6d1*/
  Power::TimerProcess(this->Duration); /*0x74b6df*/
  Checksummer::Add_double((unsigned int *)a2, this->Elasticity, this->q2A4); /*0x74b6f4*/
  Checksummer::Add_double((unsigned int *)a2, this->MinAngularVelocity, this->u32_2AC); /*0x74b709*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxAngularVelocity, this->q2B4); /*0x74b71e*/
  Checksummer::Add_double((unsigned int *)a2, this->MinZVel, this->u32_2BC); /*0x74b733*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxZVel, this->q2C4); /*0x74b748*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxXYVel, this->q2CC); /*0x74b75d*/
  IDA_LOBYTE(v6) = this->IsMeteor; /*0x74b762*/
  Power::FlagProcess(a2, v6); /*0x74b76b*/
  Power::TimerProcess(this->SpawnCount); /*0x74b779*/
  Power::TimerProcess(this->StartSound); /*0x74b787*/
  Power::TimerProcess(this->StopSound); /*0x74b795*/
  Power::TimerProcess(this->Damage); /*0x74b7a3*/
  Power::TimerProcess(this->DamageRadius); /*0x74b7b1*/
  IDA_LOBYTE(v7) = this->IsTiberium; /*0x74b7b6*/
  return Power::FlagProcess(a2, v7); /*0x74b7c4*/
}
}
// 0x74BA30
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x74ba51*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x74ba6a*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x74ba85*/
  {
    do /*0x74ba9d*/
    {
      ++v3; /*0x74ba8d*/
      *((unsigned int *)g_AnimPoolCount + v3 - 1) = *((unsigned int *)g_AnimPoolCount + v3); /*0x74ba91*/
    }
    while ( v3 < g_AnimManager ); /*0x74ba9d*/
  }
  v4 = (*(int (__thiscall **)(int *, void ***))(VoxelAnimTypeClass_Array + 16))(&VoxelAnimTypeClass_Array, &this); /*0x74bab3*/
  if ( v4 != -1 && v4 < g_MultiplayerPool && v4 < --g_MultiplayerPool ) /*0x74bace*/
  {
    do /*0x74bae6*/
    {
      ++v4; /*0x74bad6*/
      *((unsigned int *)dword_A8EB2C + v4 - 1) = *((unsigned int *)dword_A8EB2C + v4); /*0x74bada*/
    }
    while ( v4 < g_MultiplayerPool ); /*0x74bae6*/
  }
  if ( this->SourceShared ) /*0x74bae8*/
  {
    *(&this->uniqueId4) = 0; /*0x74baf4*/
    *(&this->uniqueId5) = 0; /*0x74bafa*/
  }
  ObjectTypeClass::Destruct(); /*0x74bb02*/
  if ( (a2 & 1) != 0 ) /*0x74bb0c*/
    RA2_OPDEL(); /*0x74bb0f*/
  return this; /*0x74bb19*/
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
  a2[3] = -1252326136; /*0x74b800*/
  return 0; /*0x74b7dd*/
}
} // namespace gamemd

// 0x74B810
namespace gamemd {
int VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((int)aP0, aP1); /*0x74b81b*/
  if ( result >= 0 ) /*0x74b822*/
  {
    if ( aP0 ) /*0x74b82a*/
    {
      ObjectTypeClass::Construct(aP0, (int)&aP1); /*0x74b833*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 190); /*0x74b85f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 185); /*0x74b870*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 186); /*0x74b881*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 187); /*0x74b892*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 181); /*0x74b8a3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 191); /*0x74b8b4*/
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

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x74b8df*/
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

  aP1 = aP1; /*0x74b8fb*/
  if ( *(&this->q04C0) == aP1 ) /*0x74b8ff*/
    *(&this->q04C0) = 0; /*0x74b901*/
  if ( *(&this->q0485) == aP1 ) /*0x74b90d*/
    *(&this->q0485) = 0; /*0x74b90f*/
  if ( *(&this->q0486) == aP1 ) /*0x74b91b*/
    *(&this->q0486) = 0; /*0x74b91d*/
  if ( *(&this->q0487) == aP1 ) /*0x74b929*/
    *(&this->q0487) = 0; /*0x74b92b*/
  if ( *(&this->q0481) == aP1 ) /*0x74b937*/
    *(&this->q0481) = 0; /*0x74b939*/
  if ( *(&this->q04C1) == aP1 ) /*0x74b948*/
    *(&this->q04C1) = 0; /*0x74b94a*/
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
