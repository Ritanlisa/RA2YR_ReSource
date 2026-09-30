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
VoxelAnimTypeClass * VoxelAnimTypeClass::Constructor(char * Source)
{

  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x74ad89*/
  *((unsigned int *)this + 183) = -1; /*0x74ad93*/
  *((unsigned int *)this + 184) = -1; /*0x74ad99*/
  *((unsigned char *)this + 660) = 0; /*0x74ad9f*/
  *((unsigned char *)this + 661) = 0; /*0x74ada8*/
  *((unsigned char *)this + 662) = 0; /*0x74adae*/
  *((unsigned int *)this + 168) = -1610612736; /*0x74adb4*/
  *((unsigned int *)this + 170) = 0; /*0x74adbe*/
  *((unsigned int *)this + 172) = 484854086; /*0x74adc4*/
  *((unsigned int *)this + 174) = 0; /*0x74adce*/
  *((unsigned int *)this + 176) = 0; /*0x74add4*/
  *((unsigned int *)this + 178) = 0; /*0x74adda*/
  *((unsigned int *)this + 166) = 0; /*0x74ade1*/
  *((unsigned int *)this + 167) = 30; /*0x74ade7*/
  *((unsigned int *)this + 169) = 1072273817; /*0x74adf1*/
  *((unsigned int *)this + 171) = 0; /*0x74adfb*/
  *((unsigned int *)this + 173) = 1069962989; /*0x74ae01*/
  *((unsigned int *)this + 175) = 1074528256; /*0x74ae0b*/
  *((unsigned int *)this + 177) = 1075052544; /*0x74ae15*/
  *((unsigned int *)this + 179) = 1076756480; /*0x74ae1f*/
  *((unsigned char *)this + 720) = 0; /*0x74ae29*/
  *((unsigned int *)this + 181) = 0; /*0x74ae2f*/
  *((unsigned int *)this + 182) = 0; /*0x74ae35*/
  *((unsigned int *)this + 185) = 0; /*0x74ae3b*/
  *((unsigned int *)this + 186) = 0; /*0x74ae41*/
  *((unsigned int *)this + 187) = 0; /*0x74ae47*/
  *((unsigned int *)this + 188) = 0; /*0x74ae4d*/
  *((unsigned int *)this + 189) = 0; /*0x74ae53*/
  *((unsigned int *)this + 190) = 0; /*0x74ae59*/
  *((unsigned int *)this + 191) = 0; /*0x74ae5f*/
  *((unsigned char *)this + 768) = 0; /*0x74ae65*/
  *this = &VoxelAnimTypeClass::`vftable'; /*0x74ae6b*/
  *((unsigned int *)this + 1) = &VoxelAnimTypeClass::`vftable'; /*0x74ae71*/
  *((unsigned int *)this + 2) = &VoxelAnimTypeClass::`vftable'; /*0x74ae77*/
  *((unsigned int *)this + 3) = &VoxelAnimTypeClass::`vftable'; /*0x74ae7e*/
  AbstractClass::GenerateUniqueID((int)((unsigned int *)this + 1)); /*0x74ae85*/
  *((unsigned char *)this + 561) = 0; /*0x74ae8c*/
  *((unsigned char *)this + 564) = 1; /*0x74ae92*/
  *((unsigned char *)this + 559) = 1; /*0x74ae98*/
  *((unsigned char *)this + 560) = 1; /*0x74ae9e*/
  *((unsigned char *)this + 562) = 1; /*0x74aea4*/
  *((unsigned char *)this + 563) = 1; /*0x74aeaa*/
  *((unsigned char *)this + 565) = 0; /*0x74aeb0*/
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x74aeea*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v3 = MEMORY[0xB0F680]++; /*0x74aef7*/
    *((unsigned int *)MEMORY[0xB0F674] + v3) = this; /*0x74af06*/
  }
  if ( MEMORY[0xA8EB38] < MEMORY[0xA8EB30] /*0x74af3d*/
    || (MEMORY[0xA8EB35] || !MEMORY[0xA8EB30])
    && MEMORY[0xA8EB3C] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8EB28] + 8))(
         &MEMORY[0xA8EB28],
         MEMORY[0xA8EB30] + MEMORY[0xA8EB3C],
         0) )
  {
    v4 = MEMORY[0xA8EB38]++; /*0x74af4a*/
    *((unsigned int *)MEMORY[0xA8EB2C] + v4) = this; /*0x74af59*/
  }
  return this; /*0x74af5e*/

}
}
// 0x74B050
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::LoadFromINI(uint8_t *** a2)
{

  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  double Double_Overwrite; // st7
  double v9; // st7
  int Int_Overwrite; // eax
  double v11; // st7
  unsigned int v12; // eax
  unsigned int v13; // ecx
  double v14; // st7
  double v15; // rax
  double v16; // st7
  unsigned int *v17; // ecx
  unsigned int *v18; // eax
  int v19; // eax
  int v20; // edx
  int Index; // eax
  int v22; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // edx
  unsigned int *v25; // eax
  unsigned int *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  unsigned int *v32; // eax
  bool v33; // al
  unsigned int *TechnoType; // eax
  void *v36; // edi
  unsigned int *v37; // eax
  unsigned int *FileVXL; // eax
  double v39; // [esp-8h] [ebp-2A0h]
  double v40; // [esp-8h] [ebp-2A0h]
  char v41; // [esp-4h] [ebp-29Ch]
  unsigned int *v42; // [esp+10h] [ebp-288h]
  int v43; // [esp+10h] [ebp-288h]
  int v44; // [esp+10h] [ebp-288h]
  unsigned int *v45; // [esp+10h] [ebp-288h]
  unsigned int *v46; // [esp+10h] [ebp-288h]
  unsigned int *v47; // [esp+10h] [ebp-288h]
  int v48; // [esp+10h] [ebp-288h]
  unsigned int *v49; // [esp+10h] [ebp-288h]
  char v50; // [esp+15h] [ebp-283h]
  char v51; // [esp+16h] [ebp-282h]
  char v52; // [esp+17h] [ebp-281h]
  char Destination[88]; // [esp+18h] [ebp-280h] BYREF
  char v54[12]; // [esp+70h] [ebp-228h] BYREF
  int v55; // [esp+7Ch] [ebp-21Ch]
  char Buffer[512]; // [esp+98h] [ebp-200h] BYREF

  INIClass::ResetSection(a2); /*0x74b066*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74b08d*/
                     a2,
                     (unsigned __int8 *)((char *)this + 36),
                     (unsigned __int8 *)g_INI_Key_Normalized,
                     *((unsigned char *)this + 660));
  v5 = *((unsigned char *)this + 661); /*0x74b092*/
  *((unsigned char *)this + 660) = Bool_Overwrite; /*0x74b098*/
  v6 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aTranslucent, v5); /*0x74b0a7*/
  v41 = *((unsigned char *)this + 768); /*0x74b0b4*/
  *((unsigned char *)this + 661) = v6; /*0x74b0bb*/
  *((unsigned char *)this + 768) = INIClass::ReadBool_Overwrite( /*0x74b0c6*/
                             a2,
                             (unsigned __int8 *)((char *)this + 36),
                             (unsigned __int8 *)aIstiberium,
                             v41);
  v7 = INIClass::ReadBool_Overwrite( /*0x74b0db*/
         a2,
         (unsigned __int8 *)((char *)this + 36),
         (unsigned __int8 *)aIsmeteor,
         *((unsigned char *)this + 720));
  v39 = *(double *)((char *)this + 672); /*0x74b0ed*/
  *((unsigned char *)this + 720) = v7; /*0x74b0f6*/
  *(double *)((char *)this + 672) = INIClass::ReadDouble_Overwrite( /*0x74b101*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (unsigned __int8 *)g_INI_Key_Elasticity,
                              v39);
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x74b116*/
                       (int)a2,
                       (unsigned __int8 *)((char *)this + 36),
                       (unsigned __int8 *)aMinangularvelo,
                       -1.0);
  if ( Double_Overwrite != 0.0 ) /*0x74b126*/
    *(double *)((char *)this + 680) = Double_Overwrite * 0.01745277777777778; /*0x74b12e*/
  v9 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aMaxangularvelo, -1.0); /*0x74b147*/
  if ( v9 != 0.0 ) /*0x74b157*/
    *(double *)((char *)this + 688) = v9 * 0.01745277777777778; /*0x74b15f*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74b178*/
                    (int)a2,
                    (unsigned __int8 *)((char *)this + 36),
                    (unsigned __int8 *)aDuration,
                    *((unsigned int *)this + 167));
  v40 = *(double *)((char *)this + 696); /*0x74b18a*/
  *((unsigned int *)this + 167) = Int_Overwrite; /*0x74b193*/
  v11 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aMinzvel, v40); /*0x74b199*/
  v12 = *((unsigned int *)this + 177); /*0x74b19e*/
  v13 = *((unsigned int *)this + 176); /*0x74b1a4*/
  *(double *)((char *)this + 696) = v11; /*0x74b1aa*/
  v14 = INIClass::ReadDouble_Overwrite( /*0x74b1ba*/
          (int)a2,
          (unsigned __int8 *)((char *)this + 36),
          (unsigned __int8 *)aMaxzvel,
          COERCE_DOUBLE(__PAIR64__(v12, v13)));
  v15 = *(double *)((char *)this + 712); /*0x74b1c5*/
  *(double *)((char *)this + 704) = v14; /*0x74b1cb*/
  v16 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aMaxxyvel, v15); /*0x74b1db*/
  v17 = *(unsigned int **)((char *)this + 724); /*0x74b1e0*/
  *(double *)((char *)this + 712) = v16; /*0x74b1ea*/
  v42 = v17; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)g_INI_Key_Spawns,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v18 = globalHelper_04BB20(Destination, (int)&MEMORY[0x87F7E8][539856]); /*0x74b219*/
  }
  else
  {
    v18 = v42; /*0x74b220*/
  }
  *((unsigned int *)this + 181) = v18; /*0x74b224*/
  *((unsigned int *)this + 182) = INIClass::ReadInt_Overwrite( /*0x74b248*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (unsigned __int8 *)aSpawncount,
                              *((unsigned int *)this + 182));
  v52 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aSharebodydata, 0); /*0x74b25d*/
  v51 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aShareturretdat, 0); /*0x74b270*/
  v50 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aSharebarreldat, 0); /*0x74b27f*/
  v19 = INIClass::ReadInt_Overwrite( /*0x74b28c*/
          (int)a2,
          (unsigned __int8 *)((char *)this + 36),
          (unsigned __int8 *)aVoxelindex,
          *((unsigned int *)this + 166));
  v20 = *((unsigned int *)this + 183); /*0x74b291*/
  *((unsigned int *)this + 166) = v19; /*0x74b297*/
  v43 = v20; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          a2,
          (unsigned __int8 **)((char *)this + 36),
          (unsigned __int8 *)g_INI_Key_StartSound,
          (char *)&MEMORY[0x87F7E8][10719],
          Destination,
          128)
    || (Index = VocClass::FindIndex(Destination), Index == -1) )
  {
    Index = v43; /*0x74b2cf*/
  }
  v44 = *((unsigned int *)this + 184); /*0x74b2e8*/
  *((unsigned int *)this + 183) = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          a2,
          (unsigned __int8 **)((char *)this + 36),
          (unsigned __int8 *)g_INI_Key_StopSound,
          (char *)&MEMORY[0x87F7E8][10719],
          Destination,
          128)
    || (v22 = VocClass::FindIndex(Destination), v22 == -1) )
  {
    v22 = v44; /*0x74b311*/
  }
  *((unsigned int *)this + 184) = v22; /*0x74b31f*/
  v45 = *(unsigned int **)((char *)this + 740); /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)aBounceanim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v23 = AnimTypeClass::FindOrCreate(Destination); /*0x74b349*/
  }
  else
  {
    v23 = v45; /*0x74b350*/
  }
  v24 = *(unsigned int **)((char *)this + 744); /*0x74b354*/
  *((unsigned int *)this + 185) = v23; /*0x74b35a*/
  v46 = v24; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)aExpireanim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v25 = AnimTypeClass::FindOrCreate(Destination); /*0x74b388*/
  }
  else
  {
    v25 = v46; /*0x74b38f*/
  }
  v47 = *(unsigned int **)((char *)this + 748); /*0x74b3a8*/
  *((unsigned int *)this + 186) = v25; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)aTraileranim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v26 = AnimTypeClass::FindOrCreate(Destination); /*0x74b3c7*/
  }
  else
  {
    v26 = v47; /*0x74b3ce*/
  }
  *((unsigned int *)this + 187) = v26; /*0x74b3d2*/
  v27 = INIClass::ReadInt_Overwrite( /*0x74b3e7*/
          (int)a2,
          (unsigned __int8 *)((char *)this + 36),
          (unsigned __int8 *)g_INI_Key_Damage,
          *((unsigned int *)this + 188));
  v28 = *((unsigned int *)this + 189); /*0x74b3ec*/
  *((unsigned int *)this + 188) = v27; /*0x74b3f2*/
  v29 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aDamageradius, v28); /*0x74b401*/
  v30 = *((unsigned int *)this + 190); /*0x74b406*/
  *((unsigned int *)this + 189) = v29; /*0x74b40c*/
  v48 = v30; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)g_INI_Key_Warhead,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v31 = WarheadTypeClass::FindOrCreate(Destination); /*0x74b43a*/
  }
  else
  {
    v31 = v48; /*0x74b441*/
  }
  v49 = *(unsigned int **)((char *)this + 764); /*0x74b45a*/
  *((unsigned int *)this + 190) = v31; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         a2,
         (unsigned __int8 **)((char *)this + 36),
         (unsigned __int8 *)aAttachedsystem,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v32 = BuildingTypeClass::LoadOrGet(Destination); /*0x74b479*/
  }
  else
  {
    v32 = v49; /*0x74b480*/
  }
  *((unsigned int *)this + 191) = v32; /*0x74b484*/
  v33 = v52 || v50 || v51; /*0x74b4a6*/
  *((unsigned char *)this + 662) = v33; /*0x74b4ad*/
  if ( v33 ) /*0x74b4b3*/
  {
    TechnoType = (unsigned int *)INIEntry::GetTechnoType(a2, (unsigned __int8 *)((char *)this + 36), (unsigned __int8 *)aSharesource); /*0x74b4c1*/
    if ( !TechnoType ) /*0x74b4ca*/
    {
      *((unsigned int *)this + 44) = 0; /*0x74b555*/
      *((unsigned int *)this + 45) = 0; /*0x74b55b*/
      return 1; /*0x74b569*/
    }
    if ( v52 ) /*0x74b4d6*/
    {
      *((unsigned int *)this + 44) = TechnoType[44]; /*0x74b4de*/
      *((unsigned int *)this + 45) = TechnoType[45]; /*0x74b4ea*/
      return 1; /*0x74b4f8*/
    }
    if ( v51 ) /*0x74b501*/
    {
      *((unsigned int *)this + 44) = TechnoType[46]; /*0x74b509*/
      *((unsigned int *)this + 45) = TechnoType[47]; /*0x74b515*/
      return 1; /*0x74b523*/
    }
    if ( v50 ) /*0x74b52c*/
    {
      *((unsigned int *)this + 44) = TechnoType[48]; /*0x74b538*/
      *((unsigned int *)this + 45) = TechnoType[49]; /*0x74b544*/
      return 1; /*0x74b552*/
    }
  }
  else
  {
    _makepath(Buffer, 0, 0, (const char *)((char *)this + 504), g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct(Destination, Buffer); /*0x74b598*/
    v36 = *(void **)((char *)this + 176); /*0x74b59d*/
    if ( v36 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(*((unsigned int *)this + 44)); /*0x74b5a9*/
      __3_YAXPAX_Z(v36); /*0x74b5af*/
    }
    v37 = (unsigned int *)__2_YAPAXI_Z(28); /*0x74b5b9*/
    if ( v37 ) /*0x74b5c3*/
      FileVXL = File::LoadFileVXL(v37, (int)Destination, 0); /*0x74b5ce*/
    else
      FileVXL = 0; /*0x74b5d5*/
    *((unsigned int *)this + 44) = FileVXL; /*0x74b5db*/
    *(unsigned int *)Destination = &CCFileClass::`vftable'; /*0x74b5e1*/
    v55 = 0; /*0x74b5e9*/
    Vector::Clear((int)v54); /*0x74b5f1*/
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
  IDA_LOBYTE(v3) = *((unsigned char *)this + 660); /*0x74b69e*/
  Power::FlagProcess(a2, v3); /*0x74b6a7*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 661); /*0x74b6ac*/
  Power::FlagProcess(a2, v4); /*0x74b6b5*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 662); /*0x74b6ba*/
  Power::FlagProcess(a2, v5); /*0x74b6c3*/
  Power::TimerProcess(*((unsigned int *)this + 166)); /*0x74b6d1*/
  Power::TimerProcess(*((unsigned int *)this + 167)); /*0x74b6df*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 168), *((unsigned int *)this + 169)); /*0x74b6f4*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 170), *((unsigned int *)this + 171)); /*0x74b709*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 172), *((unsigned int *)this + 173)); /*0x74b71e*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 174), *((unsigned int *)this + 175)); /*0x74b733*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 176), *((unsigned int *)this + 177)); /*0x74b748*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 178), *((unsigned int *)this + 179)); /*0x74b75d*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 720); /*0x74b762*/
  Power::FlagProcess(a2, v6); /*0x74b76b*/
  Power::TimerProcess(*((unsigned int *)this + 182)); /*0x74b779*/
  Power::TimerProcess(*((unsigned int *)this + 183)); /*0x74b787*/
  Power::TimerProcess(*((unsigned int *)this + 184)); /*0x74b795*/
  Power::TimerProcess(*((unsigned int *)this + 188)); /*0x74b7a3*/
  Power::TimerProcess(*((unsigned int *)this + 189)); /*0x74b7b1*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 768); /*0x74b7b6*/
  return Power::FlagProcess(a2, v7); /*0x74b7c4*/

}
}
// 0x74BA30
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_VoxelAnimTypeClass; /*0x74ba36*/
  *(Block + 1) = &vt_VoxelAnimTypeClass; /*0x74ba3c*/
  *(Block + 2) = &vt_VoxelAnimTypeClass; /*0x74ba43*/
  *(Block + 3) = &vt_VoxelAnimTypeClass; /*0x74ba4a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x74ba51*/
  v6 = Block; /*0x74ba66*/
  v3 = (*(int (**)(int *, void ***))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v6); /*0x74ba6a*/
  if ( v3 != -1 && v3 < g_abs_B0F680 && v3 < --g_abs_B0F680 ) /*0x74ba85*/
  {
    do /*0x74ba9d*/
    {
      ++v3; /*0x74ba8d*/
      *((unsigned int *)g_abs_B0F674 + v3 - 1) = *((unsigned int *)g_abs_B0F674 + v3); /*0x74ba91*/
    }
    while ( v3 < g_abs_B0F680 ); /*0x74ba9d*/
  }
  v6 = Block; /*0x74baaf*/
  v4 = (*(int (**)(int *, void ***))(g_abs_A8EB28 + 16))(&g_abs_A8EB28, &v6); /*0x74bab3*/
  if ( v4 != -1 && v4 < g_abs_A8EB38 && v4 < --g_abs_A8EB38 ) /*0x74bace*/
  {
    do /*0x74bae6*/
    {
      ++v4; /*0x74bad6*/
      *((unsigned int *)g_abs_A8EB2C + v4 - 1) = *((unsigned int *)g_abs_A8EB2C + v4); /*0x74bada*/
    }
    while ( v4 < g_abs_A8EB38 ); /*0x74bae6*/
  }
  if ( *((unsigned char *)Block + 662) ) /*0x74bae8*/
  {
    *(Block + 44) = 0; /*0x74baf4*/
    *(Block + 45) = 0; /*0x74bafa*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x74bb02*/
  if ( (Block & 1) != 0 ) /*0x74bb0c*/
    OperatorDelete(Block); /*0x74bb0f*/
  return (VoxelAnimTypeClass *)Block; /*0x74bb19*/

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

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x74b81b*/
  if ( result >= 0 ) /*0x74b822*/
  {
    if ( aP0 ) /*0x74b82a*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x74b833*/
      *(unsigned int *)aP0->__pad_0 = &vt_VoxelAnimTypeClass; /*0x74b838*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_VoxelAnimTypeClass; /*0x74b83e*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_VoxelAnimTypeClass; /*0x74b845*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_VoxelAnimTypeClass; /*0x74b84c*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)aP0[1].Name); /*0x74b85f*/
    ObjectPtr::RegisterForTracking( /*0x74b870*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[19]);
    ObjectPtr::RegisterForTracking( /*0x74b881*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[23]);
    ObjectPtr::RegisterForTracking( /*0x74b892*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[27]);
    ObjectPtr::RegisterForTracking( /*0x74b8a3*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[3]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].Name[4]); /*0x74b8b4*/
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x74b8bb*/
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

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x74b8df*/
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

  result = (unsigned int)aP1; /*0x74b8f0*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 190) == aP1 ) /*0x74b8ff*/
    *((unsigned int *)this + 190) = 0; /*0x74b901*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 185) == aP1 ) /*0x74b90d*/
    *((unsigned int *)this + 185) = 0; /*0x74b90f*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 186) == aP1 ) /*0x74b91b*/
    *((unsigned int *)this + 186) = 0; /*0x74b91d*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 187) == aP1 ) /*0x74b929*/
    *((unsigned int *)this + 187) = 0; /*0x74b92b*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 181) == aP1 ) /*0x74b937*/
    *((unsigned int *)this + 181) = 0; /*0x74b939*/
  if ( (ObjectTypeClass *)*((unsigned int *)this + 191) == aP1 ) /*0x74b948*/
    *((unsigned int *)this + 191) = 0; /*0x74b94a*/
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
