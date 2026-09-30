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
#include "e4/classes/VoxelAnimClass_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x74AD80
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::Constructor(char* a1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x74ad89*/
    *((unsigned int *)this + 732) = -1;
    *((unsigned int *)this + 736) = -1;
    *((unsigned char *)this + 660) = 0;
    *((unsigned char *)this + 661) = 0;
    *((unsigned char *)this + 662) = 0;
  this-((unsigned int *)(>Elasticity))[0] = -1610612736; /*0x74adb4*/
  this-((unsigned int *)(>MinAngularVelocity))[0] = 0; /*0x74adbe*/
  this-((unsigned int *)(>MaxAngularVelocity))[0] = 484854086; /*0x74adc4*/
  this-((unsigned int *)(>MinZVel))[0] = 0; /*0x74adce*/
  this-((unsigned int *)(>MaxZVel))[0] = 0; /*0x74add4*/
  this-((unsigned int *)(>MaxXYVel))[0] = 0; /*0x74adda*/
    *((unsigned int *)this + 664) = 0;
    *((unsigned int *)this + 668) = 30;
  this-((unsigned int *)(>Elasticity))[1] = 1072273817; /*0x74adf1*/
  this-((unsigned int *)(>MinAngularVelocity))[1] = 0; /*0x74adfb*/
  this-((unsigned int *)(>MaxAngularVelocity))[1] = 1069962989; /*0x74ae01*/
  this-((unsigned int *)(>MinZVel))[1] = 1074528256; /*0x74ae0b*/
  this-((unsigned int *)(>MaxZVel))[1] = 1075052544; /*0x74ae15*/
  this-((unsigned int *)(>MaxXYVel))[1] = 1076756480; /*0x74ae1f*/
    *((unsigned char *)this + 720) = 0;
    *((unsigned int *)this + 724) = 0;
    *((unsigned int *)this + 728) = 0;
    *((unsigned int *)this + 740) = 0;
    *((unsigned int *)this + 744) = 0;
    *((unsigned int *)this + 748) = 0;
    *((unsigned int *)this + 752) = 0;
    *((unsigned int *)this + 756) = 0;
    *((unsigned int *)this + 760) = 0;
    *((unsigned int *)this + 764) = 0;
    *((unsigned char *)this + 768) = 0;
    *this = &VoxelAnimTypeClass::`vftable';
    *((unsigned int *)this + 4) = &VoxelAnimTypeClass::`vftable';
    *((unsigned int *)this + 8) = &VoxelAnimTypeClass::`vftable';
    *((unsigned int *)this + 12) = &VoxelAnimTypeClass::`vftable';
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable2); /*0x74ae85*/
    *((unsigned char *)this + 561) = 0;
    *((unsigned char *)this + 564) = 1;
    *((unsigned char *)this + 559) = 1;
    *((unsigned char *)this + 560) = 1;
    *((unsigned char *)this + 562) = 1;
    *((unsigned char *)this + 563) = 1;
    *((unsigned char *)this + 565) = 0;
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x74aeea*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x74aef7*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3) = this; /*0x74af06*/
  }
  if ( stru_A8EB00.ObjectTypeClass[14] < stru_A8EB00.ObjectTypeClass[12] /*0x74af3d*/
    || (IDA_BYTE1(stru_A8EB00.ObjectTypeClass[13]) || !stru_A8EB00.ObjectTypeClass[12])
    && stru_A8EB00.ObjectTypeClass[15] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(stru_A8EB00.ObjectTypeClass[10] + 8))(
         &stru_A8EB00.ObjectTypeClass[10],
         stru_A8EB00.ObjectTypeClass[12] + stru_A8EB00.ObjectTypeClass[15],
         0) )
  {
    v4 = stru_A8EB00.ObjectTypeClass[14]++; /*0x74af4a*/
    *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * v4) = this; /*0x74af59*/
  }
    return this;
}
}
// 0x74B050
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::LoadFromINI(char* a1)
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
  INIClass::ResetSection(); /*0x74b066*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (uint8_t ***)this) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74b08d*/
                     (int *)this,
                     (uint8_t *)(v4 + 36),
                     g_INI_Key_Normalized,
                     *(unsigned char *)(v4 + 660));
  v6 = *(unsigned char *)(v4 + 661); /*0x74b092*/
  *(unsigned char *)(v4 + 660) = Bool_Overwrite; /*0x74b098*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aTranslucent, v6); /*0x74b0a7*/
  v45 = *(unsigned char *)(v4 + 768); /*0x74b0b4*/
  *(unsigned char *)(v4 + 661) = v7; /*0x74b0bb*/
  *(unsigned char *)(v4 + 768) = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aIstiberium, v45); /*0x74b0c6*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aIsmeteor, *(unsigned char *)(v4 + 720)); /*0x74b0db*/
  v43 = *(double *)(v4 + 672); /*0x74b0ed*/
  *(unsigned char *)(v4 + 720) = v8; /*0x74b0f6*/
  INIClass::ReadDouble_Overwrite((uint8_t *)(v4 + 36), g_INI_Key_Elasticity, v43); /*0x74b0fc*/
  __asm { fstp qword ptr [esi+2A0h] } /*0x74b101*/
  *(double *)(v4 + 672) = _RT1; /*0x74b101*/
  INIClass::ReadDouble_Overwrite((uint8_t *)(v4 + 36), aMinangularvelo, -1.0); /*0x74b116*/
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
    *(double *)(v4 + 680) = _RT1; /*0x74b12e*/
  }
  INIClass::ReadDouble_Overwrite((uint8_t *)(v4 + 36), aMaxangularvelo, -1.0); /*0x74b147*/
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
    *(double *)(v4 + 688) = _RT1; /*0x74b15f*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74b178*/
                    (bool *)this,
                    (uint8_t *)(v4 + 36),
                    aDuration,
                    *(unsigned int *)(v4 + 668));
  v44 = *(double *)(v4 + 696); /*0x74b18a*/
  *(unsigned int *)(v4 + 668) = Int_Overwrite; /*0x74b193*/
  INIClass::ReadDouble_Overwrite((uint8_t *)(v4 + 36), aMinzvel, v44); /*0x74b199*/
  v15 = *(unsigned int *)(v4 + 708); /*0x74b19e*/
  v16 = *(unsigned int *)(v4 + 704); /*0x74b1a4*/
  __asm { fstp qword ptr [esi+2B8h] } /*0x74b1aa*/
  *(double *)(v4 + 696) = _RT1; /*0x74b1aa*/
  INIClass::ReadDouble_Overwrite( /*0x74b1ba*/
    (double *)this,
    (uint8_t *)(v4 + 36),
    aMaxzvel,
    COERCE_DOUBLE(IDA___PAIR64__(v15, v16)));
  v18 = *(double *)(v4 + 712); /*0x74b1c5*/
  __asm { fstp qword ptr [esi+2C0h] } /*0x74b1cb*/
  *(double *)(v4 + 704) = _RT1; /*0x74b1cb*/
  INIClass::ReadDouble_Overwrite((uint8_t *)(v4 + 36), aMaxxyvel, v18); /*0x74b1db*/
  v20 = *(unsigned int **)(v4 + 724); /*0x74b1e0*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x74b1ea*/
  *(double *)(v4 + 712) = _RT1; /*0x74b1ea*/
  v46 = v20; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         g_INI_Key_Spawns,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v22 = (unsigned int *)(globalHelper_04BB20((char *)&Destination, (int)&stru_A8EB00.ObjectTypeClass[10]));
  }
  else
  {
    v22 = (unsigned int)(v46);
  }
  *(unsigned int *)(v4 + 724) = v22; /*0x74b224*/
  *(unsigned int *)(v4 + 728) = INIClass::ReadInt_Overwrite( /*0x74b248*/
                            (bool *)this,
                            (uint8_t *)(v4 + 36),
                            aSpawncount,
                            *(unsigned int *)(v4 + 728));
  v56 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aSharebodydata, 0); /*0x74b25d*/
  v55 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aShareturretdat, 0); /*0x74b270*/
  v54 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aSharebarreldat, 0); /*0x74b27f*/
  v23 = INIClass::ReadInt_Overwrite((bool *)this, (uint8_t *)(v4 + 36), aVoxelindex, *(unsigned int *)(v4 + 664)); /*0x74b28c*/
  v24 = *(unsigned int *)(v4 + 732); /*0x74b291*/
  *(unsigned int *)(v4 + 664) = v23; /*0x74b297*/
  v47 = v24; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          (INIClass *)this,
          (uint8_t *)(v4 + 36),
          g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (Index = VocClass::FindIndex(&Destination), Index == -1) )
  {
    Index = v47; /*0x74b2cf*/
  }
  v48 = *(unsigned int *)(v4 + 736); /*0x74b2e8*/
  *(unsigned int *)(v4 + 732) = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          (INIClass *)this,
          (uint8_t *)(v4 + 36),
          g_INI_Key_StopSound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v26 = VocClass::FindIndex(&Destination), v26 == -1) )
  {
    v26 = v48; /*0x74b311*/
  }
  *(unsigned int *)(v4 + 736) = v26; /*0x74b31f*/
  v49 = *(unsigned int **)(v4 + 740); /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         aBounceanim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v27 = AnimTypeClass::FindOrCreate((char *)&Destination); /*0x74b349*/
  }
  else
  {
    v27 = v49; /*0x74b350*/
  }
  v28 = *(unsigned int **)(v4 + 744); /*0x74b354*/
  *(unsigned int *)(v4 + 740) = v27; /*0x74b35a*/
  v50 = v28; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         aExpireanim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v29 = AnimTypeClass::FindOrCreate((char *)&Destination); /*0x74b388*/
  }
  else
  {
    v29 = v50; /*0x74b38f*/
  }
  v51 = *(unsigned int **)(v4 + 748); /*0x74b3a8*/
  *(unsigned int *)(v4 + 744) = v29; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         aTraileranim,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v30 = AnimTypeClass::FindOrCreate((char *)&Destination); /*0x74b3c7*/
  }
  else
  {
    v30 = (unsigned int)(v51);
  }
  *(unsigned int *)(v4 + 748) = v30; /*0x74b3d2*/
  v31 = INIClass::ReadInt_Overwrite((bool *)this, (uint8_t *)(v4 + 36), g_INI_Key_Damage, *(unsigned int *)(v4 + 752)); /*0x74b3e7*/
  v32 = *(unsigned int *)(v4 + 756); /*0x74b3ec*/
  *(unsigned int *)(v4 + 752) = v31; /*0x74b3f2*/
  v33 = INIClass::ReadInt_Overwrite((bool *)this, (uint8_t *)(v4 + 36), aDamageradius, v32); /*0x74b401*/
  v34 = *(unsigned int *)(v4 + 760); /*0x74b406*/
  *(unsigned int *)(v4 + 756) = v33; /*0x74b40c*/
  v52 = v34; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
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
  v53 = *(unsigned int **)(v4 + 764); /*0x74b45a*/
  *(unsigned int *)(v4 + 760) = v35; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         aAttachedsystem,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    v36 = BuildingTypeClass::LoadOrGet((char *)&Destination); /*0x74b479*/
  }
  else
  {
    v36 = v53; /*0x74b480*/
  }
  *(unsigned int *)(v4 + 764) = v36; /*0x74b484*/
  v37 = v56 || v54 || v55; /*0x74b4a6*/
  *(unsigned char *)(v4 + 662) = v37; /*0x74b4ad*/
  if ( v37 ) /*0x74b4b3*/
  {
    TechnoType = (unsigned int *)INIEntry::GetTechnoType((INIEntry *)this, (uint8_t *)(v4 + 36), aSharesource); /*0x74b4c1*/
    if ( !TechnoType ) /*0x74b4ca*/
    {
      *(unsigned int *)(v4 + 176) = 0; /*0x74b555*/
      *(unsigned int *)(v4 + 180) = 0; /*0x74b55b*/
      return 1; /*0x74b569*/
    }
    if ( v56 ) /*0x74b4d6*/
    {
      *(unsigned int *)(v4 + 176) = TechnoType[44]; /*0x74b4de*/
      *(unsigned int *)(v4 + 180) = TechnoType[45]; /*0x74b4ea*/
      return 1; /*0x74b4f8*/
    }
    if ( v55 ) /*0x74b501*/
    {
      *(unsigned int *)(v4 + 176) = TechnoType[46]; /*0x74b509*/
      *(unsigned int *)(v4 + 180) = TechnoType[47]; /*0x74b515*/
      return 1; /*0x74b523*/
    }
    if ( v54 ) /*0x74b52c*/
    {
      *(unsigned int *)(v4 + 176) = TechnoType[48]; /*0x74b538*/
      *(unsigned int *)(v4 + 180) = TechnoType[49]; /*0x74b544*/
      return 1; /*0x74b552*/
    }
  }
  else
  {
    _makepath((char *)&Destination.Name[5], 0, 0, (const char *)(v4 + 504), g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct((CCFileClass *)&Destination, (char *)&Destination.Name[5]); /*0x74b598*/
    v40 = *(void **)(v4 + 176); /*0x74b59d*/
    if ( v40 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(*(WaveClass **)(v4 + 176)); /*0x74b5a9*/
      RA2_OPDEL(v40); /*0x74b5af*/
    }
    v41 = (File *)RA2_OPNEW(0x1Cu); /*0x74b5b9*/
    if ( v41 ) /*0x74b5c3*/
      FileVXL = File::LoadFileVXL(v41, (int)&Destination, 0); /*0x74b5ce*/
    else
      FileVXL = 0; /*0x74b5d5*/
    *(unsigned int *)(v4 + 176) = FileVXL; /*0x74b5db*/
    Destination.Header[0] = (int)&CCFileClass_vftable; /*0x74b5e1*/
    Destination.MaxFDelta = 0; /*0x74b5e9*/
    Vector::Clear((int)&Destination.MinDelay); /*0x74b5f1*/
    Destination.Header[0] = (int)&off_7E1668; /*0x74b5fa*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&Destination); /*0x74b602*/
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

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x74b699*/
    LOBYTE(v3) = *((unsigned char *)this + 2640);
  Power::FlagProcess((Power *)a2, v3); /*0x74b6a7*/
    LOBYTE(v4) = *((unsigned char *)this + 2644);
  Power::FlagProcess((Power *)a2, v4); /*0x74b6b5*/
    LOBYTE(v5) = *((unsigned char *)this + 2648);
  Power::FlagProcess((Power *)a2, v5); /*0x74b6c3*/
    Power::TimerProcess(*((unsigned int *)this + 2656));
    Power::TimerProcess(*((unsigned int *)this + 2672));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2688), *((unsigned int *)this + 2704));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2720), *((unsigned int *)this + 2736));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2752), *((unsigned int *)this + 2768));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2784), *((unsigned int *)this + 2800));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2816), *((unsigned int *)this + 2832));
    Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 2848), *((unsigned int *)this + 2864));
    LOBYTE(v6) = *((unsigned char *)this + 2880);
  Power::FlagProcess((Power *)a2, v6); /*0x74b76b*/
    Power::TimerProcess(*((unsigned int *)this + 2912));
    Power::TimerProcess(*((unsigned int *)this + 2928));
    Power::TimerProcess(*((unsigned int *)this + 2944));
    Power::TimerProcess(*((unsigned int *)this + 3008));
    Power::TimerProcess(*((unsigned int *)this + 3024));
    LOBYTE(v7) = *((unsigned char *)this + 3072);
// 0x4a1ca0
  return Power::FlagProcess((Power *)a2, v7); /*0x74b7c4*/
}
}
// 0x74BA30
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax
  VoxelAnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

    *Block = &VoxelAnimTypeClass::`vftable';
    *(Block + 1) = &VoxelAnimTypeClass::`vftable';
    *(Block + 2) = &VoxelAnimTypeClass::`vftable';
    *(Block + 3) = &vt_VoxelAnimTypeClass;
  AbstractClass::AnnounceExpiredPointer(1); /*0x74ba51*/
  v6 = this; /*0x74ba66*/
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
  v6 = this; /*0x74baaf*/
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
    if ( *((unsigned char *)Block + 662) )
  {
        *(Block + 44) = 0;
        *(Block + 45) = 0;
  }
  ObjectTypeClass::Destruct(); /*0x74bb02*/
  if ( (a2 & 1) != 0 ) /*0x74bb0c*/
    RA2_OPDEL(); /*0x74bb0f*/
    return (VoxelAnimTypeClass *)Block;
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
      aP0->ObjectTypeClass = (void*)&VoxelAnimTypeClass_vftable; /*0x74b838*/
      *(void **)&aP0->vtable2 = (void*)&VoxelAnimTypeClass_vftable; /*0x74b83e*/
      *(void **)&aP0->vtable3 = (void*)&VoxelAnimTypeClass_vftable; /*0x74b845*/
      *(void **)&aP0->vtable4 = (void*)&VoxelAnimTypeClass_vftable; /*0x74b84c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->Warhead); /*0x74b85f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->BounceAnim); /*0x74b870*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->ExpireAnim); /*0x74b881*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->TrailerAnim); /*0x74b892*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->Spawns); /*0x74b8a3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->AttachedSystem); /*0x74b8b4*/
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
    if ( (ObjectTypeClass *)*((unsigned int *)this + 760) == aP1 )
        *((unsigned int *)this + 760) = 0;
    if ( (ObjectTypeClass *)*((unsigned int *)this + 740) == aP1 )
        *((unsigned int *)this + 740) = 0;
    if ( (ObjectTypeClass *)*((unsigned int *)this + 744) == aP1 )
        *((unsigned int *)this + 744) = 0;
    if ( (ObjectTypeClass *)*((unsigned int *)this + 748) == aP1 )
        *((unsigned int *)this + 748) = 0;
    if ( (ObjectTypeClass *)*((unsigned int *)this + 724) == aP1 )
        *((unsigned int *)this + 724) = 0;
    if ( (ObjectTypeClass *)*((unsigned int *)this + 764) == aP1 )
        *((unsigned int *)this + 764) = 0;
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
